
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
0060  mov     [146h],di                       
0064  mov     [148h],ds                       
0068  mov     [14Ah],cx                       
006c  mov     [14Ch],bx                       
0070  mov     [14Eh],si                       
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
0094  mov     [16Ch],ax                       
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [170h],ax                       
00ae  xchg    al,ah                           
00b0  mov     [16Eh],ax                       
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [173h],al                       
00c1  call far sub_010e                       
00c6  call far sub_0684                       
00cb  inc     byte ptr [150h]                 
00cf  push    word ptr [194h]                 
00d3  push    word ptr [192h]                 ; [ds] f32 here = 0
00d7  push    word ptr [190h]                 ; [ds] f32 here = 0
00db  push    word ptr [18Eh]                 ; [ds] f32 here = 0
00df  push    word ptr [18Ch]                 ; [ds] f32 here = 0
00e3  call far sub_0634                       
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
0118  mov     cx,[692h]                       
011c  jcxz    132h                            
011e  xor     si,si                           
0120  mov     ax,[694h]                       
0123  mov     dx,[696h]                       
0127  xor     bx,bx                           
0129  call    far ptr  [690h]                 
012d  jae     132h                            
012f  jmp     81Ah                            
0132  mov     si,69Ch                         
0135  mov     di,69Ch                         
0138  call    1DEh                            
013b  mov     si,69Ch                         
013e  mov     di,6A8h                         
0141  call    1DEh                            
0144  mov     si,6A8h                         
0147  mov     di,6A8h                         
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
0176  mov     [19Dh],ch                       
017a  push    cx                              
017b  or      cl,cl                           
017d  jne     191h                            
017f  mov     si,11CEh                        
0182  mov     di,11CEh                        
0185  call    1DEh                            
0188  mov     si,6A8h                         
018b  mov     di,6A8h                         
018e  call    1DEh                            
0191  mov     si,6A8h                         
0194  mov     di,6A8h                         
0197  call    1DEh                            
019a  mov     si,6A8h                         
019d  mov     di,6A8h                         
01a0  call    1DEh                            
01a3  call    2BCCh                           
01a6  call    88Eh                            
01a9  pop     ax                              
01aa  pop     di                              
01ab  pop     si                              
01ac  sub     bp,2h                           
01af  mov     sp,bp                           
01b1  pop     ds                              
01b2  pop     bp                              
01b3  dec     bp                              
01b4  retf                                    
01b5  mov     cx,[692h]                       
01b9  jcxz    1C2h                            
01bb  mov     bx,2h                           
01be  call    far ptr  [690h]                 
01c2  push    ds                              
01c3  lds     dx,[15Ah]                       
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
01f1  add     [si-6F28h],cl                   
01f5  inc     bp                              
01f6  push    bp                              
01f7  mov     bp,sp                           
01f9  push    ds                              
01fa  mov     ds,ax                           
01fc  sub     sp,4h                           
01ff  mov     bx,[bp+6h]                      
0202  cmp     bx,[176h]                       
0206  jb      20Dh                            
0208  mov     ax,900h                         
020b  jmp     24Eh                            
020d  cmp     word ptr [1CAh],0h              
0212  je      293h                            
0214  test    word ptr [bp+0Ah],8000h         
0219  je      293h                            
021b  cmp     word ptr [bp+0Ch],0h            
021f  je      24Bh                            
0221  xor     cx,cx                           
0223  mov     dx,cx                           
0225  mov     ax,4201h                        
0228  test    word ptr cs:[10h],1h            
022f  je      238h                            
0231  call far KERNEL.DOS3CALL                
0236  jmp     23Ah                            
0238  int     21h                             
023a  jb      2B7h                            
023c  test    word ptr [bp+0Ch],2h            
0241  jne     251h                            
0243  add     ax,[bp+8h]                      
0246  adc     dx,[bp+0Ah]                     
0249  jns     293h                            
024b  mov     ax,1600h                        
024e  stc                                     
024f  jmp     2B7h                            
0251  mov     [bp-4h],dx                      
0254  mov     [bp-6h],ax                      
0257  mov     dx,cx                           
0259  mov     ax,4202h                        
025c  test    word ptr cs:[10h],1h            
0263  je      26Ch                            
0265  call far KERNEL.DOS3CALL                
026a  jmp     26Eh                            
026c  int     21h                             
026e  add     ax,[bp+8h]                      
0271  adc     dx,[bp+0Ah]                     
0274  jns     293h                            
0276  mov     cx,[bp-4h]                      
0279  mov     dx,[bp-6h]                      
027c  mov     ax,4200h                        
027f  test    word ptr cs:[10h],1h            
0286  je      28Fh                            
0288  call far KERNEL.DOS3CALL                
028d  jmp     291h                            
028f  int     21h                             
0291  jmp     24Bh                            
0293  mov     dx,[bp+8h]                      
0296  mov     cx,[bp+0Ah]                     
0299  mov     al,[bp+0Ch]                     
029c  mov     ah,42h                          
029e  test    word ptr cs:[10h],1h            
02a5  je      2AEh                            
02a7  call far KERNEL.DOS3CALL                
02ac  jmp     2B0h                            
02ae  int     21h                             
02b0  jb      2B7h                            
02b2  and     byte ptr [bx+178h],0FDh         
02b7  jmp     83Fh                            
02ba  push    bp                              
02bb  mov     bp,sp                           
02bd  mov     dx,di                           
02bf  mov     bx,si                           
02c1  push    ds                              
02c2  les     di,[bp+6h]                      
02c5  xor     ax,ax                           
02c7  mov     cx,0FFFFh                       
02ca  repne   scasb                           
02cc  lea     si,[di-1h]                      
02cf  les     di,[bp+0Ah]                     
02d2  mov     cx,0FFFFh                       
02d5  repne   scasb                           
02d7  not     cx                              
02d9  je      2DEh                            
02db  sub     di,cx                           
02dd  inc     cx                              
02de  sub     di,cx                           
02e0  mov     ax,es                           
02e2  mov     ds,ax                           
02e4  mov     es,[bp+8h]                      
02e7  xchg    di,si                           
02e9  mov     ax,[bp+6h]                      
02ec  or      cx,cx                           
02ee  jne     2F5h                            
02f0  movsw                                   
02f1  dec     cx                              
02f2  dec     cx                              
02f3  jmp     2FDh                            
02f5  test    si,1h                           
02f9  je      2FDh                            
02fb  movsb                                   
02fc  dec     cx                              
02fd  shr     cx,1                            
02ff  rep     movsw                           
0301  adc     cx,cx                           
0303  rep     movsb                           
0305  mov     si,bx                           
0307  mov     di,dx                           
0309  pop     ds                              
030a  mov     dx,es                           
030c  pop     bp                              
030d  retf                                    
030e  push    bp                              
030f  mov     bp,sp                           
0311  mov     dx,di                           
0313  mov     bx,si                           
0315  push    ds                              
0316  lds     si,[bp+0Ah]                     
0319  mov     di,si                           
031b  mov     ax,ds                           
031d  mov     es,ax                           
031f  xor     ax,ax                           
0321  mov     cx,0FFFFh                       
0324  repne   scasb                           
0326  not     cx                              
0328  les     di,[bp+6h]                      
032b  mov     ax,di                           
032d  je      333h                            
032f  movsw                                   
0330  dec     cx                              
0331  jmp     339h                            
0333  test    al,1h                           
0335  je      339h                            
0337  movsb                                   
0338  dec     cx                              
0339  shr     cx,1                            
033b  rep     movsw                           
033d  adc     cx,cx                           
033f  rep     movsb                           
0341  mov     si,bx                           
0343  mov     di,dx                           
0345  pop     ds                              
0346  mov     dx,es                           
0348  pop     bp                              
0349  retf                                    
034a  jmp     890h                            
034d  add     [si-6F28h],cl                   
0351  inc     bp                              
0352  push    bp                              
0353  mov     bp,sp                           
0355  push    ds                              
0356  mov     ds,ax                           
0358  mov     dx,[bp+6h]                      
035b  in      al,dx                           
035c  xor     ah,ah                           
035e  sub     bp,2h                           
0361  mov     sp,bp                           
0363  pop     ds                              
0364  pop     bp                              
0365  dec     bp                              
0366  retf                                    
0367  add     [si-6F28h],cl                   
036b  inc     bp                              
036c  push    bp                              
036d  mov     bp,sp                           
036f  push    ds                              
0370  mov     ds,ax                           
0372  mov     dx,[bp+6h]                      
0375  mov     al,[bp+8h]                      
0378  out     dx,al                           
0379  mov     ah,0h                           
037b  sub     bp,2h                           
037e  mov     sp,bp                           
0380  pop     ds                              
0381  pop     bp                              
0382  dec     bp                              
0383  retf                                    
0384  mov     ax,ds                           
0386  nop                                     
0387  inc     bp                              
0388  push    bp                              
0389  mov     bp,sp                           
038b  push    ds                              
038c  mov     ds,ax                           
038e  push    si                              
038f  mov     ah,2Ah                          
0391  test    word ptr cs:[10h],1h            
0398  je      3A1h                            
039a  call far KERNEL.DOS3CALL                
039f  jmp     3A3h                            
03a1  int     21h                             
03a3  mov     bx,dx                           
03a5  mov     si,cx                           
03a7  mov     ah,2Ch                          
03a9  test    word ptr cs:[10h],1h            
03b0  je      3B9h                            
03b2  call far KERNEL.DOS3CALL                
03b7  jmp     3BBh                            
03b9  int     21h                             
03bb  mov     ah,0h                           
03bd  mov     al,dh                           
03bf  push    ax                              
03c0  mov     al,cl                           
03c2  push    ax                              
03c3  mov     al,ch                           
03c5  push    ax                              
03c6  push    ax                              
03c7  mov     ah,2Ah                          
03c9  test    word ptr cs:[10h],1h            
03d0  je      3D9h                            
03d2  call far KERNEL.DOS3CALL                
03d7  jmp     3DBh                            
03d9  int     21h                             
03db  cmp     bx,dx                           
03dd  pop     ax                              
03de  je      3E8h                            
03e0  cmp     al,17h                          
03e2  jne     3E8h                            
03e4  mov     dx,bx                           
03e6  mov     cx,si                           
03e8  mov     ah,0h                           
03ea  mov     al,dl                           
03ec  push    ax                              
03ed  mov     al,dh                           
03ef  push    ax                              
03f0  sub     cx,7BCh                         
03f4  push    cx                              
03f5  call far sub_071c                       
03fa  add     sp,0Ch                          
03fd  cmp     word ptr [bp+8h],0h             
0401  je      40Dh                            
0403  les     bx,[bp+6h]                      
0406  mov     es:[bx+2h],dx                   
040a  mov     es:[bx],ax                      
040d  pop     si                              
040e  sub     bp,2h                           
0411  mov     sp,bp                           
0413  pop     ds                              
0414  pop     bp                              
0415  dec     bp                              
0416  retf                                    
0417  add     [di+55h],al                     
041a  mov     bp,sp                           
041c  push    ds                              
041d  mov     ax,[bp+6h]                      
0420  cwd                                     
0421  xor     ax,dx                           
0423  sub     ax,dx                           
0425  lea     sp,[bp-2h]                      
0428  pop     ds                              
0429  pop     bp                              
042a  dec     bp                              
042b  retf                                    
042c  mov     ax,ds                           
042e  nop                                     
042f  inc     bp                              
0430  push    bp                              
0431  mov     bp,sp                           
0433  push    ds                              
0434  mov     ds,ax                           
0436  push    ds                              
0437  lds     dx,[bp+6h]                      
043a  mov     ah,41h                          
043c  test    word ptr cs:[10h],1h            
0443  je      44Ch                            
0445  call far KERNEL.DOS3CALL                
044a  jmp     44Eh                            
044c  int     21h                             
044e  pop     ds                              
044f  jmp     820h                            
0452  push    bp                              
0453  mov     bp,sp                           
0455  push    ds                              
0456  push    bx                              
0457  lds     bx,[bp+6h]                      
045a  mov     ax,[bx]                         
045c  mov     dx,[bx+2h]                      
045f  mov     cx,[bp+0Ah]                     
0462  push    cs                              
0463  call    53Eh                            
0466  mov     [bx],ax                         
0468  mov     [bx+2h],dx                      
046b  pop     bx                              
046c  pop     ds                              
046d  pop     bp                              
046e  retf    6h                              
0471  add     [di-75h],dl                     
0474  in      al,dx                           
0475  push    di                              
0476  push    si                              
0477  push    bx                              
0478  xor     di,di                           
047a  mov     ax,[bp+8h]                      
047d  or      ax,ax                           
047f  jge     492h                            
0481  inc     di                              
0482  mov     dx,[bp+6h]                      
0485  neg     ax                              
0487  neg     dx                              
0489  sbb     ax,0h                           
048c  mov     [bp+8h],ax                      
048f  mov     [bp+6h],dx                      
0492  mov     ax,[bp+0Ch]                     
0495  or      ax,ax                           
0497  jge     4AAh                            
0499  inc     di                              
049a  mov     dx,[bp+0Ah]                     
049d  neg     ax                              
049f  neg     dx                              
04a1  sbb     ax,0h                           
04a4  mov     [bp+0Ch],ax                     
04a7  mov     [bp+0Ah],dx                     
04aa  or      ax,ax                           
04ac  jne     4C3h                            
04ae  mov     cx,[bp+0Ah]                     
04b1  mov     ax,[bp+8h]                      
04b4  xor     dx,dx                           
04b6  div     cx                              
04b8  mov     bx,ax                           
04ba  mov     ax,[bp+6h]                      
04bd  div     cx                              
04bf  mov     dx,bx                           
04c1  jmp     4FBh                            
04c3  mov     bx,ax                           
04c5  mov     cx,[bp+0Ah]                     
04c8  mov     dx,[bp+8h]                      
04cb  mov     ax,[bp+6h]                      
04ce  shr     bx,1                            
04d0  rcr     cx,1                            
04d2  shr     dx,1                            
04d4  rcr     ax,1                            
04d6  or      bx,bx                           
04d8  jne     4CEh                            
04da  div     cx                              
04dc  mov     si,ax                           
04de  mul     word ptr [bp+0Ch]               
04e1  xchg    ax,cx                           
04e2  mov     ax,[bp+0Ah]                     
04e5  mul     si                              
04e7  add     dx,cx                           
04e9  jb      4F7h                            
04eb  cmp     dx,[bp+8h]                      
04ee  ja      4F7h                            
04f0  jb      4F8h                            
04f2  cmp     ax,[bp+6h]                      
04f5  jbe     4F8h                            
04f7  dec     si                              
04f8  xor     dx,dx                           
04fa  xchg    ax,si                           
04fb  dec     di                              
04fc  jne     505h                            
04fe  neg     dx                              
0500  neg     ax                              
0502  sbb     dx,0h                           
0505  pop     bx                              
0506  pop     si                              
0507  pop     di                              
0508  pop     bp                              
0509  retf    8h                              

; ----- sub_050c -----
050c  push    bp                              
050d  mov     bp,sp                           
050f  mov     ax,[bp+8h]                      
0512  mov     cx,[bp+0Ch]                     
0515  or      cx,ax                           
0517  mov     cx,[bp+0Ah]                     
051a  jne     525h                            
051c  mov     ax,[bp+6h]                      
051f  mul     cx                              
0521  pop     bp                              
0522  retf    8h                              
0525  push    bx                              
0526  mul     cx                              
0528  mov     bx,ax                           
052a  mov     ax,[bp+6h]                      
052d  mul     word ptr [bp+0Ch]               
0530  add     bx,ax                           
0532  mov     ax,[bp+6h]                      
0535  mul     cx                              
0537  add     dx,bx                           
0539  pop     bx                              
053a  pop     bp                              
053b  retf    8h                              

; ----- sub_053e -----
053e  xor     ch,ch                           
0540  jcxz    548h                            
0542  shl     ax,1                            
0544  rcl     dx,1                            
0546  loop    542h                            
0548  retf                                    
0549  add     [bp+si],dh                      
054b  in      ax,dx                           
054c  jcxz    554h                            
054e  sar     dx,1                            
0550  rcr     ax,1                            
0552  loop    54Eh                            
0554  retf                                    
0555  add     [di-75h],dl                     
0558  in      al,dx                           
0559  push    bx                              
055a  push    si                              
055b  mov     ax,[bp+0Ch]                     
055e  or      ax,ax                           
0560  jne     577h                            
0562  mov     cx,[bp+0Ah]                     
0565  mov     ax,[bp+8h]                      
0568  xor     dx,dx                           
056a  div     cx                              
056c  mov     bx,ax                           
056e  mov     ax,[bp+6h]                      
0571  div     cx                              
0573  mov     dx,bx                           
0575  jmp     5AFh                            
0577  mov     cx,ax                           
0579  mov     bx,[bp+0Ah]                     
057c  mov     dx,[bp+8h]                      
057f  mov     ax,[bp+6h]                      
0582  shr     cx,1                            
0584  rcr     bx,1                            
0586  shr     dx,1                            
0588  rcr     ax,1                            
058a  or      cx,cx                           
058c  jne     582h                            
058e  div     bx                              
0590  mov     si,ax                           
0592  mul     word ptr [bp+0Ch]               
0595  xchg    ax,cx                           
0596  mov     ax,[bp+0Ah]                     
0599  mul     si                              
059b  add     dx,cx                           
059d  jb      5ABh                            
059f  cmp     dx,[bp+8h]                      
05a2  ja      5ABh                            
05a4  jb      5ACh                            
05a6  cmp     ax,[bp+6h]                      
05a9  jbe     5ACh                            
05ab  dec     si                              
05ac  xor     dx,dx                           
05ae  xchg    ax,si                           
05af  pop     si                              
05b0  pop     bx                              
05b1  pop     bp                              
05b2  retf    8h                              
05b5  add     [bp+si],dh                      
05b7  in      ax,dx                           
05b8  jcxz    5C0h                            
05ba  shr     dx,1                            
05bc  rcr     ax,1                            
05be  loop    5BAh                            
05c0  retf                                    
05c1  add     [bp+si+200h],bh                 
05c5  jmp     10D0h                           
05c8  mov     dx,218h                         
05cb  jmp     5C5h                            
05cd  mov     dx,230h                         
05d0  jmp     5C5h                            
05d2  mov     dx,200h                         
05d5  jmp     108Ah                           
05d8  mov     dx,218h                         
05db  jmp     5D5h                            
05dd  mov     dx,230h                         
05e0  jmp     5D5h                            
05e2  mov     ax,ds                           
05e4  nop                                     
05e5  inc     bp                              
05e6  push    bp                              
05e7  mov     bp,sp                           
05e9  push    ds                              
05ea  mov     ds,ax                           
05ec  sub     sp,0Ch                          
05ef  push    bx                              
05f0  push    cx                              
05f1  push    si                              
05f2  push    di                              
05f3  wait                                    
05f4  fstcw   word ptr [bp-4h]                
05f7  nop                                     
05f8  wait                                    
05f9  mov     ax,[bp-4h]                      
05fc  or      ah,0Ch                          
05ff  mov     [bp-6h],ax                      
0602  wait                                    
0603  fldcw   word ptr [bp-6h]                
0606  wait                                    
0607  fistp   qword ptr [bp-0Eh]              
060a  wait                                    
060b  fldcw   word ptr [bp-4h]                
060e  mov     ax,[bp-0Eh]                     
0611  mov     dx,[bp-0Ch]                     
0614  pop     di                              
0615  pop     si                              
0616  pop     cx                              
0617  pop     bx                              
0618  lea     sp,[bp-2h]                      
061b  pop     ds                              
061c  pop     bp                              
061d  dec     bp                              
061e  retf                                    
061f  add     [bp+57h],dl                     
0622  mov     ax,ds                           
0624  mov     es,ax                           
0626  mov     si,19Eh                         
0629  mov     di,1CCh                         
062c  mov     cx,0Ah                          
062f  rep     movsw                           
0631  pop     di                              
0632  pop     si                              
0633  retf                                    

; ----- sub_0634 -----
0634  mov     ax,ds                           
0636  nop                                     
0637  inc     bp                              
0638  push    bp                              
0639  mov     bp,sp                           
063b  push    ds                              
063c  mov     ds,ax                           
063e  push    word ptr [146h]                 ; [ds] f32 here = 0
0642  push    word ptr [148h]                 ; [ds] f32 here = 0
0646  push    word ptr [14Ah]                 ; [ds] f32 here = 0
064a  push    word ptr [14Eh]                 
064e  push    word ptr [14Ch]                 ; [ds] f32 here = 0
0652  call far sub_0000                       
0657  sub     bp,2h                           
065a  mov     sp,bp                           
065c  pop     ds                              
065d  pop     bp                              
065e  dec     bp                              
065f  retf                                    

; ----- sub_0660 -----
0660  mov     ax,ds                           
0662  nop                                     
0663  inc     bp                              
0664  push    bp                              
0665  mov     bp,sp                           
0667  push    ds                              
0668  mov     ds,ax                           
066a  mov     ax,0FCh                         
066d  push    ax                              
066e  push    cs                              
066f  call    126Dh                           
0672  mov     ax,0FFh                         
0675  push    ax                              
0676  push    cs                              
0677  call    126Dh                           
067a  sub     bp,2h                           
067d  mov     sp,bp                           
067f  pop     ds                              
0680  pop     bp                              
0681  dec     bp                              
0682  retf                                    
0683  add     [bx+si],al                      

; ----- sub_0684 -----
0684  mov     ax,ds                           
0686  nop                                     
0687  inc     bp                              
0688  push    bp                              
0689  mov     bp,sp                           
068b  push    ds                              
068c  mov     ds,ax                           
068e  sub     sp,6h                           
0691  push    ds                              
0692  call far KERNEL.GETDOSENVIRONMENT       
0697  or      ax,ax                           
0699  je      69Eh                            
069b  mov     dx,0h                           
069e  mov     bx,dx                           
06a0  mov     es,dx                           
06a2  mov     [bp-4h],es                      
06a5  mov     [bp-8h],ds                      
06a8  xor     ax,ax                           
06aa  xor     si,si                           
06ac  xor     di,di                           
06ae  mov     cx,0FFFFh                       
06b1  or      bx,bx                           
06b3  je      6C3h                            
06b5  cmp     byte ptr es:[0h],0h             
06bb  je      6C3h                            
06bd  repne   scasb                           
06bf  inc     si                              
06c0  scasb                                   
06c1  jne     6BDh                            
06c3  mov     ax,di                           
06c5  inc     ax                              
06c6  and     al,0FEh                         
06c8  inc     si                              
06c9  mov     di,si                           
06cb  shl     si,1                            
06cd  shl     si,1                            
06cf  mov     cx,9h                           
06d2  call    1588h                           
06d5  push    dx                              
06d6  push    ax                              
06d7  mov     ax,si                           
06d9  call    1588h                           
06dc  mov     [192h],ax                       
06df  mov     [194h],dx                       
06e3  mov     [bp-6h],dx                      
06e6  push    es                              
06e7  pop     ds                              
06e8  mov     cx,di                           
06ea  mov     bx,ax                           
06ec  xor     si,si                           
06ee  pop     di                              
06ef  pop     es                              
06f0  dec     cx                              
06f1  jcxz    709h                            
06f3  mov     ds,[bp-6h]                      
06f6  mov     [bx],di                         
06f8  mov     [bx+2h],es                      
06fb  add     bx,4h                           
06fe  mov     ds,[bp-4h]                      
0701  lodsb                                   
0702  stosb                                   
0703  or      al,al                           
0705  jne     701h                            
0707  loop    6F3h                            
0709  mov     ds,[bp-6h]                      
070c  mov     [bx],cx                         
070e  mov     [bx+2h],cx                      
0711  pop     ds                              
0712  sub     bp,2h                           
0715  mov     sp,bp                           
0717  pop     ds                              
0718  pop     bp                              
0719  dec     bp                              
071a  retf                                    
071b  add     [bx+si],al                      

; ----- sub_071c -----
071c  inc     bp                              
071d  push    bp                              
071e  mov     bp,sp                           
0720  push    ds                              
0721  sub     sp,1Ah                          
0724  push    di                              
0725  push    si                              
0726  mov     si,[bp+6h]                      
0729  mov     bx,[bp+8h]                      
072c  add     bx,bx                           
072e  mov     di,[bx+3C6h]                    
0732  test    si,3h                           
0736  jne     73Fh                            
0738  cmp     word ptr [bp+8h],2h             
073c  jle     73Fh                            
073e  inc     di                              
073f  call far sub_12d0                       
0744  mov     ax,3Ch                          
0747  cwd                                     
0748  push    dx                              
0749  push    ax                              
074a  push    dx                              
074b  push    ax                              
074c  mov     ax,18h                          
074f  cwd                                     
0750  push    dx                              
0751  push    ax                              
0752  mov     ax,si                           
0754  mov     cx,16Dh                         
0757  imul    cx                              
0759  mov     cx,ax                           
075b  mov     ax,[bp+0Ah]                     
075e  mov     bx,dx                           
0760  cwd                                     
0761  mov     [bp-1Ch],ax                     
0764  mov     [bp-1Ah],dx                     
0767  lea     ax,[si+3h]                      
076a  sar     ax,1                            
076c  sar     ax,1                            
076e  cwd                                     
076f  add     ax,[bp-1Ch]                     
0772  adc     dx,[bp-1Ah]                     
0775  add     cx,ax                           
0777  adc     bx,dx                           
0779  mov     ax,di                           
077b  cwd                                     
077c  add     cx,di                           
077e  adc     bx,dx                           
0780  add     cx,0E44h                        
0784  adc     bx,0h                           
0787  push    bx                              
0788  push    cx                              
0789  call far sub_050c                       
078e  mov     cx,ax                           
0790  mov     ax,[bp+0Ch]                     
0793  mov     bx,dx                           
0795  cwd                                     
0796  add     cx,ax                           
0798  adc     bx,dx                           
079a  push    bx                              
079b  push    cx                              
079c  call far sub_050c                       
07a1  mov     cx,ax                           
07a3  mov     ax,[bp+0Eh]                     
07a6  mov     bx,dx                           
07a8  cwd                                     
07a9  add     cx,ax                           
07ab  adc     bx,dx                           
07ad  push    bx                              
07ae  push    cx                              
07af  call far sub_050c                       
07b4  mov     cx,ax                           
07b6  mov     ax,[bp+10h]                     
07b9  mov     bx,dx                           
07bb  cwd                                     
07bc  add     cx,ax                           
07be  adc     bx,dx                           
07c0  add     cx,[3E2h]                       
07c4  adc     bx,[3E4h]                       
07c8  mov     [bp-18h],cx                     
07cb  mov     [bp-16h],bx                     
07ce  mov     ax,[bp+0Ah]                     
07d1  add     ax,di                           
07d3  mov     [bp-6h],ax                      
07d6  lea     ax,[si+50h]                     
07d9  mov     [bp-0Ah],ax                     
07dc  mov     ax,[bp+8h]                      
07df  dec     ax                              
07e0  mov     [bp-0Ch],ax                     
07e3  mov     ax,[bp+0Ch]                     
07e6  mov     [bp-10h],ax                     
07e9  cmp     word ptr [3E6h],0h              
07ee  je      80Ah                            
07f0  lea     ax,[bp-14h]                     
07f3  push    ss                              
07f4  push    ax                              
07f5  call far sub_14b4                       
07fa  add     sp,4h                           
07fd  or      ax,ax                           
07ff  je      80Ah                            
0801  sub     word ptr [bp-18h],0E10h         
0806  sbb     word ptr [bp-16h],0h            
080a  mov     ax,[bp-18h]                     
080d  mov     dx,[bp-16h]                     
0810  pop     si                              
0811  pop     di                              
0812  lea     sp,[bp-2h]                      
0815  pop     ds                              
0816  pop     bp                              
0817  dec     bp                              
0818  retf                                    
0819  nop                                     
081a  mov     ax,2h                           
081d  jmp     128Eh                           
0820  jb      841h                            
0822  xor     ax,ax                           
0824  sub     bp,2h                           
0827  mov     sp,bp                           
0829  pop     ds                              
082a  pop     bp                              
082b  dec     bp                              
082c  retf                                    
082d  jae     822h                            
082f  push    ax                              
0830  call    857h                            
0833  pop     ax                              
0834  xor     ah,ah                           
0836  sub     bp,2h                           
0839  mov     sp,bp                           
083b  pop     ds                              
083c  pop     bp                              
083d  dec     bp                              
083e  retf                                    
083f  jae     848h                            
0841  call    857h                            
0844  mov     ax,0FFFFh                       
0847  cwd                                     
0848  sub     bp,2h                           
084b  mov     sp,bp                           
084d  pop     ds                              
084e  pop     bp                              
084f  dec     bp                              
0850  retf                                    
0851  xor     ah,ah                           
0853  call    857h                            
0856  retf                                    

; ----- sub_0857 -----
0857  mov     [174h],al                       
085a  or      ah,ah                           
085c  jne     879h                            
085e  cmp     al,22h                          
0860  jae     86Eh                            
0862  cmp     al,20h                          
0864  jb      86Ah                            
0866  mov     al,5h                           
0868  jmp     870h                            
086a  cmp     al,13h                          
086c  jbe     870h                            
086e  mov     al,13h                          
0870  mov     bx,1B6h                         
0873  xlat                                    
0874  cbw                                     
0875  mov     [168h],ax                       
0878  ret                                     
0879  mov     al,ah                           
087b  jmp     874h                            
087d  add     [bx+si],al                      

; ----- sub_087e -----
087e  cmp     byte ptr cs:[15B6h],0B8h        
0884  je      889h                            
0886  mov     ax,ss                           
0888  retf                                    
0889  mov     ax,cs:[15B7h]                   
088d  retf                                    

; ----- sub_088e -----
088e  ret                                     
088f  add     [di-75h],dl                     
0892  in      al,dx                           
0893  push    di                              
0894  push    si                              
0895  push    ds                              
0896  lds     si,[bp+6h]                      
0899  xor     ax,ax                           
089b  cwd                                     
089c  xor     bx,bx                           
089e  lodsb                                   
089f  cmp     al,20h                          
08a1  je      89Eh                            
08a3  cmp     al,9h                           
08a5  je      89Eh                            
08a7  push    ax                              
08a8  cmp     al,2Dh                          
08aa  je      8B0h                            
08ac  cmp     al,2Bh                          
08ae  jne     8B1h                            
08b0  lodsb                                   
08b1  cmp     al,39h                          
08b3  ja      8D4h                            
08b5  sub     al,30h                          
08b7  jb      8D4h                            
08b9  shl     bx,1                            
08bb  rcl     dx,1                            
08bd  mov     cx,bx                           
08bf  mov     di,dx                           
08c1  shl     bx,1                            
08c3  rcl     dx,1                            
08c5  shl     bx,1                            
08c7  rcl     dx,1                            
08c9  add     bx,cx                           
08cb  adc     dx,di                           
08cd  add     bx,ax                           
08cf  adc     dx,0h                           
08d2  jmp     8B0h                            
08d4  pop     ax                              
08d5  cmp     al,2Dh                          
08d7  xchg    ax,bx                           
08d8  jne     8E1h                            
08da  neg     ax                              
08dc  adc     dx,0h                           
08df  neg     dx                              
08e1  pop     ds                              
08e2  pop     si                              
08e3  pop     di                              
08e4  pop     bp                              
08e5  retf                                    
08e6  call    9BFh                            
08e9  fcos                                    
08eb  ret                                     
08ec  cmp     word ptr [5F4h],3h              
08f1  jae     8E6h                            
08f3  jmp     1AB6h                           
08f6  call    9BFh                            
08f9  fsin                                    
08fb  ret                                     
08fc  cmp     word ptr [5F4h],3h              
0901  jae     8F6h                            
0903  jmp     1ACDh                           
0906  or      cl,cl                           
0908  je      90Dh                            
090a  wait                                    
090b  fchs                                    
090d  ret                                     
090e  cmp     word ptr [5F4h],3h              
0913  jae     918h                            
0915  jmp     1BCFh                           
0918  call    9BFh                            
091b  call    950h                            
091e  wait                                    
091f  fdivp   st(1)                           
0921  jmp     906h                            
0923  call    9BFh                            
0926  call    950h                            
0929  wait                                    
092a  fdivrp  st(1), st(0)                    
092c  jmp     906h                            
092e  mov     byte ptr [bp-11h],6h            
0932  wait                                    
0933  fcom    dword ptr [1FCh]                ; [ds] = 2.147484E+09
0937  wait                                    
0938  fstsw   word ptr [bp-0Ah]               
093b  nop                                     
093c  wait                                    
093d  test    byte ptr [bp-9h],41h            
0941  jne     969h                            
0943  pop     ax                              
0944  mov     byte ptr [bp-11h],5h            
0948  jmp     1917h                           
094b  wait                                    
094c  fabs                                    
094e  jmp     958h                            

; ----- sub_0950 -----
0950  mov     byte ptr [bp-11h],0FFh          
0954  or      cl,cl                           
0956  jne     94Bh                            
0958  wait                                    
0959  fcom    dword ptr [1F8h]                ; [ds] = 1.342177E+08
095d  wait                                    
095e  fstsw   word ptr [bp-0Ah]               
0961  nop                                     
0962  wait                                    
0963  test    byte ptr [bp-9h],41h            
0967  je      92Eh                            
0969  wait                                    
096a  fld     tword ptr [1EEh]                
096e  wait                                    
096f  fxam                                    
0971  wait                                    
0972  fxch    st(0),st(1)                     
0974  wait                                    
0975  fprem                                   
0977  wait                                    
0978  fstsw   word ptr [bp-0Ah]               
097b  nop                                     
097c  wait                                    
097d  mov     ah,[bp-9h]                      
0980  sahf                                    
0981  test    ah,2h                           
0984  je      98Bh                            
0986  wait                                    
0987  fsubp   st(1)                           
0989  jmp     98Eh                            
098b  wait                                    
098c  fstp    st(1)                           
098e  wait                                    
098f  fptan                                   
0991  mov     al,ah                           
0993  shl     al,1                            
0995  sar     al,1                            
0997  rol     al,1                            
0999  shr     ah,1                            
099b  shr     ah,1                            
099d  rcl     al,1                            
099f  dec     ax                              
09a0  test    al,2h                           
09a2  jne     9A7h                            
09a4  wait                                    
09a5  fxch    st(0),st(1)                     
09a7  dec     ax                              
09a8  test    al,4h                           
09aa  jne     9AFh                            
09ac  wait                                    
09ad  fchs                                    
09af  sub     al,2h                           
09b1  test    al,4h                           
09b3  jne     9BEh                            
09b5  wait                                    
09b6  fxch    st(0),st(1)                     
09b8  wait                                    
09b9  fchs                                    
09bb  wait                                    
09bc  fxch    st(0),st(1)                     
09be  ret                                     

; ----- sub_09bf -----
09bf  wait                                    
09c0  fld     st(0),st(0)                     
09c2  sub     sp,0Ah                          
09c5  mov     bx,sp                           
09c7  wait                                    
09c8  fstp    tword ptr ss:[bx]               
09cb  nop                                     
09cc  wait                                    
09cd  mov     ax,ss:[bx+8h]                   
09d1  and     ax,7FFFh                        
09d4  add     sp,0Ah                          
09d7  cmp     ax,401Ah                        
09da  jb      9E9h                            
09dc  mov     byte ptr [bp-11h],6h            
09e0  cmp     ax,401Eh                        
09e3  jb      9E9h                            
09e5  pop     ax                              
09e6  jmp     944h                            
09e9  ret                                     
09ea  mov     ax,ds                           
09ec  nop                                     
09ed  inc     bp                              
09ee  push    bp                              
09ef  mov     bp,sp                           
09f1  push    ds                              
09f2  mov     ds,ax                           
09f4  sub     sp,0Ah                          
09f7  les     bx,[bp+6h]                      
09fa  mov     al,es:[bx]                      
09fd  cbw                                     
09fe  mov     bx,ax                           
0a00  test    byte ptr [bx+2ADh],1h           
0a05  je      0A0Ch                           
0a07  lea     ax,[bx+20h]                     
0a0a  jmp     0A13h                           
0a0c  mov     bx,[bp+6h]                      
0a0f  mov     al,es:[bx]                      
0a12  cbw                                     
0a13  cmp     ax,65h                          
0a16  je      0A2Bh                           
0a18  inc     word ptr [bp+6h]                
0a1b  mov     bx,[bp+6h]                      
0a1e  mov     al,es:[bx]                      
0a21  cbw                                     
0a22  mov     bx,ax                           
0a24  test    byte ptr [bx+2ADh],4h           
0a29  jne     0A18h                           
0a2b  mov     bx,[bp+6h]                      
0a2e  mov     al,es:[bx]                      
0a31  mov     [bp-4h],al                      
0a34  mov     byte ptr es:[bx],2Eh            
0a38  inc     word ptr [bp+6h]                
0a3b  mov     bx,[bp+6h]                      
0a3e  mov     al,es:[bx]                      
0a41  mov     [bp-6h],al                      
0a44  mov     al,[bp-4h]                      
0a47  mov     es:[bx],al                      
0a4a  mov     al,[bp-6h]                      
0a4d  mov     [bp-4h],al                      
0a50  inc     word ptr [bp+6h]                
0a53  cmp     byte ptr es:[bx],0h             
0a57  jne     0A3Bh                           
0a59  lea     sp,[bp-2h]                      
0a5c  pop     ds                              
0a5d  pop     bp                              
0a5e  dec     bp                              
0a5f  retf                                    
0a60  mov     ax,ds                           
0a62  nop                                     
0a63  inc     bp                              
0a64  push    bp                              
0a65  mov     bp,sp                           
0a67  push    ds                              
0a68  mov     ds,ax                           
0a6a  sub     sp,8h                           
0a6d  jmp     0A79h                           
0a6f  nop                                     
0a70  cmp     byte ptr es:[bx],2Eh            
0a74  je      0A82h                           
0a76  inc     word ptr [bp+6h]                
0a79  les     bx,[bp+6h]                      
0a7c  cmp     byte ptr es:[bx],0h             
0a80  jne     0A70h                           
0a82  inc     word ptr [bp+6h]                
0a85  cmp     byte ptr es:[bx],0h             
0a89  je      0ADDh                           
0a8b  jmp     0A9Dh                           
0a8d  nop                                     
0a8e  cmp     byte ptr es:[bx],65h            
0a92  je      0AA6h                           
0a94  cmp     byte ptr es:[bx],45h            
0a98  je      0AA6h                           
0a9a  inc     word ptr [bp+6h]                
0a9d  mov     bx,[bp+6h]                      
0aa0  cmp     byte ptr es:[bx],0h             
0aa4  jne     0A8Eh                           
0aa6  dec     word ptr [bp+6h]                
0aa9  mov     [bp-6h],bx                      
0aac  mov     [bp-4h],es                      
0aaf  jmp     0AB5h                           
0ab1  nop                                     
0ab2  dec     word ptr [bp+6h]                
0ab5  mov     bx,[bp+6h]                      
0ab8  cmp     byte ptr es:[bx],30h            
0abc  je      0AB2h                           
0abe  cmp     byte ptr es:[bx],2Eh            
0ac2  jne     0AC7h                           
0ac4  dec     word ptr [bp+6h]                
0ac7  les     bx,[bp-6h]                      
0aca  inc     word ptr [bp-6h]                
0acd  mov     al,es:[bx]                      
0ad0  inc     word ptr [bp+6h]                
0ad3  les     bx,[bp+6h]                      
0ad6  mov     es:[bx],al                      
0ad9  or      al,al                           
0adb  jne     0AC7h                           
0add  lea     sp,[bp-2h]                      
0ae0  pop     ds                              
0ae1  pop     bp                              
0ae2  dec     bp                              
0ae3  retf                                    
0ae4  mov     ax,ds                           
0ae6  nop                                     
0ae7  inc     bp                              
0ae8  push    bp                              
0ae9  mov     bp,sp                           
0aeb  push    ds                              
0aec  mov     ds,ax                           
0aee  sub     sp,2h                           
0af1  les     bx,[bp+6h]                      
0af4  wait                                    
0af5  fld     qword ptr es:[bx]               
0af8  wait                                    
0af9  fcom    qword ptr [780h]                ; [ds] = 0
0afd  wait                                    
0afe  fstp    st(0)                           
0b00  wait                                    
0b01  fstsw   word ptr [bp-4h]                
0b04  nop                                     
0b05  wait                                    
0b06  mov     ah,[bp-3h]                      
0b09  sahf                                    
0b0a  jb      0B12h                           
0b0c  mov     ax,1h                           
0b0f  jmp     0B14h                           
0b11  nop                                     
0b12  xor     ax,ax                           
0b14  lea     sp,[bp-2h]                      
0b17  pop     ds                              
0b18  pop     bp                              
0b19  dec     bp                              
0b1a  retf                                    
0b1b  nop                                     
0b1c  mov     ax,ds                           
0b1e  nop                                     
0b1f  inc     bp                              
0b20  push    bp                              
0b21  mov     bp,sp                           
0b23  push    ds                              
0b24  mov     ds,ax                           
0b26  push    di                              
0b27  push    si                              
0b28  cmp     word ptr [bp+6h],0h             
0b2c  je      0B4Ch                           
0b2e  push    word ptr [bp+0Eh]               
0b31  push    word ptr [bp+0Ch]               
0b34  call far sub_15ca                       
0b39  add     sp,4h                           
0b3c  push    ds                              
0b3d  mov     si,ax                           
0b3f  mov     ds,dx                           
0b41  les     di,[bp+8h]                      
0b44  movsw                                   
0b45  movsw                                   
0b46  movsw                                   
0b47  movsw                                   
0b48  pop     ds                              
0b49  jmp     0B6Bh                           
0b4b  nop                                     
0b4c  push    word ptr [bp+0Eh]               
0b4f  push    word ptr [bp+0Ch]               
0b52  call far sub_15ca                       
0b57  add     sp,4h                           
0b5a  mov     es,dx                           
0b5c  mov     bx,ax                           
0b5e  wait                                    
0b5f  fld     qword ptr es:[bx]               
0b62  les     bx,[bp+8h]                      
0b65  wait                                    
0b66  fstp    dword ptr es:[bx]               
0b69  nop                                     
0b6a  wait                                    
0b6b  pop     si                              
0b6c  pop     di                              
0b6d  lea     sp,[bp-2h]                      
0b70  pop     ds                              
0b71  pop     bp                              
0b72  dec     bp                              
0b73  retf                                    

; ----- sub_0b74 -----
0b74  mov     ax,ds                           
0b76  nop                                     
0b77  inc     bp                              
0b78  push    bp                              
0b79  mov     bp,sp                           
0b7b  push    ds                              
0b7c  mov     ds,ax                           
0b7e  sub     sp,0Ah                          
0b81  push    si                              
0b82  cmp     byte ptr [260h],0h              
0b87  je      0BCAh                           
0b89  mov     ax,[11A8h]                      
0b8c  mov     dx,[11AAh]                      
0b90  mov     [bp-6h],ax                      
0b93  mov     [bp-4h],dx                      
0b96  mov     es,dx                           
0b98  mov     bx,ax                           
0b9a  cmp     word ptr es:[bx],2Dh            
0b9e  jne     0BA6h                           
0ba0  mov     ax,1h                           
0ba3  jmp     0BA8h                           
0ba5  nop                                     
0ba6  xor     ax,ax                           
0ba8  add     ax,[bp+0Ah]                     
0bab  mov     dx,[bp+0Ch]                     
0bae  mov     [bp-0Ah],ax                     
0bb1  mov     [bp-8h],dx                      
0bb4  push    dx                              
0bb5  push    ax                              
0bb6  cmp     word ptr [bp+0Eh],0h            
0bba  jle     0BC2h                           
0bbc  mov     ax,1h                           
0bbf  jmp     0BC4h                           
0bc1  nop                                     
0bc2  xor     ax,ax                           
0bc4  push    ax                              
0bc5  call    1026h                           
0bc8  jmp     0C25h                           
0bca  les     bx,[bp+6h]                      
0bcd  push    word ptr es:[bx+6h]             
0bd1  push    word ptr es:[bx+4h]             
0bd5  push    word ptr es:[bx+2h]             
0bd9  push    word ptr es:[bx]                
0bdc  call far sub_200a                       
0be1  add     sp,8h                           
0be4  mov     [bp-6h],ax                      
0be7  mov     [bp-4h],dx                      
0bea  push    dx                              
0beb  push    ax                              
0bec  mov     ax,[bp+0Eh]                     
0bef  inc     ax                              
0bf0  push    ax                              
0bf1  les     bx,[bp-6h]                      
0bf4  cmp     word ptr es:[bx],2Dh            
0bf8  jne     0C00h                           
0bfa  mov     ax,1h                           
0bfd  jmp     0C02h                           
0bff  nop                                     
0c00  xor     ax,ax                           
0c02  mov     [bp-0Ch],ax                     
0c05  cmp     word ptr [bp+0Eh],0h            
0c09  jle     0C10h                           
0c0b  mov     ax,1h                           
0c0e  jmp     0C12h                           
0c10  xor     ax,ax                           
0c12  add     ax,[bp-0Ch]                     
0c15  add     ax,[bp+0Ah]                     
0c18  mov     dx,[bp+0Ch]                     
0c1b  push    dx                              
0c1c  push    ax                              
0c1d  call far sub_1628                       
0c22  add     sp,0Ah                          
0c25  mov     ax,[bp+0Ah]                     
0c28  mov     dx,[bp+0Ch]                     
0c2b  mov     [bp-0Ah],ax                     
0c2e  mov     [bp-8h],dx                      
0c31  les     bx,[bp-6h]                      
0c34  cmp     word ptr es:[bx],2Dh            
0c38  jne     0C46h                           
0c3a  mov     bx,ax                           
0c3c  mov     es,dx                           
0c3e  mov     byte ptr es:[bx],2Dh            
0c42  inc     ax                              
0c43  mov     [bp-0Ah],ax                     
0c46  cmp     word ptr [bp+0Eh],0h            
0c4a  jle     0C5Eh                           
0c4c  les     bx,[bp-0Ah]                     
0c4f  mov     al,es:[bx+1h]                   
0c53  mov     es:[bx],al                      
0c56  inc     bx                              
0c57  mov     [bp-0Ah],bx                     
0c5a  mov     byte ptr es:[bx],2Eh            
0c5e  mov     ax,265h                         
0c61  push    ds                              
0c62  push    ax                              
0c63  cmp     byte ptr [260h],1h              
0c68  sbb     ax,ax                           
0c6a  neg     ax                              
0c6c  add     ax,[bp-0Ah]                     
0c6f  mov     dx,[bp-8h]                      
0c72  add     ax,[bp+0Eh]                     
0c75  push    dx                              
0c76  push    ax                              
0c77  call far sub_16f0                       
0c7c  add     sp,8h                           
0c7f  mov     [bp-0Ah],ax                     
0c82  mov     [bp-8h],dx                      
0c85  cmp     word ptr [bp+10h],0h            
0c89  je      0C92h                           
0c8b  les     bx,[bp-0Ah]                     
0c8e  mov     byte ptr es:[bx],45h            
0c92  inc     word ptr [bp-0Ah]               
0c95  les     bx,[bp-6h]                      
0c98  les     bx,es:[bx+6h]                   
0c9c  cmp     byte ptr es:[bx],30h            
0ca0  je      0CFEh                           
0ca2  les     bx,[bp-6h]                      
0ca5  mov     si,es:[bx+2h]                   
0ca9  dec     si                              
0caa  jns     0CB9h                           
0cac  mov     ax,si                           
0cae  neg     ax                              
0cb0  mov     si,ax                           
0cb2  les     bx,[bp-0Ah]                     
0cb5  mov     byte ptr es:[bx],2Dh            
0cb9  inc     word ptr [bp-0Ah]               
0cbc  cmp     si,64h                          
0cbf  jl      0CD6h                           
0cc1  mov     ax,si                           
0cc3  mov     cx,64h                          
0cc6  cwd                                     
0cc7  idiv    cx                              
0cc9  les     bx,[bp-0Ah]                     
0ccc  add     es:[bx],al                      
0ccf  mov     ax,si                           
0cd1  cwd                                     
0cd2  idiv    cx                              
0cd4  mov     si,dx                           
0cd6  inc     word ptr [bp-0Ah]               
0cd9  cmp     si,0Ah                          
0cdc  jl      0CF3h                           
0cde  mov     ax,si                           
0ce0  mov     cx,0Ah                          
0ce3  cwd                                     
0ce4  idiv    cx                              
0ce6  les     bx,[bp-0Ah]                     
0ce9  add     es:[bx],al                      
0cec  mov     ax,si                           
0cee  cwd                                     
0cef  idiv    cx                              
0cf1  mov     si,dx                           
0cf3  mov     ax,si                           
0cf5  inc     word ptr [bp-0Ah]               
0cf8  les     bx,[bp-0Ah]                     
0cfb  add     es:[bx],al                      
0cfe  mov     ax,[bp+0Ah]                     
0d01  mov     dx,[bp+0Ch]                     
0d04  pop     si                              
0d05  lea     sp,[bp-2h]                      
0d08  pop     ds                              
0d09  pop     bp                              
0d0a  dec     bp                              
0d0b  retf                                    

; ----- sub_0d0c -----
0d0c  mov     ax,ds                           
0d0e  nop                                     
0d0f  inc     bp                              
0d10  push    bp                              
0d11  mov     bp,sp                           
0d13  push    ds                              
0d14  mov     ds,ax                           
0d16  sub     sp,4h                           
0d19  mov     byte ptr [260h],1h              
0d1e  push    word ptr [bp+10h]               
0d21  push    word ptr [bp+0Eh]               
0d24  push    word ptr [bp+0Ch]               
0d27  push    word ptr [bp+0Ah]               
0d2a  push    word ptr [bp+8h]                
0d2d  push    word ptr [bp+6h]                
0d30  push    cs                              
0d31  call    0B74h                           
0d34  mov     byte ptr [260h],0h              
0d39  lea     sp,[bp-2h]                      
0d3c  pop     ds                              
0d3d  pop     bp                              
0d3e  dec     bp                              
0d3f  retf                                    

; ----- sub_0d40 -----
0d40  mov     ax,ds                           
0d42  nop                                     
0d43  inc     bp                              
0d44  push    bp                              
0d45  mov     bp,sp                           
0d47  push    ds                              
0d48  mov     ds,ax                           
0d4a  sub     sp,0Eh                          
0d4d  push    si                              
0d4e  cmp     byte ptr [260h],0h              
0d53  je      0D9Ch                           
0d55  mov     ax,[11A8h]                      
0d58  mov     dx,[11AAh]                      
0d5c  mov     [bp-6h],ax                      
0d5f  mov     [bp-4h],dx                      
0d62  mov     es,dx                           
0d64  mov     bx,ax                           
0d66  cmp     word ptr es:[bx],2Dh            
0d6a  jne     0D72h                           
0d6c  mov     ax,1h                           
0d6f  jmp     0D74h                           
0d71  nop                                     
0d72  xor     ax,ax                           
0d74  add     ax,[bp+0Ah]                     
0d77  mov     dx,[bp+0Ch]                     
0d7a  mov     [bp-0Ah],ax                     
0d7d  mov     [bp-8h],dx                      
0d80  mov     cx,[262h]                       
0d84  cmp     [bp+0Eh],cx                     
0d87  jne     0DE6h                           
0d89  mov     es,dx                           
0d8b  mov     bx,ax                           
0d8d  mov     si,cx                           
0d8f  mov     byte ptr es:[bx+si],30h         
0d93  add     bx,cx                           
0d95  inc     bx                              
0d96  mov     byte ptr es:[bx],0h             
0d9a  jmp     0DE6h                           
0d9c  les     bx,[bp+6h]                      
0d9f  push    word ptr es:[bx+6h]             
0da3  push    word ptr es:[bx+4h]             
0da7  push    word ptr es:[bx+2h]             
0dab  push    word ptr es:[bx]                
0dae  call far sub_200a                       
0db3  add     sp,8h                           
0db6  mov     [bp-6h],ax                      
0db9  mov     [bp-4h],dx                      
0dbc  push    dx                              
0dbd  les     bx,[bp-6h]                      
0dc0  push    ax                              
0dc1  mov     ax,es:[bx+2h]                   
0dc5  add     ax,[bp+0Eh]                     
0dc8  push    ax                              
0dc9  cmp     word ptr es:[bx],2Dh            
0dcd  jne     0DD4h                           
0dcf  mov     ax,1h                           
0dd2  jmp     0DD6h                           
0dd4  xor     ax,ax                           
0dd6  add     ax,[bp+0Ah]                     
0dd9  mov     dx,[bp+0Ch]                     
0ddc  push    dx                              
0ddd  push    ax                              
0dde  call far sub_1628                       
0de3  add     sp,0Ah                          
0de6  mov     ax,[bp+0Ah]                     
0de9  mov     dx,[bp+0Ch]                     
0dec  mov     [bp-0Ah],ax                     
0def  mov     [bp-8h],dx                      
0df2  les     bx,[bp-6h]                      
0df5  cmp     word ptr es:[bx],2Dh            
0df9  jne     0E07h                           
0dfb  mov     bx,ax                           
0dfd  mov     es,dx                           
0dff  mov     byte ptr es:[bx],2Dh            
0e03  inc     ax                              
0e04  mov     [bp-0Ah],ax                     
0e07  les     bx,[bp-6h]                      
0e0a  cmp     word ptr es:[bx+2h],0h          
0e0f  jg      0E2Ah                           
0e11  push    word ptr [bp-8h]                
0e14  push    word ptr [bp-0Ah]               
0e17  mov     ax,1h                           
0e1a  push    ax                              
0e1b  call    1026h                           
0e1e  les     bx,[bp-0Ah]                     
0e21  inc     word ptr [bp-0Ah]               
0e24  mov     byte ptr es:[bx],30h            
0e28  jmp     0E31h                           
0e2a  mov     ax,es:[bx+2h]                   
0e2e  add     [bp-0Ah],ax                     
0e31  cmp     word ptr [bp+0Eh],0h            
0e35  jle     0E98h                           
0e37  push    word ptr [bp-8h]                
0e3a  push    word ptr [bp-0Ah]               
0e3d  mov     ax,1h                           
0e40  push    ax                              
0e41  call    1026h                           
0e44  les     bx,[bp-0Ah]                     
0e47  inc     word ptr [bp-0Ah]               
0e4a  mov     byte ptr es:[bx],2Eh            
0e4e  les     bx,[bp-6h]                      
0e51  cmp     word ptr es:[bx+2h],0h          
0e56  jge     0E98h                           
0e58  cmp     byte ptr [260h],0h              
0e5d  je      0E68h                           
0e5f  mov     ax,es:[bx+2h]                   
0e63  neg     ax                              
0e65  jmp     0E76h                           
0e67  nop                                     
0e68  mov     ax,es:[bx+2h]                   
0e6c  neg     ax                              
0e6e  cmp     ax,[bp+0Eh]                     
0e71  jle     0E76h                           
0e73  mov     ax,[bp+0Eh]                     
0e76  mov     [bp+0Eh],ax                     
0e79  push    word ptr [bp-8h]                
0e7c  push    word ptr [bp-0Ah]               
0e7f  push    ax                              
0e80  call    1026h                           
0e83  push    word ptr [bp+0Eh]               
0e86  mov     ax,30h                          
0e89  push    ax                              
0e8a  push    word ptr [bp-8h]                
0e8d  push    word ptr [bp-0Ah]               
0e90  call far sub_172c                       
0e95  add     sp,8h                           
0e98  mov     ax,[bp+0Ah]                     
0e9b  mov     dx,[bp+0Ch]                     
0e9e  pop     si                              
0e9f  lea     sp,[bp-2h]                      
0ea2  pop     ds                              
0ea3  pop     bp                              
0ea4  dec     bp                              
0ea5  retf                                    

; ----- sub_0ea6 -----
0ea6  mov     ax,ds                           
0ea8  nop                                     
0ea9  inc     bp                              
0eaa  push    bp                              
0eab  mov     bp,sp                           
0ead  push    ds                              
0eae  mov     ds,ax                           
0eb0  sub     sp,4h                           
0eb3  mov     byte ptr [260h],1h              
0eb8  push    word ptr [bp+0Eh]               
0ebb  push    word ptr [bp+0Ch]               
0ebe  push    word ptr [bp+0Ah]               
0ec1  push    word ptr [bp+8h]                
0ec4  push    word ptr [bp+6h]                
0ec7  push    cs                              
0ec8  call    0D40h                           
0ecb  mov     byte ptr [260h],0h              
0ed0  lea     sp,[bp-2h]                      
0ed3  pop     ds                              
0ed4  pop     bp                              
0ed5  dec     bp                              
0ed6  retf                                    
0ed7  nop                                     

; ----- sub_0ed8 -----
0ed8  mov     ax,ds                           
0eda  nop                                     
0edb  inc     bp                              
0edc  push    bp                              
0edd  mov     bp,sp                           
0edf  push    ds                              
0ee0  mov     ds,ax                           
0ee2  sub     sp,0Ah                          
0ee5  les     bx,[bp+6h]                      
0ee8  push    word ptr es:[bx+6h]             
0eec  push    word ptr es:[bx+4h]             
0ef0  push    word ptr es:[bx+2h]             
0ef4  push    word ptr es:[bx]                
0ef7  call far sub_200a                       
0efc  add     sp,8h                           
0eff  mov     [11A8h],ax                      
0f02  mov     [11AAh],dx                      
0f06  les     bx,[11A8h]                      
0f0a  mov     ax,es:[bx+2h]                   
0f0e  dec     ax                              
0f0f  mov     [262h],ax                       
0f12  cmp     word ptr es:[bx],2Dh            
0f16  jne     0F1Eh                           
0f18  mov     ax,1h                           
0f1b  jmp     0F20h                           
0f1d  nop                                     
0f1e  xor     ax,ax                           
0f20  add     ax,[bp+0Ah]                     
0f23  mov     dx,[bp+0Ch]                     
0f26  mov     [bp-6h],ax                      
0f29  mov     [bp-4h],dx                      
0f2c  push    es                              
0f2d  push    bx                              
0f2e  push    word ptr [bp+0Eh]               
0f31  push    dx                              
0f32  push    ax                              
0f33  call far sub_1628                       
0f38  add     sp,0Ah                          
0f3b  les     bx,[11A8h]                      
0f3f  mov     ax,es:[bx+2h]                   
0f43  dec     ax                              
0f44  mov     [bp-8h],ax                      
0f47  cmp     ax,[262h]                       
0f4b  jle     0F52h                           
0f4d  mov     al,1h                           
0f4f  jmp     0F54h                           
0f51  nop                                     
0f52  xor     al,al                           
0f54  mov     [264h],al                       
0f57  mov     ax,[bp-8h]                      
0f5a  mov     [262h],ax                       
0f5d  cmp     ax,0FFFCh                       
0f60  jl      0F67h                           
0f62  cmp     ax,[bp+0Eh]                     
0f65  jl      0F82h                           
0f67  push    word ptr [bp+10h]               
0f6a  push    word ptr [bp+0Eh]               
0f6d  push    word ptr [bp+0Ch]               
0f70  push    word ptr [bp+0Ah]               
0f73  push    word ptr [bp+8h]                
0f76  push    word ptr [bp+6h]                
0f79  push    cs                              
0f7a  call    0D0Ch                           
0f7d  add     sp,0Ch                          
0f80  jmp     0FB0h                           
0f82  cmp     byte ptr [264h],0h              
0f87  je      0F9Dh                           
0f89  les     bx,[bp-6h]                      
0f8c  inc     word ptr [bp-6h]                
0f8f  cmp     byte ptr es:[bx],0h             
0f93  jne     0F89h                           
0f95  mov     bx,[bp-6h]                      
0f98  mov     byte ptr es:[bx-2h],0h          
0f9d  push    word ptr [bp+0Eh]               
0fa0  push    word ptr [bp+0Ch]               
0fa3  push    word ptr [bp+0Ah]               
0fa6  push    word ptr [bp+8h]                
0fa9  push    word ptr [bp+6h]                
0fac  push    cs                              
0fad  call    0EA6h                           
0fb0  lea     sp,[bp-2h]                      
0fb3  pop     ds                              
0fb4  pop     bp                              
0fb5  dec     bp                              
0fb6  retf                                    
0fb7  nop                                     
0fb8  mov     ax,ds                           
0fba  nop                                     
0fbb  inc     bp                              
0fbc  push    bp                              
0fbd  mov     bp,sp                           
0fbf  push    ds                              
0fc0  mov     ds,ax                           
0fc2  cmp     word ptr [bp+0Eh],65h           
0fc6  je      0FCEh                           
0fc8  cmp     word ptr [bp+0Eh],45h           
0fcc  jne     0FEAh                           
0fce  push    word ptr [bp+12h]               
0fd1  push    word ptr [bp+10h]               
0fd4  push    word ptr [bp+0Ch]               
0fd7  push    word ptr [bp+0Ah]               
0fda  push    word ptr [bp+8h]                
0fdd  push    word ptr [bp+6h]                
0fe0  push    cs                              
0fe1  call    0B74h                           
0fe4  add     sp,0Ch                          
0fe7  jmp     101Eh                           
0fe9  nop                                     
0fea  cmp     word ptr [bp+0Eh],66h           
0fee  jne     1008h                           
0ff0  push    word ptr [bp+10h]               
0ff3  push    word ptr [bp+0Ch]               
0ff6  push    word ptr [bp+0Ah]               
0ff9  push    word ptr [bp+8h]                
0ffc  push    word ptr [bp+6h]                
0fff  push    cs                              
1000  call    0D40h                           
1003  add     sp,0Ah                          
1006  jmp     101Eh                           
1008  push    word ptr [bp+12h]               
100b  push    word ptr [bp+10h]               
100e  push    word ptr [bp+0Ch]               
1011  push    word ptr [bp+0Ah]               
1014  push    word ptr [bp+8h]                
1017  push    word ptr [bp+6h]                
101a  push    cs                              
101b  call    0ED8h                           
101e  lea     sp,[bp-2h]                      
1021  pop     ds                              
1022  pop     bp                              
1023  dec     bp                              
1024  retf                                    
1025  nop                                     

; ----- sub_1026 -----
1026  push    bp                              
1027  mov     bp,sp                           
1029  cmp     word ptr [bp+4h],0h             
102d  je      1053h                           
102f  push    word ptr [bp+8h]                
1032  push    word ptr [bp+6h]                
1035  call far sub_16d6                       
103a  add     sp,4h                           
103d  inc     ax                              
103e  push    ax                              
103f  push    word ptr [bp+8h]                
1042  mov     ax,[bp+6h]                      
1045  push    ax                              
1046  mov     dx,[bp+8h]                      
1049  add     ax,[bp+4h]                      
104c  push    dx                              
104d  push    ax                              
104e  call far sub_1774                       
1053  mov     sp,bp                           
1055  pop     bp                              
1056  ret     6h                              
1059  nop                                     
105a  mov     ax,ds                           
105c  nop                                     
105d  inc     bp                              
105e  push    bp                              
105f  mov     bp,sp                           
1061  push    ds                              
1062  mov     ds,ax                           
1064  sub     sp,12h                          
1067  cmp     byte ptr [624h],0h              
106c  je      1078h                           
106e  call    1880h                           
1071  mov     byte ptr [2A2h],1h              
1076  jmp     10E9h                           
1078  wait                                    
1079  fxch    st(0),st(1)                     
107b  wait                                    
107c  fst     qword ptr [272h]                ; [ds] = 0
1080  wait                                    
1081  fxch    st(0),st(1)                     
1083  wait                                    
1084  fst     qword ptr [27Ah]                ; [ds] = 0
1088  jmp     106Eh                           
108a  mov     ax,ds                           
108c  nop                                     
108d  inc     bp                              
108e  push    bp                              
108f  mov     bp,sp                           
1091  push    ds                              
1092  mov     ds,ax                           
1094  sub     sp,12h                          
1097  cmp     byte ptr [624h],0h              
109c  je      10A8h                           
109e  call    183Eh                           
10a1  mov     byte ptr [2A2h],1h              
10a6  jmp     10E9h                           
10a8  wait                                    
10a9  fst     qword ptr [272h]                ; [ds] = 0
10ad  jmp     109Eh                           
10af  lea     sp,[bp-2h]                      
10b2  pop     ds                              
10b3  pop     bp                              
10b4  dec     bp                              
10b5  retf                                    
10b6  mov     ax,ds                           
10b8  nop                                     
10b9  inc     bp                              
10ba  push    bp                              
10bb  mov     bp,sp                           
10bd  push    ds                              
10be  mov     ds,ax                           
10c0  sub     sp,12h                          
10c3  wait                                    
10c4  fld     qword ptr [bp+6h]               
10c7  wait                                    
10c8  fld     qword ptr [bp+0Eh]              
10cb  call    1880h                           
10ce  jmp     10E4h                           
10d0  mov     ax,ds                           
10d2  nop                                     
10d3  inc     bp                              
10d4  push    bp                              
10d5  mov     bp,sp                           
10d7  push    ds                              
10d8  mov     ds,ax                           
10da  sub     sp,12h                          
10dd  wait                                    
10de  fld     qword ptr [bp+6h]               
10e1  call    183Eh                           
10e4  mov     byte ptr [2A2h],0h              
10e9  mov     al,[bp-11h]                     
10ec  or      al,al                           
10ee  jg      112Bh                           
10f0  wait                                    
10f1  fclex                                   
10f3  wait                                    
10f4  fst     qword ptr [15Eh]                ; [ds] = 0
10f8  wait                                    
10f9  fstsw   word ptr [bp-0Ah]               
10fc  nop                                     
10fd  wait                                    
10fe  test    word ptr [bp-0Ah],8h            
1103  jne     1127h                           
1105  cmp     al,6h                           
1107  je      112Fh                           
1109  cmp     byte ptr [2A2h],0h              
110e  jne     111Ah                           
1110  wait                                    
1111  fstp    qword ptr [15Eh]                ; [ds] = 0
1115  mov     ax,15Eh                         
1118  mov     dx,ds                           
111a  wait                                    
111b  fldcw   word ptr [bp-6h]                
111e  nop                                     
111f  wait                                    
1120  lea     sp,[bp-2h]                      
1123  pop     ds                              
1124  pop     bp                              
1125  dec     bp                              
1126  retf                                    
1127  mov     al,3h                           
1129  jmp     112Fh                           
112b  cmp     al,6h                           
112d  je      10F0h                           
112f  cbw                                     
1130  mov     [26Ch],ax                       
1133  push    si                              
1134  push    di                              
1135  mov     bx,[bp-10h]                     
1138  inc     bx                              
1139  mov     [26Eh],bx                       
113d  mov     [270h],ds                       
1141  mov     byte ptr [2A1h],0h              
1146  cmp     word ptr [bx],6F6Ch             
114a  jne     115Bh                           
114c  cmp     byte ptr [bx+2h],67h            
1150  jne     115Bh                           
1152  cmp     al,2h                           
1154  jne     115Bh                           
1156  mov     byte ptr [2A1h],1h              
115b  cmp     byte ptr [2A2h],0h              
1160  jne     117Ah                           
1162  wait                                    
1163  fld     qword ptr [bp+6h]               
1166  wait                                    
1167  fstp    qword ptr [272h]                ; [ds] = 0
116b  cmp     byte ptr [bx+0Ch],1h            
116f  je      117Ah                           
1171  wait                                    
1172  fld     qword ptr [bp+0Eh]              
1175  wait                                    
1176  fstp    qword ptr [27Ah]                ; [ds] = 0
117a  xchg    ax,si                           
117b  mov     di,28Ah                         
117e  xor     cx,cx                           
1180  mov     cl,[bx+si+5h]                   
1183  add     di,cx                           
1185  jmp     word ptr [di]                   
1187  wait                                    
1188  fstp    st(0)                           
118a  wait                                    
118b  fldz                                    
118d  jmp     11B3h                           
118f  wait                                    
1190  ftst                                    
1192  wait                                    
1193  fstsw   word ptr [bp-0Ah]               
1196  nop                                     
1197  wait                                    
1198  test    byte ptr [bp-9h],1h             
119c  jne     11A8h                           
119e  wait                                    
119f  fstp    st(0)                           
11a1  wait                                    
11a2  fld     qword ptr [61Ch]                
11a6  jmp     11B3h                           
11a8  wait                                    
11a9  fstp    st(0)                           
11ab  wait                                    
11ac  fld     qword ptr [61Ch]                
11b0  wait                                    
11b1  fchs                                    
11b3  wait                                    
11b4  fstp    qword ptr [282h]                ; [ds] = 0
11b8  push    ds                              
11b9  mov     ax,26Ch                         
11bc  push    ax                              
11bd  call far sub_2060                       
11c2  add     sp,4h                           
11c5  or      ax,ax                           
11c7  jne     11FFh                           
11c9  mov     al,21h                          
11cb  cmp     byte ptr [2A1h],0h              
11d0  jne     11D9h                           
11d2  cmp     word ptr [26Ch],3h              
11d7  jb      11DBh                           
11d9  mov     al,22h                          
11db  cbw                                     
11dc  mov     [168h],ax                       
11df  shl     si,1                            
11e1  mov     si,[si+290h]                    
11e5  or      si,si                           
11e7  je      11FFh                           
11e9  mov     bx,[bp-10h]                     
11ec  call far sub_2192                       
11f1  mov     bx,29Eh                         
11f4  call far sub_2192                       
11f9  push    si                              
11fa  call far sub_126d                       
11ff  pop     di                              
1200  pop     si                              
1201  wait                                    
1202  fld     qword ptr [282h]                ; [ds] = 0
1206  wait                                    
1207  fst     qword ptr [15Eh]                ; [ds] = 0
120b  wait                                    
120c  fclex                                   
120e  jmp     1109h                           
1211  add     [di+55h],al                     
1214  mov     bp,sp                           
1216  push    ds                              
1217  push    es                              
1218  push    ax                              
1219  push    bx                              
121a  push    cx                              
121b  push    dx                              
121c  xor     ah,ah                           
121e  add     ax,-1Ch                         
1221  push    ax                              
1222  call far sub_087e                       
1227  mov     ds,ax                           
1229  pop     ax                              
122a  call    128Eh                           
122d  pop     dx                              
122e  pop     cx                              
122f  pop     bx                              
1230  pop     ax                              
1231  pop     es                              
1232  pop     ds                              
1233  pop     bp                              
1234  dec     bp                              
1235  retf                                    

; ----- sub_1236 -----
1236  mov     ax,ds                           
1238  nop                                     
1239  inc     bp                              
123a  push    bp                              
123b  mov     bp,sp                           
123d  push    ds                              
123e  mov     ds,ax                           
1240  push    si                              
1241  push    di                              
1242  push    ds                              
1243  pop     es                              
1244  mov     dx,[bp+6h]                      
1247  mov     si,790h                         
124a  lodsw                                   
124b  cmp     ax,dx                           
124d  je      125Fh                           
124f  inc     ax                              
1250  xchg    ax,si                           
1251  je      125Fh                           
1253  xchg    ax,di                           
1254  xor     ax,ax                           
1256  mov     cx,0FFFFh                       
1259  repne   scasb                           
125b  mov     si,di                           
125d  jmp     124Ah                           
125f  xchg    ax,si                           
1260  pop     di                              
1261  pop     si                              
1262  sub     bp,2h                           
1265  mov     sp,bp                           
1267  pop     ds                              
1268  pop     bp                              
1269  dec     bp                              
126a  retf    2h                              

; ----- sub_126d -----
126d  mov     ax,ds                           
126f  nop                                     
1270  inc     bp                              
1271  push    bp                              
1272  mov     bp,sp                           
1274  push    ds                              
1275  mov     ds,ax                           
1277  push    di                              
1278  pop     di                              
1279  sub     bp,2h                           
127c  mov     sp,bp                           
127e  pop     ds                              
127f  pop     bp                              
1280  dec     bp                              
1281  retf    2h                              
1284  call far sub_087e                       
1289  mov     ds,ax                           
128b  mov     ax,3h                           

; ----- sub_128e -----
128e  push    ax                              
128f  push    ax                              
1290  push    cs                              
1291  call    660h                            
1294  push    cs                              
1295  call    126Dh                           
1298  push    cs                              
1299  call    1236h                           
129c  xor     bx,bx                           
129e  or      ax,ax                           
12a0  je      12BFh                           
12a2  mov     di,ax                           
12a4  mov     ax,9h                           
12a7  cmp     byte ptr [di],4Dh               
12aa  jne     12AFh                           
12ac  mov     ax,0Fh                          
12af  add     di,ax                           
12b1  push    di                              
12b2  push    ds                              
12b3  pop     es                              
12b4  mov     al,0Dh                          
12b6  mov     cx,22h                          
12b9  repne   scasb                           
12bb  mov     [di-1h],bl                      
12be  pop     ax                              
12bf  push    bx                              
12c0  push    ds                              
12c1  push    ax                              
12c2  call far KERNEL.FATALAPPEXIT            
12c7  mov     ax,0FFh                         
12ca  push    ax                              
12cb  call far KERNEL.FATALEXIT               

; ----- sub_12d0 -----
12d0  inc     bp                              
12d1  push    bp                              
12d2  mov     bp,sp                           
12d4  push    ds                              
12d5  cmp     word ptr [11ACh],0h             
12da  jne     12E5h                           
12dc  call far sub_12ec                       
12e1  inc     word ptr [11ACh]                
12e5  lea     sp,[bp-2h]                      
12e8  pop     ds                              
12e9  pop     bp                              
12ea  dec     bp                              
12eb  retf                                    

; ----- sub_12ec -----
12ec  inc     bp                              
12ed  push    bp                              
12ee  mov     bp,sp                           
12f0  push    ds                              
12f1  sub     sp,8h                           
12f4  push    si                              
12f5  xor     si,si                           
12f7  mov     ax,2A4h                         
12fa  push    ds                              
12fb  push    ax                              
12fc  call far sub_21dc                       
1301  add     sp,4h                           
1304  mov     [bp-0Ah],ax                     
1307  mov     [bp-8h],dx                      
130a  or      dx,ax                           
130c  je      1317h                           
130e  les     bx,[bp-0Ah]                     
1311  cmp     byte ptr es:[bx],0h             
1315  jne     1393h                           
1317  call far KERNEL.GETDOSENVIRONMENT       
131c  mov     [bp-6h],ax                      
131f  mov     [bp-4h],dx                      
1322  or      dx,ax                           
1324  jne     1329h                           
1326  jmp     14ACh                           
1329  les     bx,[bp-6h]                      
132c  cmp     byte ptr es:[bx],0h             
1330  jne     1348h                           
1332  jmp     14ACh                           
1335  nop                                     
1336  push    word ptr [bp-4h]                
1339  push    word ptr [bp-6h]                
133c  call far sub_16d6                       
1341  add     sp,4h                           
1344  inc     ax                              
1345  add     [bp-6h],ax                      
1348  les     bx,[bp-6h]                      
134b  cmp     byte ptr es:[bx],0h             
134f  je      1368h                           
1351  mov     ax,3h                           
1354  push    ax                              
1355  mov     ax,2A7h                         
1358  push    ds                              
1359  push    ax                              
135a  push    es                              
135b  push    bx                              
135c  call far sub_2338                       
1361  add     sp,0Ah                          
1364  or      ax,ax                           
1366  jne     1336h                           
1368  les     bx,[bp-6h]                      
136b  cmp     byte ptr es:[bx],0h             
136f  jne     1374h                           
1371  jmp     14ACh                           
1374  mov     ax,10h                          
1377  push    ax                              
1378  add     word ptr [bp-6h],3h             
137c  push    es                              
137d  push    word ptr [bp-6h]                
1380  mov     ax,11AEh                        
1383  mov     [bp-0Ah],ax                     
1386  mov     [bp-8h],ds                      
1389  push    ds                              
138a  push    ax                              
138b  call far sub_2374                       
1390  add     sp,0Ah                          
1393  mov     ax,3h                           
1396  push    ax                              
1397  push    word ptr [bp-8h]                
139a  push    word ptr [bp-0Ah]               
139d  push    word ptr [3F2h]                 
13a1  push    word ptr [3F0h]                 
13a5  call far sub_21ae                       
13aa  add     sp,0Ah                          
13ad  add     word ptr [bp-0Ah],3h            
13b1  les     bx,[bp-0Ah]                     
13b4  cmp     byte ptr es:[bx],2Dh            
13b8  jne     13C1h                           
13ba  inc     si                              
13bb  lea     ax,[bx+1h]                      
13be  mov     [bp-0Ah],ax                     
13c1  mov     ax,0E10h                        
13c4  cwd                                     
13c5  push    dx                              
13c6  push    ax                              
13c7  push    es                              
13c8  push    word ptr [bp-0Ah]               
13cb  call far sub_21d8                       
13d0  add     sp,4h                           
13d3  push    dx                              
13d4  push    ax                              
13d5  call far sub_050c                       
13da  mov     [3E2h],ax                       
13dd  mov     [3E4h],dx                       
13e1  les     bx,[bp-0Ah]                     
13e4  cmp     byte ptr es:[bx],2Bh            
13e8  je      13F6h                           
13ea  cmp     byte ptr es:[bx],30h            
13ee  jl      13FCh                           
13f0  cmp     byte ptr es:[bx],39h            
13f4  jg      13FCh                           
13f6  inc     word ptr [bp-0Ah]               
13f9  jmp     13E1h                           
13fb  nop                                     
13fc  cmp     byte ptr es:[bx],3Ah            
1400  jne     146Ch                           
1402  mov     ax,3Ch                          
1405  cwd                                     
1406  push    dx                              
1407  push    ax                              
1408  inc     word ptr [bp-0Ah]               
140b  push    es                              
140c  push    word ptr [bp-0Ah]               
140f  call far sub_21d8                       
1414  add     sp,4h                           
1417  push    dx                              
1418  push    ax                              
1419  call far sub_050c                       
141e  add     [3E2h],ax                       
1422  adc     [3E4h],dx                       
1426  jmp     1431h                           
1428  cmp     byte ptr es:[bx],39h            
142c  jg      143Ah                           
142e  inc     word ptr [bp-0Ah]               
1431  les     bx,[bp-0Ah]                     
1434  cmp     byte ptr es:[bx],30h            
1438  jge     1428h                           
143a  cmp     byte ptr es:[bx],3Ah            
143e  jne     146Ch                           
1440  inc     word ptr [bp-0Ah]               
1443  push    es                              
1444  push    word ptr [bp-0Ah]               
1447  call far sub_21d8                       
144c  add     sp,4h                           
144f  add     [3E2h],ax                       
1453  adc     [3E4h],dx                       
1457  jmp     1463h                           
1459  nop                                     
145a  cmp     byte ptr es:[bx],39h            
145e  jg      146Ch                           
1460  inc     word ptr [bp-0Ah]               
1463  les     bx,[bp-0Ah]                     
1466  cmp     byte ptr es:[bx],30h            
146a  jge     145Ah                           
146c  or      si,si                           
146e  je      147Dh                           
1470  neg     word ptr [3E2h]                 
1474  adc     word ptr [3E4h],0h              
1479  neg     word ptr [3E4h]                 
147d  les     bx,[bp-0Ah]                     
1480  mov     al,es:[bx]                      
1483  cbw                                     
1484  mov     [3E6h],ax                       
1487  or      ax,ax                           
1489  je      14A4h                           
148b  mov     ax,3h                           
148e  push    ax                              
148f  push    es                              
1490  push    bx                              
1491  push    word ptr [3F6h]                 
1495  push    word ptr [3F4h]                 
1499  call far sub_21ae                       
149e  add     sp,0Ah                          
14a1  jmp     14ACh                           
14a3  nop                                     
14a4  les     bx,[3F4h]                       
14a8  mov     byte ptr es:[bx],0h             
14ac  pop     si                              
14ad  lea     sp,[bp-2h]                      
14b0  pop     ds                              
14b1  pop     bp                              
14b2  dec     bp                              
14b3  retf                                    

; ----- sub_14b4 -----
14b4  inc     bp                              
14b5  push    bp                              
14b6  mov     bp,sp                           
14b8  push    ds                              
14b9  sub     sp,4h                           
14bc  push    si                              
14bd  les     bx,[bp+6h]                      
14c0  cmp     word ptr es:[bx+0Ah],43h        
14c5  jge     14CAh                           
14c7  jmp     157Dh                           
14ca  cmp     word ptr es:[bx+8h],3h          
14cf  jge     14D4h                           
14d1  jmp     157Dh                           
14d4  cmp     word ptr es:[bx+8h],9h          
14d9  jle     14DEh                           
14db  jmp     157Dh                           
14de  cmp     word ptr es:[bx+8h],3h          
14e3  jle     14ECh                           
14e5  cmp     word ptr es:[bx+8h],9h          
14ea  jl      1568h                           
14ec  mov     si,es:[bx+0Ah]                  
14f0  cmp     si,56h                          
14f3  jle     150Ch                           
14f5  cmp     word ptr es:[bx+8h],3h          
14fa  jne     150Ch                           
14fc  mov     bx,es:[bx+8h]                   
1500  add     bx,bx                           
1502  mov     ax,[bx+3C8h]                    
1506  add     ax,7h                           
1509  jmp     1516h                           
150b  nop                                     
150c  mov     bx,es:[bx+8h]                   
1510  add     bx,bx                           
1512  mov     ax,[bx+3CAh]                    
1516  mov     [bp-4h],ax                      
1519  test    si,3h                           
151d  jne     1522h                           
151f  inc     word ptr [bp-4h]                
1522  mov     ax,7h                           
1525  cwd                                     
1526  push    dx                              
1527  push    ax                              
1528  mov     cx,16Dh                         
152b  lea     ax,[si-46h]                     
152e  imul    cx                              
1530  lea     cx,[si-1h]                      
1533  sar     cx,1                            
1535  sar     cx,1                            
1537  add     ax,cx                           
1539  add     ax,[bp-4h]                      
153c  cwd                                     
153d  sub     ax,0Dh                          
1540  sbb     dx,0h                           
1543  push    dx                              
1544  push    ax                              
1545  call far sub_2298                       
154a  sub     ax,[bp-4h]                      
154d  neg     ax                              
154f  les     bx,[bp+6h]                      
1552  cmp     word ptr es:[bx+8h],3h          
1557  jne     156Eh                           
1559  cmp     ax,es:[bx+0Eh]                  
155d  jl      1568h                           
155f  jne     157Dh                           
1561  cmp     word ptr es:[bx+4h],2h          
1566  jl      157Dh                           
1568  mov     ax,1h                           
156b  jmp     157Fh                           
156d  nop                                     
156e  cmp     es:[bx+0Eh],ax                  
1572  jl      1568h                           
1574  jne     157Dh                           
1576  cmp     word ptr es:[bx+4h],1h          
157b  jl      1568h                           
157d  xor     ax,ax                           
157f  pop     si                              
1580  lea     sp,[bp-2h]                      
1583  pop     ds                              
1584  pop     bp                              
1585  dec     bp                              
1586  retf                                    
1587  nop                                     

; ----- sub_1588 -----
1588  push    bp                              
1589  mov     bp,sp                           
158b  push    bx                              
158c  push    es                              
158d  push    cx                              
158e  mov     cx,1000h                        
1591  xchg    cx,[626h]                       
1595  push    cx                              
1596  push    ax                              
1597  call far sub_2847                       
159c  pop     bx                              
159d  pop     [626h]                          
15a1  pop     cx                              
15a2  mov     bx,dx                           
15a4  or      bx,ax                           
15a6  je      15ACh                           
15a8  pop     es                              
15a9  pop     bx                              
15aa  jmp     15B1h                           
15ac  mov     ax,cx                           
15ae  jmp     128Eh                           
15b1  mov     sp,bp                           
15b3  pop     bp                              
15b4  ret                                     
15b5  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
15b6  mov     ax,ds                           
15b8  nop                                     
15b9  inc     bp                              
15ba  push    bp                              
15bb  mov     bp,sp                           
15bd  push    ds                              
15be  mov     ds,ax                           
15c0  xor     ax,ax                           
15c2  lea     sp,[bp-2h]                      
15c5  pop     ds                              
15c6  pop     bp                              
15c7  dec     bp                              
15c8  retf                                    
15c9  nop                                     

; ----- sub_15ca -----
15ca  inc     bp                              
15cb  push    bp                              
15cc  mov     bp,sp                           
15ce  push    ds                              
15cf  push    di                              
15d0  push    si                              
15d1  jmp     15D7h                           
15d3  nop                                     
15d4  inc     word ptr [bp+6h]                
15d7  les     bx,[bp+6h]                      
15da  mov     al,es:[bx]                      
15dd  cbw                                     
15de  mov     bx,ax                           
15e0  test    byte ptr [bx+2ADh],8h           
15e5  jne     15D4h                           
15e7  xor     ax,ax                           
15e9  push    ax                              
15ea  push    ax                              
15eb  push    es                              
15ec  push    word ptr [bp+6h]                
15ef  call far sub_2194                       
15f4  add     sp,4h                           
15f7  push    ax                              
15f8  push    word ptr [bp+8h]                
15fb  push    word ptr [bp+6h]                
15fe  call far sub_27c2                       
1603  add     sp,0Ah                          
1606  add     ax,8h                           
1609  mov     bx,1E5Ah                        
160c  push    ds                              
160d  mov     di,bx                           
160f  mov     si,ax                           
1611  push    ds                              
1612  pop     es                              
1613  mov     ds,dx                           
1615  movsw                                   
1616  movsw                                   
1617  movsw                                   
1618  movsw                                   
1619  pop     ds                              
161a  mov     ax,bx                           
161c  mov     dx,ds                           
161e  pop     si                              
161f  pop     di                              
1620  lea     sp,[bp-2h]                      
1623  pop     ds                              
1624  pop     bp                              
1625  dec     bp                              
1626  retf                                    
1627  nop                                     

; ----- sub_1628 -----
1628  inc     bp                              
1629  push    bp                              
162a  mov     bp,sp                           
162c  push    ds                              
162d  sub     sp,0Ah                          
1630  les     bx,[bp+0Ch]                     
1633  mov     ax,es:[bx+6h]                   
1637  mov     dx,es:[bx+8h]                   
163b  mov     [bp-0Ah],ax                     
163e  mov     [bp-8h],dx                      
1641  les     bx,[bp+6h]                      
1644  mov     byte ptr es:[bx],30h            
1648  lea     ax,[bx+1h]                      
164b  mov     [bp-6h],ax                      
164e  mov     [bp-4h],es                      
1651  jmp     167Eh                           
1653  nop                                     
1654  les     bx,[bp-0Ah]                     
1657  cmp     byte ptr es:[bx],0h             
165b  je      166Ah                           
165d  mov     al,es:[bx]                      
1660  cbw                                     
1661  mov     [bp-0Ch],ax                     
1664  inc     word ptr [bp-0Ah]               
1667  jmp     166Fh                           
1669  nop                                     
166a  mov     word ptr [bp-0Ch],30h           
166f  mov     al,[bp-0Ch]                     
1672  les     bx,[bp-6h]                      
1675  inc     word ptr [bp-6h]                
1678  mov     es:[bx],al                      
167b  dec     word ptr [bp+0Ah]               
167e  cmp     word ptr [bp+0Ah],0h            
1682  jg      1654h                           
1684  les     bx,[bp-6h]                      
1687  mov     byte ptr es:[bx],0h             
168b  cmp     word ptr [bp+0Ah],0h            
168f  jl      16AFh                           
1691  les     bx,[bp-0Ah]                     
1694  cmp     byte ptr es:[bx],35h            
1698  jl      16AFh                           
169a  jmp     16A0h                           
169c  mov     byte ptr es:[bx],30h            
16a0  dec     word ptr [bp-6h]                
16a3  les     bx,[bp-6h]                      
16a6  cmp     byte ptr es:[bx],39h            
16aa  je      169Ch                           
16ac  inc     byte ptr es:[bx]                
16af  les     bx,[bp+6h]                      
16b2  cmp     byte ptr es:[bx],31h            
16b6  jne     16C2h                           
16b8  les     bx,[bp+0Ch]                     
16bb  inc     word ptr es:[bx+2h]             
16bf  jmp     16CEh                           
16c1  nop                                     
16c2  lea     ax,[bx+1h]                      
16c5  push    es                              
16c6  push    ax                              
16c7  push    es                              
16c8  push    bx                              
16c9  call far sub_16f0                       
16ce  lea     sp,[bp-2h]                      
16d1  pop     ds                              
16d2  pop     bp                              
16d3  dec     bp                              
16d4  retf                                    
16d5  nop                                     

; ----- sub_16d6 -----
16d6  push    bp                              
16d7  mov     bp,sp                           
16d9  mov     dx,di                           
16db  les     di,[bp+6h]                      
16de  xor     ax,ax                           
16e0  mov     cx,0FFFFh                       
16e3  repne   scasb                           
16e5  not     cx                              
16e7  jne     16EAh                           
16e9  dec     cx                              
16ea  xchg    ax,cx                           
16eb  mov     di,dx                           
16ed  pop     bp                              
16ee  retf                                    
16ef  add     [bx+si],al                      

; ----- sub_16f0 -----
16f0  push    bp                              
16f1  mov     bp,sp                           
16f3  mov     dx,di                           
16f5  mov     bx,si                           
16f7  push    ds                              
16f8  lds     si,[bp+0Ah]                     
16fb  mov     di,si                           
16fd  mov     ax,ds                           
16ff  mov     es,ax                           
1701  xor     ax,ax                           
1703  mov     cx,0FFFFh                       
1706  repne   scasb                           
1708  not     cx                              
170a  les     di,[bp+6h]                      
170d  mov     ax,di                           
170f  je      1715h                           
1711  movsw                                   
1712  dec     cx                              
1713  jmp     171Bh                           
1715  test    al,1h                           
1717  je      171Bh                           
1719  movsb                                   
171a  dec     cx                              
171b  shr     cx,1                            
171d  rep     movsw                           
171f  adc     cx,cx                           
1721  rep     movsb                           
1723  mov     si,bx                           
1725  mov     di,dx                           
1727  pop     ds                              
1728  mov     dx,es                           
172a  pop     bp                              
172b  retf                                    

; ----- sub_172c -----
172c  push    bp                              
172d  mov     bp,sp                           
172f  mov     cx,[bp+0Ch]                     
1732  jcxz    176Ch                           
1734  push    di                              
1735  les     di,[bp+6h]                      
1738  mov     dx,di                           
173a  neg     dx                              
173c  je      174Ah                           
173e  sub     dx,cx                           
1740  sbb     bx,bx                           
1742  and     dx,bx                           
1744  add     dx,cx                           
1746  xchg    dx,cx                           
1748  sub     dx,cx                           
174a  mov     ax,[bp+0Ah]                     
174d  mov     ah,al                           
174f  shr     cx,1                            
1751  rep     stosw                           
1753  adc     cx,cx                           
1755  rep     stosb                           
1757  xchg    dx,cx                           
1759  jcxz    176Bh                           
175b  mov     bx,es                           
175d  add     bx,0FFFFh                       
1761  mov     es,bx                           
1763  shr     cx,1                            
1765  rep     stosw                           
1767  adc     cx,cx                           
1769  rep     stosb                           
176b  pop     di                              
176c  mov     ax,[bp+6h]                      
176f  mov     dx,[bp+8h]                      
1772  pop     bp                              
1773  retf                                    

; ----- sub_1774 -----
1774  push    bp                              
1775  mov     bp,sp                           
1777  mov     cx,[bp+0Eh]                     
177a  push    ds                              
177b  push    di                              
177c  push    si                              
177d  or      cx,cx                           
177f  jne     1784h                           
1781  jmp     1833h                           
1784  lds     si,[bp+0Ah]                     
1787  les     di,[bp+6h]                      
178a  push    ds                              
178b  push    si                              
178c  push    es                              
178d  push    di                              
178e  call far sub_2278                       
1793  mov     cx,[bp+0Eh]                     
1796  or      dx,dx                           
1798  js      17F1h                           
179a  sub     ax,cx                           
179c  sbb     dx,0h                           
179f  jae     17F1h                           
17a1  dec     cx                              
17a2  add     si,cx                           
17a4  jae     17ADh                           
17a6  mov     ax,ds                           
17a8  add     ax,175Fh                        
17ab  mov     ds,ax                           
17ad  add     di,cx                           
17af  jae     17B8h                           
17b1  mov     ax,es                           
17b3  add     ax,17A9h                        
17b6  mov     es,ax                           
17b8  inc     cx                              
17b9  mov     ax,cx                           
17bb  dec     ax                              
17bc  sub     ax,di                           
17be  sbb     bx,bx                           
17c0  and     ax,bx                           
17c2  add     ax,di                           
17c4  sub     ax,si                           
17c6  sbb     bx,bx                           
17c8  and     ax,bx                           
17ca  add     ax,si                           
17cc  inc     ax                              
17cd  xchg    ax,cx                           
17ce  sub     ax,cx                           
17d0  std                                     
17d1  rep     movsb                           
17d3  cld                                     
17d4  xchg    ax,cx                           
17d5  jcxz    1833h                           
17d7  cmp     si,-1h                          
17da  jne     17E3h                           
17dc  mov     ax,ds                           
17de  sub     ax,17B4h                        
17e1  mov     ds,ax                           
17e3  cmp     di,-1h                          
17e6  jne     17B9h                           
17e8  mov     ax,es                           
17ea  sub     ax,17DFh                        
17ed  mov     es,ax                           
17ef  jmp     17B9h                           
17f1  mov     ax,cx                           
17f3  dec     ax                              
17f4  mov     dx,di                           
17f6  not     dx                              
17f8  sub     ax,dx                           
17fa  sbb     bx,bx                           
17fc  and     ax,bx                           
17fe  add     ax,dx                           
1800  mov     dx,si                           
1802  not     dx                              
1804  sub     ax,dx                           
1806  sbb     bx,bx                           
1808  and     ax,bx                           
180a  add     ax,dx                           
180c  inc     ax                              
180d  xchg    ax,cx                           
180e  sub     ax,cx                           
1810  shr     cx,1                            
1812  rep     movsw                           
1814  adc     cx,cx                           
1816  rep     movsb                           
1818  xchg    ax,cx                           
1819  jcxz    1833h                           
181b  or      si,si                           
181d  jne     1826h                           
181f  mov     ax,ds                           
1821  add     ax,17EBh                        
1824  mov     ds,ax                           
1826  or      di,di                           
1828  jne     17F1h                           
182a  mov     ax,es                           
182c  add     ax,1822h                        
182f  mov     es,ax                           
1831  jmp     17F1h                           
1833  mov     ax,[bp+6h]                      
1836  mov     dx,[bp+8h]                      
1839  pop     si                              
183a  pop     di                              
183b  pop     ds                              
183c  pop     bp                              
183d  retf                                    

; ----- sub_183e -----
183e  wait                                    
183f  fstcw   word ptr [bp-6h]                
1842  mov     bl,[bp-6h]                      
1845  or      bl,38h                          
1848  mov     bh,13h                          
184a  mov     [bp-8h],bx                      
184d  wait                                    
184e  fldcw   word ptr [bp-8h]                
1851  mov     bx,40Dh                         
1854  wait                                    
1855  fxam                                    
1857  mov     [bp-10h],dx                     
185a  wait                                    
185b  fstsw   word ptr [bp-0Ah]               
185e  mov     byte ptr [bp-11h],0h            
1862  nop                                     
1863  wait                                    
1864  mov     cl,[bp-9h]                      
1867  shl     cl,1                            
1869  sar     cl,1                            
186b  rol     cl,1                            
186d  mov     al,cl                           
186f  and     al,0Fh                          
1871  xlat                                    
1872  cbw                                     
1873  and     cx,404h                         
1877  mov     bx,dx                           
1879  add     bx,ax                           
187b  add     bx,10h                          
187e  jmp     word ptr [bx]                   

; ----- sub_1880 -----
1880  wait                                    
1881  fstcw   word ptr [bp-6h]                
1884  mov     bl,[bp-6h]                      
1887  or      bl,38h                          
188a  mov     bh,13h                          
188c  mov     [bp-8h],bx                      
188f  wait                                    
1890  fldcw   word ptr [bp-8h]                
1893  mov     bx,40Dh                         
1896  wait                                    
1897  fxam                                    
1899  mov     [bp-10h],dx                     
189c  wait                                    
189d  fstsw   word ptr [bp-0Ah]               
18a0  mov     byte ptr [bp-11h],0h            
18a4  wait                                    
18a5  fxch    st(0),st(1)                     
18a7  mov     cl,[bp-9h]                      
18aa  wait                                    
18ab  fxam                                    
18ad  wait                                    
18ae  fstsw   word ptr [bp-0Ah]               
18b1  wait                                    
18b2  fxch    st(0),st(1)                     
18b4  mov     ch,[bp-9h]                      
18b7  shl     ch,1                            
18b9  sar     ch,1                            
18bb  rol     ch,1                            
18bd  mov     al,ch                           
18bf  and     al,0Fh                          
18c1  xlat                                    
18c2  mov     ah,al                           
18c4  shl     cl,1                            
18c6  sar     cl,1                            
18c8  rol     cl,1                            
18ca  mov     al,cl                           
18cc  and     al,0Fh                          
18ce  xlat                                    
18cf  shl     ah,1                            
18d1  shl     ah,1                            
18d3  or      al,ah                           
18d5  cbw                                     
18d6  and     cx,404h                         
18da  mov     bx,dx                           
18dc  add     bx,ax                           
18de  add     bx,10h                          
18e1  jmp     word ptr [bx]                   
18e3  call    1925h                           
18e6  wait                                    
18e7  fxch    st(0),st(1)                     
18e9  wait                                    
18ea  fstp    st(0)                           
18ec  ret                                     
18ed  call    1925h                           
18f0  jmp     18E9h                           
18f2  wait                                    
18f3  fstp    st(0)                           
18f5  wait                                    
18f6  fstp    st(0)                           
18f8  wait                                    
18f9  fldz                                    
18fb  ret                                     
18fc  wait                                    
18fd  fstp    st(0)                           
18ff  wait                                    
1900  fstp    st(0)                           
1902  wait                                    
1903  fld1                                    
1905  ret                                     
1906  call    1925h                           
1909  wait                                    
190a  faddp   st(1)                           
190c  ret                                     

; ----- sub_190d -----
190d  test    byte ptr [bp-5h],10h            
1911  jne     1929h                           
1913  pop     ax                              
1914  wait                                    
1915  fstp    st(0)                           
1917  wait                                    
1918  fstp    st(0)                           
191a  wait                                    
191b  fld     tword ptr [3F8h]                
191f  cmp     byte ptr [bp-11h],0h            
1923  jg      1929h                           

; ----- sub_1925 -----
1925  mov     byte ptr [bp-11h],1h            
1929  or      cl,cl                           
192b  ret                                     

; ----- sub_192c -----
192c  test    byte ptr [bp-5h],10h            
1930  jne     1929h                           
1932  pop     ax                              
1933  jmp     1917h                           
1935  or      cl,cl                           
1937  je      193Ch                           
1939  wait                                    
193a  fchs                                    
193c  ret                                     
193d  add     [bp+si],cl                      
193f  in      ax,dx                           
1940  jne     1979h                           
1942  wait                                    
1943  fxch    st(0),st(1)                     
1945  call    1A1Fh                           
1948  jmp     1952h                           
194a  xor     ch,ch                           
194c  wait                                    
194d  fldl2e                                  
194f  wait                                    
1950  fmulp   st(1)                           
1952  call    1A72h                           
1955  wait                                    
1956  fld1                                    
1958  wait                                    
1959  faddp   st(1)                           
195b  test    byte ptr [bp-9h],1h             
195f  je      1967h                           
1961  wait                                    
1962  fld1                                    
1964  wait                                    
1965  fdivrp  st(1), st(0)                    
1967  test    dl,40h                          
196a  jne     196Fh                           
196c  wait                                    
196d  fscale                                  
196f  or      ch,ch                           
1971  je      1976h                           
1973  wait                                    
1974  fchs                                    
1976  jmp     18E6h                           
1979  wait                                    
197a  fld     st(0),st(0)                     
197c  wait                                    
197d  fstp    tword ptr [446h]                
1981  nop                                     
1982  wait                                    
1983  mov     ax,[44Eh]                       
1986  and     ah,7Fh                          
1989  sub     ax,3FFFh                        
198c  jb      19DDh                           
198e  cmp     ax,40h                          
1991  jae     19DDh                           
1993  neg     ax                              
1995  add     ax,3Fh                          
1998  mov     ch,1h                           
199a  mov     cl,al                           
199c  and     cl,7h                           
199f  shl     ch,cl                           
19a1  mov     cl,ch                           
19a3  dec     cx                              
19a4  shr     ax,1                            
19a6  shr     ax,1                            
19a8  shr     ax,1                            
19aa  mov     bx,ax                           
19ac  mov     al,[bx+446h]                    
19b0  and     ch,al                           
19b2  and     cl,al                           
19b4  or      bx,bx                           
19b6  je      19BFh                           
19b8  dec     bx                              
19b9  or      cl,[bx+446h]                    
19bd  jmp     19B4h                           
19bf  or      cl,cl                           
19c1  jne     19DDh                           
19c3  wait                                    
19c4  fxch    st(0),st(1)                     
19c6  wait                                    
19c7  fabs                                    
19c9  jmp     1945h                           
19cc  cmp     byte ptr [40Ch],1h              
19d1  je      19DDh                           
19d3  jmp     18FCh                           
19d6  mov     byte ptr [bp-11h],2h            
19da  wait                                    
19db  fld     st(0),st(0)                     
19dd  jmp     1914h                           
19e0  cmp     byte ptr [40Ch],1h              
19e5  je      19DDh                           
19e7  wait                                    
19e8  fstp    st(0)                           
19ea  wait                                    
19eb  fstp    st(0)                           
19ed  wait                                    
19ee  fld     tword ptr [41Eh]                
19f2  mov     byte ptr [bp-11h],2h            
19f6  ret                                     
19f7  wait                                    
19f8  fldln2                                  
19fa  wait                                    
19fb  fxch    st(0),st(1)                     
19fd  wait                                    
19fe  ftst                                    
1a00  wait                                    
1a01  fstsw   word ptr [bp-0Ah]               
1a04  nop                                     
1a05  wait                                    
1a06  test    byte ptr [bp-9h],41h            
1a0a  jne     19DDh                           
1a0c  wait                                    
1a0d  fyl2x                                   
1a0f  ret                                     
1a10  wait                                    
1a11  fldlg2                                  
1a13  jmp     1A18h                           
1a15  wait                                    
1a16  fldln2                                  
1a18  wait                                    
1a19  fxch    st(0),st(1)                     
1a1b  or      cl,cl                           
1a1d  jne     19DDh                           

; ----- sub_1a1f -----
1a1f  wait                                    
1a20  fyl2x                                   
1a22  ret                                     
1a23  jmp     18FCh                           
1a26  call    190Dh                           
1a29  or      cl,cl                           
1a2b  jne     19E0h                           
1a2d  wait                                    
1a2e  fstp    st(0)                           
1a30  jmp     18F5h                           
1a33  wait                                    
1a34  fstp    st(0)                           
1a36  jmp     1917h                           
1a39  pop     ax                              
1a3a  wait                                    
1a3b  ftst                                    
1a3d  wait                                    
1a3e  fstsw   word ptr [bp-0Ah]               
1a41  nop                                     
1a42  wait                                    
1a43  test    byte ptr [bp-9h],1h             
1a47  jne     1A30h                           
1a49  jmp     1A57h                           
1a4b  or      ch,ch                           
1a4d  jne     1A33h                           
1a4f  call    190Dh                           
1a52  jne     1A2Dh                           
1a54  wait                                    
1a55  fstp    st(0)                           
1a57  wait                                    
1a58  fstp    st(0)                           
1a5a  wait                                    
1a5b  fld     tword ptr [41Eh]                
1a5f  mov     byte ptr [bp-11h],3h            
1a63  ret                                     
1a64  call    192Ch                           
1a67  jne     1A30h                           
1a69  jmp     1A5Fh                           
1a6b  call    192Ch                           
1a6e  jne     1A36h                           
1a70  jmp     1A5Fh                           

; ----- sub_1a72 -----
1a72  mov     byte ptr [bp-11h],0FFh          
1a76  wait                                    
1a77  fld     st(0),st(0)                     
1a79  wait                                    
1a7a  fabs                                    
1a7c  wait                                    
1a7d  fld     tword ptr [432h]                
1a81  wait                                    
1a82  fcompp                                  
1a84  wait                                    
1a85  fstsw   word ptr [bp-0Ah]               
1a88  nop                                     
1a89  wait                                    
1a8a  test    byte ptr [bp-9h],41h            
1a8e  jne     1A39h                           
1a90  wait                                    
1a91  fld     st(0),st(0)                     
1a93  wait                                    
1a94  frndint                                 
1a96  wait                                    
1a97  ftst                                    
1a99  wait                                    
1a9a  fstsw   word ptr [bp-0Ah]               
1a9d  nop                                     
1a9e  wait                                    
1a9f  mov     dl,[bp-9h]                      
1aa2  wait                                    
1aa3  fxch    st(0),st(1)                     
1aa5  wait                                    
1aa6  fsub    st(0),st(1)                     
1aa8  wait                                    
1aa9  ftst                                    
1aab  wait                                    
1aac  fstsw   word ptr [bp-0Ah]               
1aaf  wait                                    
1ab0  fabs                                    
1ab2  wait                                    
1ab3  f2xm1                                   
1ab5  ret                                     
1ab6  wait                                    
1ab7  fstp    tword ptr [5CAh]                
1abb  mov     dx,[5D2h]                       
1abf  mov     word ptr [5ECh],1h              
1ac5  mov     word ptr [5EEh],0h              
1acb  jmp     1AE0h                           
1acd  wait                                    
1ace  fstp    tword ptr [5CAh]                
1ad2  mov     ax,[5D2h]                       
1ad5  mov     dx,ax                           
1ad7  mov     word ptr [5ECh],0h              
1add  mov     [5EEh],ax                       
1ae0  push    di                              
1ae1  push    si                              
1ae2  and     dx,7FFFh                        
1ae6  mov     [5D2h],dx                       
1aea  call    1CA3h                           
1aed  mov     ax,5DEh                         
1af0  mov     si,5CAh                         
1af3  mov     dx,si                           
1af5  push    ax                              
1af6  call    26BFh                           
1af9  mov     word ptr [5F2h],7h              
1aff  test    byte ptr [5E8h],1h              
1b04  je      1B0Eh                           
1b06  mov     di,568h                         
1b09  call    1BAAh                           
1b0c  jmp     1B1Bh                           
1b0e  mov     di,518h                         
1b11  call    1BAAh                           
1b14  mov     dx,5CAh                         
1b17  push    si                              
1b18  call    26BFh                           
1b1b  add     word ptr [5D4h],400h            
1b21  adc     word ptr [5D6h],0h              
1b26  adc     word ptr [5D8h],0h              
1b2b  adc     word ptr [5DAh],0h              
1b30  jb      1B9Eh                           
1b32  mov     ax,[5DCh]                       
1b35  mov     bx,[5DAh]                       
1b39  add     ax,0C400h                       
1b3c  mov     cl,4h                           
1b3e  shl     ax,cl                           
1b40  and     bx,7FFFh                        
1b44  mov     cl,0Bh                          
1b46  shr     bx,cl                           
1b48  or      ax,bx                           
1b4a  mov     dx,[5EEh]                       
1b4e  and     dx,8000h                        
1b52  xor     ax,dx                           
1b54  mov     [164h],ax                       
1b57  mov     ax,[5DAh]                       
1b5a  mov     bx,[5D8h]                       
1b5e  mov     cl,5h                           
1b60  shl     ax,cl                           
1b62  mov     cl,0Bh                          
1b64  shr     bx,cl                           
1b66  or      ax,bx                           
1b68  mov     [162h],ax                       
1b6b  mov     ax,[5D8h]                       
1b6e  mov     bx,[5D6h]                       
1b72  mov     cl,5h                           
1b74  shl     ax,cl                           
1b76  mov     cl,0Bh                          
1b78  shr     bx,cl                           
1b7a  or      ax,bx                           
1b7c  mov     [160h],ax                       
1b7f  mov     ax,[5D6h]                       
1b82  mov     bx,[5D4h]                       
1b86  mov     cl,5h                           
1b88  shl     ax,cl                           
1b8a  mov     cl,0Bh                          
1b8c  shr     bx,cl                           
1b8e  or      ax,bx                           
1b90  mov     [15Eh],ax                       
1b93  mov     ax,15Eh                         
1b96  wait                                    
1b97  fld     qword ptr [15Eh]                ; [ds] = 0
1b9b  pop     si                              
1b9c  pop     di                              
1b9d  ret                                     
1b9e  mov     word ptr [5DAh],8000h           
1ba4  inc     word ptr [5DCh]                 
1ba8  jmp     1B32h                           

; ----- sub_1baa -----
1baa  mov     dx,5DEh                         
1bad  mov     si,di                           
1baf  mov     ax,5D4h                         
1bb2  push    ax                              
1bb3  call    26BFh                           
1bb6  mov     si,5D4h                         
1bb9  mov     dx,5DEh                         
1bbc  jmp     1BC2h                           
1bbe  push    si                              
1bbf  call    26BFh                           
1bc2  sub     di,0Ah                          
1bc5  call    2538h                           
1bc8  dec     word ptr [5F2h]                 
1bcc  jne     1BBEh                           
1bce  ret                                     
1bcf  wait                                    
1bd0  fstp    tword ptr [5CAh]                
1bd4  mov     dx,[5D2h]                       
1bd8  mov     [5F0h],dx                       
1bdc  and     dx,7FFFh                        
1be0  mov     [5D2h],dx                       
1be4  mov     word ptr [5ECh],0h              
1bea  push    di                              
1beb  push    si                              
1bec  call    1CA3h                           
1bef  mov     ax,5DEh                         
1bf2  mov     si,5CAh                         
1bf5  mov     dx,si                           
1bf7  push    ax                              
1bf8  call    26BFh                           
1bfb  mov     di,590h                         
1bfe  mov     si,di                           
1c00  mov     dx,5DEh                         
1c03  mov     ax,5D4h                         
1c06  push    ax                              
1c07  call    26BFh                           
1c0a  mov     si,5D4h                         
1c0d  sub     di,0Ah                          
1c10  call    2538h                           
1c13  push    si                              
1c14  call    26BFh                           
1c17  sub     di,0Ah                          
1c1a  call    2538h                           
1c1d  push    si                              
1c1e  call    26BFh                           
1c21  sub     di,0Ah                          
1c24  call    2538h                           
1c27  mov     dx,5CAh                         
1c2a  push    si                              
1c2b  call    26BFh                           
1c2e  wait                                    
1c2f  fld     tword ptr [5D4h]                
1c33  mov     di,5D4h                         
1c36  mov     si,5DEh                         
1c39  mov     dx,si                           
1c3b  push    ds                              
1c3c  pop     es                              
1c3d  movsw                                   
1c3e  movsw                                   
1c3f  movsw                                   
1c40  movsw                                   
1c41  movsw                                   
1c42  mov     si,5D4h                         
1c45  mov     di,5B8h                         
1c48  call    2538h                           
1c4b  push    si                              
1c4c  call    26BFh                           
1c4f  sub     di,0Ah                          
1c52  call    2538h                           
1c55  push    si                              
1c56  call    26BFh                           
1c59  sub     di,0Ah                          
1c5c  call    2538h                           
1c5f  push    si                              
1c60  call    26BFh                           
1c63  sub     di,0Ah                          
1c66  call    2538h                           
1c69  mov     dx,[5F0h]                       
1c6d  and     dx,8000h                        
1c71  xor     [5DCh],dx                       
1c75  test    word ptr [5EAh],1h              
1c7b  je      1C83h                           
1c7d  xor     word ptr [5DCh],8000h           
1c83  wait                                    
1c84  fld     tword ptr [5D4h]                
1c88  test    word ptr [5E8h],1h              
1c8e  jne     1C95h                           
1c90  wait                                    
1c91  fdivp   st(1)                           
1c93  jmp     1C98h                           
1c95  wait                                    
1c96  fdivrp  st(1), st(0)                    
1c98  wait                                    
1c99  fst     qword ptr [15Eh]                ; [ds] = 0
1c9d  mov     ax,15Eh                         
1ca0  pop     si                              
1ca1  pop     di                              
1ca2  ret                                     

; ----- sub_1ca3 -----
1ca3  mov     si,5CAh                         
1ca6  mov     di,4C8h                         
1ca9  call    1DBFh                           
1cac  mov     word ptr [5E8h],0h              
1cb2  mov     cx,[5D2h]                       
1cb6  sub     cx,3FFEh                        
1cba  jle     1D1Dh                           
1cbc  cmp     cx,1Ch                          
1cbf  jl      1CE1h                           
1cc1  mov     byte ptr [bp-11h],6h            
1cc5  cmp     cx,20h                          
1cc8  jl      1CE1h                           
1cca  mov     byte ptr [bp-11h],5h            
1cce  wait                                    
1ccf  fld     tword ptr [3F8h]                
1cd3  wait                                    
1cd4  fst     qword ptr [15Eh]                ; [ds] = 0
1cd8  mov     ax,15Eh                         
1cdb  add     sp,2h                           
1cde  pop     si                              
1cdf  pop     di                              
1ce0  ret                                     
1ce1  shl     word ptr [5C2h],1               
1ce5  rcl     word ptr [5C4h],1               
1ce9  rcl     word ptr [5C6h],1               
1ced  rcl     word ptr [5C8h],1               
1cf1  rcl     word ptr [5CAh],1               
1cf5  rcl     word ptr [5CCh],1               
1cf9  rcl     word ptr [5CEh],1               
1cfd  rcl     word ptr [5D0h],1               
1d01  rcl     word ptr [5E8h],1               
1d05  loop    1CE1h                           
1d07  mov     ax,[5E8h]                       
1d0a  mov     [5EAh],ax                       
1d0d  mov     word ptr [5D2h],3FFEh           
1d13  test    byte ptr [5D1h],80h             
1d18  jne     1D1Dh                           
1d1a  call    1F56h                           
1d1d  mov     ax,[5ECh]                       
1d20  add     [5E8h],ax                       
1d24  test    byte ptr [5E8h],2h              
1d29  je      1D2Fh                           
1d2b  not     word ptr [5EEh]                 
1d2f  cmp     cx,0h                           
1d32  jl      1D82h                           
1d34  not     word ptr [5C2h]                 
1d38  not     word ptr [5C4h]                 
1d3c  not     word ptr [5C6h]                 
1d40  not     word ptr [5C8h]                 
1d44  not     word ptr [5CAh]                 
1d48  not     word ptr [5CCh]                 
1d4c  not     word ptr [5CEh]                 
1d50  not     word ptr [5D0h]                 
1d54  inc     word ptr [5C2h]                 
1d58  adc     word ptr [5C4h],0h              
1d5d  adc     word ptr [5C6h],0h              
1d62  adc     word ptr [5C8h],0h              
1d67  adc     word ptr [5CAh],0h              
1d6c  adc     word ptr [5CCh],0h              
1d71  adc     word ptr [5CEh],0h              
1d76  adc     word ptr [5D0h],0h              
1d7b  call    1F56h                           
1d7e  inc     word ptr [5E8h]                 
1d82  inc     word ptr [5D2h]                 
1d86  test    byte ptr [5C9h],80h             
1d8b  je      1DBEh                           
1d8d  inc     word ptr [5CAh]                 
1d91  adc     word ptr [5CCh],0h              
1d96  adc     word ptr [5CEh],0h              
1d9b  adc     word ptr [5D0h],0h              
1da0  jae     1DBEh                           
1da2  inc     word ptr [5D2h]                 
1da6  mov     word ptr [5D0h],8000h           
1dac  mov     word ptr [5CEh],0h              
1db2  mov     word ptr [5CCh],0h              
1db8  mov     word ptr [5CAh],0h              
1dbe  ret                                     

; ----- sub_1dbf -----
1dbf  push    bp                              
1dc0  mov     ax,[si+8h]                      
1dc3  add     ax,[di+8h]                      
1dc6  sub     ax,3FFEh                        
1dc9  mov     [5D2h],ax                       
1dcc  xor     bx,bx                           
1dce  mov     bp,bx                           
1dd0  mov     cx,bx                           
1dd2  mov     [5C2h],bx                       
1dd6  mov     ax,[si]                         
1dd8  or      ax,ax                           
1dda  je      1DE9h                           
1ddc  mov     dx,[di]                         
1dde  or      dx,dx                           
1de0  je      1DE9h                           
1de2  mul     dx                              
1de4  mov     [5C2h],ax                       
1de7  mov     cx,dx                           
1de9  mov     ax,[si]                         
1deb  or      ax,ax                           
1ded  je      1DFFh                           
1def  mov     dx,[di+2h]                      
1df2  or      dx,dx                           
1df4  je      1DFFh                           
1df6  mul     dx                              
1df8  add     cx,ax                           
1dfa  adc     bx,dx                           
1dfc  adc     bp,0h                           
1dff  mov     ax,[si+2h]                      
1e02  or      ax,ax                           
1e04  je      1E15h                           
1e06  mov     dx,[di]                         
1e08  or      dx,dx                           
1e0a  je      1E15h                           
1e0c  mul     dx                              
1e0e  add     cx,ax                           
1e10  adc     bx,dx                           
1e12  adc     bp,0h                           
1e15  mov     [5C4h],cx                       
1e19  xor     cx,cx                           
1e1b  mov     ax,[si]                         
1e1d  or      ax,ax                           
1e1f  je      1E31h                           
1e21  mov     dx,[di+4h]                      
1e24  or      dx,dx                           
1e26  je      1E31h                           
1e28  mul     dx                              
1e2a  add     bx,ax                           
1e2c  adc     bp,dx                           
1e2e  adc     cx,0h                           
1e31  mov     ax,[si+2h]                      
1e34  or      ax,ax                           
1e36  je      1E48h                           
1e38  mov     dx,[di+2h]                      
1e3b  or      dx,dx                           
1e3d  je      1E48h                           
1e3f  mul     dx                              
1e41  add     bx,ax                           
1e43  adc     bp,dx                           
1e45  adc     cx,0h                           
1e48  mov     ax,[si+4h]                      
1e4b  or      ax,ax                           
1e4d  je      1E5Eh                           
1e4f  mov     dx,[di]                         
1e51  or      dx,dx                           
1e53  je      1E5Eh                           
1e55  mul     dx                              
1e57  add     bx,ax                           
1e59  adc     bp,dx                           
1e5b  adc     cx,0h                           
1e5e  mov     [5C6h],bx                       
1e62  xor     bx,bx                           
1e64  mov     ax,[si]                         
1e66  or      ax,ax                           
1e68  je      1E74h                           
1e6a  mul     word ptr [di+6h]                
1e6d  add     bp,ax                           
1e6f  adc     cx,dx                           
1e71  adc     bx,0h                           
1e74  mov     ax,[si+2h]                      
1e77  or      ax,ax                           
1e79  je      1E8Bh                           
1e7b  mov     dx,[di+4h]                      
1e7e  or      dx,dx                           
1e80  je      1E8Bh                           
1e82  mul     dx                              
1e84  add     bp,ax                           
1e86  adc     cx,dx                           
1e88  adc     bx,0h                           
1e8b  mov     ax,[si+4h]                      
1e8e  or      ax,ax                           
1e90  je      1EA2h                           
1e92  mov     dx,[di+2h]                      
1e95  or      dx,dx                           
1e97  je      1EA2h                           
1e99  mul     dx                              
1e9b  add     bp,ax                           
1e9d  adc     cx,dx                           
1e9f  adc     bx,0h                           
1ea2  mov     ax,[si+6h]                      
1ea5  mov     dx,[di]                         
1ea7  or      dx,dx                           
1ea9  je      1EB4h                           
1eab  mul     dx                              
1ead  add     bp,ax                           
1eaf  adc     cx,dx                           
1eb1  adc     bx,0h                           
1eb4  mov     [5C8h],bp                       
1eb8  xor     bp,bp                           
1eba  mov     ax,[si+2h]                      
1ebd  or      ax,ax                           
1ebf  je      1ECBh                           
1ec1  mul     word ptr [di+6h]                
1ec4  add     cx,ax                           
1ec6  adc     bx,dx                           
1ec8  adc     bp,0h                           
1ecb  mov     ax,[si+4h]                      
1ece  or      ax,ax                           
1ed0  je      1EE2h                           
1ed2  mov     dx,[di+4h]                      
1ed5  or      dx,dx                           
1ed7  je      1EE2h                           
1ed9  mul     dx                              
1edb  add     cx,ax                           
1edd  adc     bx,dx                           
1edf  adc     bp,0h                           
1ee2  mov     ax,[si+6h]                      
1ee5  mov     dx,[di+2h]                      
1ee8  or      dx,dx                           
1eea  je      1EF5h                           
1eec  mul     dx                              
1eee  add     cx,ax                           
1ef0  adc     bx,dx                           
1ef2  adc     bp,0h                           
1ef5  mov     [5CAh],cx                       
1ef9  xor     cx,cx                           
1efb  mov     ax,[si+4h]                      
1efe  or      ax,ax                           
1f00  je      1F0Ch                           
1f02  mul     word ptr [di+6h]                
1f05  add     bx,ax                           
1f07  adc     bp,dx                           
1f09  adc     cx,0h                           
1f0c  mov     ax,[si+6h]                      
1f0f  mov     dx,[di+4h]                      
1f12  or      dx,dx                           
1f14  je      1F1Fh                           
1f16  mul     dx                              
1f18  add     bx,ax                           
1f1a  adc     bp,dx                           
1f1c  adc     cx,0h                           
1f1f  mov     ax,[si+6h]                      
1f22  mul     word ptr [di+6h]                
1f25  add     ax,bp                           
1f27  adc     dx,cx                           
1f29  js      1F49h                           
1f2b  dec     word ptr [5D2h]                 
1f2f  shl     word ptr [5C2h],1               
1f33  rcl     word ptr [5C4h],1               
1f37  rcl     word ptr [5C6h],1               
1f3b  rcl     word ptr [5C8h],1               
1f3f  rcl     word ptr [5CAh],1               
1f43  rcl     bx,1                            
1f45  rcl     ax,1                            
1f47  rcl     dx,1                            
1f49  mov     [5CCh],bx                       
1f4d  mov     [5CEh],ax                       
1f50  mov     [5D0h],dx                       
1f54  pop     bp                              
1f55  ret                                     

; ----- sub_1f56 -----
1f56  dec     word ptr [5D2h]                 
1f5a  dec     cx                              
1f5b  shl     word ptr [5C2h],1               
1f5f  rcl     word ptr [5C4h],1               
1f63  rcl     word ptr [5C6h],1               
1f67  rcl     word ptr [5C8h],1               
1f6b  rcl     word ptr [5CAh],1               
1f6f  rcl     word ptr [5CCh],1               
1f73  rcl     word ptr [5CEh],1               
1f77  rcl     word ptr [5D0h],1               
1f7b  test    byte ptr [5D1h],80h             
1f80  je      1F56h                           
1f82  ret                                     
1f83  add     [si-6F28h],cl                   
1f87  inc     bp                              
1f88  push    bp                              
1f89  mov     bp,sp                           
1f8b  push    ds                              
1f8c  mov     ds,ax                           
1f8e  sub     sp,1Ah                          
1f91  cmp     word ptr [692h],0h              
1f96  je      2002h                           
1f98  mov     bx,0Bh                          
1f9b  call    far ptr  [690h]                 
1f9f  or      ax,ax                           
1fa1  je      2002h                           
1fa3  wait                                    
1fa4  fstcw   word ptr [bp-6h]                
1fa7  wait                                    
1fa8  finit                                   
1faa  wait                                    
1fab  fld1                                    
1fad  wait                                    
1fae  fldz                                    
1fb0  wait                                    
1fb1  fdivp   st(1)                           
1fb3  wait                                    
1fb4  fld     st(0),st(0)                     
1fb6  wait                                    
1fb7  fchs                                    
1fb9  wait                                    
1fba  fcompp                                  
1fbc  wait                                    
1fbd  fstsw   word ptr [bp-4h]                
1fc0  wait                                    
1fc1  mov     ax,[bp-4h]                      
1fc4  sahf                                    
1fc5  mov     word ptr [5F4h],3h              
1fcb  jne     1FFBh                           
1fcd  mov     ax,ss                           
1fcf  mov     es,ax                           
1fd1  wait                                    
1fd2  fld1                                    
1fd4  wait                                    
1fd5  fstp    tword ptr es:[bp-10h]           
1fd9  wait                                    
1fda  fstenv  word ptr [bp-1Ch]               
1fdd  wait                                    
1fde  mov     ax,[bp-16h]                     
1fe1  and     ax,0Fh                          
1fe4  mov     bx,1FD4h                        
1fe7  inc     bx                              
1fe8  and     bx,0Fh                          
1feb  cmp     ax,bx                           
1fed  mov     word ptr [5F4h],2h              
1ff3  je      1FFBh                           
1ff5  mov     word ptr [5F4h],1h              
1ffb  wait                                    
1ffc  fclex                                   
1ffe  wait                                    
1fff  fldcw   word ptr [bp-6h]                
2002  lea     sp,[bp-2h]                      
2005  pop     ds                              
2006  pop     bp                              
2007  dec     bp                              
2008  retf                                    
2009  add     [bx+si],al                      

; ----- sub_200a -----
200a  mov     ax,ds                           
200c  nop                                     
200d  inc     bp                              
200e  push    bp                              
200f  mov     bp,sp                           
2011  push    ds                              
2012  mov     ds,ax                           
2014  push    si                              
2015  push    di                              
2016  cld                                     
2017  mov     ax,ds                           
2019  mov     es,ax                           
201b  lea     si,[bp+6h]                      
201e  mov     di,600h                         
2021  movsw   ss:                             
2023  movsw   ss:                             
2025  movsw   ss:                             
2027  movsw   ss:                             
2029  mov     si,600h                         
202c  push    bp                              
202d  call    23ECh                           
2030  pop     bp                              
2031  mov     di,608h                         
2034  mov     cx,ax                           
2036  lodsb                                   
2037  cbw                                     
2038  xchg    ax,cx                           
2039  rep     movsb                           
203b  xchg    ax,cx                           
203c  stosb                                   
203d  mov     di,5F6h                         
2040  xor     bh,bh                           
2042  mov     [di],bx                         
2044  mov     [di+2h],dx                      
2047  mov     [di+4h],cx                      
204a  mov     word ptr [di+6h],608h           
204f  mov     [di+8h],ds                      
2052  mov     dx,ds                           
2054  mov     ax,di                           
2056  pop     di                              
2057  pop     si                              
2058  lea     sp,[bp-2h]                      
205b  pop     ds                              
205c  pop     bp                              
205d  dec     bp                              
205e  retf                                    
205f  add     [bx+si],al                      

; ----- sub_2060 -----
2060  mov     ax,ds                           
2062  nop                                     
2063  inc     bp                              
2064  push    bp                              
2065  mov     bp,sp                           
2067  push    ds                              
2068  mov     ds,ax                           
206a  xor     ax,ax                           
206c  lea     sp,[bp-2h]                      
206f  pop     ds                              
2070  pop     bp                              
2071  dec     bp                              
2072  retf                                    
2073  mov     byte ptr [624h],1h              
2078  retf                                    
2079  add     [bx+di+57h],dl                  
207c  test    byte ptr [bx+2h],1h             
2080  je      20EAh                           
2082  call    2171h                           
2085  mov     di,si                           
2087  mov     ax,[si]                         
2089  test    al,1h                           
208b  je      2090h                           
208d  sub     cx,ax                           
208f  dec     cx                              
2090  inc     cx                              
2091  inc     cx                              
2092  mov     si,[bx+4h]                      
2095  or      si,si                           
2097  je      20EAh                           
2099  add     cx,si                           
209b  jae     20A6h                           
209d  xor     ax,ax                           
209f  mov     dx,0FFF0h                       
20a2  jcxz    20D9h                           
20a4  jmp     20EAh                           
20a6  call far sub_087e                       
20ab  mov     es,ax                           
20ad  mov     ax,es:[626h]                    
20b1  cmp     ax,1000h                        
20b4  je      20CCh                           
20b6  mov     dx,8000h                        
20b9  cmp     dx,ax                           
20bb  jb      20C3h                           
20bd  shr     dx,1                            
20bf  jne     20B9h                           
20c1  jmp     20E5h                           
20c3  cmp     dx,8h                           
20c6  jb      20E5h                           
20c8  shl     dx,1                            
20ca  mov     ax,dx                           
20cc  dec     ax                              
20cd  mov     dx,ax                           
20cf  add     ax,cx                           
20d1  jae     20D5h                           
20d3  xor     ax,ax                           
20d5  not     dx                              
20d7  and     ax,dx                           
20d9  push    dx                              
20da  call    210Bh                           
20dd  pop     dx                              
20de  jae     20EDh                           
20e0  cmp     dx,-10h                         
20e3  je      20EAh                           
20e5  mov     ax,10h                          
20e8  jmp     20CCh                           
20ea  stc                                     
20eb  jmp     2108h                           
20ed  mov     dx,ax                           
20ef  sub     dx,[bx+4h]                      
20f2  mov     [bx+4h],ax                      
20f5  mov     [bx+0Ah],di                     
20f8  mov     si,[bx+0Ch]                     
20fb  dec     dx                              
20fc  mov     [si],dx                         
20fe  inc     dx                              
20ff  add     si,dx                           
2101  mov     word ptr [si],0FFFEh            
2105  mov     [bx+0Ch],si                     
2108  pop     di                              
2109  pop     cx                              
210a  ret                                     

; ----- sub_210b -----
210b  mov     dx,ax                           
210d  test    byte ptr [bx+2h],4h             
2111  je      2115h                           
2113  jmp     2166h                           
2115  push    dx                              
2116  push    cx                              
2117  push    bx                              
2118  mov     si,[bx+6h]                      
211b  mov     bx,cs:[10h]                     
2120  xor     cx,cx                           
2122  or      dx,dx                           
2124  jne     212Dh                           
2126  test    bx,10h                          
212a  jne     216Ch                           
212c  inc     cx                              
212d  mov     ax,2002h                        
2130  test    bx,1h                           
2134  jne     2139h                           
2136  mov     ax,2020h                        
2139  push    si                              
213a  push    cx                              
213b  push    dx                              
213c  push    ax                              
213d  call far KERNEL.GLOBALREALLOC           
2142  or      ax,ax                           
2144  je      216Ch                           
2146  cmp     ax,si                           
2148  jne     2166h                           
214a  push    si                              
214b  call far KERNEL.GLOBALSIZE              
2150  or      dx,ax                           
2152  je      2166h                           
2154  pop     bx                              
2155  pop     cx                              
2156  pop     dx                              
2157  mov     ax,dx                           
2159  test    byte ptr [bx+2h],4h             
215d  je      2163h                           
215f  dec     dx                              
2160  mov     [bx-2h],dx                      
2163  clc                                     
2164  jmp     2170h                           
2166  mov     ax,12h                          
2169  jmp     128Eh                           
216c  pop     bx                              
216d  pop     cx                              
216e  pop     dx                              
216f  stc                                     
2170  ret                                     

; ----- sub_2171 -----
2171  push    di                              
2172  mov     si,[bx+0Ah]                     
2175  cmp     si,[bx+0Ch]                     
2178  jne     217Dh                           
217a  mov     si,[bx+8h]                      
217d  lodsw                                   
217e  cmp     ax,-2h                          
2181  je      218Bh                           
2183  mov     di,si                           
2185  and     al,0FEh                         
2187  add     si,ax                           
2189  jmp     217Dh                           
218b  dec     di                              
218c  dec     di                              
218d  mov     si,di                           
218f  pop     di                              
2190  ret                                     
2191  add     [bx+si],al                      

; ----- sub_2192 -----
2192  retf                                    
2193  add     [bx+si],al                      

; ----- sub_2194 -----
2194  push    bp                              
2195  mov     bp,sp                           
2197  mov     dx,di                           
2199  les     di,[bp+6h]                      
219c  xor     ax,ax                           
219e  mov     cx,0FFFFh                       
21a1  repne   scasb                           
21a3  not     cx                              
21a5  jne     21A8h                           
21a7  dec     cx                              
21a8  xchg    ax,cx                           
21a9  mov     di,dx                           
21ab  pop     bp                              
21ac  retf                                    
21ad  add     [bx+si],al                      

; ----- sub_21ae -----
21ae  push    bp                              
21af  mov     bp,sp                           
21b1  push    di                              
21b2  push    si                              
21b3  push    ds                              
21b4  les     di,[bp+6h]                      
21b7  lds     si,[bp+0Ah]                     
21ba  mov     bx,di                           
21bc  mov     cx,[bp+0Eh]                     
21bf  jcxz    21CDh                           
21c1  lodsb                                   
21c2  or      al,al                           
21c4  je      21C9h                           
21c6  stosb                                   
21c7  loop    21C1h                           
21c9  xor     al,al                           
21cb  rep     stosb                           
21cd  mov     ax,bx                           
21cf  mov     dx,es                           
21d1  pop     ds                              
21d2  pop     si                              
21d3  pop     di                              
21d4  mov     sp,bp                           
21d6  pop     bp                              
21d7  retf                                    

; ----- sub_21d8 -----
21d8  jmp     890h                            
21db  add     [bx+si],al                      

; ----- sub_21dc -----
21dc  inc     bp                              
21dd  push    bp                              
21de  mov     bp,sp                           
21e0  push    ds                              
21e1  sub     sp,4h                           
21e4  push    si                              
21e5  mov     ax,[192h]                       
21e8  mov     dx,[194h]                       
21ec  mov     [bp-6h],ax                      
21ef  mov     [bp-4h],dx                      
21f2  or      dx,ax                           
21f4  je      226Ch                           
21f6  mov     ax,[bp+8h]                      
21f9  or      ax,[bp+6h]                      
21fc  je      226Ch                           
21fe  push    word ptr [bp+8h]                
2201  push    word ptr [bp+6h]                
2204  call far sub_2194                       
2209  add     sp,4h                           
220c  mov     si,ax                           
220e  les     bx,[bp-6h]                      
2211  mov     ax,es:[bx+2h]                   
2215  or      ax,es:[bx]                      
2218  je      226Ch                           
221a  push    word ptr es:[bx+2h]             
221e  push    word ptr es:[bx]                
2221  call far sub_2194                       
2226  add     sp,4h                           
2229  cmp     ax,si                           
222b  jbe     2266h                           
222d  les     bx,[bp-6h]                      
2230  les     bx,es:[bx]                      
2233  cmp     byte ptr es:[bx+si],3Dh         
2237  jne     2266h                           
2239  push    si                              
223a  push    word ptr [bp+8h]                
223d  push    word ptr [bp+6h]                
2240  les     bx,[bp-6h]                      
2243  push    word ptr es:[bx+2h]             
2247  push    word ptr es:[bx]                
224a  call far sub_28ee                       
224f  add     sp,0Ah                          
2252  or      ax,ax                           
2254  jne     2266h                           
2256  les     bx,[bp-6h]                      
2259  mov     ax,es:[bx]                      
225c  mov     dx,es:[bx+2h]                   
2260  add     ax,si                           
2262  inc     ax                              
2263  jmp     226Fh                           
2265  nop                                     
2266  add     word ptr [bp-6h],4h             
226a  jmp     220Eh                           
226c  xor     ax,ax                           
226e  cwd                                     
226f  pop     si                              
2270  lea     sp,[bp-2h]                      
2273  pop     ds                              
2274  pop     bp                              
2275  dec     bp                              
2276  retf                                    
2277  nop                                     

; ----- sub_2278 -----
2278  push    bp                              
2279  mov     bp,sp                           
227b  push    bx                              
227c  push    cx                              
227d  mov     ax,[bp+6h]                      
2280  mov     dx,[bp+8h]                      
2283  mov     bx,[bp+0Ch]                     
2286  mov     cx,0FFFFh                       
2289  shr     dx,cl                           
228b  shr     bx,cl                           
228d  sub     ax,[bp+0Ah]                     
2290  sbb     dx,bx                           
2292  pop     cx                              
2293  pop     bx                              
2294  pop     bp                              
2295  retf    8h                              

; ----- sub_2298 -----
2298  push    bp                              
2299  mov     bp,sp                           
229b  push    bx                              
229c  push    di                              
229d  xor     di,di                           
229f  mov     ax,[bp+8h]                      
22a2  or      ax,ax                           
22a4  jge     22B7h                           
22a6  inc     di                              
22a7  mov     dx,[bp+6h]                      
22aa  neg     ax                              
22ac  neg     dx                              
22ae  sbb     ax,0h                           
22b1  mov     [bp+8h],ax                      
22b4  mov     [bp+6h],dx                      
22b7  mov     ax,[bp+0Ch]                     
22ba  or      ax,ax                           
22bc  jge     22CEh                           
22be  mov     dx,[bp+0Ah]                     
22c1  neg     ax                              
22c3  neg     dx                              
22c5  sbb     ax,0h                           
22c8  mov     [bp+0Ch],ax                     
22cb  mov     [bp+0Ah],dx                     
22ce  or      ax,ax                           
22d0  jne     22EAh                           
22d2  mov     cx,[bp+0Ah]                     
22d5  mov     ax,[bp+8h]                      
22d8  xor     dx,dx                           
22da  div     cx                              
22dc  mov     ax,[bp+6h]                      
22df  div     cx                              
22e1  mov     ax,dx                           
22e3  xor     dx,dx                           
22e5  dec     di                              
22e6  jns     232Bh                           
22e8  jmp     2332h                           
22ea  mov     bx,ax                           
22ec  mov     cx,[bp+0Ah]                     
22ef  mov     dx,[bp+8h]                      
22f2  mov     ax,[bp+6h]                      
22f5  shr     bx,1                            
22f7  rcr     cx,1                            
22f9  shr     dx,1                            
22fb  rcr     ax,1                            
22fd  or      bx,bx                           
22ff  jne     22F5h                           
2301  div     cx                              
2303  mov     cx,ax                           
2305  mul     word ptr [bp+0Ch]               
2308  xchg    ax,cx                           
2309  mul     word ptr [bp+0Ah]               
230c  add     dx,cx                           
230e  jb      231Ch                           
2310  cmp     dx,[bp+8h]                      
2313  ja      231Ch                           
2315  jb      2322h                           
2317  cmp     ax,[bp+6h]                      
231a  jbe     2322h                           
231c  sub     ax,[bp+0Ah]                     
231f  sbb     dx,[bp+0Ch]                     
2322  sub     ax,[bp+6h]                      
2325  sbb     dx,[bp+8h]                      
2328  dec     di                              
2329  jns     2332h                           
232b  neg     dx                              
232d  neg     ax                              
232f  sbb     dx,0h                           
2332  pop     di                              
2333  pop     bx                              
2334  pop     bp                              
2335  retf    8h                              

; ----- sub_2338 -----
2338  push    bp                              
2339  mov     bp,sp                           
233b  push    di                              
233c  push    si                              
233d  push    ds                              
233e  mov     cx,[bp+0Eh]                     
2341  jcxz    236Ah                           
2343  mov     bx,cx                           
2345  les     di,[bp+6h]                      
2348  mov     si,di                           
234a  xor     ax,ax                           
234c  repne   scasb                           
234e  neg     cx                              
2350  add     cx,bx                           
2352  mov     di,si                           
2354  lds     si,[bp+0Ah]                     
2357  rep     cmpsb                           
2359  mov     al,[si-1h]                      
235c  xor     cx,cx                           
235e  cmp     al,es:[di-1h]                   
2362  ja      2368h                           
2364  je      236Ah                           
2366  dec     cx                              
2367  dec     cx                              
2368  not     cx                              
236a  mov     ax,cx                           
236c  pop     ds                              
236d  pop     si                              
236e  pop     di                              
236f  mov     sp,bp                           
2371  pop     bp                              
2372  retf                                    
2373  add     [bx+si],al                      

; ----- sub_2374 -----
2374  push    bp                              
2375  mov     bp,sp                           
2377  push    di                              
2378  push    si                              
2379  push    ds                              
237a  les     di,[bp+6h]                      
237d  lds     si,[bp+0Ah]                     
2380  mov     bx,di                           
2382  mov     cx,[bp+0Eh]                     
2385  jcxz    2393h                           
2387  lodsb                                   
2388  or      al,al                           
238a  je      238Fh                           
238c  stosb                                   
238d  loop    2387h                           
238f  xor     al,al                           
2391  rep     stosb                           
2393  mov     ax,bx                           
2395  mov     dx,es                           
2397  pop     ds                              
2398  pop     si                              
2399  pop     di                              
239a  mov     sp,bp                           
239c  pop     bp                              
239d  retf                                    
239e  cld                                     
23a0  ???                                     
23a2  ???                                     
23a4  ???                                     
23a6  ???                                     
23a8  int     0CCh                            
23aa  int 3                                   
23ab  int 3                                   
23ac  int 3                                   
23ad  int 3                                   
23ae  int 3                                   
23af  int 3                                   
23b0  sti                                     
23b1  aas                                     
23b2  mov     si,634h                         
23b5  mov     word ptr [si],3001h             
23b9  xor     ax,ax                           
23bb  mov     dx,ax                           
23bd  inc     ax                              
23be  mov     bl,20h                          
23c0  pop     es                              
23c1  ret                                     
23c2  or      dx,dx                           
23c4  jne     23D0h                           
23c6  cmp     cx,-8h                          
23c9  je      23E2h                           
23cb  and     cl,0Fh                          
23ce  je      23DDh                           
23d0  mov     si,64Ch                         
23d3  test    cl,8h                           
23d6  jne     23E5h                           
23d8  mov     si,645h                         
23db  jmp     23E5h                           
23dd  mov     si,653h                         
23e0  jmp     23E5h                           
23e2  mov     si,659h                         
23e5  mov     dx,1h                           
23e8  pop     es                              
23e9  xor     ax,ax                           
23eb  ret                                     

; ----- sub_23ec -----
23ec  push    es                              
23ed  mov     ax,ds                           
23ef  mov     es,ax                           
23f1  cld                                     
23f2  mov     di,628h                         
23f5  push    di                              
23f6  mov     cx,4h                           
23f9  rep     movsw                           
23fb  pop     si                              
23fc  mov     cx,[si+6h]                      
23ff  and     byte ptr [si+7h],7Fh            
2403  mov     bl,20h                          
2405  mov     ax,[si]                         
2407  or      ax,[si+2h]                      
240a  or      ax,[si+4h]                      
240d  mov     dx,ax                           
240f  or      ax,[si+6h]                      
2412  je      23B2h                           
2414  or      cx,cx                           
2416  jns     241Ah                           
2418  mov     bl,2Dh                          
241a  not     cx                              
241c  test    cx,7FF0h                        
2420  not     cx                              
2422  je      23C2h                           
2424  push    bx                              
2425  wait                                    
2426  fstcw   word ptr [661h]                 
242a  nop                                     
242b  wait                                    
242c  push    ax                              
242d  mov     al,[661h]                       
2430  mov     [663h],al                       
2433  pop     ax                              
2434  wait                                    
2435  fldcw   word ptr [663h]                 
2439  wait                                    
243a  fld     qword ptr [si]                  
243c  wait                                    
243d  fld     st(0),st(0)                     
243f  wait                                    
2440  fstp    tword ptr [si]                  
2442  nop                                     
2443  wait                                    
2444  xor     di,di                           
2446  mov     si,62Fh                         
2449  lodsb                                   
244a  mov     bh,al                           
244c  lodsw                                   
244d  mov     cx,ax                           
244f  mov     dx,4D10h                        
2452  mul     dx                              
2454  xchg    ax,cx                           
2455  mov     al,4Dh                          
2457  mul     ah                              
2459  add     cx,ax                           
245b  adc     dx,di                           
245d  mov     al,9Ah                          
245f  mul     bh                              
2461  add     cx,ax                           
2463  adc     di,dx                           
2465  sub     cx,12F4h                        
2469  sbb     di,1343h                        
246d  push    di                              
246e  neg     di                              
2470  mov     si,628h                         
2473  call    2AA5h                           
2476  mov     bx,239Eh                        
2479  pop     di                              
247a  wait                                    
247b  fld     tword ptr cs:[bx]               
247e  wait                                    
247f  fcomp   st(0),st(1)                     
2481  wait                                    
2482  fstsw   word ptr [65Fh]                 
2486  nop                                     
2487  wait                                    
2488  test    byte ptr [660h],41h             
248d  je      249Ah                           
248f  inc     di                              
2490  mov     bx,23A8h                        
2493  wait                                    
2494  fld     tword ptr cs:[bx]               
2497  wait                                    
2498  fmulp   st(1)                           
249a  push    di                              
249b  wait                                    
249c  fstp    tword ptr [si]                  
249e  wait                                    
249f  fldcw   word ptr [661h]                 
24a3  nop                                     
24a4  wait                                    
24a5  lodsw                                   
24a6  xchg    ax,di                           
24a7  lodsw                                   
24a8  xchg    ax,bp                           
24a9  lodsw                                   
24aa  xchg    ax,dx                           
24ab  lodsw                                   
24ac  xchg    ax,bx                           
24ad  lodsw                                   
24ae  xchg    ax,cx                           
24af  sub     cx,3FFEh                        
24b3  neg     cx                              
24b5  mov     si,di                           
24b7  xor     ax,ax                           
24b9  jcxz    24C7h                           
24bb  shr     bx,1                            
24bd  rcr     dx,1                            
24bf  rcr     bp,1                            
24c1  rcr     si,1                            
24c3  rcr     ah,1                            
24c5  loop    24BBh                           
24c7  adc     si,39Ah                         
24cb  adc     bp,cx                           
24cd  adc     dx,cx                           
24cf  adc     bx,cx                           
24d1  mov     di,635h                         
24d4  mov     cx,10h                          
24d7  xor     al,al                           
24d9  push    cx                              
24da  push    bx                              
24db  push    dx                              
24dc  push    bp                              
24dd  push    si                              
24de  push    ax                              
24df  shl     ah,1                            
24e1  rcl     si,1                            
24e3  rcl     bp,1                            
24e5  rcl     dx,1                            
24e7  rcl     bx,1                            
24e9  rcl     al,1                            
24eb  shl     ah,1                            
24ed  rcl     si,1                            
24ef  rcl     bp,1                            
24f1  rcl     dx,1                            
24f3  rcl     bx,1                            
24f5  rcl     al,1                            
24f7  pop     cx                              
24f8  adc     ah,ch                           
24fa  pop     cx                              
24fb  adc     si,cx                           
24fd  pop     cx                              
24fe  adc     bp,cx                           
2500  pop     cx                              
2501  adc     dx,cx                           
2503  pop     cx                              
2504  adc     bx,cx                           
2506  adc     al,0h                           
2508  shl     ah,1                            
250a  rcl     si,1                            
250c  rcl     bp,1                            
250e  rcl     dx,1                            
2510  rcl     bx,1                            
2512  rcl     al,1                            
2514  pop     cx                              
2515  add     al,30h                          
2517  stosb                                   
2518  loop    24D7h                           
251a  dec     di                              
251b  dec     cx                              
251c  mov     al,30h                          
251e  std                                     
251f  rep     scasb                           
2521  cld                                     
2522  add     cx,12h                          
2525  mov     si,634h                         
2528  mov     [si],cl                         
252a  mov     ax,1h                           
252d  pop     dx                              
252e  pop     bx                              
252f  pop     es                              
2530  ret                                     
2531  add     cl,ch                           
2533  in      al,0h                           
2535  jmp     2617h                           

; ----- sub_2538 -----
2538  push    bp                              
2539  mov     bp,sp                           
253b  sub     sp,4h                           
253e  push    dx                              
253f  push    si                              
2540  push    di                              
2541  push    si                              
2542  mov     ax,[si+8h]                      
2545  or      ax,ax                           
2547  je      2535h                           
2549  mov     cx,[di+8h]                      
254c  or      cx,cx                           
254e  je      2532h                           
2550  mov     dh,ah                           
2552  mov     dl,ch                           
2554  and     dx,8080h                        
2558  mov     bh,dh                           
255a  xor     bh,dl                           
255c  and     bh,80h                          
255f  mov     [bp-1h],bh                      
2562  and     ah,7Fh                          
2565  and     ch,7Fh                          
2568  mov     bx,ax                           
256a  sub     ax,cx                           
256c  jae     2576h                           
256e  mov     bx,cx                           
2570  mov     dh,dl                           
2572  neg     ax                              
2574  xchg    si,di                           
2576  mov     [bp-2h],dh                      
2579  mov     [bp-4h],bx                      
257c  cmp     ax,40h                          
257f  ja      2532h                           
2581  push    si                              
2582  mov     si,ax                           
2584  mov     ax,[di+6h]                      
2587  mov     bx,[di+4h]                      
258a  mov     cx,[di+2h]                      
258d  mov     dx,[di]                         
258f  xor     di,di                           
2591  sub     si,8h                           
2594  jb      25B2h                           
2596  cmp     dl,80h                          
2599  sbb     di,di                           
259b  mov     dl,dh                           
259d  mov     dh,cl                           
259f  mov     cl,ch                           
25a1  mov     ch,bl                           
25a3  mov     bl,bh                           
25a5  mov     bh,al                           
25a7  mov     al,ah                           
25a9  xor     ah,ah                           
25ab  sub     si,8h                           
25ae  jae     2596h                           
25b0  not     di                              
25b2  add     si,8h                           
25b5  je      25C4h                           
25b7  shr     ax,1                            
25b9  rcr     bx,1                            
25bb  rcr     cx,1                            
25bd  rcr     dx,1                            
25bf  dec     si                              
25c0  jne     25B7h                           
25c2  sbb     di,di                           
25c4  or      di,di                           
25c6  je      25D1h                           
25c8  add     dx,1h                           
25cb  adc     cx,si                           
25cd  adc     bx,si                           
25cf  adc     ax,si                           
25d1  pop     si                              
25d2  cmp     byte ptr [bp-1h],0h             
25d6  jne     2647h                           
25d8  add     dx,[si]                         
25da  adc     cx,[si+2h]                      
25dd  adc     bx,[si+4h]                      
25e0  adc     ax,[si+6h]                      
25e3  jae     25FBh                           
25e5  rcr     ax,1                            
25e7  rcr     bx,1                            
25e9  rcr     cx,1                            
25eb  rcr     dx,1                            
25ed  mov     si,0h                           
25f0  adc     dx,si                           
25f2  adc     cx,si                           
25f4  adc     bx,si                           
25f6  adc     ax,si                           
25f8  inc     word ptr [bp-4h]                
25fb  pop     di                              
25fc  mov     [di],dx                         
25fe  mov     [di+2h],cx                      
2601  mov     [di+4h],bx                      
2604  mov     [di+6h],ax                      
2607  mov     ax,[bp-4h]                      
260a  or      ah,[bp-2h]                      
260d  mov     [di+8h],ax                      
2610  pop     di                              
2611  pop     si                              
2612  pop     dx                              
2613  mov     sp,bp                           
2615  pop     bp                              
2616  ret                                     
2617  mov     si,di                           
2619  pop     di                              
261a  mov     ax,ss                           
261c  mov     es,ax                           
261e  movsw                                   
261f  movsw                                   
2620  movsw                                   
2621  movsw                                   
2622  movsw                                   
2623  jmp     2610h                           
2625  mov     si,dx                           
2627  or      si,cx                           
2629  or      si,bx                           
262b  or      si,ax                           
262d  je      2639h                           
262f  xor     byte ptr [bp-2h],80h            
2633  or      ah,ah                           
2635  js      25FBh                           
2637  jmp     2675h                           
2639  mov     ax,ss                           
263b  mov     es,ax                           
263d  xor     ax,ax                           
263f  pop     di                              
2640  stosw                                   
2641  stosw                                   
2642  stosw                                   
2643  stosw                                   
2644  stosw                                   
2645  jmp     2610h                           
2647  sub     dx,[si]                         
2649  sbb     cx,[si+2h]                      
264c  sbb     bx,[si+4h]                      
264f  sbb     ax,[si+6h]                      
2652  jae     2625h                           
2654  not     dx                              
2656  not     cx                              
2658  not     bx                              
265a  not     ax                              
265c  xor     si,si                           
265e  add     dx,1h                           
2661  adc     cx,si                           
2663  adc     bx,si                           
2665  adc     ax,si                           
2667  js      25FBh                           
2669  jne     2675h                           
266b  mov     si,dx                           
266d  or      si,cx                           
266f  or      si,bx                           
2671  or      si,ax                           
2673  je      2639h                           
2675  mov     si,[bp-4h]                      
2678  or      ah,ah                           
267a  jne     2695h                           
267c  mov     ah,al                           
267e  mov     al,bh                           
2680  mov     bh,bl                           
2682  mov     bl,ch                           
2684  mov     ch,cl                           
2686  mov     cl,dh                           
2688  mov     dh,dl                           
268a  xor     dl,dl                           
268c  sub     si,8h                           
268f  jbe     2639h                           
2691  or      ah,ah                           
2693  jne     267Ch                           
2695  or      si,si                           
2697  je      2639h                           
2699  or      ax,ax                           
269b  js      26ACh                           
269d  dec     si                              
269e  je      2639h                           
26a0  shl     dx,1                            
26a2  rcl     cx,1                            
26a4  rcl     bx,1                            
26a6  rcl     ax,1                            
26a8  or      ah,ah                           
26aa  jns     269Dh                           
26ac  mov     [bp-4h],si                      
26af  jmp     25FBh                           
26b2  xor     ax,ax                           
26b4  xor     bx,bx                           
26b6  xor     cx,cx                           
26b8  xor     dx,dx                           
26ba  xor     si,si                           
26bc  jmp     27A7h                           

; ----- sub_26bf -----
26bf  push    bp                              
26c0  mov     bp,sp                           
26c2  sub     sp,2h                           
26c5  push    dx                              
26c6  push    si                              
26c7  push    di                              
26c8  mov     di,dx                           
26ca  mov     ax,[si+8h]                      
26cd  or      ax,ax                           
26cf  je      26B2h                           
26d1  mov     cx,[di+8h]                      
26d4  or      cx,cx                           
26d6  je      26B2h                           
26d8  mov     dx,ax                           
26da  xor     dx,cx                           
26dc  and     dx,8000h                        
26e0  and     ah,7Fh                          
26e3  and     ch,7Fh                          
26e6  add     ax,cx                           
26e8  sub     ax,3FFEh                        
26eb  js      26B2h                           
26ed  or      ax,dx                           
26ef  mov     [bp-2h],ax                      
26f2  push    bp                              
26f3  xor     bp,bp                           
26f5  xor     bx,bx                           
26f7  xor     cx,cx                           
26f9  mov     ax,[si]                         
26fb  mul     word ptr [di+6h]                
26fe  add     cx,ax                           
2700  adc     bx,dx                           
2702  adc     bp,0h                           
2705  mov     ax,[si+2h]                      
2708  mul     word ptr [di+4h]                
270b  add     cx,ax                           
270d  adc     bx,dx                           
270f  adc     bp,0h                           
2712  mov     ax,[si+4h]                      
2715  mul     word ptr [di+2h]                
2718  add     cx,ax                           
271a  adc     bx,dx                           
271c  adc     bp,0h                           
271f  mov     ax,[si+6h]                      
2722  mul     word ptr [di]                   
2724  add     cx,ax                           
2726  adc     bx,dx                           
2728  adc     bp,0h                           
272b  push    cx                              
272c  xor     cx,cx                           
272e  mov     ax,[si+2h]                      
2731  mul     word ptr [di+6h]                
2734  add     bx,ax                           
2736  adc     bp,dx                           
2738  adc     cx,0h                           
273b  mov     ax,[si+4h]                      
273e  mul     word ptr [di+4h]                
2741  add     bx,ax                           
2743  adc     bp,dx                           
2745  adc     cx,0h                           
2748  mov     ax,[si+6h]                      
274b  mul     word ptr [di+2h]                
274e  add     bx,ax                           
2750  adc     bp,dx                           
2752  adc     cx,0h                           
2755  push    bx                              
2756  xor     bx,bx                           
2758  mov     ax,[si+4h]                      
275b  mul     word ptr [di+6h]                
275e  add     bp,ax                           
2760  adc     cx,dx                           
2762  adc     bx,0h                           
2765  mov     ax,[si+6h]                      
2768  mul     word ptr [di+4h]                
276b  add     bp,ax                           
276d  adc     cx,dx                           
276f  adc     bx,0h                           
2772  mov     ax,[si+6h]                      
2775  mul     word ptr [di+6h]                
2778  add     cx,ax                           
277a  adc     bx,dx                           
277c  mov     dx,bp                           
277e  pop     si                              
277f  pop     di                              
2780  pop     bp                              
2781  mov     ax,[bp-2h]                      
2784  or      bx,bx                           
2786  js      2793h                           
2788  dec     ax                              
2789  shl     di,1                            
278b  rcl     si,1                            
278d  rcl     dx,1                            
278f  rcl     cx,1                            
2791  rcl     bx,1                            
2793  add     di,8000h                        
2797  mov     di,0h                           
279a  adc     si,di                           
279c  adc     dx,di                           
279e  adc     cx,di                           
27a0  adc     bx,di                           
27a2  jae     27A7h                           
27a4  inc     ax                              
27a5  mov     bh,80h                          
27a7  mov     di,[bp+4h]                      
27aa  mov     [di+8h],ax                      
27ad  mov     [di+6h],bx                      
27b0  mov     [di+4h],cx                      
27b3  mov     [di+2h],dx                      
27b6  mov     [di],si                         
27b8  pop     di                              
27b9  pop     si                              
27ba  pop     dx                              
27bb  mov     sp,bp                           
27bd  pop     bp                              
27be  ret     2h                              
27c1  add     [bx+si],al                      

; ----- sub_27c2 -----
27c2  mov     ax,ds                           
27c4  nop                                     
27c5  inc     bp                              
27c6  push    bp                              
27c7  mov     bp,sp                           
27c9  push    ds                              
27ca  mov     ds,ax                           
27cc  sub     sp,6h                           
27cf  mov     ax,11C6h                        
27d2  push    ds                              
27d3  push    ax                              
27d4  lea     cx,[bp-6h]                      
27d7  push    ss                              
27d8  push    cx                              
27d9  push    word ptr [bp+8h]                
27dc  push    word ptr [bp+6h]                
27df  xor     dx,dx                           
27e1  push    dx                              
27e2  call    2AE2h                           
27e5  mov     [bp-8h],ax                      
27e8  mov     ax,[bp-6h]                      
27eb  sub     ax,[bp+6h]                      
27ee  mov     [11C0h],ax                      
27f1  mov     word ptr [11BEh],0h             
27f7  test    byte ptr [bp-8h],4h             
27fb  je      2803h                           
27fd  mov     word ptr [11BEh],200h           
2803  test    byte ptr [bp-8h],2h             
2807  je      280Eh                           
2809  or      byte ptr [11BEh],1h             
280e  test    byte ptr [bp-8h],1h             
2812  je      2819h                           
2814  or      byte ptr [11BFh],1h             
2819  mov     ax,11BEh                        
281c  mov     dx,ds                           
281e  lea     sp,[bp-2h]                      
2821  pop     ds                              
2822  pop     bp                              
2823  dec     bp                              
2824  retf                                    
2825  nop                                     
2826  mov     ax,ds                           
2828  nop                                     
2829  inc     bp                              
282a  push    bp                              
282b  mov     bp,sp                           
282d  push    ds                              
282e  mov     ds,ax                           
2830  push    si                              
2831  les     si,[bp+6h]                      
2834  mov     cx,es                           
2836  jcxz    283Dh                           
2838  or      byte ptr es:[si-2h],1h          
283d  pop     si                              
283e  sub     bp,2h                           
2841  mov     sp,bp                           
2843  pop     ds                              
2844  pop     bp                              
2845  dec     bp                              
2846  retf                                    

; ----- sub_2847 -----
2847  mov     ax,ds                           
2849  nop                                     
284a  inc     bp                              
284b  push    bp                              
284c  mov     bp,sp                           
284e  push    ds                              
284f  mov     ds,ax                           
2851  push    si                              
2852  push    di                              
2853  mov     cx,[bp+6h]                      
2856  cmp     cx,-1Ah                         
2859  ja      28C4h                           
285b  push    ds                              
285c  mov     ax,[682h]                       
285f  or      ax,ax                           
2861  je      28ABh                           
2863  mov     di,2BDAh                        
2866  mov     si,[68Ah]                       
286a  lds     bx,[684h]                       
286e  push    ds                              
286f  push    si                              
2870  push    di                              
2871  call    di                              
2873  pop     di                              
2874  pop     si                              
2875  jae     28A2h                           
2877  mov     dx,ds                           
2879  lds     bx,[bx+0Eh]                     
287c  cmp     dx,si                           
287e  jne     286Fh                           
2880  pop     ax                              
2881  pop     ds                              
2882  push    ds                              
2883  les     si,[684h]                       
2887  mov     si,es:[si+14h]                  
288b  lds     bx,[680h]                       
288f  mov     dx,ds                           
2891  cmp     dx,ax                           
2893  jne     286Eh                           
2895  pop     ds                              
2896  push    ds                              
2897  cmp     di,207Ah                        
289b  je      28ABh                           
289d  mov     di,207Ah                        
28a0  jmp     2866h                           
28a2  pop     si                              
28a3  cmp     di,2BDAh                        
28a7  je      28B8h                           
28a9  jmp     28B5h                           
28ab  pop     es                              
28ac  push    es                              
28ad  mov     di,680h                         
28b0  call    2B4Ah                           
28b3  jb      28C3h                           
28b5  call    2BDAh                           
28b8  pop     ds                              
28b9  mov     [686h],dx                       
28bd  mov     [684h],bx                       
28c1  jmp     28E3h                           
28c3  pop     ds                              
28c4  xor     ax,ax                           
28c6  cwd                                     
28c7  mov     cx,[674h]                       
28cb  or      cx,[672h]                       
28cf  je      28E3h                           
28d1  push    word ptr [bp+6h]                
28d4  call    far ptr  [672h]                 
28d8  add     sp,2h                           
28db  cwd                                     
28dc  or      ax,ax                           
28de  je      28E3h                           
28e0  jmp     2853h                           
28e3  pop     di                              
28e4  pop     si                              
28e5  sub     bp,2h                           
28e8  mov     sp,bp                           
28ea  pop     ds                              
28eb  pop     bp                              
28ec  dec     bp                              
28ed  retf                                    

; ----- sub_28ee -----
28ee  push    bp                              
28ef  mov     bp,sp                           
28f1  push    di                              
28f2  push    si                              
28f3  push    ds                              
28f4  mov     cx,[bp+0Eh]                     
28f7  jcxz    2920h                           
28f9  mov     bx,cx                           
28fb  les     di,[bp+6h]                      
28fe  mov     si,di                           
2900  xor     ax,ax                           
2902  repne   scasb                           
2904  neg     cx                              
2906  add     cx,bx                           
2908  mov     di,si                           
290a  lds     si,[bp+0Ah]                     
290d  rep     cmpsb                           
290f  mov     al,[si-1h]                      
2912  xor     cx,cx                           
2914  cmp     al,es:[di-1h]                   
2918  ja      291Eh                           
291a  je      2920h                           
291c  dec     cx                              
291d  dec     cx                              
291e  not     cx                              
2920  mov     ax,cx                           
2922  pop     ds                              
2923  pop     si                              
2924  pop     di                              
2925  mov     sp,bp                           
2927  pop     bp                              
2928  retf                                    
2929  add     [bx+si],al                      
292b  add     [bx+si],al                      
292d  add     [bx+si],al                      
292f  add     [bx+si+4002h],ah                
2933  add     [bx+si],al                      
2935  add     [bx+si],al                      
2937  add     [bx+si],al                      
2939  add     al,cl                           
293b  add     ax,40h                          
293e  add     [bx+si],al                      
2940  add     [bx+si],al                      
2942  add     [bx+si],al                      
2944  cli                                     
2945  or      [bx+si],al                      
2948  add     [bx+si],al                      
294a  add     [bx+si],al                      
294c  add     [bx+si-64h],al                  
294f  or      al,40h                          
2951  add     [bx+si],al                      
2953  add     [bx+si],al                      
2955  add     [bx+si],al                      
2957  push    ax                              
2958  ret                                     
2959  cmovo   ax,[bx+si]                      
295c  add     [bx+si],al                      
295e  add     [bx+si],al                      
2960  add     [si],ah                         
2962  hlt                                     
2963  adc     al,[bx+si]                      
2966  add     [bx+si],al                      
2968  add     [bx+si],al                      
296a  adc     byte ptr [bp+1698h],40h         
296f  add     [bx+si],al                      
2971  add     [bx+si],al                      
2973  add     [bx+si],ah                      
2975  mov     sp,19BEh                        
2978  inc     ax                              
2979  add     [bx+si],al                      
297b  add     [si],al                         
297d  mov     di,1BC9h                        
2980  mov     ???,[si]                        
2982  inc     ax                              
2983  add     [bx+di-3313h],ah                
2987  into                                    
2988  sbb     ax,dx                           
298a  ror     word ptr [bp+40h],cl            
298d  sahf                                    
298e  mov     ch,70h                          
2990  sub     bp,[bx+si-3A53h]                
2994  popf                                    
2995  imul    ax,[bx+si-3h],0E525h            
299a  sbb     cl,[bp+194Fh]                   
299e  jmp     2923h                           
29a0  inc     ax                              
29a1  xlat                                    
29a2  xchg    ax,bp                           
29a3  inc     bx                              
29a4  push    cs                              
29a5  add     ax,298Dh                        
29a8  scasw                                   
29a9  sahf                                    
29aa  inc     ax                              
29ab  mov     al,[0ED44h]                     
29ae  adc     word ptr [bp+si],818Fh          
29b2  cmp     byte ptr [bx+di-2AC0h],0A6h     
29b7  iret                                    
29b8  dec     word ptr [bx+di+1Fh]            
29bb  js      297Fh                           
29bd  rol     word ptr [bx+si-20h],cl         
29c0  mov     cx,gs                           
29c2  or      cl,47h                          
29c5  mov     dx,0A893h                       
29c8  inc     cx                              
29c9  imul    dx,[di+27h],39h                 
29cd  lea     si,di                           
29cf  jo      29B1h                           
29d1  jl      2A15h                           
29d3  mov     ds,si                           
29d5  stc                                     
29d6  popf                                    
29d7  sti                                     
29d8  jmp     2A58h                           
29da  stosb                                   
29db  push    cx                              
29dc  inc     bx                              
29dd  jbe     29C2h                           
29df  int 3                                   
29e0  repne   sub     [bx],bp                 
29e3  test    [bx+di+4426h],al                
29e7  int     0CCh                            
29e9  int 3                                   
29ea  int 3                                   
29eb  int 3                                   
29ec  int 3                                   
29ed  int 3                                   
29ee  int 3                                   
29ef  sti                                     
29f0  aas                                     
29f1  or      dl,bh                           
29f3  mov     [3D70h],ax                      
29f6  or      dl,bh                           
29f8  mov     [3FF8h],ax                      
29fb  cmp     bx,di                           
29fd  dec     di                              
29fe  lea     dx,[bx+126Eh]                   
2a02  xor     bp,3Fh                          
2a05  sub     al,65h                          
2a07  sbb     dx,sp                           
2a09  pop     ax                              
2a0a  pop     ss                              
2a0b  mov     bh,0D1h                         
2a0d  ???                                     
2a0e  aas                                     
2a0f  and     ax,[si+1B47h]                   
2a13  inc     di                              
2a14  lodsb                                   
2a15  lds     sp,[bx+3FEEh]                   
2a19  mov     dh,69h                          
2a1b  insb                                    
2a1c  scasw                                   
2a1d  add     ax,37BDh                        
2a20  xchg    ch,bl                           
2a22  aas                                     
2a23  mov     sp,7A42h                        
2a26  in      ax,0D5h                         
2a28  xchg    ax,sp                           
2a29  mov     di,0E7D6h                       
2a2c  aas                                     
2a2d  std                                     
2a2e  into                                    
2a2f  popa                                    
2a30  test    [bx+di],dl                      
2a32  ja      2A00h                           
2a34  stosw                                   
2a35  in      al,3Fh                          
2a37  pop     bx                              
2a38  loopz   2A87h                           
2a3a  les     di,[bp-6A6Ch]                   
2a3e  out     0C9h,al                         
2a40  aas                                     
2a41  push    bx                              
2a42  cmp     si,[di+44h]                     
2a45  int     14h                             
2a47  mov     si,0AF9Ah                       
2a4a  aas                                     
2a4b  mov     dx,3994h                        
2a4e  inc     bp                              
2a4f  lodsw                                   
2a50  push    ds                              
2a51  mov     cl,0CFh                         
2a53  xchg    ax,sp                           
2a54  aas                                     
2a55  mov     dl,0BCh                         
2a58  mov     dx,313Bh                        
2a5b  popa                                    
2a5c  mov     di,[bp+si+3Fh]                  
2a5f  pop     cx                              
2a60  sar     word ptr [bp-4Fh],53h           
2a64  jl      2A78h                           
2a66  mov     bx,3F5Fh                        
2a69  das                                     
2a6a  lea     ax,[92BEh]                      
2a6e  test    [di],dx                         
2a70  sti                                     
2a71  inc     sp                              
2a72  aas                                     
2a73  movsw                                   
2a74  jmp     0CFB0h                          
2a77  daa                                     
2a78  jmp     3F2Ah:0A87Fh                    
2a7d  mov     ax,[0BCE4h]                     
2a80  jl      2AC9h                           
2a83  rcr     ch,1                            
2a85  push    bp                              
2a86  push    es                              
2a88  int 3                                   
2a89  and     dx,[si+77h]                     
2a8c  cmp     di,-6Fh                         
2a8f  cmp     word ptr [di],193Ah             
2a93  jp      2AF8h                           
2a95  and     ax,3143h                        
2a98  shr     byte ptr [si-2EC4h],38h         
2a9d  add     byte ptr [bx-69h],0B8h          
2aa1  add     ch,bh                           
2aa3  xlat                                    
2aa4  cmp     ax,[bx+si]                      

; ----- sub_2aa5 -----
2aa5  mov     bx,28D9h                        
2aa8  or      di,di                           
2aaa  jns     2AB1h                           
2aac  mov     bx,2997h                        
2aaf  neg     di                              
2ab1  push    di                              
2ab2  pop     di                              
2ab3  add     bx,46h                          
2ab6  or      di,di                           
2ab8  je      2AE1h                           
2aba  mov     ax,di                           
2abc  shr     di,1                            
2abe  shr     di,1                            
2ac0  shr     di,1                            
2ac2  push    di                              
2ac3  and     ax,7h                           
2ac6  je      2AB2h                           
2ac8  push    bx                              
2ac9  shl     al,1                            
2acb  mov     ah,al                           
2acd  shl     al,1                            
2acf  shl     al,1                            
2ad1  add     al,ah                           
2ad3  xor     ah,ah                           
2ad5  add     bx,ax                           
2ad7  wait                                    
2ad8  fld     tword ptr cs:[bx]               
2adb  wait                                    
2adc  fmulp   st(1)                           
2ade  pop     bx                              
2adf  jmp     2AB2h                           
2ae1  ret                                     

; ----- sub_2ae2 -----
2ae2  push    bp                              
2ae3  mov     bp,sp                           
2ae5  sub     sp,0Eh                          
2ae8  push    ss                              
2ae9  lea     ax,[bp-0Ah]                     
2aec  push    ax                              
2aed  push    word ptr [bp+0Ch]               
2af0  push    word ptr [bp+0Ah]               
2af3  push    word ptr [bp+8h]                
2af6  push    word ptr [bp+6h]                
2af9  push    word ptr [bp+4h]                
2afc  call    2C56h                           
2aff  wait                                    
2b00  fstcw   word ptr [bp-0Eh]               
2b03  wait                                    
2b04  fld     tword ptr [bp-0Ah]              
2b07  mov     bx,[bp-0Eh]                     
2b0a  or      bx,18h                          
2b0d  mov     [bp-0Ch],bx                     
2b10  wait                                    
2b11  fclex                                   
2b13  les     bx,[bp+0Eh]                     
2b16  wait                                    
2b17  fldcw   word ptr [bp-0Ch]               
2b1a  wait                                    
2b1b  fstp    qword ptr es:[bx]               
2b1e  wait                                    
2b1f  fstsw   word ptr [bp-0Ch]               
2b22  wait                                    
2b23  fclex                                   
2b25  wait                                    
2b26  fldcw   word ptr [bp-0Eh]               
2b29  or      ax,ax                           
2b2b  jne     2B44h                           
2b2d  mov     bx,[bp-0Ch]                     
2b30  xor     ax,ax                           
2b32  test    bx,18h                          
2b36  je      2B44h                           
2b38  mov     ax,2h                           
2b3b  test    bx,8h                           
2b3f  jne     2B44h                           
2b41  mov     ax,1h                           
2b44  mov     sp,bp                           
2b46  pop     bp                              
2b47  ret     0Eh                             

; ----- sub_2b4a -----
2b4a  mov     dx,cx                           
2b4c  add     dx,1019h                        
2b50  and     dx,0F000h                       
2b54  push    cx                              
2b55  push    es                              
2b56  mov     bx,cs:[10h]                     
2b5b  xor     cx,cx                           
2b5d  or      dx,dx                           
2b5f  jne     2B68h                           
2b61  test    bx,10h                          
2b65  jne     2BC7h                           
2b67  inc     cx                              
2b68  push    bx                              
2b69  mov     ax,2002h                        
2b6c  test    bx,1h                           
2b70  jne     2B75h                           
2b72  mov     ax,2020h                        
2b75  push    ax                              
2b76  push    cx                              
2b77  push    dx                              
2b78  call far KERNEL.GLOBALALLOC             
2b7d  pop     bx                              
2b7e  or      ax,ax                           
2b80  je      2BC7h                           
2b82  push    ax                              
2b83  test    bx,1h                           
2b87  je      2B99h                           
2b89  push    ax                              
2b8a  call far KERNEL.GLOBALLOCK              
2b8f  or      ax,ax                           
2b91  jne     2BC1h                           
2b93  or      ax,dx                           
2b95  je      2BC1h                           
2b97  mov     ax,dx                           
2b99  mov     ds,ax                           
2b9b  push    ax                              
2b9c  call far KERNEL.GLOBALSIZE              
2ba1  or      dx,ax                           
2ba3  je      2BC1h                           
2ba5  mov     dx,ax                           
2ba7  pop     ax                              
2ba8  pop     es                              
2ba9  pop     cx                              
2baa  xor     bx,bx                           
2bac  mov     [bx+6h],ax                      
2baf  mov     ax,es:[di+0Ch]                  
2bb3  mov     [bx+2h],ax                      
2bb6  mov     ax,dx                           
2bb8  call    2EE8h                           
2bbb  call    2F1Ch                           
2bbe  clc                                     
2bbf  jmp     2BCAh                           
2bc1  mov     ax,12h                          
2bc4  jmp     128Eh                           
2bc7  pop     es                              
2bc8  pop     cx                              
2bc9  stc                                     
2bca  ret                                     
2bcb  add     [bx+si],al                      

; ----- sub_2bcc -----
2bcc  push    bp                              
2bcd  mov     bp,sp                           
2bcf  mov     bx,680h                         
2bd2  push    ds                              
2bd3  pop     es                              
2bd4  call    2EBEh                           
2bd7  pop     bp                              
2bd8  ret                                     
2bd9  add     [bx+si],al                      

; ----- sub_2bda -----
2bda  inc     cx                              
2bdb  and     cl,0FEh                         
2bde  push    bx                              
2bdf  cld                                     
2be0  mov     si,[bx+0Ah]                     
2be3  mov     bx,[bx+0Ch]                     
2be6  xor     di,di                           
2be8  jmp     2C0Dh                           
2bea  mov     ax,bx                           
2bec  pop     bx                              
2bed  test    al,1h                           
2bef  jne     2C33h                           
2bf1  push    bx                              
2bf2  mov     si,[bx+8h]                      
2bf5  mov     bx,[bx+0Ah]                     
2bf8  cmp     bx,si                           
2bfa  je      2C32h                           
2bfc  dec     bx                              
2bfd  xor     di,di                           
2bff  jmp     2C0Dh                           
2c01  nop                                     
2c02  lea     dx,[si-2h]                      
2c05  cmp     dx,bx                           
2c07  jae     2BEAh                           
2c09  add     si,ax                           
2c0b  jb      2C30h                           
2c0d  lodsw                                   
2c0e  test    al,1h                           
2c10  je      2C02h                           
2c12  mov     di,si                           
2c14  dec     ax                              
2c15  cmp     ax,cx                           
2c17  jae     2C3Ch                           
2c19  add     si,ax                           
2c1b  jb      2C30h                           
2c1d  mov     dx,ax                           
2c1f  lodsw                                   
2c20  test    al,1h                           
2c22  je      2C02h                           
2c24  add     ax,dx                           
2c26  add     ax,2h                           
2c29  mov     si,di                           
2c2b  mov     [si-2h],ax                      
2c2e  jmp     2C14h                           
2c30  mov     ax,ax                           
2c32  pop     bx                              
2c33  mov     ax,[bx+8h]                      
2c36  mov     [bx+0Ah],ax                     
2c39  stc                                     
2c3a  jmp     2C55h                           
2c3c  pop     bx                              
2c3d  mov     [si-2h],cx                      
2c40  je      2C4Bh                           
2c42  add     di,cx                           
2c44  sub     ax,cx                           
2c46  dec     ax                              
2c47  mov     [di],ax                         
2c49  sub     di,cx                           
2c4b  add     di,cx                           
2c4d  mov     [bx+0Ah],di                     
2c50  mov     ax,si                           
2c52  mov     dx,ds                           
2c54  clc                                     
2c55  ret                                     

; ----- sub_2c56 -----
2c56  push    bp                              
2c57  mov     bp,sp                           
2c59  sub     sp,34h                          
2c5c  push    si                              
2c5d  push    di                              
2c5e  push    ds                              
2c5f  lds     si,[bp+6h]                      
2c62  xor     ax,ax                           
2c64  mov     [bp-0Eh],ax                     
2c67  mov     [bp-10h],ds                     
2c6a  mov     [bp-12h],si                     
2c6d  mov     [bp-14h],ax                     
2c70  mov     [bp-18h],ax                     
2c73  mov     [bp-16h],ax                     
2c76  mov     word ptr [bp-1Ah],19h           
2c7b  push    ss                              
2c7c  pop     es                              
2c7d  lea     di,[bp-34h]                     
2c80  lodsb                                   
2c81  cmp     al,20h                          
2c83  je      2C80h                           
2c85  cmp     al,9h                           
2c87  je      2C80h                           
2c89  cmp     al,0Ah                          
2c8b  je      2C80h                           
2c8d  cmp     al,0Dh                          
2c8f  je      2C80h                           
2c91  or      al,al                           
2c93  jne     2C98h                           
2c95  jmp     2E87h                           
2c98  cmp     al,2Bh                          
2c9a  je      2CA5h                           
2c9c  cmp     al,2Dh                          
2c9e  jne     2CA6h                           
2ca0  mov     word ptr [bp-14h],8000h         
2ca5  lodsb                                   
2ca6  cmp     al,30h                          
2ca8  jb      2CAEh                           
2caa  cmp     al,39h                          
2cac  jbe     2CBEh                           
2cae  cmp     al,2Eh                          
2cb0  jne     2C95h                           
2cb2  lodsb                                   
2cb3  cmp     al,30h                          
2cb5  jb      2C95h                           
2cb7  cmp     al,39h                          
2cb9  ja      2C95h                           
2cbb  jmp     2CD2h                           
2cbd  lodsb                                   
2cbe  cmp     al,30h                          
2cc0  je      2CBDh                           
2cc2  or      al,al                           
2cc4  jne     2CCDh                           
2cc6  dec     si                              
2cc7  mov     [bp-12h],si                     
2cca  jmp     2E8Bh                           
2ccd  cmp     al,2Eh                          
2ccf  jne     2CE3h                           
2cd1  lodsb                                   
2cd2  dec     word ptr [bp-16h]               
2cd5  cmp     al,30h                          
2cd7  je      2CD1h                           
2cd9  inc     word ptr [bp-16h]               
2cdc  or      al,al                           
2cde  je      2CC6h                           
2ce0  jmp     2D0Dh                           
2ce2  lodsb                                   
2ce3  cmp     al,30h                          
2ce5  jb      2D08h                           
2ce7  cmp     al,39h                          
2ce9  ja      2D08h                           
2ceb  sub     al,30h                          
2ced  stosb                                   
2cee  dec     word ptr [bp-1Ah]               
2cf1  jne     2CE2h                           
2cf3  lodsb                                   
2cf4  inc     word ptr [bp-16h]               
2cf7  cmp     al,30h                          
2cf9  jb      2CFFh                           
2cfb  cmp     al,39h                          
2cfd  jbe     2CF3h                           
2cff  dec     word ptr [bp-16h]               
2d02  cmp     al,2Eh                          
2d04  je      2D20h                           
2d06  jmp     2D29h                           
2d08  cmp     al,2Eh                          
2d0a  jne     2D29h                           
2d0c  lodsb                                   
2d0d  cmp     al,30h                          
2d0f  jb      2D29h                           
2d11  cmp     al,39h                          
2d13  ja      2D29h                           
2d15  sub     al,30h                          
2d17  stosb                                   
2d18  dec     word ptr [bp-16h]               
2d1b  dec     word ptr [bp-1Ah]               
2d1e  jne     2D0Ch                           
2d20  lodsb                                   
2d21  cmp     al,30h                          
2d23  jb      2D29h                           
2d25  cmp     al,39h                          
2d27  jbe     2D20h                           
2d29  neg     word ptr [bp-1Ah]               
2d2c  add     word ptr [bp-1Ah],19h           
2d30  lea     bx,[si-1h]                      
2d33  mov     [bp-12h],bx                     
2d36  xor     bx,bx                           
2d38  cmp     al,45h                          
2d3a  je      2D4Ah                           
2d3c  cmp     al,65h                          
2d3e  je      2D4Ah                           
2d40  cmp     al,44h                          
2d42  je      2D4Ah                           
2d44  cmp     al,64h                          
2d46  je      2D4Ah                           
2d48  jmp     2D9Ch                           
2d4a  lodsb                                   
2d4b  cmp     al,2Bh                          
2d4d  je      2D58h                           
2d4f  cmp     al,2Dh                          
2d51  jne     2D59h                           
2d53  mov     word ptr [bp-18h],0FFFFh        
2d58  lodsb                                   
2d59  cmp     al,30h                          
2d5b  jb      2D9Ch                           
2d5d  cmp     al,39h                          
2d5f  ja      2D9Ch                           
2d61  sub     ax,30h                          
2d64  mov     bx,ax                           
2d66  lodsb                                   
2d67  cmp     al,30h                          
2d69  jb      2D8Fh                           
2d6b  cmp     al,39h                          
2d6d  ja      2D8Fh                           
2d6f  sub     al,30h                          
2d71  cmp     bx,666h                         
2d75  ja      2D83h                           
2d77  shl     bx,1                            
2d79  add     ax,bx                           
2d7b  shl     bx,1                            
2d7d  shl     bx,1                            
2d7f  add     bx,ax                           
2d81  jns     2D66h                           
2d83  mov     bx,3FFFh                        
2d86  lodsb                                   
2d87  cmp     al,30h                          
2d89  jb      2D8Fh                           
2d8b  cmp     al,39h                          
2d8d  jbe     2D86h                           
2d8f  xor     bx,[bp-18h]                     
2d92  sub     bx,[bp-18h]                     
2d95  add     [bp-16h],bx                     
2d98  dec     si                              
2d99  mov     [bp-12h],si                     
2d9c  cmp     word ptr [bp-1Ah],0h            
2da0  jne     2DA5h                           
2da2  jmp     2E8Bh                           
2da5  mov     byte ptr es:[di],0h             
2da9  dec     di                              
2daa  cmp     word ptr [bp-1Ah],18h           
2dae  jbe     2DC7h                           
2db0  mov     al,es:[di]                      
2db3  mov     byte ptr es:[di],0h             
2db7  dec     word ptr [bp-1Ah]               
2dba  inc     word ptr [bp-16h]               
2dbd  dec     di                              
2dbe  cmp     al,5h                           
2dc0  jb      2DD6h                           
2dc2  inc     byte ptr es:[di]                
2dc5  jmp     2DDCh                           
2dc7  cmp     word ptr [bp-16h],0h            
2dcb  je      2DDCh                           
2dcd  jmp     2DD6h                           
2dcf  dec     di                              
2dd0  dec     word ptr [bp-1Ah]               
2dd3  inc     word ptr [bp-16h]               
2dd6  cmp     byte ptr es:[di],0h             
2dda  je      2DCFh                           
2ddc  push    ss                              
2ddd  lea     ax,[bp-34h]                     
2de0  push    ax                              
2de1  push    word ptr [bp-1Ah]               
2de4  lea     ax,[bp-0Ch]                     
2de7  push    ax                              
2de8  call    3464h                           
2deb  mov     ax,[bp-16h]                     
2dee  or      ax,ax                           
2df0  je      2E10h                           
2df2  cmp     ax,1450h                        
2df5  jl      2DFAh                           
2df7  jmp     2E9Dh                           
2dfa  cmp     ax,0EBB0h                       
2dfd  jg      2E02h                           
2dff  jmp     2E97h                           
2e02  push    ss                              
2e03  lea     ax,[bp-0Ch]                     
2e06  push    ax                              
2e07  push    word ptr [bp-16h]               
2e0a  push    word ptr [bp+4h]                
2e0d  call    320Ah                           
2e10  mov     ax,[bp-4h]                      
2e13  mov     bx,[bp-6h]                      
2e16  mov     cx,[bp-8h]                      
2e19  mov     dx,[bp-0Ah]                     
2e1c  cmp     word ptr [bp-0Ch],8000h         
2e21  jb      2E3Fh                           
2e23  ja      2E2Bh                           
2e25  test    dx,1h                           
2e29  je      2E3Fh                           
2e2b  add     dx,1h                           
2e2e  adc     cx,0h                           
2e31  adc     bx,0h                           
2e34  adc     ax,0h                           
2e37  jae     2E3Fh                           
2e39  or      ah,80h                          
2e3c  inc     word ptr [bp-2h]                
2e3f  mov     si,[bp-2h]                      
2e42  cmp     si,7FFFh                        
2e46  jae     2E9Dh                           
2e48  or      si,si                           
2e4a  jne     2E56h                           
2e4c  mov     si,ax                           
2e4e  or      si,bx                           
2e50  or      si,cx                           
2e52  or      si,dx                           
2e54  je      2E97h                           
2e56  lds     si,[bp+0Eh]                     
2e59  mov     [si+6h],ax                      
2e5c  mov     [si+4h],bx                      
2e5f  mov     [si+2h],cx                      
2e62  mov     [si],dx                         
2e64  mov     ax,[bp-2h]                      
2e67  or      ax,[bp-14h]                     
2e6a  mov     [si+8h],ax                      
2e6d  lds     si,[bp+0Ah]                     
2e70  mov     ax,[bp-12h]                     
2e73  mov     [si],ax                         
2e75  mov     ax,[bp-10h]                     
2e78  mov     [si+2h],ax                      
2e7b  mov     ax,[bp-0Eh]                     
2e7e  pop     ds                              
2e7f  pop     di                              
2e80  pop     si                              
2e81  mov     sp,bp                           
2e83  pop     bp                              
2e84  ret     0Eh                             
2e87  or      word ptr [bp-0Eh],4h            
2e8b  les     di,[bp+0Eh]                     
2e8e  xor     ax,ax                           
2e90  mov     cx,5h                           
2e93  rep     stosw                           
2e95  jmp     2E6Dh                           
2e97  or      word ptr [bp-0Eh],1h            
2e9b  jmp     2E8Bh                           
2e9d  or      word ptr [bp-0Eh],2h            
2ea1  lds     si,[bp+0Eh]                     
2ea4  mov     ax,7FFFh                        
2ea7  or      ax,[bp-14h]                     
2eaa  mov     [si+8h],ax                      
2ead  mov     word ptr [si+6h],8000h          
2eb2  xor     ax,ax                           
2eb4  mov     [si+4h],ax                      
2eb7  mov     [si+2h],ax                      
2eba  mov     [si],ax                         
2ebc  jmp     2E6Dh                           

; ----- sub_2ebe -----
2ebe  push    bp                              
2ebf  mov     bp,sp                           
2ec1  push    di                              
2ec2  les     bx,es:[bx]                      
2ec5  mov     cx,es                           
2ec7  jcxz    2EE3h                           
2ec9  mov     ax,es:[bx+6h]                   
2ecd  les     bx,es:[bx+0Eh]                  
2ed1  push    bx                              
2ed2  push    es                              
2ed3  push    ax                              
2ed4  push    ax                              
2ed5  call far KERNEL.GLOBALUNLOCK            
2eda  call far KERNEL.GLOBALFREE              
2edf  pop     es                              
2ee0  pop     bx                              
2ee1  jmp     2EC5h                           
2ee3  pop     di                              
2ee4  mov     sp,bp                           
2ee6  pop     bp                              
2ee7  ret                                     

; ----- sub_2ee8 -----
2ee8  push    es                              
2ee9  push    di                              
2eea  mov     di,ax                           
2eec  add     di,bx                           
2eee  mov     [bx+4h],di                      
2ef1  dec     di                              
2ef2  dec     di                              
2ef3  sub     ax,18h                          
2ef6  lea     si,[bx+16h]                     
2ef9  mov     word ptr [di],0FFFEh            
2efd  mov     [bx+0Ch],di                     
2f00  dec     ax                              
2f01  mov     [si],ax                         
2f03  mov     [bx],ds                         
2f05  mov     ax,si                           
2f07  mov     dx,ds                           
2f09  mov     es,dx                           
2f0b  lea     di,[bx+8h]                      
2f0e  cld                                     
2f0f  stosw                                   
2f10  stosw                                   
2f11  inc     di                              
2f12  inc     di                              
2f13  xor     ax,ax                           
2f15  stosw                                   
2f16  stosw                                   
2f17  stosw                                   
2f18  stosw                                   
2f19  pop     di                              
2f1a  pop     es                              
2f1b  ret                                     

; ----- sub_2f1c -----
2f1c  mov     ax,es:[di+2h]                   
2f20  or      ax,ax                           
2f22  jne     2F2Dh                           
2f24  mov     es:[di+2h],ds                   
2f28  mov     es:[di],bx                      
2f2b  jmp     2F41h                           
2f2d  push    es                              
2f2e  les     si,es:[di+8h]                   
2f32  mov     es:[si+10h],ds                  
2f36  mov     es:[si+0Eh],bx                  
2f3a  mov     [bx+14h],es                     
2f3d  mov     [bx+12h],si                     
2f40  pop     es                              
2f41  mov     es:[di+0Ah],ds                  
2f45  mov     es:[di+8h],bx                   
2f49  mov     es:[di+6h],ds                   
2f4d  mov     es:[di+4h],bx                   
2f51  ret                                     
2f52  add     [bx+si],al                      
2f54  add     [bx+si],al                      
2f56  add     [bx+si],al                      
2f58  add     [bx+si],al                      
2f5a  add     [bx+si+4002h],ah                
2f5e  add     [bx+si],al                      
2f60  add     [bx+si],al                      
2f62  add     [bx+si],al                      
2f64  add     [bx+si],al                      
2f66  add     al,cl                           
2f68  add     ax,40h                          
2f6b  add     [bx+si],al                      
2f6d  add     [bx+si],al                      
2f6f  add     [bx+si],al                      
2f71  add     [bx+si],al                      
2f73  cli                                     
2f74  or      [bx+si],al                      
2f77  add     [bx+si],al                      
2f79  add     [bx+si],al                      
2f7b  add     [bx+si],al                      
2f7d  add     [bx+si-64h],al                  
2f80  or      al,40h                          
2f82  add     [bx+si],al                      
2f84  add     [bx+si],al                      
2f86  add     [bx+si],al                      
2f88  add     [bx+si],al                      
2f8a  push    ax                              
2f8b  ret                                     
2f8c  cmovo   ax,[bx+si]                      
2f8f  add     [bx+si],al                      
2f91  add     [bx+si],al                      
2f93  add     [bx+si],al                      
2f95  add     [si],ah                         
2f97  hlt                                     
2f98  adc     al,[bx+si]                      
2f9b  add     [bx+si],al                      
2f9d  add     [bx+si],al                      
2f9f  add     [bx+si],al                      
2fa1  adc     byte ptr [bp+1698h],40h         
2fa6  add     [bx+si],al                      
2fa8  add     [bx+si],al                      
2faa  add     [bx+si],al                      
2fac  add     [bx+si],ah                      
2fae  mov     sp,19BEh                        
2fb1  inc     ax                              
2fb2  add     [bx+si],al                      
2fb4  add     [bx+si],al                      
2fb6  add     [si],al                         
2fb8  mov     di,1BC9h                        
2fbb  mov     ???,[si]                        
2fbd  inc     ax                              
2fbe  add     [bx+si],al                      
2fc0  add     [bx+di-3313h],ah                
2fc4  into                                    
2fc5  sbb     ax,dx                           
2fc7  ror     word ptr [bp+40h],cl            
2fca  and     al,dh                           
2fcc  sahf                                    
2fcd  mov     ch,70h                          
2fcf  sub     bp,[bx+si-3A53h]                
2fd3  popf                                    
2fd4  imul    ax,[bx+si-30h],0FD5Dh           
2fd9  and     ax,1AE5h                        
2fdc  mov     cs,[bx+19h]                     
2fdf  jmp     2F64h                           
2fe1  inc     ax                              
2fe2  jno     2F7Ah                           
2fe4  xlat                                    
2fe5  xchg    ax,bp                           
2fe6  inc     bx                              
2fe7  push    cs                              
2fe8  add     ax,298Dh                        
2feb  scasw                                   
2fec  sahf                                    
2fed  inc     ax                              
2fee  stc                                     
2fef  mov     di,44A0h                        
2ff2  in      ax,dx                           
2ff3  adc     word ptr [bp+si],818Fh          
2ff7  cmp     byte ptr [bx+di-40C0h],3Ch      
2ffc  aad     0A6h                            
2ffe  iret                                    
2fff  dec     word ptr [bx+di+1Fh]            
3002  js      2FC6h                           
3004  rol     word ptr [bx+si+6Fh],cl         
3007  mov     al,8Ch                          
300a  jmp     0F98Dh                          
300d  inc     di                              
300e  mov     dx,0A893h                       
3011  inc     cx                              
3012  mov     sp,6B85h                        
3015  push    bp                              
3016  daa                                     
3017  cmp     [di+70F7h],cx                   
301b  loopne  3099h                           
301d  inc     dx                              
301e  mov     sp,8EDDh                        
3021  fdivp   st(1)                           
3023  popf                                    
3024  sti                                     
3025  jmp     30A5h                           
3027  stosb                                   
3028  push    cx                              
3029  inc     bx                              
302a  mov     ax,[76E6h]                      
302d  jcxz    2FFBh                           
302f  repne   sub     [bx],bp                 
3032  test    [bx+di+4426h],al                
3036  sub     [bx+si],dl                      
3038  pop     ss                              
3039  stosb                                   
303a  clc                                     
303b  scasb                                   
303c  adc     bl,ah                           
303e  lds     ax,sp                           
3040  cli                                     
3041  inc     sp                              
3042  jmp     2FEBh                           
3044  aam     0F3h                            
3046  imul    bx                              
3048  loopz   3094h                           
304a  jp      2FE1h                           
304c  iret                                    
304d  inc     bp                              
304e  int 3                                   
3050  mov     word ptr [bx+di-59F2h],0A0AEh   
3056  sbb     bx,sp                           
3058  mov     [0D46h],ax                      
305b  pop     ss                              
305d  or      al,75h                          
305f  add     word ptr [bp+7675h],48C9h       
3065  dec     bp                              
3066  pop     ax                              
3067  inc     dx                              
3068  in      al,0A7h                         
306a  xchg    ax,bx                           
306b  cmp     [bp+di],di                      
306d  xor     ax,0B2B8h                       
3070  in      ax,dx                           
3071  push    bx                              
3072  dec     bp                              
3073  cmpsw                                   
3074  in      ax,5Dh                          
3076  cmp     ax,5DC5h                        
3079  cmp     cx,[bp+di-6D62h]                
307d  pop     dx                              
307e  call    far ptr  [di-5Ah]               
3081  lock                                    
3082  mov     ax,[0C020h]                     
3085  push    sp                              
3086  movsw                                   
3087  mov     [bx],???                        
3089  popa                                    
308a  sar     bp,1                            
308c  mov     bx,[bp+si-75h]                  
308f  fsub    dword ptr [di]                  
3091  pop     bp                              
3092  mov     cx,di                           
3094  ??? (FPU)                               
3097  xchg    ax,bp                           
3098  clc                                     
3099  rep     daa                             
309b  mov     di,0C8A2h                       
309e  pop     bp                              
309f  fld     qword ptr [bx+si+4C6Eh]         
30a3  leave                                   
30a4  wait                                    
30a5  xchg    ax,di                           
30a6  and     [bp+si+5202h],cl                
30aa  pusha                                   
30ab  les     sp,[di]                         
30ad  jne     307Ch                           
30af  int 3                                   
30b0  int     0CCh                            
30b2  int 3                                   
30b3  int 3                                   
30b4  int 3                                   
30b5  int 3                                   
30b6  int 3                                   
30b7  int 3                                   
30b8  sti                                     
30b9  aas                                     
30ba  jno     30F9h                           
30bc  or      dl,bh                           
30be  mov     [3D70h],ax                      
30c1  or      dl,bh                           
30c3  mov     [3FF8h],ax                      
30c6  pop     dx                              
30c7  cmp     bx,di                           
30ca  dec     di                              
30cb  lea     dx,[bx+126Eh]                   
30cf  xor     bp,3Fh                          
30d2  ret                                     
30d3  shr     word ptr [si],cl                
30d5  sbb     dx,sp                           
30d8  pop     ax                              
30d9  pop     ss                              
30da  mov     bh,0D1h                         
30dc  ???                                     
30dd  aas                                     
30de  ror     byte ptr [bx],1                 
30e0  and     ax,[si+1B47h]                   
30e4  inc     di                              
30e5  lodsb                                   
30e6  lds     sp,[bx+3FEEh]                   
30ea  inc     ax                              
30eb  cmpsb                                   
30ec  mov     dh,69h                          
30ee  insb                                    
30ef  scasw                                   
30f0  add     ax,37BDh                        
30f3  xchg    ch,bl                           
30f5  aas                                     
30f6  xor     di,[di]                         
30f8  mov     sp,7A42h                        
30fb  in      ax,0D5h                         
30fd  xchg    ax,sp                           
30fe  mov     di,0E7D6h                       
3101  aas                                     
3102  ret     0FDFDh                          
3105  into                                    
3106  popa                                    
3107  test    [bx+di],dl                      
3109  ja      30D7h                           
310b  stosw                                   
310c  in      al,3Fh                          
310e  das                                     
310f  dec     sp                              
3110  pop     bx                              
3111  loopz   3160h                           
3113  les     di,[bp-6A6Ch]                   
3117  out     0C9h,al                         
3119  aas                                     
311a  xchg    ax,dx                           
311b  les     dx,[bp+di+3Bh]                  
311e  jne     3164h                           
3120  int     14h                             
3122  mov     si,0AF9Ah                       
3125  aas                                     
3126  fisub   word ptr [bx-46h]               
3129  xchg    ax,sp                           
312a  cmp     [di-53h],ax                     
312d  push    ds                              
312e  mov     cl,0CFh                         
3130  xchg    ax,sp                           
3131  aas                                     
3132  and     al,23h                          
3134  mov     dl,0BCh                         
3137  mov     dx,313Bh                        
313a  popa                                    
313b  mov     di,[bp+si+3Fh]                  
313e  popa                                    
313f  push    bp                              
3140  pop     cx                              
3141  sar     word ptr [bp-4Fh],53h           
3145  jl      3159h                           
3147  mov     bx,3F5Fh                        
314a  xlat                                    
314b  out     dx,al                           
314c  das                                     
314d  lea     ax,[92BEh]                      
3151  test    [di],dx                         
3153  sti                                     
3154  inc     sp                              
3155  aas                                     
3156  and     al,3Fh                          
3158  movsw                                   
3159  jmp     0D695h                          
315c  daa                                     
315d  jmp     3F2Ah:0A87Fh                    
3162  jge     3110h                           
3164  mov     ax,[0BCE4h]                     
3167  jl      31B0h                           
316a  rcr     ch,1                            
316c  push    bp                              
316d  arpl    ds:[bp+di+6h],di                
3171  int 3                                   
3172  and     dx,[si+77h]                     
3175  cmp     di,-6Fh                         
3178  cmp     word ptr [di],0FA91h            
317c  cmp     bl,[bx+di]                      
317e  jp      31E3h                           
3180  and     ax,3143h                        
3183  shr     byte ptr [si+213Ch],89h         
3188  sar     word ptr [bx+si],1              
318a  add     byte ptr [bx-69h],0B8h          
318e  add     ch,bh                           
3190  xlat                                    
3191  cmp     bx,sp                           
3193  mov     [bx+si+8h],bl                   
3196  sbb     si,[bx+di-1C18h]                
319a  xchg    ah,[bp+3B03h]                   
319e  mov     byte ptr [si+4245h],7h          
31a3  mov     dh,99h                          
31a5  jne     31DEh                           
31a7  fld     tword ptr [333Ah]               
31ab  jno     31C9h                           
31ad  shl     byte ptr [bp+di],cl             
31af  ??? (FPU)                               
31b1  out     dx,al                           
31b2  dec     cx                              
31b3  nop                                     
31b4  pop     dx                              
31b5  cmp     [bp-4179h],sp                   
31b9  rcl     byte ptr [bx-26h],0A5h          
31bd  and     byte ptr [bp-4A5Eh],32h         
31c2  loop    322Ch                           
31c4  mov     dl,11h                          
31c6  cmpsw                                   
31c7  push    dx                              
31c8  lahf                                    
31c9  inc     sp                              
31ca  pop     cx                              
31cb  mov     bh,10h                          
31cd  sub     al,25h                          
31cf  dec     cx                              
31d0  in      al,2Dh                          
31d2  xor     al,4Fh                          
31d5  push    bx                              
31d6  scasb                                   
31d7  into                                    
31d8  imul    sp,[di],-71h                    
31db  pop     cx                              
31dc  add     al,0A4h                         
31de  rcr     dh,0C2h                         
31e1  jge     31DEh                           
31e3  call    50ACh                           
31e6  sahf                                    
31e7  out     88h,ax                          
31e9  pop     dx                              
31ea  push    di                              
31eb  xchg    ax,cx                           
31ec  cmp     al,0BFh                         
31ee  push    ax                              
31ef  and     word ptr [bp+si],18h            
31f2  dec     si                              
31f3  dec     bx                              
31f4  bound   di,bp                           
31f7  or      word ptr [bx+6AFh],-6Ch         
31fc  jge     320Fh                           
31fe  in      al,2Dh                          
3200  ficomp  word ptr [bx-2D32h]             
3204  enter   0DD04h,0A6h                     
3208  fmul    dword ptr [bp+si]               

; ----- sub_320a -----
320a  push    bp                              
320b  mov     bp,sp                           
320d  sub     sp,6h                           
3210  push    si                              
3211  push    di                              
3212  mov     di,[bp+6h]                      
3215  mov     bx,2EF2h                        
3218  or      di,di                           
321a  je      3296h                           
321c  jns     3223h                           
321e  mov     bx,304Eh                        
3221  neg     di                              
3223  mov     word ptr [bp-6h],32A8h          
3228  cmp     word ptr [bp+4h],0h             
322c  jne     324Eh                           
322e  mov     word ptr [bp-6h],329Eh          
3233  wait                                    
3234  fstcw   word ptr [bp-2h]                
3237  nop                                     
3238  wait                                    
3239  mov     ax,[bp-2h]                      
323c  or      ax,38h                          
323f  mov     [bp-4h],ax                      
3242  wait                                    
3243  fldcw   word ptr [bp-4h]                
3246  les     si,[bp+8h]                      
3249  wait                                    
324a  fld     tword ptr es:[si+2h]            
324e  push    di                              
324f  pop     di                              
3250  add     bx,54h                          
3253  or      di,di                           
3255  je      327Ah                           
3257  mov     ax,di                           
3259  shr     di,1                            
325b  shr     di,1                            
325d  shr     di,1                            
325f  push    di                              
3260  and     ax,7h                           
3263  je      324Fh                           
3265  push    bx                              
3266  shl     al,1                            
3268  shl     al,1                            
326a  mov     ah,al                           
326c  shl     al,1                            
326e  add     al,ah                           
3270  xor     ah,ah                           
3272  add     bx,ax                           
3274  jmp     word ptr [bp-6h]                
3277  pop     bx                              
3278  jmp     324Fh                           
327a  cmp     word ptr [bp+4h],0h             
327e  jne     3296h                           
3280  wait                                    
3281  fclex                                   
3283  wait                                    
3284  fldcw   word ptr [bp-2h]                
3287  les     si,[bp+8h]                      
328a  wait                                    
328b  fstp    tword ptr es:[si+2h]            
328f  mov     word ptr es:[si],0h             
3294  nop                                     
3295  wait                                    
3296  pop     di                              
3297  pop     si                              
3298  mov     sp,bp                           
329a  pop     bp                              
329b  ret     8h                              
329e  wait                                    
329f  fld     tword ptr cs:[bx+2h]            
32a3  wait                                    
32a4  fmulp   st(1)                           
32a6  jmp     3277h                           
32a8  push    word ptr cs:[bx+0Ah]            
32ac  push    word ptr cs:[bx+8h]             
32b0  push    word ptr cs:[bx+6h]             
32b4  push    word ptr cs:[bx+4h]             
32b8  mov     cx,cs:[bx+2h]                   
32bc  mov     ax,cs:[bx]                      
32bf  cmp     ax,8000h                        
32c2  adc     cx,-1h                          
32c5  push    cx                              
32c6  push    ax                              
32c7  mov     ax,sp                           
32c9  push    word ptr [bp+0Ah]               
32cc  push    word ptr [bp+8h]                
32cf  push    ss                              
32d0  push    ax                              
32d1  call    32DFh                           
32d4  add     sp,0Ch                          
32d7  jmp     3277h                           
32d9  jmp     3448h                           
32dc  jmp     3433h                           

; ----- sub_32df -----
32df  push    bp                              
32e0  mov     bp,sp                           
32e2  sub     sp,12h                          
32e5  push    si                              
32e6  push    di                              
32e7  mov     cx,9h                           
32ea  mov     ax,ss                           
32ec  mov     es,ax                           
32ee  lea     di,[bp-12h]                     
32f1  xor     ax,ax                           
32f3  rep     stosw                           
32f5  lds     si,[bp+8h]                      
32f8  les     di,[bp+4h]                      
32fb  mov     ax,[si+0Ah]                     
32fe  mov     bx,es:[di+0Ah]                  
3302  mov     cx,ax                           
3304  xor     cx,bx                           
3306  and     cx,8000h                        
330a  mov     [bp-2h],cx                      
330d  mov     dx,7FFFh                        
3310  and     ax,dx                           
3312  cmp     ax,dx                           
3314  je      32D9h                           
3316  and     bx,dx                           
3318  cmp     bx,dx                           
331a  je      32D9h                           
331c  mov     dx,ax                           
331e  add     dx,bx                           
3320  cmp     dx,0BFFDh                       
3324  ja      32D9h                           
3326  cmp     dx,3FBFh                        
332a  jbe     32DCh                           
332c  or      ax,ax                           
332e  jne     3341h                           
3330  inc     dx                              
3331  mov     ax,[si]                         
3333  or      ax,[si+2h]                      
3336  or      ax,[si+4h]                      
3339  or      ax,[si+6h]                      
333c  or      ax,[si+8h]                      
333f  je      32DCh                           
3341  or      bx,bx                           
3343  jne     335Bh                           
3345  inc     dx                              
3346  mov     ax,es:[di]                      
3349  or      ax,es:[di+2h]                   
334d  or      ax,es:[di+4h]                   
3351  or      ax,es:[di+6h]                   
3355  or      ax,es:[di+8h]                   
3359  je      32DCh                           
335b  sub     dx,3FFEh                        
335f  mov     [si+0Ah],dx                     
3362  add     di,8h                           
3365  mov     cx,5h                           
3368  lea     bx,[bp-12h]                     
336b  push    cx                              
336c  push    si                              
336d  push    di                              
336e  mov     ax,es:[di]                      
3371  mul     word ptr [si]                   
3373  add     ss:[bx],ax                      
3376  adc     ss:[bx+2h],dx                   
337a  adc     word ptr ss:[bx+4h],0h          
337f  add     si,2h                           
3382  sub     di,2h                           
3385  loop    336Eh                           
3387  pop     di                              
3388  pop     si                              
3389  pop     cx                              
338a  add     bx,2h                           
338d  add     si,2h                           
3390  add     cx,-1h                          
3393  jne     336Bh                           
3395  mov     si,[bp+8h]                      
3398  mov     dx,[bp-10h]                     
339b  mov     cx,[bp-0Eh]                     
339e  mov     bx,[bp-0Ch]                     
33a1  mov     ax,[bp-0Ah]                     
33a4  mov     di,[bp-8h]                      
33a7  cmp     word ptr [si+0Ah],0h            
33ab  jg      33C1h                           
33ad  jmp     340Eh                           
33af  shl     word ptr [bp-12h],1             
33b2  rcl     dx,1                            
33b4  rcl     cx,1                            
33b6  rcl     bx,1                            
33b8  rcl     ax,1                            
33ba  rcl     di,1                            
33bc  dec     word ptr [si+0Ah]               
33bf  je      340Eh                           
33c1  or      di,di                           
33c3  jns     33AFh                           
33c5  cmp     word ptr [bp-12h],8000h         
33ca  jb      33EBh                           
33cc  ja      33D4h                           
33ce  test    dx,1h                           
33d2  je      33EBh                           
33d4  add     dx,1h                           
33d7  adc     cx,0h                           
33da  adc     bx,0h                           
33dd  adc     ax,0h                           
33e0  adc     di,0h                           
33e3  jae     33EBh                           
33e5  mov     di,8000h                        
33e8  inc     word ptr [si+0Ah]               
33eb  cmp     word ptr [si+0Ah],7FFFh         
33f0  jae     3448h                           
33f2  mov     [si+8h],di                      
33f5  mov     [si+6h],ax                      
33f8  mov     [si+4h],bx                      
33fb  mov     [si+2h],cx                      
33fe  mov     [si],dx                         
3400  mov     ax,[bp-2h]                      
3403  or      [si+0Ah],ax                     
3406  pop     di                              
3407  pop     si                              
3408  mov     sp,bp                           
340a  pop     bp                              
340b  ret     8h                              
340e  dec     word ptr [si+0Ah]               
3411  shr     di,1                            
3413  rcr     ax,1                            
3415  rcr     bx,1                            
3417  rcr     cx,1                            
3419  rcr     dx,1                            
341b  rcr     word ptr [bp-12h],1             
341e  adc     word ptr [bp-4h],0h             
3422  inc     word ptr [si+0Ah]               
3425  jne     3411h                           
3427  cmp     word ptr [bp-4h],0h             
342b  je      33C5h                           
342d  or      word ptr [bp-12h],1h            
3431  jmp     33C5h                           
3433  xor     ax,ax                           
3435  mov     [si+0Ah],ax                     
3438  mov     [si+8h],ax                      
343b  mov     [si+6h],ax                      
343e  mov     [si+4h],ax                      
3441  mov     [si+2h],ax                      
3444  mov     [si],ax                         
3446  jmp     3406h                           
3448  mov     ax,7FFFh                        
344b  or      ax,[bp-2h]                      
344e  mov     [si+0Ah],ax                     
3451  xor     ax,ax                           
3453  mov     [si+8h],ax                      
3456  mov     [si+6h],ax                      
3459  mov     [si+4h],ax                      
345c  mov     [si+2h],ax                      
345f  mov     [si],ax                         
3461  jmp     3406h                           
3463  add     [bx+si],al                      

; ----- sub_3464 -----
3464  push    bp                              
3465  mov     bp,sp                           
3467  sub     sp,0Ch                          
346a  push    si                              
346b  push    di                              
346c  mov     ax,[bp+6h]                      
346f  mov     [bp-0Ch],ax                     
3472  les     si,[bp+8h]                      
3475  xor     ax,ax                           
3477  mov     di,ax                           
3479  mov     bx,ax                           
347b  mov     cx,ax                           
347d  mov     dx,ax                           
347f  mov     dl,es:[si]                      
3482  inc     si                              
3483  jmp     34BFh                           
3485  mov     [bp-2h],di                      
3488  mov     [bp-4h],ax                      
348b  mov     [bp-6h],bx                      
348e  mov     [bp-8h],cx                      
3491  mov     [bp-0Ah],dx                     
3494  call    3512h                           
3497  call    3512h                           
349a  add     dx,[bp-0Ah]                     
349d  adc     cx,[bp-8h]                      
34a0  adc     bx,[bp-6h]                      
34a3  adc     ax,[bp-4h]                      
34a6  adc     di,[bp-2h]                      
34a9  call    3512h                           
34ac  add     dl,es:[si]                      
34af  inc     si                              
34b0  adc     dh,0h                           
34b3  adc     cx,0h                           
34b6  adc     bx,0h                           
34b9  adc     ax,0h                           
34bc  adc     di,0h                           
34bf  dec     word ptr [bp-0Ch]               
34c2  jne     3485h                           
34c4  mov     si,404Eh                        
34c7  jmp     34D6h                           
34c9  mov     di,ax                           
34cb  mov     ax,bx                           
34cd  mov     bx,cx                           
34cf  mov     cx,dx                           
34d1  xor     dx,dx                           
34d3  sub     si,10h                          
34d6  or      di,di                           
34d8  je      34C9h                           
34da  js      34EBh                           
34dc  shl     dx,1                            
34de  rcl     cx,1                            
34e0  rcl     bx,1                            
34e2  rcl     ax,1                            
34e4  rcl     di,1                            
34e6  dec     si                              
34e7  or      di,di                           
34e9  jns     34DCh                           
34eb  push    si                              
34ec  mov     si,[bp+4h]                      
34ef  pop     ss:[si+0Ah]                     
34f3  mov     ss:[si+8h],di                   
34f7  mov     ss:[si+6h],ax                   
34fb  mov     ss:[si+4h],bx                   
34ff  mov     ss:[si+2h],cx                   
3503  mov     ss:[si],dx                      
3506  mov     ax,si                           
3508  mov     dx,ss                           
350a  pop     di                              
350b  pop     si                              
350c  mov     sp,bp                           
350e  pop     bp                              
350f  ret     8h                              

; ----- sub_3512 -----
3512  shl     dx,1                            
3514  rcl     cx,1                            
3516  rcl     bx,1                            
3518  rcl     ax,1                            
351a  rcl     di,1                            
351c  ret                                     
