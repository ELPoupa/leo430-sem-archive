; G1000.RLM .text, 11938 words, disassembled with MAME unidasm (tms34020); addresses are bit addresses
; labels from the COFF symbol table; module is relocatable (addresses relative to .text)

_VID_Process:
00000: 098f 000c                 MMTM   SP,A12,A13
00020: 4dcd                      MOVE   A14,A13
00030: 0b0e 08a0                 ADDI   8A0h,A14
00050: a3cf                      MOVE   A14,-*SP,1
00060: 09c8 0410                 MOVI   410h,A8
00080: 930e                      MOVE   A8,*A14+,1
00090: 09e8 f920 0002            MOVI   2F920h,A8
000c0: 930e                      MOVE   A8,*A14+,1
000d0: 09e8 4155 514d            MOVI   514D4155h,A8
00100: 930e                      MOVE   A8,*A14+,1
00110: 09c8 0021                 MOVI   21h,A8
00130: 930e                      MOVE   A8,*A14+,1
00140: 0d5f 0000 0000            CALLA  0h
00170: a3cf                      MOVE   A14,-*SP,1
00180: 19c8                      MOVK   Eh,A8
00190: 930e                      MOVE   A8,*A14+,1
001a0: 09e8 19a0 0003            MOVI   319A0h,A8
001d0: 930e                      MOVE   A8,*A14+,1
001e0: 09e8 4155 5152            MOVI   51524155h,A8
00210: 930e                      MOVE   A8,*A14+,1
00220: 09c8 0022                 MOVI   22h,A8
00240: 930e                      MOVE   A8,*A14+,1
00250: 0d5f 0000 0000            CALLA  0h
00280: 0d5f 16f0 0001            CALLA  116F0h
002b0: c000 0104                 JR     1310h
002d0: 07a8 3220 0003            MOVE   @33220h,A8,1
00300: 0d88 00ff                 DSJ    A8,1310h
00320: 0d5f 2410 0001            CALLA  12410h
00350: c000 00fa                 JR     1310h
00370: a3cf                      MOVE   A14,-*SP,1
00380: 0570                      SETF   10h,1,0
00390: b5a8 0070                 MOVE   *A13(70h),A8,0
003b0: 930e                      MOVE   A8,*A14+,1
003c0: b5a8 0060                 MOVE   *A13(60h),A8,0
003e0: 930e                      MOVE   A8,*A14+,1
003f0: 0d5f 6ce0 0000            CALLA  6CE0h
00420: c000 00ed                 JR     1310h
00440: a3cf                      MOVE   A14,-*SP,1
00450: 4fa0                      MOVE   A13,B0
00460: 0b10 0060                 ADDI   60h,B0
00480: 4fc2                      MOVE   A14,B2
00490: 0b0e 00a0                 ADDI   A0h,A14
004b0: 09d7 00a0                 MOVI   A0h,B7
004d0: 00f3                      BLMOVE 1,1
004e0: 0d5f f190 0000            CALLA  F190h
00510: c000 00de                 JR     1310h
00530: a3cf                      MOVE   A14,-*SP,1
00540: 4fa0                      MOVE   A13,B0
00550: 0b10 0060                 ADDI   60h,B0
00570: 4fc2                      MOVE   A14,B2
00580: 0b0e 00a0                 ADDI   A0h,A14
005a0: 09d7 00a0                 MOVI   A0h,B7
005c0: 00f3                      BLMOVE 1,1
005d0: 0d5f e080 0000            CALLA  E080h
00600: c000 00cf                 JR     1310h
00620: 09e8 f8e0 0002            MOVI   2F8E0h,A8
00650: 4dac                      MOVE   A13,A12
00660: 0b0c 0060                 ADDI   60h,A12
00680: 9b88                      MOVE   *A12+,*A8+,1
00690: 8b88                      MOVE   *A12,*A8,1
006a0: c000 00c5                 JR     1310h
006c0: 1a0c                      MOVK   10h,A12
006d0: b38d 03c0                 MOVE   A12,*A13(3C0h),1
006f0: 19a8                      MOVK   Dh,A8
00700: b30d 0400                 MOVE   A8,*A13(400h),1
00720: a3cf                      MOVE   A14,-*SP,1
00730: 0548                      SETF   8h,0,0
00740: b5a8 0060                 MOVE   *A13(60h),A8,0
00760: 930e                      MOVE   A8,*A14+,1
00770: 4da8                      MOVE   A13,A8
00780: 0b08 0460                 ADDI   460h,A8
007a0: 930e                      MOVE   A8,*A14+,1
007b0: 0d5f cb80 0000            CALLA  CB80h
007e0: bbad 0460 0420            MOVE   *A13(460h),*A13(420h),1
00810: bbad 0480 0440            MOVE   *A13(480h),*A13(440h),1
00840: a3cf                      MOVE   A14,-*SP,1
00850: 4da8                      MOVE   A13,A8
00860: 0b08 03c0                 ADDI   3C0h,A8
00880: 930e                      MOVE   A8,*A14+,1
00890: d3ae 0020                 MOVE   *A13(20h),*A14+,1
008b0: 0d5f 0000 0000            CALLA  0h
008e0: c000 00a1                 JR     1310h
00900: 192c                      MOVK   9h,A12
00910: b38d 03c0                 MOVE   A12,*A13(3C0h),1
00930: 1988                      MOVK   Ch,A8
00940: b30d 0400                 MOVE   A8,*A13(400h),1
00960: a3cf                      MOVE   A14,-*SP,1
00970: 0548                      SETF   8h,0,0
00980: b5a8 0060                 MOVE   *A13(60h),A8,0
009a0: 930e                      MOVE   A8,*A14+,1
009b0: 0d5f ccd0 0000            CALLA  CCD0h
009e0: ad0d 0420                 MOVB   A8,*A13(420h)
00a00: a3cf                      MOVE   A14,-*SP,1
00a10: 4da8                      MOVE   A13,A8
00a20: 0b08 03c0                 ADDI   3C0h,A8
00a40: 930e                      MOVE   A8,*A14+,1
00a50: d3ae 0020                 MOVE   *A13(20h),*A14+,1
00a70: 0d5f 0000 0000            CALLA  0h
00aa0: c000 0085                 JR     1310h
00ac0: a3cf                      MOVE   A14,-*SP,1
00ad0: 0550                      SETF   10h,0,0
00ae0: b5ac 0070                 MOVE   *A13(70h),A12,0
00b00: 938e                      MOVE   A12,*A14+,1
00b10: b5a8 0060                 MOVE   *A13(60h),A8,0
00b30: 930e                      MOVE   A8,*A14+,1
00b40: 0d5f c7e0 0000            CALLA  C7E0h
00b70: c079                      JR     1310h
00b80: a3cf                      MOVE   A14,-*SP,1
00b90: 4dac                      MOVE   A13,A12
00ba0: 0b0c 0060                 ADDI   60h,A12
00bc0: 9b8e                      MOVE   *A12+,*A14+,1
00bd0: 9b8e                      MOVE   *A12+,*A14+,1
00be0: 0d5f c3f0 0000            CALLA  C3F0h
00c10: c06f                      JR     1310h
00c20: a3cf                      MOVE   A14,-*SP,1
00c30: 4dac                      MOVE   A13,A12
00c40: 0b0c 0560                 ADDI   560h,A12
00c60: 938e                      MOVE   A12,*A14+,1
00c70: 09c8 0021                 MOVI   21h,A8
00c90: 930e                      MOVE   A8,*A14+,1
00ca0: 0d5f 0000 0000            CALLA  0h
00cd0: 4d08                      MOVE   A8,A8
00ce0: cb19                      JRNE   E80h
00cf0: c014                      JR     E40h
00d00: a3cf                      MOVE   A14,-*SP,1
00d10: 182c                      MOVK   1h,A12
00d20: 938e                      MOVE   A12,*A14+,1
00d30: 93ae                      MOVE   A13,*A14+,1
00d40: 100c                      ADDK   20h,A12
00d50: 938e                      MOVE   A12,*A14+,1
00d60: 0d5f 0000 0000            CALLA  0h
00d90: a3cf                      MOVE   A14,-*SP,1
00da0: 4da8                      MOVE   A13,A8
00db0: 0b08 0560                 ADDI   560h,A8
00dd0: 930e                      MOVE   A8,*A14+,1
00de0: 938e                      MOVE   A12,*A14+,1
00df0: 0d5f 0000 0000            CALLA  0h
00e20: 4d08                      MOVE   A8,A8
00e30: cb04                      JRNE   E80h
00e40: b7ac 05a0                 MOVE   *A13(5A0h),A12,1
00e60: 14cc                      SUBK   6h,A12
00e70: cae8                      JREQ   D00h
00e80: a3cf                      MOVE   A14,-*SP,1
00e90: d3ae 0060                 MOVE   *A13(60h),*A14+,1
00eb0: 0550                      SETF   10h,0,0
00ec0: b5ac 0080                 MOVE   *A13(80h),A12,0
00ee0: 938e                      MOVE   A12,*A14+,1
00ef0: 0d5f ae90 0000            CALLA  AE90h
00f20: c03e                      JR     1310h
00f30: a3cf                      MOVE   A14,-*SP,1
00f40: 4dac                      MOVE   A13,A12
00f50: 0b0c 0560                 ADDI   560h,A12
00f70: 938e                      MOVE   A12,*A14+,1
00f80: 09c8 0021                 MOVI   21h,A8
00fa0: 930e                      MOVE   A8,*A14+,1
00fb0: 0d5f 0000 0000            CALLA  0h
00fe0: 4d08                      MOVE   A8,A8
00ff0: cb19                      JRNE   1190h
01000: c014                      JR     1150h
01010: a3cf                      MOVE   A14,-*SP,1
01020: 182c                      MOVK   1h,A12
01030: 938e                      MOVE   A12,*A14+,1
01040: 93ae                      MOVE   A13,*A14+,1
01050: 100c                      ADDK   20h,A12
01060: 938e                      MOVE   A12,*A14+,1
01070: 0d5f 0000 0000            CALLA  0h
010a0: a3cf                      MOVE   A14,-*SP,1
010b0: 4da8                      MOVE   A13,A8
010c0: 0b08 0560                 ADDI   560h,A8
010e0: 930e                      MOVE   A8,*A14+,1
010f0: 938e                      MOVE   A12,*A14+,1
01100: 0d5f 0000 0000            CALLA  0h
01130: 4d08                      MOVE   A8,A8
01140: cb04                      JRNE   1190h
01150: b7ac 05a0                 MOVE   *A13(5A0h),A12,1
01170: 14ac                      SUBK   5h,A12
01180: cae8                      JREQ   1010h
01190: a3cf                      MOVE   A14,-*SP,1
011a0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
011c0: 0550                      SETF   10h,0,0
011d0: b5ac 0080                 MOVE   *A13(80h),A12,0
011f0: 938e                      MOVE   A12,*A14+,1
01200: 0d5f 9c30 0000            CALLA  9C30h
01230: c00d                      JR     1310h
01240: a3cf                      MOVE   A14,-*SP,1
01250: 4fa0                      MOVE   A13,B0
01260: 0b10 0060                 ADDI   60h,B0
01280: 4fc2                      MOVE   A14,B2
01290: 0b0e 00a0                 ADDI   A0h,A14
012b0: 09d7 00a0                 MOVI   A0h,B7
012d0: 00f3                      BLMOVE 1,1
012e0: 0d5f c240 0000            CALLA  C240h
01310: a3cf                      MOVE   A14,-*SP,1
01320: 182c                      MOVK   1h,A12
01330: 938e                      MOVE   A12,*A14+,1
01340: 93ae                      MOVE   A13,*A14+,1
01350: 100c                      ADDK   20h,A12
01360: 938e                      MOVE   A12,*A14+,1
01370: 0d5f 0000 0000            CALLA  0h
013a0: 4f0e                      MOVE   A8,B14
013b0: 4fd8                      MOVE   B14,A8
013c0: ca04                      JREQ   1410h
013d0: 1628                      SUBK   11h,A8
013e0: cbf2                      JRNE   1310h
013f0: c000 feec                 JR     2D0h
01410: b7a8 0040                 MOVE   *A13(40h),A8,1
01430: 1448                      SUBK   2h,A8
01440: 35e8                      CMPK   Fh,A8
01450: c3eb                      JRHI   1310h
01460: 24a8                      SLL    5h,A8
01470: 0b28 ea20 0002            ADDI   2EA20h,A8
014a0: 8708                      MOVE   *A8,A8,1
014b0: 0168                      JUMP   A8
014c0: a3cf                      MOVE   A14,-*SP,1
014d0: 4fa0                      MOVE   A13,B0
014e0: 0b10 0060                 ADDI   60h,B0
01500: 4fc2                      MOVE   A14,B2
01510: 0b0e 02e0                 ADDI   2E0h,A14
01530: 09d7 02e0                 MOVI   2E0h,B7
01550: 00f3                      BLMOVE 1,1
01560: 0d5f ca90 0000            CALLA  CA90h
01590: c0d7                      JR     1310h

_cp_set_qbsd_cal:
015a0: a3af                      MOVE   A13,-*SP,1
015b0: 4dcd                      MOVE   A14,A13
015c0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
015e0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
01600: 0d5f 34e0 0002            CALLA  234E0h
01630: a7c8                      MOVE   -*A14,A8,1
01640: 0788 3240 0003            MOVE   A8,@33240h,1
01670: a3cf                      MOVE   A14,-*SP,1
01680: 930e                      MOVE   A8,*A14+,1
01690: 09e8 ec20 0002            MOVI   2EC20h,A8
016c0: 930e                      MOVE   A8,*A14+,1
016d0: 0d5f 3f60 0000            CALLA  3F60h
01700: b7ee 0040                 MOVE   *SP(40h),A14,1
01720: 97ed                      MOVE   *SP+,A13,1
01730: 0962                      RETS   2h

_cp_VID_GSP_controller:
01740: a38f                      MOVE   A12,-*SP,1
01750: a3cf                      MOVE   A14,-*SP,1
01760: 09e8 0000 0000            MOVI   0h,A8
01790: 930e                      MOVE   A8,*A14+,1
017a0: 4508                      SUB    A8,A8
017b0: 930e                      MOVE   A8,*A14+,1
017c0: 09c8 2000                 MOVI   2000h,A8
017e0: 930e                      MOVE   A8,*A14+,1
017f0: 09e8 4155 4e4d            MOVI   4E4D4155h,A8
01820: 930e                      MOVE   A8,*A14+,1
01830: 19e8                      MOVK   Fh,A8
01840: 930e                      MOVE   A8,*A14+,1
01850: 0d5f 0000 0000            CALLA  0h
01880: 4d0c                      MOVE   A8,A12
01890: cb07                      JRNE   1910h
018a0: a3cf                      MOVE   A14,-*SP,1
018b0: 19e8                      MOVK   Fh,A8
018c0: 930e                      MOVE   A8,*A14+,1
018d0: 0d5f 0000 0000            CALLA  0h
01900: 4d0c                      MOVE   A8,A12
01910: 4d88                      MOVE   A12,A8
01920: 97ec                      MOVE   *SP+,A12,1
01930: 0960                      RETS   

_cp_set_detector_apparent_cont:
01940: a3af                      MOVE   A13,-*SP,1
01950: 4dcd                      MOVE   A14,A13
01960: 0b0e 0340                 ADDI   340h,A14
01980: 19c8                      MOVK   Eh,A8
01990: 830d                      MOVE   A8,*A13,1
019a0: 12a8                      ADDK   15h,A8
019b0: b30d 0020                 MOVE   A8,*A13(20h),1
019d0: 18c8                      MOVK   6h,A8
019e0: b30d 0040                 MOVE   A8,*A13(40h),1
01a00: 0570                      SETF   10h,1,0
01a10: b9ad ffe0 0080            MOVE   *A13(FFE0h),*A13(80h),0
01a40: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
01a60: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
01a80: 0d5f 34e0 0002            CALLA  234E0h
01ab0: a7c8                      MOVE   -*A14,A8,1
01ac0: b30d 0060                 MOVE   A8,*A13(60h),1
01ae0: a3cf                      MOVE   A14,-*SP,1
01af0: 93ae                      MOVE   A13,*A14+,1
01b00: 09c8 0021                 MOVI   21h,A8
01b20: 930e                      MOVE   A8,*A14+,1
01b30: 0d5f 0000 0000            CALLA  0h
01b60: b7ee 0040                 MOVE   *SP(40h),A14,1
01b80: 97ed                      MOVE   *SP+,A13,1
01b90: 0962                      RETS   2h

_cp_set_BSD_auto_range:
01ba0: a3af                      MOVE   A13,-*SP,1
01bb0: 4dcd                      MOVE   A14,A13
01bc0: 0b0e 0340                 ADDI   340h,A14
01be0: 1988                      MOVK   Ch,A8
01bf0: 830d                      MOVE   A8,*A13,1
01c00: 12e8                      ADDK   17h,A8
01c10: b30d 0020                 MOVE   A8,*A13(20h),1
01c30: 1a28                      MOVK   11h,A8
01c40: b30d 0040                 MOVE   A8,*A13(40h),1
01c60: 0570                      SETF   10h,1,0
01c70: b9ad ffe0 0060            MOVE   *A13(FFE0h),*A13(60h),0
01ca0: b9ad ffc0 0070            MOVE   *A13(FFC0h),*A13(70h),0
01cd0: a3cf                      MOVE   A14,-*SP,1
01ce0: 93ae                      MOVE   A13,*A14+,1
01cf0: 1208                      ADDK   10h,A8
01d00: 930e                      MOVE   A8,*A14+,1
01d10: 0d5f 0000 0000            CALLA  0h
01d40: b7ee 0040                 MOVE   *SP(40h),A14,1
01d60: 97ed                      MOVE   *SP+,A13,1
01d70: 0962                      RETS   2h

_cp_set_detector_apparent_bright:
01d80: a3af                      MOVE   A13,-*SP,1
01d90: 4dcd                      MOVE   A14,A13
01da0: 0b0e 0340                 ADDI   340h,A14
01dc0: 19c8                      MOVK   Eh,A8
01dd0: 830d                      MOVE   A8,*A13,1
01de0: 12a8                      ADDK   15h,A8
01df0: b30d 0020                 MOVE   A8,*A13(20h),1
01e10: 18a8                      MOVK   5h,A8
01e20: b30d 0040                 MOVE   A8,*A13(40h),1
01e40: 0570                      SETF   10h,1,0
01e50: b9ad ffe0 0080            MOVE   *A13(FFE0h),*A13(80h),0
01e80: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
01ea0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
01ec0: 0d5f 34e0 0002            CALLA  234E0h
01ef0: a7c8                      MOVE   -*A14,A8,1
01f00: b30d 0060                 MOVE   A8,*A13(60h),1
01f20: a3cf                      MOVE   A14,-*SP,1
01f30: 93ae                      MOVE   A13,*A14+,1
01f40: 09c8 0021                 MOVI   21h,A8
01f60: 930e                      MOVE   A8,*A14+,1
01f70: 0d5f 0000 0000            CALLA  0h
01fa0: b7ee 0040                 MOVE   *SP(40h),A14,1
01fc0: 97ed                      MOVE   *SP+,A13,1
01fd0: 0962                      RETS   2h

_cp_update_detectors_from_zones:
01fe0: 098f 000c                 MMTM   SP,A12,A13
02000: 4dcd                      MOVE   A14,A13
02010: 0b0e 0340                 ADDI   340h,A14
02030: 1a08                      MOVK   10h,A8
02040: 830d                      MOVE   A8,*A13,1
02050: 1268                      ADDK   13h,A8
02060: b30d 0020                 MOVE   A8,*A13(20h),1
02080: 1948                      MOVK   Ah,A8
02090: b30d 0040                 MOVE   A8,*A13(40h),1
020b0: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
020d0: 4dac                      MOVE   A13,A12
020e0: 0b0c 0060                 ADDI   60h,A12
02100: 9b0c                      MOVE   *A8+,*A12+,1
02110: 8b0c                      MOVE   *A8,*A12,1
02120: a3cf                      MOVE   A14,-*SP,1
02130: 93ae                      MOVE   A13,*A14+,1
02140: 09cc 0021                 MOVI   21h,A12
02160: 938e                      MOVE   A12,*A14+,1
02170: 0d5f 0000 0000            CALLA  0h
021a0: b7ee 0060                 MOVE   *SP(60h),A14,1
021c0: 09af 3000                 MMFM   SP,A12,A13
021e0: 0962                      RETS   2h

_cp_auto_video_enable:
021f0: a3af                      MOVE   A13,-*SP,1
02200: 4dcd                      MOVE   A14,A13
02210: 0550                      SETF   10h,0,0
02220: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
02240: 0788 3220 0003            MOVE   A8,@33220h,1
02270: b7ee 0040                 MOVE   *SP(40h),A14,1
02290: 97ed                      MOVE   *SP+,A13,1
022a0: 0962                      RETS   2h

_cp_reload_detectors:
022b0: a3af                      MOVE   A13,-*SP,1
022c0: 4dcd                      MOVE   A14,A13
022d0: 0b0e 0340                 ADDI   340h,A14
022f0: 1b48                      MOVK   1Ah,A8
02300: 830d                      MOVE   A8,*A13,1
02310: 1128                      ADDK   9h,A8
02320: b30d 0020                 MOVE   A8,*A13(20h),1
02340: 1888                      MOVK   4h,A8
02350: b30d 0040                 MOVE   A8,*A13(40h),1
02370: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
02390: 4fa2                      MOVE   A13,B2
023a0: 0b12 0060                 ADDI   60h,B2
023c0: 4f00                      MOVE   A8,B0
023d0: 09d7 0090                 MOVI   90h,B7
023f0: 00f3                      BLMOVE 1,1
02400: a3cf                      MOVE   A14,-*SP,1
02410: 93ae                      MOVE   A13,*A14+,1
02420: 09c8 0021                 MOVI   21h,A8
02440: 930e                      MOVE   A8,*A14+,1
02450: 0d5f 0000 0000            CALLA  0h
02480: b7ee 0040                 MOVE   *SP(40h),A14,1
024a0: 97ed                      MOVE   *SP+,A13,1
024b0: 0962                      RETS   2h

_cp_visible_zones:
024c0: 098f 000c                 MMTM   SP,A12,A13
024e0: 4dcd                      MOVE   A14,A13
024f0: 0b0e 0340                 ADDI   340h,A14
02510: 1a08                      MOVK   10h,A8
02520: 830d                      MOVE   A8,*A13,1
02530: 1268                      ADDK   13h,A8
02540: b30d 0020                 MOVE   A8,*A13(20h),1
02560: 19c8                      MOVK   Eh,A8
02570: b30d 0040                 MOVE   A8,*A13(40h),1
02590: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
025b0: 4dac                      MOVE   A13,A12
025c0: 0b0c 0060                 ADDI   60h,A12
025e0: 9b0c                      MOVE   *A8+,*A12+,1
025f0: 8b0c                      MOVE   *A8,*A12,1
02600: a3cf                      MOVE   A14,-*SP,1
02610: 93ae                      MOVE   A13,*A14+,1
02620: 09cc 0021                 MOVI   21h,A12
02640: 938e                      MOVE   A12,*A14+,1
02650: 0d5f 0000 0000            CALLA  0h
02680: b7ee 0060                 MOVE   *SP(60h),A14,1
026a0: 09af 3000                 MMFM   SP,A12,A13
026c0: 0962                      RETS   2h

_cp_set_detector_auto_contrast:
026d0: 098f 000c                 MMTM   SP,A12,A13
026f0: 4dcd                      MOVE   A14,A13
02700: 0550                      SETF   10h,0,0
02710: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
02730: 2508                      SLL    8h,A8
02740: 0b28 1f00 0003            ADDI   31F00h,A8
02770: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
02790: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
027b0: 4d0c                      MOVE   A8,A12
027c0: 0d5f 34e0 0002            CALLA  234E0h
027f0: a7c8                      MOVE   -*A14,A8,1
02800: b30c 0040                 MOVE   A8,*A12(40h),1
02820: b7ee 0060                 MOVE   *SP(60h),A14,1
02840: 09af 3000                 MMFM   SP,A12,A13
02860: 0962                      RETS   2h

_cp_set_detector_auto_brightness:
02870: 098f 000c                 MMTM   SP,A12,A13
02890: 4dcd                      MOVE   A14,A13
028a0: 0550                      SETF   10h,0,0
028b0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
028d0: 2508                      SLL    8h,A8
028e0: 0b28 1f00 0003            ADDI   31F00h,A8
02910: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
02930: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
02950: 4d0c                      MOVE   A8,A12
02960: 0d5f 34e0 0002            CALLA  234E0h
02990: a7c8                      MOVE   -*A14,A8,1
029a0: b30c 0060                 MOVE   A8,*A12(60h),1
029c0: b7ee 0060                 MOVE   *SP(60h),A14,1
029e0: 09af 3000                 MMFM   SP,A12,A13
02a00: 0962                      RETS   2h

_cp_set_detector_abc_contrast:
02a10: 098f 000c                 MMTM   SP,A12,A13
02a30: 4dcd                      MOVE   A14,A13
02a40: 0550                      SETF   10h,0,0
02a50: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
02a70: 2508                      SLL    8h,A8
02a80: 0b28 1f00 0003            ADDI   31F00h,A8
02ab0: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
02ad0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
02af0: 4d0c                      MOVE   A8,A12
02b00: 0d5f 34e0 0002            CALLA  234E0h
02b30: a7c8                      MOVE   -*A14,A8,1
02b40: b30c 00e0                 MOVE   A8,*A12(E0h),1
02b60: b7ee 0060                 MOVE   *SP(60h),A14,1
02b80: 09af 3000                 MMFM   SP,A12,A13
02ba0: 0962                      RETS   2h

_cp_set_detector_abc_brightness:
02bb0: 098f 000c                 MMTM   SP,A12,A13
02bd0: 4dcd                      MOVE   A14,A13
02be0: 0550                      SETF   10h,0,0
02bf0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
02c10: 2508                      SLL    8h,A8
02c20: 0b28 1f00 0003            ADDI   31F00h,A8
02c50: d3ae ffa0                 MOVE   *A13(FFA0h),*A14+,1
02c70: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
02c90: 4d0c                      MOVE   A8,A12
02ca0: 0d5f 34e0 0002            CALLA  234E0h
02cd0: a7c8                      MOVE   -*A14,A8,1
02ce0: b30c 00c0                 MOVE   A8,*A12(C0h),1
02d00: b7ee 0060                 MOVE   *SP(60h),A14,1
02d20: 09af 3000                 MMFM   SP,A12,A13
02d40: 0962                      RETS   2h

_cp_select_detector_video_level:
02d50: a3af                      MOVE   A13,-*SP,1
02d60: 4dcd                      MOVE   A14,A13
02d70: 0b0e 0340                 ADDI   340h,A14
02d90: 1988                      MOVK   Ch,A8
02da0: 830d                      MOVE   A8,*A13,1
02db0: 12e8                      ADDK   17h,A8
02dc0: b30d 0020                 MOVE   A8,*A13(20h),1
02de0: 1968                      MOVK   Bh,A8
02df0: b30d 0040                 MOVE   A8,*A13(40h),1
02e10: 0570                      SETF   10h,1,0
02e20: b9ad ffe0 0060            MOVE   *A13(FFE0h),*A13(60h),0
02e50: b9ad ffc0 0070            MOVE   *A13(FFC0h),*A13(70h),0
02e80: a3cf                      MOVE   A14,-*SP,1
02e90: 93ae                      MOVE   A13,*A14+,1
02ea0: 12c8                      ADDK   16h,A8
02eb0: 930e                      MOVE   A8,*A14+,1
02ec0: 0d5f 0000 0000            CALLA  0h
02ef0: b7ee 0040                 MOVE   *SP(40h),A14,1
02f10: 97ed                      MOVE   *SP+,A13,1
02f20: 0962                      RETS   2h

_cp_configure_detector:
02f30: a3af                      MOVE   A13,-*SP,1
02f40: 4dcd                      MOVE   A14,A13
02f50: 0b0e 0340                 ADDI   340h,A14
02f70: 09c8 0062                 MOVI   62h,A8
02f90: 830d                      MOVE   A8,*A13,1
02fa0: 09c8 0023                 MOVI   23h,A8
02fc0: b30d 0020                 MOVE   A8,*A13(20h),1
02fe0: 1848                      MOVK   2h,A8
02ff0: b30d 0040                 MOVE   A8,*A13(40h),1
03010: b7a8 ffe0                 MOVE   *A13(FFE0h),A8,1
03030: 4fa2                      MOVE   A13,B2
03040: 0b12 0060                 ADDI   60h,B2
03060: 4f00                      MOVE   A8,B0
03070: 09d7 02d0                 MOVI   2D0h,B7
03090: 00f3                      BLMOVE 1,1
030a0: a3cf                      MOVE   A14,-*SP,1
030b0: 93ae                      MOVE   A13,*A14+,1
030c0: 09c8 0021                 MOVI   21h,A8
030e0: 930e                      MOVE   A8,*A14+,1
030f0: 0d5f 0000 0000            CALLA  0h
03120: b7ee 0040                 MOVE   *SP(40h),A14,1
03140: 97ed                      MOVE   *SP+,A13,1
03150: 0962                      RETS   2h

_cp_read_video_levels:
03160: a3af                      MOVE   A13,-*SP,1
03170: 4dcd                      MOVE   A14,A13
03180: a3cf                      MOVE   A14,-*SP,1
03190: 0550                      SETF   10h,0,0
031a0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
031c0: 930e                      MOVE   A8,*A14+,1
031d0: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
031f0: 930e                      MOVE   A8,*A14+,1
03200: 0d5f cb80 0000            CALLA  CB80h
03230: b7ee 0040                 MOVE   *SP(40h),A14,1
03250: 97ed                      MOVE   *SP+,A13,1
03260: 0962                      RETS   2h

_cp_auto_video_suspend:
03270: a3af                      MOVE   A13,-*SP,1
03280: 4dcd                      MOVE   A14,A13
03290: 0550                      SETF   10h,0,0
032a0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
032c0: 1428                      DEC    A8
032d0: ca0e                      JREQ   33C0h
032e0: 07a8 1a40 0003            MOVE   @31A40h,A8,1
03310: 3b68                      DSJS   A8,34D0h
03320: 07c0 1a20 0003 3220 0003  MOVE   @31A20h,@33220h,1
03370: 4508                      SUB    A8,A8
03380: 0788 1a40 0003            MOVE   A8,@31A40h,1
033b0: c011                      JR     34D0h
033c0: 07a8 1a40 0003            MOVE   @31A40h,A8,1
033f0: cb0d                      JRNE   34D0h
03400: 07c0 3220 0003 1a20 0003  MOVE   @33220h,@31A20h,1
03450: 4508                      SUB    A8,A8
03460: 0788 3220 0003            MOVE   A8,@33220h,1
03490: 1828                      MOVK   1h,A8
034a0: 0788 1a40 0003            MOVE   A8,@31A40h,1
034d0: b7ee 0040                 MOVE   *SP(40h),A14,1
034f0: 97ed                      MOVE   *SP+,A13,1
03500: 0962                      RETS   2h

_cp_one_shot_status:
03510: 098f 022c                 MMTM   SP,A6,A10,A12,A13
03530: 4dcd                      MOVE   A14,A13
03540: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
03560: 458c                      SUB    A12,A12
03570: 4d88                      MOVE   A12,A8
03580: 2468                      SLL    3h,A8
03590: 4148                      ADD    A10,A8
035a0: 4d86                      MOVE   A12,A6
035b0: 2466                      SLL    3h,A6
035c0: 0b26 3e20 0003            ADDI   33E20h,A6
035f0: 9cc8                      MOVB   *A6,*A8
03600: 102c                      INC    A12
03610: 260c                      SLL    10h,A12
03620: 2a0c                      SRA    10h,A12
03630: 350c                      CMPK   8h,A12
03640: c4f2                      JRLT   3570h
03650: 0570                      SETF   10h,1,0
03660: 05a8 3e00 0003            MOVE   @33E00h,A8,0
03690: b7ee 00a0                 MOVE   *SP(A0h),A14,1
036b0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
036d0: 0962                      RETS   2h

_cp_one_shot_auto_video:
036e0: 098f 002c                 MMTM   SP,A10,A12,A13
03700: 4dcd                      MOVE   A14,A13
03710: 0b0e 0340                 ADDI   340h,A14
03730: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
03750: 0570                      SETF   10h,1,0
03760: b588 0040                 MOVE   *A12(40h),A8,0
03780: 14c8                      SUBK   6h,A8
03790: cb02                      JRNE   37C0h
037a0: 1848                      MOVK   2h,A8
037b0: c001                      JR     37D0h
037c0: 1828                      MOVK   1h,A8
037d0: 0588 3e00 0003            MOVE   A8,@33E00h,0
03800: b588 0010                 MOVE   *A12(10h),A8,0
03820: 2468                      SLL    3h,A8
03830: 0b28 3e20 0003            ADDI   33E20h,A8
03860: 454a                      SUB    A10,A10
03870: 8d48                      MOVB   A10,*A8
03880: 1b88                      MOVK   1Ch,A8
03890: 830d                      MOVE   A8,*A13,1
038a0: 10e8                      ADDK   7h,A8
038b0: b30d 0020                 MOVE   A8,*A13(20h),1
038d0: 19ea                      MOVK   Fh,A10
038e0: b34d 0040                 MOVE   A10,*A13(40h),1
03900: 4fa2                      MOVE   A13,B2
03910: 0b12 0060                 ADDI   60h,B2
03930: 4f80                      MOVE   A12,B0
03940: 09d7 00a0                 MOVI   A0h,B7
03960: 00f3                      BLMOVE 1,1
03970: a3cf                      MOVE   A14,-*SP,1
03980: 93ae                      MOVE   A13,*A14+,1
03990: 1448                      SUBK   2h,A8
039a0: 930e                      MOVE   A8,*A14+,1
039b0: 0d5f 0000 0000            CALLA  0h
039e0: b7ee 0080                 MOVE   *SP(80h),A14,1
03a00: 09af 3400                 MMFM   SP,A10,A12,A13
03a20: 0962                      RETS   2h

_cp_one_shot_abc:
03a30: 098f 002c                 MMTM   SP,A10,A12,A13
03a50: 4dcd                      MOVE   A14,A13
03a60: 0b0e 0340                 ADDI   340h,A14
03a80: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
03aa0: 1888                      MOVK   4h,A8
03ab0: 0550                      SETF   10h,0,0
03ac0: 0588 3e00 0003            MOVE   A8,@33E00h,0
03af0: 0570                      SETF   10h,1,0
03b00: b588 0010                 MOVE   *A12(10h),A8,0
03b20: 2468                      SLL    3h,A8
03b30: 0b28 3e20 0003            ADDI   33E20h,A8
03b60: 454a                      SUB    A10,A10
03b70: 8d48                      MOVB   A10,*A8
03b80: 1b88                      MOVK   1Ch,A8
03b90: 830d                      MOVE   A8,*A13,1
03ba0: 10e8                      ADDK   7h,A8
03bb0: b30d 0020                 MOVE   A8,*A13(20h),1
03bd0: 1a0a                      MOVK   10h,A10
03be0: b34d 0040                 MOVE   A10,*A13(40h),1
03c00: 4fa2                      MOVE   A13,B2
03c10: 0b12 0060                 ADDI   60h,B2
03c30: 4f80                      MOVE   A12,B0
03c40: 09d7 00a0                 MOVI   A0h,B7
03c60: 00f3                      BLMOVE 1,1
03c70: a3cf                      MOVE   A14,-*SP,1
03c80: 93ae                      MOVE   A13,*A14+,1
03c90: 1448                      SUBK   2h,A8
03ca0: 930e                      MOVE   A8,*A14+,1
03cb0: 0d5f 0000 0000            CALLA  0h
03ce0: b7ee 0080                 MOVE   *SP(80h),A14,1
03d00: 09af 3400                 MMFM   SP,A10,A12,A13
03d20: 0962                      RETS   2h

_cp_suspend_auto_video:
03d30: a38f                      MOVE   A12,-*SP,1
03d40: 182c                      MOVK   1h,A12
03d50: a3cf                      MOVE   A14,-*SP,1
03d60: 19e8                      MOVK   Fh,A8
03d70: 930e                      MOVE   A8,*A14+,1
03d80: 0d5f 0000 0000            CALLA  0h
03db0: 4f0e                      MOVE   A8,B14
03dc0: cb09                      JRNE   3E60h
03dd0: a3cf                      MOVE   A14,-*SP,1
03de0: 19e8                      MOVK   Fh,A8
03df0: 930e                      MOVE   A8,*A14+,1
03e00: 0d5f 0000 0000            CALLA  0h
03e30: 4f0e                      MOVE   A8,B14
03e40: cb01                      JRNE   3E60h
03e50: 458c                      SUB    A12,A12
03e60: 4d88                      MOVE   A12,A8
03e70: cbed                      JRNE   3D50h
03e80: 97ec                      MOVE   *SP+,A12,1
03e90: 0960                      RETS   

_cp_set_new_4qbsd:
03ea0: a3af                      MOVE   A13,-*SP,1
03eb0: 4dcd                      MOVE   A14,A13
03ec0: 0550                      SETF   10h,0,0
03ed0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
03ef0: 0588 3e60 0003            MOVE   A8,@33E60h,0
03f20: b7ee 0040                 MOVE   *SP(40h),A14,1
03f40: 97ed                      MOVE   *SP+,A13,1
03f50: 0962                      RETS   2h

_pass_float:
03f60: 098f 022c                 MMTM   SP,A6,A10,A12,A13
03f80: 4dcd                      MOVE   A14,A13
03f90: 0b0e 0240                 ADDI   240h,A14
03fb0: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
03fd0: 07ac f0e0 0002            MOVE   @2F0E0h,A12,1
04000: a3cf                      MOVE   A14,-*SP,1
04010: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
04030: 93ae                      MOVE   A13,*A14+,1
04040: 0d5f e300 0002            CALLA  2E300h
04070: 934e                      MOVE   A10,*A14+,1
04080: 0d5f 4220 0002            CALLA  24220h
040b0: 4508                      SUB    A8,A8
040c0: 930e                      MOVE   A8,*A14+,1
040d0: 930e                      MOVE   A8,*A14+,1
040e0: 0d5f 6f90 0002            CALLA  26F90h
04110: ca0e                      JREQ   4200h
04120: 934e                      MOVE   A10,*A14+,1
04130: 0d5f adc0 0002            CALLA  2ADC0h
04160: a7ca                      MOVE   -*A14,A10,1
04170: a3cf                      MOVE   A14,-*SP,1
04180: 09e8 f0c0 0002            MOVI   2F0C0h,A8
041b0: 930e                      MOVE   A8,*A14+,1
041c0: 93ae                      MOVE   A13,*A14+,1
041d0: 0d5f e1b0 0002            CALLA  2E1B0h
04200: 934e                      MOVE   A10,*A14+,1
04210: 0d5f 4500 0002            CALLA  24500h
04240: 4d06                      MOVE   A8,A6
04250: a3cf                      MOVE   A14,-*SP,1
04260: 4da8                      MOVE   A13,A8
04270: 0b08 01a0                 ADDI   1A0h,A8
04290: 930e                      MOVE   A8,*A14+,1
042a0: 92ce                      MOVE   A6,*A14+,1
042b0: 0d5f da10 0002            CALLA  2DA10h
042e0: a3cf                      MOVE   A14,-*SP,1
042f0: 4da8                      MOVE   A13,A8
04300: 0b08 01a0                 ADDI   1A0h,A8
04320: 930e                      MOVE   A8,*A14+,1
04330: 93ae                      MOVE   A13,*A14+,1
04340: 0d5f e1b0 0002            CALLA  2E1B0h
04370: a3cf                      MOVE   A14,-*SP,1
04380: 09e8 f0d0 0002            MOVI   2F0D0h,A8
043b0: 930e                      MOVE   A8,*A14+,1
043c0: 93ae                      MOVE   A13,*A14+,1
043d0: 0d5f e1b0 0002            CALLA  2E1B0h
04400: 4cc8                      MOVE   A6,A8
04410: 0d5f 5060 0002            CALLA  25060h
04440: 934e                      MOVE   A10,*A14+,1
04450: 0d5f 8bb0 0002            CALLA  28BB0h
04480: a7ca                      MOVE   -*A14,A10,1
04490: 938e                      MOVE   A12,*A14+,1
044a0: 934e                      MOVE   A10,*A14+,1
044b0: 0d5f a5f0 0002            CALLA  2A5F0h
044e0: a7ca                      MOVE   -*A14,A10,1
044f0: 07ac f100 0002            MOVE   @2F100h,A12,1
04520: 934e                      MOVE   A10,*A14+,1
04530: 938e                      MOVE   A12,*A14+,1
04540: 0d5f 99b0 0002            CALLA  299B0h
04570: 0d5f 4500 0002            CALLA  24500h
045a0: 4d06                      MOVE   A8,A6
045b0: a3cf                      MOVE   A14,-*SP,1
045c0: 4da8                      MOVE   A13,A8
045d0: 0b08 01a0                 ADDI   1A0h,A8
045f0: 930e                      MOVE   A8,*A14+,1
04600: 92ce                      MOVE   A6,*A14+,1
04610: 0d5f da10 0002            CALLA  2DA10h
04640: a3cf                      MOVE   A14,-*SP,1
04650: 4da8                      MOVE   A13,A8
04660: 0b08 01a0                 ADDI   1A0h,A8
04680: 930e                      MOVE   A8,*A14+,1
04690: 93ae                      MOVE   A13,*A14+,1
046a0: 0d5f e1b0 0002            CALLA  2E1B0h
046d0: 4cc8                      MOVE   A6,A8
046e0: 0d5f 5060 0002            CALLA  25060h
04710: 938e                      MOVE   A12,*A14+,1
04720: 0d5f a5f0 0002            CALLA  2A5F0h
04750: 934e                      MOVE   A10,*A14+,1
04760: 0d5f 8bb0 0002            CALLA  28BB0h
04790: a7ca                      MOVE   -*A14,A10,1
047a0: 938e                      MOVE   A12,*A14+,1
047b0: 0d5f 4220 0002            CALLA  24220h
047e0: 44c6                      SUB    A6,A6
047f0: 09e8 0000 4024            MOVI   40240000h,A8
04820: 930e                      MOVE   A8,*A14+,1
04830: 92ce                      MOVE   A6,*A14+,1
04840: 0d5f 7680 0002            CALLA  27680h
04870: 0d5f 34e0 0002            CALLA  234E0h
048a0: a7cc                      MOVE   -*A14,A12,1
048b0: 938e                      MOVE   A12,*A14+,1
048c0: 0d5f 4220 0002            CALLA  24220h
048f0: 09e8 f120 0002            MOVI   2F120h,A8
04920: 9b0e                      MOVE   *A8+,*A14+,1
04930: 9b0e                      MOVE   *A8+,*A14+,1
04940: 0d5f 6f70 0002            CALLA  26F70h
04970: caba                      JREQ   4520h
04980: a3cf                      MOVE   A14,-*SP,1
04990: 92ce                      MOVE   A6,*A14+,1
049a0: 93ae                      MOVE   A13,*A14+,1
049b0: 0d5f 0000 0000            CALLA  0h
049e0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
04a00: 09af 3440                 MMFM   SP,A6,A10,A12,A13
04a20: 0962                      RETS   2h

_set_input_offset:
04a30: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
04a50: 4dcd                      MOVE   A14,A13
04a60: 0550                      SETF   10h,0,0
04a70: b5a4 ffe0                 MOVE   *A13(FFE0h),A4,0
04a90: 09ca 0064                 MOVI   64h,A10
04ab0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
04ad0: 0d5f 4220 0002            CALLA  24220h
04b00: 4508                      SUB    A8,A8
04b10: 09e2 0000 4049            MOVI   40490000h,A2
04b40: 924e                      MOVE   A2,*A14+,1
04b50: 930e                      MOVE   A8,*A14+,1
04b60: 0d5f 5dd0 0002            CALLA  25DD0h
04b90: 4508                      SUB    A8,A8
04ba0: 09e2 0000 4000            MOVI   40000000h,A2
04bd0: 924e                      MOVE   A2,*A14+,1
04be0: 930e                      MOVE   A8,*A14+,1
04bf0: 0d5f 8130 0002            CALLA  28130h
04c20: 0d5f 34e0 0002            CALLA  234E0h
04c50: a7c6                      MOVE   -*A14,A6,1
04c60: 1a08                      MOVK   10h,A8
04c70: 0788 32a0 0003            MOVE   A8,@332A0h,1
04ca0: 19e2                      MOVK   Fh,A2
04cb0: 0782 32c0 0003            MOVE   A2,@332C0h,1
04ce0: 18e2                      MOVK   7h,A2
04cf0: 0782 32e0 0003            MOVE   A2,@332E0h,1
04d20: 458c                      SUB    A12,A12
04d30: 4d82                      MOVE   A12,A2
04d40: 2462                      SLL    3h,A2
04d50: 0b22 1b00 0003            ADDI   31B00h,A2
04d80: 8e42                      MOVB   *A2,A2
04d90: 4882                      CMP    A4,A2
04da0: cb26                      JRNE   5010h
04db0: 05ec 3300 0003            MOVB   A12,@33300h
04de0: 0786 3320 0003            MOVE   A6,@33320h,1
04e10: a3cf                      MOVE   A14,-*SP,1
04e20: 09e2 32a0 0003            MOVI   332A0h,A2
04e50: 924e                      MOVE   A2,*A14+,1
04e60: 19a8                      MOVK   Dh,A8
04e70: 930e                      MOVE   A8,*A14+,1
04e80: 0d5f 0000 0000            CALLA  0h
04eb0: 4d08                      MOVE   A8,A8
04ec0: cb13                      JRNE   5000h
04ed0: c013                      JR     5010h
04ee0: a3cf                      MOVE   A14,-*SP,1
04ef0: 1822                      MOVK   1h,A2
04f00: 924e                      MOVE   A2,*A14+,1
04f10: 0d5f 0000 0000            CALLA  0h
04f40: a3cf                      MOVE   A14,-*SP,1
04f50: 09e8 32a0 0003            MOVI   332A0h,A8
04f80: 930e                      MOVE   A8,*A14+,1
04f90: 19a2                      MOVK   Dh,A2
04fa0: 924e                      MOVE   A2,*A14+,1
04fb0: 0d5f 0000 0000            CALLA  0h
04fe0: 4d08                      MOVE   A8,A8
04ff0: ca01                      JREQ   5010h
05000: 3e6a                      DSJS   A10,4EE0h
05010: 102c                      INC    A12
05020: 260c                      SLL    10h,A12
05030: 2a0c                      SRA    10h,A12
05040: 350c                      CMPK   8h,A12
05050: c4cd                      JRLT   4D30h
05060: b7ee 00e0                 MOVE   *SP(E0h),A14,1
05080: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
050a0: 0962                      RETS   2h

_set_input_gain:
050b0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
050d0: 4dcd                      MOVE   A14,A13
050e0: b7a4 ffc0                 MOVE   *A13(FFC0h),A4,1
05100: 0550                      SETF   10h,0,0
05110: b5a6 ffe0                 MOVE   *A13(FFE0h),A6,0
05130: 09ca 0064                 MOVI   64h,A10
05150: 1a08                      MOVK   10h,A8
05160: 0788 32a0 0003            MOVE   A8,@332A0h,1
05190: 19e8                      MOVK   Fh,A8
051a0: 0788 32c0 0003            MOVE   A8,@332C0h,1
051d0: 1908                      MOVK   8h,A8
051e0: 0788 32e0 0003            MOVE   A8,@332E0h,1
05210: 458c                      SUB    A12,A12
05220: 4d88                      MOVE   A12,A8
05230: 2468                      SLL    3h,A8
05240: 0b28 1b00 0003            ADDI   31B00h,A8
05270: 8f08                      MOVB   *A8,A8
05280: 48c8                      CMP    A6,A8
05290: cb26                      JRNE   5500h
052a0: 05ec 3300 0003            MOVB   A12,@33300h
052d0: 0784 3320 0003            MOVE   A4,@33320h,1
05300: a3cf                      MOVE   A14,-*SP,1
05310: 09e8 32a0 0003            MOVI   332A0h,A8
05340: 930e                      MOVE   A8,*A14+,1
05350: 19a8                      MOVK   Dh,A8
05360: 930e                      MOVE   A8,*A14+,1
05370: 0d5f 0000 0000            CALLA  0h
053a0: 4d08                      MOVE   A8,A8
053b0: cb13                      JRNE   54F0h
053c0: c013                      JR     5500h
053d0: a3cf                      MOVE   A14,-*SP,1
053e0: 1828                      MOVK   1h,A8
053f0: 930e                      MOVE   A8,*A14+,1
05400: 0d5f 0000 0000            CALLA  0h
05430: a3cf                      MOVE   A14,-*SP,1
05440: 09e8 32a0 0003            MOVI   332A0h,A8
05470: 930e                      MOVE   A8,*A14+,1
05480: 19a8                      MOVK   Dh,A8
05490: 930e                      MOVE   A8,*A14+,1
054a0: 0d5f 0000 0000            CALLA  0h
054d0: 4d08                      MOVE   A8,A8
054e0: ca01                      JREQ   5500h
054f0: 3e6a                      DSJS   A10,53D0h
05500: 102c                      INC    A12
05510: 260c                      SLL    10h,A12
05520: 2a0c                      SRA    10h,A12
05530: 350c                      CMPK   8h,A12
05540: c4cd                      JRLT   5220h
05550: b7ee 00c0                 MOVE   *SP(C0h),A14,1
05570: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
05590: 0962                      RETS   2h

_set_PM_level:
055a0: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
055c0: 4dcd                      MOVE   A14,A13
055d0: b7a4 ffc0                 MOVE   *A13(FFC0h),A4,1
055f0: 0550                      SETF   10h,0,0
05600: b5a6 ffe0                 MOVE   *A13(FFE0h),A6,0
05620: 09cc 0064                 MOVI   64h,A12
05640: 928e                      MOVE   A4,*A14+,1
05650: 0d5f 4220 0002            CALLA  24220h
05680: 4508                      SUB    A8,A8
05690: 09e2 0000 3fe0            MOVI   3FE00000h,A2
056c0: 924e                      MOVE   A2,*A14+,1
056d0: 930e                      MOVE   A8,*A14+,1
056e0: 0d5f 5f40 0002            CALLA  25F40h
05710: 0d5f 3970 0002            CALLA  23970h
05740: 4d0a                      MOVE   A8,A10
05750: 050a                      SEXT   A10,0
05760: 4cc8                      MOVE   A6,A8
05770: 1428                      DEC    A8
05780: ca1a                      JREQ   5930h
05790: 1428                      DEC    A8
057a0: ca0c                      JREQ   5870h
057b0: 0570                      SETF   10h,1,0
057c0: 05a8 3280 0003            MOVE   @33280h,A8,0
057f0: 1028                      INC    A8
05800: ca22                      JREQ   5A30h
05810: 05a8 3280 0003            MOVE   @33280h,A8,0
05840: 4948                      CMP    A10,A8
05850: cb19                      JRNE   59F0h
05860: c061                      JR     5E80h
05870: 0570                      SETF   10h,1,0
05880: 05a8 3270 0003            MOVE   @33270h,A8,0
058b0: 1028                      INC    A8
058c0: ca1e                      JREQ   5AB0h
058d0: 05a8 3270 0003            MOVE   @33270h,A8,0
05900: 4948                      CMP    A10,A8
05910: cb15                      JRNE   5A70h
05920: c055                      JR     5E80h
05930: 0570                      SETF   10h,1,0
05940: 05a8 3260 0003            MOVE   @33260h,A8,0
05970: 1028                      INC    A8
05980: ca1a                      JREQ   5B30h
05990: 05a8 3260 0003            MOVE   @33260h,A8,0
059c0: 4948                      CMP    A10,A8
059d0: cb11                      JRNE   5AF0h
059e0: c049                      JR     5E80h
059f0: 058a 3280 0003            MOVE   A10,@33280h,0
05a20: c013                      JR     5B60h
05a30: 058a 3280 0003            MOVE   A10,@33280h,0
05a60: c00f                      JR     5B60h
05a70: 058a 3270 0003            MOVE   A10,@33270h,0
05aa0: c00b                      JR     5B60h
05ab0: 058a 3270 0003            MOVE   A10,@33270h,0
05ae0: c007                      JR     5B60h
05af0: 058a 3260 0003            MOVE   A10,@33260h,0
05b20: c003                      JR     5B60h
05b30: 058a 3260 0003            MOVE   A10,@33260h,0
05b60: 19ca                      MOVK   Eh,A10
05b70: 078a 33c0 0003            MOVE   A10,@333C0h,1
05ba0: 1a08                      MOVK   10h,A8
05bb0: 0788 33e0 0003            MOVE   A8,@333E0h,1
05be0: 18e2                      MOVK   7h,A2
05bf0: 0782 3400 0003            MOVE   A2,@33400h,1
05c20: 0586 3440 0003            MOVE   A6,@33440h,0
05c50: 0784 3420 0003            MOVE   A4,@33420h,1
05c80: a3cf                      MOVE   A14,-*SP,1
05c90: 09e2 33c0 0003            MOVI   333C0h,A2
05cc0: 924e                      MOVE   A2,*A14+,1
05cd0: 1a2a                      MOVK   11h,A10
05ce0: 934e                      MOVE   A10,*A14+,1
05cf0: 0d5f 0000 0000            CALLA  0h
05d20: 4d08                      MOVE   A8,A8
05d30: cb13                      JRNE   5E70h
05d40: c013                      JR     5E80h
05d50: a3cf                      MOVE   A14,-*SP,1
05d60: 182a                      MOVK   1h,A10
05d70: 934e                      MOVE   A10,*A14+,1
05d80: 0d5f 0000 0000            CALLA  0h
05db0: a3cf                      MOVE   A14,-*SP,1
05dc0: 09e6 33c0 0003            MOVI   333C0h,A6
05df0: 92ce                      MOVE   A6,*A14+,1
05e00: 1a24                      MOVK   11h,A4
05e10: 928e                      MOVE   A4,*A14+,1
05e20: 0d5f 0000 0000            CALLA  0h
05e50: 4d02                      MOVE   A8,A2
05e60: ca01                      JREQ   5E80h
05e70: 3e6c                      DSJS   A12,5D50h
05e80: b7ee 00e0                 MOVE   *SP(E0h),A14,1
05ea0: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
05ec0: 0962                      RETS   2h

_EHT_turn_scintillator:
05ed0: 098f 000c                 MMTM   SP,A12,A13
05ef0: 4dcd                      MOVE   A14,A13
05f00: 09cc 0064                 MOVI   64h,A12
05f20: 1948                      MOVK   Ah,A8
05f30: 0788 33c0 0003            MOVE   A8,@333C0h,1
05f60: 1a08                      MOVK   10h,A8
05f70: 0788 33e0 0003            MOVE   A8,@333E0h,1
05fa0: 1968                      MOVK   Bh,A8
05fb0: 0788 3400 0003            MOVE   A8,@33400h,1
05fe0: 0550                      SETF   10h,0,0
05ff0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
06010: 0588 3420 0003            MOVE   A8,@33420h,0
06040: a3cf                      MOVE   A14,-*SP,1
06050: 09e8 33c0 0003            MOVI   333C0h,A8
06080: 930e                      MOVE   A8,*A14+,1
06090: 1a28                      MOVK   11h,A8
060a0: 930e                      MOVE   A8,*A14+,1
060b0: 0d5f 0000 0000            CALLA  0h
060e0: 4d08                      MOVE   A8,A8
060f0: cb13                      JRNE   6230h
06100: c013                      JR     6240h
06110: a3cf                      MOVE   A14,-*SP,1
06120: 1828                      MOVK   1h,A8
06130: 930e                      MOVE   A8,*A14+,1
06140: 0d5f 0000 0000            CALLA  0h
06170: a3cf                      MOVE   A14,-*SP,1
06180: 09e8 33c0 0003            MOVI   333C0h,A8
061b0: 930e                      MOVE   A8,*A14+,1
061c0: 1a28                      MOVK   11h,A8
061d0: 930e                      MOVE   A8,*A14+,1
061e0: 0d5f 0000 0000            CALLA  0h
06210: 4d08                      MOVE   A8,A8
06220: ca01                      JREQ   6240h
06230: 3e6c                      DSJS   A12,6110h
06240: b7ee 0060                 MOVE   *SP(60h),A14,1
06260: 09af 3000                 MMFM   SP,A12,A13
06280: 0962                      RETS   2h

_set_4QBSD_amplifier:
06290: 098f 000c                 MMTM   SP,A12,A13
062b0: 4dcd                      MOVE   A14,A13
062c0: 09cc 0064                 MOVI   64h,A12
062e0: 1928                      MOVK   9h,A8
062f0: 0788 3340 0003            MOVE   A8,@33340h,1
06320: 18e8                      MOVK   7h,A8
06330: 0788 3360 0003            MOVE   A8,@33360h,1
06360: 19a8                      MOVK   Dh,A8
06370: 0788 3380 0003            MOVE   A8,@33380h,1
063a0: 0550                      SETF   10h,0,0
063b0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
063d0: 05e8 33a0 0003            MOVB   A8,@333A0h
06400: a3cf                      MOVE   A14,-*SP,1
06410: 09e8 3340 0003            MOVI   33340h,A8
06440: 930e                      MOVE   A8,*A14+,1
06450: 1888                      MOVK   4h,A8
06460: 930e                      MOVE   A8,*A14+,1
06470: 0d5f 0000 0000            CALLA  0h
064a0: 4d08                      MOVE   A8,A8
064b0: cb13                      JRNE   65F0h
064c0: c013                      JR     6600h
064d0: a3cf                      MOVE   A14,-*SP,1
064e0: 1828                      MOVK   1h,A8
064f0: 930e                      MOVE   A8,*A14+,1
06500: 0d5f 0000 0000            CALLA  0h
06530: a3cf                      MOVE   A14,-*SP,1
06540: 09e8 3340 0003            MOVI   33340h,A8
06570: 930e                      MOVE   A8,*A14+,1
06580: 1888                      MOVK   4h,A8
06590: 930e                      MOVE   A8,*A14+,1
065a0: 0d5f 0000 0000            CALLA  0h
065d0: 4d08                      MOVE   A8,A8
065e0: ca01                      JREQ   6600h
065f0: 3e6c                      DSJS   A12,64D0h
06600: b7ee 0060                 MOVE   *SP(60h),A14,1
06620: 09af 3000                 MMFM   SP,A12,A13
06640: 0962                      RETS   2h

_set_SC_amplifier:
06650: 098f 000c                 MMTM   SP,A12,A13
06670: 4dcd                      MOVE   A14,A13
06680: 09cc 0064                 MOVI   64h,A12
066a0: 1928                      MOVK   9h,A8
066b0: 0788 3340 0003            MOVE   A8,@33340h,1
066e0: 18e8                      MOVK   7h,A8
066f0: 0788 3360 0003            MOVE   A8,@33360h,1
06720: 19c8                      MOVK   Eh,A8
06730: 0788 3380 0003            MOVE   A8,@33380h,1
06760: 0550                      SETF   10h,0,0
06770: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
06790: 05e8 33a0 0003            MOVB   A8,@333A0h
067c0: a3cf                      MOVE   A14,-*SP,1
067d0: 09e8 3340 0003            MOVI   33340h,A8
06800: 930e                      MOVE   A8,*A14+,1
06810: 1888                      MOVK   4h,A8
06820: 930e                      MOVE   A8,*A14+,1
06830: 0d5f 0000 0000            CALLA  0h
06860: 4d08                      MOVE   A8,A8
06870: cb13                      JRNE   69B0h
06880: c013                      JR     69C0h
06890: a3cf                      MOVE   A14,-*SP,1
068a0: 1828                      MOVK   1h,A8
068b0: 930e                      MOVE   A8,*A14+,1
068c0: 0d5f 0000 0000            CALLA  0h
068f0: a3cf                      MOVE   A14,-*SP,1
06900: 09e8 3340 0003            MOVI   33340h,A8
06930: 930e                      MOVE   A8,*A14+,1
06940: 1888                      MOVK   4h,A8
06950: 930e                      MOVE   A8,*A14+,1
06960: 0d5f 0000 0000            CALLA  0h
06990: 4d08                      MOVE   A8,A8
069a0: ca01                      JREQ   69C0h
069b0: 3e6c                      DSJS   A12,6890h
069c0: b7ee 0060                 MOVE   *SP(60h),A14,1
069e0: 09af 3000                 MMFM   SP,A12,A13
06a00: 0962                      RETS   2h

_convert_brightness_to_PM_val:
06a10: 098f 000c                 MMTM   SP,A12,A13
06a30: 4dcd                      MOVE   A14,A13
06a40: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
06a60: 0d5f 4220 0002            CALLA  24220h
06a90: 4508                      SUB    A8,A8
06aa0: 09ec 2000 408c            MOVI   408C2000h,A12
06ad0: 938e                      MOVE   A12,*A14+,1
06ae0: 930e                      MOVE   A8,*A14+,1
06af0: 0d5f 8130 0002            CALLA  28130h
06b20: 4508                      SUB    A8,A8
06b30: 09ec 0000 4059            MOVI   40590000h,A12
06b60: 938e                      MOVE   A12,*A14+,1
06b70: 930e                      MOVE   A8,*A14+,1
06b80: 0d5f 7680 0002            CALLA  27680h
06bb0: 4508                      SUB    A8,A8
06bc0: 938e                      MOVE   A12,*A14+,1
06bd0: 930e                      MOVE   A8,*A14+,1
06be0: 0d5f 5f40 0002            CALLA  25F40h
06c10: 0d5f 34e0 0002            CALLA  234E0h
06c40: b7ed 0060                 MOVE   *SP(60h),A13,1
06c60: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
06c90: b7ee 0060                 MOVE   *SP(60h),A14,1
06cb0: 09af 3000                 MMFM   SP,A12,A13
06cd0: 0962                      RETS   2h

_gsp_set_range_auto:
06ce0: a3af                      MOVE   A13,-*SP,1
06cf0: 4dcd                      MOVE   A14,A13
06d00: 0570                      SETF   10h,1,0
06d10: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
06d30: 0588 3e80 0003            MOVE   A8,@33E80h,0
06d60: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
06d80: 0588 3e70 0003            MOVE   A8,@33E70h,0
06db0: b7ee 0040                 MOVE   *SP(40h),A14,1
06dd0: 97ed                      MOVE   *SP+,A13,1
06de0: 0962                      RETS   2h

_convert_contrast_to_4QBSDA_vals:
06df0: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
06e10: 4dcd                      MOVE   A14,A13
06e20: 0b0e 0040                 ADDI   40h,A14
06e40: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
06e60: 07a4 f160 0002            MOVE   @2F160h,A4,1
06e90: 0550                      SETF   10h,0,0
06ea0: 05a8 3e70 0003            MOVE   @33E70h,A8,0
06ed0: ca00 01ad                 JREQ   89C0h
06ef0: 07aa 3240 0003            MOVE   @33240h,A10,1
06f20: 0b0e 0040                 ADDI   40h,A14
06f40: a3cf                      MOVE   A14,-*SP,1
06f50: 09e8 0000 42c8            MOVI   42C80000h,A8
06f80: 930e                      MOVE   A8,*A14+,1
06f90: 934e                      MOVE   A10,*A14+,1
06fa0: 0d5f 99b0 0002            CALLA  299B0h
06fd0: 0d5f 4220 0002            CALLA  24220h
07000: 0d5f c310 0002            CALLA  2C310h
07030: 4508                      SUB    A8,A8
07040: 09e2 0000 4039            MOVI   40390000h,A2
07070: 924e                      MOVE   A2,*A14+,1
07080: 930e                      MOVE   A8,*A14+,1
07090: 0d5f 7680 0002            CALLA  27680h
070c0: 0d5f 34e0 0002            CALLA  234E0h
070f0: a7c6                      MOVE   -*A14,A6,1
07100: 0550                      SETF   10h,0,0
07110: 05a8 3e60 0003            MOVE   @33E60h,A8,0
07140: ca00 00ca                 JREQ   7E00h
07160: 938e                      MOVE   A12,*A14+,1
07170: 0d5f 4220 0002            CALLA  24220h
071a0: 4508                      SUB    A8,A8
071b0: 924e                      MOVE   A2,*A14+,1
071c0: 930e                      MOVE   A8,*A14+,1
071d0: 0d5f 6fb0 0002            CALLA  26FB0h
07200: ca00 009d                 JREQ   7BF0h
07220: 938e                      MOVE   A12,*A14+,1
07230: 0d5f 4220 0002            CALLA  24220h
07260: 4508                      SUB    A8,A8
07270: 09e2 0000 4049            MOVI   40490000h,A2
072a0: 924e                      MOVE   A2,*A14+,1
072b0: 930e                      MOVE   A8,*A14+,1
072c0: 0d5f 6fb0 0002            CALLA  26FB0h
072f0: ca63                      JREQ   7930h
07300: 938e                      MOVE   A12,*A14+,1
07310: 0d5f 4220 0002            CALLA  24220h
07340: 4508                      SUB    A8,A8
07350: 09e2 c000 4052            MOVI   4052C000h,A2
07380: 924e                      MOVE   A2,*A14+,1
07390: 930e                      MOVE   A8,*A14+,1
073a0: 0d5f 6fb0 0002            CALLA  26FB0h
073d0: ca29                      JREQ   7670h
073e0: 1868                      MOVK   3h,A8
073f0: b10d 0020                 MOVE   A8,*A13(20h),0
07410: 934e                      MOVE   A10,*A14+,1
07420: 0d5f 4220 0002            CALLA  24220h
07450: 0b0e 0040                 ADDI   40h,A14
07470: a3cf                      MOVE   A14,-*SP,1
07480: 92ce                      MOVE   A6,*A14+,1
07490: 0d5f 4220 0002            CALLA  24220h
074c0: 938e                      MOVE   A12,*A14+,1
074d0: 0d5f 4220 0002            CALLA  24220h
07500: 454a                      SUB    A10,A10
07510: 924e                      MOVE   A2,*A14+,1
07520: 934e                      MOVE   A10,*A14+,1
07530: 0d5f 5dd0 0002            CALLA  25DD0h
07560: 0d5f 8130 0002            CALLA  28130h
07590: 0d5f ae30 0002            CALLA  2AE30h
075c0: 0d5f 8130 0002            CALLA  28130h
075f0: 0d5f 34e0 0002            CALLA  234E0h
07620: a7c6                      MOVE   -*A14,A6,1
07630: 82cd                      MOVE   A6,*A13,1
07640: 4da8                      MOVE   A13,A8
07650: c000 0163                 JR     8CA0h
07670: 1848                      MOVK   2h,A8
07680: b10d 0020                 MOVE   A8,*A13(20h),0
076a0: 934e                      MOVE   A10,*A14+,1
076b0: 0d5f 4220 0002            CALLA  24220h
076e0: 0b0e 0040                 ADDI   40h,A14
07700: a3cf                      MOVE   A14,-*SP,1
07710: 92ce                      MOVE   A6,*A14+,1
07720: 0d5f 4220 0002            CALLA  24220h
07750: 938e                      MOVE   A12,*A14+,1
07760: 0d5f 4220 0002            CALLA  24220h
07790: 454a                      SUB    A10,A10
077a0: 09e6 0000 4049            MOVI   40490000h,A6
077d0: 92ce                      MOVE   A6,*A14+,1
077e0: 934e                      MOVE   A10,*A14+,1
077f0: 0d5f 5dd0 0002            CALLA  25DD0h
07820: 0d5f 8130 0002            CALLA  28130h
07850: 0d5f ae30 0002            CALLA  2AE30h
07880: 0d5f 8130 0002            CALLA  28130h
078b0: 0d5f 34e0 0002            CALLA  234E0h
078e0: a7c8                      MOVE   -*A14,A8,1
078f0: 830d                      MOVE   A8,*A13,1
07900: 4da8                      MOVE   A13,A8
07910: c000 0137                 JR     8CA0h
07930: 1828                      MOVK   1h,A8
07940: b10d 0020                 MOVE   A8,*A13(20h),0
07960: 934e                      MOVE   A10,*A14+,1
07970: 0d5f 4220 0002            CALLA  24220h
079a0: 0b0e 0040                 ADDI   40h,A14
079c0: a3cf                      MOVE   A14,-*SP,1
079d0: 92ce                      MOVE   A6,*A14+,1
079e0: 0d5f 4220 0002            CALLA  24220h
07a10: 938e                      MOVE   A12,*A14+,1
07a20: 0d5f 4220 0002            CALLA  24220h
07a50: 454a                      SUB    A10,A10
07a60: 09e6 0000 4039            MOVI   40390000h,A6
07a90: 92ce                      MOVE   A6,*A14+,1
07aa0: 934e                      MOVE   A10,*A14+,1
07ab0: 0d5f 5dd0 0002            CALLA  25DD0h
07ae0: 0d5f 8130 0002            CALLA  28130h
07b10: 0d5f ae30 0002            CALLA  2AE30h
07b40: 0d5f 8130 0002            CALLA  28130h
07b70: 0d5f 34e0 0002            CALLA  234E0h
07ba0: a7c8                      MOVE   -*A14,A8,1
07bb0: 830d                      MOVE   A8,*A13,1
07bc0: 4da8                      MOVE   A13,A8
07bd0: c000 010b                 JR     8CA0h
07bf0: 4508                      SUB    A8,A8
07c00: b10d 0020                 MOVE   A8,*A13(20h),0
07c20: 934e                      MOVE   A10,*A14+,1
07c30: 0d5f 4220 0002            CALLA  24220h
07c60: 0b0e 0040                 ADDI   40h,A14
07c80: a3cf                      MOVE   A14,-*SP,1
07c90: 92ce                      MOVE   A6,*A14+,1
07ca0: 938e                      MOVE   A12,*A14+,1
07cb0: 0d5f a5f0 0002            CALLA  2A5F0h
07ce0: 0d5f 4220 0002            CALLA  24220h
07d10: 0d5f ae30 0002            CALLA  2AE30h
07d40: 0d5f 8130 0002            CALLA  28130h
07d70: 0d5f 34e0 0002            CALLA  234E0h
07da0: a7ca                      MOVE   -*A14,A10,1
07db0: 834d                      MOVE   A10,*A13,1
07dc0: 834d                      MOVE   A10,*A13,1
07dd0: 4da8                      MOVE   A13,A8
07de0: c000 00ea                 JR     8CA0h
07e00: 938e                      MOVE   A12,*A14+,1
07e10: 0d5f 4220 0002            CALLA  24220h
07e40: 44c6                      SUB    A6,A6
07e50: 924e                      MOVE   A2,*A14+,1
07e60: 92ce                      MOVE   A6,*A14+,1
07e70: 0d5f 6fb0 0002            CALLA  26FB0h
07ea0: ca00 0096                 JREQ   8820h
07ec0: 938e                      MOVE   A12,*A14+,1
07ed0: 0d5f 4220 0002            CALLA  24220h
07f00: 09e8 0000 4049            MOVI   40490000h,A8
07f30: 930e                      MOVE   A8,*A14+,1
07f40: 92ce                      MOVE   A6,*A14+,1
07f50: 0d5f 6fb0 0002            CALLA  26FB0h
07f80: ca62                      JREQ   85B0h
07f90: 938e                      MOVE   A12,*A14+,1
07fa0: 0d5f 4220 0002            CALLA  24220h
07fd0: 09e8 c000 4052            MOVI   4052C000h,A8
08000: 930e                      MOVE   A8,*A14+,1
08010: 92ce                      MOVE   A6,*A14+,1
08020: 0d5f 6fb0 0002            CALLA  26FB0h
08050: ca2b                      JREQ   8310h
08060: 1868                      MOVK   3h,A8
08070: b10d 0020                 MOVE   A8,*A13(20h),0
08090: 938e                      MOVE   A12,*A14+,1
080a0: 0d5f 4220 0002            CALLA  24220h
080d0: 09e8 c000 4052            MOVI   4052C000h,A8
08100: 930e                      MOVE   A8,*A14+,1
08110: 92ce                      MOVE   A6,*A14+,1
08120: 0d5f 5dd0 0002            CALLA  25DD0h
08150: 09e8 c000 4050            MOVI   4050C000h,A8
08180: 930e                      MOVE   A8,*A14+,1
08190: 92ce                      MOVE   A6,*A14+,1
081a0: 0d5f 8130 0002            CALLA  28130h
081d0: 924e                      MOVE   A2,*A14+,1
081e0: 92ce                      MOVE   A6,*A14+,1
081f0: 0d5f 7680 0002            CALLA  27680h
08220: 934e                      MOVE   A10,*A14+,1
08230: 0d5f 4220 0002            CALLA  24220h
08260: 0d5f 5f40 0002            CALLA  25F40h
08290: 0d5f 34e0 0002            CALLA  234E0h
082c0: a7ca                      MOVE   -*A14,A10,1
082d0: 834d                      MOVE   A10,*A13,1
082e0: 4da8                      MOVE   A13,A8
082f0: c000 0099                 JR     8CA0h
08310: 1848                      MOVK   2h,A8
08320: b10d 0020                 MOVE   A8,*A13(20h),0
08340: 938e                      MOVE   A12,*A14+,1
08350: 0d5f 4220 0002            CALLA  24220h
08380: 09e8 0000 4049            MOVI   40490000h,A8
083b0: 930e                      MOVE   A8,*A14+,1
083c0: 92ce                      MOVE   A6,*A14+,1
083d0: 0d5f 5dd0 0002            CALLA  25DD0h
08400: 09e8 c000 4050            MOVI   4050C000h,A8
08430: 930e                      MOVE   A8,*A14+,1
08440: 92ce                      MOVE   A6,*A14+,1
08450: 0d5f 8130 0002            CALLA  28130h
08480: 924e                      MOVE   A2,*A14+,1
08490: 92ce                      MOVE   A6,*A14+,1
084a0: 0d5f 7680 0002            CALLA  27680h
084d0: 934e                      MOVE   A10,*A14+,1
084e0: 0d5f 4220 0002            CALLA  24220h
08510: 0d5f 5f40 0002            CALLA  25F40h
08540: 0d5f 34e0 0002            CALLA  234E0h
08570: a7ca                      MOVE   -*A14,A10,1
08580: 834d                      MOVE   A10,*A13,1
08590: 4da8                      MOVE   A13,A8
085a0: c06f                      JR     8CA0h
085b0: 1828                      MOVK   1h,A8
085c0: b10d 0020                 MOVE   A8,*A13(20h),0
085e0: 938e                      MOVE   A12,*A14+,1
085f0: 0d5f 4220 0002            CALLA  24220h
08620: 924e                      MOVE   A2,*A14+,1
08630: 92ce                      MOVE   A6,*A14+,1
08640: 0d5f 5dd0 0002            CALLA  25DD0h
08670: 09e8 c000 4050            MOVI   4050C000h,A8
086a0: 930e                      MOVE   A8,*A14+,1
086b0: 92ce                      MOVE   A6,*A14+,1
086c0: 0d5f 8130 0002            CALLA  28130h
086f0: 924e                      MOVE   A2,*A14+,1
08700: 92ce                      MOVE   A6,*A14+,1
08710: 0d5f 7680 0002            CALLA  27680h
08740: 934e                      MOVE   A10,*A14+,1
08750: 0d5f 4220 0002            CALLA  24220h
08780: 0d5f 5f40 0002            CALLA  25F40h
087b0: 0d5f 34e0 0002            CALLA  234E0h
087e0: a7ca                      MOVE   -*A14,A10,1
087f0: 834d                      MOVE   A10,*A13,1
08800: 4da8                      MOVE   A13,A8
08810: c048                      JR     8CA0h
08820: b0cd 0020                 MOVE   A6,*A13(20h),0
08840: 938e                      MOVE   A12,*A14+,1
08850: 0d5f 4220 0002            CALLA  24220h
08880: 09ea 0000 4059            MOVI   40590000h,A10
088b0: 934e                      MOVE   A10,*A14+,1
088c0: 92ce                      MOVE   A6,*A14+,1
088d0: 0d5f 8130 0002            CALLA  28130h
08900: 924e                      MOVE   A2,*A14+,1
08910: 92ce                      MOVE   A6,*A14+,1
08920: 0d5f 7680 0002            CALLA  27680h
08950: 0d5f 34e0 0002            CALLA  234E0h
08980: a7c8                      MOVE   -*A14,A8,1
08990: 830d                      MOVE   A8,*A13,1
089a0: 4da8                      MOVE   A13,A8
089b0: c02e                      JR     8CA0h
089c0: 05aa 3e80 0003            MOVE   @33E80h,A10,0
089f0: b14d 0020                 MOVE   A10,*A13(20h),0
08a10: 0b0e 0040                 ADDI   40h,A14
08a30: a3cf                      MOVE   A14,-*SP,1
08a40: 4442                      SUB    A2,A2
08a50: 09e4 0000 4059            MOVI   40590000h,A4
08a80: 928e                      MOVE   A4,*A14+,1
08a90: 924e                      MOVE   A2,*A14+,1
08aa0: 0d5f c310 0002            CALLA  2C310h
08ad0: 928e                      MOVE   A4,*A14+,1
08ae0: 924e                      MOVE   A2,*A14+,1
08af0: 0d5f 7680 0002            CALLA  27680h
08b20: 0d5f 34e0 0002            CALLA  234E0h
08b50: a7c6                      MOVE   -*A14,A6,1
08b60: 0b0e 0040                 ADDI   40h,A14
08b80: a3cf                      MOVE   A14,-*SP,1
08b90: 92ce                      MOVE   A6,*A14+,1
08ba0: 938e                      MOVE   A12,*A14+,1
08bb0: 0d5f a5f0 0002            CALLA  2A5F0h
08be0: 0d5f 4220 0002            CALLA  24220h
08c10: 0d5f ae30 0002            CALLA  2AE30h
08c40: 0d5f 34e0 0002            CALLA  234E0h
08c70: a7c6                      MOVE   -*A14,A6,1
08c80: 82cd                      MOVE   A6,*A13,1
08c90: 4da8                      MOVE   A13,A8
08ca0: b7ad ffe0                 MOVE   *A13(FFE0h),A13,1
08cc0: ca02                      JREQ   8CF0h
08cd0: 9b0d                      MOVE   *A8+,*A13+,1
08ce0: 8b0d                      MOVE   *A8,*A13,1
08cf0: b7ee 00e0                 MOVE   *SP(E0h),A14,1
08d10: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
08d30: 0962                      RETS   2h

_convert_contrast_to_SCA_vals:
08d40: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
08d60: 4dcd                      MOVE   A14,A13
08d70: 0b0e 0040                 ADDI   40h,A14
08d90: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
08db0: 934e                      MOVE   A10,*A14+,1
08dc0: 0d5f 4220 0002            CALLA  24220h
08df0: 4508                      SUB    A8,A8
08e00: 09e6 0000 402a            MOVI   402A0000h,A6
08e30: 92ce                      MOVE   A6,*A14+,1
08e40: 930e                      MOVE   A8,*A14+,1
08e50: 0d5f 8130 0002            CALLA  28130h
08e80: 4508                      SUB    A8,A8
08e90: 09e6 0000 4059            MOVI   40590000h,A6
08ec0: 92ce                      MOVE   A6,*A14+,1
08ed0: 930e                      MOVE   A8,*A14+,1
08ee0: 0d5f 7680 0002            CALLA  27680h
08f10: 0d5f 3f60 0002            CALLA  23F60h
08f40: 4d0c                      MOVE   A8,A12
08f50: 0550                      SETF   10h,0,0
08f60: 052c                      ZEXT   A12,0
08f70: 100e                      ADDK   20h,A14
08f80: a3cf                      MOVE   A14,-*SP,1
08f90: 09e8 0000 4140            MOVI   41400000h,A8
08fc0: 930e                      MOVE   A8,*A14+,1
08fd0: 4508                      SUB    A8,A8
08fe0: 930e                      MOVE   A8,*A14+,1
08ff0: 4d88                      MOVE   A12,A8
09000: 0d5f 5800 0002            CALLA  25800h
09030: 0d5f cdb0 0000            CALLA  CDB0h
09060: 0d5f 4a80 0002            CALLA  24A80h
09090: 4d0c                      MOVE   A8,A12
090a0: 0550                      SETF   10h,0,0
090b0: 052c                      ZEXT   A12,0
090c0: 1988                      MOVK   Ch,A8
090d0: 4588                      SUB    A12,A8
090e0: b10d 0020                 MOVE   A8,*A13(20h),0
09100: 4d88                      MOVE   A12,A8
09110: 0d5f 5800 0002            CALLA  25800h
09140: 0d5f 4220 0002            CALLA  24220h
09170: 4508                      SUB    A8,A8
09180: 92ce                      MOVE   A6,*A14+,1
09190: 930e                      MOVE   A8,*A14+,1
091a0: 0d5f 8130 0002            CALLA  28130h
091d0: 4508                      SUB    A8,A8
091e0: 09e4 0000 402a            MOVI   402A0000h,A4
09210: 928e                      MOVE   A4,*A14+,1
09220: 930e                      MOVE   A8,*A14+,1
09230: 0d5f 7680 0002            CALLA  27680h
09260: 0d5f 34e0 0002            CALLA  234E0h
09290: a7c6                      MOVE   -*A14,A6,1
092a0: 4d88                      MOVE   A12,A8
092b0: cb10                      JRNE   93C0h
092c0: 934e                      MOVE   A10,*A14+,1
092d0: 0d5f 4220 0002            CALLA  24220h
09300: 458c                      SUB    A12,A12
09310: 928e                      MOVE   A4,*A14+,1
09320: 938e                      MOVE   A12,*A14+,1
09330: 0d5f 8130 0002            CALLA  28130h
09360: 0d5f 34e0 0002            CALLA  234E0h
09390: a7c6                      MOVE   -*A14,A6,1
093a0: 82cd                      MOVE   A6,*A13,1
093b0: c05d                      JR     9990h
093c0: 1fec                      BTST   0h,A12
093d0: cb2e                      JRNE   96C0h
093e0: 09ec 51ec 4205            MOVI   420551ECh,A12
09410: 838d                      MOVE   A12,*A13,1
09420: 934e                      MOVE   A10,*A14+,1
09430: 92ce                      MOVE   A6,*A14+,1
09440: 0d5f 8cd0 0002            CALLA  28CD0h
09470: 0d5f 4220 0002            CALLA  24220h
094a0: 09e6 f180 0002            MOVI   2F180h,A6
094d0: 9ace                      MOVE   *A6+,*A14+,1
094e0: 9ace                      MOVE   *A6+,*A14+,1
094f0: 0d5f 8130 0002            CALLA  28130h
09520: 44c6                      SUB    A6,A6
09530: 928e                      MOVE   A4,*A14+,1
09540: 92ce                      MOVE   A6,*A14+,1
09550: 0d5f 8130 0002            CALLA  28130h
09580: 09e8 0000 4059            MOVI   40590000h,A8
095b0: 930e                      MOVE   A8,*A14+,1
095c0: 92ce                      MOVE   A6,*A14+,1
095d0: 0d5f 7680 0002            CALLA  27680h
09600: 9bae                      MOVE   *A13+,*A14+,1
09610: 0d5f 4220 0002            CALLA  24220h
09640: 0d5f 5f40 0002            CALLA  25F40h
09670: 0d5f 34e0 0002            CALLA  234E0h
096a0: abcd                      MOVE   -*A14,-*A13,1
096b0: c02d                      JR     9990h
096c0: 09ec 0000 41f0            MOVI   41F00000h,A12
096f0: 838d                      MOVE   A12,*A13,1
09700: 934e                      MOVE   A10,*A14+,1
09710: 92ce                      MOVE   A6,*A14+,1
09720: 0d5f 8cd0 0002            CALLA  28CD0h
09750: 0d5f 4220 0002            CALLA  24220h
09780: 44c6                      SUB    A6,A6
09790: 09e8 8000 4051            MOVI   40518000h,A8
097c0: 930e                      MOVE   A8,*A14+,1
097d0: 92ce                      MOVE   A6,*A14+,1
097e0: 0d5f 8130 0002            CALLA  28130h
09810: 928e                      MOVE   A4,*A14+,1
09820: 92ce                      MOVE   A6,*A14+,1
09830: 0d5f 8130 0002            CALLA  28130h
09860: 09e8 0000 4059            MOVI   40590000h,A8
09890: 930e                      MOVE   A8,*A14+,1
098a0: 92ce                      MOVE   A6,*A14+,1
098b0: 0d5f 7680 0002            CALLA  27680h
098e0: 9bae                      MOVE   *A13+,*A14+,1
098f0: 0d5f 4220 0002            CALLA  24220h
09920: 0d5f 5f40 0002            CALLA  25F40h
09950: 0d5f 34e0 0002            CALLA  234E0h
09980: abcd                      MOVE   -*A14,-*A13,1
09990: d3ae 0000                 MOVE   *A13(0h),*A14+,1
099b0: 0d5f 4220 0002            CALLA  24220h
099e0: 458c                      SUB    A12,A12
099f0: 09e6 0000 4059            MOVI   40590000h,A6
09a20: 92ce                      MOVE   A6,*A14+,1
09a30: 938e                      MOVE   A12,*A14+,1
09a40: 0d5f 6fd0 0002            CALLA  26FD0h
09a70: ca04                      JREQ   9AC0h
09a80: 09e8 0000 42c8            MOVI   42C80000h,A8
09ab0: 830d                      MOVE   A8,*A13,1
09ac0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
09ae0: 0d5f 4220 0002            CALLA  24220h
09b10: 938e                      MOVE   A12,*A14+,1
09b20: 938e                      MOVE   A12,*A14+,1
09b30: 0d5f 6f90 0002            CALLA  26F90h
09b60: ca01                      JREQ   9B80h
09b70: 838d                      MOVE   A12,*A13,1
09b80: 4da8                      MOVE   A13,A8
09b90: b7ad ffe0                 MOVE   *A13(FFE0h),A13,1
09bb0: ca02                      JREQ   9BE0h
09bc0: 9b0d                      MOVE   *A8+,*A13+,1
09bd0: 8b0d                      MOVE   *A8,*A13,1
09be0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
09c00: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
09c20: 0962                      RETS   2h

_gsp_set_detector_apparent_brigh:
09c30: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
09c50: 4dcd                      MOVE   A14,A13
09c60: b7a4 ffc0                 MOVE   *A13(FFC0h),A4,1
09c80: 0550                      SETF   10h,0,0
09c90: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
09cb0: 100e                      ADDK   20h,A14
09cc0: a3cf                      MOVE   A14,-*SP,1
09cd0: 4d48                      MOVE   A10,A8
09ce0: 2508                      SLL    8h,A8
09cf0: 0b28 1f00 0003            ADDI   31F00h,A8
09d20: 9b0e                      MOVE   *A8+,*A14+,1
09d30: 0d5f 6a10 0000            CALLA  6A10h
09d60: a7cc                      MOVE   -*A14,A12,1
09d70: 100e                      ADDK   20h,A14
09d80: a3cf                      MOVE   A14,-*SP,1
09d90: 928e                      MOVE   A4,*A14+,1
09da0: 0d5f 6a10 0000            CALLA  6A10h
09dd0: a7c6                      MOVE   -*A14,A6,1
09de0: 938e                      MOVE   A12,*A14+,1
09df0: 92ce                      MOVE   A6,*A14+,1
09e00: 0d5f 8cd0 0002            CALLA  28CD0h
09e30: 0d5f 8b50 0002            CALLA  28B50h
09e60: a7cc                      MOVE   -*A14,A12,1
09e70: 4d48                      MOVE   A10,A8
09e80: 2508                      SLL    8h,A8
09e90: 0b28 1f00 0003            ADDI   31F00h,A8
09ec0: 8288                      MOVE   A4,*A8,1
09ed0: 4d48                      MOVE   A10,A8
09ee0: 1428                      DEC    A8
09ef0: 3608                      CMPK   10h,A8
09f00: c300 00de                 JRHI   AD00h
09f20: 24a8                      SLL    5h,A8
09f30: 0b28 ec80 0002            ADDI   2EC80h,A8
09f60: 8708                      MOVE   *A8,A8,1
09f70: 0168                      JUMP   A8
09f80: 4d48                      MOVE   A10,A8
09f90: 4d02                      MOVE   A8,A2
09fa0: 24a8                      SLL    5h,A8
09fb0: 2462                      SLL    3h,A2
09fc0: 4048                      ADD    A2,A8
09fd0: 0b28 1b40 0003            ADDI   31B40h,A8
0a000: 0548                      SETF   8h,0,0
0a010: b502 0008                 MOVE   *A8(8h),A2,0
0a030: 1422                      DEC    A2
0a040: ca37                      JREQ   A3C0h
0a050: 4d46                      MOVE   A10,A6
0a060: 4cc2                      MOVE   A6,A2
0a070: 24a6                      SLL    5h,A6
0a080: 2462                      SLL    3h,A2
0a090: 4046                      ADD    A2,A6
0a0a0: 0b26 1b40 0003            ADDI   31B40h,A6
0a0d0: b4c6 0010                 MOVE   *A6(10h),A6,0
0a0f0: 1426                      DEC    A6
0a100: ca14                      JREQ   A250h
0a110: 4d46                      MOVE   A10,A6
0a120: 4cc2                      MOVE   A6,A2
0a130: 24a6                      SLL    5h,A6
0a140: 2462                      SLL    3h,A2
0a150: 4046                      ADD    A2,A6
0a160: 0b26 1b40 0003            ADDI   31B40h,A6
0a190: b4c6 0018                 MOVE   *A6(18h),A6,0
0a1b0: 1426                      DEC    A6
0a1c0: ca08                      JREQ   A250h
0a1d0: a3cf                      MOVE   A14,-*SP,1
0a1e0: 928e                      MOVE   A4,*A14+,1
0a1f0: 934e                      MOVE   A10,*A14+,1
0a200: 0d5f 50b0 0000            CALLA  50B0h
0a230: c000 00ab                 JR     AD00h
0a250: a3cf                      MOVE   A14,-*SP,1
0a260: 928e                      MOVE   A4,*A14+,1
0a270: 0d5f 4220 0002            CALLA  24220h
0a2a0: 44c6                      SUB    A6,A6
0a2b0: 09e4 0000 4059            MOVI   40590000h,A4
0a2e0: 928e                      MOVE   A4,*A14+,1
0a2f0: 92ce                      MOVE   A6,*A14+,1
0a300: 0d5f 5c60 0002            CALLA  25C60h
0a330: 0d5f 34e0 0002            CALLA  234E0h
0a360: 934e                      MOVE   A10,*A14+,1
0a370: 0d5f 4a30 0000            CALLA  4A30h
0a3a0: c000 0094                 JR     AD00h
0a3c0: 09e4 8d50 3d17            MOVI   3D178D50h,A4
0a3f0: 928e                      MOVE   A4,*A14+,1
0a400: 938e                      MOVE   A12,*A14+,1
0a410: 0d5f a5f0 0002            CALLA  2A5F0h
0a440: a7cc                      MOVE   -*A14,A12,1
0a450: a3cf                      MOVE   A14,-*SP,1
0a460: 92ce                      MOVE   A6,*A14+,1
0a470: 4d46                      MOVE   A10,A6
0a480: 24aa                      SLL    5h,A10
0a490: 2466                      SLL    3h,A6
0a4a0: 40ca                      ADD    A6,A10
0a4b0: 0b2a 1b40 0003            ADDI   31B40h,A10
0a4e0: b54a 0020                 MOVE   *A10(20h),A10,0
0a500: 934e                      MOVE   A10,*A14+,1
0a510: 0d5f 55a0 0000            CALLA  55A0h
0a540: c07b                      JR     AD00h
0a550: a3cf                      MOVE   A14,-*SP,1
0a560: 928e                      MOVE   A4,*A14+,1
0a570: 0d5f 4220 0002            CALLA  24220h
0a5a0: 44c6                      SUB    A6,A6
0a5b0: 09e4 0000 4059            MOVI   40590000h,A4
0a5e0: 928e                      MOVE   A4,*A14+,1
0a5f0: 92ce                      MOVE   A6,*A14+,1
0a600: 0d5f 5c60 0002            CALLA  25C60h
0a630: 0d5f 34e0 0002            CALLA  234E0h
0a660: 934e                      MOVE   A10,*A14+,1
0a670: 0d5f 4a30 0000            CALLA  4A30h
0a6a0: c065                      JR     AD00h
0a6b0: 09ea 8d50 3d17            MOVI   3D178D50h,A10
0a6e0: 934e                      MOVE   A10,*A14+,1
0a6f0: 938e                      MOVE   A12,*A14+,1
0a700: 0d5f a5f0 0002            CALLA  2A5F0h
0a730: a7cc                      MOVE   -*A14,A12,1
0a740: a3cf                      MOVE   A14,-*SP,1
0a750: 92ce                      MOVE   A6,*A14+,1
0a760: 0548                      SETF   8h,0,0
0a770: 05a6 1c50 0003            MOVE   @31C50h,A6,0
0a7a0: 92ce                      MOVE   A6,*A14+,1
0a7b0: 0d5f 55a0 0000            CALLA  55A0h
0a7e0: c051                      JR     AD00h
0a7f0: a3cf                      MOVE   A14,-*SP,1
0a800: 928e                      MOVE   A4,*A14+,1
0a810: 0d5f 4220 0002            CALLA  24220h
0a840: 44c6                      SUB    A6,A6
0a850: 09e4 0000 4059            MOVI   40590000h,A4
0a880: 928e                      MOVE   A4,*A14+,1
0a890: 92ce                      MOVE   A6,*A14+,1
0a8a0: 0d5f 5c60 0002            CALLA  25C60h
0a8d0: 0d5f 34e0 0002            CALLA  234E0h
0a900: 934e                      MOVE   A10,*A14+,1
0a910: 0d5f 4a30 0000            CALLA  4A30h
0a940: c03b                      JR     AD00h
0a950: 09ea 8d50 3d17            MOVI   3D178D50h,A10
0a980: 934e                      MOVE   A10,*A14+,1
0a990: 938e                      MOVE   A12,*A14+,1
0a9a0: 0d5f a5f0 0002            CALLA  2A5F0h
0a9d0: a7cc                      MOVE   -*A14,A12,1
0a9e0: a3cf                      MOVE   A14,-*SP,1
0a9f0: 92ce                      MOVE   A6,*A14+,1
0aa00: 0548                      SETF   8h,0,0
0aa10: 05a6 1c00 0003            MOVE   @31C00h,A6,0
0aa40: 92ce                      MOVE   A6,*A14+,1
0aa50: 0d5f 55a0 0000            CALLA  55A0h
0aa80: c027                      JR     AD00h
0aa90: 09ea 8d50 3d17            MOVI   3D178D50h,A10
0aac0: 934e                      MOVE   A10,*A14+,1
0aad0: 938e                      MOVE   A12,*A14+,1
0aae0: 0d5f a5f0 0002            CALLA  2A5F0h
0ab10: a7cc                      MOVE   -*A14,A12,1
0ab20: a3cf                      MOVE   A14,-*SP,1
0ab30: 92ce                      MOVE   A6,*A14+,1
0ab40: 0548                      SETF   8h,0,0
0ab50: 05a6 1bb0 0003            MOVE   @31BB0h,A6,0
0ab80: 92ce                      MOVE   A6,*A14+,1
0ab90: 0d5f 55a0 0000            CALLA  55A0h
0abc0: c013                      JR     AD00h
0abd0: 09ea 8d50 3d17            MOVI   3D178D50h,A10
0ac00: 934e                      MOVE   A10,*A14+,1
0ac10: 938e                      MOVE   A12,*A14+,1
0ac20: 0d5f a5f0 0002            CALLA  2A5F0h
0ac50: a7cc                      MOVE   -*A14,A12,1
0ac60: a3cf                      MOVE   A14,-*SP,1
0ac70: 92ce                      MOVE   A6,*A14+,1
0ac80: 0548                      SETF   8h,0,0
0ac90: 05a6 1b88 0003            MOVE   @31B88h,A6,0
0acc0: 92ce                      MOVE   A6,*A14+,1
0acd0: 0d5f 55a0 0000            CALLA  55A0h
0ad00: 09ea 8d50 3c97            MOVI   3C978D50h,A10
0ad30: 934e                      MOVE   A10,*A14+,1
0ad40: 938e                      MOVE   A12,*A14+,1
0ad50: 0d5f 98b0 0002            CALLA  298B0h
0ad80: a7cc                      MOVE   -*A14,A12,1
0ad90: 938e                      MOVE   A12,*A14+,1
0ada0: 0d5f 4500 0002            CALLA  24500h
0add0: c605                      JRLE   AE30h
0ade0: 938e                      MOVE   A12,*A14+,1
0adf0: 0d5f 4500 0002            CALLA  24500h
0ae20: c001                      JR     AE40h
0ae30: 1828                      MOVK   1h,A8
0ae40: b7ee 00e0                 MOVE   *SP(E0h),A14,1
0ae60: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
0ae80: 0962                      RETS   2h

_gsp_set_detector_apparent_contr:
0ae90: 098f 022c                 MMTM   SP,A6,A10,A12,A13
0aeb0: 4dcd                      MOVE   A14,A13
0aec0: 0b0e 0040                 ADDI   40h,A14
0aee0: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
0af00: 0550                      SETF   10h,0,0
0af10: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
0af30: 4d88                      MOVE   A12,A8
0af40: 2508                      SLL    8h,A8
0af50: 0b28 1f00 0003            ADDI   31F00h,A8
0af80: b348 0020                 MOVE   A10,*A8(20h),1
0afa0: 4d88                      MOVE   A12,A8
0afb0: 1428                      DEC    A8
0afc0: 3608                      CMPK   10h,A8
0afd0: c300 0092                 JRHI   B910h
0aff0: 24a8                      SLL    5h,A8
0b000: 0b28 eea0 0002            ADDI   2EEA0h,A8
0b030: 8708                      MOVE   *A8,A8,1
0b040: 0168                      JUMP   A8
0b050: 4d88                      MOVE   A12,A8
0b060: 4d06                      MOVE   A8,A6
0b070: 24a8                      SLL    5h,A8
0b080: 2466                      SLL    3h,A6
0b090: 40c8                      ADD    A6,A8
0b0a0: 0b28 1b40 0003            ADDI   31B40h,A8
0b0d0: 0548                      SETF   8h,0,0
0b0e0: b506 0010                 MOVE   *A8(10h),A6,0
0b100: 1426                      DEC    A6
0b110: ca29                      JREQ   B3B0h
0b120: 4d86                      MOVE   A12,A6
0b130: 4cc8                      MOVE   A6,A8
0b140: 24a6                      SLL    5h,A6
0b150: 2468                      SLL    3h,A8
0b160: 4106                      ADD    A8,A6
0b170: 0b26 1b40 0003            ADDI   31B40h,A6
0b1a0: b4c6 0018                 MOVE   *A6(18h),A6,0
0b1c0: 1426                      DEC    A6
0b1d0: ca07                      JREQ   B250h
0b1e0: a3cf                      MOVE   A14,-*SP,1
0b1f0: 934e                      MOVE   A10,*A14+,1
0b200: 938e                      MOVE   A12,*A14+,1
0b210: 0d5f 4a30 0000            CALLA  4A30h
0b240: c06c                      JR     B910h
0b250: a3cf                      MOVE   A14,-*SP,1
0b260: 934e                      MOVE   A10,*A14+,1
0b270: 93ae                      MOVE   A13,*A14+,1
0b280: 0d5f 6df0 0000            CALLA  6DF0h
0b2b0: a3cf                      MOVE   A14,-*SP,1
0b2c0: 0550                      SETF   10h,0,0
0b2d0: b5aa 0020                 MOVE   *A13(20h),A10,0
0b2f0: 934e                      MOVE   A10,*A14+,1
0b300: 0d5f 6290 0000            CALLA  6290h
0b330: a3cf                      MOVE   A14,-*SP,1
0b340: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0b360: 938e                      MOVE   A12,*A14+,1
0b370: 0d5f 50b0 0000            CALLA  50B0h
0b3a0: c056                      JR     B910h
0b3b0: a3cf                      MOVE   A14,-*SP,1
0b3c0: 934e                      MOVE   A10,*A14+,1
0b3d0: 93ae                      MOVE   A13,*A14+,1
0b3e0: 0d5f 8d40 0000            CALLA  8D40h
0b410: a3cf                      MOVE   A14,-*SP,1
0b420: 0550                      SETF   10h,0,0
0b430: b5aa 0020                 MOVE   *A13(20h),A10,0
0b450: 934e                      MOVE   A10,*A14+,1
0b460: 0d5f 6650 0000            CALLA  6650h
0b490: a3cf                      MOVE   A14,-*SP,1
0b4a0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0b4c0: 938e                      MOVE   A12,*A14+,1
0b4d0: 0d5f 50b0 0000            CALLA  50B0h
0b500: c040                      JR     B910h
0b510: a3cf                      MOVE   A14,-*SP,1
0b520: 934e                      MOVE   A10,*A14+,1
0b530: 93ae                      MOVE   A13,*A14+,1
0b540: 0d5f 6df0 0000            CALLA  6DF0h
0b570: a3cf                      MOVE   A14,-*SP,1
0b580: 0550                      SETF   10h,0,0
0b590: b5aa 0020                 MOVE   *A13(20h),A10,0
0b5b0: 934e                      MOVE   A10,*A14+,1
0b5c0: 0d5f 6290 0000            CALLA  6290h
0b5f0: a3cf                      MOVE   A14,-*SP,1
0b600: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0b620: 938e                      MOVE   A12,*A14+,1
0b630: 0d5f 50b0 0000            CALLA  50B0h
0b660: c02a                      JR     B910h
0b670: a3cf                      MOVE   A14,-*SP,1
0b680: 934e                      MOVE   A10,*A14+,1
0b690: 09ea 999a 3f19            MOVI   3F19999Ah,A10
0b6c0: 934e                      MOVE   A10,*A14+,1
0b6d0: 0d5f a5f0 0002            CALLA  2A5F0h
0b700: 09e6 0000 4220            MOVI   42200000h,A6
0b730: 92ce                      MOVE   A6,*A14+,1
0b740: 0d5f 8df0 0002            CALLA  28DF0h
0b770: 938e                      MOVE   A12,*A14+,1
0b780: 0d5f 4a30 0000            CALLA  4A30h
0b7b0: c015                      JR     B910h
0b7c0: a3cf                      MOVE   A14,-*SP,1
0b7d0: 934e                      MOVE   A10,*A14+,1
0b7e0: 93ae                      MOVE   A13,*A14+,1
0b7f0: 0d5f 8d40 0000            CALLA  8D40h
0b820: a3cf                      MOVE   A14,-*SP,1
0b830: 0550                      SETF   10h,0,0
0b840: b5aa 0020                 MOVE   *A13(20h),A10,0
0b860: 934e                      MOVE   A10,*A14+,1
0b870: 0d5f 6650 0000            CALLA  6650h
0b8a0: a3cf                      MOVE   A14,-*SP,1
0b8b0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
0b8d0: 938e                      MOVE   A12,*A14+,1
0b8e0: 0d5f 50b0 0000            CALLA  50B0h
0b910: b7ee 00a0                 MOVE   *SP(A0h),A14,1
0b930: 09af 3440                 MMFM   SP,A6,A10,A12,A13
0b950: 0962                      RETS   2h

_turn_detector_on:
0b960: a3af                      MOVE   A13,-*SP,1
0b970: 4dcd                      MOVE   A14,A13
0b980: 0550                      SETF   10h,0,0
0b990: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0b9b0: 1428                      DEC    A8
0b9c0: ca16                      JREQ   BB30h
0b9d0: 1428                      DEC    A8
0b9e0: ca09                      JREQ   BA80h
0b9f0: 1488                      SUBK   4h,A8
0ba00: cb1c                      JRNE   BBD0h
0ba10: a3cf                      MOVE   A14,-*SP,1
0ba20: 4508                      SUB    A8,A8
0ba30: 930e                      MOVE   A8,*A14+,1
0ba40: 0d5f 5ed0 0000            CALLA  5ED0h
0ba70: c015                      JR     BBD0h
0ba80: 07e8 1e90 0003            MOVE   @31E90h,A8
0bab0: cb11                      JRNE   BBD0h
0bac0: a3cf                      MOVE   A14,-*SP,1
0bad0: 1828                      MOVK   1h,A8
0bae0: 930e                      MOVE   A8,*A14+,1
0baf0: 0d5f 5ed0 0000            CALLA  5ED0h
0bb20: c00a                      JR     BBD0h
0bb30: 07e8 1e90 0003            MOVE   @31E90h,A8
0bb60: cb06                      JRNE   BBD0h
0bb70: a3cf                      MOVE   A14,-*SP,1
0bb80: 1828                      MOVK   1h,A8
0bb90: 930e                      MOVE   A8,*A14+,1
0bba0: 0d5f 5ed0 0000            CALLA  5ED0h
0bbd0: b7ee 0040                 MOVE   *SP(40h),A14,1
0bbf0: 97ed                      MOVE   *SP+,A13,1
0bc00: 0962                      RETS   2h

_turn_detector_off:
0bc10: a3af                      MOVE   A13,-*SP,1
0bc20: 4dcd                      MOVE   A14,A13
0bc30: 0550                      SETF   10h,0,0
0bc40: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0bc60: 1428                      DEC    A8
0bc70: ca1f                      JREQ   BE70h
0bc80: 1428                      DEC    A8
0bc90: ca12                      JREQ   BDC0h
0bca0: 1488                      SUBK   4h,A8
0bcb0: cb25                      JRNE   BF10h
0bcc0: 07e8 1e68 0003            MOVE   @31E68h,A8
0bcf0: 1428                      DEC    A8
0bd00: ca04                      JREQ   BD50h
0bd10: 07e8 1e70 0003            MOVE   @31E70h,A8
0bd40: 3b88                      DSJS   A8,BF10h
0bd50: a3cf                      MOVE   A14,-*SP,1
0bd60: 1828                      MOVK   1h,A8
0bd70: 930e                      MOVE   A8,*A14+,1
0bd80: 0d5f 5ed0 0000            CALLA  5ED0h
0bdb0: c015                      JR     BF10h
0bdc0: 07e8 1e68 0003            MOVE   @31E68h,A8
0bdf0: cb11                      JRNE   BF10h
0be00: a3cf                      MOVE   A14,-*SP,1
0be10: 4508                      SUB    A8,A8
0be20: 930e                      MOVE   A8,*A14+,1
0be30: 0d5f 5ed0 0000            CALLA  5ED0h
0be60: c00a                      JR     BF10h
0be70: 07e8 1e70 0003            MOVE   @31E70h,A8
0bea0: cb06                      JRNE   BF10h
0beb0: a3cf                      MOVE   A14,-*SP,1
0bec0: 4508                      SUB    A8,A8
0bed0: 930e                      MOVE   A8,*A14+,1
0bee0: 0d5f 5ed0 0000            CALLA  5ED0h
0bf10: b7ee 0040                 MOVE   *SP(40h),A14,1
0bf30: 97ed                      MOVE   *SP+,A13,1
0bf40: 0962                      RETS   2h

_turn_detectors_on_off:
0bf50: a38f                      MOVE   A12,-*SP,1
0bf60: 182c                      MOVK   1h,A12
0bf70: 4d88                      MOVE   A12,A8
0bf80: 2468                      SLL    3h,A8
0bf90: 0b28 1e60 0003            ADDI   31E60h,A8
0bfc0: 8f08                      MOVB   *A8,A8
0bfd0: 3988                      DSJS   A8,C0A0h
0bfe0: 4d88                      MOVE   A12,A8
0bff0: 2468                      SLL    3h,A8
0c000: 0b28 1a60 0003            ADDI   31A60h,A8
0c030: 8f08                      MOVB   *A8,A8
0c040: cb05                      JRNE   C0A0h
0c050: a3cf                      MOVE   A14,-*SP,1
0c060: 938e                      MOVE   A12,*A14+,1
0c070: 0d5f b960 0000            CALLA  B960h
0c0a0: 4d88                      MOVE   A12,A8
0c0b0: 2468                      SLL    3h,A8
0c0c0: 0b28 1e60 0003            ADDI   31E60h,A8
0c0f0: 8f08                      MOVB   *A8,A8
0c100: cb0c                      JRNE   C1D0h
0c110: 4d88                      MOVE   A12,A8
0c120: 2468                      SLL    3h,A8
0c130: 0b28 1a60 0003            ADDI   31A60h,A8
0c160: 8f08                      MOVB   *A8,A8
0c170: 38a8                      DSJS   A8,C1D0h
0c180: a3cf                      MOVE   A14,-*SP,1
0c190: 938e                      MOVE   A12,*A14+,1
0c1a0: 0d5f bc10 0000            CALLA  BC10h
0c1d0: 102c                      INC    A12
0c1e0: 260c                      SLL    10h,A12
0c1f0: 2e0c                      SRL    10h,A12
0c200: 362c                      CMPK   11h,A12
0c210: c6d5                      JRLE   BF70h
0c220: 97ec                      MOVE   *SP+,A12,1
0c230: 0960                      RETS   

_gsp_reload_detectors:
0c240: a3af                      MOVE   A13,-*SP,1
0c250: 4dcd                      MOVE   A14,A13
0c260: 09f2 1a60 0003            MOVI   31A60h,B2
0c290: 09f0 1e60 0003            MOVI   31E60h,B0
0c2c0: 09d7 0090                 MOVI   90h,B7
0c2e0: 00f3                      BLMOVE 1,1
0c2f0: 09f2 1e60 0003            MOVI   31E60h,B2
0c320: 4fa0                      MOVE   A13,B0
0c330: 0bf0 ff5f                 SUBI   A0h,B0
0c350: 09d7 0090                 MOVI   90h,B7
0c370: 00f3                      BLMOVE 1,1
0c380: 0d5f bf50 0000            CALLA  BF50h
0c3b0: b7ee 0040                 MOVE   *SP(40h),A14,1
0c3d0: 97ed                      MOVE   *SP+,A13,1
0c3e0: 0962                      RETS   2h

_gsp_update_detectors_from_zones:
0c3f0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
0c410: 4dcd                      MOVE   A14,A13
0c420: 458c                      SUB    A12,A12
0c430: 4d88                      MOVE   A12,A8
0c440: 2468                      SLL    3h,A8
0c450: 0b28 1b00 0003            ADDI   31B00h,A8
0c480: 4d8a                      MOVE   A12,A10
0c490: 246a                      SLL    3h,A10
0c4a0: 41aa                      ADD    A13,A10
0c4b0: bd48 ffc0 0000            MOVB   *A10(FFC0h),*A8(0h)
0c4e0: 102c                      INC    A12
0c4f0: 260c                      SLL    10h,A12
0c500: 2e0c                      SRL    10h,A12
0c510: 350c                      CMPK   8h,A12
0c520: c4f0                      JRLT   C430h
0c530: 454a                      SUB    A10,A10
0c540: 4d48                      MOVE   A10,A8
0c550: 2488                      SLL    4h,A8
0c560: 0b28 3100 0003            ADDI   33100h,A8
0c590: 09e6 ffff 0000            MOVI   FFFFh,A6
0c5c0: 0550                      SETF   10h,0,0
0c5d0: 80c8                      MOVE   A6,*A8,0
0c5e0: 458c                      SUB    A12,A12
0c5f0: 4d86                      MOVE   A12,A6
0c600: 2466                      SLL    3h,A6
0c610: 0b26 1b00 0003            ADDI   31B00h,A6
0c640: 8ec6                      MOVB   *A6,A6
0c650: 4946                      CMP    A10,A6
0c660: ca06                      JREQ   C6D0h
0c670: 102c                      INC    A12
0c680: 260c                      SLL    10h,A12
0c690: 2e0c                      SRL    10h,A12
0c6a0: 350c                      CMPK   8h,A12
0c6b0: c4f3                      JRLT   C5F0h
0c6c0: c007                      JR     C740h
0c6d0: 4d46                      MOVE   A10,A6
0c6e0: 2486                      SLL    4h,A6
0c6f0: 0b26 3100 0003            ADDI   33100h,A6
0c720: 0550                      SETF   10h,0,0
0c730: 8186                      MOVE   A12,*A6,0
0c740: 102a                      INC    A10
0c750: 260a                      SLL    10h,A10
0c760: 2e0a                      SRL    10h,A10
0c770: 364a                      CMPK   12h,A10
0c780: c4db                      JRLT   C540h
0c790: b7ee 00a0                 MOVE   *SP(A0h),A14,1
0c7b0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
0c7d0: 0962                      RETS   2h

_gsp_select_auto_video_mode:
0c7e0: 098f 002c                 MMTM   SP,A10,A12,A13
0c800: 4dcd                      MOVE   A14,A13
0c810: 0550                      SETF   10h,0,0
0c820: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
0c840: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
0c860: 4d88                      MOVE   A12,A8
0c870: 2508                      SLL    8h,A8
0c880: 0b28 1f00 0003            ADDI   31F00h,A8
0c8b0: b148 0080                 MOVE   A10,*A8(80h),0
0c8d0: 4d48                      MOVE   A10,A8
0c8e0: cb15                      JRNE   CA40h
0c8f0: 4d88                      MOVE   A12,A8
0c900: 2508                      SLL    8h,A8
0c910: 0b28 1f00 0003            ADDI   31F00h,A8
0c940: 182a                      MOVK   1h,A10
0c950: b148 00a0                 MOVE   A10,*A8(A0h),0
0c970: 4d88                      MOVE   A12,A8
0c980: 2508                      SLL    8h,A8
0c990: 0b28 1f00 0003            ADDI   31F00h,A8
0c9c0: b148 0090                 MOVE   A10,*A8(90h),0
0c9e0: 250c                      SLL    8h,A12
0c9f0: 0b2c 1f00 0003            ADDI   31F00h,A12
0ca20: b14c 00b0                 MOVE   A10,*A12(B0h),0
0ca40: b7ee 0080                 MOVE   *SP(80h),A14,1
0ca60: 09af 3400                 MMFM   SP,A10,A12,A13
0ca80: 0962                      RETS   2h

_gsp_configure_detector:
0ca90: a3af                      MOVE   A13,-*SP,1
0caa0: 4dcd                      MOVE   A14,A13
0cab0: 09f2 1b40 0003            MOVI   31B40h,B2
0cae0: 4fa0                      MOVE   A13,B0
0caf0: 0bf0 fd1f                 SUBI   2E0h,B0
0cb10: 09d7 02d0                 MOVI   2D0h,B7
0cb30: 00f3                      BLMOVE 1,1
0cb40: b7ee 0040                 MOVE   *SP(40h),A14,1
0cb60: 97ed                      MOVE   *SP+,A13,1
0cb70: 0962                      RETS   2h

_gsp_read_video_levels:
0cb80: a3af                      MOVE   A13,-*SP,1
0cb90: 4dcd                      MOVE   A14,A13
0cba0: 0550                      SETF   10h,0,0
0cbb0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
0cbd0: 4f00                      MOVE   A8,B0
0cbe0: 2510                      SLL    8h,B0
0cbf0: 0b30 1f00 0003            ADDI   31F00h,B0
0cc20: b7ad ffe0                 MOVE   *A13(FFE0h),A13,1
0cc40: ca04                      JREQ   CC90h
0cc50: 4fa2                      MOVE   A13,B2
0cc60: 09d7 0100                 MOVI   100h,B7
0cc80: 00f3                      BLMOVE 1,1
0cc90: b7ee 0040                 MOVE   *SP(40h),A14,1
0ccb0: 97ed                      MOVE   *SP+,A13,1
0ccc0: 0962                      RETS   2h

_gsp_read_detector_from_zone:
0ccd0: a3af                      MOVE   A13,-*SP,1
0cce0: 4dcd                      MOVE   A14,A13
0ccf0: 0570                      SETF   10h,1,0
0cd00: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0cd20: 2468                      SLL    3h,A8
0cd30: 0b28 1b00 0003            ADDI   31B00h,A8
0cd60: 8f08                      MOVB   *A8,A8
0cd70: b7ee 0040                 MOVE   *SP(40h),A14,1
0cd90: 97ed                      MOVE   *SP+,A13,1
0cda0: 0962                      RETS   2h

_limit:
0cdb0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
0cdd0: 4dcd                      MOVE   A14,A13
0cde0: b7a6 ffa0                 MOVE   *A13(FFA0h),A6,1
0ce00: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
0ce20: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
0ce40: 938e                      MOVE   A12,*A14+,1
0ce50: 934e                      MOVE   A10,*A14+,1
0ce60: 0d5f a3d0 0002            CALLA  2A3D0h
0ce90: ca02                      JREQ   CEC0h
0cea0: 934e                      MOVE   A10,*A14+,1
0ceb0: c009                      JR     CF50h
0cec0: 938e                      MOVE   A12,*A14+,1
0ced0: 92ce                      MOVE   A6,*A14+,1
0cee0: 0d5f a1b0 0002            CALLA  2A1B0h
0cf10: ca02                      JREQ   CF40h
0cf20: 92ce                      MOVE   A6,*A14+,1
0cf30: c001                      JR     CF50h
0cf40: 938e                      MOVE   A12,*A14+,1
0cf50: b7ed 00a0                 MOVE   *SP(A0h),A13,1
0cf70: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
0cfa0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
0cfc0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
0cfe0: 0962                      RETS   2h

_NextStep:
0cff0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
0d010: 4dcd                      MOVE   A14,A13
0d020: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
0d040: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
0d060: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
0d080: cb38                      JRNE   D410h
0d090: d60e 3ea0 0003            MOVE   @33EA0h,*A14+,1
0d0c0: d60e 3ec0 0003            MOVE   @33EC0h,*A14+,1
0d0f0: 0d5f 8cd0 0002            CALLA  28CD0h
0d120: 0d5f 8b50 0002            CALLA  28B50h
0d150: a7cc                      MOVE   -*A14,A12,1
0d160: d60e 3ee0 0003            MOVE   @33EE0h,*A14+,1
0d190: 4508                      SUB    A8,A8
0d1a0: 930e                      MOVE   A8,*A14+,1
0d1b0: 0d5f a110 0002            CALLA  2A110h
0d1e0: ca42                      JREQ   D610h
0d1f0: d60e 3f00 0003            MOVE   @33F00h,*A14+,1
0d220: 09e8 0000 bf80            MOVI   BF800000h,A8
0d250: 930e                      MOVE   A8,*A14+,1
0d260: 0d5f a110 0002            CALLA  2A110h
0d290: ca04                      JREQ   D2E0h
0d2a0: d60e f2a0 0002            MOVE   @2F2A0h,*A14+,1
0d2d0: c003                      JR     D310h
0d2e0: d60e f2c0 0002            MOVE   @2F2C0h,*A14+,1
0d310: a7c8                      MOVE   -*A14,A8,1
0d320: 0788 3f00 0003            MOVE   A8,@33F00h,1
0d350: d60e 3ee0 0003            MOVE   @33EE0h,*A14+,1
0d380: 09e6 0000 3f80            MOVI   3F800000h,A6
0d3b0: 92ce                      MOVE   A6,*A14+,1
0d3c0: 0d5f a110 0002            CALLA  2A110h
0d3f0: cb36                      JRNE   D760h
0d400: c02b                      JR     D6C0h
0d410: 09ec 0000 3f80            MOVI   3F800000h,A12
0d440: 078c 3ee0 0003            MOVE   A12,@33EE0h,1
0d470: 934e                      MOVE   A10,*A14+,1
0d480: 92ce                      MOVE   A6,*A14+,1
0d490: 0d5f 8cd0 0002            CALLA  28CD0h
0d4c0: 0d5f 8b50 0002            CALLA  28B50h
0d4f0: a7cc                      MOVE   -*A14,A12,1
0d500: 934e                      MOVE   A10,*A14+,1
0d510: 92ce                      MOVE   A6,*A14+,1
0d520: 0d5f a3d0 0002            CALLA  2A3D0h
0d550: ca04                      JREQ   D5A0h
0d560: d60e f2a0 0002            MOVE   @2F2A0h,*A14+,1
0d590: c003                      JR     D5D0h
0d5a0: d60e f2c0 0002            MOVE   @2F2C0h,*A14+,1
0d5d0: a7c8                      MOVE   -*A14,A8,1
0d5e0: 0788 3f00 0003            MOVE   A8,@33F00h,1
0d610: d60e 3ee0 0003            MOVE   @33EE0h,*A14+,1
0d640: 09e8 0000 3f80            MOVI   3F800000h,A8
0d670: 930e                      MOVE   A8,*A14+,1
0d680: 0d5f ad20 0002            CALLA  2AD20h
0d6b0: ca0a                      JREQ   D760h
0d6c0: 09ec 0000 3f80            MOVI   3F800000h,A12
0d6f0: 078c 3ee0 0003            MOVE   A12,@33EE0h,1
0d720: d60e 3ec0 0003            MOVE   @33EC0h,*A14+,1
0d750: c044                      JR     DBA0h
0d760: 938e                      MOVE   A12,*A14+,1
0d770: 09e6 0000 3f00            MOVI   3F000000h,A6
0d7a0: 92ce                      MOVE   A6,*A14+,1
0d7b0: 0d5f a5f0 0002            CALLA  2A5F0h
0d7e0: 938e                      MOVE   A12,*A14+,1
0d7f0: 0d5f 8bb0 0002            CALLA  28BB0h
0d820: 92ce                      MOVE   A6,*A14+,1
0d830: 0d5f a5f0 0002            CALLA  2A5F0h
0d860: a7c8                      MOVE   -*A14,A8,1
0d870: 0788 3ea0 0003            MOVE   A8,@33EA0h,1
0d8a0: 938e                      MOVE   A12,*A14+,1
0d8b0: 92ce                      MOVE   A6,*A14+,1
0d8c0: 0d5f a5f0 0002            CALLA  2A5F0h
0d8f0: d60e 3ea0 0003            MOVE   @33EA0h,*A14+,1
0d920: 0d5f 8df0 0002            CALLA  28DF0h
0d950: a7cc                      MOVE   -*A14,A12,1
0d960: 078c 3ec0 0003            MOVE   A12,@33EC0h,1
0d990: d60e 3f00 0003            MOVE   @33F00h,*A14+,1
0d9c0: d60e 3ea0 0003            MOVE   @33EA0h,*A14+,1
0d9f0: 0d5f a5f0 0002            CALLA  2A5F0h
0da20: a7c8                      MOVE   -*A14,A8,1
0da30: 0788 3ea0 0003            MOVE   A8,@33EA0h,1
0da60: d60e 3f00 0003            MOVE   @33F00h,*A14+,1
0da90: d60e 3ec0 0003            MOVE   @33EC0h,*A14+,1
0dac0: 0d5f a5f0 0002            CALLA  2A5F0h
0daf0: a7cc                      MOVE   -*A14,A12,1
0db00: 078c 3ec0 0003            MOVE   A12,@33EC0h,1
0db30: 4508                      SUB    A8,A8
0db40: 0788 3ee0 0003            MOVE   A8,@33EE0h,1
0db70: d60e 3ea0 0003            MOVE   @33EA0h,*A14+,1
0dba0: b7ed 00a0                 MOVE   *SP(A0h),A13,1
0dbc0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
0dbf0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
0dc10: 09af 3440                 MMFM   SP,A6,A10,A12,A13
0dc30: 0962                      RETS   2h

_request_histogram_data:
0dc40: 098f 002c                 MMTM   SP,A10,A12,A13
0dc60: 4dcd                      MOVE   A14,A13
0dc70: 0b0e 0080                 ADDI   80h,A14
0dc90: 0570                      SETF   10h,1,0
0dca0: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
0dcc0: 09cc 0064                 MOVI   64h,A12
0dce0: 1988                      MOVK   Ch,A8
0dcf0: 830d                      MOVE   A8,*A13,1
0dd00: 4508                      SUB    A8,A8
0dd10: b10d 0020                 MOVE   A8,*A13(20h),0
0dd30: 1828                      MOVK   1h,A8
0dd40: 6348                      SLL    A10,A8
0dd50: b10d 0030                 MOVE   A8,*A13(30h),0
0dd70: 09e8 3f60 0003            MOVI   33F60h,A8
0dda0: b30d 0040                 MOVE   A8,*A13(40h),1
0ddc0: a3cf                      MOVE   A14,-*SP,1
0ddd0: 93ae                      MOVE   A13,*A14+,1
0dde0: 1be8                      MOVK   1Fh,A8
0ddf0: 930e                      MOVE   A8,*A14+,1
0de00: 0d5f 0000 0000            CALLA  0h
0de30: 4f0e                      MOVE   A8,B14
0de40: cb10                      JRNE   DF50h
0de50: c010                      JR     DF60h
0de60: a3cf                      MOVE   A14,-*SP,1
0de70: 1828                      MOVK   1h,A8
0de80: 930e                      MOVE   A8,*A14+,1
0de90: 0d5f 0000 0000            CALLA  0h
0dec0: a3cf                      MOVE   A14,-*SP,1
0ded0: 93ae                      MOVE   A13,*A14+,1
0dee0: 1be8                      MOVK   1Fh,A8
0def0: 930e                      MOVE   A8,*A14+,1
0df00: 0d5f 0000 0000            CALLA  0h
0df30: 4f0e                      MOVE   A8,B14
0df40: ca01                      JREQ   DF60h
0df50: 3e0c                      DSJS   A12,DE60h
0df60: 4fd8                      MOVE   B14,A8
0df70: cb0b                      JRNE   E030h
0df80: a3cf                      MOVE   A14,-*SP,1
0df90: 458c                      SUB    A12,A12
0dfa0: 938e                      MOVE   A12,*A14+,1
0dfb0: 09e8 8000 0000            MOVI   8000h,A8
0dfe0: 6348                      SLL    A10,A8
0dff0: 930e                      MOVE   A8,*A14+,1
0e000: 0d5f 0000 0000            CALLA  0h
0e030: b7ee 0080                 MOVE   *SP(80h),A14,1
0e050: 09af 3400                 MMFM   SP,A10,A12,A13
0e070: 0962                      RETS   2h

_perform_one_shot_auto_video:
0e080: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
0e0a0: 4dcd                      MOVE   A14,A13
0e0b0: 0b0e 0040                 ADDI   40h,A14
0e0d0: 09cc 0032                 MOVI   32h,A12
0e0f0: 454a                      SUB    A10,A10
0e100: 0570                      SETF   10h,1,0
0e110: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0e130: 2508                      SLL    8h,A8
0e140: 0b28 1f00 0003            ADDI   31F00h,A8
0e170: 8706                      MOVE   *A8,A6,1
0e180: 0d5f 2180 0001            CALLA  12180h
0e1b0: 0570                      SETF   10h,1,0
0e1c0: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
0e1e0: 14c8                      SUBK   6h,A8
0e1f0: cb09                      JRNE   E290h
0e200: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0e220: 2508                      SLL    8h,A8
0e230: 0b28 1f00 0003            ADDI   31F00h,A8
0e260: d30e 0060                 MOVE   *A8(60h),*A14+,1
0e280: c008                      JR     E310h
0e290: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0e2b0: 2508                      SLL    8h,A8
0e2c0: 0b28 1f00 0003            ADDI   31F00h,A8
0e2f0: d30e 0040                 MOVE   *A8(40h),*A14+,1
0e310: a7c8                      MOVE   -*A14,A8,1
0e320: 0788 3480 0003            MOVE   A8,@33480h,1
0e350: a3cf                      MOVE   A14,-*SP,1
0e360: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0e380: 930e                      MOVE   A8,*A14+,1
0e390: b5a8 ffd0                 MOVE   *A13(FFD0h),A8,0
0e3b0: 930e                      MOVE   A8,*A14+,1
0e3c0: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
0e3e0: 930e                      MOVE   A8,*A14+,1
0e3f0: b5a8 ffb0                 MOVE   *A13(FFB0h),A8,0
0e410: 930e                      MOVE   A8,*A14+,1
0e420: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
0e440: 1888                      MOVK   4h,A8
0e450: 930e                      MOVE   A8,*A14+,1
0e460: 1828                      MOVK   1h,A8
0e470: 930e                      MOVE   A8,*A14+,1
0e480: 0d5f 0000 0000            CALLA  0h
0e4b0: a3cf                      MOVE   A14,-*SP,1
0e4c0: 93ae                      MOVE   A13,*A14+,1
0e4d0: 0570                      SETF   10h,1,0
0e4e0: b5a8 ff70                 MOVE   *A13(FF70h),A8,0
0e500: 930e                      MOVE   A8,*A14+,1
0e510: 0d5f dc40 0000            CALLA  DC40h
0e540: a3cf                      MOVE   A14,-*SP,1
0e550: d60e 6460 0003            MOVE   @36460h,*A14+,1
0e580: 09e8 0000 40a0            MOVI   40A00000h,A8
0e5b0: 930e                      MOVE   A8,*A14+,1
0e5c0: 0d5f a5f0 0002            CALLA  2A5F0h
0e5f0: 0d5f 4500 0002            CALLA  24500h
0e620: 930e                      MOVE   A8,*A14+,1
0e630: 93ae                      MOVE   A13,*A14+,1
0e640: 0d5f 0bb0 0001            CALLA  10BB0h
0e670: 142c                      DEC    A12
0e680: a3cf                      MOVE   A14,-*SP,1
0e690: 93ae                      MOVE   A13,*A14+,1
0e6a0: 0570                      SETF   10h,1,0
0e6b0: b5a8 ff70                 MOVE   *A13(FF70h),A8,0
0e6d0: 930e                      MOVE   A8,*A14+,1
0e6e0: 0d5f dc40 0000            CALLA  DC40h
0e710: a3cf                      MOVE   A14,-*SP,1
0e720: d60e 6460 0003            MOVE   @36460h,*A14+,1
0e750: 09e8 0000 40a0            MOVI   40A00000h,A8
0e780: 930e                      MOVE   A8,*A14+,1
0e790: 0d5f a5f0 0002            CALLA  2A5F0h
0e7c0: 0d5f 4500 0002            CALLA  24500h
0e7f0: 930e                      MOVE   A8,*A14+,1
0e800: 93ae                      MOVE   A13,*A14+,1
0e810: 0d5f 0bb0 0001            CALLA  10BB0h
0e840: 0570                      SETF   10h,1,0
0e850: b5a8 ffa0                 MOVE   *A13(FFA0h),A8,0
0e870: 14c8                      SUBK   6h,A8
0e880: cb0e                      JRNE   E970h
0e890: 0548                      SETF   8h,0,0
0e8a0: b5a8 0008                 MOVE   *A13(8h),A8,0
0e8c0: 0d5f 5800 0002            CALLA  25800h
0e8f0: 09e8 c8c9 3ec8            MOVI   3EC8C8C9h,A8
0e920: 930e                      MOVE   A8,*A14+,1
0e930: 0d5f a5f0 0002            CALLA  2A5F0h
0e960: c00d                      JR     EA40h
0e970: 0548                      SETF   8h,0,0
0e980: b5a8 0010                 MOVE   *A13(10h),A8,0
0e9a0: 0d5f 5800 0002            CALLA  25800h
0e9d0: 09e8 c8c9 3ec8            MOVI   3EC8C8C9h,A8
0ea00: 930e                      MOVE   A8,*A14+,1
0ea10: 0d5f a5f0 0002            CALLA  2A5F0h
0ea40: a7c8                      MOVE   -*A14,A8,1
0ea50: 0788 34a0 0003            MOVE   A8,@334A0h,1
0ea80: d60e 3480 0003            MOVE   @33480h,*A14+,1
0eab0: 930e                      MOVE   A8,*A14+,1
0eac0: 0d5f 8cd0 0002            CALLA  28CD0h
0eaf0: 0d5f 4220 0002            CALLA  24220h
0eb20: 0d5f 5be0 0002            CALLA  25BE0h
0eb50: 4508                      SUB    A8,A8
0eb60: 09e4 0000 4008            MOVI   40080000h,A4
0eb90: 928e                      MOVE   A4,*A14+,1
0eba0: 930e                      MOVE   A8,*A14+,1
0ebb0: 0d5f 6fd0 0002            CALLA  26FD0h
0ebe0: ca22                      JREQ   EE10h
0ebf0: a3cf                      MOVE   A14,-*SP,1
0ec00: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0ec20: 930e                      MOVE   A8,*A14+,1
0ec30: 0d5f 4590 0001            CALLA  14590h
0ec60: 0d8c ffa0                 DSJ    A12,E680h
0ec80: 4d48                      MOVE   A10,A8
0ec90: cb18                      JRNE   EE20h
0eca0: a3cf                      MOVE   A14,-*SP,1
0ecb0: 92ce                      MOVE   A6,*A14+,1
0ecc0: 0550                      SETF   10h,0,0
0ecd0: b5ac ff60                 MOVE   *A13(FF60h),A12,0
0ecf0: 938e                      MOVE   A12,*A14+,1
0ed00: 0d5f 9c30 0000            CALLA  9C30h
0ed30: 0570                      SETF   10h,1,0
0ed40: b5aa ff60                 MOVE   *A13(FF60h),A10,0
0ed60: 250a                      SLL    8h,A10
0ed70: 0b2a 1f00 0003            ADDI   31F00h,A10
0eda0: 44c6                      SUB    A6,A6
0edb0: b0ca 0080                 MOVE   A6,*A10(80h),0
0edd0: 0586 3e00 0003            MOVE   A6,@33E00h,0
0ee00: c030                      JR     F110h
0ee10: 182a                      MOVK   1h,A10
0ee20: 0548                      SETF   8h,0,0
0ee30: b5a8 0008                 MOVE   *A13(8h),A8,0
0ee50: 0d5f 5800 0002            CALLA  25800h
0ee80: 09ec c8c9 3ec8            MOVI   3EC8C8C9h,A12
0eeb0: 938e                      MOVE   A12,*A14+,1
0eec0: 0d5f a5f0 0002            CALLA  2A5F0h
0eef0: 0570                      SETF   10h,1,0
0ef00: b5aa ff60                 MOVE   *A13(FF60h),A10,0
0ef20: 250a                      SLL    8h,A10
0ef30: 0b2a 1f00 0003            ADDI   31F00h,A10
0ef60: a7c6                      MOVE   -*A14,A6,1
0ef70: b2ca 0060                 MOVE   A6,*A10(60h),1
0ef90: 0548                      SETF   8h,0,0
0efa0: b5a8 0010                 MOVE   *A13(10h),A8,0
0efc0: 0d5f 5800 0002            CALLA  25800h
0eff0: 938e                      MOVE   A12,*A14+,1
0f000: 0d5f a5f0 0002            CALLA  2A5F0h
0f030: 0570                      SETF   10h,1,0
0f040: b5aa ff60                 MOVE   *A13(FF60h),A10,0
0f060: 250a                      SLL    8h,A10
0f070: 0b2a 1f00 0003            ADDI   31F00h,A10
0f0a0: a7c6                      MOVE   -*A14,A6,1
0f0b0: b2ca 0040                 MOVE   A6,*A10(40h),1
0f0d0: 186a                      MOVK   3h,A10
0f0e0: 058a 3e00 0003            MOVE   A10,@33E00h,0
0f110: 0d5f 0000 0000            CALLA  0h
0f140: b7ee 00c0                 MOVE   *SP(C0h),A14,1
0f160: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
0f180: 0962                      RETS   2h

_perform_one_shot_abc:
0f190: 098f aa2c                 MMTM   SP,A0,A2,A4,A6,A10,A12,A13
0f1b0: 4dcd                      MOVE   A14,A13
0f1c0: 0b0e 0040                 ADDI   40h,A14
0f1e0: 1866                      MOVK   3h,A6
0f1f0: 4442                      SUB    A2,A2
0f200: 09e8 0000 3f80            MOVI   3F800000h,A8
0f230: 0788 6460 0003            MOVE   A8,@36460h,1
0f260: 0d5f 2180 0001            CALLA  12180h
0f290: a3cf                      MOVE   A14,-*SP,1
0f2a0: 0570                      SETF   10h,1,0
0f2b0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
0f2d0: 930e                      MOVE   A8,*A14+,1
0f2e0: b5a8 ffd0                 MOVE   *A13(FFD0h),A8,0
0f300: 930e                      MOVE   A8,*A14+,1
0f310: b5a8 ffc0                 MOVE   *A13(FFC0h),A8,0
0f330: 930e                      MOVE   A8,*A14+,1
0f340: b5a8 ffb0                 MOVE   *A13(FFB0h),A8,0
0f360: 930e                      MOVE   A8,*A14+,1
0f370: d3ae ff80                 MOVE   *A13(FF80h),*A14+,1
0f390: 1888                      MOVK   4h,A8
0f3a0: 930e                      MOVE   A8,*A14+,1
0f3b0: 1828                      MOVK   1h,A8
0f3c0: 930e                      MOVE   A8,*A14+,1
0f3d0: 0d5f 0000 0000            CALLA  0h
0f400: 0570                      SETF   10h,1,0
0f410: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0f430: 2508                      SLL    8h,A8
0f440: 0b28 1f00 0003            ADDI   31F00h,A8
0f470: b708 00c0                 MOVE   *A8(C0h),A8,1
0f490: 0788 3480 0003            MOVE   A8,@33480h,1
0f4c0: a3cf                      MOVE   A14,-*SP,1
0f4d0: 0548                      SETF   8h,0,0
0f4e0: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0f500: 930e                      MOVE   A8,*A14+,1
0f510: 0d5f 7ea0 0001            CALLA  17EA0h
0f540: a3cf                      MOVE   A14,-*SP,1
0f550: 93ae                      MOVE   A13,*A14+,1
0f560: 0570                      SETF   10h,1,0
0f570: b5a8 ff70                 MOVE   *A13(FF70h),A8,0
0f590: 930e                      MOVE   A8,*A14+,1
0f5a0: 0d5f dc40 0000            CALLA  DC40h
0f5d0: a3cf                      MOVE   A14,-*SP,1
0f5e0: d60e 6460 0003            MOVE   @36460h,*A14+,1
0f610: 09e8 0000 40a0            MOVI   40A00000h,A8
0f640: 930e                      MOVE   A8,*A14+,1
0f650: 0d5f a5f0 0002            CALLA  2A5F0h
0f680: 0d5f 4500 0002            CALLA  24500h
0f6b0: 930e                      MOVE   A8,*A14+,1
0f6c0: 93ae                      MOVE   A13,*A14+,1
0f6d0: 0d5f 0bb0 0001            CALLA  10BB0h
0f700: 0548                      SETF   8h,0,0
0f710: b5a8 0008                 MOVE   *A13(8h),A8,0
0f730: 0d5f 5800 0002            CALLA  25800h
0f760: 09e8 c8c9 3ec8            MOVI   3EC8C8C9h,A8
0f790: 930e                      MOVE   A8,*A14+,1
0f7a0: 0d5f a5f0 0002            CALLA  2A5F0h
0f7d0: a7c8                      MOVE   -*A14,A8,1
0f7e0: 0788 34a0 0003            MOVE   A8,@334A0h,1
0f810: d60e 3480 0003            MOVE   @33480h,*A14+,1
0f840: 930e                      MOVE   A8,*A14+,1
0f850: 0d5f 8cd0 0002            CALLA  28CD0h
0f880: 0d5f 4220 0002            CALLA  24220h
0f8b0: 0d5f 5be0 0002            CALLA  25BE0h
0f8e0: 09e8 0000 4008            MOVI   40080000h,A8
0f910: 930e                      MOVE   A8,*A14+,1
0f920: 924e                      MOVE   A2,*A14+,1
0f930: 0d5f 6fd0 0002            CALLA  26FD0h
0f960: ca07                      JREQ   F9E0h
0f970: a3cf                      MOVE   A14,-*SP,1
0f980: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0f9a0: 930e                      MOVE   A8,*A14+,1
0f9b0: 0d5f 2b50 0002            CALLA  22B50h
0f9e0: a3cf                      MOVE   A14,-*SP,1
0f9f0: 0548                      SETF   8h,0,0
0fa00: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
0fa20: 930e                      MOVE   A8,*A14+,1
0fa30: 0d5f a320 0001            CALLA  1A320h
0fa60: a3cf                      MOVE   A14,-*SP,1
0fa70: 93ae                      MOVE   A13,*A14+,1
0fa80: 0570                      SETF   10h,1,0
0fa90: b5a8 ff70                 MOVE   *A13(FF70h),A8,0
0fab0: 930e                      MOVE   A8,*A14+,1
0fac0: 0d5f dc40 0000            CALLA  DC40h
0faf0: a3cf                      MOVE   A14,-*SP,1
0fb00: d60e 6460 0003            MOVE   @36460h,*A14+,1
0fb30: 09e8 0000 40a0            MOVI   40A00000h,A8
0fb60: 930e                      MOVE   A8,*A14+,1
0fb70: 0d5f a5f0 0002            CALLA  2A5F0h
0fba0: 0d5f 4500 0002            CALLA  24500h
0fbd0: 930e                      MOVE   A8,*A14+,1
0fbe0: 93ae                      MOVE   A13,*A14+,1
0fbf0: 0d5f 0bb0 0001            CALLA  10BB0h
0fc20: 0548                      SETF   8h,0,0
0fc30: b5aa 0018                 MOVE   *A13(18h),A10,0
0fc50: b5a4 0010                 MOVE   *A13(10h),A4,0
0fc70: 1426                      DEC    A6
0fc80: c063                      JR     102C0h
0fc90: 0570                      SETF   10h,1,0
0fca0: b5aa ff60                 MOVE   *A13(FF60h),A10,0
0fcc0: 142a                      DEC    A10
0fcd0: ca0d                      JREQ   FDB0h
0fce0: 142a                      DEC    A10
0fcf0: ca0b                      JREQ   FDB0h
0fd00: 142a                      DEC    A10
0fd10: ca07                      JREQ   FD90h
0fd20: 142a                      DEC    A10
0fd30: ca07                      JREQ   FDB0h
0fd40: 142a                      DEC    A10
0fd50: ca03                      JREQ   FD90h
0fd60: 142a                      DEC    A10
0fd70: ca03                      JREQ   FDB0h
0fd80: 386a                      DSJS   A10,FDC0h
0fd90: 18ac                      MOVK   5h,A12
0fda0: c001                      JR     FDC0h
0fdb0: 194c                      MOVK   Ah,A12
0fdc0: 182a                      MOVK   1h,A10
0fdd0: 142c                      DEC    A12
0fde0: 0b4c 0000                 CMPI   FFFFh,A12
0fe00: ca1c                      JREQ   FFD0h
0fe10: a3cf                      MOVE   A14,-*SP,1
0fe20: 0548                      SETF   8h,0,0
0fe30: b5aa ff60                 MOVE   *A13(FF60h),A10,0
0fe50: 934e                      MOVE   A10,*A14+,1
0fe60: 0d5f b640 0001            CALLA  1B640h
0fe90: a3cf                      MOVE   A14,-*SP,1
0fea0: 934e                      MOVE   A10,*A14+,1
0feb0: 0d5f d120 0001            CALLA  1D120h
0fee0: 4d0a                      MOVE   A8,A10
0fef0: a3cf                      MOVE   A14,-*SP,1
0ff00: 0548                      SETF   8h,0,0
0ff10: b5a4 ff60                 MOVE   *A13(FF60h),A4,0
0ff30: 928e                      MOVE   A4,*A14+,1
0ff40: 0d5f 7600 0001            CALLA  17600h
0ff70: 142c                      DEC    A12
0ff80: 0b4c 0000                 CMPI   FFFFh,A12
0ffa0: ca02                      JREQ   FFD0h
0ffb0: 4d48                      MOVE   A10,A8
0ffc0: cbe4                      JRNE   FE10h
0ffd0: a3cf                      MOVE   A14,-*SP,1
0ffe0: 0548                      SETF   8h,0,0
0fff0: b5aa ff60                 MOVE   *A13(FF60h),A10,0
10010: 934e                      MOVE   A10,*A14+,1
10020: 0d5f e8d0 0001            CALLA  1E8D0h
10050: a3cf                      MOVE   A14,-*SP,1
10060: 93ae                      MOVE   A13,*A14+,1
10070: 0570                      SETF   10h,1,0
10080: b5a4 ff70                 MOVE   *A13(FF70h),A4,0
100a0: 928e                      MOVE   A4,*A14+,1
100b0: 0d5f dc40 0000            CALLA  DC40h
100e0: a3cf                      MOVE   A14,-*SP,1
100f0: d60e 6460 0003            MOVE   @36460h,*A14+,1
10120: 09e8 0000 40a0            MOVI   40A00000h,A8
10150: 930e                      MOVE   A8,*A14+,1
10160: 0d5f a5f0 0002            CALLA  2A5F0h
10190: 0d5f 4500 0002            CALLA  24500h
101c0: 930e                      MOVE   A8,*A14+,1
101d0: 93ae                      MOVE   A13,*A14+,1
101e0: 0d5f 0bb0 0001            CALLA  10BB0h
10210: 0548                      SETF   8h,0,0
10220: b5aa 0018                 MOVE   *A13(18h),A10,0
10240: b5a4 0010                 MOVE   *A13(10h),A4,0
10260: 1426                      DEC    A6
10270: 0b46 0000                 CMPI   FFFFh,A6
10290: ca2e                      JREQ   10580h
102a0: 4c48                      MOVE   A2,A8
102b0: cb2c                      JRNE   10580h
102c0: 0548                      SETF   8h,0,0
102d0: 05a8 6040 0003            MOVE   @36040h,A8,0
10300: 4548                      SUB    A10,A8
10310: 0d5f 4d10 0002            CALLA  24D10h
10340: 0d5f 5be0 0002            CALLA  25BE0h
10370: 4508                      SUB    A8,A8
10380: 09e0 0000 4024            MOVI   40240000h,A0
103b0: 920e                      MOVE   A0,*A14+,1
103c0: 930e                      MOVE   A8,*A14+,1
103d0: 0d5f 6f70 0002            CALLA  26F70h
10400: ca88                      JREQ   FC90h
10410: 05a8 6410 0003            MOVE   @36410h,A8,0
10440: 4488                      SUB    A4,A8
10450: 0d5f 4d10 0002            CALLA  24D10h
10480: 0d5f 5be0 0002            CALLA  25BE0h
104b0: 4508                      SUB    A8,A8
104c0: 920e                      MOVE   A0,*A14+,1
104d0: 930e                      MOVE   A8,*A14+,1
104e0: 0d5f 6f70 0002            CALLA  26F70h
10510: ca00 ff76                 JREQ   FC90h
10530: 1822                      MOVK   1h,A2
10540: 1426                      DEC    A6
10550: 0b46 0000                 CMPI   FFFFh,A6
10570: cbd2                      JRNE   102A0h
10580: 1822                      MOVK   1h,A2
10590: 186c                      MOVK   3h,A12
105a0: 0550                      SETF   10h,0,0
105b0: 058c 3e00 0003            MOVE   A12,@33E00h,0
105e0: 0d5f 0000 0000            CALLA  0h
10610: a3cf                      MOVE   A14,-*SP,1
10620: 924e                      MOVE   A2,*A14+,1
10630: 0d5f 0000 0000            CALLA  0h
10660: b7ee 0100                 MOVE   *SP(100h),A14,1
10680: 09af 3455                 MMFM   SP,A0,A2,A4,A6,A10,A12,A13
106a0: 0962                      RETS   2h

_adjust_abc:
106b0: 098f 002c                 MMTM   SP,A10,A12,A13
106d0: 4dcd                      MOVE   A14,A13
106e0: 0548                      SETF   8h,0,0
106f0: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
10710: 194c                      MOVK   Ah,A12
10720: 183e                      MOVK   1h,B14
10730: 4d48                      MOVE   A10,A8
10740: 2508                      SLL    8h,A8
10750: 0b28 1f00 0003            ADDI   31F00h,A8
10780: b708 00c0                 MOVE   *A8(C0h),A8,1
107a0: 0788 6060 0003            MOVE   A8,@36060h,1
107d0: 4d48                      MOVE   A10,A8
107e0: 2508                      SLL    8h,A8
107f0: 0b28 1f00 0003            ADDI   31F00h,A8
10820: b708 00e0                 MOVE   *A8(E0h),A8,1
10840: 0788 64e0 0003            MOVE   A8,@364E0h,1
10870: 142c                      DEC    A12
10880: a3cf                      MOVE   A14,-*SP,1
10890: 934e                      MOVE   A10,*A14+,1
108a0: 0d5f b640 0001            CALLA  1B640h
108d0: a3cf                      MOVE   A14,-*SP,1
108e0: 934e                      MOVE   A10,*A14+,1
108f0: 0d5f d120 0001            CALLA  1D120h
10920: 4f0e                      MOVE   A8,B14
10930: 142c                      DEC    A12
10940: 0b4c 0000                 CMPI   FFFFh,A12
10960: ca02                      JREQ   10990h
10970: 4fd8                      MOVE   B14,A8
10980: cbef                      JRNE   10880h
10990: a3cf                      MOVE   A14,-*SP,1
109a0: 934e                      MOVE   A10,*A14+,1
109b0: 0d5f 7600 0001            CALLA  17600h
109e0: a3cf                      MOVE   A14,-*SP,1
109f0: 934e                      MOVE   A10,*A14+,1
10a00: 0d5f e8d0 0001            CALLA  1E8D0h
10a30: 4d4c                      MOVE   A10,A12
10a40: 250c                      SLL    8h,A12
10a50: 0b2c 1f00 0003            ADDI   31F00h,A12
10a80: 07a8 6060 0003            MOVE   @36060h,A8,1
10ab0: b30c 00c0                 MOVE   A8,*A12(C0h),1
10ad0: 250a                      SLL    8h,A10
10ae0: 0b2a 1f00 0003            ADDI   31F00h,A10
10b10: 07ac 64e0 0003            MOVE   @364E0h,A12,1
10b40: b38a 00e0                 MOVE   A12,*A10(E0h),1
10b60: b7ee 0080                 MOVE   *SP(80h),A14,1
10b80: 09af 3400                 MMFM   SP,A10,A12,A13
10ba0: 0962                      RETS   2h

_calculate_peak_and_mean:
10bb0: 098f eb7c                 MMTM   SP,A0-A2,A4,A6,A7,A9-A13
10bd0: 4dcd                      MOVE   A14,A13
10be0: b7a1 ffc0                 MOVE   *A13(FFC0h),A1,1
10c00: b7a0 ffe0                 MOVE   *A13(FFE0h),A0,1
10c20: 44c6                      SUB    A6,A6
10c30: 4cca                      MOVE   A6,A10
10c40: 4cc4                      MOVE   A6,A4
10c50: 4c82                      MOVE   A4,A2
10c60: 4c4b                      MOVE   A2,A11
10c70: 4c49                      MOVE   A2,A9
10c80: 4e2e                      MOVE   A1,B14
10c90: 4c4c                      MOVE   A2,A12
10ca0: 4d88                      MOVE   A12,A8
10cb0: 24a8                      SLL    5h,A8
10cc0: 0b28 3f60 0003            ADDI   33F60h,A8
10cf0: 8708                      MOVE   *A8,A8,1
10d00: 4106                      ADD    A8,A6
10d10: 4d88                      MOVE   A12,A8
10d20: 24a8                      SLL    5h,A8
10d30: 0b28 3f60 0003            ADDI   33F60h,A8
10d60: 8707                      MOVE   *A8,A7,1
10d70: 4d88                      MOVE   A12,A8
10d80: 1028                      INC    A8
10d90: 5f07                      MPYU   A8,A7
10da0: 40ea                      ADD    A7,A10
10db0: 368c                      CMPK   14h,A12
10dc0: c707                      JRGT   10E40h
10dd0: 4d88                      MOVE   A12,A8
10de0: 24a8                      SLL    5h,A8
10df0: 0b28 3f60 0003            ADDI   33F60h,A8
10e20: 8708                      MOVE   *A8,A8,1
10e30: 4104                      ADD    A8,A4
10e40: 0b4c ff05                 CMPI   FAh,A12
10e60: c407                      JRLT   10EE0h
10e70: 4d88                      MOVE   A12,A8
10e80: 24a8                      SLL    5h,A8
10e90: 0b28 3f60 0003            ADDI   33F60h,A8
10ec0: 8708                      MOVE   *A8,A8,1
10ed0: 4102                      ADD    A8,A2
10ee0: 102c                      INC    A12
10ef0: 260c                      SLL    10h,A12
10f00: 2e0c                      SRL    10h,A12
10f10: 0b4c feff                 CMPI   100h,A12
10f30: c4d6                      JRLT   10CA0h
10f40: 4d47                      MOVE   A10,A7
10f50: 5ac7                      DIVU   A6,A7
10f60: 4eec                      MOVE   A7,B12
10f70: 0548                      SETF   8h,0,0
10f80: 053c                      ZEXT   B12,0
10f90: 5ec1                      MPYU   A6,A1
10fa0: 09ca 0064                 MOVI   64h,A10
10fc0: 5b41                      DIVU   A10,A1
10fd0: 454a                      SUB    A10,A10
10fe0: 09cc 00ff                 MOVI   FFh,A12
11000: 4d88                      MOVE   A12,A8
11010: 24a8                      SLL    5h,A8
11020: 0b28 3f60 0003            ADDI   33F60h,A8
11050: 8708                      MOVE   *A8,A8,1
11060: 410a                      ADD    A8,A10
11070: 482a                      CMP    A1,A10
11080: c306                      JRHI   110F0h
11090: 142c                      DEC    A12
110a0: 260c                      SLL    10h,A12
110b0: 2e0c                      SRL    10h,A12
110c0: 4d87                      MOVE   A12,A7
110d0: c5f2                      JRGE   11000h
110e0: c003                      JR     11120h
110f0: 4d8b                      MOVE   A12,A11
11100: 0548                      SETF   8h,0,0
11110: 052b                      ZEXT   A11,0
11120: 4fd1                      MOVE   B14,A1
11130: 5ec1                      MPYU   A6,A1
11140: 09ca 0064                 MOVI   64h,A10
11160: 5b41                      DIVU   A10,A1
11170: 454a                      SUB    A10,A10
11180: 4d4c                      MOVE   A10,A12
11190: 4d88                      MOVE   A12,A8
111a0: 24a8                      SLL    5h,A8
111b0: 0b28 3f60 0003            ADDI   33F60h,A8
111e0: 8708                      MOVE   *A8,A8,1
111f0: 410a                      ADD    A8,A10
11200: 482a                      CMP    A1,A10
11210: c307                      JRHI   11290h
11220: 102c                      INC    A12
11230: 260c                      SLL    10h,A12
11240: 2e0c                      SRL    10h,A12
11250: 0b4c ff00                 CMPI   FFh,A12
11270: c6f1                      JRLE   11190h
11280: c003                      JR     112C0h
11290: 4d89                      MOVE   A12,A9
112a0: 0548                      SETF   8h,0,0
112b0: 0529                      ZEXT   A9,0
112c0: 4c88                      MOVE   A4,A8
112d0: 0d5f 5800 0002            CALLA  25800h
11300: 4cc8                      MOVE   A6,A8
11310: 0d5f 5800 0002            CALLA  25800h
11340: 09ea 6666 3f66            MOVI   3F666666h,A10
11370: 934e                      MOVE   A10,*A14+,1
11380: 0d5f a5f0 0002            CALLA  2A5F0h
113b0: 0d5f a1b0 0002            CALLA  2A1B0h
113e0: ca02                      JREQ   11410h
113f0: 182c                      MOVK   1h,A12
11400: c016                      JR     11570h
11410: 4c48                      MOVE   A2,A8
11420: 0d5f 5800 0002            CALLA  25800h
11450: 4cc8                      MOVE   A6,A8
11460: 0d5f 5800 0002            CALLA  25800h
11490: 09e6 3333 3f73            MOVI   3F733333h,A6
114c0: 92ce                      MOVE   A6,*A14+,1
114d0: 0d5f a5f0 0002            CALLA  2A5F0h
11500: 0d5f a1b0 0002            CALLA  2A1B0h
11530: ca02                      JREQ   11560h
11540: 186c                      MOVK   3h,A12
11550: c001                      JR     11570h
11560: 458c                      SUB    A12,A12
11570: 8d80                      MOVB   A12,*A0
11580: ad60 0010                 MOVB   A11,*A0(10h)
115a0: 4f96                      MOVE   B12,A6
115b0: acc0 0008                 MOVB   A6,*A0(8h)
115d0: ad20 0018                 MOVB   A9,*A0(18h)
115f0: 452b                      SUB    A9,A11
11600: 4d6c                      MOVE   A11,A12
11610: 0548                      SETF   8h,0,0
11620: 052c                      ZEXT   A12,0
11630: 4d81                      MOVE   A12,A1
11640: c602                      JRLE   11670h
11650: 4d86                      MOVE   A12,A6
11660: c001                      JR     11680h
11670: 44c6                      SUB    A6,A6
11680: acc0 0020                 MOVB   A6,*A0(20h)
116a0: b7ee 0180                 MOVE   *SP(180h),A14,1
116c0: 09af 3ed7                 MMFM   SP,A0-A2,A4,A6,A7,A9-A13
116e0: 0962                      RETS   2h

_setup_auto_video_thresholds:
116f0: 09e8 0000 41a0            MOVI   41A00000h,A8
11720: 0788 6080 0003            MOVE   A8,@36080h,1
11750: 09e8 0000 4220            MOVI   42200000h,A8
11780: 0788 60a0 0003            MOVE   A8,@360A0h,1
117b0: 09e8 0000 4270            MOVI   42700000h,A8
117e0: 0788 60c0 0003            MOVE   A8,@360C0h,1
11810: 09e8 0000 42c8            MOVI   42C80000h,A8
11840: 0788 60e0 0003            MOVE   A8,@360E0h,1
11870: 09e8 0000 4110            MOVI   41100000h,A8
118a0: 0788 6100 0003            MOVE   A8,@36100h,1
118d0: 09e8 999a 3e99            MOVI   3E99999Ah,A8
11900: 0788 6120 0003            MOVE   A8,@36120h,1
11930: 09e8 0000 4040            MOVI   40400000h,A8
11960: 0788 6140 0003            MOVE   A8,@36140h,1
11990: 09e8 0000 41a0            MOVI   41A00000h,A8
119c0: 0788 6160 0003            MOVE   A8,@36160h,1
119f0: 09e8 0000 4220            MOVI   42200000h,A8
11a20: 0788 6180 0003            MOVE   A8,@36180h,1
11a50: 09e8 0000 4270            MOVI   42700000h,A8
11a80: 0788 61a0 0003            MOVE   A8,@361A0h,1
11ab0: 09e8 0000 42c8            MOVI   42C80000h,A8
11ae0: 0788 61c0 0003            MOVE   A8,@361C0h,1
11b10: 09e8 0000 4110            MOVI   41100000h,A8
11b40: 0788 61e0 0003            MOVE   A8,@361E0h,1
11b70: 09e8 999a 3e99            MOVI   3E99999Ah,A8
11ba0: 0788 6200 0003            MOVE   A8,@36200h,1
11bd0: 09e8 0000 4040            MOVI   40400000h,A8
11c00: 0788 6220 0003            MOVE   A8,@36220h,1
11c30: 09e8 0000 41a0            MOVI   41A00000h,A8
11c60: 0788 6240 0003            MOVE   A8,@36240h,1
11c90: 09e8 0000 4220            MOVI   42200000h,A8
11cc0: 0788 6260 0003            MOVE   A8,@36260h,1
11cf0: 09e8 0000 4270            MOVI   42700000h,A8
11d20: 0788 6280 0003            MOVE   A8,@36280h,1
11d50: 09e8 0000 42c8            MOVI   42C80000h,A8
11d80: 0788 62a0 0003            MOVE   A8,@362A0h,1
11db0: 09e8 0000 4110            MOVI   41100000h,A8
11de0: 0788 62c0 0003            MOVE   A8,@362C0h,1
11e10: 09e8 999a 3e99            MOVI   3E99999Ah,A8
11e40: 0788 62e0 0003            MOVE   A8,@362E0h,1
11e70: 09e8 0000 4040            MOVI   40400000h,A8
11ea0: 0788 6300 0003            MOVE   A8,@36300h,1
11ed0: 09e8 0000 41a0            MOVI   41A00000h,A8
11f00: 0788 6320 0003            MOVE   A8,@36320h,1
11f30: 09e8 0000 4220            MOVI   42200000h,A8
11f60: 0788 6340 0003            MOVE   A8,@36340h,1
11f90: 09e8 0000 4270            MOVI   42700000h,A8
11fc0: 0788 6360 0003            MOVE   A8,@36360h,1
11ff0: 09e8 0000 42c8            MOVI   42C80000h,A8
12020: 0788 6380 0003            MOVE   A8,@36380h,1
12050: 09e8 0000 4110            MOVI   41100000h,A8
12080: 0788 63a0 0003            MOVE   A8,@363A0h,1
120b0: 09e8 999a 3e99            MOVI   3E99999Ah,A8
120e0: 0788 63c0 0003            MOVE   A8,@363C0h,1
12110: 09e8 0000 4040            MOVI   40400000h,A8
12140: 0788 63e0 0003            MOVE   A8,@363E0h,1
12170: 0960                      RETS   

_reset_autolevelling:
12180: 098f 0028                 MMTM   SP,A10,A12
121a0: 182c                      MOVK   1h,A12
121b0: 4d88                      MOVE   A12,A8
121c0: 24a8                      SLL    5h,A8
121d0: 0b28 34e0 0003            ADDI   334E0h,A8
12200: 4d8a                      MOVE   A12,A10
12210: 250a                      SLL    8h,A10
12220: 0b2a 1f00 0003            ADDI   31F00h,A10
12250: 8b48                      MOVE   *A10,*A8,1
12260: 4d8a                      MOVE   A12,A10
12270: 24aa                      SLL    5h,A10
12280: 0b2a 3720 0003            ADDI   33720h,A10
122b0: 4508                      SUB    A8,A8
122c0: 830a                      MOVE   A8,*A10,1
122d0: 4d8a                      MOVE   A12,A10
122e0: 24aa                      SLL    5h,A10
122f0: 0b2a 3960 0003            ADDI   33960h,A10
12320: 830a                      MOVE   A8,*A10,1
12330: 4d8a                      MOVE   A12,A10
12340: 24aa                      SLL    5h,A10
12350: 0b2a 3ba0 0003            ADDI   33BA0h,A10
12380: 830a                      MOVE   A8,*A10,1
12390: 102c                      INC    A12
123a0: 260c                      SLL    10h,A12
123b0: 2a0c                      SRA    10h,A12
123c0: 364c                      CMPK   12h,A12
123d0: c6dd                      JRLE   121B0h
123e0: 09af 1400                 MMFM   SP,A10,A12
12400: 0960                      RETS   

_perform_auto_video_loop:
12410: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
12430: 4dcd                      MOVE   A14,A13
12440: 0b0e 0040                 ADDI   40h,A14
12460: 182c                      MOVK   1h,A12
12470: c000 01db                 JR     14240h
12490: 09e8 0000 3f80            MOVI   3F800000h,A8
124c0: 0788 6460 0003            MOVE   A8,@36460h,1
124f0: a3cf                      MOVE   A14,-*SP,1
12500: 930e                      MOVE   A8,*A14+,1
12510: 09e8 0000 40a0            MOVI   40A00000h,A8
12540: 930e                      MOVE   A8,*A14+,1
12550: 0d5f a5f0 0002            CALLA  2A5F0h
12580: 0d5f 4500 0002            CALLA  24500h
125b0: 930e                      MOVE   A8,*A14+,1
125c0: 93ae                      MOVE   A13,*A14+,1
125d0: 0d5f 0bb0 0001            CALLA  10BB0h
12600: 4d88                      MOVE   A12,A8
12610: 2508                      SLL    8h,A8
12620: 0b28 1f00 0003            ADDI   31F00h,A8
12650: 0570                      SETF   10h,1,0
12660: b508 0080                 MOVE   *A8(80h),A8,0
12680: 0d88 0047                 DSJ    A8,12B10h
126a0: 0548                      SETF   8h,0,0
126b0: b5a8 0008                 MOVE   *A13(8h),A8,0
126d0: 0d5f 5800 0002            CALLA  25800h
12700: 09e8 c8c9 3ec8            MOVI   3EC8C8C9h,A8
12730: 930e                      MOVE   A8,*A14+,1
12740: 0d5f a5f0 0002            CALLA  2A5F0h
12770: a7c8                      MOVE   -*A14,A8,1
12780: 0788 34a0 0003            MOVE   A8,@334A0h,1
127b0: 4d88                      MOVE   A12,A8
127c0: 2508                      SLL    8h,A8
127d0: 0b28 1f00 0003            ADDI   31F00h,A8
12800: 0570                      SETF   10h,1,0
12810: b508 00a0                 MOVE   *A8(A0h),A8,0
12830: 1428                      DEC    A8
12840: ca14                      JREQ   12990h
12850: 4d88                      MOVE   A12,A8
12860: 2508                      SLL    8h,A8
12870: 0b28 1f00 0003            ADDI   31F00h,A8
128a0: b708 0060                 MOVE   *A8(60h),A8,1
128c0: 0788 3480 0003            MOVE   A8,@33480h,1
128f0: 4d88                      MOVE   A12,A8
12900: 2508                      SLL    8h,A8
12910: 0b28 1f00 0003            ADDI   31F00h,A8
12940: b508 0080                 MOVE   *A8(80h),A8,0
12960: 1448                      SUBK   2h,A8
12970: cb68                      JRNE   13000h
12980: c022                      JR     12BB0h
12990: 4d88                      MOVE   A12,A8
129a0: 2508                      SLL    8h,A8
129b0: 0b28 1f00 0003            ADDI   31F00h,A8
129e0: 07aa 34a0 0003            MOVE   @334A0h,A10,1
12a10: 078a 3480 0003            MOVE   A10,@33480h,1
12a40: b348 0060                 MOVE   A10,*A8(60h),1
12a60: 4d88                      MOVE   A12,A8
12a70: 2508                      SLL    8h,A8
12a80: 0b28 1f00 0003            ADDI   31F00h,A8
12ab0: 454a                      SUB    A10,A10
12ac0: b148 00a0                 MOVE   A10,*A8(A0h),0
12ae0: 0d5f 2180 0001            CALLA  12180h
12b10: 4d8a                      MOVE   A12,A10
12b20: 250a                      SLL    8h,A10
12b30: 0b2a 1f00 0003            ADDI   31F00h,A10
12b60: 0570                      SETF   10h,1,0
12b70: b54a 0080                 MOVE   *A10(80h),A10,0
12b90: 144a                      SUBK   2h,A10
12ba0: cb45                      JRNE   13000h
12bb0: 0548                      SETF   8h,0,0
12bc0: b5a8 0010                 MOVE   *A13(10h),A8,0
12be0: 0d5f 5800 0002            CALLA  25800h
12c10: 09ea c8c9 3ec8            MOVI   3EC8C8C9h,A10
12c40: 934e                      MOVE   A10,*A14+,1
12c50: 0d5f a5f0 0002            CALLA  2A5F0h
12c80: a7c8                      MOVE   -*A14,A8,1
12c90: 0788 34a0 0003            MOVE   A8,@334A0h,1
12cc0: 4d8a                      MOVE   A12,A10
12cd0: 250a                      SLL    8h,A10
12ce0: 0b2a 1f00 0003            ADDI   31F00h,A10
12d10: 0570                      SETF   10h,1,0
12d20: b54a 0090                 MOVE   *A10(90h),A10,0
12d40: 142a                      DEC    A10
12d50: ca15                      JREQ   12EB0h
12d60: 4d8a                      MOVE   A12,A10
12d70: 250a                      SLL    8h,A10
12d80: 0b2a 1f00 0003            ADDI   31F00h,A10
12db0: b74a 0040                 MOVE   *A10(40h),A10,1
12dd0: 078a 3480 0003            MOVE   A10,@33480h,1
12e00: 4d88                      MOVE   A12,A8
12e10: 2508                      SLL    8h,A8
12e20: 0b28 1f00 0003            ADDI   31F00h,A8
12e50: b508 0080                 MOVE   *A8(80h),A8,0
12e70: 1468                      SUBK   3h,A8
12e80: cb00 00f3                 JRNE   13DD0h
12ea0: c020                      JR     130B0h
12eb0: 4d8a                      MOVE   A12,A10
12ec0: 250a                      SLL    8h,A10
12ed0: 0b2a 1f00 0003            ADDI   31F00h,A10
12f00: 0788 3480 0003            MOVE   A8,@33480h,1
12f30: b30a 0040                 MOVE   A8,*A10(40h),1
12f50: 4d8a                      MOVE   A12,A10
12f60: 250a                      SLL    8h,A10
12f70: 0b2a 1f00 0003            ADDI   31F00h,A10
12fa0: 4508                      SUB    A8,A8
12fb0: b10a 0090                 MOVE   A8,*A10(90h),0
12fd0: 0d5f 2180 0001            CALLA  12180h
13000: 4d8a                      MOVE   A12,A10
13010: 250a                      SLL    8h,A10
13020: 0b2a 1f00 0003            ADDI   31F00h,A10
13050: 0570                      SETF   10h,1,0
13060: b54a 0080                 MOVE   *A10(80h),A10,0
13080: 146a                      SUBK   3h,A10
13090: cb00 00d2                 JRNE   13DD0h
130b0: 0548                      SETF   8h,0,0
130c0: b5a6 0010                 MOVE   *A13(10h),A6,0
130e0: b5aa 0018                 MOVE   *A13(18h),A10,0
13100: 4d88                      MOVE   A12,A8
13110: 2508                      SLL    8h,A8
13120: 0b28 1f00 0003            ADDI   31F00h,A8
13150: b708 00c0                 MOVE   *A8(C0h),A8,1
13170: 0788 6060 0003            MOVE   A8,@36060h,1
131a0: 4d88                      MOVE   A12,A8
131b0: 2508                      SLL    8h,A8
131c0: 0b28 1f00 0003            ADDI   31F00h,A8
131f0: b708 00e0                 MOVE   *A8(E0h),A8,1
13210: 0788 64e0 0003            MOVE   A8,@364E0h,1
13240: 4d88                      MOVE   A12,A8
13250: 2508                      SLL    8h,A8
13260: 0b28 1f00 0003            ADDI   31F00h,A8
13290: 0570                      SETF   10h,1,0
132a0: b508 00b0                 MOVE   *A8(B0h),A8,0
132c0: 0d88 005b                 DSJ    A8,13890h
132e0: 05ea 6040 0003            MOVB   A10,@36040h
13310: 05e6 6410 0003            MOVB   A6,@36410h
13340: 4d88                      MOVE   A12,A8
13350: 2508                      SLL    8h,A8
13360: 0b28 1f00 0003            ADDI   31F00h,A8
13390: 100e                      ADDK   20h,A14
133a0: a3cf                      MOVE   A14,-*SP,1
133b0: 09e4 0000 42c8            MOVI   42C80000h,A4
133e0: 928e                      MOVE   A4,*A14+,1
133f0: 4484                      SUB    A4,A4
13400: 928e                      MOVE   A4,*A14+,1
13410: 4cc4                      MOVE   A6,A4
13420: 4144                      ADD    A10,A4
13430: 4d02                      MOVE   A8,A2
13440: 4c88                      MOVE   A4,A8
13450: 0be8 ff69                 SUBI   96h,A8
13470: 0d5f 5060 0002            CALLA  25060h
134a0: 09e4 0000 3f00            MOVI   3F000000h,A4
134d0: 928e                      MOVE   A4,*A14+,1
134e0: 0d5f a5f0 0002            CALLA  2A5F0h
13510: 0d5f cdb0 0000            CALLA  CDB0h
13540: a7c8                      MOVE   -*A14,A8,1
13550: b302 00c0                 MOVE   A8,*A2(C0h),1
13570: 4d82                      MOVE   A12,A2
13580: 2502                      SLL    8h,A2
13590: 0b22 1f00 0003            ADDI   31F00h,A2
135c0: 100e                      ADDK   20h,A14
135d0: a3cf                      MOVE   A14,-*SP,1
135e0: 09e8 0000 42c8            MOVI   42C80000h,A8
13610: 930e                      MOVE   A8,*A14+,1
13620: 4508                      SUB    A8,A8
13630: 930e                      MOVE   A8,*A14+,1
13640: 0548                      SETF   8h,0,0
13650: 05a8 6410 0003            MOVE   @36410h,A8,0
13680: 05a4 6040 0003            MOVE   @36040h,A4,0
136b0: 4488                      SUB    A4,A8
136c0: 17c8                      SUBK   1Eh,A8
136d0: 0d5f 5060 0002            CALLA  25060h
13700: 09e8 0000 3f00            MOVI   3F000000h,A8
13730: 930e                      MOVE   A8,*A14+,1
13740: 0d5f a5f0 0002            CALLA  2A5F0h
13770: 0d5f cdb0 0000            CALLA  CDB0h
137a0: a7c4                      MOVE   -*A14,A4,1
137b0: b282 00e0                 MOVE   A4,*A2(E0h),1
137d0: 4d84                      MOVE   A12,A4
137e0: 2504                      SLL    8h,A4
137f0: 0b24 1f00 0003            ADDI   31F00h,A4
13820: 4442                      SUB    A2,A2
13830: 0570                      SETF   10h,1,0
13840: b044 00b0                 MOVE   A2,*A4(B0h),0
13860: 0d5f 2180 0001            CALLA  12180h
13890: a3cf                      MOVE   A14,-*SP,1
138a0: 4d84                      MOVE   A12,A4
138b0: 0548                      SETF   8h,0,0
138c0: 0524                      ZEXT   A4,0
138d0: 928e                      MOVE   A4,*A14+,1
138e0: 0d5f a320 0001            CALLA  1A320h
13910: 0548                      SETF   8h,0,0
13920: 05a4 6040 0003            MOVE   @36040h,A4,0
13950: 4544                      SUB    A10,A4
13960: 0384                      ABS    A4
13970: 1684                      SUBK   14h,A4
13980: c70c                      JRGT   13A50h
13990: 05a4 6410 0003            MOVE   @36410h,A4,0
139c0: 44c4                      SUB    A6,A4
139d0: 0384                      ABS    A4
139e0: 1684                      SUBK   14h,A4
139f0: c705                      JRGT   13A50h
13a00: 4d42                      MOVE   A10,A2
13a10: c403                      JRLT   13A50h
13a20: 0b46 ff00                 CMPI   FFh,A6
13a40: c67a                      JRLE   141F0h
13a50: 05a4 6040 0003            MOVE   @36040h,A4,0
13a80: 4544                      SUB    A10,A4
13a90: 0384                      ABS    A4
13aa0: 0b44 ffcd                 CMPI   32h,A4
13ac0: c722                      JRGT   13CF0h
13ad0: 05a4 6410 0003            MOVE   @36410h,A4,0
13b00: 44c4                      SUB    A6,A4
13b10: 0384                      ABS    A4
13b20: 0b44 ffcd                 CMPI   32h,A4
13b40: c71a                      JRGT   13CF0h
13b50: 4d42                      MOVE   A10,A2
13b60: c418                      JRLT   13CF0h
13b70: 0b46 ff00                 CMPI   FFh,A6
13b90: c715                      JRGT   13CF0h
13ba0: a3cf                      MOVE   A14,-*SP,1
13bb0: 4d84                      MOVE   A12,A4
13bc0: 0524                      ZEXT   A4,0
13bd0: 928e                      MOVE   A4,*A14+,1
13be0: 0d5f 06b0 0001            CALLA  106B0h
13c10: 4d84                      MOVE   A12,A4
13c20: 2484                      SLL    4h,A4
13c30: 0b24 3100 0003            ADDI   33100h,A4
13c60: 0550                      SETF   10h,0,0
13c70: 8484                      MOVE   *A4,A4,0
13c80: 2464                      SLL    3h,A4
13c90: 0b24 3e20 0003            ADDI   33E20h,A4
13cc0: 4508                      SUB    A8,A8
13cd0: 8d04                      MOVB   A8,*A4
13ce0: c050                      JR     141F0h
13cf0: 4d84                      MOVE   A12,A4
13d00: 2484                      SLL    4h,A4
13d10: 0b24 3100 0003            ADDI   33100h,A4
13d40: 0550                      SETF   10h,0,0
13d50: 8484                      MOVE   *A4,A4,0
13d60: 2464                      SLL    3h,A4
13d70: 0b24 3e20 0003            ADDI   33E20h,A4
13da0: 1822                      MOVK   1h,A2
13db0: 8c44                      MOVB   A2,*A4
13dc0: c042                      JR     141F0h
13dd0: d60e 3480 0003            MOVE   @33480h,*A14+,1
13e00: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
13e30: 0d5f 8cd0 0002            CALLA  28CD0h
13e60: 0d5f 8b50 0002            CALLA  28B50h
13e90: a7ca                      MOVE   -*A14,A10,1
13ea0: 934e                      MOVE   A10,*A14+,1
13eb0: 09e6 0000 4040            MOVI   40400000h,A6
13ee0: 92ce                      MOVE   A6,*A14+,1
13ef0: 0d5f a2c0 0002            CALLA  2A2C0h
13f20: ca2c                      JREQ   141F0h
13f30: 934e                      MOVE   A10,*A14+,1
13f40: 09ea 0000 41f0            MOVI   41F00000h,A10
13f70: 934e                      MOVE   A10,*A14+,1
13f80: 0d5f a3d0 0002            CALLA  2A3D0h
13fb0: ca16                      JREQ   14120h
13fc0: a3cf                      MOVE   A14,-*SP,1
13fd0: 4d84                      MOVE   A12,A4
13fe0: 2704                      SLL    18h,A4
13ff0: 2d04                      SRL    18h,A4
14000: 928e                      MOVE   A4,*A14+,1
14010: 0d5f 4590 0001            CALLA  14590h
14040: 4d84                      MOVE   A12,A4
14050: 2484                      SLL    4h,A4
14060: 0b24 3100 0003            ADDI   33100h,A4
14090: 0550                      SETF   10h,0,0
140a0: 8484                      MOVE   *A4,A4,0
140b0: 2464                      SLL    3h,A4
140c0: 0b24 3e20 0003            ADDI   33E20h,A4
140f0: 4442                      SUB    A2,A2
14100: 8c44                      MOVB   A2,*A4
14110: c00d                      JR     141F0h
14120: 4d84                      MOVE   A12,A4
14130: 2484                      SLL    4h,A4
14140: 0b24 3100 0003            ADDI   33100h,A4
14170: 0550                      SETF   10h,0,0
14180: 8484                      MOVE   *A4,A4,0
14190: 2464                      SLL    3h,A4
141a0: 0b24 3e20 0003            ADDI   33E20h,A4
141d0: 1822                      MOVK   1h,A2
141e0: 8c44                      MOVB   A2,*A4
141f0: 102c                      INC    A12
14200: 260c                      SLL    10h,A12
14210: 2a0c                      SRA    10h,A12
14220: 364c                      CMPK   12h,A12
14230: c730                      JRGT   14540h
14240: 4d8a                      MOVE   A12,A10
14250: 246a                      SLL    3h,A10
14260: 0b2a 1e60 0003            ADDI   31E60h,A10
14290: 8f4a                      MOVB   *A10,A10
142a0: 3d8a                      DSJS   A10,141F0h
142b0: 4d8a                      MOVE   A12,A10
142c0: 250a                      SLL    8h,A10
142d0: 0b2a 1f00 0003            ADDI   31F00h,A10
14300: 0570                      SETF   10h,1,0
14310: b54a 0080                 MOVE   *A10(80h),A10,0
14330: caeb                      JREQ   141F0h
14340: 4d8a                      MOVE   A12,A10
14350: 248a                      SLL    4h,A10
14360: 0b2a 3100 0003            ADDI   33100h,A10
14390: 0550                      SETF   10h,0,0
143a0: 854a                      MOVE   *A10,A10,0
143b0: 246a                      SLL    3h,A10
143c0: 0b2a 3e20 0003            ADDI   33E20h,A10
143f0: 8f4a                      MOVB   *A10,A10
14400: cbde                      JRNE   141F0h
14410: a3cf                      MOVE   A14,-*SP,1
14420: 93ae                      MOVE   A13,*A14+,1
14430: 4d8a                      MOVE   A12,A10
14440: 248a                      SLL    4h,A10
14450: 0b2a 3100 0003            ADDI   33100h,A10
14480: 0570                      SETF   10h,1,0
14490: 854a                      MOVE   *A10,A10,0
144a0: 934e                      MOVE   A10,*A14+,1
144b0: 0d5f dc40 0000            CALLA  DC40h
144e0: 07aa 3220 0003            MOVE   @33220h,A10,1
14510: 142a                      DEC    A10
14520: ca00 fdf5                 JREQ   12490h
14540: 0bee ffbf                 SUBI   40h,A14
14560: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
14580: 0960                      RETS   

_do_autovideo:
14590: 098f 022c                 MMTM   SP,A6,A10,A12,A13
145b0: 4dcd                      MOVE   A14,A13
145c0: 0548                      SETF   8h,0,0
145d0: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
145f0: 100e                      ADDK   20h,A14
14600: a3cf                      MOVE   A14,-*SP,1
14610: 09e8 0000 42a0            MOVI   42A00000h,A8
14640: 930e                      MOVE   A8,*A14+,1
14650: 09e8 0000 3f80            MOVI   3F800000h,A8
14680: 930e                      MOVE   A8,*A14+,1
14690: 4d88                      MOVE   A12,A8
146a0: 2508                      SLL    8h,A8
146b0: 0b28 1f00 0003            ADDI   31F00h,A8
146e0: 9b0e                      MOVE   *A8+,*A14+,1
146f0: 0d5f cdb0 0000            CALLA  CDB0h
14720: a7c8                      MOVE   -*A14,A8,1
14730: 0788 34c0 0003            MOVE   A8,@334C0h,1
14760: 100e                      ADDK   20h,A14
14770: a3cf                      MOVE   A14,-*SP,1
14780: 09e8 0000 42c8            MOVI   42C80000h,A8
147b0: 930e                      MOVE   A8,*A14+,1
147c0: 09e8 0000 3f80            MOVI   3F800000h,A8
147f0: 930e                      MOVE   A8,*A14+,1
14800: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
14830: 0d5f cdb0 0000            CALLA  CDB0h
14860: a7c8                      MOVE   -*A14,A8,1
14870: 0788 34a0 0003            MOVE   A8,@334A0h,1
148a0: 4d88                      MOVE   A12,A8
148b0: 24a8                      SLL    5h,A8
148c0: 0b28 3720 0003            ADDI   33720h,A8
148f0: 8708                      MOVE   *A8,A8,1
14900: 1448                      SUBK   2h,A8
14910: c619                      JRLE   14AB0h
14920: 100e                      ADDK   20h,A14
14930: a3cf                      MOVE   A14,-*SP,1
14940: 4508                      SUB    A8,A8
14950: 930e                      MOVE   A8,*A14+,1
14960: 4d88                      MOVE   A12,A8
14970: 24a8                      SLL    5h,A8
14980: 0b28 34e0 0003            ADDI   334E0h,A8
149b0: 9b0e                      MOVE   *A8+,*A14+,1
149c0: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
149f0: 0d5f cff0 0000            CALLA  CFF0h
14a20: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
14a50: 0d5f 8df0 0002            CALLA  28DF0h
14a80: a7ca                      MOVE   -*A14,A10,1
14a90: c000 00c8                 JR     15730h
14ab0: 4d8a                      MOVE   A12,A10
14ac0: 142a                      DEC    A10
14ad0: ca3e                      JREQ   14EC0h
14ae0: 142a                      DEC    A10
14af0: ca3c                      JREQ   14EC0h
14b00: 142a                      DEC    A10
14b10: ca22                      JREQ   14D40h
14b20: 142a                      DEC    A10
14b30: ca16                      JREQ   14CA0h
14b40: 144a                      SUBK   2h,A10
14b50: ca0a                      JREQ   14C00h
14b60: 100e                      ADDK   20h,A14
14b70: a3cf                      MOVE   A14,-*SP,1
14b80: 1868                      MOVK   3h,A8
14b90: 930e                      MOVE   A8,*A14+,1
14ba0: 938e                      MOVE   A12,*A14+,1
14bb0: 0d5f 5ba0 0001            CALLA  15BA0h
14be0: a7ca                      MOVE   -*A14,A10,1
14bf0: c035                      JR     14F50h
14c00: 100e                      ADDK   20h,A14
14c10: a3cf                      MOVE   A14,-*SP,1
14c20: 1848                      MOVK   2h,A8
14c30: 930e                      MOVE   A8,*A14+,1
14c40: 938e                      MOVE   A12,*A14+,1
14c50: 0d5f 5ba0 0001            CALLA  15BA0h
14c80: a7ca                      MOVE   -*A14,A10,1
14c90: c02b                      JR     14F50h
14ca0: 100e                      ADDK   20h,A14
14cb0: a3cf                      MOVE   A14,-*SP,1
14cc0: 1828                      MOVK   1h,A8
14cd0: 930e                      MOVE   A8,*A14+,1
14ce0: 938e                      MOVE   A12,*A14+,1
14cf0: 0d5f 5ba0 0001            CALLA  15BA0h
14d20: a7ca                      MOVE   -*A14,A10,1
14d30: c021                      JR     14F50h
14d40: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
14d70: d60e 3480 0003            MOVE   @33480h,*A14+,1
14da0: 0d5f 8cd0 0002            CALLA  28CD0h
14dd0: 09e8 a3d7 3ef0            MOVI   3EF0A3D7h,A8
14e00: 930e                      MOVE   A8,*A14+,1
14e10: 0d5f a5f0 0002            CALLA  2A5F0h
14e40: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
14e70: 0d5f 8bb0 0002            CALLA  28BB0h
14ea0: a7ca                      MOVE   -*A14,A10,1
14eb0: c009                      JR     14F50h
14ec0: 100e                      ADDK   20h,A14
14ed0: a3cf                      MOVE   A14,-*SP,1
14ee0: 4508                      SUB    A8,A8
14ef0: 930e                      MOVE   A8,*A14+,1
14f00: 938e                      MOVE   A12,*A14+,1
14f10: 0d5f 5ba0 0001            CALLA  15BA0h
14f40: a7ca                      MOVE   -*A14,A10,1
14f50: 4d88                      MOVE   A12,A8
14f60: 24a8                      SLL    5h,A8
14f70: 0b28 34e0 0003            ADDI   334E0h,A8
14fa0: 9b0e                      MOVE   *A8+,*A14+,1
14fb0: 934e                      MOVE   A10,*A14+,1
14fc0: 0d5f a110 0002            CALLA  2A110h
14ff0: ca21                      JREQ   15210h
15000: 4d88                      MOVE   A12,A8
15010: 24a8                      SLL    5h,A8
15020: 0b28 3ba0 0003            ADDI   33BA0h,A8
15050: 4d86                      MOVE   A12,A6
15060: 24a6                      SLL    5h,A6
15070: 0b26 3960 0003            ADDI   33960h,A6
150a0: 8ac8                      MOVE   *A6,*A8,1
150b0: 4d86                      MOVE   A12,A6
150c0: 24a6                      SLL    5h,A6
150d0: 0b26 3960 0003            ADDI   33960h,A6
15100: 4508                      SUB    A8,A8
15110: 8306                      MOVE   A8,*A6,1
15120: 4d86                      MOVE   A12,A6
15130: 24a6                      SLL    5h,A6
15140: 0b26 3960 0003            ADDI   33960h,A6
15170: 4d88                      MOVE   A12,A8
15180: 24a8                      SLL    5h,A8
15190: 0b28 3ba0 0003            ADDI   33BA0h,A8
151c0: 86c6                      MOVE   *A6,A6,1
151d0: 8708                      MOVE   *A8,A8,1
151e0: 4906                      CMP    A8,A6
151f0: cb36                      JRNE   15560h
15200: c02d                      JR     154E0h
15210: 4d86                      MOVE   A12,A6
15220: 24a6                      SLL    5h,A6
15230: 0b26 3ba0 0003            ADDI   33BA0h,A6
15260: 4d88                      MOVE   A12,A8
15270: 24a8                      SLL    5h,A8
15280: 0b28 3960 0003            ADDI   33960h,A8
152b0: 8b06                      MOVE   *A8,*A6,1
152c0: 4d88                      MOVE   A12,A8
152d0: 24a8                      SLL    5h,A8
152e0: 0b28 34e0 0003            ADDI   334E0h,A8
15310: 9b0e                      MOVE   *A8+,*A14+,1
15320: 934e                      MOVE   A10,*A14+,1
15330: 0d5f a4e0 0002            CALLA  2A4E0h
15360: ca02                      JREQ   15390h
15370: 1826                      MOVK   1h,A6
15380: c001                      JR     153A0h
15390: 1846                      MOVK   2h,A6
153a0: 4d88                      MOVE   A12,A8
153b0: 24a8                      SLL    5h,A8
153c0: 0b28 3960 0003            ADDI   33960h,A8
153f0: 82c8                      MOVE   A6,*A8,1
15400: 4d86                      MOVE   A12,A6
15410: 24a6                      SLL    5h,A6
15420: 0b26 3960 0003            ADDI   33960h,A6
15450: 4d88                      MOVE   A12,A8
15460: 24a8                      SLL    5h,A8
15470: 0b28 3ba0 0003            ADDI   33BA0h,A8
154a0: 86c6                      MOVE   *A6,A6,1
154b0: 8708                      MOVE   *A8,A8,1
154c0: 4906                      CMP    A8,A6
154d0: cb08                      JRNE   15560h
154e0: 4d86                      MOVE   A12,A6
154f0: 24a6                      SLL    5h,A6
15500: 0b26 3720 0003            ADDI   33720h,A6
15530: 4508                      SUB    A8,A8
15540: 8306                      MOVE   A8,*A6,1
15550: c01d                      JR     15730h
15560: 4d86                      MOVE   A12,A6
15570: 24a6                      SLL    5h,A6
15580: 0b26 3720 0003            ADDI   33720h,A6
155b0: 86c8                      MOVE   *A6,A8,1
155c0: 1028                      INC    A8
155d0: 8306                      MOVE   A8,*A6,1
155e0: 1448                      SUBK   2h,A8
155f0: c613                      JRLE   15730h
15600: 100e                      ADDK   20h,A14
15610: a3cf                      MOVE   A14,-*SP,1
15620: 1826                      MOVK   1h,A6
15630: 92ce                      MOVE   A6,*A14+,1
15640: 4d88                      MOVE   A12,A8
15650: 24a8                      SLL    5h,A8
15660: 0b28 34e0 0003            ADDI   334E0h,A8
15690: 9b0e                      MOVE   *A8+,*A14+,1
156a0: 934e                      MOVE   A10,*A14+,1
156b0: 0d5f cff0 0000            CALLA  CFF0h
156e0: 934e                      MOVE   A10,*A14+,1
156f0: 0d5f 8df0 0002            CALLA  28DF0h
15720: a7ca                      MOVE   -*A14,A10,1
15730: 4d86                      MOVE   A12,A6
15740: 24a6                      SLL    5h,A6
15750: 0b26 34e0 0003            ADDI   334E0h,A6
15780: 934e                      MOVE   A10,*A14+,1
15790: 9ace                      MOVE   *A6+,*A14+,1
157a0: 0d5f 8cd0 0002            CALLA  28CD0h
157d0: 0d5f 4220 0002            CALLA  24220h
15800: 0d5f 5be0 0002            CALLA  25BE0h
15830: 09e6 f2e0 0002            MOVI   2F2E0h,A6
15860: 9ace                      MOVE   *A6+,*A14+,1
15870: 9ace                      MOVE   *A6+,*A14+,1
15880: 0d5f 6f70 0002            CALLA  26F70h
158b0: ca07                      JREQ   15930h
158c0: 24ac                      SLL    5h,A12
158d0: 0b2c 3720 0003            ADDI   33720h,A12
15900: 454a                      SUB    A10,A10
15910: 834c                      MOVE   A10,*A12,1
15920: c022                      JR     15B50h
15930: 4d86                      MOVE   A12,A6
15940: 24a6                      SLL    5h,A6
15950: 0b26 34e0 0003            ADDI   334E0h,A6
15980: 100e                      ADDK   20h,A14
15990: a3cf                      MOVE   A14,-*SP,1
159a0: 09e8 0000 42a0            MOVI   42A00000h,A8
159d0: 930e                      MOVE   A8,*A14+,1
159e0: 09e8 0000 3f80            MOVI   3F800000h,A8
15a10: 930e                      MOVE   A8,*A14+,1
15a20: 934e                      MOVE   A10,*A14+,1
15a30: 0d5f cdb0 0000            CALLA  CDB0h
15a60: b7ca ffe0                 MOVE   *A14(FFE0h),A10,1
15a80: a7c8                      MOVE   -*A14,A8,1
15a90: 8306                      MOVE   A8,*A6,1
15aa0: a3cf                      MOVE   A14,-*SP,1
15ab0: a3cf                      MOVE   A14,-*SP,1
15ac0: 934e                      MOVE   A10,*A14+,1
15ad0: 938e                      MOVE   A12,*A14+,1
15ae0: 0d5f 9c30 0000            CALLA  9C30h
15b10: 930e                      MOVE   A8,*A14+,1
15b20: 0d5f 0000 0000            CALLA  0h
15b50: b7ee 00a0                 MOVE   *SP(A0h),A14,1
15b70: 09af 3440                 MMFM   SP,A6,A10,A12,A13
15b90: 0962                      RETS   2h

_algorithm_one:
15ba0: 098f ea3c                 MMTM   SP,A0-A2,A4,A6,A10-A13
15bc0: 4dcd                      MOVE   A14,A13
15bd0: 0570                      SETF   10h,1,0
15be0: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
15c00: 09cb 00e0                 MOVI   E0h,A11
15c20: 5d8b                      MPYS   A12,A11
15c30: 0b2b 6080 0003            ADDI   36080h,A11
15c60: 8762                      MOVE   *A11,A2,1
15c70: 09cb 00e0                 MOVI   E0h,A11
15c90: 5d8b                      MPYS   A12,A11
15ca0: 0b2b 6080 0003            ADDI   36080h,A11
15cd0: b766 0020                 MOVE   *A11(20h),A6,1
15cf0: 09cb 00e0                 MOVI   E0h,A11
15d10: 5d8b                      MPYS   A12,A11
15d20: 0b2b 6080 0003            ADDI   36080h,A11
15d50: b760 0040                 MOVE   *A11(40h),A0,1
15d70: 09cb 00e0                 MOVI   E0h,A11
15d90: 5d8b                      MPYS   A12,A11
15da0: 0b2b 6080 0003            ADDI   36080h,A11
15dd0: b76a 0080                 MOVE   *A11(80h),A10,1
15df0: 09cb 00e0                 MOVI   E0h,A11
15e10: 5d8b                      MPYS   A12,A11
15e20: 0b2b 6080 0003            ADDI   36080h,A11
15e50: b761 00a0                 MOVE   *A11(A0h),A1,1
15e70: 09cb 00e0                 MOVI   E0h,A11
15e90: 5d8b                      MPYS   A12,A11
15ea0: 0b2b 6080 0003            ADDI   36080h,A11
15ed0: b76c 00c0                 MOVE   *A11(C0h),A12,1
15ef0: d60e 3de0 0003            MOVE   @33DE0h,*A14+,1
15f20: d60e 3f20 0003            MOVE   @33F20h,*A14+,1
15f50: 0d5f a110 0002            CALLA  2A110h
15f80: cb12                      JRNE   160B0h
15f90: d60e 3f20 0003            MOVE   @33F20h,*A14+,1
15fc0: 4508                      SUB    A8,A8
15fd0: 930e                      MOVE   A8,*A14+,1
15fe0: 0d5f a3d0 0002            CALLA  2A3D0h
16010: cb09                      JRNE   160B0h
16020: d60e 3de0 0003            MOVE   @33DE0h,*A14+,1
16050: 4508                      SUB    A8,A8
16060: 930e                      MOVE   A8,*A14+,1
16070: 0d5f a3d0 0002            CALLA  2A3D0h
160a0: ca0a                      JREQ   16150h
160b0: d60e 3480 0003            MOVE   @33480h,*A14+,1
160e0: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
16110: 0d5f 99b0 0002            CALLA  299B0h
16140: c009                      JR     161E0h
16150: d60e 3f20 0003            MOVE   @33F20h,*A14+,1
16180: d60e 3de0 0003            MOVE   @33DE0h,*A14+,1
161b0: 0d5f 99b0 0002            CALLA  299B0h
161e0: a7c4                      MOVE   -*A14,A4,1
161f0: 07c0 3de0 0003 3f20 0003  MOVE   @33DE0h,@33F20h,1
16240: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
16270: 09e8 0000 3f80            MOVI   3F800000h,A8
162a0: 930e                      MOVE   A8,*A14+,1
162b0: 0d5f a3d0 0002            CALLA  2A3D0h
162e0: cb0b                      JRNE   163A0h
162f0: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
16320: 09e8 0000 42c8            MOVI   42C80000h,A8
16350: 930e                      MOVE   A8,*A14+,1
16360: 0d5f a1b0 0002            CALLA  2A1B0h
16390: ca0b                      JREQ   16450h
163a0: 0548                      SETF   8h,0,0
163b0: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
163d0: 24a8                      SLL    5h,A8
163e0: 0b28 34e0 0003            ADDI   334E0h,A8
16410: 82c8                      MOVE   A6,*A8,1
16420: 0786 34c0 0003            MOVE   A6,@334C0h,1
16450: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
16480: 924e                      MOVE   A2,*A14+,1
16490: 0d5f a1b0 0002            CALLA  2A1B0h
164c0: ca23                      JREQ   16700h
164d0: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
16500: 92ce                      MOVE   A6,*A14+,1
16510: 0d5f a1b0 0002            CALLA  2A1B0h
16540: ca19                      JREQ   166E0h
16550: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
16580: 920e                      MOVE   A0,*A14+,1
16590: 0d5f a4e0 0002            CALLA  2A4E0h
165c0: ca23                      JREQ   16800h
165d0: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
16600: 92ce                      MOVE   A6,*A14+,1
16610: 0d5f 8cd0 0002            CALLA  28CD0h
16640: 922e                      MOVE   A1,*A14+,1
16650: 0d5f a5f0 0002            CALLA  2A5F0h
16680: 934e                      MOVE   A10,*A14+,1
16690: 0d5f 8bb0 0002            CALLA  28BB0h
166c0: a7cc                      MOVE   -*A14,A12,1
166d0: c012                      JR     16800h
166e0: 4d4c                      MOVE   A10,A12
166f0: c010                      JR     16800h
16700: 924e                      MOVE   A2,*A14+,1
16710: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
16740: 0d5f 8cd0 0002            CALLA  28CD0h
16770: 922e                      MOVE   A1,*A14+,1
16780: 0d5f a5f0 0002            CALLA  2A5F0h
167b0: 934e                      MOVE   A10,*A14+,1
167c0: 0d5f 8bb0 0002            CALLA  28BB0h
167f0: a7cc                      MOVE   -*A14,A12,1
16800: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
16830: 0d5f 4220 0002            CALLA  24220h
16860: 0b0e 0040                 ADDI   40h,A14
16880: a3cf                      MOVE   A14,-*SP,1
16890: 0b0e 0040                 ADDI   40h,A14
168b0: a3cf                      MOVE   A14,-*SP,1
168c0: 928e                      MOVE   A4,*A14+,1
168d0: 0d5f 4220 0002            CALLA  24220h
16900: 0d5f c310 0002            CALLA  2C310h
16930: 938e                      MOVE   A12,*A14+,1
16940: 0d5f 4220 0002            CALLA  24220h
16970: 0d5f 7680 0002            CALLA  27680h
169a0: 0d5f ae30 0002            CALLA  2AE30h
169d0: 0d5f 8130 0002            CALLA  28130h
16a00: 0d5f 34e0 0002            CALLA  234E0h
16a30: b7ed 0140                 MOVE   *SP(140h),A13,1
16a50: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
16a80: b7ee 0140                 MOVE   *SP(140h),A14,1
16aa0: 09af 3c57                 MMFM   SP,A0-A2,A4,A6,A10-A13
16ac0: 0962                      RETS   2h

_abc_get_starting_gain_and_offse:
16ad0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
16af0: 4dcd                      MOVE   A14,A13
16b00: 0b0e 0040                 ADDI   40h,A14
16b20: b7ac ff20                 MOVE   *A13(FF20h),A12,1
16b40: b7aa ff40                 MOVE   *A13(FF40h),A10,1
16b60: 0570                      SETF   10h,1,0
16b70: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
16b90: 2508                      SLL    8h,A8
16ba0: 0b28 1f00 0003            ADDI   31F00h,A8
16bd0: 8706                      MOVE   *A8,A6,1
16be0: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
16c00: 2508                      SLL    8h,A8
16c10: 0b28 1f00 0003            ADDI   31F00h,A8
16c40: b704 0020                 MOVE   *A8(20h),A4,1
16c60: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
16c80: 1428                      DEC    A8
16c90: ca26                      JREQ   16F00h
16ca0: 1428                      DEC    A8
16cb0: ca24                      JREQ   16F00h
16cc0: 1428                      DEC    A8
16cd0: ca08                      JREQ   16D60h
16ce0: 1428                      DEC    A8
16cf0: ca20                      JREQ   16F00h
16d00: 1428                      DEC    A8
16d10: ca39                      JREQ   170B0h
16d20: 1428                      DEC    A8
16d30: ca1c                      JREQ   16F00h
16d40: 0d88 004e                 DSJ    A8,17240h
16d60: 92ce                      MOVE   A6,*A14+,1
16d70: 0d5f 4220 0002            CALLA  24220h
16da0: 44c6                      SUB    A6,A6
16db0: 09e8 0000 4059            MOVI   40590000h,A8
16de0: 930e                      MOVE   A8,*A14+,1
16df0: 92ce                      MOVE   A6,*A14+,1
16e00: 0d5f 5c60 0002            CALLA  25C60h
16e30: 0d5f 34e0 0002            CALLA  234E0h
16e60: a7c8                      MOVE   -*A14,A8,1
16e70: 830c                      MOVE   A8,*A12,1
16e80: a3cf                      MOVE   A14,-*SP,1
16e90: 928e                      MOVE   A4,*A14+,1
16ea0: 93ae                      MOVE   A13,*A14+,1
16eb0: 0d5f 6df0 0000            CALLA  6DF0h
16ee0: 8baa                      MOVE   *A13,*A10,1
16ef0: c034                      JR     17240h
16f00: 09e6 0000 4248            MOVI   42480000h,A6
16f30: 82ca                      MOVE   A6,*A10,1
16f40: 4484                      SUB    A4,A4
16f50: 828c                      MOVE   A4,*A12,1
16f60: a3cf                      MOVE   A14,-*SP,1
16f70: d34e 0000                 MOVE   *A10(0h),*A14+,1
16f90: 0550                      SETF   10h,0,0
16fa0: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
16fc0: 930e                      MOVE   A8,*A14+,1
16fd0: 0d5f 50b0 0000            CALLA  50B0h
17000: a3cf                      MOVE   A14,-*SP,1
17010: d38e 0000                 MOVE   *A12(0h),*A14+,1
17030: 0550                      SETF   10h,0,0
17040: b5a8 ff60                 MOVE   *A13(FF60h),A8,0
17060: 930e                      MOVE   A8,*A14+,1
17070: 0d5f 4a30 0000            CALLA  4A30h
170a0: c019                      JR     17240h
170b0: 92ce                      MOVE   A6,*A14+,1
170c0: 0d5f 4220 0002            CALLA  24220h
170f0: 44c6                      SUB    A6,A6
17100: 09e8 0000 4059            MOVI   40590000h,A8
17130: 930e                      MOVE   A8,*A14+,1
17140: 92ce                      MOVE   A6,*A14+,1
17150: 0d5f 5c60 0002            CALLA  25C60h
17180: 0d5f 34e0 0002            CALLA  234E0h
171b0: a7c8                      MOVE   -*A14,A8,1
171c0: 830c                      MOVE   A8,*A12,1
171d0: a3cf                      MOVE   A14,-*SP,1
171e0: 928e                      MOVE   A4,*A14+,1
171f0: 93ae                      MOVE   A13,*A14+,1
17200: 0d5f 8d40 0000            CALLA  8D40h
17230: 8baa                      MOVE   *A13,*A10,1
17240: b7ee 00c0                 MOVE   *SP(C0h),A14,1
17260: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
17280: 0962                      RETS   2h

_abc_sample_image:
17290: 098f 002c                 MMTM   SP,A10,A12,A13
172b0: 4dcd                      MOVE   A14,A13
172c0: 0b0e 0040                 ADDI   40h,A14
172e0: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
17300: b7ac ffc0                 MOVE   *A13(FFC0h),A12,1
17320: a3cf                      MOVE   A14,-*SP,1
17330: 93ae                      MOVE   A13,*A14+,1
17340: 0570                      SETF   10h,1,0
17350: b5a8 ffe0                 MOVE   *A13(FFE0h),A8,0
17370: 930e                      MOVE   A8,*A14+,1
17380: 0d5f dc40 0000            CALLA  DC40h
173b0: a3cf                      MOVE   A14,-*SP,1
173c0: d60e 6460 0003            MOVE   @36460h,*A14+,1
173f0: 09e8 0000 40a0            MOVI   40A00000h,A8
17420: 930e                      MOVE   A8,*A14+,1
17430: 0d5f a5f0 0002            CALLA  2A5F0h
17460: 0d5f 4500 0002            CALLA  24500h
17490: 930e                      MOVE   A8,*A14+,1
174a0: 93ae                      MOVE   A13,*A14+,1
174b0: 0d5f 0bb0 0001            CALLA  10BB0h
174e0: bdac 0018 0000            MOVB   *A13(18h),*A12(0h)
17510: bdaa 0010 0000            MOVB   *A13(10h),*A10(0h)
17540: 0548                      SETF   8h,0,0
17550: 8548                      MOVE   *A10,A8,0
17560: 858a                      MOVE   *A12,A10,0
17570: 4548                      SUB    A10,A8
17580: b7aa ff80                 MOVE   *A13(FF80h),A10,1
175a0: 8d0a                      MOVB   A8,*A10
175b0: b7ee 0080                 MOVE   *SP(80h),A14,1
175d0: 09af 3400                 MMFM   SP,A10,A12,A13
175f0: 0962                      RETS   2h

_abc_set_detector_levels:
17600: 098f 001c                 MMTM   SP,A11-A13
17620: 4dcd                      MOVE   A14,A13
17630: 0b0e 00a0                 ADDI   A0h,A14
17650: 0548                      SETF   8h,0,0
17660: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
17680: 4d88                      MOVE   A12,A8
17690: 1428                      DEC    A8
176a0: ca31                      JREQ   179C0h
176b0: 1428                      DEC    A8
176c0: ca2f                      JREQ   179C0h
176d0: 1428                      DEC    A8
176e0: ca08                      JREQ   17770h
176f0: 1428                      DEC    A8
17700: ca2b                      JREQ   179C0h
17710: 1428                      DEC    A8
17720: ca45                      JREQ   17B80h
17730: 1428                      DEC    A8
17740: ca27                      JREQ   179C0h
17750: 0d88 0065                 DSJ    A8,17DC0h
17770: a3cf                      MOVE   A14,-*SP,1
17780: 4da8                      MOVE   A13,A8
17790: 1008                      ADDK   20h,A8
177a0: 930e                      MOVE   A8,*A14+,1
177b0: 4da8                      MOVE   A13,A8
177c0: 0b08 0040                 ADDI   40h,A8
177e0: 930e                      MOVE   A8,*A14+,1
177f0: 938e                      MOVE   A12,*A14+,1
17800: 0d5f 8a10 0001            CALLA  18A10h
17830: a3cf                      MOVE   A14,-*SP,1
17840: d3ae 0040                 MOVE   *A13(40h),*A14+,1
17860: 938e                      MOVE   A12,*A14+,1
17870: 0d5f 50b0 0000            CALLA  50B0h
178a0: a3cf                      MOVE   A14,-*SP,1
178b0: 0550                      SETF   10h,0,0
178c0: 05a8 5fa0 0003            MOVE   @35FA0h,A8,0
178f0: 930e                      MOVE   A8,*A14+,1
17900: 0d5f 6290 0000            CALLA  6290h
17930: a3cf                      MOVE   A14,-*SP,1
17940: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
17970: 938e                      MOVE   A12,*A14+,1
17980: 0d5f 9c30 0000            CALLA  9C30h
179b0: c040                      JR     17DC0h
179c0: a3cf                      MOVE   A14,-*SP,1
179d0: 4da8                      MOVE   A13,A8
179e0: 1008                      ADDK   20h,A8
179f0: 930e                      MOVE   A8,*A14+,1
17a00: 4da8                      MOVE   A13,A8
17a10: 0b08 0040                 ADDI   40h,A8
17a30: 930e                      MOVE   A8,*A14+,1
17a40: 938e                      MOVE   A12,*A14+,1
17a50: 0d5f 8a10 0001            CALLA  18A10h
17a80: a3cf                      MOVE   A14,-*SP,1
17a90: d3ae 0040                 MOVE   *A13(40h),*A14+,1
17ab0: 938e                      MOVE   A12,*A14+,1
17ac0: 0d5f 50b0 0000            CALLA  50B0h
17af0: a3cf                      MOVE   A14,-*SP,1
17b00: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
17b30: 938e                      MOVE   A12,*A14+,1
17b40: 0d5f ae90 0000            CALLA  AE90h
17b70: c024                      JR     17DC0h
17b80: a3cf                      MOVE   A14,-*SP,1
17b90: 4da8                      MOVE   A13,A8
17ba0: 1008                      ADDK   20h,A8
17bb0: 930e                      MOVE   A8,*A14+,1
17bc0: 4da8                      MOVE   A13,A8
17bd0: 0b08 0040                 ADDI   40h,A8
17bf0: 930e                      MOVE   A8,*A14+,1
17c00: 938e                      MOVE   A12,*A14+,1
17c10: 0d5f 8a10 0001            CALLA  18A10h
17c40: a3cf                      MOVE   A14,-*SP,1
17c50: d3ae 0040                 MOVE   *A13(40h),*A14+,1
17c70: 938e                      MOVE   A12,*A14+,1
17c80: 0d5f 50b0 0000            CALLA  50B0h
17cb0: a3cf                      MOVE   A14,-*SP,1
17cc0: 0550                      SETF   10h,0,0
17cd0: 05a8 3f40 0003            MOVE   @33F40h,A8,0
17d00: 930e                      MOVE   A8,*A14+,1
17d10: 0d5f 6650 0000            CALLA  6650h
17d40: a3cf                      MOVE   A14,-*SP,1
17d50: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
17d80: 938e                      MOVE   A12,*A14+,1
17d90: 0d5f 9c30 0000            CALLA  9C30h
17dc0: 0d5f 0000 0000            CALLA  0h
17df0: 4d0c                      MOVE   A8,A12
17e00: 418c                      ADD    A12,A12
17e10: 1a88                      MOVK   14h,A8
17e20: 4d8b                      MOVE   A12,A11
17e30: 590b                      DIVS   A8,A11
17e40: 836d                      MOVE   A11,*A13,1
17e50: b7ee 0080                 MOVE   *SP(80h),A14,1
17e70: 09af 3800                 MMFM   SP,A11-A13
17e90: 0962                      RETS   2h

_abc_initialise_levels:
17ea0: 098f 002c                 MMTM   SP,A10,A12,A13
17ec0: 4dcd                      MOVE   A14,A13
17ed0: 0b0e 0080                 ADDI   80h,A14
17ef0: 0548                      SETF   8h,0,0
17f00: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
17f20: 4d88                      MOVE   A12,A8
17f30: 1428                      DEC    A8
17f40: ca4e                      JREQ   18430h
17f50: 1428                      DEC    A8
17f60: ca4c                      JREQ   18430h
17f70: 1428                      DEC    A8
17f80: ca08                      JREQ   18010h
17f90: 1428                      DEC    A8
17fa0: ca48                      JREQ   18430h
17fb0: 1428                      DEC    A8
17fc0: ca68                      JREQ   18650h
17fd0: 1428                      DEC    A8
17fe0: ca44                      JREQ   18430h
17ff0: 0d88 009b                 DSJ    A8,189C0h
18010: 4d88                      MOVE   A12,A8
18020: 2508                      SLL    8h,A8
18030: 0b28 1f00 0003            ADDI   31F00h,A8
18060: b70a 0020                 MOVE   *A8(20h),A10,1
18080: a3cf                      MOVE   A14,-*SP,1
18090: 934e                      MOVE   A10,*A14+,1
180a0: 4daa                      MOVE   A13,A10
180b0: 0b0a 0040                 ADDI   40h,A10
180d0: 934e                      MOVE   A10,*A14+,1
180e0: 0d5f 6df0 0000            CALLA  6DF0h
18110: 0550                      SETF   10h,0,0
18120: b5a8 0060                 MOVE   *A13(60h),A8,0
18140: 0588 5fa0 0003            MOVE   A8,@35FA0h,0
18170: 1428                      DEC    A8
18180: ca09                      JREQ   18220h
18190: 1828                      MOVK   1h,A8
181a0: 0588 5fa0 0003            MOVE   A8,@35FA0h,0
181d0: a3cf                      MOVE   A14,-*SP,1
181e0: 930e                      MOVE   A8,*A14+,1
181f0: 0d5f 6290 0000            CALLA  6290h
18220: 09e8 0000 4248            MOVI   42480000h,A8
18250: 0788 6060 0003            MOVE   A8,@36060h,1
18280: 0788 64e0 0003            MOVE   A8,@364E0h,1
182b0: a3cf                      MOVE   A14,-*SP,1
182c0: 93ae                      MOVE   A13,*A14+,1
182d0: 4daa                      MOVE   A13,A10
182e0: 100a                      ADDK   20h,A10
182f0: 934e                      MOVE   A10,*A14+,1
18300: 938e                      MOVE   A12,*A14+,1
18310: 0d5f 8a10 0001            CALLA  18A10h
18340: a3cf                      MOVE   A14,-*SP,1
18350: 9b4e                      MOVE   *A10+,*A14+,1
18360: 938e                      MOVE   A12,*A14+,1
18370: 0d5f 50b0 0000            CALLA  50B0h
183a0: a3cf                      MOVE   A14,-*SP,1
183b0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
183e0: 938e                      MOVE   A12,*A14+,1
183f0: 0d5f 9c30 0000            CALLA  9C30h
18420: c059                      JR     189C0h
18430: 09ea 0000 4248            MOVI   42480000h,A10
18460: 078a 6060 0003            MOVE   A10,@36060h,1
18490: 078a 64e0 0003            MOVE   A10,@364E0h,1
184c0: a3cf                      MOVE   A14,-*SP,1
184d0: 93ae                      MOVE   A13,*A14+,1
184e0: 4da8                      MOVE   A13,A8
184f0: 1008                      ADDK   20h,A8
18500: 930e                      MOVE   A8,*A14+,1
18510: 938e                      MOVE   A12,*A14+,1
18520: 0d5f 8a10 0001            CALLA  18A10h
18550: a3cf                      MOVE   A14,-*SP,1
18560: d3ae 0020                 MOVE   *A13(20h),*A14+,1
18580: 938e                      MOVE   A12,*A14+,1
18590: 0d5f 50b0 0000            CALLA  50B0h
185c0: a3cf                      MOVE   A14,-*SP,1
185d0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
18600: 938e                      MOVE   A12,*A14+,1
18610: 0d5f ae90 0000            CALLA  AE90h
18640: c037                      JR     189C0h
18650: 4d88                      MOVE   A12,A8
18660: 2508                      SLL    8h,A8
18670: 0b28 1f00 0003            ADDI   31F00h,A8
186a0: b70a 0020                 MOVE   *A8(20h),A10,1
186c0: a3cf                      MOVE   A14,-*SP,1
186d0: 934e                      MOVE   A10,*A14+,1
186e0: 4daa                      MOVE   A13,A10
186f0: 0b0a 0040                 ADDI   40h,A10
18710: 934e                      MOVE   A10,*A14+,1
18720: 0d5f 8d40 0000            CALLA  8D40h
18750: 0550                      SETF   10h,0,0
18760: b5a8 0060                 MOVE   *A13(60h),A8,0
18780: 0588 3f40 0003            MOVE   A8,@33F40h,0
187b0: 09ea 0000 4248            MOVI   42480000h,A10
187e0: 078a 6060 0003            MOVE   A10,@36060h,1
18810: 078a 64e0 0003            MOVE   A10,@364E0h,1
18840: a3cf                      MOVE   A14,-*SP,1
18850: 93ae                      MOVE   A13,*A14+,1
18860: 4da8                      MOVE   A13,A8
18870: 1008                      ADDK   20h,A8
18880: 930e                      MOVE   A8,*A14+,1
18890: 938e                      MOVE   A12,*A14+,1
188a0: 0d5f 8a10 0001            CALLA  18A10h
188d0: a3cf                      MOVE   A14,-*SP,1
188e0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
18900: 938e                      MOVE   A12,*A14+,1
18910: 0d5f 50b0 0000            CALLA  50B0h
18940: a3cf                      MOVE   A14,-*SP,1
18950: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
18980: 938e                      MOVE   A12,*A14+,1
18990: 0d5f 9c30 0000            CALLA  9C30h
189c0: b7ee 0080                 MOVE   *SP(80h),A14,1
189e0: 09af 3400                 MMFM   SP,A10,A12,A13
18a00: 0962                      RETS   2h

_abc_calculate_gain_and_offset:
18a10: 098f 002c                 MMTM   SP,A10,A12,A13
18a30: 4dcd                      MOVE   A14,A13
18a40: b7a8 ffc0                 MOVE   *A13(FFC0h),A8,1
18a60: 07ac 6060 0003            MOVE   @36060h,A12,1
18a90: 8388                      MOVE   A12,*A8,1
18aa0: b7a8 ffa0                 MOVE   *A13(FFA0h),A8,1
18ac0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
18af0: 09ec 0000 4000            MOVI   40000000h,A12
18b20: 938e                      MOVE   A12,*A14+,1
18b30: 4d0a                      MOVE   A8,A10
18b40: 0d5f a5f0 0002            CALLA  2A5F0h
18b70: 0d5f 4220 0002            CALLA  24220h
18ba0: 4508                      SUB    A8,A8
18bb0: 09ec 0000 4059            MOVI   40590000h,A12
18be0: 938e                      MOVE   A12,*A14+,1
18bf0: 930e                      MOVE   A8,*A14+,1
18c00: 0d5f 5dd0 0002            CALLA  25DD0h
18c30: 0d5f 34e0 0002            CALLA  234E0h
18c60: a7c8                      MOVE   -*A14,A8,1
18c70: 830a                      MOVE   A8,*A10,1
18c80: b7ee 0080                 MOVE   *SP(80h),A14,1
18ca0: 09af 3400                 MMFM   SP,A10,A12,A13
18cc0: 0962                      RETS   2h

_abc_update_contrast:
18cd0: 098f 002c                 MMTM   SP,A10,A12,A13
18cf0: 4dcd                      MOVE   A14,A13
18d00: 0548                      SETF   8h,0,0
18d10: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
18d30: 4d88                      MOVE   A12,A8
18d40: 1468                      SUBK   3h,A8
18d50: ca02                      JREQ   18D80h
18d60: 1488                      SUBK   4h,A8
18d70: cb0c                      JRNE   18E40h
18d80: 100e                      ADDK   20h,A14
18d90: a3cf                      MOVE   A14,-*SP,1
18da0: 0d5f 8e90 0001            CALLA  18E90h
18dd0: a7ca                      MOVE   -*A14,A10,1
18de0: a3cf                      MOVE   A14,-*SP,1
18df0: 934e                      MOVE   A10,*A14+,1
18e00: 938e                      MOVE   A12,*A14+,1
18e10: 0d5f ae90 0000            CALLA  AE90h
18e40: b7ee 0080                 MOVE   *SP(80h),A14,1
18e60: 09af 3400                 MMFM   SP,A10,A12,A13
18e80: 0962                      RETS   2h

_calculate_4QBSD_percent_from_ra:
18e90: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
18eb0: 07a6 f320 0002            MOVE   @2F320h,A6,1
18ee0: 07ac f340 0002            MOVE   @2F340h,A12,1
18f10: 07aa f3a0 0002            MOVE   @2F3A0h,A10,1
18f40: 0550                      SETF   10h,0,0
18f50: 05a8 3e60 0003            MOVE   @33E60h,A8,0
18f80: ca00 009a                 JREQ   19940h
18fa0: 05a8 5fa0 0003            MOVE   @35FA0h,A8,0
18fd0: ca79                      JREQ   19770h
18fe0: 0d88 0026                 DSJ    A8,19260h
19000: 0b0e 0040                 ADDI   40h,A14
19020: a3cf                      MOVE   A14,-*SP,1
19030: d60e 6060 0003            MOVE   @36060h,*A14+,1
19060: 938e                      MOVE   A12,*A14+,1
19070: 0d5f 99b0 0002            CALLA  299B0h
190a0: 0d5f 4220 0002            CALLA  24220h
190d0: 0d5f c310 0002            CALLA  2C310h
19100: 09e8 f360 0002            MOVI   2F360h,A8
19130: 9b0e                      MOVE   *A8+,*A14+,1
19140: 9b0e                      MOVE   *A8+,*A14+,1
19150: 0d5f 7680 0002            CALLA  27680h
19180: 4508                      SUB    A8,A8
19190: 09e4 0000 4039            MOVI   40390000h,A4
191c0: 928e                      MOVE   A4,*A14+,1
191d0: 930e                      MOVE   A8,*A14+,1
191e0: 0d5f 5f40 0002            CALLA  25F40h
19210: 0d5f 34e0 0002            CALLA  234E0h
19240: c000 0100                 JR     1A260h
19260: 05a4 5fa0 0003            MOVE   @35FA0h,A4,0
19290: 1444                      SUBK   2h,A4
192a0: cb26                      JRNE   19510h
192b0: 0b0e 0040                 ADDI   40h,A14
192d0: a3cf                      MOVE   A14,-*SP,1
192e0: d60e 6060 0003            MOVE   @36060h,*A14+,1
19310: 938e                      MOVE   A12,*A14+,1
19320: 0d5f 99b0 0002            CALLA  299B0h
19350: 0d5f 4220 0002            CALLA  24220h
19380: 0d5f c310 0002            CALLA  2C310h
193b0: 09e4 f360 0002            MOVI   2F360h,A4
193e0: 9a8e                      MOVE   *A4+,*A14+,1
193f0: 9a8e                      MOVE   *A4+,*A14+,1
19400: 0d5f 7680 0002            CALLA  27680h
19430: 4484                      SUB    A4,A4
19440: 09e8 0000 4049            MOVI   40490000h,A8
19470: 930e                      MOVE   A8,*A14+,1
19480: 928e                      MOVE   A4,*A14+,1
19490: 0d5f 5f40 0002            CALLA  25F40h
194c0: 0d5f 34e0 0002            CALLA  234E0h
194f0: c000 00d5                 JR     1A260h
19510: 0b0e 0040                 ADDI   40h,A14
19530: a3cf                      MOVE   A14,-*SP,1
19540: d60e 6060 0003            MOVE   @36060h,*A14+,1
19570: 938e                      MOVE   A12,*A14+,1
19580: 0d5f 99b0 0002            CALLA  299B0h
195b0: 0d5f 4220 0002            CALLA  24220h
195e0: 0d5f c310 0002            CALLA  2C310h
19610: 09e4 f360 0002            MOVI   2F360h,A4
19640: 9a8e                      MOVE   *A4+,*A14+,1
19650: 9a8e                      MOVE   *A4+,*A14+,1
19660: 0d5f 7680 0002            CALLA  27680h
19690: 4484                      SUB    A4,A4
196a0: 09e8 c000 4052            MOVI   4052C000h,A8
196d0: 930e                      MOVE   A8,*A14+,1
196e0: 928e                      MOVE   A4,*A14+,1
196f0: 0d5f 5f40 0002            CALLA  25F40h
19720: 0d5f 34e0 0002            CALLA  234E0h
19750: c000 00af                 JR     1A260h
19770: 0b0e 0040                 ADDI   40h,A14
19790: a3cf                      MOVE   A14,-*SP,1
197a0: d60e 6060 0003            MOVE   @36060h,*A14+,1
197d0: 938e                      MOVE   A12,*A14+,1
197e0: 0d5f 99b0 0002            CALLA  299B0h
19810: 0d5f 4220 0002            CALLA  24220h
19840: 0d5f c310 0002            CALLA  2C310h
19870: 09e4 f360 0002            MOVI   2F360h,A4
198a0: 9a8e                      MOVE   *A4+,*A14+,1
198b0: 9a8e                      MOVE   *A4+,*A14+,1
198c0: 0d5f 7680 0002            CALLA  27680h
198f0: 0d5f 34e0 0002            CALLA  234E0h
19920: c000 0092                 JR     1A260h
19940: 05a4 5fa0 0003            MOVE   @35FA0h,A4,0
19970: ca7c                      JREQ   1A140h
19980: 0d84 0027                 DSJ    A4,19C10h
199a0: d60e 6060 0003            MOVE   @36060h,*A14+,1
199d0: 938e                      MOVE   A12,*A14+,1
199e0: 0d5f 8cd0 0002            CALLA  28CD0h
19a10: 0d5f 4220 0002            CALLA  24220h
19a40: 4484                      SUB    A4,A4
19a50: 09e8 0000 4039            MOVI   40390000h,A8
19a80: 930e                      MOVE   A8,*A14+,1
19a90: 928e                      MOVE   A4,*A14+,1
19aa0: 0d5f 8130 0002            CALLA  28130h
19ad0: 09e8 c000 4050            MOVI   4050C000h,A8
19b00: 930e                      MOVE   A8,*A14+,1
19b10: 928e                      MOVE   A4,*A14+,1
19b20: 0d5f 7680 0002            CALLA  27680h
19b50: 09e8 0000 4039            MOVI   40390000h,A8
19b80: 930e                      MOVE   A8,*A14+,1
19b90: 928e                      MOVE   A4,*A14+,1
19ba0: 0d5f 5f40 0002            CALLA  25F40h
19bd0: 0d5f 34e0 0002            CALLA  234E0h
19c00: c065                      JR     1A260h
19c10: 05a4 5fa0 0003            MOVE   @35FA0h,A4,0
19c40: 1444                      SUBK   2h,A4
19c50: cb27                      JRNE   19ED0h
19c60: d60e 6060 0003            MOVE   @36060h,*A14+,1
19c90: 938e                      MOVE   A12,*A14+,1
19ca0: 0d5f 8cd0 0002            CALLA  28CD0h
19cd0: 0d5f 4220 0002            CALLA  24220h
19d00: 4484                      SUB    A4,A4
19d10: 09e8 0000 4039            MOVI   40390000h,A8
19d40: 930e                      MOVE   A8,*A14+,1
19d50: 928e                      MOVE   A4,*A14+,1
19d60: 0d5f 8130 0002            CALLA  28130h
19d90: 09e8 c000 4050            MOVI   4050C000h,A8
19dc0: 930e                      MOVE   A8,*A14+,1
19dd0: 928e                      MOVE   A4,*A14+,1
19de0: 0d5f 7680 0002            CALLA  27680h
19e10: 09e8 0000 4049            MOVI   40490000h,A8
19e40: 930e                      MOVE   A8,*A14+,1
19e50: 928e                      MOVE   A4,*A14+,1
19e60: 0d5f 5f40 0002            CALLA  25F40h
19e90: 0d5f 34e0 0002            CALLA  234E0h
19ec0: c039                      JR     1A260h
19ed0: d60e 6060 0003            MOVE   @36060h,*A14+,1
19f00: 938e                      MOVE   A12,*A14+,1
19f10: 0d5f 8cd0 0002            CALLA  28CD0h
19f40: 0d5f 4220 0002            CALLA  24220h
19f70: 4484                      SUB    A4,A4
19f80: 09e8 0000 4039            MOVI   40390000h,A8
19fb0: 930e                      MOVE   A8,*A14+,1
19fc0: 928e                      MOVE   A4,*A14+,1
19fd0: 0d5f 8130 0002            CALLA  28130h
1a000: 09e8 c000 4050            MOVI   4050C000h,A8
1a030: 930e                      MOVE   A8,*A14+,1
1a040: 928e                      MOVE   A4,*A14+,1
1a050: 0d5f 7680 0002            CALLA  27680h
1a080: 09e8 c000 4052            MOVI   4052C000h,A8
1a0b0: 930e                      MOVE   A8,*A14+,1
1a0c0: 928e                      MOVE   A4,*A14+,1
1a0d0: 0d5f 5f40 0002            CALLA  25F40h
1a100: 0d5f 34e0 0002            CALLA  234E0h
1a130: c012                      JR     1A260h
1a140: d60e 6060 0003            MOVE   @36060h,*A14+,1
1a170: 0d5f 4220 0002            CALLA  24220h
1a1a0: 4508                      SUB    A8,A8
1a1b0: 09e6 0000 3fd0            MOVI   3FD00000h,A6
1a1e0: 92ce                      MOVE   A6,*A14+,1
1a1f0: 930e                      MOVE   A8,*A14+,1
1a200: 0d5f 8130 0002            CALLA  28130h
1a230: 0d5f 34e0 0002            CALLA  234E0h
1a260: a7cc                      MOVE   -*A14,A12,1
1a270: 938e                      MOVE   A12,*A14+,1
1a280: b7ed 00c0                 MOVE   *SP(C0h),A13,1
1a2a0: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
1a2d0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
1a2f0: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
1a310: 0962                      RETS   2h

_abc_set_thresholds:
1a320: 098f 002c                 MMTM   SP,A10,A12,A13
1a340: 4dcd                      MOVE   A14,A13
1a350: 0548                      SETF   8h,0,0
1a360: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
1a380: 4d88                      MOVE   A12,A8
1a390: 2508                      SLL    8h,A8
1a3a0: 0b28 1f00 0003            ADDI   31F00h,A8
1a3d0: d30e 00c0                 MOVE   *A8(C0h),*A14+,1
1a3f0: 0d5f 4a80 0002            CALLA  24A80h
1a420: 4f0e                      MOVE   A8,B14
1a430: 053e                      ZEXT   B14,0
1a440: 4d88                      MOVE   A12,A8
1a450: 2508                      SLL    8h,A8
1a460: 0b28 1f00 0003            ADDI   31F00h,A8
1a490: d30e 00e0                 MOVE   *A8(E0h),*A14+,1
1a4b0: 0d5f 4a80 0002            CALLA  24A80h
1a4e0: 4d0a                      MOVE   A8,A10
1a4f0: 052a                      ZEXT   A10,0
1a500: 142c                      DEC    A12
1a510: ca4e                      JREQ   1AA00h
1a520: 142c                      DEC    A12
1a530: ca4c                      JREQ   1AA00h
1a540: 142c                      DEC    A12
1a550: ca08                      JREQ   1A5E0h
1a560: 142c                      DEC    A12
1a570: ca48                      JREQ   1AA00h
1a580: 142c                      DEC    A12
1a590: ca04                      JREQ   1A5E0h
1a5a0: 142c                      DEC    A12
1a5b0: ca44                      JREQ   1AA00h
1a5c0: 0d8c 0083                 DSJ    A12,1AE10h
1a5e0: 09ec 0000 42c4            MOVI   42C40000h,A12
1a610: 078c 64a0 0003            MOVE   A12,@364A0h,1
1a640: 09e8 0000 4000            MOVI   40000000h,A8
1a670: 0788 6480 0003            MOVE   A8,@36480h,1
1a6a0: 078c 5f80 0003            MOVE   A12,@35F80h,1
1a6d0: 0788 6000 0003            MOVE   A8,@36000h,1
1a700: 09e8 0000 4080            MOVI   40800000h,A8
1a730: 0788 5fe0 0003            MOVE   A8,@35FE0h,1
1a760: d60e 6060 0003            MOVE   @36060h,*A14+,1
1a790: 4508                      SUB    A8,A8
1a7a0: 930e                      MOVE   A8,*A14+,1
1a7b0: 0d5f a2c0 0002            CALLA  2A2C0h
1a7e0: ca13                      JREQ   1A920h
1a7f0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1a820: 0d5f 4220 0002            CALLA  24220h
1a850: 4508                      SUB    A8,A8
1a860: 09ec 0000 c059            MOVI   C0590000h,A12
1a890: 938e                      MOVE   A12,*A14+,1
1a8a0: 930e                      MOVE   A8,*A14+,1
1a8b0: 0d5f 7510 0002            CALLA  27510h
1a8e0: 0d5f 34e0 0002            CALLA  234E0h
1a910: c003                      JR     1A950h
1a920: d60e f2c0 0002            MOVE   @2F2C0h,*A14+,1
1a950: a7cc                      MOVE   -*A14,A12,1
1a960: 078c 64c0 0003            MOVE   A12,@364C0h,1
1a990: 09e8 0000 3f80            MOVI   3F800000h,A8
1a9c0: 0788 5fc0 0003            MOVE   A8,@35FC0h,1
1a9f0: c041                      JR     1AE10h
1aa00: 09ec 0000 42c4            MOVI   42C40000h,A12
1aa30: 078c 64a0 0003            MOVE   A12,@364A0h,1
1aa60: 09e8 0000 4000            MOVI   40000000h,A8
1aa90: 0788 6480 0003            MOVE   A8,@36480h,1
1aac0: 078c 5f80 0003            MOVE   A12,@35F80h,1
1aaf0: 0788 6000 0003            MOVE   A8,@36000h,1
1ab20: 09e8 0000 4080            MOVI   40800000h,A8
1ab50: 0788 5fe0 0003            MOVE   A8,@35FE0h,1
1ab80: d60e 6060 0003            MOVE   @36060h,*A14+,1
1abb0: 4508                      SUB    A8,A8
1abc0: 930e                      MOVE   A8,*A14+,1
1abd0: 0d5f a2c0 0002            CALLA  2A2C0h
1ac00: ca13                      JREQ   1AD40h
1ac10: d60e 6060 0003            MOVE   @36060h,*A14+,1
1ac40: 0d5f 4220 0002            CALLA  24220h
1ac70: 4508                      SUB    A8,A8
1ac80: 09ec 0000 4059            MOVI   40590000h,A12
1acb0: 938e                      MOVE   A12,*A14+,1
1acc0: 930e                      MOVE   A8,*A14+,1
1acd0: 0d5f 7510 0002            CALLA  27510h
1ad00: 0d5f 34e0 0002            CALLA  234E0h
1ad30: c003                      JR     1AD70h
1ad40: d60e f2a0 0002            MOVE   @2F2A0h,*A14+,1
1ad70: a7cc                      MOVE   -*A14,A12,1
1ad80: 078c 64c0 0003            MOVE   A12,@364C0h,1
1adb0: 09e8 0000 40a0            MOVI   40A00000h,A8
1ade0: 0788 5fc0 0003            MOVE   A8,@35FC0h,1
1ae10: 0b1e 004e                 ADDI   4Eh,B14
1ae30: 053e                      ZEXT   B14,0
1ae40: 1b2c                      MOVK   19h,A12
1ae50: 05ec 6030 0003            MOVB   A12,@36030h
1ae80: 09c8 00dc                 MOVI   DCh,A8
1aea0: 05e8 6400 0003            MOVB   A8,@36400h
1aed0: 4fdc                      MOVE   B14,A12
1aee0: 164c                      SUBK   12h,A12
1aef0: 05ec 6040 0003            MOVB   A12,@36040h
1af20: 05a8 6040 0003            MOVE   @36040h,A8,0
1af50: 490a                      CMP    A8,A10
1af60: c402                      JRLT   1AF90h
1af70: 4d0c                      MOVE   A8,A12
1af80: c001                      JR     1AFA0h
1af90: 4d4c                      MOVE   A10,A12
1afa0: 4588                      SUB    A12,A8
1afb0: 05e8 6040 0003            MOVB   A8,@36040h
1afe0: 4fdc                      MOVE   B14,A12
1aff0: 118c                      ADDK   Ch,A12
1b000: 05ec 6410 0003            MOVB   A12,@36410h
1b030: 05a8 6410 0003            MOVE   @36410h,A8,0
1b060: 03a8                      NEG    A8
1b070: 0b08 00f5                 ADDI   F5h,A8
1b090: 490a                      CMP    A8,A10
1b0a0: c408                      JRLT   1B130h
1b0b0: 05a8 6410 0003            MOVE   @36410h,A8,0
1b0e0: 09cc 00f5                 MOVI   F5h,A12
1b100: 450c                      SUB    A8,A12
1b110: 052c                      ZEXT   A12,0
1b120: c001                      JR     1B140h
1b130: 4d4c                      MOVE   A10,A12
1b140: 05aa 6410 0003            MOVE   @36410h,A10,0
1b170: 414c                      ADD    A10,A12
1b180: 05ec 6410 0003            MOVB   A12,@36410h
1b1b0: 05ac 6410 0003            MOVE   @36410h,A12,0
1b1e0: 05aa 6040 0003            MOVE   @36040h,A10,0
1b210: 454c                      SUB    A10,A12
1b220: 14ac                      SUBK   5h,A12
1b230: 05ec 5f60 0003            MOVB   A12,@35F60h
1b260: b7ee 0080                 MOVE   *SP(80h),A14,1
1b280: 09af 3400                 MMFM   SP,A10,A12,A13
1b2a0: 0962                      RETS   2h

_abc_set_autolevels:
1b2b0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
1b2d0: 4dcd                      MOVE   A14,A13
1b2e0: 0548                      SETF   8h,0,0
1b2f0: b5a6 ffa0                 MOVE   *A13(FFA0h),A6,0
1b310: b5ac ffc0                 MOVE   *A13(FFC0h),A12,0
1b330: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
1b350: 4cc8                      MOVE   A6,A8
1b360: 4188                      ADD    A12,A8
1b370: 0be8 ff69                 SUBI   96h,A8
1b390: 0d5f 5060 0002            CALLA  25060h
1b3c0: 09e8 0000 3f00            MOVI   3F000000h,A8
1b3f0: 930e                      MOVE   A8,*A14+,1
1b400: 0d5f a5f0 0002            CALLA  2A5F0h
1b430: 4d48                      MOVE   A10,A8
1b440: 2508                      SLL    8h,A8
1b450: 0b28 1f00 0003            ADDI   31F00h,A8
1b480: a7c4                      MOVE   -*A14,A4,1
1b490: b288 00c0                 MOVE   A4,*A8(C0h),1
1b4b0: 4586                      SUB    A12,A6
1b4c0: 4cc8                      MOVE   A6,A8
1b4d0: 17c8                      SUBK   1Eh,A8
1b4e0: 0d5f 5060 0002            CALLA  25060h
1b510: 09e6 0000 3f00            MOVI   3F000000h,A6
1b540: 92ce                      MOVE   A6,*A14+,1
1b550: 0d5f a5f0 0002            CALLA  2A5F0h
1b580: 250a                      SLL    8h,A10
1b590: 0b2a 1f00 0003            ADDI   31F00h,A10
1b5c0: a7c4                      MOVE   -*A14,A4,1
1b5d0: b28a 00e0                 MOVE   A4,*A10(E0h),1
1b5f0: b7ee 00c0                 MOVE   *SP(C0h),A14,1
1b610: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
1b630: 0962                      RETS   2h

_abc_get_in_range:
1b640: 098f 2a2c                 MMTM   SP,A2,A4,A6,A10,A12,A13
1b660: 4dcd                      MOVE   A14,A13
1b670: 0b0e 0040                 ADDI   40h,A14
1b690: 0548                      SETF   8h,0,0
1b6a0: b5a4 ffe0                 MOVE   *A13(FFE0h),A4,0
1b6c0: 4c86                      MOVE   A4,A6
1b6d0: 2486                      SLL    4h,A6
1b6e0: 0b26 3100 0003            ADDI   33100h,A6
1b710: 0570                      SETF   10h,1,0
1b720: 84c6                      MOVE   *A6,A6,0
1b730: a3cf                      MOVE   A14,-*SP,1
1b740: 93ae                      MOVE   A13,*A14+,1
1b750: 4da8                      MOVE   A13,A8
1b760: 1208                      ADDK   10h,A8
1b770: 930e                      MOVE   A8,*A14+,1
1b780: 4da8                      MOVE   A13,A8
1b790: 1008                      ADDK   20h,A8
1b7a0: 930e                      MOVE   A8,*A14+,1
1b7b0: 92ce                      MOVE   A6,*A14+,1
1b7c0: 0d5f 7290 0001            CALLA  17290h
1b7f0: 454a                      SUB    A10,A10
1b800: 4d4c                      MOVE   A10,A12
1b810: a3cf                      MOVE   A14,-*SP,1
1b820: 0548                      SETF   8h,0,0
1b830: b5a8 0010                 MOVE   *A13(10h),A8,0
1b850: 930e                      MOVE   A8,*A14+,1
1b860: b5a8 0020                 MOVE   *A13(20h),A8,0
1b880: 930e                      MOVE   A8,*A14+,1
1b890: 0d5f ced0 0001            CALLA  1CED0h
1b8c0: 4d08                      MOVE   A8,A8
1b8d0: ca00 0138                 JREQ   1CC70h
1b8f0: 0548                      SETF   8h,0,0
1b900: b5a8 0020                 MOVE   *A13(20h),A8,0
1b920: 05a2 6030 0003            MOVE   @36030h,A2,0
1b950: 4848                      CMP    A2,A8
1b960: c729                      JRGT   1BC00h
1b970: d60e 64c0 0003            MOVE   @364C0h,*A14+,1
1b9a0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1b9d0: 0d5f 8bb0 0002            CALLA  28BB0h
1ba00: a7c8                      MOVE   -*A14,A8,1
1ba10: 0788 64e0 0003            MOVE   A8,@364E0h,1
1ba40: 930e                      MOVE   A8,*A14+,1
1ba50: d60e 6000 0003            MOVE   @36000h,*A14+,1
1ba80: 0d5f a4e0 0002            CALLA  2A4E0h
1bab0: ca05                      JREQ   1BB10h
1bac0: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
1bb10: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1bb40: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1bb70: 0d5f a2c0 0002            CALLA  2A2C0h
1bba0: ca05                      JREQ   1BC00h
1bbb0: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
1bc00: b5a8 0010                 MOVE   *A13(10h),A8,0
1bc20: 05a2 6400 0003            MOVE   @36400h,A2,0
1bc50: 4848                      CMP    A2,A8
1bc60: c429                      JRLT   1BF00h
1bc70: d60e 5fe0 0003            MOVE   @35FE0h,*A14+,1
1bca0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1bcd0: 0d5f 8bb0 0002            CALLA  28BB0h
1bd00: a7c8                      MOVE   -*A14,A8,1
1bd10: 0788 6060 0003            MOVE   A8,@36060h,1
1bd40: 930e                      MOVE   A8,*A14+,1
1bd50: d60e 6480 0003            MOVE   @36480h,*A14+,1
1bd80: 0d5f a4e0 0002            CALLA  2A4E0h
1bdb0: ca05                      JREQ   1BE10h
1bdc0: 07c0 6480 0003 6060 0003  MOVE   @36480h,@36060h,1
1be10: d60e 6060 0003            MOVE   @36060h,*A14+,1
1be40: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1be70: 0d5f a2c0 0002            CALLA  2A2C0h
1bea0: ca05                      JREQ   1BF00h
1beb0: 07c0 64a0 0003 6060 0003  MOVE   @364A0h,@36060h,1
1bf00: b5a8 0020                 MOVE   *A13(20h),A8,0
1bf20: 4848                      CMP    A2,A8
1bf30: c429                      JRLT   1C1D0h
1bf40: d60e 64c0 0003            MOVE   @364C0h,*A14+,1
1bf70: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1bfa0: 0d5f 8df0 0002            CALLA  28DF0h
1bfd0: a7c8                      MOVE   -*A14,A8,1
1bfe0: 0788 64e0 0003            MOVE   A8,@364E0h,1
1c010: 930e                      MOVE   A8,*A14+,1
1c020: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1c050: 0d5f a2c0 0002            CALLA  2A2C0h
1c080: ca05                      JREQ   1C0E0h
1c090: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
1c0e0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1c110: d60e 6000 0003            MOVE   @36000h,*A14+,1
1c140: 0d5f a4e0 0002            CALLA  2A4E0h
1c170: ca05                      JREQ   1C1D0h
1c180: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
1c1d0: b5a8 0010                 MOVE   *A13(10h),A8,0
1c1f0: 05a2 6030 0003            MOVE   @36030h,A2,0
1c220: 4848                      CMP    A2,A8
1c230: c729                      JRGT   1C4D0h
1c240: d60e 5fe0 0003            MOVE   @35FE0h,*A14+,1
1c270: d60e 6060 0003            MOVE   @36060h,*A14+,1
1c2a0: 0d5f 8df0 0002            CALLA  28DF0h
1c2d0: a7c8                      MOVE   -*A14,A8,1
1c2e0: 0788 6060 0003            MOVE   A8,@36060h,1
1c310: 930e                      MOVE   A8,*A14+,1
1c320: d60e 6480 0003            MOVE   @36480h,*A14+,1
1c350: 0d5f a4e0 0002            CALLA  2A4E0h
1c380: ca05                      JREQ   1C3E0h
1c390: 07c0 6480 0003 6060 0003  MOVE   @36480h,@36060h,1
1c3e0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1c410: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1c440: 0d5f a2c0 0002            CALLA  2A2C0h
1c470: ca05                      JREQ   1C4D0h
1c480: 07c0 64a0 0003 6060 0003  MOVE   @364A0h,@36060h,1
1c4d0: a3cf                      MOVE   A14,-*SP,1
1c4e0: 928e                      MOVE   A4,*A14+,1
1c4f0: 0d5f 7600 0001            CALLA  17600h
1c520: a3cf                      MOVE   A14,-*SP,1
1c530: 93ae                      MOVE   A13,*A14+,1
1c540: 4da2                      MOVE   A13,A2
1c550: 1202                      ADDK   10h,A2
1c560: 924e                      MOVE   A2,*A14+,1
1c570: 4da8                      MOVE   A13,A8
1c580: 1008                      ADDK   20h,A8
1c590: 930e                      MOVE   A8,*A14+,1
1c5a0: 92ce                      MOVE   A6,*A14+,1
1c5b0: 0d5f 7290 0001            CALLA  17290h
1c5e0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1c610: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1c640: 0d5f a1b0 0002            CALLA  2A1B0h
1c670: ca0b                      JREQ   1C730h
1c680: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1c6b0: d60e 6000 0003            MOVE   @36000h,*A14+,1
1c6e0: 0d5f a3d0 0002            CALLA  2A3D0h
1c710: ca01                      JREQ   1C730h
1c720: 182c                      MOVK   1h,A12
1c730: d60e 6060 0003            MOVE   @36060h,*A14+,1
1c760: d60e 6480 0003            MOVE   @36480h,*A14+,1
1c790: 0d5f a3d0 0002            CALLA  2A3D0h
1c7c0: ca0b                      JREQ   1C880h
1c7d0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1c800: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1c830: 0d5f a1b0 0002            CALLA  2A1B0h
1c860: ca01                      JREQ   1C880h
1c870: 182c                      MOVK   1h,A12
1c880: d60e 6060 0003            MOVE   @36060h,*A14+,1
1c8b0: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1c8e0: 0d5f a1b0 0002            CALLA  2A1B0h
1c910: ca0b                      JREQ   1C9D0h
1c920: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1c950: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1c980: 0d5f a1b0 0002            CALLA  2A1B0h
1c9b0: ca01                      JREQ   1C9D0h
1c9c0: 182c                      MOVK   1h,A12
1c9d0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1ca00: d60e 6480 0003            MOVE   @36480h,*A14+,1
1ca30: 0d5f a3d0 0002            CALLA  2A3D0h
1ca60: ca0b                      JREQ   1CB20h
1ca70: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1caa0: d60e 6000 0003            MOVE   @36000h,*A14+,1
1cad0: 0d5f a3d0 0002            CALLA  2A3D0h
1cb00: ca01                      JREQ   1CB20h
1cb10: 182c                      MOVK   1h,A12
1cb20: 102a                      INC    A10
1cb30: 260a                      SLL    10h,A10
1cb40: 2a0a                      SRA    10h,A10
1cb50: 354a                      CMPK   Ah,A10
1cb60: c601                      JRLE   1CB80h
1cb70: 182c                      MOVK   1h,A12
1cb80: a3cf                      MOVE   A14,-*SP,1
1cb90: 0548                      SETF   8h,0,0
1cba0: 8448                      MOVE   *A2,A8,0
1cbb0: 930e                      MOVE   A8,*A14+,1
1cbc0: b5a2 0020                 MOVE   *A13(20h),A2,0
1cbe0: 924e                      MOVE   A2,*A14+,1
1cbf0: 0d5f ced0 0001            CALLA  1CED0h
1cc20: 4d08                      MOVE   A8,A8
1cc30: ca03                      JREQ   1CC70h
1cc40: 4d88                      MOVE   A12,A8
1cc50: ca00 fec8                 JREQ   1B8F0h
1cc70: 0548                      SETF   8h,0,0
1cc80: b5ac 0010                 MOVE   *A13(10h),A12,0
1cca0: b5aa 0020                 MOVE   *A13(20h),A10,0
1ccc0: 454c                      SUB    A10,A12
1ccd0: 05ec 6050 0003            MOVB   A12,@36050h
1cd00: 07c0 6060 0003 6440 0003  MOVE   @36060h,@36440h,1
1cd50: 05ac 6020 0003            MOVE   @36020h,A12,0
1cd80: 458a                      SUB    A12,A10
1cd90: 038a                      ABS    A10
1cda0: 15ea                      SUBK   Fh,A10
1cdb0: c509                      JRGE   1CE50h
1cdc0: b5aa 0010                 MOVE   *A13(10h),A10,0
1cde0: 05a6 6420 0003            MOVE   @36420h,A6,0
1ce10: 44ca                      SUB    A6,A10
1ce20: 038a                      ABS    A10
1ce30: 15ea                      SUBK   Fh,A10
1ce40: c402                      JRLT   1CE70h
1ce50: 1868                      MOVK   3h,A8
1ce60: c001                      JR     1CE80h
1ce70: 4508                      SUB    A8,A8
1ce80: b7ee 00e0                 MOVE   *SP(E0h),A14,1
1cea0: 09af 3454                 MMFM   SP,A2,A4,A6,A10,A12,A13
1cec0: 0962                      RETS   2h

_abc_out_of_range:
1ced0: 098f 002c                 MMTM   SP,A10,A12,A13
1cef0: 4dcd                      MOVE   A14,A13
1cf00: 0548                      SETF   8h,0,0
1cf10: b5aa ffc0                 MOVE   *A13(FFC0h),A10,0
1cf30: b5ac ffe0                 MOVE   *A13(FFE0h),A12,0
1cf50: 05a8 6030 0003            MOVE   @36030h,A8,0
1cf80: 490c                      CMP    A8,A12
1cf90: c412                      JRLT   1D0C0h
1cfa0: 05a8 6400 0003            MOVE   @36400h,A8,0
1cfd0: 490c                      CMP    A8,A12
1cfe0: c70d                      JRGT   1D0C0h
1cff0: 05ac 6030 0003            MOVE   @36030h,A12,0
1d020: 498a                      CMP    A12,A10
1d030: c404                      JRLT   1D080h
1d040: 490a                      CMP    A8,A10
1d050: c702                      JRGT   1D080h
1d060: 4508                      SUB    A8,A8
1d070: c001                      JR     1D090h
1d080: 1828                      MOVK   1h,A8
1d090: 0570                      SETF   10h,1,0
1d0a0: 0508                      SEXT   A8,0
1d0b0: c001                      JR     1D0D0h
1d0c0: 1828                      MOVK   1h,A8
1d0d0: b7ee 0080                 MOVE   *SP(80h),A14,1
1d0f0: 09af 3400                 MMFM   SP,A10,A12,A13
1d110: 0962                      RETS   2h

_abc_adjust_brightness:
1d120: 098f 002c                 MMTM   SP,A10,A12,A13
1d140: 4dcd                      MOVE   A14,A13
1d150: 0b0e 0040                 ADDI   40h,A14
1d170: 0548                      SETF   8h,0,0
1d180: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
1d1a0: 4d4c                      MOVE   A10,A12
1d1b0: 248c                      SLL    4h,A12
1d1c0: 0b2c 3100 0003            ADDI   33100h,A12
1d1f0: 0570                      SETF   10h,1,0
1d200: 858c                      MOVE   *A12,A12,0
1d210: a3cf                      MOVE   A14,-*SP,1
1d220: 93ae                      MOVE   A13,*A14+,1
1d230: 4da8                      MOVE   A13,A8
1d240: 1208                      ADDK   10h,A8
1d250: 930e                      MOVE   A8,*A14+,1
1d260: 4da8                      MOVE   A13,A8
1d270: 1008                      ADDK   20h,A8
1d280: 930e                      MOVE   A8,*A14+,1
1d290: 938e                      MOVE   A12,*A14+,1
1d2a0: 0d5f 7290 0001            CALLA  17290h
1d2d0: 0548                      SETF   8h,0,0
1d2e0: 85a8                      MOVE   *A13,A8,0
1d2f0: c614                      JRLE   1D440h
1d300: 05a8 5f60 0003            MOVE   @35F60h,A8,0
1d330: 0d5f 5800 0002            CALLA  25800h
1d360: d60e 6060 0003            MOVE   @36060h,*A14+,1
1d390: 0d5f a5f0 0002            CALLA  2A5F0h
1d3c0: 85a8                      MOVE   *A13,A8,0
1d3d0: 0d5f 5800 0002            CALLA  25800h
1d400: 0d5f 99b0 0002            CALLA  299B0h
1d430: a7cc                      MOVE   -*A14,A12,1
1d440: 938e                      MOVE   A12,*A14+,1
1d450: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1d480: 0d5f a4e0 0002            CALLA  2A4E0h
1d4b0: ca1d                      JREQ   1D690h
1d4c0: 938e                      MOVE   A12,*A14+,1
1d4d0: 09e8 0000 41a0            MOVI   41A00000h,A8
1d500: 930e                      MOVE   A8,*A14+,1
1d510: 0d5f a2c0 0002            CALLA  2A2C0h
1d540: ca05                      JREQ   1D5A0h
1d550: 078c 6060 0003            MOVE   A12,@36060h,1
1d580: 4508                      SUB    A8,A8
1d590: c01c                      JR     1D760h
1d5a0: a3cf                      MOVE   A14,-*SP,1
1d5b0: 938e                      MOVE   A12,*A14+,1
1d5c0: 09ec 0000 41a0            MOVI   41A00000h,A12
1d5f0: 938e                      MOVE   A12,*A14+,1
1d600: 0d5f 99b0 0002            CALLA  299B0h
1d630: 934e                      MOVE   A10,*A14+,1
1d640: 0d5f e040 0001            CALLA  1E040h
1d670: 1828                      MOVK   1h,A8
1d680: c00d                      JR     1D760h
1d690: a3cf                      MOVE   A14,-*SP,1
1d6a0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1d6d0: 938e                      MOVE   A12,*A14+,1
1d6e0: 0d5f 99b0 0002            CALLA  299B0h
1d710: 934e                      MOVE   A10,*A14+,1
1d720: 0d5f d7b0 0001            CALLA  1D7B0h
1d750: 1828                      MOVK   1h,A8
1d760: b7ee 0080                 MOVE   *SP(80h),A14,1
1d780: 09af 3400                 MMFM   SP,A10,A12,A13
1d7a0: 0962                      RETS   2h

_abc_cannot_get_full_width:
1d7b0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
1d7d0: 4dcd                      MOVE   A14,A13
1d7e0: 0548                      SETF   8h,0,0
1d7f0: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
1d810: 4d48                      MOVE   A10,A8
1d820: 2508                      SLL    8h,A8
1d830: 0b28 1f00 0003            ADDI   31F00h,A8
1d860: 870c                      MOVE   *A8,A12,1
1d870: 0550                      SETF   10h,0,0
1d880: 05a6 5fa0 0003            MOVE   @35FA0h,A6,0
1d8b0: 4d48                      MOVE   A10,A8
1d8c0: 1428                      DEC    A8
1d8d0: ca23                      JREQ   1DB10h
1d8e0: 1428                      DEC    A8
1d8f0: ca21                      JREQ   1DB10h
1d900: 1428                      DEC    A8
1d910: ca08                      JREQ   1D9A0h
1d920: 1428                      DEC    A8
1d930: ca1d                      JREQ   1DB10h
1d940: 1428                      DEC    A8
1d950: ca53                      JREQ   1DE90h
1d960: 1428                      DEC    A8
1d970: ca19                      JREQ   1DB10h
1d980: 0d88 0065                 DSJ    A8,1DFF0h
1d9a0: 4ccc                      MOVE   A6,A12
1d9b0: 102c                      INC    A12
1d9c0: 058c 5fa0 0003            MOVE   A12,@35FA0h,0
1d9f0: 052c                      ZEXT   A12,0
1da00: 146c                      SUBK   3h,A12
1da10: c404                      JRLT   1DA60h
1da20: 186c                      MOVK   3h,A12
1da30: 058c 5fa0 0003            MOVE   A12,@35FA0h,0
1da60: 05ac 5fa0 0003            MOVE   @35FA0h,A12,0
1da90: 48cc                      CMP    A6,A12
1daa0: ca54                      JREQ   1DFF0h
1dab0: a3cf                      MOVE   A14,-*SP,1
1dac0: 938e                      MOVE   A12,*A14+,1
1dad0: 0d5f 6290 0000            CALLA  6290h
1db00: c04e                      JR     1DFF0h
1db10: 938e                      MOVE   A12,*A14+,1
1db20: 0d5f 4220 0002            CALLA  24220h
1db50: 09e8 0000 3f80            MOVI   3F800000h,A8
1db80: 930e                      MOVE   A8,*A14+,1
1db90: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1dbb0: 0d5f 8cd0 0002            CALLA  28CD0h
1dbe0: 0d5f 4220 0002            CALLA  24220h
1dc10: 4508                      SUB    A8,A8
1dc20: 09e6 0000 4024            MOVI   40240000h,A6
1dc50: 92ce                      MOVE   A6,*A14+,1
1dc60: 930e                      MOVE   A8,*A14+,1
1dc70: 0d5f 8130 0002            CALLA  28130h
1dca0: 0d5f 5f40 0002            CALLA  25F40h
1dcd0: 0d5f 34e0 0002            CALLA  234E0h
1dd00: a7cc                      MOVE   -*A14,A12,1
1dd10: 938e                      MOVE   A12,*A14+,1
1dd20: 0d5f 4220 0002            CALLA  24220h
1dd50: 4508                      SUB    A8,A8
1dd60: 09e6 8000 4058            MOVI   40588000h,A6
1dd90: 92ce                      MOVE   A6,*A14+,1
1dda0: 930e                      MOVE   A8,*A14+,1
1ddb0: 0d5f 6fb0 0002            CALLA  26FB0h
1dde0: ca03                      JREQ   1DE20h
1ddf0: 07ac f3c0 0002            MOVE   @2F3C0h,A12,1
1de20: a3cf                      MOVE   A14,-*SP,1
1de30: 938e                      MOVE   A12,*A14+,1
1de40: 934e                      MOVE   A10,*A14+,1
1de50: 0d5f 9c30 0000            CALLA  9C30h
1de80: c016                      JR     1DFF0h
1de90: 05ac 3f40 0003            MOVE   @33F40h,A12,0
1dec0: 102c                      INC    A12
1ded0: 058c 3f40 0003            MOVE   A12,@33F40h,0
1df00: 052c                      ZEXT   A12,0
1df10: 158c                      SUBK   Ch,A12
1df20: c604                      JRLE   1DF70h
1df30: 198c                      MOVK   Ch,A12
1df40: 058c 3f40 0003            MOVE   A12,@33F40h,0
1df70: a3cf                      MOVE   A14,-*SP,1
1df80: 05ac 3f40 0003            MOVE   @33F40h,A12,0
1dfb0: 938e                      MOVE   A12,*A14+,1
1dfc0: 0d5f 6650 0000            CALLA  6650h
1dff0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
1e010: 09af 3440                 MMFM   SP,A6,A10,A12,A13
1e030: 0962                      RETS   2h

_abc_handle_low_brightness:
1e040: 098f 022c                 MMTM   SP,A6,A10,A12,A13
1e060: 4dcd                      MOVE   A14,A13
1e070: 0548                      SETF   8h,0,0
1e080: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
1e0a0: 4d48                      MOVE   A10,A8
1e0b0: 2508                      SLL    8h,A8
1e0c0: 0b28 1f00 0003            ADDI   31F00h,A8
1e0f0: 870c                      MOVE   *A8,A12,1
1e100: 0550                      SETF   10h,0,0
1e110: 05a6 5fa0 0003            MOVE   @35FA0h,A6,0
1e140: 4d48                      MOVE   A10,A8
1e150: 1428                      DEC    A8
1e160: ca25                      JREQ   1E3C0h
1e170: 1428                      DEC    A8
1e180: ca23                      JREQ   1E3C0h
1e190: 1428                      DEC    A8
1e1a0: ca08                      JREQ   1E230h
1e1b0: 1428                      DEC    A8
1e1c0: ca1f                      JREQ   1E3C0h
1e1d0: 1428                      DEC    A8
1e1e0: ca53                      JREQ   1E720h
1e1f0: 1428                      DEC    A8
1e200: ca1b                      JREQ   1E3C0h
1e210: 0d88 0065                 DSJ    A8,1E880h
1e230: 4cc8                      MOVE   A6,A8
1e240: c604                      JRLE   1E290h
1e250: 1428                      DEC    A8
1e260: 0588 5fa0 0003            MOVE   A8,@35FA0h,0
1e290: 05ac 5fa0 0003            MOVE   @35FA0h,A12,0
1e2c0: c704                      JRGT   1E310h
1e2d0: 4508                      SUB    A8,A8
1e2e0: 0588 5fa0 0003            MOVE   A8,@35FA0h,0
1e310: 05ac 5fa0 0003            MOVE   @35FA0h,A12,0
1e340: 48cc                      CMP    A6,A12
1e350: ca52                      JREQ   1E880h
1e360: a3cf                      MOVE   A14,-*SP,1
1e370: 938e                      MOVE   A12,*A14+,1
1e380: 0d5f 6290 0000            CALLA  6290h
1e3b0: c04c                      JR     1E880h
1e3c0: 938e                      MOVE   A12,*A14+,1
1e3d0: 0d5f 4220 0002            CALLA  24220h
1e400: 09e8 0000 3f80            MOVI   3F800000h,A8
1e430: 930e                      MOVE   A8,*A14+,1
1e440: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
1e460: 0d5f 8cd0 0002            CALLA  28CD0h
1e490: 0d5f 4220 0002            CALLA  24220h
1e4c0: 4508                      SUB    A8,A8
1e4d0: 09e6 0000 4024            MOVI   40240000h,A6
1e500: 92ce                      MOVE   A6,*A14+,1
1e510: 930e                      MOVE   A8,*A14+,1
1e520: 0d5f 8130 0002            CALLA  28130h
1e550: 0d5f 5dd0 0002            CALLA  25DD0h
1e580: 0d5f 34e0 0002            CALLA  234E0h
1e5b0: a7cc                      MOVE   -*A14,A12,1
1e5c0: 100e                      ADDK   20h,A14
1e5d0: a3cf                      MOVE   A14,-*SP,1
1e5e0: 09e8 0000 42c4            MOVI   42C40000h,A8
1e610: 930e                      MOVE   A8,*A14+,1
1e620: 09e8 0000 4000            MOVI   40000000h,A8
1e650: 930e                      MOVE   A8,*A14+,1
1e660: 938e                      MOVE   A12,*A14+,1
1e670: 0d5f cdb0 0000            CALLA  CDB0h
1e6a0: a7cc                      MOVE   -*A14,A12,1
1e6b0: a3cf                      MOVE   A14,-*SP,1
1e6c0: 938e                      MOVE   A12,*A14+,1
1e6d0: 934e                      MOVE   A10,*A14+,1
1e6e0: 0d5f 9c30 0000            CALLA  9C30h
1e710: c016                      JR     1E880h
1e720: 05ac 3f40 0003            MOVE   @33F40h,A12,0
1e750: 142c                      DEC    A12
1e760: 058c 3f40 0003            MOVE   A12,@33F40h,0
1e790: 052c                      ZEXT   A12,0
1e7a0: 4d88                      MOVE   A12,A8
1e7b0: c504                      JRGE   1E800h
1e7c0: 454a                      SUB    A10,A10
1e7d0: 058a 3f40 0003            MOVE   A10,@33F40h,0
1e800: a3cf                      MOVE   A14,-*SP,1
1e810: 05ac 3f40 0003            MOVE   @33F40h,A12,0
1e840: 938e                      MOVE   A12,*A14+,1
1e850: 0d5f 6650 0000            CALLA  6650h
1e880: b7ee 00a0                 MOVE   *SP(A0h),A14,1
1e8a0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
1e8c0: 0962                      RETS   2h

_abc_adjust_contrast:
1e8d0: 098f 6a2c                 MMTM   SP,A1,A2,A4,A6,A10,A12,A13
1e8f0: 4dcd                      MOVE   A14,A13
1e900: 0b0e 0040                 ADDI   40h,A14
1e920: 0548                      SETF   8h,0,0
1e930: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
1e950: 4d46                      MOVE   A10,A6
1e960: 2486                      SLL    4h,A6
1e970: 0b26 3100 0003            ADDI   33100h,A6
1e9a0: 0570                      SETF   10h,1,0
1e9b0: 84c6                      MOVE   *A6,A6,0
1e9c0: a3cf                      MOVE   A14,-*SP,1
1e9d0: 93ae                      MOVE   A13,*A14+,1
1e9e0: 4da8                      MOVE   A13,A8
1e9f0: 1208                      ADDK   10h,A8
1ea00: 930e                      MOVE   A8,*A14+,1
1ea10: 4da8                      MOVE   A13,A8
1ea20: 1008                      ADDK   20h,A8
1ea30: 930e                      MOVE   A8,*A14+,1
1ea40: 92ce                      MOVE   A6,*A14+,1
1ea50: 0d5f 7290 0001            CALLA  17290h
1ea80: 4484                      SUB    A4,A4
1ea90: 4c8c                      MOVE   A4,A12
1eaa0: 0548                      SETF   8h,0,0
1eab0: b5a8 0020                 MOVE   *A13(20h),A8,0
1ead0: 05a2 6030 0003            MOVE   @36030h,A2,0
1eb00: 4848                      CMP    A2,A8
1eb10: c60e                      JRLE   1EC00h
1eb20: 05a2 6400 0003            MOVE   @36400h,A2,0
1eb50: 4848                      CMP    A2,A8
1eb60: c50e                      JRGE   1EC50h
1eb70: 182c                      MOVK   1h,A12
1eb80: 1024                      INC    A4
1eb90: 2604                      SLL    10h,A4
1eba0: 2a04                      SRA    10h,A4
1ebb0: 3684                      CMPK   14h,A4
1ebc0: c700 00d6                 JRGT   1F940h
1ebe0: c000 00d5                 JR     1F950h
1ec00: 05a2 6400 0003            MOVE   @36400h,A2,0
1ec30: 4848                      CMP    A2,A8
1ec40: c42e                      JRLT   1EF30h
1ec50: d60e 64c0 0003            MOVE   @364C0h,*A14+,1
1ec80: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1ecb0: 0d5f 8df0 0002            CALLA  28DF0h
1ece0: a7c8                      MOVE   -*A14,A8,1
1ecf0: 0788 64e0 0003            MOVE   A8,@364E0h,1
1ed20: 930e                      MOVE   A8,*A14+,1
1ed30: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1ed60: 0d5f a1b0 0002            CALLA  2A1B0h
1ed90: ca05                      JREQ   1EDF0h
1eda0: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
1edf0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1ee20: d60e 6000 0003            MOVE   @36000h,*A14+,1
1ee50: 0d5f a3d0 0002            CALLA  2A3D0h
1ee80: ca05                      JREQ   1EEE0h
1ee90: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
1eee0: a3cf                      MOVE   A14,-*SP,1
1eef0: 934e                      MOVE   A10,*A14+,1
1ef00: 0d5f 7600 0001            CALLA  17600h
1ef30: 0548                      SETF   8h,0,0
1ef40: b5a2 0020                 MOVE   *A13(20h),A2,0
1ef60: 05a8 6030 0003            MOVE   @36030h,A8,0
1ef90: 4902                      CMP    A8,A2
1efa0: c72e                      JRGT   1F290h
1efb0: d60e 64c0 0003            MOVE   @364C0h,*A14+,1
1efe0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1f010: 0d5f 8bb0 0002            CALLA  28BB0h
1f040: a7c8                      MOVE   -*A14,A8,1
1f050: 0788 64e0 0003            MOVE   A8,@364E0h,1
1f080: 930e                      MOVE   A8,*A14+,1
1f090: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1f0c0: 0d5f a1b0 0002            CALLA  2A1B0h
1f0f0: ca05                      JREQ   1F150h
1f100: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
1f150: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1f180: d60e 6000 0003            MOVE   @36000h,*A14+,1
1f1b0: 0d5f a3d0 0002            CALLA  2A3D0h
1f1e0: ca05                      JREQ   1F240h
1f1f0: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
1f240: a3cf                      MOVE   A14,-*SP,1
1f250: 934e                      MOVE   A10,*A14+,1
1f260: 0d5f 7600 0001            CALLA  17600h
1f290: a3cf                      MOVE   A14,-*SP,1
1f2a0: 93ae                      MOVE   A13,*A14+,1
1f2b0: 4da8                      MOVE   A13,A8
1f2c0: 1208                      ADDK   10h,A8
1f2d0: 930e                      MOVE   A8,*A14+,1
1f2e0: 4da2                      MOVE   A13,A2
1f2f0: 1002                      ADDK   20h,A2
1f300: 924e                      MOVE   A2,*A14+,1
1f310: 92ce                      MOVE   A6,*A14+,1
1f320: 0d5f 7290 0001            CALLA  17290h
1f350: 0548                      SETF   8h,0,0
1f360: 8448                      MOVE   *A2,A8,0
1f370: 05a2 6030 0003            MOVE   @36030h,A2,0
1f3a0: 4848                      CMP    A2,A8
1f3b0: c605                      JRLE   1F410h
1f3c0: 05a2 6400 0003            MOVE   @36400h,A2,0
1f3f0: 4848                      CMP    A2,A8
1f400: c424                      JRLT   1F650h
1f410: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1f440: 0d5f 4220 0002            CALLA  24220h
1f470: 4442                      SUB    A2,A2
1f480: 09e8 0000 4024            MOVI   40240000h,A8
1f4b0: 930e                      MOVE   A8,*A14+,1
1f4c0: 924e                      MOVE   A2,*A14+,1
1f4d0: 0d5f 6f70 0002            CALLA  26F70h
1f500: ca0a                      JREQ   1F5B0h
1f510: 4d48                      MOVE   A10,A8
1f520: 1428                      DEC    A8
1f530: 34c8                      CMPK   6h,A8
1f540: c306                      JRHI   1F5B0h
1f550: 24a8                      SLL    5h,A8
1f560: 0b28 f1c0 0002            ADDI   2F1C0h,A8
1f590: 8708                      MOVE   *A8,A8,1
1f5a0: 0168                      JUMP   A8
1f5b0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1f5e0: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1f610: 0d5f a4e0 0002            CALLA  2A4E0h
1f640: ca4a                      JREQ   1FAF0h
1f650: d60e 6060 0003            MOVE   @36060h,*A14+,1
1f680: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1f6b0: 0d5f a1b0 0002            CALLA  2A1B0h
1f6e0: ca0b                      JREQ   1F7A0h
1f6f0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1f720: d60e 6000 0003            MOVE   @36000h,*A14+,1
1f750: 0d5f a3d0 0002            CALLA  2A3D0h
1f780: ca01                      JREQ   1F7A0h
1f790: 182c                      MOVK   1h,A12
1f7a0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1f7d0: d60e 6480 0003            MOVE   @36480h,*A14+,1
1f800: 0d5f a3d0 0002            CALLA  2A3D0h
1f830: ca0b                      JREQ   1F8F0h
1f840: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
1f870: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
1f8a0: 0d5f a1b0 0002            CALLA  2A1B0h
1f8d0: ca01                      JREQ   1F8F0h
1f8e0: 182c                      MOVK   1h,A12
1f8f0: 1024                      INC    A4
1f900: 2604                      SLL    10h,A4
1f910: 2a04                      SRA    10h,A4
1f920: 3684                      CMPK   14h,A4
1f930: c601                      JRLE   1F950h
1f940: 182c                      MOVK   1h,A12
1f950: a3cf                      MOVE   A14,-*SP,1
1f960: 93ae                      MOVE   A13,*A14+,1
1f970: 4da2                      MOVE   A13,A2
1f980: 1202                      ADDK   10h,A2
1f990: 924e                      MOVE   A2,*A14+,1
1f9a0: 4da8                      MOVE   A13,A8
1f9b0: 1008                      ADDK   20h,A8
1f9c0: 930e                      MOVE   A8,*A14+,1
1f9d0: 92ce                      MOVE   A6,*A14+,1
1f9e0: 0d5f 7290 0001            CALLA  17290h
1fa10: 4d88                      MOVE   A12,A8
1fa20: ca00 ff06                 JREQ   1EAA0h
1fa40: d60e 6060 0003            MOVE   @36060h,*A14+,1
1fa70: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1faa0: 0d5f a1b0 0002            CALLA  2A1B0h
1fad0: cb34                      JRNE   1FE20h
1fae0: c029                      JR     1FD80h
1faf0: d60e 5fe0 0003            MOVE   @35FE0h,*A14+,1
1fb20: d60e 6060 0003            MOVE   @36060h,*A14+,1
1fb50: 0d5f 8bb0 0002            CALLA  28BB0h
1fb80: a7cc                      MOVE   -*A14,A12,1
1fb90: 078c 6060 0003            MOVE   A12,@36060h,1
1fbc0: 938e                      MOVE   A12,*A14+,1
1fbd0: d60e 6480 0003            MOVE   @36480h,*A14+,1
1fc00: 0d5f a3d0 0002            CALLA  2A3D0h
1fc30: ca05                      JREQ   1FC90h
1fc40: 07c0 6480 0003 6060 0003  MOVE   @36480h,@36060h,1
1fc90: a3cf                      MOVE   A14,-*SP,1
1fca0: 934e                      MOVE   A10,*A14+,1
1fcb0: 0d5f 7600 0001            CALLA  17600h
1fce0: d60e 6060 0003            MOVE   @36060h,*A14+,1
1fd10: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
1fd40: 0d5f a4e0 0002            CALLA  2A4E0h
1fd70: ca0a                      JREQ   1FE20h
1fd80: 0548                      SETF   8h,0,0
1fd90: 05a2 6040 0003            MOVE   @36040h,A2,0
1fdc0: b5ac 0020                 MOVE   *A13(20h),A12,0
1fde0: 484c                      CMP    A2,A12
1fdf0: c639                      JRLE   20190h
1fe00: c000 00d2                 JR     20B40h
1fe20: 0548                      SETF   8h,0,0
1fe30: 05a8 6050 0003            MOVE   @36050h,A8,0
1fe60: 0d5f 5800 0002            CALLA  25800h
1fe90: d60e 6060 0003            MOVE   @36060h,*A14+,1
1fec0: d60e 6440 0003            MOVE   @36440h,*A14+,1
1fef0: 0d5f 99b0 0002            CALLA  299B0h
1ff20: 0d5f a5f0 0002            CALLA  2A5F0h
1ff50: 0d5f 4a80 0002            CALLA  24A80h
1ff80: 4d0c                      MOVE   A8,A12
1ff90: 052c                      ZEXT   A12,0
1ffa0: 4d88                      MOVE   A12,A8
1ffb0: 0d5f 53c0 0002            CALLA  253C0h
1ffe0: 458c                      SUB    A12,A12
1fff0: 09e4 0000 3fe0            MOVI   3FE00000h,A4
20020: 928e                      MOVE   A4,*A14+,1
20030: 938e                      MOVE   A12,*A14+,1
20040: 0d5f 8130 0002            CALLA  28130h
20070: 09e8 0000 4060            MOVI   40600000h,A8
200a0: 930e                      MOVE   A8,*A14+,1
200b0: 938e                      MOVE   A12,*A14+,1
200c0: 0d5f 5c60 0002            CALLA  25C60h
200f0: 0d5f 3f60 0002            CALLA  23F60h
20120: 4d02                      MOVE   A8,A2
20130: 0522                      ZEXT   A2,0
20140: b5a8 0020                 MOVE   *A13(20h),A8,0
20160: 4848                      CMP    A2,A8
20170: c700 009b                 JRGT   20B40h
20190: b5a4 0020                 MOVE   *A13(20h),A4,0
201b0: 07ac 64e0 0003            MOVE   @364E0h,A12,1
201e0: 938e                      MOVE   A12,*A14+,1
201f0: d60e 6000 0003            MOVE   @36000h,*A14+,1
20220: 0d5f a2c0 0002            CALLA  2A2C0h
20250: ca00 0086                 JREQ   20AD0h
20270: d60e 64c0 0003            MOVE   @364C0h,*A14+,1
202a0: d60e 5fc0 0003            MOVE   @35FC0h,*A14+,1
202d0: 0d5f a5f0 0002            CALLA  2A5F0h
20300: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
20330: 0d5f 8bb0 0002            CALLA  28BB0h
20360: a7c8                      MOVE   -*A14,A8,1
20370: 0788 64e0 0003            MOVE   A8,@364E0h,1
203a0: 930e                      MOVE   A8,*A14+,1
203b0: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
203e0: 0d5f a1b0 0002            CALLA  2A1B0h
20410: ca05                      JREQ   20470h
20420: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
20470: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
204a0: d60e 6000 0003            MOVE   @36000h,*A14+,1
204d0: 0d5f a3d0 0002            CALLA  2A3D0h
20500: ca05                      JREQ   20560h
20510: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
20560: 07a1 64e0 0003            MOVE   @364E0h,A1,1
20590: a3cf                      MOVE   A14,-*SP,1
205a0: 934e                      MOVE   A10,*A14+,1
205b0: 0d5f 7600 0001            CALLA  17600h
205e0: a3cf                      MOVE   A14,-*SP,1
205f0: 93ae                      MOVE   A13,*A14+,1
20600: 4da8                      MOVE   A13,A8
20610: 1208                      ADDK   10h,A8
20620: 930e                      MOVE   A8,*A14+,1
20630: 4da8                      MOVE   A13,A8
20640: 1008                      ADDK   20h,A8
20650: 930e                      MOVE   A8,*A14+,1
20660: 92ce                      MOVE   A6,*A14+,1
20670: 0d5f 7290 0001            CALLA  17290h
206a0: 0548                      SETF   8h,0,0
206b0: b5a6 0020                 MOVE   *A13(20h),A6,0
206d0: 4886                      CMP    A4,A6
206e0: cb02                      JRNE   20710h
206f0: 938e                      MOVE   A12,*A14+,1
20700: c019                      JR     208A0h
20710: 922e                      MOVE   A1,*A14+,1
20720: 938e                      MOVE   A12,*A14+,1
20730: 0d5f 8cd0 0002            CALLA  28CD0h
20760: 4482                      SUB    A4,A2
20770: 4c48                      MOVE   A2,A8
20780: 0d5f 5060 0002            CALLA  25060h
207b0: 0d5f a5f0 0002            CALLA  2A5F0h
207e0: 4486                      SUB    A4,A6
207f0: 4cc8                      MOVE   A6,A8
20800: 0d5f 5060 0002            CALLA  25060h
20830: 0d5f 99b0 0002            CALLA  299B0h
20860: 938e                      MOVE   A12,*A14+,1
20870: 0d5f 8df0 0002            CALLA  28DF0h
208a0: a7cc                      MOVE   -*A14,A12,1
208b0: 078c 64e0 0003            MOVE   A12,@364E0h,1
208e0: 938e                      MOVE   A12,*A14+,1
208f0: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
20920: 0d5f a1b0 0002            CALLA  2A1B0h
20950: ca05                      JREQ   209B0h
20960: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
209b0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
209e0: d60e 6000 0003            MOVE   @36000h,*A14+,1
20a10: 0d5f a3d0 0002            CALLA  2A3D0h
20a40: ca00 00a5                 JREQ   214B0h
20a60: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
20ab0: c000 009e                 JR     214B0h
20ad0: a3cf                      MOVE   A14,-*SP,1
20ae0: 934e                      MOVE   A10,*A14+,1
20af0: 0d5f 1910 0002            CALLA  21910h
20b20: c000 0097                 JR     214B0h
20b40: b5a4 0020                 MOVE   *A13(20h),A4,0
20b60: 07ac 64e0 0003            MOVE   @364E0h,A12,1
20b90: 938e                      MOVE   A12,*A14+,1
20ba0: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
20bd0: 0d5f a4e0 0002            CALLA  2A4E0h
20c00: ca00 0084                 JREQ   21460h
20c20: d60e 64c0 0003            MOVE   @364C0h,*A14+,1
20c50: d60e 5fc0 0003            MOVE   @35FC0h,*A14+,1
20c80: 0d5f a5f0 0002            CALLA  2A5F0h
20cb0: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
20ce0: 0d5f 8df0 0002            CALLA  28DF0h
20d10: a7c8                      MOVE   -*A14,A8,1
20d20: 0788 64e0 0003            MOVE   A8,@364E0h,1
20d50: 930e                      MOVE   A8,*A14+,1
20d60: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
20d90: 0d5f a1b0 0002            CALLA  2A1B0h
20dc0: ca05                      JREQ   20E20h
20dd0: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
20e20: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
20e50: d60e 6000 0003            MOVE   @36000h,*A14+,1
20e80: 0d5f a3d0 0002            CALLA  2A3D0h
20eb0: ca05                      JREQ   20F10h
20ec0: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
20f10: 07a1 64e0 0003            MOVE   @364E0h,A1,1
20f40: a3cf                      MOVE   A14,-*SP,1
20f50: 934e                      MOVE   A10,*A14+,1
20f60: 0d5f 7600 0001            CALLA  17600h
20f90: a3cf                      MOVE   A14,-*SP,1
20fa0: 93ae                      MOVE   A13,*A14+,1
20fb0: 4da8                      MOVE   A13,A8
20fc0: 1208                      ADDK   10h,A8
20fd0: 930e                      MOVE   A8,*A14+,1
20fe0: 4da8                      MOVE   A13,A8
20ff0: 1008                      ADDK   20h,A8
21000: 930e                      MOVE   A8,*A14+,1
21010: 92ce                      MOVE   A6,*A14+,1
21020: 0d5f 7290 0001            CALLA  17290h
21050: 0548                      SETF   8h,0,0
21060: b5a6 0020                 MOVE   *A13(20h),A6,0
21080: 4886                      CMP    A4,A6
21090: cb02                      JRNE   210C0h
210a0: 938e                      MOVE   A12,*A14+,1
210b0: c019                      JR     21250h
210c0: 922e                      MOVE   A1,*A14+,1
210d0: 938e                      MOVE   A12,*A14+,1
210e0: 0d5f 8cd0 0002            CALLA  28CD0h
21110: 4c88                      MOVE   A4,A8
21120: 4448                      SUB    A2,A8
21130: 0d5f 5060 0002            CALLA  25060h
21160: 0d5f a5f0 0002            CALLA  2A5F0h
21190: 44c4                      SUB    A6,A4
211a0: 4c88                      MOVE   A4,A8
211b0: 0d5f 5060 0002            CALLA  25060h
211e0: 0d5f 99b0 0002            CALLA  299B0h
21210: 938e                      MOVE   A12,*A14+,1
21220: 0d5f 8df0 0002            CALLA  28DF0h
21250: a7cc                      MOVE   -*A14,A12,1
21260: 078c 64e0 0003            MOVE   A12,@364E0h,1
21290: 938e                      MOVE   A12,*A14+,1
212a0: d60e 5f80 0003            MOVE   @35F80h,*A14+,1
212d0: 0d5f a1b0 0002            CALLA  2A1B0h
21300: ca05                      JREQ   21360h
21310: 07c0 5f80 0003 64e0 0003  MOVE   @35F80h,@364E0h,1
21360: d60e 64e0 0003            MOVE   @364E0h,*A14+,1
21390: d60e 6000 0003            MOVE   @36000h,*A14+,1
213c0: 0d5f a3d0 0002            CALLA  2A3D0h
213f0: ca0b                      JREQ   214B0h
21400: 07c0 6000 0003 64e0 0003  MOVE   @36000h,@364E0h,1
21450: c005                      JR     214B0h
21460: a3cf                      MOVE   A14,-*SP,1
21470: 934e                      MOVE   A10,*A14+,1
21480: 0d5f 1910 0002            CALLA  21910h
214b0: a3cf                      MOVE   A14,-*SP,1
214c0: 934e                      MOVE   A10,*A14+,1
214d0: 0d5f 7600 0001            CALLA  17600h
21500: c03b                      JR     218C0h
21510: d60e 5fe0 0003            MOVE   @35FE0h,*A14+,1
21540: d60e 6060 0003            MOVE   @36060h,*A14+,1
21570: 0d5f 8df0 0002            CALLA  28DF0h
215a0: a7cc                      MOVE   -*A14,A12,1
215b0: 078c 6060 0003            MOVE   A12,@36060h,1
215e0: 938e                      MOVE   A12,*A14+,1
215f0: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
21620: 0d5f a1b0 0002            CALLA  2A1B0h
21650: ca05                      JREQ   216B0h
21660: 07c0 64a0 0003 6060 0003  MOVE   @364A0h,@36060h,1
216b0: a3cf                      MOVE   A14,-*SP,1
216c0: 934e                      MOVE   A10,*A14+,1
216d0: 0d5f 7600 0001            CALLA  17600h
21700: 0550                      SETF   10h,0,0
21710: 05ac 5fa0 0003            MOVE   @35FA0h,A12,0
21740: c605                      JRLE   217A0h
21750: 4d8a                      MOVE   A12,A10
21760: 142a                      DEC    A10
21770: 058a 5fa0 0003            MOVE   A10,@35FA0h,0
217a0: 05aa 5fa0 0003            MOVE   @35FA0h,A10,0
217d0: c504                      JRGE   21820h
217e0: 44c6                      SUB    A6,A6
217f0: 0586 5fa0 0003            MOVE   A6,@35FA0h,0
21820: 05aa 5fa0 0003            MOVE   @35FA0h,A10,0
21850: 498a                      CMP    A12,A10
21860: ca05                      JREQ   218C0h
21870: a3cf                      MOVE   A14,-*SP,1
21880: 934e                      MOVE   A10,*A14+,1
21890: 0d5f 6290 0000            CALLA  6290h
218c0: b7ee 0100                 MOVE   *SP(100h),A14,1
218e0: 09af 3456                 MMFM   SP,A1,A2,A4,A6,A10,A12,A13
21900: 0962                      RETS   2h

_abc_cannot_adjust_contrast:
21910: 098f ea2c                 MMTM   SP,A0-A2,A4,A6,A10,A12,A13
21930: 4dcd                      MOVE   A14,A13
21940: 0b0e 0040                 ADDI   40h,A14
21960: 0548                      SETF   8h,0,0
21970: b5a4 ffe0                 MOVE   *A13(FFE0h),A4,0
21990: 4c86                      MOVE   A4,A6
219a0: 2486                      SLL    4h,A6
219b0: 0b26 3100 0003            ADDI   33100h,A6
219e0: 0570                      SETF   10h,1,0
219f0: 84c6                      MOVE   *A6,A6,0
21a00: a3cf                      MOVE   A14,-*SP,1
21a10: 93ae                      MOVE   A13,*A14+,1
21a20: 4da8                      MOVE   A13,A8
21a30: 1208                      ADDK   10h,A8
21a40: 930e                      MOVE   A8,*A14+,1
21a50: 4da8                      MOVE   A13,A8
21a60: 1008                      ADDK   20h,A8
21a70: 930e                      MOVE   A8,*A14+,1
21a80: 92ce                      MOVE   A6,*A14+,1
21a90: 0d5f 7290 0001            CALLA  17290h
21ac0: 0548                      SETF   8h,0,0
21ad0: b5a8 0020                 MOVE   *A13(20h),A8,0
21af0: 0d5f 53c0 0002            CALLA  253C0h
21b20: b5a8 0010                 MOVE   *A13(10h),A8,0
21b40: b5aa 0020                 MOVE   *A13(20h),A10,0
21b60: 4548                      SUB    A10,A8
21b70: 0d5f 4d10 0002            CALLA  24D10h
21ba0: 4508                      SUB    A8,A8
21bb0: 09ea 0000 3fe0            MOVI   3FE00000h,A10
21be0: 934e                      MOVE   A10,*A14+,1
21bf0: 930e                      MOVE   A8,*A14+,1
21c00: 0d5f 8130 0002            CALLA  28130h
21c30: 0d5f 5f40 0002            CALLA  25F40h
21c60: 0d5f 3f60 0002            CALLA  23F60h
21c90: 4d0c                      MOVE   A8,A12
21ca0: 052c                      ZEXT   A12,0
21cb0: 4d82                      MOVE   A12,A2
21cc0: 07a1 6060 0003            MOVE   @36060h,A1,1
21cf0: 0b4c ff7f                 CMPI   80h,A12
21d10: c75b                      JRGT   222D0h
21d20: 454a                      SUB    A10,A10
21d30: 0b4c ff7f                 CMPI   80h,A12
21d50: c500 00d4                 JRGE   22AB0h
21d70: d60e 6060 0003            MOVE   @36060h,*A14+,1
21da0: 0d5f 4220 0002            CALLA  24220h
21dd0: 09ec f3e0 0002            MOVI   2F3E0h,A12
21e00: 9b8e                      MOVE   *A12+,*A14+,1
21e10: 9b8e                      MOVE   *A12+,*A14+,1
21e20: 0d5f 8130 0002            CALLA  28130h
21e50: 0d5f 34e0 0002            CALLA  234E0h
21e80: a7cc                      MOVE   -*A14,A12,1
21e90: 078c 6060 0003            MOVE   A12,@36060h,1
21ec0: 938e                      MOVE   A12,*A14+,1
21ed0: d60e 64a0 0003            MOVE   @364A0h,*A14+,1
21f00: 0d5f a2c0 0002            CALLA  2A2C0h
21f30: ca05                      JREQ   21F90h
21f40: 07c0 64a0 0003 6060 0003  MOVE   @364A0h,@36060h,1
21f90: a3cf                      MOVE   A14,-*SP,1
21fa0: 928e                      MOVE   A4,*A14+,1
21fb0: 0d5f 7600 0001            CALLA  17600h
21fe0: a3cf                      MOVE   A14,-*SP,1
21ff0: 93ae                      MOVE   A13,*A14+,1
22000: 4dac                      MOVE   A13,A12
22010: 120c                      ADDK   10h,A12
22020: 938e                      MOVE   A12,*A14+,1
22030: 4da2                      MOVE   A13,A2
22040: 1002                      ADDK   20h,A2
22050: 924e                      MOVE   A2,*A14+,1
22060: 92ce                      MOVE   A6,*A14+,1
22070: 0d5f 7290 0001            CALLA  17290h
220a0: 0548                      SETF   8h,0,0
220b0: 8448                      MOVE   *A2,A8,0
220c0: 0d5f 53c0 0002            CALLA  253C0h
220f0: 8588                      MOVE   *A12,A8,0
22100: 8441                      MOVE   *A2,A1,0
22110: 4428                      SUB    A1,A8
22120: 0d5f 4d10 0002            CALLA  24D10h
22150: 4508                      SUB    A8,A8
22160: 09e2 0000 3fe0            MOVI   3FE00000h,A2
22190: 924e                      MOVE   A2,*A14+,1
221a0: 930e                      MOVE   A8,*A14+,1
221b0: 0d5f 8130 0002            CALLA  28130h
221e0: 0d5f 5f40 0002            CALLA  25F40h
22210: 0d5f 3f60 0002            CALLA  23F60h
22240: 4d0c                      MOVE   A8,A12
22250: 052c                      ZEXT   A12,0
22260: 102a                      INC    A10
22270: 0570                      SETF   10h,1,0
22280: 050a                      SEXT   A10,0
22290: 0b4c ff7f                 CMPI   80h,A12
222b0: c4ab                      JRLT   21D70h
222c0: c07e                      JR     22AB0h
222d0: 454a                      SUB    A10,A10
222e0: 0b4c ff7f                 CMPI   80h,A12
22300: c457                      JRLT   22880h
22310: d60e 6060 0003            MOVE   @36060h,*A14+,1
22340: 0d5f 4220 0002            CALLA  24220h
22370: 09ec f420 0002            MOVI   2F420h,A12
223a0: 9b8e                      MOVE   *A12+,*A14+,1
223b0: 9b8e                      MOVE   *A12+,*A14+,1
223c0: 0d5f 8130 0002            CALLA  28130h
223f0: 0d5f 34e0 0002            CALLA  234E0h
22420: a7cc                      MOVE   -*A14,A12,1
22430: 078c 6060 0003            MOVE   A12,@36060h,1
22460: 938e                      MOVE   A12,*A14+,1
22470: d60e 6480 0003            MOVE   @36480h,*A14+,1
224a0: 0d5f a3d0 0002            CALLA  2A3D0h
224d0: ca05                      JREQ   22530h
224e0: 07c0 6480 0003 6060 0003  MOVE   @36480h,@36060h,1
22530: a3cf                      MOVE   A14,-*SP,1
22540: 928e                      MOVE   A4,*A14+,1
22550: 0d5f 7600 0001            CALLA  17600h
22580: a3cf                      MOVE   A14,-*SP,1
22590: 93ae                      MOVE   A13,*A14+,1
225a0: 4dac                      MOVE   A13,A12
225b0: 120c                      ADDK   10h,A12
225c0: 938e                      MOVE   A12,*A14+,1
225d0: 4da8                      MOVE   A13,A8
225e0: 1008                      ADDK   20h,A8
225f0: 930e                      MOVE   A8,*A14+,1
22600: 92ce                      MOVE   A6,*A14+,1
22610: 0d5f 7290 0001            CALLA  17290h
22640: 0548                      SETF   8h,0,0
22650: b5a8 0020                 MOVE   *A13(20h),A8,0
22670: 0d5f 53c0 0002            CALLA  253C0h
226a0: 8588                      MOVE   *A12,A8,0
226b0: b5a0 0020                 MOVE   *A13(20h),A0,0
226d0: 4408                      SUB    A0,A8
226e0: 0d5f 4d10 0002            CALLA  24D10h
22710: 4508                      SUB    A8,A8
22720: 09e0 0000 3fe0            MOVI   3FE00000h,A0
22750: 920e                      MOVE   A0,*A14+,1
22760: 930e                      MOVE   A8,*A14+,1
22770: 0d5f 8130 0002            CALLA  28130h
227a0: 0d5f 5f40 0002            CALLA  25F40h
227d0: 0d5f 3f60 0002            CALLA  23F60h
22800: 4d0c                      MOVE   A8,A12
22810: 052c                      ZEXT   A12,0
22820: 102a                      INC    A10
22830: 0570                      SETF   10h,1,0
22840: 050a                      SEXT   A10,0
22850: 0b4c ff7f                 CMPI   80h,A12
22870: c5a9                      JRGE   22310h
22880: 922e                      MOVE   A1,*A14+,1
22890: d60e 6060 0003            MOVE   @36060h,*A14+,1
228c0: 0d5f 8cd0 0002            CALLA  28CD0h
228f0: 09ca 0080                 MOVI   80h,A10
22910: 458a                      SUB    A12,A10
22920: 4d48                      MOVE   A10,A8
22930: 0d5f 5060 0002            CALLA  25060h
22960: 0d5f a5f0 0002            CALLA  2A5F0h
22990: 4582                      SUB    A12,A2
229a0: 4c48                      MOVE   A2,A8
229b0: 0d5f 5060 0002            CALLA  25060h
229e0: 0d5f 99b0 0002            CALLA  299B0h
22a10: d60e 6060 0003            MOVE   @36060h,*A14+,1
22a40: 0d5f 8df0 0002            CALLA  28DF0h
22a70: a7cc                      MOVE   -*A14,A12,1
22a80: 078c 6060 0003            MOVE   A12,@36060h,1
22ab0: a3cf                      MOVE   A14,-*SP,1
22ac0: 928e                      MOVE   A4,*A14+,1
22ad0: 0d5f 7600 0001            CALLA  17600h
22b00: b7ee 0120                 MOVE   *SP(120h),A14,1
22b20: 09af 3457                 MMFM   SP,A0-A2,A4,A6,A10,A12,A13
22b40: 0962                      RETS   2h

_abc_choose_starting_brightness:
22b50: 098f 002c                 MMTM   SP,A10,A12,A13
22b70: 4dcd                      MOVE   A14,A13
22b80: 0548                      SETF   8h,0,0
22b90: b5aa ffe0                 MOVE   *A13(FFE0h),A10,0
22bb0: 100e                      ADDK   20h,A14
22bc0: a3cf                      MOVE   A14,-*SP,1
22bd0: 09e8 0000 42a0            MOVI   42A00000h,A8
22c00: 930e                      MOVE   A8,*A14+,1
22c10: 09e8 0000 3f80            MOVI   3F800000h,A8
22c40: 930e                      MOVE   A8,*A14+,1
22c50: 4d48                      MOVE   A10,A8
22c60: 2508                      SLL    8h,A8
22c70: 0b28 1f00 0003            ADDI   31F00h,A8
22ca0: 9b0e                      MOVE   *A8+,*A14+,1
22cb0: 0d5f cdb0 0000            CALLA  CDB0h
22ce0: a7c8                      MOVE   -*A14,A8,1
22cf0: 0788 34c0 0003            MOVE   A8,@334C0h,1
22d20: 100e                      ADDK   20h,A14
22d30: a3cf                      MOVE   A14,-*SP,1
22d40: 09e8 0000 42c8            MOVI   42C80000h,A8
22d70: 930e                      MOVE   A8,*A14+,1
22d80: 09e8 0000 3f80            MOVI   3F800000h,A8
22db0: 930e                      MOVE   A8,*A14+,1
22dc0: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
22df0: 0d5f cdb0 0000            CALLA  CDB0h
22e20: a7c8                      MOVE   -*A14,A8,1
22e30: 0788 34a0 0003            MOVE   A8,@334A0h,1
22e60: 4d48                      MOVE   A10,A8
22e70: 1428                      DEC    A8
22e80: ca3e                      JREQ   23270h
22e90: 1428                      DEC    A8
22ea0: ca3c                      JREQ   23270h
22eb0: 1428                      DEC    A8
22ec0: ca22                      JREQ   230F0h
22ed0: 1428                      DEC    A8
22ee0: ca16                      JREQ   23050h
22ef0: 1448                      SUBK   2h,A8
22f00: ca0a                      JREQ   22FB0h
22f10: 100e                      ADDK   20h,A14
22f20: a3cf                      MOVE   A14,-*SP,1
22f30: 1868                      MOVK   3h,A8
22f40: 930e                      MOVE   A8,*A14+,1
22f50: 934e                      MOVE   A10,*A14+,1
22f60: 0d5f 5ba0 0001            CALLA  15BA0h
22f90: a7cc                      MOVE   -*A14,A12,1
22fa0: c035                      JR     23300h
22fb0: 100e                      ADDK   20h,A14
22fc0: a3cf                      MOVE   A14,-*SP,1
22fd0: 1848                      MOVK   2h,A8
22fe0: 930e                      MOVE   A8,*A14+,1
22ff0: 934e                      MOVE   A10,*A14+,1
23000: 0d5f 5ba0 0001            CALLA  15BA0h
23030: a7cc                      MOVE   -*A14,A12,1
23040: c02b                      JR     23300h
23050: 100e                      ADDK   20h,A14
23060: a3cf                      MOVE   A14,-*SP,1
23070: 1828                      MOVK   1h,A8
23080: 930e                      MOVE   A8,*A14+,1
23090: 934e                      MOVE   A10,*A14+,1
230a0: 0d5f 5ba0 0001            CALLA  15BA0h
230d0: a7cc                      MOVE   -*A14,A12,1
230e0: c021                      JR     23300h
230f0: d60e 34a0 0003            MOVE   @334A0h,*A14+,1
23120: d60e 3480 0003            MOVE   @33480h,*A14+,1
23150: 0d5f 8cd0 0002            CALLA  28CD0h
23180: 09e8 a3d7 3ef0            MOVI   3EF0A3D7h,A8
231b0: 930e                      MOVE   A8,*A14+,1
231c0: 0d5f a5f0 0002            CALLA  2A5F0h
231f0: d60e 34c0 0003            MOVE   @334C0h,*A14+,1
23220: 0d5f 8bb0 0002            CALLA  28BB0h
23250: a7cc                      MOVE   -*A14,A12,1
23260: c009                      JR     23300h
23270: 100e                      ADDK   20h,A14
23280: a3cf                      MOVE   A14,-*SP,1
23290: 4508                      SUB    A8,A8
232a0: 930e                      MOVE   A8,*A14+,1
232b0: 934e                      MOVE   A10,*A14+,1
232c0: 0d5f 5ba0 0001            CALLA  15BA0h
232f0: a7cc                      MOVE   -*A14,A12,1
23300: a3cf                      MOVE   A14,-*SP,1
23310: 100e                      ADDK   20h,A14
23320: a3cf                      MOVE   A14,-*SP,1
23330: 09e8 0000 42a0            MOVI   42A00000h,A8
23360: 930e                      MOVE   A8,*A14+,1
23370: 09e8 0000 4000            MOVI   40000000h,A8
233a0: 930e                      MOVE   A8,*A14+,1
233b0: 938e                      MOVE   A12,*A14+,1
233c0: 0d5f cdb0 0000            CALLA  CDB0h
233f0: 934e                      MOVE   A10,*A14+,1
23400: 0d5f 9c30 0000            CALLA  9C30h
23430: 09ec 0000 3f80            MOVI   3F800000h,A12
23460: 078c 6460 0003            MOVE   A12,@36460h,1
23490: b7ee 0080                 MOVE   *SP(80h),A14,1
234b0: 09af 3400                 MMFM   SP,A10,A12,A13
234d0: 0962                      RETS   2h

FD$DTOF:
234e0: 07a8 0000 0000            MOVE   @0h,A8,1
23510: ca0e                      JREQ   23600h
23520: 4dc8                      MOVE   A14,A8
23530: 0be8 ffbf                 SUBI   40h,A8
23550: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
23580: 0bee ffbf                 SUBI   40h,A14
235a0: d83f 0080                 CEXEC  1,00101F,0
235c0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
235f0: 0960                      RETS   
23600: 098f 9000                 MMTM   SP,A0,A3
23620: a7c3                      MOVE   -*A14,A3,1
23630: 2d83                      SRL    14h,A3
23640: a7c0                      MOVE   -*A14,A0,1
23650: 4c08                      MOVE   A0,A8
23660: 2588                      SLL    Ch,A8
23670: 5503                      OR     A8,A3
23680: 2420                      SLL    1h,A0
23690: 4708                      SUBB   A8,A8
236a0: 27e8                      SLL    1Fh,A8
236b0: 2d60                      SRL    15h,A0
236c0: ca18                      JREQ   23850h
236d0: 0b40 f800                 CMPI   7FFh,A0
236f0: ca20                      JREQ   23900h
23700: 2ee3                      SRL    9h,A3
23710: c908                      JRNC   237A0h
23720: 1023                      INC    A3
23730: 1d03                      BTST   17h,A3
23740: ca05                      JREQ   237A0h
23750: 0b83 0000 ff80            ANDI   7FFFFFh,A3
23780: 2fe3                      SRL    1h,A3
23790: 1020                      INC    A0
237a0: 0be0 fc7f                 SUBI   380h,A0
237c0: c702                      JRGT   237F0h
237d0: 5600                      CLR    A0
237e0: c006                      JR     23850h
237f0: 0b40 ff00                 CMPI   FFh,A0
23810: c507                      JRGE   23890h
23820: 26e0                      SLL    17h,A0
23830: 5460                      OR     A3,A0
23840: 5500                      OR     A8,A0
23850: 920e                      MOVE   A0,*A14+,1
23860: 09af 0009                 MMFM   SP,A0,A3
23880: 0960                      RETS   
23890: 4d03                      MOVE   A8,A3
238a0: 1840                      MOVK   2h,A0
238b0: a3cf                      MOVE   A14,-*SP,1
238c0: 920e                      MOVE   A0,*A14+,1
238d0: 0d5f bf90 0002            CALLA  2BF90h
23900: 0ba3 0000 7f80            ORI    7F800000h,A3
23930: 926e                      MOVE   A3,*A14+,1
23940: 09af 0009                 MMFM   SP,A0,A3
23960: 0960                      RETS   

FD$DTOI:
23970: 07a8 0000 0000            MOVE   @0h,A8,1
239a0: ca1a                      JREQ   23B50h
239b0: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
239e0: a30f                      MOVE   A8,-*SP,1
239f0: 09c8 0029                 MOVI   29h,A8
23a10: 0628 4c00 000d            CMOVGC A8,000D4C,0
23a40: 4dc8                      MOVE   A14,A8
23a50: 0be8 ffbf                 SUBI   40h,A8
23a70: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
23aa0: 0bee ffbf                 SUBI   40h,A14
23ac0: d83f 00a0                 CEXEC  1,00141F,0
23ae0: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
23b10: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
23b40: 0960                      RETS   
23b50: 098f 9000                 MMTM   SP,A0,A3
23b70: a7c8                      MOVE   -*A14,A8,1
23b80: 2d88                      SRL    14h,A8
23b90: a7c0                      MOVE   -*A14,A0,1
23ba0: 4c03                      MOVE   A0,A3
23bb0: 2583                      SLL    Ch,A3
23bc0: 5468                      OR     A3,A8
23bd0: 2420                      SLL    1h,A0
23be0: 4663                      SUBB   A3,A3
23bf0: 2d60                      SRL    15h,A0
23c00: 2fc8                      SRL    2h,A8
23c10: 0ba8 0000 4000            ORI    40000000h,A8
23c40: 1020                      INC    A0
23c50: 0be0 fc00                 SUBI   3FFh,A0
23c70: c60a                      JRLE   23D20h
23c80: 17e0                      SUBK   1Fh,A0
23c90: c70c                      JRGT   23D60h
23ca0: 6608                      SRL    A0,A8
23cb0: 4c63                      MOVE   A3,A3
23cc0: ca01                      JREQ   23CE0h
23cd0: 03a8                      NEG    A8
23ce0: 09af 0009                 MMFM   SP,A0,A3
23d00: 4d08                      MOVE   A8,A8
23d10: 0960                      RETS   
23d20: 09af 0009                 MMFM   SP,A0,A3
23d40: 4508                      SUB    A8,A8
23d50: 0960                      RETS   
23d60: 1820                      MOVK   1h,A0
23d70: a3cf                      MOVE   A14,-*SP,1
23d80: 920e                      MOVE   A0,*A14+,1
23d90: 0d5f bf90 0002            CALLA  2BF90h
23dc0: 0bc3 ffff 7fff            XORI   7FFFFFFFh,A3
23df0: 4c68                      MOVE   A3,A8
23e00: 09af 0009                 MMFM   SP,A0,A3
23e20: 0960                      RETS   
23e30: 2d60                      SRL    15h,A0
23e40: 2fc8                      SRL    2h,A8
23e50: 0ba8 0000 4000            ORI    40000000h,A8
23e80: 1020                      INC    A0
23e90: 0be0 fc00                 SUBI   3FFh,A0
23eb0: c625                      JRLE   24110h
23ec0: 17e0                      SUBK   1Fh,A0
23ed0: c727                      JRGT   24150h
23ee0: 6608                      SRL    A0,A8
23ef0: 4c63                      MOVE   A3,A3
23f00: ca01                      JREQ   23F20h
23f10: 03a8                      NEG    A8
23f20: 09af 0009                 MMFM   SP,A0,A3
23f40: 4d08                      MOVE   A8,A8
23f50: 0960                      RETS   

FD$DTOU:
23f60: 098f 9000                 MMTM   SP,A0,A3
23f80: a7c8                      MOVE   -*A14,A8,1
23f90: 2d88                      SRL    14h,A8
23fa0: a7c0                      MOVE   -*A14,A0,1
23fb0: 4c03                      MOVE   A0,A3
23fc0: 2583                      SLL    Ch,A3
23fd0: 5468                      OR     A3,A8
23fe0: 2420                      SLL    1h,A0
23ff0: 4663                      SUBB   A3,A3
24000: cbe2                      JRNE   23E30h
24010: 2d60                      SRL    15h,A0
24020: 2fe8                      SRL    1h,A8
24030: 0ba8 0000 8000            ORI    80000000h,A8
24060: 1020                      INC    A0
24070: 0be0 fc00                 SUBI   3FFh,A0
24090: c607                      JRLE   24110h
240a0: 1400                      SUBK   20h,A0
240b0: c709                      JRGT   24150h
240c0: 6608                      SRL    A0,A8
240d0: 09af 0009                 MMFM   SP,A0,A3
240f0: 4d08                      MOVE   A8,A8
24100: 0960                      RETS   
24110: 09af 0009                 MMFM   SP,A0,A3
24130: 4508                      SUB    A8,A8
24140: 0960                      RETS   
24150: 1820                      MOVK   1h,A0
24160: a3cf                      MOVE   A14,-*SP,1
24170: 920e                      MOVE   A0,*A14+,1
24180: 0d5f bf90 0002            CALLA  2BF90h
241b0: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
241e0: 4c68                      MOVE   A3,A8
241f0: 09af 0009                 MMFM   SP,A0,A3
24210: 0960                      RETS   

FD$FTOD:
24220: 07a8 0000 0000            MOVE   @0h,A8,1
24250: ca09                      JREQ   242F0h
24260: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
24290: d83e 0080                 CEXEC  0,00101F,0
242b0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
242e0: 0960                      RETS   
242f0: 098f c000                 MMTM   SP,A0,A1
24310: a7c8                      MOVE   -*A14,A8,1
24320: 4d01                      MOVE   A8,A1
24330: 2421                      SLL    1h,A1
24340: 4600                      SUBB   A0,A0
24350: 2d01                      SRL    18h,A1
24360: ca14                      JREQ   244B0h
24370: 27e0                      SLL    1Fh,A0
24380: 0b41 ff00                 CMPI   FFh,A1
243a0: cb02                      JRNE   243D0h
243b0: 09c1 047f                 MOVI   47Fh,A1
243d0: 0b01 0380                 ADDI   380h,A1
243f0: 2681                      SLL    14h,A1
24400: 5420                      OR     A1,A0
24410: 4d01                      MOVE   A8,A1
24420: 27a1                      SLL    1Dh,A1
24430: 2528                      SLL    9h,A8
24440: 2e88                      SRL    Ch,A8
24450: 5500                      OR     A8,A0
24460: 920e                      MOVE   A0,*A14+,1
24470: 922e                      MOVE   A1,*A14+,1
24480: 09af 0003                 MMFM   SP,A0,A1
244a0: 0960                      RETS   
244b0: 922e                      MOVE   A1,*A14+,1
244c0: 922e                      MOVE   A1,*A14+,1
244d0: 09af 0003                 MMFM   SP,A0,A1
244f0: 0960                      RETS   

FD$FTOI:
24500: 07a8 0000 0000            MOVE   @0h,A8,1
24530: ca15                      JREQ   24690h
24540: 0668 4e00 000d            CMOVCG A8,A0,0,000D4E,0
24570: a30f                      MOVE   A8,-*SP,1
24580: 09c8 0029                 MOVI   29h,A8
245a0: 0628 4c00 000d            CMOVGC A8,000D4C,0
245d0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
24600: d83e 00a0                 CEXEC  0,00141F,0
24620: 0668 4e00 0000            CMOVCG A8,A0,0,00004E,0
24650: 0681 8c0f 000d            CMOVMC *SP+,1,0,000D8C,0
24680: 0960                      RETS   
24690: 098f 9000                 MMTM   SP,A0,A3
246b0: a7c0                      MOVE   -*A14,A0,1
246c0: 4c08                      MOVE   A0,A8
246d0: 2420                      SLL    1h,A0
246e0: 4663                      SUBB   A3,A3
246f0: 2d00                      SRL    18h,A0
24700: 2528                      SLL    9h,A8
24710: 2fc8                      SRL    2h,A8
24720: 0ba8 0000 4000            ORI    40000000h,A8
24750: 1020                      INC    A0
24760: 0be0 ff80                 SUBI   7Fh,A0
24780: c60a                      JRLE   24830h
24790: 17e0                      SUBK   1Fh,A0
247a0: c70c                      JRGT   24870h
247b0: 6608                      SRL    A0,A8
247c0: 4c63                      MOVE   A3,A3
247d0: ca01                      JREQ   247F0h
247e0: 03a8                      NEG    A8
247f0: 09af 0009                 MMFM   SP,A0,A3
24810: 4d08                      MOVE   A8,A8
24820: 0960                      RETS   
24830: 09af 0009                 MMFM   SP,A0,A3
24850: 4508                      SUB    A8,A8
24860: 0960                      RETS   
24870: 1860                      MOVK   3h,A0
24880: a3cf                      MOVE   A14,-*SP,1
24890: 920e                      MOVE   A0,*A14+,1
248a0: 0d5f bf90 0002            CALLA  2BF90h
248d0: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
24900: 4c68                      MOVE   A3,A8
24910: 09af 0009                 MMFM   SP,A0,A3
24930: 0960                      RETS   
24940: 2d00                      SRL    18h,A0
24950: 2528                      SLL    9h,A8
24960: 2fc8                      SRL    2h,A8
24970: 0ba8 0000 4000            ORI    40000000h,A8
249a0: 1020                      INC    A0
249b0: 0be0 ff80                 SUBI   7Fh,A0
249d0: c622                      JRLE   24C00h
249e0: 17e0                      SUBK   1Fh,A0
249f0: c724                      JRGT   24C40h
24a00: 6608                      SRL    A0,A8
24a10: 4c63                      MOVE   A3,A3
24a20: ca01                      JREQ   24A40h
24a30: 03a8                      NEG    A8
24a40: 09af 0009                 MMFM   SP,A0,A3
24a60: 4d08                      MOVE   A8,A8
24a70: 0960                      RETS   

FD$FTOU:
24a80: 098f 9000                 MMTM   SP,A0,A3
24aa0: a7c0                      MOVE   -*A14,A0,1
24ab0: 4c08                      MOVE   A0,A8
24ac0: 2420                      SLL    1h,A0
24ad0: 4663                      SUBB   A3,A3
24ae0: cbe5                      JRNE   24940h
24af0: 2d00                      SRL    18h,A0
24b00: 2528                      SLL    9h,A8
24b10: 2fe8                      SRL    1h,A8
24b20: 0ba8 0000 8000            ORI    80000000h,A8
24b50: 1020                      INC    A0
24b60: 0be0 ff80                 SUBI   7Fh,A0
24b80: c607                      JRLE   24C00h
24b90: 1400                      SUBK   20h,A0
24ba0: c709                      JRGT   24C40h
24bb0: 6608                      SRL    A0,A8
24bc0: 09af 0009                 MMFM   SP,A0,A3
24be0: 4d08                      MOVE   A8,A8
24bf0: 0960                      RETS   
24c00: 09af 0009                 MMFM   SP,A0,A3
24c20: 4508                      SUB    A8,A8
24c30: 0960                      RETS   
24c40: 1860                      MOVK   3h,A0
24c50: a3cf                      MOVE   A14,-*SP,1
24c60: 920e                      MOVE   A0,*A14+,1
24c70: 0d5f bf90 0002            CALLA  2BF90h
24ca0: 0bc3 ffff 07ff            XORI   7FFFFFFh,A3
24cd0: 4c68                      MOVE   A3,A8
24ce0: 09af 0009                 MMFM   SP,A0,A3
24d00: 0960                      RETS   

FD$ITOD:
24d10: a38f                      MOVE   A12,-*SP,1
24d20: 07ac 0000 0000            MOVE   @0h,A12,1
24d50: ca0a                      JREQ   24E00h
24d60: 0628 4c00 0000            CMOVGC A8,00004C,0
24d90: d83f 00c0                 CEXEC  1,00181F,0
24db0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
24de0: 97ec                      MOVE   *SP+,A12,1
24df0: 0960                      RETS   
24e00: 098f c000                 MMTM   SP,A0,A1
24e20: 5600                      CLR    A0
24e30: 0388                      ABS    A8
24e40: ca1a                      JREQ   24FF0h
24e50: c402                      JRLT   24E80h
24e60: 1820                      MOVK   1h,A0
24e70: 27e0                      SLL    1Fh,A0
24e80: 6b01                      LMO    A8,A1
24e90: 1021                      INC    A1
24ea0: 0b41 ffdf                 CMPI   20h,A1
24ec0: cb02                      JRNE   24EF0h
24ed0: 5708                      CLR    A8
24ee0: c001                      JR     24F00h
24ef0: 6228                      SLL    A1,A8
24f00: 03a1                      NEG    A1
24f10: 0b01 041f                 ADDI   41Fh,A1
24f30: 2681                      SLL    14h,A1
24f40: 5420                      OR     A1,A0
24f50: 4d01                      MOVE   A8,A1
24f60: 2681                      SLL    14h,A1
24f70: 2e88                      SRL    Ch,A8
24f80: 5500                      OR     A8,A0
24f90: 920e                      MOVE   A0,*A14+,1
24fa0: 922e                      MOVE   A1,*A14+,1
24fb0: 09af 0003                 MMFM   SP,A0,A1
24fd0: 97ec                      MOVE   *SP+,A12,1
24fe0: 0960                      RETS   
24ff0: 5600                      CLR    A0
25000: 920e                      MOVE   A0,*A14+,1
25010: 920e                      MOVE   A0,*A14+,1
25020: 09af 0003                 MMFM   SP,A0,A1
25040: 97ec                      MOVE   *SP+,A12,1
25050: 0960                      RETS   

FD$ITOF:
25060: a38f                      MOVE   A12,-*SP,1
25070: 07ac 0000 0000            MOVE   @0h,A12,1
250a0: ca0a                      JREQ   25150h
250b0: 0628 4c00 0000            CMOVGC A8,00004C,0
250e0: d83e 00c0                 CEXEC  0,00181F,0
25100: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
25130: 97ec                      MOVE   *SP+,A12,1
25140: 0960                      RETS   
25150: 098f c000                 MMTM   SP,A0,A1
25170: 5600                      CLR    A0
25180: 0388                      ABS    A8
25190: ca18                      JREQ   25320h
251a0: c402                      JRLT   251D0h
251b0: 1820                      MOVK   1h,A0
251c0: 27e0                      SLL    1Fh,A0
251d0: 6b01                      LMO    A8,A1
251e0: 1021                      INC    A1
251f0: 0b41 ffdf                 CMPI   20h,A1
25210: cb02                      JRNE   25240h
25220: 5708                      CLR    A8
25230: c001                      JR     25250h
25240: 6228                      SLL    A1,A8
25250: 03a1                      NEG    A1
25260: 2ee8                      SRL    9h,A8
25270: c905                      JRNC   252D0h
25280: 1028                      INC    A8
25290: 1d08                      BTST   17h,A8
252a0: ca02                      JREQ   252D0h
252b0: 1021                      INC    A1
252c0: 2fe8                      SRL    1h,A8
252d0: 0b01 009f                 ADDI   9Fh,A1
252f0: 26e1                      SLL    17h,A1
25300: 5420                      OR     A1,A0
25310: 5500                      OR     A8,A0
25320: 920e                      MOVE   A0,*A14+,1
25330: 09af 0003                 MMFM   SP,A0,A1
25350: 97ec                      MOVE   *SP+,A12,1
25360: 0960                      RETS   
25370: 0000                      DW     0000h
25380: 0000                      DW     0000h
25390: 41f0                      ADD    SP,B0
253a0: 0000                      DW     0000h
253b0: 0000                      DW     0000h

FD$UTOD:
253c0: a38f                      MOVE   A12,-*SP,1
253d0: 07ac 0000 0000            MOVE   @0h,A12,1
25400: ca1a                      JREQ   255B0h
25410: 0628 4c00 0000            CMOVGC A8,00004C,0
25440: d83f 00c0                 CEXEC  1,00181F,0
25460: d807 1bb0                 CEXEC  1,037603,0
25480: d80b 0000                 CEXEC  1,000005,0
254a0: 0660 4e01 000c            CMOVCS ,000C4E,0
254d0: cf08                      JRNN   25560h
254e0: 09ec 5380 0002            MOVI   25380h,A12
25510: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
25540: d803 0000                 CEXEC  1,000001,0
25560: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
25590: 97ec                      MOVE   *SP+,A12,1
255a0: 0960                      RETS   
255b0: 098f c000                 MMTM   SP,A0,A1
255d0: 5600                      CLR    A0
255e0: 4d08                      MOVE   A8,A8
255f0: ca17                      JREQ   25770h
25600: 6b01                      LMO    A8,A1
25610: 1021                      INC    A1
25620: 0b41 ffdf                 CMPI   20h,A1
25640: cb02                      JRNE   25670h
25650: 5708                      CLR    A8
25660: c001                      JR     25680h
25670: 6228                      SLL    A1,A8
25680: 03a1                      NEG    A1
25690: 0b01 041f                 ADDI   41Fh,A1
256b0: 2681                      SLL    14h,A1
256c0: 5420                      OR     A1,A0
256d0: 4d01                      MOVE   A8,A1
256e0: 2681                      SLL    14h,A1
256f0: 2e88                      SRL    Ch,A8
25700: 5500                      OR     A8,A0
25710: 920e                      MOVE   A0,*A14+,1
25720: 922e                      MOVE   A1,*A14+,1
25730: 09af 0003                 MMFM   SP,A0,A1
25750: 97ec                      MOVE   *SP+,A12,1
25760: 0960                      RETS   
25770: 5600                      CLR    A0
25780: 920e                      MOVE   A0,*A14+,1
25790: 920e                      MOVE   A0,*A14+,1
257a0: 09af 0003                 MMFM   SP,A0,A1
257c0: 97ec                      MOVE   *SP+,A12,1
257d0: 0960                      RETS   
257e0: 0000                      DW     0000h
257f0: 4f80                      MOVE   A12,B0

FD$UTOF:
25800: a38f                      MOVE   A12,-*SP,1
25810: 07ac 0000 0000            MOVE   @0h,A12,1
25840: ca1a                      JREQ   259F0h
25850: 0628 4c00 0000            CMOVGC A8,00004C,0
25880: d83e 00c0                 CEXEC  0,00181F,0
258a0: d806 1bb0                 CEXEC  0,037603,0
258c0: d80a 0000                 CEXEC  0,000005,0
258e0: 0660 4e01 000c            CMOVCS ,000C4E,0
25910: cf08                      JRNN   259A0h
25920: 09ec 57e0 0002            MOVI   257E0h,A12
25950: 0681 8d0c 0010            CMOVMC *A12+,1,0,00108D,0
25980: d802 0000                 CEXEC  0,000001,0
259a0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
259d0: 97ec                      MOVE   *SP+,A12,1
259e0: 0960                      RETS   
259f0: 098f c000                 MMTM   SP,A0,A1
25a10: 5600                      CLR    A0
25a20: 4d08                      MOVE   A8,A8
25a30: ca15                      JREQ   25B90h
25a40: 6b01                      LMO    A8,A1
25a50: 1021                      INC    A1
25a60: 0b41 ffdf                 CMPI   20h,A1
25a80: cb02                      JRNE   25AB0h
25a90: 5708                      CLR    A8
25aa0: c001                      JR     25AC0h
25ab0: 6228                      SLL    A1,A8
25ac0: 03a1                      NEG    A1
25ad0: 2ee8                      SRL    9h,A8
25ae0: c905                      JRNC   25B40h
25af0: 1028                      INC    A8
25b00: 1d08                      BTST   17h,A8
25b10: ca02                      JREQ   25B40h
25b20: 1021                      INC    A1
25b30: 2fe8                      SRL    1h,A8
25b40: 0b01 009f                 ADDI   9Fh,A1
25b60: 26e1                      SLL    17h,A1
25b70: 5420                      OR     A1,A0
25b80: 5500                      OR     A8,A0
25b90: 920e                      MOVE   A0,*A14+,1
25ba0: 09af 0003                 MMFM   SP,A0,A1
25bc0: 97ec                      MOVE   *SP+,A12,1
25bd0: 0960                      RETS   

FD$ABS:
25be0: b7c8 ffc0                 MOVE   *A14(FFC0h),A8,1
25c00: 0b88 0000 8000            ANDI   7FFFFFFFh,A8
25c30: b30e ffc0                 MOVE   A8,*A14(FFC0h),1
25c50: 0960                      RETS   

FD$SUB_R:
25c60: 07a8 0000 0000            MOVE   @0h,A8,1
25c90: ca3f                      JREQ   26090h
25ca0: 4dc8                      MOVE   A14,A8
25cb0: 0be8 ff7f                 SUBI   80h,A8
25cd0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
25d00: d83f 0060                 CEXEC  1,000C1F,0
25d20: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
25d50: 0bee ff7f                 SUBI   80h,A14
25d70: d803 0000                 CEXEC  1,000001,0
25d90: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
25dc0: 0960                      RETS   

FD$SUB:
25dd0: 07a8 0000 0000            MOVE   @0h,A8,1
25e00: ca32                      JREQ   26130h
25e10: 4dc8                      MOVE   A14,A8
25e20: 0be8 ff7f                 SUBI   80h,A8
25e40: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
25e70: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
25ea0: d83f 0060                 CEXEC  1,000C1F,0
25ec0: 0bee ff7f                 SUBI   80h,A14
25ee0: d803 0000                 CEXEC  1,000001,0
25f00: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
25f30: 0960                      RETS   

FD$ADD:
25f40: 07a8 0000 0000            MOVE   @0h,A8,1
25f70: ca23                      JREQ   261B0h
25f80: 4dc8                      MOVE   A14,A8
25f90: 0be8 ff7f                 SUBI   80h,A8
25fb0: 0682 8d88 0010            CMOVMC *A8+,2,1,00108D,0
25fe0: 0682 8d88 0000            CMOVMC *A8+,2,1,00008D,0
26010: 0bee ff7f                 SUBI   80h,A14
26030: d803 0000                 CEXEC  1,000001,0
26050: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
26080: 0960                      RETS   
26090: 098f ff00                 MMTM   SP,A0-A7
260b0: a7c4                      MOVE   -*A14,A4,1
260c0: a7c3                      MOVE   -*A14,A3,1
260d0: a7c6                      MOVE   -*A14,A6,1
260e0: a7c5                      MOVE   -*A14,A5,1
260f0: 0bc5 0000 8000            XORI   80000000h,A5
26120: c00e                      JR     26210h
26130: 098f ff00                 MMTM   SP,A0-A7
26150: a7c6                      MOVE   -*A14,A6,1
26160: a7c5                      MOVE   -*A14,A5,1
26170: 0bc5 0000 8000            XORI   80000000h,A5
261a0: c004                      JR     261F0h
261b0: 098f ff00                 MMTM   SP,A0-A7
261d0: a7c6                      MOVE   -*A14,A6,1
261e0: a7c5                      MOVE   -*A14,A5,1
261f0: a7c4                      MOVE   -*A14,A4,1
26200: a7c3                      MOVE   -*A14,A3,1
26210: 4c61                      MOVE   A3,A1
26220: 2421                      SLL    1h,A1
26230: ca00 00a8                 JREQ   26CD0h
26250: 4ca2                      MOVE   A5,A2
26260: 2422                      SLL    1h,A2
26270: ca00 009c                 JREQ   26C50h
26290: 4c61                      MOVE   A3,A1
262a0: 4ca2                      MOVE   A5,A2
262b0: 2583                      SLL    Ch,A3
262c0: 2fa3                      SRL    3h,A3
262d0: 0ba3 0000 2000            ORI    20000000h,A3
26300: 4c88                      MOVE   A4,A8
26310: ca03                      JREQ   26350h
26320: 2d28                      SRL    17h,A8
26330: 5503                      OR     A8,A3
26340: 2524                      SLL    9h,A4
26350: 2585                      SLL    Ch,A5
26360: 2fa5                      SRL    3h,A5
26370: 0ba5 0000 2000            ORI    20000000h,A5
263a0: 4cc8                      MOVE   A6,A8
263b0: ca03                      JREQ   263F0h
263c0: 2d28                      SRL    17h,A8
263d0: 5505                      OR     A8,A5
263e0: 2526                      SLL    9h,A6
263f0: 2421                      SLL    1h,A1
26400: 4600                      SUBB   A0,A0
26410: 2422                      SLL    1h,A2
26420: 4708                      SUBB   A8,A8
26430: 2d61                      SRL    15h,A1
26440: 2d62                      SRL    15h,A2
26450: 09c7 07ff                 MOVI   7FFh,A7
26470: 48e1                      CMP    A7,A1
26480: ca00 0086                 JREQ   26D00h
264a0: 48e2                      CMP    A7,A2
264b0: ca00 0088                 JREQ   26D50h
264d0: 4441                      SUB    A2,A1
264e0: ca03                      JREQ   26520h
264f0: c608                      JRLE   26580h
26500: 4022                      ADD    A1,A2
26510: c010                      JR     26620h
26520: 4865                      CMP    A3,A5
26530: c40e                      JRLT   26620h
26540: c704                      JRGT   26590h
26550: 4886                      CMP    A4,A6
26560: c20b                      JRLS   26620h
26570: c004                      JR     265C0h
26580: 03a1                      NEG    A1
26590: 4c67                      MOVE   A3,A7
265a0: 4ca3                      MOVE   A5,A3
265b0: 4ce5                      MOVE   A7,A5
265c0: 4c87                      MOVE   A4,A7
265d0: 4cc4                      MOVE   A6,A4
265e0: 4ce6                      MOVE   A7,A6
265f0: 4c07                      MOVE   A0,A7
26600: 4d00                      MOVE   A8,A0
26610: 4ce8                      MOVE   A7,A8
26620: 4c21                      MOVE   A1,A1
26630: ca18                      JREQ   267C0h
26640: 0b41 ffe1                 CMPI   1Eh,A1
26660: c40e                      JRLT   26750h
26670: 0b41 ffc2                 CMPI   3Dh,A1
26690: c708                      JRGT   26720h
266a0: 17c1                      SUBK   1Eh,A1
266b0: 2445                      SLL    2h,A5
266c0: 2c46                      SRL    1Eh,A6
266d0: 54a6                      OR     A5,A6
266e0: 56a5                      CLR    A5
266f0: 03a1                      NEG    A1
26700: 6626                      SRL    A1,A6
26710: c00a                      JR     267C0h
26720: 56a5                      CLR    A5
26730: 56c6                      CLR    A6
26740: c007                      JR     267C0h
26750: 4ca7                      MOVE   A5,A7
26760: 03a1                      NEG    A1
26770: 6625                      SRL    A1,A5
26780: 6626                      SRL    A1,A6
26790: 1001                      ADDK   20h,A1
267a0: 6227                      SLL    A1,A7
267b0: 54e6                      OR     A7,A6
267c0: 4808                      CMP    A0,A8
267d0: ca27                      JREQ   26A50h
267e0: 44c4                      SUB    A6,A4
267f0: 46a3                      SUBB   A5,A3
26800: 6a67                      LMO    A3,A7
26810: ca0a                      JREQ   268C0h
26820: 1447                      SUBK   2h,A7
26830: ca10                      JREQ   26940h
26840: 44e2                      SUB    A7,A2
26850: 62e3                      SLL    A7,A3
26860: 4c81                      MOVE   A4,A1
26870: 62e4                      SLL    A7,A4
26880: 1407                      SUBK   20h,A7
26890: 66e1                      SRL    A7,A1
268a0: 5423                      OR     A1,A3
268b0: c008                      JR     26940h
268c0: 6a87                      LMO    A4,A7
268d0: ca3c                      JREQ   26CA0h
268e0: 17c2                      SUBK   1Eh,A2
268f0: 68e4                      RL     A7,A4
26900: 4c83                      MOVE   A4,A3
26910: 2fc3                      SRL    2h,A3
26920: 27c4                      SLL    1Eh,A4
26930: 44e2                      SUB    A7,A2
26940: 56e7                      CLR    A7
26950: 1ee4                      BTST   8h,A4
26960: ca07                      JREQ   269E0h
26970: 0b04 0100                 ADDI   100h,A4
26990: 42e3                      ADDC   A7,A3
269a0: 1c23                      BTST   1Eh,A3
269b0: ca02                      JREQ   269E0h
269c0: 1022                      INC    A2
269d0: c003                      JR     26A10h
269e0: 2423                      SLL    1h,A3
269f0: 2424                      SLL    1h,A4
26a00: 42e3                      ADDC   A7,A3
26a10: 0b83 0000 c000            ANDI   3FFFFFFFh,A3
26a40: c00c                      JR     26B10h
26a50: 40c4                      ADD    A6,A4
26a60: 42a3                      ADDC   A5,A3
26a70: 1c23                      BTST   1Eh,A3
26a80: caeb                      JREQ   26940h
26a90: 1022                      INC    A2
26aa0: 2fe4                      SRL    1h,A4
26ab0: 2fe3                      SRL    1h,A3
26ac0: c9e7                      JRNC   26940h
26ad0: 0ba4 0000 8000            ORI    80000000h,A4
26b00: c0e3                      JR     26940h
26b10: 4c42                      MOVE   A2,A2
26b20: c437                      JRLT   26EA0h
26b30: cb05                      JRNE   26B90h
26b40: 4c63                      MOVE   A3,A3
26b50: cb34                      JRNE   26EA0h
26b60: 4c84                      MOVE   A4,A4
26b70: cb32                      JRNE   26EA0h
26b80: c011                      JR     26CA0h
26b90: 0b42 f800                 CMPI   7FFh,A2
26bb0: c527                      JRGE   26E30h
26bc0: 4c68                      MOVE   A3,A8
26bd0: 2ec3                      SRL    Ah,A3
26be0: 2ec4                      SRL    Ah,A4
26bf0: 26c8                      SLL    16h,A8
26c00: 5504                      OR     A8,A4
26c10: 27e0                      SLL    1Fh,A0
26c20: 2682                      SLL    14h,A2
26c30: 5443                      OR     A2,A3
26c40: 5403                      OR     A0,A3
26c50: 926e                      MOVE   A3,*A14+,1
26c60: 928e                      MOVE   A4,*A14+,1
26c70: 09af 00ff                 MMFM   SP,A0-A7
26c90: 0960                      RETS   
26ca0: 5663                      CLR    A3
26cb0: 5684                      CLR    A4
26cc0: c0f8                      JR     26C50h
26cd0: 4ca3                      MOVE   A5,A3
26ce0: 4cc4                      MOVE   A6,A4
26cf0: c0f5                      JR     26C50h
26d00: 48e2                      CMP    A7,A2
26d10: cb04                      JRNE   26D60h
26d20: 4808                      CMP    A0,A8
26d30: cb0c                      JRNE   26E00h
26d40: c001                      JR     26D60h
26d50: 4d00                      MOVE   A8,A0
26d60: 5621                      CLR    A1
26d70: 27e0                      SLL    1Fh,A0
26d80: 0ba0 0000 7ff0            ORI    7FF00000h,A0
26db0: 920e                      MOVE   A0,*A14+,1
26dc0: 922e                      MOVE   A1,*A14+,1
26dd0: 09af 00ff                 MMFM   SP,A0-A7
26df0: 0960                      RETS   
26e00: 5663                      CLR    A3
26e10: 1880                      MOVK   4h,A0
26e20: c009                      JR     26EC0h
26e30: 4c03                      MOVE   A0,A3
26e40: 27e3                      SLL    1Fh,A3
26e50: 0ba3 0000 7ff0            ORI    7FF00000h,A3
26e80: 18a0                      MOVK   5h,A0
26e90: c002                      JR     26EC0h
26ea0: 1980                      MOVK   Ch,A0
26eb0: 5663                      CLR    A3
26ec0: a3cf                      MOVE   A14,-*SP,1
26ed0: 920e                      MOVE   A0,*A14+,1
26ee0: 0d5f bf90 0002            CALLA  2BF90h
26f10: 5621                      CLR    A1
26f20: 926e                      MOVE   A3,*A14+,1
26f30: 922e                      MOVE   A1,*A14+,1
26f40: 09af 00ff                 MMFM   SP,A0-A7
26f60: 0960                      RETS   

FD$LE:
26f70: 1828                      MOVK   1h,A8
26f80: c005                      JR     26FE0h

FD$LT:
26f90: 1848                      MOVK   2h,A8
26fa0: c003                      JR     26FE0h

FD$GE:
26fb0: 1868                      MOVK   3h,A8
26fc0: c001                      JR     26FE0h

FD$GT:
26fd0: 1888                      MOVK   4h,A8
26fe0: a38f                      MOVE   A12,-*SP,1
26ff0: 07ac 0000 0000            MOVE   @0h,A12,1
27020: ca20                      JREQ   27230h
27030: 098f 6000                 MMTM   SP,A1,A2
27050: 4dc1                      MOVE   A14,A1
27060: 0be1 ff7f                 SUBI   80h,A1
27080: 0682 8d81 0000            CMOVMC *A1+,2,1,00008D,0
270b0: 0682 8d81 0010            CMOVMC *A1+,2,1,00108D,0
270e0: 0bee ff7f                 SUBI   80h,A14
27100: d80b 0000                 CEXEC  1,000005,0
27120: 0660 4e01 000c            CMOVCS ,000C4E,0
27150: 18a2                      MOVK   5h,A2
27160: ca03                      JREQ   271A0h
27170: 1862                      MOVK   3h,A2
27180: ce01                      JRN    271A0h
27190: 1982                      MOVK   Ch,A2
271a0: 03a8                      NEG    A8
271b0: 6702                      SRL    A8,A2
271c0: 4708                      SUBB   A8,A8
271d0: 2c28                      SRL    1Fh,A8
271e0: 09af 0006                 MMFM   SP,A1,A2
27200: 97ec                      MOVE   *SP+,A12,1
27210: 4d08                      MOVE   A8,A8
27220: 0960                      RETS   
27230: 098f b800                 MMTM   SP,A0,A2-A4
27250: a7c2                      MOVE   -*A14,A2,1
27260: a7c0                      MOVE   -*A14,A0,1
27270: a7c3                      MOVE   -*A14,A3,1
27280: a7c4                      MOVE   -*A14,A4,1
27290: 4804                      CMP    A0,A4
272a0: ca14                      JREQ   273F0h
272b0: 1862                      MOVK   3h,A2
272c0: c401                      JRLT   272E0h
272d0: 1982                      MOVK   Ch,A2
272e0: 2420                      SLL    1h,A0
272f0: c906                      JRNC   27360h
27300: 2424                      SLL    1h,A4
27310: c904                      JRNC   27360h
27320: 4804                      CMP    A0,A4
27330: 1862                      MOVK   3h,A2
27340: c301                      JRHI   27360h
27350: 1982                      MOVK   Ch,A2
27360: 03a8                      NEG    A8
27370: 6702                      SRL    A8,A2
27380: 4708                      SUBB   A8,A8
27390: 2c28                      SRL    1Fh,A8
273a0: 09af 001d                 MMFM   SP,A0,A2-A4
273c0: 97ec                      MOVE   *SP+,A12,1
273d0: 4d08                      MOVE   A8,A8
273e0: 0960                      RETS   
273f0: 4843                      CMP    A2,A3
27400: 18a2                      MOVK   5h,A2
27410: ca06                      JREQ   27480h
27420: 1862                      MOVK   3h,A2
27430: c801                      JRC    27450h
27440: 1982                      MOVK   Ch,A2
27450: 2420                      SLL    1h,A0
27460: c901                      JRNC   27480h
27470: 03e2                      NOT    A2
27480: 03a8                      NEG    A8
27490: 6702                      SRL    A8,A2
274a0: 4708                      SUBB   A8,A8
274b0: 2c28                      SRL    1Fh,A8
274c0: 09af 001d                 MMFM   SP,A0,A2-A4
274e0: 97ec                      MOVE   *SP+,A12,1
274f0: 4d08                      MOVE   A8,A8
27500: 0960                      RETS   

FD$DIV_R:
27510: 07a8 0000 0000            MOVE   @0h,A8,1
27540: ca2a                      JREQ   277F0h
27550: a38f                      MOVE   A12,-*SP,1
27560: 4dcc                      MOVE   A14,A12
27570: 0bec ff7f                 SUBI   80h,A12
27590: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
275c0: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
275f0: 0bee ff7f                 SUBI   80h,A14
27610: d827 0000                 CEXEC  1,000013,0
27630: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
27660: 97ec                      MOVE   *SP+,A12,1
27670: 0960                      RETS   

FD$DIV:
27680: 07a8 0000 0000            MOVE   @0h,A8,1
276b0: ca1a                      JREQ   27860h
276c0: a38f                      MOVE   A12,-*SP,1
276d0: 4dcc                      MOVE   A14,A12
276e0: 0bec ff7f                 SUBI   80h,A12
27700: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
27730: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
27760: 0bee ff7f                 SUBI   80h,A14
27780: d827 0000                 CEXEC  1,000013,0
277a0: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
277d0: 97ec                      MOVE   *SP+,A12,1
277e0: 0960                      RETS   
277f0: 098f ff40                 MMTM   SP,A0-A7,A9
27810: a7c1                      MOVE   -*A14,A1,1
27820: a7c4                      MOVE   -*A14,A4,1
27830: a7c3                      MOVE   -*A14,A3,1
27840: a7c5                      MOVE   -*A14,A5,1
27850: c006                      JR     278C0h
27860: 098f ff40                 MMTM   SP,A0-A7,A9
27880: a7c3                      MOVE   -*A14,A3,1
27890: a7c5                      MOVE   -*A14,A5,1
278a0: a7c1                      MOVE   -*A14,A1,1
278b0: a7c4                      MOVE   -*A14,A4,1
278c0: 4c28                      MOVE   A1,A8
278d0: 24e1                      SLL    7h,A1
278e0: 2ce8                      SRL    19h,A8
278f0: 4c80                      MOVE   A4,A0
27900: 2580                      SLL    Ch,A0
27910: 2f60                      SRL    5h,A0
27920: 0ba0 0000 0800            ORI    8000000h,A0
27950: 5500                      OR     A8,A0
27960: 4c68                      MOVE   A3,A8
27970: 2563                      SLL    Bh,A3
27980: 2d68                      SRL    15h,A8
27990: 4ca2                      MOVE   A5,A2
279a0: 2582                      SLL    Ch,A2
279b0: 2fe2                      SRL    1h,A2
279c0: 0ba2 0000 8000            ORI    80000000h,A2
279f0: 5502                      OR     A8,A2
27a00: 2424                      SLL    1h,A4
27a10: 4729                      SUBB   A9,A9
27a20: 2425                      SLL    1h,A5
27a30: 4708                      SUBB   A8,A8
27a40: 5709                      XOR    A8,A9
27a50: 27e9                      SLL    1Fh,A9
27a60: 2d64                      SRL    15h,A4
27a70: 2d65                      SRL    15h,A5
27a80: ca56                      JREQ   27FF0h
27a90: 0b45 f800                 CMPI   7FFh,A5
27ab0: cb03                      JRNE   27AF0h
27ac0: 48a4                      CMP    A5,A4
27ad0: ca56                      JREQ   28040h
27ae0: c042                      JR     27F10h
27af0: 0b44 f800                 CMPI   7FFh,A4
27b10: ca32                      JREQ   27E40h
27b20: 4c84                      MOVE   A4,A4
27b30: ca3d                      JREQ   27F10h
27b40: 5708                      CLR    A8
27b50: 5a40                      DIVU   A2,A0
27b60: 4c26                      MOVE   A1,A6
27b70: 56e7                      CLR    A7
27b80: 5a46                      DIVU   A2,A6
27b90: 4cc1                      MOVE   A6,A1
27ba0: 4c06                      MOVE   A0,A6
27bb0: 5e66                      MPYU   A3,A6
27bc0: 5a46                      DIVU   A2,A6
27bd0: 44c1                      SUB    A6,A1
27be0: 4700                      SUBB   A8,A0
27bf0: 1c60                      BTST   1Ch,A0
27c00: ca07                      JREQ   27C80h
27c10: 1425                      DEC    A5
27c20: 2fe1                      SRL    1h,A1
27c30: 2fe0                      SRL    1h,A0
27c40: c903                      JRNC   27C80h
27c50: 0ba1 0000 8000            ORI    80000000h,A1
27c80: 1f21                      BTST   6h,A1
27c90: ca07                      JREQ   27D10h
27ca0: 0b01 0040                 ADDI   40h,A1
27cc0: 4300                      ADDC   A8,A0
27cd0: 1c60                      BTST   1Ch,A0
27ce0: ca02                      JREQ   27D10h
27cf0: 1425                      DEC    A5
27d00: c004                      JR     27D50h
27d10: 1025                      INC    A5
27d20: 2420                      SLL    1h,A0
27d30: 2421                      SLL    1h,A1
27d40: 4300                      ADDC   A8,A0
27d50: 0b80 0000 f000            ANDI   FFFFFFFh,A0
27d80: 4c86                      MOVE   A4,A6
27d90: 44a4                      SUB    A5,A4
27da0: 0b04 03ff                 ADDI   3FFh,A4
27dc0: c61f                      JRLE   27FC0h
27dd0: 0b44 f800                 CMPI   7FFh,A4
27df0: c404                      JRLT   27E40h
27e00: 09c4 07ff                 MOVI   7FFh,A4
27e20: 48c4                      CMP    A6,A4
27e30: cb13                      JRNE   27F70h
27e40: 4c08                      MOVE   A0,A8
27e50: 2f00                      SRL    8h,A0
27e60: 2f01                      SRL    8h,A1
27e70: 2708                      SLL    18h,A8
27e80: 5501                      OR     A8,A1
27e90: 2684                      SLL    14h,A4
27ea0: 5524                      OR     A9,A4
27eb0: 5480                      OR     A4,A0
27ec0: 920e                      MOVE   A0,*A14+,1
27ed0: 922e                      MOVE   A1,*A14+,1
27ee0: 09af 02ff                 MMFM   SP,A0-A7,A9
27f00: 0960                      RETS   
27f10: 56c6                      CLR    A6
27f20: 92ce                      MOVE   A6,*A14+,1
27f30: 92ce                      MOVE   A6,*A14+,1
27f40: 09af 02ff                 MMFM   SP,A0-A7,A9
27f60: 0960                      RETS   
27f70: 0ba9 0000 7ff0            ORI    7FF00000h,A9
27fa0: 18e0                      MOVK   7h,A0
27fb0: c00c                      JR     28080h
27fc0: 5729                      CLR    A9
27fd0: 19c0                      MOVK   Eh,A0
27fe0: c009                      JR     28080h
27ff0: 0ba9 0000 7ff0            ORI    7FF00000h,A9
28020: 19e0                      MOVK   Fh,A0
28030: c004                      JR     28080h
28040: 0ba9 0000 3ff0            ORI    3FF00000h,A9
28070: 1a00                      MOVK   10h,A0
28080: a3cf                      MOVE   A14,-*SP,1
28090: 920e                      MOVE   A0,*A14+,1
280a0: 0d5f bf90 0002            CALLA  2BF90h
280d0: 56a5                      CLR    A5
280e0: 932e                      MOVE   A9,*A14+,1
280f0: 92ae                      MOVE   A5,*A14+,1
28100: 09af 02ff                 MMFM   SP,A0-A7,A9
28120: 0960                      RETS   

FD$MUL:
28130: 07a8 0000 0000            MOVE   @0h,A8,1
28160: ca13                      JREQ   282A0h
28170: a38f                      MOVE   A12,-*SP,1
28180: 4dcc                      MOVE   A14,A12
28190: 0bec ff7f                 SUBI   80h,A12
281b0: 0682 8d8c 0010            CMOVMC *A12+,2,1,00108D,0
281e0: 0682 8d8c 0000            CMOVMC *A12+,2,1,00008D,0
28210: 0bee ff7f                 SUBI   80h,A14
28230: d823 0000                 CEXEC  1,000011,0
28250: 06ae 8f82 0000            CMOVCM *A14+,2,1,00008F,0
28280: 97ec                      MOVE   *SP+,A12,1
28290: 0960                      RETS   
282a0: 098f ff70                 MMTM   SP,A0-A7,A9-A11
282c0: a7c1                      MOVE   -*A14,A1,1
282d0: a7c0                      MOVE   -*A14,A0,1
282e0: a7c3                      MOVE   -*A14,A3,1
282f0: a7c2                      MOVE   -*A14,A2,1
28300: 56a5                      CLR    A5
28310: 4c00                      MOVE   A0,A0
28320: ca5f                      JREQ   28920h
28330: 4c42                      MOVE   A2,A2
28340: ca5d                      JREQ   28920h
28350: 4c08                      MOVE   A0,A8
28360: 4c4b                      MOVE   A2,A11
28370: 242b                      SLL    1h,A11
28380: 474a                      SUBB   A10,A10
28390: 2428                      SLL    1h,A8
283a0: 46a5                      SUBB   A5,A5
283b0: 56aa                      XOR    A5,A10
283c0: 27ea                      SLL    1Fh,A10
283d0: 2d68                      SRL    15h,A8
283e0: 2d6b                      SRL    15h,A11
283f0: 0b4b f800                 CMPI   7FFh,A11
28410: ca56                      JREQ   28980h
28420: 0b48 f800                 CMPI   7FFh,A8
28440: ca52                      JREQ   28970h
28450: 410b                      ADD    A8,A11
28460: 0beb fc00                 SUBI   3FFh,A11
28480: 4c68                      MOVE   A3,A8
28490: 2563                      SLL    Bh,A3
284a0: 2562                      SLL    Bh,A2
284b0: 0ba2 0000 8000            ORI    80000000h,A2
284e0: 2d68                      SRL    15h,A8
284f0: 5502                      OR     A8,A2
28500: 4c28                      MOVE   A1,A8
28510: 2560                      SLL    Bh,A0
28520: 2561                      SLL    Bh,A1
28530: 0ba0 0000 8000            ORI    80000000h,A0
28560: 2d68                      SRL    15h,A8
28570: 5500                      OR     A8,A0
28580: 4c08                      MOVE   A0,A8
28590: 4c26                      MOVE   A1,A6
285a0: 4c24                      MOVE   A1,A4
285b0: 5e40                      MPYU   A2,A0
285c0: 5e68                      MPYU   A3,A8
285d0: 5e46                      MPYU   A2,A6
285e0: 5e64                      MPYU   A3,A4
285f0: 56a5                      CLR    A5
28600: 4d22                      MOVE   A9,A2
28610: 4101                      ADD    A8,A1
28620: 42a0                      ADDC   A5,A0
28630: 40e2                      ADD    A7,A2
28640: 42c1                      ADDC   A6,A1
28650: 42a0                      ADDC   A5,A0
28660: 4082                      ADD    A4,A2
28670: 42a1                      ADDC   A5,A1
28680: 42a0                      ADDC   A5,A0
28690: ca28                      JREQ   28920h
286a0: 102b                      INC    A11
286b0: 1c00                      BTST   1Fh,A0
286c0: cb04                      JRNE   28710h
286d0: 142b                      DEC    A11
286e0: 2420                      SLL    1h,A0
286f0: 2421                      SLL    1h,A1
28700: 42a0                      ADDC   A5,A0
28710: 1ea1                      BTST   Ah,A1
28720: ca06                      JREQ   28790h
28730: 0b01 0400                 ADDI   400h,A1
28750: 42a0                      ADDC   A5,A0
28760: c902                      JRNC   28790h
28770: 102b                      INC    A11
28780: c003                      JR     287C0h
28790: 2420                      SLL    1h,A0
287a0: 2421                      SLL    1h,A1
287b0: 42a0                      ADDC   A5,A0
287c0: 4d6b                      MOVE   A11,A11
287d0: c42a                      JRLT   28A80h
287e0: ca10                      JREQ   288F0h
287f0: 0b4b f800                 CMPI   7FFh,A11
28810: c51d                      JRGE   289F0h
28820: 4c05                      MOVE   A0,A5
28830: 2685                      SLL    14h,A5
28840: 2e81                      SRL    Ch,A1
28850: 2e80                      SRL    Ch,A0
28860: 54a1                      OR     A5,A1
28870: 268b                      SLL    14h,A11
28880: 5560                      OR     A11,A0
28890: 5540                      OR     A10,A0
288a0: 920e                      MOVE   A0,*A14+,1
288b0: 922e                      MOVE   A1,*A14+,1
288c0: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
288e0: 0960                      RETS   
288f0: 4c00                      MOVE   A0,A0
28900: cb17                      JRNE   28A80h
28910: c0f0                      JR     28820h
28920: 92ae                      MOVE   A5,*A14+,1
28930: 92ae                      MOVE   A5,*A14+,1
28940: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
28960: 0960                      RETS   
28970: 4d68                      MOVE   A11,A8
28980: 4d08                      MOVE   A8,A8
28990: ca0b                      JREQ   28A50h
289a0: 09e0 0000 7ff0            MOVI   7FF00000h,A0
289d0: 5621                      CLR    A1
289e0: c0ea                      JR     28890h
289f0: 09e3 0000 7ff0            MOVI   7FF00000h,A3
28a20: 5543                      OR     A10,A3
28a30: 18c0                      MOVK   6h,A0
28a40: c005                      JR     28AA0h
28a50: 5663                      CLR    A3
28a60: 1960                      MOVK   Bh,A0
28a70: c002                      JR     28AA0h
28a80: 5663                      CLR    A3
28a90: 19a0                      MOVK   Dh,A0
28aa0: a3cf                      MOVE   A14,-*SP,1
28ab0: 920e                      MOVE   A0,*A14+,1
28ac0: 0d5f bf90 0002            CALLA  2BF90h
28af0: 5600                      CLR    A0
28b00: 926e                      MOVE   A3,*A14+,1
28b10: 920e                      MOVE   A0,*A14+,1
28b20: 09af 0eff                 MMFM   SP,A0-A7,A9-A11
28b40: 0960                      RETS   

FS$ABS:
28b50: a7c8                      MOVE   -*A14,A8,1
28b60: 0b88 0000 8000            ANDI   7FFFFFFFh,A8
28b90: 930e                      MOVE   A8,*A14+,1
28ba0: 0960                      RETS   

FS$SUB_R:
28bb0: 07a8 0000 0000            MOVE   @0h,A8,1
28be0: ca30                      JREQ   28EF0h
28bf0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
28c20: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
28c50: d83e 0060                 CEXEC  0,000C1F,0
28c70: d802 0000                 CEXEC  0,000001,0
28c90: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
28cc0: 0960                      RETS   

FS$SUB:
28cd0: 07a8 0000 0000            MOVE   @0h,A8,1
28d00: ca26                      JREQ   28F70h
28d10: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
28d40: d83e 0060                 CEXEC  0,000C1F,0
28d60: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
28d90: d802 0000                 CEXEC  0,000001,0
28db0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
28de0: 0960                      RETS   

FS$ADD:
28df0: 07a8 0000 0000            MOVE   @0h,A8,1
28e20: ca1b                      JREQ   28FE0h
28e30: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
28e60: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
28e90: d802 0000                 CEXEC  0,000001,0
28eb0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
28ee0: 0960                      RETS   
28ef0: 098f fa00                 MMTM   SP,A0-A4,A6
28f10: a7c6                      MOVE   -*A14,A6,1
28f20: a7c8                      MOVE   -*A14,A8,1
28f30: 0bc8 0000 8000            XORI   80000000h,A8
28f60: c00b                      JR     29020h
28f70: 098f fa00                 MMTM   SP,A0-A4,A6
28f90: a7c8                      MOVE   -*A14,A8,1
28fa0: 0bc8 0000 8000            XORI   80000000h,A8
28fd0: c003                      JR     29010h
28fe0: 098f fa00                 MMTM   SP,A0-A4,A6
29000: a7c8                      MOVE   -*A14,A8,1
29010: a7c6                      MOVE   -*A14,A6,1
29020: 4cc3                      MOVE   A6,A3
29030: 2423                      SLL    1h,A3
29040: ca59                      JREQ   295E0h
29050: 4d02                      MOVE   A8,A2
29060: 2422                      SLL    1h,A2
29070: ca5a                      JREQ   29620h
29080: 2428                      SLL    1h,A8
29090: 4600                      SUBB   A0,A0
290a0: 27e0                      SLL    1Fh,A0
290b0: 2426                      SLL    1h,A6
290c0: 4621                      SUBB   A1,A1
290d0: 27e1                      SLL    1Fh,A1
290e0: 2d02                      SRL    18h,A2
290f0: 2d03                      SRL    18h,A3
29100: 2508                      SLL    8h,A8
29110: 2fa8                      SRL    3h,A8
29120: 0ba8 0000 2000            ORI    20000000h,A8
29150: 2506                      SLL    8h,A6
29160: 2fa6                      SRL    3h,A6
29170: 0ba6 0000 2000            ORI    20000000h,A6
291a0: 0b42 ff00                 CMPI   FFh,A2
291c0: ca4b                      JREQ   29680h
291d0: 0b43 ff00                 CMPI   FFh,A3
291f0: ca4e                      JREQ   296E0h
29200: 4462                      SUB    A3,A2
29210: ca03                      JREQ   29250h
29220: c605                      JRLE   29280h
29230: 4043                      ADD    A2,A3
29240: c00c                      JR     29310h
29250: 4906                      CMP    A8,A6
29260: c208                      JRLS   292F0h
29270: c001                      JR     29290h
29280: 03a2                      NEG    A2
29290: 56c8                      XOR    A6,A8
292a0: 5706                      XOR    A8,A6
292b0: 56c8                      XOR    A6,A8
292c0: 5601                      XOR    A0,A1
292d0: 5620                      XOR    A1,A0
292e0: 5601                      XOR    A0,A1
292f0: 4c42                      MOVE   A2,A2
29300: ca07                      JREQ   29380h
29310: 0b42 ffe1                 CMPI   1Eh,A2
29330: c402                      JRLT   29360h
29340: 56c6                      CLR    A6
29350: c002                      JR     29380h
29360: 03a2                      NEG    A2
29370: 6646                      SRL    A2,A6
29380: 4801                      CMP    A0,A1
29390: ca08                      JREQ   29420h
293a0: 44c8                      SUB    A6,A8
293b0: 6b06                      LMO    A8,A6
293c0: ca27                      JREQ   29640h
293d0: 1446                      SUBK   2h,A6
293e0: ca08                      JREQ   29470h
293f0: 44c3                      SUB    A6,A3
29400: 62c8                      SLL    A6,A8
29410: c005                      JR     29470h
29420: 40c8                      ADD    A6,A8
29430: 1c28                      BTST   1Eh,A8
29440: ca02                      JREQ   29470h
29450: 1023                      INC    A3
29460: 2fe8                      SRL    1h,A8
29470: 0b08 0020                 ADDI   20h,A8
29490: 1c28                      BTST   1Eh,A8
294a0: ca02                      JREQ   294D0h
294b0: 1023                      INC    A3
294c0: c001                      JR     294E0h
294d0: 2428                      SLL    1h,A8
294e0: 0b88 0000 c000            ANDI   3FFFFFFFh,A8
29510: 4c63                      MOVE   A3,A3
29520: c42d                      JRLT   29800h
29530: cb03                      JRNE   29570h
29540: 2f28                      SRL    7h,A8
29550: cb2a                      JRNE   29800h
29560: c00d                      JR     29640h
29570: 0b43 ff00                 CMPI   FFh,A3
29590: c520                      JRGE   297A0h
295a0: 2f28                      SRL    7h,A8
295b0: 26e3                      SLL    17h,A3
295c0: 5468                      OR     A3,A8
295d0: 5408                      OR     A0,A8
295e0: 930e                      MOVE   A8,*A14+,1
295f0: 09af 005f                 MMFM   SP,A0-A4,A6
29610: 0960                      RETS   
29620: 4cc8                      MOVE   A6,A8
29630: c0fa                      JR     295E0h
29640: 930e                      MOVE   A8,*A14+,1
29650: 09af 005f                 MMFM   SP,A0-A4,A6
29670: 0960                      RETS   
29680: 0b43 ff00                 CMPI   FFh,A3
296a0: cb04                      JRNE   296F0h
296b0: 4801                      CMP    A0,A1
296c0: cb0a                      JRNE   29770h
296d0: c001                      JR     296F0h
296e0: 4c20                      MOVE   A1,A0
296f0: 09e8 0000 7f80            MOVI   7F800000h,A8
29720: 5408                      OR     A0,A8
29730: 930e                      MOVE   A8,*A14+,1
29740: 09af 005f                 MMFM   SP,A0-A4,A6
29760: 0960                      RETS   
29770: 1880                      MOVK   4h,A0
29780: 5663                      CLR    A3
29790: c008                      JR     29820h
297a0: 4c03                      MOVE   A0,A3
297b0: 0ba3 0000 7f80            ORI    7F800000h,A3
297e0: 18a0                      MOVK   5h,A0
297f0: c002                      JR     29820h
29800: 1980                      MOVK   Ch,A0
29810: 5663                      CLR    A3
29820: a3cf                      MOVE   A14,-*SP,1
29830: 920e                      MOVE   A0,*A14+,1
29840: 0d5f bf90 0002            CALLA  2BF90h
29870: 926e                      MOVE   A3,*A14+,1
29880: 09af 005f                 MMFM   SP,A0-A4,A6
298a0: 0960                      RETS   

FS$DIV_R:
298b0: 07a8 0000 0000            MOVE   @0h,A8,1
298e0: ca1c                      JREQ   29AB0h
298f0: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
29920: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
29950: d826 0000                 CEXEC  0,000013,0
29970: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
299a0: 0960                      RETS   

FS$DIV:
299b0: 07a8 0000 0000            MOVE   @0h,A8,1
299e0: ca11                      JREQ   29B00h
299f0: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
29a20: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
29a50: d826 0000                 CEXEC  0,000013,0
29a70: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
29aa0: 0960                      RETS   
29ab0: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
29ad0: a7c2                      MOVE   -*A14,A2,1
29ae0: a7c4                      MOVE   -*A14,A4,1
29af0: c004                      JR     29B40h
29b00: 098f aa40                 MMTM   SP,A0,A2,A4,A6,A9
29b20: a7c4                      MOVE   -*A14,A4,1
29b30: a7c2                      MOVE   -*A14,A2,1
29b40: 4c48                      MOVE   A2,A8
29b50: 2528                      SLL    9h,A8
29b60: 2f68                      SRL    5h,A8
29b70: 0ba8 0000 0800            ORI    8000000h,A8
29ba0: 4c80                      MOVE   A4,A0
29bb0: 2520                      SLL    9h,A0
29bc0: 2fe0                      SRL    1h,A0
29bd0: 0ba0 0000 8000            ORI    80000000h,A0
29c00: 2422                      SLL    1h,A2
29c10: 4729                      SUBB   A9,A9
29c20: 2424                      SLL    1h,A4
29c30: 46c6                      SUBB   A6,A6
29c40: 5726                      XOR    A9,A6
29c50: 27e6                      SLL    1Fh,A6
29c60: 2d02                      SRL    18h,A2
29c70: 2d04                      SRL    18h,A4
29c80: ca36                      JREQ   29FF0h
29c90: 0b44 ff00                 CMPI   FFh,A4
29cb0: ca24                      JREQ   29F00h
29cc0: 0b42 ff00                 CMPI   FFh,A2
29ce0: ca19                      JREQ   29E80h
29cf0: 4c42                      MOVE   A2,A2
29d00: ca21                      JREQ   29F20h
29d10: 4482                      SUB    A4,A2
29d20: 5729                      CLR    A9
29d30: 5a08                      DIVU   A0,A8
29d40: 1c68                      BTST   1Ch,A8
29d50: ca02                      JREQ   29D80h
29d60: 1022                      INC    A2
29d70: 2fe8                      SRL    1h,A8
29d80: 1108                      ADDK   8h,A8
29d90: 1c68                      BTST   1Ch,A8
29da0: ca02                      JREQ   29DD0h
29db0: 1022                      INC    A2
29dc0: c002                      JR     29DF0h
29dd0: 1422                      DEC    A2
29de0: 2428                      SLL    1h,A8
29df0: 0b88 0000 f000            ANDI   FFFFFFFh,A8
29e20: 0b02 007f                 ADDI   7Fh,A2
29e40: c617                      JRLE   29FC0h
29e50: 0b42 ff00                 CMPI   FFh,A2
29e70: c50f                      JRGE   29F70h
29e80: 2f68                      SRL    5h,A8
29e90: 26e2                      SLL    17h,A2
29ea0: 54c2                      OR     A6,A2
29eb0: 5448                      OR     A2,A8
29ec0: 930e                      MOVE   A8,*A14+,1
29ed0: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
29ef0: 0960                      RETS   
29f00: 4882                      CMP    A4,A2
29f10: ca12                      JREQ   2A040h
29f20: 5708                      CLR    A8
29f30: 930e                      MOVE   A8,*A14+,1
29f40: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
29f60: 0960                      RETS   
29f70: 0ba6 0000 7f80            ORI    7F800000h,A6
29fa0: 18e0                      MOVK   7h,A0
29fb0: c00c                      JR     2A080h
29fc0: 56c6                      CLR    A6
29fd0: 19c0                      MOVK   Eh,A0
29fe0: c009                      JR     2A080h
29ff0: 0ba6 0000 7f80            ORI    7F800000h,A6
2a020: 19e0                      MOVK   Fh,A0
2a030: c004                      JR     2A080h
2a040: 0ba6 0000 3f80            ORI    3F800000h,A6
2a070: 1a00                      MOVK   10h,A0
2a080: a3cf                      MOVE   A14,-*SP,1
2a090: 920e                      MOVE   A0,*A14+,1
2a0a0: 0d5f bf90 0002            CALLA  2BF90h
2a0d0: 92ce                      MOVE   A6,*A14+,1
2a0e0: 09af 0255                 MMFM   SP,A0,A2,A4,A6,A9
2a100: 0960                      RETS   

FS$EQ:
2a110: a20f                      MOVE   A0,-*SP,1
2a120: a7c0                      MOVE   -*A14,A0,1
2a130: a7c8                      MOVE   -*A14,A8,1
2a140: 4808                      CMP    A0,A8
2a150: 1828                      MOVK   1h,A8
2a160: ca01                      JREQ   2A180h
2a170: 5708                      CLR    A8
2a180: 97e0                      MOVE   *SP+,A0,1
2a190: 4d08                      MOVE   A8,A8
2a1a0: 0960                      RETS   

FS$GE:
2a1b0: a20f                      MOVE   A0,-*SP,1
2a1c0: a7c0                      MOVE   -*A14,A0,1
2a1d0: a7c8                      MOVE   -*A14,A8,1
2a1e0: 1c00                      BTST   1Fh,A0
2a1f0: ca05                      JREQ   2A250h
2a200: 1c08                      BTST   1Fh,A8
2a210: ca03                      JREQ   2A250h
2a220: 4500                      SUB    A8,A0
2a230: 5708                      CLR    A8
2a240: 03a0                      NEG    A0
2a250: 4808                      CMP    A0,A8
2a260: 1828                      MOVK   1h,A8
2a270: c501                      JRGE   2A290h
2a280: 5708                      CLR    A8
2a290: 97e0                      MOVE   *SP+,A0,1
2a2a0: 4d08                      MOVE   A8,A8
2a2b0: 0960                      RETS   

FS$GT:
2a2c0: a20f                      MOVE   A0,-*SP,1
2a2d0: a7c0                      MOVE   -*A14,A0,1
2a2e0: a7c8                      MOVE   -*A14,A8,1
2a2f0: 1c00                      BTST   1Fh,A0
2a300: ca05                      JREQ   2A360h
2a310: 1c08                      BTST   1Fh,A8
2a320: ca03                      JREQ   2A360h
2a330: 4500                      SUB    A8,A0
2a340: 5708                      CLR    A8
2a350: 03a0                      NEG    A0
2a360: 4808                      CMP    A0,A8
2a370: 1828                      MOVK   1h,A8
2a380: c701                      JRGT   2A3A0h
2a390: 5708                      CLR    A8
2a3a0: 97e0                      MOVE   *SP+,A0,1
2a3b0: 4d08                      MOVE   A8,A8
2a3c0: 0960                      RETS   

FS$LE:
2a3d0: a20f                      MOVE   A0,-*SP,1
2a3e0: a7c0                      MOVE   -*A14,A0,1
2a3f0: a7c8                      MOVE   -*A14,A8,1
2a400: 1c00                      BTST   1Fh,A0
2a410: ca05                      JREQ   2A470h
2a420: 1c08                      BTST   1Fh,A8
2a430: ca03                      JREQ   2A470h
2a440: 4500                      SUB    A8,A0
2a450: 5708                      CLR    A8
2a460: 03a0                      NEG    A0
2a470: 4808                      CMP    A0,A8
2a480: 1828                      MOVK   1h,A8
2a490: c601                      JRLE   2A4B0h
2a4a0: 5708                      CLR    A8
2a4b0: 97e0                      MOVE   *SP+,A0,1
2a4c0: 4d08                      MOVE   A8,A8
2a4d0: 0960                      RETS   

FS$LT:
2a4e0: a20f                      MOVE   A0,-*SP,1
2a4f0: a7c0                      MOVE   -*A14,A0,1
2a500: a7c8                      MOVE   -*A14,A8,1
2a510: 1c00                      BTST   1Fh,A0
2a520: ca05                      JREQ   2A580h
2a530: 1c08                      BTST   1Fh,A8
2a540: ca03                      JREQ   2A580h
2a550: 4500                      SUB    A8,A0
2a560: 5708                      CLR    A8
2a570: 03a0                      NEG    A0
2a580: 4808                      CMP    A0,A8
2a590: 1828                      MOVK   1h,A8
2a5a0: c401                      JRLT   2A5C0h
2a5b0: 5708                      CLR    A8
2a5c0: 97e0                      MOVE   *SP+,A0,1
2a5d0: 4d08                      MOVE   A8,A8
2a5e0: 0960                      RETS   

FS$MUL:
2a5f0: 07a8 0000 0000            MOVE   @0h,A8,1
2a620: ca0c                      JREQ   2A6F0h
2a630: 0821 8d0e 0000            CMOVMC *-A14,1,0,00008D,0
2a660: 0821 8d0e 0010            CMOVMC *-A14,1,0,00108D,0
2a690: d822 0000                 CEXEC  0,000011,0
2a6b0: 06ae 8f01 0000            CMOVCM *A14+,1,0,00008F,0
2a6e0: 0960                      RETS   
2a6f0: 098f a840                 MMTM   SP,A0,A2,A4,A9
2a710: a7c8                      MOVE   -*A14,A8,1
2a720: a7c9                      MOVE   -*A14,A9,1
2a730: 4d08                      MOVE   A8,A8
2a740: ca3d                      JREQ   2AB20h
2a750: 4d29                      MOVE   A9,A9
2a760: ca3b                      JREQ   2AB20h
2a770: 2428                      SLL    1h,A8
2a780: 4684                      SUBB   A4,A4
2a790: 2429                      SLL    1h,A9
2a7a0: 4600                      SUBB   A0,A0
2a7b0: 5604                      XOR    A0,A4
2a7c0: 27e4                      SLL    1Fh,A4
2a7d0: 4d00                      MOVE   A8,A0
2a7e0: 4d22                      MOVE   A9,A2
2a7f0: 2d00                      SRL    18h,A0
2a800: 2d02                      SRL    18h,A2
2a810: 0b42 ff00                 CMPI   FFh,A2
2a830: ca34                      JREQ   2AB80h
2a840: 0b40 ff00                 CMPI   FFh,A0
2a860: ca30                      JREQ   2AB70h
2a870: 4002                      ADD    A0,A2
2a880: 0be2 ff80                 SUBI   7Fh,A2
2a8a0: 2508                      SLL    8h,A8
2a8b0: 2fe8                      SRL    1h,A8
2a8c0: 0ba8 0000 8000            ORI    80000000h,A8
2a8f0: 2509                      SLL    8h,A9
2a900: 2fe9                      SRL    1h,A9
2a910: 0ba9 0000 8000            ORI    80000000h,A9
2a940: 5f28                      MPYU   A9,A8
2a950: ca1c                      JREQ   2AB20h
2a960: 1022                      INC    A2
2a970: 1c08                      BTST   1Fh,A8
2a980: cb02                      JRNE   2A9B0h
2a990: 1422                      DEC    A2
2a9a0: 2428                      SLL    1h,A8
2a9b0: 0b08 0080                 ADDI   80h,A8
2a9d0: c902                      JRNC   2AA00h
2a9e0: 1022                      INC    A2
2a9f0: c001                      JR     2AA10h
2aa00: 2428                      SLL    1h,A8
2aa10: 4c42                      MOVE   A2,A2
2aa20: c424                      JRLT   2AC70h
2aa30: ca0b                      JREQ   2AAF0h
2aa40: 0b42 ff00                 CMPI   FFh,A2
2aa60: c517                      JRGE   2ABE0h
2aa70: 2ee8                      SRL    9h,A8
2aa80: 26e2                      SLL    17h,A2
2aa90: 5448                      OR     A2,A8
2aaa0: 5488                      OR     A4,A8
2aab0: 930e                      MOVE   A8,*A14+,1
2aac0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
2aae0: 0960                      RETS   
2aaf0: 4d08                      MOVE   A8,A8
2ab00: cb16                      JRNE   2AC70h
2ab10: c0f5                      JR     2AA70h
2ab20: 5708                      CLR    A8
2ab30: 930e                      MOVE   A8,*A14+,1
2ab40: 09af 0215                 MMFM   SP,A0,A2,A4,A9
2ab60: 0960                      RETS   
2ab70: 4c40                      MOVE   A2,A0
2ab80: 4c00                      MOVE   A0,A0
2ab90: ca0a                      JREQ   2AC40h
2aba0: 09e8 0000 7ff0            MOVI   7FF00000h,A8
2abd0: c0ec                      JR     2AAA0h
2abe0: 09e9 0000 7ff0            MOVI   7FF00000h,A9
2ac10: 5489                      OR     A4,A9
2ac20: 18c0                      MOVK   6h,A0
2ac30: c005                      JR     2AC90h
2ac40: 5729                      CLR    A9
2ac50: 1960                      MOVK   Bh,A0
2ac60: c002                      JR     2AC90h
2ac70: 5729                      CLR    A9
2ac80: 19a0                      MOVK   Dh,A0
2ac90: a3cf                      MOVE   A14,-*SP,1
2aca0: 920e                      MOVE   A0,*A14+,1
2acb0: 0d5f bf90 0002            CALLA  2BF90h
2ace0: 932e                      MOVE   A9,*A14+,1
2acf0: 09af 0215                 MMFM   SP,A0,A2,A4,A9
2ad10: 0960                      RETS   

FS$NE:
2ad20: a20f                      MOVE   A0,-*SP,1
2ad30: a7c0                      MOVE   -*A14,A0,1
2ad40: a7c8                      MOVE   -*A14,A8,1
2ad50: 4808                      CMP    A0,A8
2ad60: 1828                      MOVK   1h,A8
2ad70: cb01                      JRNE   2AD90h
2ad80: 5708                      CLR    A8
2ad90: 97e0                      MOVE   *SP+,A0,1
2ada0: 4d08                      MOVE   A8,A8
2adb0: 0960                      RETS   

FS$NEG:
2adc0: a7c8                      MOVE   -*A14,A8,1
2add0: ca03                      JREQ   2AE10h
2ade0: 0bc8 0000 8000            XORI   80000000h,A8
2ae10: 930e                      MOVE   A8,*A14+,1
2ae20: 0960                      RETS   

_exp:
2ae30: 098f 002c                 MMTM   SP,A10,A12,A13
2ae50: 4dcd                      MOVE   A14,A13
2ae60: 0b0e 0080                 ADDI   80h,A14
2ae80: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2aea0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2aec0: 09e8 f460 0002            MOVI   2F460h,A8
2aef0: 9b0e                      MOVE   *A8+,*A14+,1
2af00: 9b0e                      MOVE   *A8+,*A14+,1
2af10: 0d5f 6f70 0002            CALLA  26F70h
2af40: ca00 00ed                 JREQ   2BE30h
2af60: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2af80: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2afa0: 4508                      SUB    A8,A8
2afb0: 930e                      MOVE   A8,*A14+,1
2afc0: 930e                      MOVE   A8,*A14+,1
2afd0: 0d5f 6f90 0002            CALLA  26F90h
2b000: ca1a                      JREQ   2B1B0h
2b010: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2b030: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2b050: 09e8 f4a0 0002            MOVI   2F4A0h,A8
2b080: 9b0e                      MOVE   *A8+,*A14+,1
2b090: 9b0e                      MOVE   *A8+,*A14+,1
2b0a0: 0d5f 8130 0002            CALLA  28130h
2b0d0: 4508                      SUB    A8,A8
2b0e0: 09ea 0000 3fe0            MOVI   3FE00000h,A10
2b110: 934e                      MOVE   A10,*A14+,1
2b120: 930e                      MOVE   A8,*A14+,1
2b130: 0d5f 5dd0 0002            CALLA  25DD0h
2b160: 0d5f 3970 0002            CALLA  23970h
2b190: 4d0c                      MOVE   A8,A12
2b1a0: c019                      JR     2B340h
2b1b0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2b1d0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2b1f0: 09ea f4a0 0002            MOVI   2F4A0h,A10
2b220: 9b4e                      MOVE   *A10+,*A14+,1
2b230: 9b4e                      MOVE   *A10+,*A14+,1
2b240: 0d5f 8130 0002            CALLA  28130h
2b270: 454a                      SUB    A10,A10
2b280: 09e8 0000 3fe0            MOVI   3FE00000h,A8
2b2b0: 930e                      MOVE   A8,*A14+,1
2b2c0: 934e                      MOVE   A10,*A14+,1
2b2d0: 0d5f 5f40 0002            CALLA  25F40h
2b300: 0d5f 3970 0002            CALLA  23970h
2b330: 4d0c                      MOVE   A8,A12
2b340: 4d88                      MOVE   A12,A8
2b350: 0d5f 4d10 0002            CALLA  24D10h
2b380: 454a                      SUB    A10,A10
2b390: 09e8 3000 3fe6            MOVI   3FE63000h,A8
2b3c0: 930e                      MOVE   A8,*A14+,1
2b3d0: 934e                      MOVE   A10,*A14+,1
2b3e0: 0d5f 8130 0002            CALLA  28130h
2b410: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2b430: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2b450: 0d5f 5c60 0002            CALLA  25C60h
2b480: 4d88                      MOVE   A12,A8
2b490: 0d5f 4d10 0002            CALLA  24D10h
2b4c0: 09e8 f4e0 0002            MOVI   2F4E0h,A8
2b4f0: 9b0e                      MOVE   *A8+,*A14+,1
2b500: 9b0e                      MOVE   *A8+,*A14+,1
2b510: 0d5f 8130 0002            CALLA  28130h
2b540: 0d5f 5dd0 0002            CALLA  25DD0h
2b570: a7c8                      MOVE   -*A14,A8,1
2b580: b30d 0020                 MOVE   A8,*A13(20h),1
2b5a0: a7c8                      MOVE   -*A14,A8,1
2b5b0: 830d                      MOVE   A8,*A13,1
2b5c0: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2b5e0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2b600: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2b620: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2b640: 0d5f 8130 0002            CALLA  28130h
2b670: a7c8                      MOVE   -*A14,A8,1
2b680: b30d 0060                 MOVE   A8,*A13(60h),1
2b6a0: a7c8                      MOVE   -*A14,A8,1
2b6b0: b30d 0040                 MOVE   A8,*A13(40h),1
2b6d0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2b6f0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2b710: 09e8 f520 0002            MOVI   2F520h,A8
2b740: 9b0e                      MOVE   *A8+,*A14+,1
2b750: 9b0e                      MOVE   *A8+,*A14+,1
2b760: 0d5f 8130 0002            CALLA  28130h
2b790: 09e8 f560 0002            MOVI   2F560h,A8
2b7c0: 9b0e                      MOVE   *A8+,*A14+,1
2b7d0: 9b0e                      MOVE   *A8+,*A14+,1
2b7e0: 0d5f 5f40 0002            CALLA  25F40h
2b810: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2b830: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2b850: 0d5f 8130 0002            CALLA  28130h
2b880: 09e8 0000 3fd0            MOVI   3FD00000h,A8
2b8b0: 930e                      MOVE   A8,*A14+,1
2b8c0: 934e                      MOVE   A10,*A14+,1
2b8d0: 0d5f 5f40 0002            CALLA  25F40h
2b900: 9bae                      MOVE   *A13+,*A14+,1
2b910: 9bae                      MOVE   *A13+,*A14+,1
2b920: 0d5f 8130 0002            CALLA  28130h
2b950: abcd                      MOVE   -*A14,-*A13,1
2b960: abcd                      MOVE   -*A14,-*A13,1
2b970: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2b990: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2b9b0: 09e8 f5a0 0002            MOVI   2F5A0h,A8
2b9e0: 9b0e                      MOVE   *A8+,*A14+,1
2b9f0: 9b0e                      MOVE   *A8+,*A14+,1
2ba00: 0d5f 8130 0002            CALLA  28130h
2ba30: 09e8 f5e0 0002            MOVI   2F5E0h,A8
2ba60: 9b0e                      MOVE   *A8+,*A14+,1
2ba70: 9b0e                      MOVE   *A8+,*A14+,1
2ba80: 0d5f 5f40 0002            CALLA  25F40h
2bab0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2bad0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2baf0: 0d5f 8130 0002            CALLA  28130h
2bb20: 09e8 0000 3fe0            MOVI   3FE00000h,A8
2bb50: 930e                      MOVE   A8,*A14+,1
2bb60: 934e                      MOVE   A10,*A14+,1
2bb70: 0d5f 5f40 0002            CALLA  25F40h
2bba0: a7c8                      MOVE   -*A14,A8,1
2bbb0: b30d 0060                 MOVE   A8,*A13(60h),1
2bbd0: a7c8                      MOVE   -*A14,A8,1
2bbe0: b30d 0040                 MOVE   A8,*A13(40h),1
2bc00: 0b0e 0040                 ADDI   40h,A14
2bc20: a3cf                      MOVE   A14,-*SP,1
2bc30: 102c                      INC    A12
2bc40: 938e                      MOVE   A12,*A14+,1
2bc50: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2bc70: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2bc90: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2bcb0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2bcd0: 0d5f 5dd0 0002            CALLA  25DD0h
2bd00: d3ae 0000                 MOVE   *A13(0h),*A14+,1
2bd20: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2bd40: 0d5f 7510 0002            CALLA  27510h
2bd70: 09ec 0000 3fe0            MOVI   3FE00000h,A12
2bda0: 938e                      MOVE   A12,*A14+,1
2bdb0: 934e                      MOVE   A10,*A14+,1
2bdc0: 0d5f 5f40 0002            CALLA  25F40h
2bdf0: 0d5f bff0 0002            CALLA  2BFF0h
2be20: c009                      JR     2BEC0h
2be30: 184c                      MOVK   2h,A12
2be40: 078c 6500 0003            MOVE   A12,@36500h,1
2be70: 09ea f620 0002            MOVI   2F620h,A10
2bea0: 9b4e                      MOVE   *A10+,*A14+,1
2beb0: 9b4e                      MOVE   *A10+,*A14+,1
2bec0: b7ed 0080                 MOVE   *SP(80h),A13,1
2bee0: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2bf10: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2bf40: b7ee 0080                 MOVE   *SP(80h),A14,1
2bf60: 09af 3400                 MMFM   SP,A10,A12,A13
2bf80: 0962                      RETS   2h

_fp_error:
2bf90: a3af                      MOVE   A13,-*SP,1
2bfa0: 4dcd                      MOVE   A14,A13
2bfb0: b7ee 0040                 MOVE   *SP(40h),A14,1
2bfd0: 97ed                      MOVE   *SP+,A13,1
2bfe0: 0962                      RETS   2h

_ldexp:
2bff0: 098f 002c                 MMTM   SP,A10,A12,A13
2c010: 4dcd                      MOVE   A14,A13
2c020: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
2c040: 4daa                      MOVE   A13,A10
2c050: 0bea ffbf                 SUBI   40h,A10
2c070: 8748                      MOVE   *A10,A8,1
2c080: 2988                      SRA    14h,A8
2c090: 0b88 f800 ffff            ANDI   7FFh,A8
2c0c0: 410c                      ADD    A8,A12
2c0d0: c613                      JRLE   2C210h
2c0e0: 0b4c f800                 CMPI   7FFh,A12
2c100: c70a                      JRGT   2C1B0h
2c110: 8748                      MOVE   *A10,A8,1
2c120: 0b88 0000 7ff0            ANDI   800FFFFFh,A8
2c150: 268c                      SLL    14h,A12
2c160: 5588                      OR     A12,A8
2c170: 830a                      MOVE   A8,*A10,1
2c180: 9b4e                      MOVE   *A10+,*A14+,1
2c190: 9b4e                      MOVE   *A10+,*A14+,1
2c1a0: c009                      JR     2C240h
2c1b0: 09ec f660 0002            MOVI   2F660h,A12
2c1e0: 9b8e                      MOVE   *A12+,*A14+,1
2c1f0: 9b8e                      MOVE   *A12+,*A14+,1
2c200: c003                      JR     2C240h
2c210: 458c                      SUB    A12,A12
2c220: 938e                      MOVE   A12,*A14+,1
2c230: 938e                      MOVE   A12,*A14+,1
2c240: b7ed 0080                 MOVE   *SP(80h),A13,1
2c260: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2c290: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2c2c0: b7ee 0080                 MOVE   *SP(80h),A14,1
2c2e0: 09af 3400                 MMFM   SP,A10,A12,A13
2c300: 0962                      RETS   2h

_log:
2c310: 098f 000c                 MMTM   SP,A12,A13
2c330: 4dcd                      MOVE   A14,A13
2c340: 0b0e 0120                 ADDI   120h,A14
2c360: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2c380: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2c3a0: 4508                      SUB    A8,A8
2c3b0: 930e                      MOVE   A8,*A14+,1
2c3c0: 930e                      MOVE   A8,*A14+,1
2c3d0: 0d5f 6fd0 0002            CALLA  26FD0h
2c400: ca00 013c                 JREQ   2D7E0h
2c420: 0b0e 0040                 ADDI   40h,A14
2c440: a3cf                      MOVE   A14,-*SP,1
2c450: 93ae                      MOVE   A13,*A14+,1
2c460: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2c480: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2c4a0: 0d5f e560 0002            CALLA  2E560h
2c4d0: a7c8                      MOVE   -*A14,A8,1
2c4e0: b30d 0080                 MOVE   A8,*A13(80h),1
2c500: a7c8                      MOVE   -*A14,A8,1
2c510: b30d 0060                 MOVE   A8,*A13(60h),1
2c530: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2c550: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2c570: 09e8 f6a0 0002            MOVI   2F6A0h,A8
2c5a0: 9b0e                      MOVE   *A8+,*A14+,1
2c5b0: 9b0e                      MOVE   *A8+,*A14+,1
2c5c0: 0d5f 6fd0 0002            CALLA  26FD0h
2c5f0: ca37                      JREQ   2C970h
2c600: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2c620: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2c640: 4508                      SUB    A8,A8
2c650: 09ec 0000 3fe0            MOVI   3FE00000h,A12
2c680: 938e                      MOVE   A12,*A14+,1
2c690: 930e                      MOVE   A8,*A14+,1
2c6a0: 0d5f 5dd0 0002            CALLA  25DD0h
2c6d0: 4508                      SUB    A8,A8
2c6e0: 938e                      MOVE   A12,*A14+,1
2c6f0: 930e                      MOVE   A8,*A14+,1
2c700: 0d5f 5dd0 0002            CALLA  25DD0h
2c730: a7c8                      MOVE   -*A14,A8,1
2c740: b30d 0040                 MOVE   A8,*A13(40h),1
2c760: a7c8                      MOVE   -*A14,A8,1
2c770: b30d 0020                 MOVE   A8,*A13(20h),1
2c790: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2c7b0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2c7d0: 4508                      SUB    A8,A8
2c7e0: 938e                      MOVE   A12,*A14+,1
2c7f0: 930e                      MOVE   A8,*A14+,1
2c800: 0d5f 8130 0002            CALLA  28130h
2c830: 4508                      SUB    A8,A8
2c840: 938e                      MOVE   A12,*A14+,1
2c850: 930e                      MOVE   A8,*A14+,1
2c860: 0d5f 5f40 0002            CALLA  25F40h
2c890: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2c8b0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2c8d0: 0d5f 7510 0002            CALLA  27510h
2c900: a7c8                      MOVE   -*A14,A8,1
2c910: b30d 0040                 MOVE   A8,*A13(40h),1
2c930: a7c8                      MOVE   -*A14,A8,1
2c940: b30d 0020                 MOVE   A8,*A13(20h),1
2c960: c033                      JR     2CCA0h
2c970: 87ac                      MOVE   *A13,A12,1
2c980: 142c                      DEC    A12
2c990: 838d                      MOVE   A12,*A13,1
2c9a0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2c9c0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2c9e0: 4508                      SUB    A8,A8
2c9f0: 09ec 0000 3fe0            MOVI   3FE00000h,A12
2ca20: 938e                      MOVE   A12,*A14+,1
2ca30: 930e                      MOVE   A8,*A14+,1
2ca40: 0d5f 5dd0 0002            CALLA  25DD0h
2ca70: a7c8                      MOVE   -*A14,A8,1
2ca80: b30d 0040                 MOVE   A8,*A13(40h),1
2caa0: a7c8                      MOVE   -*A14,A8,1
2cab0: b30d 0020                 MOVE   A8,*A13(20h),1
2cad0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2caf0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2cb10: 4508                      SUB    A8,A8
2cb20: 938e                      MOVE   A12,*A14+,1
2cb30: 930e                      MOVE   A8,*A14+,1
2cb40: 0d5f 8130 0002            CALLA  28130h
2cb70: 4508                      SUB    A8,A8
2cb80: 938e                      MOVE   A12,*A14+,1
2cb90: 930e                      MOVE   A8,*A14+,1
2cba0: 0d5f 5f40 0002            CALLA  25F40h
2cbd0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2cbf0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2cc10: 0d5f 7510 0002            CALLA  27510h
2cc40: a7c8                      MOVE   -*A14,A8,1
2cc50: b30d 0040                 MOVE   A8,*A13(40h),1
2cc70: a7c8                      MOVE   -*A14,A8,1
2cc80: b30d 0020                 MOVE   A8,*A13(20h),1
2cca0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2ccc0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2cce0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2cd00: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2cd20: 0d5f 8130 0002            CALLA  28130h
2cd50: a7c8                      MOVE   -*A14,A8,1
2cd60: b30d 0080                 MOVE   A8,*A13(80h),1
2cd80: a7c8                      MOVE   -*A14,A8,1
2cd90: b30d 0060                 MOVE   A8,*A13(60h),1
2cdb0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2cdd0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2cdf0: 09e8 f6e0 0002            MOVI   2F6E0h,A8
2ce20: 9b0e                      MOVE   *A8+,*A14+,1
2ce30: 9b0e                      MOVE   *A8+,*A14+,1
2ce40: 0d5f 8130 0002            CALLA  28130h
2ce70: 09e8 f720 0002            MOVI   2F720h,A8
2cea0: 9b0e                      MOVE   *A8+,*A14+,1
2ceb0: 9b0e                      MOVE   *A8+,*A14+,1
2cec0: 0d5f 5f40 0002            CALLA  25F40h
2cef0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2cf10: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2cf30: 0d5f 8130 0002            CALLA  28130h
2cf60: 09e8 f760 0002            MOVI   2F760h,A8
2cf90: 9b0e                      MOVE   *A8+,*A14+,1
2cfa0: 9b0e                      MOVE   *A8+,*A14+,1
2cfb0: 0d5f 5f40 0002            CALLA  25F40h
2cfe0: a7c8                      MOVE   -*A14,A8,1
2cff0: b30d 0100                 MOVE   A8,*A13(100h),1
2d010: a7c8                      MOVE   -*A14,A8,1
2d020: b30d 00e0                 MOVE   A8,*A13(E0h),1
2d040: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d060: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2d080: 09e8 f7a0 0002            MOVI   2F7A0h,A8
2d0b0: 9b0e                      MOVE   *A8+,*A14+,1
2d0c0: 9b0e                      MOVE   *A8+,*A14+,1
2d0d0: 0d5f 5f40 0002            CALLA  25F40h
2d100: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d120: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2d140: 0d5f 8130 0002            CALLA  28130h
2d170: 09e8 f7e0 0002            MOVI   2F7E0h,A8
2d1a0: 9b0e                      MOVE   *A8+,*A14+,1
2d1b0: 9b0e                      MOVE   *A8+,*A14+,1
2d1c0: 0d5f 5f40 0002            CALLA  25F40h
2d1f0: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d210: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2d230: 0d5f 8130 0002            CALLA  28130h
2d260: 09e8 f820 0002            MOVI   2F820h,A8
2d290: 9b0e                      MOVE   *A8+,*A14+,1
2d2a0: 9b0e                      MOVE   *A8+,*A14+,1
2d2b0: 0d5f 5f40 0002            CALLA  25F40h
2d2e0: a7c8                      MOVE   -*A14,A8,1
2d2f0: b30d 00c0                 MOVE   A8,*A13(C0h),1
2d310: a7c8                      MOVE   -*A14,A8,1
2d320: b30d 00a0                 MOVE   A8,*A13(A0h),1
2d340: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2d360: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d380: d3ae 0060                 MOVE   *A13(60h),*A14+,1
2d3a0: d3ae 0080                 MOVE   *A13(80h),*A14+,1
2d3c0: 0d5f 8130 0002            CALLA  28130h
2d3f0: d3ae 00e0                 MOVE   *A13(E0h),*A14+,1
2d410: d3ae 0100                 MOVE   *A13(100h),*A14+,1
2d430: d3ae 00a0                 MOVE   *A13(A0h),*A14+,1
2d450: d3ae 00c0                 MOVE   *A13(C0h),*A14+,1
2d470: 0d5f 7680 0002            CALLA  27680h
2d4a0: 0d5f 8130 0002            CALLA  28130h
2d4d0: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2d4f0: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d510: 0d5f 5f40 0002            CALLA  25F40h
2d540: a7c8                      MOVE   -*A14,A8,1
2d550: b30d 0040                 MOVE   A8,*A13(40h),1
2d570: a7c8                      MOVE   -*A14,A8,1
2d580: b30d 0020                 MOVE   A8,*A13(20h),1
2d5a0: 87a8                      MOVE   *A13,A8,1
2d5b0: 0d5f 4d10 0002            CALLA  24D10h
2d5e0: 09e8 f860 0002            MOVI   2F860h,A8
2d610: 9b0e                      MOVE   *A8+,*A14+,1
2d620: 9b0e                      MOVE   *A8+,*A14+,1
2d630: 0d5f 8130 0002            CALLA  28130h
2d660: d3ae 0020                 MOVE   *A13(20h),*A14+,1
2d680: d3ae 0040                 MOVE   *A13(40h),*A14+,1
2d6a0: 0d5f 5f40 0002            CALLA  25F40h
2d6d0: 87a8                      MOVE   *A13,A8,1
2d6e0: 0d5f 4d10 0002            CALLA  24D10h
2d710: 4508                      SUB    A8,A8
2d720: 09ec 3000 3fe6            MOVI   3FE63000h,A12
2d750: 938e                      MOVE   A12,*A14+,1
2d760: 930e                      MOVE   A8,*A14+,1
2d770: 0d5f 8130 0002            CALLA  28130h
2d7a0: 0d5f 5f40 0002            CALLA  25F40h
2d7d0: c016                      JR     2D940h
2d7e0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2d800: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2d820: 458c                      SUB    A12,A12
2d830: 938e                      MOVE   A12,*A14+,1
2d840: 938e                      MOVE   A12,*A14+,1
2d850: 0d5f e420 0002            CALLA  2E420h
2d880: ca02                      JREQ   2D8B0h
2d890: 1848                      MOVK   2h,A8
2d8a0: c001                      JR     2D8C0h
2d8b0: 1828                      MOVK   1h,A8
2d8c0: 0788 6500 0003            MOVE   A8,@36500h,1
2d8f0: 09ec f8a0 0002            MOVI   2F8A0h,A12
2d920: 9b8e                      MOVE   *A12+,*A14+,1
2d930: 9b8e                      MOVE   *A12+,*A14+,1
2d940: b7ed 0060                 MOVE   *SP(60h),A13,1
2d960: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2d990: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2d9c0: b7ee 0060                 MOVE   *SP(60h),A14,1
2d9e0: 09af 3000                 MMFM   SP,A12,A13
2da00: 0962                      RETS   2h

_ltoa:
2da10: 098f 402c                 MMTM   SP,A1,A10,A12,A13
2da30: 4dcd                      MOVE   A14,A13
2da40: 0b0e 00a0                 ADDI   A0h,A14
2da60: b7a1 ffe0                 MOVE   *A13(FFE0h),A1,1
2da80: 4e2e                      MOVE   A1,B14
2da90: 2c3e                      SRL    1Fh,B14
2daa0: ca01                      JREQ   2DAC0h
2dab0: 03a1                      NEG    A1
2dac0: 4dac                      MOVE   A13,A12
2dad0: 0b0c 0098                 ADDI   98h,A12
2daf0: 4508                      SUB    A8,A8
2db00: 8d0c                      MOVB   A8,*A12
2db10: 0568                      SETF   8h,1,0
2db20: 1948                      MOVK   Ah,A8
2db30: 4c2a                      MOVE   A1,A10
2db40: 6d0a                      MODS   A8,A10
2db50: 0b0a 0030                 ADDI   30h,A10
2db70: a14c                      MOVE   A10,-*A12,0
2db80: 5901                      DIVS   A8,A1
2db90: cbf8                      JRNE   2DB20h
2dba0: 4fd1                      MOVE   B14,A1
2dbb0: ca03                      JREQ   2DBF0h
2dbc0: 09ca 002d                 MOVI   2Dh,A10
2dbe0: a14c                      MOVE   A10,-*A12,0
2dbf0: a3cf                      MOVE   A14,-*SP,1
2dc00: 4daa                      MOVE   A13,A10
2dc10: 458a                      SUB    A12,A10
2dc20: 4d41                      MOVE   A10,A1
2dc30: 0b01 00a0                 ADDI   A0h,A1
2dc50: 2ba1                      SRA    3h,A1
2dc60: 922e                      MOVE   A1,*A14+,1
2dc70: 938e                      MOVE   A12,*A14+,1
2dc80: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2dca0: 0d5f dd40 0002            CALLA  2DD40h
2dcd0: 4c28                      MOVE   A1,A8
2dce0: 1428                      DEC    A8
2dcf0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
2dd10: 09af 3402                 MMFM   SP,A1,A10,A12,A13
2dd30: 0962                      RETS   2h

_memcpy:
2dd40: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
2dd60: 4dcd                      MOVE   A14,A13
2dd70: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
2dd90: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
2ddb0: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
2ddd0: 4d44                      MOVE   A10,A4
2dde0: 142c                      DEC    A12
2ddf0: 0b4c 0000                 CMPI   FFFFh,A12
2de10: ca06                      JREQ   2DE80h
2de20: 0568                      SETF   8h,1,0
2de30: 98ca                      MOVE   *A6+,*A10+,0
2de40: 142c                      DEC    A12
2de50: 0b4c 0000                 CMPI   FFFFh,A12
2de70: cbfb                      JRNE   2DE30h
2de80: 4c88                      MOVE   A4,A8
2de90: b7ee 00c0                 MOVE   *SP(C0h),A14,1
2deb0: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
2ded0: 0962                      RETS   2h

_memmove:
2dee0: 098f 0a2c                 MMTM   SP,A4,A6,A10,A12,A13
2df00: 4dcd                      MOVE   A14,A13
2df10: b7ac ffa0                 MOVE   *A13(FFA0h),A12,1
2df30: b7a6 ffc0                 MOVE   *A13(FFC0h),A6,1
2df50: b7aa ffe0                 MOVE   *A13(FFE0h),A10,1
2df70: 4d44                      MOVE   A10,A4
2df80: 4946                      CMP    A10,A6
2df90: c311                      JRHI   2E0B0h
2dfa0: 4d88                      MOVE   A12,A8
2dfb0: 2468                      SLL    3h,A8
2dfc0: 4106                      ADD    A8,A6
2dfd0: 4d88                      MOVE   A12,A8
2dfe0: 2468                      SLL    3h,A8
2dff0: 410a                      ADD    A8,A10
2e000: 142c                      DEC    A12
2e010: 0b4c 0000                 CMPI   FFFFh,A12
2e030: ca11                      JREQ   2E150h
2e040: 0568                      SETF   8h,1,0
2e050: a8ca                      MOVE   -*A6,-*A10,0
2e060: 142c                      DEC    A12
2e070: 0b4c 0000                 CMPI   FFFFh,A12
2e090: cbfb                      JRNE   2E050h
2e0a0: c00a                      JR     2E150h
2e0b0: 142c                      DEC    A12
2e0c0: 0b4c 0000                 CMPI   FFFFh,A12
2e0e0: ca06                      JREQ   2E150h
2e0f0: 0568                      SETF   8h,1,0
2e100: 98ca                      MOVE   *A6+,*A10+,0
2e110: 142c                      DEC    A12
2e120: 0b4c 0000                 CMPI   FFFFh,A12
2e140: cbfb                      JRNE   2E100h
2e150: 4c88                      MOVE   A4,A8
2e160: b7ee 00c0                 MOVE   *SP(C0h),A14,1
2e180: 09af 3450                 MMFM   SP,A4,A6,A10,A12,A13
2e1a0: 0962                      RETS   2h

_strcat:
2e1b0: 098f 022c                 MMTM   SP,A6,A10,A12,A13
2e1d0: 4dcd                      MOVE   A14,A13
2e1e0: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
2e200: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
2e220: 4d86                      MOVE   A12,A6
2e230: 0568                      SETF   8h,1,0
2e240: 9588                      MOVE   *A12+,A8,0
2e250: cbfe                      JRNE   2E240h
2e260: 150c                      SUBK   8h,A12
2e270: 9548                      MOVE   *A10+,A8,0
2e280: 910c                      MOVE   A8,*A12+,0
2e290: cbfd                      JRNE   2E270h
2e2a0: 4cc8                      MOVE   A6,A8
2e2b0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
2e2d0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
2e2f0: 0962                      RETS   2h

_strcpy:
2e300: 098f 022c                 MMTM   SP,A6,A10,A12,A13
2e320: 4dcd                      MOVE   A14,A13
2e330: b7aa ffc0                 MOVE   *A13(FFC0h),A10,1
2e350: b7ac ffe0                 MOVE   *A13(FFE0h),A12,1
2e370: 4d86                      MOVE   A12,A6
2e380: 0568                      SETF   8h,1,0
2e390: 9548                      MOVE   *A10+,A8,0
2e3a0: 910c                      MOVE   A8,*A12+,0
2e3b0: cbfd                      JRNE   2E390h
2e3c0: 4cc8                      MOVE   A6,A8
2e3d0: b7ee 00a0                 MOVE   *SP(A0h),A14,1
2e3f0: 09af 3440                 MMFM   SP,A6,A10,A12,A13
2e410: 0962                      RETS   2h

FD$EQ:
2e420: 098f e000                 MMTM   SP,A0-A2
2e440: a7c0                      MOVE   -*A14,A0,1
2e450: a7c8                      MOVE   -*A14,A8,1
2e460: a7c1                      MOVE   -*A14,A1,1
2e470: a7c2                      MOVE   -*A14,A2,1
2e480: 4902                      CMP    A8,A2
2e490: cb08                      JRNE   2E520h
2e4a0: 5708                      CLR    A8
2e4b0: 4801                      CMP    A0,A1
2e4c0: cb01                      JRNE   2E4E0h
2e4d0: 1028                      INC    A8
2e4e0: 4d08                      MOVE   A8,A8
2e4f0: 09af 0007                 MMFM   SP,A0-A2
2e510: 0960                      RETS   
2e520: 5708                      CLR    A8
2e530: 09af 0007                 MMFM   SP,A0-A2
2e550: 0960                      RETS   

_frexp:
2e560: 098f 002c                 MMTM   SP,A10,A12,A13
2e580: 4dcd                      MOVE   A14,A13
2e590: b7aa ffa0                 MOVE   *A13(FFA0h),A10,1
2e5b0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2e5d0: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2e5f0: 4508                      SUB    A8,A8
2e600: 930e                      MOVE   A8,*A14+,1
2e610: 930e                      MOVE   A8,*A14+,1
2e620: 0d5f e8f0 0002            CALLA  2E8F0h
2e650: ca16                      JREQ   2E7C0h
2e660: 4dac                      MOVE   A13,A12
2e670: 0bec ffbf                 SUBI   40h,A12
2e690: 8788                      MOVE   *A12,A8,1
2e6a0: 2988                      SRA    14h,A8
2e6b0: 0b88 f800 ffff            ANDI   7FFh,A8
2e6e0: 0be8 fc01                 SUBI   3FEh,A8
2e700: 830a                      MOVE   A8,*A10,1
2e710: 8788                      MOVE   *A12,A8,1
2e720: 0b88 0000 7ff0            ANDI   800FFFFFh,A8
2e750: 0b28 0000 3fe0            ADDI   3FE00000h,A8
2e780: 830c                      MOVE   A8,*A12,1
2e790: 9b8e                      MOVE   *A12+,*A14+,1
2e7a0: 9b8e                      MOVE   *A12+,*A14+,1
2e7b0: c006                      JR     2E820h
2e7c0: 458c                      SUB    A12,A12
2e7d0: 838a                      MOVE   A12,*A10,1
2e7e0: d3ae ffc0                 MOVE   *A13(FFC0h),*A14+,1
2e800: d3ae ffe0                 MOVE   *A13(FFE0h),*A14+,1
2e820: b7ed 0080                 MOVE   *SP(80h),A13,1
2e840: bbcd ffc0 ffc0            MOVE   *A14(FFC0h),*A13(FFC0h),1
2e870: bbcd ffe0 ffe0            MOVE   *A14(FFE0h),*A13(FFE0h),1
2e8a0: b7ee 0080                 MOVE   *SP(80h),A14,1
2e8c0: 09af 3400                 MMFM   SP,A10,A12,A13
2e8e0: 0962                      RETS   2h

FD$NE:
2e8f0: 098f b800                 MMTM   SP,A0,A2-A4
2e910: a7c2                      MOVE   -*A14,A2,1
2e920: a7c0                      MOVE   -*A14,A0,1
2e930: a7c3                      MOVE   -*A14,A3,1
2e940: a7c4                      MOVE   -*A14,A4,1
2e950: 5708                      CLR    A8
2e960: 4804                      CMP    A0,A4
2e970: cb06                      JRNE   2E9E0h
2e980: 4843                      CMP    A2,A3
2e990: ca01                      JREQ   2E9B0h
2e9a0: 1028                      INC    A8
2e9b0: 09af 001d                 MMFM   SP,A0,A2-A4
2e9d0: 0960                      RETS   
2e9e0: 1028                      INC    A8
2e9f0: 09af 001d                 MMFM   SP,A0,A2-A4
2ea10: 0960                      RETS   
