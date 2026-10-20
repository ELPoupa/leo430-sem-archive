0000  mov     ax,0FFFFh                       ; segment seg3:0000
0003  push    bp                              
0004  mov     bp,sp                           
0006  push    ds                              
0007  mov     ds,ax                           
0009  mov     ax,1h                           
000c  pop     ds                              
000d  leave                                   
000e  retf    0Ah                             
0011  add     [bx+si],al                      

; ===== WEP =====
0012  mov     ax,1h                           ; segment seg3:0000
0015  push    bp                              
0016  mov     bp,sp                           
0018  push    ds                              
0019  mov     ds,ax                           
001b  mov     ax,1h                           
001e  pop     ds                              
001f  leave                                   
0020  retf    2h                              
0023  add     [bx+si],al                      

; ===== STAGE_REPORTID =====
0024  mov     ax,13h                          ; segment seg3:0000
0027  push    bp                              
0028  mov     bp,sp                           
002a  push    ds                              
002b  mov     ds,ax                           
002d  push    0h                              
002f  push    ds                              
0030  push    87Eh                            
0033  call far M007.UIF_MESSAGE               
0038  pop     ds                              
0039  leave                                   
003a  retf                                    
003b  add     [bx+si],al                      

; ===== STAGE_CONTROLLER_SHUTDOWN =====
003c  mov     ax,25h                          ; segment seg3:0000
003f  push    bp                              
0040  mov     bp,sp                           
0042  push    ds                              
0043  mov     ds,ax                           
0045  push    6Fh                             
0047  call far M007.M007_GETSTATE             ; DP_STAGE_MOTOR
004c  dec     ax                              
004d  jne     54h                             
004f  call far sub_4154                       
0054  xor     ax,ax                           
0056  pop     ds                              
0057  leave                                   
0058  retf                                    
0059  add     [bx+si],al                      

; ===== EXPECTSTAGETIMEOUT =====
005a  mov     ax,3Dh                          ; segment seg3:0000
005d  push    bp                              
005e  mov     bp,sp                           
0060  push    ds                              
0061  mov     ds,ax                           
0063  mov     word ptr [180h],28h             
0069  pop     ds                              
006a  leave                                   
006b  retf                                    

; ===== SETSTAGE_SET_X =====
006c  mov     ax,5Bh                          ; segment seg3:0000
006f  push    bp                              
0070  mov     bp,sp                           
0072  push    ds                              
0073  mov     ds,ax                           
0075  push    9Fh                             
0078  push    word ptr [bp+8h]                
007b  push    word ptr [bp+6h]                
007e  call far M007.M007_PUTVALUE             ; AP_STAGE_SET_X
0083  pop     ds                              
0084  leave                                   
0085  retf    4h                              

; ===== SETSTAGE_SET_Y =====
0088  mov     ax,6Dh                          ; segment seg3:0000
008b  push    bp                              
008c  mov     bp,sp                           
008e  push    ds                              
008f  mov     ds,ax                           
0091  push    0A0h                            
0094  push    word ptr [bp+8h]                
0097  push    word ptr [bp+6h]                
009a  call far M007.M007_PUTVALUE             ; AP_STAGE_SET_Y
009f  pop     ds                              
00a0  leave                                   
00a1  retf    4h                              

; ===== SETSTAGE_SET_T =====
00a4  mov     ax,89h                          ; segment seg3:0000
00a7  push    bp                              
00a8  mov     bp,sp                           
00aa  push    ds                              
00ab  mov     ds,ax                           
00ad  push    122h                            
00b0  push    word ptr [bp+8h]                
00b3  push    word ptr [bp+6h]                
00b6  call far M007.M007_PUTVALUE             ; AP_STAGE_SET_T
00bb  pop     ds                              
00bc  leave                                   
00bd  retf    4h                              

; ===== SETSTAGE_SET_Z =====
00c0  mov     ax,0A5h                         ; segment seg3:0000
00c3  push    bp                              
00c4  mov     bp,sp                           
00c6  push    ds                              
00c7  mov     ds,ax                           
00c9  push    0A1h                            
00cc  push    word ptr [bp+8h]                
00cf  push    word ptr [bp+6h]                
00d2  call far M007.M007_PUTVALUE             ; AP_STAGE_SET_Z
00d7  pop     ds                              
00d8  leave                                   
00d9  retf    4h                              

; ===== SWITCHSTAGE_XYZ =====
00dc  mov     ax,0C1h                         ; segment seg3:0000
00df  enter   4h,0h                           
00e3  push    ds                              
00e4  mov     ds,ax                           
00e6  push    30h                             
00e8  push    word ptr [bp+6h]                
00eb  call far M007.M007_PUTSTATE             ; DP_STAGE_XYZ
00f0  push    28h                             
00f2  lea     ax,[bp-4h]                      
00f5  push    ax                              
00f6  call far M007.M007_GETVALUE             ; AP_TILT_ANGLE = 1
00fb  mov     bx,ax                           
00fd  push    word ptr ss:[bx+2h]             
0101  push    word ptr ss:[bx]                
0104  call far sub_7fda                       
0109  pop     ds                              
010a  leave                                   
010b  retf    2h                              

; ===== SWITCHSTAGE_SCAN =====
010e  mov     ax,0DDh                         ; segment seg3:0000
0111  push    bp                              
0112  mov     bp,sp                           
0114  push    ds                              
0115  mov     ds,ax                           
0117  push    31h                             
0119  push    word ptr [bp+6h]                
011c  call far M007.M007_PUTSTATE             ; DP_STAGE_SCAN
0121  pop     ds                              
0122  leave                                   
0123  retf    2h                              

; ===== GET_STAGE_CONFIG =====
0126  mov     ax,10Fh                         ; segment seg3:0000
0129  push    bp                              
012a  mov     bp,sp                           
012c  push    ds                              
012d  mov     ds,ax                           
012f  push    53h                             
0131  call far M007.M007_GETSTATE             ; DP_STAGE_TYPE
0136  les     bx,[bp+6h]                      
0139  mov     es:[bx],al                      
013c  push    6Fh                             
013e  call far M007.M007_GETSTATE             ; DP_STAGE_MOTOR
0143  les     bx,[bp+6h]                      
0146  mov     es:[bx+1h],al                   
014a  push    96h                             
014d  call far M007.M007_GETSTATE             ; DP_STAGE_MOTORS
0152  les     bx,[bp+6h]                      
0155  mov     es:[bx+2h],al                   
0159  push    0E6h                            
015c  call far M007.M007_GETSTATE             ; DP_HCSTAGE
0161  les     bx,[bp+6h]                      
0164  mov     es:[bx+3h],al                   
0168  push    0EDh                            
016b  call far M007.M007_GETSTATE             ; DP_X_BACKLASH
0170  les     bx,[bp+6h]                      
0173  mov     es:[bx+4h],al                   
0177  push    0EEh                            
017a  call far M007.M007_GETSTATE             ; DP_Y_BACKLASH
017f  les     bx,[bp+6h]                      
0182  mov     es:[bx+5h],al                   
0186  push    0EFh                            
0189  call far M007.M007_GETSTATE             ; DP_Z_BACKLASH
018e  les     bx,[bp+6h]                      
0191  mov     es:[bx+6h],al                   
0195  push    0F0h                            
0198  call far M007.M007_GETSTATE             ; DP_T_BACKLASH
019d  les     bx,[bp+6h]                      
01a0  mov     es:[bx+7h],al                   
01a4  push    0F1h                            
01a7  call far M007.M007_GETSTATE             ; DP_R_BACKLASH
01ac  les     bx,[bp+6h]                      
01af  mov     es:[bx+8h],al                   
01b3  push    124h                            
01b6  call far M007.M007_GETSTATE             ; DP_M_BACKLASH
01bb  les     bx,[bp+6h]                      
01be  mov     es:[bx+9h],al                   
01c2  push    11Ah                            
01c5  call far M007.M007_GETSTATE             ; DP_Z_ON_VENT
01ca  les     bx,[bp+6h]                      
01cd  mov     es:[bx+0Bh],al                  
01d1  push    127h                            
01d4  call far M007.M007_GETSTATE             ; DP_ROTATE_LIMIT
01d9  les     bx,[bp+6h]                      
01dc  mov     es:[bx+0Ah],al                  
01e0  pop     ds                              
01e1  leave                                   
01e2  retf    4h                              
01e5  add     [bx+si],al                      

; ===== DOCOMMANDSTAGE_SET_END =====
01e6  mov     ax,127h                         ; segment seg3:0000
01e9  push    bp                              
01ea  mov     bp,sp                           
01ec  push    ds                              
01ed  mov     ds,ax                           
01ef  pop     ds                              
01f0  leave                                   
01f1  retf                                    

; ===== DOCOMMANDSTAGE_SET_START =====
01f2  mov     ax,1E7h                         ; segment seg3:0000
01f5  push    bp                              
01f6  mov     bp,sp                           
01f8  push    ds                              
01f9  mov     ds,ax                           
01fb  pop     ds                              
01fc  leave                                   
01fd  retf                                    

; ===== SETSTAGE_START_T =====
01fe  mov     ax,1F3h                         ; segment seg3:0000
0201  push    bp                              
0202  mov     bp,sp                           
0204  push    ds                              
0205  mov     ds,ax                           
0207  push    121h                            
020a  push    word ptr [bp+8h]                
020d  push    word ptr [bp+6h]                
0210  call far M007.M007_PUTVALUE             ; AP_STAGE_START_T
0215  pop     ds                              
0216  leave                                   
0217  retf    4h                              

; ===== SETSTAGE_START_R =====
021a  mov     ax,1FFh                         ; segment seg3:0000
021d  push    bp                              
021e  mov     bp,sp                           
0220  push    ds                              
0221  mov     ds,ax                           
0223  push    120h                            
0226  push    word ptr [bp+8h]                
0229  push    word ptr [bp+6h]                
022c  call far M007.M007_PUTVALUE             ; AP_STAGE_START_R
0231  pop     ds                              
0232  leave                                   
0233  retf    4h                              

; ===== SWITCHZ_ON_VENT =====
0236  mov     ax,21Bh                         ; segment seg3:0000
0239  push    bp                              
023a  mov     bp,sp                           
023c  push    ds                              
023d  mov     ds,ax                           
023f  push    11Ah                            
0242  push    word ptr [bp+6h]                
0245  call far M007.M007_PUTSTATE             ; DP_Z_ON_VENT
024a  pop     ds                              
024b  leave                                   
024c  retf    2h                              
024f  add     [bx+si],al                      

; ===== SWITCHTRACK_Z =====
0250  mov     ax,237h                         ; segment seg3:0000
0253  push    bp                              
0254  mov     bp,sp                           
0256  push    ds                              
0257  mov     ds,ax                           
0259  push    11Ch                            
025c  push    word ptr [bp+6h]                
025f  call far M007.M007_PUTSTATE             ; DP_TRACK_Z
0264  pop     ds                              
0265  leave                                   
0266  retf    2h                              
0269  add     [bx+si],al                      

; ===== SETSTAGE_START_M =====
026a  mov     ax,251h                         ; segment seg3:0000
026d  push    bp                              
026e  mov     bp,sp                           
0270  push    ds                              
0271  mov     ds,ax                           
0273  push    162h                            
0276  push    word ptr [bp+8h]                
0279  push    word ptr [bp+6h]                
027c  call far M007.M007_PUTVALUE             ; AP_STAGE_START_M
0281  pop     ds                              
0282  leave                                   
0283  retf    4h                              

; ===== SWITCHSTAGE_POINTS_LIST =====
0286  mov     ax,26Bh                         ; segment seg3:0000
0289  push    bp                              
028a  mov     bp,sp                           
028c  push    ds                              
028d  mov     ds,ax                           
028f  push    126h                            
0292  push    word ptr [bp+6h]                
0295  call far M007.M007_PUTSTATE             ; DP_STAGE_POINTS_LIST
029a  pop     ds                              
029b  leave                                   
029c  retf    2h                              
029f  add     [bx+si],al                      

; ===== SWITCHHARD_PANEL =====
02a0  mov     ax,287h                         ; segment seg3:0000
02a3  push    bp                              
02a4  mov     bp,sp                           
02a6  push    ds                              
02a7  mov     ds,ax                           
02a9  push    128h                            
02ac  push    word ptr [bp+6h]                
02af  call far M007.M007_PUTSTATE             ; DP_HARD_PANEL
02b4  call far M200.CONFIGURE_HARD_PANEL      
02b9  pop     ds                              
02ba  leave                                   
02bb  retf    2h                              

; ===== STAGERESUMEOPERATION =====
02be  mov     ax,2A1h                         ; segment seg3:0000
02c1  push    bp                              
02c2  mov     bp,sp                           
02c4  push    ds                              
02c5  mov     ds,ax                           
02c7  pop     ds                              
02c8  leave                                   
02c9  retf                                    

; ===== DOCOMMANDSTART_COMP_CAL =====
02ca  mov     ax,2BFh                         ; segment seg3:0000
02cd  push    bp                              
02ce  mov     bp,sp                           
02d0  push    ds                              
02d1  mov     ds,ax                           
02d3  push    138h                            
02d6  call far M007.M007_GETSTATE             ; DP_COMPUCENTRIC_CAL
02db  mov     [182h],ax                       
02de  push    138h                            
02e1  push    2h                              
02e3  call far M007.M007_PUTSTATE             ; DP_COMPUCENTRIC_CAL = 2
02e8  pop     ds                              
02e9  leave                                   
02ea  retf                                    
02eb  add     [bx+si],al                      

; ===== DOCOMMANDACCEPT_COMP_CAL =====
02ec  mov     ax,2CBh                         ; segment seg3:0000
02ef  push    bp                              
02f0  mov     bp,sp                           
02f2  push    ds                              
02f3  mov     ds,ax                           
02f5  push    138h                            
02f8  push    1h                              
02fa  call far M007.M007_PUTSTATE             ; DP_COMPUCENTRIC_CAL = 1
02ff  pop     ds                              
0300  leave                                   
0301  retf                                    

; ===== DOCOMMANDEXIT_COMP_CAL =====
0302  mov     ax,2EDh                         ; segment seg3:0000
0305  push    bp                              
0306  mov     bp,sp                           
0308  push    ds                              
0309  mov     ds,ax                           
030b  push    138h                            
030e  push    word ptr [182h]                 ; [ds] f32 here = 0
0312  call far M007.M007_PUTSTATE             ; DP_COMPUCENTRIC_CAL
0317  pop     ds                              
0318  leave                                   
0319  retf                                    

; ===== SWITCHREGISTRATION =====
031a  mov     ax,303h                         ; segment seg3:0000
031d  push    bp                              
031e  mov     bp,sp                           
0320  push    ds                              
0321  mov     ds,ax                           
0323  push    136h                            
0326  push    word ptr [bp+6h]                
0329  call far M007.M007_PUTSTATE             ; DP_REGISTRATION
032e  pop     ds                              
032f  leave                                   
0330  retf    2h                              
0333  add     [bx+si],al                      

; ===== SWITCHCOMPUCENTRIC_MODE =====
0334  mov     ax,31Bh                         ; segment seg3:0000
0337  push    bp                              
0338  mov     bp,sp                           
033a  push    ds                              
033b  mov     ds,ax                           
033d  cmp     word ptr [bp+6h],0h             
0341  jne     350h                            
0343  push    137h                            
0346  push    word ptr [bp+6h]                
0349  call far M007.M007_PUTSTATE             ; DP_COMPUCENTRIC_MODE
034e  jmp     38Ch                            
0350  push    53h                             
0352  call far M007.M007_GETSTATE             ; DP_STAGE_TYPE
0357  jmp     371h                            
0359  cmp     word ptr [bp+6h],2h             
035d  jne     38Ch                            
035f  jmp     343h                            
0361  cmp     word ptr [17Eh],0h              
0366  je      359h                            
0368  cmp     word ptr [1112h],0h             
036d  je      359h                            
036f  jmp     343h                            
0371  cmp     ax,6h                           
0374  ja      361h                            
0376  add     ax,ax                           
0378  xchg    ax,bx                           
0379  jmp     word ptr cs:[bx+37Eh]           
037e  mov     [bp+di],es                      
0380  mov     [bp+di],es                      
0382  inc     bx                              
0383  add     bx,[bx+di+3h]                   
0386  pop     cx                              
0387  add     ax,[bp+di+3h]                   
038a  pop     cx                              
038b  add     bx,[bx]                         
038d  leave                                   
038e  retf    2h                              
0391  add     [bx+si],al                      

; ===== DOCOMMANDSET_STAGE_CENTRE =====
0392  mov     ax,335h                         ; segment seg3:0000
0395  enter   8h,0h                           
0399  push    ds                              
039a  mov     ds,ax                           
039c  push    196h                            
039f  push    84h                             
03a2  lea     ax,[bp-4h]                      
03a5  push    ax                              
03a6  call far M007.M007_GETVALUE             ; AP_STAGE_CENTRE_X = 132
03ab  mov     bx,ax                           
03ad  push    word ptr ss:[bx+2h]             
03b1  push    word ptr ss:[bx]                
03b4  call far M007.M007_PUTVALUE             
03b9  push    197h                            
03bc  push    85h                             
03bf  lea     ax,[bp-8h]                      
03c2  push    ax                              
03c3  call far M007.M007_GETVALUE             ; AP_STAGE_CENTRE_Y = 133
03c8  mov     bx,ax                           
03ca  push    word ptr ss:[bx+2h]             
03ce  push    word ptr ss:[bx]                
03d1  call far M007.M007_PUTVALUE             
03d6  pop     ds                              
03d7  leave                                   
03d8  retf                                    
03d9  add     [bx+si],al                      

; ===== SETSAMPLE_HEIGHT =====
03da  mov     ax,393h                         ; segment seg3:0000
03dd  push    bp                              
03de  mov     bp,sp                           
03e0  push    ds                              
03e1  mov     ds,ax                           
03e3  push    195h                            
03e6  push    word ptr [bp+8h]                
03e9  push    word ptr [bp+6h]                
03ec  call far M007.M007_PUTVALUE             ; AP_SAMPLE_HEIGHT
03f1  pop     ds                              
03f2  leave                                   
03f3  retf    4h                              

; ===== SETSPACER_THICKNESS =====
03f6  mov     ax,3DBh                         ; segment seg3:0000
03f9  push    bp                              
03fa  mov     bp,sp                           
03fc  push    ds                              
03fd  mov     ds,ax                           
03ff  push    198h                            
0402  push    word ptr [bp+8h]                
0405  push    word ptr [bp+6h]                
0408  call far M007.M007_PUTVALUE             ; AP_SPACER_THICKNESS
040d  pop     ds                              
040e  leave                                   
040f  retf    4h                              

; ===== SETXYSAMPLE_AT =====
0412  mov     ax,3F7h                         ; segment seg3:0000
0415  push    bp                              
0416  mov     bp,sp                           
0418  push    ds                              
0419  mov     ds,ax                           
041b  push    191h                            
041e  push    word ptr [bp+0Ch]               
0421  push    word ptr [bp+0Ah]               
0424  push    word ptr [bp+8h]                
0427  push    word ptr [bp+6h]                
042a  call far M007.M007_PUTXY                ; AP_SAMPLE_AT_X
042f  pop     ds                              
0430  leave                                   
0431  retf    8h                              

; ===== SETXYSAMPLE_GOTO =====
0434  mov     ax,413h                         ; segment seg3:0000
0437  push    bp                              
0438  mov     bp,sp                           
043a  push    ds                              
043b  mov     ds,ax                           
043d  push    193h                            
0440  push    word ptr [bp+0Ch]               
0443  push    word ptr [bp+0Ah]               
0446  push    word ptr [bp+8h]                
0449  push    word ptr [bp+6h]                
044c  call far M007.M007_PUTXY                ; AP_SAMPLE_GOTO_X
0451  pop     ds                              
0452  leave                                   
0453  retf    8h                              

; ===== SWITCHSTAGE_LIST =====
0456  mov     ax,435h                         ; segment seg3:0000
0459  push    bp                              
045a  mov     bp,sp                           
045c  push    ds                              
045d  mov     ds,ax                           
045f  push    139h                            
0462  push    word ptr [bp+6h]                
0465  call far M007.M007_PUTSTATE             ; DP_STAGE_LIST
046a  pop     ds                              
046b  leave                                   
046c  retf    2h                              
046f  add     [bx+si],al                      

; ===== SETSTAGE_TILT_CAL =====
0470  mov     ax,457h                         ; segment seg3:0000
0473  push    bp                              
0474  mov     bp,sp                           
0476  push    ds                              
0477  mov     ds,ax                           
0479  push    199h                            
047c  push    word ptr [bp+8h]                
047f  push    word ptr [bp+6h]                
0482  call far M007.M007_PUTVALUE             ; AP_STAGE_TILT_CAL
0487  pop     ds                              
0488  leave                                   
0489  retf    4h                              

; ===== SETXYSTAGE_DELTA =====
048c  mov     ax,471h                         ; segment seg3:0000
048f  enter   30h,0h                          
0493  push    ds                              
0494  mov     ds,ax                           
0496  push    19Ah                            
0499  wait                                    
049a  fld     dword ptr [bp+0Ah]              
049d  wait                                    
049e  fstp    dword ptr [bp-24h]              
04a1  nop                                     
04a2  wait                                    
04a3  push    word ptr [bp-22h]               
04a6  push    word ptr [bp-24h]               
04a9  wait                                    
04aa  fld     dword ptr [bp+6h]               
04ad  wait                                    
04ae  fstp    dword ptr [bp-28h]              
04b1  nop                                     
04b2  wait                                    
04b3  push    word ptr [bp-26h]               
04b6  push    word ptr [bp-28h]               
04b9  call far M007.M007_PUTXY                ; AP_STAGE_DELTA_X
04be  push    84h                             
04c1  lea     ax,[bp-0Ch]                     
04c4  push    ax                              
04c5  call far M007.M007_GETVALUE             ; AP_STAGE_AT_X
04ca  mov     bx,ax                           
04cc  wait                                    
04cd  fld     dword ptr ss:[bx]               
04d0  wait                                    
04d1  fadd    dword ptr [bp-24h]              
04d4  wait                                    
04d5  fstp    dword ptr [bp-4h]               
04d8  nop                                     
04d9  wait                                    
04da  push    85h                             
04dd  lea     ax,[bp-10h]                     
04e0  push    ax                              
04e1  call far M007.M007_GETVALUE             ; AP_STAGE_AT_Y
04e6  mov     bx,ax                           
04e8  wait                                    
04e9  fld     dword ptr ss:[bx]               
04ec  wait                                    
04ed  fadd    dword ptr [bp-28h]              
04f0  wait                                    
04f1  fstp    dword ptr [bp-8h]               
04f4  nop                                     
04f5  wait                                    
04f6  push    99h                             
04f9  lea     ax,[bp-14h]                     
04fc  push    ax                              
04fd  call far M007.M007_GETVALUE             ; AP_STAGE_LOW_X
0502  mov     bx,ax                           
0504  wait                                    
0505  fld     dword ptr ss:[bx]               
0508  lea     bx,[bp-4h]                      
050b  wait                                    
050c  fld     dword ptr ss:[bx]               
050f  wait                                    
0510  fst     dword ptr [bp-2Ch]              
0513  wait                                    
0514  fcom    st(0),st(1)                     
0516  wait                                    
0517  fstp    st(0)                           
0519  wait                                    
051a  fstp    st(0)                           
051c  wait                                    
051d  fstsw   ax                              
051f  sahf                                    
0520  jae     525h                            
0522  jmp     5B2h                            
0525  push    96h                             
0528  lea     ax,[bp-18h]                     
052b  push    ax                              
052c  call far M007.M007_GETVALUE             ; AP_STAGE_HIGH_X
0531  mov     bx,ax                           
0533  wait                                    
0534  fld     dword ptr ss:[bx]               
0537  wait                                    
0538  fcom    dword ptr [bp-2Ch]              
053b  wait                                    
053c  fstp    st(0)                           
053e  wait                                    
053f  fstsw   ax                              
0541  sahf                                    
0542  jb      5B2h                            
0544  push    9Ah                             
0547  lea     ax,[bp-1Ch]                     
054a  push    ax                              
054b  call far M007.M007_GETVALUE             ; AP_STAGE_LOW_Y
0550  mov     bx,ax                           
0552  wait                                    
0553  fld     dword ptr ss:[bx]               
0556  lea     bx,[bp-8h]                      
0559  wait                                    
055a  fld     dword ptr ss:[bx]               
055d  wait                                    
055e  fst     dword ptr [bp-30h]              
0561  wait                                    
0562  fcom    st(0),st(1)                     
0564  wait                                    
0565  fstp    st(0)                           
0567  wait                                    
0568  fstp    st(0)                           
056a  wait                                    
056b  fstsw   ax                              
056d  sahf                                    
056e  jb      5B2h                            
0570  push    97h                             
0573  lea     ax,[bp-20h]                     
0576  push    ax                              
0577  call far M007.M007_GETVALUE             ; AP_STAGE_HIGH_Y
057c  mov     bx,ax                           
057e  wait                                    
057f  fld     dword ptr ss:[bx]               
0582  wait                                    
0583  fcom    dword ptr [bp-30h]              
0586  wait                                    
0587  fstp    st(0)                           
0589  wait                                    
058a  fstsw   ax                              
058c  sahf                                    
058d  jb      5B2h                            
058f  wait                                    
0590  fld     dword ptr [bp-2Ch]              
0593  sub     sp,4h                           
0596  mov     bx,sp                           
0598  wait                                    
0599  fstp    dword ptr ss:[bx]               
059c  wait                                    
059d  fld     dword ptr [bp-30h]              
05a0  sub     sp,4h                           
05a3  mov     bx,sp                           
05a5  wait                                    
05a6  fstp    dword ptr ss:[bx]               
05a9  nop                                     
05aa  wait                                    
05ab  call far sub_4424                       
05b0  jmp     5B9h                            
05b2  push    40h                             
05b4  call far USER.MESSAGEBEEP               
05b9  pop     ds                              
05ba  leave                                   
05bb  retf    8h                              

; ===== SETSTAGE_DELTA_Z =====
05be  mov     ax,48Dh                         ; segment seg3:0000
05c1  enter   18h,0h                          
05c5  push    ds                              
05c6  mov     ds,ax                           
05c8  push    19Ch                            
05cb  wait                                    
05cc  fld     dword ptr [bp+6h]               
05cf  wait                                    
05d0  fstp    dword ptr [bp-14h]              
05d3  nop                                     
05d4  wait                                    
05d5  push    word ptr [bp-12h]               
05d8  push    word ptr [bp-14h]               
05db  call far M007.M007_PUTVALUE             ; AP_STAGE_DELTA_Z
05e0  push    86h                             
05e3  lea     ax,[bp-8h]                      
05e6  push    ax                              
05e7  call far M007.M007_GETVALUE             ; AP_STAGE_AT_Z
05ec  mov     bx,ax                           
05ee  wait                                    
05ef  fld     dword ptr ss:[bx]               
05f2  wait                                    
05f3  fadd    dword ptr [bp-14h]              
05f6  wait                                    
05f7  fstp    dword ptr [bp-4h]               
05fa  nop                                     
05fb  wait                                    
05fc  push    9Bh                             
05ff  lea     ax,[bp-0Ch]                     
0602  push    ax                              
0603  call far M007.M007_GETVALUE             ; AP_STAGE_LOW_Z
0608  mov     bx,ax                           
060a  wait                                    
060b  fld     dword ptr ss:[bx]               
060e  lea     bx,[bp-4h]                      
0611  wait                                    
0612  fld     dword ptr ss:[bx]               
0615  wait                                    
0616  fst     dword ptr [bp-18h]              
0619  wait                                    
061a  fcom    st(0),st(1)                     
061c  wait                                    
061d  fstp    st(0)                           
061f  wait                                    
0620  fstp    st(0)                           
0622  wait                                    
0623  fstsw   ax                              
0625  sahf                                    
0626  jb      65Dh                            
0628  push    98h                             
062b  lea     ax,[bp-10h]                     
062e  push    ax                              
062f  call far M007.M007_GETVALUE             ; AP_STAGE_HIGH_Z
0634  mov     bx,ax                           
0636  wait                                    
0637  fld     dword ptr ss:[bx]               
063a  wait                                    
063b  fcom    dword ptr [bp-18h]              
063e  wait                                    
063f  fstp    st(0)                           
0641  wait                                    
0642  fstsw   ax                              
0644  sahf                                    
0645  jb      65Dh                            
0647  wait                                    
0648  fld     dword ptr [bp-18h]              
064b  sub     sp,4h                           
064e  mov     bx,sp                           
0650  wait                                    
0651  fstp    dword ptr ss:[bx]               
0654  nop                                     
0655  wait                                    
0656  call far sub_4b48                       
065b  jmp     664h                            
065d  push    40h                             
065f  call far USER.MESSAGEBEEP               
0664  pop     ds                              
0665  leave                                   
0666  retf    4h                              
0669  add     [bx+si],al                      

; ===== SETSTAGE_DELTA_T =====
066a  mov     ax,5BFh                         ; segment seg3:0000
066d  enter   18h,0h                          
0671  push    ds                              
0672  mov     ds,ax                           
0674  push    19Dh                            
0677  wait                                    
0678  fld     dword ptr [bp+6h]               
067b  wait                                    
067c  fstp    dword ptr [bp-14h]              
067f  nop                                     
0680  wait                                    
0681  push    word ptr [bp-12h]               
0684  push    word ptr [bp-14h]               
0687  call far M007.M007_PUTVALUE             ; AP_STAGE_DELTA_T
068c  push    113h                            
068f  lea     ax,[bp-8h]                      
0692  push    ax                              
0693  call far M007.M007_GETVALUE             ; AP_STAGE_AT_T
0698  mov     bx,ax                           
069a  wait                                    
069b  fld     dword ptr ss:[bx]               
069e  wait                                    
069f  fadd    dword ptr [bp-14h]              
06a2  wait                                    
06a3  fstp    dword ptr [bp-4h]               
06a6  nop                                     
06a7  wait                                    
06a8  push    126h                            
06ab  lea     ax,[bp-0Ch]                     
06ae  push    ax                              
06af  call far M007.M007_GETVALUE             ; AP_STAGE_LOW_T
06b4  mov     bx,ax                           
06b6  wait                                    
06b7  fld     dword ptr ss:[bx]               
06ba  lea     bx,[bp-4h]                      
06bd  wait                                    
06be  fld     dword ptr ss:[bx]               
06c1  wait                                    
06c2  fst     dword ptr [bp-18h]              
06c5  wait                                    
06c6  fcom    st(0),st(1)                     
06c8  wait                                    
06c9  fstp    st(0)                           
06cb  wait                                    
06cc  fstp    st(0)                           
06ce  wait                                    
06cf  fstsw   ax                              
06d1  sahf                                    
06d2  jb      709h                            
06d4  push    125h                            
06d7  lea     ax,[bp-10h]                     
06da  push    ax                              
06db  call far M007.M007_GETVALUE             ; AP_STAGE_HIGH_T
06e0  mov     bx,ax                           
06e2  wait                                    
06e3  fld     dword ptr ss:[bx]               
06e6  wait                                    
06e7  fcom    dword ptr [bp-18h]              
06ea  wait                                    
06eb  fstp    st(0)                           
06ed  wait                                    
06ee  fstsw   ax                              
06f0  sahf                                    
06f1  jb      709h                            
06f3  wait                                    
06f4  fld     dword ptr [bp-18h]              
06f7  sub     sp,4h                           
06fa  mov     bx,sp                           
06fc  wait                                    
06fd  fstp    dword ptr ss:[bx]               
0700  nop                                     
0701  wait                                    
0702  call far sub_4a46                       
0707  jmp     710h                            
0709  push    40h                             
070b  call far USER.MESSAGEBEEP               
0710  pop     ds                              
0711  leave                                   
0712  retf    4h                              
0715  add     [bx+si],al                      

; ===== SETSTAGE_DELTA_R =====
0716  mov     ax,66Bh                         ; segment seg3:0000
0719  enter   8h,0h                           
071d  push    ds                              
071e  mov     ds,ax                           
0720  push    19Eh                            
0723  wait                                    
0724  fld     dword ptr [bp+6h]               
0727  wait                                    
0728  fstp    dword ptr [bp-8h]               
072b  nop                                     
072c  wait                                    
072d  push    word ptr [bp-6h]                
0730  push    word ptr [bp-8h]                
0733  call far M007.M007_PUTVALUE             ; AP_STAGE_DELTA_R
0738  push    112h                            
073b  lea     ax,[bp-4h]                      
073e  push    ax                              
073f  call far M007.M007_GETVALUE             ; AP_STAGE_AT_R
0744  mov     bx,ax                           
0746  wait                                    
0747  fld     dword ptr ss:[bx]               
074a  wait                                    
074b  fadd    dword ptr [bp-8h]               
074e  sub     sp,4h                           
0751  mov     bx,sp                           
0753  wait                                    
0754  fstp    dword ptr ss:[bx]               
0757  nop                                     
0758  wait                                    
0759  call far sub_4944                       
075e  pop     ds                              
075f  leave                                   
0760  retf    4h                              
0763  add     [bx+si],al                      

; ===== SETSTAGE_DELTA_M =====
0764  mov     ax,717h                         ; segment seg3:0000
0767  enter   8h,0h                           
076b  push    ds                              
076c  mov     ds,ax                           
076e  push    19Fh                            
0771  wait                                    
0772  fld     dword ptr [bp+6h]               
0775  wait                                    
0776  fstp    dword ptr [bp-8h]               
0779  nop                                     
077a  wait                                    
077b  push    word ptr [bp-6h]                
077e  push    word ptr [bp-8h]                
0781  call far M007.M007_PUTVALUE             ; AP_STAGE_DELTA_M
0786  push    15Eh                            
0789  lea     ax,[bp-4h]                      
078c  push    ax                              
078d  call far M007.M007_GETVALUE             ; AP_STAGE_AT_M
0792  mov     bx,ax                           
0794  wait                                    
0795  fld     dword ptr ss:[bx]               
0798  wait                                    
0799  fadd    dword ptr [bp-8h]               
079c  sub     sp,4h                           
079f  mov     bx,sp                           
07a1  wait                                    
07a2  fstp    dword ptr ss:[bx]               
07a5  nop                                     
07a6  wait                                    
07a7  call far sub_804c                       
07ac  pop     ds                              
07ad  leave                                   
07ae  retf    4h                              
07b1  add     [bx+si],al                      

; ===== SWITCHJOYSTICK_DISABLE =====
07b2  mov     ax,765h                         ; segment seg3:0000
07b5  push    bp                              
07b6  mov     bp,sp                           
07b8  push    ds                              
07b9  mov     ds,ax                           
07bb  push    13Dh                            
07be  push    word ptr [bp+6h]                
07c1  call far M007.M007_PUTSTATE             ; DP_JOYSTICK_DISABLE
07c6  pop     ds                              
07c7  leave                                   
07c8  retf    2h                              
07cb  add     [bx+si],al                      

; ===== SETXYSTAGE_CENTRE =====
07cc  mov     ax,7B3h                         ; segment seg3:0000
07cf  push    bp                              
07d0  mov     bp,sp                           
07d2  push    ds                              
07d3  mov     ds,ax                           
07d5  push    196h                            
07d8  push    word ptr [bp+0Ch]               
07db  push    word ptr [bp+0Ah]               
07de  push    word ptr [bp+8h]                
07e1  push    word ptr [bp+6h]                
07e4  call far M007.M007_PUTXY                ; AP_STAGE_CENTRE_X
07e9  pop     ds                              
07ea  leave                                   
07eb  retf    8h                              

; ===== SWITCHSURVEY_MODE =====
07ee  mov     ax,7CDh                         ; segment seg3:0000
07f1  push    bp                              
07f2  mov     bp,sp                           
07f4  push    ds                              
07f5  mov     ds,ax                           
07f7  push    143h                            
07fa  push    word ptr [bp+6h]                
07fd  call far M007.M007_PUTSTATE             ; DP_SURVEY_MODE
0802  pop     ds                              
0803  leave                                   
0804  retf    2h                              
0807  add     [bx+si],al                      

; ===== SWITCHNEAR_EXCHANGE =====
0808  mov     ax,7EFh                         ; segment seg3:0000
080b  push    bp                              
080c  mov     bp,sp                           
080e  push    ds                              
080f  mov     ds,ax                           
0811  push    148h                            
0814  push    word ptr [bp+6h]                
0817  call far M007.M007_PUTSTATE             ; DP_NEAR_EXCHANGE
081c  pop     ds                              
081d  leave                                   
081e  retf    2h                              
0821  add     [bx+si],al                      

; ===== SWITCHSAMPLE_HOLDER =====
0822  mov     ax,809h                         ; segment seg3:0000
0825  push    bp                              
0826  mov     bp,sp                           
0828  push    ds                              
0829  mov     ds,ax                           
082b  push    14Ah                            
082e  push    word ptr [bp+6h]                
0831  call far M007.M007_PUTSTATE             ; DP_SAMPLE_HOLDER
0836  pop     ds                              
0837  leave                                   
0838  retf    2h                              
083b  add     [bx+si],al                      

; ===== SETSAMPLE_HOLDER_OFFSET =====
083c  mov     ax,823h                         ; segment seg3:0000
083f  push    bp                              
0840  mov     bp,sp                           
0842  push    ds                              
0843  mov     ds,ax                           
0845  push    1B3h                            
0848  push    word ptr [bp+8h]                
084b  push    word ptr [bp+6h]                
084e  call far M007.M007_PUTVALUE             ; AP_SAMPLE_HOLDER_OFFSET
0853  pop     ds                              
0854  leave                                   
0855  retf    4h                              

; ===== SETSPECIMEN_HEIGHT =====
0858  mov     ax,83Dh                         ; segment seg3:0000
085b  push    bp                              
085c  mov     bp,sp                           
085e  push    ds                              
085f  mov     ds,ax                           
0861  push    1B4h                            
0864  push    word ptr [bp+8h]                
0867  push    word ptr [bp+6h]                
086a  call far M007.M007_PUTVALUE             ; AP_SPECIMEN_HEIGHT
086f  pop     ds                              
0870  leave                                   
0871  retf    4h                              

; ===== SETSAFE_Z =====
0874  mov     ax,859h                         ; segment seg3:0000
0877  push    bp                              
0878  mov     bp,sp                           
087a  push    ds                              
087b  mov     ds,ax                           
087d  push    1C3h                            
0880  push    word ptr [bp+8h]                
0883  push    word ptr [bp+6h]                
0886  call far M007.M007_PUTVALUE             ; AP_SAFE_Z
088b  pop     ds                              
088c  leave                                   
088d  retf    4h                              

; ===== STAGETEMPERATURE =====
0890  mov     ax,875h                         ; segment seg3:0000
0893  enter   8h,0h                           
0897  push    ds                              
0898  mov     ds,ax                           
089a  push    0E6h                            
089d  call far M007.M007_GETSTATE             ; DP_HCSTAGE
08a2  dec     ax                              
08a3  jne     8E1h                            
08a5  cmp     word ptr [32Eh],20h             
08aa  jbe     8E1h                            
08ac  mov     ax,[10D8h]                      
08af  or      ax,[10D6h]                      
08b3  je      8E1h                            
08b5  call    far ptr  [10D6h]                
08b9  mov     [bp-2h],ax                      
08bc  wait                                    
08bd  fild    word ptr [bp-2h]                
08c0  wait                                    
08c1  fmul    dword ptr [0BACh]               ; [ds] = 0.1
08c5  wait                                    
08c6  fst     dword ptr [bp-8h]               
08c9  wait                                    
08ca  fstp    dword ptr [10DAh]               
08ce  wait                                    
08cf  fld     dword ptr [bp-8h]               
08d2  mov     bx,[bp+6h]                      
08d5  wait                                    
08d6  fstp    dword ptr ss:[bx]               
08d9  nop                                     
08da  wait                                    
08db  mov     ax,bx                           
08dd  mov     dx,ss                           
08df  jmp     8F4h                            
08e1  mov     ax,[0BB0h]                      
08e4  mov     bx,[bp+6h]                      
08e7  mov     dx,[0BB2h]                      
08eb  mov     ss:[bx],ax                      
08ee  mov     ss:[bx+2h],dx                   
08f2  jmp     8DBh                            
08f4  pop     ds                              
08f5  leave                                   
08f6  retf    2h                              
