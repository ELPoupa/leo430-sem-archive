
; ----- sub_0000 -----
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
0060  mov     [81Eh],di                       
0064  mov     [820h],ds                       
0068  mov     [822h],cx                       
006c  mov     [824h],bx                       
0070  mov     [826h],si                       
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
0094  mov     [844h],ax                       
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [848h],ax                       
00ae  xchg    al,ah                           
00b0  mov     [846h],ax                       
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [84Bh],al                       
00c1  call far sub_010e                       
00c6  call far sub_04d6                       
00cb  inc     byte ptr [828h]                 
00cf  push    word ptr [86Ch]                 
00d3  push    word ptr [86Ah]                 ; [ds] f32 here = 0
00d7  push    word ptr [868h]                 ; [ds] f32 here = 0
00db  push    word ptr [866h]                 ; [ds] f32 here = 0
00df  push    word ptr [864h]                 ; [ds] f32 here = 0
00e3  call far sub_0486                       
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
010e  mov     ax,ds                           
0110  nop                                     
0111  inc     bp                              
0112  push    bp                              
0113  mov     bp,sp                           
0115  push    ds                              
0116  mov     ds,ax                           
0118  mov     cx,[0B04h]                      
011c  jcxz    132h                            
011e  xor     si,si                           
0120  mov     ax,[0B06h]                      
0123  mov     dx,[0B08h]                      
0127  xor     bx,bx                           
0129  call    far ptr  [0B02h]                
012d  jae     132h                            
012f  jmp     798h                            
0132  mov     si,0B0Eh                        
0135  mov     di,0B0Eh                        
0138  call    1DEh                            
013b  mov     si,0B0Eh                        
013e  mov     di,0B12h                        
0141  call    1DEh                            
0144  mov     si,0B12h                        
0147  mov     di,0B12h                        
014a  call    1DEh                            
014d  sub     bp,2h                           
0150  mov     sp,bp                           
0152  pop     ds                              
0153  pop     bp                              
0154  dec     bp                              
0155  retf                                    
0156  mov     ax,ds                           
0158  nop                                     
0159  inc     bp                              
015a  push    bp                              
015b  mov     bp,sp                           
015d  push    ds                              
015e  mov     ds,ax                           
0160  push    si                              
0161  push    di                              
0162  mov     cx,100h                         
0165  jmp     176h                            
0167  mov     ax,ds                           
0169  nop                                     
016a  inc     bp                              
016b  push    bp                              
016c  mov     bp,sp                           
016e  push    ds                              
016f  mov     ds,ax                           
0171  push    si                              
0172  push    di                              
0173  mov     cx,101h                         
0176  mov     [875h],ch                       
017a  push    cx                              
017b  or      cl,cl                           
017d  jne     191h                            
017f  mov     si,1248h                        
0182  mov     di,1248h                        
0185  call    1DEh                            
0188  mov     si,0B12h                        
018b  mov     di,0B12h                        
018e  call    1DEh                            
0191  mov     si,0B12h                        
0194  mov     di,0B12h                        
0197  call    1DEh                            
019a  mov     si,0B12h                        
019d  mov     di,0B12h                        
01a0  call    1DEh                            
01a3  call    20C6h                           
01a6  call    80Ch                            
01a9  pop     ax                              
01aa  pop     di                              
01ab  pop     si                              
01ac  sub     bp,2h                           
01af  mov     sp,bp                           
01b1  pop     ds                              
01b2  pop     bp                              
01b3  dec     bp                              
01b4  retf                                    
01b5  mov     cx,[0B04h]                      
01b9  jcxz    1C2h                            
01bb  mov     bx,2h                           
01be  call    far ptr  [0B02h]                
01c2  push    ds                              
01c3  lds     dx,[832h]                       
01c7  mov     ax,2500h                        
01ca  test    word ptr cs:[10h],1h            
01d1  je      1DAh                            
01d3  call far KERNEL.DOS3CALL                
01d8  jmp     1DCh                            
01da  int     21h                             
01dc  pop     ds                              
01dd  ret                                     

; ----- sub_01de -----
01de  cmp     si,di                           
01e0  jae     1F0h                            
01e2  sub     di,4h                           
01e5  mov     ax,[di]                         
01e7  or      ax,[di+2h]                      
01ea  je      1DEh                            
01ec  call    far ptr  [di]                   
01ee  jmp     1DEh                            
01f0  ret                                     
01f1  add     [di+55h],al                     
01f4  mov     bp,sp                           
01f6  push    ds                              
01f7  sub     sp,4h                           
01fa  push    word ptr [bp+8h]                
01fd  push    word ptr [bp+6h]                
0200  call far sub_066c                       
0205  add     sp,4h                           
0208  mov     [bp-4h],dx                      
020b  or      dx,ax                           
020d  je      21Eh                            
020f  push    word ptr [bp-4h]                
0212  push    ax                              
0213  call far sub_083c                       
0218  add     sp,4h                           
021b  jmp     221h                            
021d  nop                                     
021e  xor     ax,ax                           
0220  cwd                                     
0221  lea     sp,[bp-2h]                      
0224  pop     ds                              
0225  pop     bp                              
0226  dec     bp                              
0227  retf                                    
0228  mov     ax,ds                           
022a  nop                                     
022b  inc     bp                              
022c  push    bp                              
022d  mov     bp,sp                           
022f  push    ds                              
0230  mov     ds,ax                           
0232  push    si                              
0233  mov     ah,2Ah                          
0235  test    word ptr cs:[10h],1h            
023c  je      245h                            
023e  call far KERNEL.DOS3CALL                
0243  jmp     247h                            
0245  int     21h                             
0247  mov     bx,dx                           
0249  mov     si,cx                           
024b  mov     ah,2Ch                          
024d  test    word ptr cs:[10h],1h            
0254  je      25Dh                            
0256  call far KERNEL.DOS3CALL                
025b  jmp     25Fh                            
025d  int     21h                             
025f  mov     ah,0h                           
0261  mov     al,dh                           
0263  push    ax                              
0264  mov     al,cl                           
0266  push    ax                              
0267  mov     al,ch                           
0269  push    ax                              
026a  push    ax                              
026b  mov     ah,2Ah                          
026d  test    word ptr cs:[10h],1h            
0274  je      27Dh                            
0276  call far KERNEL.DOS3CALL                
027b  jmp     27Fh                            
027d  int     21h                             
027f  cmp     bx,dx                           
0281  pop     ax                              
0282  je      28Ch                            
0284  cmp     al,17h                          
0286  jne     28Ch                            
0288  mov     dx,bx                           
028a  mov     cx,si                           
028c  mov     ah,0h                           
028e  mov     al,dl                           
0290  push    ax                              
0291  mov     al,dh                           
0293  push    ax                              
0294  sub     cx,7BCh                         
0298  push    cx                              
0299  call far sub_056e                       
029e  add     sp,0Ch                          
02a1  cmp     word ptr [bp+8h],0h             
02a5  je      2B1h                            
02a7  les     bx,[bp+6h]                      
02aa  mov     es:[bx+2h],dx                   
02ae  mov     es:[bx],ax                      
02b1  pop     si                              
02b2  sub     bp,2h                           
02b5  mov     sp,bp                           
02b7  pop     ds                              
02b8  pop     bp                              
02b9  dec     bp                              
02ba  retf                                    
02bb  add     [si-6F28h],cl                   
02bf  inc     bp                              
02c0  push    bp                              
02c1  mov     bp,sp                           
02c3  push    ds                              
02c4  mov     ds,ax                           
02c6  mov     dl,[bp+6h]                      
02c9  mov     ah,36h                          
02cb  test    word ptr cs:[10h],1h            
02d2  je      2DBh                            
02d4  call far KERNEL.DOS3CALL                
02d9  jmp     2DDh                            
02db  int     21h                             
02dd  cmp     ax,-1h                          
02e0  jne     2EAh                            
02e2  mov     word ptr [840h],16h             
02e8  jmp     2FEh                            
02ea  push    si                              
02eb  push    ds                              
02ec  lds     si,[bp+8h]                      
02ef  mov     [si+4h],ax                      
02f2  mov     [si+2h],bx                      
02f5  mov     [si+6h],cx                      
02f8  mov     [si],dx                         
02fa  pop     ds                              
02fb  pop     si                              
02fc  xor     ax,ax                           
02fe  sub     bp,2h                           
0301  mov     sp,bp                           
0303  pop     ds                              
0304  pop     bp                              
0305  dec     bp                              
0306  retf                                    
0307  add     [bx+si],al                      

; ----- sub_0308 -----
0308  push    bp                              
0309  mov     bp,sp                           
030b  push    di                              
030c  push    si                              
030d  push    bx                              
030e  xor     di,di                           
0310  mov     ax,[bp+8h]                      
0313  or      ax,ax                           
0315  jge     328h                            
0317  inc     di                              
0318  mov     dx,[bp+6h]                      
031b  neg     ax                              
031d  neg     dx                              
031f  sbb     ax,0h                           
0322  mov     [bp+8h],ax                      
0325  mov     [bp+6h],dx                      
0328  mov     ax,[bp+0Ch]                     
032b  or      ax,ax                           
032d  jge     340h                            
032f  inc     di                              
0330  mov     dx,[bp+0Ah]                     
0333  neg     ax                              
0335  neg     dx                              
0337  sbb     ax,0h                           
033a  mov     [bp+0Ch],ax                     
033d  mov     [bp+0Ah],dx                     
0340  or      ax,ax                           
0342  jne     359h                            
0344  mov     cx,[bp+0Ah]                     
0347  mov     ax,[bp+8h]                      
034a  xor     dx,dx                           
034c  div     cx                              
034e  mov     bx,ax                           
0350  mov     ax,[bp+6h]                      
0353  div     cx                              
0355  mov     dx,bx                           
0357  jmp     391h                            
0359  mov     bx,ax                           
035b  mov     cx,[bp+0Ah]                     
035e  mov     dx,[bp+8h]                      
0361  mov     ax,[bp+6h]                      
0364  shr     bx,1                            
0366  rcr     cx,1                            
0368  shr     dx,1                            
036a  rcr     ax,1                            
036c  or      bx,bx                           
036e  jne     364h                            
0370  div     cx                              
0372  mov     si,ax                           
0374  mul     word ptr [bp+0Ch]               
0377  xchg    ax,cx                           
0378  mov     ax,[bp+0Ah]                     
037b  mul     si                              
037d  add     dx,cx                           
037f  jb      38Dh                            
0381  cmp     dx,[bp+8h]                      
0384  ja      38Dh                            
0386  jb      38Eh                            
0388  cmp     ax,[bp+6h]                      
038b  jbe     38Eh                            
038d  dec     si                              
038e  xor     dx,dx                           
0390  xchg    ax,si                           
0391  dec     di                              
0392  jne     39Bh                            
0394  neg     dx                              
0396  neg     ax                              
0398  sbb     dx,0h                           
039b  pop     bx                              
039c  pop     si                              
039d  pop     di                              
039e  pop     bp                              
039f  retf    8h                              

; ----- sub_03a2 -----
03a2  push    bp                              
03a3  mov     bp,sp                           
03a5  mov     ax,[bp+8h]                      
03a8  mov     cx,[bp+0Ch]                     
03ab  or      cx,ax                           
03ad  mov     cx,[bp+0Ah]                     
03b0  jne     3BBh                            
03b2  mov     ax,[bp+6h]                      
03b5  mul     cx                              
03b7  pop     bp                              
03b8  retf    8h                              
03bb  push    bx                              
03bc  mul     cx                              
03be  mov     bx,ax                           
03c0  mov     ax,[bp+6h]                      
03c3  mul     word ptr [bp+0Ch]               
03c6  add     bx,ax                           
03c8  mov     ax,[bp+6h]                      
03cb  mul     cx                              
03cd  add     dx,bx                           
03cf  pop     bx                              
03d0  pop     bp                              
03d1  retf    8h                              
03d4  push    bp                              
03d5  mov     bp,sp                           
03d7  push    bx                              
03d8  push    si                              
03d9  mov     ax,[bp+0Ch]                     
03dc  or      ax,ax                           
03de  jne     3F5h                            
03e0  mov     cx,[bp+0Ah]                     
03e3  mov     ax,[bp+8h]                      
03e6  xor     dx,dx                           
03e8  div     cx                              
03ea  mov     bx,ax                           
03ec  mov     ax,[bp+6h]                      
03ef  div     cx                              
03f1  mov     dx,bx                           
03f3  jmp     42Dh                            
03f5  mov     cx,ax                           
03f7  mov     bx,[bp+0Ah]                     
03fa  mov     dx,[bp+8h]                      
03fd  mov     ax,[bp+6h]                      
0400  shr     cx,1                            
0402  rcr     bx,1                            
0404  shr     dx,1                            
0406  rcr     ax,1                            
0408  or      cx,cx                           
040a  jne     400h                            
040c  div     bx                              
040e  mov     si,ax                           
0410  mul     word ptr [bp+0Ch]               
0413  xchg    ax,cx                           
0414  mov     ax,[bp+0Ah]                     
0417  mul     si                              
0419  add     dx,cx                           
041b  jb      429h                            
041d  cmp     dx,[bp+8h]                      
0420  ja      429h                            
0422  jb      42Ah                            
0424  cmp     ax,[bp+6h]                      
0427  jbe     42Ah                            
0429  dec     si                              
042a  xor     dx,dx                           
042c  xchg    ax,si                           
042d  pop     si                              
042e  pop     bx                              
042f  pop     bp                              
0430  retf    8h                              
0433  add     [si-6F28h],cl                   
0437  inc     bp                              
0438  push    bp                              
0439  mov     bp,sp                           
043b  push    ds                              
043c  mov     ds,ax                           
043e  sub     sp,0Ch                          
0441  push    bx                              
0442  push    cx                              
0443  push    si                              
0444  push    di                              
0445  wait                                    
0446  fstcw   word ptr [bp-4h]                
0449  nop                                     
044a  wait                                    
044b  mov     ax,[bp-4h]                      
044e  or      ah,0Ch                          
0451  mov     [bp-6h],ax                      
0454  wait                                    
0455  fldcw   word ptr [bp-6h]                
0458  wait                                    
0459  fistp   qword ptr [bp-0Eh]              
045c  wait                                    
045d  fldcw   word ptr [bp-4h]                
0460  mov     ax,[bp-0Eh]                     
0463  mov     dx,[bp-0Ch]                     
0466  pop     di                              
0467  pop     si                              
0468  pop     cx                              
0469  pop     bx                              
046a  lea     sp,[bp-2h]                      
046d  pop     ds                              
046e  pop     bp                              
046f  dec     bp                              
0470  retf                                    
0471  add     [bp+57h],dl                     
0474  mov     ax,ds                           
0476  mov     es,ax                           
0478  mov     si,876h                         
047b  mov     di,8A2h                         
047e  mov     cx,0Ah                          
0481  rep     movsw                           
0483  pop     di                              
0484  pop     si                              
0485  retf                                    

; ----- sub_0486 -----
0486  mov     ax,ds                           
0488  nop                                     
0489  inc     bp                              
048a  push    bp                              
048b  mov     bp,sp                           
048d  push    ds                              
048e  mov     ds,ax                           
0490  push    word ptr [81Eh]                 ; [ds] f32 here = 0
0494  push    word ptr [820h]                 ; [ds] f32 here = 0
0498  push    word ptr [822h]                 ; [ds] f32 here = 0
049c  push    word ptr [826h]                 
04a0  push    word ptr [824h]                 ; [ds] f32 here = 0
04a4  call far sub_0000                       
04a9  sub     bp,2h                           
04ac  mov     sp,bp                           
04ae  pop     ds                              
04af  pop     bp                              
04b0  dec     bp                              
04b1  retf                                    

; ----- sub_04b2 -----
04b2  mov     ax,ds                           
04b4  nop                                     
04b5  inc     bp                              
04b6  push    bp                              
04b7  mov     bp,sp                           
04b9  push    ds                              
04ba  mov     ds,ax                           
04bc  mov     ax,0FCh                         
04bf  push    ax                              
04c0  push    cs                              
04c1  call    0FE1h                           
04c4  mov     ax,0FFh                         
04c7  push    ax                              
04c8  push    cs                              
04c9  call    0FE1h                           
04cc  sub     bp,2h                           
04cf  mov     sp,bp                           
04d1  pop     ds                              
04d2  pop     bp                              
04d3  dec     bp                              
04d4  retf                                    
04d5  add     [bx+si],al                      

; ----- sub_04d6 -----
04d6  mov     ax,ds                           
04d8  nop                                     
04d9  inc     bp                              
04da  push    bp                              
04db  mov     bp,sp                           
04dd  push    ds                              
04de  mov     ds,ax                           
04e0  sub     sp,6h                           
04e3  push    ds                              
04e4  call far KERNEL.GETDOSENVIRONMENT       
04e9  or      ax,ax                           
04eb  je      4F0h                            
04ed  mov     dx,0h                           
04f0  mov     bx,dx                           
04f2  mov     es,dx                           
04f4  mov     [bp-4h],es                      
04f7  mov     [bp-8h],ds                      
04fa  xor     ax,ax                           
04fc  xor     si,si                           
04fe  xor     di,di                           
0500  mov     cx,0FFFFh                       
0503  or      bx,bx                           
0505  je      515h                            
0507  cmp     byte ptr es:[0h],0h             
050d  je      515h                            
050f  repne   scasb                           
0511  inc     si                              
0512  scasb                                   
0513  jne     50Fh                            
0515  mov     ax,di                           
0517  inc     ax                              
0518  and     al,0FEh                         
051a  inc     si                              
051b  mov     di,si                           
051d  shl     si,1                            
051f  shl     si,1                            
0521  mov     cx,9h                           
0524  call    12FCh                           
0527  push    dx                              
0528  push    ax                              
0529  mov     ax,si                           
052b  call    12FCh                           
052e  mov     [86Ah],ax                       
0531  mov     [86Ch],dx                       
0535  mov     [bp-6h],dx                      
0538  push    es                              
0539  pop     ds                              
053a  mov     cx,di                           
053c  mov     bx,ax                           
053e  xor     si,si                           
0540  pop     di                              
0541  pop     es                              
0542  dec     cx                              
0543  jcxz    55Bh                            
0545  mov     ds,[bp-6h]                      
0548  mov     [bx],di                         
054a  mov     [bx+2h],es                      
054d  add     bx,4h                           
0550  mov     ds,[bp-4h]                      
0553  lodsb                                   
0554  stosb                                   
0555  or      al,al                           
0557  jne     553h                            
0559  loop    545h                            
055b  mov     ds,[bp-6h]                      
055e  mov     [bx],cx                         
0560  mov     [bx+2h],cx                      
0563  pop     ds                              
0564  sub     bp,2h                           
0567  mov     sp,bp                           
0569  pop     ds                              
056a  pop     bp                              
056b  dec     bp                              
056c  retf                                    
056d  add     [bx+si],al                      

; ----- sub_056e -----
056e  inc     bp                              
056f  push    bp                              
0570  mov     bp,sp                           
0572  push    ds                              
0573  sub     sp,1Ah                          
0576  push    di                              
0577  push    si                              
0578  mov     si,[bp+6h]                      
057b  mov     bx,[bp+8h]                      
057e  add     bx,bx                           
0580  mov     di,[bx+0A2Eh]                   
0584  test    si,3h                           
0588  jne     591h                            
058a  cmp     word ptr [bp+8h],2h             
058e  jle     591h                            
0590  inc     di                              
0591  call far sub_1044                       
0596  mov     ax,3Ch                          
0599  cwd                                     
059a  push    dx                              
059b  push    ax                              
059c  push    dx                              
059d  push    ax                              
059e  mov     ax,18h                          
05a1  cwd                                     
05a2  push    dx                              
05a3  push    ax                              
05a4  mov     ax,si                           
05a6  mov     cx,16Dh                         
05a9  imul    cx                              
05ab  mov     cx,ax                           
05ad  mov     ax,[bp+0Ah]                     
05b0  mov     bx,dx                           
05b2  cwd                                     
05b3  mov     [bp-1Ch],ax                     
05b6  mov     [bp-1Ah],dx                     
05b9  lea     ax,[si+3h]                      
05bc  sar     ax,1                            
05be  sar     ax,1                            
05c0  cwd                                     
05c1  add     ax,[bp-1Ch]                     
05c4  adc     dx,[bp-1Ah]                     
05c7  add     cx,ax                           
05c9  adc     bx,dx                           
05cb  mov     ax,di                           
05cd  cwd                                     
05ce  add     cx,di                           
05d0  adc     bx,dx                           
05d2  add     cx,0E44h                        
05d6  adc     bx,0h                           
05d9  push    bx                              
05da  push    cx                              
05db  call far sub_03a2                       
05e0  mov     cx,ax                           
05e2  mov     ax,[bp+0Ch]                     
05e5  mov     bx,dx                           
05e7  cwd                                     
05e8  add     cx,ax                           
05ea  adc     bx,dx                           
05ec  push    bx                              
05ed  push    cx                              
05ee  call far sub_03a2                       
05f3  mov     cx,ax                           
05f5  mov     ax,[bp+0Eh]                     
05f8  mov     bx,dx                           
05fa  cwd                                     
05fb  add     cx,ax                           
05fd  adc     bx,dx                           
05ff  push    bx                              
0600  push    cx                              
0601  call far sub_03a2                       
0606  mov     cx,ax                           
0608  mov     ax,[bp+10h]                     
060b  mov     bx,dx                           
060d  cwd                                     
060e  add     cx,ax                           
0610  adc     bx,dx                           
0612  add     cx,[0A5Ch]                      
0616  adc     bx,[0A5Eh]                      
061a  mov     [bp-18h],cx                     
061d  mov     [bp-16h],bx                     
0620  mov     ax,[bp+0Ah]                     
0623  add     ax,di                           
0625  mov     [bp-6h],ax                      
0628  lea     ax,[si+50h]                     
062b  mov     [bp-0Ah],ax                     
062e  mov     ax,[bp+8h]                      
0631  dec     ax                              
0632  mov     [bp-0Ch],ax                     
0635  mov     ax,[bp+0Ch]                     
0638  mov     [bp-10h],ax                     
063b  cmp     word ptr [0A60h],0h             
0640  je      65Ch                            
0642  lea     ax,[bp-14h]                     
0645  push    ss                              
0646  push    ax                              
0647  call far sub_1228                       
064c  add     sp,4h                           
064f  or      ax,ax                           
0651  je      65Ch                            
0653  sub     word ptr [bp-18h],0E10h         
0658  sbb     word ptr [bp-16h],0h            
065c  mov     ax,[bp-18h]                     
065f  mov     dx,[bp-16h]                     
0662  pop     si                              
0663  pop     di                              
0664  lea     sp,[bp-2h]                      
0667  pop     ds                              
0668  pop     bp                              
0669  dec     bp                              
066a  retf                                    
066b  nop                                     

; ----- sub_066c -----
066c  inc     bp                              
066d  push    bp                              
066e  mov     bp,sp                           
0670  push    ds                              
0671  sub     sp,8h                           
0674  les     bx,[bp+6h]                      
0677  cmp     word ptr es:[bx+2h],0h          
067c  jge     684h                            
067e  xor     ax,ax                           
0680  cwd                                     
0681  jmp     790h                            
0684  call far sub_1044                       
0689  les     bx,[bp+6h]                      
068c  mov     ax,es:[bx]                      
068f  mov     dx,es:[bx+2h]                   
0693  sub     ax,[0A5Ch]                      
0697  sbb     dx,[0A5Eh]                      
069b  mov     [bp-6h],ax                      
069e  mov     [bp-4h],dx                      
06a1  or      dx,dx                           
06a3  jl      702h                            
06a5  lea     cx,[bp-6h]                      
06a8  push    ss                              
06a9  push    cx                              
06aa  call far sub_144a                       
06af  add     sp,4h                           
06b2  mov     [bp-0Ah],ax                     
06b5  mov     [bp-8h],dx                      
06b8  cmp     word ptr [0A60h],0h             
06bd  jne     6C2h                            
06bf  jmp     78Ah                            
06c2  push    dx                              
06c3  push    ax                              
06c4  call far sub_1228                       
06c9  add     sp,4h                           
06cc  or      ax,ax                           
06ce  jne     6D3h                            
06d0  jmp     78Ah                            
06d3  add     word ptr [bp-6h],0E10h          
06d8  adc     word ptr [bp-4h],0h             
06dc  cmp     word ptr [bp-4h],0h             
06e0  jl      67Eh                            
06e2  lea     ax,[bp-6h]                      
06e5  push    ss                              
06e6  push    ax                              
06e7  call far sub_144a                       
06ec  add     sp,4h                           
06ef  mov     es,dx                           
06f1  mov     bx,ax                           
06f3  mov     [bp-0Ah],ax                     
06f6  mov     [bp-8h],es                      
06f9  mov     word ptr es:[bx+10h],1h         
06ff  jmp     78Ah                            
0702  add     ax,5180h                        
0705  adc     dx,1h                           
0708  or      dx,dx                           
070a  jl      74Ah                            
070c  mov     [bp-6h],ax                      
070f  mov     [bp-4h],dx                      
0712  lea     ax,[bp-6h]                      
0715  push    ss                              
0716  push    ax                              
0717  call far sub_144a                       
071c  add     sp,4h                           
071f  mov     es,dx                           
0721  mov     bx,ax                           
0723  mov     [bp-0Ah],ax                     
0726  mov     [bp-8h],es                      
0729  mov     word ptr es:[bx+0Ah],45h        
072f  mov     word ptr es:[bx+8h],0Bh         
0735  mov     word ptr es:[bx+6h],1Fh         
073b  mov     word ptr es:[bx+0Ch],3h         
0741  mov     word ptr es:[bx+0Eh],16Ch       
0747  jmp     78Ah                            
0749  nop                                     
074a  mov     ax,[bp-6h]                      
074d  mov     dx,[bp-4h]                      
0750  sub     ax,5180h                        
0753  sbb     dx,1h                           
0756  or      dx,dx                           
0758  jl      78Ah                            
075a  mov     [bp-6h],ax                      
075d  mov     [bp-4h],dx                      
0760  lea     ax,[bp-6h]                      
0763  push    ss                              
0764  push    ax                              
0765  call far sub_144a                       
076a  mov     es,dx                           
076c  mov     bx,ax                           
076e  mov     [bp-0Ah],ax                     
0771  mov     [bp-8h],es                      
0774  inc     word ptr es:[bx+6h]             
0778  mov     ax,es:[bx+0Ch]                  
077c  inc     ax                              
077d  mov     es:[bx+0Ch],ax                  
0781  mov     ax,es:[bx+0Eh]                  
0785  inc     ax                              
0786  mov     es:[bx+0Eh],ax                  
078a  mov     ax,[bp-0Ah]                     
078d  mov     dx,[bp-8h]                      
0790  lea     sp,[bp-2h]                      
0793  pop     ds                              
0794  pop     bp                              
0795  dec     bp                              
0796  retf                                    
0797  nop                                     
0798  mov     ax,2h                           
079b  jmp     1002h                           
079e  jb      7BFh                            
07a0  xor     ax,ax                           
07a2  sub     bp,2h                           
07a5  mov     sp,bp                           
07a7  pop     ds                              
07a8  pop     bp                              
07a9  dec     bp                              
07aa  retf                                    
07ab  jae     7A0h                            
07ad  push    ax                              
07ae  call    7D5h                            
07b1  pop     ax                              
07b2  xor     ah,ah                           
07b4  sub     bp,2h                           
07b7  mov     sp,bp                           
07b9  pop     ds                              
07ba  pop     bp                              
07bb  dec     bp                              
07bc  retf                                    
07bd  jae     7C6h                            
07bf  call    7D5h                            
07c2  mov     ax,0FFFFh                       
07c5  cwd                                     
07c6  sub     bp,2h                           
07c9  mov     sp,bp                           
07cb  pop     ds                              
07cc  pop     bp                              
07cd  dec     bp                              
07ce  retf                                    
07cf  xor     ah,ah                           
07d1  call    7D5h                            
07d4  retf                                    

; ----- sub_07d5 -----
07d5  mov     [84Ch],al                       
07d8  or      ah,ah                           
07da  jne     7F7h                            
07dc  cmp     al,22h                          
07de  jae     7ECh                            
07e0  cmp     al,20h                          
07e2  jb      7E8h                            
07e4  mov     al,5h                           
07e6  jmp     7EEh                            
07e8  cmp     al,13h                          
07ea  jbe     7EEh                            
07ec  mov     al,13h                          
07ee  mov     bx,88Eh                         
07f1  xlat                                    
07f2  cbw                                     
07f3  mov     [840h],ax                       
07f6  ret                                     
07f7  mov     al,ah                           
07f9  jmp     7F2h                            
07fb  add     [bx+si],al                      

; ----- sub_07fc -----
07fc  cmp     byte ptr cs:[132Ah],0B8h        
0802  je      807h                            
0804  mov     ax,ss                           
0806  retf                                    
0807  mov     ax,cs:[132Bh]                   
080b  retf                                    

; ----- sub_080c -----
080c  ret                                     
080d  add     [bx+si],al                      

; ----- sub_080e -----
080e  push    bp                              
080f  mov     bp,sp                           
0811  push    di                              
0812  push    si                              
0813  mov     si,[bp+6h]                      
0816  mov     di,[bp+4h]                      
0819  mov     ax,di                           
081b  mov     cx,0Ah                          
081e  cwd                                     
081f  idiv    cx                              
0821  add     al,30h                          
0823  mov     [si],al                         
0825  inc     si                              
0826  mov     ax,di                           
0828  cwd                                     
0829  idiv    cx                              
082b  add     dl,30h                          
082e  mov     [si],dl                         
0830  inc     si                              
0831  mov     ax,si                           
0833  pop     si                              
0834  pop     di                              
0835  mov     sp,bp                           
0837  pop     bp                              
0838  ret     4h                              
083b  nop                                     

; ----- sub_083c -----
083c  inc     bp                              
083d  push    bp                              
083e  mov     bp,sp                           
0840  push    ds                              
0841  sub     sp,6h                           
0844  push    di                              
0845  push    si                              
0846  mov     si,1208h                        
0849  les     bx,[bp+6h]                      
084c  mov     ax,es:[bx+0Ch]                  
0850  mov     cx,ax                           
0852  add     ax,ax                           
0854  add     ax,cx                           
0856  mov     [bp-4h],ax                      
0859  mov     ax,es:[bx+8h]                   
085d  mov     cx,ax                           
085f  add     ax,ax                           
0861  add     ax,cx                           
0863  mov     [bp-6h],ax                      
0866  mov     word ptr [bp-8h],0h             
086b  mov     bx,[bp-4h]                      
086e  mov     di,[bp-8h]                      
0871  mov     al,[bx+di+8C4h]                 
0875  mov     [si],al                         
0877  mov     bx,[bp-6h]                      
087a  mov     al,[bx+di+8DAh]                 
087e  mov     [si+4h],al                      
0881  inc     word ptr [bp-8h]                
0884  inc     si                              
0885  cmp     word ptr [bp-8h],3h             
0889  jl      86Bh                            
088b  mov     byte ptr [si],20h               
088e  add     si,4h                           
0891  mov     byte ptr [si],20h               
0894  inc     si                              
0895  push    si                              
0896  les     bx,[bp+6h]                      
0899  push    word ptr es:[bx+6h]             
089d  call    80Eh                            
08a0  mov     si,ax                           
08a2  mov     byte ptr [si],20h               
08a5  inc     si                              
08a6  push    si                              
08a7  les     bx,[bp+6h]                      
08aa  push    word ptr es:[bx+4h]             
08ae  call    80Eh                            
08b1  mov     si,ax                           
08b3  mov     byte ptr [si],3Ah               
08b6  inc     si                              
08b7  push    si                              
08b8  les     bx,[bp+6h]                      
08bb  push    word ptr es:[bx+2h]             
08bf  call    80Eh                            
08c2  mov     si,ax                           
08c4  mov     byte ptr [si],3Ah               
08c7  inc     si                              
08c8  push    si                              
08c9  les     bx,[bp+6h]                      
08cc  push    word ptr es:[bx]                
08cf  call    80Eh                            
08d2  mov     si,ax                           
08d4  mov     byte ptr [si],20h               
08d7  inc     si                              
08d8  push    si                              
08d9  les     bx,[bp+6h]                      
08dc  mov     ax,es:[bx+0Ah]                  
08e0  add     ax,76Ch                         
08e3  mov     cx,64h                          
08e6  mov     bx,ax                           
08e8  cwd                                     
08e9  idiv    cx                              
08eb  push    ax                              
08ec  mov     di,bx                           
08ee  call    80Eh                            
08f1  push    ax                              
08f2  mov     cx,64h                          
08f5  mov     ax,di                           
08f7  cwd                                     
08f8  idiv    cx                              
08fa  push    dx                              
08fb  call    80Eh                            
08fe  mov     si,ax                           
0900  mov     byte ptr [si],0Ah               
0903  inc     si                              
0904  mov     byte ptr [si],0h                
0907  mov     ax,1208h                        
090a  mov     dx,ds                           
090c  pop     si                              
090d  pop     di                              
090e  lea     sp,[bp-2h]                      
0911  pop     ds                              
0912  pop     bp                              
0913  dec     bp                              
0914  retf                                    
0915  nop                                     
0916  mov     ax,ds                           
0918  nop                                     
0919  inc     bp                              
091a  push    bp                              
091b  mov     bp,sp                           
091d  push    ds                              
091e  mov     ds,ax                           
0920  sub     sp,0Ah                          
0923  les     bx,[bp+6h]                      
0926  mov     al,es:[bx]                      
0929  cbw                                     
092a  mov     bx,ax                           
092c  test    byte ptr [bx+915h],1h           
0931  je      938h                            
0933  lea     ax,[bx+20h]                     
0936  jmp     93Fh                            
0938  mov     bx,[bp+6h]                      
093b  mov     al,es:[bx]                      
093e  cbw                                     
093f  cmp     ax,65h                          
0942  je      957h                            
0944  inc     word ptr [bp+6h]                
0947  mov     bx,[bp+6h]                      
094a  mov     al,es:[bx]                      
094d  cbw                                     
094e  mov     bx,ax                           
0950  test    byte ptr [bx+915h],4h           
0955  jne     944h                            
0957  mov     bx,[bp+6h]                      
095a  mov     al,es:[bx]                      
095d  mov     [bp-4h],al                      
0960  mov     byte ptr es:[bx],2Eh            
0964  inc     word ptr [bp+6h]                
0967  mov     bx,[bp+6h]                      
096a  mov     al,es:[bx]                      
096d  mov     [bp-6h],al                      
0970  mov     al,[bp-4h]                      
0973  mov     es:[bx],al                      
0976  mov     al,[bp-6h]                      
0979  mov     [bp-4h],al                      
097c  inc     word ptr [bp+6h]                
097f  cmp     byte ptr es:[bx],0h             
0983  jne     967h                            
0985  lea     sp,[bp-2h]                      
0988  pop     ds                              
0989  pop     bp                              
098a  dec     bp                              
098b  retf                                    
098c  mov     ax,ds                           
098e  nop                                     
098f  inc     bp                              
0990  push    bp                              
0991  mov     bp,sp                           
0993  push    ds                              
0994  mov     ds,ax                           
0996  sub     sp,8h                           
0999  jmp     9A5h                            
099b  nop                                     
099c  cmp     byte ptr es:[bx],2Eh            
09a0  je      9AEh                            
09a2  inc     word ptr [bp+6h]                
09a5  les     bx,[bp+6h]                      
09a8  cmp     byte ptr es:[bx],0h             
09ac  jne     99Ch                            
09ae  inc     word ptr [bp+6h]                
09b1  cmp     byte ptr es:[bx],0h             
09b5  je      0A09h                           
09b7  jmp     9C9h                            
09b9  nop                                     
09ba  cmp     byte ptr es:[bx],65h            
09be  je      9D2h                            
09c0  cmp     byte ptr es:[bx],45h            
09c4  je      9D2h                            
09c6  inc     word ptr [bp+6h]                
09c9  mov     bx,[bp+6h]                      
09cc  cmp     byte ptr es:[bx],0h             
09d0  jne     9BAh                            
09d2  dec     word ptr [bp+6h]                
09d5  mov     [bp-6h],bx                      
09d8  mov     [bp-4h],es                      
09db  jmp     9E1h                            
09dd  nop                                     
09de  dec     word ptr [bp+6h]                
09e1  mov     bx,[bp+6h]                      
09e4  cmp     byte ptr es:[bx],30h            
09e8  je      9DEh                            
09ea  cmp     byte ptr es:[bx],2Eh            
09ee  jne     9F3h                            
09f0  dec     word ptr [bp+6h]                
09f3  les     bx,[bp-6h]                      
09f6  inc     word ptr [bp-6h]                
09f9  mov     al,es:[bx]                      
09fc  inc     word ptr [bp+6h]                
09ff  les     bx,[bp+6h]                      
0a02  mov     es:[bx],al                      
0a05  or      al,al                           
0a07  jne     9F3h                            
0a09  lea     sp,[bp-2h]                      
0a0c  pop     ds                              
0a0d  pop     bp                              
0a0e  dec     bp                              
0a0f  retf                                    
0a10  mov     ax,ds                           
0a12  nop                                     
0a13  inc     bp                              
0a14  push    bp                              
0a15  mov     bp,sp                           
0a17  push    ds                              
0a18  mov     ds,ax                           
0a1a  sub     sp,2h                           
0a1d  les     bx,[bp+6h]                      
0a20  wait                                    
0a21  fld     qword ptr es:[bx]               
0a24  wait                                    
0a25  fcom    qword ptr [0B52h]               ; [ds] = 0
0a29  wait                                    
0a2a  fstp    st(0)                           
0a2c  wait                                    
0a2d  fstsw   word ptr [bp-4h]                
0a30  nop                                     
0a31  wait                                    
0a32  mov     ah,[bp-3h]                      
0a35  sahf                                    
0a36  jb      0A3Eh                           
0a38  mov     ax,1h                           
0a3b  jmp     0A40h                           
0a3d  nop                                     
0a3e  xor     ax,ax                           
0a40  lea     sp,[bp-2h]                      
0a43  pop     ds                              
0a44  pop     bp                              
0a45  dec     bp                              
0a46  retf                                    
0a47  nop                                     
0a48  mov     ax,ds                           
0a4a  nop                                     
0a4b  inc     bp                              
0a4c  push    bp                              
0a4d  mov     bp,sp                           
0a4f  push    ds                              
0a50  mov     ds,ax                           
0a52  push    di                              
0a53  push    si                              
0a54  cmp     word ptr [bp+6h],0h             
0a58  je      0A78h                           
0a5a  push    word ptr [bp+0Eh]               
0a5d  push    word ptr [bp+0Ch]               
0a60  call far sub_133e                       
0a65  add     sp,4h                           
0a68  push    ds                              
0a69  mov     si,ax                           
0a6b  mov     ds,dx                           
0a6d  les     di,[bp+8h]                      
0a70  movsw                                   
0a71  movsw                                   
0a72  movsw                                   
0a73  movsw                                   
0a74  pop     ds                              
0a75  jmp     0A97h                           
0a77  nop                                     
0a78  push    word ptr [bp+0Eh]               
0a7b  push    word ptr [bp+0Ch]               
0a7e  call far sub_133e                       
0a83  add     sp,4h                           
0a86  mov     es,dx                           
0a88  mov     bx,ax                           
0a8a  wait                                    
0a8b  fld     qword ptr es:[bx]               
0a8e  les     bx,[bp+8h]                      
0a91  wait                                    
0a92  fstp    dword ptr es:[bx]               
0a95  nop                                     
0a96  wait                                    
0a97  pop     si                              
0a98  pop     di                              
0a99  lea     sp,[bp-2h]                      
0a9c  pop     ds                              
0a9d  pop     bp                              
0a9e  dec     bp                              
0a9f  retf                                    

; ----- sub_0aa0 -----
0aa0  mov     ax,ds                           
0aa2  nop                                     
0aa3  inc     bp                              
0aa4  push    bp                              
0aa5  mov     bp,sp                           
0aa7  push    ds                              
0aa8  mov     ds,ax                           
0aaa  sub     sp,0Ah                          
0aad  push    si                              
0aae  cmp     byte ptr [900h],0h              
0ab3  je      0AF6h                           
0ab5  mov     ax,[1222h]                      
0ab8  mov     dx,[1224h]                      
0abc  mov     [bp-6h],ax                      
0abf  mov     [bp-4h],dx                      
0ac2  mov     es,dx                           
0ac4  mov     bx,ax                           
0ac6  cmp     word ptr es:[bx],2Dh            
0aca  jne     0AD2h                           
0acc  mov     ax,1h                           
0acf  jmp     0AD4h                           
0ad1  nop                                     
0ad2  xor     ax,ax                           
0ad4  add     ax,[bp+0Ah]                     
0ad7  mov     dx,[bp+0Ch]                     
0ada  mov     [bp-0Ah],ax                     
0add  mov     [bp-8h],dx                      
0ae0  push    dx                              
0ae1  push    ax                              
0ae2  cmp     word ptr [bp+0Eh],0h            
0ae6  jle     0AEEh                           
0ae8  mov     ax,1h                           
0aeb  jmp     0AF0h                           
0aed  nop                                     
0aee  xor     ax,ax                           
0af0  push    ax                              
0af1  call    0F52h                           
0af4  jmp     0B51h                           
0af6  les     bx,[bp+6h]                      
0af9  push    word ptr es:[bx+6h]             
0afd  push    word ptr es:[bx+4h]             
0b01  push    word ptr es:[bx+2h]             
0b05  push    word ptr es:[bx]                
0b08  call far sub_1758                       
0b0d  add     sp,8h                           
0b10  mov     [bp-6h],ax                      
0b13  mov     [bp-4h],dx                      
0b16  push    dx                              
0b17  push    ax                              
0b18  mov     ax,[bp+0Eh]                     
0b1b  inc     ax                              
0b1c  push    ax                              
0b1d  les     bx,[bp-6h]                      
0b20  cmp     word ptr es:[bx],2Dh            
0b24  jne     0B2Ch                           
0b26  mov     ax,1h                           
0b29  jmp     0B2Eh                           
0b2b  nop                                     
0b2c  xor     ax,ax                           
0b2e  mov     [bp-0Ch],ax                     
0b31  cmp     word ptr [bp+0Eh],0h            
0b35  jle     0B3Ch                           
0b37  mov     ax,1h                           
0b3a  jmp     0B3Eh                           
0b3c  xor     ax,ax                           
0b3e  add     ax,[bp-0Ch]                     
0b41  add     ax,[bp+0Ah]                     
0b44  mov     dx,[bp+0Ch]                     
0b47  push    dx                              
0b48  push    ax                              
0b49  call far sub_139c                       
0b4e  add     sp,0Ah                          
0b51  mov     ax,[bp+0Ah]                     
0b54  mov     dx,[bp+0Ch]                     
0b57  mov     [bp-0Ah],ax                     
0b5a  mov     [bp-8h],dx                      
0b5d  les     bx,[bp-6h]                      
0b60  cmp     word ptr es:[bx],2Dh            
0b64  jne     0B72h                           
0b66  mov     bx,ax                           
0b68  mov     es,dx                           
0b6a  mov     byte ptr es:[bx],2Dh            
0b6e  inc     ax                              
0b6f  mov     [bp-0Ah],ax                     
0b72  cmp     word ptr [bp+0Eh],0h            
0b76  jle     0B8Ah                           
0b78  les     bx,[bp-0Ah]                     
0b7b  mov     al,es:[bx+1h]                   
0b7f  mov     es:[bx],al                      
0b82  inc     bx                              
0b83  mov     [bp-0Ah],bx                     
0b86  mov     byte ptr es:[bx],2Eh            
0b8a  mov     ax,905h                         
0b8d  push    ds                              
0b8e  push    ax                              
0b8f  cmp     byte ptr [900h],1h              
0b94  sbb     ax,ax                           
0b96  neg     ax                              
0b98  add     ax,[bp-0Ah]                     
0b9b  mov     dx,[bp-8h]                      
0b9e  add     ax,[bp+0Eh]                     
0ba1  push    dx                              
0ba2  push    ax                              
0ba3  call far sub_160a                       
0ba8  add     sp,8h                           
0bab  mov     [bp-0Ah],ax                     
0bae  mov     [bp-8h],dx                      
0bb1  cmp     word ptr [bp+10h],0h            
0bb5  je      0BBEh                           
0bb7  les     bx,[bp-0Ah]                     
0bba  mov     byte ptr es:[bx],45h            
0bbe  inc     word ptr [bp-0Ah]               
0bc1  les     bx,[bp-6h]                      
0bc4  les     bx,es:[bx+6h]                   
0bc8  cmp     byte ptr es:[bx],30h            
0bcc  je      0C2Ah                           
0bce  les     bx,[bp-6h]                      
0bd1  mov     si,es:[bx+2h]                   
0bd5  dec     si                              
0bd6  jns     0BE5h                           
0bd8  mov     ax,si                           
0bda  neg     ax                              
0bdc  mov     si,ax                           
0bde  les     bx,[bp-0Ah]                     
0be1  mov     byte ptr es:[bx],2Dh            
0be5  inc     word ptr [bp-0Ah]               
0be8  cmp     si,64h                          
0beb  jl      0C02h                           
0bed  mov     ax,si                           
0bef  mov     cx,64h                          
0bf2  cwd                                     
0bf3  idiv    cx                              
0bf5  les     bx,[bp-0Ah]                     
0bf8  add     es:[bx],al                      
0bfb  mov     ax,si                           
0bfd  cwd                                     
0bfe  idiv    cx                              
0c00  mov     si,dx                           
0c02  inc     word ptr [bp-0Ah]               
0c05  cmp     si,0Ah                          
0c08  jl      0C1Fh                           
0c0a  mov     ax,si                           
0c0c  mov     cx,0Ah                          
0c0f  cwd                                     
0c10  idiv    cx                              
0c12  les     bx,[bp-0Ah]                     
0c15  add     es:[bx],al                      
0c18  mov     ax,si                           
0c1a  cwd                                     
0c1b  idiv    cx                              
0c1d  mov     si,dx                           
0c1f  mov     ax,si                           
0c21  inc     word ptr [bp-0Ah]               
0c24  les     bx,[bp-0Ah]                     
0c27  add     es:[bx],al                      
0c2a  mov     ax,[bp+0Ah]                     
0c2d  mov     dx,[bp+0Ch]                     
0c30  pop     si                              
0c31  lea     sp,[bp-2h]                      
0c34  pop     ds                              
0c35  pop     bp                              
0c36  dec     bp                              
0c37  retf                                    

; ----- sub_0c38 -----
0c38  mov     ax,ds                           
0c3a  nop                                     
0c3b  inc     bp                              
0c3c  push    bp                              
0c3d  mov     bp,sp                           
0c3f  push    ds                              
0c40  mov     ds,ax                           
0c42  sub     sp,4h                           
0c45  mov     byte ptr [900h],1h              
0c4a  push    word ptr [bp+10h]               
0c4d  push    word ptr [bp+0Eh]               
0c50  push    word ptr [bp+0Ch]               
0c53  push    word ptr [bp+0Ah]               
0c56  push    word ptr [bp+8h]                
0c59  push    word ptr [bp+6h]                
0c5c  push    cs                              
0c5d  call    0AA0h                           
0c60  mov     byte ptr [900h],0h              
0c65  lea     sp,[bp-2h]                      
0c68  pop     ds                              
0c69  pop     bp                              
0c6a  dec     bp                              
0c6b  retf                                    

; ----- sub_0c6c -----
0c6c  mov     ax,ds                           
0c6e  nop                                     
0c6f  inc     bp                              
0c70  push    bp                              
0c71  mov     bp,sp                           
0c73  push    ds                              
0c74  mov     ds,ax                           
0c76  sub     sp,0Eh                          
0c79  push    si                              
0c7a  cmp     byte ptr [900h],0h              
0c7f  je      0CC8h                           
0c81  mov     ax,[1222h]                      
0c84  mov     dx,[1224h]                      
0c88  mov     [bp-6h],ax                      
0c8b  mov     [bp-4h],dx                      
0c8e  mov     es,dx                           
0c90  mov     bx,ax                           
0c92  cmp     word ptr es:[bx],2Dh            
0c96  jne     0C9Eh                           
0c98  mov     ax,1h                           
0c9b  jmp     0CA0h                           
0c9d  nop                                     
0c9e  xor     ax,ax                           
0ca0  add     ax,[bp+0Ah]                     
0ca3  mov     dx,[bp+0Ch]                     
0ca6  mov     [bp-0Ah],ax                     
0ca9  mov     [bp-8h],dx                      
0cac  mov     cx,[902h]                       
0cb0  cmp     [bp+0Eh],cx                     
0cb3  jne     0D12h                           
0cb5  mov     es,dx                           
0cb7  mov     bx,ax                           
0cb9  mov     si,cx                           
0cbb  mov     byte ptr es:[bx+si],30h         
0cbf  add     bx,cx                           
0cc1  inc     bx                              
0cc2  mov     byte ptr es:[bx],0h             
0cc6  jmp     0D12h                           
0cc8  les     bx,[bp+6h]                      
0ccb  push    word ptr es:[bx+6h]             
0ccf  push    word ptr es:[bx+4h]             
0cd3  push    word ptr es:[bx+2h]             
0cd7  push    word ptr es:[bx]                
0cda  call far sub_1758                       
0cdf  add     sp,8h                           
0ce2  mov     [bp-6h],ax                      
0ce5  mov     [bp-4h],dx                      
0ce8  push    dx                              
0ce9  les     bx,[bp-6h]                      
0cec  push    ax                              
0ced  mov     ax,es:[bx+2h]                   
0cf1  add     ax,[bp+0Eh]                     
0cf4  push    ax                              
0cf5  cmp     word ptr es:[bx],2Dh            
0cf9  jne     0D00h                           
0cfb  mov     ax,1h                           
0cfe  jmp     0D02h                           
0d00  xor     ax,ax                           
0d02  add     ax,[bp+0Ah]                     
0d05  mov     dx,[bp+0Ch]                     
0d08  push    dx                              
0d09  push    ax                              
0d0a  call far sub_139c                       
0d0f  add     sp,0Ah                          
0d12  mov     ax,[bp+0Ah]                     
0d15  mov     dx,[bp+0Ch]                     
0d18  mov     [bp-0Ah],ax                     
0d1b  mov     [bp-8h],dx                      
0d1e  les     bx,[bp-6h]                      
0d21  cmp     word ptr es:[bx],2Dh            
0d25  jne     0D33h                           
0d27  mov     bx,ax                           
0d29  mov     es,dx                           
0d2b  mov     byte ptr es:[bx],2Dh            
0d2f  inc     ax                              
0d30  mov     [bp-0Ah],ax                     
0d33  les     bx,[bp-6h]                      
0d36  cmp     word ptr es:[bx+2h],0h          
0d3b  jg      0D56h                           
0d3d  push    word ptr [bp-8h]                
0d40  push    word ptr [bp-0Ah]               
0d43  mov     ax,1h                           
0d46  push    ax                              
0d47  call    0F52h                           
0d4a  les     bx,[bp-0Ah]                     
0d4d  inc     word ptr [bp-0Ah]               
0d50  mov     byte ptr es:[bx],30h            
0d54  jmp     0D5Dh                           
0d56  mov     ax,es:[bx+2h]                   
0d5a  add     [bp-0Ah],ax                     
0d5d  cmp     word ptr [bp+0Eh],0h            
0d61  jle     0DC4h                           
0d63  push    word ptr [bp-8h]                
0d66  push    word ptr [bp-0Ah]               
0d69  mov     ax,1h                           
0d6c  push    ax                              
0d6d  call    0F52h                           
0d70  les     bx,[bp-0Ah]                     
0d73  inc     word ptr [bp-0Ah]               
0d76  mov     byte ptr es:[bx],2Eh            
0d7a  les     bx,[bp-6h]                      
0d7d  cmp     word ptr es:[bx+2h],0h          
0d82  jge     0DC4h                           
0d84  cmp     byte ptr [900h],0h              
0d89  je      0D94h                           
0d8b  mov     ax,es:[bx+2h]                   
0d8f  neg     ax                              
0d91  jmp     0DA2h                           
0d93  nop                                     
0d94  mov     ax,es:[bx+2h]                   
0d98  neg     ax                              
0d9a  cmp     ax,[bp+0Eh]                     
0d9d  jle     0DA2h                           
0d9f  mov     ax,[bp+0Eh]                     
0da2  mov     [bp+0Eh],ax                     
0da5  push    word ptr [bp-8h]                
0da8  push    word ptr [bp-0Ah]               
0dab  push    ax                              
0dac  call    0F52h                           
0daf  push    word ptr [bp+0Eh]               
0db2  mov     ax,30h                          
0db5  push    ax                              
0db6  push    word ptr [bp-8h]                
0db9  push    word ptr [bp-0Ah]               
0dbc  call far sub_1646                       
0dc1  add     sp,8h                           
0dc4  mov     ax,[bp+0Ah]                     
0dc7  mov     dx,[bp+0Ch]                     
0dca  pop     si                              
0dcb  lea     sp,[bp-2h]                      
0dce  pop     ds                              
0dcf  pop     bp                              
0dd0  dec     bp                              
0dd1  retf                                    

; ----- sub_0dd2 -----
0dd2  mov     ax,ds                           
0dd4  nop                                     
0dd5  inc     bp                              
0dd6  push    bp                              
0dd7  mov     bp,sp                           
0dd9  push    ds                              
0dda  mov     ds,ax                           
0ddc  sub     sp,4h                           
0ddf  mov     byte ptr [900h],1h              
0de4  push    word ptr [bp+0Eh]               
0de7  push    word ptr [bp+0Ch]               
0dea  push    word ptr [bp+0Ah]               
0ded  push    word ptr [bp+8h]                
0df0  push    word ptr [bp+6h]                
0df3  push    cs                              
0df4  call    0C6Ch                           
0df7  mov     byte ptr [900h],0h              
0dfc  lea     sp,[bp-2h]                      
0dff  pop     ds                              
0e00  pop     bp                              
0e01  dec     bp                              
0e02  retf                                    
0e03  nop                                     

; ----- sub_0e04 -----
0e04  mov     ax,ds                           
0e06  nop                                     
0e07  inc     bp                              
0e08  push    bp                              
0e09  mov     bp,sp                           
0e0b  push    ds                              
0e0c  mov     ds,ax                           
0e0e  sub     sp,0Ah                          
0e11  les     bx,[bp+6h]                      
0e14  push    word ptr es:[bx+6h]             
0e18  push    word ptr es:[bx+4h]             
0e1c  push    word ptr es:[bx+2h]             
0e20  push    word ptr es:[bx]                
0e23  call far sub_1758                       
0e28  add     sp,8h                           
0e2b  mov     [1222h],ax                      
0e2e  mov     [1224h],dx                      
0e32  les     bx,[1222h]                      
0e36  mov     ax,es:[bx+2h]                   
0e3a  dec     ax                              
0e3b  mov     [902h],ax                       
0e3e  cmp     word ptr es:[bx],2Dh            
0e42  jne     0E4Ah                           
0e44  mov     ax,1h                           
0e47  jmp     0E4Ch                           
0e49  nop                                     
0e4a  xor     ax,ax                           
0e4c  add     ax,[bp+0Ah]                     
0e4f  mov     dx,[bp+0Ch]                     
0e52  mov     [bp-6h],ax                      
0e55  mov     [bp-4h],dx                      
0e58  push    es                              
0e59  push    bx                              
0e5a  push    word ptr [bp+0Eh]               
0e5d  push    dx                              
0e5e  push    ax                              
0e5f  call far sub_139c                       
0e64  add     sp,0Ah                          
0e67  les     bx,[1222h]                      
0e6b  mov     ax,es:[bx+2h]                   
0e6f  dec     ax                              
0e70  mov     [bp-8h],ax                      
0e73  cmp     ax,[902h]                       
0e77  jle     0E7Eh                           
0e79  mov     al,1h                           
0e7b  jmp     0E80h                           
0e7d  nop                                     
0e7e  xor     al,al                           
0e80  mov     [904h],al                       
0e83  mov     ax,[bp-8h]                      
0e86  mov     [902h],ax                       
0e89  cmp     ax,0FFFCh                       
0e8c  jl      0E93h                           
0e8e  cmp     ax,[bp+0Eh]                     
0e91  jl      0EAEh                           
0e93  push    word ptr [bp+10h]               
0e96  push    word ptr [bp+0Eh]               
0e99  push    word ptr [bp+0Ch]               
0e9c  push    word ptr [bp+0Ah]               
0e9f  push    word ptr [bp+8h]                
0ea2  push    word ptr [bp+6h]                
0ea5  push    cs                              
0ea6  call    0C38h                           
0ea9  add     sp,0Ch                          
0eac  jmp     0EDCh                           
0eae  cmp     byte ptr [904h],0h              
0eb3  je      0EC9h                           
0eb5  les     bx,[bp-6h]                      
0eb8  inc     word ptr [bp-6h]                
0ebb  cmp     byte ptr es:[bx],0h             
0ebf  jne     0EB5h                           
0ec1  mov     bx,[bp-6h]                      
0ec4  mov     byte ptr es:[bx-2h],0h          
0ec9  push    word ptr [bp+0Eh]               
0ecc  push    word ptr [bp+0Ch]               
0ecf  push    word ptr [bp+0Ah]               
0ed2  push    word ptr [bp+8h]                
0ed5  push    word ptr [bp+6h]                
0ed8  push    cs                              
0ed9  call    0DD2h                           
0edc  lea     sp,[bp-2h]                      
0edf  pop     ds                              
0ee0  pop     bp                              
0ee1  dec     bp                              
0ee2  retf                                    
0ee3  nop                                     
0ee4  mov     ax,ds                           
0ee6  nop                                     
0ee7  inc     bp                              
0ee8  push    bp                              
0ee9  mov     bp,sp                           
0eeb  push    ds                              
0eec  mov     ds,ax                           
0eee  cmp     word ptr [bp+0Eh],65h           
0ef2  je      0EFAh                           
0ef4  cmp     word ptr [bp+0Eh],45h           
0ef8  jne     0F16h                           
0efa  push    word ptr [bp+12h]               
0efd  push    word ptr [bp+10h]               
0f00  push    word ptr [bp+0Ch]               
0f03  push    word ptr [bp+0Ah]               
0f06  push    word ptr [bp+8h]                
0f09  push    word ptr [bp+6h]                
0f0c  push    cs                              
0f0d  call    0AA0h                           
0f10  add     sp,0Ch                          
0f13  jmp     0F4Ah                           
0f15  nop                                     
0f16  cmp     word ptr [bp+0Eh],66h           
0f1a  jne     0F34h                           
0f1c  push    word ptr [bp+10h]               
0f1f  push    word ptr [bp+0Ch]               
0f22  push    word ptr [bp+0Ah]               
0f25  push    word ptr [bp+8h]                
0f28  push    word ptr [bp+6h]                
0f2b  push    cs                              
0f2c  call    0C6Ch                           
0f2f  add     sp,0Ah                          
0f32  jmp     0F4Ah                           
0f34  push    word ptr [bp+12h]               
0f37  push    word ptr [bp+10h]               
0f3a  push    word ptr [bp+0Ch]               
0f3d  push    word ptr [bp+0Ah]               
0f40  push    word ptr [bp+8h]                
0f43  push    word ptr [bp+6h]                
0f46  push    cs                              
0f47  call    0E04h                           
0f4a  lea     sp,[bp-2h]                      
0f4d  pop     ds                              
0f4e  pop     bp                              
0f4f  dec     bp                              
0f50  retf                                    
0f51  nop                                     

; ----- sub_0f52 -----
0f52  push    bp                              
0f53  mov     bp,sp                           
0f55  cmp     word ptr [bp+4h],0h             
0f59  je      0F7Fh                           
0f5b  push    word ptr [bp+8h]                
0f5e  push    word ptr [bp+6h]                
0f61  call far sub_15f0                       
0f66  add     sp,4h                           
0f69  inc     ax                              
0f6a  push    ax                              
0f6b  push    word ptr [bp+8h]                
0f6e  mov     ax,[bp+6h]                      
0f71  push    ax                              
0f72  mov     dx,[bp+8h]                      
0f75  add     ax,[bp+4h]                      
0f78  push    dx                              
0f79  push    ax                              
0f7a  call far sub_168e                       
0f7f  mov     sp,bp                           
0f81  pop     bp                              
0f82  ret     6h                              
0f85  nop                                     
0f86  inc     bp                              
0f87  push    bp                              
0f88  mov     bp,sp                           
0f8a  push    ds                              
0f8b  push    es                              
0f8c  push    ax                              
0f8d  push    bx                              
0f8e  push    cx                              
0f8f  push    dx                              
0f90  xor     ah,ah                           
0f92  add     ax,-1Ch                         
0f95  push    ax                              
0f96  call far sub_07fc                       
0f9b  mov     ds,ax                           
0f9d  pop     ax                              
0f9e  call    1002h                           
0fa1  pop     dx                              
0fa2  pop     cx                              
0fa3  pop     bx                              
0fa4  pop     ax                              
0fa5  pop     es                              
0fa6  pop     ds                              
0fa7  pop     bp                              
0fa8  dec     bp                              
0fa9  retf                                    

; ----- sub_0faa -----
0faa  mov     ax,ds                           
0fac  nop                                     
0fad  inc     bp                              
0fae  push    bp                              
0faf  mov     bp,sp                           
0fb1  push    ds                              
0fb2  mov     ds,ax                           
0fb4  push    si                              
0fb5  push    di                              
0fb6  push    ds                              
0fb7  pop     es                              
0fb8  mov     dx,[bp+6h]                      
0fbb  mov     si,0B62h                        
0fbe  lodsw                                   
0fbf  cmp     ax,dx                           
0fc1  je      0FD3h                           
0fc3  inc     ax                              
0fc4  xchg    ax,si                           
0fc5  je      0FD3h                           
0fc7  xchg    ax,di                           
0fc8  xor     ax,ax                           
0fca  mov     cx,0FFFFh                       
0fcd  repne   scasb                           
0fcf  mov     si,di                           
0fd1  jmp     0FBEh                           
0fd3  xchg    ax,si                           
0fd4  pop     di                              
0fd5  pop     si                              
0fd6  sub     bp,2h                           
0fd9  mov     sp,bp                           
0fdb  pop     ds                              
0fdc  pop     bp                              
0fdd  dec     bp                              
0fde  retf    2h                              

; ----- sub_0fe1 -----
0fe1  mov     ax,ds                           
0fe3  nop                                     
0fe4  inc     bp                              
0fe5  push    bp                              
0fe6  mov     bp,sp                           
0fe8  push    ds                              
0fe9  mov     ds,ax                           
0feb  push    di                              
0fec  pop     di                              
0fed  sub     bp,2h                           
0ff0  mov     sp,bp                           
0ff2  pop     ds                              
0ff3  pop     bp                              
0ff4  dec     bp                              
0ff5  retf    2h                              
0ff8  call far sub_07fc                       
0ffd  mov     ds,ax                           
0fff  mov     ax,3h                           

; ----- sub_1002 -----
1002  push    ax                              
1003  push    ax                              
1004  push    cs                              
1005  call    4B2h                            
1008  push    cs                              
1009  call    0FE1h                           
100c  push    cs                              
100d  call    0FAAh                           
1010  xor     bx,bx                           
1012  or      ax,ax                           
1014  je      1033h                           
1016  mov     di,ax                           
1018  mov     ax,9h                           
101b  cmp     byte ptr [di],4Dh               
101e  jne     1023h                           
1020  mov     ax,0Fh                          
1023  add     di,ax                           
1025  push    di                              
1026  push    ds                              
1027  pop     es                              
1028  mov     al,0Dh                          
102a  mov     cx,22h                          
102d  repne   scasb                           
102f  mov     [di-1h],bl                      
1032  pop     ax                              
1033  push    bx                              
1034  push    ds                              
1035  push    ax                              
1036  call far KERNEL.FATALAPPEXIT            
103b  mov     ax,0FFh                         
103e  push    ax                              
103f  call far KERNEL.FATALEXIT               

; ----- sub_1044 -----
1044  inc     bp                              
1045  push    bp                              
1046  mov     bp,sp                           
1048  push    ds                              
1049  cmp     word ptr [1226h],0h             
104e  jne     1059h                           
1050  call far sub_1060                       
1055  inc     word ptr [1226h]                
1059  lea     sp,[bp-2h]                      
105c  pop     ds                              
105d  pop     bp                              
105e  dec     bp                              
105f  retf                                    

; ----- sub_1060 -----
1060  inc     bp                              
1061  push    bp                              
1062  mov     bp,sp                           
1064  push    ds                              
1065  sub     sp,8h                           
1068  push    si                              
1069  xor     si,si                           
106b  mov     ax,90Ch                         
106e  push    ds                              
106f  push    ax                              
1070  call far sub_190e                       
1075  add     sp,4h                           
1078  mov     [bp-0Ah],ax                     
107b  mov     [bp-8h],dx                      
107e  or      dx,ax                           
1080  je      108Bh                           
1082  les     bx,[bp-0Ah]                     
1085  cmp     byte ptr es:[bx],0h             
1089  jne     1107h                           
108b  call far KERNEL.GETDOSENVIRONMENT       
1090  mov     [bp-6h],ax                      
1093  mov     [bp-4h],dx                      
1096  or      dx,ax                           
1098  jne     109Dh                           
109a  jmp     1220h                           
109d  les     bx,[bp-6h]                      
10a0  cmp     byte ptr es:[bx],0h             
10a4  jne     10BCh                           
10a6  jmp     1220h                           
10a9  nop                                     
10aa  push    word ptr [bp-4h]                
10ad  push    word ptr [bp-6h]                
10b0  call far sub_15f0                       
10b5  add     sp,4h                           
10b8  inc     ax                              
10b9  add     [bp-6h],ax                      
10bc  les     bx,[bp-6h]                      
10bf  cmp     byte ptr es:[bx],0h             
10c3  je      10DCh                           
10c5  mov     ax,3h                           
10c8  push    ax                              
10c9  mov     ax,90Fh                         
10cc  push    ds                              
10cd  push    ax                              
10ce  push    es                              
10cf  push    bx                              
10d0  call far sub_1a6a                       
10d5  add     sp,0Ah                          
10d8  or      ax,ax                           
10da  jne     10AAh                           
10dc  les     bx,[bp-6h]                      
10df  cmp     byte ptr es:[bx],0h             
10e3  jne     10E8h                           
10e5  jmp     1220h                           
10e8  mov     ax,10h                          
10eb  push    ax                              
10ec  add     word ptr [bp-6h],3h             
10f0  push    es                              
10f1  push    word ptr [bp-6h]                
10f4  mov     ax,1228h                        
10f7  mov     [bp-0Ah],ax                     
10fa  mov     [bp-8h],ds                      
10fd  push    ds                              
10fe  push    ax                              
10ff  call far sub_1aa6                       
1104  add     sp,0Ah                          
1107  mov     ax,3h                           
110a  push    ax                              
110b  push    word ptr [bp-8h]                
110e  push    word ptr [bp-0Ah]               
1111  push    word ptr [0A6Ch]                
1115  push    word ptr [0A6Ah]                
1119  call far sub_18e0                       
111e  add     sp,0Ah                          
1121  add     word ptr [bp-0Ah],3h            
1125  les     bx,[bp-0Ah]                     
1128  cmp     byte ptr es:[bx],2Dh            
112c  jne     1135h                           
112e  inc     si                              
112f  lea     ax,[bx+1h]                      
1132  mov     [bp-0Ah],ax                     
1135  mov     ax,0E10h                        
1138  cwd                                     
1139  push    dx                              
113a  push    ax                              
113b  push    es                              
113c  push    word ptr [bp-0Ah]               
113f  call far sub_190a                       
1144  add     sp,4h                           
1147  push    dx                              
1148  push    ax                              
1149  call far sub_03a2                       
114e  mov     [0A5Ch],ax                      
1151  mov     [0A5Eh],dx                      
1155  les     bx,[bp-0Ah]                     
1158  cmp     byte ptr es:[bx],2Bh            
115c  je      116Ah                           
115e  cmp     byte ptr es:[bx],30h            
1162  jl      1170h                           
1164  cmp     byte ptr es:[bx],39h            
1168  jg      1170h                           
116a  inc     word ptr [bp-0Ah]               
116d  jmp     1155h                           
116f  nop                                     
1170  cmp     byte ptr es:[bx],3Ah            
1174  jne     11E0h                           
1176  mov     ax,3Ch                          
1179  cwd                                     
117a  push    dx                              
117b  push    ax                              
117c  inc     word ptr [bp-0Ah]               
117f  push    es                              
1180  push    word ptr [bp-0Ah]               
1183  call far sub_190a                       
1188  add     sp,4h                           
118b  push    dx                              
118c  push    ax                              
118d  call far sub_03a2                       
1192  add     [0A5Ch],ax                      
1196  adc     [0A5Eh],dx                      
119a  jmp     11A5h                           
119c  cmp     byte ptr es:[bx],39h            
11a0  jg      11AEh                           
11a2  inc     word ptr [bp-0Ah]               
11a5  les     bx,[bp-0Ah]                     
11a8  cmp     byte ptr es:[bx],30h            
11ac  jge     119Ch                           
11ae  cmp     byte ptr es:[bx],3Ah            
11b2  jne     11E0h                           
11b4  inc     word ptr [bp-0Ah]               
11b7  push    es                              
11b8  push    word ptr [bp-0Ah]               
11bb  call far sub_190a                       
11c0  add     sp,4h                           
11c3  add     [0A5Ch],ax                      
11c7  adc     [0A5Eh],dx                      
11cb  jmp     11D7h                           
11cd  nop                                     
11ce  cmp     byte ptr es:[bx],39h            
11d2  jg      11E0h                           
11d4  inc     word ptr [bp-0Ah]               
11d7  les     bx,[bp-0Ah]                     
11da  cmp     byte ptr es:[bx],30h            
11de  jge     11CEh                           
11e0  or      si,si                           
11e2  je      11F1h                           
11e4  neg     word ptr [0A5Ch]                
11e8  adc     word ptr [0A5Eh],0h             
11ed  neg     word ptr [0A5Eh]                
11f1  les     bx,[bp-0Ah]                     
11f4  mov     al,es:[bx]                      
11f7  cbw                                     
11f8  mov     [0A60h],ax                      
11fb  or      ax,ax                           
11fd  je      1218h                           
11ff  mov     ax,3h                           
1202  push    ax                              
1203  push    es                              
1204  push    bx                              
1205  push    word ptr [0A70h]                
1209  push    word ptr [0A6Eh]                
120d  call far sub_18e0                       
1212  add     sp,0Ah                          
1215  jmp     1220h                           
1217  nop                                     
1218  les     bx,[0A6Eh]                      
121c  mov     byte ptr es:[bx],0h             
1220  pop     si                              
1221  lea     sp,[bp-2h]                      
1224  pop     ds                              
1225  pop     bp                              
1226  dec     bp                              
1227  retf                                    

; ----- sub_1228 -----
1228  inc     bp                              
1229  push    bp                              
122a  mov     bp,sp                           
122c  push    ds                              
122d  sub     sp,4h                           
1230  push    si                              
1231  les     bx,[bp+6h]                      
1234  cmp     word ptr es:[bx+0Ah],43h        
1239  jge     123Eh                           
123b  jmp     12F1h                           
123e  cmp     word ptr es:[bx+8h],3h          
1243  jge     1248h                           
1245  jmp     12F1h                           
1248  cmp     word ptr es:[bx+8h],9h          
124d  jle     1252h                           
124f  jmp     12F1h                           
1252  cmp     word ptr es:[bx+8h],3h          
1257  jle     1260h                           
1259  cmp     word ptr es:[bx+8h],9h          
125e  jl      12DCh                           
1260  mov     si,es:[bx+0Ah]                  
1264  cmp     si,56h                          
1267  jle     1280h                           
1269  cmp     word ptr es:[bx+8h],3h          
126e  jne     1280h                           
1270  mov     bx,es:[bx+8h]                   
1274  add     bx,bx                           
1276  mov     ax,[bx+0A30h]                   
127a  add     ax,7h                           
127d  jmp     128Ah                           
127f  nop                                     
1280  mov     bx,es:[bx+8h]                   
1284  add     bx,bx                           
1286  mov     ax,[bx+0A32h]                   
128a  mov     [bp-4h],ax                      
128d  test    si,3h                           
1291  jne     1296h                           
1293  inc     word ptr [bp-4h]                
1296  mov     ax,7h                           
1299  cwd                                     
129a  push    dx                              
129b  push    ax                              
129c  mov     cx,16Dh                         
129f  lea     ax,[si-46h]                     
12a2  imul    cx                              
12a4  lea     cx,[si-1h]                      
12a7  sar     cx,1                            
12a9  sar     cx,1                            
12ab  add     ax,cx                           
12ad  add     ax,[bp-4h]                      
12b0  cwd                                     
12b1  sub     ax,0Dh                          
12b4  sbb     dx,0h                           
12b7  push    dx                              
12b8  push    ax                              
12b9  call far sub_19ca                       
12be  sub     ax,[bp-4h]                      
12c1  neg     ax                              
12c3  les     bx,[bp+6h]                      
12c6  cmp     word ptr es:[bx+8h],3h          
12cb  jne     12E2h                           
12cd  cmp     ax,es:[bx+0Eh]                  
12d1  jl      12DCh                           
12d3  jne     12F1h                           
12d5  cmp     word ptr es:[bx+4h],2h          
12da  jl      12F1h                           
12dc  mov     ax,1h                           
12df  jmp     12F3h                           
12e1  nop                                     
12e2  cmp     es:[bx+0Eh],ax                  
12e6  jl      12DCh                           
12e8  jne     12F1h                           
12ea  cmp     word ptr es:[bx+4h],1h          
12ef  jl      12DCh                           
12f1  xor     ax,ax                           
12f3  pop     si                              
12f4  lea     sp,[bp-2h]                      
12f7  pop     ds                              
12f8  pop     bp                              
12f9  dec     bp                              
12fa  retf                                    
12fb  nop                                     

; ----- sub_12fc -----
12fc  push    bp                              
12fd  mov     bp,sp                           
12ff  push    bx                              
1300  push    es                              
1301  push    cx                              
1302  mov     cx,1000h                        
1305  xchg    cx,[0A98h]                      
1309  push    cx                              
130a  push    ax                              
130b  call far sub_1ce9                       
1310  pop     bx                              
1311  pop     [0A98h]                         
1315  pop     cx                              
1316  mov     bx,dx                           
1318  or      bx,ax                           
131a  je      1320h                           
131c  pop     es                              
131d  pop     bx                              
131e  jmp     1325h                           
1320  mov     ax,cx                           
1322  jmp     1002h                           
1325  mov     sp,bp                           
1327  pop     bp                              
1328  ret                                     
1329  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
132a  mov     ax,ds                           
132c  nop                                     
132d  inc     bp                              
132e  push    bp                              
132f  mov     bp,sp                           
1331  push    ds                              
1332  mov     ds,ax                           
1334  xor     ax,ax                           
1336  lea     sp,[bp-2h]                      
1339  pop     ds                              
133a  pop     bp                              
133b  dec     bp                              
133c  retf                                    
133d  nop                                     

; ----- sub_133e -----
133e  inc     bp                              
133f  push    bp                              
1340  mov     bp,sp                           
1342  push    ds                              
1343  push    di                              
1344  push    si                              
1345  jmp     134Bh                           
1347  nop                                     
1348  inc     word ptr [bp+6h]                
134b  les     bx,[bp+6h]                      
134e  mov     al,es:[bx]                      
1351  cbw                                     
1352  mov     bx,ax                           
1354  test    byte ptr [bx+915h],8h           
1359  jne     1348h                           
135b  xor     ax,ax                           
135d  push    ax                              
135e  push    ax                              
135f  push    es                              
1360  push    word ptr [bp+6h]                
1363  call far sub_18c6                       
1368  add     sp,4h                           
136b  push    ax                              
136c  push    word ptr [bp+8h]                
136f  push    word ptr [bp+6h]                
1372  call far sub_1c64                       
1377  add     sp,0Ah                          
137a  add     ax,8h                           
137d  mov     bx,2F74h                        
1380  push    ds                              
1381  mov     di,bx                           
1383  mov     si,ax                           
1385  push    ds                              
1386  pop     es                              
1387  mov     ds,dx                           
1389  movsw                                   
138a  movsw                                   
138b  movsw                                   
138c  movsw                                   
138d  pop     ds                              
138e  mov     ax,bx                           
1390  mov     dx,ds                           
1392  pop     si                              
1393  pop     di                              
1394  lea     sp,[bp-2h]                      
1397  pop     ds                              
1398  pop     bp                              
1399  dec     bp                              
139a  retf                                    
139b  nop                                     

; ----- sub_139c -----
139c  inc     bp                              
139d  push    bp                              
139e  mov     bp,sp                           
13a0  push    ds                              
13a1  sub     sp,0Ah                          
13a4  les     bx,[bp+0Ch]                     
13a7  mov     ax,es:[bx+6h]                   
13ab  mov     dx,es:[bx+8h]                   
13af  mov     [bp-0Ah],ax                     
13b2  mov     [bp-8h],dx                      
13b5  les     bx,[bp+6h]                      
13b8  mov     byte ptr es:[bx],30h            
13bc  lea     ax,[bx+1h]                      
13bf  mov     [bp-6h],ax                      
13c2  mov     [bp-4h],es                      
13c5  jmp     13F2h                           
13c7  nop                                     
13c8  les     bx,[bp-0Ah]                     
13cb  cmp     byte ptr es:[bx],0h             
13cf  je      13DEh                           
13d1  mov     al,es:[bx]                      
13d4  cbw                                     
13d5  mov     [bp-0Ch],ax                     
13d8  inc     word ptr [bp-0Ah]               
13db  jmp     13E3h                           
13dd  nop                                     
13de  mov     word ptr [bp-0Ch],30h           
13e3  mov     al,[bp-0Ch]                     
13e6  les     bx,[bp-6h]                      
13e9  inc     word ptr [bp-6h]                
13ec  mov     es:[bx],al                      
13ef  dec     word ptr [bp+0Ah]               
13f2  cmp     word ptr [bp+0Ah],0h            
13f6  jg      13C8h                           
13f8  les     bx,[bp-6h]                      
13fb  mov     byte ptr es:[bx],0h             
13ff  cmp     word ptr [bp+0Ah],0h            
1403  jl      1423h                           
1405  les     bx,[bp-0Ah]                     
1408  cmp     byte ptr es:[bx],35h            
140c  jl      1423h                           
140e  jmp     1414h                           
1410  mov     byte ptr es:[bx],30h            
1414  dec     word ptr [bp-6h]                
1417  les     bx,[bp-6h]                      
141a  cmp     byte ptr es:[bx],39h            
141e  je      1410h                           
1420  inc     byte ptr es:[bx]                
1423  les     bx,[bp+6h]                      
1426  cmp     byte ptr es:[bx],31h            
142a  jne     1436h                           
142c  les     bx,[bp+0Ch]                     
142f  inc     word ptr es:[bx+2h]             
1433  jmp     1442h                           
1435  nop                                     
1436  lea     ax,[bx+1h]                      
1439  push    es                              
143a  push    ax                              
143b  push    es                              
143c  push    bx                              
143d  call far sub_160a                       
1442  lea     sp,[bp-2h]                      
1445  pop     ds                              
1446  pop     bp                              
1447  dec     bp                              
1448  retf                                    
1449  nop                                     

; ----- sub_144a -----
144a  inc     bp                              
144b  push    bp                              
144c  mov     bp,sp                           
144e  push    ds                              
144f  sub     sp,0Ah                          
1452  push    di                              
1453  push    si                              
1454  mov     word ptr [bp-8h],0h             
1459  mov     di,0A4Ah                        
145c  les     bx,[bp+6h]                      
145f  mov     ax,es:[bx]                      
1462  mov     dx,es:[bx+2h]                   
1466  mov     [bp-6h],ax                      
1469  mov     [bp-4h],dx                      
146c  or      dx,dx                           
146e  jge     1476h                           
1470  xor     ax,ax                           
1472  cwd                                     
1473  jmp     15E6h                           
1476  mov     ax,0E080h                       
1479  mov     dx,0F879h                       
147c  push    dx                              
147d  push    ax                              
147e  mov     ax,1F80h                        
1481  mov     dx,786h                         
1484  push    dx                              
1485  push    ax                              
1486  push    word ptr [bp-4h]                
1489  push    word ptr [bp-6h]                
148c  call far sub_0308                       
1491  mov     si,ax                           
1493  cwd                                     
1494  push    dx                              
1495  push    ax                              
1496  call far sub_03a2                       
149b  add     [bp-6h],ax                      
149e  adc     [bp-4h],dx                      
14a1  mov     ax,si                           
14a3  add     ax,ax                           
14a5  add     ax,ax                           
14a7  add     ax,46h                          
14aa  mov     si,ax                           
14ac  cmp     word ptr [bp-4h],1E1h           
14b1  jl      150Bh                           
14b3  jg      14BCh                           
14b5  cmp     word ptr [bp-6h],3380h          
14ba  jb      150Bh                           
14bc  inc     si                              
14bd  sub     word ptr [bp-6h],3380h          
14c2  sbb     word ptr [bp-4h],1E1h           
14c7  cmp     word ptr [bp-4h],1E1h           
14cc  jl      150Bh                           
14ce  jg      14D7h                           
14d0  cmp     word ptr [bp-6h],3380h          
14d5  jb      150Bh                           
14d7  inc     si                              
14d8  mov     ax,[bp-6h]                      
14db  mov     dx,[bp-4h]                      
14de  sub     ax,3380h                        
14e1  sbb     dx,1E1h                         
14e5  mov     [bp-6h],ax                      
14e8  mov     [bp-4h],dx                      
14eb  cmp     dx,1E2h                         
14ef  jl      1508h                           
14f1  jg      14F8h                           
14f3  cmp     ax,8500h                        
14f6  jb      1508h                           
14f8  inc     si                              
14f9  sub     ax,8500h                        
14fc  sbb     dx,1E2h                         
1500  mov     [bp-6h],ax                      
1503  mov     [bp-4h],dx                      
1506  jmp     150Bh                           
1508  inc     word ptr [bp-8h]                
150b  mov     [di+0Ah],si                     
150e  mov     ax,5180h                        
1511  mov     dx,1h                           
1514  push    dx                              
1515  push    ax                              
1516  push    word ptr [bp-4h]                
1519  push    word ptr [bp-6h]                
151c  call far sub_0308                       
1521  mov     [di+0Eh],ax                     
1524  mov     cx,0AE80h                       
1527  mov     dx,0FFFEh                       
152a  push    dx                              
152b  push    cx                              
152c  cwd                                     
152d  push    dx                              
152e  push    ax                              
152f  call far sub_03a2                       
1534  add     [bp-6h],ax                      
1537  adc     [bp-4h],dx                      
153a  cmp     word ptr [bp-8h],0h             
153e  je      1548h                           
1540  mov     word ptr [bp-0Ch],0A16h         
1545  jmp     154Dh                           
1547  nop                                     
1548  mov     word ptr [bp-0Ch],0A30h         
154d  mov     [bp-0Ah],ds                     
1550  mov     si,1h                           
1553  jmp     1557h                           
1555  nop                                     
1556  inc     si                              
1557  mov     ax,[di+0Eh]                     
155a  mov     bx,si                           
155c  add     bx,si                           
155e  add     bx,[bp-0Ch]                     
1561  mov     es,[bp-0Ah]                     
1564  cmp     es:[bx],ax                      
1567  jl      1556h                           
1569  dec     si                              
156a  mov     [di+8h],si                      
156d  mov     bx,si                           
156f  add     bx,si                           
1571  add     bx,[bp-0Ch]                     
1574  sub     ax,es:[bx]                      
1577  mov     [di+6h],ax                      
157a  mov     ax,5180h                        
157d  mov     dx,1h                           
1580  push    dx                              
1581  push    ax                              
1582  les     bx,[bp+6h]                      
1585  push    word ptr es:[bx+2h]             
1589  push    word ptr es:[bx]                
158c  call far sub_0308                       
1591  add     ax,4h                           
1594  mov     cx,7h                           
1597  cwd                                     
1598  idiv    cx                              
159a  mov     [di+0Ch],dx                     
159d  mov     ax,0E10h                        
15a0  cwd                                     
15a1  push    dx                              
15a2  push    ax                              
15a3  push    word ptr [bp-4h]                
15a6  push    word ptr [bp-6h]                
15a9  call far sub_0308                       
15ae  mov     [di+4h],ax                      
15b1  mov     cx,3Ch                          
15b4  xor     dx,dx                           
15b6  push    dx                              
15b7  push    cx                              
15b8  mov     cx,0F1F0h                       
15bb  imul    cx                              
15bd  add     [bp-6h],ax                      
15c0  adc     [bp-4h],dx                      
15c3  mov     ax,[bp-6h]                      
15c6  mov     dx,[bp-4h]                      
15c9  push    dx                              
15ca  push    ax                              
15cb  call far sub_0308                       
15d0  mov     [di+2h],ax                      
15d3  mov     cx,0FFC4h                       
15d6  imul    cx                              
15d8  add     ax,[bp-6h]                      
15db  mov     [di],ax                         
15dd  mov     word ptr [di+10h],0h            
15e2  mov     ax,di                           
15e4  mov     dx,ds                           
15e6  pop     si                              
15e7  pop     di                              
15e8  lea     sp,[bp-2h]                      
15eb  pop     ds                              
15ec  pop     bp                              
15ed  dec     bp                              
15ee  retf                                    
15ef  nop                                     

; ----- sub_15f0 -----
15f0  push    bp                              
15f1  mov     bp,sp                           
15f3  mov     dx,di                           
15f5  les     di,[bp+6h]                      
15f8  xor     ax,ax                           
15fa  mov     cx,0FFFFh                       
15fd  repne   scasb                           
15ff  not     cx                              
1601  jne     1604h                           
1603  dec     cx                              
1604  xchg    ax,cx                           
1605  mov     di,dx                           
1607  pop     bp                              
1608  retf                                    
1609  add     [bx+si],al                      

; ----- sub_160a -----
160a  push    bp                              
160b  mov     bp,sp                           
160d  mov     dx,di                           
160f  mov     bx,si                           
1611  push    ds                              
1612  lds     si,[bp+0Ah]                     
1615  mov     di,si                           
1617  mov     ax,ds                           
1619  mov     es,ax                           
161b  xor     ax,ax                           
161d  mov     cx,0FFFFh                       
1620  repne   scasb                           
1622  not     cx                              
1624  les     di,[bp+6h]                      
1627  mov     ax,di                           
1629  je      162Fh                           
162b  movsw                                   
162c  dec     cx                              
162d  jmp     1635h                           
162f  test    al,1h                           
1631  je      1635h                           
1633  movsb                                   
1634  dec     cx                              
1635  shr     cx,1                            
1637  rep     movsw                           
1639  adc     cx,cx                           
163b  rep     movsb                           
163d  mov     si,bx                           
163f  mov     di,dx                           
1641  pop     ds                              
1642  mov     dx,es                           
1644  pop     bp                              
1645  retf                                    

; ----- sub_1646 -----
1646  push    bp                              
1647  mov     bp,sp                           
1649  mov     cx,[bp+0Ch]                     
164c  jcxz    1686h                           
164e  push    di                              
164f  les     di,[bp+6h]                      
1652  mov     dx,di                           
1654  neg     dx                              
1656  je      1664h                           
1658  sub     dx,cx                           
165a  sbb     bx,bx                           
165c  and     dx,bx                           
165e  add     dx,cx                           
1660  xchg    dx,cx                           
1662  sub     dx,cx                           
1664  mov     ax,[bp+0Ah]                     
1667  mov     ah,al                           
1669  shr     cx,1                            
166b  rep     stosw                           
166d  adc     cx,cx                           
166f  rep     stosb                           
1671  xchg    dx,cx                           
1673  jcxz    1685h                           
1675  mov     bx,es                           
1677  add     bx,0FFFFh                       
167b  mov     es,bx                           
167d  shr     cx,1                            
167f  rep     stosw                           
1681  adc     cx,cx                           
1683  rep     stosb                           
1685  pop     di                              
1686  mov     ax,[bp+6h]                      
1689  mov     dx,[bp+8h]                      
168c  pop     bp                              
168d  retf                                    

; ----- sub_168e -----
168e  push    bp                              
168f  mov     bp,sp                           
1691  mov     cx,[bp+0Eh]                     
1694  push    ds                              
1695  push    di                              
1696  push    si                              
1697  or      cx,cx                           
1699  jne     169Eh                           
169b  jmp     174Dh                           
169e  lds     si,[bp+0Ah]                     
16a1  les     di,[bp+6h]                      
16a4  push    ds                              
16a5  push    si                              
16a6  push    es                              
16a7  push    di                              
16a8  call far sub_19aa                       
16ad  mov     cx,[bp+0Eh]                     
16b0  or      dx,dx                           
16b2  js      170Bh                           
16b4  sub     ax,cx                           
16b6  sbb     dx,0h                           
16b9  jae     170Bh                           
16bb  dec     cx                              
16bc  add     si,cx                           
16be  jae     16C7h                           
16c0  mov     ax,ds                           
16c2  add     ax,1679h                        
16c5  mov     ds,ax                           
16c7  add     di,cx                           
16c9  jae     16D2h                           
16cb  mov     ax,es                           
16cd  add     ax,16C3h                        
16d0  mov     es,ax                           
16d2  inc     cx                              
16d3  mov     ax,cx                           
16d5  dec     ax                              
16d6  sub     ax,di                           
16d8  sbb     bx,bx                           
16da  and     ax,bx                           
16dc  add     ax,di                           
16de  sub     ax,si                           
16e0  sbb     bx,bx                           
16e2  and     ax,bx                           
16e4  add     ax,si                           
16e6  inc     ax                              
16e7  xchg    ax,cx                           
16e8  sub     ax,cx                           
16ea  std                                     
16eb  rep     movsb                           
16ed  cld                                     
16ee  xchg    ax,cx                           
16ef  jcxz    174Dh                           
16f1  cmp     si,-1h                          
16f4  jne     16FDh                           
16f6  mov     ax,ds                           
16f8  sub     ax,16CEh                        
16fb  mov     ds,ax                           
16fd  cmp     di,-1h                          
1700  jne     16D3h                           
1702  mov     ax,es                           
1704  sub     ax,16F9h                        
1707  mov     es,ax                           
1709  jmp     16D3h                           
170b  mov     ax,cx                           
170d  dec     ax                              
170e  mov     dx,di                           
1710  not     dx                              
1712  sub     ax,dx                           
1714  sbb     bx,bx                           
1716  and     ax,bx                           
1718  add     ax,dx                           
171a  mov     dx,si                           
171c  not     dx                              
171e  sub     ax,dx                           
1720  sbb     bx,bx                           
1722  and     ax,bx                           
1724  add     ax,dx                           
1726  inc     ax                              
1727  xchg    ax,cx                           
1728  sub     ax,cx                           
172a  shr     cx,1                            
172c  rep     movsw                           
172e  adc     cx,cx                           
1730  rep     movsb                           
1732  xchg    ax,cx                           
1733  jcxz    174Dh                           
1735  or      si,si                           
1737  jne     1740h                           
1739  mov     ax,ds                           
173b  add     ax,1705h                        
173e  mov     ds,ax                           
1740  or      di,di                           
1742  jne     170Bh                           
1744  mov     ax,es                           
1746  add     ax,173Ch                        
1749  mov     es,ax                           
174b  jmp     170Bh                           
174d  mov     ax,[bp+6h]                      
1750  mov     dx,[bp+8h]                      
1753  pop     si                              
1754  pop     di                              
1755  pop     ds                              
1756  pop     bp                              
1757  retf                                    

; ----- sub_1758 -----
1758  mov     ax,ds                           
175a  nop                                     
175b  inc     bp                              
175c  push    bp                              
175d  mov     bp,sp                           
175f  push    ds                              
1760  mov     ds,ax                           
1762  push    si                              
1763  push    di                              
1764  cld                                     
1765  mov     ax,ds                           
1767  mov     es,ax                           
1769  lea     si,[bp+6h]                      
176c  mov     di,0A7Ch                        
176f  movsw   ss:                             
1771  movsw   ss:                             
1773  movsw   ss:                             
1775  movsw   ss:                             
1777  mov     si,0A7Ch                        
177a  push    bp                              
177b  call    1B1Eh                           
177e  pop     bp                              
177f  mov     di,0A84h                        
1782  mov     cx,ax                           
1784  lodsb                                   
1785  cbw                                     
1786  xchg    ax,cx                           
1787  rep     movsb                           
1789  xchg    ax,cx                           
178a  stosb                                   
178b  mov     di,0A72h                        
178e  xor     bh,bh                           
1790  mov     [di],bx                         
1792  mov     [di+2h],dx                      
1795  mov     [di+4h],cx                      
1798  mov     word ptr [di+6h],0A84h          
179d  mov     [di+8h],ds                      
17a0  mov     dx,ds                           
17a2  mov     ax,di                           
17a4  pop     di                              
17a5  pop     si                              
17a6  lea     sp,[bp-2h]                      
17a9  pop     ds                              
17aa  pop     bp                              
17ab  dec     bp                              
17ac  retf                                    
17ad  add     [bx+di+57h],dl                  
17b0  test    byte ptr [bx+2h],1h             
17b4  je      181Eh                           
17b6  call    18A5h                           
17b9  mov     di,si                           
17bb  mov     ax,[si]                         
17bd  test    al,1h                           
17bf  je      17C4h                           
17c1  sub     cx,ax                           
17c3  dec     cx                              
17c4  inc     cx                              
17c5  inc     cx                              
17c6  mov     si,[bx+4h]                      
17c9  or      si,si                           
17cb  je      181Eh                           
17cd  add     cx,si                           
17cf  jae     17DAh                           
17d1  xor     ax,ax                           
17d3  mov     dx,0FFF0h                       
17d6  jcxz    180Dh                           
17d8  jmp     181Eh                           
17da  call far sub_07fc                       
17df  mov     es,ax                           
17e1  mov     ax,es:[0A98h]                   
17e5  cmp     ax,1000h                        
17e8  je      1800h                           
17ea  mov     dx,8000h                        
17ed  cmp     dx,ax                           
17ef  jb      17F7h                           
17f1  shr     dx,1                            
17f3  jne     17EDh                           
17f5  jmp     1819h                           
17f7  cmp     dx,8h                           
17fa  jb      1819h                           
17fc  shl     dx,1                            
17fe  mov     ax,dx                           
1800  dec     ax                              
1801  mov     dx,ax                           
1803  add     ax,cx                           
1805  jae     1809h                           
1807  xor     ax,ax                           
1809  not     dx                              
180b  and     ax,dx                           
180d  push    dx                              
180e  call    183Fh                           
1811  pop     dx                              
1812  jae     1821h                           
1814  cmp     dx,-10h                         
1817  je      181Eh                           
1819  mov     ax,10h                          
181c  jmp     1800h                           
181e  stc                                     
181f  jmp     183Ch                           
1821  mov     dx,ax                           
1823  sub     dx,[bx+4h]                      
1826  mov     [bx+4h],ax                      
1829  mov     [bx+0Ah],di                     
182c  mov     si,[bx+0Ch]                     
182f  dec     dx                              
1830  mov     [si],dx                         
1832  inc     dx                              
1833  add     si,dx                           
1835  mov     word ptr [si],0FFFEh            
1839  mov     [bx+0Ch],si                     
183c  pop     di                              
183d  pop     cx                              
183e  ret                                     

; ----- sub_183f -----
183f  mov     dx,ax                           
1841  test    byte ptr [bx+2h],4h             
1845  je      1849h                           
1847  jmp     189Ah                           
1849  push    dx                              
184a  push    cx                              
184b  push    bx                              
184c  mov     si,[bx+6h]                      
184f  mov     bx,cs:[10h]                     
1854  xor     cx,cx                           
1856  or      dx,dx                           
1858  jne     1861h                           
185a  test    bx,10h                          
185e  jne     18A0h                           
1860  inc     cx                              
1861  mov     ax,2002h                        
1864  test    bx,1h                           
1868  jne     186Dh                           
186a  mov     ax,2020h                        
186d  push    si                              
186e  push    cx                              
186f  push    dx                              
1870  push    ax                              
1871  call far KERNEL.GLOBALREALLOC           
1876  or      ax,ax                           
1878  je      18A0h                           
187a  cmp     ax,si                           
187c  jne     189Ah                           
187e  push    si                              
187f  call far KERNEL.GLOBALSIZE              
1884  or      dx,ax                           
1886  je      189Ah                           
1888  pop     bx                              
1889  pop     cx                              
188a  pop     dx                              
188b  mov     ax,dx                           
188d  test    byte ptr [bx+2h],4h             
1891  je      1897h                           
1893  dec     dx                              
1894  mov     [bx-2h],dx                      
1897  clc                                     
1898  jmp     18A4h                           
189a  mov     ax,12h                          
189d  jmp     1002h                           
18a0  pop     bx                              
18a1  pop     cx                              
18a2  pop     dx                              
18a3  stc                                     
18a4  ret                                     

; ----- sub_18a5 -----
18a5  push    di                              
18a6  mov     si,[bx+0Ah]                     
18a9  cmp     si,[bx+0Ch]                     
18ac  jne     18B1h                           
18ae  mov     si,[bx+8h]                      
18b1  lodsw                                   
18b2  cmp     ax,-2h                          
18b5  je      18BFh                           
18b7  mov     di,si                           
18b9  and     al,0FEh                         
18bb  add     si,ax                           
18bd  jmp     18B1h                           
18bf  dec     di                              
18c0  dec     di                              
18c1  mov     si,di                           
18c3  pop     di                              
18c4  ret                                     
18c5  add     [bx+si],al                      

; ----- sub_18c6 -----
18c6  push    bp                              
18c7  mov     bp,sp                           
18c9  mov     dx,di                           
18cb  les     di,[bp+6h]                      
18ce  xor     ax,ax                           
18d0  mov     cx,0FFFFh                       
18d3  repne   scasb                           
18d5  not     cx                              
18d7  jne     18DAh                           
18d9  dec     cx                              
18da  xchg    ax,cx                           
18db  mov     di,dx                           
18dd  pop     bp                              
18de  retf                                    
18df  add     [bx+si],al                      

; ----- sub_18e0 -----
18e0  push    bp                              
18e1  mov     bp,sp                           
18e3  push    di                              
18e4  push    si                              
18e5  push    ds                              
18e6  les     di,[bp+6h]                      
18e9  lds     si,[bp+0Ah]                     
18ec  mov     bx,di                           
18ee  mov     cx,[bp+0Eh]                     
18f1  jcxz    18FFh                           
18f3  lodsb                                   
18f4  or      al,al                           
18f6  je      18FBh                           
18f8  stosb                                   
18f9  loop    18F3h                           
18fb  xor     al,al                           
18fd  rep     stosb                           
18ff  mov     ax,bx                           
1901  mov     dx,es                           
1903  pop     ds                              
1904  pop     si                              
1905  pop     di                              
1906  mov     sp,bp                           
1908  pop     bp                              
1909  retf                                    

; ----- sub_190a -----
190a  jmp     1DCCh                           
190d  add     [bx+si],al                      

; ----- sub_190e -----
190e  inc     bp                              
190f  push    bp                              
1910  mov     bp,sp                           
1912  push    ds                              
1913  sub     sp,4h                           
1916  push    si                              
1917  mov     ax,[86Ah]                       
191a  mov     dx,[86Ch]                       
191e  mov     [bp-6h],ax                      
1921  mov     [bp-4h],dx                      
1924  or      dx,ax                           
1926  je      199Eh                           
1928  mov     ax,[bp+8h]                      
192b  or      ax,[bp+6h]                      
192e  je      199Eh                           
1930  push    word ptr [bp+8h]                
1933  push    word ptr [bp+6h]                
1936  call far sub_18c6                       
193b  add     sp,4h                           
193e  mov     si,ax                           
1940  les     bx,[bp-6h]                      
1943  mov     ax,es:[bx+2h]                   
1947  or      ax,es:[bx]                      
194a  je      199Eh                           
194c  push    word ptr es:[bx+2h]             
1950  push    word ptr es:[bx]                
1953  call far sub_18c6                       
1958  add     sp,4h                           
195b  cmp     ax,si                           
195d  jbe     1998h                           
195f  les     bx,[bp-6h]                      
1962  les     bx,es:[bx]                      
1965  cmp     byte ptr es:[bx+si],3Dh         
1969  jne     1998h                           
196b  push    si                              
196c  push    word ptr [bp+8h]                
196f  push    word ptr [bp+6h]                
1972  les     bx,[bp-6h]                      
1975  push    word ptr es:[bx+2h]             
1979  push    word ptr es:[bx]                
197c  call far sub_1d90                       
1981  add     sp,0Ah                          
1984  or      ax,ax                           
1986  jne     1998h                           
1988  les     bx,[bp-6h]                      
198b  mov     ax,es:[bx]                      
198e  mov     dx,es:[bx+2h]                   
1992  add     ax,si                           
1994  inc     ax                              
1995  jmp     19A1h                           
1997  nop                                     
1998  add     word ptr [bp-6h],4h             
199c  jmp     1940h                           
199e  xor     ax,ax                           
19a0  cwd                                     
19a1  pop     si                              
19a2  lea     sp,[bp-2h]                      
19a5  pop     ds                              
19a6  pop     bp                              
19a7  dec     bp                              
19a8  retf                                    
19a9  nop                                     

; ----- sub_19aa -----
19aa  push    bp                              
19ab  mov     bp,sp                           
19ad  push    bx                              
19ae  push    cx                              
19af  mov     ax,[bp+6h]                      
19b2  mov     dx,[bp+8h]                      
19b5  mov     bx,[bp+0Ch]                     
19b8  mov     cx,0FFFFh                       
19bb  shr     dx,cl                           
19bd  shr     bx,cl                           
19bf  sub     ax,[bp+0Ah]                     
19c2  sbb     dx,bx                           
19c4  pop     cx                              
19c5  pop     bx                              
19c6  pop     bp                              
19c7  retf    8h                              

; ----- sub_19ca -----
19ca  push    bp                              
19cb  mov     bp,sp                           
19cd  push    bx                              
19ce  push    di                              
19cf  xor     di,di                           
19d1  mov     ax,[bp+8h]                      
19d4  or      ax,ax                           
19d6  jge     19E9h                           
19d8  inc     di                              
19d9  mov     dx,[bp+6h]                      
19dc  neg     ax                              
19de  neg     dx                              
19e0  sbb     ax,0h                           
19e3  mov     [bp+8h],ax                      
19e6  mov     [bp+6h],dx                      
19e9  mov     ax,[bp+0Ch]                     
19ec  or      ax,ax                           
19ee  jge     1A00h                           
19f0  mov     dx,[bp+0Ah]                     
19f3  neg     ax                              
19f5  neg     dx                              
19f7  sbb     ax,0h                           
19fa  mov     [bp+0Ch],ax                     
19fd  mov     [bp+0Ah],dx                     
1a00  or      ax,ax                           
1a02  jne     1A1Ch                           
1a04  mov     cx,[bp+0Ah]                     
1a07  mov     ax,[bp+8h]                      
1a0a  xor     dx,dx                           
1a0c  div     cx                              
1a0e  mov     ax,[bp+6h]                      
1a11  div     cx                              
1a13  mov     ax,dx                           
1a15  xor     dx,dx                           
1a17  dec     di                              
1a18  jns     1A5Dh                           
1a1a  jmp     1A64h                           
1a1c  mov     bx,ax                           
1a1e  mov     cx,[bp+0Ah]                     
1a21  mov     dx,[bp+8h]                      
1a24  mov     ax,[bp+6h]                      
1a27  shr     bx,1                            
1a29  rcr     cx,1                            
1a2b  shr     dx,1                            
1a2d  rcr     ax,1                            
1a2f  or      bx,bx                           
1a31  jne     1A27h                           
1a33  div     cx                              
1a35  mov     cx,ax                           
1a37  mul     word ptr [bp+0Ch]               
1a3a  xchg    ax,cx                           
1a3b  mul     word ptr [bp+0Ah]               
1a3e  add     dx,cx                           
1a40  jb      1A4Eh                           
1a42  cmp     dx,[bp+8h]                      
1a45  ja      1A4Eh                           
1a47  jb      1A54h                           
1a49  cmp     ax,[bp+6h]                      
1a4c  jbe     1A54h                           
1a4e  sub     ax,[bp+0Ah]                     
1a51  sbb     dx,[bp+0Ch]                     
1a54  sub     ax,[bp+6h]                      
1a57  sbb     dx,[bp+8h]                      
1a5a  dec     di                              
1a5b  jns     1A64h                           
1a5d  neg     dx                              
1a5f  neg     ax                              
1a61  sbb     dx,0h                           
1a64  pop     di                              
1a65  pop     bx                              
1a66  pop     bp                              
1a67  retf    8h                              

; ----- sub_1a6a -----
1a6a  push    bp                              
1a6b  mov     bp,sp                           
1a6d  push    di                              
1a6e  push    si                              
1a6f  push    ds                              
1a70  mov     cx,[bp+0Eh]                     
1a73  jcxz    1A9Ch                           
1a75  mov     bx,cx                           
1a77  les     di,[bp+6h]                      
1a7a  mov     si,di                           
1a7c  xor     ax,ax                           
1a7e  repne   scasb                           
1a80  neg     cx                              
1a82  add     cx,bx                           
1a84  mov     di,si                           
1a86  lds     si,[bp+0Ah]                     
1a89  rep     cmpsb                           
1a8b  mov     al,[si-1h]                      
1a8e  xor     cx,cx                           
1a90  cmp     al,es:[di-1h]                   
1a94  ja      1A9Ah                           
1a96  je      1A9Ch                           
1a98  dec     cx                              
1a99  dec     cx                              
1a9a  not     cx                              
1a9c  mov     ax,cx                           
1a9e  pop     ds                              
1a9f  pop     si                              
1aa0  pop     di                              
1aa1  mov     sp,bp                           
1aa3  pop     bp                              
1aa4  retf                                    
1aa5  add     [bx+si],al                      

; ----- sub_1aa6 -----
1aa6  push    bp                              
1aa7  mov     bp,sp                           
1aa9  push    di                              
1aaa  push    si                              
1aab  push    ds                              
1aac  les     di,[bp+6h]                      
1aaf  lds     si,[bp+0Ah]                     
1ab2  mov     bx,di                           
1ab4  mov     cx,[bp+0Eh]                     
1ab7  jcxz    1AC5h                           
1ab9  lodsb                                   
1aba  or      al,al                           
1abc  je      1AC1h                           
1abe  stosb                                   
1abf  loop    1AB9h                           
1ac1  xor     al,al                           
1ac3  rep     stosb                           
1ac5  mov     ax,bx                           
1ac7  mov     dx,es                           
1ac9  pop     ds                              
1aca  pop     si                              
1acb  pop     di                              
1acc  mov     sp,bp                           
1ace  pop     bp                              
1acf  retf                                    
1ad0  cld                                     
1ad2  ???                                     
1ad4  ???                                     
1ad6  ???                                     
1ad8  ???                                     
1ada  int     0CCh                            
1adc  int 3                                   
1add  int 3                                   
1ade  int 3                                   
1adf  int 3                                   
1ae0  int 3                                   
1ae1  int 3                                   
1ae2  sti                                     
1ae3  aas                                     
1ae4  mov     si,0AA6h                        
1ae7  mov     word ptr [si],3001h             
1aeb  xor     ax,ax                           
1aed  mov     dx,ax                           
1aef  inc     ax                              
1af0  mov     bl,20h                          
1af2  pop     es                              
1af3  ret                                     
1af4  or      dx,dx                           
1af6  jne     1B02h                           
1af8  cmp     cx,-8h                          
1afb  je      1B14h                           
1afd  and     cl,0Fh                          
1b00  je      1B0Fh                           
1b02  mov     si,0ABEh                        
1b05  test    cl,8h                           
1b08  jne     1B17h                           
1b0a  mov     si,0AB7h                        
1b0d  jmp     1B17h                           
1b0f  mov     si,0AC5h                        
1b12  jmp     1B17h                           
1b14  mov     si,0ACBh                        
1b17  mov     dx,1h                           
1b1a  pop     es                              
1b1b  xor     ax,ax                           
1b1d  ret                                     

; ----- sub_1b1e -----
1b1e  push    es                              
1b1f  mov     ax,ds                           
1b21  mov     es,ax                           
1b23  cld                                     
1b24  mov     di,0A9Ah                        
1b27  push    di                              
1b28  mov     cx,4h                           
1b2b  rep     movsw                           
1b2d  pop     si                              
1b2e  mov     cx,[si+6h]                      
1b31  and     byte ptr [si+7h],7Fh            
1b35  mov     bl,20h                          
1b37  mov     ax,[si]                         
1b39  or      ax,[si+2h]                      
1b3c  or      ax,[si+4h]                      
1b3f  mov     dx,ax                           
1b41  or      ax,[si+6h]                      
1b44  je      1AE4h                           
1b46  or      cx,cx                           
1b48  jns     1B4Ch                           
1b4a  mov     bl,2Dh                          
1b4c  not     cx                              
1b4e  test    cx,7FF0h                        
1b52  not     cx                              
1b54  je      1AF4h                           
1b56  push    bx                              
1b57  wait                                    
1b58  fstcw   word ptr [0AD3h]                
1b5c  nop                                     
1b5d  wait                                    
1b5e  push    ax                              
1b5f  mov     al,[0AD3h]                      
1b62  mov     [0AD5h],al                      
1b65  pop     ax                              
1b66  wait                                    
1b67  fldcw   word ptr [0AD5h]                
1b6b  wait                                    
1b6c  fld     qword ptr [si]                  
1b6e  wait                                    
1b6f  fld     st(0),st(0)                     
1b71  wait                                    
1b72  fstp    tword ptr [si]                  
1b74  nop                                     
1b75  wait                                    
1b76  xor     di,di                           
1b78  mov     si,0AA1h                        
1b7b  lodsb                                   
1b7c  mov     bh,al                           
1b7e  lodsw                                   
1b7f  mov     cx,ax                           
1b81  mov     dx,4D10h                        
1b84  mul     dx                              
1b86  xchg    ax,cx                           
1b87  mov     al,4Dh                          
1b89  mul     ah                              
1b8b  add     cx,ax                           
1b8d  adc     dx,di                           
1b8f  mov     al,9Ah                          
1b91  mul     bh                              
1b93  add     cx,ax                           
1b95  adc     di,dx                           
1b97  sub     cx,12F4h                        
1b9b  sbb     di,1343h                        
1b9f  push    di                              
1ba0  neg     di                              
1ba2  mov     si,0A9Ah                        
1ba5  call    1F9Eh                           
1ba8  mov     bx,1AD0h                        
1bab  pop     di                              
1bac  wait                                    
1bad  fld     tword ptr cs:[bx]               
1bb0  wait                                    
1bb1  fcomp   st(0),st(1)                     
1bb3  wait                                    
1bb4  fstsw   word ptr [0AD1h]                
1bb8  nop                                     
1bb9  wait                                    
1bba  test    byte ptr [0AD2h],41h            
1bbf  je      1BCCh                           
1bc1  inc     di                              
1bc2  mov     bx,1ADAh                        
1bc5  wait                                    
1bc6  fld     tword ptr cs:[bx]               
1bc9  wait                                    
1bca  fmulp   st(1)                           
1bcc  push    di                              
1bcd  wait                                    
1bce  fstp    tword ptr [si]                  
1bd0  wait                                    
1bd1  fldcw   word ptr [0AD3h]                
1bd5  nop                                     
1bd6  wait                                    
1bd7  lodsw                                   
1bd8  xchg    ax,di                           
1bd9  lodsw                                   
1bda  xchg    ax,bp                           
1bdb  lodsw                                   
1bdc  xchg    ax,dx                           
1bdd  lodsw                                   
1bde  xchg    ax,bx                           
1bdf  lodsw                                   
1be0  xchg    ax,cx                           
1be1  sub     cx,3FFEh                        
1be5  neg     cx                              
1be7  mov     si,di                           
1be9  xor     ax,ax                           
1beb  jcxz    1BF9h                           
1bed  shr     bx,1                            
1bef  rcr     dx,1                            
1bf1  rcr     bp,1                            
1bf3  rcr     si,1                            
1bf5  rcr     ah,1                            
1bf7  loop    1BEDh                           
1bf9  adc     si,39Ah                         
1bfd  adc     bp,cx                           
1bff  adc     dx,cx                           
1c01  adc     bx,cx                           
1c03  mov     di,0AA7h                        
1c06  mov     cx,10h                          
1c09  xor     al,al                           
1c0b  push    cx                              
1c0c  push    bx                              
1c0d  push    dx                              
1c0e  push    bp                              
1c0f  push    si                              
1c10  push    ax                              
1c11  shl     ah,1                            
1c13  rcl     si,1                            
1c15  rcl     bp,1                            
1c17  rcl     dx,1                            
1c19  rcl     bx,1                            
1c1b  rcl     al,1                            
1c1d  shl     ah,1                            
1c1f  rcl     si,1                            
1c21  rcl     bp,1                            
1c23  rcl     dx,1                            
1c25  rcl     bx,1                            
1c27  rcl     al,1                            
1c29  pop     cx                              
1c2a  adc     ah,ch                           
1c2c  pop     cx                              
1c2d  adc     si,cx                           
1c2f  pop     cx                              
1c30  adc     bp,cx                           
1c32  pop     cx                              
1c33  adc     dx,cx                           
1c35  pop     cx                              
1c36  adc     bx,cx                           
1c38  adc     al,0h                           
1c3a  shl     ah,1                            
1c3c  rcl     si,1                            
1c3e  rcl     bp,1                            
1c40  rcl     dx,1                            
1c42  rcl     bx,1                            
1c44  rcl     al,1                            
1c46  pop     cx                              
1c47  add     al,30h                          
1c49  stosb                                   
1c4a  loop    1C09h                           
1c4c  dec     di                              
1c4d  dec     cx                              
1c4e  mov     al,30h                          
1c50  std                                     
1c51  rep     scasb                           
1c53  cld                                     
1c54  add     cx,12h                          
1c57  mov     si,0AA6h                        
1c5a  mov     [si],cl                         
1c5c  mov     ax,1h                           
1c5f  pop     dx                              
1c60  pop     bx                              
1c61  pop     es                              
1c62  ret                                     
1c63  add     [bx+si],al                      

; ----- sub_1c64 -----
1c64  mov     ax,ds                           
1c66  nop                                     
1c67  inc     bp                              
1c68  push    bp                              
1c69  mov     bp,sp                           
1c6b  push    ds                              
1c6c  mov     ds,ax                           
1c6e  sub     sp,6h                           
1c71  mov     ax,1240h                        
1c74  push    ds                              
1c75  push    ax                              
1c76  lea     cx,[bp-6h]                      
1c79  push    ss                              
1c7a  push    cx                              
1c7b  push    word ptr [bp+8h]                
1c7e  push    word ptr [bp+6h]                
1c81  xor     dx,dx                           
1c83  push    dx                              
1c84  call    1FDCh                           
1c87  mov     [bp-8h],ax                      
1c8a  mov     ax,[bp-6h]                      
1c8d  sub     ax,[bp+6h]                      
1c90  mov     [123Ah],ax                      
1c93  mov     word ptr [1238h],0h             
1c99  test    byte ptr [bp-8h],4h             
1c9d  je      1CA5h                           
1c9f  mov     word ptr [1238h],200h           
1ca5  test    byte ptr [bp-8h],2h             
1ca9  je      1CB0h                           
1cab  or      byte ptr [1238h],1h             
1cb0  test    byte ptr [bp-8h],1h             
1cb4  je      1CBBh                           
1cb6  or      byte ptr [1239h],1h             
1cbb  mov     ax,1238h                        
1cbe  mov     dx,ds                           
1cc0  lea     sp,[bp-2h]                      
1cc3  pop     ds                              
1cc4  pop     bp                              
1cc5  dec     bp                              
1cc6  retf                                    
1cc7  nop                                     
1cc8  mov     ax,ds                           
1cca  nop                                     
1ccb  inc     bp                              
1ccc  push    bp                              
1ccd  mov     bp,sp                           
1ccf  push    ds                              
1cd0  mov     ds,ax                           
1cd2  push    si                              
1cd3  les     si,[bp+6h]                      
1cd6  mov     cx,es                           
1cd8  jcxz    1CDFh                           
1cda  or      byte ptr es:[si-2h],1h          
1cdf  pop     si                              
1ce0  sub     bp,2h                           
1ce3  mov     sp,bp                           
1ce5  pop     ds                              
1ce6  pop     bp                              
1ce7  dec     bp                              
1ce8  retf                                    

; ----- sub_1ce9 -----
1ce9  mov     ax,ds                           
1ceb  nop                                     
1cec  inc     bp                              
1ced  push    bp                              
1cee  mov     bp,sp                           
1cf0  push    ds                              
1cf1  mov     ds,ax                           
1cf3  push    si                              
1cf4  push    di                              
1cf5  mov     cx,[bp+6h]                      
1cf8  cmp     cx,-1Ah                         
1cfb  ja      1D66h                           
1cfd  push    ds                              
1cfe  mov     ax,[0AF4h]                      
1d01  or      ax,ax                           
1d03  je      1D4Dh                           
1d05  mov     di,20D4h                        
1d08  mov     si,[0AFCh]                      
1d0c  lds     bx,[0AF6h]                      
1d10  push    ds                              
1d11  push    si                              
1d12  push    di                              
1d13  call    di                              
1d15  pop     di                              
1d16  pop     si                              
1d17  jae     1D44h                           
1d19  mov     dx,ds                           
1d1b  lds     bx,[bx+0Eh]                     
1d1e  cmp     dx,si                           
1d20  jne     1D11h                           
1d22  pop     ax                              
1d23  pop     ds                              
1d24  push    ds                              
1d25  les     si,[0AF6h]                      
1d29  mov     si,es:[si+14h]                  
1d2d  lds     bx,[0AF2h]                      
1d31  mov     dx,ds                           
1d33  cmp     dx,ax                           
1d35  jne     1D10h                           
1d37  pop     ds                              
1d38  push    ds                              
1d39  cmp     di,17AEh                        
1d3d  je      1D4Dh                           
1d3f  mov     di,17AEh                        
1d42  jmp     1D08h                           
1d44  pop     si                              
1d45  cmp     di,20D4h                        
1d49  je      1D5Ah                           
1d4b  jmp     1D57h                           
1d4d  pop     es                              
1d4e  push    es                              
1d4f  mov     di,0AF2h                        
1d52  call    2044h                           
1d55  jb      1D65h                           
1d57  call    20D4h                           
1d5a  pop     ds                              
1d5b  mov     [0AF8h],dx                      
1d5f  mov     [0AF6h],bx                      
1d63  jmp     1D85h                           
1d65  pop     ds                              
1d66  xor     ax,ax                           
1d68  cwd                                     
1d69  mov     cx,[0AE6h]                      
1d6d  or      cx,[0AE4h]                      
1d71  je      1D85h                           
1d73  push    word ptr [bp+6h]                
1d76  call    far ptr  [0AE4h]                
1d7a  add     sp,2h                           
1d7d  cwd                                     
1d7e  or      ax,ax                           
1d80  je      1D85h                           
1d82  jmp     1CF5h                           
1d85  pop     di                              
1d86  pop     si                              
1d87  sub     bp,2h                           
1d8a  mov     sp,bp                           
1d8c  pop     ds                              
1d8d  pop     bp                              
1d8e  dec     bp                              
1d8f  retf                                    

; ----- sub_1d90 -----
1d90  push    bp                              
1d91  mov     bp,sp                           
1d93  push    di                              
1d94  push    si                              
1d95  push    ds                              
1d96  mov     cx,[bp+0Eh]                     
1d99  jcxz    1DC2h                           
1d9b  mov     bx,cx                           
1d9d  les     di,[bp+6h]                      
1da0  mov     si,di                           
1da2  xor     ax,ax                           
1da4  repne   scasb                           
1da6  neg     cx                              
1da8  add     cx,bx                           
1daa  mov     di,si                           
1dac  lds     si,[bp+0Ah]                     
1daf  rep     cmpsb                           
1db1  mov     al,[si-1h]                      
1db4  xor     cx,cx                           
1db6  cmp     al,es:[di-1h]                   
1dba  ja      1DC0h                           
1dbc  je      1DC2h                           
1dbe  dec     cx                              
1dbf  dec     cx                              
1dc0  not     cx                              
1dc2  mov     ax,cx                           
1dc4  pop     ds                              
1dc5  pop     si                              
1dc6  pop     di                              
1dc7  mov     sp,bp                           
1dc9  pop     bp                              
1dca  retf                                    
1dcb  add     [di-75h],dl                     
1dce  in      al,dx                           
1dcf  push    di                              
1dd0  push    si                              
1dd1  push    ds                              
1dd2  lds     si,[bp+6h]                      
1dd5  xor     ax,ax                           
1dd7  cwd                                     
1dd8  xor     bx,bx                           
1dda  lodsb                                   
1ddb  cmp     al,20h                          
1ddd  je      1DDAh                           
1ddf  cmp     al,9h                           
1de1  je      1DDAh                           
1de3  push    ax                              
1de4  cmp     al,2Dh                          
1de6  je      1DECh                           
1de8  cmp     al,2Bh                          
1dea  jne     1DEDh                           
1dec  lodsb                                   
1ded  cmp     al,39h                          
1def  ja      1E10h                           
1df1  sub     al,30h                          
1df3  jb      1E10h                           
1df5  shl     bx,1                            
1df7  rcl     dx,1                            
1df9  mov     cx,bx                           
1dfb  mov     di,dx                           
1dfd  shl     bx,1                            
1dff  rcl     dx,1                            
1e01  shl     bx,1                            
1e03  rcl     dx,1                            
1e05  add     bx,cx                           
1e07  adc     dx,di                           
1e09  add     bx,ax                           
1e0b  adc     dx,0h                           
1e0e  jmp     1DECh                           
1e10  pop     ax                              
1e11  cmp     al,2Dh                          
1e13  xchg    ax,bx                           
1e14  jne     1E1Dh                           
1e16  neg     ax                              
1e18  adc     dx,0h                           
1e1b  neg     dx                              
1e1d  pop     ds                              
1e1e  pop     si                              
1e1f  pop     di                              
1e20  pop     bp                              
1e21  retf                                    
1e22  add     [bx+si],al                      
1e24  add     [bx+si],al                      
1e26  add     [bx+si],al                      
1e28  add     [bx+si+4002h],ah                
1e2c  add     [bx+si],al                      
1e2e  add     [bx+si],al                      
1e30  add     [bx+si],al                      
1e32  add     al,cl                           
1e34  add     ax,40h                          
1e37  add     [bx+si],al                      
1e39  add     [bx+si],al                      
1e3b  add     [bx+si],al                      
1e3d  cli                                     
1e3e  or      [bx+si],al                      
1e41  add     [bx+si],al                      
1e43  add     [bx+si],al                      
1e45  add     [bx+si-64h],al                  
1e48  or      al,40h                          
1e4a  add     [bx+si],al                      
1e4c  add     [bx+si],al                      
1e4e  add     [bx+si],al                      
1e50  push    ax                              
1e51  ret                                     
1e52  cmovo   ax,[bx+si]                      
1e55  add     [bx+si],al                      
1e57  add     [bx+si],al                      
1e59  add     [si],ah                         
1e5b  hlt                                     
1e5c  adc     al,[bx+si]                      
1e5f  add     [bx+si],al                      
1e61  add     [bx+si],al                      
1e63  adc     byte ptr [bp+1698h],40h         
1e68  add     [bx+si],al                      
1e6a  add     [bx+si],al                      
1e6c  add     [bx+si],ah                      
1e6e  mov     sp,19BEh                        
1e71  inc     ax                              
1e72  add     [bx+si],al                      
1e74  add     [si],al                         
1e76  mov     di,1BC9h                        
1e79  mov     ???,[si]                        
1e7b  inc     ax                              
1e7c  add     [bx+di-3313h],ah                
1e80  into                                    
1e81  sbb     ax,dx                           
1e83  ror     word ptr [bp+40h],cl            
1e86  sahf                                    
1e87  mov     ch,70h                          
1e89  sub     bp,[bx+si-3A53h]                
1e8d  popf                                    
1e8e  imul    ax,[bx+si-3h],0E525h            
1e93  sbb     cl,[bp+194Fh]                   
1e97  jmp     1E1Ch                           
1e99  inc     ax                              
1e9a  xlat                                    
1e9b  xchg    ax,bp                           
1e9c  inc     bx                              
1e9d  push    cs                              
1e9e  add     ax,298Dh                        
1ea1  scasw                                   
1ea2  sahf                                    
1ea3  inc     ax                              
1ea4  mov     al,[0ED44h]                     
1ea7  adc     word ptr [bp+si],818Fh          
1eab  cmp     byte ptr [bx+di-2AC0h],0A6h     
1eb0  iret                                    
1eb1  dec     word ptr [bx+di+1Fh]            
1eb4  js      1E78h                           
1eb6  rol     word ptr [bx+si-20h],cl         
1eb9  mov     cx,gs                           
1ebb  or      cl,47h                          
1ebe  mov     dx,0A893h                       
1ec1  inc     cx                              
1ec2  imul    dx,[di+27h],39h                 
1ec6  lea     si,di                           
1ec8  jo      1EAAh                           
1eca  jl      1F0Eh                           
1ecc  mov     ds,si                           
1ece  stc                                     
1ecf  popf                                    
1ed0  sti                                     
1ed1  jmp     1F51h                           
1ed3  stosb                                   
1ed4  push    cx                              
1ed5  inc     bx                              
1ed6  jbe     1EBBh                           
1ed8  int 3                                   
1ed9  repne   sub     [bx],bp                 
1edc  test    [bx+di+4426h],al                
1ee0  int     0CCh                            
1ee2  int 3                                   
1ee3  int 3                                   
1ee4  int 3                                   
1ee5  int 3                                   
1ee6  int 3                                   
1ee7  int 3                                   
1ee8  sti                                     
1ee9  aas                                     
1eea  or      dl,bh                           
1eec  mov     [3D70h],ax                      
1eef  or      dl,bh                           
1ef1  mov     [3FF8h],ax                      
1ef4  cmp     bx,di                           
1ef6  dec     di                              
1ef7  lea     dx,[bx+126Eh]                   
1efb  xor     bp,3Fh                          
1efe  sub     al,65h                          
1f00  sbb     dx,sp                           
1f02  pop     ax                              
1f03  pop     ss                              
1f04  mov     bh,0D1h                         
1f06  ???                                     
1f07  aas                                     
1f08  and     ax,[si+1B47h]                   
1f0c  inc     di                              
1f0d  lodsb                                   
1f0e  lds     sp,[bx+3FEEh]                   
1f12  mov     dh,69h                          
1f14  insb                                    
1f15  scasw                                   
1f16  add     ax,37BDh                        
1f19  xchg    ch,bl                           
1f1b  aas                                     
1f1c  mov     sp,7A42h                        
1f1f  in      ax,0D5h                         
1f21  xchg    ax,sp                           
1f22  mov     di,0E7D6h                       
1f25  aas                                     
1f26  std                                     
1f27  into                                    
1f28  popa                                    
1f29  test    [bx+di],dl                      
1f2b  ja      1EF9h                           
1f2d  stosw                                   
1f2e  in      al,3Fh                          
1f30  pop     bx                              
1f31  loopz   1F80h                           
1f33  les     di,[bp-6A6Ch]                   
1f37  out     0C9h,al                         
1f39  aas                                     
1f3a  push    bx                              
1f3b  cmp     si,[di+44h]                     
1f3e  int     14h                             
1f40  mov     si,0AF9Ah                       
1f43  aas                                     
1f44  mov     dx,3994h                        
1f47  inc     bp                              
1f48  lodsw                                   
1f49  push    ds                              
1f4a  mov     cl,0CFh                         
1f4c  xchg    ax,sp                           
1f4d  aas                                     
1f4e  mov     dl,0BCh                         
1f51  mov     dx,313Bh                        
1f54  popa                                    
1f55  mov     di,[bp+si+3Fh]                  
1f58  pop     cx                              
1f59  sar     word ptr [bp-4Fh],53h           
1f5d  jl      1F71h                           
1f5f  mov     bx,3F5Fh                        
1f62  das                                     
1f63  lea     ax,[92BEh]                      
1f67  test    [di],dx                         
1f69  sti                                     
1f6a  inc     sp                              
1f6b  aas                                     
1f6c  movsw                                   
1f6d  jmp     0C4A9h                          
1f70  daa                                     
1f71  jmp     3F2Ah:0A87Fh                    
1f76  mov     ax,[0BCE4h]                     
1f79  jl      1FC2h                           
1f7c  rcr     ch,1                            
1f7e  push    bp                              
1f7f  push    es                              
1f81  int 3                                   
1f82  and     dx,[si+77h]                     
1f85  cmp     di,-6Fh                         
1f88  cmp     word ptr [di],193Ah             
1f8c  jp      1FF1h                           
1f8e  and     ax,3143h                        
1f91  shr     byte ptr [si-2EC4h],38h         
1f96  add     byte ptr [bx-69h],0B8h          
1f9a  add     ch,bh                           
1f9c  xlat                                    
1f9d  cmp     ax,[bx+si]                      

; ----- sub_1f9e -----
1f9e  mov     bx,1DD2h                        
1fa1  or      di,di                           
1fa3  jns     1FAAh                           
1fa5  mov     bx,1E90h                        
1fa8  neg     di                              
1faa  push    di                              
1fab  pop     di                              
1fac  add     bx,46h                          
1faf  or      di,di                           
1fb1  je      1FDAh                           
1fb3  mov     ax,di                           
1fb5  shr     di,1                            
1fb7  shr     di,1                            
1fb9  shr     di,1                            
1fbb  push    di                              
1fbc  and     ax,7h                           
1fbf  je      1FABh                           
1fc1  push    bx                              
1fc2  shl     al,1                            
1fc4  mov     ah,al                           
1fc6  shl     al,1                            
1fc8  shl     al,1                            
1fca  add     al,ah                           
1fcc  xor     ah,ah                           
1fce  add     bx,ax                           
1fd0  wait                                    
1fd1  fld     tword ptr cs:[bx]               
1fd4  wait                                    
1fd5  fmulp   st(1)                           
1fd7  pop     bx                              
1fd8  jmp     1FABh                           
1fda  ret                                     
1fdb  add     [bx+si],al                      

; ----- sub_1fdc -----
1fdc  push    bp                              
1fdd  mov     bp,sp                           
1fdf  sub     sp,0Eh                          
1fe2  push    ss                              
1fe3  lea     ax,[bp-0Ah]                     
1fe6  push    ax                              
1fe7  push    word ptr [bp+0Ch]               
1fea  push    word ptr [bp+0Ah]               
1fed  push    word ptr [bp+8h]                
1ff0  push    word ptr [bp+6h]                
1ff3  push    word ptr [bp+4h]                
1ff6  call    2150h                           
1ff9  wait                                    
1ffa  fstcw   word ptr [bp-0Eh]               
1ffd  wait                                    
1ffe  fld     tword ptr [bp-0Ah]              
2001  mov     bx,[bp-0Eh]                     
2004  or      bx,18h                          
2007  mov     [bp-0Ch],bx                     
200a  wait                                    
200b  fclex                                   
200d  les     bx,[bp+0Eh]                     
2010  wait                                    
2011  fldcw   word ptr [bp-0Ch]               
2014  wait                                    
2015  fstp    qword ptr es:[bx]               
2018  wait                                    
2019  fstsw   word ptr [bp-0Ch]               
201c  wait                                    
201d  fclex                                   
201f  wait                                    
2020  fldcw   word ptr [bp-0Eh]               
2023  or      ax,ax                           
2025  jne     203Eh                           
2027  mov     bx,[bp-0Ch]                     
202a  xor     ax,ax                           
202c  test    bx,18h                          
2030  je      203Eh                           
2032  mov     ax,2h                           
2035  test    bx,8h                           
2039  jne     203Eh                           
203b  mov     ax,1h                           
203e  mov     sp,bp                           
2040  pop     bp                              
2041  ret     0Eh                             

; ----- sub_2044 -----
2044  mov     dx,cx                           
2046  add     dx,1019h                        
204a  and     dx,0F000h                       
204e  push    cx                              
204f  push    es                              
2050  mov     bx,cs:[10h]                     
2055  xor     cx,cx                           
2057  or      dx,dx                           
2059  jne     2062h                           
205b  test    bx,10h                          
205f  jne     20C1h                           
2061  inc     cx                              
2062  push    bx                              
2063  mov     ax,2002h                        
2066  test    bx,1h                           
206a  jne     206Fh                           
206c  mov     ax,2020h                        
206f  push    ax                              
2070  push    cx                              
2071  push    dx                              
2072  call far KERNEL.GLOBALALLOC             
2077  pop     bx                              
2078  or      ax,ax                           
207a  je      20C1h                           
207c  push    ax                              
207d  test    bx,1h                           
2081  je      2093h                           
2083  push    ax                              
2084  call far KERNEL.GLOBALLOCK              
2089  or      ax,ax                           
208b  jne     20BBh                           
208d  or      ax,dx                           
208f  je      20BBh                           
2091  mov     ax,dx                           
2093  mov     ds,ax                           
2095  push    ax                              
2096  call far KERNEL.GLOBALSIZE              
209b  or      dx,ax                           
209d  je      20BBh                           
209f  mov     dx,ax                           
20a1  pop     ax                              
20a2  pop     es                              
20a3  pop     cx                              
20a4  xor     bx,bx                           
20a6  mov     [bx+6h],ax                      
20a9  mov     ax,es:[di+0Ch]                  
20ad  mov     [bx+2h],ax                      
20b0  mov     ax,dx                           
20b2  call    23E2h                           
20b5  call    2416h                           
20b8  clc                                     
20b9  jmp     20C4h                           
20bb  mov     ax,12h                          
20be  jmp     1002h                           
20c1  pop     es                              
20c2  pop     cx                              
20c3  stc                                     
20c4  ret                                     
20c5  add     [bx+si],al                      

; ----- sub_20c6 -----
20c6  push    bp                              
20c7  mov     bp,sp                           
20c9  mov     bx,0AF2h                        
20cc  push    ds                              
20cd  pop     es                              
20ce  call    23B8h                           
20d1  pop     bp                              
20d2  ret                                     
20d3  add     [bx+si],al                      

; ----- sub_20d4 -----
20d4  inc     cx                              
20d5  and     cl,0FEh                         
20d8  push    bx                              
20d9  cld                                     
20da  mov     si,[bx+0Ah]                     
20dd  mov     bx,[bx+0Ch]                     
20e0  xor     di,di                           
20e2  jmp     2107h                           
20e4  mov     ax,bx                           
20e6  pop     bx                              
20e7  test    al,1h                           
20e9  jne     212Dh                           
20eb  push    bx                              
20ec  mov     si,[bx+8h]                      
20ef  mov     bx,[bx+0Ah]                     
20f2  cmp     bx,si                           
20f4  je      212Ch                           
20f6  dec     bx                              
20f7  xor     di,di                           
20f9  jmp     2107h                           
20fb  nop                                     
20fc  lea     dx,[si-2h]                      
20ff  cmp     dx,bx                           
2101  jae     20E4h                           
2103  add     si,ax                           
2105  jb      212Ah                           
2107  lodsw                                   
2108  test    al,1h                           
210a  je      20FCh                           
210c  mov     di,si                           
210e  dec     ax                              
210f  cmp     ax,cx                           
2111  jae     2136h                           
2113  add     si,ax                           
2115  jb      212Ah                           
2117  mov     dx,ax                           
2119  lodsw                                   
211a  test    al,1h                           
211c  je      20FCh                           
211e  add     ax,dx                           
2120  add     ax,2h                           
2123  mov     si,di                           
2125  mov     [si-2h],ax                      
2128  jmp     210Eh                           
212a  mov     ax,ax                           
212c  pop     bx                              
212d  mov     ax,[bx+8h]                      
2130  mov     [bx+0Ah],ax                     
2133  stc                                     
2134  jmp     214Fh                           
2136  pop     bx                              
2137  mov     [si-2h],cx                      
213a  je      2145h                           
213c  add     di,cx                           
213e  sub     ax,cx                           
2140  dec     ax                              
2141  mov     [di],ax                         
2143  sub     di,cx                           
2145  add     di,cx                           
2147  mov     [bx+0Ah],di                     
214a  mov     ax,si                           
214c  mov     dx,ds                           
214e  clc                                     
214f  ret                                     

; ----- sub_2150 -----
2150  push    bp                              
2151  mov     bp,sp                           
2153  sub     sp,34h                          
2156  push    si                              
2157  push    di                              
2158  push    ds                              
2159  lds     si,[bp+6h]                      
215c  xor     ax,ax                           
215e  mov     [bp-0Eh],ax                     
2161  mov     [bp-10h],ds                     
2164  mov     [bp-12h],si                     
2167  mov     [bp-14h],ax                     
216a  mov     [bp-18h],ax                     
216d  mov     [bp-16h],ax                     
2170  mov     word ptr [bp-1Ah],19h           
2175  push    ss                              
2176  pop     es                              
2177  lea     di,[bp-34h]                     
217a  lodsb                                   
217b  cmp     al,20h                          
217d  je      217Ah                           
217f  cmp     al,9h                           
2181  je      217Ah                           
2183  cmp     al,0Ah                          
2185  je      217Ah                           
2187  cmp     al,0Dh                          
2189  je      217Ah                           
218b  or      al,al                           
218d  jne     2192h                           
218f  jmp     2381h                           
2192  cmp     al,2Bh                          
2194  je      219Fh                           
2196  cmp     al,2Dh                          
2198  jne     21A0h                           
219a  mov     word ptr [bp-14h],8000h         
219f  lodsb                                   
21a0  cmp     al,30h                          
21a2  jb      21A8h                           
21a4  cmp     al,39h                          
21a6  jbe     21B8h                           
21a8  cmp     al,2Eh                          
21aa  jne     218Fh                           
21ac  lodsb                                   
21ad  cmp     al,30h                          
21af  jb      218Fh                           
21b1  cmp     al,39h                          
21b3  ja      218Fh                           
21b5  jmp     21CCh                           
21b7  lodsb                                   
21b8  cmp     al,30h                          
21ba  je      21B7h                           
21bc  or      al,al                           
21be  jne     21C7h                           
21c0  dec     si                              
21c1  mov     [bp-12h],si                     
21c4  jmp     2385h                           
21c7  cmp     al,2Eh                          
21c9  jne     21DDh                           
21cb  lodsb                                   
21cc  dec     word ptr [bp-16h]               
21cf  cmp     al,30h                          
21d1  je      21CBh                           
21d3  inc     word ptr [bp-16h]               
21d6  or      al,al                           
21d8  je      21C0h                           
21da  jmp     2207h                           
21dc  lodsb                                   
21dd  cmp     al,30h                          
21df  jb      2202h                           
21e1  cmp     al,39h                          
21e3  ja      2202h                           
21e5  sub     al,30h                          
21e7  stosb                                   
21e8  dec     word ptr [bp-1Ah]               
21eb  jne     21DCh                           
21ed  lodsb                                   
21ee  inc     word ptr [bp-16h]               
21f1  cmp     al,30h                          
21f3  jb      21F9h                           
21f5  cmp     al,39h                          
21f7  jbe     21EDh                           
21f9  dec     word ptr [bp-16h]               
21fc  cmp     al,2Eh                          
21fe  je      221Ah                           
2200  jmp     2223h                           
2202  cmp     al,2Eh                          
2204  jne     2223h                           
2206  lodsb                                   
2207  cmp     al,30h                          
2209  jb      2223h                           
220b  cmp     al,39h                          
220d  ja      2223h                           
220f  sub     al,30h                          
2211  stosb                                   
2212  dec     word ptr [bp-16h]               
2215  dec     word ptr [bp-1Ah]               
2218  jne     2206h                           
221a  lodsb                                   
221b  cmp     al,30h                          
221d  jb      2223h                           
221f  cmp     al,39h                          
2221  jbe     221Ah                           
2223  neg     word ptr [bp-1Ah]               
2226  add     word ptr [bp-1Ah],19h           
222a  lea     bx,[si-1h]                      
222d  mov     [bp-12h],bx                     
2230  xor     bx,bx                           
2232  cmp     al,45h                          
2234  je      2244h                           
2236  cmp     al,65h                          
2238  je      2244h                           
223a  cmp     al,44h                          
223c  je      2244h                           
223e  cmp     al,64h                          
2240  je      2244h                           
2242  jmp     2296h                           
2244  lodsb                                   
2245  cmp     al,2Bh                          
2247  je      2252h                           
2249  cmp     al,2Dh                          
224b  jne     2253h                           
224d  mov     word ptr [bp-18h],0FFFFh        
2252  lodsb                                   
2253  cmp     al,30h                          
2255  jb      2296h                           
2257  cmp     al,39h                          
2259  ja      2296h                           
225b  sub     ax,30h                          
225e  mov     bx,ax                           
2260  lodsb                                   
2261  cmp     al,30h                          
2263  jb      2289h                           
2265  cmp     al,39h                          
2267  ja      2289h                           
2269  sub     al,30h                          
226b  cmp     bx,666h                         
226f  ja      227Dh                           
2271  shl     bx,1                            
2273  add     ax,bx                           
2275  shl     bx,1                            
2277  shl     bx,1                            
2279  add     bx,ax                           
227b  jns     2260h                           
227d  mov     bx,3FFFh                        
2280  lodsb                                   
2281  cmp     al,30h                          
2283  jb      2289h                           
2285  cmp     al,39h                          
2287  jbe     2280h                           
2289  xor     bx,[bp-18h]                     
228c  sub     bx,[bp-18h]                     
228f  add     [bp-16h],bx                     
2292  dec     si                              
2293  mov     [bp-12h],si                     
2296  cmp     word ptr [bp-1Ah],0h            
229a  jne     229Fh                           
229c  jmp     2385h                           
229f  mov     byte ptr es:[di],0h             
22a3  dec     di                              
22a4  cmp     word ptr [bp-1Ah],18h           
22a8  jbe     22C1h                           
22aa  mov     al,es:[di]                      
22ad  mov     byte ptr es:[di],0h             
22b1  dec     word ptr [bp-1Ah]               
22b4  inc     word ptr [bp-16h]               
22b7  dec     di                              
22b8  cmp     al,5h                           
22ba  jb      22D0h                           
22bc  inc     byte ptr es:[di]                
22bf  jmp     22D6h                           
22c1  cmp     word ptr [bp-16h],0h            
22c5  je      22D6h                           
22c7  jmp     22D0h                           
22c9  dec     di                              
22ca  dec     word ptr [bp-1Ah]               
22cd  inc     word ptr [bp-16h]               
22d0  cmp     byte ptr es:[di],0h             
22d4  je      22C9h                           
22d6  push    ss                              
22d7  lea     ax,[bp-34h]                     
22da  push    ax                              
22db  push    word ptr [bp-1Ah]               
22de  lea     ax,[bp-0Ch]                     
22e1  push    ax                              
22e2  call    295Eh                           
22e5  mov     ax,[bp-16h]                     
22e8  or      ax,ax                           
22ea  je      230Ah                           
22ec  cmp     ax,1450h                        
22ef  jl      22F4h                           
22f1  jmp     2397h                           
22f4  cmp     ax,0EBB0h                       
22f7  jg      22FCh                           
22f9  jmp     2391h                           
22fc  push    ss                              
22fd  lea     ax,[bp-0Ch]                     
2300  push    ax                              
2301  push    word ptr [bp-16h]               
2304  push    word ptr [bp+4h]                
2307  call    2704h                           
230a  mov     ax,[bp-4h]                      
230d  mov     bx,[bp-6h]                      
2310  mov     cx,[bp-8h]                      
2313  mov     dx,[bp-0Ah]                     
2316  cmp     word ptr [bp-0Ch],8000h         
231b  jb      2339h                           
231d  ja      2325h                           
231f  test    dx,1h                           
2323  je      2339h                           
2325  add     dx,1h                           
2328  adc     cx,0h                           
232b  adc     bx,0h                           
232e  adc     ax,0h                           
2331  jae     2339h                           
2333  or      ah,80h                          
2336  inc     word ptr [bp-2h]                
2339  mov     si,[bp-2h]                      
233c  cmp     si,7FFFh                        
2340  jae     2397h                           
2342  or      si,si                           
2344  jne     2350h                           
2346  mov     si,ax                           
2348  or      si,bx                           
234a  or      si,cx                           
234c  or      si,dx                           
234e  je      2391h                           
2350  lds     si,[bp+0Eh]                     
2353  mov     [si+6h],ax                      
2356  mov     [si+4h],bx                      
2359  mov     [si+2h],cx                      
235c  mov     [si],dx                         
235e  mov     ax,[bp-2h]                      
2361  or      ax,[bp-14h]                     
2364  mov     [si+8h],ax                      
2367  lds     si,[bp+0Ah]                     
236a  mov     ax,[bp-12h]                     
236d  mov     [si],ax                         
236f  mov     ax,[bp-10h]                     
2372  mov     [si+2h],ax                      
2375  mov     ax,[bp-0Eh]                     
2378  pop     ds                              
2379  pop     di                              
237a  pop     si                              
237b  mov     sp,bp                           
237d  pop     bp                              
237e  ret     0Eh                             
2381  or      word ptr [bp-0Eh],4h            
2385  les     di,[bp+0Eh]                     
2388  xor     ax,ax                           
238a  mov     cx,5h                           
238d  rep     stosw                           
238f  jmp     2367h                           
2391  or      word ptr [bp-0Eh],1h            
2395  jmp     2385h                           
2397  or      word ptr [bp-0Eh],2h            
239b  lds     si,[bp+0Eh]                     
239e  mov     ax,7FFFh                        
23a1  or      ax,[bp-14h]                     
23a4  mov     [si+8h],ax                      
23a7  mov     word ptr [si+6h],8000h          
23ac  xor     ax,ax                           
23ae  mov     [si+4h],ax                      
23b1  mov     [si+2h],ax                      
23b4  mov     [si],ax                         
23b6  jmp     2367h                           

; ----- sub_23b8 -----
23b8  push    bp                              
23b9  mov     bp,sp                           
23bb  push    di                              
23bc  les     bx,es:[bx]                      
23bf  mov     cx,es                           
23c1  jcxz    23DDh                           
23c3  mov     ax,es:[bx+6h]                   
23c7  les     bx,es:[bx+0Eh]                  
23cb  push    bx                              
23cc  push    es                              
23cd  push    ax                              
23ce  push    ax                              
23cf  call far KERNEL.GLOBALUNLOCK            
23d4  call far KERNEL.GLOBALFREE              
23d9  pop     es                              
23da  pop     bx                              
23db  jmp     23BFh                           
23dd  pop     di                              
23de  mov     sp,bp                           
23e0  pop     bp                              
23e1  ret                                     

; ----- sub_23e2 -----
23e2  push    es                              
23e3  push    di                              
23e4  mov     di,ax                           
23e6  add     di,bx                           
23e8  mov     [bx+4h],di                      
23eb  dec     di                              
23ec  dec     di                              
23ed  sub     ax,18h                          
23f0  lea     si,[bx+16h]                     
23f3  mov     word ptr [di],0FFFEh            
23f7  mov     [bx+0Ch],di                     
23fa  dec     ax                              
23fb  mov     [si],ax                         
23fd  mov     [bx],ds                         
23ff  mov     ax,si                           
2401  mov     dx,ds                           
2403  mov     es,dx                           
2405  lea     di,[bx+8h]                      
2408  cld                                     
2409  stosw                                   
240a  stosw                                   
240b  inc     di                              
240c  inc     di                              
240d  xor     ax,ax                           
240f  stosw                                   
2410  stosw                                   
2411  stosw                                   
2412  stosw                                   
2413  pop     di                              
2414  pop     es                              
2415  ret                                     

; ----- sub_2416 -----
2416  mov     ax,es:[di+2h]                   
241a  or      ax,ax                           
241c  jne     2427h                           
241e  mov     es:[di+2h],ds                   
2422  mov     es:[di],bx                      
2425  jmp     243Bh                           
2427  push    es                              
2428  les     si,es:[di+8h]                   
242c  mov     es:[si+10h],ds                  
2430  mov     es:[si+0Eh],bx                  
2434  mov     [bx+14h],es                     
2437  mov     [bx+12h],si                     
243a  pop     es                              
243b  mov     es:[di+0Ah],ds                  
243f  mov     es:[di+8h],bx                   
2443  mov     es:[di+6h],ds                   
2447  mov     es:[di+4h],bx                   
244b  ret                                     
244c  add     [bx+si],al                      
244e  add     [bx+si],al                      
2450  add     [bx+si],al                      
2452  add     [bx+si],al                      
2454  add     [bx+si+4002h],ah                
2458  add     [bx+si],al                      
245a  add     [bx+si],al                      
245c  add     [bx+si],al                      
245e  add     [bx+si],al                      
2460  add     al,cl                           
2462  add     ax,40h                          
2465  add     [bx+si],al                      
2467  add     [bx+si],al                      
2469  add     [bx+si],al                      
246b  add     [bx+si],al                      
246d  cli                                     
246e  or      [bx+si],al                      
2471  add     [bx+si],al                      
2473  add     [bx+si],al                      
2475  add     [bx+si],al                      
2477  add     [bx+si-64h],al                  
247a  or      al,40h                          
247c  add     [bx+si],al                      
247e  add     [bx+si],al                      
2480  add     [bx+si],al                      
2482  add     [bx+si],al                      
2484  push    ax                              
2485  ret                                     
2486  cmovo   ax,[bx+si]                      
2489  add     [bx+si],al                      
248b  add     [bx+si],al                      
248d  add     [bx+si],al                      
248f  add     [si],ah                         
2491  hlt                                     
2492  adc     al,[bx+si]                      
2495  add     [bx+si],al                      
2497  add     [bx+si],al                      
2499  add     [bx+si],al                      
249b  adc     byte ptr [bp+1698h],40h         
24a0  add     [bx+si],al                      
24a2  add     [bx+si],al                      
24a4  add     [bx+si],al                      
24a6  add     [bx+si],ah                      
24a8  mov     sp,19BEh                        
24ab  inc     ax                              
24ac  add     [bx+si],al                      
24ae  add     [bx+si],al                      
24b0  add     [si],al                         
24b2  mov     di,1BC9h                        
24b5  mov     ???,[si]                        
24b7  inc     ax                              
24b8  add     [bx+si],al                      
24ba  add     [bx+di-3313h],ah                
24be  into                                    
24bf  sbb     ax,dx                           
24c1  ror     word ptr [bp+40h],cl            
24c4  and     al,dh                           
24c6  sahf                                    
24c7  mov     ch,70h                          
24c9  sub     bp,[bx+si-3A53h]                
24cd  popf                                    
24ce  imul    ax,[bx+si-30h],0FD5Dh           
24d3  and     ax,1AE5h                        
24d6  mov     cs,[bx+19h]                     
24d9  jmp     245Eh                           
24db  inc     ax                              
24dc  jno     2474h                           
24de  xlat                                    
24df  xchg    ax,bp                           
24e0  inc     bx                              
24e1  push    cs                              
24e2  add     ax,298Dh                        
24e5  scasw                                   
24e6  sahf                                    
24e7  inc     ax                              
24e8  stc                                     
24e9  mov     di,44A0h                        
24ec  in      ax,dx                           
24ed  adc     word ptr [bp+si],818Fh          
24f1  cmp     byte ptr [bx+di-40C0h],3Ch      
24f6  aad     0A6h                            
24f8  iret                                    
24f9  dec     word ptr [bx+di+1Fh]            
24fc  js      24C0h                           
24fe  rol     word ptr [bx+si+6Fh],cl         
2501  mov     al,8Ch                          
2504  jmp     0EE87h                          
2507  inc     di                              
2508  mov     dx,0A893h                       
250b  inc     cx                              
250c  mov     sp,6B85h                        
250f  push    bp                              
2510  daa                                     
2511  cmp     [di+70F7h],cx                   
2515  loopne  2593h                           
2517  inc     dx                              
2518  mov     sp,8EDDh                        
251b  fdivp   st(1)                           
251d  popf                                    
251e  sti                                     
251f  jmp     259Fh                           
2521  stosb                                   
2522  push    cx                              
2523  inc     bx                              
2524  mov     ax,[76E6h]                      
2527  jcxz    24F5h                           
2529  repne   sub     [bx],bp                 
252c  test    [bx+di+4426h],al                
2530  sub     [bx+si],dl                      
2532  pop     ss                              
2533  stosb                                   
2534  clc                                     
2535  scasb                                   
2536  adc     bl,ah                           
2538  lds     ax,sp                           
253a  cli                                     
253b  inc     sp                              
253c  jmp     24E5h                           
253e  aam     0F3h                            
2540  imul    bx                              
2542  loopz   258Eh                           
2544  jp      24DBh                           
2546  iret                                    
2547  inc     bp                              
2548  int 3                                   
254a  mov     word ptr [bx+di-59F2h],0A0AEh   
2550  sbb     bx,sp                           
2552  mov     [0D46h],ax                      
2555  pop     ss                              
2557  or      al,75h                          
2559  add     word ptr [bp+7675h],48C9h       
255f  dec     bp                              
2560  pop     ax                              
2561  inc     dx                              
2562  in      al,0A7h                         
2564  xchg    ax,bx                           
2565  cmp     [bp+di],di                      
2567  xor     ax,0B2B8h                       
256a  in      ax,dx                           
256b  push    bx                              
256c  dec     bp                              
256d  cmpsw                                   
256e  in      ax,5Dh                          
2570  cmp     ax,5DC5h                        
2573  cmp     cx,[bp+di-6D62h]                
2577  pop     dx                              
2578  call    far ptr  [di-5Ah]               
257b  lock                                    
257c  mov     ax,[0C020h]                     
257f  push    sp                              
2580  movsw                                   
2581  mov     [bx],???                        
2583  popa                                    
2584  sar     bp,1                            
2586  mov     bx,[bp+si-75h]                  
2589  fsub    dword ptr [di]                  
258b  pop     bp                              
258c  mov     cx,di                           
258e  ??? (FPU)                               
2591  xchg    ax,bp                           
2592  clc                                     
2593  rep     daa                             
2595  mov     di,0C8A2h                       
2598  pop     bp                              
2599  fld     qword ptr [bx+si+4C6Eh]         
259d  leave                                   
259e  wait                                    
259f  xchg    ax,di                           
25a0  and     [bp+si+5202h],cl                
25a4  pusha                                   
25a5  les     sp,[di]                         
25a7  jne     2576h                           
25a9  int 3                                   
25aa  int     0CCh                            
25ac  int 3                                   
25ad  int 3                                   
25ae  int 3                                   
25af  int 3                                   
25b0  int 3                                   
25b1  int 3                                   
25b2  sti                                     
25b3  aas                                     
25b4  jno     25F3h                           
25b6  or      dl,bh                           
25b8  mov     [3D70h],ax                      
25bb  or      dl,bh                           
25bd  mov     [3FF8h],ax                      
25c0  pop     dx                              
25c1  cmp     bx,di                           
25c4  dec     di                              
25c5  lea     dx,[bx+126Eh]                   
25c9  xor     bp,3Fh                          
25cc  ret                                     
25cd  shr     word ptr [si],cl                
25cf  sbb     dx,sp                           
25d2  pop     ax                              
25d3  pop     ss                              
25d4  mov     bh,0D1h                         
25d6  ???                                     
25d7  aas                                     
25d8  ror     byte ptr [bx],1                 
25da  and     ax,[si+1B47h]                   
25de  inc     di                              
25df  lodsb                                   
25e0  lds     sp,[bx+3FEEh]                   
25e4  inc     ax                              
25e5  cmpsb                                   
25e6  mov     dh,69h                          
25e8  insb                                    
25e9  scasw                                   
25ea  add     ax,37BDh                        
25ed  xchg    ch,bl                           
25ef  aas                                     
25f0  xor     di,[di]                         
25f2  mov     sp,7A42h                        
25f5  in      ax,0D5h                         
25f7  xchg    ax,sp                           
25f8  mov     di,0E7D6h                       
25fb  aas                                     
25fc  ret     0FDFDh                          
25ff  into                                    
2600  popa                                    
2601  test    [bx+di],dl                      
2603  ja      25D1h                           
2605  stosw                                   
2606  in      al,3Fh                          
2608  das                                     
2609  dec     sp                              
260a  pop     bx                              
260b  loopz   265Ah                           
260d  les     di,[bp-6A6Ch]                   
2611  out     0C9h,al                         
2613  aas                                     
2614  xchg    ax,dx                           
2615  les     dx,[bp+di+3Bh]                  
2618  jne     265Eh                           
261a  int     14h                             
261c  mov     si,0AF9Ah                       
261f  aas                                     
2620  fisub   word ptr [bx-46h]               
2623  xchg    ax,sp                           
2624  cmp     [di-53h],ax                     
2627  push    ds                              
2628  mov     cl,0CFh                         
262a  xchg    ax,sp                           
262b  aas                                     
262c  and     al,23h                          
262e  mov     dl,0BCh                         
2631  mov     dx,313Bh                        
2634  popa                                    
2635  mov     di,[bp+si+3Fh]                  
2638  popa                                    
2639  push    bp                              
263a  pop     cx                              
263b  sar     word ptr [bp-4Fh],53h           
263f  jl      2653h                           
2641  mov     bx,3F5Fh                        
2644  xlat                                    
2645  out     dx,al                           
2646  das                                     
2647  lea     ax,[92BEh]                      
264b  test    [di],dx                         
264d  sti                                     
264e  inc     sp                              
264f  aas                                     
2650  and     al,3Fh                          
2652  movsw                                   
2653  jmp     0CB8Fh                          
2656  daa                                     
2657  jmp     3F2Ah:0A87Fh                    
265c  jge     260Ah                           
265e  mov     ax,[0BCE4h]                     
2661  jl      26AAh                           
2664  rcr     ch,1                            
2666  push    bp                              
2667  arpl    ds:[bp+di+6h],di                
266b  int 3                                   
266c  and     dx,[si+77h]                     
266f  cmp     di,-6Fh                         
2672  cmp     word ptr [di],0FA91h            
2676  cmp     bl,[bx+di]                      
2678  jp      26DDh                           
267a  and     ax,3143h                        
267d  shr     byte ptr [si+213Ch],89h         
2682  sar     word ptr [bx+si],1              
2684  add     byte ptr [bx-69h],0B8h          
2688  add     ch,bh                           
268a  xlat                                    
268b  cmp     bx,sp                           
268d  mov     [bx+si+8h],bl                   
2690  sbb     si,[bx+di-1C18h]                
2694  xchg    ah,[bp+3B03h]                   
2698  mov     byte ptr [si+4245h],7h          
269d  mov     dh,99h                          
269f  jne     26D8h                           
26a1  fld     tword ptr [333Ah]               
26a5  jno     26C3h                           
26a7  shl     byte ptr [bp+di],cl             
26a9  ??? (FPU)                               
26ab  out     dx,al                           
26ac  dec     cx                              
26ad  nop                                     
26ae  pop     dx                              
26af  cmp     [bp-4179h],sp                   
26b3  rcl     byte ptr [bx-26h],0A5h          
26b7  and     byte ptr [bp-4A5Eh],32h         
26bc  loop    2726h                           
26be  mov     dl,11h                          
26c0  cmpsw                                   
26c1  push    dx                              
26c2  lahf                                    
26c3  inc     sp                              
26c4  pop     cx                              
26c5  mov     bh,10h                          
26c7  sub     al,25h                          
26c9  dec     cx                              
26ca  in      al,2Dh                          
26cc  xor     al,4Fh                          
26cf  push    bx                              
26d0  scasb                                   
26d1  into                                    
26d2  imul    sp,[di],-71h                    
26d5  pop     cx                              
26d6  add     al,0A4h                         
26d8  rcr     dh,0C2h                         
26db  jge     26D8h                           
26dd  call    45A6h                           
26e0  sahf                                    
26e1  out     88h,ax                          
26e3  pop     dx                              
26e4  push    di                              
26e5  xchg    ax,cx                           
26e6  cmp     al,0BFh                         
26e8  push    ax                              
26e9  and     word ptr [bp+si],18h            
26ec  dec     si                              
26ed  dec     bx                              
26ee  bound   di,bp                           
26f1  or      word ptr [bx+6AFh],-6Ch         
26f6  jge     2709h                           
26f8  in      al,2Dh                          
26fa  ficomp  word ptr [bx-2D32h]             
26fe  enter   0DD04h,0A6h                     
2702  fmul    dword ptr [bp+si]               

; ----- sub_2704 -----
2704  push    bp                              
2705  mov     bp,sp                           
2707  sub     sp,6h                           
270a  push    si                              
270b  push    di                              
270c  mov     di,[bp+6h]                      
270f  mov     bx,23ECh                        
2712  or      di,di                           
2714  je      2790h                           
2716  jns     271Dh                           
2718  mov     bx,2548h                        
271b  neg     di                              
271d  mov     word ptr [bp-6h],27A2h          
2722  cmp     word ptr [bp+4h],0h             
2726  jne     2748h                           
2728  mov     word ptr [bp-6h],2798h          
272d  wait                                    
272e  fstcw   word ptr [bp-2h]                
2731  nop                                     
2732  wait                                    
2733  mov     ax,[bp-2h]                      
2736  or      ax,38h                          
2739  mov     [bp-4h],ax                      
273c  wait                                    
273d  fldcw   word ptr [bp-4h]                
2740  les     si,[bp+8h]                      
2743  wait                                    
2744  fld     tword ptr es:[si+2h]            
2748  push    di                              
2749  pop     di                              
274a  add     bx,54h                          
274d  or      di,di                           
274f  je      2774h                           
2751  mov     ax,di                           
2753  shr     di,1                            
2755  shr     di,1                            
2757  shr     di,1                            
2759  push    di                              
275a  and     ax,7h                           
275d  je      2749h                           
275f  push    bx                              
2760  shl     al,1                            
2762  shl     al,1                            
2764  mov     ah,al                           
2766  shl     al,1                            
2768  add     al,ah                           
276a  xor     ah,ah                           
276c  add     bx,ax                           
276e  jmp     word ptr [bp-6h]                
2771  pop     bx                              
2772  jmp     2749h                           
2774  cmp     word ptr [bp+4h],0h             
2778  jne     2790h                           
277a  wait                                    
277b  fclex                                   
277d  wait                                    
277e  fldcw   word ptr [bp-2h]                
2781  les     si,[bp+8h]                      
2784  wait                                    
2785  fstp    tword ptr es:[si+2h]            
2789  mov     word ptr es:[si],0h             
278e  nop                                     
278f  wait                                    
2790  pop     di                              
2791  pop     si                              
2792  mov     sp,bp                           
2794  pop     bp                              
2795  ret     8h                              
2798  wait                                    
2799  fld     tword ptr cs:[bx+2h]            
279d  wait                                    
279e  fmulp   st(1)                           
27a0  jmp     2771h                           
27a2  push    word ptr cs:[bx+0Ah]            
27a6  push    word ptr cs:[bx+8h]             
27aa  push    word ptr cs:[bx+6h]             
27ae  push    word ptr cs:[bx+4h]             
27b2  mov     cx,cs:[bx+2h]                   
27b6  mov     ax,cs:[bx]                      
27b9  cmp     ax,8000h                        
27bc  adc     cx,-1h                          
27bf  push    cx                              
27c0  push    ax                              
27c1  mov     ax,sp                           
27c3  push    word ptr [bp+0Ah]               
27c6  push    word ptr [bp+8h]                
27c9  push    ss                              
27ca  push    ax                              
27cb  call    27D9h                           
27ce  add     sp,0Ch                          
27d1  jmp     2771h                           
27d3  jmp     2942h                           
27d6  jmp     292Dh                           

; ----- sub_27d9 -----
27d9  push    bp                              
27da  mov     bp,sp                           
27dc  sub     sp,12h                          
27df  push    si                              
27e0  push    di                              
27e1  mov     cx,9h                           
27e4  mov     ax,ss                           
27e6  mov     es,ax                           
27e8  lea     di,[bp-12h]                     
27eb  xor     ax,ax                           
27ed  rep     stosw                           
27ef  lds     si,[bp+8h]                      
27f2  les     di,[bp+4h]                      
27f5  mov     ax,[si+0Ah]                     
27f8  mov     bx,es:[di+0Ah]                  
27fc  mov     cx,ax                           
27fe  xor     cx,bx                           
2800  and     cx,8000h                        
2804  mov     [bp-2h],cx                      
2807  mov     dx,7FFFh                        
280a  and     ax,dx                           
280c  cmp     ax,dx                           
280e  je      27D3h                           
2810  and     bx,dx                           
2812  cmp     bx,dx                           
2814  je      27D3h                           
2816  mov     dx,ax                           
2818  add     dx,bx                           
281a  cmp     dx,0BFFDh                       
281e  ja      27D3h                           
2820  cmp     dx,3FBFh                        
2824  jbe     27D6h                           
2826  or      ax,ax                           
2828  jne     283Bh                           
282a  inc     dx                              
282b  mov     ax,[si]                         
282d  or      ax,[si+2h]                      
2830  or      ax,[si+4h]                      
2833  or      ax,[si+6h]                      
2836  or      ax,[si+8h]                      
2839  je      27D6h                           
283b  or      bx,bx                           
283d  jne     2855h                           
283f  inc     dx                              
2840  mov     ax,es:[di]                      
2843  or      ax,es:[di+2h]                   
2847  or      ax,es:[di+4h]                   
284b  or      ax,es:[di+6h]                   
284f  or      ax,es:[di+8h]                   
2853  je      27D6h                           
2855  sub     dx,3FFEh                        
2859  mov     [si+0Ah],dx                     
285c  add     di,8h                           
285f  mov     cx,5h                           
2862  lea     bx,[bp-12h]                     
2865  push    cx                              
2866  push    si                              
2867  push    di                              
2868  mov     ax,es:[di]                      
286b  mul     word ptr [si]                   
286d  add     ss:[bx],ax                      
2870  adc     ss:[bx+2h],dx                   
2874  adc     word ptr ss:[bx+4h],0h          
2879  add     si,2h                           
287c  sub     di,2h                           
287f  loop    2868h                           
2881  pop     di                              
2882  pop     si                              
2883  pop     cx                              
2884  add     bx,2h                           
2887  add     si,2h                           
288a  add     cx,-1h                          
288d  jne     2865h                           
288f  mov     si,[bp+8h]                      
2892  mov     dx,[bp-10h]                     
2895  mov     cx,[bp-0Eh]                     
2898  mov     bx,[bp-0Ch]                     
289b  mov     ax,[bp-0Ah]                     
289e  mov     di,[bp-8h]                      
28a1  cmp     word ptr [si+0Ah],0h            
28a5  jg      28BBh                           
28a7  jmp     2908h                           
28a9  shl     word ptr [bp-12h],1             
28ac  rcl     dx,1                            
28ae  rcl     cx,1                            
28b0  rcl     bx,1                            
28b2  rcl     ax,1                            
28b4  rcl     di,1                            
28b6  dec     word ptr [si+0Ah]               
28b9  je      2908h                           
28bb  or      di,di                           
28bd  jns     28A9h                           
28bf  cmp     word ptr [bp-12h],8000h         
28c4  jb      28E5h                           
28c6  ja      28CEh                           
28c8  test    dx,1h                           
28cc  je      28E5h                           
28ce  add     dx,1h                           
28d1  adc     cx,0h                           
28d4  adc     bx,0h                           
28d7  adc     ax,0h                           
28da  adc     di,0h                           
28dd  jae     28E5h                           
28df  mov     di,8000h                        
28e2  inc     word ptr [si+0Ah]               
28e5  cmp     word ptr [si+0Ah],7FFFh         
28ea  jae     2942h                           
28ec  mov     [si+8h],di                      
28ef  mov     [si+6h],ax                      
28f2  mov     [si+4h],bx                      
28f5  mov     [si+2h],cx                      
28f8  mov     [si],dx                         
28fa  mov     ax,[bp-2h]                      
28fd  or      [si+0Ah],ax                     
2900  pop     di                              
2901  pop     si                              
2902  mov     sp,bp                           
2904  pop     bp                              
2905  ret     8h                              
2908  dec     word ptr [si+0Ah]               
290b  shr     di,1                            
290d  rcr     ax,1                            
290f  rcr     bx,1                            
2911  rcr     cx,1                            
2913  rcr     dx,1                            
2915  rcr     word ptr [bp-12h],1             
2918  adc     word ptr [bp-4h],0h             
291c  inc     word ptr [si+0Ah]               
291f  jne     290Bh                           
2921  cmp     word ptr [bp-4h],0h             
2925  je      28BFh                           
2927  or      word ptr [bp-12h],1h            
292b  jmp     28BFh                           
292d  xor     ax,ax                           
292f  mov     [si+0Ah],ax                     
2932  mov     [si+8h],ax                      
2935  mov     [si+6h],ax                      
2938  mov     [si+4h],ax                      
293b  mov     [si+2h],ax                      
293e  mov     [si],ax                         
2940  jmp     2900h                           
2942  mov     ax,7FFFh                        
2945  or      ax,[bp-2h]                      
2948  mov     [si+0Ah],ax                     
294b  xor     ax,ax                           
294d  mov     [si+8h],ax                      
2950  mov     [si+6h],ax                      
2953  mov     [si+4h],ax                      
2956  mov     [si+2h],ax                      
2959  mov     [si],ax                         
295b  jmp     2900h                           
295d  add     [bx+si],al                      

; ----- sub_295e -----
295e  push    bp                              
295f  mov     bp,sp                           
2961  sub     sp,0Ch                          
2964  push    si                              
2965  push    di                              
2966  mov     ax,[bp+6h]                      
2969  mov     [bp-0Ch],ax                     
296c  les     si,[bp+8h]                      
296f  xor     ax,ax                           
2971  mov     di,ax                           
2973  mov     bx,ax                           
2975  mov     cx,ax                           
2977  mov     dx,ax                           
2979  mov     dl,es:[si]                      
297c  inc     si                              
297d  jmp     29B9h                           
297f  mov     [bp-2h],di                      
2982  mov     [bp-4h],ax                      
2985  mov     [bp-6h],bx                      
2988  mov     [bp-8h],cx                      
298b  mov     [bp-0Ah],dx                     
298e  call    2A0Ch                           
2991  call    2A0Ch                           
2994  add     dx,[bp-0Ah]                     
2997  adc     cx,[bp-8h]                      
299a  adc     bx,[bp-6h]                      
299d  adc     ax,[bp-4h]                      
29a0  adc     di,[bp-2h]                      
29a3  call    2A0Ch                           
29a6  add     dl,es:[si]                      
29a9  inc     si                              
29aa  adc     dh,0h                           
29ad  adc     cx,0h                           
29b0  adc     bx,0h                           
29b3  adc     ax,0h                           
29b6  adc     di,0h                           
29b9  dec     word ptr [bp-0Ch]               
29bc  jne     297Fh                           
29be  mov     si,404Eh                        
29c1  jmp     29D0h                           
29c3  mov     di,ax                           
29c5  mov     ax,bx                           
29c7  mov     bx,cx                           
29c9  mov     cx,dx                           
29cb  xor     dx,dx                           
29cd  sub     si,10h                          
29d0  or      di,di                           
29d2  je      29C3h                           
29d4  js      29E5h                           
29d6  shl     dx,1                            
29d8  rcl     cx,1                            
29da  rcl     bx,1                            
29dc  rcl     ax,1                            
29de  rcl     di,1                            
29e0  dec     si                              
29e1  or      di,di                           
29e3  jns     29D6h                           
29e5  push    si                              
29e6  mov     si,[bp+4h]                      
29e9  pop     ss:[si+0Ah]                     
29ed  mov     ss:[si+8h],di                   
29f1  mov     ss:[si+6h],ax                   
29f5  mov     ss:[si+4h],bx                   
29f9  mov     ss:[si+2h],cx                   
29fd  mov     ss:[si],dx                      
2a00  mov     ax,si                           
2a02  mov     dx,ss                           
2a04  pop     di                              
2a05  pop     si                              
2a06  mov     sp,bp                           
2a08  pop     bp                              
2a09  ret     8h                              

; ----- sub_2a0c -----
2a0c  shl     dx,1                            
2a0e  rcl     cx,1                            
2a10  rcl     bx,1                            
2a12  rcl     ax,1                            
2a14  rcl     di,1                            
2a16  ret                                     
