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
0060  mov     [24h],di                        
0064  mov     [26h],ds                        
0068  mov     [28h],cx                        
006c  mov     [2Ah],bx                        
0070  mov     [2Ch],si                        
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
0094  mov     [5Eh],ax                        
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [62h],ax                        
00ae  xchg    al,ah                           
00b0  mov     [60h],ax                        
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [65h],al                        
00c1  call far sub_018c                       
00c6  call far sub_0294                       
00cb  inc     byte ptr [2Eh]                  
00cf  push    word ptr [86h]                  
00d3  push    word ptr [84h]                  ; [ds] f32 here = 0
00d7  push    word ptr [82h]                  ; [ds] f32 here = 0
00db  push    word ptr [80h]                  ; [ds] f32 here = 0
00df  push    word ptr [7Eh]                  ; [ds] f32 here = 0
00e3  call far sub_0160                       
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
0118  sub     sp,0Ch                          
011b  push    bx                              
011c  push    cx                              
011d  push    si                              
011e  push    di                              
011f  wait                                    
0120  fstcw   word ptr [bp-4h]                
0123  nop                                     
0124  wait                                    
0125  mov     ax,[bp-4h]                      
0128  or      ah,0Ch                          
012b  mov     [bp-6h],ax                      
012e  wait                                    
012f  fldcw   word ptr [bp-6h]                
0132  wait                                    
0133  fistp   qword ptr [bp-0Eh]              
0136  wait                                    
0137  fldcw   word ptr [bp-4h]                
013a  mov     ax,[bp-0Eh]                     
013d  mov     dx,[bp-0Ch]                     
0140  pop     di                              
0141  pop     si                              
0142  pop     cx                              
0143  pop     bx                              
0144  lea     sp,[bp-2h]                      
0147  pop     ds                              
0148  pop     bp                              
0149  dec     bp                              
014a  retf                                    
014b  add     [bp+57h],dl                     
014e  mov     ax,ds                           
0150  mov     es,ax                           
0152  mov     si,38h                          
0155  mov     di,94h                          
0158  mov     cx,0Ah                          
015b  rep     movsw                           
015d  pop     di                              
015e  pop     si                              
015f  retf                                    

; ----- sub_0160 -----
0160  mov     ax,ds                           
0162  nop                                     
0163  inc     bp                              
0164  push    bp                              
0165  mov     bp,sp                           
0167  push    ds                              
0168  mov     ds,ax                           
016a  push    word ptr [24h]                  ; [ds] f32 here = 0
016e  push    word ptr [26h]                  ; [ds] f32 here = 0
0172  push    word ptr [28h]                  ; [ds] f32 here = 0
0176  push    word ptr [2Ch]                  
017a  push    word ptr [2Ah]                  ; [ds] f32 here = 0
017e  call far sub_1d90                       
0183  sub     bp,2h                           
0186  mov     sp,bp                           
0188  pop     ds                              
0189  pop     bp                              
018a  dec     bp                              
018b  retf                                    

; ----- sub_018c -----
018c  mov     ax,ds                           
018e  nop                                     
018f  inc     bp                              
0190  push    bp                              
0191  mov     bp,sp                           
0193  push    ds                              
0194  mov     ds,ax                           
0196  mov     cx,[256h]                       
019a  jcxz    1B0h                            
019c  xor     si,si                           
019e  mov     ax,[258h]                       
01a1  mov     dx,[25Ah]                       
01a5  xor     bx,bx                           
01a7  call    far ptr  [254h]                 
01ab  jae     1B0h                            
01ad  jmp     0A5Ah                           
01b0  mov     si,264h                         
01b3  mov     di,264h                         
01b6  call    25Ch                            
01b9  mov     si,260h                         
01bc  mov     di,264h                         
01bf  call    25Ch                            
01c2  mov     si,264h                         
01c5  mov     di,264h                         
01c8  call    25Ch                            
01cb  sub     bp,2h                           
01ce  mov     sp,bp                           
01d0  pop     ds                              
01d1  pop     bp                              
01d2  dec     bp                              
01d3  retf                                    
01d4  mov     ax,ds                           
01d6  nop                                     
01d7  inc     bp                              
01d8  push    bp                              
01d9  mov     bp,sp                           
01db  push    ds                              
01dc  mov     ds,ax                           
01de  push    si                              
01df  push    di                              
01e0  mov     cx,100h                         
01e3  jmp     1F4h                            
01e5  mov     ax,ds                           
01e7  nop                                     
01e8  inc     bp                              
01e9  push    bp                              
01ea  mov     bp,sp                           
01ec  push    ds                              
01ed  mov     ds,ax                           
01ef  push    si                              
01f0  push    di                              
01f1  mov     cx,101h                         
01f4  mov     [8Fh],ch                        
01f8  push    cx                              
01f9  or      cl,cl                           
01fb  jne     20Fh                            
01fd  mov     si,64Eh                         
0200  mov     di,64Eh                         
0203  call    25Ch                            
0206  mov     si,264h                         
0209  mov     di,264h                         
020c  call    25Ch                            
020f  mov     si,264h                         
0212  mov     di,264h                         
0215  call    25Ch                            
0218  mov     si,264h                         
021b  mov     di,264h                         
021e  call    25Ch                            
0221  call    1434h                           
0224  call    0A9Eh                           
0227  pop     ax                              
0228  pop     di                              
0229  pop     si                              
022a  sub     bp,2h                           
022d  mov     sp,bp                           
022f  pop     ds                              
0230  pop     bp                              
0231  dec     bp                              
0232  retf                                    
0233  mov     cx,[256h]                       
0237  jcxz    240h                            
0239  mov     bx,2h                           
023c  call    far ptr  [254h]                 
0240  push    ds                              
0241  lds     dx,[4Ch]                        
0245  mov     ax,2500h                        
0248  test    word ptr cs:[10h],1h            
024f  je      258h                            
0251  call far KERNEL.DOS3CALL                
0256  jmp     25Ah                            
0258  int     21h                             
025a  pop     ds                              
025b  ret                                     

; ----- sub_025c -----
025c  cmp     si,di                           
025e  jae     26Eh                            
0260  sub     di,4h                           
0263  mov     ax,[di]                         
0265  or      ax,[di+2h]                      
0268  je      25Ch                            
026a  call    far ptr  [di]                   
026c  jmp     25Ch                            
026e  ret                                     
026f  add     [bx+si],al                      

; ----- sub_0270 -----
0270  mov     ax,ds                           
0272  nop                                     
0273  inc     bp                              
0274  push    bp                              
0275  mov     bp,sp                           
0277  push    ds                              
0278  mov     ds,ax                           
027a  mov     ax,0FCh                         
027d  push    ax                              
027e  push    cs                              
027f  call    9F7h                            
0282  mov     ax,0FFh                         
0285  push    ax                              
0286  push    cs                              
0287  call    9F7h                            
028a  sub     bp,2h                           
028d  mov     sp,bp                           
028f  pop     ds                              
0290  pop     bp                              
0291  dec     bp                              
0292  retf                                    
0293  add     [bx+si],al                      

; ----- sub_0294 -----
0294  mov     ax,ds                           
0296  nop                                     
0297  inc     bp                              
0298  push    bp                              
0299  mov     bp,sp                           
029b  push    ds                              
029c  mov     ds,ax                           
029e  sub     sp,6h                           
02a1  push    ds                              
02a2  call far KERNEL.GETDOSENVIRONMENT       
02a7  or      ax,ax                           
02a9  je      2AEh                            
02ab  mov     dx,0h                           
02ae  mov     bx,dx                           
02b0  mov     es,dx                           
02b2  mov     [bp-4h],es                      
02b5  mov     [bp-8h],ds                      
02b8  xor     ax,ax                           
02ba  xor     si,si                           
02bc  xor     di,di                           
02be  mov     cx,0FFFFh                       
02c1  or      bx,bx                           
02c3  je      2D3h                            
02c5  cmp     byte ptr es:[0h],0h             
02cb  je      2D3h                            
02cd  repne   scasb                           
02cf  inc     si                              
02d0  scasb                                   
02d1  jne     2CDh                            
02d3  mov     ax,di                           
02d5  inc     ax                              
02d6  and     al,0FEh                         
02d8  inc     si                              
02d9  mov     di,si                           
02db  shl     si,1                            
02dd  shl     si,1                            
02df  mov     cx,9h                           
02e2  call    0A60h                           
02e5  push    dx                              
02e6  push    ax                              
02e7  mov     ax,si                           
02e9  call    0A60h                           
02ec  mov     [84h],ax                        
02ef  mov     [86h],dx                        
02f3  mov     [bp-6h],dx                      
02f6  push    es                              
02f7  pop     ds                              
02f8  mov     cx,di                           
02fa  mov     bx,ax                           
02fc  xor     si,si                           
02fe  pop     di                              
02ff  pop     es                              
0300  dec     cx                              
0301  jcxz    319h                            
0303  mov     ds,[bp-6h]                      
0306  mov     [bx],di                         
0308  mov     [bx+2h],es                      
030b  add     bx,4h                           
030e  mov     ds,[bp-4h]                      
0311  lodsb                                   
0312  stosb                                   
0313  or      al,al                           
0315  jne     311h                            
0317  loop    303h                            
0319  mov     ds,[bp-6h]                      
031c  mov     [bx],cx                         
031e  mov     [bx+2h],cx                      
0321  pop     ds                              
0322  sub     bp,2h                           
0325  mov     sp,bp                           
0327  pop     ds                              
0328  pop     bp                              
0329  dec     bp                              
032a  retf                                    
032b  add     [si-6F28h],cl                   
032f  inc     bp                              
0330  push    bp                              
0331  mov     bp,sp                           
0333  push    ds                              
0334  mov     ds,ax                           
0336  sub     sp,0Ah                          
0339  les     bx,[bp+6h]                      
033c  mov     al,es:[bx]                      
033f  cbw                                     
0340  mov     bx,ax                           
0342  test    byte ptr [bx+0C3h],1h           
0347  je      34Eh                            
0349  lea     ax,[bx+20h]                     
034c  jmp     355h                            
034e  mov     bx,[bp+6h]                      
0351  mov     al,es:[bx]                      
0354  cbw                                     
0355  cmp     ax,65h                          
0358  je      36Dh                            
035a  inc     word ptr [bp+6h]                
035d  mov     bx,[bp+6h]                      
0360  mov     al,es:[bx]                      
0363  cbw                                     
0364  mov     bx,ax                           
0366  test    byte ptr [bx+0C3h],4h           
036b  jne     35Ah                            
036d  mov     bx,[bp+6h]                      
0370  mov     al,es:[bx]                      
0373  mov     [bp-4h],al                      
0376  mov     byte ptr es:[bx],2Eh            
037a  inc     word ptr [bp+6h]                
037d  mov     bx,[bp+6h]                      
0380  mov     al,es:[bx]                      
0383  mov     [bp-6h],al                      
0386  mov     al,[bp-4h]                      
0389  mov     es:[bx],al                      
038c  mov     al,[bp-6h]                      
038f  mov     [bp-4h],al                      
0392  inc     word ptr [bp+6h]                
0395  cmp     byte ptr es:[bx],0h             
0399  jne     37Dh                            
039b  lea     sp,[bp-2h]                      
039e  pop     ds                              
039f  pop     bp                              
03a0  dec     bp                              
03a1  retf                                    
03a2  mov     ax,ds                           
03a4  nop                                     
03a5  inc     bp                              
03a6  push    bp                              
03a7  mov     bp,sp                           
03a9  push    ds                              
03aa  mov     ds,ax                           
03ac  sub     sp,8h                           
03af  jmp     3BBh                            
03b1  nop                                     
03b2  cmp     byte ptr es:[bx],2Eh            
03b6  je      3C4h                            
03b8  inc     word ptr [bp+6h]                
03bb  les     bx,[bp+6h]                      
03be  cmp     byte ptr es:[bx],0h             
03c2  jne     3B2h                            
03c4  inc     word ptr [bp+6h]                
03c7  cmp     byte ptr es:[bx],0h             
03cb  je      41Fh                            
03cd  jmp     3DFh                            
03cf  nop                                     
03d0  cmp     byte ptr es:[bx],65h            
03d4  je      3E8h                            
03d6  cmp     byte ptr es:[bx],45h            
03da  je      3E8h                            
03dc  inc     word ptr [bp+6h]                
03df  mov     bx,[bp+6h]                      
03e2  cmp     byte ptr es:[bx],0h             
03e6  jne     3D0h                            
03e8  dec     word ptr [bp+6h]                
03eb  mov     [bp-6h],bx                      
03ee  mov     [bp-4h],es                      
03f1  jmp     3F7h                            
03f3  nop                                     
03f4  dec     word ptr [bp+6h]                
03f7  mov     bx,[bp+6h]                      
03fa  cmp     byte ptr es:[bx],30h            
03fe  je      3F4h                            
0400  cmp     byte ptr es:[bx],2Eh            
0404  jne     409h                            
0406  dec     word ptr [bp+6h]                
0409  les     bx,[bp-6h]                      
040c  inc     word ptr [bp-6h]                
040f  mov     al,es:[bx]                      
0412  inc     word ptr [bp+6h]                
0415  les     bx,[bp+6h]                      
0418  mov     es:[bx],al                      
041b  or      al,al                           
041d  jne     409h                            
041f  lea     sp,[bp-2h]                      
0422  pop     ds                              
0423  pop     bp                              
0424  dec     bp                              
0425  retf                                    
0426  mov     ax,ds                           
0428  nop                                     
0429  inc     bp                              
042a  push    bp                              
042b  mov     bp,sp                           
042d  push    ds                              
042e  mov     ds,ax                           
0430  sub     sp,2h                           
0433  les     bx,[bp+6h]                      
0436  wait                                    
0437  fld     qword ptr es:[bx]               
043a  wait                                    
043b  fcom    qword ptr [2C4h]                ; [ds] = 0
043f  wait                                    
0440  fstp    st(0)                           
0442  wait                                    
0443  fstsw   word ptr [bp-4h]                
0446  nop                                     
0447  wait                                    
0448  mov     ah,[bp-3h]                      
044b  sahf                                    
044c  jb      454h                            
044e  mov     ax,1h                           
0451  jmp     456h                            
0453  nop                                     
0454  xor     ax,ax                           
0456  lea     sp,[bp-2h]                      
0459  pop     ds                              
045a  pop     bp                              
045b  dec     bp                              
045c  retf                                    
045d  nop                                     
045e  mov     ax,ds                           
0460  nop                                     
0461  inc     bp                              
0462  push    bp                              
0463  mov     bp,sp                           
0465  push    ds                              
0466  mov     ds,ax                           
0468  push    di                              
0469  push    si                              
046a  cmp     word ptr [bp+6h],0h             
046e  je      48Eh                            
0470  push    word ptr [bp+0Eh]               
0473  push    word ptr [bp+0Ch]               
0476  call far sub_0aa0                       
047b  add     sp,4h                           
047e  push    ds                              
047f  mov     si,ax                           
0481  mov     ds,dx                           
0483  les     di,[bp+8h]                      
0486  movsw                                   
0487  movsw                                   
0488  movsw                                   
0489  movsw                                   
048a  pop     ds                              
048b  jmp     4ADh                            
048d  nop                                     
048e  push    word ptr [bp+0Eh]               
0491  push    word ptr [bp+0Ch]               
0494  call far sub_0aa0                       
0499  add     sp,4h                           
049c  mov     es,dx                           
049e  mov     bx,ax                           
04a0  wait                                    
04a1  fld     qword ptr es:[bx]               
04a4  les     bx,[bp+8h]                      
04a7  wait                                    
04a8  fstp    dword ptr es:[bx]               
04ab  nop                                     
04ac  wait                                    
04ad  pop     si                              
04ae  pop     di                              
04af  lea     sp,[bp-2h]                      
04b2  pop     ds                              
04b3  pop     bp                              
04b4  dec     bp                              
04b5  retf                                    

; ----- sub_04b6 -----
04b6  mov     ax,ds                           
04b8  nop                                     
04b9  inc     bp                              
04ba  push    bp                              
04bb  mov     bp,sp                           
04bd  push    ds                              
04be  mov     ds,ax                           
04c0  sub     sp,0Ah                          
04c3  push    si                              
04c4  cmp     byte ptr [0B6h],0h              
04c9  je      50Ch                            
04cb  mov     ax,[63Ah]                       
04ce  mov     dx,[63Ch]                       
04d2  mov     [bp-6h],ax                      
04d5  mov     [bp-4h],dx                      
04d8  mov     es,dx                           
04da  mov     bx,ax                           
04dc  cmp     word ptr es:[bx],2Dh            
04e0  jne     4E8h                            
04e2  mov     ax,1h                           
04e5  jmp     4EAh                            
04e7  nop                                     
04e8  xor     ax,ax                           
04ea  add     ax,[bp+0Ah]                     
04ed  mov     dx,[bp+0Ch]                     
04f0  mov     [bp-0Ah],ax                     
04f3  mov     [bp-8h],dx                      
04f6  push    dx                              
04f7  push    ax                              
04f8  cmp     word ptr [bp+0Eh],0h            
04fc  jle     504h                            
04fe  mov     ax,1h                           
0501  jmp     506h                            
0503  nop                                     
0504  xor     ax,ax                           
0506  push    ax                              
0507  call    968h                            
050a  jmp     567h                            
050c  les     bx,[bp+6h]                      
050f  push    word ptr es:[bx+6h]             
0513  push    word ptr es:[bx+4h]             
0517  push    word ptr es:[bx+2h]             
051b  push    word ptr es:[bx]                
051e  call far sub_0d14                       
0523  add     sp,8h                           
0526  mov     [bp-6h],ax                      
0529  mov     [bp-4h],dx                      
052c  push    dx                              
052d  push    ax                              
052e  mov     ax,[bp+0Eh]                     
0531  inc     ax                              
0532  push    ax                              
0533  les     bx,[bp-6h]                      
0536  cmp     word ptr es:[bx],2Dh            
053a  jne     542h                            
053c  mov     ax,1h                           
053f  jmp     544h                            
0541  nop                                     
0542  xor     ax,ax                           
0544  mov     [bp-0Ch],ax                     
0547  cmp     word ptr [bp+0Eh],0h            
054b  jle     552h                            
054d  mov     ax,1h                           
0550  jmp     554h                            
0552  xor     ax,ax                           
0554  add     ax,[bp-0Ch]                     
0557  add     ax,[bp+0Ah]                     
055a  mov     dx,[bp+0Ch]                     
055d  push    dx                              
055e  push    ax                              
055f  call far sub_0afe                       
0564  add     sp,0Ah                          
0567  mov     ax,[bp+0Ah]                     
056a  mov     dx,[bp+0Ch]                     
056d  mov     [bp-0Ah],ax                     
0570  mov     [bp-8h],dx                      
0573  les     bx,[bp-6h]                      
0576  cmp     word ptr es:[bx],2Dh            
057a  jne     588h                            
057c  mov     bx,ax                           
057e  mov     es,dx                           
0580  mov     byte ptr es:[bx],2Dh            
0584  inc     ax                              
0585  mov     [bp-0Ah],ax                     
0588  cmp     word ptr [bp+0Eh],0h            
058c  jle     5A0h                            
058e  les     bx,[bp-0Ah]                     
0591  mov     al,es:[bx+1h]                   
0595  mov     es:[bx],al                      
0598  inc     bx                              
0599  mov     [bp-0Ah],bx                     
059c  mov     byte ptr es:[bx],2Eh            
05a0  mov     ax,0BBh                         
05a3  push    ds                              
05a4  push    ax                              
05a5  cmp     byte ptr [0B6h],1h              
05aa  sbb     ax,ax                           
05ac  neg     ax                              
05ae  add     ax,[bp-0Ah]                     
05b1  mov     dx,[bp-8h]                      
05b4  add     ax,[bp+0Eh]                     
05b7  push    dx                              
05b8  push    ax                              
05b9  call far sub_0bc6                       
05be  add     sp,8h                           
05c1  mov     [bp-0Ah],ax                     
05c4  mov     [bp-8h],dx                      
05c7  cmp     word ptr [bp+10h],0h            
05cb  je      5D4h                            
05cd  les     bx,[bp-0Ah]                     
05d0  mov     byte ptr es:[bx],45h            
05d4  inc     word ptr [bp-0Ah]               
05d7  les     bx,[bp-6h]                      
05da  les     bx,es:[bx+6h]                   
05de  cmp     byte ptr es:[bx],30h            
05e2  je      640h                            
05e4  les     bx,[bp-6h]                      
05e7  mov     si,es:[bx+2h]                   
05eb  dec     si                              
05ec  jns     5FBh                            
05ee  mov     ax,si                           
05f0  neg     ax                              
05f2  mov     si,ax                           
05f4  les     bx,[bp-0Ah]                     
05f7  mov     byte ptr es:[bx],2Dh            
05fb  inc     word ptr [bp-0Ah]               
05fe  cmp     si,64h                          
0601  jl      618h                            
0603  mov     ax,si                           
0605  mov     cx,64h                          
0608  cwd                                     
0609  idiv    cx                              
060b  les     bx,[bp-0Ah]                     
060e  add     es:[bx],al                      
0611  mov     ax,si                           
0613  cwd                                     
0614  idiv    cx                              
0616  mov     si,dx                           
0618  inc     word ptr [bp-0Ah]               
061b  cmp     si,0Ah                          
061e  jl      635h                            
0620  mov     ax,si                           
0622  mov     cx,0Ah                          
0625  cwd                                     
0626  idiv    cx                              
0628  les     bx,[bp-0Ah]                     
062b  add     es:[bx],al                      
062e  mov     ax,si                           
0630  cwd                                     
0631  idiv    cx                              
0633  mov     si,dx                           
0635  mov     ax,si                           
0637  inc     word ptr [bp-0Ah]               
063a  les     bx,[bp-0Ah]                     
063d  add     es:[bx],al                      
0640  mov     ax,[bp+0Ah]                     
0643  mov     dx,[bp+0Ch]                     
0646  pop     si                              
0647  lea     sp,[bp-2h]                      
064a  pop     ds                              
064b  pop     bp                              
064c  dec     bp                              
064d  retf                                    

; ----- sub_064e -----
064e  mov     ax,ds                           
0650  nop                                     
0651  inc     bp                              
0652  push    bp                              
0653  mov     bp,sp                           
0655  push    ds                              
0656  mov     ds,ax                           
0658  sub     sp,4h                           
065b  mov     byte ptr [0B6h],1h              
0660  push    word ptr [bp+10h]               
0663  push    word ptr [bp+0Eh]               
0666  push    word ptr [bp+0Ch]               
0669  push    word ptr [bp+0Ah]               
066c  push    word ptr [bp+8h]                
066f  push    word ptr [bp+6h]                
0672  push    cs                              
0673  call    4B6h                            
0676  mov     byte ptr [0B6h],0h              
067b  lea     sp,[bp-2h]                      
067e  pop     ds                              
067f  pop     bp                              
0680  dec     bp                              
0681  retf                                    

; ----- sub_0682 -----
0682  mov     ax,ds                           
0684  nop                                     
0685  inc     bp                              
0686  push    bp                              
0687  mov     bp,sp                           
0689  push    ds                              
068a  mov     ds,ax                           
068c  sub     sp,0Eh                          
068f  push    si                              
0690  cmp     byte ptr [0B6h],0h              
0695  je      6DEh                            
0697  mov     ax,[63Ah]                       
069a  mov     dx,[63Ch]                       
069e  mov     [bp-6h],ax                      
06a1  mov     [bp-4h],dx                      
06a4  mov     es,dx                           
06a6  mov     bx,ax                           
06a8  cmp     word ptr es:[bx],2Dh            
06ac  jne     6B4h                            
06ae  mov     ax,1h                           
06b1  jmp     6B6h                            
06b3  nop                                     
06b4  xor     ax,ax                           
06b6  add     ax,[bp+0Ah]                     
06b9  mov     dx,[bp+0Ch]                     
06bc  mov     [bp-0Ah],ax                     
06bf  mov     [bp-8h],dx                      
06c2  mov     cx,[0B8h]                       
06c6  cmp     [bp+0Eh],cx                     
06c9  jne     728h                            
06cb  mov     es,dx                           
06cd  mov     bx,ax                           
06cf  mov     si,cx                           
06d1  mov     byte ptr es:[bx+si],30h         
06d5  add     bx,cx                           
06d7  inc     bx                              
06d8  mov     byte ptr es:[bx],0h             
06dc  jmp     728h                            
06de  les     bx,[bp+6h]                      
06e1  push    word ptr es:[bx+6h]             
06e5  push    word ptr es:[bx+4h]             
06e9  push    word ptr es:[bx+2h]             
06ed  push    word ptr es:[bx]                
06f0  call far sub_0d14                       
06f5  add     sp,8h                           
06f8  mov     [bp-6h],ax                      
06fb  mov     [bp-4h],dx                      
06fe  push    dx                              
06ff  les     bx,[bp-6h]                      
0702  push    ax                              
0703  mov     ax,es:[bx+2h]                   
0707  add     ax,[bp+0Eh]                     
070a  push    ax                              
070b  cmp     word ptr es:[bx],2Dh            
070f  jne     716h                            
0711  mov     ax,1h                           
0714  jmp     718h                            
0716  xor     ax,ax                           
0718  add     ax,[bp+0Ah]                     
071b  mov     dx,[bp+0Ch]                     
071e  push    dx                              
071f  push    ax                              
0720  call far sub_0afe                       
0725  add     sp,0Ah                          
0728  mov     ax,[bp+0Ah]                     
072b  mov     dx,[bp+0Ch]                     
072e  mov     [bp-0Ah],ax                     
0731  mov     [bp-8h],dx                      
0734  les     bx,[bp-6h]                      
0737  cmp     word ptr es:[bx],2Dh            
073b  jne     749h                            
073d  mov     bx,ax                           
073f  mov     es,dx                           
0741  mov     byte ptr es:[bx],2Dh            
0745  inc     ax                              
0746  mov     [bp-0Ah],ax                     
0749  les     bx,[bp-6h]                      
074c  cmp     word ptr es:[bx+2h],0h          
0751  jg      76Ch                            
0753  push    word ptr [bp-8h]                
0756  push    word ptr [bp-0Ah]               
0759  mov     ax,1h                           
075c  push    ax                              
075d  call    968h                            
0760  les     bx,[bp-0Ah]                     
0763  inc     word ptr [bp-0Ah]               
0766  mov     byte ptr es:[bx],30h            
076a  jmp     773h                            
076c  mov     ax,es:[bx+2h]                   
0770  add     [bp-0Ah],ax                     
0773  cmp     word ptr [bp+0Eh],0h            
0777  jle     7DAh                            
0779  push    word ptr [bp-8h]                
077c  push    word ptr [bp-0Ah]               
077f  mov     ax,1h                           
0782  push    ax                              
0783  call    968h                            
0786  les     bx,[bp-0Ah]                     
0789  inc     word ptr [bp-0Ah]               
078c  mov     byte ptr es:[bx],2Eh            
0790  les     bx,[bp-6h]                      
0793  cmp     word ptr es:[bx+2h],0h          
0798  jge     7DAh                            
079a  cmp     byte ptr [0B6h],0h              
079f  je      7AAh                            
07a1  mov     ax,es:[bx+2h]                   
07a5  neg     ax                              
07a7  jmp     7B8h                            
07a9  nop                                     
07aa  mov     ax,es:[bx+2h]                   
07ae  neg     ax                              
07b0  cmp     ax,[bp+0Eh]                     
07b3  jle     7B8h                            
07b5  mov     ax,[bp+0Eh]                     
07b8  mov     [bp+0Eh],ax                     
07bb  push    word ptr [bp-8h]                
07be  push    word ptr [bp-0Ah]               
07c1  push    ax                              
07c2  call    968h                            
07c5  push    word ptr [bp+0Eh]               
07c8  mov     ax,30h                          
07cb  push    ax                              
07cc  push    word ptr [bp-8h]                
07cf  push    word ptr [bp-0Ah]               
07d2  call far sub_0c02                       
07d7  add     sp,8h                           
07da  mov     ax,[bp+0Ah]                     
07dd  mov     dx,[bp+0Ch]                     
07e0  pop     si                              
07e1  lea     sp,[bp-2h]                      
07e4  pop     ds                              
07e5  pop     bp                              
07e6  dec     bp                              
07e7  retf                                    

; ----- sub_07e8 -----
07e8  mov     ax,ds                           
07ea  nop                                     
07eb  inc     bp                              
07ec  push    bp                              
07ed  mov     bp,sp                           
07ef  push    ds                              
07f0  mov     ds,ax                           
07f2  sub     sp,4h                           
07f5  mov     byte ptr [0B6h],1h              
07fa  push    word ptr [bp+0Eh]               
07fd  push    word ptr [bp+0Ch]               
0800  push    word ptr [bp+0Ah]               
0803  push    word ptr [bp+8h]                
0806  push    word ptr [bp+6h]                
0809  push    cs                              
080a  call    682h                            
080d  mov     byte ptr [0B6h],0h              
0812  lea     sp,[bp-2h]                      
0815  pop     ds                              
0816  pop     bp                              
0817  dec     bp                              
0818  retf                                    
0819  nop                                     

; ----- sub_081a -----
081a  mov     ax,ds                           
081c  nop                                     
081d  inc     bp                              
081e  push    bp                              
081f  mov     bp,sp                           
0821  push    ds                              
0822  mov     ds,ax                           
0824  sub     sp,0Ah                          
0827  les     bx,[bp+6h]                      
082a  push    word ptr es:[bx+6h]             
082e  push    word ptr es:[bx+4h]             
0832  push    word ptr es:[bx+2h]             
0836  push    word ptr es:[bx]                
0839  call far sub_0d14                       
083e  add     sp,8h                           
0841  mov     [63Ah],ax                       
0844  mov     [63Ch],dx                       
0848  les     bx,[63Ah]                       
084c  mov     ax,es:[bx+2h]                   
0850  dec     ax                              
0851  mov     [0B8h],ax                       
0854  cmp     word ptr es:[bx],2Dh            
0858  jne     860h                            
085a  mov     ax,1h                           
085d  jmp     862h                            
085f  nop                                     
0860  xor     ax,ax                           
0862  add     ax,[bp+0Ah]                     
0865  mov     dx,[bp+0Ch]                     
0868  mov     [bp-6h],ax                      
086b  mov     [bp-4h],dx                      
086e  push    es                              
086f  push    bx                              
0870  push    word ptr [bp+0Eh]               
0873  push    dx                              
0874  push    ax                              
0875  call far sub_0afe                       
087a  add     sp,0Ah                          
087d  les     bx,[63Ah]                       
0881  mov     ax,es:[bx+2h]                   
0885  dec     ax                              
0886  mov     [bp-8h],ax                      
0889  cmp     ax,[0B8h]                       
088d  jle     894h                            
088f  mov     al,1h                           
0891  jmp     896h                            
0893  nop                                     
0894  xor     al,al                           
0896  mov     [0BAh],al                       
0899  mov     ax,[bp-8h]                      
089c  mov     [0B8h],ax                       
089f  cmp     ax,0FFFCh                       
08a2  jl      8A9h                            
08a4  cmp     ax,[bp+0Eh]                     
08a7  jl      8C4h                            
08a9  push    word ptr [bp+10h]               
08ac  push    word ptr [bp+0Eh]               
08af  push    word ptr [bp+0Ch]               
08b2  push    word ptr [bp+0Ah]               
08b5  push    word ptr [bp+8h]                
08b8  push    word ptr [bp+6h]                
08bb  push    cs                              
08bc  call    64Eh                            
08bf  add     sp,0Ch                          
08c2  jmp     8F2h                            
08c4  cmp     byte ptr [0BAh],0h              
08c9  je      8DFh                            
08cb  les     bx,[bp-6h]                      
08ce  inc     word ptr [bp-6h]                
08d1  cmp     byte ptr es:[bx],0h             
08d5  jne     8CBh                            
08d7  mov     bx,[bp-6h]                      
08da  mov     byte ptr es:[bx-2h],0h          
08df  push    word ptr [bp+0Eh]               
08e2  push    word ptr [bp+0Ch]               
08e5  push    word ptr [bp+0Ah]               
08e8  push    word ptr [bp+8h]                
08eb  push    word ptr [bp+6h]                
08ee  push    cs                              
08ef  call    7E8h                            
08f2  lea     sp,[bp-2h]                      
08f5  pop     ds                              
08f6  pop     bp                              
08f7  dec     bp                              
08f8  retf                                    
08f9  nop                                     
08fa  mov     ax,ds                           
08fc  nop                                     
08fd  inc     bp                              
08fe  push    bp                              
08ff  mov     bp,sp                           
0901  push    ds                              
0902  mov     ds,ax                           
0904  cmp     word ptr [bp+0Eh],65h           
0908  je      910h                            
090a  cmp     word ptr [bp+0Eh],45h           
090e  jne     92Ch                            
0910  push    word ptr [bp+12h]               
0913  push    word ptr [bp+10h]               
0916  push    word ptr [bp+0Ch]               
0919  push    word ptr [bp+0Ah]               
091c  push    word ptr [bp+8h]                
091f  push    word ptr [bp+6h]                
0922  push    cs                              
0923  call    4B6h                            
0926  add     sp,0Ch                          
0929  jmp     960h                            
092b  nop                                     
092c  cmp     word ptr [bp+0Eh],66h           
0930  jne     94Ah                            
0932  push    word ptr [bp+10h]               
0935  push    word ptr [bp+0Ch]               
0938  push    word ptr [bp+0Ah]               
093b  push    word ptr [bp+8h]                
093e  push    word ptr [bp+6h]                
0941  push    cs                              
0942  call    682h                            
0945  add     sp,0Ah                          
0948  jmp     960h                            
094a  push    word ptr [bp+12h]               
094d  push    word ptr [bp+10h]               
0950  push    word ptr [bp+0Ch]               
0953  push    word ptr [bp+0Ah]               
0956  push    word ptr [bp+8h]                
0959  push    word ptr [bp+6h]                
095c  push    cs                              
095d  call    81Ah                            
0960  lea     sp,[bp-2h]                      
0963  pop     ds                              
0964  pop     bp                              
0965  dec     bp                              
0966  retf                                    
0967  nop                                     

; ----- sub_0968 -----
0968  push    bp                              
0969  mov     bp,sp                           
096b  cmp     word ptr [bp+4h],0h             
096f  je      995h                            
0971  push    word ptr [bp+8h]                
0974  push    word ptr [bp+6h]                
0977  call far sub_0bac                       
097c  add     sp,4h                           
097f  inc     ax                              
0980  push    ax                              
0981  push    word ptr [bp+8h]                
0984  mov     ax,[bp+6h]                      
0987  push    ax                              
0988  mov     dx,[bp+8h]                      
098b  add     ax,[bp+4h]                      
098e  push    dx                              
098f  push    ax                              
0990  call far sub_0c4a                       
0995  mov     sp,bp                           
0997  pop     bp                              
0998  ret     6h                              
099b  nop                                     
099c  inc     bp                              
099d  push    bp                              
099e  mov     bp,sp                           
09a0  push    ds                              
09a1  push    es                              
09a2  push    ax                              
09a3  push    bx                              
09a4  push    cx                              
09a5  push    dx                              
09a6  xor     ah,ah                           
09a8  add     ax,-1Ch                         
09ab  push    ax                              
09ac  call far sub_0a8e                       
09b1  mov     ds,ax                           
09b3  pop     ax                              
09b4  call    0A18h                           
09b7  pop     dx                              
09b8  pop     cx                              
09b9  pop     bx                              
09ba  pop     ax                              
09bb  pop     es                              
09bc  pop     ds                              
09bd  pop     bp                              
09be  dec     bp                              
09bf  retf                                    

; ----- sub_09c0 -----
09c0  mov     ax,ds                           
09c2  nop                                     
09c3  inc     bp                              
09c4  push    bp                              
09c5  mov     bp,sp                           
09c7  push    ds                              
09c8  mov     ds,ax                           
09ca  push    si                              
09cb  push    di                              
09cc  push    ds                              
09cd  pop     es                              
09ce  mov     dx,[bp+6h]                      
09d1  mov     si,2D4h                         
09d4  lodsw                                   
09d5  cmp     ax,dx                           
09d7  je      9E9h                            
09d9  inc     ax                              
09da  xchg    ax,si                           
09db  je      9E9h                            
09dd  xchg    ax,di                           
09de  xor     ax,ax                           
09e0  mov     cx,0FFFFh                       
09e3  repne   scasb                           
09e5  mov     si,di                           
09e7  jmp     9D4h                            
09e9  xchg    ax,si                           
09ea  pop     di                              
09eb  pop     si                              
09ec  sub     bp,2h                           
09ef  mov     sp,bp                           
09f1  pop     ds                              
09f2  pop     bp                              
09f3  dec     bp                              
09f4  retf    2h                              

; ----- sub_09f7 -----
09f7  mov     ax,ds                           
09f9  nop                                     
09fa  inc     bp                              
09fb  push    bp                              
09fc  mov     bp,sp                           
09fe  push    ds                              
09ff  mov     ds,ax                           
0a01  push    di                              
0a02  pop     di                              
0a03  sub     bp,2h                           
0a06  mov     sp,bp                           
0a08  pop     ds                              
0a09  pop     bp                              
0a0a  dec     bp                              
0a0b  retf    2h                              
0a0e  call far sub_0a8e                       
0a13  mov     ds,ax                           
0a15  mov     ax,3h                           

; ----- sub_0a18 -----
0a18  push    ax                              
0a19  push    ax                              
0a1a  push    cs                              
0a1b  call    270h                            
0a1e  push    cs                              
0a1f  call    9F7h                            
0a22  push    cs                              
0a23  call    9C0h                            
0a26  xor     bx,bx                           
0a28  or      ax,ax                           
0a2a  je      0A49h                           
0a2c  mov     di,ax                           
0a2e  mov     ax,9h                           
0a31  cmp     byte ptr [di],4Dh               
0a34  jne     0A39h                           
0a36  mov     ax,0Fh                          
0a39  add     di,ax                           
0a3b  push    di                              
0a3c  push    ds                              
0a3d  pop     es                              
0a3e  mov     al,0Dh                          
0a40  mov     cx,22h                          
0a43  repne   scasb                           
0a45  mov     [di-1h],bl                      
0a48  pop     ax                              
0a49  push    bx                              
0a4a  push    ds                              
0a4b  push    ax                              
0a4c  call far KERNEL.FATALAPPEXIT            
0a51  mov     ax,0FFh                         
0a54  push    ax                              
0a55  call far KERNEL.FATALEXIT               
0a5a  mov     ax,2h                           
0a5d  jmp     0A18h                           

; ----- sub_0a60 -----
0a60  push    bp                              
0a61  mov     bp,sp                           
0a63  push    bx                              
0a64  push    es                              
0a65  push    cx                              
0a66  mov     cx,1000h                        
0a69  xchg    cx,[1EAh]                       
0a6d  push    cx                              
0a6e  push    ax                              
0a6f  call far sub_10e9                       
0a74  pop     bx                              
0a75  pop     [1EAh]                          
0a79  pop     cx                              
0a7a  mov     bx,dx                           
0a7c  or      bx,ax                           
0a7e  je      0A84h                           
0a80  pop     es                              
0a81  pop     bx                              
0a82  jmp     0A89h                           
0a84  mov     ax,cx                           
0a86  jmp     0A18h                           
0a89  mov     sp,bp                           
0a8b  pop     bp                              
0a8c  ret                                     
0a8d  add     [bx+si],al                      

; ----- sub_0a8e -----
0a8e  cmp     byte ptr cs:[0E82h],0B8h        
0a94  je      0A99h                           
0a96  mov     ax,ss                           
0a98  retf                                    
0a99  mov     ax,cs:[0E83h]                   
0a9d  retf                                    

; ----- sub_0a9e -----
0a9e  ret                                     
0a9f  add     [bx+si],al                      

; ----- sub_0aa0 -----
0aa0  inc     bp                              
0aa1  push    bp                              
0aa2  mov     bp,sp                           
0aa4  push    ds                              
0aa5  push    di                              
0aa6  push    si                              
0aa7  jmp     0AADh                           
0aa9  nop                                     
0aaa  inc     word ptr [bp+6h]                
0aad  les     bx,[bp+6h]                      
0ab0  mov     al,es:[bx]                      
0ab3  cbw                                     
0ab4  mov     bx,ax                           
0ab6  test    byte ptr [bx+0C3h],8h           
0abb  jne     0AAAh                           
0abd  xor     ax,ax                           
0abf  push    ax                              
0ac0  push    ax                              
0ac1  push    es                              
0ac2  push    word ptr [bp+6h]                
0ac5  call far sub_0e96                       
0aca  add     sp,4h                           
0acd  push    ax                              
0ace  push    word ptr [bp+8h]                
0ad1  push    word ptr [bp+6h]                
0ad4  call far sub_1064                       
0ad9  add     sp,0Ah                          
0adc  add     ax,8h                           
0adf  mov     bx,650h                         
0ae2  push    ds                              
0ae3  mov     di,bx                           
0ae5  mov     si,ax                           
0ae7  push    ds                              
0ae8  pop     es                              
0ae9  mov     ds,dx                           
0aeb  movsw                                   
0aec  movsw                                   
0aed  movsw                                   
0aee  movsw                                   
0aef  pop     ds                              
0af0  mov     ax,bx                           
0af2  mov     dx,ds                           
0af4  pop     si                              
0af5  pop     di                              
0af6  lea     sp,[bp-2h]                      
0af9  pop     ds                              
0afa  pop     bp                              
0afb  dec     bp                              
0afc  retf                                    
0afd  nop                                     

; ----- sub_0afe -----
0afe  inc     bp                              
0aff  push    bp                              
0b00  mov     bp,sp                           
0b02  push    ds                              
0b03  sub     sp,0Ah                          
0b06  les     bx,[bp+0Ch]                     
0b09  mov     ax,es:[bx+6h]                   
0b0d  mov     dx,es:[bx+8h]                   
0b11  mov     [bp-0Ah],ax                     
0b14  mov     [bp-8h],dx                      
0b17  les     bx,[bp+6h]                      
0b1a  mov     byte ptr es:[bx],30h            
0b1e  lea     ax,[bx+1h]                      
0b21  mov     [bp-6h],ax                      
0b24  mov     [bp-4h],es                      
0b27  jmp     0B54h                           
0b29  nop                                     
0b2a  les     bx,[bp-0Ah]                     
0b2d  cmp     byte ptr es:[bx],0h             
0b31  je      0B40h                           
0b33  mov     al,es:[bx]                      
0b36  cbw                                     
0b37  mov     [bp-0Ch],ax                     
0b3a  inc     word ptr [bp-0Ah]               
0b3d  jmp     0B45h                           
0b3f  nop                                     
0b40  mov     word ptr [bp-0Ch],30h           
0b45  mov     al,[bp-0Ch]                     
0b48  les     bx,[bp-6h]                      
0b4b  inc     word ptr [bp-6h]                
0b4e  mov     es:[bx],al                      
0b51  dec     word ptr [bp+0Ah]               
0b54  cmp     word ptr [bp+0Ah],0h            
0b58  jg      0B2Ah                           
0b5a  les     bx,[bp-6h]                      
0b5d  mov     byte ptr es:[bx],0h             
0b61  cmp     word ptr [bp+0Ah],0h            
0b65  jl      0B85h                           
0b67  les     bx,[bp-0Ah]                     
0b6a  cmp     byte ptr es:[bx],35h            
0b6e  jl      0B85h                           
0b70  jmp     0B76h                           
0b72  mov     byte ptr es:[bx],30h            
0b76  dec     word ptr [bp-6h]                
0b79  les     bx,[bp-6h]                      
0b7c  cmp     byte ptr es:[bx],39h            
0b80  je      0B72h                           
0b82  inc     byte ptr es:[bx]                
0b85  les     bx,[bp+6h]                      
0b88  cmp     byte ptr es:[bx],31h            
0b8c  jne     0B98h                           
0b8e  les     bx,[bp+0Ch]                     
0b91  inc     word ptr es:[bx+2h]             
0b95  jmp     0BA4h                           
0b97  nop                                     
0b98  lea     ax,[bx+1h]                      
0b9b  push    es                              
0b9c  push    ax                              
0b9d  push    es                              
0b9e  push    bx                              
0b9f  call far sub_0bc6                       
0ba4  lea     sp,[bp-2h]                      
0ba7  pop     ds                              
0ba8  pop     bp                              
0ba9  dec     bp                              
0baa  retf                                    
0bab  nop                                     

; ----- sub_0bac -----
0bac  push    bp                              
0bad  mov     bp,sp                           
0baf  mov     dx,di                           
0bb1  les     di,[bp+6h]                      
0bb4  xor     ax,ax                           
0bb6  mov     cx,0FFFFh                       
0bb9  repne   scasb                           
0bbb  not     cx                              
0bbd  jne     0BC0h                           
0bbf  dec     cx                              
0bc0  xchg    ax,cx                           
0bc1  mov     di,dx                           
0bc3  pop     bp                              
0bc4  retf                                    
0bc5  add     [bx+si],al                      

; ----- sub_0bc6 -----
0bc6  push    bp                              
0bc7  mov     bp,sp                           
0bc9  mov     dx,di                           
0bcb  mov     bx,si                           
0bcd  push    ds                              
0bce  lds     si,[bp+0Ah]                     
0bd1  mov     di,si                           
0bd3  mov     ax,ds                           
0bd5  mov     es,ax                           
0bd7  xor     ax,ax                           
0bd9  mov     cx,0FFFFh                       
0bdc  repne   scasb                           
0bde  not     cx                              
0be0  les     di,[bp+6h]                      
0be3  mov     ax,di                           
0be5  je      0BEBh                           
0be7  movsw                                   
0be8  dec     cx                              
0be9  jmp     0BF1h                           
0beb  test    al,1h                           
0bed  je      0BF1h                           
0bef  movsb                                   
0bf0  dec     cx                              
0bf1  shr     cx,1                            
0bf3  rep     movsw                           
0bf5  adc     cx,cx                           
0bf7  rep     movsb                           
0bf9  mov     si,bx                           
0bfb  mov     di,dx                           
0bfd  pop     ds                              
0bfe  mov     dx,es                           
0c00  pop     bp                              
0c01  retf                                    

; ----- sub_0c02 -----
0c02  push    bp                              
0c03  mov     bp,sp                           
0c05  mov     cx,[bp+0Ch]                     
0c08  jcxz    0C42h                           
0c0a  push    di                              
0c0b  les     di,[bp+6h]                      
0c0e  mov     dx,di                           
0c10  neg     dx                              
0c12  je      0C20h                           
0c14  sub     dx,cx                           
0c16  sbb     bx,bx                           
0c18  and     dx,bx                           
0c1a  add     dx,cx                           
0c1c  xchg    dx,cx                           
0c1e  sub     dx,cx                           
0c20  mov     ax,[bp+0Ah]                     
0c23  mov     ah,al                           
0c25  shr     cx,1                            
0c27  rep     stosw                           
0c29  adc     cx,cx                           
0c2b  rep     stosb                           
0c2d  xchg    dx,cx                           
0c2f  jcxz    0C41h                           
0c31  mov     bx,es                           
0c33  add     bx,0FFFFh                       
0c37  mov     es,bx                           
0c39  shr     cx,1                            
0c3b  rep     stosw                           
0c3d  adc     cx,cx                           
0c3f  rep     stosb                           
0c41  pop     di                              
0c42  mov     ax,[bp+6h]                      
0c45  mov     dx,[bp+8h]                      
0c48  pop     bp                              
0c49  retf                                    

; ----- sub_0c4a -----
0c4a  push    bp                              
0c4b  mov     bp,sp                           
0c4d  mov     cx,[bp+0Eh]                     
0c50  push    ds                              
0c51  push    di                              
0c52  push    si                              
0c53  or      cx,cx                           
0c55  jne     0C5Ah                           
0c57  jmp     0D09h                           
0c5a  lds     si,[bp+0Ah]                     
0c5d  les     di,[bp+6h]                      
0c60  push    ds                              
0c61  push    si                              
0c62  push    es                              
0c63  push    di                              
0c64  call far sub_0eb0                       
0c69  mov     cx,[bp+0Eh]                     
0c6c  or      dx,dx                           
0c6e  js      0CC7h                           
0c70  sub     ax,cx                           
0c72  sbb     dx,0h                           
0c75  jae     0CC7h                           
0c77  dec     cx                              
0c78  add     si,cx                           
0c7a  jae     0C83h                           
0c7c  mov     ax,ds                           
0c7e  add     ax,0C35h                        
0c81  mov     ds,ax                           
0c83  add     di,cx                           
0c85  jae     0C8Eh                           
0c87  mov     ax,es                           
0c89  add     ax,0C7Fh                        
0c8c  mov     es,ax                           
0c8e  inc     cx                              
0c8f  mov     ax,cx                           
0c91  dec     ax                              
0c92  sub     ax,di                           
0c94  sbb     bx,bx                           
0c96  and     ax,bx                           
0c98  add     ax,di                           
0c9a  sub     ax,si                           
0c9c  sbb     bx,bx                           
0c9e  and     ax,bx                           
0ca0  add     ax,si                           
0ca2  inc     ax                              
0ca3  xchg    ax,cx                           
0ca4  sub     ax,cx                           
0ca6  std                                     
0ca7  rep     movsb                           
0ca9  cld                                     
0caa  xchg    ax,cx                           
0cab  jcxz    0D09h                           
0cad  cmp     si,-1h                          
0cb0  jne     0CB9h                           
0cb2  mov     ax,ds                           
0cb4  sub     ax,0C8Ah                        
0cb7  mov     ds,ax                           
0cb9  cmp     di,-1h                          
0cbc  jne     0C8Fh                           
0cbe  mov     ax,es                           
0cc0  sub     ax,0CB5h                        
0cc3  mov     es,ax                           
0cc5  jmp     0C8Fh                           
0cc7  mov     ax,cx                           
0cc9  dec     ax                              
0cca  mov     dx,di                           
0ccc  not     dx                              
0cce  sub     ax,dx                           
0cd0  sbb     bx,bx                           
0cd2  and     ax,bx                           
0cd4  add     ax,dx                           
0cd6  mov     dx,si                           
0cd8  not     dx                              
0cda  sub     ax,dx                           
0cdc  sbb     bx,bx                           
0cde  and     ax,bx                           
0ce0  add     ax,dx                           
0ce2  inc     ax                              
0ce3  xchg    ax,cx                           
0ce4  sub     ax,cx                           
0ce6  shr     cx,1                            
0ce8  rep     movsw                           
0cea  adc     cx,cx                           
0cec  rep     movsb                           
0cee  xchg    ax,cx                           
0cef  jcxz    0D09h                           
0cf1  or      si,si                           
0cf3  jne     0CFCh                           
0cf5  mov     ax,ds                           
0cf7  add     ax,0CC1h                        
0cfa  mov     ds,ax                           
0cfc  or      di,di                           
0cfe  jne     0CC7h                           
0d00  mov     ax,es                           
0d02  add     ax,0CF8h                        
0d05  mov     es,ax                           
0d07  jmp     0CC7h                           
0d09  mov     ax,[bp+6h]                      
0d0c  mov     dx,[bp+8h]                      
0d0f  pop     si                              
0d10  pop     di                              
0d11  pop     ds                              
0d12  pop     bp                              
0d13  retf                                    

; ----- sub_0d14 -----
0d14  mov     ax,ds                           
0d16  nop                                     
0d17  inc     bp                              
0d18  push    bp                              
0d19  mov     bp,sp                           
0d1b  push    ds                              
0d1c  mov     ds,ax                           
0d1e  push    si                              
0d1f  push    di                              
0d20  cld                                     
0d21  mov     ax,ds                           
0d23  mov     es,ax                           
0d25  lea     si,[bp+6h]                      
0d28  mov     di,1CEh                         
0d2b  movsw   ss:                             
0d2d  movsw   ss:                             
0d2f  movsw   ss:                             
0d31  movsw   ss:                             
0d33  mov     si,1CEh                         
0d36  push    bp                              
0d37  call    0F1Eh                           
0d3a  pop     bp                              
0d3b  mov     di,1D6h                         
0d3e  mov     cx,ax                           
0d40  lodsb                                   
0d41  cbw                                     
0d42  xchg    ax,cx                           
0d43  rep     movsb                           
0d45  xchg    ax,cx                           
0d46  stosb                                   
0d47  mov     di,1C4h                         
0d4a  xor     bh,bh                           
0d4c  mov     [di],bx                         
0d4e  mov     [di+2h],dx                      
0d51  mov     [di+4h],cx                      
0d54  mov     word ptr [di+6h],1D6h           
0d59  mov     [di+8h],ds                      
0d5c  mov     dx,ds                           
0d5e  mov     ax,di                           
0d60  pop     di                              
0d61  pop     si                              
0d62  lea     sp,[bp-2h]                      
0d65  pop     ds                              
0d66  pop     bp                              
0d67  dec     bp                              
0d68  retf                                    
0d69  add     [bx+di+57h],dl                  
0d6c  test    byte ptr [bx+2h],1h             
0d70  je      0DDAh                           
0d72  call    0E61h                           
0d75  mov     di,si                           
0d77  mov     ax,[si]                         
0d79  test    al,1h                           
0d7b  je      0D80h                           
0d7d  sub     cx,ax                           
0d7f  dec     cx                              
0d80  inc     cx                              
0d81  inc     cx                              
0d82  mov     si,[bx+4h]                      
0d85  or      si,si                           
0d87  je      0DDAh                           
0d89  add     cx,si                           
0d8b  jae     0D96h                           
0d8d  xor     ax,ax                           
0d8f  mov     dx,0FFF0h                       
0d92  jcxz    0DC9h                           
0d94  jmp     0DDAh                           
0d96  call far sub_0a8e                       
0d9b  mov     es,ax                           
0d9d  mov     ax,es:[1EAh]                    
0da1  cmp     ax,1000h                        
0da4  je      0DBCh                           
0da6  mov     dx,8000h                        
0da9  cmp     dx,ax                           
0dab  jb      0DB3h                           
0dad  shr     dx,1                            
0daf  jne     0DA9h                           
0db1  jmp     0DD5h                           
0db3  cmp     dx,8h                           
0db6  jb      0DD5h                           
0db8  shl     dx,1                            
0dba  mov     ax,dx                           
0dbc  dec     ax                              
0dbd  mov     dx,ax                           
0dbf  add     ax,cx                           
0dc1  jae     0DC5h                           
0dc3  xor     ax,ax                           
0dc5  not     dx                              
0dc7  and     ax,dx                           
0dc9  push    dx                              
0dca  call    0DFBh                           
0dcd  pop     dx                              
0dce  jae     0DDDh                           
0dd0  cmp     dx,-10h                         
0dd3  je      0DDAh                           
0dd5  mov     ax,10h                          
0dd8  jmp     0DBCh                           
0dda  stc                                     
0ddb  jmp     0DF8h                           
0ddd  mov     dx,ax                           
0ddf  sub     dx,[bx+4h]                      
0de2  mov     [bx+4h],ax                      
0de5  mov     [bx+0Ah],di                     
0de8  mov     si,[bx+0Ch]                     
0deb  dec     dx                              
0dec  mov     [si],dx                         
0dee  inc     dx                              
0def  add     si,dx                           
0df1  mov     word ptr [si],0FFFEh            
0df5  mov     [bx+0Ch],si                     
0df8  pop     di                              
0df9  pop     cx                              
0dfa  ret                                     

; ----- sub_0dfb -----
0dfb  mov     dx,ax                           
0dfd  test    byte ptr [bx+2h],4h             
0e01  je      0E05h                           
0e03  jmp     0E56h                           
0e05  push    dx                              
0e06  push    cx                              
0e07  push    bx                              
0e08  mov     si,[bx+6h]                      
0e0b  mov     bx,cs:[10h]                     
0e10  xor     cx,cx                           
0e12  or      dx,dx                           
0e14  jne     0E1Dh                           
0e16  test    bx,10h                          
0e1a  jne     0E5Ch                           
0e1c  inc     cx                              
0e1d  mov     ax,2002h                        
0e20  test    bx,1h                           
0e24  jne     0E29h                           
0e26  mov     ax,2020h                        
0e29  push    si                              
0e2a  push    cx                              
0e2b  push    dx                              
0e2c  push    ax                              
0e2d  call far KERNEL.GLOBALREALLOC           
0e32  or      ax,ax                           
0e34  je      0E5Ch                           
0e36  cmp     ax,si                           
0e38  jne     0E56h                           
0e3a  push    si                              
0e3b  call far KERNEL.GLOBALSIZE              
0e40  or      dx,ax                           
0e42  je      0E56h                           
0e44  pop     bx                              
0e45  pop     cx                              
0e46  pop     dx                              
0e47  mov     ax,dx                           
0e49  test    byte ptr [bx+2h],4h             
0e4d  je      0E53h                           
0e4f  dec     dx                              
0e50  mov     [bx-2h],dx                      
0e53  clc                                     
0e54  jmp     0E60h                           
0e56  mov     ax,12h                          
0e59  jmp     0A18h                           
0e5c  pop     bx                              
0e5d  pop     cx                              
0e5e  pop     dx                              
0e5f  stc                                     
0e60  ret                                     

; ----- sub_0e61 -----
0e61  push    di                              
0e62  mov     si,[bx+0Ah]                     
0e65  cmp     si,[bx+0Ch]                     
0e68  jne     0E6Dh                           
0e6a  mov     si,[bx+8h]                      
0e6d  lodsw                                   
0e6e  cmp     ax,-2h                          
0e71  je      0E7Bh                           
0e73  mov     di,si                           
0e75  and     al,0FEh                         
0e77  add     si,ax                           
0e79  jmp     0E6Dh                           
0e7b  dec     di                              
0e7c  dec     di                              
0e7d  mov     si,di                           
0e7f  pop     di                              
0e80  ret                                     
0e81  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
0e82  mov     ax,ds                           
0e84  nop                                     
0e85  inc     bp                              
0e86  push    bp                              
0e87  mov     bp,sp                           
0e89  push    ds                              
0e8a  mov     ds,ax                           
0e8c  xor     ax,ax                           
0e8e  lea     sp,[bp-2h]                      
0e91  pop     ds                              
0e92  pop     bp                              
0e93  dec     bp                              
0e94  retf                                    
0e95  nop                                     

; ----- sub_0e96 -----
0e96  push    bp                              
0e97  mov     bp,sp                           
0e99  mov     dx,di                           
0e9b  les     di,[bp+6h]                      
0e9e  xor     ax,ax                           
0ea0  mov     cx,0FFFFh                       
0ea3  repne   scasb                           
0ea5  not     cx                              
0ea7  jne     0EAAh                           
0ea9  dec     cx                              
0eaa  xchg    ax,cx                           
0eab  mov     di,dx                           
0ead  pop     bp                              
0eae  retf                                    
0eaf  add     [bx+si],al                      

; ----- sub_0eb0 -----
0eb0  push    bp                              
0eb1  mov     bp,sp                           
0eb3  push    bx                              
0eb4  push    cx                              
0eb5  mov     ax,[bp+6h]                      
0eb8  mov     dx,[bp+8h]                      
0ebb  mov     bx,[bp+0Ch]                     
0ebe  mov     cx,0FFFFh                       
0ec1  shr     dx,cl                           
0ec3  shr     bx,cl                           
0ec5  sub     ax,[bp+0Ah]                     
0ec8  sbb     dx,bx                           
0eca  pop     cx                              
0ecb  pop     bx                              
0ecc  pop     bp                              
0ecd  retf    8h                              
0ed0  cld                                     
0ed2  ???                                     
0ed4  ???                                     
0ed6  ???                                     
0ed8  ???                                     
0eda  int     0CCh                            
0edc  int 3                                   
0edd  int 3                                   
0ede  int 3                                   
0edf  int 3                                   
0ee0  int 3                                   
0ee1  int 3                                   
0ee2  sti                                     
0ee3  aas                                     
0ee4  mov     si,1F8h                         
0ee7  mov     word ptr [si],3001h             
0eeb  xor     ax,ax                           
0eed  mov     dx,ax                           
0eef  inc     ax                              
0ef0  mov     bl,20h                          
0ef2  pop     es                              
0ef3  ret                                     
0ef4  or      dx,dx                           
0ef6  jne     0F02h                           
0ef8  cmp     cx,-8h                          
0efb  je      0F14h                           
0efd  and     cl,0Fh                          
0f00  je      0F0Fh                           
0f02  mov     si,210h                         
0f05  test    cl,8h                           
0f08  jne     0F17h                           
0f0a  mov     si,209h                         
0f0d  jmp     0F17h                           
0f0f  mov     si,217h                         
0f12  jmp     0F17h                           
0f14  mov     si,21Dh                         
0f17  mov     dx,1h                           
0f1a  pop     es                              
0f1b  xor     ax,ax                           
0f1d  ret                                     

; ----- sub_0f1e -----
0f1e  push    es                              
0f1f  mov     ax,ds                           
0f21  mov     es,ax                           
0f23  cld                                     
0f24  mov     di,1ECh                         
0f27  push    di                              
0f28  mov     cx,4h                           
0f2b  rep     movsw                           
0f2d  pop     si                              
0f2e  mov     cx,[si+6h]                      
0f31  and     byte ptr [si+7h],7Fh            
0f35  mov     bl,20h                          
0f37  mov     ax,[si]                         
0f39  or      ax,[si+2h]                      
0f3c  or      ax,[si+4h]                      
0f3f  mov     dx,ax                           
0f41  or      ax,[si+6h]                      
0f44  je      0EE4h                           
0f46  or      cx,cx                           
0f48  jns     0F4Ch                           
0f4a  mov     bl,2Dh                          
0f4c  not     cx                              
0f4e  test    cx,7FF0h                        
0f52  not     cx                              
0f54  je      0EF4h                           
0f56  push    bx                              
0f57  wait                                    
0f58  fstcw   word ptr [225h]                 
0f5c  nop                                     
0f5d  wait                                    
0f5e  push    ax                              
0f5f  mov     al,[225h]                       
0f62  mov     [227h],al                       
0f65  pop     ax                              
0f66  wait                                    
0f67  fldcw   word ptr [227h]                 
0f6b  wait                                    
0f6c  fld     qword ptr [si]                  
0f6e  wait                                    
0f6f  fld     st(0),st(0)                     
0f71  wait                                    
0f72  fstp    tword ptr [si]                  
0f74  nop                                     
0f75  wait                                    
0f76  xor     di,di                           
0f78  mov     si,1F3h                         
0f7b  lodsb                                   
0f7c  mov     bh,al                           
0f7e  lodsw                                   
0f7f  mov     cx,ax                           
0f81  mov     dx,4D10h                        
0f84  mul     dx                              
0f86  xchg    ax,cx                           
0f87  mov     al,4Dh                          
0f89  mul     ah                              
0f8b  add     cx,ax                           
0f8d  adc     dx,di                           
0f8f  mov     al,9Ah                          
0f91  mul     bh                              
0f93  add     cx,ax                           
0f95  adc     di,dx                           
0f97  sub     cx,12F4h                        
0f9b  sbb     di,1343h                        
0f9f  push    di                              
0fa0  neg     di                              
0fa2  mov     si,1ECh                         
0fa5  call    130Ch                           
0fa8  mov     bx,0ED0h                        
0fab  pop     di                              
0fac  wait                                    
0fad  fld     tword ptr cs:[bx]               
0fb0  wait                                    
0fb1  fcomp   st(0),st(1)                     
0fb3  wait                                    
0fb4  fstsw   word ptr [223h]                 
0fb8  nop                                     
0fb9  wait                                    
0fba  test    byte ptr [224h],41h             
0fbf  je      0FCCh                           
0fc1  inc     di                              
0fc2  mov     bx,0EDAh                        
0fc5  wait                                    
0fc6  fld     tword ptr cs:[bx]               
0fc9  wait                                    
0fca  fmulp   st(1)                           
0fcc  push    di                              
0fcd  wait                                    
0fce  fstp    tword ptr [si]                  
0fd0  wait                                    
0fd1  fldcw   word ptr [225h]                 
0fd5  nop                                     
0fd6  wait                                    
0fd7  lodsw                                   
0fd8  xchg    ax,di                           
0fd9  lodsw                                   
0fda  xchg    ax,bp                           
0fdb  lodsw                                   
0fdc  xchg    ax,dx                           
0fdd  lodsw                                   
0fde  xchg    ax,bx                           
0fdf  lodsw                                   
0fe0  xchg    ax,cx                           
0fe1  sub     cx,3FFEh                        
0fe5  neg     cx                              
0fe7  mov     si,di                           
0fe9  xor     ax,ax                           
0feb  jcxz    0FF9h                           
0fed  shr     bx,1                            
0fef  rcr     dx,1                            
0ff1  rcr     bp,1                            
0ff3  rcr     si,1                            
0ff5  rcr     ah,1                            
0ff7  loop    0FEDh                           
0ff9  adc     si,39Ah                         
0ffd  adc     bp,cx                           
0fff  adc     dx,cx                           
1001  adc     bx,cx                           
1003  mov     di,1F9h                         
1006  mov     cx,10h                          
1009  xor     al,al                           
100b  push    cx                              
100c  push    bx                              
100d  push    dx                              
100e  push    bp                              
100f  push    si                              
1010  push    ax                              
1011  shl     ah,1                            
1013  rcl     si,1                            
1015  rcl     bp,1                            
1017  rcl     dx,1                            
1019  rcl     bx,1                            
101b  rcl     al,1                            
101d  shl     ah,1                            
101f  rcl     si,1                            
1021  rcl     bp,1                            
1023  rcl     dx,1                            
1025  rcl     bx,1                            
1027  rcl     al,1                            
1029  pop     cx                              
102a  adc     ah,ch                           
102c  pop     cx                              
102d  adc     si,cx                           
102f  pop     cx                              
1030  adc     bp,cx                           
1032  pop     cx                              
1033  adc     dx,cx                           
1035  pop     cx                              
1036  adc     bx,cx                           
1038  adc     al,0h                           
103a  shl     ah,1                            
103c  rcl     si,1                            
103e  rcl     bp,1                            
1040  rcl     dx,1                            
1042  rcl     bx,1                            
1044  rcl     al,1                            
1046  pop     cx                              
1047  add     al,30h                          
1049  stosb                                   
104a  loop    1009h                           
104c  dec     di                              
104d  dec     cx                              
104e  mov     al,30h                          
1050  std                                     
1051  rep     scasb                           
1053  cld                                     
1054  add     cx,12h                          
1057  mov     si,1F8h                         
105a  mov     [si],cl                         
105c  mov     ax,1h                           
105f  pop     dx                              
1060  pop     bx                              
1061  pop     es                              
1062  ret                                     
1063  add     [bx+si],al                      

; ----- sub_1064 -----
1064  mov     ax,ds                           
1066  nop                                     
1067  inc     bp                              
1068  push    bp                              
1069  mov     bp,sp                           
106b  push    ds                              
106c  mov     ds,ax                           
106e  sub     sp,6h                           
1071  mov     ax,646h                         
1074  push    ds                              
1075  push    ax                              
1076  lea     cx,[bp-6h]                      
1079  push    ss                              
107a  push    cx                              
107b  push    word ptr [bp+8h]                
107e  push    word ptr [bp+6h]                
1081  xor     dx,dx                           
1083  push    dx                              
1084  call    134Ah                           
1087  mov     [bp-8h],ax                      
108a  mov     ax,[bp-6h]                      
108d  sub     ax,[bp+6h]                      
1090  mov     [640h],ax                       
1093  mov     word ptr [63Eh],0h              
1099  test    byte ptr [bp-8h],4h             
109d  je      10A5h                           
109f  mov     word ptr [63Eh],200h            
10a5  test    byte ptr [bp-8h],2h             
10a9  je      10B0h                           
10ab  or      byte ptr [63Eh],1h              
10b0  test    byte ptr [bp-8h],1h             
10b4  je      10BBh                           
10b6  or      byte ptr [63Fh],1h              
10bb  mov     ax,63Eh                         
10be  mov     dx,ds                           
10c0  lea     sp,[bp-2h]                      
10c3  pop     ds                              
10c4  pop     bp                              
10c5  dec     bp                              
10c6  retf                                    
10c7  nop                                     
10c8  mov     ax,ds                           
10ca  nop                                     
10cb  inc     bp                              
10cc  push    bp                              
10cd  mov     bp,sp                           
10cf  push    ds                              
10d0  mov     ds,ax                           
10d2  push    si                              
10d3  les     si,[bp+6h]                      
10d6  mov     cx,es                           
10d8  jcxz    10DFh                           
10da  or      byte ptr es:[si-2h],1h          
10df  pop     si                              
10e0  sub     bp,2h                           
10e3  mov     sp,bp                           
10e5  pop     ds                              
10e6  pop     bp                              
10e7  dec     bp                              
10e8  retf                                    

; ----- sub_10e9 -----
10e9  mov     ax,ds                           
10eb  nop                                     
10ec  inc     bp                              
10ed  push    bp                              
10ee  mov     bp,sp                           
10f0  push    ds                              
10f1  mov     ds,ax                           
10f3  push    si                              
10f4  push    di                              
10f5  mov     cx,[bp+6h]                      
10f8  cmp     cx,-1Ah                         
10fb  ja      1166h                           
10fd  push    ds                              
10fe  mov     ax,[246h]                       
1101  or      ax,ax                           
1103  je      114Dh                           
1105  mov     di,1442h                        
1108  mov     si,[24Eh]                       
110c  lds     bx,[248h]                       
1110  push    ds                              
1111  push    si                              
1112  push    di                              
1113  call    di                              
1115  pop     di                              
1116  pop     si                              
1117  jae     1144h                           
1119  mov     dx,ds                           
111b  lds     bx,[bx+0Eh]                     
111e  cmp     dx,si                           
1120  jne     1111h                           
1122  pop     ax                              
1123  pop     ds                              
1124  push    ds                              
1125  les     si,[248h]                       
1129  mov     si,es:[si+14h]                  
112d  lds     bx,[244h]                       
1131  mov     dx,ds                           
1133  cmp     dx,ax                           
1135  jne     1110h                           
1137  pop     ds                              
1138  push    ds                              
1139  cmp     di,0D6Ah                        
113d  je      114Dh                           
113f  mov     di,0D6Ah                        
1142  jmp     1108h                           
1144  pop     si                              
1145  cmp     di,1442h                        
1149  je      115Ah                           
114b  jmp     1157h                           
114d  pop     es                              
114e  push    es                              
114f  mov     di,244h                         
1152  call    13B2h                           
1155  jb      1165h                           
1157  call    1442h                           
115a  pop     ds                              
115b  mov     [24Ah],dx                       
115f  mov     [248h],bx                       
1163  jmp     1185h                           
1165  pop     ds                              
1166  xor     ax,ax                           
1168  cwd                                     
1169  mov     cx,[238h]                       
116d  or      cx,[236h]                       
1171  je      1185h                           
1173  push    word ptr [bp+6h]                
1176  call    far ptr  [236h]                 
117a  add     sp,2h                           
117d  cwd                                     
117e  or      ax,ax                           
1180  je      1185h                           
1182  jmp     10F5h                           
1185  pop     di                              
1186  pop     si                              
1187  sub     bp,2h                           
118a  mov     sp,bp                           
118c  pop     ds                              
118d  pop     bp                              
118e  dec     bp                              
118f  retf                                    
1190  add     [bx+si],al                      
1192  add     [bx+si],al                      
1194  add     [bx+si],al                      
1196  add     [bx+si+4002h],ah                
119a  add     [bx+si],al                      
119c  add     [bx+si],al                      
119e  add     [bx+si],al                      
11a0  add     al,cl                           
11a2  add     ax,40h                          
11a5  add     [bx+si],al                      
11a7  add     [bx+si],al                      
11a9  add     [bx+si],al                      
11ab  cli                                     
11ac  or      [bx+si],al                      
11af  add     [bx+si],al                      
11b1  add     [bx+si],al                      
11b3  add     [bx+si-64h],al                  
11b6  or      al,40h                          
11b8  add     [bx+si],al                      
11ba  add     [bx+si],al                      
11bc  add     [bx+si],al                      
11be  push    ax                              
11bf  ret                                     
11c0  cmovo   ax,[bx+si]                      
11c3  add     [bx+si],al                      
11c5  add     [bx+si],al                      
11c7  add     [si],ah                         
11c9  hlt                                     
11ca  adc     al,[bx+si]                      
11cd  add     [bx+si],al                      
11cf  add     [bx+si],al                      
11d1  adc     byte ptr [bp+1698h],40h         
11d6  add     [bx+si],al                      
11d8  add     [bx+si],al                      
11da  add     [bx+si],ah                      
11dc  mov     sp,19BEh                        
11df  inc     ax                              
11e0  add     [bx+si],al                      
11e2  add     [si],al                         
11e4  mov     di,1BC9h                        
11e7  mov     ???,[si]                        
11e9  inc     ax                              
11ea  add     [bx+di-3313h],ah                
11ee  into                                    
11ef  sbb     ax,dx                           
11f1  ror     word ptr [bp+40h],cl            
11f4  sahf                                    
11f5  mov     ch,70h                          
11f7  sub     bp,[bx+si-3A53h]                
11fb  popf                                    
11fc  imul    ax,[bx+si-3h],0E525h            
1201  sbb     cl,[bp+194Fh]                   
1205  jmp     118Ah                           
1207  inc     ax                              
1208  xlat                                    
1209  xchg    ax,bp                           
120a  inc     bx                              
120b  push    cs                              
120c  add     ax,298Dh                        
120f  scasw                                   
1210  sahf                                    
1211  inc     ax                              
1212  mov     al,[0ED44h]                     
1215  adc     word ptr [bp+si],818Fh          
1219  cmp     byte ptr [bx+di-2AC0h],0A6h     
121e  iret                                    
121f  dec     word ptr [bx+di+1Fh]            
1222  js      11E6h                           
1224  rol     word ptr [bx+si-20h],cl         
1227  mov     cx,gs                           
1229  or      cl,47h                          
122c  mov     dx,0A893h                       
122f  inc     cx                              
1230  imul    dx,[di+27h],39h                 
1234  lea     si,di                           
1236  jo      1218h                           
1238  jl      127Ch                           
123a  mov     ds,si                           
123c  stc                                     
123d  popf                                    
123e  sti                                     
123f  jmp     12BFh                           
1241  stosb                                   
1242  push    cx                              
1243  inc     bx                              
1244  jbe     1229h                           
1246  int 3                                   
1247  repne   sub     [bx],bp                 
124a  test    [bx+di+4426h],al                
124e  int     0CCh                            
1250  int 3                                   
1251  int 3                                   
1252  int 3                                   
1253  int 3                                   
1254  int 3                                   
1255  int 3                                   
1256  sti                                     
1257  aas                                     
1258  or      dl,bh                           
125a  mov     [3D70h],ax                      
125d  or      dl,bh                           
125f  mov     [3FF8h],ax                      
1262  cmp     bx,di                           
1264  dec     di                              
1265  lea     dx,[bx+126Eh]                   
1269  xor     bp,3Fh                          
126c  sub     al,65h                          
126e  sbb     dx,sp                           
1270  pop     ax                              
1271  pop     ss                              
1272  mov     bh,0D1h                         
1274  ???                                     
1275  aas                                     
1276  and     ax,[si+1B47h]                   
127a  inc     di                              
127b  lodsb                                   
127c  lds     sp,[bx+3FEEh]                   
1280  mov     dh,69h                          
1282  insb                                    
1283  scasw                                   
1284  add     ax,37BDh                        
1287  xchg    ch,bl                           
1289  aas                                     
128a  mov     sp,7A42h                        
128d  in      ax,0D5h                         
128f  xchg    ax,sp                           
1290  mov     di,0E7D6h                       
1293  aas                                     
1294  std                                     
1295  into                                    
1296  popa                                    
1297  test    [bx+di],dl                      
1299  ja      1267h                           
129b  stosw                                   
129c  in      al,3Fh                          
129e  pop     bx                              
129f  loopz   12EEh                           
12a1  les     di,[bp-6A6Ch]                   
12a5  out     0C9h,al                         
12a7  aas                                     
12a8  push    bx                              
12a9  cmp     si,[di+44h]                     
12ac  int     14h                             
12ae  mov     si,0AF9Ah                       
12b1  aas                                     
12b2  mov     dx,3994h                        
12b5  inc     bp                              
12b6  lodsw                                   
12b7  push    ds                              
12b8  mov     cl,0CFh                         
12ba  xchg    ax,sp                           
12bb  aas                                     
12bc  mov     dl,0BCh                         
12bf  mov     dx,313Bh                        
12c2  popa                                    
12c3  mov     di,[bp+si+3Fh]                  
12c6  pop     cx                              
12c7  sar     word ptr [bp-4Fh],53h           
12cb  jl      12DFh                           
12cd  mov     bx,3F5Fh                        
12d0  das                                     
12d1  lea     ax,[92BEh]                      
12d5  test    [di],dx                         
12d7  sti                                     
12d8  inc     sp                              
12d9  aas                                     
12da  movsw                                   
12db  jmp     0B817h                          
12de  daa                                     
12df  jmp     3F2Ah:0A87Fh                    
12e4  mov     ax,[0BCE4h]                     
12e7  jl      1330h                           
12ea  rcr     ch,1                            
12ec  push    bp                              
12ed  push    es                              
12ef  int 3                                   
12f0  and     dx,[si+77h]                     
12f3  cmp     di,-6Fh                         
12f6  cmp     word ptr [di],193Ah             
12fa  jp      135Fh                           
12fc  and     ax,3143h                        
12ff  shr     byte ptr [si-2EC4h],38h         
1304  add     byte ptr [bx-69h],0B8h          
1308  add     ch,bh                           
130a  xlat                                    
130b  cmp     ax,[bx+si]                      

; ----- sub_130c -----
130c  mov     bx,1140h                        
130f  or      di,di                           
1311  jns     1318h                           
1313  mov     bx,11FEh                        
1316  neg     di                              
1318  push    di                              
1319  pop     di                              
131a  add     bx,46h                          
131d  or      di,di                           
131f  je      1348h                           
1321  mov     ax,di                           
1323  shr     di,1                            
1325  shr     di,1                            
1327  shr     di,1                            
1329  push    di                              
132a  and     ax,7h                           
132d  je      1319h                           
132f  push    bx                              
1330  shl     al,1                            
1332  mov     ah,al                           
1334  shl     al,1                            
1336  shl     al,1                            
1338  add     al,ah                           
133a  xor     ah,ah                           
133c  add     bx,ax                           
133e  wait                                    
133f  fld     tword ptr cs:[bx]               
1342  wait                                    
1343  fmulp   st(1)                           
1345  pop     bx                              
1346  jmp     1319h                           
1348  ret                                     
1349  add     [bx+si],al                      

; ----- sub_134a -----
134a  push    bp                              
134b  mov     bp,sp                           
134d  sub     sp,0Eh                          
1350  push    ss                              
1351  lea     ax,[bp-0Ah]                     
1354  push    ax                              
1355  push    word ptr [bp+0Ch]               
1358  push    word ptr [bp+0Ah]               
135b  push    word ptr [bp+8h]                
135e  push    word ptr [bp+6h]                
1361  push    word ptr [bp+4h]                
1364  call    14BEh                           
1367  wait                                    
1368  fstcw   word ptr [bp-0Eh]               
136b  wait                                    
136c  fld     tword ptr [bp-0Ah]              
136f  mov     bx,[bp-0Eh]                     
1372  or      bx,18h                          
1375  mov     [bp-0Ch],bx                     
1378  wait                                    
1379  fclex                                   
137b  les     bx,[bp+0Eh]                     
137e  wait                                    
137f  fldcw   word ptr [bp-0Ch]               
1382  wait                                    
1383  fstp    qword ptr es:[bx]               
1386  wait                                    
1387  fstsw   word ptr [bp-0Ch]               
138a  wait                                    
138b  fclex                                   
138d  wait                                    
138e  fldcw   word ptr [bp-0Eh]               
1391  or      ax,ax                           
1393  jne     13ACh                           
1395  mov     bx,[bp-0Ch]                     
1398  xor     ax,ax                           
139a  test    bx,18h                          
139e  je      13ACh                           
13a0  mov     ax,2h                           
13a3  test    bx,8h                           
13a7  jne     13ACh                           
13a9  mov     ax,1h                           
13ac  mov     sp,bp                           
13ae  pop     bp                              
13af  ret     0Eh                             

; ----- sub_13b2 -----
13b2  mov     dx,cx                           
13b4  add     dx,1019h                        
13b8  and     dx,0F000h                       
13bc  push    cx                              
13bd  push    es                              
13be  mov     bx,cs:[10h]                     
13c3  xor     cx,cx                           
13c5  or      dx,dx                           
13c7  jne     13D0h                           
13c9  test    bx,10h                          
13cd  jne     142Fh                           
13cf  inc     cx                              
13d0  push    bx                              
13d1  mov     ax,2002h                        
13d4  test    bx,1h                           
13d8  jne     13DDh                           
13da  mov     ax,2020h                        
13dd  push    ax                              
13de  push    cx                              
13df  push    dx                              
13e0  call far KERNEL.GLOBALALLOC             
13e5  pop     bx                              
13e6  or      ax,ax                           
13e8  je      142Fh                           
13ea  push    ax                              
13eb  test    bx,1h                           
13ef  je      1401h                           
13f1  push    ax                              
13f2  call far KERNEL.GLOBALLOCK              
13f7  or      ax,ax                           
13f9  jne     1429h                           
13fb  or      ax,dx                           
13fd  je      1429h                           
13ff  mov     ax,dx                           
1401  mov     ds,ax                           
1403  push    ax                              
1404  call far KERNEL.GLOBALSIZE              
1409  or      dx,ax                           
140b  je      1429h                           
140d  mov     dx,ax                           
140f  pop     ax                              
1410  pop     es                              
1411  pop     cx                              
1412  xor     bx,bx                           
1414  mov     [bx+6h],ax                      
1417  mov     ax,es:[di+0Ch]                  
141b  mov     [bx+2h],ax                      
141e  mov     ax,dx                           
1420  call    1750h                           
1423  call    1784h                           
1426  clc                                     
1427  jmp     1432h                           
1429  mov     ax,12h                          
142c  jmp     0A18h                           
142f  pop     es                              
1430  pop     cx                              
1431  stc                                     
1432  ret                                     
1433  add     [bx+si],al                      

; ----- sub_1434 -----
1434  push    bp                              
1435  mov     bp,sp                           
1437  mov     bx,244h                         
143a  push    ds                              
143b  pop     es                              
143c  call    1726h                           
143f  pop     bp                              
1440  ret                                     
1441  add     [bx+si],al                      

; ----- sub_1442 -----
1442  inc     cx                              
1443  and     cl,0FEh                         
1446  push    bx                              
1447  cld                                     
1448  mov     si,[bx+0Ah]                     
144b  mov     bx,[bx+0Ch]                     
144e  xor     di,di                           
1450  jmp     1475h                           
1452  mov     ax,bx                           
1454  pop     bx                              
1455  test    al,1h                           
1457  jne     149Bh                           
1459  push    bx                              
145a  mov     si,[bx+8h]                      
145d  mov     bx,[bx+0Ah]                     
1460  cmp     bx,si                           
1462  je      149Ah                           
1464  dec     bx                              
1465  xor     di,di                           
1467  jmp     1475h                           
1469  nop                                     
146a  lea     dx,[si-2h]                      
146d  cmp     dx,bx                           
146f  jae     1452h                           
1471  add     si,ax                           
1473  jb      1498h                           
1475  lodsw                                   
1476  test    al,1h                           
1478  je      146Ah                           
147a  mov     di,si                           
147c  dec     ax                              
147d  cmp     ax,cx                           
147f  jae     14A4h                           
1481  add     si,ax                           
1483  jb      1498h                           
1485  mov     dx,ax                           
1487  lodsw                                   
1488  test    al,1h                           
148a  je      146Ah                           
148c  add     ax,dx                           
148e  add     ax,2h                           
1491  mov     si,di                           
1493  mov     [si-2h],ax                      
1496  jmp     147Ch                           
1498  mov     ax,ax                           
149a  pop     bx                              
149b  mov     ax,[bx+8h]                      
149e  mov     [bx+0Ah],ax                     
14a1  stc                                     
14a2  jmp     14BDh                           
14a4  pop     bx                              
14a5  mov     [si-2h],cx                      
14a8  je      14B3h                           
14aa  add     di,cx                           
14ac  sub     ax,cx                           
14ae  dec     ax                              
14af  mov     [di],ax                         
14b1  sub     di,cx                           
14b3  add     di,cx                           
14b5  mov     [bx+0Ah],di                     
14b8  mov     ax,si                           
14ba  mov     dx,ds                           
14bc  clc                                     
14bd  ret                                     

; ----- sub_14be -----
14be  push    bp                              
14bf  mov     bp,sp                           
14c1  sub     sp,34h                          
14c4  push    si                              
14c5  push    di                              
14c6  push    ds                              
14c7  lds     si,[bp+6h]                      
14ca  xor     ax,ax                           
14cc  mov     [bp-0Eh],ax                     
14cf  mov     [bp-10h],ds                     
14d2  mov     [bp-12h],si                     
14d5  mov     [bp-14h],ax                     
14d8  mov     [bp-18h],ax                     
14db  mov     [bp-16h],ax                     
14de  mov     word ptr [bp-1Ah],19h           
14e3  push    ss                              
14e4  pop     es                              
14e5  lea     di,[bp-34h]                     
14e8  lodsb                                   
14e9  cmp     al,20h                          
14eb  je      14E8h                           
14ed  cmp     al,9h                           
14ef  je      14E8h                           
14f1  cmp     al,0Ah                          
14f3  je      14E8h                           
14f5  cmp     al,0Dh                          
14f7  je      14E8h                           
14f9  or      al,al                           
14fb  jne     1500h                           
14fd  jmp     16EFh                           
1500  cmp     al,2Bh                          
1502  je      150Dh                           
1504  cmp     al,2Dh                          
1506  jne     150Eh                           
1508  mov     word ptr [bp-14h],8000h         
150d  lodsb                                   
150e  cmp     al,30h                          
1510  jb      1516h                           
1512  cmp     al,39h                          
1514  jbe     1526h                           
1516  cmp     al,2Eh                          
1518  jne     14FDh                           
151a  lodsb                                   
151b  cmp     al,30h                          
151d  jb      14FDh                           
151f  cmp     al,39h                          
1521  ja      14FDh                           
1523  jmp     153Ah                           
1525  lodsb                                   
1526  cmp     al,30h                          
1528  je      1525h                           
152a  or      al,al                           
152c  jne     1535h                           
152e  dec     si                              
152f  mov     [bp-12h],si                     
1532  jmp     16F3h                           
1535  cmp     al,2Eh                          
1537  jne     154Bh                           
1539  lodsb                                   
153a  dec     word ptr [bp-16h]               
153d  cmp     al,30h                          
153f  je      1539h                           
1541  inc     word ptr [bp-16h]               
1544  or      al,al                           
1546  je      152Eh                           
1548  jmp     1575h                           
154a  lodsb                                   
154b  cmp     al,30h                          
154d  jb      1570h                           
154f  cmp     al,39h                          
1551  ja      1570h                           
1553  sub     al,30h                          
1555  stosb                                   
1556  dec     word ptr [bp-1Ah]               
1559  jne     154Ah                           
155b  lodsb                                   
155c  inc     word ptr [bp-16h]               
155f  cmp     al,30h                          
1561  jb      1567h                           
1563  cmp     al,39h                          
1565  jbe     155Bh                           
1567  dec     word ptr [bp-16h]               
156a  cmp     al,2Eh                          
156c  je      1588h                           
156e  jmp     1591h                           
1570  cmp     al,2Eh                          
1572  jne     1591h                           
1574  lodsb                                   
1575  cmp     al,30h                          
1577  jb      1591h                           
1579  cmp     al,39h                          
157b  ja      1591h                           
157d  sub     al,30h                          
157f  stosb                                   
1580  dec     word ptr [bp-16h]               
1583  dec     word ptr [bp-1Ah]               
1586  jne     1574h                           
1588  lodsb                                   
1589  cmp     al,30h                          
158b  jb      1591h                           
158d  cmp     al,39h                          
158f  jbe     1588h                           
1591  neg     word ptr [bp-1Ah]               
1594  add     word ptr [bp-1Ah],19h           
1598  lea     bx,[si-1h]                      
159b  mov     [bp-12h],bx                     
159e  xor     bx,bx                           
15a0  cmp     al,45h                          
15a2  je      15B2h                           
15a4  cmp     al,65h                          
15a6  je      15B2h                           
15a8  cmp     al,44h                          
15aa  je      15B2h                           
15ac  cmp     al,64h                          
15ae  je      15B2h                           
15b0  jmp     1604h                           
15b2  lodsb                                   
15b3  cmp     al,2Bh                          
15b5  je      15C0h                           
15b7  cmp     al,2Dh                          
15b9  jne     15C1h                           
15bb  mov     word ptr [bp-18h],0FFFFh        
15c0  lodsb                                   
15c1  cmp     al,30h                          
15c3  jb      1604h                           
15c5  cmp     al,39h                          
15c7  ja      1604h                           
15c9  sub     ax,30h                          
15cc  mov     bx,ax                           
15ce  lodsb                                   
15cf  cmp     al,30h                          
15d1  jb      15F7h                           
15d3  cmp     al,39h                          
15d5  ja      15F7h                           
15d7  sub     al,30h                          
15d9  cmp     bx,666h                         
15dd  ja      15EBh                           
15df  shl     bx,1                            
15e1  add     ax,bx                           
15e3  shl     bx,1                            
15e5  shl     bx,1                            
15e7  add     bx,ax                           
15e9  jns     15CEh                           
15eb  mov     bx,3FFFh                        
15ee  lodsb                                   
15ef  cmp     al,30h                          
15f1  jb      15F7h                           
15f3  cmp     al,39h                          
15f5  jbe     15EEh                           
15f7  xor     bx,[bp-18h]                     
15fa  sub     bx,[bp-18h]                     
15fd  add     [bp-16h],bx                     
1600  dec     si                              
1601  mov     [bp-12h],si                     
1604  cmp     word ptr [bp-1Ah],0h            
1608  jne     160Dh                           
160a  jmp     16F3h                           
160d  mov     byte ptr es:[di],0h             
1611  dec     di                              
1612  cmp     word ptr [bp-1Ah],18h           
1616  jbe     162Fh                           
1618  mov     al,es:[di]                      
161b  mov     byte ptr es:[di],0h             
161f  dec     word ptr [bp-1Ah]               
1622  inc     word ptr [bp-16h]               
1625  dec     di                              
1626  cmp     al,5h                           
1628  jb      163Eh                           
162a  inc     byte ptr es:[di]                
162d  jmp     1644h                           
162f  cmp     word ptr [bp-16h],0h            
1633  je      1644h                           
1635  jmp     163Eh                           
1637  dec     di                              
1638  dec     word ptr [bp-1Ah]               
163b  inc     word ptr [bp-16h]               
163e  cmp     byte ptr es:[di],0h             
1642  je      1637h                           
1644  push    ss                              
1645  lea     ax,[bp-34h]                     
1648  push    ax                              
1649  push    word ptr [bp-1Ah]               
164c  lea     ax,[bp-0Ch]                     
164f  push    ax                              
1650  call    1CCCh                           
1653  mov     ax,[bp-16h]                     
1656  or      ax,ax                           
1658  je      1678h                           
165a  cmp     ax,1450h                        
165d  jl      1662h                           
165f  jmp     1705h                           
1662  cmp     ax,0EBB0h                       
1665  jg      166Ah                           
1667  jmp     16FFh                           
166a  push    ss                              
166b  lea     ax,[bp-0Ch]                     
166e  push    ax                              
166f  push    word ptr [bp-16h]               
1672  push    word ptr [bp+4h]                
1675  call    1A72h                           
1678  mov     ax,[bp-4h]                      
167b  mov     bx,[bp-6h]                      
167e  mov     cx,[bp-8h]                      
1681  mov     dx,[bp-0Ah]                     
1684  cmp     word ptr [bp-0Ch],8000h         
1689  jb      16A7h                           
168b  ja      1693h                           
168d  test    dx,1h                           
1691  je      16A7h                           
1693  add     dx,1h                           
1696  adc     cx,0h                           
1699  adc     bx,0h                           
169c  adc     ax,0h                           
169f  jae     16A7h                           
16a1  or      ah,80h                          
16a4  inc     word ptr [bp-2h]                
16a7  mov     si,[bp-2h]                      
16aa  cmp     si,7FFFh                        
16ae  jae     1705h                           
16b0  or      si,si                           
16b2  jne     16BEh                           
16b4  mov     si,ax                           
16b6  or      si,bx                           
16b8  or      si,cx                           
16ba  or      si,dx                           
16bc  je      16FFh                           
16be  lds     si,[bp+0Eh]                     
16c1  mov     [si+6h],ax                      
16c4  mov     [si+4h],bx                      
16c7  mov     [si+2h],cx                      
16ca  mov     [si],dx                         
16cc  mov     ax,[bp-2h]                      
16cf  or      ax,[bp-14h]                     
16d2  mov     [si+8h],ax                      
16d5  lds     si,[bp+0Ah]                     
16d8  mov     ax,[bp-12h]                     
16db  mov     [si],ax                         
16dd  mov     ax,[bp-10h]                     
16e0  mov     [si+2h],ax                      
16e3  mov     ax,[bp-0Eh]                     
16e6  pop     ds                              
16e7  pop     di                              
16e8  pop     si                              
16e9  mov     sp,bp                           
16eb  pop     bp                              
16ec  ret     0Eh                             
16ef  or      word ptr [bp-0Eh],4h            
16f3  les     di,[bp+0Eh]                     
16f6  xor     ax,ax                           
16f8  mov     cx,5h                           
16fb  rep     stosw                           
16fd  jmp     16D5h                           
16ff  or      word ptr [bp-0Eh],1h            
1703  jmp     16F3h                           
1705  or      word ptr [bp-0Eh],2h            
1709  lds     si,[bp+0Eh]                     
170c  mov     ax,7FFFh                        
170f  or      ax,[bp-14h]                     
1712  mov     [si+8h],ax                      
1715  mov     word ptr [si+6h],8000h          
171a  xor     ax,ax                           
171c  mov     [si+4h],ax                      
171f  mov     [si+2h],ax                      
1722  mov     [si],ax                         
1724  jmp     16D5h                           

; ----- sub_1726 -----
1726  push    bp                              
1727  mov     bp,sp                           
1729  push    di                              
172a  les     bx,es:[bx]                      
172d  mov     cx,es                           
172f  jcxz    174Bh                           
1731  mov     ax,es:[bx+6h]                   
1735  les     bx,es:[bx+0Eh]                  
1739  push    bx                              
173a  push    es                              
173b  push    ax                              
173c  push    ax                              
173d  call far KERNEL.GLOBALUNLOCK            
1742  call far KERNEL.GLOBALFREE              
1747  pop     es                              
1748  pop     bx                              
1749  jmp     172Dh                           
174b  pop     di                              
174c  mov     sp,bp                           
174e  pop     bp                              
174f  ret                                     

; ----- sub_1750 -----
1750  push    es                              
1751  push    di                              
1752  mov     di,ax                           
1754  add     di,bx                           
1756  mov     [bx+4h],di                      
1759  dec     di                              
175a  dec     di                              
175b  sub     ax,18h                          
175e  lea     si,[bx+16h]                     
1761  mov     word ptr [di],0FFFEh            
1765  mov     [bx+0Ch],di                     
1768  dec     ax                              
1769  mov     [si],ax                         
176b  mov     [bx],ds                         
176d  mov     ax,si                           
176f  mov     dx,ds                           
1771  mov     es,dx                           
1773  lea     di,[bx+8h]                      
1776  cld                                     
1777  stosw                                   
1778  stosw                                   
1779  inc     di                              
177a  inc     di                              
177b  xor     ax,ax                           
177d  stosw                                   
177e  stosw                                   
177f  stosw                                   
1780  stosw                                   
1781  pop     di                              
1782  pop     es                              
1783  ret                                     

; ----- sub_1784 -----
1784  mov     ax,es:[di+2h]                   
1788  or      ax,ax                           
178a  jne     1795h                           
178c  mov     es:[di+2h],ds                   
1790  mov     es:[di],bx                      
1793  jmp     17A9h                           
1795  push    es                              
1796  les     si,es:[di+8h]                   
179a  mov     es:[si+10h],ds                  
179e  mov     es:[si+0Eh],bx                  
17a2  mov     [bx+14h],es                     
17a5  mov     [bx+12h],si                     
17a8  pop     es                              
17a9  mov     es:[di+0Ah],ds                  
17ad  mov     es:[di+8h],bx                   
17b1  mov     es:[di+6h],ds                   
17b5  mov     es:[di+4h],bx                   
17b9  ret                                     
17ba  add     [bx+si],al                      
17bc  add     [bx+si],al                      
17be  add     [bx+si],al                      
17c0  add     [bx+si],al                      
17c2  add     [bx+si+4002h],ah                
17c6  add     [bx+si],al                      
17c8  add     [bx+si],al                      
17ca  add     [bx+si],al                      
17cc  add     [bx+si],al                      
17ce  add     al,cl                           
17d0  add     ax,40h                          
17d3  add     [bx+si],al                      
17d5  add     [bx+si],al                      
17d7  add     [bx+si],al                      
17d9  add     [bx+si],al                      
17db  cli                                     
17dc  or      [bx+si],al                      
17df  add     [bx+si],al                      
17e1  add     [bx+si],al                      
17e3  add     [bx+si],al                      
17e5  add     [bx+si-64h],al                  
17e8  or      al,40h                          
17ea  add     [bx+si],al                      
17ec  add     [bx+si],al                      
17ee  add     [bx+si],al                      
17f0  add     [bx+si],al                      
17f2  push    ax                              
17f3  ret                                     
17f4  cmovo   ax,[bx+si]                      
17f7  add     [bx+si],al                      
17f9  add     [bx+si],al                      
17fb  add     [bx+si],al                      
17fd  add     [si],ah                         
17ff  hlt                                     
1800  adc     al,[bx+si]                      
1803  add     [bx+si],al                      
1805  add     [bx+si],al                      
1807  add     [bx+si],al                      
1809  adc     byte ptr [bp+1698h],40h         
180e  add     [bx+si],al                      
1810  add     [bx+si],al                      
1812  add     [bx+si],al                      
1814  add     [bx+si],ah                      
1816  mov     sp,19BEh                        
1819  inc     ax                              
181a  add     [bx+si],al                      
181c  add     [bx+si],al                      
181e  add     [si],al                         
1820  mov     di,1BC9h                        
1823  mov     ???,[si]                        
1825  inc     ax                              
1826  add     [bx+si],al                      
1828  add     [bx+di-3313h],ah                
182c  into                                    
182d  sbb     ax,dx                           
182f  ror     word ptr [bp+40h],cl            
1832  and     al,dh                           
1834  sahf                                    
1835  mov     ch,70h                          
1837  sub     bp,[bx+si-3A53h]                
183b  popf                                    
183c  imul    ax,[bx+si-30h],0FD5Dh           
1841  and     ax,1AE5h                        
1844  mov     cs,[bx+19h]                     
1847  jmp     17CCh                           
1849  inc     ax                              
184a  jno     17E2h                           
184c  xlat                                    
184d  xchg    ax,bp                           
184e  inc     bx                              
184f  push    cs                              
1850  add     ax,298Dh                        
1853  scasw                                   
1854  sahf                                    
1855  inc     ax                              
1856  stc                                     
1857  mov     di,44A0h                        
185a  in      ax,dx                           
185b  adc     word ptr [bp+si],818Fh          
185f  cmp     byte ptr [bx+di-40C0h],3Ch      
1864  aad     0A6h                            
1866  iret                                    
1867  dec     word ptr [bx+di+1Fh]            
186a  js      182Eh                           
186c  rol     word ptr [bx+si+6Fh],cl         
186f  mov     al,8Ch                          
1872  jmp     0E1F5h                          
1875  inc     di                              
1876  mov     dx,0A893h                       
1879  inc     cx                              
187a  mov     sp,6B85h                        
187d  push    bp                              
187e  daa                                     
187f  cmp     [di+70F7h],cx                   
1883  loopne  1901h                           
1885  inc     dx                              
1886  mov     sp,8EDDh                        
1889  fdivp   st(1)                           
188b  popf                                    
188c  sti                                     
188d  jmp     190Dh                           
188f  stosb                                   
1890  push    cx                              
1891  inc     bx                              
1892  mov     ax,[76E6h]                      
1895  jcxz    1863h                           
1897  repne   sub     [bx],bp                 
189a  test    [bx+di+4426h],al                
189e  sub     [bx+si],dl                      
18a0  pop     ss                              
18a1  stosb                                   
18a2  clc                                     
18a3  scasb                                   
18a4  adc     bl,ah                           
18a6  lds     ax,sp                           
18a8  cli                                     
18a9  inc     sp                              
18aa  jmp     1853h                           
18ac  aam     0F3h                            
18ae  imul    bx                              
18b0  loopz   18FCh                           
18b2  jp      1849h                           
18b4  iret                                    
18b5  inc     bp                              
18b6  int 3                                   
18b8  mov     word ptr [bx+di-59F2h],0A0AEh   
18be  sbb     bx,sp                           
18c0  mov     [0D46h],ax                      
18c3  pop     ss                              
18c5  or      al,75h                          
18c7  add     word ptr [bp+7675h],48C9h       
18cd  dec     bp                              
18ce  pop     ax                              
18cf  inc     dx                              
18d0  in      al,0A7h                         
18d2  xchg    ax,bx                           
18d3  cmp     [bp+di],di                      
18d5  xor     ax,0B2B8h                       
18d8  in      ax,dx                           
18d9  push    bx                              
18da  dec     bp                              
18db  cmpsw                                   
18dc  in      ax,5Dh                          
18de  cmp     ax,5DC5h                        
18e1  cmp     cx,[bp+di-6D62h]                
18e5  pop     dx                              
18e6  call    far ptr  [di-5Ah]               
18e9  lock                                    
18ea  mov     ax,[0C020h]                     
18ed  push    sp                              
18ee  movsw                                   
18ef  mov     [bx],???                        
18f1  popa                                    
18f2  sar     bp,1                            
18f4  mov     bx,[bp+si-75h]                  
18f7  fsub    dword ptr [di]                  
18f9  pop     bp                              
18fa  mov     cx,di                           
18fc  ??? (FPU)                               
18ff  xchg    ax,bp                           
1900  clc                                     
1901  rep     daa                             
1903  mov     di,0C8A2h                       
1906  pop     bp                              
1907  fld     qword ptr [bx+si+4C6Eh]         
190b  leave                                   
190c  wait                                    
190d  xchg    ax,di                           
190e  and     [bp+si+5202h],cl                
1912  pusha                                   
1913  les     sp,[di]                         
1915  jne     18E4h                           
1917  int 3                                   
1918  int     0CCh                            
191a  int 3                                   
191b  int 3                                   
191c  int 3                                   
191d  int 3                                   
191e  int 3                                   
191f  int 3                                   
1920  sti                                     
1921  aas                                     
1922  jno     1961h                           
1924  or      dl,bh                           
1926  mov     [3D70h],ax                      
1929  or      dl,bh                           
192b  mov     [3FF8h],ax                      
192e  pop     dx                              
192f  cmp     bx,di                           
1932  dec     di                              
1933  lea     dx,[bx+126Eh]                   
1937  xor     bp,3Fh                          
193a  ret                                     
193b  shr     word ptr [si],cl                
193d  sbb     dx,sp                           
1940  pop     ax                              
1941  pop     ss                              
1942  mov     bh,0D1h                         
1944  ???                                     
1945  aas                                     
1946  ror     byte ptr [bx],1                 
1948  and     ax,[si+1B47h]                   
194c  inc     di                              
194d  lodsb                                   
194e  lds     sp,[bx+3FEEh]                   
1952  inc     ax                              
1953  cmpsb                                   
1954  mov     dh,69h                          
1956  insb                                    
1957  scasw                                   
1958  add     ax,37BDh                        
195b  xchg    ch,bl                           
195d  aas                                     
195e  xor     di,[di]                         
1960  mov     sp,7A42h                        
1963  in      ax,0D5h                         
1965  xchg    ax,sp                           
1966  mov     di,0E7D6h                       
1969  aas                                     
196a  ret     0FDFDh                          
196d  into                                    
196e  popa                                    
196f  test    [bx+di],dl                      
1971  ja      193Fh                           
1973  stosw                                   
1974  in      al,3Fh                          
1976  das                                     
1977  dec     sp                              
1978  pop     bx                              
1979  loopz   19C8h                           
197b  les     di,[bp-6A6Ch]                   
197f  out     0C9h,al                         
1981  aas                                     
1982  xchg    ax,dx                           
1983  les     dx,[bp+di+3Bh]                  
1986  jne     19CCh                           
1988  int     14h                             
198a  mov     si,0AF9Ah                       
198d  aas                                     
198e  fisub   word ptr [bx-46h]               
1991  xchg    ax,sp                           
1992  cmp     [di-53h],ax                     
1995  push    ds                              
1996  mov     cl,0CFh                         
1998  xchg    ax,sp                           
1999  aas                                     
199a  and     al,23h                          
199c  mov     dl,0BCh                         
199f  mov     dx,313Bh                        
19a2  popa                                    
19a3  mov     di,[bp+si+3Fh]                  
19a6  popa                                    
19a7  push    bp                              
19a8  pop     cx                              
19a9  sar     word ptr [bp-4Fh],53h           
19ad  jl      19C1h                           
19af  mov     bx,3F5Fh                        
19b2  xlat                                    
19b3  out     dx,al                           
19b4  das                                     
19b5  lea     ax,[92BEh]                      
19b9  test    [di],dx                         
19bb  sti                                     
19bc  inc     sp                              
19bd  aas                                     
19be  and     al,3Fh                          
19c0  movsw                                   
19c1  jmp     0BEFDh                          
19c4  daa                                     
19c5  jmp     3F2Ah:0A87Fh                    
19ca  jge     1978h                           
19cc  mov     ax,[0BCE4h]                     
19cf  jl      1A18h                           
19d2  rcr     ch,1                            
19d4  push    bp                              
19d5  arpl    ds:[bp+di+6h],di                
19d9  int 3                                   
19da  and     dx,[si+77h]                     
19dd  cmp     di,-6Fh                         
19e0  cmp     word ptr [di],0FA91h            
19e4  cmp     bl,[bx+di]                      
19e6  jp      1A4Bh                           
19e8  and     ax,3143h                        
19eb  shr     byte ptr [si+213Ch],89h         
19f0  sar     word ptr [bx+si],1              
19f2  add     byte ptr [bx-69h],0B8h          
19f6  add     ch,bh                           
19f8  xlat                                    
19f9  cmp     bx,sp                           
19fb  mov     [bx+si+8h],bl                   
19fe  sbb     si,[bx+di-1C18h]                
1a02  xchg    ah,[bp+3B03h]                   
1a06  mov     byte ptr [si+4245h],7h          
1a0b  mov     dh,99h                          
1a0d  jne     1A46h                           
1a0f  fld     tword ptr [333Ah]               
1a13  jno     1A31h                           
1a15  shl     byte ptr [bp+di],cl             
1a17  ??? (FPU)                               
1a19  out     dx,al                           
1a1a  dec     cx                              
1a1b  nop                                     
1a1c  pop     dx                              
1a1d  cmp     [bp-4179h],sp                   
1a21  rcl     byte ptr [bx-26h],0A5h          
1a25  and     byte ptr [bp-4A5Eh],32h         
1a2a  loop    1A94h                           
1a2c  mov     dl,11h                          
1a2e  cmpsw                                   
1a2f  push    dx                              
1a30  lahf                                    
1a31  inc     sp                              
1a32  pop     cx                              
1a33  mov     bh,10h                          
1a35  sub     al,25h                          
1a37  dec     cx                              
1a38  in      al,2Dh                          
1a3a  xor     al,4Fh                          
1a3d  push    bx                              
1a3e  scasb                                   
1a3f  into                                    
1a40  imul    sp,[di],-71h                    
1a43  pop     cx                              
1a44  add     al,0A4h                         
1a46  rcr     dh,0C2h                         
1a49  jge     1A46h                           
1a4b  call    3914h                           
1a4e  sahf                                    
1a4f  out     88h,ax                          
1a51  pop     dx                              
1a52  push    di                              
1a53  xchg    ax,cx                           
1a54  cmp     al,0BFh                         
1a56  push    ax                              
1a57  and     word ptr [bp+si],18h            
1a5a  dec     si                              
1a5b  dec     bx                              
1a5c  bound   di,bp                           
1a5f  or      word ptr [bx+6AFh],-6Ch         
1a64  jge     1A77h                           
1a66  in      al,2Dh                          
1a68  ficomp  word ptr [bx-2D32h]             
1a6c  enter   0DD04h,0A6h                     
1a70  fmul    dword ptr [bp+si]               

; ----- sub_1a72 -----
1a72  push    bp                              
1a73  mov     bp,sp                           
1a75  sub     sp,6h                           
1a78  push    si                              
1a79  push    di                              
1a7a  mov     di,[bp+6h]                      
1a7d  mov     bx,175Ah                        
1a80  or      di,di                           
1a82  je      1AFEh                           
1a84  jns     1A8Bh                           
1a86  mov     bx,18B6h                        
1a89  neg     di                              
1a8b  mov     word ptr [bp-6h],1B10h          
1a90  cmp     word ptr [bp+4h],0h             
1a94  jne     1AB6h                           
1a96  mov     word ptr [bp-6h],1B06h          
1a9b  wait                                    
1a9c  fstcw   word ptr [bp-2h]                
1a9f  nop                                     
1aa0  wait                                    
1aa1  mov     ax,[bp-2h]                      
1aa4  or      ax,38h                          
1aa7  mov     [bp-4h],ax                      
1aaa  wait                                    
1aab  fldcw   word ptr [bp-4h]                
1aae  les     si,[bp+8h]                      
1ab1  wait                                    
1ab2  fld     tword ptr es:[si+2h]            
1ab6  push    di                              
1ab7  pop     di                              
1ab8  add     bx,54h                          
1abb  or      di,di                           
1abd  je      1AE2h                           
1abf  mov     ax,di                           
1ac1  shr     di,1                            
1ac3  shr     di,1                            
1ac5  shr     di,1                            
1ac7  push    di                              
1ac8  and     ax,7h                           
1acb  je      1AB7h                           
1acd  push    bx                              
1ace  shl     al,1                            
1ad0  shl     al,1                            
1ad2  mov     ah,al                           
1ad4  shl     al,1                            
1ad6  add     al,ah                           
1ad8  xor     ah,ah                           
1ada  add     bx,ax                           
1adc  jmp     word ptr [bp-6h]                
1adf  pop     bx                              
1ae0  jmp     1AB7h                           
1ae2  cmp     word ptr [bp+4h],0h             
1ae6  jne     1AFEh                           
1ae8  wait                                    
1ae9  fclex                                   
1aeb  wait                                    
1aec  fldcw   word ptr [bp-2h]                
1aef  les     si,[bp+8h]                      
1af2  wait                                    
1af3  fstp    tword ptr es:[si+2h]            
1af7  mov     word ptr es:[si],0h             
1afc  nop                                     
1afd  wait                                    
1afe  pop     di                              
1aff  pop     si                              
1b00  mov     sp,bp                           
1b02  pop     bp                              
1b03  ret     8h                              
1b06  wait                                    
1b07  fld     tword ptr cs:[bx+2h]            
1b0b  wait                                    
1b0c  fmulp   st(1)                           
1b0e  jmp     1ADFh                           
1b10  push    word ptr cs:[bx+0Ah]            
1b14  push    word ptr cs:[bx+8h]             
1b18  push    word ptr cs:[bx+6h]             
1b1c  push    word ptr cs:[bx+4h]             
1b20  mov     cx,cs:[bx+2h]                   
1b24  mov     ax,cs:[bx]                      
1b27  cmp     ax,8000h                        
1b2a  adc     cx,-1h                          
1b2d  push    cx                              
1b2e  push    ax                              
1b2f  mov     ax,sp                           
1b31  push    word ptr [bp+0Ah]               
1b34  push    word ptr [bp+8h]                
1b37  push    ss                              
1b38  push    ax                              
1b39  call    1B47h                           
1b3c  add     sp,0Ch                          
1b3f  jmp     1ADFh                           
1b41  jmp     1CB0h                           
1b44  jmp     1C9Bh                           

; ----- sub_1b47 -----
1b47  push    bp                              
1b48  mov     bp,sp                           
1b4a  sub     sp,12h                          
1b4d  push    si                              
1b4e  push    di                              
1b4f  mov     cx,9h                           
1b52  mov     ax,ss                           
1b54  mov     es,ax                           
1b56  lea     di,[bp-12h]                     
1b59  xor     ax,ax                           
1b5b  rep     stosw                           
1b5d  lds     si,[bp+8h]                      
1b60  les     di,[bp+4h]                      
1b63  mov     ax,[si+0Ah]                     
1b66  mov     bx,es:[di+0Ah]                  
1b6a  mov     cx,ax                           
1b6c  xor     cx,bx                           
1b6e  and     cx,8000h                        
1b72  mov     [bp-2h],cx                      
1b75  mov     dx,7FFFh                        
1b78  and     ax,dx                           
1b7a  cmp     ax,dx                           
1b7c  je      1B41h                           
1b7e  and     bx,dx                           
1b80  cmp     bx,dx                           
1b82  je      1B41h                           
1b84  mov     dx,ax                           
1b86  add     dx,bx                           
1b88  cmp     dx,0BFFDh                       
1b8c  ja      1B41h                           
1b8e  cmp     dx,3FBFh                        
1b92  jbe     1B44h                           
1b94  or      ax,ax                           
1b96  jne     1BA9h                           
1b98  inc     dx                              
1b99  mov     ax,[si]                         
1b9b  or      ax,[si+2h]                      
1b9e  or      ax,[si+4h]                      
1ba1  or      ax,[si+6h]                      
1ba4  or      ax,[si+8h]                      
1ba7  je      1B44h                           
1ba9  or      bx,bx                           
1bab  jne     1BC3h                           
1bad  inc     dx                              
1bae  mov     ax,es:[di]                      
1bb1  or      ax,es:[di+2h]                   
1bb5  or      ax,es:[di+4h]                   
1bb9  or      ax,es:[di+6h]                   
1bbd  or      ax,es:[di+8h]                   
1bc1  je      1B44h                           
1bc3  sub     dx,3FFEh                        
1bc7  mov     [si+0Ah],dx                     
1bca  add     di,8h                           
1bcd  mov     cx,5h                           
1bd0  lea     bx,[bp-12h]                     
1bd3  push    cx                              
1bd4  push    si                              
1bd5  push    di                              
1bd6  mov     ax,es:[di]                      
1bd9  mul     word ptr [si]                   
1bdb  add     ss:[bx],ax                      
1bde  adc     ss:[bx+2h],dx                   
1be2  adc     word ptr ss:[bx+4h],0h          
1be7  add     si,2h                           
1bea  sub     di,2h                           
1bed  loop    1BD6h                           
1bef  pop     di                              
1bf0  pop     si                              
1bf1  pop     cx                              
1bf2  add     bx,2h                           
1bf5  add     si,2h                           
1bf8  add     cx,-1h                          
1bfb  jne     1BD3h                           
1bfd  mov     si,[bp+8h]                      
1c00  mov     dx,[bp-10h]                     
1c03  mov     cx,[bp-0Eh]                     
1c06  mov     bx,[bp-0Ch]                     
1c09  mov     ax,[bp-0Ah]                     
1c0c  mov     di,[bp-8h]                      
1c0f  cmp     word ptr [si+0Ah],0h            
1c13  jg      1C29h                           
1c15  jmp     1C76h                           
1c17  shl     word ptr [bp-12h],1             
1c1a  rcl     dx,1                            
1c1c  rcl     cx,1                            
1c1e  rcl     bx,1                            
1c20  rcl     ax,1                            
1c22  rcl     di,1                            
1c24  dec     word ptr [si+0Ah]               
1c27  je      1C76h                           
1c29  or      di,di                           
1c2b  jns     1C17h                           
1c2d  cmp     word ptr [bp-12h],8000h         
1c32  jb      1C53h                           
1c34  ja      1C3Ch                           
1c36  test    dx,1h                           
1c3a  je      1C53h                           
1c3c  add     dx,1h                           
1c3f  adc     cx,0h                           
1c42  adc     bx,0h                           
1c45  adc     ax,0h                           
1c48  adc     di,0h                           
1c4b  jae     1C53h                           
1c4d  mov     di,8000h                        
1c50  inc     word ptr [si+0Ah]               
1c53  cmp     word ptr [si+0Ah],7FFFh         
1c58  jae     1CB0h                           
1c5a  mov     [si+8h],di                      
1c5d  mov     [si+6h],ax                      
1c60  mov     [si+4h],bx                      
1c63  mov     [si+2h],cx                      
1c66  mov     [si],dx                         
1c68  mov     ax,[bp-2h]                      
1c6b  or      [si+0Ah],ax                     
1c6e  pop     di                              
1c6f  pop     si                              
1c70  mov     sp,bp                           
1c72  pop     bp                              
1c73  ret     8h                              
1c76  dec     word ptr [si+0Ah]               
1c79  shr     di,1                            
1c7b  rcr     ax,1                            
1c7d  rcr     bx,1                            
1c7f  rcr     cx,1                            
1c81  rcr     dx,1                            
1c83  rcr     word ptr [bp-12h],1             
1c86  adc     word ptr [bp-4h],0h             
1c8a  inc     word ptr [si+0Ah]               
1c8d  jne     1C79h                           
1c8f  cmp     word ptr [bp-4h],0h             
1c93  je      1C2Dh                           
1c95  or      word ptr [bp-12h],1h            
1c99  jmp     1C2Dh                           
1c9b  xor     ax,ax                           
1c9d  mov     [si+0Ah],ax                     
1ca0  mov     [si+8h],ax                      
1ca3  mov     [si+6h],ax                      
1ca6  mov     [si+4h],ax                      
1ca9  mov     [si+2h],ax                      
1cac  mov     [si],ax                         
1cae  jmp     1C6Eh                           
1cb0  mov     ax,7FFFh                        
1cb3  or      ax,[bp-2h]                      
1cb6  mov     [si+0Ah],ax                     
1cb9  xor     ax,ax                           
1cbb  mov     [si+8h],ax                      
1cbe  mov     [si+6h],ax                      
1cc1  mov     [si+4h],ax                      
1cc4  mov     [si+2h],ax                      
1cc7  mov     [si],ax                         
1cc9  jmp     1C6Eh                           
1ccb  add     [bx+si],al                      

; ----- sub_1ccc -----
1ccc  push    bp                              
1ccd  mov     bp,sp                           
1ccf  sub     sp,0Ch                          
1cd2  push    si                              
1cd3  push    di                              
1cd4  mov     ax,[bp+6h]                      
1cd7  mov     [bp-0Ch],ax                     
1cda  les     si,[bp+8h]                      
1cdd  xor     ax,ax                           
1cdf  mov     di,ax                           
1ce1  mov     bx,ax                           
1ce3  mov     cx,ax                           
1ce5  mov     dx,ax                           
1ce7  mov     dl,es:[si]                      
1cea  inc     si                              
1ceb  jmp     1D27h                           
1ced  mov     [bp-2h],di                      
1cf0  mov     [bp-4h],ax                      
1cf3  mov     [bp-6h],bx                      
1cf6  mov     [bp-8h],cx                      
1cf9  mov     [bp-0Ah],dx                     
1cfc  call    1D7Ah                           
1cff  call    1D7Ah                           
1d02  add     dx,[bp-0Ah]                     
1d05  adc     cx,[bp-8h]                      
1d08  adc     bx,[bp-6h]                      
1d0b  adc     ax,[bp-4h]                      
1d0e  adc     di,[bp-2h]                      
1d11  call    1D7Ah                           
1d14  add     dl,es:[si]                      
1d17  inc     si                              
1d18  adc     dh,0h                           
1d1b  adc     cx,0h                           
1d1e  adc     bx,0h                           
1d21  adc     ax,0h                           
1d24  adc     di,0h                           
1d27  dec     word ptr [bp-0Ch]               
1d2a  jne     1CEDh                           
1d2c  mov     si,404Eh                        
1d2f  jmp     1D3Eh                           
1d31  mov     di,ax                           
1d33  mov     ax,bx                           
1d35  mov     bx,cx                           
1d37  mov     cx,dx                           
1d39  xor     dx,dx                           
1d3b  sub     si,10h                          
1d3e  or      di,di                           
1d40  je      1D31h                           
1d42  js      1D53h                           
1d44  shl     dx,1                            
1d46  rcl     cx,1                            
1d48  rcl     bx,1                            
1d4a  rcl     ax,1                            
1d4c  rcl     di,1                            
1d4e  dec     si                              
1d4f  or      di,di                           
1d51  jns     1D44h                           
1d53  push    si                              
1d54  mov     si,[bp+4h]                      
1d57  pop     ss:[si+0Ah]                     
1d5b  mov     ss:[si+8h],di                   
1d5f  mov     ss:[si+6h],ax                   
1d63  mov     ss:[si+4h],bx                   
1d67  mov     ss:[si+2h],cx                   
1d6b  mov     ss:[si],dx                      
1d6e  mov     ax,si                           
1d70  mov     dx,ss                           
1d72  pop     di                              
1d73  pop     si                              
1d74  mov     sp,bp                           
1d76  pop     bp                              
1d77  ret     8h                              

; ----- sub_1d7a -----
1d7a  shl     dx,1                            
1d7c  rcl     cx,1                            
1d7e  rcl     bx,1                            
1d80  rcl     ax,1                            
1d82  rcl     di,1                            
1d84  ret                                     
1d85  add     [bx+si],al                      
1d87  add     [bx+si],al                      
1d89  add     [bx+si],al                      
1d8b  add     [bx+si],al                      
1d8d  add     [bx+si],al                      
1d8f  add     [bx+si],al                      

; ----- sub_1d90 -----
1d90  mov     ax,0FFFFh                       ; segment seg2:0000
1d93  push    bp                              
1d94  mov     bp,sp                           
1d96  push    ds                              
1d97  mov     ds,ax                           
1d99  mov     ax,1h                           
1d9c  pop     ds                              
1d9d  leave                                   
1d9e  retf    0Ah                             
1da1  add     [bx+si],al                      

; ===== WEP =====
1da2  mov     ax,1D91h                        ; segment seg2:0000
1da5  push    bp                              
1da6  mov     bp,sp                           
1da8  push    ds                              
1da9  mov     ds,ax                           
1dab  mov     ax,1h                           
1dae  pop     ds                              
1daf  leave                                   
1db0  retf    2h                              
1db3  add     [bx+si],al                      

; ===== MODE_REPORTID =====
1db4  mov     ax,1DA3h                        ; segment seg2:0000
1db7  push    bp                              
1db8  mov     bp,sp                           
1dba  push    ds                              
1dbb  mov     ds,ax                           
1dbd  push    0h                              
1dbf  push    0FFFFh                          ; segment seg1:0000
1dc2  push    20F4h                           
1dc5  call far M007.UIF_MESSAGE               ; "Mode DLL -  V03.03 07-Mar-94"
1dca  pop     ds                              
1dcb  leave                                   
1dcc  retf                                    
1dcd  add     [bx+si],al                      

; ===== INITIALISE_MODE_CONTROLLER_DATA =====
1dce  mov     ax,1DB5h                        ; segment seg2:0000
1dd1  push    bp                              
1dd2  mov     bp,sp                           
1dd4  push    ds                              
1dd5  mov     ds,ax                           
1dd7  push    144h                            
1dda  push    word ptr [266h]                 
1dde  push    word ptr [264h]                 ; [ds] f32 here = 512
1de2  call far M007.M007_PUTHIGH              ; AP_GRAT_SPACE
1de7  push    144h                            
1dea  push    word ptr [26Ah]                 
1dee  push    word ptr [268h]                 ; [ds] f32 here = 50
1df2  call far M007.M007_PUTLOW               ; AP_GRAT_SPACE
1df7  push    144h                            
1dfa  push    word ptr [26Eh]                 
1dfe  push    word ptr [26Ch]                 ; [ds] f32 here = 128
1e02  call far M007.M007_PUTVALUE             ; AP_GRAT_SPACE
1e07  push    0D0h                            
1e0a  push    word ptr [272h]                 
1e0e  push    word ptr [270h]                 ; [ds] f32 here = 768
1e12  call far M007.M007_PUTHIGH              ; AP_CROSS_X
1e17  push    0D0h                            
1e1a  push    word ptr [276h]                 
1e1e  push    word ptr [274h]                 ; [ds] f32 here = 256
1e22  call far M007.M007_PUTLOW               ; AP_CROSS_X
1e27  push    0D0h                            
1e2a  push    word ptr [266h]                 
1e2e  push    word ptr [264h]                 ; [ds] f32 here = 512
1e32  call far M007.M007_PUTVALUE             ; AP_CROSS_X
1e37  push    0D1h                            
1e3a  push    word ptr [27Ah]                 
1e3e  push    word ptr [278h]                 ; [ds] f32 here = 576
1e42  call far M007.M007_PUTHIGH              ; AP_CROSS_Y
1e47  push    0D1h                            
1e4a  push    word ptr [27Eh]                 
1e4e  push    word ptr [27Ch]                 ; [ds] f32 here = 192
1e52  call far M007.M007_PUTLOW               ; AP_CROSS_Y
1e57  push    0D1h                            
1e5a  push    word ptr [282h]                 
1e5e  push    word ptr [280h]                 ; [ds] f32 here = 384
1e62  call far M007.M007_PUTVALUE             ; AP_CROSS_Y
1e67  push    43h                             
1e69  push    word ptr [286h]                 
1e6d  push    word ptr [284h]                 ; [ds] f32 here = 2
1e71  call far M007.M007_PUTVALUE             ; AP_ZOOM_FACTOR
1e76  push    4Eh                             
1e78  push    word ptr [266h]                 
1e7c  push    word ptr [264h]                 ; [ds] f32 here = 512
1e80  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_W
1e85  push    4Fh                             
1e87  push    word ptr [282h]                 
1e8b  push    word ptr [280h]                 ; [ds] f32 here = 384
1e8f  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_H
1e94  push    4Ch                             
1e96  push    word ptr [276h]                 
1e9a  push    word ptr [274h]                 ; [ds] f32 here = 256
1e9e  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_POSN_X
1ea3  push    4Dh                             
1ea5  push    word ptr [27Eh]                 
1ea9  push    word ptr [27Ch]                 ; [ds] f32 here = 192
1ead  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_POSN_Y
1eb2  push    44h                             
1eb4  push    word ptr [276h]                 
1eb8  push    word ptr [274h]                 ; [ds] f32 here = 256
1ebc  call far M007.M007_PUTVALUE             ; AP_SPOT_POSN_X
1ec1  push    45h                             
1ec3  push    word ptr [27Eh]                 
1ec7  push    word ptr [27Ch]                 ; [ds] f32 here = 192
1ecb  call far M007.M007_PUTVALUE             ; AP_SPOT_POSN_Y
1ed0  push    47h                             
1ed2  push    word ptr [27Eh]                 
1ed6  push    word ptr [27Ch]                 ; [ds] f32 here = 192
1eda  call far M007.M007_PUTVALUE             ; AP_LINE_POSN_Y
1edf  push    0C5h                            
1ee2  push    word ptr [28Ah]                 
1ee6  push    word ptr [288h]                 ; [ds] f32 here = 1
1eea  call far M007.M007_PUTVALUE             ; AP_MAG0
1eef  push    0C6h                            
1ef2  push    word ptr [28Ah]                 
1ef6  push    word ptr [288h]                 ; [ds] f32 here = 1
1efa  call far M007.M007_PUTVALUE             ; AP_MAG1
1eff  push    0C7h                            
1f02  push    word ptr [28Ah]                 
1f06  push    word ptr [288h]                 ; [ds] f32 here = 1
1f0a  call far M007.M007_PUTVALUE             ; AP_MAG2
1f0f  push    0C8h                            
1f12  push    word ptr [28Ah]                 
1f16  push    word ptr [288h]                 ; [ds] f32 here = 1
1f1a  call far M007.M007_PUTVALUE             ; AP_MAG3
1f1f  push    0C9h                            
1f22  push    word ptr [28Ah]                 
1f26  push    word ptr [288h]                 ; [ds] f32 here = 1
1f2a  call far M007.M007_PUTVALUE             ; AP_MAG4
1f2f  push    0CAh                            
1f32  push    word ptr [28Ah]                 
1f36  push    word ptr [288h]                 ; [ds] f32 here = 1
1f3a  call far M007.M007_PUTVALUE             ; AP_MAG5
1f3f  push    0CBh                            
1f42  push    word ptr [28Ah]                 
1f46  push    word ptr [288h]                 ; [ds] f32 here = 1
1f4a  call far M007.M007_PUTVALUE             ; AP_MAG6
1f4f  push    0CCh                            
1f52  push    word ptr [28Ah]                 
1f56  push    word ptr [288h]                 ; [ds] f32 here = 1
1f5a  call far M007.M007_PUTVALUE             ; AP_MAG7
1f5f  push    48h                             
1f61  push    word ptr [266h]                 
1f65  push    word ptr [264h]                 ; [ds] f32 here = 512
1f69  call far M007.M007_PUTVALUE             ; AP_LINE_LENGTH
1f6e  push    43h                             
1f70  push    word ptr [28Ah]                 
1f74  push    word ptr [288h]                 ; [ds] f32 here = 1
1f78  call far M007.M007_PUTLOW               ; AP_ZOOM_FACTOR
1f7d  push    4Eh                             
1f7f  push    word ptr [28Eh]                 
1f83  push    word ptr [28Ch]                 ; [ds] f32 here = 64
1f87  call far M007.M007_PUTLOW               ; AP_RED_RASTER_W
1f8c  push    4Fh                             
1f8e  push    word ptr [28Ah]                 
1f92  push    word ptr [288h]                 ; [ds] f32 here = 1
1f96  call far M007.M007_PUTLOW               ; AP_RED_RASTER_H
1f9b  push    43h                             
1f9d  push    word ptr [292h]                 
1fa1  push    word ptr [290h]                 ; [ds] f32 here = 10
1fa5  call far M007.M007_PUTHIGH              ; AP_ZOOM_FACTOR
1faa  push    3Ah                             
1fac  push    word ptr [296h]                 ; [ds] f32 here = -2.004181
1fb0  push    word ptr [294h]                 ; [ds] f32 here = 1024
1fb4  call far M007.M007_PUTHIGH              ; AP_ZOOMPOS_X
1fb9  push    3Bh                             
1fbb  push    word ptr [272h]                 
1fbf  push    word ptr [270h]                 ; [ds] f32 here = 768
1fc3  call far M007.M007_PUTHIGH              ; AP_ZOOMPOS_Y
1fc8  push    44h                             
1fca  push    word ptr [296h]                 ; [ds] f32 here = -2.004181
1fce  push    word ptr [294h]                 ; [ds] f32 here = 1024
1fd2  call far M007.M007_PUTHIGH              ; AP_SPOT_POSN_X
1fd7  push    45h                             
1fd9  push    word ptr [272h]                 
1fdd  push    word ptr [270h]                 ; [ds] f32 here = 768
1fe1  call far M007.M007_PUTHIGH              ; AP_SPOT_POSN_Y
1fe6  push    46h                             
1fe8  push    word ptr [296h]                 ; [ds] f32 here = -2.004181
1fec  push    word ptr [294h]                 ; [ds] f32 here = 1024
1ff0  call far M007.M007_PUTHIGH              ; AP_LINE_POSN_X
1ff5  push    47h                             
1ff7  push    word ptr [272h]                 
1ffb  push    word ptr [270h]                 ; [ds] f32 here = 768
1fff  call far M007.M007_PUTHIGH              ; AP_LINE_POSN_Y
2004  push    48h                             
2006  push    word ptr [296h]                 ; [ds] f32 here = -2.004181
200a  push    word ptr [294h]                 ; [ds] f32 here = 1024
200e  call far M007.M007_PUTHIGH              ; AP_LINE_LENGTH
2013  push    4Ch                             
2015  push    word ptr [29Ah]                 
2019  push    word ptr [298h]                 ; [ds] f32 here = 959
201d  call far M007.M007_PUTHIGH              ; AP_RED_RASTER_POSN_X
2022  push    4Dh                             
2024  push    word ptr [29Eh]                 
2028  push    word ptr [29Ch]                 ; [ds] f32 here = 766
202c  call far M007.M007_PUTHIGH              ; AP_RED_RASTER_POSN_Y
2031  push    4Eh                             
2033  push    word ptr [296h]                 ; [ds] f32 here = -2.004181
2037  push    word ptr [294h]                 ; [ds] f32 here = 1024
203b  call far M007.M007_PUTHIGH              ; AP_RED_RASTER_W
2040  push    4Fh                             
2042  push    word ptr [272h]                 
2046  push    word ptr [270h]                 ; [ds] f32 here = 768
204a  call far M007.M007_PUTHIGH              ; AP_RED_RASTER_H
204f  push    3Ah                             
2051  push    word ptr [26Eh]                 
2055  push    word ptr [26Ch]                 ; [ds] f32 here = 128
2059  call far M007.M007_PUTVALUE             ; AP_ZOOMPOS_X
205e  push    3Bh                             
2060  push    word ptr [27Eh]                 
2064  push    word ptr [27Ch]                 ; [ds] f32 here = 192
2068  call far M007.M007_PUTVALUE             ; AP_ZOOMPOS_Y
206d  call far MODE_REPORTID                  
2072  pop     ds                              
2073  leave                                   
2074  retf                                    
2075  add     [bx+si],al                      

; ===== INITIALISE_MODE_CONTROLLER =====
2076  mov     ax,1DCFh                        ; segment seg2:0000
2079  push    bp                              
207a  mov     bp,sp                           
207c  push    ds                              
207d  mov     ds,ax                           
207f  push    144h                            
2082  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2087  cmp     ax,2h                           
208a  jne     209Bh                           
208c  push    4Fh                             
208e  push    word ptr [2A2h]                 
2092  push    word ptr [2A0h]                 ; [ds] f32 here = 4
2096  call far M007.M007_PUTLOW               ; AP_RED_RASTER_H
209b  xor     ax,ax                           
209d  pop     ds                              
209e  leave                                   
209f  retf                                    

; ===== MODE_CONTROLLER_SHUTDOWN =====
20a0  mov     ax,2077h                        ; segment seg2:0000
20a3  push    bp                              
20a4  mov     bp,sp                           
20a6  push    ds                              
20a7  mov     ds,ax                           
20a9  xor     ax,ax                           
20ab  pop     ds                              
20ac  leave                                   
20ad  retf                                    

; ===== MODE_TIMER_TICK =====
20ae  mov     ax,20A1h                        ; segment seg2:0000
20b1  push    bp                              
20b2  mov     bp,sp                           
20b4  push    ds                              
20b5  mov     ds,ax                           
20b7  pop     ds                              
20b8  leave                                   
20b9  retf    2h                              

; ===== RESTORE_MODES_CONFIG =====
20bc  mov     ax,20AFh                        ; segment seg2:0000
20bf  push    bp                              
20c0  mov     bp,sp                           
20c2  push    ds                              
20c3  mov     ds,ax                           
20c5  pop     ds                              
20c6  leave                                   
20c7  retf    4h                              

; ===== GET_MODES_CONFIG =====
20ca  mov     ax,20BDh                        ; segment seg2:0000
20cd  push    bp                              
20ce  mov     bp,sp                           
20d0  push    ds                              
20d1  mov     ds,ax                           
20d3  pop     ds                              
20d4  leave                                   
20d5  retf    4h                              

; ===== MODE_CONTROLLER_SUSPEND =====
20d8  mov     ax,20CBh                        ; segment seg2:0000
20db  push    bp                              
20dc  mov     bp,sp                           
20de  push    ds                              
20df  mov     ds,ax                           
20e1  xor     ax,ax                           
20e3  pop     ds                              
20e4  leave                                   
20e5  retf                                    

; ===== MODE_CONTROLLER_REMOVE =====
20e6  mov     ax,20D9h                        ; segment seg2:0000
20e9  push    bp                              
20ea  mov     bp,sp                           
20ec  push    ds                              
20ed  mov     ds,ax                           
20ef  xor     ax,ax                           
20f1  pop     ds                              
20f2  leave                                   
20f3  retf                                    
20f4  dec     bp                              
20f5  outsw                                   
20f6  and     gs:[si+4Ch],al                  
20fb  dec     sp                              
20fc  and     [di],ch                         
20fe  and     [bx+si],ah                      
2100  push    si                              
2101  xor     [bp+di],dh                      
2103  xor     cs:[bp+di],dh                   
2106  and     [bx+si],dh                      
2108  aaa                                     
2109  sub     ax,614Dh                        
210c  jb      213Bh                           
210e  cmp     [si],si                         
2110  add     [bx+si],al                      

; ----- sub_2112 -----
2112  mov     ax,20E7h                        ; segment seg2:0000
2115  push    bp                              
2116  mov     bp,sp                           
2118  push    ds                              
2119  mov     ds,ax                           
211b  push    10Bh                            
211e  call far M007.M007_GETSTATE             ; DP_CROSSHAIRS
2123  dec     ax                              
2124  jne     2134h                           
2126  push    0h                              
2128  call far SWITCHCROSSHAIRS               
212d  push    1h                              
212f  call far SWITCHCROSSHAIRS               
2134  pop     ds                              
2135  leave                                   
2136  retf                                    
2137  add     [bx+si],al                      

; ----- sub_2138 -----
2138  mov     ax,2113h                        ; segment seg2:0000
213b  push    bp                              
213c  mov     bp,sp                           
213e  push    ds                              
213f  mov     ds,ax                           
2141  mov     ax,[bp+6h]                      
2144  jmp     2170h                           
2146  call far DOCOMMANDMODE_NORMAL           
214b  jmp     2189h                           
214d  call far DOCOMMANDMODE_SPLIT            
2152  jmp     2189h                           
2154  call far DOCOMMANDMODE_QUAD             
2159  jmp     2189h                           
215b  call far DOCOMMANDMODE_REDUCED          
2160  jmp     2189h                           
2162  call far DOCOMMANDMODE_SMALL            
2167  jmp     2189h                           
2169  call far DOCOMMANDMODE_EMISSION         
216e  jmp     2189h                           
2170  cmp     ax,5h                           
2173  ja      2189h                           
2175  add     ax,ax                           
2177  xchg    ax,bx                           
2178  jmp     word ptr cs:[bx+217Dh]          
217d  inc     si                              
217e  and     [di+21h],cx                     
2181  push    sp                              
2182  and     [bx+di+21h],bp                  
2185  bound   sp,[bx+di]                      
2187  pop     bx                              
2188  and     [bp+di+183Eh],ax                
218c  add     [bx+di],al                      
218e  jne     219Dh                           
2190  push    1h                              
2192  call far M200.SWITCHDYNFOCUS            
2197  mov     word ptr [18h],0h               
219d  pop     ds                              
219e  leave                                   
219f  retf                                    

; ===== DRAWZOOMBOX =====
21a0  mov     ax,2139h                        ; segment seg2:0000
21a3  push    bp                              
21a4  mov     bp,sp                           
21a6  push    ds                              
21a7  mov     ds,ax                           
21a9  pop     ds                              
21aa  leave                                   
21ab  retf                                    

; ===== DOTEMPNORMALMODE =====
21ac  mov     ax,21A1h                        ; segment seg2:0000
21af  push    bp                              
21b0  mov     bp,sp                           
21b2  push    ds                              
21b3  mov     ds,ax                           
21b5  push    1Eh                             
21b7  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
21bc  mov     [630h],ax                       
21bf  push    1Fh                             
21c1  call far M007.M007_GETSTATE             ; DP_ZOOM
21c6  mov     [632h],ax                       
21c9  push    20h                             
21cb  call far M007.M007_GETSTATE             ; DP_WINDOWING
21d0  mov     [634h],ax                       
21d3  call far DOCOMMANDMODE_NORMAL           
21d8  pop     ds                              
21d9  leave                                   
21da  retf                                    
21db  add     [bx+si],al                      

; ===== UNDOTEMPNORMALMODE =====
21dc  mov     ax,21ADh                        ; segment seg2:0000
21df  push    bp                              
21e0  mov     bp,sp                           
21e2  push    ds                              
21e3  mov     ds,ax                           
21e5  push    word ptr [630h]                 
21e9  call far sub_2138                       
21ee  pop     bx                              
21ef  cmp     word ptr [632h],1h              
21f4  jne     21FDh                           
21f6  push    1h                              
21f8  call far SWITCHZOOM                     
21fd  cmp     word ptr [634h],1h              
2202  jne     220Bh                           
2204  push    1h                              
2206  call far M700.SWITCHWINDOWING           
220b  pop     ds                              
220c  leave                                   
220d  retf                                    

; ----- sub_220e -----
220e  mov     ax,21DDh                        ; segment seg2:0000
2211  push    bp                              
2212  mov     bp,sp                           
2214  push    ds                              
2215  mov     ds,ax                           
2217  mov     ax,[bp+6h]                      
221a  jmp     2295h                           
221c  call far M200.DOCOMMANDSCANRATE0        
2221  jmp     22C2h                           
2224  call far M200.DOCOMMANDSCANRATE1        
2229  jmp     22C2h                           
222c  call far M200.DOCOMMANDSCANRATE2        
2231  jmp     22C2h                           
2234  call far M200.DOCOMMANDSCANRATE3        
2239  jmp     22C2h                           
223c  call far M200.DOCOMMANDSCANRATE4        
2241  jmp     22C2h                           
2243  call far M200.DOCOMMANDSCANRATE5        
2248  jmp     22C2h                           
224a  call far M200.DOCOMMANDSCANRATE6        
224f  jmp     22C2h                           
2251  call far M200.DOCOMMANDSCANRATE7        
2256  jmp     22C2h                           
2258  call far M200.DOCOMMANDSCANRATE8        
225d  jmp     22C2h                           
225f  call far M200.DOCOMMANDSCANRATE9        
2264  jmp     22C2h                           
2266  call far M200.DOCOMMANDSCANRATE10       
226b  jmp     22C2h                           
226d  call far M200.DOCOMMANDSCANRATE11       
2272  pop     ds                              
2273  leave                                   
2274  retf                                    
2275  call far M200.DOCOMMANDSCANRATE12       
227a  pop     ds                              
227b  leave                                   
227c  retf                                    
227d  call far M200.DOCOMMANDSCANRATE13       
2282  pop     ds                              
2283  leave                                   
2284  retf                                    
2285  call far M200.DOCOMMANDSCANRATE14       
228a  pop     ds                              
228b  leave                                   
228c  retf                                    
228d  call far M200.DOCOMMANDSCANRATE15       
2292  pop     ds                              
2293  leave                                   
2294  retf                                    
2295  cmp     ax,0Fh                          
2298  ja      22C2h                           
229a  add     ax,ax                           
229c  xchg    ax,bx                           
229d  jmp     word ptr cs:[bx+22A2h]          
22a2  sbb     al,22h                          
22a4  and     al,22h                          
22a6  sub     al,22h                          
22a8  xor     al,22h                          
22aa  cmp     al,22h                          
22ac  inc     bx                              
22ad  and     cl,[bp+si+22h]                  
22b0  push    cx                              
22b1  and     bl,[bx+si+22h]                  
22b4  pop     di                              
22b5  and     ah,[bp+22h]                     
22b8  insw                                    
22b9  and     dh,[di+22h]                     
22bc  jge     22E0h                           
22be  test    [bp+si],sp                      
22c0  lea     sp,[bp+si]                      
22c2  pop     ds                              
22c3  leave                                   
22c4  retf                                    
22c5  add     [bx+si],al                      

; ----- sub_22c6 -----
22c6  mov     ax,220Fh                        ; segment seg2:0000
22c9  push    bp                              
22ca  mov     bp,sp                           
22cc  push    si                              
22cd  push    ds                              
22ce  mov     ds,ax                           
22d0  push    11h                             
22d2  call far M007.M007_GETSTATE             ; DP_SCANRATE
22d7  push    0ADh                            
22da  mov     si,ax                           
22dc  call far M007.M007_GETSTATE             ; DP_MAX_RATE
22e1  cmp     si,ax                           
22e3  jge     234Ah                           
22e5  push    0ADh                            
22e8  call far M007.M007_GETSTATE             ; DP_MAX_RATE
22ed  jmp     233Eh                           
22ef  push    1Eh                             
22f1  call far M007.COMMANDENABLE             
22f6  or      ax,ax                           
22f8  jne     2301h                           
22fa  call far M200.DOCOMMANDSCANRATE1        
22ff  jmp     234Ah                           
2301  push    1Fh                             
2303  call far M007.COMMANDENABLE             
2308  or      ax,ax                           
230a  jne     2313h                           
230c  call far M200.DOCOMMANDSCANRATE2        
2311  jmp     234Ah                           
2313  push    20h                             
2315  call far M007.COMMANDENABLE             
231a  or      ax,ax                           
231c  jne     2325h                           
231e  call far M200.DOCOMMANDSCANRATE3        
2323  jmp     234Ah                           
2325  push    21h                             
2327  call far M007.COMMANDENABLE             
232c  or      ax,ax                           
232e  jne     2337h                           
2330  call far M200.DOCOMMANDSCANRATE4        
2335  jmp     234Ah                           
2337  call far M200.DOCOMMANDSCANRATE5        
233c  jmp     234Ah                           
233e  dec     ax                              
233f  je      22EFh                           
2341  dec     ax                              
2342  je      2301h                           
2344  dec     ax                              
2345  je      2313h                           
2347  dec     ax                              
2348  je      2325h                           
234a  pop     ds                              
234b  pop     si                              
234c  leave                                   
234d  retf                                    

; ----- sub_234e -----
234e  mov     ax,22C7h                        ; segment seg2:0000
2351  push    bp                              
2352  mov     bp,sp                           
2354  push    ds                              
2355  mov     ds,ax                           
2357  cmp     word ptr [10h],0h               
235c  jne     2361h                           
235e  jmp     2461h                           
2361  cmp     byte ptr [12h],0h               
2366  je      23BDh                           
2368  wait                                    
2369  fld     dword ptr [14h]                 ; [ds] = 1
236d  wait                                    
236e  fcom    qword ptr [2A4h]                ; [ds] = 1
2372  wait                                    
2373  fstp    st(0)                           
2375  wait                                    
2376  fstsw   ax                              
2378  sahf                                    
2379  jb      2399h                           
237b  push    0C5h                            
237e  push    word ptr [2AEh]                 
2382  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2386  call far M007.M007_PUTVALUE             ; AP_MAG0
238b  push    0C9h                            
238e  push    word ptr [16h]                  
2392  push    word ptr [14h]                  ; [ds] f32 here = 1
2396  jmp     245Ch                           
2399  push    0C5h                            
239c  wait                                    
239d  fld     dword ptr [14h]                 ; [ds] = 1
23a1  wait                                    
23a2  fld1                                    
23a4  wait                                    
23a5  fdivrp  st(1), st(0)                    
23a7  sub     sp,4h                           
23aa  mov     bx,sp                           
23ac  wait                                    
23ad  fstp    dword ptr ss:[bx]               
23b0  nop                                     
23b1  wait                                    
23b2  call far M007.M007_PUTVALUE             ; AP_MAG4 = 197
23b7  push    0C9h                            
23ba  jmp     2454h                           
23bd  wait                                    
23be  fld     dword ptr [14h]                 ; [ds] = 1
23c2  wait                                    
23c3  fcom    qword ptr [2A4h]                ; [ds] = 1
23c7  wait                                    
23c8  fstp    st(0)                           
23ca  wait                                    
23cb  fstsw   ax                              
23cd  sahf                                    
23ce  jb      2405h                           
23d0  push    0C5h                            
23d3  push    word ptr [2AEh]                 
23d7  push    word ptr [2ACh]                 ; [ds] f32 here = 1
23db  call far M007.M007_PUTVALUE             ; AP_MAG4 = 197
23e0  push    0C9h                            
23e3  push    word ptr [2AEh]                 
23e7  push    word ptr [2ACh]                 ; [ds] f32 here = 1
23eb  call far M007.M007_PUTVALUE             ; AP_MAG4
23f0  push    0C6h                            
23f3  push    word ptr [16h]                  
23f7  push    word ptr [14h]                  ; [ds] f32 here = 1
23fb  call far M007.M007_PUTVALUE             ; AP_MAG1
2400  push    0CAh                            
2403  jmp     238Eh                           
2405  push    0C5h                            
2408  wait                                    
2409  fld     dword ptr [14h]                 ; [ds] = 1
240d  wait                                    
240e  fld1                                    
2410  wait                                    
2411  fdivrp  st(1), st(0)                    
2413  sub     sp,4h                           
2416  mov     bx,sp                           
2418  wait                                    
2419  fstp    dword ptr ss:[bx]               
241c  nop                                     
241d  wait                                    
241e  call far M007.M007_PUTVALUE             ; AP_MAG5 = 197
2423  push    0C9h                            
2426  wait                                    
2427  fld     dword ptr [14h]                 ; [ds] = 1
242b  wait                                    
242c  fld1                                    
242e  wait                                    
242f  fdivrp  st(1), st(0)                    
2431  sub     sp,4h                           
2434  mov     bx,sp                           
2436  wait                                    
2437  fstp    dword ptr ss:[bx]               
243a  nop                                     
243b  wait                                    
243c  call far M007.M007_PUTVALUE             ; AP_MAG4
2441  push    0C6h                            
2444  push    word ptr [2AEh]                 
2448  push    word ptr [2ACh]                 ; [ds] f32 here = 1
244c  call far M007.M007_PUTVALUE             ; AP_MAG1
2451  push    0CAh                            
2454  push    word ptr [2AEh]                 
2458  push    word ptr [2ACh]                 ; [ds] f32 here = 1
245c  call far M007.M007_PUTVALUE             ; AP_MAG5
2461  pop     ds                              
2462  leave                                   
2463  retf                                    

; ===== POINTASZONE =====
2464  mov     ax,234Fh                        ; segment seg2:0000
2467  enter   0Ah,0h                          
246b  push    ds                              
246c  mov     ds,ax                           
246e  mov     word ptr [bp-8h],180h           
2473  mov     word ptr [bp-0Ah],200h          
2478  cmp     word ptr [bp+0Ah],0h            
247c  jl      2492h                           
247e  cmp     word ptr [bp+0Ah],400h          
2483  jge     2492h                           
2485  cmp     word ptr [bp+8h],0h             
2489  jl      2492h                           
248b  cmp     word ptr [bp+8h],300h           
2490  jl      2497h                           
2492  mov     ax,0FFFFh                       
2495  jmp     2507h                           
2497  push    20h                             
2499  call far M007.M007_GETSTATE             ; DP_WINDOWING
249e  dec     ax                              
249f  jne     24AFh                           
24a1  push    word ptr [bp+0Ah]               
24a4  push    word ptr [bp+8h]                
24a7  call far M700.POINTINWINDOW             
24ac  cbw                                     
24ad  jmp     2507h                           
24af  push    75h                             
24b1  call far M007.M007_GETSTATE             ; DP_CHANNEL
24b6  or      ax,ax                           
24b8  jne     24BFh                           
24ba  mov     [bp-2h],ax                      
24bd  jmp     24C4h                           
24bf  mov     word ptr [bp-2h],4h             
24c4  mov     ax,[bp+6h]                      
24c7  dec     ax                              
24c8  je      24CFh                           
24ca  dec     ax                              
24cb  je      24DCh                           
24cd  jmp     24D7h                           
24cf  mov     ax,[bp+0Ah]                     
24d2  cmp     [bp-0Ah],ax                     
24d5  jle     24FBh                           
24d7  mov     ax,[bp-2h]                      
24da  jmp     2507h                           
24dc  mov     ax,[bp+0Ah]                     
24df  cmp     [bp-0Ah],ax                     
24e2  jle     24F3h                           
24e4  mov     ax,[bp+8h]                      
24e7  cmp     [bp-8h],ax                      
24ea  jg      24D7h                           
24ec  mov     ax,[bp-2h]                      
24ef  inc     ax                              
24f0  inc     ax                              
24f1  jmp     2507h                           
24f3  mov     ax,[bp+8h]                      
24f6  cmp     [bp-8h],ax                      
24f9  jle     2501h                           
24fb  mov     ax,[bp-2h]                      
24fe  inc     ax                              
24ff  jmp     2507h                           
2501  mov     ax,[bp-2h]                      
2504  add     ax,3h                           
2507  pop     ds                              
2508  leave                                   
2509  retf    6h                              

; ----- sub_250c -----
250c  mov     ax,2465h                        ; segment seg2:0000
250f  push    bp                              
2510  mov     bp,sp                           
2512  push    ds                              
2513  mov     ds,ax                           
2515  push    0h                              
2517  call far SWITCHZOOM                     
251c  push    0h                              
251e  call far SWITCHSPOT                     
2523  push    0h                              
2525  call far SWITCHLINE_SCAN                
252a  push    0h                              
252c  call far M700.SWITCHWINDOWING           
2531  pop     ds                              
2532  leave                                   
2533  retf                                    

; ----- sub_2534 -----
2534  mov     ax,250Dh                        ; segment seg2:0000
2537  push    bp                              
2538  mov     bp,sp                           
253a  push    ds                              
253b  mov     ds,ax                           
253d  push    word ptr [2B2h]                 
2541  push    word ptr [2B0h]                 ; [ds] f32 here = 512
2545  push    word ptr [2B6h]                 
2549  push    word ptr [2B4h]                 ; [ds] f32 here = 384
254d  call far SETXYCROSS                     
2552  push    1Eh                             
2554  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
2559  cmp     ax,3h                           
255c  jne     256Bh                           
255e  push    word ptr [2BAh]                 ; [ds] f32 here = 0
2562  push    word ptr [2B8h]                 ; [ds] f32 here = 0
2566  call far M200.SETEOEMISSION             
256b  pop     ds                              
256c  leave                                   
256d  retf                                    

; ===== SWITCHHIGH_RES =====
256e  mov     ax,2535h                        ; segment seg2:0000
2571  push    bp                              
2572  mov     bp,sp                           
2574  push    ds                              
2575  mov     ds,ax                           
2577  push    7Ah                             
2579  push    word ptr [bp+6h]                
257c  call far M007.M007_PUTSTATE             ; DP_HIGH_RES
2581  pop     ds                              
2582  leave                                   
2583  retf    2h                              

; ===== SWITCHFREEZE_BLANKS =====
2586  mov     ax,256Fh                        ; segment seg2:0000
2589  push    bp                              
258a  mov     bp,sp                           
258c  push    ds                              
258d  mov     ds,ax                           
258f  push    0DAh                            
2592  push    word ptr [bp+6h]                
2595  call far M007.M007_PUTSTATE             ; DP_FREEZE_BLANKS
259a  pop     ds                              
259b  leave                                   
259c  retf    2h                              
259f  add     [bx+si],al                      

; ===== DOCOMMANDMODE_TV =====
25a0  mov     ax,2587h                        ; segment seg2:0000
25a3  push    bp                              
25a4  mov     bp,sp                           
25a6  push    ds                              
25a7  mov     ds,ax                           
25a9  pop     ds                              
25aa  leave                                   
25ab  retf                                    

; ===== DOCOMMANDMODE_NORMAL =====
25ac  mov     ax,25A1h                        ; segment seg2:0000
25af  push    bp                              
25b0  mov     bp,sp                           
25b2  push    ds                              
25b3  mov     ds,ax                           
25b5  call far sub_250c                       
25ba  push    0CDh                            
25bd  call far M007.M007_GETSTATE             ; DP_FEATURESCAN
25c2  dec     ax                              
25c3  jne     25CAh                           
25c5  call far M200.STOP_FEATURESCAN          
25ca  call far sub_2534                       
25cf  push    0ADh                            
25d2  push    0h                              
25d4  call far M007.M007_PUTSTATE             ; DP_MAX_RATE = 0
25d9  push    1Eh                             
25db  push    0h                              
25dd  call far M007.M007_PUTSTATE             ; DP_OPERATING_MODE = 0
25e2  mov     byte ptr [12h],1h               
25e7  call far sub_234e                       
25ec  call far M700.DOCOMMANDUNFREEZE_ALL     
25f1  push    0h                              
25f3  push    0h                              
25f5  push    0h                              
25f7  push    400h                            
25fa  push    300h                            
25fd  call far M200.SETEOCOLUMNSCAN           
2602  call far M700.Z130_UPDATE_DETECTORS     
2607  call far M700.UPDATE_DETECTORS          
260c  call far sub_2112                       
2611  push    64h                             
2613  call far M007.M007_GETSTATE             ; DP_ZONE
2618  test    al,3h                           
261a  je      262Ch                           
261c  push    64h                             
261e  call far M007.M007_GETSTATE             ; DP_ZONE
2623  and     ax,4h                           
2626  push    ax                              
2627  call far M700.SWITCHZONE                
262c  call far M200.CHECKFORBEAMBLANKING      
2631  pop     ds                              
2632  leave                                   
2633  retf                                    

; ===== DOCOMMANDMODE_SPLIT =====
2634  mov     ax,25ADh                        ; segment seg2:0000
2637  push    bp                              
2638  mov     bp,sp                           
263a  push    ds                              
263b  mov     ds,ax                           
263d  call far sub_250c                       
2642  call far sub_2534                       
2647  push    0ADh                            
264a  push    1h                              
264c  call far M007.M007_PUTSTATE             ; DP_MAX_RATE = 1
2651  call far sub_22c6                       
2656  push    1Eh                             
2658  push    1h                              
265a  call far M007.M007_PUTSTATE             ; DP_OPERATING_MODE = 1
265f  mov     byte ptr [12h],0h               
2664  call far sub_234e                       
2669  call far M700.DOCOMMANDUNFREEZE_ALL     
266e  push    1h                              
2670  push    0h                              
2672  push    0h                              
2674  push    200h                            
2677  push    300h                            
267a  call far M200.SETEOCOLUMNSCAN           
267f  call far M700.Z130_UPDATE_DETECTORS     
2684  call far M700.UPDATE_DETECTORS          
2689  call far sub_2112                       
268e  push    64h                             
2690  call far M007.M007_GETSTATE             ; DP_ZONE
2695  test    al,1h                           
2697  je      26A9h                           
2699  push    64h                             
269b  call far M007.M007_GETSTATE             ; DP_ZONE
26a0  and     ax,4h                           
26a3  push    ax                              
26a4  call far M700.SWITCHZONE                
26a9  call far M200.CHECKFORBEAMBLANKING      
26ae  pop     ds                              
26af  leave                                   
26b0  retf                                    
26b1  add     [bx+si],al                      

; ===== DOCOMMANDMODE_QUAD =====
26b2  mov     ax,2635h                        ; segment seg2:0000
26b5  push    bp                              
26b6  mov     bp,sp                           
26b8  push    ds                              
26b9  mov     ds,ax                           
26bb  call far sub_250c                       
26c0  call far sub_2534                       
26c5  push    0ADh                            
26c8  push    1h                              
26ca  call far M007.M007_PUTSTATE             ; DP_MAX_RATE = 1
26cf  call far sub_22c6                       
26d4  push    1Eh                             
26d6  push    2h                              
26d8  call far M007.M007_PUTSTATE             ; DP_OPERATING_MODE = 2
26dd  call far M700.DOCOMMANDUNFREEZE_ALL     
26e2  push    2h                              
26e4  push    0h                              
26e6  push    0h                              
26e8  push    200h                            
26eb  push    180h                            
26ee  call far M200.SETEOCOLUMNSCAN           
26f3  call far sub_2112                       
26f8  call far M700.Z130_UPDATE_DETECTORS     
26fd  call far M700.UPDATE_DETECTORS          
2702  call far M200.CHECKFORBEAMBLANKING      
2707  pop     ds                              
2708  leave                                   
2709  retf                                    

; ===== DOCOMMANDMODE_SMALL =====
270a  mov     ax,26B3h                        ; segment seg2:0000
270d  push    bp                              
270e  mov     bp,sp                           
2710  push    ds                              
2711  mov     ds,ax                           
2713  call far sub_250c                       
2718  call far sub_2534                       
271d  push    0ADh                            
2720  push    1h                              
2722  call far M007.M007_PUTSTATE             ; DP_MAX_RATE = 1
2727  call far sub_22c6                       
272c  push    1Eh                             
272e  push    4h                              
2730  call far M007.M007_PUTSTATE             ; DP_OPERATING_MODE = 4
2735  call far M700.DOCOMMANDUNFREEZE_ALL     
273a  push    0h                              
273c  push    100h                            
273f  push    0C0h                            
2742  push    200h                            
2745  push    180h                            
2748  call far M200.SETEOCOLUMNSCAN           
274d  call far sub_2112                       
2752  call far M700.Z130_UPDATE_DETECTORS     
2757  call far M700.UPDATE_DETECTORS          
275c  call far M200.CHECKFORBEAMBLANKING      
2761  pop     ds                              
2762  leave                                   
2763  retf                                    

; ===== DOCOMMANDMODE_REDUCED =====
2764  mov     ax,270Bh                        ; segment seg2:0000
2767  enter   1Ch,0h                          
276b  push    ds                              
276c  mov     ds,ax                           
276e  push    11h                             
2770  call far M007.ISLICENCED                
2775  dec     ax                              
2776  je      2786h                           
2778  push    0A5h                            
277b  call far M007.M007_GETSTATE             ; DP_CALIBRATION
2780  dec     ax                              
2781  je      2786h                           
2783  jmp     2910h                           
2786  call far sub_250c                       
278b  call far sub_2534                       
2790  mov     word ptr [bp-2h],40h            
2795  push    4Ch                             
2797  lea     ax,[bp-10h]                     
279a  push    ax                              
279b  call far M007.M007_GETVALUE             ; AP_RED_RASTER_POSN_X
27a0  mov     bx,ax                           
27a2  wait                                    
27a3  fld     dword ptr ss:[bx]               
27a6  call far sub_010e                       
27ab  mov     [bp-4h],ax                      
27ae  push    4Dh                             
27b0  lea     ax,[bp-14h]                     
27b3  push    ax                              
27b4  call far M007.M007_GETVALUE             ; AP_RED_RASTER_POSN_Y
27b9  mov     bx,ax                           
27bb  wait                                    
27bc  fld     dword ptr ss:[bx]               
27bf  call far sub_010e                       
27c4  mov     [bp-6h],ax                      
27c7  push    4Eh                             
27c9  lea     ax,[bp-18h]                     
27cc  push    ax                              
27cd  call far M007.M007_GETVALUE             ; AP_RED_RASTER_W
27d2  mov     bx,ax                           
27d4  wait                                    
27d5  fld     dword ptr ss:[bx]               
27d8  call far sub_010e                       
27dd  mov     [bp-0Ah],ax                     
27e0  push    4Fh                             
27e2  lea     ax,[bp-1Ch]                     
27e5  push    ax                              
27e6  call far M007.M007_GETVALUE             ; AP_RED_RASTER_H
27eb  mov     bx,ax                           
27ed  wait                                    
27ee  fld     dword ptr ss:[bx]               
27f1  call far sub_010e                       
27f6  mov     [bp-0Ch],ax                     
27f9  mov     ax,[bp-0Ah]                     
27fc  cwd                                     
27fd  and     dx,0Fh                          
2800  add     ax,dx                           
2802  sar     ax,4h                           
2805  shl     ax,4h                           
2808  mov     [bp-0Ah],ax                     
280b  cmp     ax,40h                          
280e  jge     2815h                           
2810  mov     word ptr [bp-0Ah],40h           
2815  push    4Eh                             
2817  wait                                    
2818  fild    word ptr [bp-0Ah]               
281b  sub     sp,4h                           
281e  mov     bx,sp                           
2820  wait                                    
2821  fstp    dword ptr ss:[bx]               
2824  nop                                     
2825  wait                                    
2826  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_W
282b  cmp     word ptr [bp-0Ah],400h          
2830  jl      2839h                           
2832  push    0ADh                            
2835  push    0h                              
2837  jmp     2868h                           
2839  cmp     word ptr [bp-0Ah],200h          
283e  jl      2847h                           
2840  push    0ADh                            
2843  push    1h                              
2845  jmp     2868h                           
2847  cmp     word ptr [bp-0Ah],100h          
284c  jl      2855h                           
284e  push    0ADh                            
2851  push    2h                              
2853  jmp     2868h                           
2855  cmp     word ptr [bp-0Ah],80h           
285a  jl      2863h                           
285c  push    0ADh                            
285f  push    3h                              
2861  jmp     2868h                           
2863  push    0ADh                            
2866  push    4h                              
2868  call far M007.M007_PUTSTATE             ; DP_MAX_RATE = 0
286d  call far sub_22c6                       
2872  mov     word ptr [bp-8h],10h            
2877  mov     ax,[bp-4h]                      
287a  cwd                                     
287b  and     dx,0Fh                          
287e  add     ax,dx                           
2880  sar     ax,4h                           
2883  shl     ax,4h                           
2886  mov     [bp-4h],ax                      
2889  add     ax,[bp-0Ah]                     
288c  cmp     ax,400h                         
288f  jle     289Ah                           
2891  mov     ax,400h                         
2894  sub     ax,[bp-0Ah]                     
2897  mov     [bp-4h],ax                      
289a  mov     ax,[bp-0Ch]                     
289d  add     ax,[bp-6h]                      
28a0  cmp     ax,300h                         
28a3  jle     28AEh                           
28a5  mov     ax,300h                         
28a8  sub     ax,[bp-0Ch]                     
28ab  mov     [bp-6h],ax                      
28ae  push    4Ch                             
28b0  wait                                    
28b1  fild    word ptr [bp-4h]                
28b4  sub     sp,4h                           
28b7  mov     bx,sp                           
28b9  wait                                    
28ba  fstp    dword ptr ss:[bx]               
28bd  wait                                    
28be  fild    word ptr [bp-6h]                
28c1  sub     sp,4h                           
28c4  mov     bx,sp                           
28c6  wait                                    
28c7  fstp    dword ptr ss:[bx]               
28ca  nop                                     
28cb  wait                                    
28cc  call far M007.M007_PUTXY                ; AP_RED_RASTER_POSN_X
28d1  push    1Eh                             
28d3  push    5h                              
28d5  call far M007.M007_PUTSTATE             ; DP_OPERATING_MODE = 5
28da  call far M700.DOCOMMANDUNFREEZE_ALL     
28df  push    144h                            
28e2  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
28e7  push    0h                              
28e9  push    word ptr [bp-4h]                
28ec  push    word ptr [bp-6h]                
28ef  push    word ptr [bp-0Ah]               
28f2  push    word ptr [bp-0Ch]               
28f5  call far M200.SETEOCOLUMNSCAN           
28fa  call far sub_2112                       
28ff  call far M700.Z130_UPDATE_DETECTORS     
2904  call far M700.UPDATE_DETECTORS          
2909  call far M200.CHECKFORBEAMBLANKING      
290e  jmp     2915h                           
2910  call far DOCOMMANDMODE_SMALL            
2915  push    64h                             
2917  call far M007.M007_GETSTATE             ; DP_ZONE
291c  test    al,3h                           
291e  je      2930h                           
2920  push    64h                             
2922  call far M007.M007_GETSTATE             ; DP_ZONE
2927  and     ax,4h                           
292a  push    ax                              
292b  call far M700.SWITCHZONE                
2930  pop     ds                              
2931  leave                                   
2932  retf                                    
2933  add     [bx+si],al                      

; ===== REDUCEDRASTER =====
2934  mov     ax,2765h                        ; segment seg2:0000
2937  enter   4h,0h                           
293b  push    ds                              
293c  mov     ds,ax                           
293e  push    1Eh                             
2940  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
2945  cmp     ax,5h                           
2948  jne     2955h                           
294a  push    77h                             
294c  call far M007.M007_GETSTATE             ; DP_AUTO_FUNCTION
2951  or      ax,ax                           
2953  je      2958h                           
2955  jmp     2A4Fh                           
2958  cmp     word ptr [bp+8h],40h            
295c  jge     2963h                           
295e  mov     word ptr [bp+8h],40h            
2963  cmp     word ptr [bp+8h],400h           
2968  jl      2970h                           
296a  push    0ADh                            
296d  push    ax                              
296e  jmp     299Fh                           
2970  cmp     word ptr [bp+8h],200h           
2975  jl      297Eh                           
2977  push    0ADh                            
297a  push    1h                              
297c  jmp     299Fh                           
297e  cmp     word ptr [bp+8h],100h           
2983  jl      298Ch                           
2985  push    0ADh                            
2988  push    2h                              
298a  jmp     299Fh                           
298c  cmp     word ptr [bp+8h],80h            
2991  jl      299Ah                           
2993  push    0ADh                            
2996  push    3h                              
2998  jmp     299Fh                           
299a  push    0ADh                            
299d  push    4h                              
299f  call far M007.M007_PUTSTATE             ; DP_MAX_RATE = 173
29a4  call far sub_22c6                       
29a9  mov     ax,[bp+0Ch]                     
29ac  cwd                                     
29ad  and     dx,0Fh                          
29b0  add     ax,dx                           
29b2  sar     ax,4h                           
29b5  shl     ax,4h                           
29b8  mov     [bp+0Ch],ax                     
29bb  add     ax,[bp+8h]                      
29be  cmp     ax,400h                         
29c1  jle     29CCh                           
29c3  mov     ax,400h                         
29c6  sub     ax,[bp+8h]                      
29c9  mov     [bp+0Ch],ax                     
29cc  mov     ax,[bp+6h]                      
29cf  add     ax,[bp+0Ah]                     
29d2  cmp     ax,300h                         
29d5  jle     29E0h                           
29d7  mov     ax,300h                         
29da  sub     ax,[bp+6h]                      
29dd  mov     [bp+0Ah],ax                     
29e0  push    4Ch                             
29e2  wait                                    
29e3  fild    word ptr [bp+0Ch]               
29e6  sub     sp,4h                           
29e9  mov     bx,sp                           
29eb  wait                                    
29ec  fstp    dword ptr ss:[bx]               
29ef  wait                                    
29f0  fild    word ptr [bp+0Ah]               
29f3  sub     sp,4h                           
29f6  mov     bx,sp                           
29f8  wait                                    
29f9  fstp    dword ptr ss:[bx]               
29fc  nop                                     
29fd  wait                                    
29fe  call far M007.M007_PUTXY                ; AP_RED_RASTER_POSN_X
2a03  push    4Fh                             
2a05  wait                                    
2a06  fild    word ptr [bp+6h]                
2a09  sub     sp,4h                           
2a0c  mov     bx,sp                           
2a0e  wait                                    
2a0f  fstp    dword ptr ss:[bx]               
2a12  nop                                     
2a13  wait                                    
2a14  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_H
2a19  push    4Eh                             
2a1b  wait                                    
2a1c  fild    word ptr [bp+8h]                
2a1f  sub     sp,4h                           
2a22  mov     bx,sp                           
2a24  wait                                    
2a25  fstp    dword ptr ss:[bx]               
2a28  nop                                     
2a29  wait                                    
2a2a  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_W
2a2f  call far sub_2534                       
2a34  push    144h                            
2a37  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2a3c  push    0h                              
2a3e  push    word ptr [bp+0Ch]               
2a41  push    word ptr [bp+0Ah]               
2a44  push    word ptr [bp+8h]                
2a47  push    word ptr [bp+6h]                
2a4a  call far M200.SETEOCOLUMNSCAN           
2a4f  pop     ds                              
2a50  leave                                   
2a51  retf    8h                              

; ===== TEMPREDUCEDRASTER =====
2a54  mov     ax,2935h                        ; segment seg2:0000
2a57  enter   0Ah,0h                          
2a5b  push    ds                              
2a5c  mov     ds,ax                           
2a5e  mov     ax,[bp+0Ch]                     
2a61  cwd                                     
2a62  and     dx,0Fh                          
2a65  add     ax,dx                           
2a67  sar     ax,4h                           
2a6a  shl     ax,4h                           
2a6d  mov     [bp-2h],ax                      
2a70  mov     ax,[bp+8h]                      
2a73  cwd                                     
2a74  and     dx,0Fh                          
2a77  add     ax,dx                           
2a79  sar     ax,4h                           
2a7c  shl     ax,4h                           
2a7f  mov     [bp-6h],ax                      
2a82  cmp     ax,40h                          
2a85  jge     2A8Ch                           
2a87  mov     word ptr [bp-6h],40h            
2a8c  cmp     word ptr [bp-6h],400h           
2a91  jle     2A98h                           
2a93  mov     word ptr [bp-6h],400h           
2a98  mov     ax,[bp+0Ah]                     
2a9b  mov     [bp-4h],ax                      
2a9e  mov     ax,[bp+6h]                      
2aa1  mov     [bp-8h],ax                      
2aa4  cmp     ax,1h                           
2aa7  jge     2AAEh                           
2aa9  mov     word ptr [bp-8h],1h             
2aae  mov     ax,[bp-6h]                      
2ab1  add     ax,[bp-2h]                      
2ab4  cmp     ax,400h                         
2ab7  jle     2AC2h                           
2ab9  mov     ax,400h                         
2abc  sub     ax,[bp-6h]                      
2abf  mov     [bp-2h],ax                      
2ac2  mov     ax,[bp-8h]                      
2ac5  add     ax,[bp-4h]                      
2ac8  cmp     ax,300h                         
2acb  jle     2AD6h                           
2acd  mov     ax,300h                         
2ad0  sub     ax,[bp-8h]                      
2ad3  mov     [bp-4h],ax                      
2ad6  push    1Fh                             
2ad8  call far M007.M007_GETSTATE             ; DP_ZOOM
2add  dec     ax                              
2ade  jne     2AE5h                           
2ae0  call far DRAWZOOMBOX                    
2ae5  call far sub_250c                       
2aea  push    144h                            
2aed  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2af2  push    0h                              
2af4  push    word ptr [bp-2h]                
2af7  push    word ptr [bp-4h]                
2afa  push    word ptr [bp-6h]                
2afd  push    word ptr [bp-8h]                
2b00  call far M200.SETEOCOLUMNSCAN           
2b05  call far M200.CHECKFORBEAMBLANKING      
2b0a  pop     ds                              
2b0b  leave                                   
2b0c  retf    8h                              
2b0f  add     [bx+si],al                      

; ===== SETXYRED_RASTER_POSN =====
2b10  mov     ax,2A55h                        ; segment seg2:0000
2b13  push    bp                              
2b14  mov     bp,sp                           
2b16  push    ds                              
2b17  mov     ds,ax                           
2b19  push    4Ch                             
2b1b  push    word ptr [bp+0Ch]               
2b1e  push    word ptr [bp+0Ah]               
2b21  push    word ptr [bp+8h]                
2b24  push    word ptr [bp+6h]                
2b27  call far M007.M007_PUTXY                ; AP_RED_RASTER_POSN_X
2b2c  push    144h                            
2b2f  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2b34  or      ax,ax                           
2b36  jne     2B49h                           
2b38  push    1Eh                             
2b3a  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
2b3f  cmp     ax,5h                           
2b42  jne     2B49h                           
2b44  call far DOCOMMANDMODE_REDUCED          
2b49  pop     ds                              
2b4a  leave                                   
2b4b  retf    8h                              

; ===== SETRED_RASTER_W =====
2b4e  mov     ax,2B11h                        ; segment seg2:0000
2b51  push    bp                              
2b52  mov     bp,sp                           
2b54  push    ds                              
2b55  mov     ds,ax                           
2b57  push    4Eh                             
2b59  push    word ptr [bp+8h]                
2b5c  push    word ptr [bp+6h]                
2b5f  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_W
2b64  push    144h                            
2b67  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2b6c  or      ax,ax                           
2b6e  jne     2B81h                           
2b70  push    1Eh                             
2b72  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
2b77  cmp     ax,5h                           
2b7a  jne     2B81h                           
2b7c  call far DOCOMMANDMODE_REDUCED          
2b81  pop     ds                              
2b82  leave                                   
2b83  retf    4h                              

; ===== SETRED_RASTER_H =====
2b86  mov     ax,2B4Fh                        ; segment seg2:0000
2b89  push    bp                              
2b8a  mov     bp,sp                           
2b8c  push    ds                              
2b8d  mov     ds,ax                           
2b8f  push    4Fh                             
2b91  push    word ptr [bp+8h]                
2b94  push    word ptr [bp+6h]                
2b97  call far M007.M007_PUTVALUE             ; AP_RED_RASTER_H
2b9c  push    144h                            
2b9f  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2ba4  or      ax,ax                           
2ba6  jne     2BB9h                           
2ba8  push    1Eh                             
2baa  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
2baf  cmp     ax,5h                           
2bb2  jne     2BB9h                           
2bb4  call far DOCOMMANDMODE_REDUCED          
2bb9  pop     ds                              
2bba  leave                                   
2bbb  retf    4h                              

; ===== SWITCHZOOM =====
2bbe  mov     ax,2B87h                        ; segment seg2:0000
2bc1  enter   0Ch,0h                          
2bc5  push    ds                              
2bc6  mov     ds,ax                           
2bc8  cmp     word ptr [bp+6h],1h             
2bcc  jne     2C1Ah                           
2bce  mov     ax,[1Ch]                        
2bd1  or      ax,[1Ah]                        
2bd5  je      2BDFh                           
2bd7  sub     ax,ax                           
2bd9  mov     [1Ch],ax                        
2bdc  mov     [1Ah],ax                        
2bdf  push    0h                              
2be1  call far M700.SWITCHWINDOWING           
2be6  push    0h                              
2be8  call far SWITCHLINE_SCAN                
2bed  push    0h                              
2bef  call far SWITCHSPOT                     
2bf4  push    144h                            
2bf7  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2bfc  or      ax,ax                           
2bfe  jne     2C11h                           
2c00  push    1Eh                             
2c02  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
2c07  dec     ax                              
2c08  je      2C1Ah                           
2c0a  call far DOCOMMANDMODE_SPLIT            
2c0f  jmp     2C1Ah                           
2c11  push    1Eh                             
2c13  push    1h                              
2c15  call far M007.M007_PUTSTATE             ; DP_OPERATING_MODE = 1
2c1a  push    1Fh                             
2c1c  call far M007.M007_GETSTATE             ; DP_ZOOM
2c21  cmp     ax,[bp+6h]                      
2c24  jne     2C29h                           
2c26  jmp     2D27h                           
2c29  push    1Fh                             
2c2b  push    word ptr [bp+6h]                
2c2e  call far M007.M007_PUTSTATE             ; DP_ZOOM
2c33  cmp     word ptr [bp+6h],0h             
2c37  je      2C3Ch                           
2c39  jmp     2CD5h                           
2c3c  push    word ptr [2AEh]                 
2c40  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2c44  push    0h                              
2c46  push    0h                              
2c48  call far M200.SETEOZOOM                 
2c4d  mov     word ptr [10h],0h               
2c53  push    0C5h                            
2c56  push    word ptr [2AEh]                 
2c5a  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2c5e  call far M007.M007_PUTVALUE             ; AP_MAG0
2c63  push    0C6h                            
2c66  push    word ptr [2AEh]                 
2c6a  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2c6e  call far M007.M007_PUTVALUE             ; AP_MAG1
2c73  push    0C7h                            
2c76  push    word ptr [2AEh]                 
2c7a  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2c7e  call far M007.M007_PUTVALUE             ; AP_MAG2
2c83  push    0C8h                            
2c86  push    word ptr [2AEh]                 
2c8a  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2c8e  call far M007.M007_PUTVALUE             ; AP_MAG3
2c93  push    0C9h                            
2c96  push    word ptr [2AEh]                 
2c9a  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2c9e  call far M007.M007_PUTVALUE             ; AP_MAG4
2ca3  push    0CAh                            
2ca6  push    word ptr [2AEh]                 
2caa  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2cae  call far M007.M007_PUTVALUE             ; AP_MAG5
2cb3  push    0CBh                            
2cb6  push    word ptr [2AEh]                 
2cba  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2cbe  call far M007.M007_PUTVALUE             ; AP_MAG6
2cc3  push    0CCh                            
2cc6  push    word ptr [2AEh]                 
2cca  push    word ptr [2ACh]                 ; [ds] f32 here = 1
2cce  call far M007.M007_PUTVALUE             ; AP_MAG7
2cd3  jmp     2D27h                           
2cd5  push    43h                             
2cd7  lea     ax,[bp-0Ch]                     
2cda  push    ax                              
2cdb  call far M007.M007_GETVALUE             ; AP_ZOOM_FACTOR = 768
2ce0  mov     bx,ax                           
2ce2  push    word ptr ss:[bx+2h]             
2ce6  push    word ptr ss:[bx]                
2ce9  push    3Ah                             
2ceb  lea     ax,[bp-8h]                      
2cee  push    ax                              
2cef  call far M007.M007_GETVALUE             ; AP_ZOOMPOS_X
2cf4  mov     bx,ax                           
2cf6  wait                                    
2cf7  fld     dword ptr ss:[bx]               
2cfa  call far sub_010e                       
2cff  push    ax                              
2d00  push    3Bh                             
2d02  lea     ax,[bp-4h]                      
2d05  push    ax                              
2d06  call far M007.M007_GETVALUE             ; AP_ZOOMPOS_Y
2d0b  mov     bx,ax                           
2d0d  wait                                    
2d0e  fld     dword ptr ss:[bx]               
2d11  call far sub_010e                       
2d16  push    ax                              
2d17  call far M200.SETEOZOOM                 
2d1c  mov     word ptr [10h],1h               
2d22  call far sub_234e                       
2d27  pop     ds                              
2d28  leave                                   
2d29  retf    2h                              

; ===== SETZOOMBOX =====
2d2c  mov     ax,2BBFh                        ; segment seg2:0000
2d2f  enter   0Ch,0h                          
2d33  push    ds                              
2d34  mov     ds,ax                           
2d36  push    0E6h                            
2d39  lea     ax,[bp-8h]                      
2d3c  push    ax                              
2d3d  call far M007.M007_GETVALUE             ; AP_MINMAG
2d42  mov     bx,ax                           
2d44  wait                                    
2d45  fld     dword ptr ss:[bx]               
2d48  wait                                    
2d49  fmul    dword ptr [2BCh]                ; [ds] = 10
2d4d  push    0h                              
2d4f  lea     ax,[bp-4h]                      
2d52  push    ax                              
2d53  wait                                    
2d54  fstp    dword ptr [bp-0Ch]              
2d57  call far M007.M007_GETVALUE             ; AP_MAG
2d5c  wait                                    
2d5d  fld     dword ptr [bp-0Ch]              
2d60  mov     bx,ax                           
2d62  wait                                    
2d63  fcom    dword ptr ss:[bx]               
2d66  wait                                    
2d67  fstp    st(0)                           
2d69  wait                                    
2d6a  fstsw   ax                              
2d6c  sahf                                    
2d6d  jbe     2D92h                           
2d6f  lea     bx,[bp+0Ah]                     
2d72  wait                                    
2d73  fld     dword ptr ss:[bx]               
2d76  wait                                    
2d77  fcom    dword ptr [2ACh]                ; [ds] = 1
2d7b  wait                                    
2d7c  fstp    st(0)                           
2d7e  wait                                    
2d7f  fstsw   ax                              
2d81  sahf                                    
2d82  jae     2D92h                           
2d84  mov     ax,[2ACh]                       
2d87  mov     dx,[2AEh]                       
2d8b  mov     ss:[bx],ax                      
2d8e  mov     ss:[bx+2h],dx                   
2d92  push    1Fh                             
2d94  call far M007.M007_GETSTATE             ; DP_ZOOM
2d99  dec     ax                              
2d9a  jne     2DE4h                           
2d9c  push    43h                             
2d9e  wait                                    
2d9f  fld     dword ptr [bp+0Ah]              
2da2  wait                                    
2da3  fstp    dword ptr [bp-0Ch]              
2da6  nop                                     
2da7  wait                                    
2da8  push    word ptr [bp-0Ah]               
2dab  push    word ptr [bp-0Ch]               
2dae  call far M007.M007_PUTVALUE             ; AP_ZOOM_FACTOR
2db3  wait                                    
2db4  fild    word ptr [bp+8h]                
2db7  sub     sp,4h                           
2dba  mov     bx,sp                           
2dbc  wait                                    
2dbd  fstp    dword ptr ss:[bx]               
2dc0  wait                                    
2dc1  fild    word ptr [bp+6h]                
2dc4  sub     sp,4h                           
2dc7  mov     bx,sp                           
2dc9  wait                                    
2dca  fstp    dword ptr ss:[bx]               
2dcd  nop                                     
2dce  wait                                    
2dcf  call far SETXYZOOMPOS                   
2dd4  wait                                    
2dd5  fld     dword ptr [bp-0Ch]              
2dd8  wait                                    
2dd9  fstp    dword ptr [14h]                 ; [ds] = 1
2ddd  nop                                     
2dde  wait                                    
2ddf  call far sub_234e                       
2de4  pop     ds                              
2de5  leave                                   
2de6  retf    8h                              
2de9  add     [bx+si],al                      

; ===== SETZOOM_FACTOR =====
2dea  mov     ax,2D2Dh                        ; segment seg2:0000
2ded  enter   10h,0h                          
2df1  push    ds                              
2df2  mov     ds,ax                           
2df4  push    0E6h                            
2df7  lea     ax,[bp-8h]                      
2dfa  push    ax                              
2dfb  call far M007.M007_GETVALUE             ; AP_MINMAG
2e00  mov     bx,ax                           
2e02  wait                                    
2e03  fld     dword ptr ss:[bx]               
2e06  wait                                    
2e07  fmul    dword ptr [2BCh]                ; [ds] = 10
2e0b  push    0h                              
2e0d  lea     ax,[bp-4h]                      
2e10  push    ax                              
2e11  wait                                    
2e12  fstp    dword ptr [bp-0Ch]              
2e15  call far M007.M007_GETVALUE             ; AP_MAG
2e1a  wait                                    
2e1b  fld     dword ptr [bp-0Ch]              
2e1e  mov     bx,ax                           
2e20  wait                                    
2e21  fcom    dword ptr ss:[bx]               
2e24  wait                                    
2e25  fstp    st(0)                           
2e27  wait                                    
2e28  fstsw   ax                              
2e2a  sahf                                    
2e2b  jbe     2E50h                           
2e2d  lea     bx,[bp+6h]                      
2e30  wait                                    
2e31  fld     dword ptr ss:[bx]               
2e34  wait                                    
2e35  fcom    dword ptr [2ACh]                ; [ds] = 1
2e39  wait                                    
2e3a  fstp    st(0)                           
2e3c  wait                                    
2e3d  fstsw   ax                              
2e3f  sahf                                    
2e40  jae     2E50h                           
2e42  mov     ax,[2ACh]                       
2e45  mov     dx,[2AEh]                       
2e49  mov     ss:[bx],ax                      
2e4c  mov     ss:[bx+2h],dx                   
2e50  push    43h                             
2e52  wait                                    
2e53  fld     dword ptr [bp+6h]               
2e56  wait                                    
2e57  fstp    dword ptr [bp-4h]               
2e5a  nop                                     
2e5b  wait                                    
2e5c  push    word ptr [bp-2h]                
2e5f  push    word ptr [bp-4h]                
2e62  call far M007.M007_PUTVALUE             ; AP_ZOOM_FACTOR
2e67  push    1Fh                             
2e69  call far M007.M007_GETSTATE             ; DP_ZOOM
2e6e  dec     ax                              
2e6f  jne     2ED6h                           
2e71  push    3Ah                             
2e73  lea     ax,[bp-8h]                      
2e76  push    ax                              
2e77  call far M007.M007_GETVALUE             ; AP_ZOOMPOS_X
2e7c  mov     bx,ax                           
2e7e  wait                                    
2e7f  fld     dword ptr ss:[bx]               
2e82  call far sub_010e                       
2e87  mov     [bp-0Eh],ax                     
2e8a  wait                                    
2e8b  fild    word ptr [bp-0Eh]               
2e8e  sub     sp,4h                           
2e91  mov     bx,sp                           
2e93  wait                                    
2e94  fstp    dword ptr ss:[bx]               
2e97  nop                                     
2e98  wait                                    
2e99  push    3Bh                             
2e9b  lea     ax,[bp-0Ch]                     
2e9e  push    ax                              
2e9f  call far M007.M007_GETVALUE             ; AP_ZOOMPOS_Y
2ea4  mov     bx,ax                           
2ea6  wait                                    
2ea7  fld     dword ptr ss:[bx]               
2eaa  call far sub_010e                       
2eaf  mov     [bp-10h],ax                     
2eb2  wait                                    
2eb3  fild    word ptr [bp-10h]               
2eb6  sub     sp,4h                           
2eb9  mov     bx,sp                           
2ebb  wait                                    
2ebc  fstp    dword ptr ss:[bx]               
2ebf  nop                                     
2ec0  wait                                    
2ec1  call far SETXYZOOMPOS                   
2ec6  wait                                    
2ec7  fld     dword ptr [bp-4h]               
2eca  wait                                    
2ecb  fstp    dword ptr [14h]                 ; [ds] = 1
2ecf  nop                                     
2ed0  wait                                    
2ed1  call far sub_234e                       
2ed6  pop     ds                              
2ed7  leave                                   
2ed8  retf    4h                              
2edb  add     [bx+si],al                      

; ===== SETXYZOOMPOS =====
2edc  mov     ax,2DEBh                        ; segment seg2:0000
2edf  enter   10h,0h                          
2ee3  push    ds                              
2ee4  mov     ds,ax                           
2ee6  push    43h                             
2ee8  lea     ax,[bp-0Ch]                     
2eeb  push    ax                              
2eec  call far M007.M007_GETVALUE             ; AP_ZOOM_FACTOR
2ef1  mov     bx,ax                           
2ef3  mov     ax,ss:[bx]                      
2ef6  mov     dx,ss:[bx+2h]                   
2efa  mov     [bp-8h],ax                      
2efd  mov     [bp-6h],dx                      
2f00  push    1Eh                             
2f02  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
2f07  or      ax,ax                           
2f09  jne     2F12h                           
2f0b  mov     word ptr [bp-2h],400h           
2f10  jmp     2F17h                           
2f12  mov     word ptr [bp-2h],200h           
2f17  mov     word ptr [bp-4h],2FFh           
2f1c  wait                                    
2f1d  fld     dword ptr [bp-8h]               
2f20  wait                                    
2f21  fst     dword ptr [bp-0Ch]              
2f24  wait                                    
2f25  fcom    qword ptr [2A4h]                ; [ds] = 1
2f29  wait                                    
2f2a  fstp    st(0)                           
2f2c  wait                                    
2f2d  fstsw   ax                              
2f2f  sahf                                    
2f30  ja      2F4Dh                           
2f32  wait                                    
2f33  fild    word ptr [bp-2h]                
2f36  wait                                    
2f37  fmul    dword ptr [bp-0Ch]              
2f3a  call far sub_010e                       
2f3f  mov     [636h],ax                       
2f42  wait                                    
2f43  fld     dword ptr [bp-0Ch]              
2f46  wait                                    
2f47  fmul    dword ptr [2C0h]                ; [ds] = 767
2f4b  jmp     2F6Ch                           
2f4d  wait                                    
2f4e  fild    word ptr [bp-2h]                
2f51  wait                                    
2f52  fld     dword ptr [bp-8h]               
2f55  wait                                    
2f56  fst     dword ptr [bp-0Ch]              
2f59  wait                                    
2f5a  fdivp   st(1)                           
2f5c  call far sub_010e                       
2f61  mov     [636h],ax                       
2f64  wait                                    
2f65  fild    word ptr [bp-4h]                
2f68  wait                                    
2f69  fdiv    dword ptr [bp-0Ch]              
2f6c  call far sub_010e                       
2f71  mov     [638h],ax                       
2f74  lea     bx,[bp+0Ah]                     
2f77  wait                                    
2f78  fld     dword ptr ss:[bx]               
2f7b  wait                                    
2f7c  fiadd   word ptr [636h]                 
2f80  wait                                    
2f81  ficom   word ptr [bp-2h]                
2f84  wait                                    
2f85  fstp    st(0)                           
2f87  wait                                    
2f88  fstsw   ax                              
2f8a  sahf                                    
2f8b  jbe     2FA1h                           
2f8d  mov     ax,[bp-2h]                      
2f90  sub     ax,[636h]                       
2f94  mov     [bp-0Ch],ax                     
2f97  wait                                    
2f98  fild    word ptr [bp-0Ch]               
2f9b  wait                                    
2f9c  fstp    dword ptr ss:[bx]               
2f9f  nop                                     
2fa0  wait                                    
2fa1  lea     bx,[bp+6h]                      
2fa4  wait                                    
2fa5  fld     dword ptr ss:[bx]               
2fa8  wait                                    
2fa9  fiadd   word ptr [638h]                 
2fad  wait                                    
2fae  ficom   word ptr [bp-4h]                
2fb1  wait                                    
2fb2  fstp    st(0)                           
2fb4  wait                                    
2fb5  fstsw   ax                              
2fb7  sahf                                    
2fb8  jbe     2FCEh                           
2fba  mov     ax,[bp-4h]                      
2fbd  sub     ax,[638h]                       
2fc1  mov     [bp-0Ch],ax                     
2fc4  wait                                    
2fc5  fild    word ptr [bp-0Ch]               
2fc8  wait                                    
2fc9  fstp    dword ptr ss:[bx]               
2fcc  nop                                     
2fcd  wait                                    
2fce  push    3Ah                             
2fd0  wait                                    
2fd1  fld     dword ptr [bp+0Ah]              
2fd4  wait                                    
2fd5  fstp    dword ptr [bp-0Ch]              
2fd8  nop                                     
2fd9  wait                                    
2fda  push    word ptr [bp-0Ah]               
2fdd  push    word ptr [bp-0Ch]               
2fe0  wait                                    
2fe1  fld     dword ptr [bp+6h]               
2fe4  wait                                    
2fe5  fstp    dword ptr [bp-10h]              
2fe8  nop                                     
2fe9  wait                                    
2fea  push    word ptr [bp-0Eh]               
2fed  push    word ptr [bp-10h]               
2ff0  call far M007.M007_PUTXY                ; AP_ZOOMPOS_X
2ff5  push    1Fh                             
2ff7  call far M007.M007_GETSTATE             ; DP_ZOOM
2ffc  dec     ax                              
2ffd  jne     301Eh                           
2fff  push    word ptr [bp-6h]                
3002  push    word ptr [bp-8h]                
3005  wait                                    
3006  fld     dword ptr [bp-0Ch]              
3009  call far sub_010e                       
300e  push    ax                              
300f  wait                                    
3010  fld     dword ptr [bp-10h]              
3013  call far sub_010e                       
3018  push    ax                              
3019  call far M200.SETEOZOOM                 
301e  pop     ds                              
301f  leave                                   
3020  retf    8h                              
3023  add     [bx+si],al                      

; ===== SWITCHSPOT =====
3024  mov     ax,2EDDh                        ; segment seg2:0000
3027  enter   8h,0h                           
302b  push    ds                              
302c  mov     ds,ax                           
302e  push    21h                             
3030  call far M007.M007_GETSTATE             ; DP_SPOT
3035  cmp     ax,[bp+6h]                      
3038  jne     303Dh                           
303a  jmp     312Eh                           
303d  cmp     word ptr [bp+6h],1h             
3041  jne     3058h                           
3043  push    0h                              
3045  call far M700.SWITCHWINDOWING           
304a  push    0h                              
304c  call far SWITCHLINE_SCAN                
3051  push    0h                              
3053  call far SWITCHZOOM                     
3058  push    21h                             
305a  push    word ptr [bp+6h]                
305d  call far M007.M007_PUTSTATE             ; DP_SPOT
3062  cmp     word ptr [bp+6h],1h             
3066  jne     30D9h                           
3068  push    11h                             
306a  call far M007.M007_GETSTATE             ; DP_SCANRATE
306f  mov     [62Ch],ax                       
3072  push    6Eh                             
3074  call far M007.M007_GETSTATE             ; DP_AUTO_VIDEO
3079  mov     [62Eh],ax                       
307c  push    0h                              
307e  call far M700.SWITCHAUTO_VIDEO          
3083  push    18h                             
3085  call far M007.M007_GETSTATE             ; DP_DYNFOCUS
308a  mov     [18h],ax                        
308d  push    0h                              
308f  call far M200.SWITCHDYNFOCUS            
3094  call far sub_2534                       
3099  push    4h                              
309b  push    44h                             
309d  lea     ax,[bp-8h]                      
30a0  push    ax                              
30a1  call far M007.M007_GETVALUE             ; AP_STAGEANGLE = 68
30a6  mov     bx,ax                           
30a8  wait                                    
30a9  fld     dword ptr ss:[bx]               
30ac  call far sub_010e                       
30b1  push    ax                              
30b2  push    45h                             
30b4  lea     ax,[bp-4h]                      
30b7  push    ax                              
30b8  call far M007.M007_GETVALUE             ; AP_SPOT_POSN_Y
30bd  mov     bx,ax                           
30bf  wait                                    
30c0  fld     dword ptr ss:[bx]               
30c3  call far sub_010e                       
30c8  push    ax                              
30c9  push    0h                              
30cb  push    0h                              
30cd  call far M200.SETEOCOLUMNSCAN           
30d2  call far M700.START_SPOT_DATA           
30d7  jmp     3124h                           
30d9  push    0h                              
30db  call far M700.SWITCHEXT_SPOT_CONTROL    
30e0  call far M700.STOP_SPOT_DATA            
30e5  push    1Eh                             
30e7  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
30ec  push    ax                              
30ed  call far sub_2138                       
30f2  pop     bx                              
30f3  push    word ptr [62Ch]                 
30f7  call far sub_220e                       
30fc  pop     bx                              
30fd  push    word ptr [62Eh]                 
3101  call far M700.SWITCHAUTO_VIDEO          
3106  call far M700.DOCOMMANDSCM_IMAGE        
310b  push    0h                              
310d  lea     ax,[bp-8h]                      
3110  push    ax                              
3111  call far M007.M007_GETVALUE             ; AP_MAG
3116  mov     bx,ax                           
3118  push    word ptr ss:[bx+2h]             
311c  push    word ptr ss:[bx]                
311f  call far M200.SETMAG                    
3124  call far M700.Z130_UPDATE_DETECTORS     
3129  call far M700.UPDATE_DETECTORS          
312e  pop     ds                              
312f  leave                                   
3130  retf    2h                              
3133  add     [bx+si],al                      

; ===== SETXYSPOT_POSN =====
3134  mov     ax,3025h                        ; segment seg2:0000
3137  enter   8h,0h                           
313b  push    ds                              
313c  mov     ds,ax                           
313e  push    44h                             
3140  wait                                    
3141  fld     dword ptr [bp+0Ah]              
3144  wait                                    
3145  fstp    dword ptr [bp-4h]               
3148  nop                                     
3149  wait                                    
314a  push    word ptr [bp-2h]                
314d  push    word ptr [bp-4h]                
3150  wait                                    
3151  fld     dword ptr [bp+6h]               
3154  wait                                    
3155  fstp    dword ptr [bp-8h]               
3158  nop                                     
3159  wait                                    
315a  push    word ptr [bp-6h]                
315d  push    word ptr [bp-8h]                
3160  call far M007.M007_PUTXY                ; AP_SPOT_POSN_X
3165  push    21h                             
3167  call far M007.M007_GETSTATE             ; DP_SPOT
316c  dec     ax                              
316d  jne     318Eh                           
316f  push    4h                              
3171  wait                                    
3172  fld     dword ptr [bp-4h]               
3175  call far sub_010e                       
317a  push    ax                              
317b  wait                                    
317c  fld     dword ptr [bp-8h]               
317f  call far sub_010e                       
3184  push    ax                              
3185  push    0h                              
3187  push    0h                              
3189  call far M200.SETEOCOLUMNSCAN           
318e  pop     ds                              
318f  leave                                   
3190  retf    8h                              
3193  add     [bx+si],al                      

; ===== SWITCHXRAY_LINESCAN =====
3194  mov     ax,3135h                        ; segment seg2:0000
3197  enter   0Ah,0h                          
319b  push    ds                              
319c  mov     ds,ax                           
319e  push    0C7h                            
31a1  call far M007.M007_GETSTATE             ; DP_XRAY_LINESCAN
31a6  cmp     ax,[bp+6h]                      
31a9  jne     31AEh                           
31ab  jmp     32DAh                           
31ae  cmp     word ptr [bp+6h],1h             
31b2  jne     3216h                           
31b4  push    1Eh                             
31b6  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
31bb  or      ax,ax                           
31bd  je      31C4h                           
31bf  call far DOCOMMANDMODE_NORMAL           
31c4  push    0h                              
31c6  call far M700.SWITCHWINDOWING           
31cb  push    0h                              
31cd  call far SWITCHSPOT                     
31d2  push    0h                              
31d4  call far SWITCHZOOM                     
31d9  push    6Eh                             
31db  call far M007.M007_GETSTATE             ; DP_AUTO_VIDEO
31e0  mov     [62Eh],ax                       
31e3  push    0h                              
31e5  call far M700.SWITCHAUTO_VIDEO          
31ea  push    18h                             
31ec  call far M007.M007_GETSTATE             ; DP_DYNFOCUS
31f1  mov     [18h],ax                        
31f4  push    0h                              
31f6  call far M200.SWITCHDYNFOCUS            
31fb  push    11h                             
31fd  call far M007.M007_GETSTATE             ; DP_SCANRATE
3202  mov     [62Ch],ax                       
3205  push    11h                             
3207  call far M007.M007_GETSTATE             ; DP_SCANRATE
320c  cmp     ax,0Ah                          
320f  jge     3216h                           
3211  call far M200.DOCOMMANDSCANRATE10       
3216  push    0C7h                            
3219  push    word ptr [bp+6h]                
321c  call far M007.M007_PUTSTATE             ; DP_XRAY_LINESCAN
3221  cmp     word ptr [bp+6h],1h             
3225  jne     3295h                           
3227  push    1Eh                             
3229  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
322e  or      ax,ax                           
3230  jne     3239h                           
3232  mov     word ptr [bp-2h],400h           
3237  jmp     323Eh                           
3239  mov     word ptr [bp-2h],200h           
323e  push    48h                             
3240  wait                                    
3241  fild    word ptr [bp-2h]                
3244  sub     sp,4h                           
3247  mov     bx,sp                           
3249  wait                                    
324a  fstp    dword ptr ss:[bx]               
324d  nop                                     
324e  wait                                    
324f  call far M007.M007_PUTVALUE             ; AP_LINE_LENGTH
3254  call far sub_2534                       
3259  push    3h                              
325b  push    46h                             
325d  lea     ax,[bp-0Ah]                     
3260  push    ax                              
3261  call far M007.M007_GETVALUE             ; AP_SCANORTHOG = 70
3266  mov     bx,ax                           
3268  wait                                    
3269  fld     dword ptr ss:[bx]               
326c  call far sub_010e                       
3271  push    ax                              
3272  push    47h                             
3274  lea     ax,[bp-6h]                      
3277  push    ax                              
3278  call far M007.M007_GETVALUE             ; AP_LINE_POSN_Y
327d  mov     bx,ax                           
327f  wait                                    
3280  fld     dword ptr ss:[bx]               
3283  call far sub_010e                       
3288  push    ax                              
3289  push    word ptr [bp-2h]                
328c  push    0h                              
328e  call far M200.SETEOCOLUMNSCAN           
3293  jmp     32CDh                           
3295  push    0C1h                            
3298  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
329d  dec     ax                              
329e  jne     32A5h                           
32a0  call far M300.DOCOMMANDXRAY_STOP        
32a5  push    1Eh                             
32a7  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
32ac  push    ax                              
32ad  call far sub_2138                       
32b2  pop     bx                              
32b3  push    word ptr [62Ch]                 
32b7  call far sub_220e                       
32bc  pop     bx                              
32bd  push    word ptr [62Eh]                 
32c1  call far M700.SWITCHAUTO_VIDEO          
32c6  push    0h                              
32c8  call far M300.SWITCHLUT_MODE            
32cd  call far M700.UPDATE_DETECTORS          
32d2  push    word ptr [bp+6h]                
32d5  call far M300.SWITCHPROFILE             
32da  pop     ds                              
32db  leave                                   
32dc  retf    2h                              
32df  add     [bx+si],al                      

; ===== SWITCHLINE_SCAN =====
32e0  mov     ax,3195h                        ; segment seg2:0000
32e3  enter   0Ah,0h                          
32e7  push    ds                              
32e8  mov     ds,ax                           
32ea  push    22h                             
32ec  call far M007.M007_GETSTATE             ; DP_LINE_SCAN
32f1  cmp     ax,[bp+6h]                      
32f4  jne     32F9h                           
32f6  jmp     33DDh                           
32f9  cmp     word ptr [bp+6h],1h             
32fd  jne     3336h                           
32ff  push    0h                              
3301  call far M700.SWITCHWINDOWING           
3306  push    0h                              
3308  call far SWITCHSPOT                     
330d  push    0h                              
330f  call far SWITCHZOOM                     
3314  push    6Eh                             
3316  call far M007.M007_GETSTATE             ; DP_AUTO_VIDEO
331b  mov     [62Eh],ax                       
331e  push    0h                              
3320  call far M700.SWITCHAUTO_VIDEO          
3325  push    18h                             
3327  call far M007.M007_GETSTATE             ; DP_DYNFOCUS
332c  mov     [18h],ax                        
332f  push    0h                              
3331  call far M200.SWITCHDYNFOCUS            
3336  push    22h                             
3338  push    word ptr [bp+6h]                
333b  call far M007.M007_PUTSTATE             ; DP_LINE_SCAN
3340  cmp     word ptr [bp+6h],1h             
3344  jne     33B4h                           
3346  push    1Eh                             
3348  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
334d  or      ax,ax                           
334f  jne     3358h                           
3351  mov     word ptr [bp-2h],400h           
3356  jmp     335Dh                           
3358  mov     word ptr [bp-2h],200h           
335d  push    48h                             
335f  wait                                    
3360  fild    word ptr [bp-2h]                
3363  sub     sp,4h                           
3366  mov     bx,sp                           
3368  wait                                    
3369  fstp    dword ptr ss:[bx]               
336c  nop                                     
336d  wait                                    
336e  call far M007.M007_PUTVALUE             ; AP_LINE_LENGTH
3373  call far sub_2534                       
3378  push    3h                              
337a  push    46h                             
337c  lea     ax,[bp-0Ah]                     
337f  push    ax                              
3380  call far M007.M007_GETVALUE             ; AP_SCANORTHOG = 70
3385  mov     bx,ax                           
3387  wait                                    
3388  fld     dword ptr ss:[bx]               
338b  call far sub_010e                       
3390  push    ax                              
3391  push    47h                             
3393  lea     ax,[bp-6h]                      
3396  push    ax                              
3397  call far M007.M007_GETVALUE             ; AP_LINE_POSN_Y
339c  mov     bx,ax                           
339e  wait                                    
339f  fld     dword ptr ss:[bx]               
33a2  call far sub_010e                       
33a7  push    ax                              
33a8  push    word ptr [bp-2h]                
33ab  push    0h                              
33ad  call far M200.SETEOCOLUMNSCAN           
33b2  jmp     33CBh                           
33b4  push    1Eh                             
33b6  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
33bb  push    ax                              
33bc  call far sub_2138                       
33c1  pop     bx                              
33c2  push    word ptr [62Eh]                 
33c6  call far M700.SWITCHAUTO_VIDEO          
33cb  call far M700.Z130_UPDATE_DETECTORS     
33d0  call far M700.UPDATE_DETECTORS          
33d5  push    word ptr [bp+6h]                
33d8  call far M300.SWITCHPROFILE             
33dd  pop     ds                              
33de  leave                                   
33df  retf    2h                              

; ===== SETXYLINE_POSN =====
33e2  mov     ax,32E1h                        ; segment seg2:0000
33e5  enter   4h,0h                           
33e9  push    ds                              
33ea  mov     ds,ax                           
33ec  push    46h                             
33ee  push    word ptr [bp+0Ch]               
33f1  push    word ptr [bp+0Ah]               
33f4  push    word ptr [bp+8h]                
33f7  push    word ptr [bp+6h]                
33fa  call far M007.M007_PUTXY                ; AP_LINE_POSN_X
33ff  push    22h                             
3401  call far M007.M007_GETSTATE             ; DP_LINE_SCAN
3406  dec     ax                              
3407  je      3414h                           
3409  push    0C7h                            
340c  call far M007.M007_GETSTATE             ; DP_XRAY_LINESCAN
3411  dec     ax                              
3412  jne     3448h                           
3414  push    3h                              
3416  wait                                    
3417  fld     dword ptr [bp+0Ah]              
341a  call far sub_010e                       
341f  push    ax                              
3420  wait                                    
3421  fld     dword ptr [bp+6h]               
3424  call far sub_010e                       
3429  push    ax                              
342a  push    48h                             
342c  lea     ax,[bp-4h]                      
342f  push    ax                              
3430  call far M007.M007_GETVALUE             ; AP_LINE_LENGTH
3435  mov     bx,ax                           
3437  wait                                    
3438  fld     dword ptr ss:[bx]               
343b  call far sub_010e                       
3440  push    ax                              
3441  push    0h                              
3443  call far M200.SETEOCOLUMNSCAN           
3448  pop     ds                              
3449  leave                                   
344a  retf    8h                              
344d  add     [bx+si],al                      

; ===== SETLINE_LENGTH =====
344e  mov     ax,33E3h                        ; segment seg2:0000
3451  enter   8h,0h                           
3455  push    ds                              
3456  mov     ds,ax                           
3458  push    48h                             
345a  push    word ptr [bp+8h]                
345d  push    word ptr [bp+6h]                
3460  call far M007.M007_PUTVALUE             ; AP_LINE_LENGTH
3465  push    22h                             
3467  call far M007.M007_GETSTATE             ; DP_LINE_SCAN
346c  dec     ax                              
346d  je      347Ah                           
346f  push    0C7h                            
3472  call far M007.M007_GETSTATE             ; DP_XRAY_LINESCAN
3477  dec     ax                              
3478  jne     34BBh                           
347a  push    3h                              
347c  push    46h                             
347e  lea     ax,[bp-8h]                      
3481  push    ax                              
3482  call far M007.M007_GETVALUE             ; AP_SCANORTHOG = 70
3487  mov     bx,ax                           
3489  wait                                    
348a  fld     dword ptr ss:[bx]               
348d  call far sub_010e                       
3492  push    ax                              
3493  push    47h                             
3495  lea     ax,[bp-4h]                      
3498  push    ax                              
3499  call far M007.M007_GETVALUE             ; AP_LINE_POSN_Y
349e  mov     bx,ax                           
34a0  wait                                    
34a1  fld     dword ptr ss:[bx]               
34a4  call far sub_010e                       
34a9  push    ax                              
34aa  wait                                    
34ab  fld     dword ptr [bp+6h]               
34ae  call far sub_010e                       
34b3  push    ax                              
34b4  push    0h                              
34b6  call far M200.SETEOCOLUMNSCAN           
34bb  pop     ds                              
34bc  leave                                   
34bd  retf    4h                              

; ===== SWITCHSTEREO =====
34c0  mov     ax,344Fh                        ; segment seg2:0000
34c3  push    bp                              
34c4  mov     bp,sp                           
34c6  push    ds                              
34c7  mov     ds,ax                           
34c9  push    24h                             
34cb  push    word ptr [bp+6h]                
34ce  call far M007.M007_PUTSTATE             ; DP_STEREO
34d3  push    word ptr [bp+6h]                
34d6  call far M200.SETEOSTEREO               
34db  pop     ds                              
34dc  leave                                   
34dd  retf    2h                              

; ===== SWITCHDISPLAY_CHANNELS =====
34e0  mov     ax,34C1h                        ; segment seg2:0000
34e3  push    bp                              
34e4  mov     bp,sp                           
34e6  push    ds                              
34e7  mov     ds,ax                           
34e9  push    23h                             
34eb  push    word ptr [bp+6h]                
34ee  call far M007.M007_PUTSTATE             ; DP_DISPLAY_CHANNELS
34f3  pop     ds                              
34f4  leave                                   
34f5  retf    2h                              

; ===== DOCOMMANDMODE_EMISSION =====
34f8  mov     ax,34E1h                        ; segment seg2:0000
34fb  enter   0Ch,0h                          
34ff  push    ds                              
3500  mov     ds,ax                           
3502  call far sub_250c                       
3507  push    1Eh                             
3509  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
350e  dec     ax                              
350f  je      3541h                           
3511  push    1Eh                             
3513  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
3518  cmp     ax,2h                           
351b  je      3541h                           
351d  push    1Eh                             
351f  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
3524  cmp     ax,5h                           
3527  je      3541h                           
3529  push    1Eh                             
352b  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
3530  cmp     ax,4h                           
3533  je      3541h                           
3535  push    1Eh                             
3537  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
353c  cmp     ax,6h                           
353f  jne     3546h                           
3541  call far DOCOMMANDMODE_NORMAL           
3546  call far M700.DOCOMMANDUNFREEZE_ALL     
354b  push    1Eh                             
354d  push    3h                              
354f  call far M007.M007_PUTSTATE             ; DP_OPERATING_MODE = 3
3554  lea     ax,[bp-8h]                      
3557  push    ax                              
3558  call far M200.GET_EMISSION_CENTRE       
355d  mov     bx,ax                           
355f  mov     ax,ss:[bx]                      
3562  mov     dx,ss:[bx+2h]                   
3566  mov     [bp-4h],ax                      
3569  mov     [bp-2h],dx                      
356c  wait                                    
356d  fild    word ptr [bp-4h]                
3570  sub     sp,4h                           
3573  mov     bx,sp                           
3575  wait                                    
3576  fstp    dword ptr ss:[bx]               
3579  wait                                    
357a  fild    word ptr [bp-2h]                
357d  sub     sp,4h                           
3580  mov     bx,sp                           
3582  wait                                    
3583  fstp    dword ptr ss:[bx]               
3586  nop                                     
3587  wait                                    
3588  call far SETXYCROSS                     
358d  push    15h                             
358f  lea     ax,[bp-0Ch]                     
3592  push    ax                              
3593  call far M007.M007_GETVALUE             ; AP_EMISSIONZOOM
3598  mov     bx,ax                           
359a  push    word ptr ss:[bx+2h]             
359e  push    word ptr ss:[bx]                
35a1  call far M200.SETEOEMISSION             
35a6  call far M700.Z130_UPDATE_DETECTORS     
35ab  call far M700.UPDATE_DETECTORS          
35b0  call far M200.CHECKFORBEAMBLANKING      
35b5  pop     ds                              
35b6  leave                                   
35b7  retf                                    

; ===== SETEMISSIONZOOM =====
35b8  mov     ax,34F9h                        ; segment seg2:0000
35bb  enter   4h,0h                           
35bf  push    ds                              
35c0  mov     ds,ax                           
35c2  push    15h                             
35c4  wait                                    
35c5  fld     dword ptr [bp+6h]               
35c8  wait                                    
35c9  fstp    dword ptr [bp-4h]               
35cc  nop                                     
35cd  wait                                    
35ce  push    word ptr [bp-2h]                
35d1  push    word ptr [bp-4h]                
35d4  call far M007.M007_PUTVALUE             ; AP_EMISSIONZOOM
35d9  push    1Eh                             
35db  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
35e0  cmp     ax,3h                           
35e3  jne     35F9h                           
35e5  wait                                    
35e6  fld     dword ptr [bp-4h]               
35e9  sub     sp,4h                           
35ec  mov     bx,sp                           
35ee  wait                                    
35ef  fstp    dword ptr ss:[bx]               
35f2  nop                                     
35f3  wait                                    
35f4  call far M200.SETEOEMISSION             
35f9  pop     ds                              
35fa  leave                                   
35fb  retf    4h                              

; ===== SWITCH7BIT =====
35fe  mov     ax,35B9h                        ; segment seg2:0000
3601  push    bp                              
3602  mov     bp,sp                           
3604  push    ds                              
3605  mov     ds,ax                           
3607  push    0BBh                            
360a  push    word ptr [bp+6h]                
360d  call far M007.M007_PUTSTATE             ; DP_7BIT
3612  push    75h                             
3614  call far M007.M007_GETSTATE             ; DP_CHANNEL
3619  push    ax                              
361a  mov     al,[bp+6h]                      
361d  push    ax                              
361e  call far M200.SEVENBITMODE              
3623  pop     ds                              
3624  leave                                   
3625  retf    2h                              

; ===== SWITCHCROSSHAIRS =====
3628  mov     ax,35FFh                        ; segment seg2:0000
362b  push    bp                              
362c  mov     bp,sp                           
362e  push    ds                              
362f  mov     ds,ax                           
3631  push    10Bh                            
3634  push    word ptr [bp+6h]                
3637  call far M007.M007_PUTSTATE             ; DP_CROSSHAIRS
363c  pop     ds                              
363d  leave                                   
363e  retf    2h                              
3641  add     [bx+si],al                      

; ===== SWITCHGRATICULE =====
3642  mov     ax,3629h                        ; segment seg2:0000
3645  push    bp                              
3646  mov     bp,sp                           
3648  push    ds                              
3649  mov     ds,ax                           
364b  push    10Ch                            
364e  push    word ptr [bp+6h]                
3651  call far M007.M007_PUTSTATE             ; DP_GRATICULE
3656  pop     ds                              
3657  leave                                   
3658  retf    2h                              
365b  add     [bx+si],al                      

; ===== SETXYCROSS =====
365c  mov     ax,3643h                        ; segment seg2:0000
365f  push    bp                              
3660  mov     bp,sp                           
3662  push    ds                              
3663  mov     ds,ax                           
3665  push    0D0h                            
3668  push    word ptr [bp+0Ch]               
366b  push    word ptr [bp+0Ah]               
366e  push    word ptr [bp+8h]                
3671  push    word ptr [bp+6h]                
3674  call far M007.M007_PUTXY                ; AP_CROSS_X
3679  push    10Bh                            
367c  call far M007.M007_GETSTATE             ; DP_CROSSHAIRS
3681  dec     ax                              
3682  jne     3692h                           
3684  push    0h                              
3686  call far SWITCHCROSSHAIRS               
368b  push    1h                              
368d  call far SWITCHCROSSHAIRS               
3692  push    10Ch                            
3695  call far M007.M007_GETSTATE             ; DP_GRATICULE
369a  dec     ax                              
369b  jne     36ABh                           
369d  push    0h                              
369f  call far SWITCHGRATICULE                
36a4  push    1h                              
36a6  call far SWITCHGRATICULE                
36ab  pop     ds                              
36ac  leave                                   
36ad  retf    8h                              

; ===== SETGRAT_SPACE =====
36b0  mov     ax,365Dh                        ; segment seg2:0000
36b3  push    bp                              
36b4  mov     bp,sp                           
36b6  push    ds                              
36b7  mov     ds,ax                           
36b9  push    144h                            
36bc  push    word ptr [bp+8h]                
36bf  push    word ptr [bp+6h]                
36c2  call far M007.M007_PUTVALUE             ; AP_GRAT_SPACE
36c7  push    10Ch                            
36ca  call far M007.M007_GETSTATE             ; DP_GRATICULE
36cf  dec     ax                              
36d0  jne     36E0h                           
36d2  push    0h                              
36d4  call far SWITCHGRATICULE                
36d9  push    1h                              
36db  call far SWITCHGRATICULE                
36e0  pop     ds                              
36e1  leave                                   
36e2  retf    4h                              
