0000  add     [bx+si],al                      
0002  add     [bx+si],al                      
0004  add     [bx+si],al                      
0006  add     [bx+si],al                      
0008  add     [bx+si],al                      
000a  add     [bx+si],al                      
000c  add     [bx+si],al                      
000e  add     [bx+si],al                      
0010  ???                                     
0012  push    ax                              
0013  push    bx                              
0014  push    cx                              
0015  push    dx                              
0016  push    es                              
0017  mov     ax,10h                          
001a  or      ax,ax                           
001c  jns     30h                             
001e  pop     es                              
001f  pop     dx                              
0020  pop     cx                              
0021  pop     bx                              
0022  pop     ax                              
0023  call far KERNEL.INITTASK                
0028  jmp     2Eh                             
002a  nop                                     
002b  xor     ax,ax                           
002d  retf                                    
002e  jmp     54h                             
0030  nop                                     
0031  nop                                     
0032  jmp     42h                             
0034  push    di                              
0035  call far KERNEL.GETMODULEUSAGE          
003a  dec     ax                              
003b  je      42h                             
003d  inc     ax                              
003e  add     sp,0Ah                          
0041  retf                                    
0042  pop     es                              
0043  pop     dx                              
0044  pop     cx                              
0045  pop     bx                              
0046  pop     ax                              
0047  jmp     54h                             
0049  inc     bx                              
004a  inc     sp                              
004b  inc     sp                              
004c  add     [bx+si],ax                      
004e  push    ss                              
004f  add     [4200h],bl                      
0053  add     [si-6F28h],cl                   
0057  inc     bp                              
0058  push    bp                              
0059  mov     bp,sp                           
005b  push    ds                              
005c  mov     ds,ax                           
005e  push    di                              
005f  push    si                              
0060  mov     [0C8h],di                       
0064  mov     [0CAh],ds                       
0068  mov     [0CCh],cx                       
006c  mov     [0CEh],bx                       
0070  mov     [0D0h],si                       
0074  jcxz    84h                             
0076  push    ds                              
0077  xor     ax,ax                           
0079  push    ax                              
007a  push    cx                              
007b  call far KERNEL.LOCALINIT               
0080  or      ax,ax                           
0082  je      0EDh                            
0084  mov     ax,0FFFFh                       
0087  push    ax                              
0088  call far KERNEL.LOCKSEGMENT             
008d  call far KERNEL.GETVERSION              
0092  xchg    al,ah                           
0094  mov     [102h],ax                       
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [106h],ax                       
00ae  xchg    al,ah                           
00b0  mov     [104h],ax                       
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [109h],al                       
00c1  call far sub_0270                       
00c6  call far sub_0378                       
00cb  inc     byte ptr [0D2h]                 
00cf  push    word ptr [12Ah]                 
00d3  push    word ptr [128h]                 ; [ds] f32 here = 0
00d7  push    word ptr [126h]                 ; [ds] f32 here = 0
00db  push    word ptr [124h]                 ; [ds] f32 here = 0
00df  push    word ptr [122h]                 ; [ds] f32 here = 0
00e3  call far sub_0244                       
00e8  add     sp,0Ah                          
00eb  pop     si                              
00ec  pop     di                              
00ed  sub     bp,2h                           
00f0  mov     sp,bp                           
00f2  pop     ds                              
00f3  pop     bp                              
00f4  dec     bp                              
00f5  retf                                    
00f6  mov     ax,ds                           
00f8  nop                                     
00f9  inc     bp                              
00fa  push    bp                              
00fb  mov     bp,sp                           
00fd  push    ds                              
00fe  mov     ds,ax                           
0100  mov     ax,1h                           
0103  sub     bp,2h                           
0106  mov     sp,bp                           
0108  pop     ds                              
0109  pop     bp                              
010a  dec     bp                              
010b  retf    0Ah                             

; ----- sub_010e -----
010e  push    bp                              
010f  mov     bp,sp                           
0111  push    di                              
0112  push    si                              
0113  push    bx                              
0114  xor     di,di                           
0116  mov     ax,[bp+8h]                      
0119  or      ax,ax                           
011b  jge     12Eh                            
011d  inc     di                              
011e  mov     dx,[bp+6h]                      
0121  neg     ax                              
0123  neg     dx                              
0125  sbb     ax,0h                           
0128  mov     [bp+8h],ax                      
012b  mov     [bp+6h],dx                      
012e  mov     ax,[bp+0Ch]                     
0131  or      ax,ax                           
0133  jge     146h                            
0135  inc     di                              
0136  mov     dx,[bp+0Ah]                     
0139  neg     ax                              
013b  neg     dx                              
013d  sbb     ax,0h                           
0140  mov     [bp+0Ch],ax                     
0143  mov     [bp+0Ah],dx                     
0146  or      ax,ax                           
0148  jne     15Fh                            
014a  mov     cx,[bp+0Ah]                     
014d  mov     ax,[bp+8h]                      
0150  xor     dx,dx                           
0152  div     cx                              
0154  mov     bx,ax                           
0156  mov     ax,[bp+6h]                      
0159  div     cx                              
015b  mov     dx,bx                           
015d  jmp     197h                            
015f  mov     bx,ax                           
0161  mov     cx,[bp+0Ah]                     
0164  mov     dx,[bp+8h]                      
0167  mov     ax,[bp+6h]                      
016a  shr     bx,1                            
016c  rcr     cx,1                            
016e  shr     dx,1                            
0170  rcr     ax,1                            
0172  or      bx,bx                           
0174  jne     16Ah                            
0176  div     cx                              
0178  mov     si,ax                           
017a  mul     word ptr [bp+0Ch]               
017d  xchg    ax,cx                           
017e  mov     ax,[bp+0Ah]                     
0181  mul     si                              
0183  add     dx,cx                           
0185  jb      193h                            
0187  cmp     dx,[bp+8h]                      
018a  ja      193h                            
018c  jb      194h                            
018e  cmp     ax,[bp+6h]                      
0191  jbe     194h                            
0193  dec     si                              
0194  xor     dx,dx                           
0196  xchg    ax,si                           
0197  dec     di                              
0198  jne     1A1h                            
019a  neg     dx                              
019c  neg     ax                              
019e  sbb     dx,0h                           
01a1  pop     bx                              
01a2  pop     si                              
01a3  pop     di                              
01a4  pop     bp                              
01a5  retf    8h                              

; ----- sub_01a8 -----
01a8  push    bp                              
01a9  mov     bp,sp                           
01ab  mov     ax,[bp+8h]                      
01ae  mov     cx,[bp+0Ch]                     
01b1  or      cx,ax                           
01b3  mov     cx,[bp+0Ah]                     
01b6  jne     1C1h                            
01b8  mov     ax,[bp+6h]                      
01bb  mul     cx                              
01bd  pop     bp                              
01be  retf    8h                              
01c1  push    bx                              
01c2  mul     cx                              
01c4  mov     bx,ax                           
01c6  mov     ax,[bp+6h]                      
01c9  mul     word ptr [bp+0Ch]               
01cc  add     bx,ax                           
01ce  mov     ax,[bp+6h]                      
01d1  mul     cx                              
01d3  add     dx,bx                           
01d5  pop     bx                              
01d6  pop     bp                              
01d7  retf    8h                              

; ----- sub_01da -----
01da  xor     ch,ch                           
01dc  jcxz    1E4h                            
01de  shl     ax,1                            
01e0  rcl     dx,1                            
01e2  loop    1DEh                            
01e4  retf                                    
01e5  add     [bx+si],al                      

; ----- sub_01e6 -----
01e6  xor     ch,ch                           
01e8  jcxz    1F0h                            
01ea  shr     dx,1                            
01ec  rcr     ax,1                            
01ee  loop    1EAh                            
01f0  retf                                    
01f1  add     [bx+si],al                      

; ----- sub_01f2 -----
01f2  mov     ax,ds                           
01f4  nop                                     
01f5  inc     bp                              
01f6  push    bp                              
01f7  mov     bp,sp                           
01f9  push    ds                              
01fa  mov     ds,ax                           
01fc  sub     sp,0Ch                          
01ff  push    bx                              
0200  push    cx                              
0201  push    si                              
0202  push    di                              
0203  wait                                    
0204  fstcw   word ptr [bp-4h]                
0207  nop                                     
0208  wait                                    
0209  mov     ax,[bp-4h]                      
020c  or      ah,0Ch                          
020f  mov     [bp-6h],ax                      
0212  wait                                    
0213  fldcw   word ptr [bp-6h]                
0216  wait                                    
0217  fistp   qword ptr [bp-0Eh]              
021a  wait                                    
021b  fldcw   word ptr [bp-4h]                
021e  mov     ax,[bp-0Eh]                     
0221  mov     dx,[bp-0Ch]                     
0224  pop     di                              
0225  pop     si                              
0226  pop     cx                              
0227  pop     bx                              
0228  lea     sp,[bp-2h]                      
022b  pop     ds                              
022c  pop     bp                              
022d  dec     bp                              
022e  retf                                    
022f  add     [bp+57h],dl                     
0232  mov     ax,ds                           
0234  mov     es,ax                           
0236  mov     si,0DCh                         
0239  mov     di,138h                         
023c  mov     cx,0Ah                          
023f  rep     movsw                           
0241  pop     di                              
0242  pop     si                              
0243  retf                                    

; ----- sub_0244 -----
0244  mov     ax,ds                           
0246  nop                                     
0247  inc     bp                              
0248  push    bp                              
0249  mov     bp,sp                           
024b  push    ds                              
024c  mov     ds,ax                           
024e  push    word ptr [0C8h]                 ; [ds] f32 here = 0
0252  push    word ptr [0CAh]                 ; [ds] f32 here = 0
0256  push    word ptr [0CCh]                 ; [ds] f32 here = 0
025a  push    word ptr [0D0h]                 
025e  push    word ptr [0CEh]                 ; [ds] f32 here = 0
0262  call far sub_1e70                       
0267  sub     bp,2h                           
026a  mov     sp,bp                           
026c  pop     ds                              
026d  pop     bp                              
026e  dec     bp                              
026f  retf                                    

; ----- sub_0270 -----
0270  mov     ax,ds                           
0272  nop                                     
0273  inc     bp                              
0274  push    bp                              
0275  mov     bp,sp                           
0277  push    ds                              
0278  mov     ds,ax                           
027a  mov     cx,[2FAh]                       
027e  jcxz    294h                            
0280  xor     si,si                           
0282  mov     ax,[2FCh]                       
0285  mov     dx,[2FEh]                       
0289  xor     bx,bx                           
028b  call    far ptr  [2F8h]                 
028f  jae     294h                            
0291  jmp     0B3Eh                           
0294  mov     si,308h                         
0297  mov     di,308h                         
029a  call    340h                            
029d  mov     si,304h                         
02a0  mov     di,308h                         
02a3  call    340h                            
02a6  mov     si,308h                         
02a9  mov     di,308h                         
02ac  call    340h                            
02af  sub     bp,2h                           
02b2  mov     sp,bp                           
02b4  pop     ds                              
02b5  pop     bp                              
02b6  dec     bp                              
02b7  retf                                    
02b8  mov     ax,ds                           
02ba  nop                                     
02bb  inc     bp                              
02bc  push    bp                              
02bd  mov     bp,sp                           
02bf  push    ds                              
02c0  mov     ds,ax                           
02c2  push    si                              
02c3  push    di                              
02c4  mov     cx,100h                         
02c7  jmp     2D8h                            
02c9  mov     ax,ds                           
02cb  nop                                     
02cc  inc     bp                              
02cd  push    bp                              
02ce  mov     bp,sp                           
02d0  push    ds                              
02d1  mov     ds,ax                           
02d3  push    si                              
02d4  push    di                              
02d5  mov     cx,101h                         
02d8  mov     [133h],ch                       
02dc  push    cx                              
02dd  or      cl,cl                           
02df  jne     2F3h                            
02e1  mov     si,7E6h                         
02e4  mov     di,7E6h                         
02e7  call    340h                            
02ea  mov     si,308h                         
02ed  mov     di,308h                         
02f0  call    340h                            
02f3  mov     si,308h                         
02f6  mov     di,308h                         
02f9  call    340h                            
02fc  mov     si,308h                         
02ff  mov     di,308h                         
0302  call    340h                            
0305  call    1518h                           
0308  call    0B82h                           
030b  pop     ax                              
030c  pop     di                              
030d  pop     si                              
030e  sub     bp,2h                           
0311  mov     sp,bp                           
0313  pop     ds                              
0314  pop     bp                              
0315  dec     bp                              
0316  retf                                    
0317  mov     cx,[2FAh]                       
031b  jcxz    324h                            
031d  mov     bx,2h                           
0320  call    far ptr  [2F8h]                 
0324  push    ds                              
0325  lds     dx,[0F0h]                       
0329  mov     ax,2500h                        
032c  test    word ptr cs:[10h],1h            
0333  je      33Ch                            
0335  call far KERNEL.DOS3CALL                
033a  jmp     33Eh                            
033c  int     21h                             
033e  pop     ds                              
033f  ret                                     

; ----- sub_0340 -----
0340  cmp     si,di                           
0342  jae     352h                            
0344  sub     di,4h                           
0347  mov     ax,[di]                         
0349  or      ax,[di+2h]                      
034c  je      340h                            
034e  call    far ptr  [di]                   
0350  jmp     340h                            
0352  ret                                     
0353  add     [bx+si],al                      

; ----- sub_0354 -----
0354  mov     ax,ds                           
0356  nop                                     
0357  inc     bp                              
0358  push    bp                              
0359  mov     bp,sp                           
035b  push    ds                              
035c  mov     ds,ax                           
035e  mov     ax,0FCh                         
0361  push    ax                              
0362  push    cs                              
0363  call    0ADBh                           
0366  mov     ax,0FFh                         
0369  push    ax                              
036a  push    cs                              
036b  call    0ADBh                           
036e  sub     bp,2h                           
0371  mov     sp,bp                           
0373  pop     ds                              
0374  pop     bp                              
0375  dec     bp                              
0376  retf                                    
0377  add     [bx+si],al                      

; ----- sub_0378 -----
0378  mov     ax,ds                           
037a  nop                                     
037b  inc     bp                              
037c  push    bp                              
037d  mov     bp,sp                           
037f  push    ds                              
0380  mov     ds,ax                           
0382  sub     sp,6h                           
0385  push    ds                              
0386  call far KERNEL.GETDOSENVIRONMENT       
038b  or      ax,ax                           
038d  je      392h                            
038f  mov     dx,0h                           
0392  mov     bx,dx                           
0394  mov     es,dx                           
0396  mov     [bp-4h],es                      
0399  mov     [bp-8h],ds                      
039c  xor     ax,ax                           
039e  xor     si,si                           
03a0  xor     di,di                           
03a2  mov     cx,0FFFFh                       
03a5  or      bx,bx                           
03a7  je      3B7h                            
03a9  cmp     byte ptr es:[0h],0h             
03af  je      3B7h                            
03b1  repne   scasb                           
03b3  inc     si                              
03b4  scasb                                   
03b5  jne     3B1h                            
03b7  mov     ax,di                           
03b9  inc     ax                              
03ba  and     al,0FEh                         
03bc  inc     si                              
03bd  mov     di,si                           
03bf  shl     si,1                            
03c1  shl     si,1                            
03c3  mov     cx,9h                           
03c6  call    0B44h                           
03c9  push    dx                              
03ca  push    ax                              
03cb  mov     ax,si                           
03cd  call    0B44h                           
03d0  mov     [128h],ax                       
03d3  mov     [12Ah],dx                       
03d7  mov     [bp-6h],dx                      
03da  push    es                              
03db  pop     ds                              
03dc  mov     cx,di                           
03de  mov     bx,ax                           
03e0  xor     si,si                           
03e2  pop     di                              
03e3  pop     es                              
03e4  dec     cx                              
03e5  jcxz    3FDh                            
03e7  mov     ds,[bp-6h]                      
03ea  mov     [bx],di                         
03ec  mov     [bx+2h],es                      
03ef  add     bx,4h                           
03f2  mov     ds,[bp-4h]                      
03f5  lodsb                                   
03f6  stosb                                   
03f7  or      al,al                           
03f9  jne     3F5h                            
03fb  loop    3E7h                            
03fd  mov     ds,[bp-6h]                      
0400  mov     [bx],cx                         
0402  mov     [bx+2h],cx                      
0405  pop     ds                              
0406  sub     bp,2h                           
0409  mov     sp,bp                           
040b  pop     ds                              
040c  pop     bp                              
040d  dec     bp                              
040e  retf                                    
040f  add     [si-6F28h],cl                   
0413  inc     bp                              
0414  push    bp                              
0415  mov     bp,sp                           
0417  push    ds                              
0418  mov     ds,ax                           
041a  sub     sp,0Ah                          
041d  les     bx,[bp+6h]                      
0420  mov     al,es:[bx]                      
0423  cbw                                     
0424  mov     bx,ax                           
0426  test    byte ptr [bx+167h],1h           
042b  je      432h                            
042d  lea     ax,[bx+20h]                     
0430  jmp     439h                            
0432  mov     bx,[bp+6h]                      
0435  mov     al,es:[bx]                      
0438  cbw                                     
0439  cmp     ax,65h                          
043c  je      451h                            
043e  inc     word ptr [bp+6h]                
0441  mov     bx,[bp+6h]                      
0444  mov     al,es:[bx]                      
0447  cbw                                     
0448  mov     bx,ax                           
044a  test    byte ptr [bx+167h],4h           
044f  jne     43Eh                            
0451  mov     bx,[bp+6h]                      
0454  mov     al,es:[bx]                      
0457  mov     [bp-4h],al                      
045a  mov     byte ptr es:[bx],2Eh            
045e  inc     word ptr [bp+6h]                
0461  mov     bx,[bp+6h]                      
0464  mov     al,es:[bx]                      
0467  mov     [bp-6h],al                      
046a  mov     al,[bp-4h]                      
046d  mov     es:[bx],al                      
0470  mov     al,[bp-6h]                      
0473  mov     [bp-4h],al                      
0476  inc     word ptr [bp+6h]                
0479  cmp     byte ptr es:[bx],0h             
047d  jne     461h                            
047f  lea     sp,[bp-2h]                      
0482  pop     ds                              
0483  pop     bp                              
0484  dec     bp                              
0485  retf                                    
0486  mov     ax,ds                           
0488  nop                                     
0489  inc     bp                              
048a  push    bp                              
048b  mov     bp,sp                           
048d  push    ds                              
048e  mov     ds,ax                           
0490  sub     sp,8h                           
0493  jmp     49Fh                            
0495  nop                                     
0496  cmp     byte ptr es:[bx],2Eh            
049a  je      4A8h                            
049c  inc     word ptr [bp+6h]                
049f  les     bx,[bp+6h]                      
04a2  cmp     byte ptr es:[bx],0h             
04a6  jne     496h                            
04a8  inc     word ptr [bp+6h]                
04ab  cmp     byte ptr es:[bx],0h             
04af  je      503h                            
04b1  jmp     4C3h                            
04b3  nop                                     
04b4  cmp     byte ptr es:[bx],65h            
04b8  je      4CCh                            
04ba  cmp     byte ptr es:[bx],45h            
04be  je      4CCh                            
04c0  inc     word ptr [bp+6h]                
04c3  mov     bx,[bp+6h]                      
04c6  cmp     byte ptr es:[bx],0h             
04ca  jne     4B4h                            
04cc  dec     word ptr [bp+6h]                
04cf  mov     [bp-6h],bx                      
04d2  mov     [bp-4h],es                      
04d5  jmp     4DBh                            
04d7  nop                                     
04d8  dec     word ptr [bp+6h]                
04db  mov     bx,[bp+6h]                      
04de  cmp     byte ptr es:[bx],30h            
04e2  je      4D8h                            
04e4  cmp     byte ptr es:[bx],2Eh            
04e8  jne     4EDh                            
04ea  dec     word ptr [bp+6h]                
04ed  les     bx,[bp-6h]                      
04f0  inc     word ptr [bp-6h]                
04f3  mov     al,es:[bx]                      
04f6  inc     word ptr [bp+6h]                
04f9  les     bx,[bp+6h]                      
04fc  mov     es:[bx],al                      
04ff  or      al,al                           
0501  jne     4EDh                            
0503  lea     sp,[bp-2h]                      
0506  pop     ds                              
0507  pop     bp                              
0508  dec     bp                              
0509  retf                                    
050a  mov     ax,ds                           
050c  nop                                     
050d  inc     bp                              
050e  push    bp                              
050f  mov     bp,sp                           
0511  push    ds                              
0512  mov     ds,ax                           
0514  sub     sp,2h                           
0517  les     bx,[bp+6h]                      
051a  wait                                    
051b  fld     qword ptr es:[bx]               
051e  wait                                    
051f  fcom    qword ptr [330h]                ; [ds] = 0
0523  wait                                    
0524  fstp    st(0)                           
0526  wait                                    
0527  fstsw   word ptr [bp-4h]                
052a  nop                                     
052b  wait                                    
052c  mov     ah,[bp-3h]                      
052f  sahf                                    
0530  jb      538h                            
0532  mov     ax,1h                           
0535  jmp     53Ah                            
0537  nop                                     
0538  xor     ax,ax                           
053a  lea     sp,[bp-2h]                      
053d  pop     ds                              
053e  pop     bp                              
053f  dec     bp                              
0540  retf                                    
0541  nop                                     
0542  mov     ax,ds                           
0544  nop                                     
0545  inc     bp                              
0546  push    bp                              
0547  mov     bp,sp                           
0549  push    ds                              
054a  mov     ds,ax                           
054c  push    di                              
054d  push    si                              
054e  cmp     word ptr [bp+6h],0h             
0552  je      572h                            
0554  push    word ptr [bp+0Eh]               
0557  push    word ptr [bp+0Ch]               
055a  call far sub_0b84                       
055f  add     sp,4h                           
0562  push    ds                              
0563  mov     si,ax                           
0565  mov     ds,dx                           
0567  les     di,[bp+8h]                      
056a  movsw                                   
056b  movsw                                   
056c  movsw                                   
056d  movsw                                   
056e  pop     ds                              
056f  jmp     591h                            
0571  nop                                     
0572  push    word ptr [bp+0Eh]               
0575  push    word ptr [bp+0Ch]               
0578  call far sub_0b84                       
057d  add     sp,4h                           
0580  mov     es,dx                           
0582  mov     bx,ax                           
0584  wait                                    
0585  fld     qword ptr es:[bx]               
0588  les     bx,[bp+8h]                      
058b  wait                                    
058c  fstp    dword ptr es:[bx]               
058f  nop                                     
0590  wait                                    
0591  pop     si                              
0592  pop     di                              
0593  lea     sp,[bp-2h]                      
0596  pop     ds                              
0597  pop     bp                              
0598  dec     bp                              
0599  retf                                    

; ----- sub_059a -----
059a  mov     ax,ds                           
059c  nop                                     
059d  inc     bp                              
059e  push    bp                              
059f  mov     bp,sp                           
05a1  push    ds                              
05a2  mov     ds,ax                           
05a4  sub     sp,0Ah                          
05a7  push    si                              
05a8  cmp     byte ptr [15Ah],0h              
05ad  je      5F0h                            
05af  mov     ax,[7D2h]                       
05b2  mov     dx,[7D4h]                       
05b6  mov     [bp-6h],ax                      
05b9  mov     [bp-4h],dx                      
05bc  mov     es,dx                           
05be  mov     bx,ax                           
05c0  cmp     word ptr es:[bx],2Dh            
05c4  jne     5CCh                            
05c6  mov     ax,1h                           
05c9  jmp     5CEh                            
05cb  nop                                     
05cc  xor     ax,ax                           
05ce  add     ax,[bp+0Ah]                     
05d1  mov     dx,[bp+0Ch]                     
05d4  mov     [bp-0Ah],ax                     
05d7  mov     [bp-8h],dx                      
05da  push    dx                              
05db  push    ax                              
05dc  cmp     word ptr [bp+0Eh],0h            
05e0  jle     5E8h                            
05e2  mov     ax,1h                           
05e5  jmp     5EAh                            
05e7  nop                                     
05e8  xor     ax,ax                           
05ea  push    ax                              
05eb  call    0A4Ch                           
05ee  jmp     64Bh                            
05f0  les     bx,[bp+6h]                      
05f3  push    word ptr es:[bx+6h]             
05f7  push    word ptr es:[bx+4h]             
05fb  push    word ptr es:[bx+2h]             
05ff  push    word ptr es:[bx]                
0602  call far sub_0df8                       
0607  add     sp,8h                           
060a  mov     [bp-6h],ax                      
060d  mov     [bp-4h],dx                      
0610  push    dx                              
0611  push    ax                              
0612  mov     ax,[bp+0Eh]                     
0615  inc     ax                              
0616  push    ax                              
0617  les     bx,[bp-6h]                      
061a  cmp     word ptr es:[bx],2Dh            
061e  jne     626h                            
0620  mov     ax,1h                           
0623  jmp     628h                            
0625  nop                                     
0626  xor     ax,ax                           
0628  mov     [bp-0Ch],ax                     
062b  cmp     word ptr [bp+0Eh],0h            
062f  jle     636h                            
0631  mov     ax,1h                           
0634  jmp     638h                            
0636  xor     ax,ax                           
0638  add     ax,[bp-0Ch]                     
063b  add     ax,[bp+0Ah]                     
063e  mov     dx,[bp+0Ch]                     
0641  push    dx                              
0642  push    ax                              
0643  call far sub_0be2                       
0648  add     sp,0Ah                          
064b  mov     ax,[bp+0Ah]                     
064e  mov     dx,[bp+0Ch]                     
0651  mov     [bp-0Ah],ax                     
0654  mov     [bp-8h],dx                      
0657  les     bx,[bp-6h]                      
065a  cmp     word ptr es:[bx],2Dh            
065e  jne     66Ch                            
0660  mov     bx,ax                           
0662  mov     es,dx                           
0664  mov     byte ptr es:[bx],2Dh            
0668  inc     ax                              
0669  mov     [bp-0Ah],ax                     
066c  cmp     word ptr [bp+0Eh],0h            
0670  jle     684h                            
0672  les     bx,[bp-0Ah]                     
0675  mov     al,es:[bx+1h]                   
0679  mov     es:[bx],al                      
067c  inc     bx                              
067d  mov     [bp-0Ah],bx                     
0680  mov     byte ptr es:[bx],2Eh            
0684  mov     ax,15Fh                         
0687  push    ds                              
0688  push    ax                              
0689  cmp     byte ptr [15Ah],1h              
068e  sbb     ax,ax                           
0690  neg     ax                              
0692  add     ax,[bp-0Ah]                     
0695  mov     dx,[bp-8h]                      
0698  add     ax,[bp+0Eh]                     
069b  push    dx                              
069c  push    ax                              
069d  call far sub_0caa                       
06a2  add     sp,8h                           
06a5  mov     [bp-0Ah],ax                     
06a8  mov     [bp-8h],dx                      
06ab  cmp     word ptr [bp+10h],0h            
06af  je      6B8h                            
06b1  les     bx,[bp-0Ah]                     
06b4  mov     byte ptr es:[bx],45h            
06b8  inc     word ptr [bp-0Ah]               
06bb  les     bx,[bp-6h]                      
06be  les     bx,es:[bx+6h]                   
06c2  cmp     byte ptr es:[bx],30h            
06c6  je      724h                            
06c8  les     bx,[bp-6h]                      
06cb  mov     si,es:[bx+2h]                   
06cf  dec     si                              
06d0  jns     6DFh                            
06d2  mov     ax,si                           
06d4  neg     ax                              
06d6  mov     si,ax                           
06d8  les     bx,[bp-0Ah]                     
06db  mov     byte ptr es:[bx],2Dh            
06df  inc     word ptr [bp-0Ah]               
06e2  cmp     si,64h                          
06e5  jl      6FCh                            
06e7  mov     ax,si                           
06e9  mov     cx,64h                          
06ec  cwd                                     
06ed  idiv    cx                              
06ef  les     bx,[bp-0Ah]                     
06f2  add     es:[bx],al                      
06f5  mov     ax,si                           
06f7  cwd                                     
06f8  idiv    cx                              
06fa  mov     si,dx                           
06fc  inc     word ptr [bp-0Ah]               
06ff  cmp     si,0Ah                          
0702  jl      719h                            
0704  mov     ax,si                           
0706  mov     cx,0Ah                          
0709  cwd                                     
070a  idiv    cx                              
070c  les     bx,[bp-0Ah]                     
070f  add     es:[bx],al                      
0712  mov     ax,si                           
0714  cwd                                     
0715  idiv    cx                              
0717  mov     si,dx                           
0719  mov     ax,si                           
071b  inc     word ptr [bp-0Ah]               
071e  les     bx,[bp-0Ah]                     
0721  add     es:[bx],al                      
0724  mov     ax,[bp+0Ah]                     
0727  mov     dx,[bp+0Ch]                     
072a  pop     si                              
072b  lea     sp,[bp-2h]                      
072e  pop     ds                              
072f  pop     bp                              
0730  dec     bp                              
0731  retf                                    

; ----- sub_0732 -----
0732  mov     ax,ds                           
0734  nop                                     
0735  inc     bp                              
0736  push    bp                              
0737  mov     bp,sp                           
0739  push    ds                              
073a  mov     ds,ax                           
073c  sub     sp,4h                           
073f  mov     byte ptr [15Ah],1h              
0744  push    word ptr [bp+10h]               
0747  push    word ptr [bp+0Eh]               
074a  push    word ptr [bp+0Ch]               
074d  push    word ptr [bp+0Ah]               
0750  push    word ptr [bp+8h]                
0753  push    word ptr [bp+6h]                
0756  push    cs                              
0757  call    59Ah                            
075a  mov     byte ptr [15Ah],0h              
075f  lea     sp,[bp-2h]                      
0762  pop     ds                              
0763  pop     bp                              
0764  dec     bp                              
0765  retf                                    

; ----- sub_0766 -----
0766  mov     ax,ds                           
0768  nop                                     
0769  inc     bp                              
076a  push    bp                              
076b  mov     bp,sp                           
076d  push    ds                              
076e  mov     ds,ax                           
0770  sub     sp,0Eh                          
0773  push    si                              
0774  cmp     byte ptr [15Ah],0h              
0779  je      7C2h                            
077b  mov     ax,[7D2h]                       
077e  mov     dx,[7D4h]                       
0782  mov     [bp-6h],ax                      
0785  mov     [bp-4h],dx                      
0788  mov     es,dx                           
078a  mov     bx,ax                           
078c  cmp     word ptr es:[bx],2Dh            
0790  jne     798h                            
0792  mov     ax,1h                           
0795  jmp     79Ah                            
0797  nop                                     
0798  xor     ax,ax                           
079a  add     ax,[bp+0Ah]                     
079d  mov     dx,[bp+0Ch]                     
07a0  mov     [bp-0Ah],ax                     
07a3  mov     [bp-8h],dx                      
07a6  mov     cx,[15Ch]                       
07aa  cmp     [bp+0Eh],cx                     
07ad  jne     80Ch                            
07af  mov     es,dx                           
07b1  mov     bx,ax                           
07b3  mov     si,cx                           
07b5  mov     byte ptr es:[bx+si],30h         
07b9  add     bx,cx                           
07bb  inc     bx                              
07bc  mov     byte ptr es:[bx],0h             
07c0  jmp     80Ch                            
07c2  les     bx,[bp+6h]                      
07c5  push    word ptr es:[bx+6h]             
07c9  push    word ptr es:[bx+4h]             
07cd  push    word ptr es:[bx+2h]             
07d1  push    word ptr es:[bx]                
07d4  call far sub_0df8                       
07d9  add     sp,8h                           
07dc  mov     [bp-6h],ax                      
07df  mov     [bp-4h],dx                      
07e2  push    dx                              
07e3  les     bx,[bp-6h]                      
07e6  push    ax                              
07e7  mov     ax,es:[bx+2h]                   
07eb  add     ax,[bp+0Eh]                     
07ee  push    ax                              
07ef  cmp     word ptr es:[bx],2Dh            
07f3  jne     7FAh                            
07f5  mov     ax,1h                           
07f8  jmp     7FCh                            
07fa  xor     ax,ax                           
07fc  add     ax,[bp+0Ah]                     
07ff  mov     dx,[bp+0Ch]                     
0802  push    dx                              
0803  push    ax                              
0804  call far sub_0be2                       
0809  add     sp,0Ah                          
080c  mov     ax,[bp+0Ah]                     
080f  mov     dx,[bp+0Ch]                     
0812  mov     [bp-0Ah],ax                     
0815  mov     [bp-8h],dx                      
0818  les     bx,[bp-6h]                      
081b  cmp     word ptr es:[bx],2Dh            
081f  jne     82Dh                            
0821  mov     bx,ax                           
0823  mov     es,dx                           
0825  mov     byte ptr es:[bx],2Dh            
0829  inc     ax                              
082a  mov     [bp-0Ah],ax                     
082d  les     bx,[bp-6h]                      
0830  cmp     word ptr es:[bx+2h],0h          
0835  jg      850h                            
0837  push    word ptr [bp-8h]                
083a  push    word ptr [bp-0Ah]               
083d  mov     ax,1h                           
0840  push    ax                              
0841  call    0A4Ch                           
0844  les     bx,[bp-0Ah]                     
0847  inc     word ptr [bp-0Ah]               
084a  mov     byte ptr es:[bx],30h            
084e  jmp     857h                            
0850  mov     ax,es:[bx+2h]                   
0854  add     [bp-0Ah],ax                     
0857  cmp     word ptr [bp+0Eh],0h            
085b  jle     8BEh                            
085d  push    word ptr [bp-8h]                
0860  push    word ptr [bp-0Ah]               
0863  mov     ax,1h                           
0866  push    ax                              
0867  call    0A4Ch                           
086a  les     bx,[bp-0Ah]                     
086d  inc     word ptr [bp-0Ah]               
0870  mov     byte ptr es:[bx],2Eh            
0874  les     bx,[bp-6h]                      
0877  cmp     word ptr es:[bx+2h],0h          
087c  jge     8BEh                            
087e  cmp     byte ptr [15Ah],0h              
0883  je      88Eh                            
0885  mov     ax,es:[bx+2h]                   
0889  neg     ax                              
088b  jmp     89Ch                            
088d  nop                                     
088e  mov     ax,es:[bx+2h]                   
0892  neg     ax                              
0894  cmp     ax,[bp+0Eh]                     
0897  jle     89Ch                            
0899  mov     ax,[bp+0Eh]                     
089c  mov     [bp+0Eh],ax                     
089f  push    word ptr [bp-8h]                
08a2  push    word ptr [bp-0Ah]               
08a5  push    ax                              
08a6  call    0A4Ch                           
08a9  push    word ptr [bp+0Eh]               
08ac  mov     ax,30h                          
08af  push    ax                              
08b0  push    word ptr [bp-8h]                
08b3  push    word ptr [bp-0Ah]               
08b6  call far sub_0ce6                       
08bb  add     sp,8h                           
08be  mov     ax,[bp+0Ah]                     
08c1  mov     dx,[bp+0Ch]                     
08c4  pop     si                              
08c5  lea     sp,[bp-2h]                      
08c8  pop     ds                              
08c9  pop     bp                              
08ca  dec     bp                              
08cb  retf                                    

; ----- sub_08cc -----
08cc  mov     ax,ds                           
08ce  nop                                     
08cf  inc     bp                              
08d0  push    bp                              
08d1  mov     bp,sp                           
08d3  push    ds                              
08d4  mov     ds,ax                           
08d6  sub     sp,4h                           
08d9  mov     byte ptr [15Ah],1h              
08de  push    word ptr [bp+0Eh]               
08e1  push    word ptr [bp+0Ch]               
08e4  push    word ptr [bp+0Ah]               
08e7  push    word ptr [bp+8h]                
08ea  push    word ptr [bp+6h]                
08ed  push    cs                              
08ee  call    766h                            
08f1  mov     byte ptr [15Ah],0h              
08f6  lea     sp,[bp-2h]                      
08f9  pop     ds                              
08fa  pop     bp                              
08fb  dec     bp                              
08fc  retf                                    
08fd  nop                                     

; ----- sub_08fe -----
08fe  mov     ax,ds                           
0900  nop                                     
0901  inc     bp                              
0902  push    bp                              
0903  mov     bp,sp                           
0905  push    ds                              
0906  mov     ds,ax                           
0908  sub     sp,0Ah                          
090b  les     bx,[bp+6h]                      
090e  push    word ptr es:[bx+6h]             
0912  push    word ptr es:[bx+4h]             
0916  push    word ptr es:[bx+2h]             
091a  push    word ptr es:[bx]                
091d  call far sub_0df8                       
0922  add     sp,8h                           
0925  mov     [7D2h],ax                       
0928  mov     [7D4h],dx                       
092c  les     bx,[7D2h]                       
0930  mov     ax,es:[bx+2h]                   
0934  dec     ax                              
0935  mov     [15Ch],ax                       
0938  cmp     word ptr es:[bx],2Dh            
093c  jne     944h                            
093e  mov     ax,1h                           
0941  jmp     946h                            
0943  nop                                     
0944  xor     ax,ax                           
0946  add     ax,[bp+0Ah]                     
0949  mov     dx,[bp+0Ch]                     
094c  mov     [bp-6h],ax                      
094f  mov     [bp-4h],dx                      
0952  push    es                              
0953  push    bx                              
0954  push    word ptr [bp+0Eh]               
0957  push    dx                              
0958  push    ax                              
0959  call far sub_0be2                       
095e  add     sp,0Ah                          
0961  les     bx,[7D2h]                       
0965  mov     ax,es:[bx+2h]                   
0969  dec     ax                              
096a  mov     [bp-8h],ax                      
096d  cmp     ax,[15Ch]                       
0971  jle     978h                            
0973  mov     al,1h                           
0975  jmp     97Ah                            
0977  nop                                     
0978  xor     al,al                           
097a  mov     [15Eh],al                       
097d  mov     ax,[bp-8h]                      
0980  mov     [15Ch],ax                       
0983  cmp     ax,0FFFCh                       
0986  jl      98Dh                            
0988  cmp     ax,[bp+0Eh]                     
098b  jl      9A8h                            
098d  push    word ptr [bp+10h]               
0990  push    word ptr [bp+0Eh]               
0993  push    word ptr [bp+0Ch]               
0996  push    word ptr [bp+0Ah]               
0999  push    word ptr [bp+8h]                
099c  push    word ptr [bp+6h]                
099f  push    cs                              
09a0  call    732h                            
09a3  add     sp,0Ch                          
09a6  jmp     9D6h                            
09a8  cmp     byte ptr [15Eh],0h              
09ad  je      9C3h                            
09af  les     bx,[bp-6h]                      
09b2  inc     word ptr [bp-6h]                
09b5  cmp     byte ptr es:[bx],0h             
09b9  jne     9AFh                            
09bb  mov     bx,[bp-6h]                      
09be  mov     byte ptr es:[bx-2h],0h          
09c3  push    word ptr [bp+0Eh]               
09c6  push    word ptr [bp+0Ch]               
09c9  push    word ptr [bp+0Ah]               
09cc  push    word ptr [bp+8h]                
09cf  push    word ptr [bp+6h]                
09d2  push    cs                              
09d3  call    8CCh                            
09d6  lea     sp,[bp-2h]                      
09d9  pop     ds                              
09da  pop     bp                              
09db  dec     bp                              
09dc  retf                                    
09dd  nop                                     
09de  mov     ax,ds                           
09e0  nop                                     
09e1  inc     bp                              
09e2  push    bp                              
09e3  mov     bp,sp                           
09e5  push    ds                              
09e6  mov     ds,ax                           
09e8  cmp     word ptr [bp+0Eh],65h           
09ec  je      9F4h                            
09ee  cmp     word ptr [bp+0Eh],45h           
09f2  jne     0A10h                           
09f4  push    word ptr [bp+12h]               
09f7  push    word ptr [bp+10h]               
09fa  push    word ptr [bp+0Ch]               
09fd  push    word ptr [bp+0Ah]               
0a00  push    word ptr [bp+8h]                
0a03  push    word ptr [bp+6h]                
0a06  push    cs                              
0a07  call    59Ah                            
0a0a  add     sp,0Ch                          
0a0d  jmp     0A44h                           
0a0f  nop                                     
0a10  cmp     word ptr [bp+0Eh],66h           
0a14  jne     0A2Eh                           
0a16  push    word ptr [bp+10h]               
0a19  push    word ptr [bp+0Ch]               
0a1c  push    word ptr [bp+0Ah]               
0a1f  push    word ptr [bp+8h]                
0a22  push    word ptr [bp+6h]                
0a25  push    cs                              
0a26  call    766h                            
0a29  add     sp,0Ah                          
0a2c  jmp     0A44h                           
0a2e  push    word ptr [bp+12h]               
0a31  push    word ptr [bp+10h]               
0a34  push    word ptr [bp+0Ch]               
0a37  push    word ptr [bp+0Ah]               
0a3a  push    word ptr [bp+8h]                
0a3d  push    word ptr [bp+6h]                
0a40  push    cs                              
0a41  call    8FEh                            
0a44  lea     sp,[bp-2h]                      
0a47  pop     ds                              
0a48  pop     bp                              
0a49  dec     bp                              
0a4a  retf                                    
0a4b  nop                                     

; ----- sub_0a4c -----
0a4c  push    bp                              
0a4d  mov     bp,sp                           
0a4f  cmp     word ptr [bp+4h],0h             
0a53  je      0A79h                           
0a55  push    word ptr [bp+8h]                
0a58  push    word ptr [bp+6h]                
0a5b  call far sub_0c90                       
0a60  add     sp,4h                           
0a63  inc     ax                              
0a64  push    ax                              
0a65  push    word ptr [bp+8h]                
0a68  mov     ax,[bp+6h]                      
0a6b  push    ax                              
0a6c  mov     dx,[bp+8h]                      
0a6f  add     ax,[bp+4h]                      
0a72  push    dx                              
0a73  push    ax                              
0a74  call far sub_0d2e                       
0a79  mov     sp,bp                           
0a7b  pop     bp                              
0a7c  ret     6h                              
0a7f  nop                                     
0a80  inc     bp                              
0a81  push    bp                              
0a82  mov     bp,sp                           
0a84  push    ds                              
0a85  push    es                              
0a86  push    ax                              
0a87  push    bx                              
0a88  push    cx                              
0a89  push    dx                              
0a8a  xor     ah,ah                           
0a8c  add     ax,-1Ch                         
0a8f  push    ax                              
0a90  call far sub_0b72                       
0a95  mov     ds,ax                           
0a97  pop     ax                              
0a98  call    0AFCh                           
0a9b  pop     dx                              
0a9c  pop     cx                              
0a9d  pop     bx                              
0a9e  pop     ax                              
0a9f  pop     es                              
0aa0  pop     ds                              
0aa1  pop     bp                              
0aa2  dec     bp                              
0aa3  retf                                    

; ----- sub_0aa4 -----
0aa4  mov     ax,ds                           
0aa6  nop                                     
0aa7  inc     bp                              
0aa8  push    bp                              
0aa9  mov     bp,sp                           
0aab  push    ds                              
0aac  mov     ds,ax                           
0aae  push    si                              
0aaf  push    di                              
0ab0  push    ds                              
0ab1  pop     es                              
0ab2  mov     dx,[bp+6h]                      
0ab5  mov     si,340h                         
0ab8  lodsw                                   
0ab9  cmp     ax,dx                           
0abb  je      0ACDh                           
0abd  inc     ax                              
0abe  xchg    ax,si                           
0abf  je      0ACDh                           
0ac1  xchg    ax,di                           
0ac2  xor     ax,ax                           
0ac4  mov     cx,0FFFFh                       
0ac7  repne   scasb                           
0ac9  mov     si,di                           
0acb  jmp     0AB8h                           
0acd  xchg    ax,si                           
0ace  pop     di                              
0acf  pop     si                              
0ad0  sub     bp,2h                           
0ad3  mov     sp,bp                           
0ad5  pop     ds                              
0ad6  pop     bp                              
0ad7  dec     bp                              
0ad8  retf    2h                              

; ----- sub_0adb -----
0adb  mov     ax,ds                           
0add  nop                                     
0ade  inc     bp                              
0adf  push    bp                              
0ae0  mov     bp,sp                           
0ae2  push    ds                              
0ae3  mov     ds,ax                           
0ae5  push    di                              
0ae6  pop     di                              
0ae7  sub     bp,2h                           
0aea  mov     sp,bp                           
0aec  pop     ds                              
0aed  pop     bp                              
0aee  dec     bp                              
0aef  retf    2h                              
0af2  call far sub_0b72                       
0af7  mov     ds,ax                           
0af9  mov     ax,3h                           

; ----- sub_0afc -----
0afc  push    ax                              
0afd  push    ax                              
0afe  push    cs                              
0aff  call    354h                            
0b02  push    cs                              
0b03  call    0ADBh                           
0b06  push    cs                              
0b07  call    0AA4h                           
0b0a  xor     bx,bx                           
0b0c  or      ax,ax                           
0b0e  je      0B2Dh                           
0b10  mov     di,ax                           
0b12  mov     ax,9h                           
0b15  cmp     byte ptr [di],4Dh               
0b18  jne     0B1Dh                           
0b1a  mov     ax,0Fh                          
0b1d  add     di,ax                           
0b1f  push    di                              
0b20  push    ds                              
0b21  pop     es                              
0b22  mov     al,0Dh                          
0b24  mov     cx,22h                          
0b27  repne   scasb                           
0b29  mov     [di-1h],bl                      
0b2c  pop     ax                              
0b2d  push    bx                              
0b2e  push    ds                              
0b2f  push    ax                              
0b30  call far KERNEL.FATALAPPEXIT            
0b35  mov     ax,0FFh                         
0b38  push    ax                              
0b39  call far KERNEL.FATALEXIT               
0b3e  mov     ax,2h                           
0b41  jmp     0AFCh                           

; ----- sub_0b44 -----
0b44  push    bp                              
0b45  mov     bp,sp                           
0b47  push    bx                              
0b48  push    es                              
0b49  push    cx                              
0b4a  mov     cx,1000h                        
0b4d  xchg    cx,[28Eh]                       
0b51  push    cx                              
0b52  push    ax                              
0b53  call far sub_11cd                       
0b58  pop     bx                              
0b59  pop     [28Eh]                          
0b5d  pop     cx                              
0b5e  mov     bx,dx                           
0b60  or      bx,ax                           
0b62  je      0B68h                           
0b64  pop     es                              
0b65  pop     bx                              
0b66  jmp     0B6Dh                           
0b68  mov     ax,cx                           
0b6a  jmp     0AFCh                           
0b6d  mov     sp,bp                           
0b6f  pop     bp                              
0b70  ret                                     
0b71  add     [bx+si],al                      

; ----- sub_0b72 -----
0b72  cmp     byte ptr cs:[0F66h],0B8h        
0b78  je      0B7Dh                           
0b7a  mov     ax,ss                           
0b7c  retf                                    
0b7d  mov     ax,cs:[0F67h]                   
0b81  retf                                    

; ----- sub_0b82 -----
0b82  ret                                     
0b83  add     [bx+si],al                      

; ----- sub_0b84 -----
0b84  inc     bp                              
0b85  push    bp                              
0b86  mov     bp,sp                           
0b88  push    ds                              
0b89  push    di                              
0b8a  push    si                              
0b8b  jmp     0B91h                           
0b8d  nop                                     
0b8e  inc     word ptr [bp+6h]                
0b91  les     bx,[bp+6h]                      
0b94  mov     al,es:[bx]                      
0b97  cbw                                     
0b98  mov     bx,ax                           
0b9a  test    byte ptr [bx+167h],8h           
0b9f  jne     0B8Eh                           
0ba1  xor     ax,ax                           
0ba3  push    ax                              
0ba4  push    ax                              
0ba5  push    es                              
0ba6  push    word ptr [bp+6h]                
0ba9  call far sub_0f7a                       
0bae  add     sp,4h                           
0bb1  push    ax                              
0bb2  push    word ptr [bp+8h]                
0bb5  push    word ptr [bp+6h]                
0bb8  call far sub_1148                       
0bbd  add     sp,0Ah                          
0bc0  add     ax,8h                           
0bc3  mov     bx,1730h                        
0bc6  push    ds                              
0bc7  mov     di,bx                           
0bc9  mov     si,ax                           
0bcb  push    ds                              
0bcc  pop     es                              
0bcd  mov     ds,dx                           
0bcf  movsw                                   
0bd0  movsw                                   
0bd1  movsw                                   
0bd2  movsw                                   
0bd3  pop     ds                              
0bd4  mov     ax,bx                           
0bd6  mov     dx,ds                           
0bd8  pop     si                              
0bd9  pop     di                              
0bda  lea     sp,[bp-2h]                      
0bdd  pop     ds                              
0bde  pop     bp                              
0bdf  dec     bp                              
0be0  retf                                    
0be1  nop                                     

; ----- sub_0be2 -----
0be2  inc     bp                              
0be3  push    bp                              
0be4  mov     bp,sp                           
0be6  push    ds                              
0be7  sub     sp,0Ah                          
0bea  les     bx,[bp+0Ch]                     
0bed  mov     ax,es:[bx+6h]                   
0bf1  mov     dx,es:[bx+8h]                   
0bf5  mov     [bp-0Ah],ax                     
0bf8  mov     [bp-8h],dx                      
0bfb  les     bx,[bp+6h]                      
0bfe  mov     byte ptr es:[bx],30h            
0c02  lea     ax,[bx+1h]                      
0c05  mov     [bp-6h],ax                      
0c08  mov     [bp-4h],es                      
0c0b  jmp     0C38h                           
0c0d  nop                                     
0c0e  les     bx,[bp-0Ah]                     
0c11  cmp     byte ptr es:[bx],0h             
0c15  je      0C24h                           
0c17  mov     al,es:[bx]                      
0c1a  cbw                                     
0c1b  mov     [bp-0Ch],ax                     
0c1e  inc     word ptr [bp-0Ah]               
0c21  jmp     0C29h                           
0c23  nop                                     
0c24  mov     word ptr [bp-0Ch],30h           
0c29  mov     al,[bp-0Ch]                     
0c2c  les     bx,[bp-6h]                      
0c2f  inc     word ptr [bp-6h]                
0c32  mov     es:[bx],al                      
0c35  dec     word ptr [bp+0Ah]               
0c38  cmp     word ptr [bp+0Ah],0h            
0c3c  jg      0C0Eh                           
0c3e  les     bx,[bp-6h]                      
0c41  mov     byte ptr es:[bx],0h             
0c45  cmp     word ptr [bp+0Ah],0h            
0c49  jl      0C69h                           
0c4b  les     bx,[bp-0Ah]                     
0c4e  cmp     byte ptr es:[bx],35h            
0c52  jl      0C69h                           
0c54  jmp     0C5Ah                           
0c56  mov     byte ptr es:[bx],30h            
0c5a  dec     word ptr [bp-6h]                
0c5d  les     bx,[bp-6h]                      
0c60  cmp     byte ptr es:[bx],39h            
0c64  je      0C56h                           
0c66  inc     byte ptr es:[bx]                
0c69  les     bx,[bp+6h]                      
0c6c  cmp     byte ptr es:[bx],31h            
0c70  jne     0C7Ch                           
0c72  les     bx,[bp+0Ch]                     
0c75  inc     word ptr es:[bx+2h]             
0c79  jmp     0C88h                           
0c7b  nop                                     
0c7c  lea     ax,[bx+1h]                      
0c7f  push    es                              
0c80  push    ax                              
0c81  push    es                              
0c82  push    bx                              
0c83  call far sub_0caa                       
0c88  lea     sp,[bp-2h]                      
0c8b  pop     ds                              
0c8c  pop     bp                              
0c8d  dec     bp                              
0c8e  retf                                    
0c8f  nop                                     

; ----- sub_0c90 -----
0c90  push    bp                              
0c91  mov     bp,sp                           
0c93  mov     dx,di                           
0c95  les     di,[bp+6h]                      
0c98  xor     ax,ax                           
0c9a  mov     cx,0FFFFh                       
0c9d  repne   scasb                           
0c9f  not     cx                              
0ca1  jne     0CA4h                           
0ca3  dec     cx                              
0ca4  xchg    ax,cx                           
0ca5  mov     di,dx                           
0ca7  pop     bp                              
0ca8  retf                                    
0ca9  add     [bx+si],al                      

; ----- sub_0caa -----
0caa  push    bp                              
0cab  mov     bp,sp                           
0cad  mov     dx,di                           
0caf  mov     bx,si                           
0cb1  push    ds                              
0cb2  lds     si,[bp+0Ah]                     
0cb5  mov     di,si                           
0cb7  mov     ax,ds                           
0cb9  mov     es,ax                           
0cbb  xor     ax,ax                           
0cbd  mov     cx,0FFFFh                       
0cc0  repne   scasb                           
0cc2  not     cx                              
0cc4  les     di,[bp+6h]                      
0cc7  mov     ax,di                           
0cc9  je      0CCFh                           
0ccb  movsw                                   
0ccc  dec     cx                              
0ccd  jmp     0CD5h                           
0ccf  test    al,1h                           
0cd1  je      0CD5h                           
0cd3  movsb                                   
0cd4  dec     cx                              
0cd5  shr     cx,1                            
0cd7  rep     movsw                           
0cd9  adc     cx,cx                           
0cdb  rep     movsb                           
0cdd  mov     si,bx                           
0cdf  mov     di,dx                           
0ce1  pop     ds                              
0ce2  mov     dx,es                           
0ce4  pop     bp                              
0ce5  retf                                    

; ----- sub_0ce6 -----
0ce6  push    bp                              
0ce7  mov     bp,sp                           
0ce9  mov     cx,[bp+0Ch]                     
0cec  jcxz    0D26h                           
0cee  push    di                              
0cef  les     di,[bp+6h]                      
0cf2  mov     dx,di                           
0cf4  neg     dx                              
0cf6  je      0D04h                           
0cf8  sub     dx,cx                           
0cfa  sbb     bx,bx                           
0cfc  and     dx,bx                           
0cfe  add     dx,cx                           
0d00  xchg    dx,cx                           
0d02  sub     dx,cx                           
0d04  mov     ax,[bp+0Ah]                     
0d07  mov     ah,al                           
0d09  shr     cx,1                            
0d0b  rep     stosw                           
0d0d  adc     cx,cx                           
0d0f  rep     stosb                           
0d11  xchg    dx,cx                           
0d13  jcxz    0D25h                           
0d15  mov     bx,es                           
0d17  add     bx,0FFFFh                       
0d1b  mov     es,bx                           
0d1d  shr     cx,1                            
0d1f  rep     stosw                           
0d21  adc     cx,cx                           
0d23  rep     stosb                           
0d25  pop     di                              
0d26  mov     ax,[bp+6h]                      
0d29  mov     dx,[bp+8h]                      
0d2c  pop     bp                              
0d2d  retf                                    

; ----- sub_0d2e -----
0d2e  push    bp                              
0d2f  mov     bp,sp                           
0d31  mov     cx,[bp+0Eh]                     
0d34  push    ds                              
0d35  push    di                              
0d36  push    si                              
0d37  or      cx,cx                           
0d39  jne     0D3Eh                           
0d3b  jmp     0DEDh                           
0d3e  lds     si,[bp+0Ah]                     
0d41  les     di,[bp+6h]                      
0d44  push    ds                              
0d45  push    si                              
0d46  push    es                              
0d47  push    di                              
0d48  call far sub_0f94                       
0d4d  mov     cx,[bp+0Eh]                     
0d50  or      dx,dx                           
0d52  js      0DABh                           
0d54  sub     ax,cx                           
0d56  sbb     dx,0h                           
0d59  jae     0DABh                           
0d5b  dec     cx                              
0d5c  add     si,cx                           
0d5e  jae     0D67h                           
0d60  mov     ax,ds                           
0d62  add     ax,0D19h                        
0d65  mov     ds,ax                           
0d67  add     di,cx                           
0d69  jae     0D72h                           
0d6b  mov     ax,es                           
0d6d  add     ax,0D63h                        
0d70  mov     es,ax                           
0d72  inc     cx                              
0d73  mov     ax,cx                           
0d75  dec     ax                              
0d76  sub     ax,di                           
0d78  sbb     bx,bx                           
0d7a  and     ax,bx                           
0d7c  add     ax,di                           
0d7e  sub     ax,si                           
0d80  sbb     bx,bx                           
0d82  and     ax,bx                           
0d84  add     ax,si                           
0d86  inc     ax                              
0d87  xchg    ax,cx                           
0d88  sub     ax,cx                           
0d8a  std                                     
0d8b  rep     movsb                           
0d8d  cld                                     
0d8e  xchg    ax,cx                           
0d8f  jcxz    0DEDh                           
0d91  cmp     si,-1h                          
0d94  jne     0D9Dh                           
0d96  mov     ax,ds                           
0d98  sub     ax,0D6Eh                        
0d9b  mov     ds,ax                           
0d9d  cmp     di,-1h                          
0da0  jne     0D73h                           
0da2  mov     ax,es                           
0da4  sub     ax,0D99h                        
0da7  mov     es,ax                           
0da9  jmp     0D73h                           
0dab  mov     ax,cx                           
0dad  dec     ax                              
0dae  mov     dx,di                           
0db0  not     dx                              
0db2  sub     ax,dx                           
0db4  sbb     bx,bx                           
0db6  and     ax,bx                           
0db8  add     ax,dx                           
0dba  mov     dx,si                           
0dbc  not     dx                              
0dbe  sub     ax,dx                           
0dc0  sbb     bx,bx                           
0dc2  and     ax,bx                           
0dc4  add     ax,dx                           
0dc6  inc     ax                              
0dc7  xchg    ax,cx                           
0dc8  sub     ax,cx                           
0dca  shr     cx,1                            
0dcc  rep     movsw                           
0dce  adc     cx,cx                           
0dd0  rep     movsb                           
0dd2  xchg    ax,cx                           
0dd3  jcxz    0DEDh                           
0dd5  or      si,si                           
0dd7  jne     0DE0h                           
0dd9  mov     ax,ds                           
0ddb  add     ax,0DA5h                        
0dde  mov     ds,ax                           
0de0  or      di,di                           
0de2  jne     0DABh                           
0de4  mov     ax,es                           
0de6  add     ax,0DDCh                        
0de9  mov     es,ax                           
0deb  jmp     0DABh                           
0ded  mov     ax,[bp+6h]                      
0df0  mov     dx,[bp+8h]                      
0df3  pop     si                              
0df4  pop     di                              
0df5  pop     ds                              
0df6  pop     bp                              
0df7  retf                                    

; ----- sub_0df8 -----
0df8  mov     ax,ds                           
0dfa  nop                                     
0dfb  inc     bp                              
0dfc  push    bp                              
0dfd  mov     bp,sp                           
0dff  push    ds                              
0e00  mov     ds,ax                           
0e02  push    si                              
0e03  push    di                              
0e04  cld                                     
0e05  mov     ax,ds                           
0e07  mov     es,ax                           
0e09  lea     si,[bp+6h]                      
0e0c  mov     di,272h                         
0e0f  movsw   ss:                             
0e11  movsw   ss:                             
0e13  movsw   ss:                             
0e15  movsw   ss:                             
0e17  mov     si,272h                         
0e1a  push    bp                              
0e1b  call    1002h                           
0e1e  pop     bp                              
0e1f  mov     di,27Ah                         
0e22  mov     cx,ax                           
0e24  lodsb                                   
0e25  cbw                                     
0e26  xchg    ax,cx                           
0e27  rep     movsb                           
0e29  xchg    ax,cx                           
0e2a  stosb                                   
0e2b  mov     di,268h                         
0e2e  xor     bh,bh                           
0e30  mov     [di],bx                         
0e32  mov     [di+2h],dx                      
0e35  mov     [di+4h],cx                      
0e38  mov     word ptr [di+6h],27Ah           
0e3d  mov     [di+8h],ds                      
0e40  mov     dx,ds                           
0e42  mov     ax,di                           
0e44  pop     di                              
0e45  pop     si                              
0e46  lea     sp,[bp-2h]                      
0e49  pop     ds                              
0e4a  pop     bp                              
0e4b  dec     bp                              
0e4c  retf                                    
0e4d  add     [bx+di+57h],dl                  
0e50  test    byte ptr [bx+2h],1h             
0e54  je      0EBEh                           
0e56  call    0F45h                           
0e59  mov     di,si                           
0e5b  mov     ax,[si]                         
0e5d  test    al,1h                           
0e5f  je      0E64h                           
0e61  sub     cx,ax                           
0e63  dec     cx                              
0e64  inc     cx                              
0e65  inc     cx                              
0e66  mov     si,[bx+4h]                      
0e69  or      si,si                           
0e6b  je      0EBEh                           
0e6d  add     cx,si                           
0e6f  jae     0E7Ah                           
0e71  xor     ax,ax                           
0e73  mov     dx,0FFF0h                       
0e76  jcxz    0EADh                           
0e78  jmp     0EBEh                           
0e7a  call far sub_0b72                       
0e7f  mov     es,ax                           
0e81  mov     ax,es:[28Eh]                    
0e85  cmp     ax,1000h                        
0e88  je      0EA0h                           
0e8a  mov     dx,8000h                        
0e8d  cmp     dx,ax                           
0e8f  jb      0E97h                           
0e91  shr     dx,1                            
0e93  jne     0E8Dh                           
0e95  jmp     0EB9h                           
0e97  cmp     dx,8h                           
0e9a  jb      0EB9h                           
0e9c  shl     dx,1                            
0e9e  mov     ax,dx                           
0ea0  dec     ax                              
0ea1  mov     dx,ax                           
0ea3  add     ax,cx                           
0ea5  jae     0EA9h                           
0ea7  xor     ax,ax                           
0ea9  not     dx                              
0eab  and     ax,dx                           
0ead  push    dx                              
0eae  call    0EDFh                           
0eb1  pop     dx                              
0eb2  jae     0EC1h                           
0eb4  cmp     dx,-10h                         
0eb7  je      0EBEh                           
0eb9  mov     ax,10h                          
0ebc  jmp     0EA0h                           
0ebe  stc                                     
0ebf  jmp     0EDCh                           
0ec1  mov     dx,ax                           
0ec3  sub     dx,[bx+4h]                      
0ec6  mov     [bx+4h],ax                      
0ec9  mov     [bx+0Ah],di                     
0ecc  mov     si,[bx+0Ch]                     
0ecf  dec     dx                              
0ed0  mov     [si],dx                         
0ed2  inc     dx                              
0ed3  add     si,dx                           
0ed5  mov     word ptr [si],0FFFEh            
0ed9  mov     [bx+0Ch],si                     
0edc  pop     di                              
0edd  pop     cx                              
0ede  ret                                     

; ----- sub_0edf -----
0edf  mov     dx,ax                           
0ee1  test    byte ptr [bx+2h],4h             
0ee5  je      0EE9h                           
0ee7  jmp     0F3Ah                           
0ee9  push    dx                              
0eea  push    cx                              
0eeb  push    bx                              
0eec  mov     si,[bx+6h]                      
0eef  mov     bx,cs:[10h]                     
0ef4  xor     cx,cx                           
0ef6  or      dx,dx                           
0ef8  jne     0F01h                           
0efa  test    bx,10h                          
0efe  jne     0F40h                           
0f00  inc     cx                              
0f01  mov     ax,2002h                        
0f04  test    bx,1h                           
0f08  jne     0F0Dh                           
0f0a  mov     ax,2020h                        
0f0d  push    si                              
0f0e  push    cx                              
0f0f  push    dx                              
0f10  push    ax                              
0f11  call far KERNEL.GLOBALREALLOC           
0f16  or      ax,ax                           
0f18  je      0F40h                           
0f1a  cmp     ax,si                           
0f1c  jne     0F3Ah                           
0f1e  push    si                              
0f1f  call far KERNEL.GLOBALSIZE              
0f24  or      dx,ax                           
0f26  je      0F3Ah                           
0f28  pop     bx                              
0f29  pop     cx                              
0f2a  pop     dx                              
0f2b  mov     ax,dx                           
0f2d  test    byte ptr [bx+2h],4h             
0f31  je      0F37h                           
0f33  dec     dx                              
0f34  mov     [bx-2h],dx                      
0f37  clc                                     
0f38  jmp     0F44h                           
0f3a  mov     ax,12h                          
0f3d  jmp     0AFCh                           
0f40  pop     bx                              
0f41  pop     cx                              
0f42  pop     dx                              
0f43  stc                                     
0f44  ret                                     

; ----- sub_0f45 -----
0f45  push    di                              
0f46  mov     si,[bx+0Ah]                     
0f49  cmp     si,[bx+0Ch]                     
0f4c  jne     0F51h                           
0f4e  mov     si,[bx+8h]                      
0f51  lodsw                                   
0f52  cmp     ax,-2h                          
0f55  je      0F5Fh                           
0f57  mov     di,si                           
0f59  and     al,0FEh                         
0f5b  add     si,ax                           
0f5d  jmp     0F51h                           
0f5f  dec     di                              
0f60  dec     di                              
0f61  mov     si,di                           
0f63  pop     di                              
0f64  ret                                     
0f65  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
0f66  mov     ax,ds                           
0f68  nop                                     
0f69  inc     bp                              
0f6a  push    bp                              
0f6b  mov     bp,sp                           
0f6d  push    ds                              
0f6e  mov     ds,ax                           
0f70  xor     ax,ax                           
0f72  lea     sp,[bp-2h]                      
0f75  pop     ds                              
0f76  pop     bp                              
0f77  dec     bp                              
0f78  retf                                    
0f79  nop                                     

; ----- sub_0f7a -----
0f7a  push    bp                              
0f7b  mov     bp,sp                           
0f7d  mov     dx,di                           
0f7f  les     di,[bp+6h]                      
0f82  xor     ax,ax                           
0f84  mov     cx,0FFFFh                       
0f87  repne   scasb                           
0f89  not     cx                              
0f8b  jne     0F8Eh                           
0f8d  dec     cx                              
0f8e  xchg    ax,cx                           
0f8f  mov     di,dx                           
0f91  pop     bp                              
0f92  retf                                    
0f93  add     [bx+si],al                      

; ----- sub_0f94 -----
0f94  push    bp                              
0f95  mov     bp,sp                           
0f97  push    bx                              
0f98  push    cx                              
0f99  mov     ax,[bp+6h]                      
0f9c  mov     dx,[bp+8h]                      
0f9f  mov     bx,[bp+0Ch]                     
0fa2  mov     cx,0FFFFh                       
0fa5  shr     dx,cl                           
0fa7  shr     bx,cl                           
0fa9  sub     ax,[bp+0Ah]                     
0fac  sbb     dx,bx                           
0fae  pop     cx                              
0faf  pop     bx                              
0fb0  pop     bp                              
0fb1  retf    8h                              
0fb4  cld                                     
0fb6  ???                                     
0fb8  ???                                     
0fba  ???                                     
0fbc  ???                                     
0fbe  int     0CCh                            
0fc0  int 3                                   
0fc1  int 3                                   
0fc2  int 3                                   
0fc3  int 3                                   
0fc4  int 3                                   
0fc5  int 3                                   
0fc6  sti                                     
0fc7  aas                                     
0fc8  mov     si,29Ch                         
0fcb  mov     word ptr [si],3001h             
0fcf  xor     ax,ax                           
0fd1  mov     dx,ax                           
0fd3  inc     ax                              
0fd4  mov     bl,20h                          
0fd6  pop     es                              
0fd7  ret                                     
0fd8  or      dx,dx                           
0fda  jne     0FE6h                           
0fdc  cmp     cx,-8h                          
0fdf  je      0FF8h                           
0fe1  and     cl,0Fh                          
0fe4  je      0FF3h                           
0fe6  mov     si,2B4h                         
0fe9  test    cl,8h                           
0fec  jne     0FFBh                           
0fee  mov     si,2ADh                         
0ff1  jmp     0FFBh                           
0ff3  mov     si,2BBh                         
0ff6  jmp     0FFBh                           
0ff8  mov     si,2C1h                         
0ffb  mov     dx,1h                           
0ffe  pop     es                              
0fff  xor     ax,ax                           
1001  ret                                     

; ----- sub_1002 -----
1002  push    es                              
1003  mov     ax,ds                           
1005  mov     es,ax                           
1007  cld                                     
1008  mov     di,290h                         
100b  push    di                              
100c  mov     cx,4h                           
100f  rep     movsw                           
1011  pop     si                              
1012  mov     cx,[si+6h]                      
1015  and     byte ptr [si+7h],7Fh            
1019  mov     bl,20h                          
101b  mov     ax,[si]                         
101d  or      ax,[si+2h]                      
1020  or      ax,[si+4h]                      
1023  mov     dx,ax                           
1025  or      ax,[si+6h]                      
1028  je      0FC8h                           
102a  or      cx,cx                           
102c  jns     1030h                           
102e  mov     bl,2Dh                          
1030  not     cx                              
1032  test    cx,7FF0h                        
1036  not     cx                              
1038  je      0FD8h                           
103a  push    bx                              
103b  wait                                    
103c  fstcw   word ptr [2C9h]                 
1040  nop                                     
1041  wait                                    
1042  push    ax                              
1043  mov     al,[2C9h]                       
1046  mov     [2CBh],al                       
1049  pop     ax                              
104a  wait                                    
104b  fldcw   word ptr [2CBh]                 
104f  wait                                    
1050  fld     qword ptr [si]                  
1052  wait                                    
1053  fld     st(0),st(0)                     
1055  wait                                    
1056  fstp    tword ptr [si]                  
1058  nop                                     
1059  wait                                    
105a  xor     di,di                           
105c  mov     si,297h                         
105f  lodsb                                   
1060  mov     bh,al                           
1062  lodsw                                   
1063  mov     cx,ax                           
1065  mov     dx,4D10h                        
1068  mul     dx                              
106a  xchg    ax,cx                           
106b  mov     al,4Dh                          
106d  mul     ah                              
106f  add     cx,ax                           
1071  adc     dx,di                           
1073  mov     al,9Ah                          
1075  mul     bh                              
1077  add     cx,ax                           
1079  adc     di,dx                           
107b  sub     cx,12F4h                        
107f  sbb     di,1343h                        
1083  push    di                              
1084  neg     di                              
1086  mov     si,290h                         
1089  call    13F0h                           
108c  mov     bx,0FB4h                        
108f  pop     di                              
1090  wait                                    
1091  fld     tword ptr cs:[bx]               
1094  wait                                    
1095  fcomp   st(0),st(1)                     
1097  wait                                    
1098  fstsw   word ptr [2C7h]                 
109c  nop                                     
109d  wait                                    
109e  test    byte ptr [2C8h],41h             
10a3  je      10B0h                           
10a5  inc     di                              
10a6  mov     bx,0FBEh                        
10a9  wait                                    
10aa  fld     tword ptr cs:[bx]               
10ad  wait                                    
10ae  fmulp   st(1)                           
10b0  push    di                              
10b1  wait                                    
10b2  fstp    tword ptr [si]                  
10b4  wait                                    
10b5  fldcw   word ptr [2C9h]                 
10b9  nop                                     
10ba  wait                                    
10bb  lodsw                                   
10bc  xchg    ax,di                           
10bd  lodsw                                   
10be  xchg    ax,bp                           
10bf  lodsw                                   
10c0  xchg    ax,dx                           
10c1  lodsw                                   
10c2  xchg    ax,bx                           
10c3  lodsw                                   
10c4  xchg    ax,cx                           
10c5  sub     cx,3FFEh                        
10c9  neg     cx                              
10cb  mov     si,di                           
10cd  xor     ax,ax                           
10cf  jcxz    10DDh                           
10d1  shr     bx,1                            
10d3  rcr     dx,1                            
10d5  rcr     bp,1                            
10d7  rcr     si,1                            
10d9  rcr     ah,1                            
10db  loop    10D1h                           
10dd  adc     si,39Ah                         
10e1  adc     bp,cx                           
10e3  adc     dx,cx                           
10e5  adc     bx,cx                           
10e7  mov     di,29Dh                         
10ea  mov     cx,10h                          
10ed  xor     al,al                           
10ef  push    cx                              
10f0  push    bx                              
10f1  push    dx                              
10f2  push    bp                              
10f3  push    si                              
10f4  push    ax                              
10f5  shl     ah,1                            
10f7  rcl     si,1                            
10f9  rcl     bp,1                            
10fb  rcl     dx,1                            
10fd  rcl     bx,1                            
10ff  rcl     al,1                            
1101  shl     ah,1                            
1103  rcl     si,1                            
1105  rcl     bp,1                            
1107  rcl     dx,1                            
1109  rcl     bx,1                            
110b  rcl     al,1                            
110d  pop     cx                              
110e  adc     ah,ch                           
1110  pop     cx                              
1111  adc     si,cx                           
1113  pop     cx                              
1114  adc     bp,cx                           
1116  pop     cx                              
1117  adc     dx,cx                           
1119  pop     cx                              
111a  adc     bx,cx                           
111c  adc     al,0h                           
111e  shl     ah,1                            
1120  rcl     si,1                            
1122  rcl     bp,1                            
1124  rcl     dx,1                            
1126  rcl     bx,1                            
1128  rcl     al,1                            
112a  pop     cx                              
112b  add     al,30h                          
112d  stosb                                   
112e  loop    10EDh                           
1130  dec     di                              
1131  dec     cx                              
1132  mov     al,30h                          
1134  std                                     
1135  rep     scasb                           
1137  cld                                     
1138  add     cx,12h                          
113b  mov     si,29Ch                         
113e  mov     [si],cl                         
1140  mov     ax,1h                           
1143  pop     dx                              
1144  pop     bx                              
1145  pop     es                              
1146  ret                                     
1147  add     [bx+si],al                      

; ----- sub_1148 -----
1148  mov     ax,ds                           
114a  nop                                     
114b  inc     bp                              
114c  push    bp                              
114d  mov     bp,sp                           
114f  push    ds                              
1150  mov     ds,ax                           
1152  sub     sp,6h                           
1155  mov     ax,7DEh                         
1158  push    ds                              
1159  push    ax                              
115a  lea     cx,[bp-6h]                      
115d  push    ss                              
115e  push    cx                              
115f  push    word ptr [bp+8h]                
1162  push    word ptr [bp+6h]                
1165  xor     dx,dx                           
1167  push    dx                              
1168  call    142Eh                           
116b  mov     [bp-8h],ax                      
116e  mov     ax,[bp-6h]                      
1171  sub     ax,[bp+6h]                      
1174  mov     [7D8h],ax                       
1177  mov     word ptr [7D6h],0h              
117d  test    byte ptr [bp-8h],4h             
1181  je      1189h                           
1183  mov     word ptr [7D6h],200h            
1189  test    byte ptr [bp-8h],2h             
118d  je      1194h                           
118f  or      byte ptr [7D6h],1h              
1194  test    byte ptr [bp-8h],1h             
1198  je      119Fh                           
119a  or      byte ptr [7D7h],1h              
119f  mov     ax,7D6h                         
11a2  mov     dx,ds                           
11a4  lea     sp,[bp-2h]                      
11a7  pop     ds                              
11a8  pop     bp                              
11a9  dec     bp                              
11aa  retf                                    
11ab  nop                                     
11ac  mov     ax,ds                           
11ae  nop                                     
11af  inc     bp                              
11b0  push    bp                              
11b1  mov     bp,sp                           
11b3  push    ds                              
11b4  mov     ds,ax                           
11b6  push    si                              
11b7  les     si,[bp+6h]                      
11ba  mov     cx,es                           
11bc  jcxz    11C3h                           
11be  or      byte ptr es:[si-2h],1h          
11c3  pop     si                              
11c4  sub     bp,2h                           
11c7  mov     sp,bp                           
11c9  pop     ds                              
11ca  pop     bp                              
11cb  dec     bp                              
11cc  retf                                    

; ----- sub_11cd -----
11cd  mov     ax,ds                           
11cf  nop                                     
11d0  inc     bp                              
11d1  push    bp                              
11d2  mov     bp,sp                           
11d4  push    ds                              
11d5  mov     ds,ax                           
11d7  push    si                              
11d8  push    di                              
11d9  mov     cx,[bp+6h]                      
11dc  cmp     cx,-1Ah                         
11df  ja      124Ah                           
11e1  push    ds                              
11e2  mov     ax,[2EAh]                       
11e5  or      ax,ax                           
11e7  je      1231h                           
11e9  mov     di,1526h                        
11ec  mov     si,[2F2h]                       
11f0  lds     bx,[2ECh]                       
11f4  push    ds                              
11f5  push    si                              
11f6  push    di                              
11f7  call    di                              
11f9  pop     di                              
11fa  pop     si                              
11fb  jae     1228h                           
11fd  mov     dx,ds                           
11ff  lds     bx,[bx+0Eh]                     
1202  cmp     dx,si                           
1204  jne     11F5h                           
1206  pop     ax                              
1207  pop     ds                              
1208  push    ds                              
1209  les     si,[2ECh]                       
120d  mov     si,es:[si+14h]                  
1211  lds     bx,[2E8h]                       
1215  mov     dx,ds                           
1217  cmp     dx,ax                           
1219  jne     11F4h                           
121b  pop     ds                              
121c  push    ds                              
121d  cmp     di,0E4Eh                        
1221  je      1231h                           
1223  mov     di,0E4Eh                        
1226  jmp     11ECh                           
1228  pop     si                              
1229  cmp     di,1526h                        
122d  je      123Eh                           
122f  jmp     123Bh                           
1231  pop     es                              
1232  push    es                              
1233  mov     di,2E8h                         
1236  call    1496h                           
1239  jb      1249h                           
123b  call    1526h                           
123e  pop     ds                              
123f  mov     [2EEh],dx                       
1243  mov     [2ECh],bx                       
1247  jmp     1269h                           
1249  pop     ds                              
124a  xor     ax,ax                           
124c  cwd                                     
124d  mov     cx,[2DCh]                       
1251  or      cx,[2DAh]                       
1255  je      1269h                           
1257  push    word ptr [bp+6h]                
125a  call    far ptr  [2DAh]                 
125e  add     sp,2h                           
1261  cwd                                     
1262  or      ax,ax                           
1264  je      1269h                           
1266  jmp     11D9h                           
1269  pop     di                              
126a  pop     si                              
126b  sub     bp,2h                           
126e  mov     sp,bp                           
1270  pop     ds                              
1271  pop     bp                              
1272  dec     bp                              
1273  retf                                    
1274  add     [bx+si],al                      
1276  add     [bx+si],al                      
1278  add     [bx+si],al                      
127a  add     [bx+si+4002h],ah                
127e  add     [bx+si],al                      
1280  add     [bx+si],al                      
1282  add     [bx+si],al                      
1284  add     al,cl                           
1286  add     ax,40h                          
1289  add     [bx+si],al                      
128b  add     [bx+si],al                      
128d  add     [bx+si],al                      
128f  cli                                     
1290  or      [bx+si],al                      
1293  add     [bx+si],al                      
1295  add     [bx+si],al                      
1297  add     [bx+si-64h],al                  
129a  or      al,40h                          
129c  add     [bx+si],al                      
129e  add     [bx+si],al                      
12a0  add     [bx+si],al                      
12a2  push    ax                              
12a3  ret                                     
12a4  cmovo   ax,[bx+si]                      
12a7  add     [bx+si],al                      
12a9  add     [bx+si],al                      
12ab  add     [si],ah                         
12ad  hlt                                     
12ae  adc     al,[bx+si]                      
12b1  add     [bx+si],al                      
12b3  add     [bx+si],al                      
12b5  adc     byte ptr [bp+1698h],40h         
12ba  add     [bx+si],al                      
12bc  add     [bx+si],al                      
12be  add     [bx+si],ah                      
12c0  mov     sp,19BEh                        
12c3  inc     ax                              
12c4  add     [bx+si],al                      
12c6  add     [si],al                         
12c8  mov     di,1BC9h                        
12cb  mov     ???,[si]                        
12cd  inc     ax                              
12ce  add     [bx+di-3313h],ah                
12d2  into                                    
12d3  sbb     ax,dx                           
12d5  ror     word ptr [bp+40h],cl            
12d8  sahf                                    
12d9  mov     ch,70h                          
12db  sub     bp,[bx+si-3A53h]                
12df  popf                                    
12e0  imul    ax,[bx+si-3h],0E525h            
12e5  sbb     cl,[bp+194Fh]                   
12e9  jmp     126Eh                           
12eb  inc     ax                              
12ec  xlat                                    
12ed  xchg    ax,bp                           
12ee  inc     bx                              
12ef  push    cs                              
12f0  add     ax,298Dh                        
12f3  scasw                                   
12f4  sahf                                    
12f5  inc     ax                              
12f6  mov     al,[0ED44h]                     
12f9  adc     word ptr [bp+si],818Fh          
12fd  cmp     byte ptr [bx+di-2AC0h],0A6h     
1302  iret                                    
1303  dec     word ptr [bx+di+1Fh]            
1306  js      12CAh                           
1308  rol     word ptr [bx+si-20h],cl         
130b  mov     cx,gs                           
130d  or      cl,47h                          
1310  mov     dx,0A893h                       
1313  inc     cx                              
1314  imul    dx,[di+27h],39h                 
1318  lea     si,di                           
131a  jo      12FCh                           
131c  jl      1360h                           
131e  mov     ds,si                           
1320  stc                                     
1321  popf                                    
1322  sti                                     
1323  jmp     13A3h                           
1325  stosb                                   
1326  push    cx                              
1327  inc     bx                              
1328  jbe     130Dh                           
132a  int 3                                   
132b  repne   sub     [bx],bp                 
132e  test    [bx+di+4426h],al                
1332  int     0CCh                            
1334  int 3                                   
1335  int 3                                   
1336  int 3                                   
1337  int 3                                   
1338  int 3                                   
1339  int 3                                   
133a  sti                                     
133b  aas                                     
133c  or      dl,bh                           
133e  mov     [3D70h],ax                      
1341  or      dl,bh                           
1343  mov     [3FF8h],ax                      
1346  cmp     bx,di                           
1348  dec     di                              
1349  lea     dx,[bx+126Eh]                   
134d  xor     bp,3Fh                          
1350  sub     al,65h                          
1352  sbb     dx,sp                           
1354  pop     ax                              
1355  pop     ss                              
1356  mov     bh,0D1h                         
1358  ???                                     
1359  aas                                     
135a  and     ax,[si+1B47h]                   
135e  inc     di                              
135f  lodsb                                   
1360  lds     sp,[bx+3FEEh]                   
1364  mov     dh,69h                          
1366  insb                                    
1367  scasw                                   
1368  add     ax,37BDh                        
136b  xchg    ch,bl                           
136d  aas                                     
136e  mov     sp,7A42h                        
1371  in      ax,0D5h                         
1373  xchg    ax,sp                           
1374  mov     di,0E7D6h                       
1377  aas                                     
1378  std                                     
1379  into                                    
137a  popa                                    
137b  test    [bx+di],dl                      
137d  ja      134Bh                           
137f  stosw                                   
1380  in      al,3Fh                          
1382  pop     bx                              
1383  loopz   13D2h                           
1385  les     di,[bp-6A6Ch]                   
1389  out     0C9h,al                         
138b  aas                                     
138c  push    bx                              
138d  cmp     si,[di+44h]                     
1390  int     14h                             
1392  mov     si,0AF9Ah                       
1395  aas                                     
1396  mov     dx,3994h                        
1399  inc     bp                              
139a  lodsw                                   
139b  push    ds                              
139c  mov     cl,0CFh                         
139e  xchg    ax,sp                           
139f  aas                                     
13a0  mov     dl,0BCh                         
13a3  mov     dx,313Bh                        
13a6  popa                                    
13a7  mov     di,[bp+si+3Fh]                  
13aa  pop     cx                              
13ab  sar     word ptr [bp-4Fh],53h           
13af  jl      13C3h                           
13b1  mov     bx,3F5Fh                        
13b4  das                                     
13b5  lea     ax,[92BEh]                      
13b9  test    [di],dx                         
13bb  sti                                     
13bc  inc     sp                              
13bd  aas                                     
13be  movsw                                   
13bf  jmp     0B8FBh                          
13c2  daa                                     
13c3  jmp     3F2Ah:0A87Fh                    
13c8  mov     ax,[0BCE4h]                     
13cb  jl      1414h                           
13ce  rcr     ch,1                            
13d0  push    bp                              
13d1  push    es                              
13d3  int 3                                   
13d4  and     dx,[si+77h]                     
13d7  cmp     di,-6Fh                         
13da  cmp     word ptr [di],193Ah             
13de  jp      1443h                           
13e0  and     ax,3143h                        
13e3  shr     byte ptr [si-2EC4h],38h         
13e8  add     byte ptr [bx-69h],0B8h          
13ec  add     ch,bh                           
13ee  xlat                                    
13ef  cmp     ax,[bx+si]                      

; ----- sub_13f0 -----
13f0  mov     bx,1224h                        
13f3  or      di,di                           
13f5  jns     13FCh                           
13f7  mov     bx,12E2h                        
13fa  neg     di                              
13fc  push    di                              
13fd  pop     di                              
13fe  add     bx,46h                          
1401  or      di,di                           
1403  je      142Ch                           
1405  mov     ax,di                           
1407  shr     di,1                            
1409  shr     di,1                            
140b  shr     di,1                            
140d  push    di                              
140e  and     ax,7h                           
1411  je      13FDh                           
1413  push    bx                              
1414  shl     al,1                            
1416  mov     ah,al                           
1418  shl     al,1                            
141a  shl     al,1                            
141c  add     al,ah                           
141e  xor     ah,ah                           
1420  add     bx,ax                           
1422  wait                                    
1423  fld     tword ptr cs:[bx]               
1426  wait                                    
1427  fmulp   st(1)                           
1429  pop     bx                              
142a  jmp     13FDh                           
142c  ret                                     
142d  add     [bx+si],al                      

; ----- sub_142e -----
142e  push    bp                              
142f  mov     bp,sp                           
1431  sub     sp,0Eh                          
1434  push    ss                              
1435  lea     ax,[bp-0Ah]                     
1438  push    ax                              
1439  push    word ptr [bp+0Ch]               
143c  push    word ptr [bp+0Ah]               
143f  push    word ptr [bp+8h]                
1442  push    word ptr [bp+6h]                
1445  push    word ptr [bp+4h]                
1448  call    15A2h                           
144b  wait                                    
144c  fstcw   word ptr [bp-0Eh]               
144f  wait                                    
1450  fld     tword ptr [bp-0Ah]              
1453  mov     bx,[bp-0Eh]                     
1456  or      bx,18h                          
1459  mov     [bp-0Ch],bx                     
145c  wait                                    
145d  fclex                                   
145f  les     bx,[bp+0Eh]                     
1462  wait                                    
1463  fldcw   word ptr [bp-0Ch]               
1466  wait                                    
1467  fstp    qword ptr es:[bx]               
146a  wait                                    
146b  fstsw   word ptr [bp-0Ch]               
146e  wait                                    
146f  fclex                                   
1471  wait                                    
1472  fldcw   word ptr [bp-0Eh]               
1475  or      ax,ax                           
1477  jne     1490h                           
1479  mov     bx,[bp-0Ch]                     
147c  xor     ax,ax                           
147e  test    bx,18h                          
1482  je      1490h                           
1484  mov     ax,2h                           
1487  test    bx,8h                           
148b  jne     1490h                           
148d  mov     ax,1h                           
1490  mov     sp,bp                           
1492  pop     bp                              
1493  ret     0Eh                             

; ----- sub_1496 -----
1496  mov     dx,cx                           
1498  add     dx,1019h                        
149c  and     dx,0F000h                       
14a0  push    cx                              
14a1  push    es                              
14a2  mov     bx,cs:[10h]                     
14a7  xor     cx,cx                           
14a9  or      dx,dx                           
14ab  jne     14B4h                           
14ad  test    bx,10h                          
14b1  jne     1513h                           
14b3  inc     cx                              
14b4  push    bx                              
14b5  mov     ax,2002h                        
14b8  test    bx,1h                           
14bc  jne     14C1h                           
14be  mov     ax,2020h                        
14c1  push    ax                              
14c2  push    cx                              
14c3  push    dx                              
14c4  call far KERNEL.GLOBALALLOC             
14c9  pop     bx                              
14ca  or      ax,ax                           
14cc  je      1513h                           
14ce  push    ax                              
14cf  test    bx,1h                           
14d3  je      14E5h                           
14d5  push    ax                              
14d6  call far KERNEL.GLOBALLOCK              
14db  or      ax,ax                           
14dd  jne     150Dh                           
14df  or      ax,dx                           
14e1  je      150Dh                           
14e3  mov     ax,dx                           
14e5  mov     ds,ax                           
14e7  push    ax                              
14e8  call far KERNEL.GLOBALSIZE              
14ed  or      dx,ax                           
14ef  je      150Dh                           
14f1  mov     dx,ax                           
14f3  pop     ax                              
14f4  pop     es                              
14f5  pop     cx                              
14f6  xor     bx,bx                           
14f8  mov     [bx+6h],ax                      
14fb  mov     ax,es:[di+0Ch]                  
14ff  mov     [bx+2h],ax                      
1502  mov     ax,dx                           
1504  call    1834h                           
1507  call    1868h                           
150a  clc                                     
150b  jmp     1516h                           
150d  mov     ax,12h                          
1510  jmp     0AFCh                           
1513  pop     es                              
1514  pop     cx                              
1515  stc                                     
1516  ret                                     
1517  add     [bx+si],al                      

; ----- sub_1518 -----
1518  push    bp                              
1519  mov     bp,sp                           
151b  mov     bx,2E8h                         
151e  push    ds                              
151f  pop     es                              
1520  call    180Ah                           
1523  pop     bp                              
1524  ret                                     
1525  add     [bx+si],al                      

; ----- sub_1526 -----
1526  inc     cx                              
1527  and     cl,0FEh                         
152a  push    bx                              
152b  cld                                     
152c  mov     si,[bx+0Ah]                     
152f  mov     bx,[bx+0Ch]                     
1532  xor     di,di                           
1534  jmp     1559h                           
1536  mov     ax,bx                           
1538  pop     bx                              
1539  test    al,1h                           
153b  jne     157Fh                           
153d  push    bx                              
153e  mov     si,[bx+8h]                      
1541  mov     bx,[bx+0Ah]                     
1544  cmp     bx,si                           
1546  je      157Eh                           
1548  dec     bx                              
1549  xor     di,di                           
154b  jmp     1559h                           
154d  nop                                     
154e  lea     dx,[si-2h]                      
1551  cmp     dx,bx                           
1553  jae     1536h                           
1555  add     si,ax                           
1557  jb      157Ch                           
1559  lodsw                                   
155a  test    al,1h                           
155c  je      154Eh                           
155e  mov     di,si                           
1560  dec     ax                              
1561  cmp     ax,cx                           
1563  jae     1588h                           
1565  add     si,ax                           
1567  jb      157Ch                           
1569  mov     dx,ax                           
156b  lodsw                                   
156c  test    al,1h                           
156e  je      154Eh                           
1570  add     ax,dx                           
1572  add     ax,2h                           
1575  mov     si,di                           
1577  mov     [si-2h],ax                      
157a  jmp     1560h                           
157c  mov     ax,ax                           
157e  pop     bx                              
157f  mov     ax,[bx+8h]                      
1582  mov     [bx+0Ah],ax                     
1585  stc                                     
1586  jmp     15A1h                           
1588  pop     bx                              
1589  mov     [si-2h],cx                      
158c  je      1597h                           
158e  add     di,cx                           
1590  sub     ax,cx                           
1592  dec     ax                              
1593  mov     [di],ax                         
1595  sub     di,cx                           
1597  add     di,cx                           
1599  mov     [bx+0Ah],di                     
159c  mov     ax,si                           
159e  mov     dx,ds                           
15a0  clc                                     
15a1  ret                                     

; ----- sub_15a2 -----
15a2  push    bp                              
15a3  mov     bp,sp                           
15a5  sub     sp,34h                          
15a8  push    si                              
15a9  push    di                              
15aa  push    ds                              
15ab  lds     si,[bp+6h]                      
15ae  xor     ax,ax                           
15b0  mov     [bp-0Eh],ax                     
15b3  mov     [bp-10h],ds                     
15b6  mov     [bp-12h],si                     
15b9  mov     [bp-14h],ax                     
15bc  mov     [bp-18h],ax                     
15bf  mov     [bp-16h],ax                     
15c2  mov     word ptr [bp-1Ah],19h           
15c7  push    ss                              
15c8  pop     es                              
15c9  lea     di,[bp-34h]                     
15cc  lodsb                                   
15cd  cmp     al,20h                          
15cf  je      15CCh                           
15d1  cmp     al,9h                           
15d3  je      15CCh                           
15d5  cmp     al,0Ah                          
15d7  je      15CCh                           
15d9  cmp     al,0Dh                          
15db  je      15CCh                           
15dd  or      al,al                           
15df  jne     15E4h                           
15e1  jmp     17D3h                           
15e4  cmp     al,2Bh                          
15e6  je      15F1h                           
15e8  cmp     al,2Dh                          
15ea  jne     15F2h                           
15ec  mov     word ptr [bp-14h],8000h         
15f1  lodsb                                   
15f2  cmp     al,30h                          
15f4  jb      15FAh                           
15f6  cmp     al,39h                          
15f8  jbe     160Ah                           
15fa  cmp     al,2Eh                          
15fc  jne     15E1h                           
15fe  lodsb                                   
15ff  cmp     al,30h                          
1601  jb      15E1h                           
1603  cmp     al,39h                          
1605  ja      15E1h                           
1607  jmp     161Eh                           
1609  lodsb                                   
160a  cmp     al,30h                          
160c  je      1609h                           
160e  or      al,al                           
1610  jne     1619h                           
1612  dec     si                              
1613  mov     [bp-12h],si                     
1616  jmp     17D7h                           
1619  cmp     al,2Eh                          
161b  jne     162Fh                           
161d  lodsb                                   
161e  dec     word ptr [bp-16h]               
1621  cmp     al,30h                          
1623  je      161Dh                           
1625  inc     word ptr [bp-16h]               
1628  or      al,al                           
162a  je      1612h                           
162c  jmp     1659h                           
162e  lodsb                                   
162f  cmp     al,30h                          
1631  jb      1654h                           
1633  cmp     al,39h                          
1635  ja      1654h                           
1637  sub     al,30h                          
1639  stosb                                   
163a  dec     word ptr [bp-1Ah]               
163d  jne     162Eh                           
163f  lodsb                                   
1640  inc     word ptr [bp-16h]               
1643  cmp     al,30h                          
1645  jb      164Bh                           
1647  cmp     al,39h                          
1649  jbe     163Fh                           
164b  dec     word ptr [bp-16h]               
164e  cmp     al,2Eh                          
1650  je      166Ch                           
1652  jmp     1675h                           
1654  cmp     al,2Eh                          
1656  jne     1675h                           
1658  lodsb                                   
1659  cmp     al,30h                          
165b  jb      1675h                           
165d  cmp     al,39h                          
165f  ja      1675h                           
1661  sub     al,30h                          
1663  stosb                                   
1664  dec     word ptr [bp-16h]               
1667  dec     word ptr [bp-1Ah]               
166a  jne     1658h                           
166c  lodsb                                   
166d  cmp     al,30h                          
166f  jb      1675h                           
1671  cmp     al,39h                          
1673  jbe     166Ch                           
1675  neg     word ptr [bp-1Ah]               
1678  add     word ptr [bp-1Ah],19h           
167c  lea     bx,[si-1h]                      
167f  mov     [bp-12h],bx                     
1682  xor     bx,bx                           
1684  cmp     al,45h                          
1686  je      1696h                           
1688  cmp     al,65h                          
168a  je      1696h                           
168c  cmp     al,44h                          
168e  je      1696h                           
1690  cmp     al,64h                          
1692  je      1696h                           
1694  jmp     16E8h                           
1696  lodsb                                   
1697  cmp     al,2Bh                          
1699  je      16A4h                           
169b  cmp     al,2Dh                          
169d  jne     16A5h                           
169f  mov     word ptr [bp-18h],0FFFFh        
16a4  lodsb                                   
16a5  cmp     al,30h                          
16a7  jb      16E8h                           
16a9  cmp     al,39h                          
16ab  ja      16E8h                           
16ad  sub     ax,30h                          
16b0  mov     bx,ax                           
16b2  lodsb                                   
16b3  cmp     al,30h                          
16b5  jb      16DBh                           
16b7  cmp     al,39h                          
16b9  ja      16DBh                           
16bb  sub     al,30h                          
16bd  cmp     bx,666h                         
16c1  ja      16CFh                           
16c3  shl     bx,1                            
16c5  add     ax,bx                           
16c7  shl     bx,1                            
16c9  shl     bx,1                            
16cb  add     bx,ax                           
16cd  jns     16B2h                           
16cf  mov     bx,3FFFh                        
16d2  lodsb                                   
16d3  cmp     al,30h                          
16d5  jb      16DBh                           
16d7  cmp     al,39h                          
16d9  jbe     16D2h                           
16db  xor     bx,[bp-18h]                     
16de  sub     bx,[bp-18h]                     
16e1  add     [bp-16h],bx                     
16e4  dec     si                              
16e5  mov     [bp-12h],si                     
16e8  cmp     word ptr [bp-1Ah],0h            
16ec  jne     16F1h                           
16ee  jmp     17D7h                           
16f1  mov     byte ptr es:[di],0h             
16f5  dec     di                              
16f6  cmp     word ptr [bp-1Ah],18h           
16fa  jbe     1713h                           
16fc  mov     al,es:[di]                      
16ff  mov     byte ptr es:[di],0h             
1703  dec     word ptr [bp-1Ah]               
1706  inc     word ptr [bp-16h]               
1709  dec     di                              
170a  cmp     al,5h                           
170c  jb      1722h                           
170e  inc     byte ptr es:[di]                
1711  jmp     1728h                           
1713  cmp     word ptr [bp-16h],0h            
1717  je      1728h                           
1719  jmp     1722h                           
171b  dec     di                              
171c  dec     word ptr [bp-1Ah]               
171f  inc     word ptr [bp-16h]               
1722  cmp     byte ptr es:[di],0h             
1726  je      171Bh                           
1728  push    ss                              
1729  lea     ax,[bp-34h]                     
172c  push    ax                              
172d  push    word ptr [bp-1Ah]               
1730  lea     ax,[bp-0Ch]                     
1733  push    ax                              
1734  call    1DB0h                           
1737  mov     ax,[bp-16h]                     
173a  or      ax,ax                           
173c  je      175Ch                           
173e  cmp     ax,1450h                        
1741  jl      1746h                           
1743  jmp     17E9h                           
1746  cmp     ax,0EBB0h                       
1749  jg      174Eh                           
174b  jmp     17E3h                           
174e  push    ss                              
174f  lea     ax,[bp-0Ch]                     
1752  push    ax                              
1753  push    word ptr [bp-16h]               
1756  push    word ptr [bp+4h]                
1759  call    1B56h                           
175c  mov     ax,[bp-4h]                      
175f  mov     bx,[bp-6h]                      
1762  mov     cx,[bp-8h]                      
1765  mov     dx,[bp-0Ah]                     
1768  cmp     word ptr [bp-0Ch],8000h         
176d  jb      178Bh                           
176f  ja      1777h                           
1771  test    dx,1h                           
1775  je      178Bh                           
1777  add     dx,1h                           
177a  adc     cx,0h                           
177d  adc     bx,0h                           
1780  adc     ax,0h                           
1783  jae     178Bh                           
1785  or      ah,80h                          
1788  inc     word ptr [bp-2h]                
178b  mov     si,[bp-2h]                      
178e  cmp     si,7FFFh                        
1792  jae     17E9h                           
1794  or      si,si                           
1796  jne     17A2h                           
1798  mov     si,ax                           
179a  or      si,bx                           
179c  or      si,cx                           
179e  or      si,dx                           
17a0  je      17E3h                           
17a2  lds     si,[bp+0Eh]                     
17a5  mov     [si+6h],ax                      
17a8  mov     [si+4h],bx                      
17ab  mov     [si+2h],cx                      
17ae  mov     [si],dx                         
17b0  mov     ax,[bp-2h]                      
17b3  or      ax,[bp-14h]                     
17b6  mov     [si+8h],ax                      
17b9  lds     si,[bp+0Ah]                     
17bc  mov     ax,[bp-12h]                     
17bf  mov     [si],ax                         
17c1  mov     ax,[bp-10h]                     
17c4  mov     [si+2h],ax                      
17c7  mov     ax,[bp-0Eh]                     
17ca  pop     ds                              
17cb  pop     di                              
17cc  pop     si                              
17cd  mov     sp,bp                           
17cf  pop     bp                              
17d0  ret     0Eh                             
17d3  or      word ptr [bp-0Eh],4h            
17d7  les     di,[bp+0Eh]                     
17da  xor     ax,ax                           
17dc  mov     cx,5h                           
17df  rep     stosw                           
17e1  jmp     17B9h                           
17e3  or      word ptr [bp-0Eh],1h            
17e7  jmp     17D7h                           
17e9  or      word ptr [bp-0Eh],2h            
17ed  lds     si,[bp+0Eh]                     
17f0  mov     ax,7FFFh                        
17f3  or      ax,[bp-14h]                     
17f6  mov     [si+8h],ax                      
17f9  mov     word ptr [si+6h],8000h          
17fe  xor     ax,ax                           
1800  mov     [si+4h],ax                      
1803  mov     [si+2h],ax                      
1806  mov     [si],ax                         
1808  jmp     17B9h                           

; ----- sub_180a -----
180a  push    bp                              
180b  mov     bp,sp                           
180d  push    di                              
180e  les     bx,es:[bx]                      
1811  mov     cx,es                           
1813  jcxz    182Fh                           
1815  mov     ax,es:[bx+6h]                   
1819  les     bx,es:[bx+0Eh]                  
181d  push    bx                              
181e  push    es                              
181f  push    ax                              
1820  push    ax                              
1821  call far KERNEL.GLOBALUNLOCK            
1826  call far KERNEL.GLOBALFREE              
182b  pop     es                              
182c  pop     bx                              
182d  jmp     1811h                           
182f  pop     di                              
1830  mov     sp,bp                           
1832  pop     bp                              
1833  ret                                     

; ----- sub_1834 -----
1834  push    es                              
1835  push    di                              
1836  mov     di,ax                           
1838  add     di,bx                           
183a  mov     [bx+4h],di                      
183d  dec     di                              
183e  dec     di                              
183f  sub     ax,18h                          
1842  lea     si,[bx+16h]                     
1845  mov     word ptr [di],0FFFEh            
1849  mov     [bx+0Ch],di                     
184c  dec     ax                              
184d  mov     [si],ax                         
184f  mov     [bx],ds                         
1851  mov     ax,si                           
1853  mov     dx,ds                           
1855  mov     es,dx                           
1857  lea     di,[bx+8h]                      
185a  cld                                     
185b  stosw                                   
185c  stosw                                   
185d  inc     di                              
185e  inc     di                              
185f  xor     ax,ax                           
1861  stosw                                   
1862  stosw                                   
1863  stosw                                   
1864  stosw                                   
1865  pop     di                              
1866  pop     es                              
1867  ret                                     

; ----- sub_1868 -----
1868  mov     ax,es:[di+2h]                   
186c  or      ax,ax                           
186e  jne     1879h                           
1870  mov     es:[di+2h],ds                   
1874  mov     es:[di],bx                      
1877  jmp     188Dh                           
1879  push    es                              
187a  les     si,es:[di+8h]                   
187e  mov     es:[si+10h],ds                  
1882  mov     es:[si+0Eh],bx                  
1886  mov     [bx+14h],es                     
1889  mov     [bx+12h],si                     
188c  pop     es                              
188d  mov     es:[di+0Ah],ds                  
1891  mov     es:[di+8h],bx                   
1895  mov     es:[di+6h],ds                   
1899  mov     es:[di+4h],bx                   
189d  ret                                     
189e  add     [bx+si],al                      
18a0  add     [bx+si],al                      
18a2  add     [bx+si],al                      
18a4  add     [bx+si],al                      
18a6  add     [bx+si+4002h],ah                
18aa  add     [bx+si],al                      
18ac  add     [bx+si],al                      
18ae  add     [bx+si],al                      
18b0  add     [bx+si],al                      
18b2  add     al,cl                           
18b4  add     ax,40h                          
18b7  add     [bx+si],al                      
18b9  add     [bx+si],al                      
18bb  add     [bx+si],al                      
18bd  add     [bx+si],al                      
18bf  cli                                     
18c0  or      [bx+si],al                      
18c3  add     [bx+si],al                      
18c5  add     [bx+si],al                      
18c7  add     [bx+si],al                      
18c9  add     [bx+si-64h],al                  
18cc  or      al,40h                          
18ce  add     [bx+si],al                      
18d0  add     [bx+si],al                      
18d2  add     [bx+si],al                      
18d4  add     [bx+si],al                      
18d6  push    ax                              
18d7  ret                                     
18d8  cmovo   ax,[bx+si]                      
18db  add     [bx+si],al                      
18dd  add     [bx+si],al                      
18df  add     [bx+si],al                      
18e1  add     [si],ah                         
18e3  hlt                                     
18e4  adc     al,[bx+si]                      
18e7  add     [bx+si],al                      
18e9  add     [bx+si],al                      
18eb  add     [bx+si],al                      
18ed  adc     byte ptr [bp+1698h],40h         
18f2  add     [bx+si],al                      
18f4  add     [bx+si],al                      
18f6  add     [bx+si],al                      
18f8  add     [bx+si],ah                      
18fa  mov     sp,19BEh                        
18fd  inc     ax                              
18fe  add     [bx+si],al                      
1900  add     [bx+si],al                      
1902  add     [si],al                         
1904  mov     di,1BC9h                        
1907  mov     ???,[si]                        
1909  inc     ax                              
190a  add     [bx+si],al                      
190c  add     [bx+di-3313h],ah                
1910  into                                    
1911  sbb     ax,dx                           
1913  ror     word ptr [bp+40h],cl            
1916  and     al,dh                           
1918  sahf                                    
1919  mov     ch,70h                          
191b  sub     bp,[bx+si-3A53h]                
191f  popf                                    
1920  imul    ax,[bx+si-30h],0FD5Dh           
1925  and     ax,1AE5h                        
1928  mov     cs,[bx+19h]                     
192b  jmp     18B0h                           
192d  inc     ax                              
192e  jno     18C6h                           
1930  xlat                                    
1931  xchg    ax,bp                           
1932  inc     bx                              
1933  push    cs                              
1934  add     ax,298Dh                        
1937  scasw                                   
1938  sahf                                    
1939  inc     ax                              
193a  stc                                     
193b  mov     di,44A0h                        
193e  in      ax,dx                           
193f  adc     word ptr [bp+si],818Fh          
1943  cmp     byte ptr [bx+di-40C0h],3Ch      
1948  aad     0A6h                            
194a  iret                                    
194b  dec     word ptr [bx+di+1Fh]            
194e  js      1912h                           
1950  rol     word ptr [bx+si+6Fh],cl         
1953  mov     al,8Ch                          
1956  jmp     0E2D9h                          
1959  inc     di                              
195a  mov     dx,0A893h                       
195d  inc     cx                              
195e  mov     sp,6B85h                        
1961  push    bp                              
1962  daa                                     
1963  cmp     [di+70F7h],cx                   
1967  loopne  19E5h                           
1969  inc     dx                              
196a  mov     sp,8EDDh                        
196d  fdivp   st(1)                           
196f  popf                                    
1970  sti                                     
1971  jmp     19F1h                           
1973  stosb                                   
1974  push    cx                              
1975  inc     bx                              
1976  mov     ax,[76E6h]                      
1979  jcxz    1947h                           
197b  repne   sub     [bx],bp                 
197e  test    [bx+di+4426h],al                
1982  sub     [bx+si],dl                      
1984  pop     ss                              
1985  stosb                                   
1986  clc                                     
1987  scasb                                   
1988  adc     bl,ah                           
198a  lds     ax,sp                           
198c  cli                                     
198d  inc     sp                              
198e  jmp     1937h                           
1990  aam     0F3h                            
1992  imul    bx                              
1994  loopz   19E0h                           
1996  jp      192Dh                           
1998  iret                                    
1999  inc     bp                              
199a  int 3                                   
199c  mov     word ptr [bx+di-59F2h],0A0AEh   
19a2  sbb     bx,sp                           
19a4  mov     [0D46h],ax                      
19a7  pop     ss                              
19a9  or      al,75h                          
19ab  add     word ptr [bp+7675h],48C9h       
19b1  dec     bp                              
19b2  pop     ax                              
19b3  inc     dx                              
19b4  in      al,0A7h                         
19b6  xchg    ax,bx                           
19b7  cmp     [bp+di],di                      
19b9  xor     ax,0B2B8h                       
19bc  in      ax,dx                           
19bd  push    bx                              
19be  dec     bp                              
19bf  cmpsw                                   
19c0  in      ax,5Dh                          
19c2  cmp     ax,5DC5h                        
19c5  cmp     cx,[bp+di-6D62h]                
19c9  pop     dx                              
19ca  call    far ptr  [di-5Ah]               
19cd  lock                                    
19ce  mov     ax,[0C020h]                     
19d1  push    sp                              
19d2  movsw                                   
19d3  mov     [bx],???                        
19d5  popa                                    
19d6  sar     bp,1                            
19d8  mov     bx,[bp+si-75h]                  
19db  fsub    dword ptr [di]                  
19dd  pop     bp                              
19de  mov     cx,di                           
19e0  ??? (FPU)                               
19e3  xchg    ax,bp                           
19e4  clc                                     
19e5  rep     daa                             
19e7  mov     di,0C8A2h                       
19ea  pop     bp                              
19eb  fld     qword ptr [bx+si+4C6Eh]         
19ef  leave                                   
19f0  wait                                    
19f1  xchg    ax,di                           
19f2  and     [bp+si+5202h],cl                
19f6  pusha                                   
19f7  les     sp,[di]                         
19f9  jne     19C8h                           
19fb  int 3                                   
19fc  int     0CCh                            
19fe  int 3                                   
19ff  int 3                                   
1a00  int 3                                   
1a01  int 3                                   
1a02  int 3                                   
1a03  int 3                                   
1a04  sti                                     
1a05  aas                                     
1a06  jno     1A45h                           
1a08  or      dl,bh                           
1a0a  mov     [3D70h],ax                      
1a0d  or      dl,bh                           
1a0f  mov     [3FF8h],ax                      
1a12  pop     dx                              
1a13  cmp     bx,di                           
1a16  dec     di                              
1a17  lea     dx,[bx+126Eh]                   
1a1b  xor     bp,3Fh                          
1a1e  ret                                     
1a1f  shr     word ptr [si],cl                
1a21  sbb     dx,sp                           
1a24  pop     ax                              
1a25  pop     ss                              
1a26  mov     bh,0D1h                         
1a28  ???                                     
1a29  aas                                     
1a2a  ror     byte ptr [bx],1                 
1a2c  and     ax,[si+1B47h]                   
1a30  inc     di                              
1a31  lodsb                                   
1a32  lds     sp,[bx+3FEEh]                   
1a36  inc     ax                              
1a37  cmpsb                                   
1a38  mov     dh,69h                          
1a3a  insb                                    
1a3b  scasw                                   
1a3c  add     ax,37BDh                        
1a3f  xchg    ch,bl                           
1a41  aas                                     
1a42  xor     di,[di]                         
1a44  mov     sp,7A42h                        
1a47  in      ax,0D5h                         
1a49  xchg    ax,sp                           
1a4a  mov     di,0E7D6h                       
1a4d  aas                                     
1a4e  ret     0FDFDh                          
1a51  into                                    
1a52  popa                                    
1a53  test    [bx+di],dl                      
1a55  ja      1A23h                           
1a57  stosw                                   
1a58  in      al,3Fh                          
1a5a  das                                     
1a5b  dec     sp                              
1a5c  pop     bx                              
1a5d  loopz   1AACh                           
1a5f  les     di,[bp-6A6Ch]                   
1a63  out     0C9h,al                         
1a65  aas                                     
1a66  xchg    ax,dx                           
1a67  les     dx,[bp+di+3Bh]                  
1a6a  jne     1AB0h                           
1a6c  int     14h                             
1a6e  mov     si,0AF9Ah                       
1a71  aas                                     
1a72  fisub   word ptr [bx-46h]               
1a75  xchg    ax,sp                           
1a76  cmp     [di-53h],ax                     
1a79  push    ds                              
1a7a  mov     cl,0CFh                         
1a7c  xchg    ax,sp                           
1a7d  aas                                     
1a7e  and     al,23h                          
1a80  mov     dl,0BCh                         
1a83  mov     dx,313Bh                        
1a86  popa                                    
1a87  mov     di,[bp+si+3Fh]                  
1a8a  popa                                    
1a8b  push    bp                              
1a8c  pop     cx                              
1a8d  sar     word ptr [bp-4Fh],53h           
1a91  jl      1AA5h                           
1a93  mov     bx,3F5Fh                        
1a96  xlat                                    
1a97  out     dx,al                           
1a98  das                                     
1a99  lea     ax,[92BEh]                      
1a9d  test    [di],dx                         
1a9f  sti                                     
1aa0  inc     sp                              
1aa1  aas                                     
1aa2  and     al,3Fh                          
1aa4  movsw                                   
1aa5  jmp     0BFE1h                          
1aa8  daa                                     
1aa9  jmp     3F2Ah:0A87Fh                    
1aae  jge     1A5Ch                           
1ab0  mov     ax,[0BCE4h]                     
1ab3  jl      1AFCh                           
1ab6  rcr     ch,1                            
1ab8  push    bp                              
1ab9  arpl    ds:[bp+di+6h],di                
1abd  int 3                                   
1abe  and     dx,[si+77h]                     
1ac1  cmp     di,-6Fh                         
1ac4  cmp     word ptr [di],0FA91h            
1ac8  cmp     bl,[bx+di]                      
1aca  jp      1B2Fh                           
1acc  and     ax,3143h                        
1acf  shr     byte ptr [si+213Ch],89h         
1ad4  sar     word ptr [bx+si],1              
1ad6  add     byte ptr [bx-69h],0B8h          
1ada  add     ch,bh                           
1adc  xlat                                    
1add  cmp     bx,sp                           
1adf  mov     [bx+si+8h],bl                   
1ae2  sbb     si,[bx+di-1C18h]                
1ae6  xchg    ah,[bp+3B03h]                   
1aea  mov     byte ptr [si+4245h],7h          
1aef  mov     dh,99h                          
1af1  jne     1B2Ah                           
1af3  fld     tword ptr [333Ah]               
1af7  jno     1B15h                           
1af9  shl     byte ptr [bp+di],cl             
1afb  ??? (FPU)                               
1afd  out     dx,al                           
1afe  dec     cx                              
1aff  nop                                     
1b00  pop     dx                              
1b01  cmp     [bp-4179h],sp                   
1b05  rcl     byte ptr [bx-26h],0A5h          
1b09  and     byte ptr [bp-4A5Eh],32h         
1b0e  loop    1B78h                           
1b10  mov     dl,11h                          
1b12  cmpsw                                   
1b13  push    dx                              
1b14  lahf                                    
1b15  inc     sp                              
1b16  pop     cx                              
1b17  mov     bh,10h                          
1b19  sub     al,25h                          
1b1b  dec     cx                              
1b1c  in      al,2Dh                          
1b1e  xor     al,4Fh                          
1b21  push    bx                              
1b22  scasb                                   
1b23  into                                    
1b24  imul    sp,[di],-71h                    
1b27  pop     cx                              
1b28  add     al,0A4h                         
1b2a  rcr     dh,0C2h                         
1b2d  jge     1B2Ah                           
1b2f  call    39F8h                           
1b32  sahf                                    
1b33  out     88h,ax                          
1b35  pop     dx                              
1b36  push    di                              
1b37  xchg    ax,cx                           
1b38  cmp     al,0BFh                         
1b3a  push    ax                              
1b3b  and     word ptr [bp+si],18h            
1b3e  dec     si                              
1b3f  dec     bx                              
1b40  bound   di,bp                           
1b43  or      word ptr [bx+6AFh],-6Ch         
1b48  jge     1B5Bh                           
1b4a  in      al,2Dh                          
1b4c  ficomp  word ptr [bx-2D32h]             
1b50  enter   0DD04h,0A6h                     
1b54  fmul    dword ptr [bp+si]               

; ----- sub_1b56 -----
1b56  push    bp                              
1b57  mov     bp,sp                           
1b59  sub     sp,6h                           
1b5c  push    si                              
1b5d  push    di                              
1b5e  mov     di,[bp+6h]                      
1b61  mov     bx,183Eh                        
1b64  or      di,di                           
1b66  je      1BE2h                           
1b68  jns     1B6Fh                           
1b6a  mov     bx,199Ah                        
1b6d  neg     di                              
1b6f  mov     word ptr [bp-6h],1BF4h          
1b74  cmp     word ptr [bp+4h],0h             
1b78  jne     1B9Ah                           
1b7a  mov     word ptr [bp-6h],1BEAh          
1b7f  wait                                    
1b80  fstcw   word ptr [bp-2h]                
1b83  nop                                     
1b84  wait                                    
1b85  mov     ax,[bp-2h]                      
1b88  or      ax,38h                          
1b8b  mov     [bp-4h],ax                      
1b8e  wait                                    
1b8f  fldcw   word ptr [bp-4h]                
1b92  les     si,[bp+8h]                      
1b95  wait                                    
1b96  fld     tword ptr es:[si+2h]            
1b9a  push    di                              
1b9b  pop     di                              
1b9c  add     bx,54h                          
1b9f  or      di,di                           
1ba1  je      1BC6h                           
1ba3  mov     ax,di                           
1ba5  shr     di,1                            
1ba7  shr     di,1                            
1ba9  shr     di,1                            
1bab  push    di                              
1bac  and     ax,7h                           
1baf  je      1B9Bh                           
1bb1  push    bx                              
1bb2  shl     al,1                            
1bb4  shl     al,1                            
1bb6  mov     ah,al                           
1bb8  shl     al,1                            
1bba  add     al,ah                           
1bbc  xor     ah,ah                           
1bbe  add     bx,ax                           
1bc0  jmp     word ptr [bp-6h]                
1bc3  pop     bx                              
1bc4  jmp     1B9Bh                           
1bc6  cmp     word ptr [bp+4h],0h             
1bca  jne     1BE2h                           
1bcc  wait                                    
1bcd  fclex                                   
1bcf  wait                                    
1bd0  fldcw   word ptr [bp-2h]                
1bd3  les     si,[bp+8h]                      
1bd6  wait                                    
1bd7  fstp    tword ptr es:[si+2h]            
1bdb  mov     word ptr es:[si],0h             
1be0  nop                                     
1be1  wait                                    
1be2  pop     di                              
1be3  pop     si                              
1be4  mov     sp,bp                           
1be6  pop     bp                              
1be7  ret     8h                              
1bea  wait                                    
1beb  fld     tword ptr cs:[bx+2h]            
1bef  wait                                    
1bf0  fmulp   st(1)                           
1bf2  jmp     1BC3h                           
1bf4  push    word ptr cs:[bx+0Ah]            
1bf8  push    word ptr cs:[bx+8h]             
1bfc  push    word ptr cs:[bx+6h]             
1c00  push    word ptr cs:[bx+4h]             
1c04  mov     cx,cs:[bx+2h]                   
1c08  mov     ax,cs:[bx]                      
1c0b  cmp     ax,8000h                        
1c0e  adc     cx,-1h                          
1c11  push    cx                              
1c12  push    ax                              
1c13  mov     ax,sp                           
1c15  push    word ptr [bp+0Ah]               
1c18  push    word ptr [bp+8h]                
1c1b  push    ss                              
1c1c  push    ax                              
1c1d  call    1C2Bh                           
1c20  add     sp,0Ch                          
1c23  jmp     1BC3h                           
1c25  jmp     1D94h                           
1c28  jmp     1D7Fh                           

; ----- sub_1c2b -----
1c2b  push    bp                              
1c2c  mov     bp,sp                           
1c2e  sub     sp,12h                          
1c31  push    si                              
1c32  push    di                              
1c33  mov     cx,9h                           
1c36  mov     ax,ss                           
1c38  mov     es,ax                           
1c3a  lea     di,[bp-12h]                     
1c3d  xor     ax,ax                           
1c3f  rep     stosw                           
1c41  lds     si,[bp+8h]                      
1c44  les     di,[bp+4h]                      
1c47  mov     ax,[si+0Ah]                     
1c4a  mov     bx,es:[di+0Ah]                  
1c4e  mov     cx,ax                           
1c50  xor     cx,bx                           
1c52  and     cx,8000h                        
1c56  mov     [bp-2h],cx                      
1c59  mov     dx,7FFFh                        
1c5c  and     ax,dx                           
1c5e  cmp     ax,dx                           
1c60  je      1C25h                           
1c62  and     bx,dx                           
1c64  cmp     bx,dx                           
1c66  je      1C25h                           
1c68  mov     dx,ax                           
1c6a  add     dx,bx                           
1c6c  cmp     dx,0BFFDh                       
1c70  ja      1C25h                           
1c72  cmp     dx,3FBFh                        
1c76  jbe     1C28h                           
1c78  or      ax,ax                           
1c7a  jne     1C8Dh                           
1c7c  inc     dx                              
1c7d  mov     ax,[si]                         
1c7f  or      ax,[si+2h]                      
1c82  or      ax,[si+4h]                      
1c85  or      ax,[si+6h]                      
1c88  or      ax,[si+8h]                      
1c8b  je      1C28h                           
1c8d  or      bx,bx                           
1c8f  jne     1CA7h                           
1c91  inc     dx                              
1c92  mov     ax,es:[di]                      
1c95  or      ax,es:[di+2h]                   
1c99  or      ax,es:[di+4h]                   
1c9d  or      ax,es:[di+6h]                   
1ca1  or      ax,es:[di+8h]                   
1ca5  je      1C28h                           
1ca7  sub     dx,3FFEh                        
1cab  mov     [si+0Ah],dx                     
1cae  add     di,8h                           
1cb1  mov     cx,5h                           
1cb4  lea     bx,[bp-12h]                     
1cb7  push    cx                              
1cb8  push    si                              
1cb9  push    di                              
1cba  mov     ax,es:[di]                      
1cbd  mul     word ptr [si]                   
1cbf  add     ss:[bx],ax                      
1cc2  adc     ss:[bx+2h],dx                   
1cc6  adc     word ptr ss:[bx+4h],0h          
1ccb  add     si,2h                           
1cce  sub     di,2h                           
1cd1  loop    1CBAh                           
1cd3  pop     di                              
1cd4  pop     si                              
1cd5  pop     cx                              
1cd6  add     bx,2h                           
1cd9  add     si,2h                           
1cdc  add     cx,-1h                          
1cdf  jne     1CB7h                           
1ce1  mov     si,[bp+8h]                      
1ce4  mov     dx,[bp-10h]                     
1ce7  mov     cx,[bp-0Eh]                     
1cea  mov     bx,[bp-0Ch]                     
1ced  mov     ax,[bp-0Ah]                     
1cf0  mov     di,[bp-8h]                      
1cf3  cmp     word ptr [si+0Ah],0h            
1cf7  jg      1D0Dh                           
1cf9  jmp     1D5Ah                           
1cfb  shl     word ptr [bp-12h],1             
1cfe  rcl     dx,1                            
1d00  rcl     cx,1                            
1d02  rcl     bx,1                            
1d04  rcl     ax,1                            
1d06  rcl     di,1                            
1d08  dec     word ptr [si+0Ah]               
1d0b  je      1D5Ah                           
1d0d  or      di,di                           
1d0f  jns     1CFBh                           
1d11  cmp     word ptr [bp-12h],8000h         
1d16  jb      1D37h                           
1d18  ja      1D20h                           
1d1a  test    dx,1h                           
1d1e  je      1D37h                           
1d20  add     dx,1h                           
1d23  adc     cx,0h                           
1d26  adc     bx,0h                           
1d29  adc     ax,0h                           
1d2c  adc     di,0h                           
1d2f  jae     1D37h                           
1d31  mov     di,8000h                        
1d34  inc     word ptr [si+0Ah]               
1d37  cmp     word ptr [si+0Ah],7FFFh         
1d3c  jae     1D94h                           
1d3e  mov     [si+8h],di                      
1d41  mov     [si+6h],ax                      
1d44  mov     [si+4h],bx                      
1d47  mov     [si+2h],cx                      
1d4a  mov     [si],dx                         
1d4c  mov     ax,[bp-2h]                      
1d4f  or      [si+0Ah],ax                     
1d52  pop     di                              
1d53  pop     si                              
1d54  mov     sp,bp                           
1d56  pop     bp                              
1d57  ret     8h                              
1d5a  dec     word ptr [si+0Ah]               
1d5d  shr     di,1                            
1d5f  rcr     ax,1                            
1d61  rcr     bx,1                            
1d63  rcr     cx,1                            
1d65  rcr     dx,1                            
1d67  rcr     word ptr [bp-12h],1             
1d6a  adc     word ptr [bp-4h],0h             
1d6e  inc     word ptr [si+0Ah]               
1d71  jne     1D5Dh                           
1d73  cmp     word ptr [bp-4h],0h             
1d77  je      1D11h                           
1d79  or      word ptr [bp-12h],1h            
1d7d  jmp     1D11h                           
1d7f  xor     ax,ax                           
1d81  mov     [si+0Ah],ax                     
1d84  mov     [si+8h],ax                      
1d87  mov     [si+6h],ax                      
1d8a  mov     [si+4h],ax                      
1d8d  mov     [si+2h],ax                      
1d90  mov     [si],ax                         
1d92  jmp     1D52h                           
1d94  mov     ax,7FFFh                        
1d97  or      ax,[bp-2h]                      
1d9a  mov     [si+0Ah],ax                     
1d9d  xor     ax,ax                           
1d9f  mov     [si+8h],ax                      
1da2  mov     [si+6h],ax                      
1da5  mov     [si+4h],ax                      
1da8  mov     [si+2h],ax                      
1dab  mov     [si],ax                         
1dad  jmp     1D52h                           
1daf  add     [bx+si],al                      

; ----- sub_1db0 -----
1db0  push    bp                              
1db1  mov     bp,sp                           
1db3  sub     sp,0Ch                          
1db6  push    si                              
1db7  push    di                              
1db8  mov     ax,[bp+6h]                      
1dbb  mov     [bp-0Ch],ax                     
1dbe  les     si,[bp+8h]                      
1dc1  xor     ax,ax                           
1dc3  mov     di,ax                           
1dc5  mov     bx,ax                           
1dc7  mov     cx,ax                           
1dc9  mov     dx,ax                           
1dcb  mov     dl,es:[si]                      
1dce  inc     si                              
1dcf  jmp     1E0Bh                           
1dd1  mov     [bp-2h],di                      
1dd4  mov     [bp-4h],ax                      
1dd7  mov     [bp-6h],bx                      
1dda  mov     [bp-8h],cx                      
1ddd  mov     [bp-0Ah],dx                     
1de0  call    1E5Eh                           
1de3  call    1E5Eh                           
1de6  add     dx,[bp-0Ah]                     
1de9  adc     cx,[bp-8h]                      
1dec  adc     bx,[bp-6h]                      
1def  adc     ax,[bp-4h]                      
1df2  adc     di,[bp-2h]                      
1df5  call    1E5Eh                           
1df8  add     dl,es:[si]                      
1dfb  inc     si                              
1dfc  adc     dh,0h                           
1dff  adc     cx,0h                           
1e02  adc     bx,0h                           
1e05  adc     ax,0h                           
1e08  adc     di,0h                           
1e0b  dec     word ptr [bp-0Ch]               
1e0e  jne     1DD1h                           
1e10  mov     si,404Eh                        
1e13  jmp     1E22h                           
1e15  mov     di,ax                           
1e17  mov     ax,bx                           
1e19  mov     bx,cx                           
1e1b  mov     cx,dx                           
1e1d  xor     dx,dx                           
1e1f  sub     si,10h                          
1e22  or      di,di                           
1e24  je      1E15h                           
1e26  js      1E37h                           
1e28  shl     dx,1                            
1e2a  rcl     cx,1                            
1e2c  rcl     bx,1                            
1e2e  rcl     ax,1                            
1e30  rcl     di,1                            
1e32  dec     si                              
1e33  or      di,di                           
1e35  jns     1E28h                           
1e37  push    si                              
1e38  mov     si,[bp+4h]                      
1e3b  pop     ss:[si+0Ah]                     
1e3f  mov     ss:[si+8h],di                   
1e43  mov     ss:[si+6h],ax                   
1e47  mov     ss:[si+4h],bx                   
1e4b  mov     ss:[si+2h],cx                   
1e4f  mov     ss:[si],dx                      
1e52  mov     ax,si                           
1e54  mov     dx,ss                           
1e56  pop     di                              
1e57  pop     si                              
1e58  mov     sp,bp                           
1e5a  pop     bp                              
1e5b  ret     8h                              

; ----- sub_1e5e -----
1e5e  shl     dx,1                            
1e60  rcl     cx,1                            
1e62  rcl     bx,1                            
1e64  rcl     ax,1                            
1e66  rcl     di,1                            
1e68  ret                                     
1e69  add     [bx+si],al                      
1e6b  add     [bx+si],al                      
1e6d  add     [bx+si],al                      
1e6f  add     [bx+si],al                      

; ----- sub_1e70 -----
1e70  mov     ax,0FFFFh                       ; segment seg2:0000
1e73  push    bp                              
1e74  mov     bp,sp                           
1e76  push    ds                              
1e77  mov     ds,ax                           
1e79  mov     ax,1h                           
1e7c  pop     ds                              
1e7d  leave                                   
1e7e  retf    0Ah                             
1e81  add     [bx+si],al                      

; ===== WEP =====
1e82  mov     ax,1E71h                        ; segment seg2:0000
1e85  push    bp                              
1e86  mov     bp,sp                           
1e88  push    ds                              
1e89  mov     ds,ax                           
1e8b  mov     ax,1h                           
1e8e  pop     ds                              
1e8f  leave                                   
1e90  retf    2h                              
1e93  add     [bx+si],al                      

; ===== DISP_REPORTID =====
1e94  mov     ax,1E83h                        ; segment seg2:0000
1e97  push    bp                              
1e98  mov     bp,sp                           
1e9a  push    ds                              
1e9b  mov     ds,ax                           
1e9d  push    0h                              
1e9f  push    0FFFFh                          ; segment seg1:0000
1ea2  push    233Ch                           
1ea5  call far M007.UIF_MESSAGE               ; "Display DLL -  V02.03 25-Jun-96"
1eaa  pop     ds                              
1eab  leave                                   
1eac  retf                                    
1ead  add     [bx+si],al                      

; ===== INITIALISE_DISP_CONTROLLER_DATA =====
1eae  mov     ax,1E95h                        ; segment seg2:0000
1eb1  push    bp                              
1eb2  mov     bp,sp                           
1eb4  push    ds                              
1eb5  mov     ds,ax                           
1eb7  push    1C1h                            
1eba  push    word ptr [30Ah]                 
1ebe  push    word ptr [308h]                 ; [ds] f32 here = 1024
1ec2  call far M007.M007_PUTHIGH              ; AP_IMAGE_ORIGIN_X
1ec7  push    1C2h                            
1eca  push    word ptr [30Eh]                 
1ece  push    word ptr [30Ch]                 ; [ds] f32 here = 768
1ed2  call far M007.M007_PUTHIGH              ; AP_IMAGE_ORIGIN_Y
1ed7  push    1C1h                            
1eda  push    word ptr [312h]                 ; [ds] f32 here = 0
1ede  push    word ptr [310h]                 ; [ds] f32 here = 0
1ee2  call far M007.M007_PUTLOW               ; AP_IMAGE_ORIGIN_X
1ee7  push    1C2h                            
1eea  push    word ptr [312h]                 ; [ds] f32 here = 0
1eee  push    word ptr [310h]                 ; [ds] f32 here = 0
1ef2  call far M007.M007_PUTLOW               ; AP_IMAGE_ORIGIN_Y
1ef7  push    1B0h                            
1efa  push    word ptr [316h]                 
1efe  push    word ptr [314h]                 ; [ds] f32 here = 1
1f02  call far M007.M007_PUTLOW               ; AP_XRAY_THRESHOLD
1f07  push    1B0h                            
1f0a  push    word ptr [31Ah]                 
1f0e  push    word ptr [318h]                 ; [ds] f32 here = 254
1f12  call far M007.M007_PUTHIGH              ; AP_XRAY_THRESHOLD
1f17  push    1B0h                            
1f1a  push    word ptr [316h]                 
1f1e  push    word ptr [314h]                 ; [ds] f32 here = 1
1f22  call far M007.M007_PUTVALUE             ; AP_XRAY_THRESHOLD
1f27  push    1B2h                            
1f2a  push    word ptr [316h]                 
1f2e  push    word ptr [314h]                 ; [ds] f32 here = 1
1f32  call far M007.M007_PUTLOW               ; AP_XRAY_LINE_SCALE
1f37  push    1B2h                            
1f3a  push    word ptr [31Eh]                 ; [ds] f32 here = -1.076163E+08
1f3e  push    word ptr [31Ch]                 ; [ds] f32 here = 128
1f42  call far M007.M007_PUTHIGH              ; AP_XRAY_LINE_SCALE
1f47  push    1B2h                            
1f4a  push    word ptr [316h]                 
1f4e  push    word ptr [314h]                 ; [ds] f32 here = 1
1f52  call far M007.M007_PUTVALUE             ; AP_XRAY_LINE_SCALE
1f57  push    74h                             
1f59  push    word ptr [322h]                 
1f5d  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1f61  call far M007.M007_PUTHIGH              ; AP_LWA_0
1f66  push    75h                             
1f68  push    word ptr [322h]                 
1f6c  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1f70  call far M007.M007_PUTHIGH              ; AP_LWA_1
1f75  push    76h                             
1f77  push    word ptr [322h]                 
1f7b  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1f7f  call far M007.M007_PUTHIGH              ; AP_LWA_2
1f84  push    77h                             
1f86  push    word ptr [322h]                 
1f8a  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1f8e  call far M007.M007_PUTHIGH              ; AP_LWA_3
1f93  push    78h                             
1f95  push    word ptr [322h]                 
1f99  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1f9d  call far M007.M007_PUTHIGH              ; AP_LWB_0
1fa2  push    79h                             
1fa4  push    word ptr [322h]                 
1fa8  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1fac  call far M007.M007_PUTHIGH              ; AP_LWB_1
1fb1  push    7Ah                             
1fb3  push    word ptr [322h]                 
1fb7  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1fbb  call far M007.M007_PUTHIGH              ; AP_LWB_2
1fc0  push    7Bh                             
1fc2  push    word ptr [322h]                 
1fc6  push    word ptr [320h]                 ; [ds] f32 here = 0.1
1fca  call far M007.M007_PUTHIGH              ; AP_LWB_3
1fcf  push    7Ch                             
1fd1  push    word ptr [326h]                 
1fd5  push    word ptr [324h]                 ; [ds] f32 here = 360
1fd9  call far M007.M007_PUTHIGH              ; AP_LWC_0
1fde  push    7Dh                             
1fe0  push    word ptr [326h]                 
1fe4  push    word ptr [324h]                 ; [ds] f32 here = 360
1fe8  call far M007.M007_PUTHIGH              ; AP_LWC_1
1fed  push    7Eh                             
1fef  push    word ptr [326h]                 
1ff3  push    word ptr [324h]                 ; [ds] f32 here = 360
1ff7  call far M007.M007_PUTHIGH              ; AP_LWC_2
1ffc  push    7Fh                             
1ffe  push    word ptr [326h]                 
2002  push    word ptr [324h]                 ; [ds] f32 here = 360
2006  call far M007.M007_PUTHIGH              ; AP_LWC_3
200b  push    50h                             
200d  push    word ptr [322h]                 
2011  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2015  call far M007.M007_PUTHIGH              ; AP_PPA_0
201a  push    51h                             
201c  push    word ptr [322h]                 
2020  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2024  call far M007.M007_PUTHIGH              ; AP_PPA_1
2029  push    52h                             
202b  push    word ptr [322h]                 
202f  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2033  call far M007.M007_PUTHIGH              ; AP_PPA_2
2038  push    53h                             
203a  push    word ptr [322h]                 
203e  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2042  call far M007.M007_PUTHIGH              ; AP_PPA_3
2047  push    54h                             
2049  push    word ptr [326h]                 
204d  push    word ptr [324h]                 ; [ds] f32 here = 360
2051  call far M007.M007_PUTHIGH              ; AP_PPB_0
2056  push    55h                             
2058  push    word ptr [326h]                 
205c  push    word ptr [324h]                 ; [ds] f32 here = 360
2060  call far M007.M007_PUTHIGH              ; AP_PPB_1
2065  push    56h                             
2067  push    word ptr [326h]                 
206b  push    word ptr [324h]                 ; [ds] f32 here = 360
206f  call far M007.M007_PUTHIGH              ; AP_PPB_2
2074  push    57h                             
2076  push    word ptr [326h]                 
207a  push    word ptr [324h]                 ; [ds] f32 here = 360
207e  call far M007.M007_PUTHIGH              ; AP_PPB_3
2083  push    70h                             
2085  push    word ptr [326h]                 
2089  push    word ptr [324h]                 ; [ds] f32 here = 360
208d  call far M007.M007_PUTHIGH              ; AP_ANGULAR_0
2092  push    71h                             
2094  push    word ptr [326h]                 
2098  push    word ptr [324h]                 ; [ds] f32 here = 360
209c  call far M007.M007_PUTHIGH              ; AP_ANGULAR_1
20a1  push    72h                             
20a3  push    word ptr [326h]                 
20a7  push    word ptr [324h]                 ; [ds] f32 here = 360
20ab  call far M007.M007_PUTHIGH              ; AP_ANGULAR_2
20b0  push    73h                             
20b2  push    word ptr [326h]                 
20b6  push    word ptr [324h]                 ; [ds] f32 here = 360
20ba  call far M007.M007_PUTHIGH              ; AP_ANGULAR_3
20bf  push    58h                             
20c1  push    word ptr [322h]                 
20c5  push    word ptr [320h]                 ; [ds] f32 here = 0.1
20c9  call far M007.M007_PUTHIGH              ; AP_3DPPA_0
20ce  push    59h                             
20d0  push    word ptr [322h]                 
20d4  push    word ptr [320h]                 ; [ds] f32 here = 0.1
20d8  call far M007.M007_PUTHIGH              ; AP_3DPPA_1
20dd  push    5Ah                             
20df  push    word ptr [322h]                 
20e3  push    word ptr [320h]                 ; [ds] f32 here = 0.1
20e7  call far M007.M007_PUTHIGH              ; AP_3DPPA_2
20ec  push    5Bh                             
20ee  push    word ptr [322h]                 
20f2  push    word ptr [320h]                 ; [ds] f32 here = 0.1
20f6  call far M007.M007_PUTHIGH              ; AP_3DPPA_3
20fb  push    5Ch                             
20fd  push    word ptr [322h]                 
2101  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2105  call far M007.M007_PUTHIGH              ; AP_3DPPB_0
210a  push    5Dh                             
210c  push    word ptr [322h]                 
2110  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2114  call far M007.M007_PUTHIGH              ; AP_3DPPB_1
2119  push    5Eh                             
211b  push    word ptr [322h]                 
211f  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2123  call far M007.M007_PUTHIGH              ; AP_3DPPB_2
2128  push    5Fh                             
212a  push    word ptr [322h]                 
212e  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2132  call far M007.M007_PUTHIGH              ; AP_3DPPB_3
2137  push    60h                             
2139  push    word ptr [322h]                 
213d  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2141  call far M007.M007_PUTHIGH              ; AP_3DPPC_0
2146  push    61h                             
2148  push    word ptr [322h]                 
214c  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2150  call far M007.M007_PUTHIGH              ; AP_3DPPC_1
2155  push    62h                             
2157  push    word ptr [322h]                 
215b  push    word ptr [320h]                 ; [ds] f32 here = 0.1
215f  call far M007.M007_PUTHIGH              ; AP_3DPPC_2
2164  push    63h                             
2166  push    word ptr [322h]                 
216a  push    word ptr [320h]                 ; [ds] f32 here = 0.1
216e  call far M007.M007_PUTHIGH              ; AP_3DPPC_3
2173  push    64h                             
2175  push    word ptr [326h]                 
2179  push    word ptr [324h]                 ; [ds] f32 here = 360
217d  call far M007.M007_PUTHIGH              ; AP_3DPPD_0
2182  push    65h                             
2184  push    word ptr [326h]                 
2188  push    word ptr [324h]                 ; [ds] f32 here = 360
218c  call far M007.M007_PUTHIGH              ; AP_3DPPD_1
2191  push    66h                             
2193  push    word ptr [326h]                 
2197  push    word ptr [324h]                 ; [ds] f32 here = 360
219b  call far M007.M007_PUTHIGH              ; AP_3DPPD_2
21a0  push    67h                             
21a2  push    word ptr [326h]                 
21a6  push    word ptr [324h]                 ; [ds] f32 here = 360
21aa  call far M007.M007_PUTHIGH              ; AP_3DPPD_3
21af  push    68h                             
21b1  push    word ptr [322h]                 
21b5  push    word ptr [320h]                 ; [ds] f32 here = 0.1
21b9  call far M007.M007_PUTHIGH              ; AP_3DPPE_0
21be  push    69h                             
21c0  push    word ptr [322h]                 
21c4  push    word ptr [320h]                 ; [ds] f32 here = 0.1
21c8  call far M007.M007_PUTHIGH              ; AP_3DPPE_1
21cd  push    6Ah                             
21cf  push    word ptr [322h]                 
21d3  push    word ptr [320h]                 ; [ds] f32 here = 0.1
21d7  call far M007.M007_PUTHIGH              ; AP_3DPPE_2
21dc  push    6Bh                             
21de  push    word ptr [322h]                 
21e2  push    word ptr [320h]                 ; [ds] f32 here = 0.1
21e6  call far M007.M007_PUTHIGH              ; AP_3DPPE_3
21eb  push    6Ch                             
21ed  push    word ptr [322h]                 
21f1  push    word ptr [320h]                 ; [ds] f32 here = 0.1
21f5  call far M007.M007_PUTHIGH              ; AP_RADIAL_0
21fa  push    6Dh                             
21fc  push    word ptr [322h]                 
2200  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2204  call far M007.M007_PUTHIGH              ; AP_RADIAL_1
2209  push    6Eh                             
220b  push    word ptr [322h]                 
220f  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2213  call far M007.M007_PUTHIGH              ; AP_RADIAL_2
2218  push    6Fh                             
221a  push    word ptr [322h]                 
221e  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2222  call far M007.M007_PUTHIGH              ; AP_RADIAL_3
2227  push    83h                             
222a  push    word ptr [322h]                 
222e  push    word ptr [320h]                 ; [ds] f32 here = 0.1
2232  call far M007.M007_PUTHIGH              ; AP_PROFILE_W
2237  call far DISP_REPORTID                  
223c  pop     ds                              
223d  leave                                   
223e  retf                                    
223f  add     [bx+si],al                      

; ===== INITIALISE_DISP_CONTROLLER =====
2240  mov     ax,1EAFh                        ; segment seg2:0000
2243  enter   2h,0h                           
2247  push    ds                              
2248  mov     ds,ax                           
224a  push    83h                             
224d  call far M007.M007_GETSTATE             ; DP_GSP
2252  dec     ax                              
2253  jne     2274h                           
2255  call far sub_3d14                       
225a  or      ax,ax                           
225c  jl      2279h                           
225e  push    0h                              
2260  push    1h                              
2262  push    0h                              
2264  call far TIGASEM.SETPLANESTATE          
2269  push    0h                              
226b  push    2h                              
226d  push    0h                              
226f  call far TIGASEM.SETPLANESTATE          
2274  xor     ax,ax                           
2276  pop     ds                              
2277  leave                                   
2278  retf                                    
2279  push    1A0h                            
227c  push    0h                              
227e  push    0h                              
2280  push    0A000h                          
2283  call far M007.UIF_LOG                   
2288  mov     ax,1A0h                         
228b  pop     ds                              
228c  leave                                   
228d  retf                                    

; ===== DISP_CONTROLLER_SHUTDOWN =====
228e  mov     ax,2241h                        ; segment seg2:0000
2291  push    bp                              
2292  mov     bp,sp                           
2294  push    ds                              
2295  mov     ds,ax                           
2297  xor     ax,ax                           
2299  pop     ds                              
229a  leave                                   
229b  retf                                    

; ===== DISP_CONTROLLER_SUSPEND =====
229c  mov     ax,228Fh                        ; segment seg2:0000
229f  push    bp                              
22a0  mov     bp,sp                           
22a2  push    ds                              
22a3  mov     ds,ax                           
22a5  push    83h                             
22a8  call far M007.M007_GETSTATE             ; DP_GSP
22ad  dec     ax                              
22ae  jne     22B5h                           
22b0  call far sub_3d68                       
22b5  pop     ds                              
22b6  leave                                   
22b7  retf                                    

; ===== DISP_CONTROLLER_REMOVE =====
22b8  mov     ax,229Dh                        ; segment seg2:0000
22bb  enter   2h,0h                           
22bf  push    ds                              
22c0  mov     ds,ax                           
22c2  push    83h                             
22c5  call far M007.M007_GETSTATE             ; DP_GSP
22ca  dec     ax                              
22cb  jne     22D2h                           
22cd  call far sub_3d54                       
22d2  pop     ds                              
22d3  leave                                   
22d4  retf                                    
22d5  add     [bx+si],al                      

; ===== DISP_TIMER_TICK =====
22d6  mov     ax,22B9h                        ; segment seg2:0000
22d9  push    bp                              
22da  mov     bp,sp                           
22dc  push    ds                              
22dd  mov     ds,ax                           
22df  pop     ds                              
22e0  leave                                   
22e1  retf    2h                              

; ===== TEST_300 =====
22e4  mov     ax,22D7h                        ; segment seg2:0000
22e7  enter   6h,0h                           
22eb  push    ds                              
22ec  mov     ds,ax                           
22ee  push    word ptr [bp+0Ch]               
22f1  wait                                    
22f2  fld     dword ptr [bp+8h]               
22f5  call far sub_01f2                       
22fa  push    ax                              
22fb  call far sub_3d80                       
2300  mov     [bp-6h],ax                      
2303  wait                                    
2304  fild    word ptr [bp-6h]                
2307  mov     bx,[bp+6h]                      
230a  wait                                    
230b  fstp    dword ptr ss:[bx]               
230e  nop                                     
230f  wait                                    
2310  mov     ax,bx                           
2312  mov     dx,ss                           
2314  pop     ds                              
2315  leave                                   
2316  retf    8h                              
2319  add     [bx+si],al                      

; ===== RESTORE_DISPLAY_CONFIG =====
231a  mov     ax,22E5h                        ; segment seg2:0000
231d  push    bp                              
231e  mov     bp,sp                           
2320  push    ds                              
2321  mov     ds,ax                           
2323  call far sub_235c                       
2328  pop     ds                              
2329  leave                                   
232a  retf    4h                              
232d  add     [bx+si],al                      

; ===== GET_DISPLAY_CONFIG =====
232e  mov     ax,231Bh                        ; segment seg2:0000
2331  push    bp                              
2332  mov     bp,sp                           
2334  push    ds                              
2335  mov     ds,ax                           
2337  pop     ds                              
2338  leave                                   
2339  retf    4h                              
233c  inc     sp                              
233d  imul    si,[bp+di+70h],616Ch            
2342  jns     2364h                           
2344  inc     sp                              
2345  dec     sp                              
2346  dec     sp                              
2347  and     [di],ch                         
2349  and     [bx+si],ah                      
234b  push    si                              
234c  xor     [bp+si],dh                      
234e  xor     cs:[bp+di],dh                   
2351  and     [bp+si],dh                      
2353  xor     ax,4A2Dh                        
2356  jne     23C6h                           
2358  sub     ax,3639h                        
235b  add     [bx+si],al                      

; ----- sub_235c -----
235c  mov     ax,232Fh                        ; segment seg2:0000
235f  push    bp                              
2360  mov     bp,sp                           
2362  push    ds                              
2363  mov     ds,ax                           
2365  pop     ds                              
2366  leave                                   
2367  retf                                    

; ===== SWITCHEDX_DOTS =====
2368  mov     ax,235Dh                        ; segment seg2:0000
236b  push    bp                              
236c  mov     bp,sp                           
236e  push    ds                              
236f  mov     ds,ax                           
2371  push    0C4h                            
2374  push    word ptr [bp+6h]                
2377  call far M007.M007_PUTSTATE             ; DP_EDX_DOTS
237c  pop     ds                              
237d  leave                                   
237e  retf    2h                              
2381  add     [bx+si],al                      

; ===== SWITCHPROFILE =====
2382  mov     ax,2369h                        ; segment seg2:0000
2385  enter   12h,0h                          
2389  push    ds                              
238a  mov     ds,ax                           
238c  push    153h                            
238f  lea     ax,[bp-0Eh]                     
2392  push    ax                              
2393  call far M007.M007_GETVALUE             ; AP_PROFILE_TOP
2398  mov     bx,ax                           
239a  wait                                    
239b  fld     dword ptr ss:[bx]               
239e  call far sub_01f2                       
23a3  add     ax,3h                           
23a6  mov     [bp-2h],ax                      
23a9  push    47h                             
23ab  lea     ax,[bp-12h]                     
23ae  push    ax                              
23af  call far M007.M007_GETVALUE             ; AP_LINE_POSN_Y
23b4  mov     bx,ax                           
23b6  wait                                    
23b7  fld     dword ptr ss:[bx]               
23ba  call far sub_01f2                       
23bf  mov     [bp-4h],ax                      
23c2  mov     ax,[69Ch]                       
23c5  mov     [bp-6h],ax                      
23c8  cmp     word ptr [bp+6h],1h             
23cc  je      23D1h                           
23ce  jmp     2659h                           
23d1  push    0C7h                            
23d4  call far M007.M007_GETSTATE             ; DP_XRAY_LINESCAN
23d9  dec     ax                              
23da  jne     23E4h                           
23dc  mov     word ptr [1Ah],1h               
23e2  jmp     23EAh                           
23e4  mov     word ptr [1Ah],0h               
23ea  push    13Bh                            
23ed  call far M007.M007_GETSTATE             ; DP_XRAY_LINECOLOUR
23f2  jmp     245Fh                           
23f4  mov     word ptr [bp-6h],4h             
23f9  jmp     248Ah                           
23fc  mov     word ptr [bp-6h],2h             
2401  jmp     248Ah                           
2404  mov     word ptr [bp-6h],6h             
2409  jmp     248Ah                           
240b  mov     word ptr [bp-6h],1h             
2410  jmp     248Ah                           
2412  mov     word ptr [bp-6h],5h             
2417  jmp     248Ah                           
2419  mov     word ptr [bp-6h],0Bh            
241e  jmp     248Ah                           
2420  mov     word ptr [bp-6h],8h             
2425  jmp     248Ah                           
2427  mov     word ptr [bp-6h],0Fh            
242c  jmp     248Ah                           
242e  mov     word ptr [bp-6h],0Ch            
2433  jmp     248Ah                           
2435  mov     word ptr [bp-6h],0Ah            
243a  jmp     248Ah                           
243c  mov     word ptr [bp-6h],0Eh            
2441  jmp     248Ah                           
2443  mov     word ptr [bp-6h],0Dh            
2448  jmp     248Ah                           
244a  mov     word ptr [bp-6h],0h             
244f  jmp     248Ah                           
2451  mov     word ptr [bp-6h],3h             
2456  jmp     248Ah                           
2458  mov     word ptr [bp-6h],9h             
245d  jmp     248Ah                           
245f  cmp     ax,0Eh                          
2462  ja      2458h                           
2464  add     ax,ax                           
2466  xchg    ax,bx                           
2467  jmp     word ptr cs:[bx+246Ch]          
246c  hlt                                     
246d  and     di,sp                           
246f  and     ax,[si]                         
2471  and     al,0Bh                          
2473  and     al,12h                          
2475  and     al,19h                          
2477  and     al,20h                          
2479  and     al,27h                          
247b  and     al,2Eh                          
247d  and     al,35h                          
247f  and     al,3Ch                          
2481  and     al,58h                          
2483  and     al,43h                          
2485  and     al,4Ah                          
2487  and     al,51h                          
2489  and     al,80h                          
248b  sbb     ds:[bx+si],al                   
248e  add     [si+3h],dh                      
2491  jmp     2584h                           
2494  mov     ax,[bp-2h]                      
2497  mov     [69Ah],ax                       
249a  mov     ax,[bp-6h]                      
249d  mov     [69Ch],ax                       
24a0  mov     word ptr [69Eh],7h              
24a6  mov     word ptr [6AAh],6h              
24ac  mov     word ptr [6B0h],400h            
24b2  mov     ax,0Bh                          
24b5  mov     [6A6h],ax                       
24b8  mov     [6B2h],ax                       
24bb  mov     word ptr [6B6h],1F4h            
24c1  mov     word ptr [6B8h],258h            
24c7  mov     word ptr [6C0h],0Ah             
24cd  mov     word ptr [6C2h],0Dh             
24d3  mov     ax,0Eh                          
24d6  mov     [6A8h],ax                       
24d9  mov     [6B4h],ax                       
24dc  mov     [6C4h],ax                       
24df  mov     ax,1h                           
24e2  mov     [6A0h],ax                       
24e5  mov     [6A4h],ax                       
24e8  mov     [6ACh],ax                       
24eb  mov     [6AEh],ax                       
24ee  mov     [6C6h],ax                       
24f1  xor     cx,cx                           
24f3  mov     [698h],cx                       
24f7  mov     [6A2h],cx                       
24fb  mov     [6BAh],cx                       
24ff  mov     [6C8h],cx                       
2503  mov     [6CAh],cx                       
2507  mov     [6CCh],cx                       
250b  mov     [6CEh],cx                       
250f  push    cx                              
2510  push    cx                              
2511  push    ax                              
2512  call far KERNEL.GLOBALALLOC             
2517  mov     [6BCh],ax                       
251a  push    ax                              
251b  call far KERNEL.GLOBALLOCK              
2520  mov     es,dx                           
2522  mov     bx,ax                           
2524  mov     [bp-0Ah],ax                     
2527  mov     [bp-8h],es                      
252a  mov     byte ptr es:[bx],0h             
252e  push    word ptr [6BCh]                 
2532  call far KERNEL.GLOBALUNLOCK            
2537  push    0h                              
2539  push    0h                              
253b  push    1h                              
253d  call far KERNEL.GLOBALALLOC             
2542  mov     [6BEh],ax                       
2545  push    ax                              
2546  call far KERNEL.GLOBALLOCK              
254b  mov     es,dx                           
254d  mov     bx,ax                           
254f  mov     [bp-0Ah],ax                     
2552  mov     [bp-8h],es                      
2555  mov     byte ptr es:[bx],0h             
2559  push    word ptr [6BEh]                 
255d  call far KERNEL.GLOBALUNLOCK            
2562  push    7h                              
2564  push    1h                              
2566  push    0h                              
2568  push    1h                              
256a  push    1h                              
256c  push    ds                              
256d  push    698h                            
2570  call far OM_CREATE_OVERLAY_OBJ          
2575  mov     [6D0h],ax                       
2578  mov     [6D2h],dx                       
257c  mov     byte ptr [18h],1h               
2581  jmp     261Eh                           
2584  cmp     word ptr [1Ah],0h               
2589  je      2590h                           
258b  call far STOP_XRAY_PROFILE              
2590  call far STOP_PROFILE_ACQUIRE           
2595  push    word ptr [6D2h]                 
2599  push    word ptr [6D0h]                 
259d  call far OM_KILL_OVERLAY_OBJ            
25a2  mov     ax,[bp-2h]                      
25a5  mov     [69Ah],ax                       
25a8  mov     ax,[bp-6h]                      
25ab  mov     [69Ch],ax                       
25ae  push    0h                              
25b0  push    0h                              
25b2  push    1h                              
25b4  call far KERNEL.GLOBALALLOC             
25b9  mov     [6BCh],ax                       
25bc  push    ax                              
25bd  call far KERNEL.GLOBALLOCK              
25c2  mov     es,dx                           
25c4  mov     bx,ax                           
25c6  mov     [bp-0Ah],ax                     
25c9  mov     [bp-8h],es                      
25cc  mov     byte ptr es:[bx],0h             
25d0  push    word ptr [6BCh]                 
25d4  call far KERNEL.GLOBALUNLOCK            
25d9  push    0h                              
25db  push    0h                              
25dd  push    1h                              
25df  call far KERNEL.GLOBALALLOC             
25e4  mov     [6BEh],ax                       
25e7  push    ax                              
25e8  call far KERNEL.GLOBALLOCK              
25ed  mov     es,dx                           
25ef  mov     bx,ax                           
25f1  mov     [bp-0Ah],ax                     
25f4  mov     [bp-8h],es                      
25f7  mov     byte ptr es:[bx],0h             
25fb  push    word ptr [6BEh]                 
25ff  call far KERNEL.GLOBALUNLOCK            
2604  push    7h                              
2606  push    1h                              
2608  push    0h                              
260a  push    1h                              
260c  push    1h                              
260e  push    ds                              
260f  push    698h                            
2612  call far OM_CREATE_OVERLAY_OBJ          
2617  mov     [6D0h],ax                       
261a  mov     [6D2h],dx                       
261e  cmp     word ptr [1Ah],0h               
2623  je      264Bh                           
2625  push    1h                              
2627  call far DEFINE_XRAY_PROF               
262c  push    2h                              
262e  call far SET_XRAY_MODE                  
2633  push    4h                              
2635  push    0h                              
2637  push    word ptr [bp-4h]                
263a  call far M700.CONTROL_XRAY              
263f  call far START_XRAY_PROFILE             
2644  call far START_PROFILE_ACQUIRE          
2649  jmp     2683h                           
264b  push    1h                              
264d  push    1h                              
264f  push    word ptr [bp-4h]                
2652  call far DEFINE_LIVE_LINE_PROF          
2657  jmp     2644h                           
2659  cmp     word ptr [1Ah],0h               
265e  je      2665h                           
2660  call far STOP_XRAY_PROFILE              
2665  call far STOP_PROFILE_ACQUIRE           
266a  cmp     byte ptr [18h],0h               
266f  je      2683h                           
2671  push    word ptr [6D2h]                 
2675  push    word ptr [6D0h]                 
2679  call far OM_KILL_OVERLAY_OBJ            
267e  mov     byte ptr [18h],0h               
2683  push    25h                             
2685  push    word ptr [bp+6h]                
2688  call far M007.M007_PUTSTATE             ; DP_PROFILE
268d  pop     ds                              
268e  leave                                   
268f  retf    2h                              

; ===== SETPROFILE_W =====
2692  mov     ax,2383h                        ; segment seg2:0000
2695  push    bp                              
2696  mov     bp,sp                           
2698  push    ds                              
2699  mov     ds,ax                           
269b  push    83h                             
269e  push    word ptr [bp+8h]                
26a1  push    word ptr [bp+6h]                
26a4  call far M007.M007_PUTVALUE             ; AP_PROFILE_W
26a9  pop     ds                              
26aa  leave                                   
26ab  retf    4h                              

; ===== SWITCHIMAGE_STORE =====
26ae  mov     ax,2693h                        ; segment seg2:0000
26b1  enter   4h,0h                           
26b5  push    ds                              
26b6  mov     ds,ax                           
26b8  push    0h                              
26ba  push    0h                              
26bc  push    7F02h                           
26bf  call far USER.LOADCURSOR                
26c4  push    ax                              
26c5  call far USER.SETCURSOR                 
26ca  mov     [bp-4h],ax                      
26cd  push    63h                             
26cf  push    word ptr [bp+6h]                
26d2  call far M007.M007_PUTSTATE             ; DP_IMAGE_STORE
26d7  push    83h                             
26da  call far M007.M007_GETSTATE             ; DP_GSP
26df  dec     ax                              
26e0  jne     26F4h                           
26e2  mov     ax,[bp+6h]                      
26e5  jmp     26F0h                           
26e7  push    0h                              
26e9  call far TIGASEM.SETDISPLAYSTANDARD     
26ee  jmp     26F4h                           
26f0  or      ax,ax                           
26f2  je      26E7h                           
26f4  push    word ptr [bp-4h]                
26f7  call far USER.SETCURSOR                 
26fc  pop     ds                              
26fd  leave                                   
26fe  retf    2h                              
2701  add     [bx+si],al                      

; ===== PC_PLANE_CTRL =====
2702  mov     ax,26AFh                        ; segment seg2:0000
2705  push    bp                              
2706  mov     bp,sp                           
2708  push    ds                              
2709  mov     ds,ax                           
270b  push    83h                             
270e  call far M007.M007_GETSTATE             ; DP_GSP
2713  dec     ax                              
2714  jne     272Ch                           
2716  push    0h                              
2718  push    1h                              
271a  push    0h                              
271c  call far TIGASEM.SETPLANESTATE          
2721  push    0h                              
2723  push    2h                              
2725  push    0h                              
2727  call far TIGASEM.SETPLANESTATE          
272c  pop     ds                              
272d  leave                                   
272e  retf    2h                              
2731  add     [bx+si],al                      

; ===== SEM_PLANE_CTRL =====
2732  mov     ax,2703h                        ; segment seg2:0000
2735  push    bp                              
2736  mov     bp,sp                           
2738  push    ds                              
2739  mov     ds,ax                           
273b  push    83h                             
273e  call far M007.M007_GETSTATE             ; DP_GSP
2743  dec     ax                              
2744  jne     2793h                           
2746  mov     ax,[bp+6h]                      
2749  jmp     2786h                           
274b  push    1h                              
274d  push    1h                              
274f  push    0h                              
2751  call far TIGASEM.SETPLANESTATE          
2756  push    1h                              
2758  push    2h                              
275a  push    0h                              
275c  call far TIGASEM.SETPLANESTATE          
2761  jmp     2793h                           
2763  push    1h                              
2765  push    1h                              
2767  push    1h                              
2769  jmp     2751h                           
276b  push    1h                              
276d  push    1h                              
276f  push    0h                              
2771  call far TIGASEM.SETPLANESTATE          
2776  push    1h                              
2778  push    2h                              
277a  push    1h                              
277c  jmp     275Ch                           
277e  push    1h                              
2780  push    1h                              
2782  push    1h                              
2784  jmp     2771h                           
2786  or      ax,ax                           
2788  je      274Bh                           
278a  dec     ax                              
278b  je      2763h                           
278d  dec     ax                              
278e  je      276Bh                           
2790  dec     ax                              
2791  je      277Eh                           
2793  pop     ds                              
2794  leave                                   
2795  retf    2h                              

; ===== IMAGE_PLANE_CTRL =====
2798  mov     ax,2733h                        ; segment seg2:0000
279b  push    bp                              
279c  mov     bp,sp                           
279e  push    ds                              
279f  mov     ds,ax                           
27a1  push    83h                             
27a4  call far M007.M007_GETSTATE             ; DP_GSP
27a9  dec     ax                              
27aa  jne     27F9h                           
27ac  mov     ax,[bp+6h]                      
27af  jmp     27ECh                           
27b1  push    2h                              
27b3  push    1h                              
27b5  push    0h                              
27b7  call far TIGASEM.SETPLANESTATE          
27bc  push    2h                              
27be  push    2h                              
27c0  push    0h                              
27c2  call far TIGASEM.SETPLANESTATE          
27c7  jmp     27F9h                           
27c9  push    2h                              
27cb  push    1h                              
27cd  push    1h                              
27cf  jmp     27B7h                           
27d1  push    2h                              
27d3  push    1h                              
27d5  push    0h                              
27d7  call far TIGASEM.SETPLANESTATE          
27dc  push    2h                              
27de  push    2h                              
27e0  push    1h                              
27e2  jmp     27C2h                           
27e4  push    2h                              
27e6  push    1h                              
27e8  push    1h                              
27ea  jmp     27D7h                           
27ec  or      ax,ax                           
27ee  je      27B1h                           
27f0  dec     ax                              
27f1  je      27C9h                           
27f3  dec     ax                              
27f4  je      27D1h                           
27f6  dec     ax                              
27f7  je      27E4h                           
27f9  pop     ds                              
27fa  leave                                   
27fb  retf    2h                              

; ===== OM_GET_DISPLAY_CONFIG =====
27fe  mov     ax,2799h                        ; segment seg2:0000
2801  push    bp                              
2802  mov     bp,sp                           
2804  push    di                              
2805  push    si                              
2806  push    ds                              
2807  mov     ds,ax                           
2809  mov     si,0FF8h                        
280c  les     di,[bp+6h]                      
280f  mov     cx,8h                           
2812  rep     movsw                           
2814  pop     ds                              
2815  pop     si                              
2816  pop     di                              
2817  leave                                   
2818  retf    4h                              
281b  add     [bx+si],al                      

; ===== SWITCHSTEREO_RES =====
281c  mov     ax,27FFh                        ; segment seg2:0000
281f  push    bp                              
2820  mov     bp,sp                           
2822  push    ds                              
2823  mov     ds,ax                           
2825  cmp     word ptr [bp+6h],0h             
2829  jne     2868h                           
282b  push    83h                             
282e  call far M007.M007_GETSTATE             ; DP_GSP
2833  dec     ax                              
2834  jne     2868h                           
2836  push    9Ah                             
2839  call far M007.M007_GETSTATE             ; DP_STEREO_LEFT
283e  dec     ax                              
283f  jne     284Fh                           
2841  push    1h                              
2843  call far SWITCHLUT_MODE                 
2848  push    1h                              
284a  call far TIGASEM.SINGLESTORESTEREODISPON
284f  push    9Bh                             
2852  call far M007.M007_GETSTATE             ; DP_STEREO_RIGHT
2857  dec     ax                              
2858  jne     2868h                           
285a  push    1h                              
285c  call far SWITCHLUT_MODE                 
2861  push    2h                              
2863  call far TIGASEM.SINGLESTORESTEREODISPON
2868  push    99h                             
286b  push    word ptr [bp+6h]                
286e  call far M007.M007_PUTSTATE             ; DP_STEREO_RES
2873  pop     ds                              
2874  leave                                   
2875  retf    2h                              

; ===== SWITCHSTEREO_LEFT =====
2878  mov     ax,281Dh                        ; segment seg2:0000
287b  push    bp                              
287c  mov     bp,sp                           
287e  push    ds                              
287f  mov     ds,ax                           
2881  push    99h                             
2884  call far M007.M007_GETSTATE             ; DP_STEREO_RES
2889  or      ax,ax                           
288b  jne     28C3h                           
288d  cmp     word ptr [bp+6h],1h             
2891  jne     28B8h                           
2893  push    9Ah                             
2896  call far M007.M007_GETSTATE             ; DP_STEREO_LEFT
289b  or      ax,ax                           
289d  jne     28B8h                           
289f  push    83h                             
28a2  call far M007.M007_GETSTATE             ; DP_GSP
28a7  dec     ax                              
28a8  jne     28B8h                           
28aa  push    1h                              
28ac  call far SWITCHLUT_MODE                 
28b1  push    1h                              
28b3  call far TIGASEM.SINGLESTORESTEREODISPON
28b8  push    9Ah                             
28bb  push    word ptr [bp+6h]                
28be  call far M007.M007_PUTSTATE             ; DP_STEREO_LEFT
28c3  pop     ds                              
28c4  leave                                   
28c5  retf    2h                              

; ===== SWITCHSTEREO_RIGHT =====
28c8  mov     ax,2879h                        ; segment seg2:0000
28cb  push    bp                              
28cc  mov     bp,sp                           
28ce  push    ds                              
28cf  mov     ds,ax                           
28d1  push    99h                             
28d4  call far M007.M007_GETSTATE             ; DP_STEREO_RES
28d9  or      ax,ax                           
28db  jne     2913h                           
28dd  cmp     word ptr [bp+6h],1h             
28e1  jne     2908h                           
28e3  push    9Bh                             
28e6  call far M007.M007_GETSTATE             ; DP_STEREO_RIGHT
28eb  or      ax,ax                           
28ed  jne     2908h                           
28ef  push    83h                             
28f2  call far M007.M007_GETSTATE             ; DP_GSP
28f7  dec     ax                              
28f8  jne     2908h                           
28fa  push    1h                              
28fc  call far SWITCHLUT_MODE                 
2901  push    2h                              
2903  call far TIGASEM.SINGLESTORESTEREODISPON
2908  push    9Bh                             
290b  push    word ptr [bp+6h]                
290e  call far M007.M007_PUTSTATE             ; DP_STEREO_RIGHT
2913  pop     ds                              
2914  leave                                   
2915  retf    2h                              

; ===== START_HIST_ACQUIRE =====
2918  mov     ax,28C9h                        ; segment seg2:0000
291b  push    bp                              
291c  mov     bp,sp                           
291e  push    ds                              
291f  mov     ds,ax                           
2921  push    0ACh                            
2924  push    1h                              
2926  call far M007.M007_PUTSTATE             ; DP_LIVE_HISTO = 1
292b  push    word ptr [bp+6h]                
292e  call far TIGASEM.STARTHISTACQUIRE       
2933  pop     ds                              
2934  leave                                   
2935  retf    2h                              

; ===== STOP_HIST_ACQUIRE =====
2938  mov     ax,2919h                        ; segment seg2:0000
293b  push    bp                              
293c  mov     bp,sp                           
293e  push    ds                              
293f  mov     ds,ax                           
2941  call far TIGASEM.STOPHISTACQUIRE        
2946  push    0ACh                            
2949  push    0h                              
294b  call far M007.M007_PUTSTATE             ; DP_LIVE_HISTO = 0
2950  pop     ds                              
2951  leave                                   
2952  retf                                    
2953  add     [bx+si],al                      

; ===== UPDATE_STORED_HIST =====
2954  mov     ax,2939h                        ; segment seg2:0000
2957  push    bp                              
2958  mov     bp,sp                           
295a  push    ds                              
295b  mov     ds,ax                           
295d  push    83h                             
2960  call far M007.M007_GETSTATE             ; DP_GSP
2965  dec     ax                              
2966  jne     2970h                           
2968  push    word ptr [bp+6h]                
296b  call far TIGASEM.UPDATESTOREDHIST       
2970  pop     ds                              
2971  leave                                   
2972  retf    2h                              
2975  add     [bx+si],al                      

; ===== START_PROFILE_ACQUIRE =====
2976  mov     ax,2955h                        ; segment seg2:0000
2979  push    bp                              
297a  mov     bp,sp                           
297c  push    ds                              
297d  mov     ds,ax                           
297f  push    83h                             
2982  call far M007.M007_GETSTATE             ; DP_GSP
2987  dec     ax                              
2988  jne     298Fh                           
298a  call far TIGASEM.STARTPROFACQUIRE       
298f  pop     ds                              
2990  leave                                   
2991  retf                                    

; ===== STOP_PROFILE_ACQUIRE =====
2992  mov     ax,2977h                        ; segment seg2:0000
2995  push    bp                              
2996  mov     bp,sp                           
2998  push    ds                              
2999  mov     ds,ax                           
299b  push    83h                             
299e  call far M007.M007_GETSTATE             ; DP_GSP
29a3  dec     ax                              
29a4  jne     29ABh                           
29a6  call far TIGASEM.STOPPROFACQUIRE        
29ab  pop     ds                              
29ac  leave                                   
29ad  retf                                    

; ===== DEFINE_PROF_LINE =====
29ae  mov     ax,2993h                        ; segment seg2:0000
29b1  push    bp                              
29b2  mov     bp,sp                           
29b4  push    ds                              
29b5  mov     ds,ax                           
29b7  push    83h                             
29ba  call far M007.M007_GETSTATE             ; DP_GSP
29bf  dec     ax                              
29c0  jne     29D6h                           
29c2  push    word ptr [bp+0Eh]               
29c5  push    word ptr [bp+0Ch]               
29c8  push    word ptr [bp+0Ah]               
29cb  push    word ptr [bp+8h]                
29ce  push    word ptr [bp+6h]                
29d1  call far TIGASEM.DEFINEPROFLINE         
29d6  pop     ds                              
29d7  leave                                   
29d8  retf    0Ah                             
29db  add     [bx+si],al                      

; ===== DEFINE_VERT_PROF_LINE =====
29dc  mov     ax,29AFh                        ; segment seg2:0000
29df  push    bp                              
29e0  mov     bp,sp                           
29e2  push    ds                              
29e3  mov     ds,ax                           
29e5  push    83h                             
29e8  call far M007.M007_GETSTATE             ; DP_GSP
29ed  dec     ax                              
29ee  jne     29FBh                           
29f0  push    word ptr [bp+8h]                
29f3  push    word ptr [bp+6h]                
29f6  call far TIGASEM.DEFINEPROFVERTLINE     
29fb  pop     ds                              
29fc  leave                                   
29fd  retf    4h                              

; ===== DEFINE_HORIZ_PROF_LINE =====
2a00  mov     ax,29DDh                        ; segment seg2:0000
2a03  push    bp                              
2a04  mov     bp,sp                           
2a06  push    ds                              
2a07  mov     ds,ax                           
2a09  push    83h                             
2a0c  call far M007.M007_GETSTATE             ; DP_GSP
2a11  dec     ax                              
2a12  jne     2A1Fh                           
2a14  push    word ptr [bp+8h]                
2a17  push    word ptr [bp+6h]                
2a1a  call far TIGASEM.DEFINEPROFHORIZLINE    
2a1f  pop     ds                              
2a20  leave                                   
2a21  retf    4h                              

; ===== DEFINE_LIVE_LINE_PROF =====
2a24  mov     ax,2A01h                        ; segment seg2:0000
2a27  push    bp                              
2a28  mov     bp,sp                           
2a2a  push    ds                              
2a2b  mov     ds,ax                           
2a2d  push    83h                             
2a30  call far M007.M007_GETSTATE             ; DP_GSP
2a35  dec     ax                              
2a36  jne     2A46h                           
2a38  push    word ptr [bp+0Ah]               
2a3b  push    word ptr [bp+8h]                
2a3e  push    word ptr [bp+6h]                
2a41  call far TIGASEM.DEFINELIVELINEPROF     
2a46  pop     ds                              
2a47  leave                                   
2a48  retf    6h                              
2a4b  add     [bx+si],al                      

; ===== DEFINE_YMOD_CHAN =====
2a4c  mov     ax,2A25h                        ; segment seg2:0000
2a4f  push    bp                              
2a50  mov     bp,sp                           
2a52  push    ds                              
2a53  mov     ds,ax                           
2a55  push    83h                             
2a58  call far M007.M007_GETSTATE             ; DP_GSP
2a5d  dec     ax                              
2a5e  jne     2A68h                           
2a60  push    word ptr [bp+6h]                
2a63  call far TIGASEM.DEFINEYMODCHAN         
2a68  pop     ds                              
2a69  leave                                   
2a6a  retf    2h                              
2a6d  add     [bx+si],al                      

; ===== READ_HIST_DATA =====
2a6e  mov     ax,2A4Dh                        ; segment seg2:0000
2a71  push    bp                              
2a72  mov     bp,sp                           
2a74  push    ds                              
2a75  mov     ds,ax                           
2a77  push    83h                             
2a7a  call far M007.M007_GETSTATE             ; DP_GSP
2a7f  dec     ax                              
2a80  jne     2A8Dh                           
2a82  push    word ptr [bp+8h]                
2a85  push    word ptr [bp+6h]                
2a88  call far TIGASEM.GETHISTOGRAMDATA       
2a8d  pop     ds                              
2a8e  leave                                   
2a8f  retf    4h                              

; ===== READ_PROF_DATA =====
2a92  mov     ax,2A6Fh                        ; segment seg2:0000
2a95  push    bp                              
2a96  mov     bp,sp                           
2a98  push    ds                              
2a99  mov     ds,ax                           
2a9b  push    83h                             
2a9e  call far M007.M007_GETSTATE             ; DP_GSP
2aa3  dec     ax                              
2aa4  jne     2AB4h                           
2aa6  push    word ptr [bp+0Ah]               
2aa9  push    word ptr [bp+8h]                
2aac  push    word ptr [bp+6h]                
2aaf  call far TIGASEM.GETPROFILEDATA         
2ab4  pop     ds                              
2ab5  leave                                   
2ab6  retf    6h                              
2ab9  add     [bx+si],al                      

; ===== SET_XRAY_MODE =====
2aba  mov     ax,2A93h                        ; segment seg2:0000
2abd  push    bp                              
2abe  mov     bp,sp                           
2ac0  push    ds                              
2ac1  mov     ds,ax                           
2ac3  mov     ax,[bp+6h]                      
2ac6  jmp     2B01h                           
2ac8  cmp     byte ptr [14h],2h               
2acd  je      2AD4h                           
2acf  mov     byte ptr [17h],1h               
2ad4  mov     byte ptr [14h],2h               
2ad9  jmp     2B0Bh                           
2adb  cmp     byte ptr [14h],1h               
2ae0  je      2AE7h                           
2ae2  mov     byte ptr [17h],1h               
2ae7  mov     byte ptr [14h],1h               
2aec  jmp     2B0Bh                           
2aee  cmp     byte ptr [14h],4h               
2af3  je      2AFAh                           
2af5  mov     byte ptr [17h],1h               
2afa  mov     byte ptr [14h],4h               
2aff  jmp     2B0Bh                           
2b01  or      ax,ax                           
2b03  je      2AC8h                           
2b05  dec     ax                              
2b06  je      2ADBh                           
2b08  dec     ax                              
2b09  je      2AEEh                           
2b0b  pop     ds                              
2b0c  leave                                   
2b0d  retf    2h                              

; ===== DOCOMMANDXRAY_START =====
2b10  mov     ax,2ABBh                        ; segment seg2:0000
2b13  enter   6h,0h                           
2b17  push    ds                              
2b18  mov     ds,ax                           
2b1a  mov     al,1h                           
2b1c  mov     [14h],al                        
2b1f  mov     [17h],al                        
2b22  push    0h                              
2b24  call far SETXRAYGREY                    
2b29  mov     byte ptr [16h],0h               
2b2e  cmp     byte ptr [14h],4h               
2b33  jne     2B5Fh                           
2b35  push    4h                              
2b37  push    0h                              
2b39  push    47h                             
2b3b  lea     ax,[bp-6h]                      
2b3e  push    ax                              
2b3f  call far M007.M007_GETVALUE             ; AP_STAGEANGLE = 0
2b44  mov     bx,ax                           
2b46  wait                                    
2b47  fld     dword ptr ss:[bx]               
2b4a  call far sub_01f2                       
2b4f  mov     [bp-2h],ax                      
2b52  push    ax                              
2b53  call far M700.CONTROL_XRAY              
2b58  call far START_XRAY_PROFILE             
2b5d  jmp     2BCDh                           
2b5f  push    11h                             
2b61  call far M007.M007_GETSTATE             ; DP_SCANRATE
2b66  cmp     ax,7h                           
2b69  jge     2B82h                           
2b6b  push    25h                             
2b6d  call far M007.COMMANDENABLE             
2b72  or      ax,ax                           
2b74  jne     2B7Dh                           
2b76  call far M200.DOCOMMANDSCANRATE8        
2b7b  jmp     2B82h                           
2b7d  call far M200.DOCOMMANDSCANRATE7        
2b82  push    0h                              
2b84  call far M700.SWITCHPLANEA_FROZEN       
2b89  push    0h                              
2b8b  call far M700.SWITCHPLANEB_FROZEN       
2b90  mov     al,[14h]                        
2b93  push    ax                              
2b94  mov     al,[15h]                        
2b97  push    ax                              
2b98  push    0h                              
2b9a  call far M700.CONTROL_XRAY              
2b9f  cmp     byte ptr [17h],0h               
2ba4  jne     2BC1h                           
2ba6  push    0C0h                            
2ba9  call far M007.M007_GETSTATE             ; DP_LUT_MODE
2bae  cmp     ax,2h                           
2bb1  je      2BCDh                           
2bb3  cmp     byte ptr [16h],1h               
2bb8  jne     2BC8h                           
2bba  call far M200.DOCOMMANDSET_PLANEB       
2bbf  jmp     2BCDh                           
2bc1  cmp     byte ptr [16h],1h               
2bc6  je      2BBAh                           
2bc8  call far M200.DOCOMMANDCLR_PLANEB       
2bcd  mov     byte ptr [17h],0h               
2bd2  pop     ds                              
2bd3  leave                                   
2bd4  retf                                    
2bd5  add     [bx+si],al                      

; ===== DOCOMMANDXRAY_STOP =====
2bd6  mov     ax,2B11h                        ; segment seg2:0000
2bd9  push    bp                              
2bda  mov     bp,sp                           
2bdc  push    ds                              
2bdd  mov     ds,ax                           
2bdf  cmp     byte ptr [14h],4h               
2be4  jne     2BEDh                           
2be6  call far STOP_XRAY_PROFILE              
2beb  jmp     2BFBh                           
2bed  push    1h                              
2bef  call far M700.SWITCHPLANEA_FROZEN       
2bf4  push    1h                              
2bf6  call far M700.SWITCHPLANEB_FROZEN       
2bfb  push    0h                              
2bfd  push    0h                              
2bff  push    0h                              
2c01  call far M700.CONTROL_XRAY              
2c06  pop     ds                              
2c07  leave                                   
2c08  retf                                    
2c09  add     [bx+si],al                      

; ===== DEFINE_XRAY_PROF =====
2c0a  mov     ax,2BD7h                        ; segment seg2:0000
2c0d  push    bp                              
2c0e  mov     bp,sp                           
2c10  push    ds                              
2c11  mov     ds,ax                           
2c13  push    83h                             
2c16  call far M007.M007_GETSTATE             ; DP_GSP
2c1b  dec     ax                              
2c1c  jne     2C26h                           
2c1e  push    word ptr [bp+6h]                
2c21  call far TIGASEM.DEFINEXRAYPROF         
2c26  pop     ds                              
2c27  leave                                   
2c28  retf    2h                              
2c2b  add     [bx+si],al                      

; ===== SETUP_DM_LUT =====
2c2c  mov     ax,2C0Bh                        ; segment seg2:0000
2c2f  enter   2h,0h                           
2c33  push    ds                              
2c34  mov     ds,ax                           
2c36  push    83h                             
2c39  call far M007.M007_GETSTATE             ; DP_GSP
2c3e  dec     ax                              
2c3f  jne     2CB8h                           
2c41  mov     ax,[bp+0Eh]                     
2c44  or      ax,ax                           
2c46  je      2C53h                           
2c48  dec     ax                              
2c49  je      2C91h                           
2c4b  dec     ax                              
2c4c  je      2C53h                           
2c4e  dec     ax                              
2c4f  je      2C91h                           
2c51  jmp     2CB8h                           
2c53  push    word ptr [bp+0Ch]               
2c56  push    word ptr [bp+0Ah]               
2c59  push    word ptr [bp+8h]                
2c5c  push    word ptr [bp+6h]                
2c5f  call far TIGASEM.SETDMBACKPRIOPRESLUT   
2c64  mov     byte ptr [15h],0h               
2c69  mov     word ptr [bp-2h],0h             
2c6e  jmp     2C73h                           
2c70  inc     word ptr [bp-2h]                
2c73  mov     ax,[bp+0Ah]                     
2c76  cmp     [bp-2h],ax                      
2c79  jge     2CB8h                           
2c7b  les     bx,[bp+6h]                      
2c7e  add     word ptr [bp+6h],4h             
2c82  mov     cl,es:[bx]                      
2c85  inc     cl                              
2c87  mov     al,1h                           
2c89  shl     al,cl                           
2c8b  or      [15h],al                        
2c8f  jmp     2C70h                           
2c91  push    word ptr [bp+0Ch]               
2c94  push    word ptr [bp+0Ah]               
2c97  push    word ptr [bp+8h]                
2c9a  push    word ptr [bp+6h]                
2c9d  call far TIGASEM.SETDMBACKPRIOINTLUT    
2ca2  mov     al,[15h]                        
2ca5  les     bx,[bp+6h]                      
2ca8  cmp     es:[bx],al                      
2cab  je      2CB8h                           
2cad  mov     al,es:[bx]                      
2cb0  mov     [15h],al                        
2cb3  mov     byte ptr [17h],1h               
2cb8  mov     ax,[bp+0Eh]                     
2cbb  jmp     2CE3h                           
2cbd  cmp     byte ptr [16h],1h               
2cc2  je      2CC9h                           
2cc4  mov     byte ptr [17h],1h               
2cc9  mov     byte ptr [16h],1h               
2cce  jmp     2CF2h                           
2cd0  cmp     byte ptr [16h],0h               
2cd5  je      2CDCh                           
2cd7  mov     byte ptr [17h],1h               
2cdc  mov     byte ptr [16h],0h               
2ce1  jmp     2CF2h                           
2ce3  or      ax,ax                           
2ce5  jl      2CF2h                           
2ce7  jo      2CF2h                           
2ce9  dec     ax                              
2cea  jle     2CD0h                           
2cec  dec     ax                              
2ced  jl      2CF2h                           
2cef  dec     ax                              
2cf0  jle     2CBDh                           
2cf2  pop     ds                              
2cf3  leave                                   
2cf4  retf    0Ah                             
2cf7  add     [bx+si],al                      

; ===== SWITCHLUT_MODE =====
2cf8  mov     ax,2C2Dh                        ; segment seg2:0000
2cfb  enter   2h,0h                           
2cff  push    ds                              
2d00  mov     ds,ax                           
2d02  push    0C0h                            
2d05  call far M007.M007_GETSTATE             ; DP_LUT_MODE
2d0a  cmp     word ptr [bp+6h],2h             
2d0e  je      2D16h                           
2d10  cmp     word ptr [bp+6h],1h             
2d14  jne     2D24h                           
2d16  or      ax,ax                           
2d18  jne     2D45h                           
2d1a  push    1h                              
2d1c  push    ax                              
2d1d  call far OPLUT_SAVE                     
2d22  jmp     2D45h                           
2d24  cmp     ax,1h                           
2d27  je      2D2Eh                           
2d29  cmp     ax,2h                           
2d2c  jne     2D45h                           
2d2e  push    0h                              
2d30  call far M700.SWITCHPLANEA_FROZEN       
2d35  push    0h                              
2d37  call far M700.SWITCHPLANEB_FROZEN       
2d3c  push    1h                              
2d3e  push    0h                              
2d40  call far OPLUT_RESTORE                  
2d45  push    0C0h                            
2d48  push    word ptr [bp+6h]                
2d4b  call far M007.M007_PUTSTATE             ; DP_LUT_MODE
2d50  pop     ds                              
2d51  leave                                   
2d52  retf    2h                              
2d55  add     [bx+si],al                      

; ===== SETXRAYGREY =====
2d56  mov     ax,2CF9h                        ; segment seg2:0000
2d59  push    bp                              
2d5a  mov     bp,sp                           
2d5c  push    ds                              
2d5d  mov     ds,ax                           
2d5f  push    83h                             
2d62  call far M007.M007_GETSTATE             ; DP_GSP
2d67  dec     ax                              
2d68  jne     2D74h                           
2d6a  push    1h                              
2d6c  push    word ptr [bp+6h]                
2d6f  call far TIGASEM.SETXRAYGREYLEVEL       
2d74  pop     ds                              
2d75  leave                                   
2d76  retf    2h                              
2d79  add     [bx+si],al                      

; ===== DOCOMMANDXRAY_RESET =====
2d7a  mov     ax,2D57h                        ; segment seg2:0000
2d7d  push    bp                              
2d7e  mov     bp,sp                           
2d80  push    ds                              
2d81  mov     ds,ax                           
2d83  push    0h                              
2d85  push    0h                              
2d87  push    0h                              
2d89  call far M700.CONTROL_XRAY              
2d8e  cmp     byte ptr [14h],4h               
2d93  jne     2D9Ah                           
2d95  call far STOP_XRAY_PROFILE              
2d9a  push    0h                              
2d9c  call far SWITCHLUT_MODE                 
2da1  pop     ds                              
2da2  leave                                   
2da3  retf                                    

; ===== STOP_XRAY_PROFILE =====
2da4  mov     ax,2D7Bh                        ; segment seg2:0000
2da7  push    bp                              
2da8  mov     bp,sp                           
2daa  push    ds                              
2dab  mov     ds,ax                           
2dad  push    83h                             
2db0  call far M007.M007_GETSTATE             ; DP_GSP
2db5  dec     ax                              
2db6  jne     2DBDh                           
2db8  call far TIGASEM.STOPXRAYPROFILE        
2dbd  pop     ds                              
2dbe  leave                                   
2dbf  retf                                    

; ===== START_XRAY_PROFILE =====
2dc0  mov     ax,2DA5h                        ; segment seg2:0000
2dc3  push    bp                              
2dc4  mov     bp,sp                           
2dc6  push    ds                              
2dc7  mov     ds,ax                           
2dc9  push    83h                             
2dcc  call far M007.M007_GETSTATE             ; DP_GSP
2dd1  dec     ax                              
2dd2  jne     2DD9h                           
2dd4  call far TIGASEM.STARTXRAYPROFILE       
2dd9  pop     ds                              
2dda  leave                                   
2ddb  retf                                    

; ===== SET_XRAY_FILTER =====
2ddc  mov     ax,2DC1h                        ; segment seg2:0000
2ddf  push    bp                              
2de0  mov     bp,sp                           
2de2  push    ds                              
2de3  mov     ds,ax                           
2de5  push    83h                             
2de8  call far M007.M007_GETSTATE             ; DP_GSP
2ded  dec     ax                              
2dee  jne     2DF8h                           
2df0  push    word ptr [bp+6h]                
2df3  call far TIGASEM.SETXRAYFILTER          
2df8  pop     ds                              
2df9  leave                                   
2dfa  retf    2h                              
2dfd  add     [bx+si],al                      

; ===== SET_XRAY_WINDOWS =====
2dfe  mov     ax,2DDDh                        ; segment seg2:0000
2e01  push    bp                              
2e02  mov     bp,sp                           
2e04  push    ds                              
2e05  mov     ds,ax                           
2e07  push    83h                             
2e0a  call far M007.M007_GETSTATE             ; DP_GSP
2e0f  dec     ax                              
2e10  jne     2E23h                           
2e12  push    word ptr [bp+0Ch]               
2e15  push    word ptr [bp+0Ah]               
2e18  push    word ptr [bp+8h]                
2e1b  push    word ptr [bp+6h]                
2e1e  call far TIGASEM.SETXRAYWINDOWS         
2e23  pop     ds                              
2e24  leave                                   
2e25  retf    8h                              

; ===== SET_XRAY_SCALE =====
2e28  mov     ax,2DFFh                        ; segment seg2:0000
2e2b  push    bp                              
2e2c  mov     bp,sp                           
2e2e  push    ds                              
2e2f  mov     ds,ax                           
2e31  push    83h                             
2e34  call far M007.M007_GETSTATE             ; DP_GSP
2e39  dec     ax                              
2e3a  jne     2E4Ah                           
2e3c  push    word ptr [bp+0Ah]               
2e3f  push    word ptr [bp+8h]                
2e42  push    word ptr [bp+6h]                
2e45  call far TIGASEM.SETXRAYSCALE           
2e4a  pop     ds                              
2e4b  leave                                   
2e4c  retf    6h                              
2e4f  add     [bx+si],al                      

; ===== CHANGE_XRAY_SCAN_LINE =====
2e50  mov     ax,2E29h                        ; segment seg2:0000
2e53  enter   6h,0h                           
2e57  push    ds                              
2e58  mov     ds,ax                           
2e5a  push    46h                             
2e5c  push    46h                             
2e5e  lea     ax,[bp-6h]                      
2e61  push    ax                              
2e62  call far M007.M007_GETVALUE             ; AP_LINE_POSN_X = 70
2e67  mov     bx,ax                           
2e69  wait                                    
2e6a  fld     dword ptr ss:[bx]               
2e6d  call far sub_01f2                       
2e72  mov     [bp-2h],ax                      
2e75  wait                                    
2e76  fild    word ptr [bp-2h]                
2e79  sub     sp,4h                           
2e7c  mov     bx,sp                           
2e7e  wait                                    
2e7f  fstp    dword ptr ss:[bx]               
2e82  wait                                    
2e83  fild    word ptr [bp+6h]                
2e86  sub     sp,4h                           
2e89  mov     bx,sp                           
2e8b  wait                                    
2e8c  fstp    dword ptr ss:[bx]               
2e8f  nop                                     
2e90  wait                                    
2e91  call far M007.M007_PUTXY                
2e96  push    25h                             
2e98  call far M007.M007_GETSTATE             ; DP_PROFILE
2e9d  push    ax                              
2e9e  call far SWITCHPROFILE                  
2ea3  pop     ds                              
2ea4  leave                                   
2ea5  retf    2h                              

; ===== CLEAR_IMAGE_STORE =====
2ea8  mov     ax,2E51h                        ; segment seg2:0000
2eab  push    bp                              
2eac  mov     bp,sp                           
2eae  push    ds                              
2eaf  mov     ds,ax                           
2eb1  pop     ds                              
2eb2  leave                                   
2eb3  retf                                    

; ===== SWITCHXRAY_LINE =====
2eb4  mov     ax,2EA9h                        ; segment seg2:0000
2eb7  push    bp                              
2eb8  mov     bp,sp                           
2eba  push    ds                              
2ebb  mov     ds,ax                           
2ebd  push    13Ah                            
2ec0  push    word ptr [bp+6h]                
2ec3  call far M007.M007_PUTSTATE             ; DP_XRAY_LINE
2ec8  mov     ax,[bp+6h]                      
2ecb  jmp     2EFEh                           
2ecd  mov     word ptr [bp+6h],1h             
2ed2  jmp     2F19h                           
2ed4  mov     word ptr [bp+6h],2h             
2ed9  jmp     2F19h                           
2edb  mov     word ptr [bp+6h],3h             
2ee0  jmp     2F19h                           
2ee2  mov     word ptr [bp+6h],4h             
2ee7  jmp     2F19h                           
2ee9  mov     word ptr [bp+6h],5h             
2eee  jmp     2F19h                           
2ef0  mov     word ptr [bp+6h],6h             
2ef5  jmp     2F19h                           
2ef7  mov     word ptr [bp+6h],0h             
2efc  jmp     2F19h                           
2efe  cmp     ax,6h                           
2f01  ja      2EF7h                           
2f03  add     ax,ax                           
2f05  xchg    ax,bx                           
2f06  jmp     word ptr cs:[bx+2F0Bh]          
2f0b  imul    word ptr [2ECDh]                
2f0f  aam     2Eh                             
2f11  fld     tword ptr [2EE2h]               
2f15  jmp     1F46h                           
2f18  mov     ax,6h                           
2f1c  sub     ax,[bp+6h]                      
2f1f  mov     [bp+6h],ax                      
2f22  push    ax                              
2f23  push    ax                              
2f24  push    ax                              
2f25  push    ax                              
2f26  call far SET_XRAY_WINDOWS               
2f2b  push    0C7h                            
2f2e  call far M007.M007_GETSTATE             ; DP_XRAY_LINESCAN
2f33  dec     ax                              
2f34  jne     2F43h                           
2f36  push    25h                             
2f38  call far M007.M007_GETSTATE             ; DP_PROFILE
2f3d  push    ax                              
2f3e  call far SWITCHPROFILE                  
2f43  pop     ds                              
2f44  leave                                   
2f45  retf    2h                              

; ===== SWITCHXRAY_LINECOLOUR =====
2f48  mov     ax,2EB5h                        ; segment seg2:0000
2f4b  push    bp                              
2f4c  mov     bp,sp                           
2f4e  push    ds                              
2f4f  mov     ds,ax                           
2f51  push    13Bh                            
2f54  push    word ptr [bp+6h]                
2f57  call far M007.M007_PUTSTATE             ; DP_XRAY_LINECOLOUR
2f5c  push    25h                             
2f5e  call far M007.M007_GETSTATE             ; DP_PROFILE
2f63  push    ax                              
2f64  call far SWITCHPROFILE                  
2f69  pop     ds                              
2f6a  leave                                   
2f6b  retf    2h                              

; ===== SETXRAY_THRESHOLD =====
2f6e  mov     ax,2F49h                        ; segment seg2:0000
2f71  push    bp                              
2f72  mov     bp,sp                           
2f74  push    ds                              
2f75  mov     ds,ax                           
2f77  push    1B0h                            
2f7a  push    word ptr [bp+8h]                
2f7d  push    word ptr [bp+6h]                
2f80  call far M007.M007_PUTVALUE             ; AP_XRAY_THRESHOLD
2f85  push    110h                            
2f88  call far M007.M007_GETSTATE             ; DP_SCANGEN
2f8d  pop     ds                              
2f8e  leave                                   
2f8f  retf    4h                              

; ===== SETXRAY_LINE_SCALE =====
2f92  mov     ax,2F6Fh                        ; segment seg2:0000
2f95  push    bp                              
2f96  mov     bp,sp                           
2f98  push    ds                              
2f99  mov     ds,ax                           
2f9b  push    1B2h                            
2f9e  push    word ptr [bp+8h]                
2fa1  push    word ptr [bp+6h]                
2fa4  call far M007.M007_PUTVALUE             ; AP_XRAY_LINE_SCALE
2fa9  pop     ds                              
2faa  leave                                   
2fab  retf    4h                              

; ===== SETXYIMAGE_ORIGIN =====
2fae  mov     ax,2F93h                        ; segment seg2:0000
2fb1  push    bp                              
2fb2  mov     bp,sp                           
2fb4  push    ds                              
2fb5  mov     ds,ax                           
2fb7  push    1C1h                            
2fba  push    word ptr [bp+0Ch]               
2fbd  push    word ptr [bp+0Ah]               
2fc0  push    word ptr [bp+8h]                
2fc3  push    word ptr [bp+6h]                
2fc6  call far M007.M007_PUTXY                ; AP_IMAGE_ORIGIN_X
2fcb  pop     ds                              
2fcc  leave                                   
2fcd  retf    8h                              

; ----- sub_2fd0 -----
2fd0  mov     ax,2FAFh                        ; segment seg2:0000
2fd3  enter   64h,0h                          
2fd7  push    si                              
2fd8  push    ds                              
2fd9  mov     ds,ax                           
2fdb  sub     ax,ax                           
2fdd  mov     [bp-44h],ax                     
2fe0  mov     [bp-46h],ax                     
2fe3  mov     [bp-4Ch],ax                     
2fe6  mov     [bp-4Eh],ax                     
2fe9  push    word ptr [bp+8h]                
2fec  push    word ptr [bp+6h]                
2fef  mov     [bp-40h],ax                     
2ff2  push    ax                              
2ff3  call far KERNEL._LOPEN                  
2ff8  mov     [bp-48h],ax                     
2ffb  or      ax,ax                           
2ffd  jge     3002h                           
2fff  jmp     3249h                           
3002  push    ax                              
3003  lea     cx,[bp-12h]                     
3006  push    ss                              
3007  push    cx                              
3008  push    0Eh                             
300a  call far KERNEL._LREAD                  
300f  cmp     word ptr [bp-12h],4D42h         
3014  je      3027h                           
3016  push    word ptr [bp-48h]               
3019  call far KERNEL._LCLOSE                 
301e  mov     ax,0FFFEh                       
3021  mov     [bp-40h],ax                     
3024  jmp     324Fh                           
3027  push    word ptr [bp-48h]               
302a  lea     ax,[bp-3Eh]                     
302d  push    ss                              
302e  push    ax                              
302f  push    2Ch                             
3031  call far KERNEL._LREAD                  
3036  push    word ptr [bp-48h]               
3039  push    word ptr [bp-6h]                
303c  push    word ptr [bp-8h]                
303f  push    0h                              
3041  call far KERNEL._LLSEEK                 
3046  mov     ax,[bp-2Ch]                     
3049  or      ax,[bp-2Eh]                     
304c  jne     3016h                           
304e  cmp     word ptr [bp-30h],4h            
3052  je      3057h                           
3054  jmp     3237h                           
3057  push    0h                              
3059  push    8h                              
305b  mov     ax,[bp-3Ah]                     
305e  mov     dx,[bp-38h]                     
3061  add     ax,7h                           
3064  adc     dx,0h                           
3067  push    dx                              
3068  push    ax                              
3069  call far sub_010e                       
306e  mov     cl,3h                           
3070  call far sub_01da                       
3075  mov     [bp-54h],ax                     
3078  mov     [bp-52h],dx                     
307b  push    word ptr [bp-34h]               
307e  push    word ptr [bp-36h]               
3081  push    0h                              
3083  push    word ptr [bp-30h]               
3086  push    dx                              
3087  push    ax                              
3088  call far sub_01a8                       
308d  push    dx                              
308e  push    ax                              
308f  call far sub_01a8                       
3094  mov     [bp-60h],ax                     
3097  mov     [bp-5Eh],dx                     
309a  mov     cl,3h                           
309c  mov     si,ax                           
309e  call far sub_01e6                       
30a3  mov     [bp-64h],ax                     
30a6  mov     [bp-62h],dx                     
30a9  mov     cx,si                           
30ab  and     cl,7h                           
30ae  je      30BCh                           
30b0  add     ax,1h                           
30b3  adc     dx,0h                           
30b6  mov     [bp-64h],ax                     
30b9  mov     [bp-62h],dx                     
30bc  mov     ax,[bp-3Ah]                     
30bf  mov     dx,[bp-38h]                     
30c2  les     bx,[bp+0Eh]                     
30c5  mov     es:[bx],ax                      
30c8  mov     es:[bx+2h],dx                   
30cc  mov     ax,[bp-36h]                     
30cf  mov     dx,[bp-34h]                     
30d2  les     bx,[bp+0Ah]                     
30d5  mov     es:[bx],ax                      
30d8  mov     es:[bx+2h],dx                   
30dc  mov     ax,[bp-54h]                     
30df  mov     dx,[bp-52h]                     
30e2  sub     ax,[bp-3Ah]                     
30e5  sbb     dx,[bp-38h]                     
30e8  les     bx,[bp+12h]                     
30eb  mov     es:[bx],ax                      
30ee  mov     es:[bx+2h],dx                   
30f2  cmp     word ptr [bp-62h],0h            
30f6  jne     30FFh                           
30f8  cmp     word ptr [bp-64h],8000h         
30fd  jbe     313Bh                           
30ff  mov     word ptr [bp-4Eh],8000h         
3104  mov     word ptr [bp-4Ch],0h            
3109  mov     ax,[bp-64h]                     
310c  mov     dx,[bp-62h]                     
310f  mov     cl,0Fh                          
3111  call far sub_01e6                       
3116  mov     [bp-50h],ax                     
3119  mov     cx,[bp-64h]                     
311c  and     ch,7Fh                          
311f  sub     dx,dx                           
3121  mov     [bp-58h],cx                     
3124  mov     [bp-56h],dx                     
3127  or      cx,cx                           
3129  je      3131h                           
312b  inc     ax                              
312c  mov     [bp-50h],ax                     
312f  jmp     3152h                           
3131  mov     word ptr [bp-58h],8000h         
3136  mov     [bp-56h],dx                     
3139  jmp     3152h                           
313b  mov     ax,[bp-64h]                     
313e  mov     dx,[bp-62h]                     
3141  mov     [bp-4Eh],ax                     
3144  mov     [bp-4Ch],dx                     
3147  mov     [bp-58h],ax                     
314a  mov     [bp-56h],dx                     
314d  mov     word ptr [bp-50h],1h            
3152  push    2h                              
3154  push    word ptr [bp-4Ch]               
3157  push    word ptr [bp-4Eh]               
315a  call far KERNEL.GLOBALALLOC             
315f  mov     [bp-4Ah],ax                     
3162  or      ax,ax                           
3164  jne     3169h                           
3166  jmp     3230h                           
3169  push    ax                              
316a  call far KERNEL.GLOBALLOCK              
316f  mov     [bp-4h],ax                      
3172  mov     [bp-2h],dx                      
3175  or      dx,ax                           
3177  jne     317Ch                           
3179  jmp     3221h                           
317c  push    word ptr [bp-62h]               
317f  push    word ptr [bp-64h]               
3182  call far TIGASEM.GSPMALLOC              
3187  mov     [bp-46h],ax                     
318a  mov     [bp-44h],dx                     
318d  or      dx,ax                           
318f  jne     3194h                           
3191  jmp     3217h                           
3194  mov     dx,[bp-44h]                     
3197  les     bx,[bp+16h]                     
319a  mov     es:[bx],ax                      
319d  mov     es:[bx+2h],dx                   
31a1  jmp     3211h                           
31a3  cmp     word ptr [bp-50h],1h            
31a7  jne     31B7h                           
31a9  mov     ax,[bp-58h]                     
31ac  mov     dx,[bp-56h]                     
31af  mov     [bp-5Ch],ax                     
31b2  mov     [bp-5Ah],dx                     
31b5  jmp     31C1h                           
31b7  mov     word ptr [bp-5Ch],8000h         
31bc  mov     word ptr [bp-5Ah],0h            
31c1  push    word ptr [bp-48h]               
31c4  push    word ptr [bp-2h]                
31c7  push    word ptr [bp-4h]                
31ca  mov     ax,[bp-5Ch]                     
31cd  push    ax                              
31ce  mov     si,ax                           
31d0  call far KERNEL._LREAD                  
31d5  mov     [bp-42h],ax                     
31d8  inc     ax                              
31d9  je      3207h                           
31db  push    word ptr [bp-2h]                
31de  push    word ptr [bp-4h]                
31e1  push    word ptr [bp-44h]               
31e4  push    word ptr [bp-46h]               
31e7  push    si                              
31e8  push    0h                              
31ea  call far TIGASEM.HOSTTOGSP              
31ef  mov     ax,[bp-5Ch]                     
31f2  mov     dx,[bp-5Ah]                     
31f5  mov     cl,3h                           
31f7  call far sub_01da                       
31fc  add     [bp-46h],ax                     
31ff  adc     [bp-44h],dx                     
3202  dec     word ptr [bp-50h]               
3205  jmp     3211h                           
3207  mov     word ptr [bp-50h],0h            
320c  mov     word ptr [bp-40h],0FFFBh        
3211  cmp     word ptr [bp-50h],0h            
3215  jg      31A3h                           
3217  push    word ptr [bp-4Ah]               
321a  call far KERNEL.GLOBALUNLOCK            
321f  jmp     3226h                           
3221  mov     word ptr [bp-40h],0FFFDh        
3226  push    word ptr [bp-4Ah]               
3229  call far KERNEL.GLOBALFREE              
322e  jmp     323Ch                           
3230  mov     word ptr [bp-40h],0FFFCh        
3235  jmp     323Ch                           
3237  mov     word ptr [bp-40h],0FFFEh        
323c  push    word ptr [bp-48h]               
323f  call far KERNEL._LCLOSE                 
3244  mov     ax,[bp-40h]                     
3247  jmp     324Fh                           
3249  mov     ax,0FFFFh                       
324c  jmp     3021h                           
324f  pop     ds                              
3250  pop     si                              
3251  leave                                   
3252  retf                                    
3253  add     [bx+si],al                      

; ===== OM_MOVE_REDUCED_ORG =====
3254  mov     ax,2FD1h                        ; segment seg2:0000
3257  push    bp                              
3258  mov     bp,sp                           
325a  push    ds                              
325b  mov     ds,ax                           
325d  push    83h                             
3260  call far M007.M007_GETSTATE             ; DP_GSP
3265  dec     ax                              
3266  jne     3276h                           
3268  push    word ptr [bp+0Ah]               
326b  push    word ptr [bp+8h]                
326e  push    word ptr [bp+6h]                
3271  call far TIGASEM.MOVEREDUCEDIMAGE       
3276  pop     ds                              
3277  leave                                   
3278  retf    6h                              
327b  add     [bx+si],al                      

; ===== OM_REDUCE_OVERLAY =====
327c  mov     ax,3255h                        ; segment seg2:0000
327f  push    bp                              
3280  mov     bp,sp                           
3282  push    ds                              
3283  mov     ds,ax                           
3285  push    0AEh                            
3288  push    1h                              
328a  call far M007.M007_PUTSTATE             ; DP_IMAGE_MODE = 1
328f  push    83h                             
3292  call far M007.M007_GETSTATE             ; DP_GSP
3297  dec     ax                              
3298  jne     32A2h                           
329a  push    word ptr [bp+6h]                
329d  call far TIGASEM.REDUCEIMAGE            
32a2  pop     ds                              
32a3  leave                                   
32a4  retf    2h                              
32a7  add     [bx+si],al                      

; ===== OM_ENLARGE_OVERLAY =====
32a8  mov     ax,327Dh                        ; segment seg2:0000
32ab  push    bp                              
32ac  mov     bp,sp                           
32ae  push    ds                              
32af  mov     ds,ax                           
32b1  push    0AEh                            
32b4  push    0h                              
32b6  call far M007.M007_PUTSTATE             ; DP_IMAGE_MODE = 0
32bb  push    83h                             
32be  call far M007.M007_GETSTATE             ; DP_GSP
32c3  dec     ax                              
32c4  jne     32CEh                           
32c6  push    word ptr [bp+6h]                
32c9  call far TIGASEM.ENLARGEIMAGE           
32ce  pop     ds                              
32cf  leave                                   
32d0  retf    2h                              
32d3  add     [bx+si],al                      

; ===== OM_CHANGE_OBJ_ATTRIB =====
32d4  mov     ax,32A9h                        ; segment seg2:0000
32d7  push    bp                              
32d8  mov     bp,sp                           
32da  push    ds                              
32db  mov     ds,ax                           
32dd  mov     ax,[bp+0Ah]                     
32e0  jmp     32F8h                           
32e2  mov     ax,[bp+6h]                      
32e5  mov     [774h],ax                       
32e8  jmp     330Eh                           
32ea  mov     ax,[bp+8h]                      
32ed  mov     [774h],ax                       
32f0  mov     ax,[bp+6h]                      
32f3  mov     [776h],ax                       
32f6  jmp     330Eh                           
32f8  or      ax,ax                           
32fa  jl      330Eh                           
32fc  jo      330Eh                           
32fe  sub     ax,16h                          
3301  jle     32E2h                           
3303  dec     ax                              
3304  je      32EAh                           
3306  dec     ax                              
3307  jl      330Eh                           
3309  sub     ax,0Ch                          
330c  jle     32E2h                           
330e  push    83h                             
3311  call far M007.M007_GETSTATE             ; DP_GSP
3316  dec     ax                              
3317  jne     332Bh                           
3319  push    word ptr [bp+10h]               
331c  push    word ptr [bp+0Eh]               
331f  push    word ptr [bp+0Ah]               
3322  push    ds                              
3323  push    774h                            
3326  call far TIGASEM.CHANGEOBJATTRIB        
332b  mov     ax,1h                           
332e  pop     ds                              
332f  leave                                   
3330  retf    0Ch                             
3333  add     [bx+si],al                      

; ===== OM_CHANGE_OBJ_PARAM =====
3334  mov     ax,32D5h                        ; segment seg2:0000
3337  enter   0Ch,0h                          
333b  push    si                              
333c  push    ds                              
333d  mov     ds,ax                           
333f  mov     ax,[bp+0Ah]                     
3342  jmp     3492h                           
3345  les     bx,[bp+6h]                      
3348  mov     ax,es:[bx+4h]                   
334c  sub     ax,es:[bx]                      
334f  mov     [778h],ax                       
3352  mov     ax,es:[bx+6h]                   
3356  sub     ax,es:[bx+2h]                   
335a  mov     [77Ah],ax                       
335d  mov     ax,es:[bx]                      
3360  mov     [77Ch],ax                       
3363  mov     ax,es:[bx+2h]                   
3367  mov     [77Eh],ax                       
336a  push    word ptr [bp+0Eh]               
336d  push    word ptr [bp+0Ch]               
3370  push    ds                              
3371  push    778h                            
3374  call far TIGASEM.CHANGEOBJPARAM         
3379  jmp     34B1h                           
337c  les     bx,[bp+6h]                      
337f  push    word ptr es:[bx]                
3382  call far KERNEL.GLOBALLOCK              
3387  mov     [bp-4h],ax                      
338a  mov     [bp-2h],dx                      
338d  or      dx,ax                           
338f  je      33EAh                           
3391  push    word ptr [bp-2h]                
3394  push    ax                              
3395  call far KERNEL.LSTRLEN                 
339a  mov     [bp-0Ah],ax                     
339d  inc     ax                              
339e  cwd                                     
339f  push    dx                              
33a0  push    ax                              
33a1  mov     si,ax                           
33a3  call far TIGASEM.GSPMALLOC              
33a8  mov     [77Ah],ax                       
33ab  mov     [77Ch],dx                       
33af  mov     ax,dx                           
33b1  or      ax,[77Ah]                       
33b5  je      33DFh                           
33b7  push    word ptr [bp-2h]                
33ba  push    word ptr [bp-4h]                
33bd  push    dx                              
33be  push    word ptr [77Ah]                 
33c2  push    si                              
33c3  push    0h                              
33c5  call far TIGASEM.HOSTTOGSP              
33ca  mov     ax,[bp-0Ah]                     
33cd  mov     [778h],ax                       
33d0  push    word ptr [bp+0Eh]               
33d3  push    word ptr [bp+0Ch]               
33d6  push    ds                              
33d7  push    778h                            
33da  call far TIGASEM.CHANGEOBJPARAM         
33df  les     bx,[bp+6h]                      
33e2  push    word ptr es:[bx]                
33e5  call far KERNEL.GLOBALUNLOCK            
33ea  les     bx,[bp+6h]                      
33ed  push    word ptr es:[bx]                
33f0  call far KERNEL.GLOBALFREE              
33f5  jmp     34B1h                           
33f8  les     bx,[bp+6h]                      
33fb  mov     ax,es:[bx]                      
33fe  mov     [778h],ax                       
3401  mov     ax,es:[bx+2h]                   
3405  mov     [77Ah],ax                       
3408  mov     ax,es:[bx+4h]                   
340c  mov     [77Ch],ax                       
340f  mov     ax,es:[bx+6h]                   
3413  jmp     3367h                           
3416  les     bx,[bp+6h]                      
3419  push    word ptr es:[bx+2h]             
341d  call far KERNEL.GLOBALLOCK              
3422  mov     [bp-8h],ax                      
3425  mov     [bp-6h],dx                      
3428  or      dx,ax                           
342a  je      3488h                           
342c  les     bx,[bp+6h]                      
342f  mov     ax,es:[bx]                      
3432  shl     ax,2h                           
3435  mov     [bp-0Ch],ax                     
3438  cwd                                     
3439  push    dx                              
343a  push    ax                              
343b  call far TIGASEM.GSPMALLOC              
3440  mov     [77Ah],ax                       
3443  mov     [77Ch],dx                       
3447  mov     ax,dx                           
3449  or      ax,[77Ah]                       
344d  je      347Ch                           
344f  push    word ptr [bp-6h]                
3452  push    word ptr [bp-8h]                
3455  push    dx                              
3456  push    word ptr [77Ah]                 
345a  push    word ptr [bp-0Ch]               
345d  push    0h                              
345f  call far TIGASEM.HOSTTOGSP              
3464  les     bx,[bp+6h]                      
3467  mov     ax,es:[bx]                      
346a  mov     [778h],ax                       
346d  push    word ptr [bp+0Eh]               
3470  push    word ptr [bp+0Ch]               
3473  push    ds                              
3474  push    778h                            
3477  call far TIGASEM.CHANGEOBJPARAM         
347c  les     bx,[bp+6h]                      
347f  push    word ptr es:[bx+2h]             
3483  call far KERNEL.GLOBALUNLOCK            
3488  les     bx,[bp+6h]                      
348b  push    word ptr es:[bx+2h]             
348f  jmp     33F0h                           
3492  or      ax,ax                           
3494  jne     3499h                           
3496  jmp     3345h                           
3499  dec     ax                              
349a  jne     349Fh                           
349c  jmp     337Ch                           
349f  dec     ax                              
34a0  jne     34A5h                           
34a2  jmp     33F8h                           
34a5  dec     ax                              
34a6  jne     34ABh                           
34a8  jmp     3345h                           
34ab  dec     ax                              
34ac  jne     34B1h                           
34ae  jmp     3416h                           
34b1  mov     ax,1h                           
34b4  pop     ds                              
34b5  pop     si                              
34b6  leave                                   
34b7  retf    0Ah                             

; ===== OM_KILL_OVERLAY_OBJ =====
34ba  mov     ax,3335h                        ; segment seg2:0000
34bd  push    bp                              
34be  mov     bp,sp                           
34c0  push    ds                              
34c1  mov     ds,ax                           
34c3  push    83h                             
34c6  call far M007.M007_GETSTATE             ; DP_GSP
34cb  dec     ax                              
34cc  jne     34D9h                           
34ce  push    word ptr [bp+8h]                
34d1  push    word ptr [bp+6h]                
34d4  call far TIGASEM.KILLOVERLAYOBJ         
34d9  mov     ax,1h                           
34dc  pop     ds                              
34dd  leave                                   
34de  retf    4h                              
34e1  add     [bx+si],al                      

; ===== OM_HIDE_OVERLAY_OBJ =====
34e2  mov     ax,34BBh                        ; segment seg2:0000
34e5  push    bp                              
34e6  mov     bp,sp                           
34e8  push    ds                              
34e9  mov     ds,ax                           
34eb  push    83h                             
34ee  call far M007.M007_GETSTATE             ; DP_GSP
34f3  dec     ax                              
34f4  jne     3501h                           
34f6  push    word ptr [bp+8h]                
34f9  push    word ptr [bp+6h]                
34fc  call far TIGASEM.HIDEOVERLAYOBJ         
3501  mov     ax,1h                           
3504  pop     ds                              
3505  leave                                   
3506  retf    4h                              
3509  add     [bx+si],al                      

; ===== OM_SHOW_OVERLAY_OBJ =====
350a  mov     ax,34E3h                        ; segment seg2:0000
350d  push    bp                              
350e  mov     bp,sp                           
3510  push    ds                              
3511  mov     ds,ax                           
3513  push    83h                             
3516  call far M007.M007_GETSTATE             ; DP_GSP
351b  dec     ax                              
351c  jne     3529h                           
351e  push    word ptr [bp+8h]                
3521  push    word ptr [bp+6h]                
3524  call far TIGASEM.SHOWOVERLAYOBJ         
3529  mov     ax,1h                           
352c  pop     ds                              
352d  leave                                   
352e  retf    4h                              
3531  add     [bx+si],al                      

; ===== OM_MOVE_OVERLAY_OBJ =====
3532  mov     ax,350Bh                        ; segment seg2:0000
3535  push    bp                              
3536  mov     bp,sp                           
3538  push    ds                              
3539  mov     ds,ax                           
353b  push    83h                             
353e  call far M007.M007_GETSTATE             ; DP_GSP
3543  dec     ax                              
3544  jne     3557h                           
3546  push    word ptr [bp+0Ch]               
3549  push    word ptr [bp+0Ah]               
354c  push    word ptr [bp+8h]                
354f  push    word ptr [bp+6h]                
3552  call far TIGASEM.MOVEOVERLAYOBJ         
3557  mov     ax,1h                           
355a  pop     ds                              
355b  leave                                   
355c  retf    8h                              
355f  add     [bx+si],al                      

; ===== OM_CREATE_OVERLAY_OBJ =====
3560  mov     ax,3533h                        ; segment seg2:0000
3563  enter   24h,0h                          
3567  push    si                              
3568  push    ds                              
3569  mov     ds,ax                           
356b  sub     ax,ax                           
356d  mov     [bp-12h],ax                     
3570  mov     [bp-14h],ax                     
3573  mov     ax,[bp+12h]                     
3576  jmp     3B0Fh                           
3579  les     bx,[bp+6h]                      
357c  push    word ptr es:[bx+10h]            
3580  call far KERNEL.GLOBALLOCK              
3585  mov     [bp-4h],ax                      
3588  mov     [bp-2h],dx                      
358b  or      dx,ax                           
358d  jne     3592h                           
358f  jmp     363Ch                           
3592  push    word ptr [bp-2h]                
3595  push    ax                              
3596  call far KERNEL.LSTRLEN                 
359b  mov     [bp-16h],ax                     
359e  inc     ax                              
359f  cwd                                     
35a0  push    dx                              
35a1  push    ax                              
35a2  mov     si,ax                           
35a4  call far TIGASEM.GSPMALLOC              
35a9  mov     [79Ah],ax                       
35ac  mov     [79Ch],dx                       
35b0  mov     ax,dx                           
35b2  or      ax,[79Ah]                       
35b6  je      3630h                           
35b8  push    word ptr [bp-2h]                
35bb  push    word ptr [bp-4h]                
35be  push    dx                              
35bf  push    word ptr [79Ah]                 
35c3  push    si                              
35c4  push    0h                              
35c6  call far TIGASEM.HOSTTOGSP              
35cb  mov     ax,[bp-16h]                     
35ce  mov     [798h],ax                       
35d1  les     bx,[bp+6h]                      
35d4  mov     ax,es:[bx+0Eh]                  
35d8  mov     [796h],ax                       
35db  mov     ax,es:[bx+12h]                  
35df  mov     [79Eh],ax                       
35e2  mov     ax,es:[bx]                      
35e5  mov     [788h],ax                       
35e8  mov     ax,es:[bx+2h]                   
35ec  mov     [78Ah],ax                       
35ef  mov     ax,es:[bx+4h]                   
35f3  mov     [78Ch],ax                       
35f6  mov     ax,es:[bx+6h]                   
35fa  mov     [78Eh],ax                       
35fd  mov     ax,es:[bx+8h]                   
3601  mov     [790h],ax                       
3604  mov     ax,es:[bx+0Ah]                  
3608  mov     [792h],ax                       
360b  mov     ax,es:[bx+0Ch]                  
360f  mov     [794h],ax                       
3612  push    word ptr [bp+12h]               
3615  push    word ptr [bp+10h]               
3618  push    word ptr [bp+0Eh]               
361b  push    word ptr [bp+0Ch]               
361e  push    word ptr [bp+0Ah]               
3621  push    ds                              
3622  push    788h                            
3625  call far TIGASEM.CREATEOVERLAYOBJ       
362a  mov     [bp-14h],ax                     
362d  mov     [bp-12h],dx                     
3630  les     bx,[bp+6h]                      
3633  push    word ptr es:[bx+10h]            
3637  call far KERNEL.GLOBALUNLOCK            
363c  les     bx,[bp+6h]                      
363f  push    word ptr es:[bx+10h]            
3643  call far KERNEL.GLOBALFREE              
3648  jmp     3B2Eh                           
364b  les     bx,[bp+6h]                      
364e  mov     ax,es:[bx]                      
3651  mov     [788h],ax                       
3654  mov     ax,es:[bx+2h]                   
3658  mov     [78Ah],ax                       
365b  mov     ax,es:[bx+4h]                   
365f  mov     [78Ch],ax                       
3662  mov     ax,es:[bx+8h]                   
3666  mov     [790h],ax                       
3669  mov     ax,es:[bx+6h]                   
366d  mov     [78Eh],ax                       
3670  mov     ax,es:[bx+0Ah]                  
3674  mov     [792h],ax                       
3677  mov     ax,es:[bx+0Ch]                  
367b  mov     [794h],ax                       
367e  mov     ax,es:[bx+0Eh]                  
3682  mov     [796h],ax                       
3685  mov     ax,es:[bx+10h]                  
3689  mov     [798h],ax                       
368c  jmp     36E5h                           
368e  les     bx,[bp+6h]                      
3691  mov     ax,es:[bx]                      
3694  mov     [788h],ax                       
3697  mov     ax,es:[bx+2h]                   
369b  mov     [78Ah],ax                       
369e  mov     ax,es:[bx+4h]                   
36a2  mov     [78Ch],ax                       
36a5  mov     ax,es:[bx+6h]                   
36a9  mov     [78Eh],ax                       
36ac  mov     ax,es:[bx+14h]                  
36b0  mov     [794h],ax                       
36b3  mov     ax,es:[bx+8h]                   
36b7  mov     [790h],ax                       
36ba  mov     ax,es:[bx+0Ah]                  
36be  mov     [792h],ax                       
36c1  mov     ax,es:[bx+10h]                  
36c5  sub     ax,es:[bx+0Ch]                  
36c9  mov     [796h],ax                       
36cc  mov     ax,es:[bx+12h]                  
36d0  sub     ax,es:[bx+0Eh]                  
36d4  mov     [798h],ax                       
36d7  mov     ax,es:[bx+0Ch]                  
36db  mov     [79Ah],ax                       
36de  mov     ax,es:[bx+0Eh]                  
36e2  mov     [79Ch],ax                       
36e5  push    word ptr [bp+12h]               
36e8  push    word ptr [bp+10h]               
36eb  push    word ptr [bp+0Eh]               
36ee  push    word ptr [bp+0Ch]               
36f1  push    word ptr [bp+0Ah]               
36f4  push    ds                              
36f5  push    788h                            
36f8  call far TIGASEM.CREATEOVERLAYOBJ       
36fd  mov     [bp-14h],ax                     
3700  mov     [bp-12h],dx                     
3703  jmp     3B2Eh                           
3706  les     bx,[bp+6h]                      
3709  push    word ptr es:[bx+0Eh]            
370d  call far KERNEL.GLOBALLOCK              
3712  mov     [bp-10h],ax                     
3715  mov     [bp-0Eh],dx                     
3718  or      dx,ax                           
371a  jne     371Fh                           
371c  jmp     37BCh                           
371f  les     bx,[bp+6h]                      
3722  mov     ax,es:[bx+0Ch]                  
3726  shl     ax,2h                           
3729  mov     [bp-18h],ax                     
372c  cwd                                     
372d  push    dx                              
372e  push    ax                              
372f  call far TIGASEM.GSPMALLOC              
3734  mov     [798h],ax                       
3737  mov     [79Ah],dx                       
373b  mov     ax,dx                           
373d  or      ax,[798h]                       
3741  je      37B0h                           
3743  push    word ptr [bp-0Eh]               
3746  push    word ptr [bp-10h]               
3749  push    dx                              
374a  push    word ptr [798h]                 
374e  push    word ptr [bp-18h]               
3751  push    0h                              
3753  call far TIGASEM.HOSTTOGSP              
3758  les     bx,[bp+6h]                      
375b  mov     ax,es:[bx]                      
375e  mov     [788h],ax                       
3761  mov     ax,es:[bx+2h]                   
3765  mov     [78Ah],ax                       
3768  mov     ax,es:[bx+4h]                   
376c  mov     [78Ch],ax                       
376f  mov     ax,es:[bx+6h]                   
3773  mov     [78Eh],ax                       
3776  mov     ax,es:[bx+10h]                  
377a  mov     [796h],ax                       
377d  mov     ax,es:[bx+0Ah]                  
3781  mov     [792h],ax                       
3784  mov     ax,es:[bx+8h]                   
3788  mov     [790h],ax                       
378b  mov     ax,es:[bx+0Ch]                  
378f  mov     [794h],ax                       
3792  push    word ptr [bp+12h]               
3795  push    word ptr [bp+10h]               
3798  push    word ptr [bp+0Eh]               
379b  push    word ptr [bp+0Ch]               
379e  push    word ptr [bp+0Ah]               
37a1  push    ds                              
37a2  push    788h                            
37a5  call far TIGASEM.CREATEOVERLAYOBJ       
37aa  mov     [bp-14h],ax                     
37ad  mov     [bp-12h],dx                     
37b0  les     bx,[bp+6h]                      
37b3  push    word ptr es:[bx+0Eh]            
37b7  call far KERNEL.GLOBALUNLOCK            
37bc  les     bx,[bp+6h]                      
37bf  push    word ptr es:[bx+0Eh]            
37c3  jmp     3643h                           
37c6  push    ds                              
37c7  push    7A0h                            
37ca  lea     cx,[bp-24h]                     
37cd  push    ss                              
37ce  push    cx                              
37cf  lea     dx,[bp-1Ch]                     
37d2  push    ss                              
37d3  push    dx                              
37d4  lea     dx,[bp-20h]                     
37d7  push    ss                              
37d8  push    dx                              
37d9  les     bx,[bp+6h]                      
37dc  push    word ptr es:[bx+12h]            
37e0  push    word ptr es:[bx+10h]            
37e4  call far sub_2fd0                       
37e9  add     sp,14h                          
37ec  or      ax,ax                           
37ee  jge     37F3h                           
37f0  jmp     3B2Eh                           
37f3  les     bx,[bp+6h]                      
37f6  mov     ax,es:[bx]                      
37f9  mov     [788h],ax                       
37fc  mov     ax,es:[bx+2h]                   
3800  mov     [78Ah],ax                       
3803  mov     ax,es:[bx+4h]                   
3807  mov     [78Ch],ax                       
380a  mov     ax,es:[bx+6h]                   
380e  mov     [78Eh],ax                       
3811  mov     ax,es:[bx+8h]                   
3815  mov     [796h],ax                       
3818  mov     ax,es:[bx+0Ah]                  
381c  mov     [790h],ax                       
381f  mov     ax,[bp-1Ch]                     
3822  mov     [798h],ax                       
3825  mov     ax,[bp-20h]                     
3828  mov     [79Ah],ax                       
382b  xor     ax,ax                           
382d  mov     [79Ch],ax                       
3830  mov     [79Eh],ax                       
3833  mov     cx,[bp-24h]                     
3836  mov     [792h],cx                       
383a  mov     [794h],ax                       
383d  push    word ptr [bp+12h]               
3840  push    word ptr [bp+10h]               
3843  push    word ptr [bp+0Eh]               
3846  push    word ptr [bp+0Ch]               
3849  push    word ptr [bp+0Ah]               
384c  push    ds                              
384d  push    788h                            
3850  call far TIGASEM.CREATEOVERLAYOBJ       
3855  mov     [bp-14h],ax                     
3858  mov     [bp-12h],dx                     
385b  mov     ax,[bp-1Ch]                     
385e  les     bx,[bp+6h]                      
3861  mov     es:[bx+0Ch],ax                  
3865  mov     ax,[bp-20h]                     
3868  mov     es:[bx+0Eh],ax                  
386c  jmp     3B2Eh                           
386f  les     bx,[bp+6h]                      
3872  mov     ax,es:[bx]                      
3875  mov     [788h],ax                       
3878  mov     ax,es:[bx+2h]                   
387c  mov     [78Ah],ax                       
387f  mov     ax,es:[bx+6h]                   
3883  mov     [78Eh],ax                       
3886  mov     ax,es:[bx+8h]                   
388a  mov     [790h],ax                       
388d  mov     ax,es:[bx+0Ah]                  
3891  mov     [792h],ax                       
3894  mov     ax,es:[bx+0Ch]                  
3898  mov     [794h],ax                       
389b  mov     ax,es:[bx+0Eh]                  
389f  mov     [796h],ax                       
38a2  mov     ax,es:[bx+10h]                  
38a6  mov     [798h],ax                       
38a9  mov     ax,es:[bx+12h]                  
38ad  mov     [79Ah],ax                       
38b0  mov     ax,es:[bx+14h]                  
38b4  mov     [79Ch],ax                       
38b7  mov     ax,es:[bx+16h]                  
38bb  mov     [79Eh],ax                       
38be  mov     ax,es:[bx+18h]                  
38c2  mov     [7A0h],ax                       
38c5  mov     ax,es:[bx+1Ah]                  
38c9  mov     [7A2h],ax                       
38cc  mov     ax,es:[bx+4h]                   
38d0  mov     [78Ch],ax                       
38d3  push    word ptr es:[bx+1Ch]            
38d7  call far KERNEL.GLOBALLOCK              
38dc  mov     [bp-8h],ax                      
38df  mov     [bp-6h],dx                      
38e2  or      dx,ax                           
38e4  jne     38E9h                           
38e6  jmp     3B2Eh                           
38e9  les     bx,[bp+6h]                      
38ec  push    word ptr es:[bx+1Eh]            
38f0  call far KERNEL.GLOBALLOCK              
38f5  mov     [bp-0Ch],ax                     
38f8  mov     [bp-0Ah],dx                     
38fb  or      dx,ax                           
38fd  jne     3902h                           
38ff  jmp     3B2Eh                           
3902  push    ds                              
3903  push    7A4h                            
3906  push    word ptr [bp-6h]                
3909  push    word ptr [bp-8h]                
390c  call far KERNEL.LSTRCPY                 
3911  push    ds                              
3912  push    7AEh                            
3915  push    word ptr [bp-0Ah]               
3918  push    word ptr [bp-0Ch]               
391b  call far KERNEL.LSTRCPY                 
3920  les     bx,[bp+6h]                      
3923  push    word ptr es:[bx+1Ch]            
3927  call far KERNEL.GLOBALUNLOCK            
392c  les     bx,[bp+6h]                      
392f  push    word ptr es:[bx+1Ch]            
3933  call far KERNEL.GLOBALFREE              
3938  les     bx,[bp+6h]                      
393b  push    word ptr es:[bx+1Eh]            
393f  call far KERNEL.GLOBALUNLOCK            
3944  les     bx,[bp+6h]                      
3947  push    word ptr es:[bx+1Eh]            
394b  call far KERNEL.GLOBALFREE              
3950  jmp     36E5h                           
3953  les     bx,[bp+6h]                      
3956  mov     ax,es:[bx]                      
3959  mov     [788h],ax                       
395c  mov     ax,es:[bx+2h]                   
3960  mov     [78Ah],ax                       
3963  mov     ax,es:[bx+4h]                   
3967  mov     [78Eh],ax                       
396a  mov     ax,es:[bx+6h]                   
396e  mov     [790h],ax                       
3971  mov     ax,es:[bx+8h]                   
3975  mov     [792h],ax                       
3978  mov     ax,es:[bx+0Ah]                  
397c  mov     [794h],ax                       
397f  mov     ax,es:[bx+0Ch]                  
3983  mov     [796h],ax                       
3986  mov     ax,es:[bx+0Eh]                  
398a  mov     [798h],ax                       
398d  mov     ax,es:[bx+10h]                  
3991  mov     [79Ah],ax                       
3994  mov     ax,es:[bx+12h]                  
3998  mov     [79Ch],ax                       
399b  mov     ax,es:[bx+1Ah]                  
399f  mov     [7A4h],ax                       
39a2  mov     ax,es:[bx+1Ch]                  
39a6  mov     [7A6h],ax                       
39a9  mov     ax,es:[bx+1Eh]                  
39ad  mov     [7A8h],ax                       
39b0  mov     ax,es:[bx+20h]                  
39b4  mov     [7AAh],ax                       
39b7  mov     ax,es:[bx+18h]                  
39bb  mov     [7A2h],ax                       
39be  mov     ax,es:[bx+14h]                  
39c2  mov     [79Eh],ax                       
39c5  mov     ax,es:[bx+16h]                  
39c9  mov     [7A0h],ax                       
39cc  mov     ax,es:[bx+22h]                  
39d0  mov     [7ACh],ax                       
39d3  mov     ax,es:[bx+28h]                  
39d7  mov     [7C2h],ax                       
39da  mov     ax,es:[bx+2Ah]                  
39de  mov     [7C4h],ax                       
39e1  mov     ax,es:[bx+2Ch]                  
39e5  mov     [7C6h],ax                       
39e8  mov     ax,es:[bx+2Eh]                  
39ec  mov     [7C8h],ax                       
39ef  mov     ax,es:[bx+30h]                  
39f3  mov     [7CAh],ax                       
39f6  mov     ax,es:[bx+si]                   

; ----- sub_39f8 -----
39f8  inc     di                              
39f9  xor     ah,[bp+di+7CCh]                 
39fd  mov     ax,es:[bx+34h]                  
3a01  mov     [7CEh],ax                       
3a04  mov     ax,es:[bx+36h]                  
3a08  mov     [7D0h],ax                       
3a0b  push    word ptr es:[bx+24h]            
3a0f  call far KERNEL.GLOBALLOCK              
3a14  mov     [bp-8h],ax                      
3a17  mov     [bp-6h],dx                      
3a1a  or      dx,ax                           
3a1c  jne     3A21h                           
3a1e  jmp     3B2Eh                           
3a21  les     bx,[bp+6h]                      
3a24  push    word ptr es:[bx+26h]            
3a28  call far KERNEL.GLOBALLOCK              
3a2d  mov     [bp-0Ch],ax                     
3a30  mov     [bp-0Ah],dx                     
3a33  or      dx,ax                           
3a35  jne     3A3Ah                           
3a37  jmp     3B2Eh                           
3a3a  push    ds                              
3a3b  push    7AEh                            
3a3e  push    word ptr [bp-6h]                
3a41  push    word ptr [bp-8h]                
3a44  call far KERNEL.LSTRCPY                 
3a49  push    ds                              
3a4a  push    7B8h                            
3a4d  push    word ptr [bp-0Ah]               
3a50  push    word ptr [bp-0Ch]               
3a53  call far KERNEL.LSTRCPY                 
3a58  les     bx,[bp+6h]                      
3a5b  push    word ptr es:[bx+24h]            
3a5f  call far KERNEL.GLOBALUNLOCK            
3a64  les     bx,[bp+6h]                      
3a67  push    word ptr es:[bx+24h]            
3a6b  call far KERNEL.GLOBALFREE              
3a70  les     bx,[bp+6h]                      
3a73  push    word ptr es:[bx+26h]            
3a77  call far KERNEL.GLOBALUNLOCK            
3a7c  les     bx,[bp+6h]                      
3a7f  push    word ptr es:[bx+26h]            
3a83  jmp     394Bh                           
3a86  les     bx,[bp+6h]                      
3a89  mov     ax,es:[bx]                      
3a8c  mov     [788h],ax                       
3a8f  mov     ax,es:[bx+2h]                   
3a93  mov     [78Ah],ax                       
3a96  mov     word ptr [78Ch],300h            
3a9c  mov     ax,es:[bx+4h]                   
3aa0  mov     [78Eh],ax                       
3aa3  mov     ax,es:[bx+6h]                   
3aa7  mov     [790h],ax                       
3aaa  mov     ax,es:[bx+8h]                   
3aae  mov     [792h],ax                       
3ab1  mov     ax,es:[bx+0Ah]                  
3ab5  mov     [794h],ax                       
3ab8  mov     ax,es:[bx+0Ch]                  
3abc  mov     [796h],ax                       
3abf  mov     ax,es:[bx+0Eh]                  
3ac3  mov     [798h],ax                       
3ac6  mov     ax,es:[bx+18h]                  
3aca  mov     [7A2h],ax                       
3acd  mov     ax,es:[bx+10h]                  
3ad1  mov     [79Ah],ax                       
3ad4  mov     ax,es:[bx+12h]                  
3ad8  mov     [79Ch],ax                       
3adb  mov     ax,es:[bx+14h]                  
3adf  mov     [79Eh],ax                       
3ae2  mov     ax,es:[bx+16h]                  
3ae6  mov     [7A0h],ax                       
3ae9  mov     ax,es:[bx+1Ah]                  
3aed  mov     [7A4h],ax                       
3af0  mov     ax,es:[bx+1Ch]                  
3af4  mov     [7A6h],ax                       
3af7  mov     ax,es:[bx+1Eh]                  
3afb  mov     [7A8h],ax                       
3afe  mov     ax,es:[bx+20h]                  
3b02  mov     [7AAh],ax                       
3b05  mov     ax,es:[bx+22h]                  
3b09  mov     [7ACh],ax                       
3b0c  jmp     36E5h                           
3b0f  cmp     ax,8h                           
3b12  ja      3B2Eh                           
3b14  add     ax,ax                           
3b16  xchg    ax,bx                           
3b17  jmp     word ptr cs:[bx+3B1Ch]          
3b1c  mov     ???,[3579h]                     
3b20  dec     bx                              
3b21  mov     ???,ss:[3706h]                  
3b26  mov     byte ptr [bx],6Fh               
3b29  cmp     [bp+di+39h],dl                  
3b2c  xchg    bh,[bp+si]                      
3b2e  mov     ax,[bp-14h]                     
3b31  mov     dx,[bp-12h]                     
3b34  pop     ds                              
3b35  pop     si                              
3b36  leave                                   
3b37  retf    0Eh                             

; ===== OM_CREATE_GHOST_OF_OBJECT =====
3b3a  mov     ax,3561h                        ; segment seg2:0000
3b3d  push    bp                              
3b3e  mov     bp,sp                           
3b40  push    ds                              
3b41  mov     ds,ax                           
3b43  push    word ptr [bp+0Ah]               
3b46  push    word ptr [bp+8h]                
3b49  push    word ptr [bp+6h]                
3b4c  call far TIGASEM.CREATEGHOSTOFOBJECT    
3b51  mov     ax,1h                           
3b54  pop     ds                              
3b55  leave                                   
3b56  retf    6h                              
3b59  add     [bx+si],al                      

; ===== OM_KILL_GHOST_OF_OBJ =====
3b5a  mov     ax,3B3Bh                        ; segment seg2:0000
3b5d  push    bp                              
3b5e  mov     bp,sp                           
3b60  push    ds                              
3b61  mov     ds,ax                           
3b63  push    word ptr [bp+8h]                
3b66  push    word ptr [bp+6h]                
3b69  call far TIGASEM.KILLGHOSTOFOBJ         
3b6e  mov     ax,1h                           
3b71  pop     ds                              
3b72  leave                                   
3b73  retf    4h                              

; ===== OM_INIT_SEM_OVERLAYS =====
3b76  mov     ax,3B5Bh                        ; segment seg2:0000
3b79  push    bp                              
3b7a  mov     bp,sp                           
3b7c  push    ds                              
3b7d  mov     ds,ax                           
3b7f  pop     ds                              
3b80  leave                                   
3b81  retf    4h                              

; ===== OM_LOAD_INST_FONT =====
3b84  mov     ax,3B77h                        ; segment seg2:0000
3b87  enter   14h,0h                          
3b8b  push    ds                              
3b8c  mov     ds,ax                           
3b8e  sub     ax,ax                           
3b90  mov     [bp-0Eh],ax                     
3b93  mov     [bp-10h],ax                     
3b96  push    word ptr [bp+8h]                
3b99  push    word ptr [bp+6h]                
3b9c  mov     [bp-0Ch],ax                     
3b9f  push    ax                              
3ba0  call far KERNEL._LOPEN                  
3ba5  mov     [bp-12h],ax                     
3ba8  or      ax,ax                           
3baa  jge     3BAFh                           
3bac  jmp     3C64h                           
3baf  push    ax                              
3bb0  lea     cx,[bp-0Ah]                     
3bb3  push    ss                              
3bb4  push    cx                              
3bb5  push    6h                              
3bb7  call far KERNEL._LREAD                  
3bbc  cmp     word ptr [bp-0Ah],8040h         
3bc1  je      3BD0h                           
3bc3  push    word ptr [bp-12h]               
3bc6  call far KERNEL._LCLOSE                 
3bcb  xor     ax,ax                           
3bcd  jmp     3C67h                           
3bd0  push    2h                              
3bd2  push    word ptr [bp-6h]                
3bd5  push    word ptr [bp-8h]                
3bd8  call far KERNEL.GLOBALALLOC             
3bdd  mov     [bp-14h],ax                     
3be0  or      ax,ax                           
3be2  je      3C5Ch                           
3be4  push    ax                              
3be5  call far KERNEL.GLOBALLOCK              
3bea  mov     [bp-4h],ax                      
3bed  mov     [bp-2h],dx                      
3bf0  or      dx,ax                           
3bf2  je      3C54h                           
3bf4  push    word ptr [bp-6h]                
3bf7  push    word ptr [bp-8h]                
3bfa  call far TIGASEM.GSPMALLOC              
3bff  mov     [bp-10h],ax                     
3c02  mov     [bp-0Eh],dx                     
3c05  or      dx,ax                           
3c07  je      3C4Ch                           
3c09  push    word ptr [bp-12h]               
3c0c  push    0h                              
3c0e  push    0h                              
3c10  push    0h                              
3c12  call far KERNEL._LLSEEK                 
3c17  push    word ptr [bp-12h]               
3c1a  push    word ptr [bp-2h]                
3c1d  push    word ptr [bp-4h]                
3c20  push    word ptr [bp-8h]                
3c23  call far KERNEL._LREAD                  
3c28  push    word ptr [bp-2h]                
3c2b  push    word ptr [bp-4h]                
3c2e  push    word ptr [bp-0Eh]               
3c31  push    word ptr [bp-10h]               
3c34  push    word ptr [bp-8h]                
3c37  push    0h                              
3c39  call far TIGASEM.HOSTTOGSP              
3c3e  push    word ptr [bp-0Eh]               
3c41  push    word ptr [bp-10h]               
3c44  call far TIGASEM.INSTALLFONT            
3c49  mov     [bp-0Ch],ax                     
3c4c  push    word ptr [bp-14h]               
3c4f  call far KERNEL.GLOBALUNLOCK            
3c54  push    word ptr [bp-14h]               
3c57  call far KERNEL.GLOBALFREE              
3c5c  push    word ptr [bp-12h]               
3c5f  call far KERNEL._LCLOSE                 
3c64  mov     ax,[bp-0Ch]                     
3c67  pop     ds                              
3c68  leave                                   
3c69  retf    4h                              

; ===== OM_REMOVE_FONT =====
3c6c  mov     ax,3B85h                        ; segment seg2:0000
3c6f  push    bp                              
3c70  mov     bp,sp                           
3c72  push    ds                              
3c73  mov     ds,ax                           
3c75  push    word ptr [bp+6h]                
3c78  call far TIGASEM.DELETEFONT             
3c7d  pop     ds                              
3c7e  leave                                   
3c7f  retf    2h                              

; ===== OM_GET_TEXT_EXTENT =====
3c82  mov     ax,3C6Dh                        ; segment seg2:0000
3c85  enter   40h,0h                          
3c89  push    ds                              
3c8a  mov     ds,ax                           
3c8c  push    -1h                             
3c8e  lea     ax,[bp-3Ah]                     
3c91  push    ss                              
3c92  push    ax                              
3c93  call far TIGASEM.GETFONTINFO            
3c98  mov     ax,[bp-2h]                      
3c9b  mov     [bp-40h],ax                     
3c9e  push    word ptr [bp+0Ah]               
3ca1  lea     ax,[bp-3Ah]                     
3ca4  push    ss                              
3ca5  push    ax                              
3ca6  call far TIGASEM.GETFONTINFO            
3cab  or      ax,ax                           
3cad  je      3CDBh                           
3caf  mov     ax,[bp-0Eh]                     
3cb2  mov     [bp-3Ch],ax                     
3cb5  push    word ptr [bp+0Ah]               
3cb8  call far TIGASEM.SELECTFONT             
3cbd  push    word ptr [bp+8h]                
3cc0  push    word ptr [bp+6h]                
3cc3  call far TIGASEM.TEXTWIDTH              
3cc8  mov     [bp-3Eh],ax                     
3ccb  push    word ptr [bp-40h]               
3cce  call far TIGASEM.SELECTFONT             
3cd3  mov     ax,[bp-3Eh]                     
3cd6  mov     dx,[bp-3Ch]                     
3cd9  jmp     3CDEh                           
3cdb  xor     ax,ax                           
3cdd  cwd                                     
3cde  pop     ds                              
3cdf  leave                                   
3ce0  retf    6h                              
3ce3  add     [bx+si],al                      

; ===== OM_GET_OBJECT_SIZE =====
3ce4  mov     ax,3C83h                        ; segment seg2:0000
3ce7  push    bp                              
3ce8  mov     bp,sp                           
3cea  push    ds                              
3ceb  mov     ds,ax                           
3ced  push    83h                             
3cf0  call far M007.M007_GETSTATE             ; DP_GSP
3cf5  dec     ax                              
3cf6  jne     3D08h                           
3cf8  push    word ptr [bp+0Ah]               
3cfb  push    word ptr [bp+8h]                
3cfe  push    word ptr [bp+6h]                
3d01  call far TIGASEM.GETOVOBJECTSIZE        
3d06  jmp     3D0Eh                           
3d08  mov     ax,0Ah                          
3d0b  mov     dx,14h                          
3d0e  pop     ds                              
3d0f  leave                                   
3d10  retf    6h                              
3d13  add     [bx+si],al                      

; ----- sub_3d14 -----
3d14  mov     ax,3CE5h                        ; segment seg2:0000
3d17  enter   2h,0h                           
3d1b  push    ds                              
3d1c  mov     ds,ax                           
3d1e  call far TIGASEM.INSTALLPRIMS           
3d23  or      ax,ax                           
3d25  jl      3D50h                           
3d27  push    37E7h                           ; segment seg1:0000
3d2a  push    3D7Ah                           
3d2d  call far TIGASEM.SETOVERLAYMODULE       ; "g300"
3d32  or      ax,ax                           
3d34  jl      3D50h                           
3d36  call far TIGASEM.INITDISPLAYCONTROLLER  
3d3b  or      dx,ax                           
3d3d  jne     3D4Eh                           
3d3f  push    ds                              
3d40  push    0FF8h                           
3d43  call far TIGASEM.GETDISPLAYCONFIG       
3d48  mov     ax,1h                           
3d4b  pop     ds                              
3d4c  leave                                   
3d4d  retf                                    
3d4e  xor     ax,ax                           
3d50  pop     ds                              
3d51  leave                                   
3d52  retf                                    
3d53  add     [bx+si],al                      

; ----- sub_3d54 -----
3d54  mov     ax,3D15h                        ; segment seg2:0000
3d57  push    bp                              
3d58  mov     bp,sp                           
3d5a  push    ds                              
3d5b  mov     ds,ax                           
3d5d  call far TIGASEM.DELOVERLAYMODULE       
3d62  mov     ax,1h                           
3d65  pop     ds                              
3d66  leave                                   
3d67  retf                                    

; ----- sub_3d68 -----
3d68  mov     ax,3D55h                        ; segment seg2:0000
3d6b  push    bp                              
3d6c  mov     bp,sp                           
3d6e  push    ds                              
3d6f  mov     ds,ax                           
3d71  call far TIGASEM.SUSPENDDISPCTRLPROC    
3d76  pop     ds                              
3d77  leave                                   
3d78  retf                                    
3d79  add     [bx+33h],ah                     
3d7c  xor     [bx+si],dh                      
3d7e  add     [bx+si],al                      

; ----- sub_3d80 -----
3d80  mov     ax,3D69h                        ; segment seg2:0000
3d83  push    bp                              
3d84  mov     bp,sp                           
3d86  push    ds                              
3d87  mov     ds,ax                           
3d89  xor     ax,ax                           
3d8b  pop     ds                              
3d8c  leave                                   
3d8d  retf    4h                              

; ===== SEM_DEBUG =====
3d90  mov     ax,3D81h                        ; segment seg2:0000
3d93  push    bp                              
3d94  mov     bp,sp                           
3d96  push    ds                              
3d97  mov     ds,ax                           
3d99  push    83h                             
3d9c  call far M007.M007_GETSTATE             ; DP_GSP
3da1  dec     ax                              
3da2  jne     3DAFh                           
3da4  push    word ptr [bp+8h]                
3da7  push    word ptr [bp+6h]                
3daa  call far TIGASEM.SEMDEBUGONOFF          
3daf  pop     ds                              
3db0  leave                                   
3db1  retf    4h                              

; ===== OPLUT_RGB_SET =====
3db4  mov     ax,3D91h                        ; segment seg2:0000
3db7  push    bp                              
3db8  mov     bp,sp                           
3dba  push    ds                              
3dbb  mov     ds,ax                           
3dbd  push    83h                             
3dc0  call far M007.M007_GETSTATE             ; DP_GSP
3dc5  dec     ax                              
3dc6  jne     3DDBh                           
3dc8  push    1h                              
3dca  push    word ptr [bp+0Ch]               
3dcd  push    word ptr [bp+0Ah]               
3dd0  push    word ptr [bp+8h]                
3dd3  push    word ptr [bp+6h]                
3dd6  call far TIGASEM.SETOPLUTRGB            
3ddb  mov     ax,1h                           
3dde  pop     ds                              
3ddf  leave                                   
3de0  retf    0Ah                             
3de3  add     [bx+si],al                      

; ===== OPLUT_RGB_READ =====
3de4  mov     ax,3DB5h                        ; segment seg2:0000
3de7  push    bp                              
3de8  mov     bp,sp                           
3dea  push    ds                              
3deb  mov     ds,ax                           
3ded  push    83h                             
3df0  call far M007.M007_GETSTATE             ; DP_GSP
3df5  dec     ax                              
3df6  jne     3E16h                           
3df8  push    1h                              
3dfa  push    word ptr [bp+0Ah]               
3dfd  push    word ptr [bp+8h]                
3e00  mov     ax,[bp+6h]                      
3e03  push    ax                              
3e04  mov     dx,[bp+8h]                      
3e07  inc     ax                              
3e08  push    dx                              
3e09  push    ax                              
3e0a  mov     ax,[bp+6h]                      
3e0d  inc     ax                              
3e0e  inc     ax                              
3e0f  push    dx                              
3e10  push    ax                              
3e11  call far TIGASEM.READOPLUTRGB           
3e16  mov     ax,1h                           
3e19  pop     ds                              
3e1a  leave                                   
3e1b  retf    8h                              

; ===== OPLUT_READ_RED_LUT =====
3e1e  mov     ax,3DE5h                        ; segment seg2:0000
3e21  push    bp                              
3e22  mov     bp,sp                           
3e24  push    ds                              
3e25  mov     ds,ax                           
3e27  push    83h                             
3e2a  call far M007.M007_GETSTATE             ; DP_GSP
3e2f  dec     ax                              
3e30  jne     3E45h                           
3e32  push    1h                              
3e34  push    word ptr [bp+0Ch]               
3e37  push    word ptr [bp+0Ah]               
3e3a  push    word ptr [bp+8h]                
3e3d  push    word ptr [bp+6h]                
3e40  call far TIGASEM.READOPRLUT             
3e45  mov     ax,1h                           
3e48  pop     ds                              
3e49  leave                                   
3e4a  retf    0Ah                             
3e4d  add     [bx+si],al                      

; ===== OPLUT_READ_GREEN_LUT =====
3e4e  mov     ax,3E1Fh                        ; segment seg2:0000
3e51  push    bp                              
3e52  mov     bp,sp                           
3e54  push    ds                              
3e55  mov     ds,ax                           
3e57  push    83h                             
3e5a  call far M007.M007_GETSTATE             ; DP_GSP
3e5f  dec     ax                              
3e60  jne     3E75h                           
3e62  push    1h                              
3e64  push    word ptr [bp+0Ch]               
3e67  push    word ptr [bp+0Ah]               
3e6a  push    word ptr [bp+8h]                
3e6d  push    word ptr [bp+6h]                
3e70  call far TIGASEM.READOPGLUT             
3e75  mov     ax,1h                           
3e78  pop     ds                              
3e79  leave                                   
3e7a  retf    0Ah                             
3e7d  add     [bx+si],al                      

; ===== OPLUT_READ_BLUE_LUT =====
3e7e  mov     ax,3E4Fh                        ; segment seg2:0000
3e81  push    bp                              
3e82  mov     bp,sp                           
3e84  push    ds                              
3e85  mov     ds,ax                           
3e87  push    83h                             
3e8a  call far M007.M007_GETSTATE             ; DP_GSP
3e8f  dec     ax                              
3e90  jne     3EA5h                           
3e92  push    1h                              
3e94  push    word ptr [bp+0Ch]               
3e97  push    word ptr [bp+0Ah]               
3e9a  push    word ptr [bp+8h]                
3e9d  push    word ptr [bp+6h]                
3ea0  call far TIGASEM.READOPBLUT             
3ea5  mov     ax,1h                           
3ea8  pop     ds                              
3ea9  leave                                   
3eaa  retf    0Ah                             
3ead  add     [bx+si],al                      

; ===== OPLUT_LOAD =====
3eae  mov     ax,3E7Fh                        ; segment seg2:0000
3eb1  push    bp                              
3eb2  mov     bp,sp                           
3eb4  push    ds                              
3eb5  mov     ds,ax                           
3eb7  push    83h                             
3eba  call far M007.M007_GETSTATE             ; DP_GSP
3ebf  dec     ax                              
3ec0  jne     3ED5h                           
3ec2  push    1h                              
3ec4  push    word ptr [bp+0Ch]               
3ec7  push    word ptr [bp+0Ah]               
3eca  push    word ptr [bp+8h]                
3ecd  push    word ptr [bp+6h]                
3ed0  call far TIGASEM.SETMULTOPLUTRGB        
3ed5  mov     ax,1h                           
3ed8  pop     ds                              
3ed9  leave                                   
3eda  retf    0Ah                             
3edd  add     [bx+si],al                      

; ===== OPLUT_READ =====
3ede  mov     ax,3EAFh                        ; segment seg2:0000
3ee1  push    bp                              
3ee2  mov     bp,sp                           
3ee4  push    ds                              
3ee5  mov     ds,ax                           
3ee7  push    83h                             
3eea  call far M007.M007_GETSTATE             ; DP_GSP
3eef  dec     ax                              
3ef0  jne     3F05h                           
3ef2  push    1h                              
3ef4  push    word ptr [bp+0Ch]               
3ef7  push    word ptr [bp+0Ah]               
3efa  push    word ptr [bp+8h]                
3efd  push    word ptr [bp+6h]                
3f00  call far TIGASEM.READMULTOPLUTRGB       
3f05  mov     ax,1h                           
3f08  pop     ds                              
3f09  leave                                   
3f0a  retf    0Ah                             
3f0d  add     [bx+si],al                      

; ===== OPLUT_SET_RED =====
3f0e  mov     ax,3EDFh                        ; segment seg2:0000
3f11  push    bp                              
3f12  mov     bp,sp                           
3f14  push    ds                              
3f15  mov     ds,ax                           
3f17  push    83h                             
3f1a  call far M007.M007_GETSTATE             ; DP_GSP
3f1f  dec     ax                              
3f20  jne     3F31h                           
3f22  push    1h                              
3f24  push    0h                              
3f26  push    word ptr [bp+8h]                
3f29  push    word ptr [bp+6h]                
3f2c  call far TIGASEM.SETOPLUTENTRY          
3f31  mov     ax,1h                           
3f34  pop     ds                              
3f35  leave                                   
3f36  retf    6h                              
3f39  add     [bx+si],al                      

; ===== OPLUT_SET_GREEN =====
3f3a  mov     ax,3F0Fh                        ; segment seg2:0000
3f3d  push    bp                              
3f3e  mov     bp,sp                           
3f40  push    ds                              
3f41  mov     ds,ax                           
3f43  push    83h                             
3f46  call far M007.M007_GETSTATE             ; DP_GSP
3f4b  dec     ax                              
3f4c  jne     3F5Dh                           
3f4e  push    1h                              
3f50  push    1h                              
3f52  push    word ptr [bp+8h]                
3f55  push    word ptr [bp+6h]                
3f58  call far TIGASEM.SETOPLUTENTRY          
3f5d  mov     ax,1h                           
3f60  pop     ds                              
3f61  leave                                   
3f62  retf    6h                              
3f65  add     [bx+si],al                      

; ===== OPLUT_SET_BLUE =====
3f66  mov     ax,3F3Bh                        ; segment seg2:0000
3f69  push    bp                              
3f6a  mov     bp,sp                           
3f6c  push    ds                              
3f6d  mov     ds,ax                           
3f6f  push    83h                             
3f72  call far M007.M007_GETSTATE             ; DP_GSP
3f77  dec     ax                              
3f78  jne     3F89h                           
3f7a  push    1h                              
3f7c  push    1h                              
3f7e  push    word ptr [bp+8h]                
3f81  push    word ptr [bp+6h]                
3f84  call far TIGASEM.SETOPLUTENTRY          
3f89  mov     ax,1h                           
3f8c  pop     ds                              
3f8d  leave                                   
3f8e  retf    6h                              
3f91  add     [bx+si],al                      

; ===== OPLUT_READ_RED =====
3f92  mov     ax,3F67h                        ; segment seg2:0000
3f95  push    bp                              
3f96  mov     bp,sp                           
3f98  push    ds                              
3f99  mov     ds,ax                           
3f9b  push    83h                             
3f9e  call far M007.M007_GETSTATE             ; DP_GSP
3fa3  dec     ax                              
3fa4  jne     3FB8h                           
3fa6  push    1h                              
3fa8  push    0h                              
3faa  push    word ptr [bp+0Ah]               
3fad  push    word ptr [bp+8h]                
3fb0  push    word ptr [bp+6h]                
3fb3  call far TIGASEM.READOPLUTENTRY         
3fb8  mov     ax,1h                           
3fbb  pop     ds                              
3fbc  leave                                   
3fbd  retf    8h                              

; ===== OPLUT_READ_GREEN =====
3fc0  mov     ax,3F93h                        ; segment seg2:0000
3fc3  push    bp                              
3fc4  mov     bp,sp                           
3fc6  push    ds                              
3fc7  mov     ds,ax                           
3fc9  push    83h                             
3fcc  call far M007.M007_GETSTATE             ; DP_GSP
3fd1  dec     ax                              
3fd2  jne     3FE6h                           
3fd4  push    1h                              
3fd6  push    1h                              
3fd8  push    word ptr [bp+0Ah]               
3fdb  push    word ptr [bp+8h]                
3fde  push    word ptr [bp+6h]                
3fe1  call far TIGASEM.READOPLUTENTRY         
3fe6  mov     ax,1h                           
3fe9  pop     ds                              
3fea  leave                                   
3feb  retf    8h                              

; ===== OPLUT_READ_BLUE =====
3fee  mov     ax,3FC1h                        ; segment seg2:0000
3ff1  push    bp                              
3ff2  mov     bp,sp                           
3ff4  push    ds                              
3ff5  mov     ds,ax                           
3ff7  push    83h                             
3ffa  call far M007.M007_GETSTATE             ; DP_GSP
3fff  dec     ax                              
4000  jne     4014h                           
4002  push    1h                              
4004  push    2h                              
4006  push    word ptr [bp+0Ah]               
4009  push    word ptr [bp+8h]                
400c  push    word ptr [bp+6h]                
400f  call far TIGASEM.READOPLUTENTRY         
4014  mov     ax,1h                           
4017  pop     ds                              
4018  leave                                   
4019  retf    8h                              

; ----- sub_401c -----
401c  mov     ax,3FEFh                        ; segment seg2:0000
401f  enter   22h,0h                          
4023  push    ds                              
4024  mov     ds,ax                           
4026  les     bx,[bp+0Ah]                     
4029  sub     ah,ah                           
402b  mov     al,es:[bx]                      
402e  mov     [bp-2h],ax                      
4031  mov     ax,[bp+8h]                      
4034  dec     ax                              
4035  mov     [bp-12h],ax                     
4038  cmp     ax,1h                           
403b  jge     4040h                           
403d  jmp     410Ah                           
4040  mov     ax,[bp-2h]                      
4043  mov     [bp-0Ah],ax                     
4046  sub     ah,ah                           
4048  mov     al,es:[bx+1h]                   
404c  mov     [bp-0Ch],ax                     
404f  add     word ptr [bp+0Ah],2h            
4053  mov     word ptr [bp-4h],0h             
4058  jmp     40ADh                           
405a  mov     [bp-22h],ax                     
405d  wait                                    
405e  fild    word ptr [bp-22h]               
4061  wait                                    
4062  fmul    dword ptr [bp-16h]              
4065  wait                                    
4066  fadd    dword ptr [bp-1Ah]              
4069  wait                                    
406a  fadd    dword ptr [328h]                ; [ds] = 0.5
406e  call far sub_01f2                       
4073  mov     bx,[bp-6h]                      
4076  add     bx,bx                           
4078  mov     [bx+7F8h],ax                    
407c  mov     bx,[bp-6h]                      
407f  add     bx,bx                           
4081  cmp     word ptr [bx+7F8h],0FFh         
4087  jbe     408Fh                           
4089  mov     word ptr [bx+7F8h],0FFh         
408f  inc     word ptr [bp-6h]                
4092  mov     ax,[bp-6h]                      
4095  cmp     [bp-0Eh],ax                     
4098  jge     405Ah                           
409a  mov     ax,[bp-0Eh]                     
409d  mov     [bp-0Ah],ax                     
40a0  mov     ax,[bp-10h]                     
40a3  mov     [bp-0Ch],ax                     
40a6  add     word ptr [bp+0Ah],2h            
40aa  inc     word ptr [bp-4h]                
40ad  mov     ax,[bp-4h]                      
40b0  cmp     [bp-12h],ax                     
40b3  jle     410Ah                           
40b5  les     bx,[bp+0Ah]                     
40b8  sub     ah,ah                           
40ba  mov     al,es:[bx]                      
40bd  mov     [bp-0Eh],ax                     
40c0  mov     cl,es:[bx+1h]                   
40c4  sub     ch,ch                           
40c6  mov     [bp-10h],cx                     
40c9  sub     cx,[bp-0Ch]                     
40cc  mov     [bp-1Ch],cx                     
40cf  wait                                    
40d0  fild    word ptr [bp-1Ch]               
40d3  sub     ax,[bp-0Ah]                     
40d6  cmp     ax,1h                           
40d9  jge     40DEh                           
40db  mov     ax,1h                           
40de  mov     [bp-1Eh],ax                     
40e1  wait                                    
40e2  fidiv   word ptr [bp-1Eh]               
40e5  wait                                    
40e6  fst     dword ptr [bp-22h]              
40e9  wait                                    
40ea  fstp    dword ptr [bp-16h]              
40ed  wait                                    
40ee  fild    word ptr [bp-0Ch]               
40f1  wait                                    
40f2  fild    word ptr [bp-0Ah]               
40f5  wait                                    
40f6  fmul    dword ptr [bp-22h]              
40f9  wait                                    
40fa  fsubp   st(1)                           
40fc  wait                                    
40fd  fstp    dword ptr [bp-1Ah]              
4100  nop                                     
4101  wait                                    
4102  mov     ax,[bp-0Ah]                     
4105  mov     [bp-6h],ax                      
4108  jmp     4092h                           
410a  pop     ds                              
410b  leave                                   
410c  retf                                    
410d  add     [bx+si],al                      

; ===== OPLUT_SET_RED_PTS =====
410e  mov     ax,401Dh                        ; segment seg2:0000
4111  enter   2h,0h                           
4115  push    ds                              
4116  mov     ds,ax                           
4118  cmp     word ptr [bp+0Ah],1h            
411c  jle     4196h                           
411e  push    83h                             
4121  call far M007.M007_GETSTATE             ; DP_GSP
4126  dec     ax                              
4127  jne     4191h                           
4129  cmp     word ptr [bp+0Ah],100h          
412e  jle     417Fh                           
4130  push    word ptr [bp+8h]                
4133  push    word ptr [bp+6h]                
4136  push    word ptr [bp+0Ah]               
4139  push    0h                              
413b  call far sub_401c                       
4140  add     sp,8h                           
4143  mov     word ptr [bp-2h],0h             
4148  mov     bx,[bp-2h]                      
414b  add     bx,bx                           
414d  mov     al,[bx+7F8h]                    
4151  imul    bx,[bp-2h],3h                   
4155  mov     [bx+0CF8h],al                   
4159  xor     al,al                           
415b  mov     [bx+0CF9h],al                   
415f  mov     [bx+0CFAh],al                   
4163  inc     word ptr [bp-2h]                
4166  cmp     word ptr [bp-2h],100h           
416b  jl      4148h                           
416d  push    1h                              
416f  push    0h                              
4171  push    100h                            
4174  push    ds                              
4175  push    0CF8h                           
4178  call far TIGASEM.SETMULTOPLUTRGB        
417d  jmp     4191h                           
417f  push    1h                              
4181  push    0h                              
4183  push    word ptr [bp+0Ah]               
4186  push    word ptr [bp+8h]                
4189  push    word ptr [bp+6h]                
418c  call far TIGASEM.SETOPLUTPOINTS         
4191  mov     ax,1h                           
4194  jmp     4198h                           
4196  xor     ax,ax                           
4198  pop     ds                              
4199  leave                                   
419a  retf    8h                              
419d  add     [bx+si],al                      

; ===== OPLUT_SET_GREEN_PTS =====
419e  mov     ax,410Fh                        ; segment seg2:0000
41a1  enter   2h,0h                           
41a5  push    si                              
41a6  push    ds                              
41a7  mov     ds,ax                           
41a9  cmp     word ptr [bp+0Ah],1h            
41ad  jle     4227h                           
41af  push    83h                             
41b2  call far M007.M007_GETSTATE             ; DP_GSP
41b7  dec     ax                              
41b8  jne     4222h                           
41ba  cmp     word ptr [bp+0Ah],100h          
41bf  jle     4210h                           
41c1  push    word ptr [bp+8h]                
41c4  push    word ptr [bp+6h]                
41c7  push    word ptr [bp+0Ah]               
41ca  push    0h                              
41cc  call far sub_401c                       
41d1  add     sp,8h                           
41d4  mov     word ptr [bp-2h],0h             
41d9  imul    bx,[bp-2h],3h                   
41dd  mov     byte ptr [bx+0CF8h],0h          
41e2  mov     si,[bp-2h]                      
41e5  add     si,si                           
41e7  mov     al,[si+7F8h]                    
41eb  mov     [bx+0CF9h],al                   
41ef  mov     byte ptr [bx+0CFAh],0h          
41f4  inc     word ptr [bp-2h]                
41f7  cmp     word ptr [bp-2h],100h           
41fc  jl      41D9h                           
41fe  push    1h                              
4200  push    0h                              
4202  push    100h                            
4205  push    ds                              
4206  push    0CF8h                           
4209  call far TIGASEM.SETMULTOPLUTRGB        
420e  jmp     4222h                           
4210  push    1h                              
4212  push    1h                              
4214  push    word ptr [bp+0Ah]               
4217  push    word ptr [bp+8h]                
421a  push    word ptr [bp+6h]                
421d  call far TIGASEM.SETOPLUTPOINTS         
4222  mov     ax,1h                           
4225  jmp     4229h                           
4227  xor     ax,ax                           
4229  pop     ds                              
422a  pop     si                              
422b  leave                                   
422c  retf    8h                              
422f  add     [bx+si],al                      

; ===== OPLUT_SET_BLUE_PTS =====
4230  mov     ax,419Fh                        ; segment seg2:0000
4233  enter   2h,0h                           
4237  push    si                              
4238  push    ds                              
4239  mov     ds,ax                           
423b  cmp     word ptr [bp+0Ah],1h            
423f  jle     42B9h                           
4241  push    83h                             
4244  call far M007.M007_GETSTATE             ; DP_GSP
4249  dec     ax                              
424a  jne     42B4h                           
424c  cmp     word ptr [bp+0Ah],100h          
4251  jle     42A2h                           
4253  push    word ptr [bp+8h]                
4256  push    word ptr [bp+6h]                
4259  push    word ptr [bp+0Ah]               
425c  push    0h                              
425e  call far sub_401c                       
4263  add     sp,8h                           
4266  mov     word ptr [bp-2h],0h             
426b  xor     al,al                           
426d  imul    bx,[bp-2h],3h                   
4271  mov     [bx+0CF8h],al                   
4275  mov     [bx+0CF9h],al                   
4279  mov     si,[bp-2h]                      
427c  add     si,si                           
427e  mov     al,[si+7F8h]                    
4282  mov     [bx+0CFAh],al                   
4286  inc     word ptr [bp-2h]                
4289  cmp     word ptr [bp-2h],100h           
428e  jl      426Bh                           
4290  push    1h                              
4292  push    0h                              
4294  push    100h                            
4297  push    ds                              
4298  push    0CF8h                           
429b  call far TIGASEM.SETMULTOPLUTRGB        
42a0  jmp     42B4h                           
42a2  push    1h                              
42a4  push    2h                              
42a6  push    word ptr [bp+0Ah]               
42a9  push    word ptr [bp+8h]                
42ac  push    word ptr [bp+6h]                
42af  call far TIGASEM.SETOPLUTPOINTS         
42b4  mov     ax,1h                           
42b7  jmp     42BBh                           
42b9  xor     ax,ax                           
42bb  pop     ds                              
42bc  pop     si                              
42bd  leave                                   
42be  retf    8h                              
42c1  add     [bx+si],al                      

; ===== OPLUT_SET_GREY_PTS =====
42c2  mov     ax,4231h                        ; segment seg2:0000
42c5  enter   2h,0h                           
42c9  push    di                              
42ca  push    si                              
42cb  push    ds                              
42cc  mov     ds,ax                           
42ce  cmp     word ptr [bp+0Ah],1h            
42d2  jg      42DAh                           
42d4  mov     ax,1h                           
42d7  jmp     43E3h                           
42da  cmp     word ptr [bp+0Ch],5h            
42de  je      4353h                           
42e0  push    83h                             
42e3  call far M007.M007_GETSTATE             ; DP_GSP
42e8  dec     ax                              
42e9  jne     42D4h                           
42eb  cmp     word ptr [bp+0Ah],100h          
42f0  jle     433Fh                           
42f2  push    word ptr [bp+8h]                
42f5  push    word ptr [bp+6h]                
42f8  push    word ptr [bp+0Ah]               
42fb  push    0h                              
42fd  call far sub_401c                       
4302  add     sp,8h                           
4305  mov     word ptr [bp-2h],0h             
430a  mov     bx,[bp-2h]                      
430d  add     bx,bx                           
430f  mov     al,[bx+7F8h]                    
4313  imul    bx,[bp-2h],3h                   
4317  mov     [bx+0CF8h],al                   
431b  mov     [bx+0CF9h],al                   
431f  mov     [bx+0CFAh],al                   
4323  inc     word ptr [bp-2h]                
4326  cmp     word ptr [bp-2h],100h           
432b  jl      430Ah                           
432d  push    1h                              
432f  push    0h                              
4331  push    100h                            
4334  push    ds                              
4335  push    0CF8h                           
4338  call far TIGASEM.SETMULTOPLUTRGB        
433d  jmp     42D4h                           
433f  push    1h                              
4341  push    3h                              
4343  push    word ptr [bp+0Ah]               
4346  push    word ptr [bp+8h]                
4349  push    word ptr [bp+6h]                
434c  call far TIGASEM.SETOPLUTPOINTS         
4351  jmp     42D4h                           
4353  push    83h                             
4356  call far M007.M007_GETSTATE             ; DP_GSP
435b  dec     ax                              
435c  je      4361h                           
435e  jmp     42D4h                           
4361  cmp     word ptr [bp+0Ah],100h          
4366  jle     43A5h                           
4368  push    word ptr [bp+8h]                
436b  push    word ptr [bp+6h]                
436e  push    word ptr [bp+0Ah]               
4371  push    0h                              
4373  call far sub_401c                       
4378  add     sp,8h                           
437b  mov     word ptr [bp-2h],0h             
4380  mov     ax,[bp-2h]                      
4383  imul    bx,ax,3h                        
4386  mov     [bx+9F8h],ax                    
438a  mov     si,ax                           
438c  add     si,ax                           
438e  mov     al,[si+7F8h]                    
4392  mov     [bx+9FAh],al                    
4396  inc     word ptr [bp-2h]                
4399  cmp     word ptr [bp-2h],100h           
439e  jl      4380h                           
43a0  push    100h                            
43a3  jmp     43D7h                           
43a5  mov     word ptr [bp-2h],0h             
43aa  jmp     43CEh                           
43ac  mov     bx,[bp-2h]                      
43af  add     bx,bx                           
43b1  les     si,[bp+6h]                      
43b4  mov     al,es:[bx+si]                   
43b7  sub     ah,ah                           
43b9  imul    di,[bp-2h],3h                   
43bd  add     bx,si                           
43bf  mov     [di+9F8h],ax                    
43c3  mov     al,es:[bx+1h]                   
43c7  mov     [di+9FAh],al                    
43cb  inc     word ptr [bp-2h]                
43ce  mov     ax,[bp+0Ah]                     
43d1  cmp     [bp-2h],ax                      
43d4  jl      43ACh                           
43d6  push    ax                              
43d7  push    ds                              
43d8  push    9F8h                            
43db  call far M700.DEFINE_LUT                
43e0  jmp     42D4h                           
43e3  pop     ds                              
43e4  pop     si                              
43e5  pop     di                              
43e6  leave                                   
43e7  retf    8h                              

; ===== OPLUT_QLIN =====
43ea  mov     ax,42C3h                        ; segment seg2:0000
43ed  push    bp                              
43ee  mov     bp,sp                           
43f0  push    ds                              
43f1  mov     ds,ax                           
43f3  push    83h                             
43f6  call far M007.M007_GETSTATE             ; DP_GSP
43fb  dec     ax                              
43fc  jne     440Bh                           
43fe  cmp     word ptr [bp+6h],4h             
4402  jne     4410h                           
4404  push    1h                              
4406  call far TIGASEM.QLOADLINOPLUT          
440b  mov     ax,1h                           
440e  jmp     4472h                           
4410  xor     al,al                           
4412  mov     [1328h],al                      
4415  mov     [1329h],al                      
4418  mov     al,0FFh                         
441a  mov     [132Ah],al                      
441d  mov     [132Bh],al                      
4420  cmp     word ptr [bp+6h],1h             
4424  jne     442Ch                           
4426  push    1h                              
4428  push    0h                              
442a  jmp     4442h                           
442c  cmp     word ptr [bp+6h],2h             
4430  jne     4438h                           
4432  push    1h                              
4434  push    1h                              
4436  jmp     4442h                           
4438  cmp     word ptr [bp+6h],3h             
443c  jne     444Fh                           
443e  push    1h                              
4440  push    2h                              
4442  push    2h                              
4444  push    ds                              
4445  push    1328h                           
4448  call far TIGASEM.SETOPLUTPOINTS         
444d  jmp     440Bh                           
444f  mov     word ptr [9F8h],0h              
4455  mov     byte ptr [9FAh],0h              
445a  mov     word ptr [9FBh],0FFh            
4460  mov     byte ptr [9FDh],0FFh            
4465  push    2h                              
4467  push    ds                              
4468  push    9F8h                            
446b  call far M700.DEFINE_LUT                
4470  jmp     440Bh                           
4472  pop     ds                              
4473  leave                                   
4474  retf    2h                              
4477  add     [bx+si],al                      

; ===== OPLUT_QINV =====
4478  mov     ax,43EBh                        ; segment seg2:0000
447b  push    bp                              
447c  mov     bp,sp                           
447e  push    ds                              
447f  mov     ds,ax                           
4481  push    83h                             
4484  call far M007.M007_GETSTATE             ; DP_GSP
4489  dec     ax                              
448a  jne     4499h                           
448c  cmp     word ptr [bp+6h],4h             
4490  jne     449Eh                           
4492  push    1h                              
4494  call far TIGASEM.QLOADINVOPLUT          
4499  mov     ax,1h                           
449c  jmp     4500h                           
449e  mov     al,0FFh                         
44a0  mov     [1329h],al                      
44a3  mov     [132Ah],al                      
44a6  xor     al,al                           
44a8  mov     [1328h],al                      
44ab  mov     [132Bh],al                      
44ae  cmp     word ptr [bp+6h],1h             
44b2  jne     44BAh                           
44b4  push    1h                              
44b6  push    0h                              
44b8  jmp     44D0h                           
44ba  cmp     word ptr [bp+6h],2h             
44be  jne     44C6h                           
44c0  push    1h                              
44c2  push    1h                              
44c4  jmp     44D0h                           
44c6  cmp     word ptr [bp+6h],3h             
44ca  jne     44DDh                           
44cc  push    1h                              
44ce  push    2h                              
44d0  push    2h                              
44d2  push    ds                              
44d3  push    1328h                           
44d6  call far TIGASEM.SETOPLUTPOINTS         
44db  jmp     4499h                           
44dd  mov     word ptr [9F8h],0h              
44e3  mov     byte ptr [9FAh],0FFh            
44e8  mov     word ptr [9FBh],0FFh            
44ee  mov     byte ptr [9FDh],0h              
44f3  push    2h                              
44f5  push    ds                              
44f6  push    9F8h                            
44f9  call far M700.DEFINE_LUT                
44fe  jmp     4499h                           
4500  pop     ds                              
4501  leave                                   
4502  retf    2h                              
4505  add     [bx+si],al                      

; ===== OPLUT_FILL =====
4506  mov     ax,4479h                        ; segment seg2:0000
4509  push    bp                              
450a  mov     bp,sp                           
450c  push    ds                              
450d  mov     ds,ax                           
450f  push    83h                             
4512  call far M007.M007_GETSTATE             ; DP_GSP
4517  dec     ax                              
4518  jne     4577h                           
451a  cmp     word ptr [bp+10h],4h            
451e  jne     4530h                           
4520  push    1h                              
4522  push    word ptr [bp+0Eh]               
4525  push    word ptr [bp+0Ch]               
4528  push    word ptr [bp+0Ah]               
452b  push    word ptr [bp+8h]                
452e  jmp     456Fh                           
4530  cmp     word ptr [bp+10h],1h            
4534  jne     4545h                           
4536  push    1h                              
4538  push    word ptr [bp+0Eh]               
453b  push    word ptr [bp+0Ch]               
453e  push    word ptr [bp+0Ah]               
4541  push    0h                              
4543  jmp     4559h                           
4545  cmp     word ptr [bp+10h],2h            
4549  jne     455Dh                           
454b  push    1h                              
454d  push    word ptr [bp+0Eh]               
4550  push    word ptr [bp+0Ch]               
4553  push    word ptr [bp+0Ah]               
4556  push    word ptr [bp+8h]                
4559  push    0h                              
455b  jmp     4572h                           
455d  cmp     word ptr [bp+10h],3h            
4561  jne     4577h                           
4563  push    1h                              
4565  push    word ptr [bp+0Eh]               
4568  push    word ptr [bp+0Ch]               
456b  push    0h                              
456d  push    0h                              
456f  push    word ptr [bp+6h]                
4572  call far TIGASEM.QFILLOPLUT             
4577  mov     ax,1h                           
457a  pop     ds                              
457b  leave                                   
457c  retf    0Ch                             
457f  add     [bx+si],al                      

; ===== OPLUT_GAMMA =====
4580  mov     ax,4507h                        ; segment seg2:0000
4583  push    bp                              
4584  mov     bp,sp                           
4586  push    ds                              
4587  mov     ds,ax                           
4589  push    83h                             
458c  call far M007.M007_GETSTATE             ; DP_GSP
4591  dec     ax                              
4592  jne     45AAh                           
4594  push    1h                              
4596  wait                                    
4597  fld     dword ptr [bp+6h]               
459a  sub     sp,8h                           
459d  mov     bx,sp                           
459f  wait                                    
45a0  fstp    qword ptr ss:[bx]               
45a3  nop                                     
45a4  wait                                    
45a5  call far TIGASEM.SETGAMMAOPLUT          
45aa  mov     ax,1h                           
45ad  pop     ds                              
45ae  leave                                   
45af  retf    6h                              

; ===== OPLUT_INV =====
45b2  mov     ax,4581h                        ; segment seg2:0000
45b5  enter   2h,0h                           
45b9  push    ds                              
45ba  mov     ds,ax                           
45bc  push    83h                             
45bf  call far M007.M007_GETSTATE             ; DP_GSP
45c4  dec     ax                              
45c5  jne     45F0h                           
45c7  cmp     word ptr [bp+0Eh],4h            
45cb  jne     45F6h                           
45cd  push    1h                              
45cf  wait                                    
45d0  fld     dword ptr [bp+0Ah]              
45d3  sub     sp,8h                           
45d6  mov     bx,sp                           
45d8  wait                                    
45d9  fstp    qword ptr ss:[bx]               
45dc  wait                                    
45dd  fld     dword ptr [bp+6h]               
45e0  sub     sp,8h                           
45e3  mov     bx,sp                           
45e5  wait                                    
45e6  fstp    qword ptr ss:[bx]               
45e9  nop                                     
45ea  wait                                    
45eb  call far TIGASEM.SETINVERTOPLUT         
45f0  mov     ax,1h                           
45f3  jmp     4682h                           
45f6  mov     byte ptr [1328h],0h             
45fb  wait                                    
45fc  fld     dword ptr [bp+0Ah]              
45ff  wait                                    
4600  fmul    dword ptr [32Ch]                ; [ds] = 256
4604  wait                                    
4605  fadd    dword ptr [328h]                ; [ds] = 0.5
4609  call far sub_01f2                       
460e  wait                                    
460f  fld     dword ptr [bp+6h]               
4612  mov     [bp-2h],ax                      
4615  call far sub_01f2                       
461a  mov     cx,ax                           
461c  add     al,[bp-2h]                      
461f  mov     [1329h],al                      
4622  mov     byte ptr [132Ah],0FFh           
4627  mov     [132Bh],cl                      
462b  cmp     word ptr [bp+0Eh],1h            
462f  jne     4637h                           
4631  push    1h                              
4633  push    0h                              
4635  jmp     464Dh                           
4637  cmp     word ptr [bp+0Eh],2h            
463b  jne     4643h                           
463d  push    1h                              
463f  push    1h                              
4641  jmp     464Dh                           
4643  cmp     word ptr [bp+0Eh],3h            
4647  jne     465Ah                           
4649  push    1h                              
464b  push    2h                              
464d  push    2h                              
464f  push    ds                              
4650  push    1328h                           
4653  call far TIGASEM.SETOPLUTPOINTS         
4658  jmp     45F0h                           
465a  mov     al,[1328h]                      
465d  sub     ah,ah                           
465f  mov     [9F8h],ax                       
4662  mov     al,[1329h]                      
4665  mov     [9FAh],al                       
4668  mov     al,[132Ah]                      
466b  mov     [9FBh],ax                       
466e  mov     al,[132Bh]                      
4671  mov     [9FDh],al                       
4674  push    2h                              
4676  push    ds                              
4677  push    9F8h                            
467a  call far M700.DEFINE_LUT                
467f  jmp     45F0h                           
4682  pop     ds                              
4683  leave                                   
4684  retf    0Ah                             
4687  add     [bx+si],al                      

; ===== OPLUT_LIN =====
4688  mov     ax,45B3h                        ; segment seg2:0000
468b  enter   2h,0h                           
468f  push    ds                              
4690  mov     ds,ax                           
4692  push    83h                             
4695  call far M007.M007_GETSTATE             ; DP_GSP
469a  dec     ax                              
469b  jne     46C6h                           
469d  cmp     word ptr [bp+0Eh],4h            
46a1  jne     46CCh                           
46a3  push    1h                              
46a5  wait                                    
46a6  fld     dword ptr [bp+0Ah]              
46a9  sub     sp,8h                           
46ac  mov     bx,sp                           
46ae  wait                                    
46af  fstp    qword ptr ss:[bx]               
46b2  wait                                    
46b3  fld     dword ptr [bp+6h]               
46b6  sub     sp,8h                           
46b9  mov     bx,sp                           
46bb  wait                                    
46bc  fstp    qword ptr ss:[bx]               
46bf  nop                                     
46c0  wait                                    
46c1  call far TIGASEM.SETLINEAROPLUT         
46c6  mov     ax,1h                           
46c9  jmp     4755h                           
46cc  mov     byte ptr [1328h],0h             
46d1  wait                                    
46d2  fld     dword ptr [bp+6h]               
46d5  call far sub_01f2                       
46da  mov     [1329h],al                      
46dd  mov     byte ptr [132Ah],0FFh           
46e2  wait                                    
46e3  fld     dword ptr [bp+0Ah]              
46e6  wait                                    
46e7  fmul    dword ptr [32Ch]                ; [ds] = 256
46eb  wait                                    
46ec  fadd    dword ptr [328h]                ; [ds] = 0.5
46f0  mov     [bp-2h],ax                      
46f3  call far sub_01f2                       
46f8  add     al,[bp-2h]                      
46fb  mov     [132Bh],al                      
46fe  cmp     word ptr [bp+0Eh],1h            
4702  jne     470Ah                           
4704  push    1h                              
4706  push    0h                              
4708  jmp     4720h                           
470a  cmp     word ptr [bp+0Eh],2h            
470e  jne     4716h                           
4710  push    1h                              
4712  push    1h                              
4714  jmp     4720h                           
4716  cmp     word ptr [bp+0Eh],3h            
471a  jne     472Dh                           
471c  push    1h                              
471e  push    2h                              
4720  push    2h                              
4722  push    ds                              
4723  push    1328h                           
4726  call far TIGASEM.SETOPLUTPOINTS         
472b  jmp     46C6h                           
472d  mov     al,[1328h]                      
4730  sub     ah,ah                           
4732  mov     [9F8h],ax                       
4735  mov     al,[1329h]                      
4738  mov     [9FAh],al                       
473b  mov     al,[132Ah]                      
473e  mov     [9FBh],ax                       
4741  mov     al,[132Bh]                      
4744  mov     [9FDh],al                       
4747  push    2h                              
4749  push    ds                              
474a  push    9F8h                            
474d  call far M700.DEFINE_LUT                
4752  jmp     46C6h                           
4755  pop     ds                              
4756  leave                                   
4757  retf    0Ah                             

; ===== OPLUT_BRI_AND_CONT =====
475a  mov     ax,4689h                        ; segment seg2:0000
475d  push    bp                              
475e  mov     bp,sp                           
4760  push    ds                              
4761  mov     ds,ax                           
4763  push    83h                             
4766  call far M007.M007_GETSTATE             ; DP_GSP
476b  dec     ax                              
476c  jne     4791h                           
476e  push    1h                              
4770  wait                                    
4771  fld     dword ptr [bp+0Ah]              
4774  sub     sp,8h                           
4777  mov     bx,sp                           
4779  wait                                    
477a  fstp    qword ptr ss:[bx]               
477d  wait                                    
477e  fld     dword ptr [bp+6h]               
4781  sub     sp,8h                           
4784  mov     bx,sp                           
4786  wait                                    
4787  fstp    qword ptr ss:[bx]               
478a  nop                                     
478b  wait                                    
478c  call far TIGASEM.SETOPLUTBRICONT        
4791  mov     ax,1h                           
4794  pop     ds                              
4795  leave                                   
4796  retf    0Ah                             
4799  add     [bx+si],al                      

; ===== OPLUT_SAVE =====
479a  mov     ax,475Bh                        ; segment seg2:0000
479d  push    bp                              
479e  mov     bp,sp                           
47a0  push    ds                              
47a1  mov     ds,ax                           
47a3  push    83h                             
47a6  call far M007.M007_GETSTATE             ; DP_GSP
47ab  dec     ax                              
47ac  jne     47B8h                           
47ae  push    1h                              
47b0  push    word ptr [bp+6h]                
47b3  call far TIGASEM.SAVEOPLUT              
47b8  mov     ax,1h                           
47bb  pop     ds                              
47bc  leave                                   
47bd  retf    4h                              

; ===== OPLUT_RESTORE =====
47c0  mov     ax,479Bh                        ; segment seg2:0000
47c3  push    bp                              
47c4  mov     bp,sp                           
47c6  push    ds                              
47c7  mov     ds,ax                           
47c9  push    83h                             
47cc  call far M007.M007_GETSTATE             ; DP_GSP
47d1  dec     ax                              
47d2  jne     47DEh                           
47d4  push    1h                              
47d6  push    word ptr [bp+6h]                
47d9  call far TIGASEM.RESTOREOPLUT           
47de  mov     ax,1h                           
47e1  pop     ds                              
47e2  leave                                   
47e3  retf    4h                              

; ===== DRAW_GREY_WEDGE =====
47e6  mov     ax,47C1h                        ; segment seg2:0000
47e9  push    bp                              
47ea  mov     bp,sp                           
47ec  push    ds                              
47ed  mov     ds,ax                           
47ef  push    76h                             
47f1  push    2h                              
47f3  call far M007.M007_PUTSTATE             ; DP_FREEZE_ON = 2
47f8  call far M700.DOCOMMANDFREEZE_ALL       
47fd  push    83h                             
4800  call far M007.M007_GETSTATE             ; DP_GSP
4805  dec     ax                              
4806  jne     480Fh                           
4808  push    1h                              
480a  call far TIGASEM.LOADGREYWEDGE          
480f  mov     ax,1h                           
4812  pop     ds                              
4813  leave                                   
4814  retf    2h                              
4817  add     [bx+si],al                      

; ===== READ_AN_IMAGE_PIXEL =====
4818  mov     ax,47E7h                        ; segment seg2:0000
481b  push    bp                              
481c  mov     bp,sp                           
481e  push    ds                              
481f  mov     ds,ax                           
4821  push    83h                             
4824  call far M007.M007_GETSTATE             ; DP_GSP
4829  dec     ax                              
482a  jne     483Bh                           
482c  push    1h                              
482e  push    word ptr [bp+8h]                
4831  push    word ptr [bp+6h]                
4834  call far TIGASEM.GETIMAGEPIXEL          
4839  jmp     483Dh                           
483b  xor     ax,ax                           
483d  pop     ds                              
483e  leave                                   
483f  retf    6h                              
