; TIGAWIN.RLM .text, 12822 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_EnableBoard:
00000: 098f 026c                 MMTM   SP,A6,A9,A10,A12,A13
00020: 4dcd                      MOVE   A14,A13
00030: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
00050: 458c                      SUB    A12,A12
00060: 0550                      SETF   10h,0,0
00070: b188 00d0                 MOVE   A12,*A8(D0h),0
00090: 07aa 00b0 0000            MOVE   @B0h,A10,1
000c0: 07ac 0090 0000            MOVE   @90h,A12,1
000f0: 458a                      SUB    A12,A10
00100: 100a                      ADDK   20h,A10
00110: 2faa                      SRL    3h,A10
00120: 0b6a ffff ffef            CMPI   100000h,A10
00150: c906                      JRNC   1C0h
00160: 184c                      MOVK   2h,A12
00170: b506 00d0                 MOVE   *A8(D0h),A6,0
00190: 5586                      OR     A12,A6
001a0: b0c8 00d0                 MOVE   A6,*A8(D0h),0
001c0: 182c                      MOVK   1h,A12
001d0: 058c 4360 0003            MOVE   A12,@34360h,0
00200: 07a6 0050 0000            MOVE   @50h,A6,1
00230: 1f66                      BTST   4h,A6
00240: ca0e                      JREQ   330h
00250: 1848                      MOVK   2h,A8
00260: 0588 4360 0003            MOVE   A8,@34360h,0
00290: 05ac 02c0 0000            MOVE   @2C0h,A12,0
002c0: 1fec                      BTST   0h,A12
002d0: ca05                      JREQ   330h
002e0: 1906                      MOVK   8h,A6
002f0: 5506                      OR     A8,A6
00300: 0586 4360 0003            MOVE   A6,@34360h,0
00330: 09ec 0110 c000            MOVI   C0000110h,A12
00360: 8586                      MOVE   *A12,A6,0
00370: 0b86 0400 0000            ANDI   FFFFFBFFh,A6
003a0: 80cc                      MOVE   A6,*A12,0
003b0: a3cf                      MOVE   A14,-*SP,1
003c0: 1946                      MOVK   Ah,A6
003d0: 92ce                      MOVE   A6,*A14+,1
003e0: 0d5f 0000 0000            CALLA  0h
00410: 0788 4380 0003            MOVE   A8,@34380h,1
00440: 0570                      SETF   10h,1,0
00450: 05a6 22c0 0003            MOVE   @322C0h,A6,0
00480: cb7b                      JRNE   C40h
00490: 182c                      MOVK   1h,A12
004a0: 058c 22c0 0003            MOVE   A12,@322C0h,0
004d0: 09e6 01d0 c000            MOVI   C00001D0h,A6
00500: 0786 53a0 0003            MOVE   A6,@353A0h,1
00530: 09e8 0070 c000            MOVI   C0000070h,A8
00560: 0788 6400 0006            MOVE   A8,@66400h,1
00590: 1408                      SUBK   20h,A8
005a0: 0788 66a0 0006            MOVE   A8,@666A0h,1
005d0: 1208                      ADDK   10h,A8
005e0: 0788 6660 0006            MOVE   A8,@66660h,1
00610: 0550                      SETF   10h,0,0
00620: 05ac 4360 0003            MOVE   @34360h,A12,0
00650: 1fcc                      BTST   1h,A12
00660: ca11                      JREQ   780h
00670: 1606                      SUBK   10h,A6
00680: 0786 53a0 0003            MOVE   A6,@353A0h,1
006b0: 0788 6400 0006            MOVE   A8,@66400h,1
006e0: 09ec 0020 c000            MOVI   C0000020h,A12
00710: 078c 66a0 0006            MOVE   A12,@666A0h,1
00740: 1408                      SUBK   20h,A8
00750: 0788 6660 0006            MOVE   A8,@66660h,1
00780: 458c                      SUB    A12,A12
00790: 058c 6640 0006            MOVE   A12,@66640h,0
007c0: 05c0 01c0 0000 6480 0006  MOVE   @1C0h,@66480h,0
00810: 05c0 01b0 0000 6500 0006  MOVE   @1B0h,@66500h,0
00860: 05c0 01f0 0000 4370 0003  MOVE   @1F0h,@34370h,0
008b0: 07c0 0190 0000 64a0 0006  MOVE   @190h,@664A0h,1
00900: 05a8 4360 0003            MOVE   @34360h,A8,0
00930: 1fc8                      BTST   1h,A8
00940: ca08                      JREQ   9D0h
00950: 07a8 0000 0000            MOVE   @0h,A8,1
00980: 8708                      MOVE   *A8,A8,1
00990: 0788 64c0 0006            MOVE   A8,@664C0h,1
009c0: c007                      JR     A40h
009d0: 07a8 0000 0000            MOVE   @0h,A8,1
00a00: 8708                      MOVE   *A8,A8,1
00a10: 0788 64c0 0006            MOVE   A8,@664C0h,1
00a40: 0570                      SETF   10h,1,0
00a50: 05a8 6500 0006            MOVE   @66500h,A8,0
00a80: 1428                      DEC    A8
00a90: 2608                      SLL    10h,A8
00aa0: 05a6 6480 0006            MOVE   @66480h,A6,0
00ad0: 1426                      DEC    A6
00ae0: 54c8                      OR     A6,A8
00af0: 0788 64e0 0006            MOVE   A8,@664E0h,1
00b20: 0d5f 59e0 0002            CALLA  259E0h
00b50: 0d5f 5800 0001            CALLA  15800h
00b80: 0d5f 4e20 0002            CALLA  24E20h
00bb0: 0d5f 1620 0000            CALLA  1620h
00be0: 0d5f 1770 0000            CALLA  1770h
00c10: 0d5f 1b90 0000            CALLA  1B90h
00c40: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
00c60: 07a6 2160 0003            MOVE   @32160h,A6,1
00c90: b2cc 0010                 MOVE   A6,*A12(10h),1
00cb0: 07a8 2300 0003            MOVE   @32300h,A8,1
00ce0: b30c 0030                 MOVE   A8,*A12(30h),1
00d00: 0550                      SETF   10h,0,0
00d10: 05a8 4370 0003            MOVE   @34370h,A8,0
00d40: b10c 0050                 MOVE   A8,*A12(50h),0
00d60: 0570                      SETF   10h,1,0
00d70: 05a8 6480 0006            MOVE   @66480h,A8,0
00da0: b10c 0060                 MOVE   A8,*A12(60h),0
00dc0: 05a8 6500 0006            MOVE   @66500h,A8,0
00df0: b10c 0070                 MOVE   A8,*A12(70h),0
00e10: 07a8 2180 0003            MOVE   @32180h,A8,1
00e40: b30c 0080                 MOVE   A8,*A12(80h),1
00e60: 07a8 64a0 0006            MOVE   @664A0h,A8,1
00e90: b10c 00a0                 MOVE   A8,*A12(A0h),0
00eb0: 07a8 64c0 0006            MOVE   @664C0h,A8,1
00ee0: b30c 00b0                 MOVE   A8,*A12(B0h),1
00f00: 05a8 21f0 0003            MOVE   @321F0h,A8,0
00f30: 1828                      MOVK   1h,A8
00f40: ca01                      JREQ   F60h
00f50: 4508                      SUB    A8,A8
00f60: 0550                      SETF   10h,0,0
00f70: b586 00d0                 MOVE   *A12(D0h),A6,0
00f90: 5506                      OR     A8,A6
00fa0: b0cc 00d0                 MOVE   A6,*A12(D0h),0
00fc0: 0570                      SETF   10h,1,0
00fd0: 05a6 21f0 0003            MOVE   @321F0h,A6,0
01000: 1828                      MOVK   1h,A8
01010: ca01                      JREQ   1030h
01020: 4508                      SUB    A8,A8
01030: b7ee 00c0                 MOVE   *SP(C0h),A14,1
01050: 09af 3640                 MMFM   SP,A6,A9,A10,A12,A13
01070: 0962                      RETS   2h

_DisableBoard:
01080: 098f 0064                 MMTM   SP,A9,A10,A13
010a0: 4dcd                      MOVE   A14,A13
010b0: b7a9 ffe0                 MOVE   *A13(FFE0h),A9,1
010d0: a3cf                      MOVE   A14,-*SP,1
010e0: d60e 4380 0003            MOVE   @34380h,*A14+,1
01110: 1948                      MOVK   Ah,A8
01120: 930e                      MOVE   A8,*A14+,1
01130: 0d5f 0000 0000            CALLA  0h
01160: c046                      JR     15D0h
01170: 4d48                      MOVE   A10,A8
01180: 24a8                      SLL    5h,A8
01190: 0b28 6540 0006            ADDI   66540h,A8
011c0: 8708                      MOVE   *A8,A8,1
011d0: ca0a                      JREQ   1280h
011e0: a3cf                      MOVE   A14,-*SP,1
011f0: 4d48                      MOVE   A10,A8
01200: 24a8                      SLL    5h,A8
01210: 0b28 6540 0006            ADDI   66540h,A8
01240: 9b0e                      MOVE   *A8+,*A14+,1
01250: 0d5f 0000 0000            CALLA  0h
01280: 102a                      INC    A10
01290: 0b4a fff7                 CMPI   8h,A10
012b0: c8eb                      JRC    1170h
012c0: 4508                      SUB    A8,A8
012d0: 0550                      SETF   10h,0,0
012e0: 0588 2320 0003            MOVE   A8,@32320h,0
01310: 0570                      SETF   10h,1,0
01320: 05a8 21c0 0003            MOVE   @321C0h,A8,0
01350: ca09                      JREQ   13F0h
01360: 07a8 2160 0003            MOVE   @32160h,A8,1
01390: ca05                      JREQ   13F0h
013a0: a3cf                      MOVE   A14,-*SP,1
013b0: 930e                      MOVE   A8,*A14+,1
013c0: 0d5f 0000 0000            CALLA  0h
013f0: 0570                      SETF   10h,1,0
01400: 05a8 21d0 0003            MOVE   @321D0h,A8,0
01430: ca09                      JREQ   14D0h
01440: 07a8 21a0 0003            MOVE   @321A0h,A8,1
01470: ca05                      JREQ   14D0h
01480: a3cf                      MOVE   A14,-*SP,1
01490: 930e                      MOVE   A8,*A14+,1
014a0: 0d5f 0000 0000            CALLA  0h
014d0: 0570                      SETF   10h,1,0
014e0: 05a8 21e0 0003            MOVE   @321E0h,A8,0
01510: ca0b                      JREQ   15D0h
01520: 07a8 2180 0003            MOVE   @32180h,A8,1
01550: ca07                      JREQ   15D0h
01560: a3cf                      MOVE   A14,-*SP,1
01570: d60e 21a0 0003            MOVE   @321A0h,*A14+,1
015a0: 0d5f 0000 0000            CALLA  0h
015d0: b7ee 0080                 MOVE   *SP(80h),A14,1
015f0: 09af 2600                 MMFM   SP,A9,A10,A13
01610: 0962                      RETS   2h

_InitFonts:
01620: 098f 0048                 MMTM   SP,A9,A12
01640: 4529                      SUB    A9,A9
01650: 4d28                      MOVE   A9,A8
01660: 24a8                      SLL    5h,A8
01670: 0b28 6540 0006            ADDI   66540h,A8
016a0: 458c                      SUB    A12,A12
016b0: 8388                      MOVE   A12,*A8,1
016c0: 1029                      INC    A9
016d0: 0b49 fff7                 CMPI   8h,A9
016f0: c8f5                      JRC    1650h
01700: 0550                      SETF   10h,0,0
01710: 058c 2320 0003            MOVE   A12,@32320h,0
01740: 09af 1200                 MMFM   SP,A9,A12
01760: 0960                      RETS   

_InitSpanSrv:
01770: 09e8 bfa0 0000            MOVI   BFA0h,A8
017a0: 0788 22e0 0003            MOVE   A8,@322E0h,1
017d0: 0550                      SETF   10h,0,0
017e0: 05a8 4360 0003            MOVE   @34360h,A8,0
01810: 1fc8                      BTST   1h,A8
01820: ca06                      JREQ   1890h
01830: 09e8 0c00 0001            MOVI   10C00h,A8
01860: 0788 22e0 0003            MOVE   A8,@322E0h,1
01890: 07a8 22e0 0003            MOVE   @322E0h,A8,1
018c0: 8708                      MOVE   *A8,A8,1
018d0: 0788 63e0 0003            MOVE   A8,@363E0h,1
01900: 07a8 22e0 0003            MOVE   @322E0h,A8,1
01930: b708 0020                 MOVE   *A8(20h),A8,1
01950: 0788 2340 0003            MOVE   A8,@32340h,1
01980: 07a8 22e0 0003            MOVE   @322E0h,A8,1
019b0: b708 0040                 MOVE   *A8(40h),A8,1
019d0: 0788 63c0 0003            MOVE   A8,@363C0h,1
01a00: 07a8 22e0 0003            MOVE   @322E0h,A8,1
01a30: b708 0060                 MOVE   *A8(60h),A8,1
01a50: 0788 6460 0006            MOVE   A8,@66460h,1
01a80: 07a8 22e0 0003            MOVE   @322E0h,A8,1
01ab0: b708 0080                 MOVE   *A8(80h),A8,1
01ad0: 0788 6520 0006            MOVE   A8,@66520h,1
01b00: 07a8 22e0 0003            MOVE   @322E0h,A8,1
01b30: b708 00a0                 MOVE   *A8(A0h),A8,1
01b50: 0788 6420 0006            MOVE   A8,@66420h,1
01b80: 0960                      RETS   

_BufAlloc:
01b90: 098f 0070                 MMTM   SP,A9-A11
01bb0: 07aa 0000 0000            MOVE   @0h,A10,1
01be0: a3cf                      MOVE   A14,-*SP,1
01bf0: 0570                      SETF   10h,1,0
01c00: 05a8 6480 0006            MOVE   @66480h,A8,0
01c30: 0550                      SETF   10h,0,0
01c40: 05ab 4370 0003            MOVE   @34370h,A11,0
01c70: 5d0b                      MPYS   A8,A11
01c80: 2bab                      SRA    3h,A11
01c90: 936e                      MOVE   A11,*A14+,1
01ca0: 0d5f 0000 0000            CALLA  0h
01cd0: 0788 21a0 0003            MOVE   A8,@321A0h,1
01d00: a3cf                      MOVE   A14,-*SP,1
01d10: 0550                      SETF   10h,0,0
01d20: 05ab 4370 0003            MOVE   @34370h,A11,0
01d50: 24cb                      SLL    6h,A11
01d60: 2bab                      SRA    3h,A11
01d70: 936e                      MOVE   A11,*A14+,1
01d80: 0d5f 0000 0000            CALLA  0h
01db0: 0788 2180 0003            MOVE   A8,@32180h,1
01de0: 182b                      MOVK   1h,A11
01df0: 0570                      SETF   10h,1,0
01e00: 058b 21d0 0003            MOVE   A11,@321D0h,0
01e30: 058b 21e0 0003            MOVE   A11,@321E0h,0
01e60: 05a9 0270 0000            MOVE   @270h,A9,0
01e90: ca34                      JREQ   21E0h
01ea0: 4d28                      MOVE   A9,A8
01eb0: 1429                      DEC    A9
01ec0: 0509                      SEXT   A9,0
01ed0: 4d08                      MOVE   A8,A8
01ee0: ca2f                      JREQ   21E0h
01ef0: 0550                      SETF   10h,0,0
01f00: b54b 0020                 MOVE   *A10(20h),A11,0
01f20: 05a8 4370 0003            MOVE   @34370h,A8,0
01f50: 5d0b                      MPYS   A8,A11
01f60: 078b 2300 0003            MOVE   A11,@32300h,1
01f90: 07a8 0190 0000            MOVE   @190h,A8,1
01fc0: 490b                      CMP    A8,A11
01fd0: cb19                      JRNE   2170h
01fe0: 2fab                      SRL    3h,A11
01ff0: b548 0030                 MOVE   *A10(30h),A8,0
02010: 5f0b                      MPYU   A8,A11
02020: 078b 2300 0003            MOVE   A11,@32300h,1
02050: 0b6b ffff fffe            CMPI   10000h,A11
02080: c80e                      JRC    2170h
02090: 8748                      MOVE   *A10,A8,1
020a0: 0788 2160 0003            MOVE   A8,@32160h,1
020d0: cb10                      JRNE   21E0h
020e0: 1008                      ADDK   20h,A8
020f0: 0788 2160 0003            MOVE   A8,@32160h,1
02120: 148b                      SUBK   4h,A11
02130: 078b 2300 0003            MOVE   A11,@32300h,1
02160: c007                      JR     21E0h
02170: 0b0a 0040                 ADDI   40h,A10
02190: 4d28                      MOVE   A9,A8
021a0: 1429                      DEC    A9
021b0: 0509                      SEXT   A9,0
021c0: 4d08                      MOVE   A8,A8
021d0: cbd2                      JRNE   1F00h
021e0: 07a8 2160 0003            MOVE   @32160h,A8,1
02210: cb2e                      JRNE   2500h
02220: 0d5f 0000 0000            CALLA  0h
02250: 0788 2300 0003            MOVE   A8,@32300h,1
02280: 0b68 ffff fffd            CMPI   20000h,A8
022b0: c807                      JRC    2330h
022c0: 09eb 0000 0001            MOVI   10000h,A11
022f0: 078b 2300 0003            MOVE   A11,@32300h,1
02320: c004                      JR     2370h
02330: 2fe8                      SRL    1h,A8
02340: 0788 2300 0003            MOVE   A8,@32300h,1
02370: 07a8 2300 0003            MOVE   @32300h,A8,1
023a0: 0b68 7fff ffff            CMPI   8000h,A8
023d0: c905                      JRNC   2430h
023e0: 182b                      MOVK   1h,A11
023f0: 0570                      SETF   10h,1,0
02400: 058b 21f0 0003            MOVE   A11,@321F0h,0
02430: a3cf                      MOVE   A14,-*SP,1
02440: 930e                      MOVE   A8,*A14+,1
02450: 0d5f 0000 0000            CALLA  0h
02480: 0788 2160 0003            MOVE   A8,@32160h,1
024b0: 182b                      MOVK   1h,A11
024c0: 0570                      SETF   10h,1,0
024d0: 058b 21c0 0003            MOVE   A11,@321C0h,0
02500: 09af 0e00                 MMFM   SP,A9-A11
02520: 0960                      RETS   
02530: 0000                      DW     0000h

_BBcont:
02540: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
02560: 099f 1e00                 MMTM   SP,B3-B6
02580: a7c9                      MOVE   -*A14,A9,1
02590: 0550                      SETF   10h,0,0
025a0: 8529                      MOVE   *A9,A9,0
025b0: 09ee 68e0 0006            MOVI   668E0h,A14
025e0: b12e 0110                 MOVE   A9,*A14(110h),0
02600: 0546                      SETF   6h,0,0
02610: 4fce                      MOVE   A14,B14
02620: b5d5 0100                 MOVE   *B14(100h),B5,0
02640: 0bb5 1000 0000            ORI    1000h,B5
02670: 5684                      CLR    A4
02680: 0550                      SETF   10h,0,0
02690: c034                      JR     29E0h

_BBstart:
026a0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
026c0: 099f 1e00                 MMTM   SP,B3-B6
026e0: a7ce                      MOVE   -*A14,A14,1
026f0: 0546                      SETF   6h,0,0
02700: 4fce                      MOVE   A14,B14
02710: b5d5 0100                 MOVE   *B14(100h),B5,0
02730: 07a4 2180 0003            MOVE   @32180h,A4,1
02760: 0784 66c0 0006            MOVE   A4,@666C0h,1
02790: 1f95                      BTST   3h,B5
027a0: cb03                      JRNE   27E0h
027b0: 1fb5                      BTST   2h,B5
027c0: cb01                      JRNE   27E0h
027d0: 5684                      CLR    A4
027e0: 05a5 0150 c000            MOVE   @C0000150h,A5,0
02810: 1fe5                      BTST   0h,A5
02820: ca08                      JREQ   28B0h
02830: 0b95 0030 0000            ANDI   FFFFFFCFh,B5
02860: 1f95                      BTST   3h,B5
02870: ca01                      JREQ   2890h
02880: 1495                      SUBK   4h,B5
02890: b0be 0100                 MOVE   B5,*B14(100h),0
028b0: 0550                      SETF   10h,0,0
028c0: b5c9 0110                 MOVE   *A14(110h),A9,0
028e0: b5ca 0090                 MOVE   *A14(90h),A10,0
02900: 492a                      CMP    A9,A10
02910: ca0c                      JREQ   29E0h
02920: 0bb5 1000 0000            ORI    1000h,B5
02950: 4dca                      MOVE   A14,A10
02960: 09ee 68e0 0006            MOVI   668E0h,A14
02990: 4fce                      MOVE   A14,B14
029a0: 4dcb                      MOVE   A14,A11
029b0: 1ad6                      MOVK   16h,B6
029c0: 994b                      MOVE   *A10+,*A11+,0
029d0: 3c56                      DSJS   B6,29C0h
029e0: 0542                      SETF   2h,0,0
029f0: 5642                      CLR    A2
02a00: 0582 00b6 c000            MOVE   A2,@C00000B6h,0
02a30: 0550                      SETF   10h,0,0
02a40: 05a9 4360 0003            MOVE   @34360h,A9,0
02a70: 1f89                      BTST   3h,A9
02a80: cb03                      JRNE   2AC0h
02a90: 0bb5 0000 8000            ORI    80000000h,B5
02ac0: b7c2 0000                 MOVE   *A14(0h),A2,1
02ae0: ca03                      JREQ   2B20h
02af0: 0bb5 0200 8000            ORI    80000200h,B5
02b20: b7c0 0040                 MOVE   *A14(40h),A0,1
02b40: ca03                      JREQ   2B80h
02b50: 0bb5 0100 0000            ORI    100h,B5
02b80: 1020                      INC    A0
02b90: ca03                      JREQ   2BD0h
02ba0: 0bb5 0080 0000            ORI    80h,B5
02bd0: 1420                      DEC    A0
02be0: 05a5 0150 c000            MOVE   @C0000150h,A5,0
02c10: 6aa8                      LMO    A5,A8
02c20: 0bc8 001f 0000            XORI   1Fh,A8
02c50: 1ed5                      BTST   9h,B5
02c60: cb05                      JRNE   2CC0h
02c70: 4e73                      MOVE   B3,A3
02c80: b7c2 0020                 MOVE   *A14(20h),A2,1
02ca0: e842                      CVXYL  A2,A2
02cb0: c010                      JR     2DC0h
02cc0: b5cc 0080                 MOVE   *A14(80h),A12,0
02ce0: b5c3 0020                 MOVE   *A14(20h),A3,0
02d00: 1f55                      BTST   5h,B5
02d10: ca02                      JREQ   2D40h
02d20: 630c                      SLL    A8,A12
02d30: 6303                      SLL    A8,A3
02d40: 19e9                      MOVK   Fh,A9
02d50: 5123                      AND    A9,A3
02d60: b7c2 0000                 MOVE   *A14(0h),A2,1
02d80: 4062                      ADD    A3,A2
02d90: 4183                      ADD    A12,A3
02da0: 11e3                      ADDK   Fh,A3
02db0: 5323                      ANDN   A9,A3
02dc0: 1f15                      BTST   7h,B5
02dd0: ca17                      JREQ   2F50h
02de0: 1ef5                      BTST   8h,B5
02df0: cb05                      JRNE   2E50h
02e00: 4e71                      MOVE   B3,A1
02e10: b7c0 0060                 MOVE   *A14(60h),A0,1
02e30: e800                      CVXYL  A0,A0
02e40: c010                      JR     2F50h
02e50: b5cc 0080                 MOVE   *A14(80h),A12,0
02e70: b5c1 0060                 MOVE   *A14(60h),A1,0
02e90: 1f75                      BTST   4h,B5
02ea0: ca02                      JREQ   2ED0h
02eb0: 630c                      SLL    A8,A12
02ec0: 6301                      SLL    A8,A1
02ed0: 19e9                      MOVK   Fh,A9
02ee0: 5121                      AND    A9,A1
02ef0: b7c0 0040                 MOVE   *A14(40h),A0,1
02f10: 4020                      ADD    A1,A0
02f20: 4181                      ADD    A12,A1
02f30: 11e1                      ADDK   Fh,A1
02f40: 5321                      ANDN   A9,A1
02f50: b5cb 00b0                 MOVE   *A14(B0h),A11,0
02f70: 0b4b ff33                 CMPI   CCh,A11
02f90: cb0c                      JRNE   3060h
02fa0: 4cb4                      MOVE   B5,B4
02fb0: 2ff4                      SRL    1h,B4
02fc0: 56b4                      XOR    B5,B4
02fd0: 1ef4                      BTST   8h,B4
02fe0: ca07                      JREQ   3060h
02ff0: 1f75                      BTST   4h,B5
03000: ca05                      JREQ   3060h
03010: 05a9 6440 0006            MOVE   @66440h,A9,0
03040: cb00 0111                 JRNE   4170h
03060: 09e9 3100 0000            MOVI   3100h,A9
03090: 4169                      ADD    A11,A9
030a0: 0541                      SETF   1h,0,0
030b0: 8529                      MOVE   *A9,A9,0
030c0: 0550                      SETF   10h,0,0
030d0: cb12                      JRNE   3200h
030e0: c000 0126                 JR     4360h
03100: 8421                      MOVE   *A1,A1,0
03110: 0002                      DW     0002h
03120: 0004                      DW     0004h
03130: 0008                      DW     0008h
03140: 0010                      DW     0010h
03150: 8421                      MOVE   *A1,A1,0
03160: 0040                      IDLE   
03170: 0080                      MWAIT  
03180: 0100                      EMU    
03190: 0200                      DW     0200h
031a0: 8421                      MOVE   *A1,A1,0
031b0: 0800                      TRAPL  
031c0: 1000                      ADDK   20h,A0
031d0: 2000                      SLA    0h,A0
031e0: 4000                      ADD    A0,A0
031f0: 8421                      MOVE   *A1,A1,0
03200: 4fce                      MOVE   A14,B14
03210: b7cd 0100                 MOVE   *A14(100h),A13,1
03230: b5c9 0080                 MOVE   *A14(80h),A9,0
03250: ed2d                      MOVX   A9,A13
03260: 4fa7                      MOVE   A13,B7
03270: 4d69                      MOVE   A11,A9
03280: 2f89                      SRL    4h,A9
03290: 5769                      XOR    A11,A9
032a0: 2789                      SLL    1Ch,A9
032b0: cb00 0097                 JRNE   3C40h
032d0: 4d69                      MOVE   A11,A9
032e0: 2fc9                      SRL    2h,A9
032f0: 5769                      XOR    A11,A9
03300: 27c9                      SLL    1Eh,A9
03310: cb24                      JRNE   3560h
03320: 4e42                      MOVE   A2,B2
03330: 4e63                      MOVE   A3,B3
03340: 1f55                      BTST   5h,B5
03350: cb07                      JRNE   33D0h
03360: 1829                      MOVK   1h,A9
03370: 0589 0150 c000            MOVE   A9,@C0000150h,0
033a0: 05a9 0150 c000            MOVE   @C0000150h,A9,0
033d0: 4d69                      MOVE   A11,A9
033e0: 2fe9                      SRL    1h,A9
033f0: 4739                      SUBB   B9,B9
03400: 5769                      XOR    A11,A9
03410: 27e9                      SLL    1Fh,A9
03420: cb08                      JRNE   34B0h
03430: 1c15                      BTST   1Fh,B5
03440: ca02                      JREQ   3470h
03450: 0fc0                      FILL   L
03460: c002                      JR     3490h
03470: 0a00                      VLCOL  
03480: 0a57                      VFILL  L
03490: c000 0372                 JR     6BD0h
034b0: 0545                      SETF   5h,0,0
034c0: 1949                      MOVK   Ah,A9
034d0: 0589 00ba c000            MOVE   A9,@C00000BAh,0
03500: 05a9 00ba c000            MOVE   @C00000BAh,A9,0
03530: 0fc0                      FILL   L
03540: c000 0367                 JR     6BD0h
03560: 1f55                      BTST   5h,B5
03570: cb07                      JRNE   35F0h
03580: 1f75                      BTST   4h,B5
03590: cb00 00db                 JRNE   4360h
035b0: 1829                      MOVK   1h,A9
035c0: 0589 0150 c000            MOVE   A9,@C0000150h,0
035f0: 1989                      MOVK   Ch,A9
03600: 5769                      XOR    A11,A9
03610: 2fc9                      SRL    2h,A9
03620: 0544                      SETF   4h,0,0
03630: 0529                      ZEXT   A9,0
03640: ca03                      JREQ   3680h
03650: 0bb5 0000 8000            ORI    80000000h,B5
03680: 0589 00ba c000            MOVE   A9,@C00000BAh,0
036b0: 1f55                      BTST   5h,B5
036c0: ca1b                      JREQ   3880h
036d0: 1f75                      BTST   4h,B5
036e0: cb19                      JRNE   3880h
036f0: 4e42                      MOVE   A2,B2
03700: 4e63                      MOVE   A3,B3
03710: 4e00                      MOVE   A0,B0
03720: 4e21                      MOVE   A1,B1
03730: 1c15                      BTST   1Fh,B5
03740: ca07                      JREQ   37C0h
03750: b7d8 00c0                 MOVE   *B14(C0h),B8,1
03770: b7d9 00e0                 MOVE   *B14(E0h),B9,1
03790: 0f80                      PIXBLT B,L
037a0: c000 0341                 JR     6BD0h

_vblt_break:
037c0: b7d9 00c0                 MOVE   *B14(C0h),B9,1
037e0: 0a00                      VLCOL  
037f0: 0a57                      VFILL  L
03800: b7d9 00e0                 MOVE   *B14(E0h),B9,1
03820: 0a00                      VLCOL  
03830: 4e42                      MOVE   A2,B2
03840: 4e00                      MOVE   A0,B0
03850: 0857                      VBLT   B,L
03860: c000 0335                 JR     6BD0h
03880: 4e42                      MOVE   A2,B2
03890: 4e63                      MOVE   A3,B3
038a0: 4e00                      MOVE   A0,B0
038b0: 4e21                      MOVE   A1,B1
038c0: 1ef5                      BTST   8h,B5
038d0: cb30                      JRNE   3BE0h
038e0: 1ed5                      BTST   9h,B5
038f0: cb2e                      JRNE   3BE0h
03900: b7c9 0060                 MOVE   *A14(60h),A9,1
03920: b7ca 0020                 MOVE   *A14(20h),A10,1
03940: e52a                      CMPXY  A9,A10
03950: c828                      JRC    3BE0h
03960: ca0f                      JREQ   3A60h
03970: e1a9                      ADDXY  A13,A9
03980: e52a                      CMPXY  A9,A10
03990: c924                      JRNC   3BE0h
039a0: cd23                      JRNV   3BE0h
039b0: e3a9                      SUBXY  A13,A9
039c0: e3a9                      SUBXY  A13,A9
039d0: e549                      CMPXY  A10,A9
039e0: cd1f                      JRNV   3BE0h
039f0: 2e0d                      SRL    10h,A13
03a00: 142d                      DEC    A13
03a10: 5c6d                      MPYS   A3,A13
03a20: 41a0                      ADD    A13,A0
03a30: 41a2                      ADD    A13,A2
03a40: 1849                      MOVK   2h,A9
03a50: c00c                      JR     3B20h
03a60: cc17                      JRV    3BE0h
03a70: ce16                      JRN    3BE0h
03a80: e1a9                      ADDXY  A13,A9
03a90: e52a                      CMPXY  A9,A10
03aa0: cd13                      JRNV   3BE0h
03ab0: 574a                      CLR    A10
03ac0: edaa                      MOVX   A13,A10
03ad0: 630a                      SLL    A8,A10
03ae0: 4140                      ADD    A10,A0
03af0: 4142                      ADD    A10,A2
03b00: 1829                      MOVK   1h,A9
03b10: 0300                      NOP    
03b20: 0542                      SETF   2h,0,0
03b30: 0589 00b8 c000            MOVE   A9,@C00000B8h,0
03b60: 05a9 00b8 c000            MOVE   @C00000B8h,A9,0
03b90: 4e00                      MOVE   A0,B0
03ba0: 4e42                      MOVE   A2,B2
03bb0: 0f00                      PIXBLT L,L
03bc0: c000 02ff                 JR     6BD0h
03be0: 05a9 00ba c000            MOVE   @C00000BAh,A9,0
03c10: 0f00                      PIXBLT L,L
03c20: c000 02f9                 JR     6BD0h
03c40: 4d69                      MOVE   A11,A9
03c50: 03e9                      NOT    A9
03c60: 2509                      SLL    8h,A9
03c70: 5569                      OR     A11,A9
03c80: 2f49                      SRL    6h,A9
03c90: 03e9                      NOT    A9
03ca0: 0544                      SETF   4h,0,0
03cb0: 0529                      ZEXT   A9,0
03cc0: ca03                      JREQ   3D00h
03cd0: 0bb5 0000 8000            ORI    80000000h,B5
03d00: 0589 00ba c000            MOVE   A9,@C00000BAh,0
03d30: 0550                      SETF   10h,0,0
03d40: 19da                      MOVK   Eh,B10
03d50: 50ba                      AND    B5,B10
03d60: cb0e                      JRNE   3E50h
03d70: b7d9 0120                 MOVE   *B14(120h),B9,1
03d90: 1f55                      BTST   5h,B5
03da0: cb06                      JRNE   3E10h
03db0: 1829                      MOVK   1h,A9
03dc0: 0589 0150 c000            MOVE   A9,@C0000150h,0
03df0: 2ff9                      SRL    1h,B9
03e00: 4739                      SUBB   B9,B9
03e10: 4e42                      MOVE   A2,B2
03e20: 4e63                      MOVE   A3,B3
03e30: c000 ff5e                 JR     3430h
03e50: 0b5a fffd                 CMPI   2h,B10
03e70: ca21                      JREQ   4090h
03e80: 07b0 2180 0003            MOVE   @32180h,B0,1
03eb0: 1f55                      BTST   5h,B5
03ec0: cb06                      JRNE   3F30h
03ed0: 1f95                      BTST   3h,B5
03ee0: cb1a                      JRNE   4090h
03ef0: 1829                      MOVK   1h,A9
03f00: 0589 0150 c000            MOVE   A9,@C0000150h,0
03f30: b7da 0020                 MOVE   *B14(20h),B10,1
03f50: 1f55                      BTST   5h,B5
03f60: ca02                      JREQ   3F90h
03f70: 1f95                      BTST   3h,B5
03f80: cb12                      JRNE   40B0h
03f90: b7d9 00e0                 MOVE   *B14(E0h),B9,1
03fb0: b7d8 00c0                 MOVE   *B14(C0h),B8,1
03fd0: 1fd5                      BTST   1h,B5
03fe0: ca04                      JREQ   4030h
03ff0: b7d9 0120                 MOVE   *B14(120h),B9,1
04010: b7d8 0140                 MOVE   *B14(140h),B8,1
04030: 4e42                      MOVE   A2,B2
04040: 4e63                      MOVE   A3,B3
04050: 07a9 6520 0006            MOVE   @66520h,A9,1
04080: 0929                      CALL   A9
04090: c000 02b2                 JR     6BD0h
040b0: 4e42                      MOVE   A2,B2
040c0: 4e63                      MOVE   A3,B3
040d0: 57de                      CLR    B14
040e0: 1c15                      BTST   1Fh,B5
040f0: ca01                      JREQ   4110h
04100: 183e                      MOVK   1h,B14
04110: 07a9 6420 0006            MOVE   @66420h,A9,1
04140: 0929                      CALL   A9
04150: c000 02a6                 JR     6BD0h
04170: b5cc 0080                 MOVE   *A14(80h),A12,0
04190: 630c                      SLL    A8,A12
041a0: b5cd 0110                 MOVE   *A14(110h),A13,0
041c0: 1ef5                      BTST   8h,B5
041d0: cb04                      JRNE   4220h
041e0: 09eb 43a0 0003            MOVI   343A0h,A11
04210: c003                      JR     4250h
04220: 09eb 53c0 0003            MOVI   353C0h,A11
04250: 4583                      SUB    A12,A3
04260: 4581                      SUB    A12,A1
04270: 4f8a                      MOVE   A12,B10
04280: 2fba                      SRL    3h,B10
04290: 4fab                      MOVE   A13,B11
042a0: 0548                      SETF   8h,0,0
042b0: 4d56                      MOVE   B10,B6
042c0: 9409                      MOVE   *A0+,A9,0
042d0: 2469                      SLL    3h,A9
042e0: 4169                      ADD    A11,A9
042f0: 9922                      MOVE   *A9+,*A2+,0
04300: 3cb6                      DSJS   B6,42C0h
04310: 4020                      ADD    A1,A0
04320: 4062                      ADD    A3,A2
04330: 3d3b                      DSJS   B11,42B0h
04340: c000 0292                 JR     6C80h
04360: 0b4b ff3f                 CMPI   C0h,A11
04380: ca04                      JREQ   43D0h
04390: 0b4b ff04                 CMPI   FBh,A11
043b0: ca01                      JREQ   43D0h
043c0: c02d                      JR     46A0h

_NSbreak:
043d0: 1c35                      BTST   1Eh,B5
043e0: ca02                      JREQ   4410h
043f0: b5cb 00b0                 MOVE   *A14(B0h),A11,0
04410: 0b4b ff3f                 CMPI   C0h,A11
04430: ca06                      JREQ   44A0h
04440: 0b4b ff04                 CMPI   FBh,A11
04460: ca13                      JREQ   45A0h
04470: 56f7                      CLR    B7
04480: c000 0273                 JR     6BD0h
044a0: 1c35                      BTST   1Eh,B5
044b0: cb07                      JRNE   4530h
044c0: 09cb 00cc                 MOVI   CCh,A11
044e0: 0bb5 0000 4000            ORI    40000000h,B5
04510: c000 fecd                 JR     3200h
04530: 09cb 00a0                 MOVI   A0h,A11
04550: 0b95 0000 4000            ANDI   BFFFFFFFh,B5
04580: c000 fec6                 JR     3200h
045a0: 1c35                      BTST   1Eh,B5
045b0: cb07                      JRNE   4630h
045c0: 09cb 00bb                 MOVI   BBh,A11
045e0: 0bb5 0000 4000            ORI    40000000h,B5
04610: c000 febd                 JR     3200h
04630: 09cb 00fa                 MOVI   FAh,A11
04650: 0b95 0000 4000            ANDI   BFFFFFFFh,B5
04680: c000 feb6                 JR     3200h
046a0: 05a5 0150 c000            MOVE   @C0000150h,A5,0
046d0: 4c84                      MOVE   A4,A4
046e0: ca41                      JREQ   4B00h
046f0: 1f95                      BTST   3h,B5
04700: cb1d                      JRNE   48E0h
04710: 1fb5                      BTST   2h,B5
04720: ca3a                      JREQ   4AD0h
04730: 1f55                      BTST   5h,B5
04740: ca38                      JREQ   4AD0h
04750: b7d9 00e0                 MOVE   *B14(E0h),B9,1
04770: b7d8 00c0                 MOVE   *B14(C0h),B8,1
04790: 1fd5                      BTST   1h,B5
047a0: ca05                      JREQ   4800h
047b0: b7d9 0120                 MOVE   *B14(120h),B9,1
047d0: b7d8 0140                 MOVE   *B14(140h),B8,1
047f0: 1455                      SUBK   2h,B5
04800: 4e80                      MOVE   A4,B0
04810: 09e4 66e0 0006            MOVI   666E0h,A4
04840: 4e82                      MOVE   A4,B2
04850: 09f7 0040 0001            MOVI   10040h,B7
04880: 0f80                      PIXBLT B,L
04890: 0784 66c0 0006            MOVE   A4,@666C0h,1
048c0: 1095                      ADDK   4h,B5
048d0: c01f                      JR     4AD0h
048e0: 1f55                      BTST   5h,B5
048f0: cb1d                      JRNE   4AD0h
04900: 1be9                      MOVK   1Fh,A9
04910: 50a9                      AND    A5,A9
04920: d509                      EXGF   A9,0
04930: b7ca 0120                 MOVE   *A14(120h),A10,1
04950: 24ca                      SLL    6h,A10
04960: 408a                      ADD    A4,A10
04970: 09f7 6720 0006            MOVI   66720h,B7
049a0: 1856                      MOVK   2h,B6
049b0: 1839                      MOVK   1h,B9
049c0: a549                      MOVE   -*A10,A9,0
049d0: 4549                      SUB    A10,A9
049e0: 03a9                      NEG    A9
049f0: 4339                      ADDC   B9,B9
04a00: a549                      MOVE   -*A10,A9,0
04a10: 4549                      SUB    A10,A9
04a20: 03a9                      NEG    A9
04a30: 4339                      ADDC   B9,B9
04a40: c9f7                      JRNC   49C0h
04a50: 03f9                      NOT    B9
04a60: a337                      MOVE   B9,-*B7,1
04a70: 3db6                      DSJS   B6,49B0h
04a80: 0797 66c0 0006            MOVE   B7,@666C0h,1
04ab0: 1495                      SUBK   4h,B5
04ac0: 0550                      SETF   10h,0,0
04ad0: b0be 0100                 MOVE   B5,*B14(100h),0
04af0: c001                      JR     4B10h
04b00: 0300                      NOP    
04b10: b5cd 0110                 MOVE   *A14(110h),A13,0
04b30: 1ed5                      BTST   9h,B5
04b40: cb50                      JRNE   5050h
04b50: 1f15                      BTST   7h,B5
04b60: ca02                      JREQ   4B90h
04b70: 1ef5                      BTST   8h,B5
04b80: cb4c                      JRNE   5050h
04b90: b5c9 0020                 MOVE   *A14(20h),A9,0
04bb0: 574a                      CLR    A10
04bc0: 1f15                      BTST   7h,B5
04bd0: ca02                      JREQ   4C00h
04be0: b5ca 0060                 MOVE   *A14(60h),A10,0
04c00: b5cc 0080                 MOVE   *A14(80h),A12,0
04c20: 1f55                      BTST   5h,B5
04c30: ca03                      JREQ   4C70h
04c40: 630c                      SLL    A8,A12
04c50: 6309                      SLL    A8,A9
04c60: 630a                      SLL    A8,A10
04c70: 19eb                      MOVK   Fh,A11
04c80: 516a                      AND    A11,A10
04c90: 5169                      AND    A11,A9
04ca0: 492a                      CMP    A9,A10
04cb0: c601                      JRLE   4CD0h
04cc0: 4d2a                      MOVE   A9,A10
04cd0: 418a                      ADD    A12,A10
04ce0: 11ea                      ADDK   Fh,A10
04cf0: 2f8a                      SRL    4h,A10
04d00: 07a9 2300 0003            MOVE   @32300h,A9,1
04d30: 2fc9                      SRL    2h,A9
04d40: 5b49                      DIVU   A10,A9
04d50: 49a9                      CMP    A13,A9
04d60: cf2e                      JRNN   5050h
04d70: 4fab                      MOVE   A13,B11
04d80: 4d2d                      MOVE   A9,A13
04d90: 0bb5 2000 0000            ORI    2000h,B5
04dc0: 1e75                      BTST   Ch,B5
04dd0: cb0b                      JRNE   4E90h
04de0: 0bb5 1000 0000            ORI    1000h,B5
04e10: 4dca                      MOVE   A14,A10
04e20: 09ee 68e0 0006            MOVI   668E0h,A14
04e50: 4dcb                      MOVE   A14,A11
04e60: 1ad6                      MOVK   16h,B6
04e70: 994b                      MOVE   *A10+,*A11+,0
04e80: 3c56                      DSJS   B6,4E70h
04e90: b7c9 0020                 MOVE   *A14(20h),A9,1
04eb0: b7ca 0060                 MOVE   *A14(60h),A10,1
04ed0: e349                      SUBXY  A10,A9
04ee0: c816                      JRC    5050h
04ef0: b5ca 0080                 MOVE   *A14(80h),A10,0
04f10: 142a                      DEC    A10
04f20: e32a                      SUBXY  A9,A10
04f30: cc11                      JRV    5050h
04f40: e12a                      ADDXY  A9,A10
04f50: e12a                      ADDXY  A9,A10
04f60: cc0e                      JRV    5050h
04f70: 2a09                      SRA    10h,A9
04f80: 4f7a                      MOVE   B11,A10
04f90: 4549                      SUB    A10,A9
04fa0: c70a                      JRGT   5050h
04fb0: 45aa                      SUB    A13,A10
04fc0: 260a                      SLL    10h,A10
04fd0: e949                      CVXYL  A10,A9
04fe0: 4e9a                      MOVE   B4,A10
04ff0: 4549                      SUB    A10,A9
05000: 4120                      ADD    A9,A0
05010: 4122                      ADD    A9,A2
05020: 0bb5 4000 0000            ORI    4000h,B5
05050: b5cc 0080                 MOVE   *A14(80h),A12,0
05070: 630c                      SLL    A8,A12
05080: c054                      JR     55D0h
05090: 1db5                      BTST   12h,B5
050a0: cb27                      JRNE   5320h
050b0: 4c63                      MOVE   A3,A3
050c0: 4583                      SUB    A12,A3
050d0: 07aa 2300 0003            MOVE   @32300h,A10,1
05100: 2fca                      SRL    2h,A10
05110: 248a                      SLL    4h,A10
05120: 07a6 2160 0003            MOVE   @32160h,A6,1
05150: 4146                      ADD    A10,A6
05160: b5c7 0020                 MOVE   *A14(20h),A7,0
05180: 2467                      SLL    3h,A7
05190: 19e9                      MOVK   Fh,A9
051a0: 5127                      AND    A9,A7
051b0: 40e6                      ADD    A7,A6
051c0: 4187                      ADD    A12,A7
051d0: 11e7                      ADDK   Fh,A7
051e0: 5327                      ANDN   A9,A7
051f0: 4587                      SUB    A12,A7
05200: 4cca                      MOVE   A6,A10
05210: 4f8a                      MOVE   A12,B10
05220: 2fba                      SRL    3h,B10
05230: 4fab                      MOVE   A13,B11
05240: 0548                      SETF   8h,0,0
05250: 4d56                      MOVE   B10,B6
05260: 9449                      MOVE   *A2+,A9,0
05270: 2469                      SLL    3h,A9
05280: 4169                      ADD    A11,A9
05290: 992a                      MOVE   *A9+,*A10+,0
052a0: 3cb6                      DSJS   B6,5260h
052b0: 4062                      ADD    A3,A2
052c0: 40ea                      ADD    A7,A10
052d0: 3d3b                      DSJS   B11,5250h
052e0: 4cc2                      MOVE   A6,A2
052f0: 4187                      ADD    A12,A7
05300: 4ce3                      MOVE   A7,A3
05310: 0550                      SETF   10h,0,0
05320: 09eb 53c0 0003            MOVI   353C0h,A11
05350: 1dd5                      BTST   11h,B5
05360: cb05                      JRNE   53C0h
05370: 09eb 43a0 0003            MOVI   343A0h,A11
053a0: 1df5                      BTST   10h,B5
053b0: ca21                      JREQ   55D0h
053c0: 4c21                      MOVE   A1,A1
053d0: 4581                      SUB    A12,A1
053e0: b5c7 0060                 MOVE   *A14(60h),A7,0
05400: 2467                      SLL    3h,A7
05410: 19e9                      MOVK   Fh,A9
05420: 5127                      AND    A9,A7
05430: 07a6 2160 0003            MOVE   @32160h,A6,1
05460: 40e6                      ADD    A7,A6
05470: 4187                      ADD    A12,A7
05480: 11e7                      ADDK   Fh,A7
05490: 5327                      ANDN   A9,A7
054a0: 4587                      SUB    A12,A7
054b0: 4cca                      MOVE   A6,A10
054c0: 4f8a                      MOVE   A12,B10
054d0: 2fba                      SRL    3h,B10
054e0: 4fab                      MOVE   A13,B11
054f0: 0548                      SETF   8h,0,0
05500: 4d56                      MOVE   B10,B6
05510: 9409                      MOVE   *A0+,A9,0
05520: 2469                      SLL    3h,A9
05530: 4169                      ADD    A11,A9
05540: 992a                      MOVE   *A9+,*A10+,0
05550: 3cb6                      DSJS   B6,5510h
05560: 4020                      ADD    A1,A0
05570: 40ea                      ADD    A7,A10
05580: 3d3b                      DSJS   B11,5500h
05590: 4cc0                      MOVE   A6,A0
055a0: 4187                      ADD    A12,A7
055b0: 4ce1                      MOVE   A7,A1
055c0: 0550                      SETF   10h,0,0
055d0: 1f15                      BTST   7h,B5
055e0: ca5a                      JREQ   5B90h
055f0: 1f75                      BTST   4h,B5
05600: cb25                      JRNE   5860h
05610: 1f55                      BTST   5h,B5
05620: ca56                      JREQ   5B90h
05630: 4fce                      MOVE   A14,B14
05640: b7d8 00c0                 MOVE   *B14(C0h),B8,1
05660: b7d9 00e0                 MOVE   *B14(E0h),B9,1
05680: b5c7 0060                 MOVE   *A14(60h),A7,0
056a0: 6307                      SLL    A8,A7
056b0: 19e9                      MOVK   Fh,A9
056c0: 5127                      AND    A9,A7
056d0: 07a6 2160 0003            MOVE   @32160h,A6,1
05700: 40e6                      ADD    A7,A6
05710: 4187                      ADD    A12,A7
05720: 11e7                      ADDK   Fh,A7
05730: 5327                      ANDN   A9,A7
05740: 4e00                      MOVE   A0,B0
05750: 4e21                      MOVE   A1,B1
05760: 4ec2                      MOVE   A6,B2
05770: 4ee3                      MOVE   A7,B3
05780: 4da9                      MOVE   A13,A9
05790: 2609                      SLL    10h,A9
057a0: b5cc 0080                 MOVE   *A14(80h),A12,0
057c0: ed89                      MOVX   A12,A9
057d0: 4f27                      MOVE   A9,B7
057e0: 630c                      SLL    A8,A12
057f0: 0f80                      PIXBLT B,L
05800: 4cc0                      MOVE   A6,A0
05810: 4ce1                      MOVE   A7,A1
05820: 0bb5 0100 0000            ORI    100h,B5
05850: c033                      JR     5B90h
05860: 1f55                      BTST   5h,B5
05870: cb31                      JRNE   5B90h
05880: 4c21                      MOVE   A1,A1
05890: 4581                      SUB    A12,A1
058a0: b5c7 0060                 MOVE   *A14(60h),A7,0
058c0: 19e9                      MOVK   Fh,A9
058d0: 5127                      AND    A9,A7
058e0: 4c06                      MOVE   A0,A6
058f0: 1ef5                      BTST   8h,B5
05900: cb07                      JRNE   5980h
05910: 07a6 2160 0003            MOVE   @32160h,A6,1
05940: 4da9                      MOVE   A13,A9
05950: 5c69                      MPYS   A3,A9
05960: 4126                      ADD    A9,A6
05970: 19e9                      MOVK   Fh,A9
05980: 40e6                      ADD    A7,A6
05990: b5cc 0080                 MOVE   *A14(80h),A12,0
059b0: 4187                      ADD    A12,A7
059c0: 11e7                      ADDK   Fh,A7
059d0: 5327                      ANDN   A9,A7
059e0: 4587                      SUB    A12,A7
059f0: 4ccb                      MOVE   A6,A11
05a00: 1be9                      MOVK   1Fh,A9
05a10: 50a9                      AND    A5,A9
05a20: d709                      EXGF   A9,1
05a30: b7ca 00e0                 MOVE   *A14(E0h),A10,1
05a50: 0541                      SETF   1h,0,0
05a60: 4fab                      MOVE   A13,B11
05a70: 4f86                      MOVE   A12,B6
05a80: 9609                      MOVE   *A0+,A9,1
05a90: 5749                      XOR    A10,A9
05aa0: 1429                      DEC    A9
05ab0: 4729                      SUBB   A9,A9
05ac0: 912b                      MOVE   A9,*A11+,0
05ad0: 3cd6                      DSJS   B6,5A80h
05ae0: 4020                      ADD    A1,A0
05af0: 40eb                      ADD    A7,A11
05b00: 3d5b                      DSJS   B11,5A70h
05b10: 4cc0                      MOVE   A6,A0
05b20: 4187                      ADD    A12,A7
05b30: 4ce1                      MOVE   A7,A1
05b40: 0bb5 0100 0000            ORI    100h,B5
05b70: 0740                      SETF   20h,0,1
05b80: 0550                      SETF   10h,0,0
05b90: 1ed5                      BTST   9h,B5
05ba0: cb30                      JRNE   5EB0h
05bb0: 1ef5                      BTST   8h,B5
05bc0: cb2e                      JRNE   5EB0h
05bd0: b7c9 0020                 MOVE   *A14(20h),A9,1
05bf0: b7ca 0060                 MOVE   *A14(60h),A10,1
05c10: e349                      SUBXY  A10,A9
05c20: c828                      JRC    5EB0h
05c30: b5ca 0080                 MOVE   *A14(80h),A10,0
05c50: 142a                      DEC    A10
05c60: e32a                      SUBXY  A9,A10
05c70: cc23                      JRV    5EB0h
05c80: e12a                      ADDXY  A9,A10
05c90: e12a                      ADDXY  A9,A10
05ca0: cc20                      JRV    5EB0h
05cb0: 2a09                      SRA    10h,A9
05cc0: 45a9                      SUB    A13,A9
05cd0: c71d                      JRGT   5EB0h
05ce0: 4e00                      MOVE   A0,B0
05cf0: 4e21                      MOVE   A1,B1
05d00: b5c1 0080                 MOVE   *A14(80h),A1,0
05d20: 2601                      SLL    10h,A1
05d30: eda1                      MOVX   A13,A1
05d40: 3201                      RL     10h,A1
05d50: 4e27                      MOVE   A1,B7
05d60: b5c0 0060                 MOVE   *A14(60h),A0,0
05d80: 6300                      SLL    A8,A0
05d90: 19e9                      MOVK   Fh,A9
05da0: 5120                      AND    A9,A0
05db0: 0521                      ZEXT   A1,0
05dc0: 6301                      SLL    A8,A1
05dd0: 4001                      ADD    A0,A1
05de0: 11e1                      ADDK   Fh,A1
05df0: 5321                      ANDN   A9,A1
05e00: 4e23                      MOVE   A1,B3
05e10: 5120                      AND    A9,A0
05e20: 07a9 2160 0003            MOVE   @32160h,A9,1
05e50: 4120                      ADD    A9,A0
05e60: 4e02                      MOVE   A0,B2
05e70: 0f00                      PIXBLT L,L
05e80: 0bb5 0100 0000            ORI    100h,B5
05eb0: 19eb                      MOVK   Fh,A11
05ec0: 1f55                      BTST   5h,B5
05ed0: cb02                      JRNE   5F00h
05ee0: 1825                      MOVK   1h,A5
05ef0: 5708                      CLR    A8
05f00: b5cc 0080                 MOVE   *A14(80h),A12,0
05f20: 630c                      SLL    A8,A12
05f30: b5c9 0020                 MOVE   *A14(20h),A9,0
05f50: 6309                      SLL    A8,A9
05f60: 5169                      AND    A11,A9
05f70: b5ca 0060                 MOVE   *A14(60h),A10,0
05f90: 630a                      SLL    A8,A10
05fa0: 516a                      AND    A11,A10
05fb0: 4d8c                      MOVE   A12,A12
05fc0: 412c                      ADD    A9,A12
05fd0: 11ec                      ADDK   Fh,A12
05fe0: 2f8c                      SRL    4h,A12
05ff0: 144c                      SUBK   2h,A12
06000: 4f2e                      MOVE   A9,B14
06010: 4f44                      MOVE   A10,B4
06020: 449e                      SUB    B4,B14
06030: cf04                      JRNN   6080h
06040: 121e                      ADDK   10h,B14
06050: 0bb5 0400 0000            ORI    400h,B5
06080: b5ca 0080                 MOVE   *A14(80h),A10,0
060a0: 630a                      SLL    A8,A10
060b0: 19eb                      MOVK   Fh,A11
060c0: 09d4 ffff                 MOVI   FFFFh,B4
060e0: 4c9d                      MOVE   B4,B13
060f0: 5169                      AND    A11,A9
06100: 4f26                      MOVE   A9,B6
06110: 62d4                      SLL    B6,B4
06120: 4149                      ADD    A10,A9
06130: 5169                      AND    A11,A9
06140: 4f26                      MOVE   A9,B6
06150: 66dd                      SRL    B6,B13
06160: 4d8c                      MOVE   A12,A12
06170: ce02                      JRN    61A0h
06180: ee9d                      MOVY   B4,B13
06190: 321d                      RL     10h,B13
061a0: 509d                      AND    B4,B13
061b0: 1f95                      BTST   3h,B5
061c0: cb08                      JRNE   6250h
061d0: 1fb5                      BTST   2h,B5
061e0: cb06                      JRNE   6250h
061f0: 1fd5                      BTST   1h,B5
06200: cb25                      JRNE   6460h
06210: 4fc9                      MOVE   A14,B9
06220: b739 0120                 MOVE   *B9(120h),B9,1
06240: c021                      JR     6460h
06250: 0bb5 0040 0000            ORI    40h,B5
06280: 07a4 66c0 0006            MOVE   @666C0h,A4,1
062b0: ca00 00c3                 JREQ   6F00h
062d0: 4c86                      MOVE   A4,A6
062e0: 4ea8                      MOVE   A5,B8
062f0: 2478                      SLL    3h,B8
06300: b7c9 0020                 MOVE   *A14(20h),A9,1
06320: 18ea                      MOVK   7h,A10
06330: 512a                      AND    A9,A10
06340: 630a                      SLL    A8,A10
06350: 19eb                      MOVK   Fh,A11
06360: 1f95                      BTST   3h,B5
06370: cb01                      JRNE   6390h
06380: 2feb                      SRL    1h,A11
06390: 536a                      ANDN   A11,A10
063a0: 25a9                      SLL    Dh,A9
063b0: 2c69                      SRL    1Dh,A9
063c0: 2469                      SLL    3h,A9
063d0: 6309                      SLL    A8,A9
063e0: 4124                      ADD    A9,A4
063f0: 4c85                      MOVE   A4,A5
06400: 4144                      ADD    A10,A4
06410: 4f17                      MOVE   B8,A7
06420: 40e5                      ADD    A7,A5
06430: 2467                      SLL    3h,A7
06440: 40e6                      ADD    A7,A6
06450: 4f18                      MOVE   B8,A8
06460: afcb 00b0                 MOVB   *A14(B0h),A11
06480: 4d69                      MOVE   A11,A9
06490: 2829                      SRA    1Fh,A9
064a0: 572b                      XOR    A9,A11
064b0: 4f2c                      MOVE   A9,B12
064c0: 24ab                      SLL    5h,A11
064d0: 0b2b 6f70 0000            ADDI   6F70h,A11
06500: 876b                      MOVE   *A11,A11,1
06510: 098f 2004                 MMTM   SP,A2,A13
06530: 19e9                      MOVK   Fh,A9
06540: 5322                      ANDN   A9,A2
06550: 5320                      ANDN   A9,A0
06560: 142d                      DEC    A13
06570: ce45                      JRN    69D0h
06580: 4e00                      MOVE   A0,B0
06590: 4020                      ADD    A1,A0
065a0: 4e42                      MOVE   A2,B2
065b0: 4062                      ADD    A3,A2
065c0: 1f35                      BTST   6h,B5
065d0: ca10                      JREQ   66E0h
065e0: 4e87                      MOVE   A4,B7
065f0: 94f9                      MOVE   *B7+,B9,0
06600: 4eaa                      MOVE   A5,B10
06610: 4104                      ADD    A8,A4
06620: 4105                      ADD    A8,A5
06630: 48c4                      CMP    A6,A4
06640: c402                      JRLT   6670h
06650: 44e4                      SUB    A7,A4
06660: 44e5                      SUB    A7,A5
06670: 1f95                      BTST   3h,B5
06680: cb05                      JRNE   66E0h
06690: 4d34                      MOVE   B9,B4
066a0: 2714                      SLL    18h,B4
066b0: ee99                      MOVY   B4,B9
066c0: 3119                      RL     8h,B9
066d0: 1517                      SUBK   8h,B7
066e0: 5631                      CLR    B1
066f0: 1eb5                      BTST   Ah,B5
06700: ca02                      JREQ   6730h
06710: 9411                      MOVE   *B0+,B1,0
06720: 63d1                      SLL    B14,B1
06730: 2e11                      SRL    10h,B1
06740: 9414                      MOVE   *B0+,B4,0
06750: 63d4                      SLL    B14,B4
06760: 5491                      OR     B4,B1
06770: 8453                      MOVE   *B2,B3,0
06780: 4d6a                      MOVE   A11,A10
06790: 012a                      EXGPC  A10
067a0: 579b                      XOR    B12,B11
067b0: 51bb                      AND    B13,B11
067c0: 53b3                      ANDN   B13,B3
067d0: 547b                      OR     B3,B11
067e0: 9172                      MOVE   B11,*B2+,0
067f0: 4f86                      MOVE   A12,B6
06800: ced5                      JRN    6560h
06810: ca0c                      JREQ   68E0h
06820: 09ea 68b0 0000            MOVI   68B0h,A10
06850: 9414                      MOVE   *B0+,B4,0
06860: 63d4                      SLL    B14,B4
06870: 2e11                      SRL    10h,B1
06880: 5491                      OR     B4,B1
06890: 8453                      MOVE   *B2,B3,0
068a0: 016b                      JUMP   A11
068b0: 579b                      XOR    B12,B11
068c0: 9172                      MOVE   B11,*B2+,0
068d0: 3d36                      DSJS   B6,6850h
068e0: 9414                      MOVE   *B0+,B4,0
068f0: 63d4                      SLL    B14,B4
06900: 2e11                      SRL    10h,B1
06910: 5491                      OR     B4,B1
06920: 8453                      MOVE   *B2,B3,0
06930: 4d6a                      MOVE   A11,A10
06940: 012a                      EXGPC  A10
06950: 579b                      XOR    B12,B11
06960: 321d                      RL     10h,B13
06970: 51bb                      AND    B13,B11
06980: 53b3                      ANDN   B13,B3
06990: 321d                      RL     10h,B13
069a0: 547b                      OR     B3,B11
069b0: 8172                      MOVE   B11,*B2,0
069c0: c0b9                      JR     6560h
069d0: 09af 2004                 MMFM   SP,A2,A13
069f0: 4fee                      MOVE   SP,B14
06a00: 09be 0018                 MMFM   B14,B3,B4
06a20: 1e15                      BTST   Fh,B5
06a30: ca24                      JREQ   6C80h
06a40: b5cc 0080                 MOVE   *A14(80h),A12,0
06a60: 246c                      SLL    3h,A12
06a70: 4c63                      MOVE   A3,A3
06a80: 4583                      SUB    A12,A3
06a90: b7c6 0020                 MOVE   *A14(20h),A6,1
06ab0: e8c6                      CVXYL  A6,A6
06ac0: 4e77                      MOVE   B3,A7
06ad0: 4587                      SUB    A12,A7
06ae0: 09eb 53c0 0003            MOVI   353C0h,A11
06b10: 0548                      SETF   8h,0,0
06b20: 2fac                      SRL    3h,A12
06b30: 4fa4                      MOVE   A13,B4
06b40: 4f86                      MOVE   A12,B6
06b50: 9449                      MOVE   *A2+,A9,0
06b60: 2469                      SLL    3h,A9
06b70: 4169                      ADD    A11,A9
06b80: 9926                      MOVE   *A9+,*A6+,0
06b90: 3cb6                      DSJS   B6,6B50h
06ba0: 4062                      ADD    A3,A2
06bb0: 40e6                      ADD    A7,A6
06bc0: 3d34                      DSJS   B4,6B40h
06bd0: 0550                      SETF   10h,0,0
06be0: 1c35                      BTST   1Eh,B5
06bf0: cb00 fd7c                 JRNE   43D0h
06c10: 05c0 4370 0003 0150 c000  MOVE   @34370h,@C0000150h,0
06c60: 4efd                      MOVE   B7,A13
06c70: 2e0d                      SRL    10h,A13
06c80: 1869                      MOVK   3h,A9
06c90: 0549                      SETF   9h,0,0
06ca0: 0589 00b6 c000            MOVE   A9,@C00000B6h,0
06cd0: 0550                      SETF   10h,0,0
06ce0: 1e75                      BTST   Ch,B5
06cf0: ca20                      JREQ   6F00h
06d00: b5c9 0090                 MOVE   *A14(90h),A9,0
06d20: 45a9                      SUB    A13,A9
06d30: b12e 0090                 MOVE   A9,*A14(90h),0
06d50: b5c9 0110                 MOVE   *A14(110h),A9,0
06d70: 45a9                      SUB    A13,A9
06d80: b12e 0110                 MOVE   A9,*A14(110h),0
06da0: 1e35                      BTST   Eh,B5
06db0: cb0a                      JRNE   6E60h
06dc0: b5c9 0030                 MOVE   *A14(30h),A9,0
06de0: 41a9                      ADD    A13,A9
06df0: b12e 0030                 MOVE   A9,*A14(30h),0
06e10: b5c9 0070                 MOVE   *A14(70h),A9,0
06e30: 41a9                      ADD    A13,A9
06e40: b12e 0070                 MOVE   A9,*A14(70h),0
06e60: 1e55                      BTST   Dh,B5
06e70: ca08                      JREQ   6F00h
06e80: 0546                      SETF   6h,0,0
06e90: b5c9 0100                 MOVE   *A14(100h),A9,0
06eb0: 4f25                      MOVE   A9,B5
06ec0: 0550                      SETF   10h,0,0
06ed0: 5684                      CLR    A4
06ee0: c000 fbae                 JR     29E0h
06f00: 09bf 0078                 MMFM   SP,B3-B6
06f20: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
06f40: b7ee 0020                 MOVE   *SP(20h),A14,1
06f60: 0962                      RETS   2h
06f70: 7fc0                      SWAPF  *A14,A0,0
06f80: 0000                      DW     0000h
06f90: 7fe0                      SWAPF  *SP,A0,0
06fa0: 0000                      DW     0000h
06fb0: 8050                      MOVE   B2,*B0,0
06fc0: 0000                      DW     0000h
06fd0: 80c0                      MOVE   A6,*A0,0
06fe0: 0000                      DW     0000h
06ff0: 8120                      MOVE   A9,*A0,0
07000: 0000                      DW     0000h
07010: 8190                      MOVE   B12,*B0,0
07020: 0000                      DW     0000h
07030: 81f0                      MOVE   SP,*B0,0
07040: 0000                      DW     0000h
07050: 8270                      MOVE   B3,*B0,1
07060: 0000                      DW     0000h
07070: 82e0                      MOVE   A7,*A0,1
07080: 0000                      DW     0000h
07090: 8350                      MOVE   B10,*B0,1
070a0: 0000                      DW     0000h
070b0: 83c0                      MOVE   A14,*A0,1
070c0: 0000                      DW     0000h
070d0: 8420                      MOVE   *A1,A0,0
070e0: 0000                      DW     0000h
070f0: 84a0                      MOVE   *A5,A0,0
07100: 0000                      DW     0000h
07110: 8500                      MOVE   *A8,A0,0
07120: 0000                      DW     0000h
07130: 8580                      MOVE   *A12,A0,0
07140: 0000                      DW     0000h
07150: 8600                      MOVE   *A0,A0,1
07160: 0000                      DW     0000h
07170: 8650                      MOVE   *B2,B0,1
07180: 0000                      DW     0000h
07190: 86c0                      MOVE   *A6,A0,1
071a0: 0000                      DW     0000h
071b0: 8700                      MOVE   *A8,A0,1
071c0: 0000                      DW     0000h
071d0: 8790                      MOVE   *B12,B0,1
071e0: 0000                      DW     0000h
071f0: 8810                      MOVE   *B0,*B0,0
07200: 0000                      DW     0000h
07210: 88a0                      MOVE   *A5,*A0,0
07220: 0000                      DW     0000h
07230: 8920                      MOVE   *A9,*A0,0
07240: 0000                      DW     0000h
07250: 89c0                      MOVE   *A14,*A0,0
07260: 0000                      DW     0000h
07270: 8a70                      MOVE   *B3,*B0,1
07280: 0000                      DW     0000h
07290: 8b00                      MOVE   *A8,*A0,1
072a0: 0000                      DW     0000h
072b0: 8ba0                      MOVE   *A13,*A0,1
072c0: 0000                      DW     0000h
072d0: 8c20                      MOVB   A1,*A0
072e0: 0000                      DW     0000h
072f0: 8cb0                      MOVB   B5,*B0
07300: 0000                      DW     0000h
07310: 8d30                      MOVB   B9,*B0
07320: 0000                      DW     0000h
07330: 8dc0                      MOVB   A14,*A0
07340: 0000                      DW     0000h
07350: 8e30                      MOVB   *B1,B0
07360: 0000                      DW     0000h
07370: 8eb0                      MOVB   *B5,B0
07380: 0000                      DW     0000h
07390: 8f30                      MOVB   *B9,B0
073a0: 0000                      DW     0000h
073b0: 8fb0                      MOVB   *B13,B0
073c0: 0000                      DW     0000h
073d0: 8ff0                      MOVB   *SP,B0
073e0: 0000                      DW     0000h
073f0: 9080                      MOVE   A4,*A0+,0
07400: 0000                      DW     0000h
07410: 9110                      MOVE   B8,*B0+,0
07420: 0000                      DW     0000h
07430: 91b0                      MOVE   B13,*B0+,0
07440: 0000                      DW     0000h
07450: 9230                      MOVE   B1,*B0+,1
07460: 0000                      DW     0000h
07470: 92c0                      MOVE   A6,*A0+,1
07480: 0000                      DW     0000h
07490: 9330                      MOVE   B9,*B0+,1
074a0: 0000                      DW     0000h
074b0: 93d0                      MOVE   B14,*B0+,1
074c0: 0000                      DW     0000h
074d0: 9450                      MOVE   *B2+,B0,0
074e0: 0000                      DW     0000h
074f0: 9500                      MOVE   *A8+,A0,0
07500: 0000                      DW     0000h
07510: 9580                      MOVE   *A12+,A0,0
07520: 0000                      DW     0000h
07530: 9600                      MOVE   *A0+,A0,1
07540: 0000                      DW     0000h
07550: 9680                      MOVE   *A4+,A0,1
07560: 0000                      DW     0000h
07570: 9710                      MOVE   *B8+,B0,1
07580: 0000                      DW     0000h
07590: 9780                      MOVE   *A12+,A0,1
075a0: 0000                      DW     0000h
075b0: 9810                      MOVE   *B0+,*B0+,0
075c0: 0000                      DW     0000h
075d0: 9890                      MOVE   *B4+,*B0+,0
075e0: 0000                      DW     0000h
075f0: 98c0                      MOVE   *A6+,*A0+,0
07600: 0000                      DW     0000h
07610: 9940                      MOVE   *A10+,*A0+,0
07620: 0000                      DW     0000h
07630: 99d0                      MOVE   *B14+,*B0+,0
07640: 0000                      DW     0000h
07650: 9a40                      MOVE   *A2+,*A0+,1
07660: 0000                      DW     0000h
07670: 9ac0                      MOVE   *A6+,*A0+,1
07680: 0000                      DW     0000h
07690: 9b40                      MOVE   *A10+,*A0+,1
076a0: 0000                      DW     0000h
076b0: 9bc0                      MOVE   *A14+,*A0+,1
076c0: 0000                      DW     0000h
076d0: 9c40                      MOVB   *A2,*A0
076e0: 0000                      DW     0000h
076f0: 9cd0                      MOVB   *B6,*B0
07700: 0000                      DW     0000h
07710: 9d30                      MOVB   *B9,*B0
07720: 0000                      DW     0000h
07730: 9dc0                      MOVB   *A14,*A0
07740: 0000                      DW     0000h
07750: 9e50                      DW     9E50h
07760: 0000                      DW     0000h
07770: 9ec0                      DW     9EC0h
07780: 0000                      DW     0000h
07790: 9f40                      DW     9F40h
077a0: 0000                      DW     0000h
077b0: 9fc0                      DW     9FC0h
077c0: 0000                      DW     0000h
077d0: a050                      MOVE   B2,-*B0,0
077e0: 0000                      DW     0000h
077f0: a0f0                      MOVE   B7,-*B0,0
07800: 0000                      DW     0000h
07810: a130                      MOVE   B9,-*B0,0
07820: 0000                      DW     0000h
07830: a1c0                      MOVE   A14,-*A0,0
07840: 0000                      DW     0000h
07850: a240                      MOVE   A2,-*A0,1
07860: 0000                      DW     0000h
07870: a2d0                      MOVE   B6,-*B0,1
07880: 0000                      DW     0000h
07890: a340                      MOVE   A10,-*A0,1
078a0: 0000                      DW     0000h
078b0: a3e0                      MOVE   SP,-*A0,1
078c0: 0000                      DW     0000h
078d0: a460                      MOVE   -*A3,A0,0
078e0: 0000                      DW     0000h
078f0: a4e0                      MOVE   -*A7,A0,0
07900: 0000                      DW     0000h
07910: a560                      MOVE   -*A11,A0,0
07920: 0000                      DW     0000h
07930: a610                      MOVE   -*B0,B0,1
07940: 0000                      DW     0000h
07950: a690                      MOVE   -*B4,B0,1
07960: 0000                      DW     0000h
07970: a720                      MOVE   -*A9,A0,1
07980: 0000                      DW     0000h
07990: a790                      MOVE   -*B12,B0,1
079a0: 0000                      DW     0000h
079b0: a820                      MOVE   -*A1,-*A0,0
079c0: 0000                      DW     0000h
079d0: a8a0                      MOVE   -*A5,-*A0,0
079e0: 0000                      DW     0000h
079f0: a930                      MOVE   -*B9,-*B0,0
07a00: 0000                      DW     0000h
07a10: a9c0                      MOVE   -*A14,-*A0,0
07a20: 0000                      DW     0000h
07a30: a9f0                      MOVE   -*SP,-*B0,0
07a40: 0000                      DW     0000h
07a50: aa60                      MOVE   -*A3,-*A0,1
07a60: 0000                      DW     0000h
07a70: aae0                      MOVE   -*A7,-*A0,1
07a80: 0000                      DW     0000h
07a90: ab60                      MOVE   -*A11,-*A0,1
07aa0: 0000                      DW     0000h
07ab0: abe0                      MOVE   -*SP,-*A0,1
07ac0: 0000                      DW     0000h
07ad0: ac40 0000                 MOVB   A2,*A0(0h)
07af0: acd0 0000                 MOVB   B6,*B0(0h)
07b10: ad50 0000                 MOVB   B10,*B0(0h)
07b30: ade0 0000                 MOVB   SP,*A0(0h)
07b50: ae70 0000                 MOVB   *B3(0h),B0
07b70: aee0 0000                 MOVB   *A7(0h),A0
07b90: af50 0000                 MOVB   *B10(0h),B0
07bb0: aff0 0000                 MOVB   *SP(0h),B0
07bd0: b070 0000                 MOVE   B3,*B0(0h),0
07bf0: b0f0 0000                 MOVE   B7,*B0(0h),0
07c10: b170 0000                 MOVE   B11,*B0(0h),0
07c30: b1f0 0000                 MOVE   SP,*B0(0h),0
07c50: b220 0000                 MOVE   A1,*A0(0h),1
07c70: b2b0 0000                 MOVE   B5,*B0(0h),1
07c90: b360 0000                 MOVE   A11,*A0(0h),1
07cb0: b3e0 0000                 MOVE   SP,*A0(0h),1
07cd0: b450 0000                 MOVE   *B2(0h),B0,0
07cf0: b4f0 0000                 MOVE   *B7(0h),B0,0
07d10: b560 0000                 MOVE   *A11(0h),A0,0
07d30: b600 0000                 MOVE   *A0(0h),A0,1
07d50: b690 0000                 MOVE   *B4(0h),B0,1
07d70: b720 0000                 MOVE   *A9(0h),A0,1
07d90: b7a0 0000                 MOVE   *A13(0h),A0,1
07db0: b850 0000 b8d0            MOVE   *B2(0h),*B0(B8D0h),0
07de0: 0000                      DW     0000h
07df0: b960 0000 b9e0            MOVE   *A11(0h),*A0(B9E0h),0
07e20: 0000                      DW     0000h
07e30: ba70 0000 bb00            MOVE   *B3(0h),*B0(BB00h),1
07e60: 0000                      DW     0000h
07e70: bb40 0000 bbb0            MOVE   *A10(0h),*A0(BBB0h),1
07ea0: 0000                      DW     0000h
07eb0: bc50 0000 bce0            MOVB   *B2(0h),*B0(BCE0h)
07ee0: 0000                      DW     0000h
07ef0: bd70 0000 be00            MOVB   *B11(0h),*B0(BE00h)
07f20: 0000                      DW     0000h
07f30: be90                      DW     BE90h
07f40: 0000                      DW     0000h
07f50: bf20                      DW     BF20h
07f60: 0000                      DW     0000h
07f70: 48fa                      CMP    B7,B10
07f80: cb01                      JRNE   7FA0h
07f90: 4517                      SUB    B8,B7
07fa0: 94f9                      MOVE   *B7+,B9,0
07fb0: 016a                      JUMP   A10
07fc0: 577b                      CLR    B11
07fd0: 016a                      JUMP   A10
07fe0: 4c3b                      MOVE   B1,B11
07ff0: 553b                      OR     B9,B11
08000: 547b                      OR     B3,B11
08010: 03fb                      NOT    B11
08020: 1f95                      BTST   3h,B5
08030: cbf3                      JRNE   7F70h
08040: 016a                      JUMP   A10
08050: 4c3b                      MOVE   B1,B11
08060: 553b                      OR     B9,B11
08070: 03fb                      NOT    B11
08080: 507b                      AND    B3,B11
08090: 1f95                      BTST   3h,B5
080a0: cbec                      JRNE   7F70h
080b0: 016a                      JUMP   A10
080c0: 4c3b                      MOVE   B1,B11
080d0: 553b                      OR     B9,B11
080e0: 03fb                      NOT    B11
080f0: 1f95                      BTST   3h,B5
08100: cbe6                      JRNE   7F70h
08110: 016a                      JUMP   A10
08120: 4d3b                      MOVE   B9,B11
08130: 547b                      OR     B3,B11
08140: 03fb                      NOT    B11
08150: 503b                      AND    B1,B11
08160: 1f95                      BTST   3h,B5
08170: cbdf                      JRNE   7F70h
08180: 016a                      JUMP   A10
08190: 4d3b                      MOVE   B9,B11
081a0: 547b                      OR     B3,B11
081b0: 03fb                      NOT    B11
081c0: 016a                      JUMP   A10
081d0: 1f95                      BTST   3h,B5
081e0: cbd8                      JRNE   7F70h
081f0: 4c3b                      MOVE   B1,B11
08200: 567b                      XOR    B3,B11
08210: 03fb                      NOT    B11
08220: 553b                      OR     B9,B11
08230: 03fb                      NOT    B11
08240: 1f95                      BTST   3h,B5
08250: cbd1                      JRNE   7F70h
08260: 016a                      JUMP   A10
08270: 4c3b                      MOVE   B1,B11
08280: 507b                      AND    B3,B11
08290: 553b                      OR     B9,B11
082a0: 03fb                      NOT    B11
082b0: 1f95                      BTST   3h,B5
082c0: cbca                      JRNE   7F70h
082d0: 016a                      JUMP   A10
082e0: 4d3b                      MOVE   B9,B11
082f0: 03fb                      NOT    B11
08300: 507b                      AND    B3,B11
08310: 503b                      AND    B1,B11
08320: 1f95                      BTST   3h,B5
08330: cbc3                      JRNE   7F70h
08340: 016a                      JUMP   A10
08350: 4c3b                      MOVE   B1,B11
08360: 567b                      XOR    B3,B11
08370: 553b                      OR     B9,B11
08380: 03fb                      NOT    B11
08390: 1f95                      BTST   3h,B5
083a0: cbbc                      JRNE   7F70h
083b0: 016a                      JUMP   A10
083c0: 4d3b                      MOVE   B9,B11
083d0: 03fb                      NOT    B11
083e0: 507b                      AND    B3,B11
083f0: 1f95                      BTST   3h,B5
08400: cbb6                      JRNE   7F70h
08410: 016a                      JUMP   A10
08420: 4c7b                      MOVE   B3,B11
08430: 03fb                      NOT    B11
08440: 503b                      AND    B1,B11
08450: 553b                      OR     B9,B11
08460: 03fb                      NOT    B11
08470: 1f95                      BTST   3h,B5
08480: cbae                      JRNE   7F70h
08490: 016a                      JUMP   A10
084a0: 4d3b                      MOVE   B9,B11
084b0: 03fb                      NOT    B11
084c0: 503b                      AND    B1,B11
084d0: 1f95                      BTST   3h,B5
084e0: cba8                      JRNE   7F70h
084f0: 016a                      JUMP   A10
08500: 4c3b                      MOVE   B1,B11
08510: 03fb                      NOT    B11
08520: 507b                      AND    B3,B11
08530: 553b                      OR     B9,B11
08540: 03fb                      NOT    B11
08550: 1f95                      BTST   3h,B5
08560: cba0                      JRNE   7F70h
08570: 016a                      JUMP   A10
08580: 4c3b                      MOVE   B1,B11
08590: 547b                      OR     B3,B11
085a0: 03fb                      NOT    B11
085b0: 553b                      OR     B9,B11
085c0: 03fb                      NOT    B11
085d0: 1f95                      BTST   3h,B5
085e0: cb98                      JRNE   7F70h
085f0: 016a                      JUMP   A10
08600: 4d3b                      MOVE   B9,B11
08610: 03fb                      NOT    B11
08620: 1f95                      BTST   3h,B5
08630: cb93                      JRNE   7F70h
08640: 016a                      JUMP   A10
08650: 4c3b                      MOVE   B1,B11
08660: 547b                      OR     B3,B11
08670: 03fb                      NOT    B11
08680: 513b                      AND    B9,B11
08690: 1f95                      BTST   3h,B5
086a0: cb8c                      JRNE   7F70h
086b0: 016a                      JUMP   A10
086c0: 4c3b                      MOVE   B1,B11
086d0: 547b                      OR     B3,B11
086e0: 03fb                      NOT    B11
086f0: 016a                      JUMP   A10
08700: 4d3b                      MOVE   B9,B11
08710: 567b                      XOR    B3,B11
08720: 03fb                      NOT    B11
08730: 543b                      OR     B1,B11
08740: 03fb                      NOT    B11
08750: 1f95                      BTST   3h,B5
08760: cb00 ff7f                 JRNE   7F70h
08780: 016a                      JUMP   A10
08790: 4d3b                      MOVE   B9,B11
087a0: 507b                      AND    B3,B11
087b0: 543b                      OR     B1,B11
087c0: 03fb                      NOT    B11
087d0: 1f95                      BTST   3h,B5
087e0: cb00 ff77                 JRNE   7F70h
08800: 016a                      JUMP   A10
08810: 4c3b                      MOVE   B1,B11
08820: 573b                      XOR    B9,B11
08830: 03fb                      NOT    B11
08840: 547b                      OR     B3,B11
08850: 03fb                      NOT    B11
08860: 1f95                      BTST   3h,B5
08870: cb00 ff6e                 JRNE   7F70h
08890: 016a                      JUMP   A10
088a0: 4c3b                      MOVE   B1,B11
088b0: 513b                      AND    B9,B11
088c0: 547b                      OR     B3,B11
088d0: 03fb                      NOT    B11
088e0: 1f95                      BTST   3h,B5
088f0: cb00 ff66                 JRNE   7F70h
08910: 016a                      JUMP   A10
08920: 4d3b                      MOVE   B9,B11
08930: 503b                      AND    B1,B11
08940: 03fb                      NOT    B11
08950: 507b                      AND    B3,B11
08960: 563b                      XOR    B1,B11
08970: 573b                      XOR    B9,B11
08980: 1f95                      BTST   3h,B5
08990: cb00 ff5c                 JRNE   7F70h
089b0: 016a                      JUMP   A10
089c0: 4d3b                      MOVE   B9,B11
089d0: 563b                      XOR    B1,B11
089e0: 4c74                      MOVE   B3,B4
089f0: 5634                      XOR    B1,B4
08a00: 509b                      AND    B4,B11
08a10: 563b                      XOR    B1,B11
08a20: 03fb                      NOT    B11
08a30: 1f95                      BTST   3h,B5
08a40: cb00 ff51                 JRNE   7F70h
08a60: 016a                      JUMP   A10
08a70: 4d34                      MOVE   B9,B4
08a80: 5634                      XOR    B1,B4
08a90: 4d3b                      MOVE   B9,B11
08aa0: 567b                      XOR    B3,B11
08ab0: 509b                      AND    B4,B11
08ac0: 1f95                      BTST   3h,B5
08ad0: cb00 ff48                 JRNE   7F70h
08af0: 016a                      JUMP   A10
08b00: 4c3b                      MOVE   B1,B11
08b10: 513b                      AND    B9,B11
08b20: 03fb                      NOT    B11
08b30: 507b                      AND    B3,B11
08b40: 563b                      XOR    B1,B11
08b50: 03fb                      NOT    B11
08b60: 1f95                      BTST   3h,B5
08b70: cb00 ff3e                 JRNE   7F70h
08b90: 016a                      JUMP   A10
08ba0: 4d3b                      MOVE   B9,B11
08bb0: 503b                      AND    B1,B11
08bc0: 547b                      OR     B3,B11
08bd0: 573b                      XOR    B9,B11
08be0: 1f95                      BTST   3h,B5
08bf0: cb00 ff36                 JRNE   7F70h
08c10: 016a                      JUMP   A10
08c20: 4c3b                      MOVE   B1,B11
08c30: 573b                      XOR    B9,B11
08c40: 507b                      AND    B3,B11
08c50: 563b                      XOR    B1,B11
08c60: 03fb                      NOT    B11
08c70: 1f95                      BTST   3h,B5
08c80: cb00 ff2d                 JRNE   7F70h
08ca0: 016a                      JUMP   A10
08cb0: 4d3b                      MOVE   B9,B11
08cc0: 507b                      AND    B3,B11
08cd0: 543b                      OR     B1,B11
08ce0: 573b                      XOR    B9,B11
08cf0: 1f95                      BTST   3h,B5
08d00: cb00 ff25                 JRNE   7F70h
08d20: 016a                      JUMP   A10
08d30: 4c7b                      MOVE   B3,B11
08d40: 573b                      XOR    B9,B11
08d50: 503b                      AND    B1,B11
08d60: 567b                      XOR    B3,B11
08d70: 03fb                      NOT    B11
08d80: 1f95                      BTST   3h,B5
08d90: cb00 ff1c                 JRNE   7F70h
08db0: 016a                      JUMP   A10
08dc0: 4c3b                      MOVE   B1,B11
08dd0: 547b                      OR     B3,B11
08de0: 573b                      XOR    B9,B11
08df0: 1f95                      BTST   3h,B5
08e00: cb00 ff15                 JRNE   7F70h
08e20: 016a                      JUMP   A10
08e30: 4c3b                      MOVE   B1,B11
08e40: 547b                      OR     B3,B11
08e50: 513b                      AND    B9,B11
08e60: 03fb                      NOT    B11
08e70: 1f95                      BTST   3h,B5
08e80: cb00 ff0d                 JRNE   7F70h
08ea0: 016a                      JUMP   A10
08eb0: 4c3b                      MOVE   B1,B11
08ec0: 03fb                      NOT    B11
08ed0: 513b                      AND    B9,B11
08ee0: 507b                      AND    B3,B11
08ef0: 1f95                      BTST   3h,B5
08f00: cb00 ff05                 JRNE   7F70h
08f20: 016a                      JUMP   A10
08f30: 4d3b                      MOVE   B9,B11
08f40: 567b                      XOR    B3,B11
08f50: 543b                      OR     B1,B11
08f60: 03fb                      NOT    B11
08f70: 1f95                      BTST   3h,B5
08f80: cb00 fefd                 JRNE   7F70h
08fa0: 016a                      JUMP   A10
08fb0: 4c3b                      MOVE   B1,B11
08fc0: 03fb                      NOT    B11
08fd0: 507b                      AND    B3,B11
08fe0: 016a                      JUMP   A10
08ff0: 4c7b                      MOVE   B3,B11
09000: 03fb                      NOT    B11
09010: 513b                      AND    B9,B11
09020: 543b                      OR     B1,B11
09030: 03fb                      NOT    B11
09040: 1f95                      BTST   3h,B5
09050: cb00 fef0                 JRNE   7F70h
09070: 016a                      JUMP   A10
09080: 4d34                      MOVE   B9,B4
09090: 5634                      XOR    B1,B4
090a0: 4c3b                      MOVE   B1,B11
090b0: 567b                      XOR    B3,B11
090c0: 509b                      AND    B4,B11
090d0: 1f95                      BTST   3h,B5
090e0: cb00 fee7                 JRNE   7F70h
09100: 016a                      JUMP   A10
09110: 4d3b                      MOVE   B9,B11
09120: 503b                      AND    B1,B11
09130: 03fb                      NOT    B11
09140: 507b                      AND    B3,B11
09150: 573b                      XOR    B9,B11
09160: 03fb                      NOT    B11
09170: 1f95                      BTST   3h,B5
09180: cb00 fedd                 JRNE   7F70h
091a0: 016a                      JUMP   A10
091b0: 4c3b                      MOVE   B1,B11
091c0: 513b                      AND    B9,B11
091d0: 547b                      OR     B3,B11
091e0: 563b                      XOR    B1,B11
091f0: 1f95                      BTST   3h,B5
09200: cb00 fed5                 JRNE   7F70h
09220: 016a                      JUMP   A10
09230: 4c3b                      MOVE   B1,B11
09240: 573b                      XOR    B9,B11
09250: 03fb                      NOT    B11
09260: 547b                      OR     B3,B11
09270: 563b                      XOR    B1,B11
09280: 1f95                      BTST   3h,B5
09290: cb00 fecc                 JRNE   7F70h
092b0: 016a                      JUMP   A10
092c0: 4c3b                      MOVE   B1,B11
092d0: 573b                      XOR    B9,B11
092e0: 507b                      AND    B3,B11
092f0: 1f95                      BTST   3h,B5
09300: cb00 fec5                 JRNE   7F70h
09320: 016a                      JUMP   A10
09330: 4c3b                      MOVE   B1,B11
09340: 513b                      AND    B9,B11
09350: 547b                      OR     B3,B11
09360: 563b                      XOR    B1,B11
09370: 573b                      XOR    B9,B11
09380: 03fb                      NOT    B11
09390: 1f95                      BTST   3h,B5
093a0: cb00 febb                 JRNE   7F70h
093c0: 016a                      JUMP   A10
093d0: 4c3b                      MOVE   B1,B11
093e0: 513b                      AND    B9,B11
093f0: 03fb                      NOT    B11
09400: 507b                      AND    B3,B11
09410: 1f95                      BTST   3h,B5
09420: cb00 feb3                 JRNE   7F70h
09440: 016a                      JUMP   A10
09450: 4d34                      MOVE   B9,B4
09460: 5634                      XOR    B1,B4
09470: 4c7b                      MOVE   B3,B11
09480: 573b                      XOR    B9,B11
09490: 509b                      AND    B4,B11
094a0: 563b                      XOR    B1,B11
094b0: 03fb                      NOT    B11
094c0: 1f95                      BTST   3h,B5
094d0: cb00 fea8                 JRNE   7F70h
094f0: 016a                      JUMP   A10
09500: 4c3b                      MOVE   B1,B11
09510: 547b                      OR     B3,B11
09520: 513b                      AND    B9,B11
09530: 563b                      XOR    B1,B11
09540: 1f95                      BTST   3h,B5
09550: cb00 fea0                 JRNE   7F70h
09570: 016a                      JUMP   A10
09580: 4c7b                      MOVE   B3,B11
09590: 03fb                      NOT    B11
095a0: 543b                      OR     B1,B11
095b0: 573b                      XOR    B9,B11
095c0: 1f95                      BTST   3h,B5
095d0: cb00 fe98                 JRNE   7F70h
095f0: 016a                      JUMP   A10
09600: 4d3b                      MOVE   B9,B11
09610: 567b                      XOR    B3,B11
09620: 543b                      OR     B1,B11
09630: 573b                      XOR    B9,B11
09640: 1f95                      BTST   3h,B5
09650: cb00 fe90                 JRNE   7F70h
09670: 016a                      JUMP   A10
09680: 4c7b                      MOVE   B3,B11
09690: 03fb                      NOT    B11
096a0: 543b                      OR     B1,B11
096b0: 513b                      AND    B9,B11
096c0: 03fb                      NOT    B11
096d0: 1f95                      BTST   3h,B5
096e0: cb00 fe87                 JRNE   7F70h
09700: 016a                      JUMP   A10
09710: 4c3b                      MOVE   B1,B11
09720: 03fb                      NOT    B11
09730: 513b                      AND    B9,B11
09740: 1f95                      BTST   3h,B5
09750: cb00 fe80                 JRNE   7F70h
09770: 016a                      JUMP   A10
09780: 4d3b                      MOVE   B9,B11
09790: 03fb                      NOT    B11
097a0: 507b                      AND    B3,B11
097b0: 543b                      OR     B1,B11
097c0: 03fb                      NOT    B11
097d0: 1f95                      BTST   3h,B5
097e0: cb00 fe77                 JRNE   7F70h
09800: 016a                      JUMP   A10
09810: 4c3b                      MOVE   B1,B11
09820: 553b                      OR     B9,B11
09830: 547b                      OR     B3,B11
09840: 563b                      XOR    B1,B11
09850: 1f95                      BTST   3h,B5
09860: cb00 fe6f                 JRNE   7F70h
09880: 016a                      JUMP   A10
09890: 4c3b                      MOVE   B1,B11
098a0: 03fb                      NOT    B11
098b0: 016a                      JUMP   A10
098c0: 4c3b                      MOVE   B1,B11
098d0: 507b                      AND    B3,B11
098e0: 553b                      OR     B9,B11
098f0: 563b                      XOR    B1,B11
09900: 1f95                      BTST   3h,B5
09910: cb00 fe64                 JRNE   7F70h
09930: 016a                      JUMP   A10
09940: 4c3b                      MOVE   B1,B11
09950: 567b                      XOR    B3,B11
09960: 03fb                      NOT    B11
09970: 553b                      OR     B9,B11
09980: 563b                      XOR    B1,B11
09990: 1f95                      BTST   3h,B5
099a0: cb00 fe5b                 JRNE   7F70h
099c0: 016a                      JUMP   A10
099d0: 4d3b                      MOVE   B9,B11
099e0: 547b                      OR     B3,B11
099f0: 563b                      XOR    B1,B11
09a00: 1f95                      BTST   3h,B5
09a10: cb00 fe54                 JRNE   7F70h
09a30: 016a                      JUMP   A10
09a40: 4d3b                      MOVE   B9,B11
09a50: 547b                      OR     B3,B11
09a60: 503b                      AND    B1,B11
09a70: 03fb                      NOT    B11
09a80: 1f95                      BTST   3h,B5
09a90: cb00 fe4c                 JRNE   7F70h
09ab0: 016a                      JUMP   A10
09ac0: 4d3b                      MOVE   B9,B11
09ad0: 547b                      OR     B3,B11
09ae0: 503b                      AND    B1,B11
09af0: 573b                      XOR    B9,B11
09b00: 1f95                      BTST   3h,B5
09b10: cb00 fe44                 JRNE   7F70h
09b30: 016a                      JUMP   A10
09b40: 4c7b                      MOVE   B3,B11
09b50: 03fb                      NOT    B11
09b60: 553b                      OR     B9,B11
09b70: 563b                      XOR    B1,B11
09b80: 1f95                      BTST   3h,B5
09b90: cb00 fe3c                 JRNE   7F70h
09bb0: 016a                      JUMP   A10
09bc0: 4c3b                      MOVE   B1,B11
09bd0: 567b                      XOR    B3,B11
09be0: 553b                      OR     B9,B11
09bf0: 563b                      XOR    B1,B11
09c00: 1f95                      BTST   3h,B5
09c10: cb00 fe34                 JRNE   7F70h
09c30: 016a                      JUMP   A10
09c40: 4c7b                      MOVE   B3,B11
09c50: 03fb                      NOT    B11
09c60: 553b                      OR     B9,B11
09c70: 503b                      AND    B1,B11
09c80: 03fb                      NOT    B11
09c90: 1f95                      BTST   3h,B5
09ca0: cb00 fe2b                 JRNE   7F70h
09cc0: 016a                      JUMP   A10
09cd0: 4c3b                      MOVE   B1,B11
09ce0: 573b                      XOR    B9,B11
09cf0: 1f95                      BTST   3h,B5
09d00: cb00 fe25                 JRNE   7F70h
09d20: 016a                      JUMP   A10
09d30: 4c3b                      MOVE   B1,B11
09d40: 547b                      OR     B3,B11
09d50: 03fb                      NOT    B11
09d60: 553b                      OR     B9,B11
09d70: 563b                      XOR    B1,B11
09d80: 1f95                      BTST   3h,B5
09d90: cb00 fe1c                 JRNE   7F70h
09db0: 016a                      JUMP   A10
09dc0: 4c3b                      MOVE   B1,B11
09dd0: 03fb                      NOT    B11
09de0: 507b                      AND    B3,B11
09df0: 553b                      OR     B9,B11
09e00: 563b                      XOR    B1,B11
09e10: 1f95                      BTST   3h,B5
09e20: cb00 fe13                 JRNE   7F70h
09e40: 016a                      JUMP   A10
09e50: 4c3b                      MOVE   B1,B11
09e60: 513b                      AND    B9,B11
09e70: 03fb                      NOT    B11
09e80: 1f95                      BTST   3h,B5
09e90: cb00 fe0c                 JRNE   7F70h
09eb0: 016a                      JUMP   A10
09ec0: 4c7b                      MOVE   B3,B11
09ed0: 03fb                      NOT    B11
09ee0: 503b                      AND    B1,B11
09ef0: 513b                      AND    B9,B11
09f00: 1f95                      BTST   3h,B5
09f10: cb00 fe04                 JRNE   7F70h
09f30: 016a                      JUMP   A10
09f40: 4c3b                      MOVE   B1,B11
09f50: 573b                      XOR    B9,B11
09f60: 547b                      OR     B3,B11
09f70: 03fb                      NOT    B11
09f80: 1f95                      BTST   3h,B5
09f90: cb00 fdfc                 JRNE   7F70h
09fb0: 016a                      JUMP   A10
09fc0: 4c74                      MOVE   B3,B4
09fd0: 5634                      XOR    B1,B4
09fe0: 4c7b                      MOVE   B3,B11
09ff0: 573b                      XOR    B9,B11
0a000: 509b                      AND    B4,B11
0a010: 1f95                      BTST   3h,B5
0a020: cb00 fdf3                 JRNE   7F70h
0a040: 016a                      JUMP   A10
0a050: 4c3b                      MOVE   B1,B11
0a060: 507b                      AND    B3,B11
0a070: 03fb                      NOT    B11
0a080: 513b                      AND    B9,B11
0a090: 563b                      XOR    B1,B11
0a0a0: 03fb                      NOT    B11
0a0b0: 1f95                      BTST   3h,B5
0a0c0: cb00 fde9                 JRNE   7F70h
0a0e0: 016a                      JUMP   A10
0a0f0: 4c7b                      MOVE   B3,B11
0a100: 03fb                      NOT    B11
0a110: 503b                      AND    B1,B11
0a120: 016a                      JUMP   A10
0a130: 4c3b                      MOVE   B1,B11
0a140: 03fb                      NOT    B11
0a150: 513b                      AND    B9,B11
0a160: 547b                      OR     B3,B11
0a170: 03fb                      NOT    B11
0a180: 1f95                      BTST   3h,B5
0a190: cb00 fddc                 JRNE   7F70h
0a1b0: 016a                      JUMP   A10
0a1c0: 4c7b                      MOVE   B3,B11
0a1d0: 513b                      AND    B9,B11
0a1e0: 543b                      OR     B1,B11
0a1f0: 567b                      XOR    B3,B11
0a200: 1f95                      BTST   3h,B5
0a210: cb00 fdd4                 JRNE   7F70h
0a230: 016a                      JUMP   A10
0a240: 4d3b                      MOVE   B9,B11
0a250: 567b                      XOR    B3,B11
0a260: 503b                      AND    B1,B11
0a270: 573b                      XOR    B9,B11
0a280: 03fb                      NOT    B11
0a290: 1f95                      BTST   3h,B5
0a2a0: cb00 fdcb                 JRNE   7F70h
0a2c0: 016a                      JUMP   A10
0a2d0: 4d3b                      MOVE   B9,B11
0a2e0: 567b                      XOR    B3,B11
0a2f0: 503b                      AND    B1,B11
0a300: 1f95                      BTST   3h,B5
0a310: cb00 fdc4                 JRNE   7F70h
0a330: 016a                      JUMP   A10
0a340: 4c7b                      MOVE   B3,B11
0a350: 513b                      AND    B9,B11
0a360: 543b                      OR     B1,B11
0a370: 567b                      XOR    B3,B11
0a380: 573b                      XOR    B9,B11
0a390: 03fb                      NOT    B11
0a3a0: 1f95                      BTST   3h,B5
0a3b0: cb00 fdba                 JRNE   7F70h
0a3d0: 016a                      JUMP   A10
0a3e0: 4c7b                      MOVE   B3,B11
0a3f0: 543b                      OR     B1,B11
0a400: 513b                      AND    B9,B11
0a410: 567b                      XOR    B3,B11
0a420: 1f95                      BTST   3h,B5
0a430: cb00 fdb2                 JRNE   7F70h
0a450: 016a                      JUMP   A10
0a460: 4c3b                      MOVE   B1,B11
0a470: 03fb                      NOT    B11
0a480: 547b                      OR     B3,B11
0a490: 573b                      XOR    B9,B11
0a4a0: 1f95                      BTST   3h,B5
0a4b0: cb00 fdaa                 JRNE   7F70h
0a4d0: 016a                      JUMP   A10
0a4e0: 4d3b                      MOVE   B9,B11
0a4f0: 507b                      AND    B3,B11
0a500: 03fb                      NOT    B11
0a510: 503b                      AND    B1,B11
0a520: 1f95                      BTST   3h,B5
0a530: cb00 fda2                 JRNE   7F70h
0a550: 016a                      JUMP   A10
0a560: 4d34                      MOVE   B9,B4
0a570: 5634                      XOR    B1,B4
0a580: 4c3b                      MOVE   B1,B11
0a590: 567b                      XOR    B3,B11
0a5a0: 549b                      OR     B4,B11
0a5b0: 563b                      XOR    B1,B11
0a5c0: 03fb                      NOT    B11
0a5d0: 1f95                      BTST   3h,B5
0a5e0: cb00 fd97                 JRNE   7F70h
0a600: 016a                      JUMP   A10
0a610: 4d3b                      MOVE   B9,B11
0a620: 563b                      XOR    B1,B11
0a630: 547b                      OR     B3,B11
0a640: 573b                      XOR    B9,B11
0a650: 1f95                      BTST   3h,B5
0a660: cb00 fd8f                 JRNE   7F70h
0a680: 016a                      JUMP   A10
0a690: 4c3b                      MOVE   B1,B11
0a6a0: 03fb                      NOT    B11
0a6b0: 547b                      OR     B3,B11
0a6c0: 513b                      AND    B9,B11
0a6d0: 03fb                      NOT    B11
0a6e0: 1f95                      BTST   3h,B5
0a6f0: cb00 fd86                 JRNE   7F70h
0a710: 016a                      JUMP   A10
0a720: 4c7b                      MOVE   B3,B11
0a730: 03fb                      NOT    B11
0a740: 513b                      AND    B9,B11
0a750: 1f95                      BTST   3h,B5
0a760: cb00 fd7f                 JRNE   7F70h
0a780: 016a                      JUMP   A10
0a790: 4d3b                      MOVE   B9,B11
0a7a0: 03fb                      NOT    B11
0a7b0: 503b                      AND    B1,B11
0a7c0: 547b                      OR     B3,B11
0a7d0: 03fb                      NOT    B11
0a7e0: 1f95                      BTST   3h,B5
0a7f0: cb00 fd76                 JRNE   7F70h
0a810: 016a                      JUMP   A10
0a820: 4c7b                      MOVE   B3,B11
0a830: 503b                      AND    B1,B11
0a840: 553b                      OR     B9,B11
0a850: 567b                      XOR    B3,B11
0a860: 1f95                      BTST   3h,B5
0a870: cb00 fd6e                 JRNE   7F70h
0a890: 016a                      JUMP   A10
0a8a0: 4c3b                      MOVE   B1,B11
0a8b0: 567b                      XOR    B3,B11
0a8c0: 513b                      AND    B9,B11
0a8d0: 563b                      XOR    B1,B11
0a8e0: 03fb                      NOT    B11
0a8f0: 1f95                      BTST   3h,B5
0a900: cb00 fd65                 JRNE   7F70h
0a920: 016a                      JUMP   A10
0a930: 4c3b                      MOVE   B1,B11
0a940: 553b                      OR     B9,B11
0a950: 03fb                      NOT    B11
0a960: 547b                      OR     B3,B11
0a970: 03fb                      NOT    B11
0a980: 1f95                      BTST   3h,B5
0a990: cb00 fd5c                 JRNE   7F70h
0a9b0: 016a                      JUMP   A10
0a9c0: 4c7b                      MOVE   B3,B11
0a9d0: 03fb                      NOT    B11
0a9e0: 016a                      JUMP   A10
0a9f0: 4c3b                      MOVE   B1,B11
0aa00: 553b                      OR     B9,B11
0aa10: 567b                      XOR    B3,B11
0aa20: 1f95                      BTST   3h,B5
0aa30: cb00 fd52                 JRNE   7F70h
0aa50: 016a                      JUMP   A10
0aa60: 4c3b                      MOVE   B1,B11
0aa70: 553b                      OR     B9,B11
0aa80: 507b                      AND    B3,B11
0aa90: 03fb                      NOT    B11
0aaa0: 1f95                      BTST   3h,B5
0aab0: cb00 fd4a                 JRNE   7F70h
0aad0: 016a                      JUMP   A10
0aae0: 4d3b                      MOVE   B9,B11
0aaf0: 543b                      OR     B1,B11
0ab00: 507b                      AND    B3,B11
0ab10: 573b                      XOR    B9,B11
0ab20: 1f95                      BTST   3h,B5
0ab30: cb00 fd42                 JRNE   7F70h
0ab50: 016a                      JUMP   A10
0ab60: 4c3b                      MOVE   B1,B11
0ab70: 03fb                      NOT    B11
0ab80: 553b                      OR     B9,B11
0ab90: 567b                      XOR    B3,B11
0aba0: 1f95                      BTST   3h,B5
0abb0: cb00 fd3a                 JRNE   7F70h
0abd0: 016a                      JUMP   A10
0abe0: 4d3b                      MOVE   B9,B11
0abf0: 567b                      XOR    B3,B11
0ac00: 1f95                      BTST   3h,B5
0ac10: cb00 fd34                 JRNE   7F70h
0ac30: 016a                      JUMP   A10
0ac40: 4c7b                      MOVE   B3,B11
0ac50: 543b                      OR     B1,B11
0ac60: 03fb                      NOT    B11
0ac70: 553b                      OR     B9,B11
0ac80: 567b                      XOR    B3,B11
0ac90: 1f95                      BTST   3h,B5
0aca0: cb00 fd2b                 JRNE   7F70h
0acc0: 016a                      JUMP   A10
0acd0: 4c7b                      MOVE   B3,B11
0ace0: 563b                      XOR    B1,B11
0acf0: 553b                      OR     B9,B11
0ad00: 567b                      XOR    B3,B11
0ad10: 1f95                      BTST   3h,B5
0ad20: cb00 fd23                 JRNE   7F70h
0ad40: 016a                      JUMP   A10
0ad50: 4c3b                      MOVE   B1,B11
0ad60: 03fb                      NOT    B11
0ad70: 553b                      OR     B9,B11
0ad80: 507b                      AND    B3,B11
0ad90: 03fb                      NOT    B11
0ada0: 1f95                      BTST   3h,B5
0adb0: cb00 fd1a                 JRNE   7F70h
0add0: 016a                      JUMP   A10
0ade0: 4c7b                      MOVE   B3,B11
0adf0: 03fb                      NOT    B11
0ae00: 503b                      AND    B1,B11
0ae10: 553b                      OR     B9,B11
0ae20: 567b                      XOR    B3,B11
0ae30: 1f95                      BTST   3h,B5
0ae40: cb00 fd11                 JRNE   7F70h
0ae60: 016a                      JUMP   A10
0ae70: 4d3b                      MOVE   B9,B11
0ae80: 507b                      AND    B3,B11
0ae90: 03fb                      NOT    B11
0aea0: 1f95                      BTST   3h,B5
0aeb0: cb00 fd0a                 JRNE   7F70h
0aed0: 016a                      JUMP   A10
0aee0: 4c3b                      MOVE   B1,B11
0aef0: 567b                      XOR    B3,B11
0af00: 513b                      AND    B9,B11
0af10: 1f95                      BTST   3h,B5
0af20: cb00 fd03                 JRNE   7F70h
0af40: 016a                      JUMP   A10
0af50: 4c3b                      MOVE   B1,B11
0af60: 507b                      AND    B3,B11
0af70: 553b                      OR     B9,B11
0af80: 563b                      XOR    B1,B11
0af90: 567b                      XOR    B3,B11
0afa0: 03fb                      NOT    B11
0afb0: 1f95                      BTST   3h,B5
0afc0: cb00 fcf9                 JRNE   7F70h
0afe0: 016a                      JUMP   A10
0aff0: 4c7b                      MOVE   B3,B11
0b000: 553b                      OR     B9,B11
0b010: 503b                      AND    B1,B11
0b020: 567b                      XOR    B3,B11
0b030: 1f95                      BTST   3h,B5
0b040: cb00 fcf1                 JRNE   7F70h
0b060: 016a                      JUMP   A10
0b070: 4d3b                      MOVE   B9,B11
0b080: 03fb                      NOT    B11
0b090: 547b                      OR     B3,B11
0b0a0: 563b                      XOR    B1,B11
0b0b0: 1f95                      BTST   3h,B5
0b0c0: cb00 fce9                 JRNE   7F70h
0b0e0: 016a                      JUMP   A10
0b0f0: 4c3b                      MOVE   B1,B11
0b100: 553b                      OR     B9,B11
0b110: 507b                      AND    B3,B11
0b120: 563b                      XOR    B1,B11
0b130: 1f95                      BTST   3h,B5
0b140: cb00 fce1                 JRNE   7F70h
0b160: 016a                      JUMP   A10
0b170: 4d3b                      MOVE   B9,B11
0b180: 03fb                      NOT    B11
0b190: 543b                      OR     B1,B11
0b1a0: 567b                      XOR    B3,B11
0b1b0: 1f95                      BTST   3h,B5
0b1c0: cb00 fcd9                 JRNE   7F70h
0b1e0: 016a                      JUMP   A10
0b1f0: 4c3b                      MOVE   B1,B11
0b200: 567b                      XOR    B3,B11
0b210: 016a                      JUMP   A10
0b220: 4c3b                      MOVE   B1,B11
0b230: 553b                      OR     B9,B11
0b240: 03fb                      NOT    B11
0b250: 547b                      OR     B3,B11
0b260: 563b                      XOR    B1,B11
0b270: 1f95                      BTST   3h,B5
0b280: cb00 fccd                 JRNE   7F70h
0b2a0: 016a                      JUMP   A10
0b2b0: 4c3b                      MOVE   B1,B11
0b2c0: 547b                      OR     B3,B11
0b2d0: 03fb                      NOT    B11
0b2e0: 553b                      OR     B9,B11
0b2f0: 563b                      XOR    B1,B11
0b300: 567b                      XOR    B3,B11
0b310: 03fb                      NOT    B11
0b320: 1f95                      BTST   3h,B5
0b330: cb00 fcc2                 JRNE   7F70h
0b350: 016a                      JUMP   A10
0b360: 4c3b                      MOVE   B1,B11
0b370: 567b                      XOR    B3,B11
0b380: 573b                      XOR    B9,B11
0b390: 03fb                      NOT    B11
0b3a0: 1f95                      BTST   3h,B5
0b3b0: cb00 fcba                 JRNE   7F70h
0b3d0: 016a                      JUMP   A10
0b3e0: 4c3b                      MOVE   B1,B11
0b3f0: 513b                      AND    B9,B11
0b400: 567b                      XOR    B3,B11
0b410: 1f95                      BTST   3h,B5
0b420: cb00 fcb3                 JRNE   7F70h
0b440: 016a                      JUMP   A10
0b450: 4c3b                      MOVE   B1,B11
0b460: 553b                      OR     B9,B11
0b470: 507b                      AND    B3,B11
0b480: 563b                      XOR    B1,B11
0b490: 573b                      XOR    B9,B11
0b4a0: 03fb                      NOT    B11
0b4b0: 1f95                      BTST   3h,B5
0b4c0: cb00 fca9                 JRNE   7F70h
0b4e0: 016a                      JUMP   A10
0b4f0: 4d3b                      MOVE   B9,B11
0b500: 507b                      AND    B3,B11
0b510: 563b                      XOR    B1,B11
0b520: 1f95                      BTST   3h,B5
0b530: cb00 fca2                 JRNE   7F70h
0b550: 016a                      JUMP   A10
0b560: 4c7b                      MOVE   B3,B11
0b570: 553b                      OR     B9,B11
0b580: 503b                      AND    B1,B11
0b590: 567b                      XOR    B3,B11
0b5a0: 573b                      XOR    B9,B11
0b5b0: 03fb                      NOT    B11
0b5c0: 1f95                      BTST   3h,B5
0b5d0: cb00 fc98                 JRNE   7F70h
0b5f0: 016a                      JUMP   A10
0b600: 4c3b                      MOVE   B1,B11
0b610: 03fb                      NOT    B11
0b620: 553b                      OR     B9,B11
0b630: 507b                      AND    B3,B11
0b640: 563b                      XOR    B1,B11
0b650: 1f95                      BTST   3h,B5
0b660: cb00 fc8f                 JRNE   7F70h
0b680: 016a                      JUMP   A10
0b690: 4c3b                      MOVE   B1,B11
0b6a0: 567b                      XOR    B3,B11
0b6b0: 03fb                      NOT    B11
0b6c0: 513b                      AND    B9,B11
0b6d0: 03fb                      NOT    B11
0b6e0: 1f95                      BTST   3h,B5
0b6f0: cb00 fc86                 JRNE   7F70h
0b710: 016a                      JUMP   A10
0b720: 4c3b                      MOVE   B1,B11
0b730: 507b                      AND    B3,B11
0b740: 03fb                      NOT    B11
0b750: 513b                      AND    B9,B11
0b760: 1f95                      BTST   3h,B5
0b770: cb00 fc7e                 JRNE   7F70h
0b790: 016a                      JUMP   A10
0b7a0: 4c34                      MOVE   B1,B4
0b7b0: 5634                      XOR    B1,B4
0b7c0: 4c7b                      MOVE   B3,B11
0b7d0: 573b                      XOR    B9,B11
0b7e0: 509b                      AND    B4,B11
0b7f0: 563b                      XOR    B1,B11
0b800: 03fb                      NOT    B11
0b810: 1f95                      BTST   3h,B5
0b820: cb00 fc73                 JRNE   7F70h
0b840: 016a                      JUMP   A10
0b850: 4c3b                      MOVE   B1,B11
0b860: 573b                      XOR    B9,B11
0b870: 547b                      OR     B3,B11
0b880: 563b                      XOR    B1,B11
0b890: 1f95                      BTST   3h,B5
0b8a0: cb00 fc6b                 JRNE   7F70h
0b8c0: 016a                      JUMP   A10
0b8d0: 4d3b                      MOVE   B9,B11
0b8e0: 03fb                      NOT    B11
0b8f0: 547b                      OR     B3,B11
0b900: 503b                      AND    B1,B11
0b910: 03fb                      NOT    B11
0b920: 1f95                      BTST   3h,B5
0b930: cb00 fc62                 JRNE   7F70h
0b950: 016a                      JUMP   A10
0b960: 4c7b                      MOVE   B3,B11
0b970: 573b                      XOR    B9,B11
0b980: 543b                      OR     B1,B11
0b990: 567b                      XOR    B3,B11
0b9a0: 1f95                      BTST   3h,B5
0b9b0: cb00 fc5a                 JRNE   7F70h
0b9d0: 016a                      JUMP   A10
0b9e0: 4d3b                      MOVE   B9,B11
0b9f0: 03fb                      NOT    B11
0ba00: 543b                      OR     B1,B11
0ba10: 507b                      AND    B3,B11
0ba20: 03fb                      NOT    B11
0ba30: 1f95                      BTST   3h,B5
0ba40: cb00 fc51                 JRNE   7F70h
0ba60: 016a                      JUMP   A10
0ba70: 4c3b                      MOVE   B1,B11
0ba80: 03fb                      NOT    B11
0ba90: 513b                      AND    B9,B11
0baa0: 547b                      OR     B3,B11
0bab0: 563b                      XOR    B1,B11
0bac0: 1f95                      BTST   3h,B5
0bad0: cb00 fc48                 JRNE   7F70h
0baf0: 016a                      JUMP   A10
0bb00: 4c3b                      MOVE   B1,B11
0bb10: 507b                      AND    B3,B11
0bb20: 03fb                      NOT    B11
0bb30: 016a                      JUMP   A10
0bb40: 4c3b                      MOVE   B1,B11
0bb50: 507b                      AND    B3,B11
0bb60: 573b                      XOR    B9,B11
0bb70: 1f95                      BTST   3h,B5
0bb80: cb00 fc3d                 JRNE   7F70h
0bba0: 016a                      JUMP   A10
0bbb0: 4c3b                      MOVE   B1,B11
0bbc0: 547b                      OR     B3,B11
0bbd0: 513b                      AND    B9,B11
0bbe0: 563b                      XOR    B1,B11
0bbf0: 567b                      XOR    B3,B11
0bc00: 03fb                      NOT    B11
0bc10: 1f95                      BTST   3h,B5
0bc20: cb00 fc33                 JRNE   7F70h
0bc40: 016a                      JUMP   A10
0bc50: 4c7b                      MOVE   B3,B11
0bc60: 03fb                      NOT    B11
0bc70: 543b                      OR     B1,B11
0bc80: 513b                      AND    B9,B11
0bc90: 567b                      XOR    B3,B11
0bca0: 1f95                      BTST   3h,B5
0bcb0: cb00 fc2a                 JRNE   7F70h
0bcd0: 016a                      JUMP   A10
0bce0: 4d3b                      MOVE   B9,B11
0bcf0: 567b                      XOR    B3,B11
0bd00: 03fb                      NOT    B11
0bd10: 4c3b                      MOVE   B1,B11
0bd20: 03fb                      NOT    B11
0bd30: 1f95                      BTST   3h,B5
0bd40: cb00 fc21                 JRNE   7F70h
0bd60: 016a                      JUMP   A10
0bd70: 4c3b                      MOVE   B1,B11
0bd80: 03fb                      NOT    B11
0bd90: 547b                      OR     B3,B11
0bda0: 513b                      AND    B9,B11
0bdb0: 563b                      XOR    B1,B11
0bdc0: 1f95                      BTST   3h,B5
0bdd0: cb00 fc18                 JRNE   7F70h
0bdf0: 016a                      JUMP   A10
0be00: 4c3b                      MOVE   B1,B11
0be10: 573b                      XOR    B9,B11
0be20: 03fb                      NOT    B11
0be30: 507b                      AND    B3,B11
0be40: 03fb                      NOT    B11
0be50: 1f95                      BTST   3h,B5
0be60: cb00 fc0f                 JRNE   7F70h
0be80: 016a                      JUMP   A10
0be90: 4d34                      MOVE   B9,B4
0bea0: 5634                      XOR    B1,B4
0beb0: 4c3b                      MOVE   B1,B11
0bec0: 567b                      XOR    B3,B11
0bed0: 549b                      OR     B4,B11
0bee0: 1f95                      BTST   3h,B5
0bef0: cb00 fc06                 JRNE   7F70h
0bf10: 016a                      JUMP   A10
0bf20: 4c3b                      MOVE   B1,B11
0bf30: 513b                      AND    B9,B11
0bf40: 507b                      AND    B3,B11
0bf50: 03fb                      NOT    B11
0bf60: 1f95                      BTST   3h,B5
0bf70: cb00 fbfe                 JRNE   7F70h
0bf90: 016a                      JUMP   A10

_fillsrv10:
0bfa0: c060                      JR     C5B0h
0bfb0: 0000                      DW     0000h
0bfc0: ca80 0000 d340            JAEQ   D3400000h
0bff0: 0000                      DW     0000h
0c000: dda0                      DW     DDA0h
0c010: 0000                      DW     0000h
0c020: e750                      CPW    B10,B0
0c030: 0000                      DW     0000h
0c040: eff0                      MOVY   SP,B0
0c050: 0000                      DW     0000h
0c060: 05ba 0150 c000            MOVE   @C0000150h,B10,0
0c090: 143a                      DEC    B10
0c0a0: ca5b                      JREQ   C660h
0c0b0: 099f f100                 MMTM   SP,B0-B3,B7
0c0d0: 098f f080                 MMTM   SP,A0-A3,A8
0c0f0: 0542                      SETF   2h,0,0
0c100: 05a8 00b6 c000            MOVE   @C00000B6h,A8,0
0c130: 183a                      MOVK   1h,B10
0c140: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0c170: 855a                      MOVE   *B10,B10,0
0c180: 4e10                      MOVE   B0,A0
0c190: 0fe0                      FILL   XY
0c1a0: cd06                      JRNV   C210h
0c1b0: 4e00                      MOVE   A0,B0
0c1c0: 0588 00b6 c000            MOVE   A8,@C00000B6h,0
0c1f0: 0550                      SETF   10h,0,0
0c200: c040                      JR     C610h
0c210: 0588 00b6 c000            MOVE   A8,@C00000B6h,0
0c240: 0550                      SETF   10h,0,0
0c250: 4ef1                      MOVE   B7,A1
0c260: 2e01                      SRL    10h,A1
0c270: 4ef2                      MOVE   B7,A2
0c280: 0522                      ZEXT   A2,0
0c290: 4e53                      MOVE   B2,A3
0c2a0: 4e00                      MOVE   A0,B0
0c2b0: 4e62                      MOVE   A3,B2
0c2c0: 4e47                      MOVE   A2,B7
0c2d0: 4ef8                      MOVE   B7,A8
0c2e0: 18fa                      MOVK   7h,B10
0c2f0: 261a                      SLL    10h,B10
0c300: 505a                      AND    B2,B10
0c310: 2e7a                      SRL    Dh,B10
0c320: 4150                      ADD    B10,B0
0c330: 4c5a                      MOVE   B2,B10
0c340: e852                      CVXYL  B2,B2
0c350: 18fb                      MOVK   7h,B11
0c360: 517a                      AND    B11,B10
0c370: ca12                      JREQ   C4A0h
0c380: 191b                      MOVK   8h,B11
0c390: 455b                      SUB    B10,B11
0c3a0: 4150                      ADD    B10,B0
0c3b0: 4977                      CMP    B11,B7
0c3c0: c61b                      JRLE   C580h
0c3d0: 4577                      SUB    B11,B7
0c3e0: 4ef8                      MOVE   B7,A8
0c3f0: 4d77                      MOVE   B11,B7
0c400: 0bb7 0000 0001            ORI    10000h,B7
0c430: 4d51                      MOVE   B10,B1
0c440: 03b1                      NEG    B1
0c450: 4d73                      MOVE   B11,B3
0c460: e873                      CVXYL  B3,B3
0c470: 4493                      SUB    B4,B3
0c480: 0f80                      PIXBLT B,L
0c490: 4f07                      MOVE   A8,B7
0c4a0: 0537                      ZEXT   B7,0
0c4b0: 1913                      MOVK   8h,B3
0c4c0: 4877                      CMP    B3,B7
0c4d0: c60a                      JRLE   C580h
0c4e0: 25b7                      SLL    Dh,B7
0c4f0: ec77                      MOVX   B3,B7
0c500: 5631                      CLR    B1
0c510: e873                      CVXYL  B3,B3
0c520: 4493                      SUB    B4,B3
0c530: 0f80                      PIXBLT B,L
0c540: 4f07                      MOVE   A8,B7
0c550: 18fa                      MOVK   7h,B10
0c560: 5157                      AND    B10,B7
0c570: ca04                      JREQ   C5C0h
0c580: 0bb7 0000 0001            ORI    10000h,B7
0c5b0: 0f80                      PIXBLT B,L
0c5c0: 0b23 0000 0001            ADDI   10000h,A3
0c5f0: 0d81 ffc9                 DSJ    A1,C2A0h
0c610: 09af 010f                 MMFM   SP,A0-A3,A8
0c630: 09bf 008f                 MMFM   SP,B0-B3,B7
0c650: 0960                      RETS   
0c660: 098f c080                 MMTM   SP,A0,A1,A8
0c680: 099f 41c0                 MMTM   SP,B1,B7-B9
0c6a0: 0542                      SETF   2h,0,0
0c6b0: 05a0 00b6 c000            MOVE   @C00000B6h,A0,0
0c6e0: 183a                      MOVK   1h,B10
0c6f0: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0c720: 855a                      MOVE   *B10,B10,0
0c730: 4e18                      MOVE   B0,A8
0c740: 0fe0                      FILL   XY
0c750: cd06                      JRNV   C7C0h
0c760: 4f00                      MOVE   A8,B0
0c770: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0c7a0: 0550                      SETF   10h,0,0
0c7b0: c027                      JR     CA30h
0c7c0: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0c7f0: 0550                      SETF   10h,0,0
0c800: 4e50                      MOVE   B2,A0
0c810: 4ef1                      MOVE   B7,A1
0c820: 2e01                      SRL    10h,A1
0c830: 0537                      ZEXT   B7,0
0c840: 0bb7 0000 0001            ORI    10000h,B7
0c870: 4d31                      MOVE   B9,B1
0c880: 4e02                      MOVE   A0,B2
0c890: 4f00                      MOVE   A8,B0
0c8a0: 18fa                      MOVK   7h,B10
0c8b0: 261a                      SLL    10h,B10
0c8c0: 505a                      AND    B2,B10
0c8d0: e852                      CVXYL  B2,B2
0c8e0: 2e7a                      SRL    Dh,B10
0c8f0: 401a                      ADD    B0,B10
0c900: 0548                      SETF   8h,0,0
0c910: 855c                      MOVE   *B10,B12,0
0c920: 0550                      SETF   10h,0,0
0c930: 4d9b                      MOVE   B12,B11
0c940: 251b                      SLL    8h,B11
0c950: 557c                      OR     B11,B12
0c960: 4d9b                      MOVE   B12,B11
0c970: 261b                      SLL    10h,B11
0c980: 557c                      OR     B11,B12
0c990: 4c39                      MOVE   B1,B9
0c9a0: 5199                      AND    B12,B9
0c9b0: 4d1b                      MOVE   B8,B11
0c9c0: 539b                      ANDN   B12,B11
0c9d0: 5579                      OR     B11,B9
0c9e0: 0fc0                      FILL   L
0c9f0: 0b20 0000 0001            ADDI   10000h,A0
0ca20: 3f61                      DSJS   A1,C880h
0ca30: 09bf 0382                 MMFM   SP,B1,B7-B9
0ca50: 09af 0103                 MMFM   SP,A0,A1,A8
0ca70: 0960                      RETS   
0ca80: 05ba 0150 c000            MOVE   @C0000150h,B10,0
0cab0: 143a                      DEC    B10
0cac0: ca50                      JREQ   CFD0h
0cad0: 099f f100                 MMTM   SP,B0-B3,B7
0caf0: 098f 8080                 MMTM   SP,A0,A8
0cb10: 0542                      SETF   2h,0,0
0cb20: 05a8 00b6 c000            MOVE   @C00000B6h,A8,0
0cb50: 183a                      MOVK   1h,B10
0cb60: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0cb90: 855a                      MOVE   *B10,B10,0
0cba0: 4e10                      MOVE   B0,A0
0cbb0: 0fe0                      FILL   XY
0cbc0: cd06                      JRNV   CC30h
0cbd0: 4e00                      MOVE   A0,B0
0cbe0: 0588 00b6 c000            MOVE   A8,@C00000B6h,0
0cc10: 0550                      SETF   10h,0,0
0cc20: c035                      JR     CF80h
0cc30: 0588 00b6 c000            MOVE   A8,@C00000B6h,0
0cc60: 0550                      SETF   10h,0,0
0cc70: 4e00                      MOVE   A0,B0
0cc80: 0537                      ZEXT   B7,0
0cc90: 4ef8                      MOVE   B7,A8
0cca0: 18fa                      MOVK   7h,B10
0ccb0: 261a                      SLL    10h,B10
0ccc0: 505a                      AND    B2,B10
0ccd0: 2e7a                      SRL    Dh,B10
0cce0: 4150                      ADD    B10,B0
0ccf0: 4c5a                      MOVE   B2,B10
0cd00: e852                      CVXYL  B2,B2
0cd10: 18fb                      MOVK   7h,B11
0cd20: 517a                      AND    B11,B10
0cd30: ca12                      JREQ   CE60h
0cd40: 191b                      MOVK   8h,B11
0cd50: 455b                      SUB    B10,B11
0cd60: 4150                      ADD    B10,B0
0cd70: 4977                      CMP    B11,B7
0cd80: c61b                      JRLE   CF40h
0cd90: 4577                      SUB    B11,B7
0cda0: 4ef8                      MOVE   B7,A8
0cdb0: 4d77                      MOVE   B11,B7
0cdc0: 0bb7 0000 0001            ORI    10000h,B7
0cdf0: 4d51                      MOVE   B10,B1
0ce00: 03b1                      NEG    B1
0ce10: 4d73                      MOVE   B11,B3
0ce20: e873                      CVXYL  B3,B3
0ce30: 4493                      SUB    B4,B3
0ce40: 0f80                      PIXBLT B,L
0ce50: 4f07                      MOVE   A8,B7
0ce60: 0537                      ZEXT   B7,0
0ce70: 1913                      MOVK   8h,B3
0ce80: 4877                      CMP    B3,B7
0ce90: c60a                      JRLE   CF40h
0cea0: 25b7                      SLL    Dh,B7
0ceb0: ec77                      MOVX   B3,B7
0cec0: 5631                      CLR    B1
0ced0: e873                      CVXYL  B3,B3
0cee0: 4493                      SUB    B4,B3
0cef0: 0f80                      PIXBLT B,L
0cf00: 4f07                      MOVE   A8,B7
0cf10: 18fa                      MOVK   7h,B10
0cf20: 5157                      AND    B10,B7
0cf30: ca04                      JREQ   CF80h
0cf40: 0bb7 0000 0001            ORI    10000h,B7
0cf70: 0f80                      PIXBLT B,L
0cf80: 09af 0101                 MMFM   SP,A0,A8
0cfa0: 09bf 008f                 MMFM   SP,B0-B3,B7
0cfc0: 0960                      RETS   
0cfd0: 098f 8080                 MMTM   SP,A0,A8
0cff0: 099f 01c0                 MMTM   SP,B7-B9
0d010: 0542                      SETF   2h,0,0
0d020: 05a0 00b6 c000            MOVE   @C00000B6h,A0,0
0d050: 183a                      MOVK   1h,B10
0d060: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0d090: 855a                      MOVE   *B10,B10,0
0d0a0: 4e18                      MOVE   B0,A8
0d0b0: 0fe0                      FILL   XY
0d0c0: cd06                      JRNV   D130h
0d0d0: 4f00                      MOVE   A8,B0
0d0e0: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0d110: 0550                      SETF   10h,0,0
0d120: c01c                      JR     D2F0h
0d130: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0d160: 0550                      SETF   10h,0,0
0d170: 4f00                      MOVE   A8,B0
0d180: 0537                      ZEXT   B7,0
0d190: 0bb7 0000 0001            ORI    10000h,B7
0d1c0: 18fa                      MOVK   7h,B10
0d1d0: 261a                      SLL    10h,B10
0d1e0: 505a                      AND    B2,B10
0d1f0: e852                      CVXYL  B2,B2
0d200: 2e7a                      SRL    Dh,B10
0d210: 401a                      ADD    B0,B10
0d220: 0548                      SETF   8h,0,0
0d230: 855c                      MOVE   *B10,B12,0
0d240: 0550                      SETF   10h,0,0
0d250: 4d9b                      MOVE   B12,B11
0d260: 251b                      SLL    8h,B11
0d270: 557c                      OR     B11,B12
0d280: 4d9b                      MOVE   B12,B11
0d290: 261b                      SLL    10h,B11
0d2a0: 557c                      OR     B11,B12
0d2b0: 5199                      AND    B12,B9
0d2c0: 5398                      ANDN   B12,B8
0d2d0: 5519                      OR     B8,B9
0d2e0: 0fc0                      FILL   L
0d2f0: 09bf 0380                 MMFM   SP,B7-B9
0d310: 09af 0101                 MMFM   SP,A0,A8
0d330: 0960                      RETS   
0d340: 05ba 0150 c000            MOVE   @C0000150h,B10,0
0d370: 143a                      DEC    B10
0d380: ca65                      JREQ   D9E0h
0d390: 098f f200                 MMTM   SP,A0-A3,A6
0d3b0: 099f 11c0                 MMTM   SP,B3,B7-B9
0d3d0: 05a6 0150 c000            MOVE   @C0000150h,A6,0
0d400: 6ac6                      LMO    A6,A6
0d410: 17e6                      SUBK   1Fh,A6
0d420: 03a6                      NEG    A6
0d430: 05b9 00b0 c000            MOVE   @C00000B0h,B9,0
0d460: 183a                      MOVK   1h,B10
0d470: 0542                      SETF   2h,0,0
0d480: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0d4b0: 855a                      MOVE   *B10,B10,0
0d4c0: 4c18                      MOVE   B0,B8
0d4d0: 0fe0                      FILL   XY
0d4e0: 0550                      SETF   10h,0,0
0d4f0: cd05                      JRNV   D550h
0d500: 4d10                      MOVE   B8,B0
0d510: 0599 00b0 c000            MOVE   B9,@C00000B0h,0
0d540: c044                      JR     D990h
0d550: 4d10                      MOVE   B8,B0
0d560: 0599 00b0 c000            MOVE   B9,@C00000B0h,0
0d590: 09e3 0000 0001            MOVI   10000h,A3
0d5c0: 4e10                      MOVE   B0,A0
0d5d0: 4e51                      MOVE   B2,A1
0d5e0: 4ef2                      MOVE   B7,A2
0d5f0: 4c48                      MOVE   A2,A8
0d600: 2e08                      SRL    10h,A8
0d610: 0522                      ZEXT   A2,0
0d620: 4e00                      MOVE   A0,B0
0d630: 4e22                      MOVE   A1,B2
0d640: 4e47                      MOVE   A2,B7
0d650: 4cf8                      MOVE   B7,B8
0d660: 4c5a                      MOVE   B2,B10
0d670: 25ba                      SLL    Dh,B10
0d680: 2c7a                      SRL    1Dh,B10
0d690: 247a                      SLL    3h,B10
0d6a0: 4ece                      MOVE   A6,B14
0d6b0: 63da                      SLL    B14,B10
0d6c0: 4150                      ADD    B10,B0
0d6d0: 4c5a                      MOVE   B2,B10
0d6e0: e852                      CVXYL  B2,B2
0d6f0: 27ba                      SLL    1Dh,B10
0d700: 2c7a                      SRL    1Dh,B10
0d710: ca13                      JREQ   D850h
0d720: 191b                      MOVK   8h,B11
0d730: 455b                      SUB    B10,B11
0d740: 4ece                      MOVE   A6,B14
0d750: 63da                      SLL    B14,B10
0d760: 4150                      ADD    B10,B0
0d770: 4977                      CMP    B11,B7
0d780: c61a                      JRLE   D930h
0d790: 4577                      SUB    B11,B7
0d7a0: 4cf8                      MOVE   B7,B8
0d7b0: 4d77                      MOVE   B11,B7
0d7c0: 4e6c                      MOVE   A3,B12
0d7d0: 5597                      OR     B12,B7
0d7e0: 4d51                      MOVE   B10,B1
0d7f0: 03b1                      NEG    B1
0d800: 4d73                      MOVE   B11,B3
0d810: 4ece                      MOVE   A6,B14
0d820: 63d3                      SLL    B14,B3
0d830: 0f00                      PIXBLT L,L
0d840: 4d17                      MOVE   B8,B7
0d850: 0537                      ZEXT   B7,0
0d860: 1913                      MOVK   8h,B3
0d870: 4877                      CMP    B3,B7
0d880: c60a                      JRLE   D930h
0d890: 25b7                      SLL    Dh,B7
0d8a0: ec77                      MOVX   B3,B7
0d8b0: 5631                      CLR    B1
0d8c0: 4ece                      MOVE   A6,B14
0d8d0: 63d3                      SLL    B14,B3
0d8e0: 0f00                      PIXBLT L,L
0d8f0: 4d17                      MOVE   B8,B7
0d900: 27b7                      SLL    1Dh,B7
0d910: 2c77                      SRL    1Dh,B7
0d920: ca03                      JREQ   D960h
0d930: 4e6c                      MOVE   A3,B12
0d940: 5597                      OR     B12,B7
0d950: 0f00                      PIXBLT L,L
0d960: e061                      ADDXY  A3,A1
0d970: 0d88 ffc9                 DSJ    A8,D620h
0d990: 09bf 0388                 MMFM   SP,B3,B7-B9
0d9b0: 09af 004f                 MMFM   SP,A0-A3,A6
0d9d0: 0960                      RETS   
0d9e0: 098f c080                 MMTM   SP,A0,A1,A8
0da00: 099f 0140                 MMTM   SP,B7,B9
0da20: 0542                      SETF   2h,0,0
0da30: 05a0 00b6 c000            MOVE   @C00000B6h,A0,0
0da60: 183a                      MOVK   1h,B10
0da70: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0daa0: 855a                      MOVE   *B10,B10,0
0dab0: 4e18                      MOVE   B0,A8
0dac0: 0fe0                      FILL   XY
0dad0: cd06                      JRNV   DB40h
0dae0: 4f00                      MOVE   A8,B0
0daf0: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0db20: 0550                      SETF   10h,0,0
0db30: c021                      JR     DD50h
0db40: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0db70: 0550                      SETF   10h,0,0
0db80: 4e50                      MOVE   B2,A0
0db90: 4ef1                      MOVE   B7,A1
0dba0: 2e01                      SRL    10h,A1
0dbb0: 0537                      ZEXT   B7,0
0dbc0: 0bb7 0000 0001            ORI    10000h,B7
0dbf0: 4e02                      MOVE   A0,B2
0dc00: 4f00                      MOVE   A8,B0
0dc10: 18fa                      MOVK   7h,B10
0dc20: 261a                      SLL    10h,B10
0dc30: 505a                      AND    B2,B10
0dc40: e852                      CVXYL  B2,B2
0dc50: 2e7a                      SRL    Dh,B10
0dc60: 401a                      ADD    B0,B10
0dc70: 0548                      SETF   8h,0,0
0dc80: 8559                      MOVE   *B10,B9,0
0dc90: 0550                      SETF   10h,0,0
0dca0: 4d3b                      MOVE   B9,B11
0dcb0: 251b                      SLL    8h,B11
0dcc0: 5579                      OR     B11,B9
0dcd0: 4d3b                      MOVE   B9,B11
0dce0: 261b                      SLL    10h,B11
0dcf0: 5579                      OR     B11,B9
0dd00: 0fc0                      FILL   L
0dd10: 0b20 0000 0001            ADDI   10000h,A0
0dd40: 3ec1                      DSJS   A1,DBF0h
0dd50: 09bf 0280                 MMFM   SP,B7,B9
0dd70: 09af 0103                 MMFM   SP,A0,A1,A8
0dd90: 0960                      RETS   
0dda0: 05ba 0150 c000            MOVE   @C0000150h,B10,0
0ddd0: 143a                      DEC    B10
0dde0: cabf                      JREQ   D9E0h
0ddf0: 098f 1200                 MMTM   SP,A3,A6
0de10: 099f d1c0                 MMTM   SP,B0,B1,B3,B7-B9
0de30: 05a6 0150 c000            MOVE   @C0000150h,A6,0
0de60: 6ac6                      LMO    A6,A6
0de70: 17e6                      SUBK   1Fh,A6
0de80: 03a6                      NEG    A6
0de90: 05b9 00b0 c000            MOVE   @C00000B0h,B9,0
0dec0: 183a                      MOVK   1h,B10
0ded0: 0542                      SETF   2h,0,0
0dee0: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0df10: 855a                      MOVE   *B10,B10,0
0df20: 4c18                      MOVE   B0,B8
0df30: 0fe0                      FILL   XY
0df40: 0550                      SETF   10h,0,0
0df50: cd05                      JRNV   DFB0h
0df60: 4d10                      MOVE   B8,B0
0df70: 0599 00b0 c000            MOVE   B9,@C00000B0h,0
0dfa0: c039                      JR     E340h
0dfb0: 4d10                      MOVE   B8,B0
0dfc0: 0599 00b0 c000            MOVE   B9,@C00000B0h,0
0dff0: 09e3 0000 0001            MOVI   10000h,A3
0e020: 0537                      ZEXT   B7,0
0e030: 4cf8                      MOVE   B7,B8
0e040: 4c5a                      MOVE   B2,B10
0e050: 25ba                      SLL    Dh,B10
0e060: 2c7a                      SRL    1Dh,B10
0e070: 247a                      SLL    3h,B10
0e080: 4ece                      MOVE   A6,B14
0e090: 63da                      SLL    B14,B10
0e0a0: 4150                      ADD    B10,B0
0e0b0: 4c5a                      MOVE   B2,B10
0e0c0: e852                      CVXYL  B2,B2
0e0d0: 27ba                      SLL    1Dh,B10
0e0e0: 2c7a                      SRL    1Dh,B10
0e0f0: ca13                      JREQ   E230h
0e100: 191b                      MOVK   8h,B11
0e110: 455b                      SUB    B10,B11
0e120: 4ece                      MOVE   A6,B14
0e130: 63da                      SLL    B14,B10
0e140: 4150                      ADD    B10,B0
0e150: 4977                      CMP    B11,B7
0e160: c61a                      JRLE   E310h
0e170: 4577                      SUB    B11,B7
0e180: 4cf8                      MOVE   B7,B8
0e190: 4d77                      MOVE   B11,B7
0e1a0: 4e6c                      MOVE   A3,B12
0e1b0: 5597                      OR     B12,B7
0e1c0: 4d51                      MOVE   B10,B1
0e1d0: 03b1                      NEG    B1
0e1e0: 4d73                      MOVE   B11,B3
0e1f0: 4ece                      MOVE   A6,B14
0e200: 63d3                      SLL    B14,B3
0e210: 0f00                      PIXBLT L,L
0e220: 4d17                      MOVE   B8,B7
0e230: 0537                      ZEXT   B7,0
0e240: 1913                      MOVK   8h,B3
0e250: 4877                      CMP    B3,B7
0e260: c60a                      JRLE   E310h
0e270: 25b7                      SLL    Dh,B7
0e280: ec77                      MOVX   B3,B7
0e290: 5631                      CLR    B1
0e2a0: 4ece                      MOVE   A6,B14
0e2b0: 63d3                      SLL    B14,B3
0e2c0: 0f00                      PIXBLT L,L
0e2d0: 4d17                      MOVE   B8,B7
0e2e0: 27b7                      SLL    1Dh,B7
0e2f0: 2c77                      SRL    1Dh,B7
0e300: ca03                      JREQ   E340h
0e310: 4e6c                      MOVE   A3,B12
0e320: 5597                      OR     B12,B7
0e330: 0f00                      PIXBLT L,L
0e340: 09bf 038b                 MMFM   SP,B0,B1,B3,B7-B9
0e360: 09af 0048                 MMFM   SP,A3,A6
0e380: 0960                      RETS   
0e390: 098f c080                 MMTM   SP,A0,A1,A8
0e3b0: 099f 0140                 MMTM   SP,B7,B9
0e3d0: 0542                      SETF   2h,0,0
0e3e0: 05a0 00b6 c000            MOVE   @C00000B6h,A0,0
0e410: 183a                      MOVK   1h,B10
0e420: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
0e450: 855a                      MOVE   *B10,B10,0
0e460: 4e18                      MOVE   B0,A8
0e470: 0fe0                      FILL   XY
0e480: cd06                      JRNV   E4F0h
0e490: 4f00                      MOVE   A8,B0
0e4a0: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0e4d0: 0550                      SETF   10h,0,0
0e4e0: c021                      JR     E700h
0e4f0: 0580 00b6 c000            MOVE   A0,@C00000B6h,0
0e520: 0550                      SETF   10h,0,0
0e530: 4e50                      MOVE   B2,A0
0e540: 4ef1                      MOVE   B7,A1
0e550: 2e01                      SRL    10h,A1
0e560: 0537                      ZEXT   B7,0
0e570: 0bb7 0000 0001            ORI    10000h,B7
0e5a0: 4e02                      MOVE   A0,B2
0e5b0: 4f00                      MOVE   A8,B0
0e5c0: 18fa                      MOVK   7h,B10
0e5d0: 261a                      SLL    10h,B10
0e5e0: 505a                      AND    B2,B10
0e5f0: e852                      CVXYL  B2,B2
0e600: 2e7a                      SRL    Dh,B10
0e610: 401a                      ADD    B0,B10
0e620: 0548                      SETF   8h,0,0
0e630: 8559                      MOVE   *B10,B9,0
0e640: 0550                      SETF   10h,0,0
0e650: 4d3b                      MOVE   B9,B11
0e660: 251b                      SLL    8h,B11
0e670: 5579                      OR     B11,B9
0e680: 4d3b                      MOVE   B9,B11
0e690: 261b                      SLL    10h,B11
0e6a0: 5579                      OR     B11,B9
0e6b0: 0fc0                      FILL   L
0e6c0: 0b20 0000 0001            ADDI   10000h,A0
0e6f0: 3ec1                      DSJS   A1,E5A0h
0e700: 09bf 0280                 MMFM   SP,B7,B9
0e720: 09af 0103                 MMFM   SP,A0,A1,A8
0e740: 0960                      RETS   
0e750: 05bb 0150 c000            MOVE   @C0000150h,B11,0
0e780: 143b                      DEC    B11
0e790: ca53                      JREQ   ECD0h
0e7a0: 098f fc80                 MMTM   SP,A0-A5,A8
0e7c0: 099f f102                 MMTM   SP,B0-B3,B7,B14
0e7e0: 07b0 2180 0003            MOVE   @32180h,B0,1
0e810: 4f54                      MOVE   B10,A4
0e820: 4e10                      MOVE   B0,A0
0e830: 4e51                      MOVE   B2,A1
0e840: 4e75                      MOVE   B3,A5
0e850: 4ef2                      MOVE   B7,A2
0e860: 2e02                      SRL    10h,A2
0e870: 4ef3                      MOVE   B7,A3
0e880: 0523                      ZEXT   A3,0
0e890: 4e00                      MOVE   A0,B0
0e8a0: 4e22                      MOVE   A1,B2
0e8b0: 4e67                      MOVE   A3,B7
0e8c0: 4ef8                      MOVE   B7,A8
0e8d0: 4e8e                      MOVE   A4,B14
0e8e0: 4dda                      MOVE   B14,B10
0e8f0: 25ba                      SLL    Dh,B10
0e900: 2c7a                      SRL    1Dh,B10
0e910: 247a                      SLL    3h,B10
0e920: 4150                      ADD    B10,B0
0e930: 4dda                      MOVE   B14,B10
0e940: 27ba                      SLL    1Dh,B10
0e950: 2c7a                      SRL    1Dh,B10
0e960: ca12                      JREQ   EA90h
0e970: 191b                      MOVK   8h,B11
0e980: 455b                      SUB    B10,B11
0e990: 4150                      ADD    B10,B0
0e9a0: 4977                      CMP    B11,B7
0e9b0: c61b                      JRLE   EB70h
0e9c0: 4577                      SUB    B11,B7
0e9d0: 4ef8                      MOVE   B7,A8
0e9e0: 4d77                      MOVE   B11,B7
0e9f0: 0bb7 0000 0001            ORI    10000h,B7
0ea20: 4d51                      MOVE   B10,B1
0ea30: 03b1                      NEG    B1
0ea40: 4d73                      MOVE   B11,B3
0ea50: e873                      CVXYL  B3,B3
0ea60: 4493                      SUB    B4,B3
0ea70: 0f80                      PIXBLT B,L
0ea80: 4f07                      MOVE   A8,B7
0ea90: 0537                      ZEXT   B7,0
0eaa0: 1913                      MOVK   8h,B3
0eab0: 4877                      CMP    B3,B7
0eac0: c60a                      JRLE   EB70h
0ead0: 25b7                      SLL    Dh,B7
0eae0: ec77                      MOVX   B3,B7
0eaf0: 5631                      CLR    B1
0eb00: e873                      CVXYL  B3,B3
0eb10: 4493                      SUB    B4,B3
0eb20: 0f80                      PIXBLT B,L
0eb30: 4f07                      MOVE   A8,B7
0eb40: 27b7                      SLL    1Dh,B7
0eb50: 2c77                      SRL    1Dh,B7
0eb60: ca04                      JREQ   EBB0h
0eb70: 0bb7 0000 0001            ORI    10000h,B7
0eba0: 0f80                      PIXBLT B,L
0ebb0: 40a1                      ADD    A5,A1
0ebc0: 09e8 0000 0001            MOVI   10000h,A8
0ebf0: 4ca5                      MOVE   A5,A5
0ec00: ce04                      JRN    EC50h
0ec10: e104                      ADDXY  A8,A4
0ec20: 0d82 ffc5                 DSJ    A2,E890h
0ec40: c003                      JR     EC80h
0ec50: e304                      SUBXY  A8,A4
0ec60: 0d82 ffc1                 DSJ    A2,E890h
0ec80: 09bf 408f                 MMFM   SP,B0-B3,B7,B14
0eca0: 09af 013f                 MMFM   SP,A0-A5,A8
0ecc0: 0960                      RETS   
0ecd0: 098f c080                 MMTM   SP,A0,A1,A8
0ecf0: 099f c158                 MMTM   SP,B0,B1,B7,B9,B11,B12
0ed10: 4f58                      MOVE   B10,A8
0ed20: 4e50                      MOVE   B2,A0
0ed30: 4ef1                      MOVE   B7,A1
0ed40: 2e01                      SRL    10h,A1
0ed50: 0537                      ZEXT   B7,0
0ed60: 0bb7 0000 0001            ORI    10000h,B7
0ed90: 07b0 2180 0003            MOVE   @32180h,B0,1
0edc0: 4d31                      MOVE   B9,B1
0edd0: 4e02                      MOVE   A0,B2
0ede0: 4f0b                      MOVE   A8,B11
0edf0: 18fa                      MOVK   7h,B10
0ee00: 261a                      SLL    10h,B10
0ee10: 517a                      AND    B11,B10
0ee20: 2e7a                      SRL    Dh,B10
0ee30: 401a                      ADD    B0,B10
0ee40: 0548                      SETF   8h,0,0
0ee50: 855c                      MOVE   *B10,B12,0
0ee60: 0550                      SETF   10h,0,0
0ee70: 4d9b                      MOVE   B12,B11
0ee80: 251b                      SLL    8h,B11
0ee90: 557c                      OR     B11,B12
0eea0: 4d9b                      MOVE   B12,B11
0eeb0: 261b                      SLL    10h,B11
0eec0: 557c                      OR     B11,B12
0eed0: 4c39                      MOVE   B1,B9
0eee0: 5199                      AND    B12,B9
0eef0: 4d1b                      MOVE   B8,B11
0ef00: 539b                      ANDN   B12,B11
0ef10: 5579                      OR     B11,B9
0ef20: 0fc0                      FILL   L
0ef30: 4e0b                      MOVE   A0,B11
0ef40: 407b                      ADD    B3,B11
0ef50: 4f70                      MOVE   B11,A0
0ef60: 0b28 0000 0001            ADDI   10000h,A8
0ef90: 3fa1                      DSJS   A1,EDD0h
0efa0: 09bf 1a83                 MMFM   SP,B0,B1,B7,B9,B11,B12
0efc0: 09af 0103                 MMFM   SP,A0,A1,A8
0efe0: 0960                      RETS   
0eff0: 05bc 0150 c000            MOVE   @C0000150h,B12,0
0f020: 05bb 00b0 c000            MOVE   @C00000B0h,B11,0
0f050: 263b                      SLL    11h,B11
0f060: 2cbb                      SRL    1Bh,B11
0f070: ca00 0096                 JREQ   F9F0h
0f090: 0b5b fff5                 CMPI   Ah,B11
0f0b0: ca00 0092                 JREQ   F9F0h
0f0d0: 143c                      DEC    B12
0f0e0: ca5d                      JREQ   F6C0h
0f0f0: 098f fe80                 MMTM   SP,A0-A6,A8
0f110: 099f f102                 MMTM   SP,B0-B3,B7,B14
0f130: 05a6 0150 c000            MOVE   @C0000150h,A6,0
0f160: 6ac6                      LMO    A6,A6
0f170: 17e6                      SUBK   1Fh,A6
0f180: 03a6                      NEG    A6
0f190: 07b0 2180 0003            MOVE   @32180h,B0,1
0f1c0: 4f54                      MOVE   B10,A4
0f1d0: 4e10                      MOVE   B0,A0
0f1e0: 4e51                      MOVE   B2,A1
0f1f0: 4e75                      MOVE   B3,A5
0f200: 4ef2                      MOVE   B7,A2
0f210: 2e02                      SRL    10h,A2
0f220: 4ef3                      MOVE   B7,A3
0f230: 0523                      ZEXT   A3,0
0f240: 4e00                      MOVE   A0,B0
0f250: 4e22                      MOVE   A1,B2
0f260: 4e67                      MOVE   A3,B7
0f270: 4ef8                      MOVE   B7,A8
0f280: 4e8e                      MOVE   A4,B14
0f290: 4dda                      MOVE   B14,B10
0f2a0: 25ba                      SLL    Dh,B10
0f2b0: 2c7a                      SRL    1Dh,B10
0f2c0: 4ecb                      MOVE   A6,B11
0f2d0: 637a                      SLL    B11,B10
0f2e0: 247a                      SLL    3h,B10
0f2f0: 4150                      ADD    B10,B0
0f300: 4dda                      MOVE   B14,B10
0f310: 27ba                      SLL    1Dh,B10
0f320: 2c7a                      SRL    1Dh,B10
0f330: ca14                      JREQ   F480h
0f340: 191b                      MOVK   8h,B11
0f350: 455b                      SUB    B10,B11
0f360: 4ece                      MOVE   A6,B14
0f370: 63da                      SLL    B14,B10
0f380: 4150                      ADD    B10,B0
0f390: 4977                      CMP    B11,B7
0f3a0: c61b                      JRLE   F560h
0f3b0: 4577                      SUB    B11,B7
0f3c0: 4ef8                      MOVE   B7,A8
0f3d0: 4d77                      MOVE   B11,B7
0f3e0: 0bb7 0000 0001            ORI    10000h,B7
0f410: 4d51                      MOVE   B10,B1
0f420: 03b1                      NEG    B1
0f430: 4d73                      MOVE   B11,B3
0f440: e873                      CVXYL  B3,B3
0f450: 4493                      SUB    B4,B3
0f460: 0f00                      PIXBLT L,L
0f470: 4f07                      MOVE   A8,B7
0f480: 0537                      ZEXT   B7,0
0f490: 1913                      MOVK   8h,B3
0f4a0: 4877                      CMP    B3,B7
0f4b0: c60a                      JRLE   F560h
0f4c0: 25b7                      SLL    Dh,B7
0f4d0: ec77                      MOVX   B3,B7
0f4e0: 5631                      CLR    B1
0f4f0: e873                      CVXYL  B3,B3
0f500: 4493                      SUB    B4,B3
0f510: 0f00                      PIXBLT L,L
0f520: 4f07                      MOVE   A8,B7
0f530: 27b7                      SLL    1Dh,B7
0f540: 2c77                      SRL    1Dh,B7
0f550: ca04                      JREQ   F5A0h
0f560: 0bb7 0000 0001            ORI    10000h,B7
0f590: 0f00                      PIXBLT L,L
0f5a0: 40a1                      ADD    A5,A1
0f5b0: 09e8 0000 0001            MOVI   10000h,A8
0f5e0: 4ca5                      MOVE   A5,A5
0f5f0: ce04                      JRN    F640h
0f600: e104                      ADDXY  A8,A4
0f610: 0d82 ffc1                 DSJ    A2,F240h
0f630: c003                      JR     F670h
0f640: e304                      SUBXY  A8,A4
0f650: 0d82 ffbd                 DSJ    A2,F240h
0f670: 09bf 408f                 MMFM   SP,B0-B3,B7,B14
0f690: 09af 017f                 MMFM   SP,A0-A6,A8
0f6b0: 0960                      RETS   
0f6c0: 098f c080                 MMTM   SP,A0,A1,A8
0f6e0: 099f c140                 MMTM   SP,B0,B1,B7,B9
0f700: 4f58                      MOVE   B10,A8
0f710: 4e50                      MOVE   B2,A0
0f720: 4ef1                      MOVE   B7,A1
0f730: 2e01                      SRL    10h,A1
0f740: 0537                      ZEXT   B7,0
0f750: 0bb7 0000 0001            ORI    10000h,B7
0f780: 07b0 2180 0003            MOVE   @32180h,B0,1
0f7b0: 4d31                      MOVE   B9,B1
0f7c0: 4e02                      MOVE   A0,B2
0f7d0: 4f0b                      MOVE   A8,B11
0f7e0: 18fa                      MOVK   7h,B10
0f7f0: 261a                      SLL    10h,B10
0f800: 517a                      AND    B11,B10
0f810: 2e7a                      SRL    Dh,B10
0f820: 401a                      ADD    B0,B10
0f830: 0548                      SETF   8h,0,0
0f840: 855c                      MOVE   *B10,B12,0
0f850: 0550                      SETF   10h,0,0
0f860: 4d9b                      MOVE   B12,B11
0f870: 251b                      SLL    8h,B11
0f880: 557c                      OR     B11,B12
0f890: 4d9b                      MOVE   B12,B11
0f8a0: 261b                      SLL    10h,B11
0f8b0: 557c                      OR     B11,B12
0f8c0: 4c39                      MOVE   B1,B9
0f8d0: 5199                      AND    B12,B9
0f8e0: 4d1b                      MOVE   B8,B11
0f8f0: 539b                      ANDN   B12,B11
0f900: 5579                      OR     B11,B9
0f910: 4d99                      MOVE   B12,B9
0f920: 0fc0                      FILL   L
0f930: 4e0b                      MOVE   A0,B11
0f940: 407b                      ADD    B3,B11
0f950: 4f70                      MOVE   B11,A0
0f960: 0b28 0000 0001            ADDI   10000h,A8
0f990: 3fc1                      DSJS   A1,F7C0h
0f9a0: 09bf 0283                 MMFM   SP,B0,B1,B7,B9
0f9c0: 09af 0103                 MMFM   SP,A0,A1,A8
0f9e0: 0960                      RETS   

_TENcolorFill:
0f9f0: 4d9e                      MOVE   B12,B14
0fa00: 1ffc                      BTST   0h,B12
0fa10: cb00 00d7                 JRNE   107A0h
0fa30: 099f 0e00                 MMTM   SP,B4-B6
0fa50: a20f                      MOVE   A0,-*SP,1
0fa60: 4f70                      MOVE   B11,A0
0fa70: 4ef8                      MOVE   B7,A8
0fa80: 2e08                      SRL    10h,A8
0fa90: 0537                      ZEXT   B7,0
0faa0: 4d55                      MOVE   B10,B5
0fab0: 25b5                      SLL    Dh,B5
0fac0: 2c75                      SRL    1Dh,B5
0fad0: 4c56                      MOVE   B2,B6
0fae0: 4cd1                      MOVE   B6,B1
0faf0: 5694                      CLR    B4
0fb00: e8f4                      CVXYL  B7,B4
0fb10: 4c9c                      MOVE   B4,B12
0fb20: 2771                      SLL    1Bh,B1
0fb30: 2cb1                      SRL    1Bh,B1
0fb40: 1411                      SUBK   20h,B1
0fb50: 03b1                      NEG    B1
0fb60: 4434                      SUB    B1,B4
0fb70: c704                      JRGT   FBC0h
0fb80: d51c                      EXGF   B12,0
0fb90: 09d4 ffff                 MOVI   FFFFh,B4
0fbb0: c00b                      JR     FC70h
0fbc0: 40dc                      ADD    B6,B12
0fbd0: 277c                      SLL    1Bh,B12
0fbe0: 2cbc                      SRL    1Bh,B12
0fbf0: cb01                      JRNE   FC10h
0fc00: 181c                      MOVK   20h,B12
0fc10: 4594                      SUB    B12,B4
0fc20: c702                      JRGT   FC50h
0fc30: 409c                      ADD    B4,B12
0fc40: 5694                      CLR    B4
0fc50: d51c                      EXGF   B12,0
0fc60: 2f74                      SRL    5h,B4
0fc70: 0bb7 0000 0001            ORI    10000h,B7
0fca0: 1f9e                      BTST   3h,B14
0fcb0: cb18                      JRNE   FE40h
0fcc0: 4cd2                      MOVE   B6,B2
0fcd0: 4cba                      MOVE   B5,B10
0fce0: 27ba                      SLL    1Dh,B10
0fcf0: 2d1a                      SRL    18h,B10
0fd00: 401a                      ADD    B0,B10
0fd10: 1035                      INC    B5
0fd20: 9759                      MOVE   *B10+,B9,1
0fd30: 4d3c                      MOVE   B9,B12
0fd40: 2e1c                      SRL    10h,B12
0fd50: e53c                      CMPXY  B9,B12
0fd60: ce06                      JRN    FDD0h
0fd70: 4d38                      MOVE   B9,B8
0fd80: 0d3f 003d                 CALLR  10170h
0fda0: 4076                      ADD    B3,B6
0fdb0: 3e08                      DSJS   A8,FCC0h
0fdc0: c003                      JR     FE00h
0fdd0: 0fc0                      FILL   L
0fde0: 4076                      ADD    B3,B6
0fdf0: 3e88                      DSJS   A8,FCC0h
0fe00: 97e0                      MOVE   *SP+,A0,1
0fe10: 09bf 0070                 MMFM   SP,B4-B6
0fe30: 0960                      RETS   
0fe40: 1f56                      BTST   5h,B6
0fe50: 0300                      NOP    
0fe60: 4cd2                      MOVE   B6,B2
0fe70: 4cba                      MOVE   B5,B10
0fe80: 27ba                      SLL    1Dh,B10
0fe90: 2d3a                      SRL    17h,B10
0fea0: 401a                      ADD    B0,B10
0feb0: 1035                      INC    B5
0fec0: 9759                      MOVE   *B10+,B9,1
0fed0: 9758                      MOVE   *B10+,B8,1
0fee0: 4919                      CMP    B8,B9
0fef0: cb09                      JRNE   FF90h
0ff00: 4d3c                      MOVE   B9,B12
0ff10: 2e1c                      SRL    10h,B12
0ff20: e53c                      CMPXY  B9,B12
0ff30: ce0a                      JRN    FFE0h
0ff40: 0d3f 0021                 CALLR  10170h
0ff60: 4076                      ADD    B3,B6
0ff70: 3e48                      DSJS   A8,FE60h
0ff80: c0e7                      JR     FE00h
0ff90: 0d3f 001c                 CALLR  10170h
0ffb0: 4076                      ADD    B3,B6
0ffc0: 3ee8                      DSJS   A8,FE60h
0ffd0: c0e2                      JR     FE00h
0ffe0: 0fc0                      FILL   L
0fff0: 4076                      ADD    B3,B6
10000: 3f68                      DSJS   A8,FE60h
10010: c0de                      JR     FE00h
10020: 4d3d                      MOVE   B9,B13
10030: 03b2                      NEG    B2
10040: 685d                      RL     B2,B13
10050: 03b2                      NEG    B2
10060: 4c9c                      MOVE   B4,B12
10070: c108                      JRP    10100h
10080: ca02                      JREQ   100B0h
10090: 91b2                      MOVE   B13,*B2+,0
100a0: 0960                      RETS   
100b0: d511                      EXGF   B1,0
100c0: 91b2                      MOVE   B13,*B2+,0
100d0: d511                      EXGF   B1,0
100e0: 9132                      MOVE   B9,*B2+,0
100f0: 0960                      RETS   
10100: d511                      EXGF   B1,0
10110: 91b2                      MOVE   B13,*B2+,0
10120: 9332                      MOVE   B9,*B2+,1
10130: 3c5c                      DSJS   B12,10120h
10140: d511                      EXGF   B1,0
10150: 9132                      MOVE   B9,*B2+,0
10160: 0960                      RETS   
10170: 4c00                      MOVE   A0,A0
10180: cb25                      JRNE   103E0h
10190: 1f52                      BTST   5h,B2
101a0: ca03                      JREQ   101E0h
101b0: 4d1c                      MOVE   B8,B12
101c0: 4d38                      MOVE   B9,B8
101d0: 4d99                      MOVE   B12,B9
101e0: 4d3d                      MOVE   B9,B13
101f0: 03b2                      NEG    B2
10200: 685d                      RL     B2,B13
10210: 03b2                      NEG    B2
10220: 4c9c                      MOVE   B4,B12
10230: c108                      JRP    102C0h
10240: ca02                      JREQ   10270h
10250: 91b2                      MOVE   B13,*B2+,0
10260: 0960                      RETS   
10270: d511                      EXGF   B1,0
10280: 91b2                      MOVE   B13,*B2+,0
10290: d511                      EXGF   B1,0
102a0: 9112                      MOVE   B8,*B2+,0
102b0: 0960                      RETS   
102c0: d511                      EXGF   B1,0
102d0: 91b2                      MOVE   B13,*B2+,0
102e0: 2ffc                      SRL    1h,B12
102f0: c908                      JRNC   10380h
10300: 9312                      MOVE   B8,*B2+,1
10310: ca03                      JREQ   10350h
10320: 9332                      MOVE   B9,*B2+,1
10330: 9312                      MOVE   B8,*B2+,1
10340: 3c7c                      DSJS   B12,10320h
10350: d511                      EXGF   B1,0
10360: 9132                      MOVE   B9,*B2+,0
10370: 0960                      RETS   
10380: 9312                      MOVE   B8,*B2+,1
10390: 9332                      MOVE   B9,*B2+,1
103a0: 3c7c                      DSJS   B12,10380h
103b0: d511                      EXGF   B1,0
103c0: 9112                      MOVE   B8,*B2+,0
103d0: 0960                      RETS   
103e0: 1f52                      BTST   5h,B2
103f0: ca03                      JREQ   10430h
10400: 4d1c                      MOVE   B8,B12
10410: 4d38                      MOVE   B9,B8
10420: 4d99                      MOVE   B12,B9
10430: 4d3d                      MOVE   B9,B13
10440: 03b2                      NEG    B2
10450: 685d                      RL     B2,B13
10460: 03b2                      NEG    B2
10470: 4c9c                      MOVE   B4,B12
10480: c10e                      JRP    10570h
10490: ca04                      JREQ   104E0h
104a0: 845e                      MOVE   *B2,B14,0
104b0: 57be                      XOR    B13,B14
104c0: 91d2                      MOVE   B14,*B2+,0
104d0: 0960                      RETS   
104e0: d511                      EXGF   B1,0
104f0: 845e                      MOVE   *B2,B14,0
10500: 57be                      XOR    B13,B14
10510: 91d2                      MOVE   B14,*B2+,0
10520: d511                      EXGF   B1,0
10530: 845e                      MOVE   *B2,B14,0
10540: 571e                      XOR    B8,B14
10550: 91d2                      MOVE   B14,*B2+,0
10560: 0960                      RETS   
10570: d511                      EXGF   B1,0
10580: 845e                      MOVE   *B2,B14,0
10590: 57be                      XOR    B13,B14
105a0: 91d2                      MOVE   B14,*B2+,0
105b0: 2ffc                      SRL    1h,B12
105c0: c911                      JRNC   106E0h
105d0: 865e                      MOVE   *B2,B14,1
105e0: 571e                      XOR    B8,B14
105f0: 93d2                      MOVE   B14,*B2+,1
10600: 4d9c                      MOVE   B12,B12
10610: ca07                      JREQ   10690h
10620: 865e                      MOVE   *B2,B14,1
10630: 573e                      XOR    B9,B14
10640: 93d2                      MOVE   B14,*B2+,1
10650: 865e                      MOVE   *B2,B14,1
10660: 571e                      XOR    B8,B14
10670: 93d2                      MOVE   B14,*B2+,1
10680: 3cfc                      DSJS   B12,10620h
10690: d511                      EXGF   B1,0
106a0: 845e                      MOVE   *B2,B14,0
106b0: 573e                      XOR    B9,B14
106c0: 91d2                      MOVE   B14,*B2+,0
106d0: 0960                      RETS   
106e0: 865e                      MOVE   *B2,B14,1
106f0: 571e                      XOR    B8,B14
10700: 93d2                      MOVE   B14,*B2+,1
10710: 865e                      MOVE   *B2,B14,1
10720: 573e                      XOR    B9,B14
10730: 93d2                      MOVE   B14,*B2+,1
10740: 3cfc                      DSJS   B12,106E0h
10750: d511                      EXGF   B1,0
10760: 845e                      MOVE   *B2,B14,0
10770: 571e                      XOR    B8,B14
10780: 91d2                      MOVE   B14,*B2+,0
10790: 0960                      RETS   
107a0: a20f                      MOVE   A0,-*SP,1
107b0: a22f                      MOVE   A1,-*SP,1
107c0: 4cf1                      MOVE   B7,B1
107d0: 2e11                      SRL    10h,B1
107e0: 0537                      ZEXT   B7,0
107f0: 0bb7 0000 0001            ORI    10000h,B7
10820: 4e50                      MOVE   B2,A0
10830: 4f51                      MOVE   B10,A1
10840: 2e01                      SRL    10h,A1
10850: 4e02                      MOVE   A0,B2
10860: 4e2c                      MOVE   A1,B12
10870: 27bc                      SLL    1Dh,B12
10880: 2c7c                      SRL    1Dh,B12
10890: 401c                      ADD    B0,B12
108a0: 9599                      MOVE   *B12+,B9,0
108b0: 2719                      SLL    18h,B9
108c0: 4d3c                      MOVE   B9,B12
108d0: 2f1c                      SRL    8h,B12
108e0: 5599                      OR     B12,B9
108f0: 4d3c                      MOVE   B9,B12
10900: 2e1c                      SRL    10h,B12
10910: 5599                      OR     B12,B9
10920: 0fe0                      FILL   XY
10930: 4074                      ADD    B3,B4
10940: 1021                      INC    A1
10950: 3e31                      DSJS   B1,10850h
10960: 97e1                      MOVE   *SP+,A1,1
10970: 97e0                      MOVE   *SP+,A0,1
10980: c000 ff46                 JR     FE00h
109a0: 0000                      DW     0000h
109b0: 0000                      DW     0000h
109c0: 0000                      DW     0000h
109d0: 0000                      DW     0000h
109e0: 0000                      DW     0000h
109f0: 0000                      DW     0000h
10a00: 0000                      DW     0000h
10a10: 0000                      DW     0000h
10a20: 0000                      DW     0000h
10a30: 0000                      DW     0000h
10a40: 0000                      DW     0000h
10a50: 0000                      DW     0000h
10a60: 0000                      DW     0000h
10a70: 0000                      DW     0000h
10a80: 0000                      DW     0000h
10a90: 0000                      DW     0000h
10aa0: 0000                      DW     0000h
10ab0: 0000                      DW     0000h
10ac0: 0000                      DW     0000h
10ad0: 0000                      DW     0000h
10ae0: 0000                      DW     0000h
10af0: 0000                      DW     0000h
10b00: 0000                      DW     0000h
10b10: 0000                      DW     0000h
10b20: 0000                      DW     0000h
10b30: 0000                      DW     0000h
10b40: 0000                      DW     0000h
10b50: 0000                      DW     0000h
10b60: 0000                      DW     0000h
10b70: 0000                      DW     0000h
10b80: 0000                      DW     0000h
10b90: 0000                      DW     0000h
10ba0: 0000                      DW     0000h
10bb0: 0000                      DW     0000h
10bc0: 0000                      DW     0000h
10bd0: 0000                      DW     0000h
10be0: 0000                      DW     0000h
10bf0: 0000                      DW     0000h

_fillsrv20:
10c00: 0cc0                      DW     0CC0h
10c10: 0001                      DW     0001h
10c20: 0d60                      EINT   
10c30: 0001                      DW     0001h
10c40: 0e40                      DW     0E40h
10c50: 0001                      DW     0001h
10c60: 0fa0                      PIXBLT B,XY
10c70: 0001                      DW     0001h
10c80: 1140                      ADDK   Ah,A0
10c90: 0001                      DW     0001h
10ca0: 11a0                      ADDK   Dh,A0
10cb0: 0001                      DW     0001h
10cc0: a2ff                      MOVE   B7,-*SP,1
10cd0: 0320                      CLRC   
10ce0: 08f2                      CLIP   
10cf0: ca04                      JREQ   10D40h
10d00: 4c5a                      MOVE   B2,B10
10d10: 0d5f 1400 0001            CALLA  11400h
10d40: 97f7                      MOVE   *SP+,B7,1
10d50: 0960                      RETS   
10d60: 099f 4104                 MMTM   SP,B1,B7,B13
10d80: a30f                      MOVE   A8,-*SP,1
10d90: 0320                      CLRC   
10da0: 08f2                      CLIP   
10db0: ca04                      JREQ   10E00h
10dc0: 4c5a                      MOVE   B2,B10
10dd0: 0d5f 1400 0001            CALLA  11400h
10e00: 97e8                      MOVE   *SP+,A8,1
10e10: 09bf 2082                 MMFM   SP,B1,B7,B13
10e30: 0960                      RETS   
10e40: a2ff                      MOVE   B7,-*SP,1
10e50: 0320                      CLRC   
10e60: 08f2                      CLIP   
10e70: ca10                      JREQ   10F80h
10e80: 02dc                      GETPS  B12
10e90: 183e                      MOVK   1h,B14
10ea0: 0541                      SETF   1h,0,0
10eb0: 05bd 4363 0003            MOVE   @34363h,B13,0
10ee0: ca04                      JREQ   10F30h
10ef0: 0545                      SETF   5h,0,0
10f00: 05be 00ba c000            MOVE   @C00000BAh,B14,0
10f30: 0550                      SETF   10h,0,0
10f40: 4c5a                      MOVE   B2,B10
10f50: 0d5f 1800 0001            CALLA  11800h
10f80: 97f7                      MOVE   *SP+,B7,1
10f90: 0960                      RETS   
10fa0: 099f 41c0                 MMTM   SP,B1,B7-B9
10fc0: a30f                      MOVE   A8,-*SP,1
10fd0: 0320                      CLRC   
10fe0: 08f2                      CLIP   
10ff0: ca10                      JREQ   11100h
11000: 02dc                      GETPS  B12
11010: 183e                      MOVK   1h,B14
11020: 0541                      SETF   1h,0,0
11030: 05bd 4363 0003            MOVE   @34363h,B13,0
11060: ca04                      JREQ   110B0h
11070: 0545                      SETF   5h,0,0
11080: 05be 00ba c000            MOVE   @C00000BAh,B14,0
110b0: 0550                      SETF   10h,0,0
110c0: 4c5a                      MOVE   B2,B10
110d0: 0d5f 1800 0001            CALLA  11800h
11100: 97e8                      MOVE   *SP+,A8,1
11110: 09bf 0382                 MMFM   SP,B1,B7-B9
11130: 0960                      RETS   
11140: 4c54                      MOVE   B2,B4
11150: 5652                      CLR    B2
11160: 0d5f 1400 0001            CALLA  11400h
11190: 0960                      RETS   
111a0: 02dc                      GETPS  B12
111b0: 4c54                      MOVE   B2,B4
111c0: 5652                      CLR    B2
111d0: 0d5f 1800 0001            CALLA  11800h
11200: 0960                      RETS   
11210: c01e                      JR     11400h
11220: 0300                      NOP    
11230: 0300                      NOP    
11240: 0300                      NOP    
11250: 0300                      NOP    
11260: 0300                      NOP    
11270: 0300                      NOP    
11280: 0300                      NOP    
11290: 0300                      NOP    
112a0: 0300                      NOP    
112b0: 0300                      NOP    
112c0: 0300                      NOP    
112d0: 0300                      NOP    
112e0: 0300                      NOP    
112f0: 0300                      NOP    
11300: 0300                      NOP    
11310: 0300                      NOP    
11320: 0300                      NOP    
11330: 0300                      NOP    
11340: 0300                      NOP    
11350: 0300                      NOP    
11360: 0300                      NOP    
11370: 0300                      NOP    
11380: 0300                      NOP    
11390: 0300                      NOP    
113a0: 0300                      NOP    
113b0: 0300                      NOP    
113c0: 0300                      NOP    
113d0: 0300                      NOP    
113e0: 0300                      NOP    
113f0: 0300                      NOP    

_expandFill:
11400: 4ef8                      MOVE   B7,A8
11410: 2e08                      SRL    10h,A8
11420: 0537                      ZEXT   B7,0
11430: 0bb7 0000 0001            ORI    10000h,B7
11460: 1bf1                      MOVK   1Fh,B1
11470: 02dc                      GETPS  B12
11480: 6b9c                      LMO    B12,B12
11490: 175c                      SUBK   1Ah,B12
114a0: 6391                      SLL    B12,B1
114b0: 5151                      AND    B10,B1
114c0: 03b1                      NEG    B1
114d0: a29f                      MOVE   B4,-*SP,1
114e0: 4c5b                      MOVE   B2,B11
114f0: 2e1a                      SRL    10h,B10
11500: 4d72                      MOVE   B11,B2
11510: 4d5c                      MOVE   B10,B12
11520: 27bc                      SLL    1Dh,B12
11530: 2cdc                      SRL    1Ah,B12
11540: 401c                      ADD    B0,B12
11550: 859d                      MOVE   *B12,B13,0
11560: 271d                      SLL    18h,B13
11570: 4dbc                      MOVE   B13,B12
11580: 2f1c                      SRL    8h,B12
11590: 559d                      OR     B12,B13
115a0: 4dbc                      MOVE   B13,B12
115b0: 2e1c                      SRL    10h,B12
115c0: 559d                      OR     B12,B13
115d0: 683d                      RL     B1,B13
115e0: 0a37                      PFILL  XY
115f0: 4074                      ADD    B3,B4
11600: 103a                      INC    B10
11610: 3e48                      DSJS   A8,11500h
11620: 97f4                      MOVE   *SP+,B4,1
11630: 0960                      RETS   
11640: c01b                      JR     11800h
11650: 0300                      NOP    
11660: 0300                      NOP    
11670: 0300                      NOP    
11680: 0300                      NOP    
11690: 0300                      NOP    
116a0: 0300                      NOP    
116b0: 0300                      NOP    
116c0: 0300                      NOP    
116d0: 0300                      NOP    
116e0: 0300                      NOP    
116f0: 0300                      NOP    
11700: 0300                      NOP    
11710: 0300                      NOP    
11720: 0300                      NOP    
11730: 0300                      NOP    
11740: 0300                      NOP    
11750: 0300                      NOP    
11760: 0300                      NOP    
11770: 0300                      NOP    
11780: 0300                      NOP    
11790: 0300                      NOP    
117a0: 0300                      NOP    
117b0: 0300                      NOP    
117c0: 0300                      NOP    
117d0: 0300                      NOP    
117e0: 0300                      NOP    
117f0: 0300                      NOP    

_colorFill:
11800: 1f9c                      BTST   3h,B12
11810: cb25                      JRNE   11A70h
11820: 1ffc                      BTST   0h,B12
11830: cb69                      JRNE   11ED0h
11840: 4ef8                      MOVE   B7,A8
11850: 2e08                      SRL    10h,A8
11860: 0537                      ZEXT   B7,0
11870: 0bb7 0000 0001            ORI    10000h,B7
118a0: e85b                      CVXYL  B2,B11
118b0: 18b1                      MOVK   5h,B1
118c0: 17b1                      SUBK   1Dh,B1
118d0: 2e1a                      SRL    10h,B10
118e0: 4dde                      MOVE   B14,B14
118f0: cb0c                      JRNE   119C0h
11900: 4d72                      MOVE   B11,B2
11910: 4d5c                      MOVE   B10,B12
11920: 27bc                      SLL    1Dh,B12
11930: 663c                      SRL    B1,B12
11940: 401c                      ADD    B0,B12
11950: 9799                      MOVE   *B12+,B9,1
11960: 0a00                      VLCOL  
11970: 0a57                      VFILL  L
11980: 407b                      ADD    B3,B11
11990: 103a                      INC    B10
119a0: 3d68                      DSJS   A8,11900h
119b0: c06b                      JR     12070h
119c0: 4d72                      MOVE   B11,B2
119d0: 4d5c                      MOVE   B10,B12
119e0: 27bc                      SLL    1Dh,B12
119f0: 663c                      SRL    B1,B12
11a00: 401c                      ADD    B0,B12
11a10: 9799                      MOVE   *B12+,B9,1
11a20: 0fc0                      FILL   L
11a30: 407b                      ADD    B3,B11
11a40: 103a                      INC    B10
11a50: 3d48                      DSJS   A8,119C0h
11a60: c060                      JR     12070h
11a70: 4ef8                      MOVE   B7,A8
11a80: 2e08                      SRL    10h,A8
11a90: 0537                      ZEXT   B7,0
11aa0: 0bb7 0000 0001            ORI    10000h,B7
11ad0: 09f1 0f0f 0f0f            MOVI   F0F0F0Fh,B1
11b00: 1b9c                      MOVK   1Ch,B12
11b10: 515c                      AND    B10,B12
11b20: 03bc                      NEG    B12
11b30: 6991                      RL     B12,B1
11b40: 191c                      MOVK   8h,B12
11b50: 4c1d                      MOVE   B0,B13
11b60: 97b9                      MOVE   *B13+,B9,1
11b70: 97b8                      MOVE   *B13+,B8,1
11b80: 4919                      CMP    B8,B9
11b90: cb04                      JRNE   11BE0h
11ba0: 3cbc                      DSJS   B12,11B60h

patn32_break:
11bb0: e85b                      CVXYL  B2,B11
11bc0: 18d1                      MOVK   6h,B1
11bd0: c0ce                      JR     118C0h
11be0: a29f                      MOVE   B4,-*SP,1
11bf0: 2e1a                      SRL    10h,B10
11c00: 4c5b                      MOVE   B2,B11
11c10: 4dde                      MOVE   B14,B14
11c20: cb16                      JRNE   11D90h
11c30: 4d72                      MOVE   B11,B2
11c40: 4d5c                      MOVE   B10,B12
11c50: 27bc                      SLL    1Dh,B12
11c60: 2d3c                      SRL    17h,B12
11c70: 401c                      ADD    B0,B12
11c80: 9799                      MOVE   *B12+,B9,1
11c90: 9798                      MOVE   *B12+,B8,1
11ca0: 4919                      CMP    B8,B9
11cb0: ca06                      JREQ   11D20h
11cc0: 4c3d                      MOVE   B1,B13

_pfill_break:
11cd0: 0a37                      PFILL  XY
11ce0: 4074                      ADD    B3,B4
11cf0: 103a                      INC    B10
11d00: 3dc8                      DSJS   A8,11C30h
11d10: c034                      JR     12060h

_fill_break:
11d20: e852                      CVXYL  B2,B2
11d30: 0a00                      VLCOL  
11d40: 0a57                      VFILL  L
11d50: 4074                      ADD    B3,B4
11d60: 103a                      INC    B10
11d70: 3ea8                      DSJS   A8,11C30h
11d80: c02d                      JR     12060h
11d90: 4d72                      MOVE   B11,B2
11da0: 4d5c                      MOVE   B10,B12
11db0: 27bc                      SLL    1Dh,B12
11dc0: 2d3c                      SRL    17h,B12
11dd0: 401c                      ADD    B0,B12
11de0: 9799                      MOVE   *B12+,B9,1
11df0: 9798                      MOVE   *B12+,B8,1
11e00: 4919                      CMP    B8,B9
11e10: ca06                      JREQ   11E80h
11e20: 4c3d                      MOVE   B1,B13
11e30: 0a37                      PFILL  XY
11e40: 4074                      ADD    B3,B4
11e50: 103a                      INC    B10
11e60: 3dc8                      DSJS   A8,11D90h
11e70: c01e                      JR     12060h
11e80: 0fe0                      FILL   XY
11e90: 4074                      ADD    B3,B4
11ea0: 103a                      INC    B10
11eb0: 3e68                      DSJS   A8,11D90h
11ec0: c019                      JR     12060h
11ed0: 4cf1                      MOVE   B7,B1
11ee0: 2e11                      SRL    10h,B1
11ef0: 0537                      ZEXT   B7,0
11f00: 0bb7 0000 0001            ORI    10000h,B7
11f30: 4c5b                      MOVE   B2,B11
11f40: 4d72                      MOVE   B11,B2
11f50: 4d5c                      MOVE   B10,B12
11f60: 27bc                      SLL    1Dh,B12
11f70: 2c7c                      SRL    1Dh,B12
11f80: 401c                      ADD    B0,B12
11f90: 9599                      MOVE   *B12+,B9,0
11fa0: 2719                      SLL    18h,B9
11fb0: 4d3c                      MOVE   B9,B12
11fc0: 2f1c                      SRL    8h,B12
11fd0: 5599                      OR     B12,B9
11fe0: 4d3c                      MOVE   B9,B12
11ff0: 2e1c                      SRL    10h,B12
12000: 5599                      OR     B12,B9
12010: 0fe0                      FILL   XY
12020: 4074                      ADD    B3,B4
12030: 103a                      INC    B10
12040: 3e31                      DSJS   B1,11F40h
12050: c001                      JR     12070h
12060: 97f4                      MOVE   *SP+,B4,1
12070: 0960                      RETS   

_BlockMove:
12080: 098f f000                 MMTM   SP,A0-A3
120a0: 099f 10c0                 MMTM   SP,B3,B8,B9
120c0: 0550                      SETF   10h,0,0
120d0: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
12100: 05a1 0140 c000            MOVE   @C0000140h,A1,0
12130: a7c2                      MOVE   -*A14,A2,1
12140: b448 0060                 MOVE   *A2(60h),A8,0
12160: 0545                      SETF   5h,0,0
12170: 0588 00ba c000            MOVE   A8,@C00000BAh,0
121a0: 0550                      SETF   10h,0,0
121b0: b443 0090                 MOVE   *A2(90h),A3,0
121d0: 4e6a                      MOVE   A3,B10
121e0: 279a                      SLL    1Ch,B10
121f0: 2c5a                      SRL    1Eh,B10
12200: ca08                      JREQ   12290h
12210: 143a                      DEC    B10
12220: ca29                      JREQ   124C0h
12230: 143a                      DEC    B10
12240: ca48                      JREQ   126D0h
12250: 143a                      DEC    B10
12260: ca5e                      JREQ   12850h
12270: c000 008d                 JR     12B60h
12290: 05c0 0140 c000 0130 c000  MOVE   @C0000140h,@C0000130h,0
122e0: 4e4a                      MOVE   A2,B10
122f0: 4c71                      MOVE   B3,B1
12300: b750 0000                 MOVE   *B10(0h),B0,1
12320: b752 0020                 MOVE   *B10(20h),B2,1
12340: b757 0040                 MOVE   *B10(40h),B7,1
12360: 05a8 00b0 c000            MOVE   @C00000B0h,A8,0
12390: 0b88 0300 0000            ANDI   FFFFFCFFh,A8
123c0: e412                      CMPXY  B0,B2
123d0: c803                      JRC    12410h
123e0: 0ba8 0200 0000            ORI    200h,A8
12410: e412                      CMPXY  B0,B2
12420: cc03                      JRV    12460h
12430: 0ba8 0100 0000            ORI    100h,A8
12460: 0588 00b0 c000            MOVE   A8,@C00000B0h,0
12490: 8508                      MOVE   *A8,A8,0
124a0: 0f60                      PIXBLT XY,XY
124b0: c06a                      JR     12B60h
124c0: 4e4a                      MOVE   A2,B10
124d0: b752 0020                 MOVE   *B10(20h),B2,1
124f0: e852                      CVXYL  B2,B2
12500: b750 0000                 MOVE   *B10(0h),B0,1
12520: b551 00a0                 MOVE   *B10(A0h),B1,0
12540: b757 0040                 MOVE   *B10(40h),B7,1
12560: 4c68                      MOVE   A3,A8
12570: 27c8                      SLL    1Eh,A8
12580: 2c48                      SRL    1Eh,A8
12590: ca03                      JREQ   125D0h
125a0: 1428                      DEC    A8
125b0: ca03                      JREQ   125F0h
125c0: c059                      JR     12B60h
125d0: 0f00                      PIXBLT L,L
125e0: c057                      JR     12B60h
125f0: 4e4a                      MOVE   A2,B10
12600: b559 0070                 MOVE   *B10(70h),B9,0
12620: b558 0080                 MOVE   *B10(80h),B8,0
12640: 4d3c                      MOVE   B9,B12
12650: 261c                      SLL    10h,B12
12660: 5599                      OR     B12,B9
12670: 4d1c                      MOVE   B8,B12
12680: 261c                      SLL    10h,B12
12690: 5598                      OR     B12,B8
126a0: 0f80                      PIXBLT B,L
126b0: c04a                      JR     12B60h
126c0: c049                      JR     12B60h
126d0: 4e4a                      MOVE   A2,B10
126e0: b750 0000                 MOVE   *B10(0h),B0,1
12700: e810                      CVXYL  B0,B0
12710: 4c71                      MOVE   B3,B1
12720: b752 0020                 MOVE   *B10(20h),B2,1
12740: b553 00b0                 MOVE   *B10(B0h),B3,0
12760: b757 0040                 MOVE   *B10(40h),B7,1
12780: 4c68                      MOVE   A3,A8
12790: 27c8                      SLL    1Eh,A8
127a0: 2c48                      SRL    1Eh,A8
127b0: ca04                      JREQ   12800h
127c0: 1428                      DEC    A8
127d0: ca04                      JREQ   12820h
127e0: 1428                      DEC    A8
127f0: ca04                      JREQ   12840h
12800: 0f00                      PIXBLT L,L
12810: c034                      JR     12B60h
12820: 0f80                      PIXBLT B,L
12830: c032                      JR     12B60h
12840: c031                      JR     12B60h
12850: 4e4a                      MOVE   A2,B10
12860: b750 0000                 MOVE   *B10(0h),B0,1
12880: b551 00a0                 MOVE   *B10(A0h),B1,0
128a0: b752 0020                 MOVE   *B10(20h),B2,1
128c0: b553 00b0                 MOVE   *B10(B0h),B3,0
128e0: b757 0040                 MOVE   *B10(40h),B7,1
12900: 4c68                      MOVE   A3,A8
12910: 27c8                      SLL    1Eh,A8
12920: 2c48                      SRL    1Eh,A8
12930: ca04                      JREQ   12980h
12940: 1428                      DEC    A8
12950: ca13                      JREQ   12A90h
12960: 1428                      DEC    A8
12970: ca1e                      JREQ   12B60h
12980: 1f43                      BTST   5h,A3
12990: cb0d                      JRNE   12A70h
129a0: 05a8 0150 c000            MOVE   @C0000150h,A8,0
129d0: 183a                      MOVK   1h,B10
129e0: 059a 0150 c000            MOVE   B10,@C0000150h,0
12a10: 855a                      MOVE   *B10,B10,0
12a20: 0f00                      PIXBLT L,L
12a30: 0588 0150 c000            MOVE   A8,@C0000150h,0
12a60: c00f                      JR     12B60h
12a70: 0f00                      PIXBLT L,L
12a80: c00d                      JR     12B60h
12a90: 4e4a                      MOVE   A2,B10
12aa0: b559 0070                 MOVE   *B10(70h),B9,0
12ac0: b558 0080                 MOVE   *B10(80h),B8,0
12ae0: 4d3c                      MOVE   B9,B12
12af0: 261c                      SLL    10h,B12
12b00: 5599                      OR     B12,B9
12b10: 4d1c                      MOVE   B8,B12
12b20: 261c                      SLL    10h,B12
12b30: 5598                      OR     B12,B8
12b40: 0f80                      PIXBLT B,L
12b50: 0300                      NOP    
12b60: 0581 0140 c000            MOVE   A1,@C0000140h,0
12b90: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
12bc0: 09bf 0308                 MMFM   SP,B3,B8,B9
12be0: 09af 000f                 MMFM   SP,A0-A3
12c00: 0962                      RETS   2h

_StretchCopy:
12c10: 098f ff00                 MMTM   SP,A0-A7
12c30: a7c8                      MOVE   -*A14,A8,1
12c40: 4f0e                      MOVE   A8,B14
12c50: 09be 0787                 MMFM   B14,B0-B2,B7-B10
12c70: 4919                      CMP    B8,B9
12c80: ca18                      JREQ   12E10h
12c90: 099f 3120                 MMTM   SP,B2,B3,B7,B10
12cb0: 07b2 2160 0003            MOVE   @32160h,B2,1
12ce0: 4072                      ADD    B3,B2
12cf0: 577b                      CLR    B11
12d00: ec3b                      MOVX   B1,B11
12d10: 4170                      ADD    B11,B0
12d20: 2e11                      SRL    10h,B1
12d30: 2471                      SLL    3h,B1
12d40: e833                      CVXYL  B1,B3
12d50: 4493                      SUB    B4,B3
12d60: e97b                      CVXYL  B11,B11
12d70: 449b                      SUB    B4,B11
12d80: 4172                      ADD    B11,B2
12d90: 4e58                      MOVE   B2,A8
12da0: 4d57                      MOVE   B10,B7
12db0: 0f80                      PIXBLT B,L
12dc0: 4f00                      MOVE   A8,B0
12dd0: 4c71                      MOVE   B3,B1
12de0: 25b1                      SLL    Dh,B1
12df0: 09bf 048c                 MMFM   SP,B2,B3,B7,B10
12e10: 0550                      SETF   10h,0,0
12e20: 07a8 2160 0003            MOVE   @32160h,A8,1
12e50: 4e57                      MOVE   B2,A7
12e60: 2e07                      SRL    10h,A7
12e70: 4e56                      MOVE   B2,A6
12e80: 0526                      ZEXT   A6,0
12e90: 4ef5                      MOVE   B7,A5
12ea0: 2e05                      SRL    10h,A5
12eb0: 4ef4                      MOVE   B7,A4
12ec0: 0524                      ZEXT   A4,0
12ed0: 4e32                      MOVE   B1,A2
12ee0: ca04                      JREQ   12F30h
12ef0: 5663                      CLR    A3
12f00: 2e11                      SRL    10h,B1
12f10: 2471                      SLL    3h,B1
12f20: c003                      JR     12F60h
12f30: 4e13                      MOVE   B0,A3
12f40: 2e03                      SRL    10h,A3
12f50: 4e12                      MOVE   B0,A2
12f60: 0522                      ZEXT   A2,0
12f70: 4f51                      MOVE   B10,A1
12f80: 2e01                      SRL    10h,A1
12f90: 4f50                      MOVE   B10,A0
12fa0: 0520                      ZEXT   A0,0
12fb0: 0d5f 30a0 0001            CALLA  130A0h
12fe0: 5708                      CLR    A8
12ff0: 0550                      SETF   10h,0,0
13000: 0588 6640 0006            MOVE   A8,@66640h,0
13030: 56b5                      CLR    B5
13040: 07b6 64e0 0006            MOVE   @664E0h,B6,1
13070: 09af 00ff                 MMFM   SP,A0-A7
13090: 0962                      RETS   2h
130a0: 098f ff7e                 MMTM   SP,A0-A7,A9-A14
130c0: 099f e1fe                 MMTM   SP,B0-B2,B7-B14
130e0: 0300                      NOP    
130f0: 0550                      SETF   10h,0,0
13100: 4f0a                      MOVE   A8,B10
13110: 4ce8                      MOVE   A7,A8
13120: 2608                      SLL    10h,A8
13130: ecc8                      MOVX   A6,A8
13140: e708                      CPW    A8,A8
13150: cd06                      JRNV   131C0h
13160: 1f28                      BTST   6h,A8
13170: cb00 01e4                 JRNE   14FD0h
13190: 1ee8                      BTST   8h,A8
131a0: cb00 01e1                 JRNE   14FD0h
131c0: 4c31                      MOVE   B1,B1
131d0: cb17                      JRNE   13350h
131e0: 4c42                      MOVE   A2,A2
131f0: cf07                      JRNN   13270h
13200: 4c88                      MOVE   A4,A8
13210: 5c48                      MPYS   A2,A8
13220: 5808                      DIVS   A0,A8
13230: 4104                      ADD    A8,A4
13240: 4506                      SUB    A8,A6
13250: 4040                      ADD    A2,A0
13260: 5642                      CLR    A2
13270: 4c63                      MOVE   A3,A3
13280: cf07                      JRNN   13300h
13290: 4ca8                      MOVE   A5,A8
132a0: 5c68                      MPYS   A3,A8
132b0: 5828                      DIVS   A1,A8
132c0: 4105                      ADD    A8,A5
132d0: 4507                      SUB    A8,A7
132e0: 4061                      ADD    A3,A1
132f0: 5663                      CLR    A3
13300: 2603                      SLL    10h,A3
13310: ee62                      MOVY   A3,A2
13320: 4c71                      MOVE   B3,B1
13330: e842                      CVXYL  A2,A2
13340: c007                      JR     133C0h
13350: e842                      CVXYL  A2,A2
13360: 4e99                      MOVE   B4,A9
13370: 4522                      SUB    A9,A2
13380: 19e9                      MOVK   Fh,A9
13390: 5122                      AND    A9,A2
133a0: 4e19                      MOVE   B0,A9
133b0: 4122                      ADD    A9,A2
133c0: 4c00                      MOVE   A0,A0
133d0: c600 01bd                 JRLE   14FC0h
133f0: 4c21                      MOVE   A1,A1
13400: c600 01ba                 JRLE   14FC0h
13420: 4c84                      MOVE   A4,A4
13430: c600 01b7                 JRLE   14FC0h
13450: 4ca5                      MOVE   A5,A5
13460: c600 01b4                 JRLE   14FC0h
13480: 05ad 0150 c000            MOVE   @C0000150h,A13,0
134b0: 4880                      CMP    A4,A0
134c0: c512                      JRGE   135F0h
134d0: 5708                      CLR    A8
134e0: 4c89                      MOVE   A4,A9
134f0: 5a08                      DIVU   A0,A8
13500: 4d29                      MOVE   A9,A9
13510: cb04                      JRNE   13560h
13520: 09ec 3fe0 0001            MOVI   13FE0h,A12
13550: c03b                      JR     13910h
13560: 4129                      ADD    A9,A9
13570: 4d2a                      MOVE   A9,A10
13580: 440a                      SUB    A0,A10
13590: 4d4b                      MOVE   A10,A11
135a0: 440b                      SUB    A0,A11
135b0: 09ec 4380 0001            MOVI   14380h,A12
135e0: c032                      JR     13910h
135f0: 5708                      CLR    A8
13600: 4c09                      MOVE   A0,A9
13610: 5a88                      DIVU   A4,A8
13620: 4129                      ADD    A9,A9
13630: 4d2a                      MOVE   A9,A10
13640: 448a                      SUB    A4,A10
13650: 4d4b                      MOVE   A10,A11
13660: 448b                      SUB    A4,A11
13670: 4ed3                      MOVE   B6,A3
13680: 0523                      ZEXT   A3,0
13690: 1023                      INC    A3
136a0: 44c3                      SUB    A6,A3
136b0: 4483                      SUB    A4,A3
136c0: c101                      JRP    136E0h
136d0: 4064                      ADD    A3,A4
136e0: 4eb3                      MOVE   B5,A3
136f0: 0523                      ZEXT   A3,0
13700: 44c3                      SUB    A6,A3
13710: c613                      JRLE   13850h
13720: 4066                      ADD    A3,A6
13730: 4464                      SUB    A3,A4
13740: c600 0186                 JRLE   14FC0h
13760: 4f08                      MOVE   A8,B8
13770: e918                      CVXYL  B8,B8
13780: 4498                      SUB    B4,B8
13790: 4f1e                      MOVE   B8,A14
137a0: 4f1c                      MOVE   B8,A12
137b0: 41ac                      ADD    A13,A12
137c0: 4d4a                      MOVE   A10,A10
137d0: c504                      JRGE   13820h
137e0: 41c2                      ADD    A14,A2
137f0: 412a                      ADD    A9,A10
13800: 3c83                      DSJS   A3,137D0h
13810: c003                      JR     13850h
13820: 4182                      ADD    A12,A2
13830: 416a                      ADD    A11,A10
13840: 3d03                      DSJS   A3,137D0h
13850: 09ec 4860 0001            MOVI   14860h,A12
13880: 0545                      SETF   5h,0,0
13890: 05ac 00ba c000            MOVE   @C00000BAh,A12,0
138c0: 0550                      SETF   10h,0,0
138d0: cb03                      JRNE   13910h
138e0: 09ec 4c30 0001            MOVI   14C30h,A12
13910: 098f 08fc                 MMTM   SP,A4,A8-A13
13930: 4e8e                      MOVE   A4,B14
13940: 48a1                      CMP    A5,A1
13950: c51e                      JRGE   13B40h
13960: 5708                      CLR    A8
13970: 4ca9                      MOVE   A5,A9
13980: 5a28                      DIVU   A1,A8
13990: 4129                      ADD    A9,A9
139a0: 4d24                      MOVE   A9,A4
139b0: 4424                      SUB    A1,A4
139c0: 4c8b                      MOVE   A4,A11
139d0: 442b                      SUB    A1,A11
139e0: 2607                      SLL    10h,A7
139f0: eee6                      MOVY   A7,A6
13a00: 1e06                      BTST   Fh,A6
13a10: cb0e                      JRNE   13B00h
13a20: e6c5                      CPW    A6,A5
13a30: 1f05                      BTST   7h,A5
13a40: cb0b                      JRNE   13B00h
13a50: 09ed 00ba c000            MOVI   C00000BAh,A13
13a80: 0745                      SETF   5h,0,1
13a90: 87ae                      MOVE   *A13,A14,1
13aa0: 0740                      SETF   20h,0,1
13ab0: cb04                      JRNE   13B00h
13ac0: 09f8 4180 0001            MOVI   14180h,B8
13af0: c03a                      JR     13EA0h
13b00: 09f8 4580 0001            MOVI   14580h,B8
13b30: c036                      JR     13EA0h
13b40: 5708                      CLR    A8
13b50: 4c29                      MOVE   A1,A9
13b60: 5aa8                      DIVU   A5,A8
13b70: 4129                      ADD    A9,A9
13b80: 4d24                      MOVE   A9,A4
13b90: 44a4                      SUB    A5,A4
13ba0: 4c8b                      MOVE   A4,A11
13bb0: 44ab                      SUB    A5,A11
13bc0: 4ed3                      MOVE   B6,A3
13bd0: 2e03                      SRL    10h,A3
13be0: 1023                      INC    A3
13bf0: 44e3                      SUB    A7,A3
13c00: 44a3                      SUB    A5,A3
13c10: c101                      JRP    13C30h
13c20: 4065                      ADD    A3,A5
13c30: 4eb3                      MOVE   B5,A3
13c40: 2e03                      SRL    10h,A3
13c50: 44e3                      SUB    A7,A3
13c60: c615                      JRLE   13DC0h
13c70: 4067                      ADD    A3,A7
13c80: 4465                      SUB    A3,A5
13c90: c704                      JRGT   13CE0h
13ca0: 0b0f 00e0                 ADDI   E0h,SP
13cc0: c000 012e                 JR     14FC0h
13ce0: 4f09                      MOVE   A8,B9
13cf0: 5c39                      MPYS   B1,B9
13d00: 4f3e                      MOVE   B9,A14
13d10: 4039                      ADD    B1,B9
13d20: 4f3c                      MOVE   B9,A12
13d30: 4c84                      MOVE   A4,A4
13d40: c504                      JRGE   13D90h
13d50: 41c2                      ADD    A14,A2
13d60: 4124                      ADD    A9,A4
13d70: 3c83                      DSJS   A3,13D40h
13d80: c003                      JR     13DC0h
13d90: 4182                      ADD    A12,A2
13da0: 4164                      ADD    A11,A4
13db0: 3d03                      DSJS   A3,13D40h
13dc0: 2607                      SLL    10h,A7
13dd0: eee6                      MOVY   A7,A6
13de0: 4ca1                      MOVE   A5,A1
13df0: 09f8 4980 0001            MOVI   14980h,B8
13e20: 0745                      SETF   5h,0,1
13e30: 07ac 00ba c000            MOVE   @C00000BAh,A12,1
13e60: cb03                      JRNE   13EA0h
13e70: 09f8 4d70 0001            MOVI   14D70h,B8
13ea0: 4f5c                      MOVE   B10,A12
13eb0: 05ad 0150 c000            MOVE   @C0000150h,A13,0
13ee0: d50d                      EXGF   A13,0
13ef0: 09ed 00ba c000            MOVI   C00000BAh,A13
13f20: 0745                      SETF   5h,0,1
13f30: 87ae                      MOVE   *A13,A14,1
13f40: 09f7 0000 0001            MOVI   10000h,B7
13f70: 4ef3                      MOVE   B7,A3
13f80: 4e3a                      MOVE   B1,A10
13f90: 4dd1                      MOVE   B14,B1
13fa0: 4de7                      MOVE   SP,A7
13fb0: 098f 4cfc                 MMTM   SP,A1,A4,A5,A8-A13
13fd0: 0178                      JUMP   B8
13fe0: 9419                      MOVE   *B0+,B9,0
13ff0: 4c01                      MOVE   A0,A1
14000: 56a5                      CLR    A5
14010: 4105                      ADD    A8,A5
14020: 9418                      MOVE   *B0+,B8,0
14030: 4919                      CMP    B8,B9
14040: 0da1 fffb                 DSJEQ  A1,14010h
14060: 4fab                      MOVE   A13,B11
14070: 6b7c                      LMO    B11,B12
14080: 175c                      SUBK   1Ah,B12
14090: ca05                      JREQ   140F0h
140a0: 4d3a                      MOVE   B9,B10
140b0: 637a                      SLL    B11,B10
140c0: 5559                      OR     B10,B9
140d0: 243b                      SLL    1h,B11
140e0: 3cbc                      DSJS   B12,140A0h
140f0: 4ee2                      MOVE   A7,B2
14100: e0a7                      ADDXY  A5,A7
14110: e065                      ADDXY  A3,A5
14120: 4ea7                      MOVE   A5,B7
14130: 0fe0                      FILL   XY
14140: 4d19                      MOVE   B8,B9
14150: 1421                      DEC    A1
14160: c1e9                      JRP    14000h
14170: 012c                      EXGPC  A12
14180: 4d05                      MOVE   A8,A5
14190: 4c84                      MOVE   A4,A4
141a0: c502                      JRGE   141D0h
141b0: 4124                      ADD    A9,A4
141c0: c002                      JR     141F0h
141d0: 1025                      INC    A5
141e0: 4164                      ADD    A11,A4
141f0: 4ce8                      MOVE   A7,A8
14200: 0988 4c00                 MMTM   A8,A1,A4,A5
14220: 09a7 3f10                 MMFM   A7,A4,A8-A13
14240: 4e40                      MOVE   A2,B0
14250: 4cc7                      MOVE   A6,A7
14260: 012c                      EXGPC  A12
14270: ec37                      MOVX   B1,B7
14280: 4de7                      MOVE   SP,A7
14290: 09a7 3f32                 MMFM   A7,A1,A4,A5,A8-A13
142b0: 4ec8                      MOVE   A6,B8
142c0: 4066                      ADD    A3,A6
142d0: 1425                      DEC    A5
142e0: c605                      JRLE   14340h
142f0: e910                      CVXYL  B8,B0
14300: 4ec2                      MOVE   A6,B2
14310: 4066                      ADD    A3,A6
14320: 0f20                      PIXBLT L,XY
14330: 3ca5                      DSJS   A5,142F0h
14340: 4142                      ADD    A10,A2
14350: 3fc1                      DSJS   A1,14180h
14360: c000 00c2                 JR     14FA0h
14380: 9419                      MOVE   *B0+,B9,0
14390: 4c01                      MOVE   A0,A1
143a0: 56a5                      CLR    A5
143b0: 4105                      ADD    A8,A5
143c0: 4d4a                      MOVE   A10,A10
143d0: c502                      JRGE   14400h
143e0: 412a                      ADD    A9,A10
143f0: c002                      JR     14420h
14400: 1025                      INC    A5
14410: 416a                      ADD    A11,A10
14420: 9418                      MOVE   *B0+,B8,0
14430: 4919                      CMP    B8,B9
14440: 0da1 fff5                 DSJEQ  A1,143B0h
14460: 4fab                      MOVE   A13,B11
14470: 6b7c                      LMO    B11,B12
14480: 175c                      SUBK   1Ah,B12
14490: ca05                      JREQ   144F0h
144a0: 4d3a                      MOVE   B9,B10
144b0: 637a                      SLL    B11,B10
144c0: 5559                      OR     B10,B9
144d0: 243b                      SLL    1h,B11
144e0: 3cbc                      DSJS   B12,144A0h
144f0: 4ee2                      MOVE   A7,B2
14500: e0a7                      ADDXY  A5,A7
14510: e065                      ADDXY  A3,A5
14520: 4ea7                      MOVE   A5,B7
14530: 0fe0                      FILL   XY
14540: 4d19                      MOVE   B8,B9
14550: 1421                      DEC    A1
14560: c1e3                      JRP    143A0h
14570: 012c                      EXGPC  A12
14580: 4d05                      MOVE   A8,A5
14590: 4c84                      MOVE   A4,A4
145a0: c502                      JRGE   145D0h
145b0: 4124                      ADD    A9,A4
145c0: c002                      JR     145F0h
145d0: 1025                      INC    A5
145e0: 4164                      ADD    A11,A4
145f0: 826d                      MOVE   A3,*A13,1
14600: 099f 0c00                 MMTM   SP,B4,B5
14620: 4f84                      MOVE   A12,B4
14630: 56b5                      CLR    B5
14640: 4fc8                      MOVE   A14,B8
14650: 09f9 0400 4812            MOVI   48120400h,B9
14680: 6319                      SLL    B8,B9
14690: 2839                      SRA    1Fh,B9
146a0: ec37                      MOVX   B1,B7
146b0: 5652                      CLR    B2
146c0: 0fe0                      FILL   XY
146d0: 83cd                      MOVE   A14,*A13,1
146e0: 4ce8                      MOVE   A7,A8
146f0: 0988 4c00                 MMTM   A8,A1,A4,A5
14710: 09a7 3f10                 MMFM   A7,A4,A8-A13
14730: 4e40                      MOVE   A2,B0
14740: 56e7                      CLR    A7
14750: 012c                      EXGPC  A12
14760: 4c98                      MOVE   B4,B8
14770: ec37                      MOVX   B1,B7
14780: 09bf 0030                 MMFM   SP,B4,B5
147a0: 4de7                      MOVE   SP,A7
147b0: 09a7 3f32                 MMFM   A7,A1,A4,A5,A8-A13
147d0: 4d10                      MOVE   B8,B0
147e0: 4ec2                      MOVE   A6,B2
147f0: 4066                      ADD    A3,A6
14800: 0f20                      PIXBLT L,XY
14810: 3ca5                      DSJS   A5,147D0h
14820: 4142                      ADD    A10,A2
14830: 0d81 ffd3                 DSJ    A1,14580h
14850: c074                      JR     14FA0h
14860: 4ee2                      MOVE   A7,B2
14870: 4faa                      MOVE   A13,B10
14880: 183b                      MOVK   1h,B11
14890: 4c81                      MOVE   A4,A1
148a0: 4d05                      MOVE   A8,A5
148b0: 4d4a                      MOVE   A10,A10
148c0: c502                      JRGE   148F0h
148d0: 412a                      ADD    A9,A10
148e0: c002                      JR     14910h
148f0: 1025                      INC    A5
14900: 416a                      ADD    A11,A10
14910: fa1c                      PIXT   *B0,B12
14920: f192                      PIXT   B12,*B2,XY
14930: 4150                      ADD    B10,B0
14940: 3c85                      DSJS   A5,14910h
14950: e172                      ADDXY  B11,B2
14960: 3da1                      DSJS   A1,148A0h
14970: 012c                      EXGPC  A12
14980: 826d                      MOVE   A3,*A13,1
14990: 4d05                      MOVE   A8,A5
149a0: 4c84                      MOVE   A4,A4
149b0: c502                      JRGE   149E0h
149c0: 4124                      ADD    A9,A4
149d0: c002                      JR     14A00h
149e0: 1025                      INC    A5
149f0: 4164                      ADD    A11,A4
14a00: 4e0a                      MOVE   A0,B10
14a10: ed57                      MOVX   B10,B7
14a20: 4e40                      MOVE   A2,B0
14a30: 4142                      ADD    A10,A2
14a40: 5652                      CLR    B2
14a50: 099f 0c00                 MMTM   SP,B4,B5
14a70: 4f84                      MOVE   A12,B4
14a80: 56b5                      CLR    B5
14a90: 0f20                      PIXBLT L,XY
14aa0: 83cd                      MOVE   A14,*A13,1
14ab0: 1425                      DEC    A5
14ac0: c605                      JRLE   14B20h
14ad0: 4e40                      MOVE   A2,B0
14ae0: 4142                      ADD    A10,A2
14af0: 5652                      CLR    B2
14b00: 0f20                      PIXBLT L,XY
14b10: 3ca5                      DSJS   A5,14AD0h
14b20: 4c90                      MOVE   B4,B0
14b30: 09bf 0030                 MMFM   SP,B4,B5
14b50: 4ce8                      MOVE   A7,A8
14b60: 0988 4800                 MMTM   A8,A1,A4
14b80: 09a7 3f10                 MMFM   A7,A4,A8-A13
14ba0: 4cc7                      MOVE   A6,A7
14bb0: 012c                      EXGPC  A12
14bc0: 4de7                      MOVE   SP,A7
14bd0: 09a7 3f32                 MMFM   A7,A1,A4,A5,A8-A13
14bf0: 4066                      ADD    A3,A6
14c00: 0d81 ffd6                 DSJ    A1,14980h
14c20: c037                      JR     14FA0h

_horz_shrink_pp0:
14c30: 4ee2                      MOVE   A7,B2
14c40: 4c81                      MOVE   A4,A1
14c50: 4f0a                      MOVE   A8,B10
14c60: 143a                      DEC    B10
14c70: e95a                      CVXYL  B10,B10
14c80: 449a                      SUB    B4,B10
14c90: 4f58                      MOVE   B10,A8
14ca0: e85c                      CVXYL  B2,B12
14cb0: 4d05                      MOVE   A8,A5
14cc0: 4d4a                      MOVE   A10,A10
14cd0: c502                      JRGE   14D00h
14ce0: 412a                      ADD    A9,A10
14cf0: c002                      JR     14D20h
14d00: 41a5                      ADD    A13,A5
14d10: 416a                      ADD    A11,A10
14d20: 4eaa                      MOVE   A5,B10
14d30: 4150                      ADD    B10,B0
14d40: 981c                      MOVE   *B0+,*B12+,0
14d50: 3d61                      DSJS   A1,14CB0h
14d60: 012c                      EXGPC  A12

_vert_shrink_pp0:
14d70: 0750                      SETF   10h,0,1
14d80: 4d05                      MOVE   A8,A5
14d90: 1425                      DEC    A5
14da0: 5d45                      MPYS   A10,A5
14db0: 4ca8                      MOVE   A5,A8
14dc0: b30f 00a0                 MOVE   A8,*SP(A0h),1
14de0: 0745                      SETF   5h,0,1
14df0: 4d05                      MOVE   A8,A5
14e00: 4c84                      MOVE   A4,A4
14e10: c502                      JRGE   14E40h
14e20: 4124                      ADD    A9,A4
14e30: c002                      JR     14E60h
14e40: 4145                      ADD    A10,A5
14e50: 4164                      ADD    A11,A4
14e60: 4e0d                      MOVE   A0,B13
14e70: edb7                      MOVX   B13,B7
14e80: 40a2                      ADD    A5,A2
14e90: 4e40                      MOVE   A2,B0
14ea0: 4f82                      MOVE   A12,B2
14eb0: 0f00                      PIXBLT L,L
14ec0: 4142                      ADD    A10,A2
14ed0: 4f80                      MOVE   A12,B0
14ee0: 4ce8                      MOVE   A7,A8
14ef0: 0988 4800                 MMTM   A8,A1,A4
14f10: 09a7 3f10                 MMFM   A7,A4,A8-A13
14f30: 4cc7                      MOVE   A6,A7
14f40: 012c                      EXGPC  A12
14f50: 4de7                      MOVE   SP,A7
14f60: 09a7 3f32                 MMFM   A7,A1,A4,A5,A8-A13
14f80: 4066                      ADD    A3,A6
14f90: 3f61                      DSJS   A1,14DF0h
14fa0: 0b0f 0200                 ADDI   200h,SP
14fc0: 0740                      SETF   20h,0,1
14fd0: 09bf 7f87                 MMFM   SP,B0-B2,B7-B14
14ff0: 09af 7eff                 MMFM   SP,A0-A7,A9-A14
15010: 0960                      RETS   

_BBFillRect:
15020: a20f                      MOVE   A0,-*SP,1
15030: a27f                      MOVE   B3,-*SP,1
15040: 0550                      SETF   10h,0,0
15050: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
15080: a7c8                      MOVE   -*A14,A8,1
15090: 4f0a                      MOVE   A8,B10
150a0: b752 0000                 MOVE   *B10(0h),B2,1
150c0: b757 0020                 MOVE   *B10(20h),B7,1
150e0: b55b 0040                 MOVE   *B10(40h),B11,0
15100: ca02                      JREQ   15130h
15110: 4d73                      MOVE   B11,B3
15120: c001                      JR     15140h
15130: e852                      CVXYL  B2,B2
15140: b559 0050                 MOVE   *B10(50h),B9,0
15160: b55b 0060                 MOVE   *B10(60h),B11,0
15180: cb11                      JRNE   152A0h
15190: b55a 0040                 MOVE   *B10(40h),B10,0
151b0: cb0e                      JRNE   152A0h
151c0: 05ba 4360 0003            MOVE   @34360h,B10,0
151f0: 1f9a                      BTST   3h,B10
15200: ca09                      JREQ   152A0h
15210: 4d3c                      MOVE   B9,B12
15220: 261c                      SLL    10h,B12
15230: 5599                      OR     B12,B9
15240: 0a00                      VLCOL  
15250: 0a57                      VFILL  L
15260: 5718                      CLR    B8
15270: 5739                      CLR    B9
15280: 03f9                      NOT    B9
15290: c009                      JR     15330h
152a0: 0545                      SETF   5h,0,0
152b0: 059b 00ba c000            MOVE   B11,@C00000BAh,0
152e0: 0550                      SETF   10h,0,0
152f0: 4d3c                      MOVE   B9,B12
15300: 261c                      SLL    10h,B12
15310: 5599                      OR     B12,B9
15320: 0fc0                      FILL   L
15330: 05a8 6640 0006            MOVE   @66640h,A8,0
15360: ca08                      JREQ   153F0h
15370: 5708                      CLR    A8
15380: 0588 6640 0006            MOVE   A8,@66640h,0
153b0: 56b5                      CLR    B5
153c0: 07b6 64e0 0006            MOVE   @664E0h,B6,1
153f0: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
15420: 97f3                      MOVE   *SP+,B3,1
15430: 97e0                      MOVE   *SP+,A0,1
15440: 0962                      RETS   2h
15450: 0000                      DW     0000h
15460: 0000                      DW     0000h
15470: 0000                      DW     0000h
15480: 0000                      DW     0000h
15490: 0000                      DW     0000h
154a0: 0000                      DW     0000h
154b0: 0000                      DW     0000h
154c0: 0000                      DW     0000h
154d0: 0000                      DW     0000h
154e0: 0000                      DW     0000h
154f0: 0000                      DW     0000h
15500: 0000                      DW     0000h
15510: 0000                      DW     0000h
15520: 0000                      DW     0000h
15530: 0000                      DW     0000h
15540: 0000                      DW     0000h
15550: 0000                      DW     0000h
15560: 0000                      DW     0000h
15570: 0000                      DW     0000h
15580: 0000                      DW     0000h
15590: 0000                      DW     0000h
155a0: 0000                      DW     0000h
155b0: 0000                      DW     0000h
155c0: 0000                      DW     0000h
155d0: 0000                      DW     0000h
155e0: 0000                      DW     0000h
155f0: 0000                      DW     0000h
15600: 0000                      DW     0000h
15610: 0000                      DW     0000h
15620: 0000                      DW     0000h
15630: 0000                      DW     0000h
15640: 0000                      DW     0000h
15650: 0000                      DW     0000h
15660: 0000                      DW     0000h
15670: 0000                      DW     0000h
15680: 0000                      DW     0000h
15690: 0000                      DW     0000h
156a0: 0000                      DW     0000h
156b0: 0000                      DW     0000h
156c0: 0000                      DW     0000h
156d0: 0000                      DW     0000h
156e0: 0000                      DW     0000h
156f0: 0000                      DW     0000h
15700: 0000                      DW     0000h
15710: 0000                      DW     0000h
15720: 0000                      DW     0000h
15730: 0000                      DW     0000h
15740: 0000                      DW     0000h
15750: 0000                      DW     0000h
15760: 0000                      DW     0000h
15770: 0000                      DW     0000h
15780: 0000                      DW     0000h
15790: 0000                      DW     0000h
157a0: 0000                      DW     0000h
157b0: 0000                      DW     0000h
157c0: 0000                      DW     0000h
157d0: 0000                      DW     0000h
157e0: 0000                      DW     0000h
157f0: 0000                      DW     0000h

_InitCursor:
15800: 0550                      SETF   10h,0,0
15810: 5708                      CLR    A8
15820: 0588 6a40 0006            MOVE   A8,@66A40h,0
15850: 0588 6a70 0006            MOVE   A8,@66A70h,0
15880: 0588 6a80 0006            MOVE   A8,@66A80h,0
158b0: 0588 6a90 0006            MOVE   A8,@66A90h,0
158e0: 07a8 64e0 0006            MOVE   @664E0h,A8,1
15910: 0528                      ZEXT   A8,0
15920: 2fe8                      SRL    1h,A8
15930: 0588 6a50 0006            MOVE   A8,@66A50h,0
15960: 07a8 64e0 0006            MOVE   @664E0h,A8,1
15990: 2de8                      SRL    11h,A8
159a0: 0588 6a60 0006            MOVE   A8,@66A60h,0
159d0: 0960                      RETS   

_SetCursorShape:
159e0: 0360                      DINT   
159f0: 098f e000                 MMTM   SP,A0-A2
15a10: 099f 0600                 MMTM   SP,B5,B6
15a30: 0550                      SETF   10h,0,0
15a40: a7c0                      MOVE   -*A14,A0,1
15a50: b608 0020                 MOVE   *A0(20h),A8,1
15a70: 0788 eaa0 0006            MOVE   A8,@6EAA0h,1
15aa0: b408 0040                 MOVE   *A0(40h),A8,0
15ac0: 0588 eac0 0006            MOVE   A8,@6EAC0h,0
15af0: 0588 ead0 0006            MOVE   A8,@6EAD0h,0
15b20: 0588 eae0 0006            MOVE   A8,@6EAE0h,0
15b50: b601 0000                 MOVE   *A0(0h),A1,1
15b70: 09e2 eaf0 0006            MOVI   6EAF0h,A2
15ba0: 4d00                      MOVE   A8,A0
15bb0: 6b08                      LMO    A8,A8
15bc0: 17e8                      SUBK   1Fh,A8
15bd0: 03a8                      NEG    A8
15be0: 6300                      SLL    A8,A0
15bf0: 0580 6a90 0006            MOVE   A0,@66A90h,0
15c20: 2420                      SLL    1h,A0
15c30: 2f80                      SRL    4h,A0
15c40: 9822                      MOVE   *A1+,*A2+,0
15c50: 3c40                      DSJS   A0,15C40h
15c60: 56b5                      CLR    B5
15c70: 07b6 64e0 0006            MOVE   @664E0h,B6,1
15ca0: 0d3f 003a                 CALLR  16060h
15cc0: 05c0 6a70 0006 00a0 c000  MOVE   @66A70h,@C00000A0h,0
15d10: a3cf                      MOVE   A14,-*SP,1
15d20: 09e8 6800 0001            MOVI   16800h,A8
15d50: 930e                      MOVE   A8,*A14+,1
15d60: 1948                      MOVK   Ah,A8
15d70: 930e                      MOVE   A8,*A14+,1
15d80: 0d5f 0000 0000            CALLA  0h
15db0: 05a8 0110 c000            MOVE   @C0000110h,A8,0
15de0: 0ba8 0400 0000            ORI    400h,A8
15e10: 0588 0110 c000            MOVE   A8,@C0000110h,0
15e40: 05a8 0120 c000            MOVE   @C0000120h,A8,0
15e70: 0b88 0400 0000            ANDI   FFFFFBFFh,A8
15ea0: 0588 0120 c000            MOVE   A8,@C0000120h,0
15ed0: 0d60                      EINT   
15ee0: c001                      JR     15F00h
15ef0: 0360                      DINT   
15f00: 09bf 0060                 MMFM   SP,B5,B6
15f20: 09af 0007                 MMFM   SP,A0-A2
15f40: 0962                      RETS   2h

_EraseCursor:
15f50: a7c8                      MOVE   -*A14,A8,1
15f60: 0550                      SETF   10h,0,0
15f70: 05a8 0110 c000            MOVE   @C0000110h,A8,0
15fa0: 0b88 0400 0000            ANDI   FFFFFBFFh,A8
15fd0: 0360                      DINT   
15fe0: 0588 0110 c000            MOVE   A8,@C0000110h,0
16010: 05a8 0110 c000            MOVE   @C0000110h,A8,0
16040: 0d60                      EINT   
16050: 0962                      RETS   2h
16060: 05ba 0010 0000            MOVE   @10h,B10,0
16090: 05be 0010 0000            MOVE   @10h,B14,0
160c0: 495e                      CMP    B10,B14
160d0: cbf8                      JRNE   16060h
160e0: 05ba 0000 0000            MOVE   @0h,B10,0
16110: 05bd 0000 0000            MOVE   @0h,B13,0
16140: 495d                      CMP    B10,B13
16150: cbf0                      JRNE   16060h
16160: 4dbd                      MOVE   B13,B13
16170: c502                      JRGE   161A0h
16180: 57bd                      CLR    B13
16190: c005                      JR     161F0h
161a0: 4cda                      MOVE   B6,B10
161b0: 053a                      ZEXT   B10,0
161c0: 49ba                      CMP    B13,B10
161d0: c501                      JRGE   161F0h
161e0: 4d5d                      MOVE   B10,B13
161f0: 4dde                      MOVE   B14,B14
16200: c502                      JRGE   16230h
16210: 57de                      CLR    B14
16220: c005                      JR     16280h
16230: 4cda                      MOVE   B6,B10
16240: 2e1a                      SRL    10h,B10
16250: 49da                      CMP    B14,B10
16260: c501                      JRGE   16280h
16270: 4d5e                      MOVE   B10,B14
16280: 059d 6a50 0006            MOVE   B13,@66A50h,0
162b0: 059e 6a60 0006            MOVE   B14,@66A60h,0
162e0: 05ba 0080 c000            MOVE   @C0000080h,B10,0
16310: 1e3a                      BTST   Eh,B10
16320: cb01                      JRNE   16340h
16330: 2ffe                      SRL    1h,B14
16340: 05ba eab0 0006            MOVE   @6EAB0h,B10,0
16370: 455e                      SUB    B10,B14
16380: 07ba 66a0 0006            MOVE   @666A0h,B10,1
163b0: 855a                      MOVE   *B10,B10,0
163c0: 415e                      ADD    B10,B14
163d0: 4ddd                      MOVE   B14,B13
163e0: 05ba 6a40 0006            MOVE   @66A40h,B10,0
16410: 455e                      SUB    B10,B14
16420: c505                      JRGE   16480h
16430: 07ba 6400 0006            MOVE   @66400h,B10,1
16460: 855a                      MOVE   *B10,B10,0
16470: 415e                      ADD    B10,B14
16480: 059e 6a70 0006            MOVE   B14,@66A70h,0
164b0: 05ba ead0 0006            MOVE   @6EAD0h,B10,0
164e0: 415d                      ADD    B10,B13
164f0: 07bb 6660 0006            MOVE   @66660h,B11,1
16520: 857b                      MOVE   *B11,B11,0
16530: 49bb                      CMP    B13,B11
16540: c501                      JRGE   16560h
16550: 4d7d                      MOVE   B11,B13
16560: 059d 6a80 0006            MOVE   B13,@66A80h,0
16590: 0960                      RETS   
165a0: c025                      JR     16800h
165b0: 0300                      NOP    
165c0: 0300                      NOP    
165d0: 0300                      NOP    
165e0: 0300                      NOP    
165f0: 0300                      NOP    
16600: 0300                      NOP    
16610: 0300                      NOP    
16620: 0300                      NOP    
16630: 0300                      NOP    
16640: 0300                      NOP    
16650: 0300                      NOP    
16660: 0300                      NOP    
16670: 0300                      NOP    
16680: 0300                      NOP    
16690: 0300                      NOP    
166a0: 0300                      NOP    
166b0: 0300                      NOP    
166c0: 0300                      NOP    
166d0: 0300                      NOP    
166e0: 0300                      NOP    
166f0: 0300                      NOP    
16700: 0300                      NOP    
16710: 0300                      NOP    
16720: 0300                      NOP    
16730: 0300                      NOP    
16740: 0300                      NOP    
16750: 0300                      NOP    
16760: 0300                      NOP    
16770: 0300                      NOP    
16780: 0300                      NOP    
16790: 0300                      NOP    
167a0: 0300                      NOP    
167b0: 0300                      NOP    
167c0: 0300                      NOP    
167d0: 0300                      NOP    
167e0: 0300                      NOP    
167f0: 0300                      NOP    
16800: 098f f082                 MMTM   SP,A0-A3,A8,A14
16820: 099f fffe                 MMTM   SP,B0-B14
16840: 1820                      MOVK   1h,A0
16850: 0780 0000 0000            MOVE   A0,@0h,1
16880: 09ee 0000 0000            MOVI   0h,A14
168b0: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
168e0: 05a1 0150 c000            MOVE   @C0000150h,A1,0
16910: 05a3 0140 c000            MOVE   @C0000140h,A3,0
16940: 05a2 0130 c000            MOVE   @C0000130h,A2,0
16970: 05c0 4370 0003 0150 c000  MOVE   @34370h,@C0000150h,0
169c0: 05b1 64a0 0006            MOVE   @664A0h,B1,0
169f0: 07b4 64c0 0006            MOVE   @664C0h,B4,1
16a20: 56b5                      CLR    B5
16a30: 07b6 64e0 0006            MOVE   @664E0h,B6,1
16a60: 054b                      SETF   Bh,0,0
16a70: 09da 0006                 MOVI   6h,B10
16a90: 059a 00b5 c000            MOVE   B10,@C00000B5h,0
16ac0: 0550                      SETF   10h,0,0
16ad0: 07b7 eac0 0006            MOVE   @6EAC0h,B7,1
16b00: 003a                      REV    B10
16b10: 1f7a                      BTST   4h,B10
16b20: ca02                      JREQ   16B50h
16b30: 0251                      SETCSP 
16b40: c004                      JR     16B90h
16b50: 6a3a                      LMO    B1,B10
16b60: 059a 0130 c000            MOVE   B10,@C0000130h,0
16b90: 07b0 6a50 0006            MOVE   @66A50h,B0,1
16bc0: 07ba eaa0 0006            MOVE   @6EAA0h,B10,1
16bf0: e350                      SUBXY  B10,B0
16c00: 4e18                      MOVE   B0,A8
16c10: 09f2 6aa0 0006            MOVI   66AA0h,B2
16c40: 05b3 eae0 0006            MOVE   @6EAE0h,B3,0
16c70: e873                      CVXYL  B3,B3
16c80: 4493                      SUB    B4,B3
16c90: 4c1a                      MOVE   B0,B10
16ca0: 051a                      SEXT   B10,0
16cb0: cf06                      JRNN   16D20h
16cc0: 03ba                      NEG    B10
16cd0: e150                      ADDXY  B10,B0
16ce0: e357                      SUBXY  B10,B7
16cf0: e95a                      CVXYL  B10,B10
16d00: 449a                      SUB    B4,B10
16d10: 4152                      ADD    B10,B2
16d20: 0f40                      PIXBLT XY,L
16d30: 07b7 eac0 0006            MOVE   @6EAC0h,B7,1
16d60: 054b                      SETF   Bh,0,0
16d70: 09da 0026                 MOVI   26h,B10
16d90: 059a 00b5 c000            MOVE   B10,@C00000B5h,0
16dc0: 0550                      SETF   10h,0,0
16dd0: 4f02                      MOVE   A8,B2
16de0: 4c33                      MOVE   B1,B3
16df0: 003a                      REV    B10
16e00: 1f7a                      BTST   4h,B10
16e10: ca02                      JREQ   16E40h
16e20: 0273                      SETCDP 
16e30: c004                      JR     16E80h
16e40: 6a7a                      LMO    B3,B10
16e50: 059a 0140 c000            MOVE   B10,@C0000140h,0
16e80: 05b1 eae0 0006            MOVE   @6EAE0h,B1,0
16eb0: 6a3a                      LMO    B1,B10
16ec0: 059a 0130 c000            MOVE   B10,@C0000130h,0
16ef0: 09f0 eaf0 0006            MOVI   6EAF0h,B0
16f20: 5718                      CLR    B8
16f30: 5739                      CLR    B9
16f40: 03f9                      NOT    B9
16f50: 0fa0                      PIXBLT B,XY
16f60: 09f0 eaf0 0006            MOVI   6EAF0h,B0
16f90: 05ba 6a90 0006            MOVE   @66A90h,B10,0
16fc0: 4150                      ADD    B10,B0
16fd0: 054b                      SETF   Bh,0,0
16fe0: 09da 0146                 MOVI   146h,B10
17000: 059a 00b5 c000            MOVE   B10,@C00000B5h,0
17030: 0550                      SETF   10h,0,0
17040: 4f02                      MOVE   A8,B2
17050: 0fa0                      PIXBLT B,XY
17060: 07bb 53a0 0003            MOVE   @353A0h,B11,1
17090: 857a                      MOVE   *B11,B10,0
170a0: 857b                      MOVE   *B11,B11,0
170b0: 495b                      CMP    B10,B11
170c0: cbf9                      JRNE   17060h
170d0: 05bb 00a0 c000            MOVE   @C00000A0h,B11,0
17100: 457a                      SUB    B11,B10
17110: c505                      JRGE   17170h
17120: 07bb 6400 0006            MOVE   @66400h,B11,1
17150: 857b                      MOVE   *B11,B11,0
17160: 417a                      ADD    B11,B10
17170: 059a 6a40 0006            MOVE   B10,@66A40h,0
171a0: a30f                      MOVE   A8,-*SP,1
171b0: a3cf                      MOVE   A14,-*SP,1
171c0: 09e8 7420 0001            MOVI   17420h,A8
171f0: 930e                      MOVE   A8,*A14+,1
17200: 1948                      MOVK   Ah,A8
17210: 930e                      MOVE   A8,*A14+,1
17220: 0d5f 0000 0000            CALLA  0h
17250: 0550                      SETF   10h,0,0
17260: 97e8                      MOVE   *SP+,A8,1
17270: 05c0 6a80 0006 00a0 c000  MOVE   @66A80h,@C00000A0h,0
172c0: 05ba 0120 c000            MOVE   @C0000120h,B10,0
172f0: 0b9a 0400 0000            ANDI   FFFFFBFFh,B10
17320: 059a 0120 c000            MOVE   B10,@C0000120h,0
17350: 0d3f fecf                 CALLR  16060h
17370: 0d60                      EINT   
17380: 05ba 0110 c000            MOVE   @C0000110h,B10,0
173b0: 0bba 0400 0000            ORI    400h,B10
173e0: 059a 0110 c000            MOVE   B10,@C0000110h,0
17410: c0ff                      JR     17410h
17420: 0b0f 0040                 ADDI   40h,SP
17440: 054b                      SETF   Bh,0,0
17450: 09da 0006                 MOVI   6h,B10
17470: 059a 00b5 c000            MOVE   B10,@C00000B5h,0
174a0: 0550                      SETF   10h,0,0
174b0: 05b1 eae0 0006            MOVE   @6EAE0h,B1,0
174e0: e831                      CVXYL  B1,B1
174f0: 4491                      SUB    B4,B1
17500: 6a3a                      LMO    B1,B10
17510: 059a 0130 c000            MOVE   B10,@C0000130h,0
17540: 09f0 6aa0 0006            MOVI   66AA0h,B0
17570: 4f02                      MOVE   A8,B2
17580: 0f20                      PIXBLT L,XY
17590: a3cf                      MOVE   A14,-*SP,1
175a0: 09e8 6800 0001            MOVI   16800h,A8
175d0: 930e                      MOVE   A8,*A14+,1
175e0: 1948                      MOVK   Ah,A8
175f0: 930e                      MOVE   A8,*A14+,1
17600: 0d5f 0000 0000            CALLA  0h
17630: 05c0 6a70 0006 00a0 c000  MOVE   @66A70h,@C00000A0h,0
17680: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
176b0: 0581 0150 c000            MOVE   A1,@C0000150h,0
176e0: 0582 0130 c000            MOVE   A2,@C0000130h,0
17710: 0583 0140 c000            MOVE   A3,@C0000140h,0
17740: 5600                      CLR    A0
17750: 0780 0000 0000            MOVE   A0,@0h,1
17780: 05a8 0120 c000            MOVE   @C0000120h,A8,0
177b0: 0b88 0400 0000            ANDI   FFFFFBFFh,A8
177e0: 0588 0120 c000            MOVE   A8,@C0000120h,0
17810: 09bf 7fff                 MMFM   SP,B0-B14
17830: 09af 410f                 MMFM   SP,A0-A3,A8,A14
17850: a29f                      MOVE   B4,-*SP,1
17860: 0541                      SETF   1h,0,0
17870: b5f4 0039                 MOVE   *SP(39h),B4,0
17890: ca1e                      JREQ   17A80h
178a0: 4db4                      MOVE   B13,B4
178b0: 2c94                      SRL    1Ch,B4
178c0: 15b4                      SUBK   Dh,B4
178d0: cb13                      JRNE   17A10h
178e0: 0545                      SETF   5h,0,0
178f0: 05b4 00ba c000            MOVE   @C00000BAh,B4,0
17920: cb15                      JRNE   17A80h
17930: 41d2                      ADD    B14,B2
17940: 4d5a                      MOVE   B10,B10
17950: cb04                      JRNE   179A0h
17960: 4430                      SUB    B1,B0
17970: 4d7e                      MOVE   B11,B14
17980: 053e                      ZEXT   B14,0
17990: cb01                      JRNE   179B0h
179a0: 181e                      MOVK   20h,B14
179b0: 45d0                      SUB    B14,B0
179c0: e9d4                      CVXYL  B14,B4
179d0: 4492                      SUB    B4,B2
179e0: 243d                      SLL    1h,B13
179f0: 2ffd                      SRL    1h,B13
17a00: c007                      JR     17A80h
17a10: 4dde                      MOVE   B14,B14
17a20: cb05                      JRNE   17A80h
17a30: 11b4                      ADDK   Dh,B4
17a40: ca02                      JREQ   17A70h
17a50: 1454                      SUBK   2h,B4
17a60: cb01                      JRNE   17A80h
17a70: 455e                      SUB    B10,B14
17a80: 97f4                      MOVE   *SP+,B4,1
17a90: 0912                      TRAP   12h
17aa0: 0940                      RETI   

_StrBlt:
17ab0: 098f ff60                 MMTM   SP,A0-A7,A9,A10
17ad0: 0550                      SETF   10h,0,0
17ae0: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
17b10: a7c1                      MOVE   -*A14,A1,1
17b20: 4e2a                      MOVE   A1,B10
17b30: b559 0030                 MOVE   *B10(30h),B9,0
17b50: b558 0040                 MOVE   *B10(40h),B8,0
17b70: 4d3c                      MOVE   B9,B12
17b80: 261c                      SLL    10h,B12
17b90: 5599                      OR     B12,B9
17ba0: 4d1c                      MOVE   B8,B12
17bb0: 261c                      SLL    10h,B12
17bc0: 5598                      OR     B12,B8
17bd0: b422 0050                 MOVE   *A1(50h),A2,0
17bf0: 1ee2                      BTST   8h,A2
17c00: ca0b                      JREQ   17CC0h
17c10: 5738                      XOR    B9,B8
17c20: 5719                      XOR    B8,B9
17c30: 5738                      XOR    B9,B8
17c40: b752 0060                 MOVE   *B10(60h),B2,1
17c60: b757 0080                 MOVE   *B10(80h),B7,1
17c80: 0fe0                      FILL   XY
17c90: 5738                      XOR    B9,B8
17ca0: 5719                      XOR    B8,B9
17cb0: 5738                      XOR    B9,B8
17cc0: 1fe2                      BTST   0h,A2
17cd0: ca10                      JREQ   17DE0h
17ce0: 4d39                      MOVE   B9,B9
17cf0: cb08                      JRNE   17D80h
17d00: 5718                      CLR    B8
17d10: 03f8                      NOT    B8
17d20: 0545                      SETF   5h,0,0
17d30: 1828                      MOVK   1h,A8
17d40: 0588 00ba c000            MOVE   A8,@C00000BAh,0
17d70: c006                      JR     17DE0h
17d80: 5718                      CLR    B8
17d90: 0541                      SETF   1h,0,0
17da0: 1828                      MOVK   1h,A8
17db0: 0588 00b5 c000            MOVE   A8,@C00000B5h,0
17de0: 0550                      SETF   10h,0,0
17df0: b428 0000                 MOVE   *A1(0h),A8,0
17e10: 24a8                      SLL    5h,A8
17e20: 0b28 6540 0006            ADDI   66540h,A8
17e50: 8703                      MOVE   *A8,A3,1
17e60: ca78                      JREQ   185F0h
17e70: b467 0000                 MOVE   *A3(0h),A7,0
17e90: b469 0010                 MOVE   *A3(10h),A9,0
17eb0: b46a 0020                 MOVE   *A3(20h),A10,0
17ed0: 4e6a                      MOVE   A3,B10
17ee0: b757 0040                 MOVE   *B10(40h),B7,1
17f00: b551 0060                 MOVE   *B10(60h),B1,0
17f20: 0b03 00a0                 ADDI   A0h,A3
17f40: 4c24                      MOVE   A1,A4
17f50: 0b04 00b0                 ADDI   B0h,A4
17f70: b425 00a0                 MOVE   *A1(A0h),A5,0
17f90: b626 0010                 MOVE   *A1(10h),A6,1
17fb0: e6c8                      CPW    A6,A8
17fc0: cd16                      JRNV   18130h
17fd0: 05ba 6640 0006            MOVE   @66640h,B10,0
18000: ca12                      JREQ   18130h
18010: 1ee8                      BTST   8h,A8
18020: cb5c                      JRNE   185F0h
18030: 575a                      CLR    B10
18040: eeba                      MOVY   B5,B10
18050: 4ecb                      MOVE   A6,B11
18060: e37a                      SUBXY  B11,B10
18070: c20b                      JRLS   18130h
18080: e4fa                      CMPXY  B7,B10
18090: c955                      JRNC   185F0h
180a0: 2e1a                      SRL    10h,B10
180b0: 261a                      SLL    10h,B10
180c0: e357                      SUBXY  B10,B7
180d0: 4f58                      MOVE   B10,A8
180e0: e106                      ADDXY  A8,A6
180f0: 4e31                      MOVE   B1,A1
18100: 2e08                      SRL    10h,A8
18110: 5f01                      MPYU   A8,A1
18120: c035                      JR     18480h
18130: 1fe2                      BTST   0h,A2
18140: cb16                      JRNE   182B0h
18150: 0548                      SETF   8h,0,0
18160: 9488                      MOVE   *A4+,A8,0
18170: 0550                      SETF   10h,0,0
18180: 4928                      CMP    A9,A8
18190: c702                      JRGT   181C0h
181a0: 44e8                      SUB    A7,A8
181b0: cf01                      JRNN   181D0h
181c0: 4d48                      MOVE   A10,A8
181d0: 24e8                      SLL    7h,A8
181e0: 4068                      ADD    A3,A8
181f0: 4f0a                      MOVE   A8,B10
18200: 855b                      MOVE   *B10,B11,0
18210: ca06                      JREQ   18280h
18220: 4f78                      MOVE   B11,A8
18230: ed77                      MOVX   B11,B7
18240: b750 0040                 MOVE   *B10(40h),B0,1
18260: 4ec2                      MOVE   A6,B2
18270: 0fa0                      PIXBLT B,XY
18280: e106                      ADDXY  A8,A6
18290: 3ea5                      DSJS   A5,18150h
182a0: c034                      JR     185F0h
182b0: 0548                      SETF   8h,0,0
182c0: 9488                      MOVE   *A4+,A8,0
182d0: 0550                      SETF   10h,0,0
182e0: 4928                      CMP    A9,A8
182f0: c702                      JRGT   18320h
18300: 44e8                      SUB    A7,A8
18310: cf01                      JRNN   18330h
18320: 4d48                      MOVE   A10,A8
18330: 24e8                      SLL    7h,A8
18340: 4068                      ADD    A3,A8
18350: 4f0a                      MOVE   A8,B10
18360: 8757                      MOVE   *B10,B7,1
18370: 4ef8                      MOVE   B7,A8
18380: 0528                      ZEXT   A8,0
18390: ca0b                      JREQ   18450h
183a0: 4cfb                      MOVE   B7,B11
183b0: 2e1b                      SRL    10h,B11
183c0: ca08                      JREQ   18450h
183d0: b750 0060                 MOVE   *B10(60h),B0,1
183f0: 4ec2                      MOVE   A6,B2
18400: b55a 0020                 MOVE   *B10(20h),B10,0
18420: 261a                      SLL    10h,B10
18430: e152                      ADDXY  B10,B2
18440: 0fa0                      PIXBLT B,XY
18450: e106                      ADDXY  A8,A6
18460: 3f85                      DSJS   A5,182B0h
18470: c017                      JR     185F0h
18480: 0548                      SETF   8h,0,0
18490: 9488                      MOVE   *A4+,A8,0
184a0: 0550                      SETF   10h,0,0
184b0: 4928                      CMP    A9,A8
184c0: c702                      JRGT   184F0h
184d0: 44e8                      SUB    A7,A8
184e0: cf01                      JRNN   18500h
184f0: 4d48                      MOVE   A10,A8
18500: 24e8                      SLL    7h,A8
18510: 4068                      ADD    A3,A8
18520: 4f0a                      MOVE   A8,B10
18530: 855b                      MOVE   *B10,B11,0
18540: ca08                      JREQ   185D0h
18550: 4f78                      MOVE   B11,A8
18560: ed77                      MOVX   B11,B7
18570: b750 0040                 MOVE   *B10(40h),B0,1
18590: 4e2a                      MOVE   A1,B10
185a0: 4150                      ADD    B10,B0
185b0: 4ec2                      MOVE   A6,B2
185c0: 0fa0                      PIXBLT B,XY
185d0: e106                      ADDXY  A8,A6
185e0: 3ee5                      DSJS   A5,18480h
185f0: 05a8 6640 0006            MOVE   @66640h,A8,0
18620: ca08                      JREQ   186B0h
18630: 5708                      CLR    A8
18640: 0588 6640 0006            MOVE   A8,@66640h,0
18670: 56b5                      CLR    B5
18680: 07b6 64e0 0006            MOVE   @664E0h,B6,1
186b0: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
186e0: 09af 06ff                 MMFM   SP,A0-A7,A9,A10
18700: 0962                      RETS   2h

_CWStrBlt:
18710: 098f ff70                 MMTM   SP,A0-A7,A9-A11
18730: 0550                      SETF   10h,0,0
18740: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
18770: a7c1                      MOVE   -*A14,A1,1
18780: 4e2a                      MOVE   A1,B10
18790: b559 0030                 MOVE   *B10(30h),B9,0
187b0: b558 0040                 MOVE   *B10(40h),B8,0
187d0: 4d3c                      MOVE   B9,B12
187e0: 261c                      SLL    10h,B12
187f0: 5599                      OR     B12,B9
18800: 4d1c                      MOVE   B8,B12
18810: 261c                      SLL    10h,B12
18820: 5598                      OR     B12,B8
18830: b422 0050                 MOVE   *A1(50h),A2,0
18850: 1ee2                      BTST   8h,A2
18860: ca0b                      JREQ   18920h
18870: 5738                      XOR    B9,B8
18880: 5719                      XOR    B8,B9
18890: 5738                      XOR    B9,B8
188a0: b752 0060                 MOVE   *B10(60h),B2,1
188c0: b757 0080                 MOVE   *B10(80h),B7,1
188e0: 0fe0                      FILL   XY
188f0: 5738                      XOR    B9,B8
18900: 5719                      XOR    B8,B9
18910: 5738                      XOR    B9,B8
18920: 1fe2                      BTST   0h,A2
18930: ca10                      JREQ   18A40h
18940: 4d39                      MOVE   B9,B9
18950: cb08                      JRNE   189E0h
18960: 5718                      CLR    B8
18970: 03f8                      NOT    B8
18980: 0545                      SETF   5h,0,0
18990: 1828                      MOVK   1h,A8
189a0: 0588 00ba c000            MOVE   A8,@C00000BAh,0
189d0: c006                      JR     18A40h
189e0: 5718                      CLR    B8
189f0: 0541                      SETF   1h,0,0
18a00: 1828                      MOVK   1h,A8
18a10: 0588 00b5 c000            MOVE   A8,@C00000B5h,0
18a40: 0550                      SETF   10h,0,0
18a50: b428 0000                 MOVE   *A1(0h),A8,0
18a70: 24a8                      SLL    5h,A8
18a80: 0b28 6540 0006            ADDI   66540h,A8
18ab0: 8703                      MOVE   *A8,A3,1
18ac0: b467 0000                 MOVE   *A3(0h),A7,0
18ae0: b46a 0010                 MOVE   *A3(10h),A10,0
18b00: b46b 0020                 MOVE   *A3(20h),A11,0
18b20: 4e6a                      MOVE   A3,B10
18b30: b757 0040                 MOVE   *B10(40h),B7,1
18b50: b551 0060                 MOVE   *B10(60h),B1,0
18b70: 0b03 00a0                 ADDI   A0h,A3
18b90: 4c24                      MOVE   A1,A4
18ba0: 0b04 00b0                 ADDI   B0h,A4
18bc0: b425 00a0                 MOVE   *A1(A0h),A5,0
18be0: b626 0010                 MOVE   *A1(10h),A6,1
18c00: 4c89                      MOVE   A4,A9
18c10: 4ca8                      MOVE   A5,A8
18c20: 1028                      INC    A8
18c30: 2fe8                      SRL    1h,A8
18c40: 2488                      SLL    4h,A8
18c50: 4109                      ADD    A8,A9
18c60: 1209                      ADDK   10h,A9
18c70: e6c8                      CPW    A6,A8
18c80: cd18                      JRNV   18E10h
18c90: 05ba 6640 0006            MOVE   @66640h,B10,0
18cc0: ca14                      JREQ   18E10h
18cd0: 1ee8                      BTST   8h,A8
18ce0: cb00 0088                 JRNE   19580h
18d00: 575a                      CLR    B10
18d10: eeba                      MOVY   B5,B10
18d20: 4ecb                      MOVE   A6,B11
18d30: e37a                      SUBXY  B11,B10
18d40: c20c                      JRLS   18E10h
18d50: e4fa                      CMPXY  B7,B10
18d60: c900 0080                 JRNC   19580h
18d80: 2e1a                      SRL    10h,B10
18d90: 261a                      SLL    10h,B10
18da0: e357                      SUBXY  B10,B7
18db0: 4f58                      MOVE   B10,A8
18dc0: e106                      ADDXY  A8,A6
18dd0: 4e31                      MOVE   B1,A1
18de0: 2e08                      SRL    10h,A8
18df0: 5f01                      MPYU   A8,A1
18e00: c04b                      JR     192C0h
18e10: 1fe2                      BTST   0h,A2
18e20: cb29                      JRNE   190C0h
18e30: 0548                      SETF   8h,0,0
18e40: 9488                      MOVE   *A4+,A8,0
18e50: 0550                      SETF   10h,0,0
18e60: 4948                      CMP    A10,A8
18e70: c702                      JRGT   18EA0h
18e80: 44e8                      SUB    A7,A8
18e90: cf01                      JRNN   18EB0h
18ea0: 4d68                      MOVE   A11,A8
18eb0: 24e8                      SLL    7h,A8
18ec0: 4068                      ADD    A3,A8
18ed0: 4f0a                      MOVE   A8,B10
18ee0: 855b                      MOVE   *B10,B11,0
18ef0: ed77                      MOVX   B11,B7
18f00: b750 0040                 MOVE   *B10(40h),B0,1
18f20: 4ec2                      MOVE   A6,B2
18f30: 0fa0                      PIXBLT B,XY
18f40: 9528                      MOVE   *A9+,A8,0
18f50: 4f0a                      MOVE   A8,B10
18f60: 4cfb                      MOVE   B7,B11
18f70: 053b                      ZEXT   B11,0
18f80: 4d7c                      MOVE   B11,B12
18f90: 457a                      SUB    B11,B10
18fa0: c60a                      JRLE   19050h
18fb0: 4ec2                      MOVE   A6,B2
18fc0: e192                      ADDXY  B12,B2
18fd0: ed57                      MOVX   B10,B7
18fe0: 5738                      XOR    B9,B8
18ff0: 5719                      XOR    B8,B9
19000: 5738                      XOR    B9,B8
19010: 0fe0                      FILL   XY
19020: 5738                      XOR    B9,B8
19030: 5719                      XOR    B8,B9
19040: 5738                      XOR    B9,B8
19050: e106                      ADDXY  A8,A6
19060: e6c8                      CPW    A6,A8
19070: 1f28                      BTST   6h,A8
19080: cb02                      JRNE   190B0h
19090: 0d85 ffd8                 DSJ    A5,18E30h
190b0: c04c                      JR     19580h
190c0: 0548                      SETF   8h,0,0
190d0: 9488                      MOVE   *A4+,A8,0
190e0: 0550                      SETF   10h,0,0
190f0: 4948                      CMP    A10,A8
19100: c702                      JRGT   19130h
19110: 44e8                      SUB    A7,A8
19120: cf01                      JRNN   19140h
19130: 4d68                      MOVE   A11,A8
19140: 24e8                      SLL    7h,A8
19150: 4068                      ADD    A3,A8
19160: 4f0a                      MOVE   A8,B10
19170: 8757                      MOVE   *B10,B7,1
19180: 4ef8                      MOVE   B7,A8
19190: 0528                      ZEXT   A8,0
191a0: 4cfb                      MOVE   B7,B11
191b0: 2e1b                      SRL    10h,B11
191c0: ca08                      JREQ   19250h
191d0: b750 0060                 MOVE   *B10(60h),B0,1
191f0: 4ec2                      MOVE   A6,B2
19200: b55a 0020                 MOVE   *B10(20h),B10,0
19220: 261a                      SLL    10h,B10
19230: e152                      ADDXY  B10,B2
19240: 0fa0                      PIXBLT B,XY
19250: 9528                      MOVE   *A9+,A8,0
19260: e106                      ADDXY  A8,A6
19270: e6c8                      CPW    A6,A8
19280: 1f28                      BTST   6h,A8
19290: cb01                      JRNE   192B0h
192a0: 3fe5                      DSJS   A5,190C0h
192b0: c02c                      JR     19580h
192c0: 0548                      SETF   8h,0,0
192d0: 9488                      MOVE   *A4+,A8,0
192e0: 0550                      SETF   10h,0,0
192f0: 4948                      CMP    A10,A8
19300: c702                      JRGT   19330h
19310: 44e8                      SUB    A7,A8
19320: cf01                      JRNN   19340h
19330: 4d68                      MOVE   A11,A8
19340: 24e8                      SLL    7h,A8
19350: 4068                      ADD    A3,A8
19360: 4f0a                      MOVE   A8,B10
19370: 855b                      MOVE   *B10,B11,0
19380: ed77                      MOVX   B11,B7
19390: b750 0040                 MOVE   *B10(40h),B0,1
193b0: 4e2a                      MOVE   A1,B10
193c0: 4150                      ADD    B10,B0
193d0: 4ec2                      MOVE   A6,B2
193e0: 0fa0                      PIXBLT B,XY
193f0: 9528                      MOVE   *A9+,A8,0
19400: 1fe2                      BTST   0h,A2
19410: cb10                      JRNE   19520h
19420: 4f0a                      MOVE   A8,B10
19430: 4cfb                      MOVE   B7,B11
19440: 053b                      ZEXT   B11,0
19450: 4d7c                      MOVE   B11,B12
19460: 457a                      SUB    B11,B10
19470: c60a                      JRLE   19520h
19480: 4ec2                      MOVE   A6,B2
19490: e192                      ADDXY  B12,B2
194a0: ed57                      MOVX   B10,B7
194b0: 5738                      XOR    B9,B8
194c0: 5719                      XOR    B8,B9
194d0: 5738                      XOR    B9,B8
194e0: 0fe0                      FILL   XY
194f0: 5738                      XOR    B9,B8
19500: 5719                      XOR    B8,B9
19510: 5738                      XOR    B9,B8
19520: e106                      ADDXY  A8,A6
19530: e6c8                      CPW    A6,A8
19540: 1f28                      BTST   6h,A8
19550: cb02                      JRNE   19580h
19560: 0d85 ffd4                 DSJ    A5,192C0h
19580: 05a8 6640 0006            MOVE   @66640h,A8,0
195b0: ca08                      JREQ   19640h
195c0: 5708                      CLR    A8
195d0: 0588 6640 0006            MOVE   A8,@66640h,0
19600: 56b5                      CLR    B5
19610: 07b6 64e0 0006            MOVE   @664E0h,B6,1
19640: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
19670: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
19690: 0962                      RETS   2h

_JFStrBlt:
196a0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
196c0: 0550                      SETF   10h,0,0
196d0: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
19700: a7c1                      MOVE   -*A14,A1,1
19710: 4e2a                      MOVE   A1,B10
19720: b559 0030                 MOVE   *B10(30h),B9,0
19740: b558 0040                 MOVE   *B10(40h),B8,0
19760: 4d3c                      MOVE   B9,B12
19770: 261c                      SLL    10h,B12
19780: 5599                      OR     B12,B9
19790: 4d1c                      MOVE   B8,B12
197a0: 261c                      SLL    10h,B12
197b0: 5598                      OR     B12,B8
197c0: b422 0050                 MOVE   *A1(50h),A2,0
197e0: 1ee2                      BTST   8h,A2
197f0: ca0b                      JREQ   198B0h
19800: 5738                      XOR    B9,B8
19810: 5719                      XOR    B8,B9
19820: 5738                      XOR    B9,B8
19830: b752 0060                 MOVE   *B10(60h),B2,1
19850: b757 0080                 MOVE   *B10(80h),B7,1
19870: 0fe0                      FILL   XY
19880: 5738                      XOR    B9,B8
19890: 5719                      XOR    B8,B9
198a0: 5738                      XOR    B9,B8
198b0: 1fe2                      BTST   0h,A2
198c0: ca10                      JREQ   199D0h
198d0: 4d39                      MOVE   B9,B9
198e0: cb08                      JRNE   19970h
198f0: 5718                      CLR    B8
19900: 03f8                      NOT    B8
19910: 0545                      SETF   5h,0,0
19920: 1828                      MOVK   1h,A8
19930: 0588 00ba c000            MOVE   A8,@C00000BAh,0
19960: c006                      JR     199D0h
19970: 5718                      CLR    B8
19980: 0541                      SETF   1h,0,0
19990: 1828                      MOVK   1h,A8
199a0: 0588 00b5 c000            MOVE   A8,@C00000B5h,0
199d0: 0550                      SETF   10h,0,0
199e0: b429 00a0                 MOVE   *A1(A0h),A9,0
19a00: b42a 00b0                 MOVE   *A1(B0h),A10,0
19a20: b42b 00c0                 MOVE   *A1(C0h),A11,0
19a40: b42c 00d0                 MOVE   *A1(D0h),A12,0
19a60: b42d 00e0                 MOVE   *A1(E0h),A13,0
19a80: b428 0000                 MOVE   *A1(0h),A8,0
19aa0: 24a8                      SLL    5h,A8
19ab0: 0b28 6540 0006            ADDI   66540h,A8
19ae0: 8703                      MOVE   *A8,A3,1
19af0: b468 0020                 MOVE   *A3(20h),A8,0
19b10: 0588 0af0 0007            MOVE   A8,@70AF0h,0
19b40: b467 0000                 MOVE   *A3(0h),A7,0
19b60: b468 0010                 MOVE   *A3(10h),A8,0
19b80: 4f0b                      MOVE   A8,B11
19b90: b46e 0030                 MOVE   *A3(30h),A14,0
19bb0: 40ee                      ADD    A7,A14
19bc0: 4e6a                      MOVE   A3,B10
19bd0: b757 0040                 MOVE   *B10(40h),B7,1
19bf0: b551 0060                 MOVE   *B10(60h),B1,0
19c10: 0b03 00a0                 ADDI   A0h,A3
19c30: 4c24                      MOVE   A1,A4
19c40: 0b04 0100                 ADDI   100h,A4
19c60: b425 00f0                 MOVE   *A1(F0h),A5,0
19c80: b626 0010                 MOVE   *A1(10h),A6,1
19ca0: 4f71                      MOVE   B11,A1
19cb0: e6c8                      CPW    A6,A8
19cc0: cd1b                      JRNV   19E80h
19cd0: 05ba 6640 0006            MOVE   @66640h,B10,0
19d00: ca17                      JREQ   19E80h
19d10: 1ee8                      BTST   8h,A8
19d20: cb00 00b7                 JRNE   1A8B0h
19d40: 575a                      CLR    B10
19d50: eeba                      MOVY   B5,B10
19d60: 4ecb                      MOVE   A6,B11
19d70: e37a                      SUBXY  B11,B10
19d80: c20f                      JRLS   19E80h
19d90: e4fa                      CMPXY  B7,B10
19da0: c900 00af                 JRNC   1A8B0h
19dc0: 2e1a                      SRL    10h,B10
19dd0: 261a                      SLL    10h,B10
19de0: e357                      SUBXY  B10,B7
19df0: 4f58                      MOVE   B10,A8
19e00: e106                      ADDXY  A8,A6
19e10: 4f0b                      MOVE   A8,B11
19e20: 2e1b                      SRL    10h,B11
19e30: 5e3b                      MPYU   B1,B11
19e40: 079b 0b00 0007            MOVE   B11,@70B00h,1
19e70: c063                      JR     1A4B0h
19e80: 1fe2                      BTST   0h,A2
19e90: cb34                      JRNE   1A1E0h
19ea0: 0548                      SETF   8h,0,0
19eb0: 9488                      MOVE   *A4+,A8,0
19ec0: 4d02                      MOVE   A8,A2
19ed0: 0550                      SETF   10h,0,0
19ee0: 4828                      CMP    A1,A8
19ef0: c702                      JRGT   19F20h
19f00: 44e8                      SUB    A7,A8
19f10: cf05                      JRNN   19F70h
19f20: 05a8 0af0 0007            MOVE   @70AF0h,A8,0
19f50: 4d02                      MOVE   A8,A2
19f60: 40e2                      ADD    A7,A2
19f70: 24e8                      SLL    7h,A8
19f80: 4068                      ADD    A3,A8
19f90: 4f0a                      MOVE   A8,B10
19fa0: 855b                      MOVE   *B10,B11,0
19fb0: 4f78                      MOVE   B11,A8
19fc0: ed77                      MOVX   B11,B7
19fd0: b750 0040                 MOVE   *B10(40h),B0,1
19ff0: 4ec2                      MOVE   A6,B2
1a000: 0fa0                      PIXBLT B,XY
1a010: e106                      ADDXY  A8,A6
1a020: 4eca                      MOVE   A6,B10
1a030: e126                      ADDXY  A9,A6
1a040: 49c2                      CMP    A14,A2
1a050: cb08                      JRNE   1A0E0h
1a060: 4d4a                      MOVE   A10,A10
1a070: ca06                      JREQ   1A0E0h
1a080: e146                      ADDXY  A10,A6
1a090: 458b                      SUB    A12,A11
1a0a0: c703                      JRGT   1A0E0h
1a0b0: 1828                      MOVK   1h,A8
1a0c0: e106                      ADDXY  A8,A6
1a0d0: 41ab                      ADD    A13,A11
1a0e0: 4ecb                      MOVE   A6,B11
1a0f0: e55b                      CMPXY  B10,B11
1a100: c40a                      JRLT   1A1B0h
1a110: 4d52                      MOVE   B10,B2
1a120: e35b                      SUBXY  B10,B11
1a130: ed77                      MOVX   B11,B7
1a140: 5738                      XOR    B9,B8
1a150: 5719                      XOR    B8,B9
1a160: 5738                      XOR    B9,B8
1a170: 0fe0                      FILL   XY
1a180: 5738                      XOR    B9,B8
1a190: 5719                      XOR    B8,B9
1a1a0: 5738                      XOR    B9,B8
1a1b0: 0d85 ffcd                 DSJ    A5,19EA0h
1a1d0: c06d                      JR     1A8B0h
1a1e0: 0548                      SETF   8h,0,0
1a1f0: 9488                      MOVE   *A4+,A8,0
1a200: 4d02                      MOVE   A8,A2
1a210: 0550                      SETF   10h,0,0
1a220: 4828                      CMP    A1,A8
1a230: c702                      JRGT   1A260h
1a240: 44e8                      SUB    A7,A8
1a250: cf05                      JRNN   1A2B0h
1a260: 05a8 0af0 0007            MOVE   @70AF0h,A8,0
1a290: 4d02                      MOVE   A8,A2
1a2a0: 40e2                      ADD    A7,A2
1a2b0: 24e8                      SLL    7h,A8
1a2c0: 4068                      ADD    A3,A8
1a2d0: 4f0a                      MOVE   A8,B10
1a2e0: 8757                      MOVE   *B10,B7,1
1a2f0: 4ef8                      MOVE   B7,A8
1a300: 0528                      ZEXT   A8,0
1a310: 4cfb                      MOVE   B7,B11
1a320: 2e1b                      SRL    10h,B11
1a330: ca08                      JREQ   1A3C0h
1a340: b750 0060                 MOVE   *B10(60h),B0,1
1a360: 4ec2                      MOVE   A6,B2
1a370: b55a 0020                 MOVE   *B10(20h),B10,0
1a390: 261a                      SLL    10h,B10
1a3a0: e152                      ADDXY  B10,B2
1a3b0: 0fa0                      PIXBLT B,XY
1a3c0: e106                      ADDXY  A8,A6
1a3d0: e126                      ADDXY  A9,A6
1a3e0: 49c2                      CMP    A14,A2
1a3f0: cb08                      JRNE   1A480h
1a400: 4d4a                      MOVE   A10,A10
1a410: ca06                      JREQ   1A480h
1a420: e146                      ADDXY  A10,A6
1a430: 458b                      SUB    A12,A11
1a440: c703                      JRGT   1A480h
1a450: 1828                      MOVK   1h,A8
1a460: e106                      ADDXY  A8,A6
1a470: 41ab                      ADD    A13,A11
1a480: 0d85 ffd4                 DSJ    A5,1A1E0h
1a4a0: c040                      JR     1A8B0h
1a4b0: 27e2                      SLL    1Fh,A2
1a4c0: 2c22                      SRL    1Fh,A2
1a4d0: 0582 0b20 0007            MOVE   A2,@70B20h,0
1a500: 0548                      SETF   8h,0,0
1a510: 9488                      MOVE   *A4+,A8,0
1a520: 4d02                      MOVE   A8,A2
1a530: 0550                      SETF   10h,0,0
1a540: 4828                      CMP    A1,A8
1a550: c702                      JRGT   1A580h
1a560: 44e8                      SUB    A7,A8
1a570: cf05                      JRNN   1A5D0h
1a580: 05a8 0af0 0007            MOVE   @70AF0h,A8,0
1a5b0: 4d02                      MOVE   A8,A2
1a5c0: 40e2                      ADD    A7,A2
1a5d0: 24e8                      SLL    7h,A8
1a5e0: 4068                      ADD    A3,A8
1a5f0: 4f0a                      MOVE   A8,B10
1a600: 855b                      MOVE   *B10,B11,0
1a610: 4f78                      MOVE   B11,A8
1a620: ed77                      MOVX   B11,B7
1a630: b750 0040                 MOVE   *B10(40h),B0,1
1a650: 07ba 0b00 0007            MOVE   @70B00h,B10,1
1a680: 4150                      ADD    B10,B0
1a690: 4ec2                      MOVE   A6,B2
1a6a0: 0fa0                      PIXBLT B,XY
1a6b0: e106                      ADDXY  A8,A6
1a6c0: 4eca                      MOVE   A6,B10
1a6d0: e126                      ADDXY  A9,A6
1a6e0: 49c2                      CMP    A14,A2
1a6f0: cb08                      JRNE   1A780h
1a700: 4d4a                      MOVE   A10,A10
1a710: ca06                      JREQ   1A780h
1a720: e146                      ADDXY  A10,A6
1a730: 458b                      SUB    A12,A11
1a740: c703                      JRGT   1A780h
1a750: 1828                      MOVK   1h,A8
1a760: e106                      ADDXY  A8,A6
1a770: 41ab                      ADD    A13,A11
1a780: 05bb 0b20 0007            MOVE   @70B20h,B11,0
1a7b0: cb0d                      JRNE   1A890h
1a7c0: 4ecb                      MOVE   A6,B11
1a7d0: e55b                      CMPXY  B10,B11
1a7e0: c40a                      JRLT   1A890h
1a7f0: 4d52                      MOVE   B10,B2
1a800: e35b                      SUBXY  B10,B11
1a810: ed77                      MOVX   B11,B7
1a820: 5738                      XOR    B9,B8
1a830: 5719                      XOR    B8,B9
1a840: 5738                      XOR    B9,B8
1a850: 0fe0                      FILL   XY
1a860: 5738                      XOR    B9,B8
1a870: 5719                      XOR    B8,B9
1a880: 5738                      XOR    B9,B8
1a890: 0d85 ffc5                 DSJ    A5,1A500h
1a8b0: 05a8 6640 0006            MOVE   @66640h,A8,0
1a8e0: ca08                      JREQ   1A970h
1a8f0: 5708                      CLR    A8
1a900: 0588 6640 0006            MOVE   A8,@66640h,0
1a930: 56b5                      CLR    B5
1a940: 07b6 64e0 0006            MOVE   @664E0h,B6,1
1a970: 4d68                      MOVE   A11,A8
1a980: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
1a9b0: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
1a9d0: b7ee 0020                 MOVE   *SP(20h),A14,1
1a9f0: 0962                      RETS   2h

_FastBorder:
1aa00: 098f f000                 MMTM   SP,A0-A3
1aa20: 0550                      SETF   10h,0,0
1aa30: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
1aa60: a7c1                      MOVE   -*A14,A1,1
1aa70: b428 0000                 MOVE   *A1(0h),A8,0
1aa90: 0545                      SETF   5h,0,0
1aaa0: 0588 00ba c000            MOVE   A8,@C00000BAh,0
1aad0: 0550                      SETF   10h,0,0
1aae0: b422 0010                 MOVE   *A1(10h),A2,0
1ab00: 4c48                      MOVE   A2,A8
1ab10: 2788                      SLL    1Ch,A8
1ab20: 2c68                      SRL    1Dh,A8
1ab30: ca41                      JREQ   1AF50h
1ab40: 1428                      DEC    A8
1ab50: ca5a                      JREQ   1B100h
1ab60: 1428                      DEC    A8
1ab70: ca15                      JREQ   1ACD0h
1ab80: 1428                      DEC    A8
1ab90: ca04                      JREQ   1ABE0h
1aba0: 07a3 63c0 0003            MOVE   @363C0h,A3,1
1abd0: c01d                      JR     1ADB0h
1abe0: 07a3 63e0 0003            MOVE   @363E0h,A3,1
1ac10: 4e2a                      MOVE   A1,B10
1ac20: b559 0020                 MOVE   *B10(20h),B9,0
1ac40: b558 0030                 MOVE   *B10(30h),B8,0
1ac60: 4d3c                      MOVE   B9,B12
1ac70: 261c                      SLL    10h,B12
1ac80: 5599                      OR     B12,B9
1ac90: 4d1c                      MOVE   B8,B12
1aca0: 261c                      SLL    10h,B12
1acb0: 5598                      OR     B12,B8
1acc0: c00e                      JR     1ADB0h
1acd0: 07a3 63e0 0003            MOVE   @363E0h,A3,1
1ad00: 4e2a                      MOVE   A1,B10
1ad10: b558 0020                 MOVE   *B10(20h),B8,0
1ad30: b559 0030                 MOVE   *B10(30h),B9,0
1ad50: 4d3c                      MOVE   B9,B12
1ad60: 261c                      SLL    10h,B12
1ad70: 5599                      OR     B12,B9
1ad80: 4d1c                      MOVE   B8,B12
1ad90: 261c                      SLL    10h,B12
1ada0: 5598                      OR     B12,B8
1adb0: a3cf                      MOVE   A14,-*SP,1
1adc0: 07a8 2180 0003            MOVE   @32180h,A8,1
1adf0: 930e                      MOVE   A8,*A14+,1
1ae00: b428 0090                 MOVE   *A1(90h),A8,0
1ae20: 930e                      MOVE   A8,*A14+,1
1ae30: b428 0080                 MOVE   *A1(80h),A8,0
1ae50: 930e                      MOVE   A8,*A14+,1
1ae60: b428 0050                 MOVE   *A1(50h),A8,0
1ae80: 930e                      MOVE   A8,*A14+,1
1ae90: b428 0040                 MOVE   *A1(40h),A8,0
1aeb0: 930e                      MOVE   A8,*A14+,1
1aec0: b428 0070                 MOVE   *A1(70h),A8,0
1aee0: 930e                      MOVE   A8,*A14+,1
1aef0: b428 0060                 MOVE   *A1(60h),A8,0
1af10: 930e                      MOVE   A8,*A14+,1
1af20: 0d3f 002e                 CALLR  1B220h
1af40: c01b                      JR     1B100h
1af50: 4e2a                      MOVE   A1,B10
1af60: b559 0020                 MOVE   *B10(20h),B9,0
1af80: 4d3c                      MOVE   B9,B12
1af90: 261c                      SLL    10h,B12
1afa0: 5599                      OR     B12,B9
1afb0: a3cf                      MOVE   A14,-*SP,1
1afc0: b428 0090                 MOVE   *A1(90h),A8,0
1afe0: 930e                      MOVE   A8,*A14+,1
1aff0: b428 0080                 MOVE   *A1(80h),A8,0
1b010: 930e                      MOVE   A8,*A14+,1
1b020: b428 0050                 MOVE   *A1(50h),A8,0
1b040: 930e                      MOVE   A8,*A14+,1
1b050: b428 0040                 MOVE   *A1(40h),A8,0
1b070: 930e                      MOVE   A8,*A14+,1
1b080: b428 0070                 MOVE   *A1(70h),A8,0
1b0a0: 930e                      MOVE   A8,*A14+,1
1b0b0: b428 0060                 MOVE   *A1(60h),A8,0
1b0d0: 930e                      MOVE   A8,*A14+,1
1b0e0: 0d3f 007f                 CALLR  1B8F0h
1b100: 05a8 6640 0006            MOVE   @66640h,A8,0
1b130: ca08                      JREQ   1B1C0h
1b140: 5708                      CLR    A8
1b150: 0588 6640 0006            MOVE   A8,@66640h,0
1b180: 56b5                      CLR    B5
1b190: 07b6 64e0 0006            MOVE   @664E0h,B6,1
1b1c0: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
1b1f0: 09af 000f                 MMFM   SP,A0-A3
1b210: 0962                      RETS   2h
1b220: 098f af7c                 MMTM   SP,A0,A2,A4-A7,A9-A13
1b240: 4dcd                      MOVE   A14,A13
1b250: 100e                      ADDK   20h,A14
1b260: b7a9 ffe0                 MOVE   *A13(FFE0h),A9,1
1b280: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
1b2a0: b7ab ffa0                 MOVE   *A13(FFA0h),A11,1
1b2c0: b7ac ff80                 MOVE   *A13(FF80h),A12,1
1b2e0: b7a0 ff60                 MOVE   *A13(FF60h),A0,1
1b300: b7a2 ff40                 MOVE   *A13(FF40h),A2,1
1b320: 4c07                      MOVE   A0,A7
1b330: 2427                      SLL    1h,A7
1b340: 4d24                      MOVE   A9,A4
1b350: 44e4                      SUB    A7,A4
1b360: 4c47                      MOVE   A2,A7
1b370: 2427                      SLL    1h,A7
1b380: 4d46                      MOVE   A10,A6
1b390: 44e6                      SUB    A7,A6
1b3a0: 4c87                      MOVE   A4,A7
1b3b0: c602                      JRLE   1B3E0h
1b3c0: 4cc7                      MOVE   A6,A7
1b3d0: c70d                      JRGT   1B4B0h
1b3e0: a3cf                      MOVE   A14,-*SP,1
1b3f0: 926e                      MOVE   A3,*A14+,1
1b400: 4d87                      MOVE   A12,A7
1b410: 2607                      SLL    10h,A7
1b420: 5567                      OR     A11,A7
1b430: 92ee                      MOVE   A7,*A14+,1
1b440: 4d47                      MOVE   A10,A7
1b450: 2607                      SLL    10h,A7
1b460: 5527                      OR     A9,A7
1b470: 92ee                      MOVE   A7,*A14+,1
1b480: 0d3f 00ab                 CALLR  1BF50h
1b4a0: c03f                      JR     1B8A0h
1b4b0: 4d87                      MOVE   A12,A7
1b4c0: 4047                      ADD    A2,A7
1b4d0: 82ed                      MOVE   A7,*A13,1
1b4e0: a3cf                      MOVE   A14,-*SP,1
1b4f0: 926e                      MOVE   A3,*A14+,1
1b500: d3ae ff20                 MOVE   *A13(FF20h),*A14+,1
1b520: 4d85                      MOVE   A12,A5
1b530: 2605                      SLL    10h,A5
1b540: 5565                      OR     A11,A5
1b550: 92ae                      MOVE   A5,*A14+,1
1b560: 4c45                      MOVE   A2,A5
1b570: 2605                      SLL    10h,A5
1b580: 5525                      OR     A9,A5
1b590: 92ae                      MOVE   A5,*A14+,1
1b5a0: 0d3f 0099                 CALLR  1BF50h
1b5c0: a3cf                      MOVE   A14,-*SP,1
1b5d0: 926e                      MOVE   A3,*A14+,1
1b5e0: d3ae ff20                 MOVE   *A13(FF20h),*A14+,1
1b600: 4d85                      MOVE   A12,A5
1b610: 4145                      ADD    A10,A5
1b620: 4445                      SUB    A2,A5
1b630: 2605                      SLL    10h,A5
1b640: 5565                      OR     A11,A5
1b650: 92ae                      MOVE   A5,*A14+,1
1b660: 4c45                      MOVE   A2,A5
1b670: 2605                      SLL    10h,A5
1b680: 5525                      OR     A9,A5
1b690: 92ae                      MOVE   A5,*A14+,1
1b6a0: 0d3f 0089                 CALLR  1BF50h
1b6c0: a3cf                      MOVE   A14,-*SP,1
1b6d0: 926e                      MOVE   A3,*A14+,1
1b6e0: d3ae ff20                 MOVE   *A13(FF20h),*A14+,1
1b700: 2607                      SLL    10h,A7
1b710: 5567                      OR     A11,A7
1b720: 92ee                      MOVE   A7,*A14+,1
1b730: 4cc7                      MOVE   A6,A7
1b740: 2607                      SLL    10h,A7
1b750: 5407                      OR     A0,A7
1b760: 92ee                      MOVE   A7,*A14+,1
1b770: 0d3f 007c                 CALLR  1BF50h
1b790: a3cf                      MOVE   A14,-*SP,1
1b7a0: 926e                      MOVE   A3,*A14+,1
1b7b0: d3ae ff20                 MOVE   *A13(FF20h),*A14+,1
1b7d0: 4d67                      MOVE   A11,A7
1b7e0: 4127                      ADD    A9,A7
1b7f0: 4407                      SUB    A0,A7
1b800: 87a5                      MOVE   *A13,A5,1
1b810: 2605                      SLL    10h,A5
1b820: 54e5                      OR     A7,A5
1b830: 92ae                      MOVE   A5,*A14+,1
1b840: 4cc7                      MOVE   A6,A7
1b850: 2607                      SLL    10h,A7
1b860: 5407                      OR     A0,A7
1b870: 92ee                      MOVE   A7,*A14+,1
1b880: 0d3f 006b                 CALLR  1BF50h
1b8a0: b7ee 0180                 MOVE   *SP(180h),A14,1
1b8c0: 09af 3ef5                 MMFM   SP,A0,A2,A4-A7,A9-A13
1b8e0: 0962                      RETS   2h
1b8f0: 098f af7c                 MMTM   SP,A0,A2,A4-A7,A9-A13
1b910: 4dcd                      MOVE   A14,A13
1b920: 100e                      ADDK   20h,A14
1b930: b7a9 ffe0                 MOVE   *A13(FFE0h),A9,1
1b950: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
1b970: b7ab ffa0                 MOVE   *A13(FFA0h),A11,1
1b990: b7ac ff80                 MOVE   *A13(FF80h),A12,1
1b9b0: b7a0 ff60                 MOVE   *A13(FF60h),A0,1
1b9d0: b7a2 ff40                 MOVE   *A13(FF40h),A2,1
1b9f0: 4c07                      MOVE   A0,A7
1ba00: 2427                      SLL    1h,A7
1ba10: 4d24                      MOVE   A9,A4
1ba20: 44e4                      SUB    A7,A4
1ba30: 4c47                      MOVE   A2,A7
1ba40: 2427                      SLL    1h,A7
1ba50: 4d46                      MOVE   A10,A6
1ba60: 44e6                      SUB    A7,A6
1ba70: 4c87                      MOVE   A4,A7
1ba80: c602                      JRLE   1BAB0h
1ba90: 4cc7                      MOVE   A6,A7
1baa0: c70c                      JRGT   1BB70h
1bab0: a3cf                      MOVE   A14,-*SP,1
1bac0: 4d87                      MOVE   A12,A7
1bad0: 2607                      SLL    10h,A7
1bae0: 5567                      OR     A11,A7
1baf0: 92ee                      MOVE   A7,*A14+,1
1bb00: 4d47                      MOVE   A10,A7
1bb10: 2607                      SLL    10h,A7
1bb20: 5527                      OR     A9,A7
1bb30: 92ee                      MOVE   A7,*A14+,1
1bb40: 0d3f 0039                 CALLR  1BEF0h
1bb60: c033                      JR     1BEA0h
1bb70: 4d87                      MOVE   A12,A7
1bb80: 4047                      ADD    A2,A7
1bb90: 82ed                      MOVE   A7,*A13,1
1bba0: a3cf                      MOVE   A14,-*SP,1
1bbb0: 4d85                      MOVE   A12,A5
1bbc0: 2605                      SLL    10h,A5
1bbd0: 5565                      OR     A11,A5
1bbe0: 92ae                      MOVE   A5,*A14+,1
1bbf0: 4c45                      MOVE   A2,A5
1bc00: 2605                      SLL    10h,A5
1bc10: 5525                      OR     A9,A5
1bc20: 92ae                      MOVE   A5,*A14+,1
1bc30: 0d3f 002a                 CALLR  1BEF0h
1bc50: a3cf                      MOVE   A14,-*SP,1
1bc60: 4d85                      MOVE   A12,A5
1bc70: 4145                      ADD    A10,A5
1bc80: 4445                      SUB    A2,A5
1bc90: 2605                      SLL    10h,A5
1bca0: 5565                      OR     A11,A5
1bcb0: 92ae                      MOVE   A5,*A14+,1
1bcc0: 4c45                      MOVE   A2,A5
1bcd0: 2605                      SLL    10h,A5
1bce0: 5525                      OR     A9,A5
1bcf0: 92ae                      MOVE   A5,*A14+,1
1bd00: 0d3f 001d                 CALLR  1BEF0h
1bd20: a3cf                      MOVE   A14,-*SP,1
1bd30: 2607                      SLL    10h,A7
1bd40: 5567                      OR     A11,A7
1bd50: 92ee                      MOVE   A7,*A14+,1
1bd60: 4cc7                      MOVE   A6,A7
1bd70: 2607                      SLL    10h,A7
1bd80: 5407                      OR     A0,A7
1bd90: 92ee                      MOVE   A7,*A14+,1
1bda0: 0d3f 0013                 CALLR  1BEF0h
1bdc0: a3cf                      MOVE   A14,-*SP,1
1bdd0: 4d67                      MOVE   A11,A7
1bde0: 4127                      ADD    A9,A7
1bdf0: 4407                      SUB    A0,A7
1be00: 87a5                      MOVE   *A13,A5,1
1be10: 2605                      SLL    10h,A5
1be20: 54e5                      OR     A7,A5
1be30: 92ae                      MOVE   A5,*A14+,1
1be40: 4cc7                      MOVE   A6,A7
1be50: 2607                      SLL    10h,A7
1be60: 5407                      OR     A0,A7
1be70: 92ee                      MOVE   A7,*A14+,1
1be80: 0d3f 0005                 CALLR  1BEF0h
1bea0: b7ee 0180                 MOVE   *SP(180h),A14,1
1bec0: 09af 3ef5                 MMFM   SP,A0,A2,A4-A7,A9-A13
1bee0: 0962                      RETS   2h
1bef0: 4fca                      MOVE   A14,B10
1bf00: a757                      MOVE   -*B10,B7,1
1bf10: a752                      MOVE   -*B10,B2,1
1bf20: 4f5e                      MOVE   B10,A14
1bf30: 0fe0                      FILL   XY
1bf40: 0962                      RETS   2h
1bf50: 0550                      SETF   10h,0,0
1bf60: 4fca                      MOVE   A14,B10
1bf70: a757                      MOVE   -*B10,B7,1
1bf80: a752                      MOVE   -*B10,B2,1
1bf90: a750                      MOVE   -*B10,B0,1
1bfa0: 4f5e                      MOVE   B10,A14
1bfb0: a7c8                      MOVE   -*A14,A8,1
1bfc0: 0928                      CALL   A8
1bfd0: 0962                      RETS   2h

_FontAlloc:
1bfe0: 098f ff60                 MMTM   SP,A0-A7,A9,A10
1c000: 0550                      SETF   10h,0,0
1c010: a7c0                      MOVE   -*A14,A0,1
1c020: 05a4 2320 0003            MOVE   @32320h,A4,0
1c050: 0b44 fff7                 CMPI   8h,A4
1c070: c403                      JRLT   1C0B0h
1c080: 09c8 ffff                 MOVI   FFFFh,A8
1c0a0: c06f                      JR     1C7A0h
1c0b0: 1a82                      MOVK   14h,A2
1c0c0: b408 0010                 MOVE   *A0(10h),A8,0
1c0e0: b405 0000                 MOVE   *A0(0h),A5,0
1c100: 44a8                      SUB    A5,A8
1c110: 1028                      INC    A8
1c120: 4d0a                      MOVE   A8,A10
1c130: 2488                      SLL    4h,A8
1c140: 4102                      ADD    A8,A2
1c150: 4c47                      MOVE   A2,A7
1c160: 2467                      SLL    3h,A7
1c170: b408 0060                 MOVE   *A0(60h),A8,0
1c190: ca06                      JREQ   1C200h
1c1a0: 4d05                      MOVE   A8,A5
1c1b0: 11e5                      ADDK   Fh,A5
1c1c0: 0b85 000f 0000            ANDI   FFFFFFF0h,A5
1c1f0: c008                      JR     1C280h
1c200: b408 0070                 MOVE   *A0(70h),A8,0
1c220: 4d45                      MOVE   A10,A5
1c230: 5f05                      MPYU   A8,A5
1c240: 11e5                      ADDK   Fh,A5
1c250: 0b85 000f 0000            ANDI   FFFFFFF0h,A5
1c280: 4ca1                      MOVE   A5,A1
1c290: b408 0040                 MOVE   *A0(40h),A8,0
1c2b0: 5f05                      MPYU   A8,A5
1c2c0: 2fa5                      SRL    3h,A5
1c2d0: c00c                      JR     1C3A0h
1c2e0: 0d5f 0000 0000            CALLA  0h
1c310: 4d05                      MOVE   A8,A5
1c320: 4ca1                      MOVE   A5,A1
1c330: b408 0040                 MOVE   *A0(40h),A8,0
1c350: 5b01                      DIVU   A8,A1
1c360: 0b81 000f 0000            ANDI   FFFFFFF0h,A1
1c390: 4445                      SUB    A2,A5
1c3a0: 40a2                      ADD    A5,A2
1c3b0: a3cf                      MOVE   A14,-*SP,1
1c3c0: 924e                      MOVE   A2,*A14+,1
1c3d0: 0d5f 0000 0000            CALLA  0h
1c400: 4d08                      MOVE   A8,A8
1c410: cb09                      JRNE   1C4B0h
1c420: 5708                      CLR    A8
1c430: 05a8 2320 0003            MOVE   @32320h,A8,0
1c460: 5508                      OR     A8,A8
1c470: cae6                      JREQ   1C2E0h
1c480: 09c8 ffff                 MOVI   FFFFh,A8
1c4a0: c02f                      JR     1C7A0h
1c4b0: 4d06                      MOVE   A8,A6
1c4c0: 4c88                      MOVE   A4,A8
1c4d0: 1028                      INC    A8
1c4e0: 0588 2320 0003            MOVE   A8,@32320h,0
1c510: 4c88                      MOVE   A4,A8
1c520: 24a8                      SLL    5h,A8
1c530: 0b28 6540 0006            ADDI   66540h,A8
1c560: 82c8                      MOVE   A6,*A8,1
1c570: b806 0000 0000            MOVE   *A0(0h),*A6(0h),0
1c5a0: b806 0010 0010            MOVE   *A0(10h),*A6(10h),0
1c5d0: b806 0020 0030            MOVE   *A0(20h),*A6(30h),0
1c600: b806 0030 0040            MOVE   *A0(30h),*A6(40h),0
1c630: b806 0040 0050            MOVE   *A0(40h),*A6(50h),0
1c660: b806 0050 0020            MOVE   *A0(50h),*A6(20h),0
1c690: b026 0060                 MOVE   A1,*A6(60h),0
1c6b0: 40c7                      ADD    A6,A7
1c6c0: b2e6 0070                 MOVE   A7,*A6(70h),1
1c6e0: 5708                      CLR    A8
1c6f0: b106 0090                 MOVE   A8,*A6(90h),0
1c710: 4cc7                      MOVE   A6,A7
1c720: 0b07 00a0                 ADDI   A0h,A7
1c740: 5708                      CLR    A8
1c750: 4d45                      MOVE   A10,A5
1c760: 2445                      SLL    2h,A5
1c770: 9307                      MOVE   A8,*A7+,1
1c780: 3c45                      DSJS   A5,1C770h
1c790: 4c88                      MOVE   A4,A8
1c7a0: 09af 06ff                 MMFM   SP,A0-A7,A9,A10
1c7c0: 0962                      RETS   2h

_FontAddGlyph:
1c7d0: 098f ff60                 MMTM   SP,A0-A7,A9,A10
1c7f0: a27f                      MOVE   B3,-*SP,1
1c800: 0550                      SETF   10h,0,0
1c810: a7c0                      MOVE   -*A14,A0,1
1c820: b409 0000                 MOVE   *A0(0h),A9,0
1c840: 24a9                      SLL    5h,A9
1c850: 0b29 6540 0006            ADDI   66540h,A9
1c880: 8729                      MOVE   *A9,A9,1
1c890: b521 0060                 MOVE   *A9(60h),A1,0
1c8b0: 4e23                      MOVE   A1,B3
1c8c0: b528 0050                 MOVE   *A9(50h),A8,0
1c8e0: 4f07                      MOVE   A8,B7
1c8f0: 2617                      SLL    10h,B7
1c900: 4f2a                      MOVE   A9,B10
1c910: b752 0070                 MOVE   *B10(70h),B2,1
1c930: b55b 0090                 MOVE   *B10(90h),B11,0
1c950: 4172                      ADD    B11,B2
1c960: b408 0020                 MOVE   *A0(20h),A8,0
1c980: 24e8                      SLL    7h,A8
1c990: 4128                      ADD    A9,A8
1c9a0: 0b08 00a0                 ADDI   A0h,A8
1c9c0: 4d09                      MOVE   A8,A9
1c9d0: 07b0 2160 0003            MOVE   @32160h,B0,1
1ca00: b408 0010                 MOVE   *A0(10h),A8,0
1ca20: ca11                      JREQ   1CB40h
1ca30: 4f0c                      MOVE   A8,B12
1ca40: 419b                      ADD    B12,B11
1ca50: 4973                      CMP    B11,B3
1ca60: c40d                      JRLT   1CB40h
1ca70: b17a 0090                 MOVE   B11,*B10(90h),0
1ca90: 4f0a                      MOVE   A8,B10
1caa0: ed57                      MOVX   B10,B7
1cab0: 10e8                      ADDK   7h,A8
1cac0: 0b88 0007 0000            ANDI   FFFFFFF8h,A8
1caf0: 4f01                      MOVE   A8,B1
1cb00: 0d3f 0006                 CALLR  1CB80h
1cb20: 0d3f 005f                 CALLR  1D130h
1cb40: 97f3                      MOVE   *SP+,B3,1
1cb50: 09af 06ff                 MMFM   SP,A0-A7,A9,A10
1cb70: 0962                      RETS   2h
1cb80: 4ef8                      MOVE   B7,A8
1cb90: 0528                      ZEXT   A8,0
1cba0: b109 0000                 MOVE   A8,*A9(0h),0
1cbc0: 4e58                      MOVE   B2,A8
1cbd0: b309 0040                 MOVE   A8,*A9(40h),1
1cbf0: 4ef3                      MOVE   B7,A3
1cc00: 2e03                      SRL    10h,A3
1cc10: 4e6d                      MOVE   A3,B13
1cc20: 247d                      SLL    3h,B13
1cc30: 4e15                      MOVE   B0,A5
1cc40: 0548                      SETF   8h,0,0
1cc50: 4e38                      MOVE   B1,A8
1cc60: 2fa8                      SRL    3h,A8
1cc70: 4eab                      MOVE   A5,B11
1cc80: 857c                      MOVE   *B11,B12,0
1cc90: cb04                      JRNE   1CCE0h
1cca0: 41bb                      ADD    B13,B11
1ccb0: 3c88                      DSJS   A8,1CC80h
1ccc0: 1105                      ADDK   8h,A5
1ccd0: 3d23                      DSJS   A3,1CC50h
1cce0: 0550                      SETF   10h,0,0
1ccf0: 4e6e                      MOVE   A3,B14
1cd00: 4ef3                      MOVE   B7,A3
1cd10: 2e03                      SRL    10h,A3
1cd20: 4e6d                      MOVE   A3,B13
1cd30: 247d                      SLL    3h,B13
1cd40: 4c65                      MOVE   A3,A5
1cd50: 1425                      DEC    A5
1cd60: 2465                      SLL    3h,A5
1cd70: 4e18                      MOVE   B0,A8
1cd80: 4105                      ADD    A8,A5
1cd90: 0548                      SETF   8h,0,0
1cda0: 4e38                      MOVE   B1,A8
1cdb0: 2fa8                      SRL    3h,A8
1cdc0: 4eab                      MOVE   A5,B11
1cdd0: 857c                      MOVE   *B11,B12,0
1cde0: cb04                      JRNE   1CE30h
1cdf0: 41bb                      ADD    B13,B11
1ce00: 3c88                      DSJS   A8,1CDD0h
1ce10: 1505                      SUBK   8h,A5
1ce20: 3d23                      DSJS   A3,1CDA0h
1ce30: 0550                      SETF   10h,0,0
1ce40: 4e6d                      MOVE   A3,B13
1ce50: 4ef8                      MOVE   B7,A8
1ce60: 2e08                      SRL    10h,A8
1ce70: 4f0a                      MOVE   A8,B10
1ce80: 4f0b                      MOVE   A8,B11
1ce90: 4f0c                      MOVE   A8,B12
1cea0: 45bb                      SUB    B13,B11
1ceb0: 45dc                      SUB    B14,B12
1cec0: 4d9e                      MOVE   B12,B14
1ced0: 417e                      ADD    B11,B14
1cee0: 45da                      SUB    B14,B10
1cef0: c10d                      JRP    1CFD0h
1cf00: 575a                      CLR    B10
1cf10: 4f58                      MOVE   B10,A8
1cf20: b109 0010                 MOVE   A8,*A9(10h),0
1cf40: b109 0030                 MOVE   A8,*A9(30h),0
1cf60: b309 0060                 MOVE   A8,*A9(60h),1
1cf80: 4ef8                      MOVE   B7,A8
1cf90: 2e08                      SRL    10h,A8
1cfa0: b109 0020                 MOVE   A8,*A9(20h),0
1cfc0: c015                      JR     1D120h
1cfd0: 4f58                      MOVE   B10,A8
1cfe0: b109 0010                 MOVE   A8,*A9(10h),0
1d000: 4f98                      MOVE   B12,A8
1d010: b109 0020                 MOVE   A8,*A9(20h),0
1d030: 4f78                      MOVE   B11,A8
1d040: b109 0030                 MOVE   A8,*A9(30h),0
1d060: 4d9c                      MOVE   B12,B12
1d070: cb04                      JRNE   1D0C0h
1d080: 4e58                      MOVE   B2,A8
1d090: b309 0060                 MOVE   A8,*A9(60h),1
1d0b0: c006                      JR     1D120h
1d0c0: 4e2d                      MOVE   A1,B13
1d0d0: 5f9d                      MPYU   B12,B13
1d0e0: 405d                      ADD    B2,B13
1d0f0: 4fb8                      MOVE   B13,A8
1d100: b309 0060                 MOVE   A8,*A9(60h),1
1d120: 0960                      RETS   
1d130: 4ef3                      MOVE   B7,A3
1d140: 2e03                      SRL    10h,A3
1d150: 4e6d                      MOVE   A3,B13
1d160: 247d                      SLL    3h,B13
1d170: 4c5b                      MOVE   B2,B11
1d180: 4c1e                      MOVE   B0,B14
1d190: 4e38                      MOVE   B1,A8
1d1a0: 2fa8                      SRL    3h,A8
1d1b0: 4cfa                      MOVE   B7,B10
1d1c0: 053a                      ZEXT   B10,0
1d1d0: ca0e                      JREQ   1D2C0h
1d1e0: 191c                      MOVK   8h,B12
1d1f0: 499a                      CMP    B12,B10
1d200: c501                      JRGE   1D220h
1d210: 4d5c                      MOVE   B10,B12
1d220: d51c                      EXGF   B12,0
1d230: 89db                      MOVE   *B14,*B11,0
1d240: d51c                      EXGF   B12,0
1d250: 459a                      SUB    B12,B10
1d260: 419b                      ADD    B12,B11
1d270: 41be                      ADD    B13,B14
1d280: 3d68                      DSJS   A8,1D1E0h
1d290: 1110                      ADDK   8h,B0
1d2a0: 4072                      ADD    B3,B2
1d2b0: 3ea3                      DSJS   A3,1D170h
1d2c0: 0960                      RETS   

_FontDelete:
1d2d0: a20f                      MOVE   A0,-*SP,1
1d2e0: 0550                      SETF   10h,0,0
1d2f0: a7c0                      MOVE   -*A14,A0,1
1d300: 05a0 2320 0003            MOVE   @32320h,A0,0
1d330: ca11                      JREQ   1D450h
1d340: 1420                      DEC    A0
1d350: 0580 2320 0003            MOVE   A0,@32320h,0
1d380: 24a0                      SLL    5h,A0
1d390: 0b20 6540 0006            ADDI   66540h,A0
1d3c0: 8608                      MOVE   *A0,A8,1
1d3d0: a3cf                      MOVE   A14,-*SP,1
1d3e0: 930e                      MOVE   A8,*A14+,1
1d3f0: 0d5f 0000 0000            CALLA  0h
1d420: 4d08                      MOVE   A8,A8
1d430: cb01                      JRNE   1D450h
1d440: 8300                      MOVE   A8,*A0,1
1d450: 97e0                      MOVE   *SP+,A0,1
1d460: 0962                      RETS   2h

_OutOval:
1d470: 098f fc00                 MMTM   SP,A0-A5
1d490: 0550                      SETF   10h,0,0
1d4a0: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
1d4d0: a7c1                      MOVE   -*A14,A1,1
1d4e0: b428 0000                 MOVE   *A1(0h),A8,0
1d500: 0545                      SETF   5h,0,0
1d510: 0588 00ba c000            MOVE   A8,@C00000BAh,0
1d540: 0550                      SETF   10h,0,0
1d550: b422 0010                 MOVE   *A1(10h),A2,0
1d570: b623 0060                 MOVE   *A1(60h),A3,1
1d590: b624 0080                 MOVE   *A1(80h),A4,1
1d5b0: 4c48                      MOVE   A2,A8
1d5c0: 2788                      SLL    1Ch,A8
1d5d0: 2c68                      SRL    1Dh,A8
1d5e0: ca3a                      JREQ   1D990h
1d5f0: 1428                      DEC    A8
1d600: ca45                      JREQ   1DA60h
1d610: 1428                      DEC    A8
1d620: ca1a                      JREQ   1D7D0h
1d630: 1428                      DEC    A8
1d640: ca04                      JREQ   1D690h
1d650: 07a5 6460 0006            MOVE   @66460h,A5,1
1d680: c022                      JR     1D8B0h
1d690: 07a5 2340 0003            MOVE   @32340h,A5,1
1d6c0: 4e2a                      MOVE   A1,B10
1d6d0: b559 0040                 MOVE   *B10(40h),B9,0
1d6f0: b558 0050                 MOVE   *B10(50h),B8,0
1d710: 4d3c                      MOVE   B9,B12
1d720: 261c                      SLL    10h,B12
1d730: 5599                      OR     B12,B9
1d740: 4d1c                      MOVE   B8,B12
1d750: 261c                      SLL    10h,B12
1d760: 5598                      OR     B12,B8
1d770: 1fe2                      BTST   0h,A2
1d780: ca03                      JREQ   1D7C0h
1d790: 0d5f 1a80 0002            CALLA  21A80h
1d7c0: c00e                      JR     1D8B0h
1d7d0: 07a5 2340 0003            MOVE   @32340h,A5,1
1d800: 4e2a                      MOVE   A1,B10
1d810: b558 0040                 MOVE   *B10(40h),B8,0
1d830: b559 0050                 MOVE   *B10(50h),B9,0
1d850: 4d3c                      MOVE   B9,B12
1d860: 261c                      SLL    10h,B12
1d870: 5599                      OR     B12,B9
1d880: 4d1c                      MOVE   B8,B12
1d890: 261c                      SLL    10h,B12
1d8a0: 5598                      OR     B12,B8
1d8b0: a3cf                      MOVE   A14,-*SP,1
1d8c0: 92ae                      MOVE   A5,*A14+,1
1d8d0: 4c28                      MOVE   A1,A8
1d8e0: 07a8 2180 0003            MOVE   @32180h,A8,1
1d910: 930e                      MOVE   A8,*A14+,1
1d920: 926e                      MOVE   A3,*A14+,1
1d930: 928e                      MOVE   A4,*A14+,1
1d940: 0d5f 4430 0002            CALLA  24430h
1d970: 0550                      SETF   10h,0,0
1d980: c00d                      JR     1DA60h
1d990: 4e2a                      MOVE   A1,B10
1d9a0: b559 0040                 MOVE   *B10(40h),B9,0
1d9c0: 4d3c                      MOVE   B9,B12
1d9d0: 261c                      SLL    10h,B12
1d9e0: 5599                      OR     B12,B9
1d9f0: a3cf                      MOVE   A14,-*SP,1
1da00: 926e                      MOVE   A3,*A14+,1
1da10: 928e                      MOVE   A4,*A14+,1
1da20: 0d5f 3a70 0002            CALLA  23A70h
1da50: 0550                      SETF   10h,0,0
1da60: 5708                      CLR    A8
1da70: 0541                      SETF   1h,0,0
1da80: 0588 00b5 c000            MOVE   A8,@C00000B5h,0
1dab0: 0545                      SETF   5h,0,0
1dac0: b428 0000                 MOVE   *A1(0h),A8,0
1dae0: 0588 00ba c000            MOVE   A8,@C00000BAh,0
1db10: 0550                      SETF   10h,0,0
1db20: 4c48                      MOVE   A2,A8
1db30: 2f08                      SRL    8h,A8
1db40: ca1d                      JREQ   1DD20h
1db50: 24a8                      SLL    5h,A8
1db60: 0b28 2200 0003            ADDI   32200h,A8
1db90: 8708                      MOVE   *A8,A8,1
1dba0: ca24                      JREQ   1DDF0h
1dbb0: 4e2a                      MOVE   A1,B10
1dbc0: b559 0020                 MOVE   *B10(20h),B9,0
1dbe0: b558 0030                 MOVE   *B10(30h),B8,0
1dc00: 4d3c                      MOVE   B9,B12
1dc10: 261c                      SLL    10h,B12
1dc20: 5599                      OR     B12,B9
1dc30: 4d1c                      MOVE   B8,B12
1dc40: 261c                      SLL    10h,B12
1dc50: 5598                      OR     B12,B8
1dc60: a3cf                      MOVE   A14,-*SP,1
1dc70: 27c2                      SLL    1Eh,A2
1dc80: 2c22                      SRL    1Fh,A2
1dc90: 924e                      MOVE   A2,*A14+,1
1dca0: 930e                      MOVE   A8,*A14+,1
1dcb0: 926e                      MOVE   A3,*A14+,1
1dcc0: 928e                      MOVE   A4,*A14+,1
1dcd0: 0d5f 0130 0003            CALLA  30130h
1dd00: 0550                      SETF   10h,0,0
1dd10: c00d                      JR     1DDF0h
1dd20: 4e2a                      MOVE   A1,B10
1dd30: b559 0020                 MOVE   *B10(20h),B9,0
1dd50: 4d3c                      MOVE   B9,B12
1dd60: 261c                      SLL    10h,B12
1dd70: 5599                      OR     B12,B9
1dd80: a3cf                      MOVE   A14,-*SP,1
1dd90: 926e                      MOVE   A3,*A14+,1
1dda0: 928e                      MOVE   A4,*A14+,1
1ddb0: 0d5f 2e90 0002            CALLA  22E90h
1dde0: 0550                      SETF   10h,0,0
1ddf0: 05a8 6640 0006            MOVE   @66640h,A8,0
1de20: ca08                      JREQ   1DEB0h
1de30: 5708                      CLR    A8
1de40: 0588 6640 0006            MOVE   A8,@66640h,0
1de70: 56b5                      CLR    B5
1de80: 07b6 64e0 0006            MOVE   @664E0h,B6,1
1deb0: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
1dee0: 09af 003f                 MMFM   SP,A0-A5
1df00: 0962                      RETS   2h

_OutPoly:
1df10: 098f ff60                 MMTM   SP,A0-A7,A9,A10
1df30: 0550                      SETF   10h,0,0
1df40: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
1df70: a7c1                      MOVE   -*A14,A1,1
1df80: b428 0000                 MOVE   *A1(0h),A8,0
1dfa0: 0545                      SETF   5h,0,0
1dfb0: 0588 00ba c000            MOVE   A8,@C00000BAh,0
1dfe0: 0550                      SETF   10h,0,0
1dff0: b422 0010                 MOVE   *A1(10h),A2,0
1e010: 4c48                      MOVE   A2,A8
1e020: 2788                      SLL    1Ch,A8
1e030: 2c68                      SRL    1Dh,A8
1e040: ca46                      JREQ   1E4B0h
1e050: 1428                      DEC    A8
1e060: ca5d                      JREQ   1E640h
1e070: 1428                      DEC    A8
1e080: ca1a                      JREQ   1E230h
1e090: 1428                      DEC    A8
1e0a0: ca04                      JREQ   1E0F0h
1e0b0: 07a3 6460 0006            MOVE   @66460h,A3,1
1e0e0: c022                      JR     1E310h
1e0f0: 07a3 2340 0003            MOVE   @32340h,A3,1
1e120: 4e2a                      MOVE   A1,B10
1e130: b559 0040                 MOVE   *B10(40h),B9,0
1e150: b558 0050                 MOVE   *B10(50h),B8,0
1e170: 4d3c                      MOVE   B9,B12
1e180: 261c                      SLL    10h,B12
1e190: 5599                      OR     B12,B9
1e1a0: 4d1c                      MOVE   B8,B12
1e1b0: 261c                      SLL    10h,B12
1e1c0: 5598                      OR     B12,B8
1e1d0: 1fe2                      BTST   0h,A2
1e1e0: ca03                      JREQ   1E220h
1e1f0: 0d5f 1a80 0002            CALLA  21A80h
1e220: c00e                      JR     1E310h
1e230: 07a3 2340 0003            MOVE   @32340h,A3,1
1e260: 4e2a                      MOVE   A1,B10
1e270: b558 0040                 MOVE   *B10(40h),B8,0
1e290: b559 0050                 MOVE   *B10(50h),B9,0
1e2b0: 4d3c                      MOVE   B9,B12
1e2c0: 261c                      SLL    10h,B12
1e2d0: 5599                      OR     B12,B9
1e2e0: 4d1c                      MOVE   B8,B12
1e2f0: 261c                      SLL    10h,B12
1e300: 5598                      OR     B12,B8
1e310: a3cf                      MOVE   A14,-*SP,1
1e320: 4c28                      MOVE   A1,A8
1e330: 07a8 2180 0003            MOVE   @32180h,A8,1
1e360: 930e                      MOVE   A8,*A14+,1
1e370: 926e                      MOVE   A3,*A14+,1
1e380: 5708                      CLR    A8
1e390: 09e8 6400 0003            MOVI   36400h,A8
1e3c0: 930e                      MOVE   A8,*A14+,1
1e3d0: 4c24                      MOVE   A1,A4
1e3e0: 0b04 0070                 ADDI   70h,A4
1e400: 928e                      MOVE   A4,*A14+,1
1e410: b428 0060                 MOVE   *A1(60h),A8,0
1e430: 2fc8                      SRL    2h,A8
1e440: 1428                      DEC    A8
1e450: 930e                      MOVE   A8,*A14+,1
1e460: 0d5f ede0 0001            CALLA  1EDE0h
1e490: 0550                      SETF   10h,0,0
1e4a0: c019                      JR     1E640h
1e4b0: 4e2a                      MOVE   A1,B10
1e4c0: b559 0040                 MOVE   *B10(40h),B9,0
1e4e0: 4d3c                      MOVE   B9,B12
1e4f0: 261c                      SLL    10h,B12
1e500: 5599                      OR     B12,B9
1e510: a3cf                      MOVE   A14,-*SP,1
1e520: 5708                      CLR    A8
1e530: 09e8 6400 0003            MOVI   36400h,A8
1e560: 930e                      MOVE   A8,*A14+,1
1e570: 4c24                      MOVE   A1,A4
1e580: 0b04 0070                 ADDI   70h,A4
1e5a0: 928e                      MOVE   A4,*A14+,1
1e5b0: b428 0060                 MOVE   *A1(60h),A8,0
1e5d0: 2fc8                      SRL    2h,A8
1e5e0: 1428                      DEC    A8
1e5f0: 930e                      MOVE   A8,*A14+,1
1e600: 0d5f ed30 0001            CALLA  1ED30h
1e630: 0550                      SETF   10h,0,0
1e640: 5708                      CLR    A8
1e650: 0541                      SETF   1h,0,0
1e660: 0588 00b5 c000            MOVE   A8,@C00000B5h,0
1e690: 0545                      SETF   5h,0,0
1e6a0: b428 0000                 MOVE   *A1(0h),A8,0
1e6c0: 0588 00ba c000            MOVE   A8,@C00000BAh,0
1e6f0: 0550                      SETF   10h,0,0
1e700: 4c48                      MOVE   A2,A8
1e710: 2f08                      SRL    8h,A8
1e720: ca32                      JREQ   1EA50h
1e730: 24a8                      SLL    5h,A8
1e740: 0b28 2200 0003            ADDI   32200h,A8
1e770: 8708                      MOVE   *A8,A8,1
1e780: ca48                      JREQ   1EC10h
1e790: 4c24                      MOVE   A1,A4
1e7a0: 0b04 0070                 ADDI   70h,A4
1e7c0: 4e2a                      MOVE   A1,B10
1e7d0: b559 0020                 MOVE   *B10(20h),B9,0
1e7f0: b558 0030                 MOVE   *B10(30h),B8,0
1e810: 4d3c                      MOVE   B9,B12
1e820: 261c                      SLL    10h,B12
1e830: 5599                      OR     B12,B9
1e840: 4d1c                      MOVE   B8,B12
1e850: 261c                      SLL    10h,B12
1e860: 5598                      OR     B12,B8
1e870: b42a 0060                 MOVE   *A1(60h),A10,0
1e890: 2fca                      SRL    2h,A10
1e8a0: 142a                      DEC    A10
1e8b0: 27e2                      SLL    1Fh,A2
1e8c0: 2c22                      SRL    1Fh,A2
1e8d0: 4d05                      MOVE   A8,A5
1e8e0: 2508                      SLL    8h,A8
1e8f0: 54a8                      OR     A5,A8
1e900: 4d05                      MOVE   A8,A5
1e910: 2608                      SLL    10h,A8
1e920: 54a8                      OR     A5,A8
1e930: 9485                      MOVE   *A4+,A5,0
1e940: 9487                      MOVE   *A4+,A7,0
1e950: 8486                      MOVE   *A4,A6,0
1e960: b489 0010                 MOVE   *A4(10h),A9,0
1e980: a3cf                      MOVE   A14,-*SP,1
1e990: 924e                      MOVE   A2,*A14+,1
1e9a0: 930e                      MOVE   A8,*A14+,1
1e9b0: 932e                      MOVE   A9,*A14+,1
1e9c0: 92ce                      MOVE   A6,*A14+,1
1e9d0: 92ee                      MOVE   A7,*A14+,1
1e9e0: 92ae                      MOVE   A5,*A14+,1
1e9f0: 0d5f 2190 0002            CALLA  22190h
1ea20: 0550                      SETF   10h,0,0
1ea30: 3e2a                      DSJS   A10,1E930h
1ea40: c01c                      JR     1EC10h
1ea50: 4c24                      MOVE   A1,A4
1ea60: 0b04 0070                 ADDI   70h,A4
1ea80: b428 0020                 MOVE   *A1(20h),A8,0
1eaa0: 4f09                      MOVE   A8,B9
1eab0: 4d3c                      MOVE   B9,B12
1eac0: 261c                      SLL    10h,B12
1ead0: 5599                      OR     B12,B9
1eae0: b42a 0060                 MOVE   *A1(60h),A10,0
1eb00: 2fca                      SRL    2h,A10
1eb10: 142a                      DEC    A10
1eb20: 9485                      MOVE   *A4+,A5,0
1eb30: 9487                      MOVE   *A4+,A7,0
1eb40: 8486                      MOVE   *A4,A6,0
1eb50: b489 0010                 MOVE   *A4(10h),A9,0
1eb70: a3cf                      MOVE   A14,-*SP,1
1eb80: 932e                      MOVE   A9,*A14+,1
1eb90: 92ce                      MOVE   A6,*A14+,1
1eba0: 92ee                      MOVE   A7,*A14+,1
1ebb0: 92ae                      MOVE   A5,*A14+,1
1ebc0: 0d5f 1c30 0003            CALLA  31C30h
1ebf0: 0550                      SETF   10h,0,0
1ec00: 3dea                      DSJS   A10,1EB20h
1ec10: 05a8 6640 0006            MOVE   @66640h,A8,0
1ec40: ca08                      JREQ   1ECD0h
1ec50: 5708                      CLR    A8
1ec60: 0588 6640 0006            MOVE   A8,@66640h,0
1ec90: 56b5                      CLR    B5
1eca0: 07b6 64e0 0006            MOVE   @664E0h,B6,1
1ecd0: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
1ed00: 09af 06ff                 MMFM   SP,A0-A7,A9,A10
1ed20: 0962                      RETS   2h

_fillpoly:
1ed30: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
1ed50: 099f b13e                 MMTM   SP,B0,B2,B3,B7,B10-B14
1ed70: a7c3                      MOVE   -*A14,A3,1
1ed80: ca00 00dc                 JREQ   1FB60h
1eda0: a7c2                      MOVE   -*A14,A2,1
1edb0: a7c4                      MOVE   -*A14,A4,1
1edc0: 5610                      CLR    B0
1edd0: c00c                      JR     1EEA0h

_patnfillpoly:
1ede0: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
1ee00: 099f b13e                 MMTM   SP,B0,B2,B3,B7,B10-B14
1ee20: a7c3                      MOVE   -*A14,A3,1
1ee30: ca00 00d1                 JREQ   1FB60h
1ee50: a7c2                      MOVE   -*A14,A2,1
1ee60: a7c4                      MOVE   -*A14,A4,1
1ee70: a7cb                      MOVE   -*A14,A11,1
1ee80: a7cc                      MOVE   -*A14,A12,1
1ee90: 4f80                      MOVE   A12,B0
1eea0: 0770                      SETF   10h,1,1
1eeb0: 0540                      SETF   20h,0,0
1eec0: 1837                      MOVK   1h,B7
1eed0: 2617                      SLL    10h,B7
1eee0: 09c0 0080                 MOVI   80h,A0
1ef00: 09c8 7fff                 MOVI   7FFFh,A8
1ef20: 5729                      CLR    A9
1ef30: 4c84                      MOVE   A4,A4
1ef40: cb04                      JRNE   1EF90h
1ef50: 4c69                      MOVE   A3,A9
1ef60: 24e9                      SLL    7h,A9
1ef70: 452f                      SUB    A9,SP
1ef80: 4de4                      MOVE   SP,A4
1ef90: a12f                      MOVE   A9,-*SP,0
1efa0: 5621                      CLR    A1
1efb0: 4c65                      MOVE   A3,A5
1efc0: 24a5                      SLL    5h,A5
1efd0: 4045                      ADD    A2,A5
1efe0: a4a5                      MOVE   -*A5,A5,0
1eff0: 9447                      MOVE   *A2+,A7,0
1f000: 4ce6                      MOVE   A7,A6
1f010: e4a6                      CMPXY  A5,A6
1f020: ca1b                      JREQ   1F1E0h
1f030: c902                      JRNC   1F060h
1f040: 4ca6                      MOVE   A5,A6
1f050: 4ce5                      MOVE   A7,A5
1f060: 4ccc                      MOVE   A6,A12
1f070: e2ac                      SUBXY  A5,A12
1f080: ed8d                      MOVX   A12,A13
1f090: 260d                      SLL    10h,A13
1f0a0: 2a0c                      SRA    10h,A12
1f0b0: 598d                      DIVS   A12,A13
1f0c0: b1a4 0040                 MOVE   A13,*A4(40h),0
1f0e0: ecac                      MOVX   A5,A12
1f0f0: 260c                      SLL    10h,A12
1f100: ed0c                      MOVX   A8,A12
1f110: 2bed                      SRA    1h,A13
1f120: 41ac                      ADD    A13,A12
1f130: b184 0020                 MOVE   A12,*A4(20h),0
1f150: 2e05                      SRL    10h,A5
1f160: b2a4 0000                 MOVE   A5,*A4(0h),1
1f180: 2e06                      SRL    10h,A6
1f190: b2c4 0010                 MOVE   A6,*A4(10h),1
1f1b0: 0d3f 00c7                 CALLR  1FE40h
1f1d0: 4004                      ADD    A0,A4
1f1e0: 4ce5                      MOVE   A7,A5
1f1f0: 0d83 ffde                 DSJ    A3,1EFF0h
1f210: 5600                      CLR    A0
1f220: 4c21                      MOVE   A1,A1
1f230: ca00 008f                 JREQ   1FB40h
1f250: b62e 0000                 MOVE   *A1(0h),A14,1
1f270: 4c21                      MOVE   A1,A1
1f280: ca0a                      JREQ   1F330h
1f290: b62c 0000                 MOVE   *A1(0h),A12,1
1f2b0: 498e                      CMP    A12,A14
1f2c0: cb06                      JRNE   1F330h
1f2d0: 4c24                      MOVE   A1,A4
1f2e0: b481 0060                 MOVE   *A4(60h),A1,0
1f300: 0d3f 0097                 CALLR  1FC90h
1f320: c0f4                      JR     1F270h
1f330: 09ca 4000                 MOVI   4000h,A10
1f350: 4c21                      MOVE   A1,A1
1f360: ca02                      JREQ   1F390h
1f370: b62a 0000                 MOVE   *A1(0h),A10,1
1f390: 4c00                      MOVE   A0,A0
1f3a0: ca76                      JREQ   1FB10h
1f3b0: 4c02                      MOVE   A0,A2
1f3c0: b443 0060                 MOVE   *A2(60h),A3,0
1f3e0: b460 0060                 MOVE   *A3(60h),A0,0
1f400: b445 0020                 MOVE   *A2(20h),A5,0
1f420: b447 0040                 MOVE   *A2(40h),A7,0
1f440: b466 0020                 MOVE   *A3(20h),A6,0
1f460: b468 0040                 MOVE   *A3(40h),A8,0
1f480: b64c 0010                 MOVE   *A2(10h),A12,1
1f4a0: 494c                      CMP    A10,A12
1f4b0: cf01                      JRNN   1F4D0h
1f4c0: 4d8a                      MOVE   A12,A10
1f4d0: b66c 0010                 MOVE   *A3(10h),A12,1
1f4f0: 494c                      CMP    A10,A12
1f500: cf01                      JRNN   1F520h
1f510: 4d8a                      MOVE   A12,A10
1f520: 4c00                      MOVE   A0,A0
1f530: ca1e                      JREQ   1F720h
1f540: 4c64                      MOVE   A3,A4
1f550: 0d3f 0067                 CALLR  1FBE0h
1f570: 4da9                      MOVE   A13,A9
1f580: 4c04                      MOVE   A0,A4
1f590: ca18                      JREQ   1F720h
1f5a0: b487 0040                 MOVE   *A4(40h),A7,0
1f5c0: 4507                      SUB    A8,A7
1f5d0: cf0f                      JRNN   1F6D0h
1f5e0: 0d3f 005e                 CALLR  1FBE0h
1f600: 492d                      CMP    A9,A13
1f610: cf0b                      JRNN   1F6D0h
1f620: b48d 0020                 MOVE   *A4(20h),A13,0
1f640: 44cd                      SUB    A6,A13
1f650: 03a7                      NEG    A7
1f660: 58ed                      DIVS   A7,A13
1f670: 102d                      INC    A13
1f680: 4dca                      MOVE   A14,A10
1f690: 41aa                      ADD    A13,A10
1f6a0: 4d09                      MOVE   A8,A9
1f6b0: 5da9                      MPYS   A13,A9
1f6c0: 40c9                      ADD    A6,A9
1f6d0: b484 0060                 MOVE   *A4(60h),A4,0
1f6f0: cbea                      JRNE   1F5A0h
1f700: b447 0040                 MOVE   *A2(40h),A7,0
1f720: 4d4d                      MOVE   A10,A13
1f730: 45cd                      SUB    A14,A13
1f740: 4dca                      MOVE   A14,A10
1f750: 4c10                      MOVE   B0,B0
1f760: cb0f                      JRNE   1F860h
1f770: eecc                      MOVY   A6,A12
1f780: e2ac                      SUBXY  A5,A12
1f790: c81e                      JRC    1F980h
1f7a0: 2e0c                      SRL    10h,A12
1f7b0: 4f8e                      MOVE   A12,B14
1f7c0: edd7                      MOVX   B14,B7
1f7d0: eeaa                      MOVY   A5,A10
1f7e0: 4f42                      MOVE   A10,B2
1f7f0: 3212                      RL     10h,B2
1f800: 0fe0                      FILL   XY
1f810: 40e5                      ADD    A7,A5
1f820: 4106                      ADD    A8,A6
1f830: 102a                      INC    A10
1f840: 3dcd                      DSJS   A13,1F770h
1f850: c012                      JR     1F980h
1f860: eecc                      MOVY   A6,A12
1f870: e2ac                      SUBXY  A5,A12
1f880: c80f                      JRC    1F980h
1f890: 2e0c                      SRL    10h,A12
1f8a0: 4f8e                      MOVE   A12,B14
1f8b0: edd7                      MOVX   B14,B7
1f8c0: eeaa                      MOVY   A5,A10
1f8d0: 4f42                      MOVE   A10,B2
1f8e0: 3212                      RL     10h,B2
1f8f0: 0550                      SETF   10h,0,0
1f900: 0740                      SETF   20h,0,1
1f910: 092b                      CALL   A11
1f920: 0770                      SETF   10h,1,1
1f930: 0540                      SETF   20h,0,0
1f940: 40e5                      ADD    A7,A5
1f950: 4106                      ADD    A8,A6
1f960: 102a                      INC    A10
1f970: 3e4d                      DSJS   A13,1F860h
1f980: 070a                      SEXT   A10,1
1f990: b0a2 0020                 MOVE   A5,*A2(20h),0
1f9b0: b342 0000                 MOVE   A10,*A2(0h),1
1f9d0: b0c3 0020                 MOVE   A6,*A3(20h),0
1f9f0: b343 0000                 MOVE   A10,*A3(0h),1
1fa10: b64c 0010                 MOVE   *A2(10h),A12,1
1fa30: 498a                      CMP    A12,A10
1fa40: cf03                      JRNN   1FA80h
1fa50: 4c44                      MOVE   A2,A4
1fa60: 0d3f 003c                 CALLR  1FE40h
1fa80: b66c 0010                 MOVE   *A3(10h),A12,1
1faa0: 498a                      CMP    A12,A10
1fab0: cf03                      JRNN   1FAF0h
1fac0: 4c64                      MOVE   A3,A4
1fad0: 0d3f 0035                 CALLR  1FE40h
1faf0: 4c00                      MOVE   A0,A0
1fb00: cb8a                      JRNE   1F3B0h
1fb10: 4c21                      MOVE   A1,A1
1fb20: cb00 ff71                 JRNE   1F250h
1fb40: 95e9                      MOVE   *SP+,A9,0
1fb50: 412f                      ADD    A9,SP
1fb60: 0740                      SETF   20h,0,1
1fb70: 09bf 7c8d                 MMFM   SP,B0,B2,B3,B7,B10-B14
1fb90: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
1fbb0: b7ee 0020                 MOVE   *SP(20h),A14,1
1fbd0: 0962                      RETS   2h
1fbe0: b68c 0000                 MOVE   *A4(0h),A12,1
1fc00: 4d4d                      MOVE   A10,A13
1fc10: 458d                      SUB    A12,A13
1fc20: b48c 0040                 MOVE   *A4(40h),A12,0
1fc40: 5dac                      MPYS   A13,A12
1fc50: b48c 0020                 MOVE   *A4(20h),A12,0
1fc70: 418d                      ADD    A12,A13
1fc80: 0960                      RETS   
1fc90: 4c00                      MOVE   A0,A0
1fca0: ca06                      JREQ   1FD10h
1fcb0: b48c 0020                 MOVE   *A4(20h),A12,0
1fcd0: b40d 0020                 MOVE   *A0(20h),A13,0
1fcf0: 498d                      CMP    A12,A13
1fd00: ce04                      JRN    1FD50h
1fd10: b004 0060                 MOVE   A0,*A4(60h),0
1fd30: 4c80                      MOVE   A4,A0
1fd40: 0960                      RETS   
1fd50: 4c05                      MOVE   A0,A5
1fd60: b4a6 0060                 MOVE   *A5(60h),A6,0
1fd80: ca06                      JREQ   1FDF0h
1fd90: b4cd 0020                 MOVE   *A6(20h),A13,0
1fdb0: 498d                      CMP    A12,A13
1fdc0: cf02                      JRNN   1FDF0h
1fdd0: 4cc5                      MOVE   A6,A5
1fde0: c0f7                      JR     1FD60h
1fdf0: b0c4 0060                 MOVE   A6,*A4(60h),0
1fe10: b085 0060                 MOVE   A4,*A5(60h),0
1fe30: 0960                      RETS   
1fe40: 4c21                      MOVE   A1,A1
1fe50: ca06                      JREQ   1FEC0h
1fe60: b68c 0000                 MOVE   *A4(0h),A12,1
1fe80: b62d 0000                 MOVE   *A1(0h),A13,1
1fea0: 498d                      CMP    A12,A13
1feb0: ce04                      JRN    1FF00h
1fec0: b024 0060                 MOVE   A1,*A4(60h),0
1fee0: 4c81                      MOVE   A4,A1
1fef0: 0960                      RETS   
1ff00: 4c25                      MOVE   A1,A5
1ff10: b4a6 0060                 MOVE   *A5(60h),A6,0
1ff30: ca06                      JREQ   1FFA0h
1ff40: b6cd 0000                 MOVE   *A6(0h),A13,1
1ff60: 498d                      CMP    A12,A13
1ff70: cf02                      JRNN   1FFA0h
1ff80: 4cc5                      MOVE   A6,A5
1ff90: c0f7                      JR     1FF10h
1ffa0: b0c4 0060                 MOVE   A6,*A4(60h),0
1ffc0: b085 0060                 MOVE   A4,*A5(60h),0
1ffe0: 0960                      RETS   

_SetPixel:
1fff0: 098f c000                 MMTM   SP,A0,A1
20010: 0550                      SETF   10h,0,0
20020: 05a1 00b0 c000            MOVE   @C00000B0h,A1,0
20050: a7c8                      MOVE   -*A14,A8,1
20060: b500 0000                 MOVE   *A8(0h),A0,0
20080: 0545                      SETF   5h,0,0
20090: 0580 00ba c000            MOVE   A0,@C00000BAh,0
200c0: 0550                      SETF   10h,0,0
200d0: b500 0010                 MOVE   *A8(10h),A0,0
200f0: b708 0020                 MOVE   *A8(20h),A8,1
20110: e908                      CVXYL  A8,A8
20120: f808                      PIXT   A0,*A8
20130: 0581 00b0 c000            MOVE   A1,@C00000B0h,0
20160: 09af 0003                 MMFM   SP,A0,A1
20180: 0962                      RETS   2h

_GetPixel:
20190: a7c8                      MOVE   -*A14,A8,1
201a0: 8708                      MOVE   *A8,A8,1
201b0: e908                      CVXYL  A8,A8
201c0: fb08                      PIXT   *A8,A8
201d0: 0962                      RETS   2h

_PolyLine:
201e0: 098f ff40                 MMTM   SP,A0-A7,A9
20200: 0550                      SETF   10h,0,0
20210: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
20240: a7c1                      MOVE   -*A14,A1,1
20250: b428 0000                 MOVE   *A1(0h),A8,0
20270: 0545                      SETF   5h,0,0
20280: 0588 00ba c000            MOVE   A8,@C00000BAh,0
202b0: 0550                      SETF   10h,0,0
202c0: b423 0040                 MOVE   *A1(40h),A3,0
202e0: 4c24                      MOVE   A1,A4
202f0: 0b04 0050                 ADDI   50h,A4
20310: 0b43 fc17                 CMPI   3E8h,A3
20330: c603                      JRLE   20370h
20340: 07a4 2160 0003            MOVE   @32160h,A4,1
20370: b422 0010                 MOVE   *A1(10h),A2,0
20390: 4c48                      MOVE   A2,A8
203a0: 2f08                      SRL    8h,A8
203b0: ca28                      JREQ   20640h
203c0: 24a8                      SLL    5h,A8
203d0: 0b28 2200 0003            ADDI   32200h,A8
20400: 8708                      MOVE   *A8,A8,1
20410: 5508                      OR     A8,A8
20420: ca38                      JREQ   207B0h
20430: 4e2a                      MOVE   A1,B10
20440: b559 0020                 MOVE   *B10(20h),B9,0
20460: b558 0030                 MOVE   *B10(30h),B8,0
20480: 4d3c                      MOVE   B9,B12
20490: 261c                      SLL    10h,B12
204a0: 5599                      OR     B12,B9
204b0: 4d1c                      MOVE   B8,B12
204c0: 261c                      SLL    10h,B12
204d0: 5598                      OR     B12,B8
204e0: 2fc3                      SRL    2h,A3
204f0: 1423                      DEC    A3
20500: 27e2                      SLL    1Fh,A2
20510: 2c22                      SRL    1Fh,A2
20520: 9485                      MOVE   *A4+,A5,0
20530: 9486                      MOVE   *A4+,A6,0
20540: 8487                      MOVE   *A4,A7,0
20550: b489 0010                 MOVE   *A4(10h),A9,0
20570: a3cf                      MOVE   A14,-*SP,1
20580: 924e                      MOVE   A2,*A14+,1
20590: 930e                      MOVE   A8,*A14+,1
205a0: 932e                      MOVE   A9,*A14+,1
205b0: 92ee                      MOVE   A7,*A14+,1
205c0: 92ce                      MOVE   A6,*A14+,1
205d0: 92ae                      MOVE   A5,*A14+,1
205e0: 0d5f 2190 0002            CALLA  22190h
20610: 0550                      SETF   10h,0,0
20620: 3e23                      DSJS   A3,20520h
20630: c017                      JR     207B0h
20640: b428 0020                 MOVE   *A1(20h),A8,0
20660: 4f09                      MOVE   A8,B9
20670: 4d3c                      MOVE   B9,B12
20680: 261c                      SLL    10h,B12
20690: 5599                      OR     B12,B9
206a0: 2fc3                      SRL    2h,A3
206b0: 1423                      DEC    A3
206c0: 9485                      MOVE   *A4+,A5,0
206d0: 9486                      MOVE   *A4+,A6,0
206e0: 8487                      MOVE   *A4,A7,0
206f0: b489 0010                 MOVE   *A4(10h),A9,0
20710: a3cf                      MOVE   A14,-*SP,1
20720: 932e                      MOVE   A9,*A14+,1
20730: 92ee                      MOVE   A7,*A14+,1
20740: 92ce                      MOVE   A6,*A14+,1
20750: 92ae                      MOVE   A5,*A14+,1
20760: 0d5f 1c30 0003            CALLA  31C30h
20790: 0550                      SETF   10h,0,0
207a0: 3de3                      DSJS   A3,206C0h
207b0: 05a8 6640 0006            MOVE   @66640h,A8,0
207e0: ca08                      JREQ   20870h
207f0: 5708                      CLR    A8
20800: 0588 6640 0006            MOVE   A8,@66640h,0
20830: 56b5                      CLR    B5
20840: 07b6 64e0 0006            MOVE   @664E0h,B6,1
20870: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
208a0: 09af 02ff                 MMFM   SP,A0-A7,A9
208c0: 0962                      RETS   2h

_ScanLines:
208d0: 098f ff60                 MMTM   SP,A0-A7,A9,A10
208f0: 099f 0800                 MMTM   SP,B4
20910: 0550                      SETF   10h,0,0
20920: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
20950: 05aa 0150 c000            MOVE   @C0000150h,A10,0
20980: a7c1                      MOVE   -*A14,A1,1
20990: b428 0020                 MOVE   *A1(20h),A8,0
209b0: 0545                      SETF   5h,0,0
209c0: 0588 00ba c000            MOVE   A8,@C00000BAh,0
209f0: 0550                      SETF   10h,0,0
20a00: b423 0080                 MOVE   *A1(80h),A3,0
20a20: 2fc3                      SRL    2h,A3
20a30: 4c24                      MOVE   A1,A4
20a40: 0b04 0090                 ADDI   90h,A4
20a60: b422 0040                 MOVE   *A1(40h),A2,0
20a80: b427 0030                 MOVE   *A1(30h),A7,0
20aa0: b628 0000                 MOVE   *A1(0h),A8,1
20ac0: ca76                      JREQ   21230h
20ad0: 4f04                      MOVE   A8,B4
20ae0: 1f42                      BTST   5h,A2
20af0: cb04                      JRNE   20B40h
20b00: 1828                      MOVK   1h,A8
20b10: 0588 0150 c000            MOVE   A8,@C0000150h,0
20b40: 4c48                      MOVE   A2,A8
20b50: 2788                      SLL    1Ch,A8
20b60: 2c68                      SRL    1Dh,A8
20b70: ca15                      JREQ   20CD0h
20b80: 1428                      DEC    A8
20b90: ca1f                      JREQ   20D90h
20ba0: 1428                      DEC    A8
20bb0: ca50                      JREQ   210C0h
20bc0: 1428                      DEC    A8
20bd0: ca33                      JREQ   20F10h
20be0: 07a9 6460 0006            MOVE   @66460h,A9,1
20c10: 07b0 2180 0003            MOVE   @32180h,B0,1
20c40: 4eea                      MOVE   A7,B10
20c50: 27ba                      SLL    1Dh,B10
20c60: 2cda                      SRL    1Ah,B10
20c70: e95a                      CVXYL  B10,B10
20c80: 449a                      SUB    B4,B10
20c90: 4150                      ADD    B10,B0
20ca0: 56e7                      CLR    A7
20cb0: c000 00b3                 JR     21800h
20cd0: 09e9 1a60 0002            MOVI   21A60h,A9
20d00: 4e2a                      MOVE   A1,B10
20d10: b559 0050                 MOVE   *B10(50h),B9,0
20d30: 4d3c                      MOVE   B9,B12
20d40: 261c                      SLL    10h,B12
20d50: 5599                      OR     B12,B9
20d60: 56e7                      CLR    A7
20d70: c000 00a7                 JR     21800h
20d90: 4e20                      MOVE   A1,B0
20da0: 0b10 0070                 ADDI   70h,B0
20dc0: 07a9 2340 0003            MOVE   @32340h,A9,1
20df0: 4e2a                      MOVE   A1,B10
20e00: b559 0050                 MOVE   *B10(50h),B9,0
20e20: b558 0060                 MOVE   *B10(60h),B8,0
20e40: 4d3c                      MOVE   B9,B12
20e50: 261c                      SLL    10h,B12
20e60: 5599                      OR     B12,B9
20e70: 4d1c                      MOVE   B8,B12
20e80: 261c                      SLL    10h,B12
20e90: 5598                      OR     B12,B8
20ea0: 1fe2                      BTST   0h,A2
20eb0: ca02                      JREQ   20EE0h
20ec0: 0d3f 00ba                 CALLR  21A80h
20ee0: 56e7                      CLR    A7
20ef0: c000 008f                 JR     21800h
20f10: 07b0 2180 0003            MOVE   @32180h,B0,1
20f40: 07a9 2340 0003            MOVE   @32340h,A9,1
20f70: 4eea                      MOVE   A7,B10
20f80: 27ba                      SLL    1Dh,B10
20f90: 2cda                      SRL    1Ah,B10
20fa0: 4150                      ADD    B10,B0
20fb0: 4e2a                      MOVE   A1,B10
20fc0: b559 0050                 MOVE   *B10(50h),B9,0
20fe0: b558 0060                 MOVE   *B10(60h),B8,0
21000: 4d3c                      MOVE   B9,B12
21010: 261c                      SLL    10h,B12
21020: 5599                      OR     B12,B9
21030: 4d1c                      MOVE   B8,B12
21040: 261c                      SLL    10h,B12
21050: 5598                      OR     B12,B8
21060: 1fe2                      BTST   0h,A2
21070: ca02                      JREQ   210A0h
21080: 0d3f 009e                 CALLR  21A80h
210a0: 56e7                      CLR    A7
210b0: c074                      JR     21800h
210c0: 07b0 2180 0003            MOVE   @32180h,B0,1
210f0: 07a9 2340 0003            MOVE   @32340h,A9,1
21120: 4eea                      MOVE   A7,B10
21130: 27ba                      SLL    1Dh,B10
21140: 2cda                      SRL    1Ah,B10
21150: 4150                      ADD    B10,B0
21160: 4e2a                      MOVE   A1,B10
21170: b558 0050                 MOVE   *B10(50h),B8,0
21190: b559 0060                 MOVE   *B10(60h),B9,0
211b0: 4d3c                      MOVE   B9,B12
211c0: 261c                      SLL    10h,B12
211d0: 5599                      OR     B12,B9
211e0: 4d1c                      MOVE   B8,B12
211f0: 261c                      SLL    10h,B12
21200: 5598                      OR     B12,B8
21210: 56e7                      CLR    A7
21220: c05d                      JR     21800h
21230: 4c48                      MOVE   A2,A8
21240: 2788                      SLL    1Ch,A8
21250: 2c68                      SRL    1Dh,A8
21260: ca0d                      JREQ   21340h
21270: 1428                      DEC    A8
21280: ca15                      JREQ   213E0h
21290: 1428                      DEC    A8
212a0: ca44                      JREQ   216F0h
212b0: 1428                      DEC    A8
212c0: ca2c                      JREQ   21590h
212d0: 07b0 2180 0003            MOVE   @32180h,B0,1
21300: 07a9 6460 0006            MOVE   @66460h,A9,1
21330: c04c                      JR     21800h
21340: 09e9 1a60 0002            MOVI   21A60h,A9
21370: 4e2a                      MOVE   A1,B10
21380: b559 0050                 MOVE   *B10(50h),B9,0
213a0: 4d3c                      MOVE   B9,B12
213b0: 261c                      SLL    10h,B12
213c0: 5599                      OR     B12,B9
213d0: c042                      JR     21800h
213e0: 4e20                      MOVE   A1,B0
213f0: 0b10 0070                 ADDI   70h,B0
21410: 07a9 2340 0003            MOVE   @32340h,A9,1
21440: 4ce8                      MOVE   A7,A8
21450: 27a8                      SLL    1Dh,A8
21460: 2cc8                      SRL    1Ah,A8
21470: 4f0b                      MOVE   A8,B11
21480: 4570                      SUB    B11,B0
21490: 4e2a                      MOVE   A1,B10
214a0: b559 0050                 MOVE   *B10(50h),B9,0
214c0: b558 0060                 MOVE   *B10(60h),B8,0
214e0: 4d3c                      MOVE   B9,B12
214f0: 261c                      SLL    10h,B12
21500: 5599                      OR     B12,B9
21510: 4d1c                      MOVE   B8,B12
21520: 261c                      SLL    10h,B12
21530: 5598                      OR     B12,B8
21540: 1fe2                      BTST   0h,A2
21550: ca02                      JREQ   21580h
21560: 0d3f 0050                 CALLR  21A80h
21580: c027                      JR     21800h
21590: 07b0 2180 0003            MOVE   @32180h,B0,1
215c0: 07a9 2340 0003            MOVE   @32340h,A9,1
215f0: 4e2a                      MOVE   A1,B10
21600: b559 0050                 MOVE   *B10(50h),B9,0
21620: b558 0060                 MOVE   *B10(60h),B8,0
21640: 4d3c                      MOVE   B9,B12
21650: 261c                      SLL    10h,B12
21660: 5599                      OR     B12,B9
21670: 4d1c                      MOVE   B8,B12
21680: 261c                      SLL    10h,B12
21690: 5598                      OR     B12,B8
216a0: 1fe2                      BTST   0h,A2
216b0: ca02                      JREQ   216E0h
216c0: 0d3f 003a                 CALLR  21A80h
216e0: c011                      JR     21800h
216f0: 07b0 2180 0003            MOVE   @32180h,B0,1
21720: 07a9 2340 0003            MOVE   @32340h,A9,1
21750: 4e2a                      MOVE   A1,B10
21760: b558 0050                 MOVE   *B10(50h),B8,0
21780: b559 0060                 MOVE   *B10(60h),B9,0
217a0: 4d3c                      MOVE   B9,B12
217b0: 261c                      SLL    10h,B12
217c0: 5599                      OR     B12,B9
217d0: 4d1c                      MOVE   B8,B12
217e0: 261c                      SLL    10h,B12
217f0: 5598                      OR     B12,B8
21800: 2607                      SLL    10h,A7
21810: 09f7 0000 0001            MOVI   10000h,B7
21840: 9485                      MOVE   *A4+,A5,0
21850: 9486                      MOVE   *A4+,A6,0
21860: 4ea2                      MOVE   A5,B2
21870: 4eea                      MOVE   A7,B10
21880: ef52                      MOVY   B10,B2
21890: 44a6                      SUB    A5,A6
218a0: ce03                      JRN    218E0h
218b0: 4eca                      MOVE   A6,B10
218c0: ed57                      MOVX   B10,B7
218d0: 0929                      CALL   A9
218e0: 3d63                      DSJS   A3,21840h
218f0: 05a8 6640 0006            MOVE   @66640h,A8,0
21920: ca08                      JREQ   219B0h
21930: 5708                      CLR    A8
21940: 0588 6640 0006            MOVE   A8,@66640h,0
21970: 56b5                      CLR    B5
21980: 07b6 64e0 0006            MOVE   @664E0h,B6,1
219b0: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
219e0: 058a 0150 c000            MOVE   A10,@C0000150h,0
21a10: 09bf 0010                 MMFM   SP,B4
21a30: 09af 06ff                 MMFM   SP,A0-A7,A9,A10
21a50: 0962                      RETS   2h
21a60: 0fe0                      FILL   XY
21a70: 0960                      RETS   

_settrans:
21a80: 4d39                      MOVE   B9,B9
21a90: cb08                      JRNE   21B20h
21aa0: 5718                      CLR    B8
21ab0: 03f8                      NOT    B8
21ac0: 0545                      SETF   5h,0,0
21ad0: 183e                      MOVK   1h,B14
21ae0: 059e 00ba c000            MOVE   B14,@C00000BAh,0
21b10: c006                      JR     21B80h
21b20: 5718                      CLR    B8
21b30: 0541                      SETF   1h,0,0
21b40: 183e                      MOVK   1h,B14
21b50: 059e 00b5 c000            MOVE   B14,@C00000B5h,0
21b80: 0550                      SETF   10h,0,0
21b90: 0960                      RETS   

_ScanLR:
21ba0: 099f 8040                 MMTM   SP,B0,B9
21bc0: 0550                      SETF   10h,0,0
21bd0: a7c8                      MOVE   -*A14,A8,1
21be0: 4f00                      MOVE   A8,B0
21bf0: b61a 0000                 MOVE   *B0(0h),B10,1
21c10: e75e                      CPW    B10,B14
21c20: cc38                      JRV    21FB0h
21c30: b419 0020                 MOVE   *B0(20h),B9,0
21c50: 577b                      CLR    B11
21c60: 03fb                      NOT    B11
21c70: 183c                      MOVK   1h,B12
21c80: e99c                      CVXYL  B12,B12
21c90: 449c                      SUB    B4,B12
21ca0: 679b                      SRL    B12,B11
21cb0: 5179                      AND    B11,B9
21cc0: b410 0030                 MOVE   *B0(30h),B0,0
21ce0: e95b                      CVXYL  B10,B11
21cf0: 1fd0                      BTST   1h,B0
21d00: ca12                      JREQ   21E30h
21d10: 1ff0                      BTST   0h,B0
21d20: ca08                      JREQ   21DB0h
21d30: e75d                      CPW    B10,B13
21d40: cc23                      JRV    21F80h
21d50: fb7d                      PIXT   *B11,B13
21d60: 573d                      XOR    B9,B13
21d70: ca1d                      JREQ   21F50h
21d80: 459b                      SUB    B12,B11
21d90: 143a                      DEC    B10
21da0: c0f8                      JR     21D30h
21db0: e75d                      CPW    B10,B13
21dc0: cc1b                      JRV    21F80h
21dd0: fb7d                      PIXT   *B11,B13
21de0: 573d                      XOR    B9,B13
21df0: cb15                      JRNE   21F50h
21e00: 459b                      SUB    B12,B11
21e10: 143a                      DEC    B10
21e20: c0f8                      JR     21DB0h
21e30: 1ff0                      BTST   0h,B0
21e40: ca08                      JREQ   21ED0h
21e50: e75d                      CPW    B10,B13
21e60: cc11                      JRV    21F80h
21e70: fb7d                      PIXT   *B11,B13
21e80: 573d                      XOR    B9,B13
21e90: ca0b                      JREQ   21F50h
21ea0: 419b                      ADD    B12,B11
21eb0: 103a                      INC    B10
21ec0: c0f8                      JR     21E50h
21ed0: e75d                      CPW    B10,B13
21ee0: cc09                      JRV    21F80h
21ef0: fb7d                      PIXT   *B11,B13
21f00: 573d                      XOR    B9,B13
21f10: cb03                      JRNE   21F50h
21f20: 419b                      ADD    B12,B11
21f30: 103a                      INC    B10
21f40: c0f8                      JR     21ED0h
21f50: 4f58                      MOVE   B10,A8
21f60: 0528                      ZEXT   A8,0
21f70: c006                      JR     21FE0h
21f80: 5708                      CLR    A8
21f90: 03e8                      NOT    A8
21fa0: c003                      JR     21FE0h
21fb0: 09e8 8000 0000            MOVI   8000h,A8
21fe0: 09bf 0201                 MMFM   SP,B0,B9
22000: 0962                      RETS   2h

_SetClipRect:
22010: 0550                      SETF   10h,0,0
22020: a7c8                      MOVE   -*A14,A8,1
22030: 4f0a                      MOVE   A8,B10
22040: 9755                      MOVE   *B10+,B5,1
22050: 9756                      MOVE   *B10+,B6,1
22060: ce0a                      JRN    22110h
22070: 183a                      MOVK   1h,B10
22080: 059a 6640 0006            MOVE   B10,@66640h,0
220b0: 187a                      MOVK   3h,B10
220c0: 0542                      SETF   2h,0,0
220d0: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
22100: 0962                      RETS   2h

_ResetClipRect:
22110: 56b5                      CLR    B5
22120: 0595 6640 0006            MOVE   B5,@66640h,0
22150: 07b6 64e0 0006            MOVE   @664E0h,B6,1
22180: 0962                      RETS   2h

_StyledLine:
22190: 099f e140                 MMTM   SP,B0-B2,B7,B9
221b0: 098f c000                 MMTM   SP,A0,A1
221d0: 0570                      SETF   10h,1,0
221e0: 4f10                      MOVE   B8,A0
221f0: 4f31                      MOVE   B9,A1
22200: 4fce                      MOVE   A14,B14
22210: a7d2                      MOVE   -*B14,B2,1
22220: a7d0                      MOVE   -*B14,B0,1
22230: 2610                      SLL    10h,B0
22240: ee12                      MOVY   B0,B2
22250: a7d0                      MOVE   -*B14,B0,1
22260: a7d1                      MOVE   -*B14,B1,1
22270: 2611                      SLL    10h,B1
22280: ee30                      MOVY   B1,B0
22290: a7dd                      MOVE   -*B14,B13,1
222a0: a7d1                      MOVE   -*B14,B1,1
222b0: 0bd1 0001 0000            XORI   1h,B1
222e0: 05a8 4360 0003            MOVE   @34360h,A8,0
22310: 1fe8                      BTST   0h,A8
22320: ca00 0084                 JREQ   22B80h
22340: e250                      SUBXY  B2,B0
22350: 09db ffff                 MOVI   FFFFh,B11
22370: 183c                      MOVK   1h,B12
22380: 56f7                      CLR    B7
22390: e217                      SUBXY  B0,B7
223a0: c902                      JRNC   223D0h
223b0: ee17                      MOVY   B0,B7
223c0: 2e3b                      SRL    Fh,B11
223d0: cd02                      JRNV   22400h
223e0: ec17                      MOVX   B0,B7
223f0: ed9b                      MOVX   B12,B11
22400: ed7c                      MOVX   B11,B12
22410: 4cf0                      MOVE   B7,B0
22420: 2e10                      SRL    10h,B0
22430: e417                      CMPXY  B0,B7
22440: cd04                      JRNV   22490h
22450: ecf0                      MOVX   B7,B0
22460: 3217                      RL     10h,B7
22470: 579c                      CLR    B12
22480: ef7c                      MOVY   B11,B12
22490: 07be 0000 0000            MOVE   @0h,B14,1
224c0: e1d2                      ADDXY  B14,B2
224d0: 4010                      ADD    B0,B0
224e0: 4c1e                      MOVE   B0,B14
224f0: 455a                      SUB    B10,B10
22500: ecfa                      MOVX   B7,B10
22510: 4d5a                      MOVE   B10,B10
22520: ca00 008d                 JREQ   22E10h
22540: 4550                      SUB    B10,B0
22550: 4c17                      MOVE   B0,B7
22560: 4557                      SUB    B10,B7
22570: 1ff1                      BTST   0h,B1
22580: cb25                      JRNE   227E0h
22590: 4e29                      MOVE   A1,B9
225a0: 1ffd                      BTST   0h,B13
225b0: cb03                      JRNE   225F0h
225c0: 4c10                      MOVE   B0,B0
225d0: c50b                      JRGE   22690h
225e0: c003                      JR     22620h
225f0: 4c10                      MOVE   B0,B0
22600: c516                      JRGE   22770h
22610: c00e                      JR     22700h
22620: e192                      ADDXY  B12,B2
22630: 33fd                      RL     1Fh,B13
22640: c80e                      JRC    22730h
22650: 41d0                      ADD    B14,B0
22660: c507                      JRGE   226E0h
22670: 3cda                      DSJS   B10,22620h
22680: c078                      JR     22E10h
22690: e172                      ADDXY  B11,B2
226a0: 33fd                      RL     1Fh,B13
226b0: c80e                      JRC    227A0h
226c0: 40f0                      ADD    B7,B0
226d0: c4f9                      JRLT   22670h
226e0: 3cda                      DSJS   B10,22690h
226f0: c071                      JR     22E10h
22700: f792                      DRAV   B12,B2
22710: 33fd                      RL     1Fh,B13
22720: c9f2                      JRNC   22650h
22730: 41d0                      ADD    B14,B0
22740: c507                      JRGE   227C0h
22750: 3cda                      DSJS   B10,22700h
22760: c06a                      JR     22E10h
22770: f772                      DRAV   B11,B2
22780: 33fd                      RL     1Fh,B13
22790: c9f2                      JRNC   226C0h
227a0: 40f0                      ADD    B7,B0
227b0: c4f9                      JRLT   22750h
227c0: 3cda                      DSJS   B10,22770h
227d0: c063                      JR     22E10h
227e0: 1ffd                      BTST   0h,B13
227f0: cb04                      JRNE   22840h
22800: 4e09                      MOVE   A0,B9
22810: 4c10                      MOVE   B0,B0
22820: c516                      JRGE   22990h
22830: c009                      JR     228D0h
22840: 4e29                      MOVE   A1,B9
22850: 4c10                      MOVE   B0,B0
22860: c52a                      JRGE   22B10h
22870: c01d                      JR     22A50h
22880: 4e09                      MOVE   A0,B9
22890: 41d0                      ADD    B14,B0
228a0: c513                      JRGE   229E0h
228b0: 383a                      DSJS   B10,228D0h
228c0: c054                      JR     22E10h
228d0: f792                      DRAV   B12,B2
228e0: 33fd                      RL     1Fh,B13
228f0: c810                      JRC    22A00h
22900: 41d0                      ADD    B14,B0
22910: c50c                      JRGE   229E0h
22920: 3cda                      DSJS   B10,228D0h
22930: c04d                      JR     22E10h
22940: 4e09                      MOVE   A0,B9
22950: 40f0                      ADD    B7,B0
22960: c4fb                      JRLT   22920h
22970: 383a                      DSJS   B10,22990h
22980: c048                      JR     22E10h
22990: f772                      DRAV   B11,B2
229a0: 33fd                      RL     1Fh,B13
229b0: c810                      JRC    22AC0h
229c0: 40f0                      ADD    B7,B0
229d0: c4f4                      JRLT   22920h
229e0: 3cda                      DSJS   B10,22990h
229f0: c041                      JR     22E10h
22a00: 4e29                      MOVE   A1,B9
22a10: 41d0                      ADD    B14,B0
22a20: c513                      JRGE   22B60h
22a30: 383a                      DSJS   B10,22A50h
22a40: c03c                      JR     22E10h
22a50: f792                      DRAV   B12,B2
22a60: 33fd                      RL     1Fh,B13
22a70: c9e0                      JRNC   22880h
22a80: 41d0                      ADD    B14,B0
22a90: c50c                      JRGE   22B60h
22aa0: 3cda                      DSJS   B10,22A50h
22ab0: c035                      JR     22E10h
22ac0: 4e29                      MOVE   A1,B9
22ad0: 40f0                      ADD    B7,B0
22ae0: c4fb                      JRLT   22AA0h
22af0: 383a                      DSJS   B10,22B10h
22b00: c030                      JR     22E10h
22b10: f772                      DRAV   B11,B2
22b20: 33fd                      RL     1Fh,B13
22b30: c9e0                      JRNC   22940h
22b40: 40f0                      ADD    B7,B0
22b50: c4f4                      JRLT   22AA0h
22b60: 3cda                      DSJS   B10,22B10h
22b70: c029                      JR     22E10h
22b80: 1fc8                      BTST   1h,A8
22b90: ca27                      JREQ   22E10h
22ba0: 07b7 0000 0000            MOVE   @0h,B7,1
22bd0: e0f0                      ADDXY  B7,B0
22be0: e0f2                      ADDXY  B7,B2
22bf0: 0546                      SETF   6h,0,0
22c00: 05a8 00b0 c000            MOVE   @C00000B0h,A8,0
22c30: 1ff1                      BTST   0h,B1
22c40: cb07                      JRNE   22CC0h
22c50: 4f07                      MOVE   A8,B7
22c60: 0bb7 0021 0000            ORI    21h,B7
22c90: 0597 00b0 c000            MOVE   B7,@C00000B0h,0
22cc0: 4c17                      MOVE   B0,B7
22cd0: 0c57                      LINIT  
22ce0: c80d                      JRC    22DC0h
22cf0: cc07                      JRV    22D70h
22d00: e852                      CVXYL  B2,B2
22d10: 4d7b                      MOVE   B11,B11
22d20: c402                      JRLT   22D50h
22d30: de1a                      FLINE   0
22d40: c009                      JR     22DE0h
22d50: de9a                      FLINE   1
22d60: c007                      JR     22DE0h
22d70: 4d7b                      MOVE   B11,B11
22d80: c402                      JRLT   22DB0h
22d90: df1a                      LINE   0
22da0: c003                      JR     22DE0h
22db0: df9a                      LINE   1
22dc0: 03ba                      NEG    B10
22dd0: 695d                      RL     B10,B13
22de0: 0588 00b0 c000            MOVE   A8,@C00000B0h,0
22e10: 4fb8                      MOVE   B13,A8
22e20: 09af 0003                 MMFM   SP,A0,A1
22e40: 09bf 0287                 MMFM   SP,B0-B2,B7,B9
22e60: b7ee 0020                 MOVE   *SP(20h),A14,1
22e80: 0962                      RETS   2h

_wDrawOval:
22e90: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
22eb0: 099f e1be                 MMTM   SP,B0-B2,B7,B8,B10-B14
22ed0: 0550                      SETF   10h,0,0
22ee0: a7c0                      MOVE   -*A14,A0,1
22ef0: a7c2                      MOVE   -*A14,A2,1
22f00: 4c01                      MOVE   A0,A1
22f10: 4c43                      MOVE   A2,A3
22f20: 0520                      ZEXT   A0,0
22f30: ca01                      JREQ   22F50h
22f40: 1420                      DEC    A0
22f50: 2e01                      SRL    10h,A1
22f60: ca01                      JREQ   22F80h
22f70: 1421                      DEC    A1
22f80: 0522                      ZEXT   A2,0
22f90: 2e03                      SRL    10h,A3
22fa0: 2603                      SLL    10h,A3
22fb0: ee62                      MOVY   A3,A2
22fc0: 1828                      MOVK   1h,A8
22fd0: 1826                      MOVK   1h,A6
22fe0: 2606                      SLL    10h,A6
22ff0: 4801                      CMP    A0,A1
23000: cf06                      JRNN   23070h
23010: 3202                      RL     10h,A2
23020: 4c03                      MOVE   A0,A3
23030: 4c20                      MOVE   A1,A0
23040: 4c61                      MOVE   A3,A1
23050: 3208                      RL     10h,A8
23060: 3206                      RL     10h,A6
23070: 4c04                      MOVE   A0,A4
23080: 2fe4                      SRL    1h,A4
23090: 4c25                      MOVE   A1,A5
230a0: 2605                      SLL    10h,A5
230b0: 4c03                      MOVE   A0,A3
230c0: e283                      SUBXY  A4,A3
230d0: e043                      ADDXY  A2,A3
230e0: e044                      ADDXY  A2,A4
230f0: e045                      ADDXY  A2,A5
23100: ec85                      MOVX   A4,A5
23110: ec62                      MOVX   A3,A2
23120: eea2                      MOVY   A5,A2
23130: 1fe8                      BTST   0h,A8
23140: cb04                      JRNE   23190h
23150: 3202                      RL     10h,A2
23160: 3203                      RL     10h,A3
23170: 3204                      RL     10h,A4
23180: 3205                      RL     10h,A5
23190: 4cc7                      MOVE   A6,A7
231a0: e107                      ADDXY  A8,A7
231b0: 4d09                      MOVE   A8,A9
231c0: e2c9                      SUBXY  A6,A9
231d0: 574a                      CLR    A10
231e0: e2ca                      SUBXY  A6,A10
231f0: 4d4b                      MOVE   A10,A11
23200: e30b                      SUBXY  A8,A11
23210: 578c                      CLR    A12
23220: e30c                      SUBXY  A8,A12
23230: 4d8d                      MOVE   A12,A13
23240: e0cd                      ADDXY  A6,A13
23250: 4e00                      MOVE   A0,B0
23260: 4e22                      MOVE   A1,B2
23270: 0770                      SETF   10h,1,1
23280: 4c11                      MOVE   B0,B1
23290: 5e31                      MPYU   B1,B1
232a0: 4c38                      MOVE   B1,B8
232b0: 2478                      SLL    3h,B8
232c0: 4c57                      MOVE   B2,B7
232d0: 5ef7                      MPYU   B7,B7
232e0: 4cfe                      MOVE   B7,B14
232f0: 247e                      SLL    3h,B14
23300: 0740                      SETF   20h,0,1
23310: 4c5a                      MOVE   B2,B10
23320: 245a                      SLL    2h,B10
23330: 5e3a                      MPYU   B1,B10
23340: 4c1c                      MOVE   B0,B12
23350: 249c                      SLL    4h,B12
23360: 5efc                      MPYU   B7,B12
23370: 6b9c                      LMO    B12,B12
23380: ca07                      JREQ   23400h
23390: 639a                      SLL    B12,B10
233a0: 679b                      SRL    B12,B11
233b0: 555b                      OR     B10,B11
233c0: 6791                      SRL    B12,B1
233d0: 6798                      SRL    B12,B8
233e0: 6797                      SRL    B12,B7
233f0: 679e                      SRL    B12,B14
23400: 4d1c                      MOVE   B8,B12
23410: 2ffc                      SRL    1h,B12
23420: 4ddd                      MOVE   B14,B13
23430: 2ffd                      SRL    1h,B13
23440: 4d92                      MOVE   B12,B2
23450: 4572                      SUB    B11,B2
23460: 4d9a                      MOVE   B12,B10
23470: 41ba                      ADD    B13,B10
23480: 457a                      SUB    B11,B10
23490: 4d90                      MOVE   B12,B0
234a0: 4430                      SUB    B1,B0
234b0: 45b0                      SUB    B13,B0
234c0: 44f0                      SUB    B7,B0
234d0: 2ffb                      SRL    1h,B11
234e0: 4570                      SUB    B11,B0
234f0: 4db1                      MOVE   B13,B1
23500: 1fe0                      BTST   0h,A0
23510: cb22                      JRNE   23740h
23520: 40f0                      ADD    B7,B0
23530: 40f0                      ADD    B7,B0
23540: 5631                      CLR    B1
23550: 45ba                      SUB    B13,B10
23560: 40fa                      ADD    B7,B10
23570: c40a                      JRLT   23620h
23580: f742                      DRAV   A10,A2
23590: f6c4                      DRAV   A6,A4
235a0: e145                      ADDXY  A10,A5
235b0: e0c3                      ADDXY  A6,A3
235c0: 1441                      SUBK   2h,A1
235d0: c63e                      JRLE   239C0h
235e0: 4190                      ADD    B12,B0
235f0: 4112                      ADD    B8,B2
23600: 405a                      ADD    B2,B10
23610: c7f6                      JRGT   23580h
23620: f702                      DRAV   A8,A2
23630: e103                      ADDXY  A8,A3
23640: f784                      DRAV   A12,A4
23650: e185                      ADDXY  A12,A5
23660: 481a                      CMP    B0,B10
23670: c409                      JRLT   23710h
23680: e142                      ADDXY  A10,A2
23690: e0c3                      ADDXY  A6,A3
236a0: e0c4                      ADDXY  A6,A4
236b0: e145                      ADDXY  A10,A5
236c0: 1441                      SUBK   2h,A1
236d0: c631                      JRLE   239F0h
236e0: 4190                      ADD    B12,B0
236f0: 4112                      ADD    B8,B2
23700: 405a                      ADD    B2,B10
23710: 45b0                      SUB    B13,B0
23720: 41d1                      ADD    B14,B1
23730: 403a                      ADD    B1,B10
23740: 481a                      CMP    B0,B10
23750: c509                      JRGE   237F0h
23760: f702                      DRAV   A8,A2
23770: f703                      DRAV   A8,A3
23780: f784                      DRAV   A12,A4
23790: f785                      DRAV   A12,A5
237a0: 45b0                      SUB    B13,B0
237b0: 41d1                      ADD    B14,B1
237c0: 403a                      ADD    B1,B10
237d0: 481a                      CMP    B0,B10
237e0: c4f7                      JRLT   23760h
237f0: 4d5a                      MOVE   B10,B10
23800: c510                      JRGE   23910h
23810: f722                      DRAV   A9,A2
23820: f6e3                      DRAV   A7,A3
23830: f7a4                      DRAV   A13,A4
23840: f765                      DRAV   A11,A5
23850: 1441                      SUBK   2h,A1
23860: c618                      JRLE   239F0h
23870: 4190                      ADD    B12,B0
23880: 45b0                      SUB    B13,B0
23890: 41d1                      ADD    B14,B1
238a0: 4112                      ADD    B8,B2
238b0: 403a                      ADD    B1,B10
238c0: 405a                      ADD    B2,B10
238d0: 481a                      CMP    B0,B10
238e0: c4e7                      JRLT   23760h
238f0: 4d5a                      MOVE   B10,B10
23900: c4f0                      JRLT   23810h
23910: f742                      DRAV   A10,A2
23920: f6c3                      DRAV   A6,A3
23930: f6c4                      DRAV   A6,A4
23940: f745                      DRAV   A10,A5
23950: 1441                      SUBK   2h,A1
23960: c608                      JRLE   239F0h
23970: 4190                      ADD    B12,B0
23980: 4112                      ADD    B8,B2
23990: 405a                      ADD    B2,B10
239a0: c4e6                      JRLT   23810h
239b0: c0f5                      JR     23910h
239c0: cb05                      JRNE   23A20h
239d0: f742                      DRAV   A10,A2
239e0: c003                      JR     23A20h
239f0: cb02                      JRNE   23A20h
23a00: f742                      DRAV   A10,A2
23a10: f6c4                      DRAV   A6,A4
23a20: 09bf 7d87                 MMFM   SP,B0-B2,B7,B8,B10-B14
23a40: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
23a60: 0962                      RETS   2h

_wFillOval:
23a70: 098f ff78                 MMTM   SP,A0-A7,A9-A12
23a90: 099f 213e                 MMTM   SP,B2,B7,B10-B14
23ab0: a7c0                      MOVE   -*A14,A0,1
23ac0: a7c2                      MOVE   -*A14,A2,1
23ad0: 4c01                      MOVE   A0,A1
23ae0: 4c43                      MOVE   A2,A3
23af0: 0520                      ZEXT   A0,0
23b00: 2e01                      SRL    10h,A1
23b10: 0522                      ZEXT   A2,0
23b20: 2e03                      SRL    10h,A3
23b30: 4c24                      MOVE   A1,A4
23b40: 1024                      INC    A4
23b50: 2fe4                      SRL    1h,A4
23b60: 1424                      DEC    A4
23b70: 4c25                      MOVE   A1,A5
23b80: 4485                      SUB    A4,A5
23b90: 1425                      DEC    A5
23ba0: 4064                      ADD    A3,A4
23bb0: 4065                      ADD    A3,A5
23bc0: 2604                      SLL    10h,A4
23bd0: ec44                      MOVX   A2,A4
23be0: 2605                      SLL    10h,A5
23bf0: ec45                      MOVX   A2,A5
23c00: 4c27                      MOVE   A1,A7
23c10: 5ee7                      MPYU   A7,A7
23c20: 4ce6                      MOVE   A7,A6
23c30: 2467                      SLL    3h,A7
23c40: 4c09                      MOVE   A0,A9
23c50: 5f29                      MPYU   A9,A9
23c60: 4d28                      MOVE   A9,A8
23c70: 2469                      SLL    3h,A9
23c80: 4c0a                      MOVE   A0,A10
23c90: 248a                      SLL    4h,A10
23ca0: 5eca                      MPYU   A6,A10
23cb0: 4801                      CMP    A0,A1
23cc0: c404                      JRLT   23D10h
23cd0: 4d4a                      MOVE   A10,A10
23ce0: ca0f                      JREQ   23DE0h
23cf0: 6b4c                      LMO    A10,A12
23d00: c006                      JR     23D70h
23d10: 4c22                      MOVE   A1,A2
23d20: 2482                      SLL    4h,A2
23d30: 5f02                      MPYU   A8,A2
23d40: 4c42                      MOVE   A2,A2
23d50: ca08                      JREQ   23DE0h
23d60: 6a4c                      LMO    A2,A12
23d70: 638a                      SLL    A12,A10
23d80: 678b                      SRL    A12,A11
23d90: 554b                      OR     A10,A11
23da0: 6786                      SRL    A12,A6
23db0: 6787                      SRL    A12,A7
23dc0: 6788                      SRL    A12,A8
23dd0: 6789                      SRL    A12,A9
23de0: 2fcb                      SRL    2h,A11
23df0: 4cec                      MOVE   A7,A12
23e00: 456c                      SUB    A11,A12
23e10: 4d0a                      MOVE   A8,A10
23e20: 40c8                      ADD    A6,A8
23e30: 2feb                      SRL    1h,A11
23e40: 4568                      SUB    A11,A8
23e50: 576b                      CLR    A11
23e60: 4d86                      MOVE   A12,A6
23e70: 4106                      ADD    A8,A6
23e80: 4e07                      MOVE   A0,B7
23e90: 0bb7 0000 0001            ORI    10000h,B7
23ec0: 1fe1                      BTST   0h,A1
23ed0: ca07                      JREQ   23F50h
23ee0: 4d2b                      MOVE   A9,A11
23ef0: 2feb                      SRL    1h,A11
23f00: 456a                      SUB    A11,A10
23f10: 4148                      ADD    A10,A8
23f20: 4146                      ADD    A10,A6
23f30: 4e82                      MOVE   A4,B2
23f40: 0fe0                      FILL   XY
23f50: 09e2 0000 0001            MOVI   10000h,A2
23f80: 09e3 0001 0001            MOVI   10001h,A3
23fb0: 09e1 0001 ffff            MOVI   FFFF0001h,A1
23fe0: 1850                      MOVK   2h,B0
23ff0: 0b48 ffff                 CMPI   0h,A8
24010: cf0a                      JRNN   240C0h
24020: e044                      ADDXY  A2,A4
24030: e245                      SUBXY  A2,A5
24040: 4e82                      MOVE   A4,B2
24050: 0fe0                      FILL   XY
24060: 4ea2                      MOVE   A5,B2
24070: 0fe0                      FILL   XY
24080: 412b                      ADD    A9,A11
24090: 4166                      ADD    A11,A6
240a0: 4168                      ADD    A11,A8
240b0: cef6                      JRN    24020h
240c0: 0b46 ffff                 CMPI   0h,A6
240e0: cf13                      JRNN   24220h
240f0: e064                      ADDXY  A3,A4
24100: e025                      ADDXY  A1,A5
24110: e217                      SUBXY  B0,B7
24120: 1440                      SUBK   2h,A0
24130: 4e82                      MOVE   A4,B2
24140: 0fe0                      FILL   XY
24150: 4ea2                      MOVE   A5,B2
24160: 0fe0                      FILL   XY
24170: 40ec                      ADD    A7,A12
24180: 412b                      ADD    A9,A11
24190: 4186                      ADD    A12,A6
241a0: 4166                      ADD    A11,A6
241b0: 4188                      ADD    A12,A8
241c0: 4168                      ADD    A11,A8
241d0: 44e8                      SUB    A7,A8
241e0: cee3                      JRN    24020h
241f0: 0b46 ffff                 CMPI   0h,A6
24210: ceed                      JRN    240F0h
24220: 1822                      MOVK   1h,A2
24230: e217                      SUBXY  B0,B7
24240: 1440                      SUBK   2h,A0
24250: c618                      JRLE   243E0h
24260: 0b46 ffff                 CMPI   0h,A6
24280: cf0e                      JRNN   24370h
24290: e064                      ADDXY  A3,A4
242a0: e025                      ADDXY  A1,A5
242b0: 4e82                      MOVE   A4,B2
242c0: 0fe0                      FILL   XY
242d0: 4ea2                      MOVE   A5,B2
242e0: 0fe0                      FILL   XY
242f0: 40ec                      ADD    A7,A12
24300: 412b                      ADD    A9,A11
24310: 4186                      ADD    A12,A6
24320: 4166                      ADD    A11,A6
24330: e217                      SUBXY  B0,B7
24340: 1440                      SUBK   2h,A0
24350: c7f0                      JRGT   24260h
24360: c007                      JR     243E0h
24370: e044                      ADDXY  A2,A4
24380: e045                      ADDXY  A2,A5
24390: 40ec                      ADD    A7,A12
243a0: 4186                      ADD    A12,A6
243b0: e217                      SUBXY  B0,B7
243c0: 1440                      SUBK   2h,A0
243d0: c7e8                      JRGT   24260h
243e0: 09bf 7c84                 MMFM   SP,B2,B7,B10-B14
24400: 09af 1eff                 MMFM   SP,A0-A7,A9-A12
24420: 0962                      RETS   2h

_wPFillOval:
24430: 098f ff7c                 MMTM   SP,A0-A7,A9-A13
24450: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
24470: a7c0                      MOVE   -*A14,A0,1
24480: a7c2                      MOVE   -*A14,A2,1
24490: a7c8                      MOVE   -*A14,A8,1
244a0: 4f00                      MOVE   A8,B0
244b0: a7cd                      MOVE   -*A14,A13,1
244c0: 4c01                      MOVE   A0,A1
244d0: 4c43                      MOVE   A2,A3
244e0: 0520                      ZEXT   A0,0
244f0: 2e01                      SRL    10h,A1
24500: 0522                      ZEXT   A2,0
24510: 2e03                      SRL    10h,A3
24520: 4c24                      MOVE   A1,A4
24530: 1024                      INC    A4
24540: 2fe4                      SRL    1h,A4
24550: 1424                      DEC    A4
24560: 4c25                      MOVE   A1,A5
24570: 4485                      SUB    A4,A5
24580: 1425                      DEC    A5
24590: 4064                      ADD    A3,A4
245a0: 4065                      ADD    A3,A5
245b0: 2604                      SLL    10h,A4
245c0: ec44                      MOVX   A2,A4
245d0: 2605                      SLL    10h,A5
245e0: ec45                      MOVX   A2,A5
245f0: 4c27                      MOVE   A1,A7
24600: 5ee7                      MPYU   A7,A7
24610: 4ce6                      MOVE   A7,A6
24620: 2467                      SLL    3h,A7
24630: 4c09                      MOVE   A0,A9
24640: 5f29                      MPYU   A9,A9
24650: 4d28                      MOVE   A9,A8
24660: 2469                      SLL    3h,A9
24670: 4c0a                      MOVE   A0,A10
24680: 248a                      SLL    4h,A10
24690: 5eca                      MPYU   A6,A10
246a0: 4801                      CMP    A0,A1
246b0: c404                      JRLT   24700h
246c0: 4d4a                      MOVE   A10,A10
246d0: ca0f                      JREQ   247D0h
246e0: 6b4c                      LMO    A10,A12
246f0: c006                      JR     24760h
24700: 4c22                      MOVE   A1,A2
24710: 2482                      SLL    4h,A2
24720: 5f02                      MPYU   A8,A2
24730: 4c42                      MOVE   A2,A2
24740: ca08                      JREQ   247D0h
24750: 6a4c                      LMO    A2,A12
24760: 638a                      SLL    A12,A10
24770: 678b                      SRL    A12,A11
24780: 554b                      OR     A10,A11
24790: 6786                      SRL    A12,A6
247a0: 6787                      SRL    A12,A7
247b0: 6788                      SRL    A12,A8
247c0: 6789                      SRL    A12,A9
247d0: 2fcb                      SRL    2h,A11
247e0: 4cec                      MOVE   A7,A12
247f0: 456c                      SUB    A11,A12
24800: 4d0a                      MOVE   A8,A10
24810: 40c8                      ADD    A6,A8
24820: 2feb                      SRL    1h,A11
24830: 4568                      SUB    A11,A8
24840: 576b                      CLR    A11
24850: 4d86                      MOVE   A12,A6
24860: 4106                      ADD    A8,A6
24870: 4e07                      MOVE   A0,B7
24880: 0bb7 0000 0001            ORI    10000h,B7
248b0: 1fe1                      BTST   0h,A1
248c0: ca07                      JREQ   24940h
248d0: 4d2b                      MOVE   A9,A11
248e0: 2feb                      SRL    1h,A11
248f0: 456a                      SUB    A11,A10
24900: 4148                      ADD    A10,A8
24910: 4146                      ADD    A10,A6
24920: 4e82                      MOVE   A4,B2
24930: 092d                      CALL   A13
24940: 09e2 0000 0001            MOVI   10000h,A2
24970: 09e3 0001 0001            MOVI   10001h,A3
249a0: 09e1 0001 ffff            MOVI   FFFF0001h,A1
249d0: 1851                      MOVK   2h,B1
249e0: 0b48 ffff                 CMPI   0h,A8
24a00: cf0a                      JRNN   24AB0h
24a10: e044                      ADDXY  A2,A4
24a20: e245                      SUBXY  A2,A5
24a30: 4e82                      MOVE   A4,B2
24a40: 092d                      CALL   A13
24a50: 4ea2                      MOVE   A5,B2
24a60: 092d                      CALL   A13
24a70: 412b                      ADD    A9,A11
24a80: 4166                      ADD    A11,A6
24a90: 4168                      ADD    A11,A8
24aa0: cef6                      JRN    24A10h
24ab0: 0b46 ffff                 CMPI   0h,A6
24ad0: cf13                      JRNN   24C10h
24ae0: e064                      ADDXY  A3,A4
24af0: e025                      ADDXY  A1,A5
24b00: e237                      SUBXY  B1,B7
24b10: 1440                      SUBK   2h,A0
24b20: 4e82                      MOVE   A4,B2
24b30: 092d                      CALL   A13
24b40: 4ea2                      MOVE   A5,B2
24b50: 092d                      CALL   A13
24b60: 40ec                      ADD    A7,A12
24b70: 412b                      ADD    A9,A11
24b80: 4186                      ADD    A12,A6
24b90: 4166                      ADD    A11,A6
24ba0: 4188                      ADD    A12,A8
24bb0: 4168                      ADD    A11,A8
24bc0: 44e8                      SUB    A7,A8
24bd0: cee3                      JRN    24A10h
24be0: 0b46 ffff                 CMPI   0h,A6
24c00: ceed                      JRN    24AE0h
24c10: 1822                      MOVK   1h,A2
24c20: e237                      SUBXY  B1,B7
24c30: 1440                      SUBK   2h,A0
24c40: c618                      JRLE   24DD0h
24c50: 0b46 ffff                 CMPI   0h,A6
24c70: cf0e                      JRNN   24D60h
24c80: e064                      ADDXY  A3,A4
24c90: e025                      ADDXY  A1,A5
24ca0: 4e82                      MOVE   A4,B2
24cb0: 092d                      CALL   A13
24cc0: 4ea2                      MOVE   A5,B2
24cd0: 092d                      CALL   A13
24ce0: 40ec                      ADD    A7,A12
24cf0: 412b                      ADD    A9,A11
24d00: 4186                      ADD    A12,A6
24d10: 4166                      ADD    A11,A6
24d20: e237                      SUBXY  B1,B7
24d30: 1440                      SUBK   2h,A0
24d40: c7f0                      JRGT   24C50h
24d50: c007                      JR     24DD0h
24d60: e044                      ADDXY  A2,A4
24d70: e045                      ADDXY  A2,A5
24d80: 40ec                      ADD    A7,A12
24d90: 4186                      ADD    A12,A6
24da0: e237                      SUBXY  B1,B7
24db0: 1440                      SUBK   2h,A0
24dc0: c7e8                      JRGT   24C50h
24dd0: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
24df0: 09af 3eff                 MMFM   SP,A0-A7,A9-A13
24e10: 0962                      RETS   2h

_InitSrBkgnd:
24e20: 0550                      SETF   10h,0,0
24e30: 5708                      CLR    A8
24e40: 0588 0b30 0007            MOVE   A8,@70B30h,0
24e70: 0788 0b40 0007            MOVE   A8,@70B40h,1
24ea0: 0788 0b80 0007            MOVE   A8,@70B80h,1
24ed0: 0788 0b60 0007            MOVE   A8,@70B60h,1
24f00: 0960                      RETS   

_SrBkgnd:
24f10: 098f e000                 MMTM   SP,A0-A2
24f30: 099f f000                 MMTM   SP,B0-B3
24f50: 0550                      SETF   10h,0,0
24f60: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
24f90: a7c1                      MOVE   -*A14,A1,1
24fa0: 5642                      CLR    A2
24fb0: 054b                      SETF   Bh,0,0
24fc0: 0582 00b5 c000            MOVE   A2,@C00000B5h,0
24ff0: 0550                      SETF   10h,0,0
25000: b428 0040                 MOVE   *A1(40h),A8,0
25020: ca07                      JREQ   250A0h
25030: 0b48 fffe                 CMPI   1h,A8
25050: ca40                      JREQ   25460h
25060: 0b48 fffd                 CMPI   2h,A8
25080: ca5c                      JREQ   25650h
25090: c06f                      JR     25790h
250a0: 4e2a                      MOVE   A1,B10
250b0: b750 0000                 MOVE   *B10(0h),B0,1
250d0: b757 0020                 MOVE   *B10(20h),B7,1
250f0: 4c71                      MOVE   B3,B1
25100: 05ba 0150 c000            MOVE   @C0000150h,B10,0
25130: 4cfb                      MOVE   B7,B11
25140: 053b                      ZEXT   B11,0
25150: 6b5a                      LMO    B10,B10
25160: 17fa                      SUBK   1Fh,B10
25170: 03ba                      NEG    B10
25180: 635b                      SLL    B10,B11
25190: 11fb                      ADDK   Fh,B11
251a0: 2f9b                      SRL    4h,B11
251b0: 4d73                      MOVE   B11,B3
251c0: 2493                      SLL    4h,B3
251d0: 4cfa                      MOVE   B7,B10
251e0: 2e1a                      SRL    10h,B10
251f0: 5f5b                      MPYU   B10,B11
25200: 243b                      SLL    1h,B11
25210: 4f78                      MOVE   B11,A8
25220: a3cf                      MOVE   A14,-*SP,1
25230: 930e                      MOVE   A8,*A14+,1
25240: 0d5f 5810 0002            CALLA  25810h
25270: 4d08                      MOVE   A8,A8
25280: cb06                      JRNE   252F0h
25290: 5708                      CLR    A8
252a0: 0788 0b40 0007            MOVE   A8,@70B40h,1
252d0: 1828                      MOVK   1h,A8
252e0: c04a                      JR     25790h
252f0: 0788 0b80 0007            MOVE   A8,@70B80h,1
25320: 4f02                      MOVE   A8,B2
25330: 0593 0b30 0007            MOVE   B3,@70B30h,0
25360: 0797 0b40 0007            MOVE   B7,@70B40h,1
25390: 0790 0b60 0007            MOVE   B0,@70B60h,1
253c0: 5633                      XOR    B1,B3
253d0: 5671                      XOR    B3,B1
253e0: 5633                      XOR    B1,B3
253f0: e810                      CVXYL  B0,B0
25400: 5633                      XOR    B1,B3
25410: 5671                      XOR    B3,B1
25420: 5633                      XOR    B1,B3
25430: 0f00                      PIXBLT L,L
25440: 5708                      CLR    A8
25450: c033                      JR     25790h
25460: 07b7 0b40 0007            MOVE   @70B40h,B7,1
25490: cb02                      JRNE   254C0h
254a0: 1828                      MOVK   1h,A8
254b0: c02d                      JR     25790h
254c0: 07b0 0b80 0007            MOVE   @70B80h,B0,1
254f0: 07b2 0b60 0007            MOVE   @70B60h,B2,1
25520: 05b1 0b30 0007            MOVE   @70B30h,B1,0
25550: e852                      CVXYL  B2,B2
25560: 0f00                      PIXBLT L,L
25570: 5708                      CLR    A8
25580: 0788 0b40 0007            MOVE   A8,@70B40h,1
255b0: 07a8 0b80 0007            MOVE   @70B80h,A8,1
255e0: a3cf                      MOVE   A14,-*SP,1
255f0: 930e                      MOVE   A8,*A14+,1
25600: 0d5f 0000 0000            CALLA  0h
25630: 5708                      CLR    A8
25640: c014                      JR     25790h
25650: 07a8 0b40 0007            MOVE   @70B40h,A8,1
25680: cb02                      JRNE   256B0h
25690: 1828                      MOVK   1h,A8
256a0: c00e                      JR     25790h
256b0: 5708                      CLR    A8
256c0: 0788 0b40 0007            MOVE   A8,@70B40h,1
256f0: 07a8 0b80 0007            MOVE   @70B80h,A8,1
25720: a3cf                      MOVE   A14,-*SP,1
25730: 930e                      MOVE   A8,*A14+,1
25740: 0d5f 0000 0000            CALLA  0h
25770: 5708                      CLR    A8
25780: 0300                      NOP    
25790: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
257c0: 09bf 000f                 MMFM   SP,B0-B3
257e0: 09af 0007                 MMFM   SP,A0-A2
25800: 0962                      RETS   2h
25810: 098f 8000                 MMTM   SP,A0
25830: 0550                      SETF   10h,0,0
25840: 5600                      CLR    A0
25850: a7c8                      MOVE   -*A14,A8,1
25860: a3cf                      MOVE   A14,-*SP,1
25870: 930e                      MOVE   A8,*A14+,1
25880: 0d5f 0000 0000            CALLA  0h
258b0: 4d00                      MOVE   A8,A0
258c0: ca0d                      JREQ   259A0h
258d0: 0d5f 0000 0000            CALLA  0h
25900: 0b68 ffff fffe            CMPI   10000h,A8
25930: cf06                      JRNN   259A0h
25940: a3cf                      MOVE   A14,-*SP,1
25950: 920e                      MOVE   A0,*A14+,1
25960: 0d5f 0000 0000            CALLA  0h
25990: 5600                      CLR    A0
259a0: 4c08                      MOVE   A0,A8
259b0: 09af 0001                 MMFM   SP,A0
259d0: 0962                      RETS   2h

_InitPalmgr:
259e0: 098f 8000                 MMTM   SP,A0
25a00: 0550                      SETF   10h,0,0
25a10: 5708                      CLR    A8
25a20: 0588 6440 0006            MOVE   A8,@66440h,0
25a50: a3cf                      MOVE   A14,-*SP,1
25a60: 09e8 2360 0003            MOVI   32360h,A8
25a90: 930e                      MOVE   A8,*A14+,1
25aa0: 05a8 4370 0003            MOVE   @34370h,A8,0
25ad0: 1820                      MOVK   1h,A0
25ae0: 6300                      SLL    A8,A0
25af0: 920e                      MOVE   A0,*A14+,1
25b00: 0d5f 0000 0000            CALLA  0h
25b30: 09af 0001                 MMFM   SP,A0
25b50: 0960                      RETS   
25b60: 098f e000                 MMTM   SP,A0-A2
25b80: 099f f1fe                 MMTM   SP,B0-B3,B7-B14
25ba0: 0550                      SETF   10h,0,0
25bb0: a7c8                      MOVE   -*A14,A8,1
25bc0: 4f07                      MOVE   A8,B7
25bd0: 2617                      SLL    10h,B7
25be0: a7c8                      MOVE   -*A14,A8,1
25bf0: 4f0a                      MOVE   A8,B10
25c00: 24ba                      SLL    5h,B10
25c10: a7c8                      MOVE   -*A14,A8,1
25c20: 4f09                      MOVE   A8,B9
25c30: 4159                      ADD    B10,B9
25c40: 05a0 00b0 c000            MOVE   @C00000B0h,A0,0
25c70: 05a1 0150 c000            MOVE   @C0000150h,A1,0
25ca0: 1828                      MOVK   1h,A8
25cb0: 0588 0150 c000            MOVE   A8,@C0000150h,0
25ce0: 09c8 0140                 MOVI   140h,A8
25d00: 054a                      SETF   Ah,0,0
25d10: 0588 00b5 c000            MOVE   A8,@C00000B5h,0
25d40: 0550                      SETF   10h,0,0
25d50: 1811                      MOVK   20h,B1
25d60: 1813                      MOVK   20h,B3
25d70: 1918                      MOVK   8h,B8
25d80: ed17                      MOVX   B8,B7
25d90: 4d38                      MOVE   B9,B8
25da0: 1219                      ADDK   10h,B9
25db0: 4d10                      MOVE   B8,B0
25dc0: 4d32                      MOVE   B9,B2
25dd0: 0f00                      PIXBLT L,L
25de0: 4d12                      MOVE   B8,B2
25df0: 4d30                      MOVE   B9,B0
25e00: 0f00                      PIXBLT L,L
25e10: 4d10                      MOVE   B8,B0
25e20: 4d32                      MOVE   B9,B2
25e30: 0f00                      PIXBLT L,L
25e40: 0580 00b0 c000            MOVE   A0,@C00000B0h,0
25e70: 0581 0150 c000            MOVE   A1,@C0000150h,0
25ea0: 09bf 7f8f                 MMFM   SP,B0-B3,B7-B14
25ec0: 09af 0007                 MMFM   SP,A0-A2
25ee0: 0962                      RETS   2h

_SetPalette:
25ef0: 098f f000                 MMTM   SP,A0-A3
25f10: 0550                      SETF   10h,0,0
25f20: a7c0                      MOVE   -*A14,A0,1
25f30: b601 0000                 MOVE   *A0(0h),A1,1
25f50: b403 0020                 MOVE   *A0(20h),A3,0
25f70: b402 0030                 MOVE   *A0(30h),A2,0
25f90: 0550                      SETF   10h,0,0
25fa0: 24a2                      SLL    5h,A2
25fb0: 0b22 2360 0003            ADDI   32360h,A2
25fe0: 9a22                      MOVE   *A1+,*A2+,1
25ff0: 3c43                      DSJS   A3,25FE0h
26000: 09af 000f                 MMFM   SP,A0-A3
26020: 0962                      RETS   2h

_SetXlate:
26030: 098f f000                 MMTM   SP,A0-A3
26050: 0550                      SETF   10h,0,0
26060: a7c0                      MOVE   -*A14,A0,1
26070: b601 0000                 MOVE   *A0(0h),A1,1
26090: ca15                      JREQ   261F0h
260a0: 0548                      SETF   8h,0,0
260b0: 09e2 53c0 0003            MOVI   353C0h,A2
260e0: 09c3 0100                 MOVI   100h,A3
26100: 9822                      MOVE   *A1+,*A2+,0
26110: 3c43                      DSJS   A3,26100h
26120: 09c3 0100                 MOVI   100h,A3
26140: 09e2 43a0 0003            MOVI   343A0h,A2
26170: 9822                      MOVE   *A1+,*A2+,0
26180: 3c43                      DSJS   A3,26170h
26190: 0550                      SETF   10h,0,0
261a0: 1828                      MOVK   1h,A8
261b0: 0588 6440 0006            MOVE   A8,@66440h,0
261e0: c004                      JR     26230h
261f0: 5708                      CLR    A8
26200: 0588 6440 0006            MOVE   A8,@66440h,0
26230: 09af 000f                 MMFM   SP,A0-A3
26250: 0962                      RETS   2h

_DIBstart:
26260: a20f                      MOVE   A0,-*SP,1
26270: 0550                      SETF   10h,0,0
26280: a7c0                      MOVE   -*A14,A0,1
26290: b408 0040                 MOVE   *A0(40h),A8,0
262b0: 0588 0ba0 0007            MOVE   A8,@70BA0h,0
262e0: cb04                      JRNE   26330h
262f0: 0d5f 64e0 0002            CALLA  264E0h
26320: c004                      JR     26370h
26330: 0d5f 73b0 0002            CALLA  273B0h
26360: 0300                      NOP    
26370: 97e0                      MOVE   *SP+,A0,1
26380: 0962                      RETS   2h

_DIBcont:
26390: a20f                      MOVE   A0,-*SP,1
263a0: 0550                      SETF   10h,0,0
263b0: a7c0                      MOVE   -*A14,A0,1
263c0: 05a8 0ba0 0007            MOVE   @70BA0h,A8,0
263f0: cb04                      JRNE   26440h
26400: 0d5f 6ee0 0002            CALLA  26EE0h
26430: c003                      JR     26470h
26440: 0d5f 7f80 0002            CALLA  27F80h
26470: 97e0                      MOVE   *SP+,A0,1
26480: 0962                      RETS   2h

_DIBbytesout:
26490: a7c8                      MOVE   -*A14,A8,1
264a0: 07a8 6680 0006            MOVE   @66680h,A8,1
264d0: 0962                      RETS   2h

DIBset:
264e0: 098f 7e00                 MMTM   SP,A1-A6
26500: 099f 1100                 MMTM   SP,B3,B7
26520: 05a6 0150 c000            MOVE   @C0000150h,A6,0
26550: 5708                      CLR    A8
26560: 0588 1490 0007            MOVE   A8,@71490h,0
26590: b601 0090                 MOVE   *A0(90h),A1,1
265b0: b602 0020                 MOVE   *A0(20h),A2,1
265d0: b408 0070                 MOVE   *A0(70h),A8,0
265f0: 4e47                      MOVE   A2,B7
26600: 4f0b                      MOVE   A8,B11
26610: 261b                      SLL    10h,B11
26620: ef77                      MOVY   B11,B7
26630: 4e0a                      MOVE   A0,B10
26640: b750 00b0                 MOVE   *B10(B0h),B0,1
26660: b752 00d0                 MOVE   *B10(D0h),B2,1
26680: 4e2a                      MOVE   A1,B10
26690: b551 0020                 MOVE   *B10(20h),B1,0
266b0: 4c33                      MOVE   B1,B3
266c0: b55b 0070                 MOVE   *B10(70h),B11,0
266e0: 0750                      SETF   10h,0,1
266f0: 5f71                      MPYU   B11,B1
26700: 0740                      SETF   20h,0,1
26710: 1bfb                      MOVK   1Fh,B11
26720: 4171                      ADD    B11,B1
26730: 5371                      ANDN   B11,B1
26740: 4e0a                      MOVE   A0,B10
26750: b55b 0080                 MOVE   *B10(80h),B11,0
26770: 6b7b                      LMO    B11,B11
26780: 17fb                      SUBK   1Fh,B11
26790: 03bb                      NEG    B11
267a0: 6373                      SLL    B11,B3
267b0: 19fb                      MOVK   Fh,B11
267c0: 4173                      ADD    B11,B3
267d0: 5373                      ANDN   B11,B3
267e0: 4cfb                      MOVE   B7,B11
267f0: 2e1b                      SRL    10h,B11
26800: 143b                      DEC    B11
26810: 5e7b                      MPYU   B3,B11
26820: 4172                      ADD    B11,B2
26830: 03b3                      NEG    B3
26840: b428 0070                 MOVE   *A1(70h),A8,0
26860: 0b48 ffe7                 CMPI   18h,A8
26880: ca14                      JREQ   269D0h
26890: 1823                      MOVK   1h,A3
268a0: 6303                      SLL    A8,A3
268b0: b628 0100                 MOVE   *A1(100h),A8,1
268d0: ca01                      JREQ   268F0h
268e0: 4d03                      MOVE   A8,A3
268f0: a3cf                      MOVE   A14,-*SP,1
26900: 926e                      MOVE   A3,*A14+,1
26910: 09e3 0bb0 0007            MOVI   70BB0h,A3
26940: 926e                      MOVE   A3,*A14+,1
26950: 4c23                      MOVE   A1,A3
26960: 0b03 0140                 ADDI   140h,A3
26980: 926e                      MOVE   A3,*A14+,1
26990: 0d5f 99e0 0002            CALLA  299E0h
269c0: 0550                      SETF   10h,0,0
269d0: 5684                      CLR    A4
269e0: 24a4                      SLL    5h,A4
269f0: 0b24 9d20 0002            ADDI   29D20h,A4
26a20: 8684                      MOVE   *A4,A4,1
26a30: b628 0080                 MOVE   *A1(80h),A8,1
26a50: 27c8                      SLL    1Eh,A8
26a60: 2c48                      SRL    1Eh,A8
26a70: ca08                      JREQ   26B00h
26a80: 09e4 e090 0002            MOVI   2E090h,A4
26ab0: 1428                      DEC    A8
26ac0: ca03                      JREQ   26B00h
26ad0: 09e4 d940 0002            MOVI   2D940h,A4
26b00: b403 0080                 MOVE   *A0(80h),A3,0
26b20: 0583 0150 c000            MOVE   A3,@C0000150h,0
26b50: d703                      EXGF   A3,1
26b60: b428 0070                 MOVE   *A1(70h),A8,0
26b80: d508                      EXGF   A8,0
26b90: 09fa 0bb0 0007            MOVI   70BB0h,B10
26bc0: 0924                      CALL   A4
26bd0: 0188                      GETST  A8
26be0: 0740                      SETF   20h,0,1
26bf0: 0550                      SETF   10h,0,0
26c00: 4ef3                      MOVE   B7,A3
26c10: 2e03                      SRL    10h,A3
26c20: 2603                      SLL    10h,A3
26c30: e262                      SUBXY  A3,A2
26c40: c219                      JRLS   26DE0h
26c50: 0788 1470 0007            MOVE   A8,@71470h,1
26c80: 0791 1430 0007            MOVE   B1,@71430h,1
26cb0: 0793 1450 0007            MOVE   B3,@71450h,1
26ce0: 0784 1410 0007            MOVE   A4,@71410h,1
26d10: 0782 13f0 0007            MOVE   A2,@713F0h,1
26d40: b608 00b0                 MOVE   *A0(B0h),A8,1
26d60: 0788 13b0 0007            MOVE   A8,@713B0h,1
26d90: b608 00d0                 MOVE   *A0(D0h),A8,1
26db0: 0788 13d0 0007            MOVE   A8,@713D0h,1
26de0: 2e17                      SRL    10h,B7
26df0: 4ef8                      MOVE   B7,A8
26e00: 0393                      ABS    B3
26e10: 5e77                      MPYU   B3,B7
26e20: 2fb7                      SRL    3h,B7
26e30: 0797 6680 0006            MOVE   B7,@66680h,1
26e60: 0586 0150 c000            MOVE   A6,@C0000150h,0
26e90: 09bf 0088                 MMFM   SP,B3,B7
26eb0: 09af 007e                 MMFM   SP,A1-A6
26ed0: 0960                      RETS   

DIBsetcont:
26ee0: 098f 7e00                 MMTM   SP,A1-A6
26f00: 099f 1100                 MMTM   SP,B3,B7
26f20: 0550                      SETF   10h,0,0
26f30: 05a6 0150 c000            MOVE   @C0000150h,A6,0
26f60: 8408                      MOVE   *A0,A8,0
26f70: 07a2 13f0 0007            MOVE   @713F0h,A2,1
26fa0: 4e47                      MOVE   A2,B7
26fb0: 4f0b                      MOVE   A8,B11
26fc0: 261b                      SLL    10h,B11
26fd0: ef77                      MOVY   B11,B7
26fe0: 07b0 13b0 0007            MOVE   @713B0h,B0,1
27010: 07b2 13d0 0007            MOVE   @713D0h,B2,1
27040: 07b1 1430 0007            MOVE   @71430h,B1,1
27070: 07b3 1450 0007            MOVE   @71450h,B3,1
270a0: 07a4 1410 0007            MOVE   @71410h,A4,1
270d0: 4cfb                      MOVE   B7,B11
270e0: 2e1b                      SRL    10h,B11
270f0: 143b                      DEC    B11
27100: 03b3                      NEG    B3
27110: 5e7b                      MPYU   B3,B11
27120: 4172                      ADD    B11,B2
27130: 407b                      ADD    B3,B11
27140: 03b3                      NEG    B3
27150: 2fbb                      SRL    3h,B11
27160: 079b 6680 0006            MOVE   B11,@66680h,1
27190: 09fa 0bb0 0007            MOVI   70BB0h,B10
271c0: 07a8 1470 0007            MOVE   @71470h,A8,1
271f0: 01a8                      PUTST  A8
27200: 1a08                      MOVK   10h,A8
27210: d708                      EXGF   A8,1
27220: 0788 0150 c000            MOVE   A8,@C0000150h,1
27250: d708                      EXGF   A8,1
27260: 0924                      CALL   A4
27270: 0740                      SETF   20h,0,1
27280: 0550                      SETF   10h,0,0
27290: 4ef8                      MOVE   B7,A8
272a0: 2e08                      SRL    10h,A8
272b0: 2608                      SLL    10h,A8
272c0: e302                      SUBXY  A8,A2
272d0: c203                      JRLS   27310h
272e0: 0782 13f0 0007            MOVE   A2,@713F0h,1
27310: 4ef8                      MOVE   B7,A8
27320: 2e08                      SRL    10h,A8
27330: 0586 0150 c000            MOVE   A6,@C0000150h,0
27360: 09bf 0088                 MMFM   SP,B3,B7
27380: 09af 007e                 MMFM   SP,A1-A6
273a0: 0960                      RETS   

DIBget:
273b0: 098f 7e00                 MMTM   SP,A1-A6
273d0: 099f 1100                 MMTM   SP,B3,B7
273f0: 05a6 0150 c000            MOVE   @C0000150h,A6,0
27420: 5708                      CLR    A8
27430: 0588 1490 0007            MOVE   A8,@71490h,0
27460: b601 0090                 MOVE   *A0(90h),A1,1
27480: b602 0020                 MOVE   *A0(20h),A2,1
274a0: b408 0070                 MOVE   *A0(70h),A8,0
274c0: 4e47                      MOVE   A2,B7
274d0: 4f0b                      MOVE   A8,B11
274e0: 261b                      SLL    10h,B11
274f0: ef77                      MOVY   B11,B7
27500: 4e0a                      MOVE   A0,B10
27510: b750 00b0                 MOVE   *B10(B0h),B0,1
27530: b752 00d0                 MOVE   *B10(D0h),B2,1
27550: 4e2a                      MOVE   A1,B10
27560: b553 0020                 MOVE   *B10(20h),B3,0
27580: 4c71                      MOVE   B3,B1
27590: b55b 0070                 MOVE   *B10(70h),B11,0
275b0: 0750                      SETF   10h,0,1
275c0: 5f73                      MPYU   B11,B3
275d0: 0740                      SETF   20h,0,1
275e0: 1bfb                      MOVK   1Fh,B11
275f0: 4173                      ADD    B11,B3
27600: 5373                      ANDN   B11,B3
27610: 4e0a                      MOVE   A0,B10
27620: b55b 0080                 MOVE   *B10(80h),B11,0
27640: 6b7b                      LMO    B11,B11
27650: 17fb                      SUBK   1Fh,B11
27660: 03bb                      NEG    B11
27670: 6371                      SLL    B11,B1
27680: 19fb                      MOVK   Fh,B11
27690: 4171                      ADD    B11,B1
276a0: 5371                      ANDN   B11,B1
276b0: 4cfb                      MOVE   B7,B11
276c0: 2e1b                      SRL    10h,B11
276d0: 143b                      DEC    B11
276e0: 5e3b                      MPYU   B1,B11
276f0: 4170                      ADD    B11,B0
27700: 03b1                      NEG    B1
27710: b403 0080                 MOVE   *A0(80h),A3,0
27730: 0b43 fff7                 CMPI   8h,A3
27750: cb0a                      JRNE   27800h
27760: 575a                      CLR    B10
27770: b428 0070                 MOVE   *A1(70h),A8,0
27790: 0b48 fff7                 CMPI   8h,A8
277b0: ca31                      JREQ   27AD0h
277c0: 4e2a                      MOVE   A1,B10
277d0: 0b1a 0140                 ADDI   140h,B10
277f0: c02d                      JR     27AD0h
27800: b428 0070                 MOVE   *A1(70h),A8,0
27820: 4868                      CMP    A3,A8
27830: c401                      JRLT   27850h
27840: 4c68                      MOVE   A3,A8
27850: 1823                      MOVK   1h,A3
27860: 6303                      SLL    A8,A3
27870: b261 0100                 MOVE   A3,*A1(100h),1
27890: 09fa 2360 0003            MOVI   32360h,B10
278c0: b428 0070                 MOVE   *A1(70h),A8,0
278e0: 0b48 ffe7                 CMPI   18h,A8
27900: ca1c                      JREQ   27AD0h
27910: 09fb 2360 0003            MOVI   32360h,B11
27940: 4e2c                      MOVE   A1,B12
27950: 0b1c 0140                 ADDI   140h,B12
27970: 0b43 fffd                 CMPI   2h,A3
27990: cb08                      JRNE   27A20h
279a0: 577b                      CLR    B11
279b0: 937c                      MOVE   B11,*B12+,1
279c0: 09fb ffff 00ff            MOVI   FFFFFFh,B11
279f0: 937c                      MOVE   B11,*B12+,1
27a00: 575a                      CLR    B10
27a10: c00b                      JR     27AD0h
27a20: 0548                      SETF   8h,0,0
27a30: 957a                      MOVE   *B11+,B10,0
27a40: 957d                      MOVE   *B11+,B13,0
27a50: 957e                      MOVE   *B11+,B14,0
27a60: 91dc                      MOVE   B14,*B12+,0
27a70: 91bc                      MOVE   B13,*B12+,0
27a80: 915c                      MOVE   B10,*B12+,0
27a90: 997c                      MOVE   *B11+,*B12+,0
27aa0: 3d03                      DSJS   A3,27A30h
27ab0: 0550                      SETF   10h,0,0
27ac0: 575a                      CLR    B10
27ad0: 079a 14a0 0007            MOVE   B10,@714A0h,1
27b00: 5684                      CLR    A4
27b10: 24a4                      SLL    5h,A4
27b20: 0b24 9d60 0002            ADDI   29D60h,A4
27b50: 8684                      MOVE   *A4,A4,1
27b60: b628 0080                 MOVE   *A1(80h),A8,1
27b80: 27c8                      SLL    1Eh,A8
27b90: 2c48                      SRL    1Eh,A8
27ba0: ca08                      JREQ   27C30h
27bb0: 09e4 e6e0 0002            MOVI   2E6E0h,A4
27be0: 1428                      DEC    A8
27bf0: ca03                      JREQ   27C30h
27c00: 09e4 e660 0002            MOVI   2E660h,A4
27c30: b403 0080                 MOVE   *A0(80h),A3,0
27c50: d703                      EXGF   A3,1
27c60: b428 0070                 MOVE   *A1(70h),A8,0
27c80: 0588 0150 c000            MOVE   A8,@C0000150h,0
27cb0: d508                      EXGF   A8,0
27cc0: 0924                      CALL   A4
27cd0: 0188                      GETST  A8
27ce0: 0740                      SETF   20h,0,1
27cf0: 0550                      SETF   10h,0,0
27d00: 4ef3                      MOVE   B7,A3
27d10: 2e03                      SRL    10h,A3
27d20: 2603                      SLL    10h,A3
27d30: e262                      SUBXY  A3,A2
27d40: c219                      JRLS   27EE0h
27d50: 0788 1470 0007            MOVE   A8,@71470h,1
27d80: 0791 1430 0007            MOVE   B1,@71430h,1
27db0: 0793 1450 0007            MOVE   B3,@71450h,1
27de0: 0784 1410 0007            MOVE   A4,@71410h,1
27e10: 0782 13f0 0007            MOVE   A2,@713F0h,1
27e40: b608 00b0                 MOVE   *A0(B0h),A8,1
27e60: 0788 13b0 0007            MOVE   A8,@713B0h,1
27e90: b608 00d0                 MOVE   *A0(D0h),A8,1
27eb0: 0788 13d0 0007            MOVE   A8,@713D0h,1
27ee0: 4ef8                      MOVE   B7,A8
27ef0: 2e08                      SRL    10h,A8
27f00: 0586 0150 c000            MOVE   A6,@C0000150h,0
27f30: 09bf 0088                 MMFM   SP,B3,B7
27f50: 09af 007e                 MMFM   SP,A1-A6
27f70: 0960                      RETS   

DIBgetcont:
27f80: 098f 7e00                 MMTM   SP,A1-A6
27fa0: 099f 1100                 MMTM   SP,B3,B7
27fc0: 0550                      SETF   10h,0,0
27fd0: 05a6 0150 c000            MOVE   @C0000150h,A6,0
28000: 8408                      MOVE   *A0,A8,0
28010: 07a2 13f0 0007            MOVE   @713F0h,A2,1
28040: 4e47                      MOVE   A2,B7
28050: 4f0b                      MOVE   A8,B11
28060: 261b                      SLL    10h,B11
28070: ef77                      MOVY   B11,B7
28080: 07b0 13b0 0007            MOVE   @713B0h,B0,1
280b0: 07b1 1430 0007            MOVE   @71430h,B1,1
280e0: 07b2 13d0 0007            MOVE   @713D0h,B2,1
28110: 07b3 1450 0007            MOVE   @71450h,B3,1
28140: 07a4 1410 0007            MOVE   @71410h,A4,1
28170: 05a8 1490 0007            MOVE   @71490h,A8,0
281a0: cb07                      JRNE   28220h
281b0: 4cfb                      MOVE   B7,B11
281c0: 2e1b                      SRL    10h,B11
281d0: 143b                      DEC    B11
281e0: 03b1                      NEG    B1
281f0: 5e3b                      MPYU   B1,B11
28200: 03b1                      NEG    B1
28210: 4170                      ADD    B11,B0
28220: 07ba 14a0 0007            MOVE   @714A0h,B10,1
28250: 07a8 1470 0007            MOVE   @71470h,A8,1
28280: 01a8                      PUTST  A8
28290: 1a08                      MOVK   10h,A8
282a0: d508                      EXGF   A8,0
282b0: 0588 0150 c000            MOVE   A8,@C0000150h,0
282e0: d508                      EXGF   A8,0
282f0: 0924                      CALL   A4
28300: 0740                      SETF   20h,0,1
28310: 0550                      SETF   10h,0,0
28320: 4ef8                      MOVE   B7,A8
28330: 2e08                      SRL    10h,A8
28340: 2608                      SLL    10h,A8
28350: e302                      SUBXY  A8,A2
28360: c203                      JRLS   283A0h
28370: 0782 13f0 0007            MOVE   A2,@713F0h,1
283a0: 4ef8                      MOVE   B7,A8
283b0: 2e08                      SRL    10h,A8
283c0: 0586 0150 c000            MOVE   A6,@C0000150h,0
283f0: 09bf 0088                 MMFM   SP,B3,B7
28410: 09af 007e                 MMFM   SP,A1-A6
28430: 0960                      RETS   

_DIBToDevStart:
28440: 098f fe00                 MMTM   SP,A0-A6
28460: 099f 1104                 MMTM   SP,B3,B7,B13
28480: 0550                      SETF   10h,0,0
28490: a7c0                      MOVE   -*A14,A0,1
284a0: b601 00b0                 MOVE   *A0(B0h),A1,1
284c0: b604 0020                 MOVE   *A0(20h),A4,1
284e0: b402 0060                 MOVE   *A0(60h),A2,0
28500: 4e87                      MOVE   A4,B7
28510: 4e4a                      MOVE   A2,B10
28520: 261a                      SLL    10h,B10
28530: ef57                      MOVY   B10,B7
28540: 4e0a                      MOVE   A0,B10
28550: b750 00d0                 MOVE   *B10(D0h),B0,1
28570: b752 0000                 MOVE   *B10(0h),B2,1
28590: b55b 0040                 MOVE   *B10(40h),B11,0
285b0: 261b                      SLL    10h,B11
285c0: e372                      SUBXY  B11,B2
285d0: 4e2a                      MOVE   A1,B10
285e0: b551 0020                 MOVE   *B10(20h),B1,0
28600: b55b 0070                 MOVE   *B10(70h),B11,0
28620: 4f78                      MOVE   B11,A8
28630: 0750                      SETF   10h,0,1
28640: 5f71                      MPYU   B11,B1
28650: 0740                      SETF   20h,0,1
28660: 1bfb                      MOVK   1Fh,B11
28670: 4171                      ADD    B11,B1
28680: 5371                      ANDN   B11,B1
28690: 4e8b                      MOVE   A4,B11
286a0: 2e1b                      SRL    10h,B11
286b0: 143b                      DEC    B11
286c0: 261b                      SLL    10h,B11
286d0: e172                      ADDXY  B11,B2
286e0: 4e57                      MOVE   B2,A7
286f0: 03b3                      NEG    B3
28700: 1823                      MOVK   1h,A3
28710: 6303                      SLL    A8,A3
28720: 0b48 ffe7                 CMPI   18h,A8
28740: ca12                      JREQ   28870h
28750: b628 0100                 MOVE   *A1(100h),A8,1
28770: ca01                      JREQ   28790h
28780: 4d03                      MOVE   A8,A3
28790: a3cf                      MOVE   A14,-*SP,1
287a0: 926e                      MOVE   A3,*A14+,1
287b0: 09e3 14d0 0007            MOVI   714D0h,A3
287e0: 926e                      MOVE   A3,*A14+,1
287f0: 4c23                      MOVE   A1,A3
28800: 0b03 0140                 ADDI   140h,A3
28820: 926e                      MOVE   A3,*A14+,1
28830: 0d5f 99e0 0002            CALLA  299E0h
28860: 0550                      SETF   10h,0,0
28870: b628 0080                 MOVE   *A1(80h),A8,1
28890: 27c8                      SLL    1Eh,A8
288a0: 2c48                      SRL    1Eh,A8
288b0: ca2a                      JREQ   28B60h
288c0: 1428                      DEC    A8
288d0: ca14                      JREQ   28A20h
288e0: 56a5                      CLR    A5
288f0: 4e4b                      MOVE   A2,B11
28900: 261b                      SLL    10h,B11
28910: ef77                      MOVY   B11,B7
28920: 09fa 14d0 0007            MOVI   714D0h,B10
28950: 4ee2                      MOVE   A7,B2
28960: 05a3 0150 c000            MOVE   @C0000150h,A3,0
28990: d703                      EXGF   A3,1
289a0: b428 0070                 MOVE   *A1(70h),A8,0
289c0: d508                      EXGF   A8,0
289d0: 09e6 cd60 0002            MOVI   2CD60h,A6
28a00: 0926                      CALL   A6
28a10: c054                      JR     28F60h
28a20: 56a5                      CLR    A5
28a30: 4e4b                      MOVE   A2,B11
28a40: 261b                      SLL    10h,B11
28a50: ef77                      MOVY   B11,B7
28a60: 09fa 14d0 0007            MOVI   714D0h,B10
28a90: 4ee2                      MOVE   A7,B2
28aa0: 05a3 0150 c000            MOVE   @C0000150h,A3,0
28ad0: d703                      EXGF   A3,1
28ae0: b428 0070                 MOVE   *A1(70h),A8,0
28b00: d508                      EXGF   A8,0
28b10: 09e6 d410 0002            MOVI   2D410h,A6
28b40: 0926                      CALL   A6
28b50: c040                      JR     28F60h
28b60: 1826                      MOVK   1h,A6
28b70: 24a6                      SLL    5h,A6
28b80: 0b26 9d20 0002            ADDI   29D20h,A6
28bb0: 86c6                      MOVE   *A6,A6,1
28bc0: 05a8 6640 0006            MOVE   @66640h,A8,0
28bf0: ca04                      JREQ   28C40h
28c00: 09fa 0001 0001            MOVI   10001h,B10
28c30: e356                      SUBXY  B10,B6
28c40: eeb2                      MOVY   B5,B2
28c50: 0537                      ZEXT   B7,0
28c60: 4ef3                      MOVE   B7,A3
28c70: 0bb7 0000 0001            ORI    10000h,B7
28ca0: 0542                      SETF   2h,0,0
28cb0: 05a8 00b6 c000            MOVE   @C00000B6h,A8,0
28ce0: 183a                      MOVK   1h,B10
28cf0: 059a 00b6 c000            MOVE   B10,@C00000B6h,0
28d20: 855a                      MOVE   *B10,B10,0
28d30: a21f                      MOVE   B0,-*SP,1
28d40: 0fe0                      FILL   XY
28d50: 97f0                      MOVE   *SP+,B0,1
28d60: 0588 00b6 c000            MOVE   A8,@C00000B6h,0
28d90: 0550                      SETF   10h,0,0
28da0: 4ef8                      MOVE   B7,A8
28db0: ed04                      MOVX   A8,A4
28dc0: 4e58                      MOVE   B2,A8
28dd0: e2e8                      SUBXY  A7,A8
28de0: 4e53                      MOVE   B2,A3
28df0: ec67                      MOVX   A3,A7
28e00: 0528                      ZEXT   A8,0
28e10: 4d05                      MOVE   A8,A5
28e20: b428 0070                 MOVE   *A1(70h),A8,0
28e40: 5f05                      MPYU   A8,A5
28e50: 4eab                      MOVE   A5,B11
28e60: 4170                      ADD    B11,B0
28e70: 4e4b                      MOVE   A2,B11
28e80: 261b                      SLL    10h,B11
28e90: ef77                      MOVY   B11,B7
28ea0: 09fa 14d0 0007            MOVI   714D0h,B10
28ed0: 4ee2                      MOVE   A7,B2
28ee0: 05a3 0150 c000            MOVE   @C0000150h,A3,0
28f10: d703                      EXGF   A3,1
28f20: b428 0070                 MOVE   *A1(70h),A8,0
28f40: d508                      EXGF   A8,0
28f50: 0926                      CALL   A6
28f60: 0188                      GETST  A8
28f70: 0740                      SETF   20h,0,1
28f80: 0550                      SETF   10h,0,0
28f90: 4ef3                      MOVE   B7,A3
28fa0: 2e03                      SRL    10h,A3
28fb0: 2603                      SLL    10h,A3
28fc0: e267                      SUBXY  A3,A7
28fd0: e264                      SUBXY  A3,A4
28fe0: c219                      JRLS   29180h
28ff0: 0788 1d70 0007            MOVE   A8,@71D70h,1
29020: 0784 1cf0 0007            MOVE   A4,@71CF0h,1
29050: b608 00d0                 MOVE   *A0(D0h),A8,1
29070: 40a8                      ADD    A5,A8
29080: 0788 1cd0 0007            MOVE   A8,@71CD0h,1
290b0: 0787 1d90 0007            MOVE   A7,@71D90h,1
290e0: 0786 1d10 0007            MOVE   A6,@71D10h,1
29110: 0791 1d30 0007            MOVE   B1,@71D30h,1
29140: 0793 1d50 0007            MOVE   B3,@71D50h,1
29170: c00c                      JR     29240h
29180: 05a8 6640 0006            MOVE   @66640h,A8,0
291b0: ca08                      JREQ   29240h
291c0: 5708                      CLR    A8
291d0: 0588 6640 0006            MOVE   A8,@66640h,0
29200: 56b5                      CLR    B5
29210: 07b6 64e0 0006            MOVE   @664E0h,B6,1
29240: 4e4b                      MOVE   A2,B11
29250: 5e3b                      MPYU   B1,B11
29260: 10fb                      ADDK   7h,B11
29270: 2fbb                      SRL    3h,B11
29280: 079b 6680 0006            MOVE   B11,@66680h,1
292b0: 4c48                      MOVE   A2,A8
292c0: 09bf 2088                 MMFM   SP,B3,B7,B13
292e0: 09af 007f                 MMFM   SP,A0-A6
29300: 0962                      RETS   2h

_DIBToDevCont:
29310: 098f fe00                 MMTM   SP,A0-A6
29330: 099f 11c4                 MMTM   SP,B3,B7-B9,B13
29350: 0550                      SETF   10h,0,0
29360: a7c0                      MOVE   -*A14,A0,1
29370: 8402                      MOVE   *A0,A2,0
29380: 07a4 1cf0 0007            MOVE   @71CF0h,A4,1
293b0: 07b0 1cd0 0007            MOVE   @71CD0h,B0,1
293e0: 07a7 1d90 0007            MOVE   @71D90h,A7,1
29410: 4ee2                      MOVE   A7,B2
29420: 07a6 1d10 0007            MOVE   @71D10h,A6,1
29450: 07b1 1d30 0007            MOVE   @71D30h,B1,1
29480: 07b3 1d50 0007            MOVE   @71D50h,B3,1
294b0: 07a8 1d70 0007            MOVE   @71D70h,A8,1
294e0: 4e87                      MOVE   A4,B7
294f0: 4e4b                      MOVE   A2,B11
29500: 261b                      SLL    10h,B11
29510: ef77                      MOVY   B11,B7
29520: 09fa 14d0 0007            MOVI   714D0h,B10
29550: 01a8                      PUTST  A8
29560: 0926                      CALL   A6
29570: 0740                      SETF   20h,0,1
29580: 0550                      SETF   10h,0,0
29590: 4c48                      MOVE   A2,A8
295a0: 2608                      SLL    10h,A8
295b0: e307                      SUBXY  A8,A7
295c0: e304                      SUBXY  A8,A4
295d0: c207                      JRLS   29650h
295e0: 0784 1cf0 0007            MOVE   A4,@71CF0h,1
29610: 0787 1d90 0007            MOVE   A7,@71D90h,1
29640: c00c                      JR     29710h
29650: 05a8 6640 0006            MOVE   @66640h,A8,0
29680: ca08                      JREQ   29710h
29690: 5708                      CLR    A8
296a0: 0588 6640 0006            MOVE   A8,@66640h,0
296d0: 56b5                      CLR    B5
296e0: 07b6 64e0 0006            MOVE   @664E0h,B6,1
29710: 4e4b                      MOVE   A2,B11
29720: 5e3b                      MPYU   B1,B11
29730: 10fb                      ADDK   7h,B11
29740: 2fbb                      SRL    3h,B11
29750: 079b 6680 0006            MOVE   B11,@66680h,1
29780: 4c48                      MOVE   A2,A8
29790: 09bf 2388                 MMFM   SP,B3,B7-B9,B13
297b0: 09af 007f                 MMFM   SP,A0-A6
297d0: 0962                      RETS   2h

_UpdateColors:
297e0: 098f ff00                 MMTM   SP,A0-A7
29800: 0550                      SETF   10h,0,0
29810: a7c8                      MOVE   -*A14,A8,1
29820: b703 0000                 MOVE   *A8(0h),A3,1
29840: b501 0020                 MOVE   *A8(20h),A1,0
29860: b502 0030                 MOVE   *A8(30h),A2,0
29880: b706 0040                 MOVE   *A8(40h),A6,1
298a0: e863                      CVXYL  A3,A3
298b0: 4e74                      MOVE   B3,A4
298c0: 05a0 0150 c000            MOVE   @C0000150h,A0,0
298f0: 4c08                      MOVE   A0,A8
29900: d508                      EXGF   A8,0
29910: 4c27                      MOVE   A1,A7
29920: 4c65                      MOVE   A3,A5
29930: 84a8                      MOVE   *A5,A8,0
29940: 2468                      SLL    3h,A8
29950: 40c8                      ADD    A6,A8
29960: 8905                      MOVE   *A8,*A5,0
29970: 4005                      ADD    A0,A5
29980: 3cc7                      DSJS   A7,29930h
29990: 4083                      ADD    A4,A3
299a0: 3d42                      DSJS   A2,29910h
299b0: 09af 00ff                 MMFM   SP,A0-A7
299d0: 0962                      RETS   2h

_RGB2phys:
299e0: 098f ff40                 MMTM   SP,A0-A7,A9
29a00: 0550                      SETF   10h,0,0
29a10: a7c0                      MOVE   -*A14,A0,1
29a20: a7c1                      MOVE   -*A14,A1,1
29a30: a7c2                      MOVE   -*A14,A2,1
29a40: 05a8 0150 c000            MOVE   @C0000150h,A8,0
29a70: 1508                      SUBK   8h,A8
29a80: cb10                      JRNE   29B90h
29a90: c00a                      JR     29B40h
29aa0: 1507                      SUBK   8h,A7
29ab0: cb08                      JRNE   29B40h
29ac0: 0548                      SETF   8h,0,0
29ad0: 5708                      CLR    A8
29ae0: 09c2 0100                 MOVI   100h,A2
29b00: 9101                      MOVE   A8,*A1+,0
29b10: 1028                      INC    A8
29b20: 3c62                      DSJS   A2,29B00h
29b30: c01b                      JR     29CF0h
29b40: 0548                      SETF   8h,0,0
29b50: 9801                      MOVE   *A0+,*A1+,0
29b60: 1100                      ADDK   8h,A0
29b70: 3c62                      DSJS   A2,29B50h
29b80: c016                      JR     29CF0h
29b90: 5663                      CLR    A3
29ba0: 0548                      SETF   8h,0,0
29bb0: 9406                      MOVE   *A0+,A6,0
29bc0: 9405                      MOVE   *A0+,A5,0
29bd0: 9404                      MOVE   *A0+,A4,0
29be0: 1100                      ADDK   8h,A0
29bf0: a3cf                      MOVE   A14,-*SP,1
29c00: 4cc3                      MOVE   A6,A3
29c10: 40a3                      ADD    A5,A3
29c20: 4083                      ADD    A4,A3
29c30: 1868                      MOVK   3h,A8
29c40: 5b03                      DIVU   A8,A3
29c50: 926e                      MOVE   A3,*A14+,1
29c60: 92ce                      MOVE   A6,*A14+,1
29c70: 92ae                      MOVE   A5,*A14+,1
29c80: 928e                      MOVE   A4,*A14+,1
29c90: 0d5f 0000 0000            CALLA  0h
29cc0: 0548                      SETF   8h,0,0
29cd0: 9101                      MOVE   A8,*A1+,0
29ce0: 3e82                      DSJS   A2,29BB0h
29cf0: 09af 02ff                 MMFM   SP,A0-A7,A9
29d10: 0962                      RETS   2h

_DIBsetsrv:
29d20: 9d80                      MOVB   *A12,*A0
29d30: 0002                      DW     0002h
29d40: a910                      MOVE   -*B8,-*B0,0
29d50: 0002                      DW     0002h

_DIBgetsrv:
29d60: b980 0002 099f            MOVE   *A12(2h),*A0(99Fh),0
29d90: 41c4                      ADD    A14,A4
29da0: d51c                      EXGF   B12,0
29db0: 4d9b                      MOVE   B12,B11
29dc0: d51c                      EXGF   B12,0
29dd0: d71d                      EXGF   B13,1
29de0: 4dbc                      MOVE   B13,B12
29df0: d71d                      EXGF   B13,1
29e00: 6b9c                      LMO    B12,B12
29e10: 03bc                      NEG    B12
29e20: 13fc                      ADDK   1Fh,B12
29e30: 6b7b                      LMO    B11,B11
29e40: 03bb                      NEG    B11
29e50: 13fb                      ADDK   1Fh,B11
29e60: ca07                      JREQ   29EE0h
29e70: 145b                      SUBK   2h,B11
29e80: ca38                      JREQ   2A210h
29e90: 143b                      DEC    B11
29ea0: ca50                      JREQ   2A3B0h
29eb0: 143b                      DEC    B11
29ec0: ca62                      JREQ   2A4F0h
29ed0: c07a                      JR     2A680h
29ee0: 4d9c                      MOVE   B12,B12
29ef0: ca01                      JREQ   29F10h
29f00: c004                      JR     29F50h
29f10: 18fb                      MOVK   7h,B11
29f20: 4177                      ADD    B11,B7
29f30: 5377                      ANDN   B11,B7
29f40: c002                      JR     29F70h
29f50: 0d3f 0299                 CALLR  2C900h
29f70: 098f c000                 MMTM   SP,A0,A1
29f90: 0180                      GETST  A0
29fa0: 0550                      SETF   10h,0,0
29fb0: 05a1 0150 c000            MOVE   @C0000150h,A1,0
29fe0: d71b                      EXGF   B11,1
29ff0: 059b 0150 c000            MOVE   B11,@C0000150h,0
2a020: d71b                      EXGF   B11,1
2a030: 0548                      SETF   8h,0,0
2a040: 8558                      MOVE   *B10,B8,0
2a050: b559 0008                 MOVE   *B10(8h),B9,0
2a070: 183c                      MOVK   1h,B12
2a080: e99c                      CVXYL  B12,B12
2a090: 449c                      SUB    B4,B12
2a0a0: d51c                      EXGF   B12,0
2a0b0: 0539                      ZEXT   B9,0
2a0c0: 0538                      ZEXT   B8,0
2a0d0: d51c                      EXGF   B12,0
2a0e0: 6b9d                      LMO    B12,B13
2a0f0: 175d                      SUBK   1Ah,B13
2a100: 4d3e                      MOVE   B9,B14
2a110: 6399                      SLL    B12,B9
2a120: 55d9                      OR     B14,B9
2a130: 4d1e                      MOVE   B8,B14
2a140: 6398                      SLL    B12,B8
2a150: 55d8                      OR     B14,B8
2a160: 243c                      SLL    1h,B12
2a170: 3d1d                      DSJS   B13,2A100h
2a180: 0f80                      PIXBLT B,L
2a190: 0550                      SETF   10h,0,0
2a1a0: 0581 0150 c000            MOVE   A1,@C0000150h,0
2a1d0: 01a0                      PUTST  A0
2a1e0: 09af 0003                 MMFM   SP,A0,A1
2a200: c047                      JR     2A680h
2a210: 4d9c                      MOVE   B12,B12
2a220: ca05                      JREQ   2A280h
2a230: 145c                      SUBK   2h,B12
2a240: ca0c                      JREQ   2A310h
2a250: 143c                      DEC    B12
2a260: ca0f                      JREQ   2A360h
2a270: c040                      JR     2A680h
2a280: 0d3f 028c                 CALLR  2CB60h
2a2a0: 0d3f 003f                 CALLR  2A6B0h
2a2c0: 4c50                      MOVE   B2,B0
2a2d0: 4c71                      MOVE   B3,B1
2a2e0: 0d3f 0260                 CALLR  2C900h
2a300: c037                      JR     2A680h
2a310: 0d3f 0283                 CALLR  2CB60h
2a330: 0d3f 0036                 CALLR  2A6B0h
2a350: c032                      JR     2A680h
2a360: 0d3f 027e                 CALLR  2CB60h
2a380: 0d3f 0031                 CALLR  2A6B0h
2a3a0: c02d                      JR     2A680h
2a3b0: 4d9c                      MOVE   B12,B12
2a3c0: ca05                      JREQ   2A420h
2a3d0: 145c                      SUBK   2h,B12
2a3e0: ca0a                      JREQ   2A490h
2a3f0: 143c                      DEC    B12
2a400: ca0b                      JREQ   2A4C0h
2a410: c026                      JR     2A680h
2a420: 0d3f 0027                 CALLR  2A6B0h
2a440: 4c50                      MOVE   B2,B0
2a450: 4c71                      MOVE   B3,B1
2a460: 0d3f 0248                 CALLR  2C900h
2a480: c01f                      JR     2A680h
2a490: 0d3f 0020                 CALLR  2A6B0h
2a4b0: c01c                      JR     2A680h
2a4c0: 0d3f 001d                 CALLR  2A6B0h
2a4e0: c019                      JR     2A680h
2a4f0: a30f                      MOVE   A8,-*SP,1
2a500: 5718                      CLR    B8
2a510: 5739                      CLR    B9
2a520: 4cfb                      MOVE   B7,B11
2a530: 2e1b                      SRL    10h,B11
2a540: 2617                      SLL    10h,B7
2a550: 2e17                      SRL    10h,B7
2a560: 4c1c                      MOVE   B0,B12
2a570: 4c5e                      MOVE   B2,B14
2a580: 4cfd                      MOVE   B7,B13
2a590: 959a                      MOVE   *B12+,B10,0
2a5a0: 4958                      CMP    B10,B8
2a5b0: cb06                      JRNE   2A620h
2a5c0: 933e                      MOVE   B9,*B14+,1
2a5d0: 3cbd                      DSJS   B13,2A590h
2a5e0: 4030                      ADD    B1,B0
2a5f0: 4072                      ADD    B3,B2
2a600: 3d7b                      DSJS   B11,2A560h
2a610: c005                      JR     2A670h
2a620: 4d58                      MOVE   B10,B8
2a630: 0d3f 011d                 CALLR  2B820h
2a650: 4f09                      MOVE   A8,B9
2a660: c0f5                      JR     2A5C0h
2a670: 97e8                      MOVE   *SP+,A8,1
2a680: 09bf 2382                 MMFM   SP,B1,B7-B9,B13
2a6a0: 0960                      RETS   
2a6b0: 099f a180                 MMTM   SP,B0,B2,B7,B8
2a6d0: 4cf8                      MOVE   B7,B8
2a6e0: 2e18                      SRL    10h,B8
2a6f0: 2617                      SLL    10h,B7
2a700: 2e17                      SRL    10h,B7
2a710: 4c1c                      MOVE   B0,B12
2a720: 4c5d                      MOVE   B2,B13
2a730: 4cfe                      MOVE   B7,B14
2a740: 959b                      MOVE   *B12+,B11,0
2a750: 247b                      SLL    3h,B11
2a760: 415b                      ADD    B10,B11
2a770: 9b7d                      MOVE   *B11+,*B13+,1
2a780: 3cbe                      DSJS   B14,2A740h
2a790: 4030                      ADD    B1,B0
2a7a0: 4072                      ADD    B3,B2
2a7b0: 3d78                      DSJS   B8,2A710h
2a7c0: 09bf 0185                 MMFM   SP,B0,B2,B7,B8
2a7e0: 0960                      RETS   
2a7f0: 099f a180                 MMTM   SP,B0,B2,B7,B8
2a810: 4cf8                      MOVE   B7,B8
2a820: 2e18                      SRL    10h,B8
2a830: 2617                      SLL    10h,B7
2a840: 2e17                      SRL    10h,B7
2a850: 4c1c                      MOVE   B0,B12
2a860: 4c5d                      MOVE   B2,B13
2a870: 4cfe                      MOVE   B7,B14
2a880: 959b                      MOVE   *B12+,B11,0
2a890: 937d                      MOVE   B11,*B13+,1
2a8a0: 3c7e                      DSJS   B14,2A880h
2a8b0: 4030                      ADD    B1,B0
2a8c0: 4072                      ADD    B3,B2
2a8d0: 3d38                      DSJS   B8,2A850h
2a8e0: 09bf 0185                 MMFM   SP,B0,B2,B7,B8
2a900: 0960                      RETS   
2a910: 099f 01c4                 MMTM   SP,B7-B9,B13
2a930: d51c                      EXGF   B12,0
2a940: 4d9b                      MOVE   B12,B11
2a950: d51c                      EXGF   B12,0
2a960: d71d                      EXGF   B13,1
2a970: 4dbc                      MOVE   B13,B12
2a980: d71d                      EXGF   B13,1
2a990: 6b9c                      LMO    B12,B12
2a9a0: 03bc                      NEG    B12
2a9b0: 13fc                      ADDK   1Fh,B12
2a9c0: 6b7b                      LMO    B11,B11
2a9d0: 03bb                      NEG    B11
2a9e0: 13fb                      ADDK   1Fh,B11
2a9f0: ca08                      JREQ   2AA80h
2aa00: 145b                      SUBK   2h,B11
2aa10: ca4f                      JREQ   2AF10h
2aa20: 143b                      DEC    B11
2aa30: ca63                      JREQ   2B070h
2aa40: 143b                      DEC    B11
2aa50: ca71                      JREQ   2B170h
2aa60: c000 0097                 JR     2B3F0h
2aa80: 0d3f 01e6                 CALLR  2C900h
2aaa0: 098f fc80                 MMTM   SP,A0-A5,A8
2aac0: 0180                      GETST  A0
2aad0: 0550                      SETF   10h,0,0
2aae0: 05a1 0150 c000            MOVE   @C0000150h,A1,0
2ab10: d71b                      EXGF   B11,1
2ab20: 059b 0150 c000            MOVE   B11,@C0000150h,0
2ab50: d71b                      EXGF   B11,1
2ab60: 0548                      SETF   8h,0,0
2ab70: 8558                      MOVE   *B10,B8,0
2ab80: b559 0008                 MOVE   *B10(8h),B9,0
2aba0: 183c                      MOVK   1h,B12
2abb0: e99c                      CVXYL  B12,B12
2abc0: 449c                      SUB    B4,B12
2abd0: d51c                      EXGF   B12,0
2abe0: 0539                      ZEXT   B9,0
2abf0: 0538                      ZEXT   B8,0
2ac00: d51c                      EXGF   B12,0
2ac10: 6b9d                      LMO    B12,B13
2ac20: 175d                      SUBK   1Ah,B13
2ac30: 4d3e                      MOVE   B9,B14
2ac40: 6399                      SLL    B12,B9
2ac50: 55d9                      OR     B14,B9
2ac60: 4d1e                      MOVE   B8,B14
2ac70: 6398                      SLL    B12,B8
2ac80: 55d8                      OR     B14,B8
2ac90: 243c                      SLL    1h,B12
2aca0: 3d1d                      DSJS   B13,2AC30h
2acb0: 4e53                      MOVE   B2,A3
2acc0: 03b3                      NEG    B3
2acd0: e852                      CVXYL  B2,B2
2ace0: 03b3                      NEG    B3
2acf0: 4ef2                      MOVE   B7,A2
2ad00: 2e02                      SRL    10h,A2
2ad10: 2617                      SLL    10h,B7
2ad20: 2e17                      SRL    10h,B7
2ad30: 0bb7 0000 0001            ORI    10000h,B7
2ad60: 4e14                      MOVE   B0,A4
2ad70: 4e55                      MOVE   B2,A5
2ad80: e668                      CPW    A3,A8
2ad90: 0b88 fe7f ffff            ANDI   180h,A8
2adc0: cb03                      JRNE   2AE00h
2add0: 4e80                      MOVE   A4,B0
2ade0: 4ea2                      MOVE   A5,B2
2adf0: 0f80                      PIXBLT B,L
2ae00: 4e38                      MOVE   B1,A8
2ae10: 4104                      ADD    A8,A4
2ae20: 4e78                      MOVE   B3,A8
2ae30: 4105                      ADD    A8,A5
2ae40: 09e8 0000 0001            MOVI   10000h,A8
2ae70: e303                      SUBXY  A8,A3
2ae80: 3e22                      DSJS   A2,2AD80h
2ae90: 0550                      SETF   10h,0,0
2aea0: 0581 0150 c000            MOVE   A1,@C0000150h,0
2aed0: 01a0                      PUTST  A0
2aee0: 09af 013f                 MMFM   SP,A0-A5,A8
2af00: c04e                      JR     2B3F0h
2af10: 4d9c                      MOVE   B12,B12
2af20: ca05                      JREQ   2AF80h
2af30: 145c                      SUBK   2h,B12
2af40: ca08                      JREQ   2AFD0h
2af50: 143c                      DEC    B12
2af60: ca0b                      JREQ   2B020h
2af70: c047                      JR     2B3F0h
2af80: 0d3f 01bc                 CALLR  2CB60h
2afa0: 0d3f 0046                 CALLR  2B420h
2afc0: c042                      JR     2B3F0h
2afd0: 0d3f 01b7                 CALLR  2CB60h
2aff0: 0d3f 0041                 CALLR  2B420h
2b010: c03d                      JR     2B3F0h
2b020: 0d3f 01b2                 CALLR  2CB60h
2b040: 0d3f 003c                 CALLR  2B420h
2b060: c038                      JR     2B3F0h
2b070: 4d9c                      MOVE   B12,B12
2b080: ca05                      JREQ   2B0E0h
2b090: 145c                      SUBK   2h,B12
2b0a0: ca06                      JREQ   2B110h
2b0b0: 143c                      DEC    B12
2b0c0: ca07                      JREQ   2B140h
2b0d0: c031                      JR     2B3F0h
2b0e0: 0d3f 0032                 CALLR  2B420h
2b100: c02e                      JR     2B3F0h
2b110: 0d3f 002f                 CALLR  2B420h
2b130: c02b                      JR     2B3F0h
2b140: 0d3f 002c                 CALLR  2B420h
2b160: c028                      JR     2B3F0h
2b170: 098f 8080                 MMTM   SP,A0,A8
2b190: 5718                      CLR    B8
2b1a0: 5739                      CLR    B9
2b1b0: 4cfb                      MOVE   B7,B11
2b1c0: 2e1b                      SRL    10h,B11
2b1d0: 2617                      SLL    10h,B7
2b1e0: 2e17                      SRL    10h,B7
2b1f0: 4e50                      MOVE   B2,A0
2b200: 03b3                      NEG    B3
2b210: e852                      CVXYL  B2,B2
2b220: 03b3                      NEG    B3
2b230: e608                      CPW    A0,A8
2b240: 0b88 fe7f ffff            ANDI   180h,A8
2b270: cb08                      JRNE   2B300h
2b280: 4c1c                      MOVE   B0,B12
2b290: 4c5e                      MOVE   B2,B14
2b2a0: 4cfd                      MOVE   B7,B13
2b2b0: 959a                      MOVE   *B12+,B10,0
2b2c0: 4958                      CMP    B10,B8
2b2d0: cb0a                      JRNE   2B380h
2b2e0: 933e                      MOVE   B9,*B14+,1
2b2f0: 3cbd                      DSJS   B13,2B2B0h
2b300: 09e8 0000 0001            MOVI   10000h,A8
2b330: e300                      SUBXY  A8,A0
2b340: 4030                      ADD    B1,B0
2b350: 4072                      ADD    B3,B2
2b360: 3e9b                      DSJS   B11,2B230h
2b370: c005                      JR     2B3D0h
2b380: 4d58                      MOVE   B10,B8
2b390: 0d3f 0047                 CALLR  2B820h
2b3b0: 4f09                      MOVE   A8,B9
2b3c0: c0f1                      JR     2B2E0h
2b3d0: 09af 0101                 MMFM   SP,A0,A8
2b3f0: 09bf 2380                 MMFM   SP,B7-B9,B13
2b410: 0960                      RETS   
2b420: 099f a1c0                 MMTM   SP,B0,B2,B7-B9
2b440: 4c59                      MOVE   B2,B9
2b450: 03b3                      NEG    B3
2b460: e852                      CVXYL  B2,B2
2b470: 03b3                      NEG    B3
2b480: 4cf8                      MOVE   B7,B8
2b490: 2e18                      SRL    10h,B8
2b4a0: 2617                      SLL    10h,B7
2b4b0: 2e17                      SRL    10h,B7
2b4c0: e73b                      CPW    B9,B11
2b4d0: 0b9b fe7f ffff            ANDI   180h,B11
2b500: cb08                      JRNE   2B590h
2b510: 4c1c                      MOVE   B0,B12
2b520: 4c5d                      MOVE   B2,B13
2b530: 4cfe                      MOVE   B7,B14
2b540: 959b                      MOVE   *B12+,B11,0
2b550: 247b                      SLL    3h,B11
2b560: 415b                      ADD    B10,B11
2b570: 9b7d                      MOVE   *B11+,*B13+,1
2b580: 3cbe                      DSJS   B14,2B540h
2b590: 09fb 0000 0001            MOVI   10000h,B11
2b5c0: e379                      SUBXY  B11,B9
2b5d0: 4030                      ADD    B1,B0
2b5e0: 4072                      ADD    B3,B2
2b5f0: 3e98                      DSJS   B8,2B4C0h
2b600: 09bf 0385                 MMFM   SP,B0,B2,B7-B9
2b620: 0960                      RETS   
2b630: 099f a1c0                 MMTM   SP,B0,B2,B7-B9
2b650: 4c59                      MOVE   B2,B9
2b660: 03b3                      NEG    B3
2b670: e852                      CVXYL  B2,B2
2b680: 03b3                      NEG    B3
2b690: 4cf8                      MOVE   B7,B8
2b6a0: 2e18                      SRL    10h,B8
2b6b0: 2617                      SLL    10h,B7
2b6c0: 2e17                      SRL    10h,B7
2b6d0: e73b                      CPW    B9,B11
2b6e0: 0b9b fe7f ffff            ANDI   180h,B11
2b710: cb06                      JRNE   2B780h
2b720: 4c1c                      MOVE   B0,B12
2b730: 4c5d                      MOVE   B2,B13
2b740: 4cfe                      MOVE   B7,B14
2b750: 959b                      MOVE   *B12+,B11,0
2b760: 937d                      MOVE   B11,*B13+,1
2b770: 3c7e                      DSJS   B14,2B750h
2b780: 09fb 0000 0001            MOVI   10000h,B11
2b7b0: e379                      SUBXY  B11,B9
2b7c0: 4030                      ADD    B1,B0
2b7d0: 4072                      ADD    B3,B2
2b7e0: 3e58                      DSJS   B8,2B6D0h
2b7f0: 09bf 0385                 MMFM   SP,B0,B2,B7-B9
2b810: 0960                      RETS   
2b820: 019a                      GETST  B10
2b830: 0740                      SETF   20h,0,1
2b840: a3cf                      MOVE   A14,-*SP,1
2b850: 5708                      CLR    A8
2b860: 930e                      MOVE   A8,*A14+,1
2b870: 4f18                      MOVE   B8,A8
2b880: 2708                      SLL    18h,A8
2b890: 2d08                      SRL    18h,A8
2b8a0: 930e                      MOVE   A8,*A14+,1
2b8b0: 4f18                      MOVE   B8,A8
2b8c0: 2608                      SLL    10h,A8
2b8d0: 2d08                      SRL    18h,A8
2b8e0: 930e                      MOVE   A8,*A14+,1
2b8f0: 4f18                      MOVE   B8,A8
2b900: 2508                      SLL    8h,A8
2b910: 2d08                      SRL    18h,A8
2b920: 930e                      MOVE   A8,*A14+,1
2b930: 0d5f 0000 0000            CALLA  0h
2b960: 01ba                      PUTST  B10
2b970: 0960                      RETS   
2b980: 099f 0100                 MMTM   SP,B7
2b9a0: d51c                      EXGF   B12,0
2b9b0: 4d9b                      MOVE   B12,B11
2b9c0: d51c                      EXGF   B12,0
2b9d0: d71d                      EXGF   B13,1
2b9e0: 4dbc                      MOVE   B13,B12
2b9f0: d71d                      EXGF   B13,1
2ba00: 577c                      XOR    B11,B12
2ba10: 579b                      XOR    B12,B11
2ba20: 577c                      XOR    B11,B12
2ba30: 6b9c                      LMO    B12,B12
2ba40: 03bc                      NEG    B12
2ba50: 13fc                      ADDK   1Fh,B12
2ba60: 6b7b                      LMO    B11,B11
2ba70: 03bb                      NEG    B11
2ba80: 13fb                      ADDK   1Fh,B11
2ba90: ca06                      JREQ   2BB00h
2baa0: 145b                      SUBK   2h,B11
2bab0: ca3a                      JREQ   2BE60h
2bac0: 143b                      DEC    B11
2bad0: ca69                      JREQ   2C170h
2bae0: c000 0097                 JR     2C470h
2bb00: 4d9c                      MOVE   B12,B12
2bb10: ca08                      JREQ   2BBA0h
2bb20: 145c                      SUBK   2h,B12
2bb30: ca19                      JREQ   2BCD0h
2bb40: 143c                      DEC    B12
2bb50: ca2a                      JREQ   2BE00h
2bb60: 143c                      DEC    B12
2bb70: ca2b                      JREQ   2BE30h
2bb80: c000 008d                 JR     2C470h
2bba0: 0d3f 00d4                 CALLR  2C900h
2bbc0: 0d3f 00c0                 CALLR  2C7E0h
2bbe0: 5612                      XOR    B0,B2
2bbf0: 5650                      XOR    B2,B0
2bc00: 5612                      XOR    B0,B2
2bc10: 5633                      XOR    B1,B3
2bc20: 5671                      XOR    B3,B1
2bc30: 5633                      XOR    B1,B3
2bc40: 0d3f 00ca                 CALLR  2C900h
2bc60: 5612                      XOR    B0,B2
2bc70: 5650                      XOR    B2,B0
2bc80: 5612                      XOR    B0,B2
2bc90: 5633                      XOR    B1,B3
2bca0: 5671                      XOR    B3,B1
2bcb0: 5633                      XOR    B1,B3
2bcc0: c07a                      JR     2C470h
2bcd0: 0d3f 00c1                 CALLR  2C900h
2bcf0: 0d3f 00ad                 CALLR  2C7E0h
2bd10: 5612                      XOR    B0,B2
2bd20: 5650                      XOR    B2,B0
2bd30: 5612                      XOR    B0,B2
2bd40: 5633                      XOR    B1,B3
2bd50: 5671                      XOR    B3,B1
2bd60: 5633                      XOR    B1,B3
2bd70: 0d3f 00dd                 CALLR  2CB60h
2bd90: 5612                      XOR    B0,B2
2bda0: 5650                      XOR    B2,B0
2bdb0: 5612                      XOR    B0,B2
2bdc0: 5633                      XOR    B1,B3
2bdd0: 5671                      XOR    B3,B1
2bde0: 5633                      XOR    B1,B3
2bdf0: c067                      JR     2C470h
2be00: 0d3f 009c                 CALLR  2C7E0h
2be20: c064                      JR     2C470h
2be30: 0d3f 0085                 CALLR  2C6A0h
2be50: c061                      JR     2C470h
2be60: 4d9c                      MOVE   B12,B12
2be70: ca07                      JREQ   2BEF0h
2be80: 145c                      SUBK   2h,B12
2be90: ca16                      JREQ   2C000h
2bea0: 143c                      DEC    B12
2beb0: ca25                      JREQ   2C110h
2bec0: 143c                      DEC    B12
2bed0: ca26                      JREQ   2C140h
2bee0: c058                      JR     2C470h
2bef0: 0d3f 008d                 CALLR  2C7E0h
2bf10: 5612                      XOR    B0,B2
2bf20: 5650                      XOR    B2,B0
2bf30: 5612                      XOR    B0,B2
2bf40: 5633                      XOR    B1,B3
2bf50: 5671                      XOR    B3,B1
2bf60: 5633                      XOR    B1,B3
2bf70: 0d3f 0097                 CALLR  2C900h
2bf90: 5612                      XOR    B0,B2
2bfa0: 5650                      XOR    B2,B0
2bfb0: 5612                      XOR    B0,B2
2bfc0: 5633                      XOR    B1,B3
2bfd0: 5671                      XOR    B3,B1
2bfe0: 5633                      XOR    B1,B3
2bff0: c047                      JR     2C470h
2c000: 0d3f 007c                 CALLR  2C7E0h
2c020: 5612                      XOR    B0,B2
2c030: 5650                      XOR    B2,B0
2c040: 5612                      XOR    B0,B2
2c050: 5633                      XOR    B1,B3
2c060: 5671                      XOR    B3,B1
2c070: 5633                      XOR    B1,B3
2c080: 0d3f 00ac                 CALLR  2CB60h
2c0a0: 5612                      XOR    B0,B2
2c0b0: 5650                      XOR    B2,B0
2c0c0: 5612                      XOR    B0,B2
2c0d0: 5633                      XOR    B1,B3
2c0e0: 5671                      XOR    B3,B1
2c0f0: 5633                      XOR    B1,B3
2c100: c036                      JR     2C470h
2c110: 0d3f 006b                 CALLR  2C7E0h
2c130: c033                      JR     2C470h
2c140: 0d3f 0054                 CALLR  2C6A0h
2c160: c030                      JR     2C470h
2c170: 4d9c                      MOVE   B12,B12
2c180: ca07                      JREQ   2C200h
2c190: 145c                      SUBK   2h,B12
2c1a0: ca16                      JREQ   2C310h
2c1b0: 143c                      DEC    B12
2c1c0: ca25                      JREQ   2C420h
2c1d0: 143c                      DEC    B12
2c1e0: ca26                      JREQ   2C450h
2c1f0: c027                      JR     2C470h
2c200: 0d3f 0034                 CALLR  2C560h
2c220: 5612                      XOR    B0,B2
2c230: 5650                      XOR    B2,B0
2c240: 5612                      XOR    B0,B2
2c250: 5633                      XOR    B1,B3
2c260: 5671                      XOR    B3,B1
2c270: 5633                      XOR    B1,B3
2c280: 0d3f 0066                 CALLR  2C900h
2c2a0: 5612                      XOR    B0,B2
2c2b0: 5650                      XOR    B2,B0
2c2c0: 5612                      XOR    B0,B2
2c2d0: 5633                      XOR    B1,B3
2c2e0: 5671                      XOR    B3,B1
2c2f0: 5633                      XOR    B1,B3
2c300: c016                      JR     2C470h
2c310: 0d3f 0023                 CALLR  2C560h
2c330: 5612                      XOR    B0,B2
2c340: 5650                      XOR    B2,B0
2c350: 5612                      XOR    B0,B2
2c360: 5633                      XOR    B1,B3
2c370: 5671                      XOR    B3,B1
2c380: 5633                      XOR    B1,B3
2c390: 0d3f 007b                 CALLR  2CB60h
2c3b0: 5612                      XOR    B0,B2
2c3c0: 5650                      XOR    B2,B0
2c3d0: 5612                      XOR    B0,B2
2c3e0: 5633                      XOR    B1,B3
2c3f0: 5671                      XOR    B3,B1
2c400: 5633                      XOR    B1,B3
2c410: c005                      JR     2C470h
2c420: 0d3f 003a                 CALLR  2C7E0h
2c440: c002                      JR     2C470h
2c450: 0d3f 0023                 CALLR  2C6A0h
2c470: 09bf 0080                 MMFM   SP,B7
2c490: 019d                      GETST  B13
2c4a0: 0740                      SETF   20h,0,1
2c4b0: 4cfb                      MOVE   B7,B11
2c4c0: 2e1b                      SRL    10h,B11
2c4d0: 4c7c                      MOVE   B3,B12
2c4e0: 039c                      ABS    B12
2c4f0: 5f9b                      MPYU   B12,B11
2c500: 2fbb                      SRL    3h,B11
2c510: 079b 6680 0006            MOVE   B11,@66680h,1
2c540: 01bd                      PUTST  B13
2c550: 0960                      RETS   
2c560: 099f a180                 MMTM   SP,B0,B2,B7,B8
2c580: 4cf8                      MOVE   B7,B8
2c590: 2e18                      SRL    10h,B8
2c5a0: 2617                      SLL    10h,B7
2c5b0: 2e17                      SRL    10h,B7
2c5c0: 4c1c                      MOVE   B0,B12
2c5d0: 4c5d                      MOVE   B2,B13
2c5e0: 4cfe                      MOVE   B7,B14
2c5f0: 979b                      MOVE   *B12+,B11,1
2c600: 247b                      SLL    3h,B11
2c610: 415b                      ADD    B10,B11
2c620: 997d                      MOVE   *B11+,*B13+,0
2c630: 3cbe                      DSJS   B14,2C5F0h
2c640: 4030                      ADD    B1,B0
2c650: 4072                      ADD    B3,B2
2c660: 3d78                      DSJS   B8,2C5C0h
2c670: 09bf 0185                 MMFM   SP,B0,B2,B7,B8
2c690: 0960                      RETS   
2c6a0: 099f a180                 MMTM   SP,B0,B2,B7,B8
2c6c0: 4cf8                      MOVE   B7,B8
2c6d0: 2e18                      SRL    10h,B8
2c6e0: 2617                      SLL    10h,B7
2c6f0: 2e17                      SRL    10h,B7
2c700: 4c1c                      MOVE   B0,B12
2c710: 4c5d                      MOVE   B2,B13
2c720: 4cfe                      MOVE   B7,B14
2c730: 979b                      MOVE   *B12+,B11,1
2c740: 24bb                      SLL    5h,B11
2c750: 415b                      ADD    B10,B11
2c760: 997d                      MOVE   *B11+,*B13+,0
2c770: 3cbe                      DSJS   B14,2C730h
2c780: 4030                      ADD    B1,B0
2c790: 4072                      ADD    B3,B2
2c7a0: 3d78                      DSJS   B8,2C700h
2c7b0: 09bf 0185                 MMFM   SP,B0,B2,B7,B8
2c7d0: 0960                      RETS   
2c7e0: 099f a180                 MMTM   SP,B0,B2,B7,B8
2c800: 4cf8                      MOVE   B7,B8
2c810: 2e18                      SRL    10h,B8
2c820: 2617                      SLL    10h,B7
2c830: 2e17                      SRL    10h,B7
2c840: 4c1c                      MOVE   B0,B12
2c850: 4c5d                      MOVE   B2,B13
2c860: 4cfe                      MOVE   B7,B14
2c870: 979b                      MOVE   *B12+,B11,1
2c880: 917d                      MOVE   B11,*B13+,0
2c890: 3c7e                      DSJS   B14,2C870h
2c8a0: 4030                      ADD    B1,B0
2c8b0: 4072                      ADD    B3,B2
2c8c0: 3d38                      DSJS   B8,2C840h
2c8d0: 09bf 0185                 MMFM   SP,B0,B2,B7,B8
2c8f0: 0960                      RETS   

swiz1:
2c900: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
2c920: 019a                      GETST  B10
2c930: 0550                      SETF   10h,0,0
2c940: 4cfc                      MOVE   B7,B12
2c950: 2e1c                      SRL    10h,B12
2c960: cb01                      JRNE   2C980h
2c970: 183c                      MOVK   1h,B12
2c980: 4c1b                      MOVE   B0,B11
2c990: 0b9b fff8 ffff            ANDI   7h,B11
2c9c0: 4177                      ADD    B11,B7
2c9d0: 0b90 0007 0000            ANDI   FFFFFFF8h,B0
2ca00: 0537                      ZEXT   B7,0
2ca10: 10f7                      ADDK   7h,B7
2ca20: 2fb7                      SRL    3h,B7
2ca30: 0548                      SETF   8h,0,0
2ca40: 09fd f930 0002            MOVI   2F930h,B13
2ca70: 4c12                      MOVE   B0,B2
2ca80: 4cfe                      MOVE   B7,B14
2ca90: 845b                      MOVE   *B2,B11,0
2caa0: ca03                      JREQ   2CAE0h
2cab0: 247b                      SLL    3h,B11
2cac0: 41bb                      ADD    B13,B11
2cad0: 8972                      MOVE   *B11,*B2,0
2cae0: 1112                      ADDK   8h,B2
2caf0: 3cfe                      DSJS   B14,2CA90h
2cb00: 4030                      ADD    B1,B0
2cb10: 3d7c                      DSJS   B12,2CA70h
2cb20: 01ba                      PUTST  B10
2cb30: 09bf 7c85                 MMFM   SP,B0,B2,B7,B10-B14
2cb50: 0960                      RETS   

swiz4:
2cb60: 099f a13e                 MMTM   SP,B0,B2,B7,B10-B14
2cb80: 019a                      GETST  B10
2cb90: 0550                      SETF   10h,0,0
2cba0: 4cfc                      MOVE   B7,B12
2cbb0: 2e1c                      SRL    10h,B12
2cbc0: cb01                      JRNE   2CBE0h
2cbd0: 183c                      MOVK   1h,B12
2cbe0: 0b90 0007 0000            ANDI   FFFFFFF8h,B0
2cc10: 0537                      ZEXT   B7,0
2cc20: 1037                      INC    B7
2cc30: 2ff7                      SRL    1h,B7
2cc40: 0548                      SETF   8h,0,0
2cc50: 4cfe                      MOVE   B7,B14
2cc60: 4c12                      MOVE   B0,B2
2cc70: 845b                      MOVE   *B2,B11,0
2cc80: ca05                      JREQ   2CCE0h
2cc90: 4d7d                      MOVE   B11,B13
2cca0: 2f9d                      SRL    4h,B13
2ccb0: 249b                      SLL    4h,B11
2ccc0: 55bb                      OR     B13,B11
2ccd0: 8172                      MOVE   B11,*B2,0
2cce0: 1112                      ADDK   8h,B2
2ccf0: 3d3e                      DSJS   B14,2CC70h
2cd00: 4030                      ADD    B1,B0
2cd10: 3dbc                      DSJS   B12,2CC50h
2cd20: 01ba                      PUTST  B10
2cd30: 09bf 7c85                 MMFM   SP,B0,B2,B7,B10-B14
2cd50: 0960                      RETS   

_sdecodeRLE4:
2cd60: 098f f800                 MMTM   SP,A0-A4
2cd80: 099f 11c0                 MMTM   SP,B3,B7-B9
2cda0: 4ef4                      MOVE   B7,A4
2cdb0: 2e04                      SRL    10h,A4
2cdc0: 4d58                      MOVE   B10,B8
2cdd0: 03b3                      NEG    B3
2cde0: 0180                      GETST  A0
2cdf0: d708                      EXGF   A8,1
2ce00: 4d01                      MOVE   A8,A1
2ce10: d708                      EXGF   A8,1
2ce20: 6a22                      LMO    A1,A2
2ce30: 17e2                      SUBK   1Fh,A2
2ce40: 03a2                      NEG    A2
2ce50: 0548                      SETF   8h,0,0
2ce60: 4e53                      MOVE   B2,A3
2ce70: 4e62                      MOVE   A3,B2
2ce80: 941b                      MOVE   *B0+,B11,0
2ce90: ca26                      JREQ   2D100h
2cea0: 4d77                      MOVE   B11,B7
2ceb0: e05b                      ADDXY  B2,B11
2cec0: 4f78                      MOVE   B11,A8
2ced0: 941b                      MOVE   *B0+,B11,0
2cee0: 4d7c                      MOVE   B11,B12
2cef0: 279b                      SLL    1Ch,B11
2cf00: 2cfb                      SRL    19h,B11
2cf10: 2f9c                      SRL    4h,B12
2cf20: 247c                      SLL    3h,B12
2cf30: 411b                      ADD    B8,B11
2cf40: 411c                      ADD    B8,B12
2cf50: 8779                      MOVE   *B11,B9,1
2cf60: 879c                      MOVE   *B12,B12,1
2cf70: 4e2b                      MOVE   A1,B11
2cf80: 6379                      SLL    B11,B9
2cf90: 5599                      OR     B12,B9
2cfa0: d71d                      EXGF   B13,1
2cfb0: 4dbc                      MOVE   B13,B12
2cfc0: d71d                      EXGF   B13,1
2cfd0: 243c                      SLL    1h,B12
2cfe0: 6b9d                      LMO    B12,B13
2cff0: 175d                      SUBK   1Ah,B13
2d000: 4d3e                      MOVE   B9,B14
2d010: 6399                      SLL    B12,B9
2d020: 55d9                      OR     B14,B9
2d030: 243c                      SLL    1h,B12
2d040: 3cbd                      DSJS   B13,2D000h
2d050: 19fb                      MOVK   Fh,B11
2d060: 505b                      AND    B2,B11
2d070: 4e4c                      MOVE   A2,B12
2d080: 639b                      SLL    B12,B11
2d090: 6979                      RL     B11,B9
2d0a0: 0bb7 0000 0001            ORI    10000h,B7
2d0d0: 0fe0                      FILL   XY
2d0e0: 4f02                      MOVE   A8,B2
2d0f0: c0d8                      JR     2CE80h
2d100: 941b                      MOVE   *B0+,B11,0
2d110: ca23                      JREQ   2D350h
2d120: 143b                      DEC    B11
2d130: ca27                      JREQ   2D3B0h
2d140: 143b                      DEC    B11
2d150: ca17                      JREQ   2D2D0h
2d160: 105b                      ADDK   2h,B11
2d170: 4d77                      MOVE   B11,B7
2d180: 941b                      MOVE   *B0+,B11,0
2d190: 4d7c                      MOVE   B11,B12
2d1a0: 279b                      SLL    1Ch,B11
2d1b0: 2cfb                      SRL    19h,B11
2d1c0: 2f9c                      SRL    4h,B12
2d1d0: 247c                      SLL    3h,B12
2d1e0: 411b                      ADD    B8,B11
2d1f0: 411c                      ADD    B8,B12
2d200: 8799                      MOVE   *B12,B9,1
2d210: f132                      PIXT   B9,*B2,XY
2d220: 1032                      INC    B2
2d230: 1437                      DEC    B7
2d240: ca04                      JREQ   2D290h
2d250: 8779                      MOVE   *B11,B9,1
2d260: f132                      PIXT   B9,*B2,XY
2d270: 1032                      INC    B2
2d280: 3e37                      DSJS   B7,2D180h
2d290: 19fb                      MOVK   Fh,B11
2d2a0: 4170                      ADD    B11,B0
2d2b0: 5370                      ANDN   B11,B0
2d2c0: c0bb                      JR     2CE80h
2d2d0: 941b                      MOVE   *B0+,B11,0
2d2e0: e172                      ADDXY  B11,B2
2d2f0: 941b                      MOVE   *B0+,B11,0
2d300: 261b                      SLL    10h,B11
2d310: e372                      SUBXY  B11,B2
2d320: 4f78                      MOVE   B11,A8
2d330: e303                      SUBXY  A8,A3
2d340: c0b3                      JR     2CE80h
2d350: 09e8 0000 0001            MOVI   10000h,A8
2d380: e303                      SUBXY  A8,A3
2d390: 0d84 ffac                 DSJ    A4,2CE70h
2d3b0: 01a0                      PUTST  A0
2d3c0: 09bf 0388                 MMFM   SP,B3,B7-B9
2d3e0: 09af 001f                 MMFM   SP,A0-A4
2d400: 0960                      RETS   

_sdecodeRLE8:
2d410: 098f f800                 MMTM   SP,A0-A4
2d430: 099f 11c0                 MMTM   SP,B3,B7-B9
2d450: 4ef4                      MOVE   B7,A4
2d460: 2e04                      SRL    10h,A4
2d470: 4d58                      MOVE   B10,B8
2d480: 03b3                      NEG    B3
2d490: 0180                      GETST  A0
2d4a0: d708                      EXGF   A8,1
2d4b0: 4d01                      MOVE   A8,A1
2d4c0: d708                      EXGF   A8,1
2d4d0: 6a22                      LMO    A1,A2
2d4e0: 17e2                      SUBK   1Fh,A2
2d4f0: 03a2                      NEG    A2
2d500: 0548                      SETF   8h,0,0
2d510: 4e53                      MOVE   B2,A3
2d520: 4e62                      MOVE   A3,B2
2d530: 941b                      MOVE   *B0+,B11,0
2d540: ca17                      JREQ   2D6C0h
2d550: 4d77                      MOVE   B11,B7
2d560: e05b                      ADDXY  B2,B11
2d570: 4f78                      MOVE   B11,A8
2d580: 941b                      MOVE   *B0+,B11,0
2d590: 247b                      SLL    3h,B11
2d5a0: 411b                      ADD    B8,B11
2d5b0: 8779                      MOVE   *B11,B9,1
2d5c0: d71d                      EXGF   B13,1
2d5d0: 4dbc                      MOVE   B13,B12
2d5e0: d71d                      EXGF   B13,1
2d5f0: 6b9d                      LMO    B12,B13
2d600: 175d                      SUBK   1Ah,B13
2d610: 4d3e                      MOVE   B9,B14
2d620: 6399                      SLL    B12,B9
2d630: 55d9                      OR     B14,B9
2d640: 243c                      SLL    1h,B12
2d650: 3cbd                      DSJS   B13,2D610h
2d660: 0bb7 0000 0001            ORI    10000h,B7
2d690: 0fe0                      FILL   XY
2d6a0: 4f02                      MOVE   A8,B2
2d6b0: c0e7                      JR     2D530h
2d6c0: 941b                      MOVE   *B0+,B11,0
2d6d0: ca1a                      JREQ   2D880h
2d6e0: 143b                      DEC    B11
2d6f0: ca1e                      JREQ   2D8E0h
2d700: 143b                      DEC    B11
2d710: ca0e                      JREQ   2D800h
2d720: 105b                      ADDK   2h,B11
2d730: 4d77                      MOVE   B11,B7
2d740: 4d7e                      MOVE   B11,B14
2d750: 941b                      MOVE   *B0+,B11,0
2d760: 247b                      SLL    3h,B11
2d770: 411b                      ADD    B8,B11
2d780: 8779                      MOVE   *B11,B9,1
2d790: f132                      PIXT   B9,*B2,XY
2d7a0: 1032                      INC    B2
2d7b0: 3cf7                      DSJS   B7,2D750h
2d7c0: 19fb                      MOVK   Fh,B11
2d7d0: 4170                      ADD    B11,B0
2d7e0: 5370                      ANDN   B11,B0
2d7f0: c0d3                      JR     2D530h
2d800: 941b                      MOVE   *B0+,B11,0
2d810: e172                      ADDXY  B11,B2
2d820: 941b                      MOVE   *B0+,B11,0
2d830: 261b                      SLL    10h,B11
2d840: e372                      SUBXY  B11,B2
2d850: 4f78                      MOVE   B11,A8
2d860: e303                      SUBXY  A8,A3
2d870: c0cb                      JR     2D530h
2d880: 09e8 0000 0001            MOVI   10000h,A8
2d8b0: e303                      SUBXY  A8,A3
2d8c0: 0d84 ffc4                 DSJ    A4,2D520h
2d8e0: 01a0                      PUTST  A0
2d8f0: 09bf 0388                 MMFM   SP,B3,B7-B9
2d910: 09af 001f                 MMFM   SP,A0-A4
2d930: 0960                      RETS   

_mdecodeRLE4:
2d940: 098f f800                 MMTM   SP,A0-A4
2d960: 099f 11c0                 MMTM   SP,B3,B7-B9
2d980: 4ef4                      MOVE   B7,A4
2d990: 2e04                      SRL    10h,A4
2d9a0: 4d58                      MOVE   B10,B8
2d9b0: 0180                      GETST  A0
2d9c0: d708                      EXGF   A8,1
2d9d0: 4d01                      MOVE   A8,A1
2d9e0: d708                      EXGF   A8,1
2d9f0: 6a22                      LMO    A1,A2
2da00: 17e2                      SUBK   1Fh,A2
2da10: 03a2                      NEG    A2
2da20: 0548                      SETF   8h,0,0
2da30: 4e53                      MOVE   B2,A3
2da40: 4e62                      MOVE   A3,B2
2da50: 941b                      MOVE   *B0+,B11,0
2da60: ca2b                      JREQ   2DD20h
2da70: 4d77                      MOVE   B11,B7
2da80: 4e2c                      MOVE   A1,B12
2da90: 6b9c                      LMO    B12,B12
2daa0: 17fc                      SUBK   1Fh,B12
2dab0: 03bc                      NEG    B12
2dac0: 639b                      SLL    B12,B11
2dad0: 405b                      ADD    B2,B11
2dae0: 4f78                      MOVE   B11,A8
2daf0: 941b                      MOVE   *B0+,B11,0
2db00: 4d7c                      MOVE   B11,B12
2db10: 279b                      SLL    1Ch,B11
2db20: 2cfb                      SRL    19h,B11
2db30: 2f9c                      SRL    4h,B12
2db40: 247c                      SLL    3h,B12
2db50: 411b                      ADD    B8,B11
2db60: 411c                      ADD    B8,B12
2db70: 8779                      MOVE   *B11,B9,1
2db80: 879c                      MOVE   *B12,B12,1
2db90: 4e2b                      MOVE   A1,B11
2dba0: 6379                      SLL    B11,B9
2dbb0: 5599                      OR     B12,B9
2dbc0: d71d                      EXGF   B13,1
2dbd0: 4dbc                      MOVE   B13,B12
2dbe0: d71d                      EXGF   B13,1
2dbf0: 243c                      SLL    1h,B12
2dc00: 6b9d                      LMO    B12,B13
2dc10: 175d                      SUBK   1Ah,B13
2dc20: 4d3e                      MOVE   B9,B14
2dc30: 6399                      SLL    B12,B9
2dc40: 55d9                      OR     B14,B9
2dc50: 243c                      SLL    1h,B12
2dc60: 3cbd                      DSJS   B13,2DC20h
2dc70: 19fb                      MOVK   Fh,B11
2dc80: 505b                      AND    B2,B11
2dc90: 4e4c                      MOVE   A2,B12
2dca0: 639b                      SLL    B12,B11
2dcb0: 6979                      RL     B11,B9
2dcc0: 0bb7 0000 0001            ORI    10000h,B7
2dcf0: 0fc0                      FILL   L
2dd00: 4f02                      MOVE   A8,B2
2dd10: c0d3                      JR     2DA50h
2dd20: 941b                      MOVE   *B0+,B11,0
2dd30: ca2b                      JREQ   2DFF0h
2dd40: 143b                      DEC    B11
2dd50: ca2d                      JREQ   2E030h
2dd60: 143b                      DEC    B11
2dd70: ca18                      JREQ   2DF00h
2dd80: 105b                      ADDK   2h,B11
2dd90: 4d77                      MOVE   B11,B7
2dda0: 941b                      MOVE   *B0+,B11,0
2ddb0: 4d7c                      MOVE   B11,B12
2ddc0: 279b                      SLL    1Ch,B11
2ddd0: 2cfb                      SRL    19h,B11
2dde0: 2f9c                      SRL    4h,B12
2ddf0: 247c                      SLL    3h,B12
2de00: 411b                      ADD    B8,B11
2de10: 411c                      ADD    B8,B12
2de20: 8799                      MOVE   *B12,B9,1
2de30: f932                      PIXT   B9,*B2
2de40: 4e2c                      MOVE   A1,B12
2de50: 4192                      ADD    B12,B2
2de60: 1437                      DEC    B7
2de70: ca04                      JREQ   2DEC0h
2de80: 8779                      MOVE   *B11,B9,1
2de90: f932                      PIXT   B9,*B2
2dea0: 4192                      ADD    B12,B2
2deb0: 3e57                      DSJS   B7,2DDA0h
2dec0: 19fb                      MOVK   Fh,B11
2ded0: 4170                      ADD    B11,B0
2dee0: 5370                      ANDN   B11,B0
2def0: c0b5                      JR     2DA50h
2df00: 941b                      MOVE   *B0+,B11,0
2df10: 4e2c                      MOVE   A1,B12
2df20: 6b9c                      LMO    B12,B12
2df30: 17fc                      SUBK   1Fh,B12
2df40: 03bc                      NEG    B12
2df50: 639b                      SLL    B12,B11
2df60: 4172                      ADD    B11,B2
2df70: 941b                      MOVE   *B0+,B11,0
2df80: 03b3                      NEG    B3
2df90: 5e7b                      MPYU   B3,B11
2dfa0: 03b3                      NEG    B3
2dfb0: 4572                      SUB    B11,B2
2dfc0: 4f78                      MOVE   B11,A8
2dfd0: 4503                      SUB    A8,A3
2dfe0: c0a6                      JR     2DA50h
2dff0: 4e78                      MOVE   B3,A8
2e000: 4103                      ADD    A8,A3
2e010: 0d84 ffa1                 DSJ    A4,2DA40h
2e030: 01a0                      PUTST  A0
2e040: 09bf 0388                 MMFM   SP,B3,B7-B9
2e060: 09af 001f                 MMFM   SP,A0-A4
2e080: 0960                      RETS   

_mdecodeRLE8:
2e090: 098f f800                 MMTM   SP,A0-A4
2e0b0: 099f 11c0                 MMTM   SP,B3,B7-B9
2e0d0: 4ef4                      MOVE   B7,A4
2e0e0: 2e04                      SRL    10h,A4
2e0f0: 4d58                      MOVE   B10,B8
2e100: 0180                      GETST  A0
2e110: d708                      EXGF   A8,1
2e120: 4d01                      MOVE   A8,A1
2e130: d708                      EXGF   A8,1
2e140: 6a22                      LMO    A1,A2
2e150: 17e2                      SUBK   1Fh,A2
2e160: 03a2                      NEG    A2
2e170: 0548                      SETF   8h,0,0
2e180: 4e53                      MOVE   B2,A3
2e190: 4e62                      MOVE   A3,B2
2e1a0: 941b                      MOVE   *B0+,B11,0
2e1b0: ca1c                      JREQ   2E380h
2e1c0: 4d77                      MOVE   B11,B7
2e1d0: 4e2c                      MOVE   A1,B12
2e1e0: 6b9c                      LMO    B12,B12
2e1f0: 17fc                      SUBK   1Fh,B12
2e200: 03bc                      NEG    B12
2e210: 639b                      SLL    B12,B11
2e220: 405b                      ADD    B2,B11
2e230: 4f78                      MOVE   B11,A8
2e240: 941b                      MOVE   *B0+,B11,0
2e250: 247b                      SLL    3h,B11
2e260: 411b                      ADD    B8,B11
2e270: 8779                      MOVE   *B11,B9,1
2e280: d71d                      EXGF   B13,1
2e290: 4dbc                      MOVE   B13,B12
2e2a0: d71d                      EXGF   B13,1
2e2b0: 6b9d                      LMO    B12,B13
2e2c0: 175d                      SUBK   1Ah,B13
2e2d0: 4d3e                      MOVE   B9,B14
2e2e0: 6399                      SLL    B12,B9
2e2f0: 55d9                      OR     B14,B9
2e300: 243c                      SLL    1h,B12
2e310: 3cbd                      DSJS   B13,2E2D0h
2e320: 0bb7 0000 0001            ORI    10000h,B7
2e350: 0fc0                      FILL   L
2e360: 4f02                      MOVE   A8,B2
2e370: c0e2                      JR     2E1A0h
2e380: 941b                      MOVE   *B0+,B11,0
2e390: ca22                      JREQ   2E5C0h
2e3a0: 143b                      DEC    B11
2e3b0: ca24                      JREQ   2E600h
2e3c0: 143b                      DEC    B11
2e3d0: ca0f                      JREQ   2E4D0h
2e3e0: 105b                      ADDK   2h,B11
2e3f0: 4d77                      MOVE   B11,B7
2e400: 4d7e                      MOVE   B11,B14
2e410: 941b                      MOVE   *B0+,B11,0
2e420: 247b                      SLL    3h,B11
2e430: 411b                      ADD    B8,B11
2e440: 8779                      MOVE   *B11,B9,1
2e450: f932                      PIXT   B9,*B2
2e460: 4e2b                      MOVE   A1,B11
2e470: 4172                      ADD    B11,B2
2e480: 3d17                      DSJS   B7,2E410h
2e490: 1ffe                      BTST   0h,B14
2e4a0: ca01                      JREQ   2E4C0h
2e4b0: 941b                      MOVE   *B0+,B11,0
2e4c0: c0cd                      JR     2E1A0h
2e4d0: 941b                      MOVE   *B0+,B11,0
2e4e0: 4e2c                      MOVE   A1,B12
2e4f0: 6b9c                      LMO    B12,B12
2e500: 17fc                      SUBK   1Fh,B12
2e510: 03bc                      NEG    B12
2e520: 639b                      SLL    B12,B11
2e530: 4172                      ADD    B11,B2
2e540: 941b                      MOVE   *B0+,B11,0
2e550: 03b3                      NEG    B3
2e560: 5e7b                      MPYU   B3,B11
2e570: 03b3                      NEG    B3
2e580: 4572                      SUB    B11,B2
2e590: 4f78                      MOVE   B11,A8
2e5a0: 4503                      SUB    A8,A3
2e5b0: c0be                      JR     2E1A0h
2e5c0: 4e78                      MOVE   B3,A8
2e5d0: 4103                      ADD    A8,A3
2e5e0: 0d84 ffb9                 DSJ    A4,2E190h
2e600: 01a0                      PUTST  A0
2e610: 09bf 0388                 MMFM   SP,B3,B7-B9
2e630: 09af 001f                 MMFM   SP,A0-A4
2e650: 0960                      RETS   

_encodeRLE4:
2e660: 098f ff70                 MMTM   SP,A0-A7,A9-A11
2e680: 099f 1100                 MMTM   SP,B3,B7
2e6a0: 09e7 f2d0 0002            MOVI   2F2D0h,A7
2e6d0: c007                      JR     2E750h

_encodeRLE8:
2e6e0: 098f ff70                 MMTM   SP,A0-A7,A9-A11
2e700: 099f 1100                 MMTM   SP,B3,B7
2e720: 09e7 e990 0002            MOVI   2E990h,A7
2e750: 4f54                      MOVE   B10,A4
2e760: 56c6                      CLR    A6
2e770: 0180                      GETST  A0
2e780: d708                      EXGF   A8,1
2e790: 4f0e                      MOVE   A8,B14
2e7a0: d508                      EXGF   A8,0
2e7b0: d708                      EXGF   A8,1
2e7c0: d51e                      EXGF   B14,0
2e7d0: 4ef2                      MOVE   B7,A2
2e7e0: 2e02                      SRL    10h,A2
2e7f0: 2617                      SLL    10h,B7
2e800: 2e17                      SRL    10h,B7
2e810: 4e11                      MOVE   B0,A1
2e820: 4e33                      MOVE   B1,A3
2e830: 2fb3                      SRL    3h,B3
2e840: 4e20                      MOVE   A1,B0
2e850: 0927                      CALL   A7
2e860: 4106                      ADD    A8,A6
2e870: 4061                      ADD    A3,A1
2e880: 3ca2                      DSJS   A2,2E840h
2e890: 577b                      CLR    B11
2e8a0: 9372                      MOVE   B11,*B2+,1
2e8b0: 183b                      MOVK   1h,B11
2e8c0: 9372                      MOVE   B11,*B2+,1
2e8d0: 1046                      ADDK   2h,A6
2e8e0: 0550                      SETF   10h,0,0
2e8f0: 0740                      SETF   20h,0,1
2e900: 0786 6680 0006            MOVE   A6,@66680h,1
2e930: 01a0                      PUTST  A0
2e940: 09bf 0088                 MMFM   SP,B3,B7
2e960: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
2e980: 0960                      RETS   
2e990: 099f 0100                 MMTM   SP,B7
2e9b0: 5708                      CLR    A8
2e9c0: 574a                      CLR    A10
2e9d0: 4e19                      MOVE   B0,A9
2e9e0: 4c1a                      MOVE   B0,B10
2e9f0: 4cfb                      MOVE   B7,B11
2ea00: 8558                      MOVE   *B10,B8,0
2ea10: 955c                      MOVE   *B10+,B12,0
2ea20: 491c                      CMP    B8,B12
2ea30: 0dbb fffc                 DSJEQ  B11,2EA10h
2ea50: d51c                      EXGF   B12,0
2ea60: 459a                      SUB    B12,B10
2ea70: d51c                      EXGF   B12,0
2ea80: 4d19                      MOVE   B8,B9
2ea90: 4cfc                      MOVE   B7,B12
2eaa0: 457c                      SUB    B11,B12
2eab0: 4597                      SUB    B12,B7
2eac0: 4f9b                      MOVE   B12,A11
2ead0: 0b4b fffc                 CMPI   3h,A11
2eaf0: c50f                      JRGE   2EBF0h
2eb00: 4f0e                      MOVE   A8,B14
2eb10: 487e                      CMP    B3,B14
2eb20: c408                      JRLT   2EBB0h
2eb30: 247e                      SLL    3h,B14
2eb40: 45d2                      SUB    B14,B2
2eb50: 4c29                      MOVE   A1,A9
2eb60: 4e7a                      MOVE   B3,A10
2eb70: 576b                      CLR    A11
2eb80: 5708                      CLR    A8
2eb90: 56f7                      CLR    B7
2eba0: c004                      JR     2EBF0h
2ebb0: 416a                      ADD    A11,A10
2ebc0: 576b                      CLR    A11
2ebd0: 4cf7                      MOVE   B7,B7
2ebe0: c7e0                      JRGT   2E9F0h
2ebf0: 4d45                      MOVE   A10,A5
2ec00: ca4c                      JREQ   2F0D0h
2ec10: 4d45                      MOVE   A10,A5
2ec20: 0b45 ff01                 CMPI   FEh,A5
2ec40: c602                      JRLE   2EC70h
2ec50: 09c5 00fe                 MOVI   FEh,A5
2ec70: 0b45 fffc                 CMPI   3h,A5
2ec90: c635                      JRLE   2EFF0h
2eca0: 1fe5                      BTST   0h,A5
2ecb0: ca0e                      JREQ   2EDA0h
2ecc0: 183e                      MOVK   1h,B14
2ecd0: 93d2                      MOVE   B14,*B2+,1
2ece0: 1425                      DEC    A5
2ecf0: 142a                      DEC    A10
2ed00: 4f2b                      MOVE   A9,B11
2ed10: 957c                      MOVE   *B11+,B12,0
2ed20: 4f79                      MOVE   B11,A9
2ed30: 4e8d                      MOVE   A4,B13
2ed40: ca03                      JREQ   2ED80h
2ed50: 247c                      SLL    3h,B12
2ed60: 41bc                      ADD    B13,B12
2ed70: 879c                      MOVE   *B12,B12,1
2ed80: 9392                      MOVE   B12,*B2+,1
2ed90: 1048                      ADDK   2h,A8
2eda0: 57de                      CLR    B14
2edb0: 93d2                      MOVE   B14,*B2+,1
2edc0: 4eae                      MOVE   A5,B14
2edd0: 93d2                      MOVE   B14,*B2+,1
2ede0: 4f2b                      MOVE   A9,B11
2edf0: 40a8                      ADD    A5,A8
2ee00: 1048                      ADDK   2h,A8
2ee10: 4e8d                      MOVE   A4,B13
2ee20: cb0d                      JRNE   2EF00h
2ee30: 957c                      MOVE   *B11+,B12,0
2ee40: 9392                      MOVE   B12,*B2+,1
2ee50: 3c7e                      DSJS   B14,2EE30h
2ee60: 4f79                      MOVE   B11,A9
2ee70: 1fe5                      BTST   0h,A5
2ee80: ca04                      JREQ   2EED0h
2ee90: 09db 00aa                 MOVI   AAh,B11
2eeb0: 9372                      MOVE   B11,*B2+,1
2eec0: 1028                      INC    A8
2eed0: 44aa                      SUB    A5,A10
2eee0: c7d2                      JRGT   2EC10h
2eef0: c01d                      JR     2F0D0h
2ef00: 957c                      MOVE   *B11+,B12,0
2ef10: 247c                      SLL    3h,B12
2ef20: 41bc                      ADD    B13,B12
2ef30: 9392                      MOVE   B12,*B2+,1
2ef40: 3cbe                      DSJS   B14,2EF00h
2ef50: 4f79                      MOVE   B11,A9
2ef60: 1fe5                      BTST   0h,A5
2ef70: ca04                      JREQ   2EFC0h
2ef80: 09db 00aa                 MOVI   AAh,B11
2efa0: 9372                      MOVE   B11,*B2+,1
2efb0: 1028                      INC    A8
2efc0: 44aa                      SUB    A5,A10
2efd0: c7c3                      JRGT   2EC10h
2efe0: c00e                      JR     2F0D0h
2eff0: 4eae                      MOVE   A5,B14
2f000: 4f2b                      MOVE   A9,B11
2f010: 183c                      MOVK   1h,B12
2f020: 9392                      MOVE   B12,*B2+,1
2f030: 957c                      MOVE   *B11+,B12,0
2f040: 4e8d                      MOVE   A4,B13
2f050: ca03                      JREQ   2F090h
2f060: 247c                      SLL    3h,B12
2f070: 41bc                      ADD    B13,B12
2f080: 879c                      MOVE   *B12,B12,1
2f090: 9392                      MOVE   B12,*B2+,1
2f0a0: 3d5e                      DSJS   B14,2F010h
2f0b0: 40a8                      ADD    A5,A8
2f0c0: 40a8                      ADD    A5,A8
2f0d0: 4d65                      MOVE   A11,A5
2f0e0: ca11                      JREQ   2F200h
2f0f0: 4e8e                      MOVE   A4,B14
2f100: ca03                      JREQ   2F140h
2f110: 2479                      SLL    3h,B9
2f120: 41d9                      ADD    B14,B9
2f130: 8739                      MOVE   *B9,B9,1
2f140: 4d65                      MOVE   A11,A5
2f150: 0b45 ff00                 CMPI   FFh,A5
2f170: c602                      JRLE   2F1A0h
2f180: 09c5 00ff                 MOVI   FFh,A5
2f1a0: 4eae                      MOVE   A5,B14
2f1b0: 93d2                      MOVE   B14,*B2+,1
2f1c0: 9332                      MOVE   B9,*B2+,1
2f1d0: 1048                      ADDK   2h,A8
2f1e0: 44ab                      SUB    A5,A11
2f1f0: c7f4                      JRGT   2F140h
2f200: 574a                      CLR    A10
2f210: 4f59                      MOVE   B10,A9
2f220: 4cf7                      MOVE   B7,B7
2f230: c700 ff7a                 JRGT   2E9F0h
2f250: 57de                      CLR    B14
2f260: 93d2                      MOVE   B14,*B2+,1
2f270: 57de                      CLR    B14
2f280: 93d2                      MOVE   B14,*B2+,1
2f290: 1048                      ADDK   2h,A8
2f2a0: 09bf 0080                 MMFM   SP,B7
2f2c0: 0960                      RETS   
2f2d0: 099f 8780                 MMTM   SP,B0,B5-B8
2f2f0: 5708                      CLR    A8
2f300: 4c16                      MOVE   B0,B6
2f310: 56b5                      CLR    B5
2f320: 941b                      MOVE   *B0+,B11,0
2f330: 1838                      MOVK   1h,B8
2f340: 3837                      DSJS   B7,2F360h
2f350: c008                      JR     2F3E0h
2f360: 941c                      MOVE   *B0+,B12,0
2f370: 497c                      CMP    B11,B12
2f380: cb05                      JRNE   2F3E0h
2f390: 0b58 ff01                 CMPI   FEh,B8
2f3b0: ca02                      JREQ   2F3E0h
2f3c0: 1038                      INC    B8
2f3d0: c0f6                      JR     2F340h
2f3e0: 0b58 fffa                 CMPI   5h,B8
2f400: c505                      JRGE   2F460h
2f410: 4115                      ADD    B8,B5
2f420: 5718                      CLR    B8
2f430: 4d9b                      MOVE   B12,B11
2f440: 4cf7                      MOVE   B7,B7
2f450: cbed                      JRNE   2F330h
2f460: 4cb5                      MOVE   B5,B5
2f470: ca2f                      JREQ   2F770h
2f480: 4cbc                      MOVE   B5,B12
2f490: 0b5c ff01                 CMPI   FEh,B12
2f4b0: c602                      JRLE   2F4E0h
2f4c0: 09dc 00fe                 MOVI   FEh,B12
2f4e0: 4595                      SUB    B12,B5
2f4f0: 0b5c fffd                 CMPI   2h,B12
2f510: c604                      JRLE   2F560h
2f520: 57de                      CLR    B14
2f530: 8dd2                      MOVB   B14,*B2
2f540: 1112                      ADDK   8h,B2
2f550: 1028                      INC    A8
2f560: 8d92                      MOVB   B12,*B2
2f570: 1112                      ADDK   8h,B2
2f580: 1028                      INC    A8
2f590: 94dd                      MOVE   *B6+,B13,0
2f5a0: 4d5a                      MOVE   B10,B10
2f5b0: ca03                      JREQ   2F5F0h
2f5c0: 247d                      SLL    3h,B13
2f5d0: 415d                      ADD    B10,B13
2f5e0: 87bd                      MOVE   *B13,B13,1
2f5f0: 249d                      SLL    4h,B13
2f600: 4dbe                      MOVE   B13,B14
2f610: 143c                      DEC    B12
2f620: ca08                      JREQ   2F6B0h
2f630: 94dd                      MOVE   *B6+,B13,0
2f640: 4d5a                      MOVE   B10,B10
2f650: ca03                      JREQ   2F690h
2f660: 247d                      SLL    3h,B13
2f670: 415d                      ADD    B10,B13
2f680: 87bd                      MOVE   *B13,B13,1
2f690: 55be                      OR     B13,B14
2f6a0: 143c                      DEC    B12
2f6b0: 8dd2                      MOVB   B14,*B2
2f6c0: 1112                      ADDK   8h,B2
2f6d0: 1028                      INC    A8
2f6e0: 4d9c                      MOVE   B12,B12
2f6f0: cbe9                      JRNE   2F590h
2f700: 19fc                      MOVK   Fh,B12
2f710: 4192                      ADD    B12,B2
2f720: 5392                      ANDN   B12,B2
2f730: 1028                      INC    A8
2f740: 2fe8                      SRL    1h,A8
2f750: 2428                      SLL    1h,A8
2f760: c0cf                      JR     2F460h
2f770: 4d18                      MOVE   B8,B8
2f780: ca0e                      JREQ   2F870h
2f790: 8d12                      MOVB   B8,*B2
2f7a0: 1112                      ADDK   8h,B2
2f7b0: 1028                      INC    A8
2f7c0: 4d5a                      MOVE   B10,B10
2f7d0: ca03                      JREQ   2F810h
2f7e0: 247b                      SLL    3h,B11
2f7f0: 415b                      ADD    B10,B11
2f800: 877b                      MOVE   *B11,B11,1
2f810: 4d7e                      MOVE   B11,B14
2f820: 249b                      SLL    4h,B11
2f830: 557e                      OR     B11,B14
2f840: 8dd2                      MOVB   B14,*B2
2f850: 1112                      ADDK   8h,B2
2f860: 1028                      INC    A8
2f870: a41b                      MOVE   -*B0,B11,0
2f880: 4cf7                      MOVE   B7,B7
2f890: cba6                      JRNE   2F300h
2f8a0: 57de                      CLR    B14
2f8b0: 8dd2                      MOVB   B14,*B2
2f8c0: add2 0008                 MOVB   B14,*B2(8h)
2f8e0: 1212                      ADDK   10h,B2
2f8f0: 1048                      ADDK   2h,A8
2f900: 09bf 01e1                 MMFM   SP,B0,B5-B8
2f920: 0960                      RETS   

_swiz1tbl:
2f930: 8000                      MOVE   A0,*A0,0
2f940: c040                      JR     2FD50h
2f950: a020                      MOVE   A1,-*A0,0
2f960: e060                      ADDXY  A3,A0
2f970: 9010                      MOVE   B0,*B0+,0
2f980: d050 b030                 MOVE   *B2(B030h),*B0+,0
2f9a0: f070                      PIXT   B3,*B0,XY
2f9b0: 8808                      MOVE   *A0,*A8,0
2f9c0: c848                      JRC    2FE50h
2f9d0: a828                      MOVE   -*A1,-*A8,0
2f9e0: e868                      CVXYL  A3,A8
2f9f0: 9818                      MOVE   *B0+,*B8+,0
2fa00: d858 b838                 CEXEC  0,17070C,5
2fa20: f878                      PIXT   B3,*B8
2fa30: 8404                      MOVE   *A0,A4,0
2fa40: c444                      JRLT   2FE90h
2fa50: a424                      MOVE   -*A1,A4,0
2fa60: e464                      CMPXY  A3,A4
2fa70: 9414                      MOVE   *B0+,B4,0
2fa80: d454                      DW     D454h
2fa90: b434 f474                 MOVE   *B1(F474h),B4,0
2fab0: 8c0c                      MOVB   A0,*A12
2fac0: cc4c                      JRV    2FF90h
2fad0: ac2c ec6c                 MOVB   A1,*A12(EC6Ch)
2faf0: 9c1c                      MOVB   *B0,*B12
2fb00: dc5c                      DW     DC5Ch
2fb10: bc3c fc7c 8202            MOVB   *B1(FC7Ch),*B12(8202h)
2fb40: c242                      JRLS   2FF70h
2fb50: a222                      MOVE   A1,-*A2,1
2fb60: e262                      SUBXY  A3,A2
2fb70: 9212                      MOVE   B0,*B2+,1
2fb80: d252 b232                 MOVE   *B2(B232h),*B2+,1
2fba0: f272                      PIXT   *B3,XY,B2
2fbb0: 8a0a                      MOVE   *A0,*A10,1
2fbc0: ca4a                      JREQ   30070h
2fbd0: aa2a                      MOVE   -*A1,-*A10,1
2fbe0: ea6a                      CVSXYL A3,A10
2fbf0: 9a1a                      MOVE   *B0+,*B10+,1
2fc00: da5a                      DW     DA5Ah
2fc10: ba3a fa7a 8606            MOVE   *B1(FA7Ah),*B10(8606h),1
2fc40: c646                      JRLE   300B0h
2fc50: a626                      MOVE   -*A1,A6,1
2fc60: e666                      CPW    A3,A6
2fc70: 9616                      MOVE   *B0+,B6,1
2fc80: d656                      DW     D656h
2fc90: b636 f676                 MOVE   *B1(F676h),B6,1
2fcb0: 8e0e                      MOVB   *A0,A14
2fcc0: ce4e                      JRN    301B0h
2fcd0: ae2e ee6e                 MOVB   *A1(EE6Eh),A14
2fcf0: 9e1e                      DW     9E1Eh
2fd00: de5e                      DW     DE5Eh
2fd10: be3e                      DW     BE3Eh
2fd20: fe7e                      DW     FE7Eh
2fd30: 8101                      MOVE   A8,*A1,0
2fd40: c141                      JRP    30160h
2fd50: a121                      MOVE   A9,-*A1,0
2fd60: e161                      ADDXY  A11,A1
2fd70: 9111                      MOVE   B8,*B1+,0
2fd80: d151 b131                 MOVE   *B10(B131h),*B1+,0
2fda0: f171                      PIXT   B11,*B1,XY
2fdb0: 8909                      MOVE   *A8,*A9,0
2fdc0: c949                      JRNC   30260h
2fdd0: a929                      MOVE   -*A9,-*A9,0
2fde0: e969                      CVXYL  A11,A9
2fdf0: 9919                      MOVE   *B8+,*B9+,0
2fe00: d959 b939                 CEXEC  1,17272C,5
2fe20: f979                      PIXT   B11,*B9
2fe30: 8505                      MOVE   *A8,A5,0
2fe40: c545                      JRGE   302A0h
2fe50: a525                      MOVE   -*A9,A5,0
2fe60: e565                      CMPXY  A11,A5
2fe70: 9515                      MOVE   *B8+,B5,0
2fe80: d555                      DW     D555h
2fe90: b535 f575                 MOVE   *B9(F575h),B5,0
2feb0: 8d0d                      MOVB   A8,*A13
2fec0: cd4d                      JRNV   303A0h
2fed0: ad2d ed6d                 MOVB   A9,*A13(ED6Dh)
2fef0: 9d1d                      MOVB   *B8,*B13
2ff00: dd5d                      DW     DD5Dh
2ff10: bd3d fd7d 8303            MOVB   *B9(FD7Dh),*B13(8303h)
2ff40: c343                      JRHI   30380h
2ff50: a323                      MOVE   A9,-*A3,1
2ff60: e363                      SUBXY  A11,A3
2ff70: 9313                      MOVE   B8,*B3+,1
2ff80: d353 b333                 MOVE   *B10(B333h),*B3+,1
2ffa0: f373                      PIXT   *B11,XY,B3
2ffb0: 8b0b                      MOVE   *A8,*A11,1
2ffc0: cb4b                      JRNE   30480h
2ffd0: ab2b                      MOVE   -*A9,-*A11,1
2ffe0: eb6b                      CVSXYL A11,A11
2fff0: 9b1b                      MOVE   *B8+,*B11+,1
30000: db5b                      DW     DB5Bh
30010: bb3b fb7b 8707            MOVE   *B9(FB7Bh),*B11(8707h),1
30040: c747                      JRGT   304C0h
30050: a727                      MOVE   -*A9,A7,1
30060: e767                      CPW    A11,A7
30070: 9717                      MOVE   *B8+,B7,1
30080: d757                      DW     D757h
30090: b737 f777                 MOVE   *B9(F777h),B7,1
300b0: 8f0f                      MOVB   *A8,SP
300c0: cf4f                      JRNN   305C0h
300d0: af2f ef6f                 MOVB   *A9(EF6Fh),SP
300f0: 9f1f                      DW     9F1Fh
30100: df5f                      DW     DF5Fh
30110: bf3f                      DW     BF3Fh
30120: ff7f                      DW     FF7Fh

_wStyleOval:
30130: 098f ff4c                 MMTM   SP,A0-A7,A9,A12,A13
30150: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
30170: a7cd                      MOVE   -*A14,A13,1
30180: 578c                      CLR    A12
30190: e3ac                      SUBXY  A13,A12
301a0: cd3f                      JRNV   305A0h
301b0: c93e                      JRNC   305A0h
301c0: a7cc                      MOVE   -*A14,A12,1
301d0: 4f81                      MOVE   A12,B1
301e0: a7cc                      MOVE   -*A14,A12,1
301f0: 4f8d                      MOVE   A12,B13
30200: a7ce                      MOVE   -*A14,A14,1
30210: 191a                      MOVK   8h,B10
30220: 0570                      SETF   10h,1,0
30230: 0750                      SETF   10h,0,1
30240: eda2                      MOVX   A13,A2
30250: 0502                      SEXT   A2,0
30260: 4042                      ADD    A2,A2
30270: 5e42                      MPYU   A2,A2
30280: efa0                      MOVY   A13,A0
30290: 2a20                      SRA    Fh,A0
302a0: 5e00                      MPYU   A0,A0
302b0: 4823                      CMP    A1,A3
302c0: cf15                      JRNN   30420h
302d0: 18fe                      MOVK   7h,B14
302e0: efac                      MOVY   A13,A12
302f0: 2e0c                      SRL    10h,A12
30300: 102c                      INC    A12
30310: 25ec                      SLL    Fh,A12
30320: edac                      MOVX   A13,A12
30330: 4f82                      MOVE   A12,B2
30340: e032                      ADDXY  B1,B2
30350: 4c50                      MOVE   B2,B0
30360: 4c24                      MOVE   A1,A4
30370: 5fa4                      MPYU   A13,A4
30380: 56c6                      CLR    A6
30390: 56e7                      CLR    A7
303a0: 5708                      CLR    A8
303b0: 5729                      CLR    A9
303c0: 1ded                      BTST   10h,A13
303d0: ca19                      JREQ   30570h
303e0: 4c67                      MOVE   A3,A7
303f0: 4c69                      MOVE   A3,A9
30400: 2fc9                      SRL    2h,A9
30410: c015                      JR     30570h
30420: 191e                      MOVK   8h,B14
30430: edac                      MOVX   A13,A12
30440: 052c                      ZEXT   A12,0
30450: 102c                      INC    A12
30460: 2fec                      SRL    1h,A12
30470: efac                      MOVY   A13,A12
30480: 4f82                      MOVE   A12,B2
30490: e032                      ADDXY  B1,B2
304a0: 4c50                      MOVE   B2,B0
304b0: 4c66                      MOVE   A3,A6
304c0: 320d                      RL     10h,A13
304d0: 5fa6                      MPYU   A13,A6
304e0: 5684                      CLR    A4
304f0: 56a5                      CLR    A5
30500: 5708                      CLR    A8
30510: 5729                      CLR    A9
30520: 1ded                      BTST   10h,A13
30530: ca03                      JREQ   30570h
30540: 4c25                      MOVE   A1,A5
30550: 4c29                      MOVE   A1,A9
30560: 2fc9                      SRL    2h,A9
30570: 0740                      SETF   20h,0,1
30580: 0d3f 0077                 CALLR  30D10h
305a0: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
305c0: 09af 32ff                 MMFM   SP,A0-A7,A9,A12,A13
305e0: b7ee 0020                 MOVE   *SP(20h),A14,1
30600: 0962                      RETS   2h

_arcstyle:
30610: 098f ff4c                 MMTM   SP,A0-A7,A9,A12,A13
30630: 099f e13e                 MMTM   SP,B0-B2,B7,B10-B14
30650: a7cd                      MOVE   -*A14,A13,1
30660: a7cc                      MOVE   -*A14,A12,1
30670: 4f81                      MOVE   A12,B1
30680: a7c8                      MOVE   -*A14,A8,1
30690: 4f02                      MOVE   A8,B2
306a0: e032                      ADDXY  B1,B2
306b0: e108                      ADDXY  A8,A8
306c0: e3a8                      SUBXY  A13,A8
306d0: a7cc                      MOVE   -*A14,A12,1
306e0: 4f80                      MOVE   A12,B0
306f0: e030                      ADDXY  B1,B0
30700: a7c0                      MOVE   -*A14,A0,1
30710: a7c2                      MOVE   -*A14,A2,1
30720: a7cc                      MOVE   -*A14,A12,1
30730: 4f8d                      MOVE   A12,B13
30740: a7ce                      MOVE   -*A14,A14,1
30750: 0570                      SETF   10h,1,0
30760: 0770                      SETF   10h,1,1
30770: eda3                      MOVX   A13,A3
30780: 0523                      ZEXT   A3,0
30790: 5e63                      MPYU   A3,A3
307a0: efa1                      MOVY   A13,A1
307b0: 2e01                      SRL    10h,A1
307c0: 5e21                      MPYU   A1,A1
307d0: 4c09                      MOVE   A0,A9
307e0: 0d3f 003a                 CALLR  30BA0h
30800: e402                      CMPXY  A0,A2
30810: cf02                      JRNN   30840h
30820: 191a                      MOVK   8h,B10
30830: ca14                      JREQ   30980h
30840: 4dda                      MOVE   B14,B10
30850: 4c49                      MOVE   A2,A9
30860: 0d3f 0032                 CALLR  30BA0h
30880: 45da                      SUB    B14,B10
30890: ca05                      JREQ   308F0h
308a0: 415e                      ADD    B10,B14
308b0: 4d5a                      MOVE   B10,B10
308c0: cf0b                      JRNN   30980h
308d0: 111a                      ADDK   8h,B10
308e0: c009                      JR     30980h
308f0: ee45                      MOVY   A2,A5
30900: 2a05                      SRA    10h,A5
30910: 5c05                      MPYS   A0,A5
30920: ee07                      MOVY   A0,A7
30930: 2a07                      SRA    10h,A7
30940: 5c47                      MPYS   A2,A7
30950: 44e5                      SUB    A7,A5
30960: ce01                      JRN    30980h
30970: 191a                      MOVK   8h,B10
30980: 4d0c                      MOVE   A8,A12
30990: e18c                      ADDXY  A12,A12
309a0: e18c                      ADDXY  A12,A12
309b0: 4c24                      MOVE   A1,A4
309c0: 5d84                      MPYS   A12,A4
309d0: 4c66                      MOVE   A3,A6
309e0: 320c                      RL     10h,A12
309f0: 5d86                      MPYS   A12,A6
30a00: ef0d                      MOVY   A8,A13
30a10: 0508                      SEXT   A8,0
30a20: 5d08                      MPYS   A8,A8
30a30: 2a0d                      SRA    10h,A13
30a40: 5dad                      MPYS   A13,A13
30a50: 0740                      SETF   20h,0,1
30a60: 4d28                      MOVE   A9,A8
30a70: 5e28                      MPYU   A1,A8
30a80: 442d                      SUB    A1,A13
30a90: 4dac                      MOVE   A13,A12
30aa0: 5c6c                      MPYS   A3,A12
30ab0: 41a9                      ADD    A13,A9
30ac0: 4388                      ADDC   A12,A8
30ad0: 2441                      SLL    2h,A1
30ae0: 5600                      CLR    A0
30af0: 2443                      SLL    2h,A3
30b00: 5642                      CLR    A2
30b10: 0d3f 001e                 CALLR  30D10h
30b30: 09bf 7c87                 MMFM   SP,B0-B2,B7,B10-B14
30b50: 09af 32ff                 MMFM   SP,A0-A7,A9,A12,A13
30b70: b7ee 0020                 MOVE   *SP(20h),A14,1
30b90: 0962                      RETS   2h
30ba0: 09fe 2134 7865            MOVI   78652134h,B14
30bd0: ed2c                      MOVX   A9,A12
30be0: 050c                      SEXT   A12,0
30bf0: cf02                      JRNN   30C20h
30c00: 038c                      ABS    A12
30c10: 261e                      SLL    10h,B14
30c20: 4c24                      MOVE   A1,A4
30c30: 5f84                      MPYU   A12,A4
30c40: ef2c                      MOVY   A9,A12
30c50: 2a0c                      SRA    10h,A12
30c60: cf02                      JRNN   30C90h
30c70: 038c                      ABS    A12
30c80: 251e                      SLL    8h,B14
30c90: 4c66                      MOVE   A3,A6
30ca0: 5f86                      MPYU   A12,A6
30cb0: 44e5                      SUB    A7,A5
30cc0: 46c4                      SUBB   A6,A4
30cd0: cf01                      JRNN   30CF0h
30ce0: 249e                      SLL    4h,B14
30cf0: 2c9e                      SRL    1Ch,B14
30d00: 0960                      RETS   
30d10: 09dc ffff                 MOVI   FFFFh,B12
30d30: 577b                      CLR    B11
30d40: e39b                      SUBXY  B12,B11
30d50: 103e                      INC    B14
30d60: 1fbe                      BTST   2h,B14
30d70: ca03                      JREQ   30DB0h
30d80: 03a5                      NEG    A5
30d90: 03c4                      NEGB   A4
30da0: ed9b                      MOVX   B12,B11
30db0: 145e                      SUBK   2h,B14
30dc0: 1fbe                      BTST   2h,B14
30dd0: ca03                      JREQ   30E10h
30de0: 03a7                      NEG    A7
30df0: 03c6                      NEGB   A6
30e00: ef9b                      MOVY   B12,B11
30e10: 579c                      CLR    B12
30e20: ed7c                      MOVX   B11,B12
30e30: 103e                      INC    B14
30e40: 1fde                      BTST   1h,B14
30e50: ca0e                      JREQ   30F40h
30e60: 4c2c                      MOVE   A1,A12
30e70: 4c61                      MOVE   A3,A1
30e80: 4d83                      MOVE   A12,A3
30e90: 4c0c                      MOVE   A0,A12
30ea0: 4c40                      MOVE   A2,A0
30eb0: 4d82                      MOVE   A12,A2
30ec0: 4cac                      MOVE   A5,A12
30ed0: 4ce5                      MOVE   A7,A5
30ee0: 4d87                      MOVE   A12,A7
30ef0: 4c8c                      MOVE   A4,A12
30f00: 4cc4                      MOVE   A6,A4
30f10: 4d86                      MOVE   A12,A6
30f20: 579c                      CLR    B12
30f30: ef7c                      MOVY   B11,B12
30f40: 4025                      ADD    A1,A5
30f50: 4204                      ADDC   A0,A4
30f60: 40a5                      ADD    A5,A5
30f70: 4284                      ADDC   A4,A4
30f80: 40a5                      ADD    A5,A5
30f90: 4284                      ADDC   A4,A4
30fa0: 4129                      ADD    A9,A9
30fb0: 4308                      ADDC   A8,A8
30fc0: 40e9                      ADD    A7,A9
30fd0: 42c8                      ADDC   A6,A8
30fe0: 4129                      ADD    A9,A9
30ff0: 4308                      ADDC   A8,A8
31000: 40a9                      ADD    A5,A9
31010: 4288                      ADDC   A4,A8
31020: 4069                      ADD    A3,A9
31030: 4248                      ADDC   A2,A8
31040: 40e7                      ADD    A7,A7
31050: 42c6                      ADDC   A6,A6
31060: 40e7                      ADD    A7,A7
31070: 42c6                      ADDC   A6,A6
31080: 40a7                      ADD    A5,A7
31090: 4286                      ADDC   A4,A6
310a0: 4c2c                      MOVE   A1,A12
310b0: 2461                      SLL    3h,A1
310c0: 2c6c                      SRL    1Dh,A12
310d0: 2460                      SLL    3h,A0
310e0: 5580                      OR     A12,A0
310f0: 4c6c                      MOVE   A3,A12
31100: 2463                      SLL    3h,A3
31110: 2c6c                      SRL    1Dh,A12
31120: 2462                      SLL    3h,A2
31130: 5582                      OR     A12,A2
31140: 4023                      ADD    A1,A3
31150: 4202                      ADDC   A0,A2
31160: 1ffe                      BTST   0h,B14
31170: ca0a                      JREQ   31220h
31180: 03a9                      NEG    A9
31190: 03c8                      NEGB   A8
311a0: 03a5                      NEG    A5
311b0: 03c4                      NEGB   A4
311c0: 03a7                      NEG    A7
311d0: 03c6                      NEGB   A6
311e0: 03a1                      NEG    A1
311f0: 03c0                      NEGB   A0
31200: 03a3                      NEG    A3
31210: 03c2                      NEGB   A2
31220: 303d                      RL     1h,B13
31230: 09d7 ffff                 MOVI   FFFFh,B7
31250: 4d5a                      MOVE   B10,B10
31260: ca00 0091                 JREQ   31B90h
31280: 1ffe                      BTST   0h,B14
31290: ca03                      JREQ   312D0h
312a0: 4c84                      MOVE   A4,A4
312b0: cf03                      JRNN   312F0h
312c0: c077                      JR     31A40h
312d0: 4cc6                      MOVE   A6,A6
312e0: cf3a                      JRNN   31690h
312f0: 33fd                      RL     1Fh,B13
31300: c804                      JRC    31350h
31310: 1fee                      BTST   0h,A14
31320: cb03                      JRNE   31360h
31330: f112                      PIXT   B8,*B2,XY
31340: c001                      JR     31360h
31350: f132                      PIXT   B9,*B2,XY
31360: 4d08                      MOVE   A8,A8
31370: c518                      JRGE   31500h
31380: e192                      ADDXY  B12,B2
31390: 4025                      ADD    A1,A5
313a0: 4204                      ADDC   A0,A4
313b0: ce07                      JRN    31430h
313c0: 40a9                      ADD    A5,A9
313d0: 4288                      ADDC   A4,A8
313e0: 4027                      ADD    A1,A7
313f0: 4206                      ADDC   A0,A6
31400: cf0b                      JRNN   314C0h
31410: 3e77                      DSJS   B7,312F0h
31420: c07f                      JR     31C20h
31430: 1ffe                      BTST   0h,B14
31440: caf7                      JREQ   313C0h
31450: 40a9                      ADD    A5,A9
31460: 4288                      ADDC   A4,A8
31470: 4027                      ADD    A1,A7
31480: 4206                      ADDC   A0,A6
31490: 0d97 0059                 DSJ    B7,31A40h
314b0: c076                      JR     31C20h
314c0: 1ffe                      BTST   0h,B14
314d0: cbf3                      JRNE   31410h
314e0: 3b57                      DSJS   B7,31690h
314f0: c072                      JR     31C20h
31500: e172                      ADDXY  B11,B2
31510: 4067                      ADD    A3,A7
31520: 4246                      ADDC   A2,A6
31530: cf08                      JRNN   315C0h
31540: 40e9                      ADD    A7,A9
31550: 42c8                      ADDC   A6,A8
31560: 4025                      ADD    A1,A5
31570: 4204                      ADDC   A0,A4
31580: ce0b                      JRN    31640h
31590: 0d97 ffd4                 DSJ    B7,312F0h
315b0: c066                      JR     31C20h
315c0: 1ffe                      BTST   0h,B14
315d0: cbf6                      JRNE   31540h
315e0: 40e9                      ADD    A7,A9
315f0: 42c8                      ADDC   A6,A8
31600: 4025                      ADD    A1,A5
31610: 4204                      ADDC   A0,A4
31620: 38d7                      DSJS   B7,31690h
31630: c05e                      JR     31C20h
31640: 1ffe                      BTST   0h,B14
31650: caf3                      JREQ   31590h
31660: 0d97 003c                 DSJ    B7,31A40h
31680: c059                      JR     31C20h
31690: 143e                      DEC    B14
316a0: 03a9                      NEG    A9
316b0: 03c8                      NEGB   A8
316c0: 40a9                      ADD    A5,A9
316d0: 4288                      ADDC   A4,A8
316e0: 4129                      ADD    A9,A9
316f0: 4308                      ADDC   A8,A8
31700: 44e9                      SUB    A7,A9
31710: 46c8                      SUBB   A6,A8
31720: 4029                      ADD    A1,A9
31730: 4208                      ADDC   A0,A8
31740: 4469                      SUB    A3,A9
31750: 4648                      SUBB   A2,A8
31760: 4129                      ADD    A9,A9
31770: 4308                      ADDC   A8,A8
31780: 4129                      ADD    A9,A9
31790: 4308                      ADDC   A8,A8
317a0: 4069                      ADD    A3,A9
317b0: 4248                      ADDC   A2,A8
317c0: 4d0c                      MOVE   A8,A12
317d0: 27ac                      SLL    1Dh,A12
317e0: 2fa9                      SRL    3h,A9
317f0: 5589                      OR     A12,A9
31800: 2ba8                      SRA    3h,A8
31810: 44e5                      SUB    A7,A5
31820: 46c4                      SUBB   A6,A4
31830: 40a5                      ADD    A5,A5
31840: 4284                      ADDC   A4,A4
31850: 4025                      ADD    A1,A5
31860: 4204                      ADDC   A0,A4
31870: 4465                      SUB    A3,A5
31880: 4644                      SUBB   A2,A4
31890: 2fe5                      SRL    1h,A5
318a0: 2be4                      SRA    1h,A4
318b0: 42a5                      ADDC   A5,A5
318c0: 33e5                      RL     1Fh,A5
318d0: 03a7                      NEG    A7
318e0: 03c6                      NEGB   A6
318f0: 4027                      ADD    A1,A7
31900: 4206                      ADDC   A0,A6
31910: 40e7                      ADD    A7,A7
31920: 42c6                      ADDC   A6,A6
31930: 4467                      SUB    A3,A7
31940: 4646                      SUBB   A2,A6
31950: 2fe7                      SRL    1h,A7
31960: 2be6                      SRA    1h,A6
31970: 42e7                      ADDC   A7,A7
31980: 33e7                      RL     1Fh,A7
31990: 4461                      SUB    A3,A1
319a0: 4640                      SUBB   A2,A0
319b0: 03a3                      NEG    A3
319c0: 03c2                      NEGB   A2
319d0: 321c                      RL     10h,B12
319e0: 5631                      CLR    B1
319f0: e391                      SUBXY  B12,B1
31a00: ee3c                      MOVY   B1,B12
31a10: 0d9a ff85                 DSJ    B10,31280h
31a30: c015                      JR     31B90h
31a40: 143e                      DEC    B14
31a50: 44a7                      SUB    A5,A7
31a60: 4686                      SUBB   A4,A6
31a70: 03a9                      NEG    A9
31a80: 03c8                      NEGB   A8
31a90: 40e9                      ADD    A7,A9
31aa0: 42c8                      ADDC   A6,A8
31ab0: 44a7                      SUB    A5,A7
31ac0: 4686                      SUBB   A4,A6
31ad0: 03a5                      NEG    A5
31ae0: 03c4                      NEGB   A4
31af0: 03a1                      NEG    A1
31b00: 03c0                      NEGB   A0
31b10: 03a3                      NEG    A3
31b20: 03c2                      NEGB   A2
31b30: 321b                      RL     10h,B11
31b40: 5631                      CLR    B1
31b50: e371                      SUBXY  B11,B1
31b60: ee3b                      MOVY   B1,B11
31b70: 0d9a ff6f                 DSJ    B10,31280h
31b90: 4c17                      MOVE   B0,B7
31ba0: e257                      SUBXY  B2,B7
31bb0: 1fde                      BTST   1h,B14
31bc0: ca01                      JREQ   31BE0h
31bd0: 2a17                      SRA    10h,B7
31be0: 0517                      SEXT   B7,0
31bf0: 0397                      ABS    B7
31c00: cb00 ff66                 JRNE   31280h
31c20: 0960                      RETS   

_draw_line:
31c30: 098f c000                 MMTM   SP,A0,A1
31c50: 099f 213e                 MMTM   SP,B2,B7,B10-B14
31c70: a7c0                      MOVE   -*A14,A0,1
31c80: a7c1                      MOVE   -*A14,A1,1
31c90: 2601                      SLL    10h,A1
31ca0: ee20                      MOVY   A1,A0
31cb0: a7c1                      MOVE   -*A14,A1,1
31cc0: a7c8                      MOVE   -*A14,A8,1
31cd0: 2608                      SLL    10h,A8
31ce0: ef01                      MOVY   A8,A1
31cf0: e401                      CMPXY  A0,A1
31d00: c11c                      JRP    31ED0h
31d10: cc08                      JRV    31DA0h
31d20: c807                      JRC    31DA0h
31d30: 183a                      MOVK   1h,B10
31d40: ce01                      JRN    31D60h
31d50: 261a                      SLL    10h,B10
31d60: 4e02                      MOVE   A0,B2
31d70: e201                      SUBXY  A0,A1
31d80: 4e27                      MOVE   A1,B7
31d90: c010                      JR     31EA0h
31da0: 183a                      MOVK   1h,B10
31db0: ce07                      JRN    31E30h
31dc0: 261a                      SLL    10h,B10
31dd0: 4e22                      MOVE   A1,B2
31de0: e220                      SUBXY  A1,A0
31df0: 4e07                      MOVE   A0,B7
31e00: 183b                      MOVK   1h,B11
31e10: e172                      ADDXY  B11,B2
31e20: c007                      JR     31EA0h
31e30: 4e22                      MOVE   A1,B2
31e40: e220                      SUBXY  A1,A0
31e50: 4e07                      MOVE   A0,B7
31e60: 09fb 0000 0001            MOVI   10000h,B11
31e90: e172                      ADDXY  B11,B2
31ea0: e157                      ADDXY  B10,B7
31eb0: 0fe0                      FILL   XY
31ec0: c024                      JR     32110h
31ed0: 4e02                      MOVE   A0,B2
31ee0: 4e20                      MOVE   A1,B0
31ef0: e250                      SUBXY  B2,B0
31f00: 09db ffff                 MOVI   FFFFh,B11
31f20: 183a                      MOVK   1h,B10
31f30: 56f7                      CLR    B7
31f40: e217                      SUBXY  B0,B7
31f50: c902                      JRNC   31F80h
31f60: 2e3b                      SRL    Fh,B11
31f70: ee17                      MOVY   B0,B7
31f80: cd02                      JRNV   31FB0h
31f90: ed5b                      MOVX   B10,B11
31fa0: ec17                      MOVX   B0,B7
31fb0: 579c                      CLR    B12
31fc0: 4cf0                      MOVE   B7,B0
31fd0: 2e10                      SRL    10h,B0
31fe0: e417                      CMPXY  B0,B7
31ff0: cc02                      JRV    32020h
32000: ed7c                      MOVX   B11,B12
32010: c003                      JR     32050h
32020: ef7c                      MOVY   B11,B12
32030: ecf0                      MOVX   B7,B0
32040: 3217                      RL     10h,B7
32050: 4010                      ADD    B0,B0
32060: ecfa                      MOVX   B7,B10
32070: 4550                      SUB    B10,B0
32080: 4d7b                      MOVE   B11,B11
32090: c404                      JRLT   320E0h
320a0: 57bd                      CLR    B13
320b0: 03fd                      NOT    B13
320c0: df1a                      LINE   0
320d0: c003                      JR     32110h
320e0: 57bd                      CLR    B13
320f0: 03fd                      NOT    B13
32100: df9a                      LINE   1
32110: 09bf 7c84                 MMFM   SP,B2,B7,B10-B14
32130: 09af 0003                 MMFM   SP,A0,A1
32150: 0962                      RETS   2h
