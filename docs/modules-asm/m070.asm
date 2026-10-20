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
0060  mov     [1004h],di                      
0064  mov     [1006h],ds                      
0068  mov     [1008h],cx                      
006c  mov     [100Ah],bx                      
0070  mov     [100Ch],si                      
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
0094  mov     [102Ah],ax                      
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [102Eh],ax                      
00ae  xchg    al,ah                           
00b0  mov     [102Ch],ax                      
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [1031h],al                      
00c1  call far sub_013a                       
00c6  call far sub_0242                       
00cb  inc     byte ptr [100Eh]                
00cf  push    word ptr [1052h]                
00d3  push    word ptr [1050h]                ; [ds] f32 here = 0
00d7  push    word ptr [104Eh]                ; [ds] f32 here = 0
00db  push    word ptr [104Ch]                ; [ds] f32 here = 0
00df  push    word ptr [104Ah]                ; [ds] f32 here = 0
00e3  call far sub_010e                       
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
0118  push    word ptr [1004h]                ; [ds] f32 here = 0
011c  push    word ptr [1006h]                ; [ds] f32 here = 0
0120  push    word ptr [1008h]                ; [ds] f32 here = 0
0124  push    word ptr [100Ch]                
0128  push    word ptr [100Ah]                ; [ds] f32 here = 0
012c  call far sub_0828                       
0131  sub     bp,2h                           
0134  mov     sp,bp                           
0136  pop     ds                              
0137  pop     bp                              
0138  dec     bp                              
0139  retf                                    

; ----- sub_013a -----
013a  mov     ax,ds                           
013c  nop                                     
013d  inc     bp                              
013e  push    bp                              
013f  mov     bp,sp                           
0141  push    ds                              
0142  mov     ds,ax                           
0144  mov     cx,[1078h]                      
0148  jcxz    15Eh                            
014a  xor     si,si                           
014c  mov     ax,[107Ah]                      
014f  mov     dx,[107Ch]                      
0153  xor     bx,bx                           
0155  call    far ptr  [1076h]                
0159  jae     15Eh                            
015b  jmp     328h                            
015e  mov     si,1082h                        
0161  mov     di,1082h                        
0164  call    20Ah                            
0167  mov     si,1082h                        
016a  mov     di,1082h                        
016d  call    20Ah                            
0170  mov     si,1082h                        
0173  mov     di,1082h                        
0176  call    20Ah                            
0179  sub     bp,2h                           
017c  mov     sp,bp                           
017e  pop     ds                              
017f  pop     bp                              
0180  dec     bp                              
0181  retf                                    
0182  mov     ax,ds                           
0184  nop                                     
0185  inc     bp                              
0186  push    bp                              
0187  mov     bp,sp                           
0189  push    ds                              
018a  mov     ds,ax                           
018c  push    si                              
018d  push    di                              
018e  mov     cx,100h                         
0191  jmp     1A2h                            
0193  mov     ax,ds                           
0195  nop                                     
0196  inc     bp                              
0197  push    bp                              
0198  mov     bp,sp                           
019a  push    ds                              
019b  mov     ds,ax                           
019d  push    si                              
019e  push    di                              
019f  mov     cx,101h                         
01a2  mov     [105Bh],ch                      
01a6  push    cx                              
01a7  or      cl,cl                           
01a9  jne     1BDh                            
01ab  mov     si,30E0h                        
01ae  mov     di,30E0h                        
01b1  call    20Ah                            
01b4  mov     si,1082h                        
01b7  mov     di,1082h                        
01ba  call    20Ah                            
01bd  mov     si,1082h                        
01c0  mov     di,1082h                        
01c3  call    20Ah                            
01c6  mov     si,1082h                        
01c9  mov     di,1082h                        
01cc  call    20Ah                            
01cf  call    630h                            
01d2  call    36Ch                            
01d5  pop     ax                              
01d6  pop     di                              
01d7  pop     si                              
01d8  sub     bp,2h                           
01db  mov     sp,bp                           
01dd  pop     ds                              
01de  pop     bp                              
01df  dec     bp                              
01e0  retf                                    
01e1  mov     cx,[1078h]                      
01e5  jcxz    1EEh                            
01e7  mov     bx,2h                           
01ea  call    far ptr  [1076h]                
01ee  push    ds                              
01ef  lds     dx,[1018h]                      
01f3  mov     ax,2500h                        
01f6  test    word ptr cs:[10h],1h            
01fd  je      206h                            
01ff  call far KERNEL.DOS3CALL                
0204  jmp     208h                            
0206  int     21h                             
0208  pop     ds                              
0209  ret                                     

; ----- sub_020a -----
020a  cmp     si,di                           
020c  jae     21Ch                            
020e  sub     di,4h                           
0211  mov     ax,[di]                         
0213  or      ax,[di+2h]                      
0216  je      20Ah                            
0218  call    far ptr  [di]                   
021a  jmp     20Ah                            
021c  ret                                     
021d  add     [bx+si],al                      

; ----- sub_021e -----
021e  mov     ax,ds                           
0220  nop                                     
0221  inc     bp                              
0222  push    bp                              
0223  mov     bp,sp                           
0225  push    ds                              
0226  mov     ds,ax                           
0228  mov     ax,0FCh                         
022b  push    ax                              
022c  push    cs                              
022d  call    311h                            
0230  mov     ax,0FFh                         
0233  push    ax                              
0234  push    cs                              
0235  call    311h                            
0238  sub     bp,2h                           
023b  mov     sp,bp                           
023d  pop     ds                              
023e  pop     bp                              
023f  dec     bp                              
0240  retf                                    
0241  add     [bx+si],al                      

; ----- sub_0242 -----
0242  mov     ax,ds                           
0244  nop                                     
0245  inc     bp                              
0246  push    bp                              
0247  mov     bp,sp                           
0249  push    ds                              
024a  mov     ds,ax                           
024c  sub     sp,6h                           
024f  push    ds                              
0250  call far KERNEL.GETDOSENVIRONMENT       
0255  or      ax,ax                           
0257  je      25Ch                            
0259  mov     dx,0h                           
025c  mov     bx,dx                           
025e  mov     es,dx                           
0260  mov     [bp-4h],es                      
0263  mov     [bp-8h],ds                      
0266  xor     ax,ax                           
0268  xor     si,si                           
026a  xor     di,di                           
026c  mov     cx,0FFFFh                       
026f  or      bx,bx                           
0271  je      281h                            
0273  cmp     byte ptr es:[0h],0h             
0279  je      281h                            
027b  repne   scasb                           
027d  inc     si                              
027e  scasb                                   
027f  jne     27Bh                            
0281  mov     ax,di                           
0283  inc     ax                              
0284  and     al,0FEh                         
0286  inc     si                              
0287  mov     di,si                           
0289  shl     si,1                            
028b  shl     si,1                            
028d  mov     cx,9h                           
0290  call    32Eh                            
0293  push    dx                              
0294  push    ax                              
0295  mov     ax,si                           
0297  call    32Eh                            
029a  mov     [1050h],ax                      
029d  mov     [1052h],dx                      
02a1  mov     [bp-6h],dx                      
02a4  push    es                              
02a5  pop     ds                              
02a6  mov     cx,di                           
02a8  mov     bx,ax                           
02aa  xor     si,si                           
02ac  pop     di                              
02ad  pop     es                              
02ae  dec     cx                              
02af  jcxz    2C7h                            
02b1  mov     ds,[bp-6h]                      
02b4  mov     [bx],di                         
02b6  mov     [bx+2h],es                      
02b9  add     bx,4h                           
02bc  mov     ds,[bp-4h]                      
02bf  lodsb                                   
02c0  stosb                                   
02c1  or      al,al                           
02c3  jne     2BFh                            
02c5  loop    2B1h                            
02c7  mov     ds,[bp-6h]                      
02ca  mov     [bx],cx                         
02cc  mov     [bx+2h],cx                      
02cf  pop     ds                              
02d0  sub     bp,2h                           
02d3  mov     sp,bp                           
02d5  pop     ds                              
02d6  pop     bp                              
02d7  dec     bp                              
02d8  retf                                    
02d9  add     [bx+si],al                      

; ----- sub_02da -----
02da  mov     ax,ds                           
02dc  nop                                     
02dd  inc     bp                              
02de  push    bp                              
02df  mov     bp,sp                           
02e1  push    ds                              
02e2  mov     ds,ax                           
02e4  push    si                              
02e5  push    di                              
02e6  push    ds                              
02e7  pop     es                              
02e8  mov     dx,[bp+6h]                      
02eb  mov     si,108Ah                        
02ee  lodsw                                   
02ef  cmp     ax,dx                           
02f1  je      303h                            
02f3  inc     ax                              
02f4  xchg    ax,si                           
02f5  je      303h                            
02f7  xchg    ax,di                           
02f8  xor     ax,ax                           
02fa  mov     cx,0FFFFh                       
02fd  repne   scasb                           
02ff  mov     si,di                           
0301  jmp     2EEh                            
0303  xchg    ax,si                           
0304  pop     di                              
0305  pop     si                              
0306  sub     bp,2h                           
0309  mov     sp,bp                           
030b  pop     ds                              
030c  pop     bp                              
030d  dec     bp                              
030e  retf    2h                              

; ----- sub_0311 -----
0311  mov     ax,ds                           
0313  nop                                     
0314  inc     bp                              
0315  push    bp                              
0316  mov     bp,sp                           
0318  push    ds                              
0319  mov     ds,ax                           
031b  push    di                              
031c  pop     di                              
031d  sub     bp,2h                           
0320  mov     sp,bp                           
0322  pop     ds                              
0323  pop     bp                              
0324  dec     bp                              
0325  retf    2h                              
0328  mov     ax,2h                           
032b  jmp     378h                            

; ----- sub_032e -----
032e  push    bp                              
032f  mov     bp,sp                           
0331  push    bx                              
0332  push    es                              
0333  push    cx                              
0334  mov     cx,1000h                        
0337  xchg    cx,[1060h]                      
033b  push    cx                              
033c  push    ax                              
033d  call far sub_0507                       
0342  pop     bx                              
0343  pop     [1060h]                         
0347  pop     cx                              
0348  mov     bx,dx                           
034a  or      bx,ax                           
034c  je      352h                            
034e  pop     es                              
034f  pop     bx                              
0350  jmp     357h                            
0352  mov     ax,cx                           
0354  jmp     378h                            
0357  mov     sp,bp                           
0359  pop     bp                              
035a  ret                                     
035b  add     [bx+si],al                      

; ----- sub_035c -----
035c  cmp     byte ptr cs:[4D2h],0B8h         
0362  je      367h                            
0364  mov     ax,ss                           
0366  retf                                    
0367  mov     ax,cs:[4D3h]                    
036b  retf                                    

; ----- sub_036c -----
036c  ret                                     
036d  add     [bp+si+35Ch],bl                 
0371  inc     ax                              
0372  add     cx,[bp-4728h]                   
0376  add     ax,[bx+si]                      
0378  push    ax                              
0379  push    ax                              
037a  push    cs                              
037b  call    21Eh                            
037e  push    cs                              
037f  call    311h                            
0382  push    cs                              
0383  call    2DAh                            
0386  xor     bx,bx                           
0388  or      ax,ax                           
038a  je      3A9h                            
038c  mov     di,ax                           
038e  mov     ax,9h                           
0391  cmp     byte ptr [di],4Dh               
0394  jne     399h                            
0396  mov     ax,0Fh                          
0399  add     di,ax                           
039b  push    di                              
039c  push    ds                              
039d  pop     es                              
039e  mov     al,0Dh                          
03a0  mov     cx,22h                          
03a3  repne   scasb                           
03a5  mov     [di-1h],bl                      
03a8  pop     ax                              
03a9  push    bx                              
03aa  push    ds                              
03ab  push    ax                              
03ac  call far KERNEL.FATALAPPEXIT            
03b1  mov     ax,0FFh                         
03b4  push    ax                              
03b5  call far KERNEL.FATALEXIT               
03ba  push    cx                              
03bb  push    di                              
03bc  test    byte ptr [bx+2h],1h             
03c0  je      42Ah                            
03c2  call    4B1h                            
03c5  mov     di,si                           
03c7  mov     ax,[si]                         
03c9  test    al,1h                           
03cb  je      3D0h                            
03cd  sub     cx,ax                           
03cf  dec     cx                              
03d0  inc     cx                              
03d1  inc     cx                              
03d2  mov     si,[bx+4h]                      
03d5  or      si,si                           
03d7  je      42Ah                            
03d9  add     cx,si                           
03db  jae     3E6h                            
03dd  xor     ax,ax                           
03df  mov     dx,0FFF0h                       
03e2  jcxz    419h                            
03e4  jmp     42Ah                            
03e6  call far sub_035c                       
03eb  mov     es,ax                           
03ed  mov     ax,es:[1060h]                   
03f1  cmp     ax,1000h                        
03f4  je      40Ch                            
03f6  mov     dx,8000h                        
03f9  cmp     dx,ax                           
03fb  jb      403h                            
03fd  shr     dx,1                            
03ff  jne     3F9h                            
0401  jmp     425h                            
0403  cmp     dx,8h                           
0406  jb      425h                            
0408  shl     dx,1                            
040a  mov     ax,dx                           
040c  dec     ax                              
040d  mov     dx,ax                           
040f  add     ax,cx                           
0411  jae     415h                            
0413  xor     ax,ax                           
0415  not     dx                              
0417  and     ax,dx                           
0419  push    dx                              
041a  call    44Bh                            
041d  pop     dx                              
041e  jae     42Dh                            
0420  cmp     dx,-10h                         
0423  je      42Ah                            
0425  mov     ax,10h                          
0428  jmp     40Ch                            
042a  stc                                     
042b  jmp     448h                            
042d  mov     dx,ax                           
042f  sub     dx,[bx+4h]                      
0432  mov     [bx+4h],ax                      
0435  mov     [bx+0Ah],di                     
0438  mov     si,[bx+0Ch]                     
043b  dec     dx                              
043c  mov     [si],dx                         
043e  inc     dx                              
043f  add     si,dx                           
0441  mov     word ptr [si],0FFFEh            
0445  mov     [bx+0Ch],si                     
0448  pop     di                              
0449  pop     cx                              
044a  ret                                     

; ----- sub_044b -----
044b  mov     dx,ax                           
044d  test    byte ptr [bx+2h],4h             
0451  je      455h                            
0453  jmp     4A6h                            
0455  push    dx                              
0456  push    cx                              
0457  push    bx                              
0458  mov     si,[bx+6h]                      
045b  mov     bx,cs:[10h]                     
0460  xor     cx,cx                           
0462  or      dx,dx                           
0464  jne     46Dh                            
0466  test    bx,10h                          
046a  jne     4ACh                            
046c  inc     cx                              
046d  mov     ax,2002h                        
0470  test    bx,1h                           
0474  jne     479h                            
0476  mov     ax,2020h                        
0479  push    si                              
047a  push    cx                              
047b  push    dx                              
047c  push    ax                              
047d  call far KERNEL.GLOBALREALLOC           
0482  or      ax,ax                           
0484  je      4ACh                            
0486  cmp     ax,si                           
0488  jne     4A6h                            
048a  push    si                              
048b  call far KERNEL.GLOBALSIZE              
0490  or      dx,ax                           
0492  je      4A6h                            
0494  pop     bx                              
0495  pop     cx                              
0496  pop     dx                              
0497  mov     ax,dx                           
0499  test    byte ptr [bx+2h],4h             
049d  je      4A3h                            
049f  dec     dx                              
04a0  mov     [bx-2h],dx                      
04a3  clc                                     
04a4  jmp     4B0h                            
04a6  mov     ax,12h                          
04a9  jmp     378h                            
04ac  pop     bx                              
04ad  pop     cx                              
04ae  pop     dx                              
04af  stc                                     
04b0  ret                                     

; ----- sub_04b1 -----
04b1  push    di                              
04b2  mov     si,[bx+0Ah]                     
04b5  cmp     si,[bx+0Ch]                     
04b8  jne     4BDh                            
04ba  mov     si,[bx+8h]                      
04bd  lodsw                                   
04be  cmp     ax,-2h                          
04c1  je      4CBh                            
04c3  mov     di,si                           
04c5  and     al,0FEh                         
04c7  add     si,ax                           
04c9  jmp     4BDh                            
04cb  dec     di                              
04cc  dec     di                              
04cd  mov     si,di                           
04cf  pop     di                              
04d0  ret                                     
04d1  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
04d2  mov     ax,ds                           
04d4  nop                                     
04d5  inc     bp                              
04d6  push    bp                              
04d7  mov     bp,sp                           
04d9  push    ds                              
04da  mov     ds,ax                           
04dc  xor     ax,ax                           
04de  lea     sp,[bp-2h]                      
04e1  pop     ds                              
04e2  pop     bp                              
04e3  dec     bp                              
04e4  retf                                    
04e5  nop                                     
04e6  mov     ax,ds                           
04e8  nop                                     
04e9  inc     bp                              
04ea  push    bp                              
04eb  mov     bp,sp                           
04ed  push    ds                              
04ee  mov     ds,ax                           
04f0  push    si                              
04f1  les     si,[bp+6h]                      
04f4  mov     cx,es                           
04f6  jcxz    4FDh                            
04f8  or      byte ptr es:[si-2h],1h          
04fd  pop     si                              
04fe  sub     bp,2h                           
0501  mov     sp,bp                           
0503  pop     ds                              
0504  pop     bp                              
0505  dec     bp                              
0506  retf                                    

; ----- sub_0507 -----
0507  mov     ax,ds                           
0509  nop                                     
050a  inc     bp                              
050b  push    bp                              
050c  mov     bp,sp                           
050e  push    ds                              
050f  mov     ds,ax                           
0511  push    si                              
0512  push    di                              
0513  mov     cx,[bp+6h]                      
0516  cmp     cx,-1Ah                         
0519  ja      584h                            
051b  push    ds                              
051c  mov     ax,[1068h]                      
051f  or      ax,ax                           
0521  je      56Bh                            
0523  mov     di,63Eh                         
0526  mov     si,[1070h]                      
052a  lds     bx,[106Ah]                      
052e  push    ds                              
052f  push    si                              
0530  push    di                              
0531  call    di                              
0533  pop     di                              
0534  pop     si                              
0535  jae     562h                            
0537  mov     dx,ds                           
0539  lds     bx,[bx+0Eh]                     
053c  cmp     dx,si                           
053e  jne     52Fh                            
0540  pop     ax                              
0541  pop     ds                              
0542  push    ds                              
0543  les     si,[106Ah]                      
0547  mov     si,es:[si+14h]                  
054b  lds     bx,[1066h]                      
054f  mov     dx,ds                           
0551  cmp     dx,ax                           
0553  jne     52Eh                            
0555  pop     ds                              
0556  push    ds                              
0557  cmp     di,3BAh                         
055b  je      56Bh                            
055d  mov     di,3BAh                         
0560  jmp     526h                            
0562  pop     si                              
0563  cmp     di,63Eh                         
0567  je      578h                            
0569  jmp     575h                            
056b  pop     es                              
056c  push    es                              
056d  mov     di,1066h                        
0570  call    5AEh                            
0573  jb      583h                            
0575  call    63Eh                            
0578  pop     ds                              
0579  mov     [106Ch],dx                      
057d  mov     [106Ah],bx                      
0581  jmp     5A3h                            
0583  pop     ds                              
0584  xor     ax,ax                           
0586  cwd                                     
0587  mov     cx,[1064h]                      
058b  or      cx,[1062h]                      
058f  je      5A3h                            
0591  push    word ptr [bp+6h]                
0594  call    far ptr  [1062h]                
0598  add     sp,2h                           
059b  cwd                                     
059c  or      ax,ax                           
059e  je      5A3h                            
05a0  jmp     513h                            
05a3  pop     di                              
05a4  pop     si                              
05a5  sub     bp,2h                           
05a8  mov     sp,bp                           
05aa  pop     ds                              
05ab  pop     bp                              
05ac  dec     bp                              
05ad  retf                                    

; ----- sub_05ae -----
05ae  mov     dx,cx                           
05b0  add     dx,1019h                        
05b4  and     dx,0F000h                       
05b8  push    cx                              
05b9  push    es                              
05ba  mov     bx,cs:[10h]                     
05bf  xor     cx,cx                           
05c1  or      dx,dx                           
05c3  jne     5CCh                            
05c5  test    bx,10h                          
05c9  jne     62Bh                            
05cb  inc     cx                              
05cc  push    bx                              
05cd  mov     ax,2002h                        
05d0  test    bx,1h                           
05d4  jne     5D9h                            
05d6  mov     ax,2020h                        
05d9  push    ax                              
05da  push    cx                              
05db  push    dx                              
05dc  call far KERNEL.GLOBALALLOC             
05e1  pop     bx                              
05e2  or      ax,ax                           
05e4  je      62Bh                            
05e6  push    ax                              
05e7  test    bx,1h                           
05eb  je      5FDh                            
05ed  push    ax                              
05ee  call far KERNEL.GLOBALLOCK              
05f3  or      ax,ax                           
05f5  jne     625h                            
05f7  or      ax,dx                           
05f9  je      625h                            
05fb  mov     ax,dx                           
05fd  mov     ds,ax                           
05ff  push    ax                              
0600  call far KERNEL.GLOBALSIZE              
0605  or      dx,ax                           
0607  je      625h                            
0609  mov     dx,ax                           
060b  pop     ax                              
060c  pop     es                              
060d  pop     cx                              
060e  xor     bx,bx                           
0610  mov     [bx+6h],ax                      
0613  mov     ax,es:[di+0Ch]                  
0617  mov     [bx+2h],ax                      
061a  mov     ax,dx                           
061c  call    6E4h                            
061f  call    718h                            
0622  clc                                     
0623  jmp     62Eh                            
0625  mov     ax,12h                          
0628  jmp     378h                            
062b  pop     es                              
062c  pop     cx                              
062d  stc                                     
062e  ret                                     
062f  add     [bx+si],al                      

; ----- sub_0630 -----
0630  push    bp                              
0631  mov     bp,sp                           
0633  mov     bx,1066h                        
0636  push    ds                              
0637  pop     es                              
0638  call    6BAh                            
063b  pop     bp                              
063c  ret                                     
063d  add     [bx+si],al                      

; ----- sub_063e -----
063e  inc     cx                              
063f  and     cl,0FEh                         
0642  push    bx                              
0643  cld                                     
0644  mov     si,[bx+0Ah]                     
0647  mov     bx,[bx+0Ch]                     
064a  xor     di,di                           
064c  jmp     671h                            
064e  mov     ax,bx                           
0650  pop     bx                              
0651  test    al,1h                           
0653  jne     697h                            
0655  push    bx                              
0656  mov     si,[bx+8h]                      
0659  mov     bx,[bx+0Ah]                     
065c  cmp     bx,si                           
065e  je      696h                            
0660  dec     bx                              
0661  xor     di,di                           
0663  jmp     671h                            
0665  nop                                     
0666  lea     dx,[si-2h]                      
0669  cmp     dx,bx                           
066b  jae     64Eh                            
066d  add     si,ax                           
066f  jb      694h                            
0671  lodsw                                   
0672  test    al,1h                           
0674  je      666h                            
0676  mov     di,si                           
0678  dec     ax                              
0679  cmp     ax,cx                           
067b  jae     6A0h                            
067d  add     si,ax                           
067f  jb      694h                            
0681  mov     dx,ax                           
0683  lodsw                                   
0684  test    al,1h                           
0686  je      666h                            
0688  add     ax,dx                           
068a  add     ax,2h                           
068d  mov     si,di                           
068f  mov     [si-2h],ax                      
0692  jmp     678h                            
0694  mov     ax,ax                           
0696  pop     bx                              
0697  mov     ax,[bx+8h]                      
069a  mov     [bx+0Ah],ax                     
069d  stc                                     
069e  jmp     6B9h                            
06a0  pop     bx                              
06a1  mov     [si-2h],cx                      
06a4  je      6AFh                            
06a6  add     di,cx                           
06a8  sub     ax,cx                           
06aa  dec     ax                              
06ab  mov     [di],ax                         
06ad  sub     di,cx                           
06af  add     di,cx                           
06b1  mov     [bx+0Ah],di                     
06b4  mov     ax,si                           
06b6  mov     dx,ds                           
06b8  clc                                     
06b9  ret                                     

; ----- sub_06ba -----
06ba  push    bp                              
06bb  mov     bp,sp                           
06bd  push    di                              
06be  les     bx,es:[bx]                      
06c1  mov     cx,es                           
06c3  jcxz    6DFh                            
06c5  mov     ax,es:[bx+6h]                   
06c9  les     bx,es:[bx+0Eh]                  
06cd  push    bx                              
06ce  push    es                              
06cf  push    ax                              
06d0  push    ax                              
06d1  call far KERNEL.GLOBALUNLOCK            
06d6  call far KERNEL.GLOBALFREE              
06db  pop     es                              
06dc  pop     bx                              
06dd  jmp     6C1h                            
06df  pop     di                              
06e0  mov     sp,bp                           
06e2  pop     bp                              
06e3  ret                                     

; ----- sub_06e4 -----
06e4  push    es                              
06e5  push    di                              
06e6  mov     di,ax                           
06e8  add     di,bx                           
06ea  mov     [bx+4h],di                      
06ed  dec     di                              
06ee  dec     di                              
06ef  sub     ax,18h                          
06f2  lea     si,[bx+16h]                     
06f5  mov     word ptr [di],0FFFEh            
06f9  mov     [bx+0Ch],di                     
06fc  dec     ax                              
06fd  mov     [si],ax                         
06ff  mov     [bx],ds                         
0701  mov     ax,si                           
0703  mov     dx,ds                           
0705  mov     es,dx                           
0707  lea     di,[bx+8h]                      
070a  cld                                     
070b  stosw                                   
070c  stosw                                   
070d  inc     di                              
070e  inc     di                              
070f  xor     ax,ax                           
0711  stosw                                   
0712  stosw                                   
0713  stosw                                   
0714  stosw                                   
0715  pop     di                              
0716  pop     es                              
0717  ret                                     

; ----- sub_0718 -----
0718  mov     ax,es:[di+2h]                   
071c  or      ax,ax                           
071e  jne     729h                            
0720  mov     es:[di+2h],ds                   
0724  mov     es:[di],bx                      
0727  jmp     73Dh                            
0729  push    es                              
072a  les     si,es:[di+8h]                   
072e  mov     es:[si+10h],ds                  
0732  mov     es:[si+0Eh],bx                  
0736  mov     [bx+14h],es                     
0739  mov     [bx+12h],si                     
073c  pop     es                              
073d  mov     es:[di+0Ah],ds                  
0741  mov     es:[di+8h],bx                   
0745  mov     es:[di+6h],ds                   
0749  mov     es:[di+4h],bx                   
074d  ret                                     
074e  add     [bx+si],al                      

; ===== COMMAND_NAME_STRING =====
0750  mov     ax,0FFFFh                       ; segment seg2:0000
0753  push    bp                              
0754  mov     bp,sp                           
0756  push    ds                              
0757  mov     ds,ax                           
0759  call far M007.HLEOUIFLANGUAGE           
075e  push    ax                              
075f  mov     ax,[bp+0Ch]                     
0762  add     ax,0BBCh                        
0765  push    ax                              
0766  push    word ptr [bp+0Ah]               
0769  push    word ptr [bp+8h]                
076c  push    word ptr [bp+6h]                
076f  call far USER.LOADSTRING                
0774  pop     ds                              
0775  leave                                   
0776  retf    8h                              
0779  add     [bx+si],al                      

; ===== STATE_NAME_STRING =====
077a  mov     ax,751h                         ; segment seg2:0000
077d  push    bp                              
077e  mov     bp,sp                           
0780  push    ds                              
0781  mov     ds,ax                           
0783  call far M007.HLEOUIFLANGUAGE           
0788  push    ax                              
0789  mov     ax,[bp+0Ch]                     
078c  add     ax,0A5Ch                        
078f  push    ax                              
0790  push    word ptr [bp+0Ah]               
0793  push    word ptr [bp+8h]                
0796  push    word ptr [bp+6h]                
0799  call far USER.LOADSTRING                
079e  pop     ds                              
079f  leave                                   
07a0  retf    8h                              
07a3  add     [bx+si],al                      

; ===== STATE_VALUE_STRING =====
07a4  mov     ax,77Bh                         ; segment seg2:0000
07a7  push    bp                              
07a8  mov     bp,sp                           
07aa  push    si                              
07ab  push    ds                              
07ac  mov     ds,ax                           
07ae  call far M007.HLEOUIFLANGUAGE           
07b3  push    ax                              
07b4  mov     bx,[bp+0Eh]                     
07b7  shl     bx,2h                           
07ba  les     bx,[bx+0A7Eh]                   
07be  mov     si,[bp+0Ch]                     
07c1  add     si,si                           
07c3  push    word ptr es:[bx+si]             
07c6  push    word ptr [bp+0Ah]               
07c9  push    word ptr [bp+8h]                
07cc  push    word ptr [bp+6h]                
07cf  call far USER.LOADSTRING                
07d4  pop     ds                              
07d5  pop     si                              
07d6  leave                                   
07d7  retf    0Ah                             

; ===== PARAMETER_NAME_STRING =====
07da  mov     ax,7A5h                         ; segment seg2:0000
07dd  push    bp                              
07de  mov     bp,sp                           
07e0  push    ds                              
07e1  mov     ds,ax                           
07e3  call far M007.HLEOUIFLANGUAGE           
07e8  push    ax                              
07e9  mov     ax,[bp+0Ch]                     
07ec  add     ax,898h                         
07ef  push    ax                              
07f0  push    word ptr [bp+0Ah]               
07f3  push    word ptr [bp+8h]                
07f6  push    word ptr [bp+6h]                
07f9  call far USER.LOADSTRING                
07fe  pop     ds                              
07ff  leave                                   
0800  retf    8h                              
0803  add     [bx+si],al                      

; ===== STATE_VALUE_RESID =====
0804  mov     ax,7DBh                         ; segment seg2:0000
0807  push    bp                              
0808  mov     bp,sp                           
080a  push    si                              
080b  push    ds                              
080c  mov     ds,ax                           
080e  mov     bx,[bp+8h]                      
0811  shl     bx,2h                           
0814  les     bx,[bx+0A7Eh]                   
0818  mov     si,[bp+6h]                      
081b  add     si,si                           
081d  mov     ax,es:[bx+si]                   
0820  cwd                                     
0821  pop     ds                              
0822  pop     si                              
0823  leave                                   
0824  retf    4h                              
0827  add     [bx+si],al                      

; ----- sub_0828 -----
0828  mov     ax,805h                         ; segment seg2:0000
082b  push    bp                              
082c  mov     bp,sp                           
082e  push    ds                              
082f  mov     ds,ax                           
0831  mov     ax,1h                           
0834  pop     ds                              
0835  leave                                   
0836  retf    0Ah                             
0839  add     [bx+si],al                      

; ===== WEP =====
083a  mov     ax,829h                         ; segment seg2:0000
083d  push    bp                              
083e  mov     bp,sp                           
0840  push    ds                              
0841  mov     ds,ax                           
0843  mov     ax,1h                           
0846  pop     ds                              
0847  leave                                   
0848  retf    2h                              
084b  add     [bx+si],al                      

; ===== LEOACC_REPORTID =====
084c  mov     ax,83Bh                         ; segment seg2:0000
084f  push    bp                              
0850  mov     bp,sp                           
0852  push    ds                              
0853  mov     ds,ax                           
0855  push    0h                              
0857  push    0FFFFh                          ; segment seg1:0000
085a  push    8A2h                            
085d  call far M007.UIF_MESSAGE               ; "Access Controller DLL -  V01.00 9-Aug-94"
0862  pop     ds                              
0863  leave                                   
0864  retf                                    
0865  add     [bx+si],al                      

; ===== INITIALISE_LEOACC_CONTROLLER_DATA =====
0866  mov     ax,84Dh                         ; segment seg2:0000
0869  push    bp                              
086a  mov     bp,sp                           
086c  push    ds                              
086d  mov     ds,ax                           
086f  call far LEOACC_REPORTID                
0874  pop     ds                              
0875  leave                                   
0876  retf                                    
0877  add     [bx+si],al                      

; ===== INITIALISE_LEOACC_CONTROLLER =====
0878  mov     ax,867h                         ; segment seg2:0000
087b  push    bp                              
087c  mov     bp,sp                           
087e  push    ds                              
087f  mov     ds,ax                           
0881  xor     ax,ax                           
0883  pop     ds                              
0884  leave                                   
0885  retf                                    

; ===== LEOACC_CONTROLLER_SHUTDOWN =====
0886  mov     ax,879h                         ; segment seg2:0000
0889  push    bp                              
088a  mov     bp,sp                           
088c  push    ds                              
088d  mov     ds,ax                           
088f  xor     ax,ax                           
0891  pop     ds                              
0892  leave                                   
0893  retf                                    

; ===== LEOACC_TIMER_TICK =====
0894  mov     ax,887h                         ; segment seg2:0000
0897  push    bp                              
0898  mov     bp,sp                           
089a  push    ds                              
089b  mov     ds,ax                           
089d  pop     ds                              
089e  leave                                   
089f  retf    2h                              
08a2  inc     cx                              
08a3  arpl    [bp+di+65h],sp                  
08a6  jae     91Bh                            
08a8  and     [bp+di+6Fh],al                  
08ab  outsb                                   
08ac  je      920h                            
08ae  outsw                                   
08af  insb                                    
08b0  insb                                    
08b1  jb      8D4h                            
08b4  inc     sp                              
08b5  dec     sp                              
08b6  dec     sp                              
08b7  and     [di],ch                         
08b9  and     [bx+si],ah                      
08bb  push    si                              
08bc  xor     [bx+di],dh                      
08be  xor     cs:[bx+si],dh                   
08c1  and     [bx+di],bh                      
08c3  sub     ax,7541h                        
08c6  sub     ax,3439h                        
08ca  add     [bx+si],al                      

; ----- sub_08cc -----
08cc  mov     ax,895h                         ; segment seg2:0000
08cf  push    bp                              
08d0  mov     bp,sp                           
08d2  push    ds                              
08d3  mov     ds,ax                           
08d5  push    4DCh                            
08d8  push    word ptr [285Ch]                ; [ds] f32 here = 0
08dc  mov     ax,[bp+6h]                      
08df  cwd                                     
08e0  push    dx                              
08e1  push    ax                              
08e2  call far M007.SEND_UIF_MESSAGE          
08e7  pop     ds                              
08e8  leave                                   
08e9  retf                                    

; ===== ACCOUNTINGMESSAGE =====
08ea  mov     ax,8CDh                         ; segment seg2:0000
08ed  enter   2h,0h                           
08f1  push    ds                              
08f2  mov     ds,ax                           
08f4  push    8FBh                            ; segment seg1:0000
08f7  push    1040h                           
08fa  push    90Bh                            ; segment seg1:0000
08fd  push    1028h                           
0900  call far USER.FINDWINDOW                ; "ThunderForm"  "LEO Accounting Monitor"
0905  or      ax,ax                           
0907  je      922h                            
0909  push    ax                              
090a  push    872h                            ; segment seg1:0000
090d  push    104Ch                           
0910  call far USER.REGISTERWINDOWMESSAGE     ; "LEOMON_MSG"
0915  push    ax                              
0916  push    word ptr [bp+6h]                
0919  push    0h                              
091b  push    0h                              
091d  call far USER.POSTMESSAGE               
0922  pop     ds                              
0923  leave                                   
0924  retf    2h                              
0927  add     [bx+si],al                      

; ===== CLEARMENULIST =====
0928  mov     ax,8EBh                         ; segment seg2:0000
092b  enter   2h,0h                           
092f  push    ds                              
0930  mov     ds,ax                           
0932  mov     word ptr [bp-2h],0h             
0937  mov     bx,[bp-2h]                      
093a  add     bx,bx                           
093c  mov     word ptr [bx+2C50h],0h          
0942  inc     word ptr [bp-2h]                
0945  cmp     word ptr [bp-2h],0C8h           
094a  jl      937h                            
094c  pop     ds                              
094d  leave                                   
094e  retf                                    
094f  add     [bx+si],al                      

; ===== DISABLEMENUITEM =====
0950  mov     ax,929h                         ; segment seg2:0000
0953  enter   2h,0h                           
0957  push    ds                              
0958  mov     ds,ax                           
095a  mov     word ptr [bp-2h],0h             
095f  jmp     976h                            
0961  mov     bx,[bp-2h]                      
0964  add     bx,bx                           
0966  cmp     word ptr [bx+2C50h],0h          
096b  jne     973h                            
096d  mov     [bx+2C50h],ax                   
0971  jmp     98Bh                            
0973  inc     word ptr [bp-2h]                
0976  cmp     word ptr [bp-2h],0C8h           
097b  jge     98Fh                            
097d  mov     ax,[bp+6h]                      
0980  mov     bx,[bp-2h]                      
0983  add     bx,bx                           
0985  cmp     [bx+2C50h],ax                   
0989  jne     961h                            
098b  xor     ax,ax                           
098d  jmp     992h                            
098f  mov     ax,0FFFFh                       
0992  pop     ds                              
0993  leave                                   
0994  retf    2h                              
0997  add     [bx+si],al                      

; ===== MENUITEMSTATE =====
0998  mov     ax,951h                         ; segment seg2:0000
099b  enter   2h,0h                           
099f  push    ds                              
09a0  mov     ds,ax                           
09a2  mov     word ptr [bp-2h],0h             
09a7  jmp     9BCh                            
09a9  mov     bx,[bp-2h]                      
09ac  add     bx,bx                           
09ae  cmp     word ptr [bx+2C50h],0h          
09b3  jne     9B9h                            
09b5  xor     ax,ax                           
09b7  jmp     9D4h                            
09b9  inc     word ptr [bp-2h]                
09bc  cmp     word ptr [bp-2h],0C8h           
09c1  jge     9B5h                            
09c3  mov     ax,[bp+6h]                      
09c6  mov     bx,[bp-2h]                      
09c9  add     bx,bx                           
09cb  cmp     [bx+2C50h],ax                   
09cf  jne     9A9h                            
09d1  mov     ax,1h                           
09d4  pop     ds                              
09d5  leave                                   
09d6  retf    2h                              
09d9  add     [bx+si],al                      

; ===== SETIMAGEDIR =====
09da  mov     ax,999h                         ; segment seg2:0000
09dd  push    bp                              
09de  mov     bp,sp                           
09e0  push    ds                              
09e1  mov     ds,ax                           
09e3  mov     ax,[bp+6h]                      
09e6  mov     [1000h],ax                      
09e9  pop     ds                              
09ea  leave                                   
09eb  retf    2h                              

; ===== IMAGEDIRENABLED =====
09ee  mov     ax,9DBh                         ; segment seg2:0000
09f1  push    bp                              
09f2  mov     bp,sp                           
09f4  push    ds                              
09f5  mov     ds,ax                           
09f7  mov     ax,[1000h]                      
09fa  pop     ds                              
09fb  leave                                   
09fc  retf                                    
09fd  add     [bx+si],al                      

; ===== INITPANELTABLE =====
09fe  mov     ax,9EFh                         ; segment seg2:0000
0a01  enter   2h,0h                           
0a05  push    ds                              
0a06  mov     ds,ax                           
0a08  mov     word ptr [1162h],1h             
0a0e  mov     word ptr [bp-2h],0h             
0a13  imul    bx,[bp-2h],62h                  
0a17  mov     word ptr [bx+1164h],0h          
0a1d  inc     word ptr [bp-2h]                
0a20  cmp     word ptr [bp-2h],3Ch            
0a24  jl      0A13h                           
0a26  mov     word ptr [0FFEh],1h             
0a2c  push    3h                              
0a2e  call far sub_08cc                       
0a33  pop     bx                              
0a34  pop     ds                              
0a35  leave                                   
0a36  retf                                    
0a37  add     [bx+si],al                      

; ===== LOADPANELVISTABLE =====
0a38  mov     ax,9FFh                         ; segment seg2:0000
0a3b  enter   6h,0h                           
0a3f  push    ds                              
0a40  mov     ds,ax                           
0a42  push    ds                              
0a43  push    2DE0h                           
0a46  call far M007.GETLEOPATH                
0a4b  push    dx                              
0a4c  push    ax                              
0a4d  call far KERNEL.LSTRCPY                 
0a52  push    ds                              
0a53  push    2DE0h                           
0a56  push    0A9Ch                           ; segment seg1:0000
0a59  push    1058h                           
0a5c  call far KERNEL.LSTRCAT                 ; "ACCESSP.LEO"
0a61  push    ds                              
0a62  push    2DE0h                           
0a65  push    0h                              
0a67  call far KERNEL._LOPEN                  
0a6c  mov     [bp-4h],ax                      
0a6f  or      ax,ax                           
0a71  jl      0ACFh                           
0a73  push    ax                              
0a74  push    ds                              
0a75  push    1162h                           
0a78  push    16FAh                           
0a7b  call far KERNEL._LREAD                  
0a80  mov     [bp-2h],ax                      
0a83  push    word ptr [bp-4h]                
0a86  call far KERNEL._LCLOSE                 
0a8b  cmp     word ptr [bp-2h],16FAh          
0a90  jne     0AC5h                           
0a92  cmp     word ptr [1162h],1h             
0a97  je      0AB2h                           
0a99  push    0h                              
0a9b  push    0ABDh                           ; segment seg1:0000
0a9e  push    1064h                           
0aa1  push    ds                              
0aa2  push    2DE0h                           
0aa5  push    30h                             
0aa7  call far USER.MESSAGEBOX                ; "File issue incorrect"
0aac  mov     ax,1h                           
0aaf  pop     ds                              
0ab0  leave                                   
0ab1  retf                                    
0ab2  mov     word ptr [0FFEh],1h             
0ab8  push    3h                              
0aba  call far sub_08cc                       
0abf  pop     bx                              
0ac0  xor     ax,ax                           
0ac2  pop     ds                              
0ac3  leave                                   
0ac4  retf                                    
0ac5  push    0h                              
0ac7  push    0AE7h                           ; segment seg1:0000
0aca  push    107Ah                           
0acd  jmp     0AA1h                           
0acf  push    ds                              
0ad0  push    2DE0h                           
0ad3  push    0h                              
0ad5  call far KERNEL._LCREAT                 ; "File incorrect size"
0ada  or      ax,ax                           
0adc  jl      0AE4h                           
0ade  push    ax                              
0adf  call far KERNEL._LCLOSE                 
0ae4  push    0h                              
0ae6  push    0A31h                           ; segment seg1:0000
0ae9  push    108Eh                           
0aec  jmp     0AA1h                           

; ===== SAVEPANELVISTABLE =====
0aee  mov     ax,0A39h                        ; segment seg2:0000
0af1  enter   6h,0h                           
0af5  push    ds                              
0af6  mov     ds,ax                           
0af8  push    ds                              
0af9  push    2EE0h                           
0afc  call far M007.GETLEOPATH                ; "Error reading file"
0b01  push    dx                              
0b02  push    ax                              
0b03  call far KERNEL.LSTRCPY                 
0b08  push    ds                              
0b09  push    2EE0h                           
0b0c  push    0B4Ch                           ; segment seg1:0000
0b0f  push    1058h                           
0b12  call far KERNEL.LSTRCAT                 ; "ACCESSP.LEO"
0b17  push    ds                              
0b18  push    2EE0h                           
0b1b  mov     ax,1h                           
0b1e  push    ax                              
0b1f  call far KERNEL._LOPEN                  
0b24  mov     [bp-2h],ax                      
0b27  or      ax,ax                           
0b29  jl      0B65h                           
0b2b  push    ax                              
0b2c  push    ds                              
0b2d  push    1162h                           
0b30  push    16FAh                           
0b33  call far KERNEL._LWRITE                 
0b38  cmp     ax,16FAh                        
0b3b  jne     0B53h                           
0b3d  push    word ptr [bp-2h]                
0b40  call far KERNEL._LCLOSE                 
0b45  or      ax,ax                           
0b47  jge     0B78h                           
0b49  push    0h                              
0b4b  push    0B5Eh                           ; segment seg1:0000
0b4e  push    10A2h                           
0b51  jmp     0B6Dh                           
0b53  push    word ptr [bp-2h]                
0b56  call far KERNEL._LCLOSE                 ; "Error closing file"
0b5b  push    0h                              
0b5d  push    0B68h                           ; segment seg1:0000
0b60  push    10B6h                           
0b63  jmp     0B6Dh                           
0b65  push    0h                              
0b67  push    0A57h                           ; segment seg1:0000
0b6a  push    10CAh                           
0b6d  push    ds                              
0b6e  push    2EE0h                           
0b71  push    30h                             
0b73  call far USER.MESSAGEBOX                ; "Error writing file"  "Error opening file"
0b78  pop     ds                              
0b79  leave                                   
0b7a  retf                                    
0b7b  add     [bx+si],al                      

; ===== REGISTERLEOPANEL =====
0b7c  mov     ax,0AEFh                        ; segment seg2:0000
0b7f  enter   2h,0h                           
0b83  push    si                              
0b84  push    ds                              
0b85  mov     ds,ax                           
0b87  push    word ptr [bp+0Ch]               
0b8a  push    word ptr [bp+0Ah]               
0b8d  call far KERNEL.LSTRLEN                 
0b92  cmp     ax,20h                          
0b95  jle     0B9Fh                           
0b97  les     bx,[bp+0Ah]                     
0b9a  mov     byte ptr es:[bx+20h],0h         
0b9f  push    word ptr [bp+8h]                
0ba2  push    word ptr [bp+6h]                
0ba5  call far KERNEL.LSTRLEN                 
0baa  cmp     ax,40h                          
0bad  jle     0BB7h                           
0baf  les     bx,[bp+6h]                      
0bb2  mov     byte ptr es:[bx+40h],0h         
0bb7  mov     word ptr [bp-2h],0h             
0bbc  jmp     0BC1h                           
0bbe  inc     word ptr [bp-2h]                
0bc1  cmp     word ptr [bp-2h],3Ch            
0bc5  jge     0C01h                           
0bc7  imul    bx,[bp-2h],62h                  
0bcb  cmp     word ptr [bx+1164h],0h          
0bd0  je      0BBEh                           
0bd2  push    word ptr [bp+0Ch]               
0bd5  push    word ptr [bp+0Ah]               
0bd8  mov     ax,bx                           
0bda  add     bx,1166h                        
0bde  push    ds                              
0bdf  push    bx                              
0be0  mov     si,ax                           
0be2  call far USER.LSTRCMPI                  
0be7  or      ax,ax                           
0be9  jne     0BBEh                           
0beb  add     si,1186h                        
0bef  push    ds                              
0bf0  push    si                              
0bf1  push    word ptr [bp+8h]                
0bf4  push    word ptr [bp+6h]                
0bf7  call far KERNEL.LSTRCPY                 
0bfc  mov     ax,[bp-2h]                      
0bff  jmp     0C66h                           
0c01  mov     word ptr [bp-2h],0h             
0c06  jmp     0C0Bh                           
0c08  inc     word ptr [bp-2h]                
0c0b  cmp     word ptr [bp-2h],3Ch            
0c0f  jge     0C4Eh                           
0c11  imul    bx,[bp-2h],62h                  
0c15  cmp     word ptr [bx+1164h],0h          
0c1a  jne     0C08h                           
0c1c  mov     ax,bx                           
0c1e  add     bx,1166h                        
0c22  push    ds                              
0c23  push    bx                              
0c24  push    word ptr [bp+0Ch]               
0c27  push    word ptr [bp+0Ah]               
0c2a  mov     si,ax                           
0c2c  call far KERNEL.LSTRCPY                 
0c31  mov     ax,si                           
0c33  add     si,1186h                        
0c37  push    ds                              
0c38  push    si                              
0c39  push    word ptr [bp+8h]                
0c3c  push    word ptr [bp+6h]                
0c3f  mov     si,ax                           
0c41  call far KERNEL.LSTRCPY                 
0c46  mov     word ptr [si+1164h],1h          
0c4c  jmp     0BFCh                           
0c4e  push    0h                              
0c50  push    0B0Dh                           ; segment seg1:0000
0c53  push    10DEh                           
0c56  push    word ptr [bp+8h]                
0c59  push    word ptr [bp+6h]                
0c5c  push    30h                             
0c5e  call far USER.MESSAGEBOX                ; "Failed to register panel - table full"
0c63  mov     ax,0FFFFh                       
0c66  pop     ds                              
0c67  pop     si                              
0c68  leave                                   
0c69  retf    8h                              

; ===== ISPANELVISIBLE =====
0c6c  mov     ax,0B7Dh                        ; segment seg2:0000
0c6f  push    bp                              
0c70  mov     bp,sp                           
0c72  push    ds                              
0c73  mov     ds,ax                           
0c75  cmp     word ptr [bp+6h],0h             
0c79  jl      0C81h                           
0c7b  cmp     word ptr [bp+6h],3Ch            
0c7f  jl      0C86h                           
0c81  mov     ax,190h                         
0c84  jmp     0C9Ah                           
0c86  mov     ax,[285Ch]                      
0c89  imul    bx,[bp+6h],62h                  
0c8d  cmp     [bx+1164h],ax                   
0c91  jl      0C97h                           
0c93  xor     ax,ax                           
0c95  jmp     0C9Ah                           
0c97  mov     ax,1h                           
0c9a  pop     ds                              
0c9b  leave                                   
0c9c  retf    2h                              
0c9f  add     [bx+si],al                      

; ===== READPANELTABLEENTRY =====
0ca0  mov     ax,0C6Dh                        ; segment seg2:0000
0ca3  push    bp                              
0ca4  mov     bp,sp                           
0ca6  push    si                              
0ca7  push    ds                              
0ca8  mov     ds,ax                           
0caa  cmp     word ptr [bp+0Eh],0h            
0cae  jl      0CB6h                           
0cb0  cmp     word ptr [bp+0Eh],3Ch           
0cb4  jl      0CBBh                           
0cb6  mov     ax,0FFFFh                       
0cb9  jmp     0CECh                           
0cbb  push    word ptr [bp+0Ch]               
0cbe  push    word ptr [bp+0Ah]               
0cc1  imul    ax,[bp+0Eh],62h                 
0cc5  mov     cx,ax                           
0cc7  add     ax,1166h                        
0cca  push    ds                              
0ccb  push    ax                              
0ccc  mov     si,cx                           
0cce  call far KERNEL.LSTRCPY                 
0cd3  push    word ptr [bp+8h]                
0cd6  push    word ptr [bp+6h]                
0cd9  mov     ax,si                           
0cdb  add     si,1186h                        
0cdf  push    ds                              
0ce0  push    si                              
0ce1  mov     si,ax                           
0ce3  call far KERNEL.LSTRCPY                 
0ce8  mov     ax,[si+1164h]                   
0cec  pop     ds                              
0ced  pop     si                              
0cee  leave                                   
0cef  retf    0Ah                             

; ===== SETPANELVIS =====
0cf2  mov     ax,0CA1h                        ; segment seg2:0000
0cf5  push    bp                              
0cf6  mov     bp,sp                           
0cf8  push    ds                              
0cf9  mov     ds,ax                           
0cfb  cmp     word ptr [bp+8h],0h             
0cff  jl      0D07h                           
0d01  cmp     word ptr [bp+8h],3Ch            
0d05  jl      0D0Ch                           
0d07  mov     ax,0FFFFh                       
0d0a  jmp     0D27h                           
0d0c  mov     ax,[bp+6h]                      
0d0f  imul    bx,[bp+8h],62h                  
0d13  mov     [bx+1164h],ax                   
0d17  mov     word ptr [0FFEh],1h             
0d1d  push    3h                              
0d1f  call far sub_08cc                       
0d24  pop     bx                              
0d25  xor     ax,ax                           
0d27  pop     ds                              
0d28  leave                                   
0d29  retf    4h                              

; ===== READMAXPANELS =====
0d2c  mov     ax,0CF3h                        ; segment seg2:0000
0d2f  push    bp                              
0d30  mov     bp,sp                           
0d32  push    ds                              
0d33  mov     ds,ax                           
0d35  mov     ax,3Ch                          
0d38  pop     ds                              
0d39  leave                                   
0d3a  retf                                    
0d3b  add     [bx+si],al                      

; ===== SETSTATEVIS =====
0d3c  mov     ax,0D2Dh                        ; segment seg2:0000
0d3f  push    bp                              
0d40  mov     bp,sp                           
0d42  push    ds                              
0d43  mov     ds,ax                           
0d45  cmp     word ptr [bp+8h],160h           
0d4a  jg      0D56h                           
0d4c  mov     bx,[bp+8h]                      
0d4f  mov     al,[bp+6h]                      
0d52  mov     [bx+2A24h],al                   
0d56  mov     ax,1h                           
0d59  mov     [0FFEh],ax                      
0d5c  push    ax                              
0d5d  call far sub_08cc                       
0d62  pop     bx                              
0d63  pop     ds                              
0d64  leave                                   
0d65  retf    4h                              

; ===== SETVALUEVIS =====
0d68  mov     ax,0D3Dh                        ; segment seg2:0000
0d6b  push    bp                              
0d6c  mov     bp,sp                           
0d6e  push    ds                              
0d6f  mov     ds,ax                           
0d71  cmp     word ptr [bp+8h],1C4h           
0d76  jg      0D82h                           
0d78  mov     bx,[bp+8h]                      
0d7b  mov     al,[bp+6h]                      
0d7e  mov     [bx+285Eh],al                   
0d82  mov     ax,1h                           
0d85  mov     [0FFEh],ax                      
0d88  push    ax                              
0d89  call far sub_08cc                       
0d8e  pop     bx                              
0d8f  pop     ds                              
0d90  leave                                   
0d91  retf    4h                              

; ===== SETCOMMANDVIS =====
0d94  mov     ax,0D69h                        ; segment seg2:0000
0d97  push    bp                              
0d98  mov     bp,sp                           
0d9a  push    ds                              
0d9b  mov     ds,ax                           
0d9d  cmp     word ptr [bp+8h],0C9h           
0da2  jg      0DAEh                           
0da4  mov     bx,[bp+8h]                      
0da7  mov     al,[bp+6h]                      
0daa  mov     [bx+2B86h],al                   
0dae  mov     ax,1h                           
0db1  mov     [0FFEh],ax                      
0db4  push    ax                              
0db5  call far sub_08cc                       
0dba  pop     bx                              
0dbb  pop     ds                              
0dbc  leave                                   
0dbd  retf    4h                              

; ===== GETSTATEVIS =====
0dc0  mov     ax,0D95h                        ; segment seg2:0000
0dc3  push    bp                              
0dc4  mov     bp,sp                           
0dc6  push    ds                              
0dc7  mov     ds,ax                           
0dc9  cmp     word ptr [bp+6h],160h           
0dce  jg      0DDAh                           
0dd0  mov     bx,[bp+6h]                      
0dd3  mov     al,[bx+2A24h]                   
0dd7  cbw                                     
0dd8  jmp     0DDCh                           
0dda  xor     ax,ax                           
0ddc  pop     ds                              
0ddd  leave                                   
0dde  retf    2h                              
0de1  add     [bx+si],al                      

; ===== GETVALUEVIS =====
0de2  mov     ax,0DC1h                        ; segment seg2:0000
0de5  push    bp                              
0de6  mov     bp,sp                           
0de8  push    ds                              
0de9  mov     ds,ax                           
0deb  cmp     word ptr [bp+6h],1C4h           
0df0  jg      0DFCh                           
0df2  mov     bx,[bp+6h]                      
0df5  mov     al,[bx+285Eh]                   
0df9  cbw                                     
0dfa  jmp     0DFEh                           
0dfc  xor     ax,ax                           
0dfe  pop     ds                              
0dff  leave                                   
0e00  retf    2h                              
0e03  add     [bx+si],al                      

; ===== GETCOMMANDVIS =====
0e04  mov     ax,0DE3h                        ; segment seg2:0000
0e07  push    bp                              
0e08  mov     bp,sp                           
0e0a  push    ds                              
0e0b  mov     ds,ax                           
0e0d  cmp     word ptr [bp+6h],0C9h           
0e12  jg      0E1Eh                           
0e14  mov     bx,[bp+6h]                      
0e17  mov     al,[bx+2B86h]                   
0e1b  cbw                                     
0e1c  jmp     0E20h                           
0e1e  xor     ax,ax                           
0e20  pop     ds                              
0e21  leave                                   
0e22  retf    2h                              
0e25  add     [bx+si],al                      

; ===== SETVISMODE =====
0e26  mov     ax,0E05h                        ; segment seg2:0000
0e29  push    bp                              
0e2a  mov     bp,sp                           
0e2c  push    ds                              
0e2d  mov     ds,ax                           
0e2f  mov     ax,[bp+6h]                      
0e32  mov     [285Ch],ax                      
0e35  push    2h                              
0e37  call far sub_08cc                       
0e3c  pop     bx                              
0e3d  pop     ds                              
0e3e  leave                                   
0e3f  retf    2h                              

; ===== ISAVISIBLE =====
0e42  mov     ax,0E27h                        ; segment seg2:0000
0e45  push    bp                              
0e46  mov     bp,sp                           
0e48  push    ds                              
0e49  mov     ds,ax                           
0e4b  cmp     word ptr [bp+6h],1C4h           
0e50  jle     0E57h                           
0e52  mov     ax,190h                         
0e55  jmp     0E6Ch                           
0e57  mov     bx,[bp+6h]                      
0e5a  mov     al,[bx+285Eh]                   
0e5e  cbw                                     
0e5f  cmp     ax,[285Ch]                      
0e63  jl      0E69h                           
0e65  xor     ax,ax                           
0e67  jmp     0E6Ch                           
0e69  mov     ax,1h                           
0e6c  pop     ds                              
0e6d  leave                                   
0e6e  retf    2h                              
0e71  add     [bx+si],al                      

; ===== ISDVISIBLE =====
0e72  mov     ax,0E43h                        ; segment seg2:0000
0e75  push    bp                              
0e76  mov     bp,sp                           
0e78  push    ds                              
0e79  mov     ds,ax                           
0e7b  cmp     word ptr [bp+6h],160h           
0e80  jle     0E87h                           
0e82  mov     ax,190h                         
0e85  jmp     0E9Ch                           
0e87  mov     bx,[bp+6h]                      
0e8a  mov     al,[bx+2A24h]                   
0e8e  cbw                                     
0e8f  cmp     ax,[285Ch]                      
0e93  jl      0E99h                           
0e95  xor     ax,ax                           
0e97  jmp     0E9Ch                           
0e99  mov     ax,1h                           
0e9c  pop     ds                              
0e9d  leave                                   
0e9e  retf    2h                              
0ea1  add     [bx+si],al                      

; ===== ISCVISIBLE =====
0ea2  mov     ax,0E73h                        ; segment seg2:0000
0ea5  push    bp                              
0ea6  mov     bp,sp                           
0ea8  push    ds                              
0ea9  mov     ds,ax                           
0eab  cmp     word ptr [bp+6h],0C9h           
0eb0  jle     0EB7h                           
0eb2  mov     ax,190h                         
0eb5  jmp     0ECCh                           
0eb7  mov     bx,[bp+6h]                      
0eba  mov     al,[bx+2B86h]                   
0ebe  cbw                                     
0ebf  cmp     ax,[285Ch]                      
0ec3  jl      0EC9h                           
0ec5  xor     ax,ax                           
0ec7  jmp     0ECCh                           
0ec9  mov     ax,1h                           
0ecc  pop     ds                              
0ecd  leave                                   
0ece  retf    2h                              
0ed1  add     [bx+si],al                      

; ===== LOADVISTABLES =====
0ed2  mov     ax,0EA3h                        ; segment seg2:0000
0ed5  enter   818h,0h                         
0ed9  push    si                              
0eda  push    ds                              
0edb  mov     ds,ax                           
0edd  mov     byte ptr [bp-818h],1h           
0ee2  push    ds                              
0ee3  push    2FE0h                           
0ee6  call far M007.GETLEOPATH                
0eeb  push    dx                              
0eec  push    ax                              
0eed  call far KERNEL.LSTRCPY                 
0ef2  push    ds                              
0ef3  push    2FE0h                           
0ef6  push    0F44h                           ; segment seg1:0000
0ef9  push    1104h                           
0efc  call far KERNEL.LSTRCAT                 ; "ACCESS.LEO"
0f01  push    ds                              
0f02  push    2FE0h                           
0f05  push    0h                              
0f07  call far KERNEL._LOPEN                  
0f0c  mov     [bp-6h],ax                      
0f0f  or      ax,ax                           
0f11  jge     0F16h                           
0f13  jmp     0FD3h                           
0f16  push    ax                              
0f17  lea     cx,[bp-816h]                    
0f1b  push    ss                              
0f1c  push    cx                              
0f1d  push    810h                            
0f20  call far KERNEL._LREAD                  
0f25  mov     [bp-2h],ax                      
0f28  push    word ptr [bp-6h]                
0f2b  call far KERNEL._LCLOSE                 
0f30  cmp     word ptr [bp-2h],810h           
0f35  je      0F3Ah                           
0f37  jmp     0FC8h                           
0f3a  cmp     word ptr [bp-816h],0h           
0f3f  je      0F5Ah                           
0f41  push    0h                              
0f43  push    0FC1h                           ; segment seg1:0000
0f46  push    1064h                           
0f49  push    ds                              
0f4a  push    2FE0h                           
0f4d  push    30h                             
0f4f  call far USER.MESSAGEBOX                ; "File issue incorrect"
0f54  mov     ax,1h                           
0f57  jmp     0FDEh                           
0f5a  mov     word ptr [bp-4h],0h             
0f5f  mov     si,[bp-4h]                      
0f62  add     si,si                           
0f64  mov     bx,[bp-4h]                      
0f67  mov     al,[bp+si-80Eh]                 
0f6b  mov     [bx+285Eh],al                   
0f6f  inc     word ptr [bp-4h]                
0f72  cmp     word ptr [bp-4h],1C4h           
0f77  jle     0F5Fh                           
0f79  mov     word ptr [bp-4h],0h             
0f7e  mov     si,[bp-4h]                      
0f81  add     si,si                           
0f83  mov     bx,[bp-4h]                      
0f86  mov     al,[bp+si-47Eh]                 
0f8a  mov     [bx+2A24h],al                   
0f8e  inc     word ptr [bp-4h]                
0f91  cmp     word ptr [bp-4h],160h           
0f96  jle     0F7Eh                           
0f98  mov     word ptr [bp-4h],0h             
0f9d  mov     si,[bp-4h]                      
0fa0  add     si,si                           
0fa2  mov     bx,[bp-4h]                      
0fa5  mov     al,[bp+si-1ACh]                 
0fa9  mov     [bx+2B86h],al                   
0fad  inc     word ptr [bp-4h]                
0fb0  cmp     word ptr [bp-4h],0C9h           
0fb5  jle     0F9Dh                           
0fb7  mov     ax,1h                           
0fba  mov     [0FFEh],ax                      
0fbd  push    ax                              
0fbe  call far sub_08cc                       
0fc3  pop     bx                              
0fc4  xor     ax,ax                           
0fc6  jmp     0FDEh                           
0fc8  push    0h                              
0fca  push    0FD6h                           ; segment seg1:0000
0fcd  push    107Ah                           
0fd0  jmp     0F49h                           
0fd3  push    0h                              
0fd5  push    0E3Ah                           ; segment seg1:0000
0fd8  push    108Eh                           
0fdb  jmp     0F49h                           
0fde  pop     ds                              
0fdf  pop     si                              
0fe0  leave                                   
0fe1  retf                                    

; ===== VISCHANGED =====
0fe2  mov     ax,0ED3h                        ; segment seg2:0000
0fe5  enter   2h,0h                           
0fe9  push    ds                              
0fea  mov     ds,ax                           
0fec  mov     ax,[0FFEh]                      
0fef  mov     word ptr [0FFEh],0h             
0ff5  pop     ds                              
0ff6  leave                                   
0ff7  retf                                    

; ===== LEO_AP =====
0ff8  mov     ax,0FE3h                        ; segment seg2:0000
0ffb  push    bp                              
0ffc  mov     bp,sp                           
0ffe  push    ds                              
0fff  mov     ds,ax                           
1001  mov     ax,1C4h                         
1004  pop     ds                              
1005  leave                                   
1006  retf                                    
1007  add     [bx+si],al                      

; ===== LEO_DP =====
1008  mov     ax,0FF9h                        ; segment seg2:0000
100b  push    bp                              
100c  mov     bp,sp                           
100e  push    ds                              
100f  mov     ds,ax                           
1011  mov     ax,160h                         
1014  pop     ds                              
1015  leave                                   
1016  retf                                    
1017  add     [bx+si],al                      

; ===== LEO_CMD =====
1018  mov     ax,1009h                        ; segment seg2:0000
101b  push    bp                              
101c  mov     bp,sp                           
101e  push    ds                              
101f  mov     ds,ax                           
1021  mov     ax,0C9h                         
1024  pop     ds                              
1025  leave                                   
1026  retf                                    
1027  add     [si+45h],cl                     
102a  dec     di                              
102b  and     [bx+di+63h],al                  
102e  arpl    [bx+75h],bp                     
1031  outsb                                   
1032  je      109Dh                           
1034  outsb                                   
1035  and     [ebp+6Fh],cl                    
1039  outsb                                   
103a  imul    si,[si+6Fh],72h                 
103f  add     [si+68h],dl                     
1042  jne     10B2h                           
1044  jb      108Eh                           
1048  outsw                                   
1049  jb      10B8h                           
104b  add     [si+45h],cl                     
104e  dec     di                              
104f  dec     bp                              
1050  dec     di                              
1051  dec     si                              
1052  pop     di                              
1053  dec     bp                              
1054  push    bx                              
1055  inc     di                              
1056  add     [bx+si],al                      
1058  inc     cx                              
1059  inc     bx                              
105a  inc     bx                              
105b  inc     bp                              
105c  push    bx                              
105d  push    bx                              
105e  push    ax                              
105f  dec     sp                              
1061  inc     bp                              
1062  dec     di                              
1063  add     [bp+69h],al                     
1066  insb                                    
1067  and     gs:[bx+di+73h],ch               
106b  jae     10E2h                           
106d  and     gs:[bx+di+6Eh],ch               
1071  arpl    [bx+72h],bp                     
1074  jb      10DBh                           
1076  arpl    [si],si                         
1079  add     [bp+69h],al                     
107c  insb                                    
107d  and     gs:[bx+di+6Eh],ch               
1081  arpl    [bx+72h],bp                     
1084  jb      10EBh                           
1086  arpl    [si+20h],si                     
1089  jae     10F4h                           
108b  jp      10F2h                           
108d  add     [di+72h],al                     
1090  jb      1101h                           
1092  jb      10B4h                           
1094  jb      10FBh                           
1096  popa                                    
1097  imul    bp,fs:[bp+67h],6620h            
109d  imul    bp,[si+65h],0h                  
10a2  inc     bp                              
10a3  jb      1117h                           
10a5  outsw                                   
10a6  jb      10C8h                           
10a8  arpl    [si+6Fh],bp                     
10ab  jae     1116h                           
10ad  outsb                                   
10ae  and     [esi+69h],ah                    
10b2  insb                                    
10b3  add     gs:[bx+si],al                   
10b6  inc     bp                              
10b7  jb      112Bh                           
10b9  outsw                                   
10ba  jb      10DCh                           
10bc  ja      1130h                           
10be  imul    si,[si+69h],676Eh               
10c3  and     [bp+69h],ah                     
10c6  insb                                    
10c7  add     gs:[bx+si],al                   
10ca  inc     bp                              
10cb  jb      113Fh                           
10cd  outsw                                   
10ce  jb      10F0h                           
10d0  outsw                                   
10d1  jo      1138h                           
10d3  outsb                                   
10d4  imul    bp,[bp+67h],6620h               
10d9  imul    bp,[si+65h],0h                  
10de  inc     si                              
10df  popa                                    
10e0  imul    bp,[si+65h],2064h               
10e5  je      1156h                           
10e7  and     [bp+si+65h],dh                  
10ea  imul    si,[ebx+74h],7265h              
10f0  and     [bx+si+61h],dh                  
10f3  outsb                                   
10f4  insb                                    
10f6  and     [di],ch                         
10f8  and     [si+61h],dh                     
10fb  bound   bp,[si+65h]                     
10fe  and     [bp+75h],ah                     
1101  insb                                    
1102  insb                                    
1103  add     [bx+di+43h],al                  
1106  inc     bx                              
1107  inc     bp                              
1108  push    bx                              
1109  push    bx                              
110a  dec     sp                              
110c  inc     bp                              
110d  dec     di                              
110e  add     [bx+si],al                      
1110  inc     si                              
1111  imul    bp,[si+65h],6120h               
1116  jb      118Ah                           
1118  popa                                    
1119  jns     113Bh                           
111b  jae     1186h                           
111d  jp      1184h                           
111f  jae     1141h                           
1121  outsb                                   
1122  outsw                                   
1123  je      1145h                           
1125  arpl    [bx+6Dh],bp                     
1128  jo      118Bh                           
112a  je      1195h                           
112c  bound   bp,[si+65h]                     
112f  add     [bx+si],al                      

; ===== SHOW_HP_PANEL =====
1130  mov     ax,1019h                        ; segment seg2:0000
1133  push    bp                              
1134  mov     bp,sp                           
1136  push    ds                              
1137  mov     ds,ax                           
1139  cmp     word ptr [bp+6h],1h             
113d  jne     1146h                           
113f  call far M600.HP_SHOW_PANEL             
1144  jmp     114Bh                           
1146  call far M600.HP_SHOW_SERVICE_PANEL     
114b  pop     ds                              
114c  leave                                   
114d  retf    2h                              

; ===== SERVICEDONGLEPRESENT =====
1150  mov     ax,1131h                        ; segment seg2:0000
1153  push    bp                              
1154  mov     bp,sp                           
1156  push    ds                              
1157  mov     ds,ax                           
1159  xor     ax,ax                           
115b  pop     ds                              
115c  leave                                   
115d  retf                                    

; ===== LEOCHECKDONGLE =====
115e  mov     ax,1151h                        ; segment seg2:0000
1161  push    bp                              
1162  mov     bp,sp                           
1164  push    ds                              
1165  mov     ds,ax                           
1167  xor     ax,ax                           
1169  pop     ds                              
116a  leave                                   
116b  retf                                    
