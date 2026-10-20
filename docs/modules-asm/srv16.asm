0000  push    0FF1Fh                          
0003  call    word ptr [si]                   
0005  and     ax,[bp+si]                      
0007  add     [bp+si+27h],ch                  
000a  push    es                              
000b  add     [si+27h],dl                     
000e  or      al,[bx+si]                      
0010  cmp     ah,[bx]                         
0012  push    cs                              
0013  add     [si],al                         
0015  daa                                     
0016  adc     al,[bx+si]                      
0018  jmp     0D000h:1626h                    
001d  sbb     al,es:[bx+si]                   
0020  mov     dh,26h                          
0022  push    ds                              
0023  add     [si+2226h],ah                   
0027  add     [bp+26h],bh                     
002a  add     es:[si+26h],ah                  
002e  sub     al,[bx+si]                      
0030  dec     dx                              
0031  add     cs:[bx+si],dh                   
0035  xor     al,es:[bx+si]                   
0038  sbb     ah,[36h]                        
003c  out     25h,al                          
003e  cmp     al,[bx+si]                      
0040  retf    3E25h                           
0043  add     [si+4224h],dh                   
0047  add     [bx+si],al                      
0049  inc     si                              
004b  add     [bx+si+4A25h],dh                
004f  add     [bp+4E25h],dl                   
0053  add     [si+25h],bh                     
0056  push    dx                              
0057  add     [bp+si+25h],ah                  
005a  push    si                              
005b  add     [bx+si+25h],cl                  
005e  pop     dx                              
005f  add     [5E25h],ch                      
0063  add     [si],dl                         
0065  and     ax,62h                          
0068  cli                                     
0069  and     al,66h                          
006b  add     al,ah                           
006d  and     al,6Ah                          
006f  add     dh,cl                           
0071  and     al,6Eh                          
0073  add     [bx+si+7224h],al                
0077  add     [bp+24h],ah                     
007a  jbe     7Ch                             
007c  call    4C00h:7A24h                     
0081  and     al,7Eh                          
0083  add     [bp+si],dh                      
0085  and     al,82h                          
0087  add     [bx+si],bl                      
0089  and     al,86h                          
008b  add     dh,bh                           
008d  and     cx,[bp+si-1C00h]                
0091  and     cx,[bp-5000h]                   
0095  and     dx,[bp+si-3600h]                
0099  and     dx,[bp-6A00h]                   
009d  and     bx,[bp+si+2000h]                
00a1  daa                                     
00a2  sahf                                    
00a3  add     [si+23h],bh                     
00a6  mov     [6200h],al                      
00a9  and     sp,[bp+4800h]                   
00ad  and     bp,[bp+si+2E00h]                
00b1  and     bp,[bp-600h]                    
00b5  and     dh,[bp+si-1C00h]                
00b9  and     dh,[bp-2E00h]                   
00bd  and     bh,[bp+si+7400h]                
00c1  and     bh,[bp+5800h]                   
00c5  and     al,dl                           
00c7  add     [si],bh                         
00c9  and     al,dh                           
00cb  add     [bp+si],ch                      
00cd  and     cl,dl                           
00cf  add     dl,al                           
00d1  and     si,cx                           
00d3  add     [bp-2DDFh],ah                   
00d7  add     [bx+si],bl                      
00d9  and     dl,dh                           
00db  add     [0DA22h],al                     
00df  add     dl,dh                           
00e1  and     si,bx                           
00e3  add     dh,bl                           
00e5  and     dx,sp                           
00e7  add     [si-19DFh],dl                   
00eb  add     [bp+si],al                      
00ed  and     dx,bp                           
00ef  add     ah,ch                           
00f1  and     dh,ch                           
00f3  add     dl,dl                           
00f5  and     dl,dh                           
00f7  add     al,al                           
00f9  and     dh,dh                           
00fb  add     [bp-5E0h],ah                    
00ff  add     [si-1E0h],cl                    
0103  add     [si+20h],ch                     
0106  add     al,[bx+di]                      
0108  push    si                              
0109  and     [3C01h],al                      
010d  and     [bp+si],cl                      
010f  add     [bx+si],sp                      
0111  and     [401h],cl                       
0115  and     [bp+si],dl                      
0117  add     dx,bp                           
0119  pop     ds                              
011a  push    ss                              
011b  add     ax,dx                           
011d  pop     ds                              
011e  sbb     al,[bx+di]                      
0120  mov     dh,1Fh                          
0122  push    ds                              
0123  add     [si+221Fh],bx                   
0127  add     [bp+si+261Fh],ax                
012b  add     [si+1Fh],cx                     
012e  sub     al,[bx+di]                      
0130  pop     ds                              
0132  add     cs:[si],sp                      
0135  pop     ds                              
0136  xor     al,[bx+di]                      
0138  and     [4C01h],esi                     
013d  and     [bp+si],di                      
013f  add     [bx+si],bx                      
0141  and     [1h],di                         

; ----- sub_0144 -----
0144  pop     ax                              
0145  pop     dx                              
0146  push    0FFFFh                          ; segment seg2:0000
0149  push    10h                             
014c  push    142h                            ; segment seg1:0000
014f  push    15Ah                            
0152  push    cs                              
0153  push    dx                              
0154  push    ax                              
0155  jmp far KERNEL.#651                     ; "SRV_ThunkData32"
015a  push    bx                              
015b  push    dx                              
015c  push    si                              
015d  pop     di                              
015e  push    sp                              
015f  push    6E75h                           
0162  imul    ax,[si+61h],74h                 
0166  popa                                    
0167  xor     si,[bp+si]                      
0169  add     [bx+si],al                      
016b  add     [bx+si],al                      
016d  add     [bx+si],al                      
016f  add     [bx+si],al                      
0171  add     [bx+si],al                      
0173  add     [bx+si],al                      
0175  add     [bx+si],al                      
0177  add     [bx+si],al                      
0179  add     bh,bh                           
017b  call    word ptr [bx+si+53h]            
017e  push    cx                              
017f  push    dx                              
0180  push    es                              
0181  mov     ax,17Ah                         
0184  or      ax,ax                           
0186  jns     19Ah                            
0188  pop     es                              
0189  pop     dx                              
018a  pop     cx                              
018b  pop     bx                              
018c  pop     ax                              
018d  call far KERNEL.INITTASK                
0192  jmp     198h                            
0194  nop                                     
0195  xor     ax,ax                           
0197  retf                                    
0198  jmp     1BEh                            
019a  nop                                     
019b  nop                                     
019c  jmp     1ACh                            
019e  push    di                              
019f  call far KERNEL.GETMODULEUSAGE          
01a4  dec     ax                              
01a5  je      1ACh                            
01a7  inc     ax                              
01a8  add     sp,0Ah                          
01ab  retf                                    
01ac  pop     es                              
01ad  pop     dx                              
01ae  pop     cx                              
01af  pop     bx                              
01b0  pop     ax                              
01b1  jmp     1BEh                            
01b3  inc     bx                              
01b4  inc     sp                              
01b5  inc     sp                              
01b6  add     [bx+si],ax                      
01b8  push    ss                              
01b9  add     [4200h],bl                      
01bd  add     [si-6F28h],cl                   
01c1  inc     bp                              
01c2  push    bp                              
01c3  mov     bp,sp                           
01c5  push    ds                              
01c6  mov     ds,ax                           
01c8  push    di                              
01c9  push    si                              
01ca  mov     [2AA0h],di                      
01ce  mov     [2AA2h],ds                      
01d2  mov     [2AA4h],cx                      
01d6  mov     [2AA6h],bx                      
01da  mov     [2AA8h],si                      
01de  jcxz    1EEh                            
01e0  push    ds                              
01e1  xor     ax,ax                           
01e3  push    ax                              
01e4  push    cx                              
01e5  call far KERNEL.LOCALINIT               
01ea  or      ax,ax                           
01ec  je      257h                            
01ee  mov     ax,0FFFFh                       
01f1  push    ax                              
01f2  call far KERNEL.LOCKSEGMENT             
01f7  call far KERNEL.GETVERSION              
01fc  xchg    al,ah                           
01fe  mov     [2ADAh],ax                      
0201  mov     ah,30h                          
0203  test    word ptr cs:[17Ah],1h           
020a  je      213h                            
020c  call far KERNEL.DOS3CALL                
0211  jmp     215h                            
0213  int     21h                             
0215  mov     [2ADEh],ax                      
0218  xchg    al,ah                           
021a  mov     [2ADCh],ax                      
021d  test    word ptr cs:[17Ah],1h           
0224  jne     22Bh                            
0226  mov     al,0h                           
0228  mov     [2AE1h],al                      
022b  call far sub_02f6                       
0230  call far sub_03fe                       
0235  inc     byte ptr [2AAAh]                
0239  push    word ptr [2B02h]                
023d  push    word ptr [2B00h]                ; [ds] f32 here = 0
0241  push    word ptr [2AFEh]                ; [ds] f32 here = 0
0245  push    word ptr [2AFCh]                ; [ds] f32 here = 0
0249  push    word ptr [2AFAh]                ; [ds] f32 here = 0
024d  call far sub_02ca                       
0252  add     sp,0Ah                          
0255  pop     si                              
0256  pop     di                              
0257  sub     bp,2h                           
025a  mov     sp,bp                           
025c  pop     ds                              
025d  pop     bp                              
025e  dec     bp                              
025f  retf                                    
0260  mov     ax,ds                           
0262  nop                                     
0263  inc     bp                              
0264  push    bp                              
0265  mov     bp,sp                           
0267  push    ds                              
0268  mov     ds,ax                           
026a  mov     ax,1h                           
026d  sub     bp,2h                           
0270  mov     sp,bp                           
0272  pop     ds                              
0273  pop     bp                              
0274  dec     bp                              
0275  retf    0Ah                             

; ----- sub_0278 -----
0278  mov     ax,ds                           
027a  nop                                     
027b  inc     bp                              
027c  push    bp                              
027d  mov     bp,sp                           
027f  push    ds                              
0280  mov     ds,ax                           
0282  sub     sp,0Ch                          
0285  push    bx                              
0286  push    cx                              
0287  push    si                              
0288  push    di                              
0289  wait                                    
028a  fstcw   word ptr [bp-4h]                
028d  nop                                     
028e  wait                                    
028f  mov     ax,[bp-4h]                      
0292  or      ah,0Ch                          
0295  mov     [bp-6h],ax                      
0298  wait                                    
0299  fldcw   word ptr [bp-6h]                
029c  wait                                    
029d  fistp   qword ptr [bp-0Eh]              
02a0  wait                                    
02a1  fldcw   word ptr [bp-4h]                
02a4  mov     ax,[bp-0Eh]                     
02a7  mov     dx,[bp-0Ch]                     
02aa  pop     di                              
02ab  pop     si                              
02ac  pop     cx                              
02ad  pop     bx                              
02ae  lea     sp,[bp-2h]                      
02b1  pop     ds                              
02b2  pop     bp                              
02b3  dec     bp                              
02b4  retf                                    
02b5  add     [bp+57h],dl                     
02b8  mov     ax,ds                           
02ba  mov     es,ax                           
02bc  mov     si,2AB4h                        
02bf  mov     di,2B14h                        
02c2  mov     cx,0Ah                          
02c5  rep     movsw                           
02c7  pop     di                              
02c8  pop     si                              
02c9  retf                                    

; ----- sub_02ca -----
02ca  mov     ax,ds                           
02cc  nop                                     
02cd  inc     bp                              
02ce  push    bp                              
02cf  mov     bp,sp                           
02d1  push    ds                              
02d2  mov     ds,ax                           
02d4  push    word ptr [2AA0h]                ; [ds] f32 here = 0
02d8  push    word ptr [2AA2h]                ; [ds] f32 here = 0
02dc  push    word ptr [2AA4h]                ; [ds] f32 here = 0
02e0  push    word ptr [2AA8h]                
02e4  push    word ptr [2AA6h]                ; [ds] f32 here = 0
02e8  call far sub_1ef0                       
02ed  sub     bp,2h                           
02f0  mov     sp,bp                           
02f2  pop     ds                              
02f3  pop     bp                              
02f4  dec     bp                              
02f5  retf                                    

; ----- sub_02f6 -----
02f6  mov     ax,ds                           
02f8  nop                                     
02f9  inc     bp                              
02fa  push    bp                              
02fb  mov     bp,sp                           
02fd  push    ds                              
02fe  mov     ds,ax                           
0300  mov     cx,[2CD2h]                      
0304  jcxz    31Ah                            
0306  xor     si,si                           
0308  mov     ax,[2CD4h]                      
030b  mov     dx,[2CD6h]                      
030f  xor     bx,bx                           
0311  call    far ptr  [2CD0h]                
0315  jae     31Ah                            
0317  jmp     0E34h                           
031a  mov     si,2CE0h                        
031d  mov     di,2CE0h                        
0320  call    3C6h                            
0323  mov     si,2CDCh                        
0326  mov     di,2CE0h                        
0329  call    3C6h                            
032c  mov     si,2CE0h                        
032f  mov     di,2CE0h                        
0332  call    3C6h                            
0335  sub     bp,2h                           
0338  mov     sp,bp                           
033a  pop     ds                              
033b  pop     bp                              
033c  dec     bp                              
033d  retf                                    
033e  mov     ax,ds                           
0340  nop                                     
0341  inc     bp                              
0342  push    bp                              
0343  mov     bp,sp                           
0345  push    ds                              
0346  mov     ds,ax                           
0348  push    si                              
0349  push    di                              
034a  mov     cx,100h                         
034d  jmp     35Eh                            
034f  mov     ax,ds                           
0351  nop                                     
0352  inc     bp                              
0353  push    bp                              
0354  mov     bp,sp                           
0356  push    ds                              
0357  mov     ds,ax                           
0359  push    si                              
035a  push    di                              
035b  mov     cx,101h                         
035e  mov     [2B0Bh],ch                      
0362  push    cx                              
0363  or      cl,cl                           
0365  jne     379h                            
0367  mov     si,3064h                        
036a  mov     di,3064h                        
036d  call    3C6h                            
0370  mov     si,2CE0h                        
0373  mov     di,2CE0h                        
0376  call    3C6h                            
0379  mov     si,2CE0h                        
037c  mov     di,2CE0h                        
037f  call    3C6h                            
0382  mov     si,2CE0h                        
0385  mov     di,2CE0h                        
0388  call    3C6h                            
038b  call    0D0Eh                           
038e  call    0E78h                           
0391  pop     ax                              
0392  pop     di                              
0393  pop     si                              
0394  sub     bp,2h                           
0397  mov     sp,bp                           
0399  pop     ds                              
039a  pop     bp                              
039b  dec     bp                              
039c  retf                                    
039d  mov     cx,[2CD2h]                      
03a1  jcxz    3AAh                            
03a3  mov     bx,2h                           
03a6  call    far ptr  [2CD0h]                
03aa  push    ds                              
03ab  lds     dx,[2AC8h]                      
03af  mov     ax,2500h                        
03b2  test    word ptr cs:[17Ah],1h           
03b9  je      3C2h                            
03bb  call far KERNEL.DOS3CALL                
03c0  jmp     3C4h                            
03c2  int     21h                             
03c4  pop     ds                              
03c5  ret                                     

; ----- sub_03c6 -----
03c6  cmp     si,di                           
03c8  jae     3D8h                            
03ca  sub     di,4h                           
03cd  mov     ax,[di]                         
03cf  or      ax,[di+2h]                      
03d2  je      3C6h                            
03d4  call    far ptr  [di]                   
03d6  jmp     3C6h                            
03d8  ret                                     
03d9  add     [bx+si],al                      

; ----- sub_03da -----
03da  mov     ax,ds                           
03dc  nop                                     
03dd  inc     bp                              
03de  push    bp                              
03df  mov     bp,sp                           
03e1  push    ds                              
03e2  mov     ds,ax                           
03e4  mov     ax,0FCh                         
03e7  push    ax                              
03e8  push    cs                              
03e9  call    0C29h                           
03ec  mov     ax,0FFh                         
03ef  push    ax                              
03f0  push    cs                              
03f1  call    0C29h                           
03f4  sub     bp,2h                           
03f7  mov     sp,bp                           
03f9  pop     ds                              
03fa  pop     bp                              
03fb  dec     bp                              
03fc  retf                                    
03fd  add     [bx+si],al                      

; ----- sub_03fe -----
03fe  mov     ax,ds                           
0400  nop                                     
0401  inc     bp                              
0402  push    bp                              
0403  mov     bp,sp                           
0405  push    ds                              
0406  mov     ds,ax                           
0408  sub     sp,6h                           
040b  push    ds                              
040c  call far KERNEL.GETDOSENVIRONMENT       
0411  or      ax,ax                           
0413  je      418h                            
0415  mov     dx,0h                           
0418  mov     bx,dx                           
041a  mov     es,dx                           
041c  mov     [bp-4h],es                      
041f  mov     [bp-8h],ds                      
0422  xor     ax,ax                           
0424  xor     si,si                           
0426  xor     di,di                           
0428  mov     cx,0FFFFh                       
042b  or      bx,bx                           
042d  je      43Dh                            
042f  cmp     byte ptr es:[0h],0h             
0435  je      43Dh                            
0437  repne   scasb                           
0439  inc     si                              
043a  scasb                                   
043b  jne     437h                            
043d  mov     ax,di                           
043f  inc     ax                              
0440  and     al,0FEh                         
0442  inc     si                              
0443  mov     di,si                           
0445  shl     si,1                            
0447  shl     si,1                            
0449  mov     cx,9h                           
044c  call    0E3Ah                           
044f  push    dx                              
0450  push    ax                              
0451  mov     ax,si                           
0453  call    0E3Ah                           
0456  mov     [2B00h],ax                      
0459  mov     [2B02h],dx                      
045d  mov     [bp-6h],dx                      
0460  push    es                              
0461  pop     ds                              
0462  mov     cx,di                           
0464  mov     bx,ax                           
0466  xor     si,si                           
0468  pop     di                              
0469  pop     es                              
046a  dec     cx                              
046b  jcxz    483h                            
046d  mov     ds,[bp-6h]                      
0470  mov     [bx],di                         
0472  mov     [bx+2h],es                      
0475  add     bx,4h                           
0478  mov     ds,[bp-4h]                      
047b  lodsb                                   
047c  stosb                                   
047d  or      al,al                           
047f  jne     47Bh                            
0481  loop    46Dh                            
0483  mov     ds,[bp-6h]                      
0486  mov     [bx],cx                         
0488  mov     [bx+2h],cx                      
048b  pop     ds                              
048c  sub     bp,2h                           
048f  mov     sp,bp                           
0491  pop     ds                              
0492  pop     bp                              
0493  dec     bp                              
0494  retf                                    
0495  add     [bx+si],al                      

; ----- sub_0496 -----
0496  mov     ax,ds                           
0498  nop                                     
0499  inc     bp                              
049a  push    bp                              
049b  mov     bp,sp                           
049d  push    ds                              
049e  mov     ds,ax                           
04a0  push    si                              
04a1  les     si,[bp+6h]                      
04a4  mov     cx,es                           
04a6  jcxz    4ADh                            
04a8  or      byte ptr es:[si-2h],1h          
04ad  pop     si                              
04ae  sub     bp,2h                           
04b1  mov     sp,bp                           
04b3  pop     ds                              
04b4  pop     bp                              
04b5  dec     bp                              
04b6  retf                                    

; ----- sub_04b7 -----
04b7  mov     ax,ds                           
04b9  nop                                     
04ba  inc     bp                              
04bb  push    bp                              
04bc  mov     bp,sp                           
04be  push    ds                              
04bf  mov     ds,ax                           
04c1  push    si                              
04c2  push    di                              
04c3  mov     cx,[bp+6h]                      
04c6  cmp     cx,-1Ah                         
04c9  ja      534h                            
04cb  push    ds                              
04cc  mov     ax,[2B44h]                      
04cf  or      ax,ax                           
04d1  je      51Bh                            
04d3  mov     di,0E7Ah                        
04d6  mov     si,[2B4Ch]                      
04da  lds     bx,[2B46h]                      
04de  push    ds                              
04df  push    si                              
04e0  push    di                              
04e1  call    di                              
04e3  pop     di                              
04e4  pop     si                              
04e5  jae     512h                            
04e7  mov     dx,ds                           
04e9  lds     bx,[bx+0Eh]                     
04ec  cmp     dx,si                           
04ee  jne     4DFh                            
04f0  pop     ax                              
04f1  pop     ds                              
04f2  push    ds                              
04f3  les     si,[2B46h]                      
04f7  mov     si,es:[si+14h]                  
04fb  lds     bx,[2B42h]                      
04ff  mov     dx,ds                           
0501  cmp     dx,ax                           
0503  jne     4DEh                            
0505  pop     ds                              
0506  push    ds                              
0507  cmp     di,0D1Ch                        
050b  je      51Bh                            
050d  mov     di,0D1Ch                        
0510  jmp     4D6h                            
0512  pop     si                              
0513  cmp     di,0E7Ah                        
0517  je      528h                            
0519  jmp     525h                            
051b  pop     es                              
051c  push    es                              
051d  mov     di,2B42h                        
0520  call    0C8Ch                           
0523  jb      533h                            
0525  call    0E7Ah                           
0528  pop     ds                              
0529  mov     [2B48h],dx                      
052d  mov     [2B46h],bx                      
0531  jmp     553h                            
0533  pop     ds                              
0534  xor     ax,ax                           
0536  cwd                                     
0537  mov     cx,[2B12h]                      
053b  or      cx,[2B10h]                      
053f  je      553h                            
0541  push    word ptr [bp+6h]                
0544  call    far ptr  [2B10h]                
0548  add     sp,2h                           
054b  cwd                                     
054c  or      ax,ax                           
054e  je      553h                            
0550  jmp     4C3h                            
0553  pop     di                              
0554  pop     si                              
0555  sub     bp,2h                           
0558  mov     sp,bp                           
055a  pop     ds                              
055b  pop     bp                              
055c  dec     bp                              
055d  retf                                    
055e  mov     ax,ds                           
0560  nop                                     
0561  inc     bp                              
0562  push    bp                              
0563  mov     bp,sp                           
0565  push    ds                              
0566  mov     ds,ax                           
0568  sub     sp,0Ah                          
056b  les     bx,[bp+6h]                      
056e  mov     al,es:[bx]                      
0571  cbw                                     
0572  mov     bx,ax                           
0574  test    byte ptr [bx+2B53h],1h          
0579  je      580h                            
057b  lea     ax,[bx+20h]                     
057e  jmp     587h                            
0580  mov     bx,[bp+6h]                      
0583  mov     al,es:[bx]                      
0586  cbw                                     
0587  cmp     ax,65h                          
058a  je      59Fh                            
058c  inc     word ptr [bp+6h]                
058f  mov     bx,[bp+6h]                      
0592  mov     al,es:[bx]                      
0595  cbw                                     
0596  mov     bx,ax                           
0598  test    byte ptr [bx+2B53h],4h          
059d  jne     58Ch                            
059f  mov     bx,[bp+6h]                      
05a2  mov     al,es:[bx]                      
05a5  mov     [bp-4h],al                      
05a8  mov     byte ptr es:[bx],2Eh            
05ac  inc     word ptr [bp+6h]                
05af  mov     bx,[bp+6h]                      
05b2  mov     al,es:[bx]                      
05b5  mov     [bp-6h],al                      
05b8  mov     al,[bp-4h]                      
05bb  mov     es:[bx],al                      
05be  mov     al,[bp-6h]                      
05c1  mov     [bp-4h],al                      
05c4  inc     word ptr [bp+6h]                
05c7  cmp     byte ptr es:[bx],0h             
05cb  jne     5AFh                            
05cd  lea     sp,[bp-2h]                      
05d0  pop     ds                              
05d1  pop     bp                              
05d2  dec     bp                              
05d3  retf                                    
05d4  mov     ax,ds                           
05d6  nop                                     
05d7  inc     bp                              
05d8  push    bp                              
05d9  mov     bp,sp                           
05db  push    ds                              
05dc  mov     ds,ax                           
05de  sub     sp,8h                           
05e1  jmp     5EDh                            
05e3  nop                                     
05e4  cmp     byte ptr es:[bx],2Eh            
05e8  je      5F6h                            
05ea  inc     word ptr [bp+6h]                
05ed  les     bx,[bp+6h]                      
05f0  cmp     byte ptr es:[bx],0h             
05f4  jne     5E4h                            
05f6  inc     word ptr [bp+6h]                
05f9  cmp     byte ptr es:[bx],0h             
05fd  je      651h                            
05ff  jmp     611h                            
0601  nop                                     
0602  cmp     byte ptr es:[bx],65h            
0606  je      61Ah                            
0608  cmp     byte ptr es:[bx],45h            
060c  je      61Ah                            
060e  inc     word ptr [bp+6h]                
0611  mov     bx,[bp+6h]                      
0614  cmp     byte ptr es:[bx],0h             
0618  jne     602h                            
061a  dec     word ptr [bp+6h]                
061d  mov     [bp-6h],bx                      
0620  mov     [bp-4h],es                      
0623  jmp     629h                            
0625  nop                                     
0626  dec     word ptr [bp+6h]                
0629  mov     bx,[bp+6h]                      
062c  cmp     byte ptr es:[bx],30h            
0630  je      626h                            
0632  cmp     byte ptr es:[bx],2Eh            
0636  jne     63Bh                            
0638  dec     word ptr [bp+6h]                
063b  les     bx,[bp-6h]                      
063e  inc     word ptr [bp-6h]                
0641  mov     al,es:[bx]                      
0644  inc     word ptr [bp+6h]                
0647  les     bx,[bp+6h]                      
064a  mov     es:[bx],al                      
064d  or      al,al                           
064f  jne     63Bh                            
0651  lea     sp,[bp-2h]                      
0654  pop     ds                              
0655  pop     bp                              
0656  dec     bp                              
0657  retf                                    
0658  mov     ax,ds                           
065a  nop                                     
065b  inc     bp                              
065c  push    bp                              
065d  mov     bp,sp                           
065f  push    ds                              
0660  mov     ds,ax                           
0662  sub     sp,2h                           
0665  les     bx,[bp+6h]                      
0668  wait                                    
0669  fld     qword ptr es:[bx]               
066c  wait                                    
066d  fcom    qword ptr [2CE8h]               ; [ds] = 0
0671  wait                                    
0672  fstp    st(0)                           
0674  wait                                    
0675  fstsw   word ptr [bp-4h]                
0678  nop                                     
0679  wait                                    
067a  mov     ah,[bp-3h]                      
067d  sahf                                    
067e  jb      686h                            
0680  mov     ax,1h                           
0683  jmp     688h                            
0685  nop                                     
0686  xor     ax,ax                           
0688  lea     sp,[bp-2h]                      
068b  pop     ds                              
068c  pop     bp                              
068d  dec     bp                              
068e  retf                                    
068f  nop                                     
0690  mov     ax,ds                           
0692  nop                                     
0693  inc     bp                              
0694  push    bp                              
0695  mov     bp,sp                           
0697  push    ds                              
0698  mov     ds,ax                           
069a  push    di                              
069b  push    si                              
069c  cmp     word ptr [bp+6h],0h             
06a0  je      6C0h                            
06a2  push    word ptr [bp+0Eh]               
06a5  push    word ptr [bp+0Ch]               
06a8  call far sub_0ef6                       
06ad  add     sp,4h                           
06b0  push    ds                              
06b1  mov     si,ax                           
06b3  mov     ds,dx                           
06b5  les     di,[bp+8h]                      
06b8  movsw                                   
06b9  movsw                                   
06ba  movsw                                   
06bb  movsw                                   
06bc  pop     ds                              
06bd  jmp     6DFh                            
06bf  nop                                     
06c0  push    word ptr [bp+0Eh]               
06c3  push    word ptr [bp+0Ch]               
06c6  call far sub_0ef6                       
06cb  add     sp,4h                           
06ce  mov     es,dx                           
06d0  mov     bx,ax                           
06d2  wait                                    
06d3  fld     qword ptr es:[bx]               
06d6  les     bx,[bp+8h]                      
06d9  wait                                    
06da  fstp    dword ptr es:[bx]               
06dd  nop                                     
06de  wait                                    
06df  pop     si                              
06e0  pop     di                              
06e1  lea     sp,[bp-2h]                      
06e4  pop     ds                              
06e5  pop     bp                              
06e6  dec     bp                              
06e7  retf                                    

; ----- sub_06e8 -----
06e8  mov     ax,ds                           
06ea  nop                                     
06eb  inc     bp                              
06ec  push    bp                              
06ed  mov     bp,sp                           
06ef  push    ds                              
06f0  mov     ds,ax                           
06f2  sub     sp,0Ah                          
06f5  push    si                              
06f6  cmp     byte ptr [2B36h],0h             
06fb  je      73Eh                            
06fd  mov     ax,[3050h]                      
0700  mov     dx,[3052h]                      
0704  mov     [bp-6h],ax                      
0707  mov     [bp-4h],dx                      
070a  mov     es,dx                           
070c  mov     bx,ax                           
070e  cmp     word ptr es:[bx],2Dh            
0712  jne     71Ah                            
0714  mov     ax,1h                           
0717  jmp     71Ch                            
0719  nop                                     
071a  xor     ax,ax                           
071c  add     ax,[bp+0Ah]                     
071f  mov     dx,[bp+0Ch]                     
0722  mov     [bp-0Ah],ax                     
0725  mov     [bp-8h],dx                      
0728  push    dx                              
0729  push    ax                              
072a  cmp     word ptr [bp+0Eh],0h            
072e  jle     736h                            
0730  mov     ax,1h                           
0733  jmp     738h                            
0735  nop                                     
0736  xor     ax,ax                           
0738  push    ax                              
0739  call    0B9Ah                           
073c  jmp     799h                            
073e  les     bx,[bp+6h]                      
0741  push    word ptr es:[bx+6h]             
0745  push    word ptr es:[bx+4h]             
0749  push    word ptr es:[bx+2h]             
074d  push    word ptr es:[bx]                
0750  call far sub_116a                       
0755  add     sp,8h                           
0758  mov     [bp-6h],ax                      
075b  mov     [bp-4h],dx                      
075e  push    dx                              
075f  push    ax                              
0760  mov     ax,[bp+0Eh]                     
0763  inc     ax                              
0764  push    ax                              
0765  les     bx,[bp-6h]                      
0768  cmp     word ptr es:[bx],2Dh            
076c  jne     774h                            
076e  mov     ax,1h                           
0771  jmp     776h                            
0773  nop                                     
0774  xor     ax,ax                           
0776  mov     [bp-0Ch],ax                     
0779  cmp     word ptr [bp+0Eh],0h            
077d  jle     784h                            
077f  mov     ax,1h                           
0782  jmp     786h                            
0784  xor     ax,ax                           
0786  add     ax,[bp-0Ch]                     
0789  add     ax,[bp+0Ah]                     
078c  mov     dx,[bp+0Ch]                     
078f  push    dx                              
0790  push    ax                              
0791  call far sub_0f54                       
0796  add     sp,0Ah                          
0799  mov     ax,[bp+0Ah]                     
079c  mov     dx,[bp+0Ch]                     
079f  mov     [bp-0Ah],ax                     
07a2  mov     [bp-8h],dx                      
07a5  les     bx,[bp-6h]                      
07a8  cmp     word ptr es:[bx],2Dh            
07ac  jne     7BAh                            
07ae  mov     bx,ax                           
07b0  mov     es,dx                           
07b2  mov     byte ptr es:[bx],2Dh            
07b6  inc     ax                              
07b7  mov     [bp-0Ah],ax                     
07ba  cmp     word ptr [bp+0Eh],0h            
07be  jle     7D2h                            
07c0  les     bx,[bp-0Ah]                     
07c3  mov     al,es:[bx+1h]                   
07c7  mov     es:[bx],al                      
07ca  inc     bx                              
07cb  mov     [bp-0Ah],bx                     
07ce  mov     byte ptr es:[bx],2Eh            
07d2  mov     ax,2B3Bh                        
07d5  push    ds                              
07d6  push    ax                              
07d7  cmp     byte ptr [2B36h],1h             
07dc  sbb     ax,ax                           
07de  neg     ax                              
07e0  add     ax,[bp-0Ah]                     
07e3  mov     dx,[bp-8h]                      
07e6  add     ax,[bp+0Eh]                     
07e9  push    dx                              
07ea  push    ax                              
07eb  call far sub_101c                       
07f0  add     sp,8h                           
07f3  mov     [bp-0Ah],ax                     
07f6  mov     [bp-8h],dx                      
07f9  cmp     word ptr [bp+10h],0h            
07fd  je      806h                            
07ff  les     bx,[bp-0Ah]                     
0802  mov     byte ptr es:[bx],45h            
0806  inc     word ptr [bp-0Ah]               
0809  les     bx,[bp-6h]                      
080c  les     bx,es:[bx+6h]                   
0810  cmp     byte ptr es:[bx],30h            
0814  je      872h                            
0816  les     bx,[bp-6h]                      
0819  mov     si,es:[bx+2h]                   
081d  dec     si                              
081e  jns     82Dh                            
0820  mov     ax,si                           
0822  neg     ax                              
0824  mov     si,ax                           
0826  les     bx,[bp-0Ah]                     
0829  mov     byte ptr es:[bx],2Dh            
082d  inc     word ptr [bp-0Ah]               
0830  cmp     si,64h                          
0833  jl      84Ah                            
0835  mov     ax,si                           
0837  mov     cx,64h                          
083a  cwd                                     
083b  idiv    cx                              
083d  les     bx,[bp-0Ah]                     
0840  add     es:[bx],al                      
0843  mov     ax,si                           
0845  cwd                                     
0846  idiv    cx                              
0848  mov     si,dx                           
084a  inc     word ptr [bp-0Ah]               
084d  cmp     si,0Ah                          
0850  jl      867h                            
0852  mov     ax,si                           
0854  mov     cx,0Ah                          
0857  cwd                                     
0858  idiv    cx                              
085a  les     bx,[bp-0Ah]                     
085d  add     es:[bx],al                      
0860  mov     ax,si                           
0862  cwd                                     
0863  idiv    cx                              
0865  mov     si,dx                           
0867  mov     ax,si                           
0869  inc     word ptr [bp-0Ah]               
086c  les     bx,[bp-0Ah]                     
086f  add     es:[bx],al                      
0872  mov     ax,[bp+0Ah]                     
0875  mov     dx,[bp+0Ch]                     
0878  pop     si                              
0879  lea     sp,[bp-2h]                      
087c  pop     ds                              
087d  pop     bp                              
087e  dec     bp                              
087f  retf                                    

; ----- sub_0880 -----
0880  mov     ax,ds                           
0882  nop                                     
0883  inc     bp                              
0884  push    bp                              
0885  mov     bp,sp                           
0887  push    ds                              
0888  mov     ds,ax                           
088a  sub     sp,4h                           
088d  mov     byte ptr [2B36h],1h             
0892  push    word ptr [bp+10h]               
0895  push    word ptr [bp+0Eh]               
0898  push    word ptr [bp+0Ch]               
089b  push    word ptr [bp+0Ah]               
089e  push    word ptr [bp+8h]                
08a1  push    word ptr [bp+6h]                
08a4  push    cs                              
08a5  call    6E8h                            
08a8  mov     byte ptr [2B36h],0h             
08ad  lea     sp,[bp-2h]                      
08b0  pop     ds                              
08b1  pop     bp                              
08b2  dec     bp                              
08b3  retf                                    

; ----- sub_08b4 -----
08b4  mov     ax,ds                           
08b6  nop                                     
08b7  inc     bp                              
08b8  push    bp                              
08b9  mov     bp,sp                           
08bb  push    ds                              
08bc  mov     ds,ax                           
08be  sub     sp,0Eh                          
08c1  push    si                              
08c2  cmp     byte ptr [2B36h],0h             
08c7  je      910h                            
08c9  mov     ax,[3050h]                      
08cc  mov     dx,[3052h]                      
08d0  mov     [bp-6h],ax                      
08d3  mov     [bp-4h],dx                      
08d6  mov     es,dx                           
08d8  mov     bx,ax                           
08da  cmp     word ptr es:[bx],2Dh            
08de  jne     8E6h                            
08e0  mov     ax,1h                           
08e3  jmp     8E8h                            
08e5  nop                                     
08e6  xor     ax,ax                           
08e8  add     ax,[bp+0Ah]                     
08eb  mov     dx,[bp+0Ch]                     
08ee  mov     [bp-0Ah],ax                     
08f1  mov     [bp-8h],dx                      
08f4  mov     cx,[2B38h]                      
08f8  cmp     [bp+0Eh],cx                     
08fb  jne     95Ah                            
08fd  mov     es,dx                           
08ff  mov     bx,ax                           
0901  mov     si,cx                           
0903  mov     byte ptr es:[bx+si],30h         
0907  add     bx,cx                           
0909  inc     bx                              
090a  mov     byte ptr es:[bx],0h             
090e  jmp     95Ah                            
0910  les     bx,[bp+6h]                      
0913  push    word ptr es:[bx+6h]             
0917  push    word ptr es:[bx+4h]             
091b  push    word ptr es:[bx+2h]             
091f  push    word ptr es:[bx]                
0922  call far sub_116a                       
0927  add     sp,8h                           
092a  mov     [bp-6h],ax                      
092d  mov     [bp-4h],dx                      
0930  push    dx                              
0931  les     bx,[bp-6h]                      
0934  push    ax                              
0935  mov     ax,es:[bx+2h]                   
0939  add     ax,[bp+0Eh]                     
093c  push    ax                              
093d  cmp     word ptr es:[bx],2Dh            
0941  jne     948h                            
0943  mov     ax,1h                           
0946  jmp     94Ah                            
0948  xor     ax,ax                           
094a  add     ax,[bp+0Ah]                     
094d  mov     dx,[bp+0Ch]                     
0950  push    dx                              
0951  push    ax                              
0952  call far sub_0f54                       
0957  add     sp,0Ah                          
095a  mov     ax,[bp+0Ah]                     
095d  mov     dx,[bp+0Ch]                     
0960  mov     [bp-0Ah],ax                     
0963  mov     [bp-8h],dx                      
0966  les     bx,[bp-6h]                      
0969  cmp     word ptr es:[bx],2Dh            
096d  jne     97Bh                            
096f  mov     bx,ax                           
0971  mov     es,dx                           
0973  mov     byte ptr es:[bx],2Dh            
0977  inc     ax                              
0978  mov     [bp-0Ah],ax                     
097b  les     bx,[bp-6h]                      
097e  cmp     word ptr es:[bx+2h],0h          
0983  jg      99Eh                            
0985  push    word ptr [bp-8h]                
0988  push    word ptr [bp-0Ah]               
098b  mov     ax,1h                           
098e  push    ax                              
098f  call    0B9Ah                           
0992  les     bx,[bp-0Ah]                     
0995  inc     word ptr [bp-0Ah]               
0998  mov     byte ptr es:[bx],30h            
099c  jmp     9A5h                            
099e  mov     ax,es:[bx+2h]                   
09a2  add     [bp-0Ah],ax                     
09a5  cmp     word ptr [bp+0Eh],0h            
09a9  jle     0A0Ch                           
09ab  push    word ptr [bp-8h]                
09ae  push    word ptr [bp-0Ah]               
09b1  mov     ax,1h                           
09b4  push    ax                              
09b5  call    0B9Ah                           
09b8  les     bx,[bp-0Ah]                     
09bb  inc     word ptr [bp-0Ah]               
09be  mov     byte ptr es:[bx],2Eh            
09c2  les     bx,[bp-6h]                      
09c5  cmp     word ptr es:[bx+2h],0h          
09ca  jge     0A0Ch                           
09cc  cmp     byte ptr [2B36h],0h             
09d1  je      9DCh                            
09d3  mov     ax,es:[bx+2h]                   
09d7  neg     ax                              
09d9  jmp     9EAh                            
09db  nop                                     
09dc  mov     ax,es:[bx+2h]                   
09e0  neg     ax                              
09e2  cmp     ax,[bp+0Eh]                     
09e5  jle     9EAh                            
09e7  mov     ax,[bp+0Eh]                     
09ea  mov     [bp+0Eh],ax                     
09ed  push    word ptr [bp-8h]                
09f0  push    word ptr [bp-0Ah]               
09f3  push    ax                              
09f4  call    0B9Ah                           
09f7  push    word ptr [bp+0Eh]               
09fa  mov     ax,30h                          
09fd  push    ax                              
09fe  push    word ptr [bp-8h]                
0a01  push    word ptr [bp-0Ah]               
0a04  call far sub_1058                       
0a09  add     sp,8h                           
0a0c  mov     ax,[bp+0Ah]                     
0a0f  mov     dx,[bp+0Ch]                     
0a12  pop     si                              
0a13  lea     sp,[bp-2h]                      
0a16  pop     ds                              
0a17  pop     bp                              
0a18  dec     bp                              
0a19  retf                                    

; ----- sub_0a1a -----
0a1a  mov     ax,ds                           
0a1c  nop                                     
0a1d  inc     bp                              
0a1e  push    bp                              
0a1f  mov     bp,sp                           
0a21  push    ds                              
0a22  mov     ds,ax                           
0a24  sub     sp,4h                           
0a27  mov     byte ptr [2B36h],1h             
0a2c  push    word ptr [bp+0Eh]               
0a2f  push    word ptr [bp+0Ch]               
0a32  push    word ptr [bp+0Ah]               
0a35  push    word ptr [bp+8h]                
0a38  push    word ptr [bp+6h]                
0a3b  push    cs                              
0a3c  call    8B4h                            
0a3f  mov     byte ptr [2B36h],0h             
0a44  lea     sp,[bp-2h]                      
0a47  pop     ds                              
0a48  pop     bp                              
0a49  dec     bp                              
0a4a  retf                                    
0a4b  nop                                     

; ----- sub_0a4c -----
0a4c  mov     ax,ds                           
0a4e  nop                                     
0a4f  inc     bp                              
0a50  push    bp                              
0a51  mov     bp,sp                           
0a53  push    ds                              
0a54  mov     ds,ax                           
0a56  sub     sp,0Ah                          
0a59  les     bx,[bp+6h]                      
0a5c  push    word ptr es:[bx+6h]             
0a60  push    word ptr es:[bx+4h]             
0a64  push    word ptr es:[bx+2h]             
0a68  push    word ptr es:[bx]                
0a6b  call far sub_116a                       
0a70  add     sp,8h                           
0a73  mov     [3050h],ax                      
0a76  mov     [3052h],dx                      
0a7a  les     bx,[3050h]                      
0a7e  mov     ax,es:[bx+2h]                   
0a82  dec     ax                              
0a83  mov     [2B38h],ax                      
0a86  cmp     word ptr es:[bx],2Dh            
0a8a  jne     0A92h                           
0a8c  mov     ax,1h                           
0a8f  jmp     0A94h                           
0a91  nop                                     
0a92  xor     ax,ax                           
0a94  add     ax,[bp+0Ah]                     
0a97  mov     dx,[bp+0Ch]                     
0a9a  mov     [bp-6h],ax                      
0a9d  mov     [bp-4h],dx                      
0aa0  push    es                              
0aa1  push    bx                              
0aa2  push    word ptr [bp+0Eh]               
0aa5  push    dx                              
0aa6  push    ax                              
0aa7  call far sub_0f54                       
0aac  add     sp,0Ah                          
0aaf  les     bx,[3050h]                      
0ab3  mov     ax,es:[bx+2h]                   
0ab7  dec     ax                              
0ab8  mov     [bp-8h],ax                      
0abb  cmp     ax,[2B38h]                      
0abf  jle     0AC6h                           
0ac1  mov     al,1h                           
0ac3  jmp     0AC8h                           
0ac5  nop                                     
0ac6  xor     al,al                           
0ac8  mov     [2B3Ah],al                      
0acb  mov     ax,[bp-8h]                      
0ace  mov     [2B38h],ax                      
0ad1  cmp     ax,0FFFCh                       
0ad4  jl      0ADBh                           
0ad6  cmp     ax,[bp+0Eh]                     
0ad9  jl      0AF6h                           
0adb  push    word ptr [bp+10h]               
0ade  push    word ptr [bp+0Eh]               
0ae1  push    word ptr [bp+0Ch]               
0ae4  push    word ptr [bp+0Ah]               
0ae7  push    word ptr [bp+8h]                
0aea  push    word ptr [bp+6h]                
0aed  push    cs                              
0aee  call    880h                            
0af1  add     sp,0Ch                          
0af4  jmp     0B24h                           
0af6  cmp     byte ptr [2B3Ah],0h             
0afb  je      0B11h                           
0afd  les     bx,[bp-6h]                      
0b00  inc     word ptr [bp-6h]                
0b03  cmp     byte ptr es:[bx],0h             
0b07  jne     0AFDh                           
0b09  mov     bx,[bp-6h]                      
0b0c  mov     byte ptr es:[bx-2h],0h          
0b11  push    word ptr [bp+0Eh]               
0b14  push    word ptr [bp+0Ch]               
0b17  push    word ptr [bp+0Ah]               
0b1a  push    word ptr [bp+8h]                
0b1d  push    word ptr [bp+6h]                
0b20  push    cs                              
0b21  call    0A1Ah                           
0b24  lea     sp,[bp-2h]                      
0b27  pop     ds                              
0b28  pop     bp                              
0b29  dec     bp                              
0b2a  retf                                    
0b2b  nop                                     
0b2c  mov     ax,ds                           
0b2e  nop                                     
0b2f  inc     bp                              
0b30  push    bp                              
0b31  mov     bp,sp                           
0b33  push    ds                              
0b34  mov     ds,ax                           
0b36  cmp     word ptr [bp+0Eh],65h           
0b3a  je      0B42h                           
0b3c  cmp     word ptr [bp+0Eh],45h           
0b40  jne     0B5Eh                           
0b42  push    word ptr [bp+12h]               
0b45  push    word ptr [bp+10h]               
0b48  push    word ptr [bp+0Ch]               
0b4b  push    word ptr [bp+0Ah]               
0b4e  push    word ptr [bp+8h]                
0b51  push    word ptr [bp+6h]                
0b54  push    cs                              
0b55  call    6E8h                            
0b58  add     sp,0Ch                          
0b5b  jmp     0B92h                           
0b5d  nop                                     
0b5e  cmp     word ptr [bp+0Eh],66h           
0b62  jne     0B7Ch                           
0b64  push    word ptr [bp+10h]               
0b67  push    word ptr [bp+0Ch]               
0b6a  push    word ptr [bp+0Ah]               
0b6d  push    word ptr [bp+8h]                
0b70  push    word ptr [bp+6h]                
0b73  push    cs                              
0b74  call    8B4h                            
0b77  add     sp,0Ah                          
0b7a  jmp     0B92h                           
0b7c  push    word ptr [bp+12h]               
0b7f  push    word ptr [bp+10h]               
0b82  push    word ptr [bp+0Ch]               
0b85  push    word ptr [bp+0Ah]               
0b88  push    word ptr [bp+8h]                
0b8b  push    word ptr [bp+6h]                
0b8e  push    cs                              
0b8f  call    0A4Ch                           
0b92  lea     sp,[bp-2h]                      
0b95  pop     ds                              
0b96  pop     bp                              
0b97  dec     bp                              
0b98  retf                                    
0b99  nop                                     

; ----- sub_0b9a -----
0b9a  push    bp                              
0b9b  mov     bp,sp                           
0b9d  cmp     word ptr [bp+4h],0h             
0ba1  je      0BC7h                           
0ba3  push    word ptr [bp+8h]                
0ba6  push    word ptr [bp+6h]                
0ba9  call far sub_1002                       
0bae  add     sp,4h                           
0bb1  inc     ax                              
0bb2  push    ax                              
0bb3  push    word ptr [bp+8h]                
0bb6  mov     ax,[bp+6h]                      
0bb9  push    ax                              
0bba  mov     dx,[bp+8h]                      
0bbd  add     ax,[bp+4h]                      
0bc0  push    dx                              
0bc1  push    ax                              
0bc2  call far sub_10a0                       
0bc7  mov     sp,bp                           
0bc9  pop     bp                              
0bca  ret     6h                              
0bcd  nop                                     
0bce  inc     bp                              
0bcf  push    bp                              
0bd0  mov     bp,sp                           
0bd2  push    ds                              
0bd3  push    es                              
0bd4  push    ax                              
0bd5  push    bx                              
0bd6  push    cx                              
0bd7  push    dx                              
0bd8  xor     ah,ah                           
0bda  add     ax,-1Ch                         
0bdd  push    ax                              
0bde  call far sub_0e68                       
0be3  mov     ds,ax                           
0be5  pop     ax                              
0be6  call    0C4Ah                           
0be9  pop     dx                              
0bea  pop     cx                              
0beb  pop     bx                              
0bec  pop     ax                              
0bed  pop     es                              
0bee  pop     ds                              
0bef  pop     bp                              
0bf0  dec     bp                              
0bf1  retf                                    

; ----- sub_0bf2 -----
0bf2  mov     ax,ds                           
0bf4  nop                                     
0bf5  inc     bp                              
0bf6  push    bp                              
0bf7  mov     bp,sp                           
0bf9  push    ds                              
0bfa  mov     ds,ax                           
0bfc  push    si                              
0bfd  push    di                              
0bfe  push    ds                              
0bff  pop     es                              
0c00  mov     dx,[bp+6h]                      
0c03  mov     si,2CF8h                        
0c06  lodsw                                   
0c07  cmp     ax,dx                           
0c09  je      0C1Bh                           
0c0b  inc     ax                              
0c0c  xchg    ax,si                           
0c0d  je      0C1Bh                           
0c0f  xchg    ax,di                           
0c10  xor     ax,ax                           
0c12  mov     cx,0FFFFh                       
0c15  repne   scasb                           
0c17  mov     si,di                           
0c19  jmp     0C06h                           
0c1b  xchg    ax,si                           
0c1c  pop     di                              
0c1d  pop     si                              
0c1e  sub     bp,2h                           
0c21  mov     sp,bp                           
0c23  pop     ds                              
0c24  pop     bp                              
0c25  dec     bp                              
0c26  retf    2h                              

; ----- sub_0c29 -----
0c29  mov     ax,ds                           
0c2b  nop                                     
0c2c  inc     bp                              
0c2d  push    bp                              
0c2e  mov     bp,sp                           
0c30  push    ds                              
0c31  mov     ds,ax                           
0c33  push    di                              
0c34  pop     di                              
0c35  sub     bp,2h                           
0c38  mov     sp,bp                           
0c3a  pop     ds                              
0c3b  pop     bp                              
0c3c  dec     bp                              
0c3d  retf    2h                              
0c40  call far sub_0e68                       
0c45  mov     ds,ax                           
0c47  mov     ax,3h                           

; ----- sub_0c4a -----
0c4a  push    ax                              
0c4b  push    ax                              
0c4c  push    cs                              
0c4d  call    3DAh                            
0c50  push    cs                              
0c51  call    0C29h                           
0c54  push    cs                              
0c55  call    0BF2h                           
0c58  xor     bx,bx                           
0c5a  or      ax,ax                           
0c5c  je      0C7Bh                           
0c5e  mov     di,ax                           
0c60  mov     ax,9h                           
0c63  cmp     byte ptr [di],4Dh               
0c66  jne     0C6Bh                           
0c68  mov     ax,0Fh                          
0c6b  add     di,ax                           
0c6d  push    di                              
0c6e  push    ds                              
0c6f  pop     es                              
0c70  mov     al,0Dh                          
0c72  mov     cx,22h                          
0c75  repne   scasb                           
0c77  mov     [di-1h],bl                      
0c7a  pop     ax                              
0c7b  push    bx                              
0c7c  push    ds                              
0c7d  push    ax                              
0c7e  call far KERNEL.FATALAPPEXIT            
0c83  mov     ax,0FFh                         
0c86  push    ax                              
0c87  call far KERNEL.FATALEXIT               

; ----- sub_0c8c -----
0c8c  mov     dx,cx                           
0c8e  add     dx,1019h                        
0c92  and     dx,0F000h                       
0c96  push    cx                              
0c97  push    es                              
0c98  mov     bx,cs:[17Ah]                    
0c9d  xor     cx,cx                           
0c9f  or      dx,dx                           
0ca1  jne     0CAAh                           
0ca3  test    bx,10h                          
0ca7  jne     0D09h                           
0ca9  inc     cx                              
0caa  push    bx                              
0cab  mov     ax,2002h                        
0cae  test    bx,1h                           
0cb2  jne     0CB7h                           
0cb4  mov     ax,2020h                        
0cb7  push    ax                              
0cb8  push    cx                              
0cb9  push    dx                              
0cba  call far KERNEL.GLOBALALLOC             
0cbf  pop     bx                              
0cc0  or      ax,ax                           
0cc2  je      0D09h                           
0cc4  push    ax                              
0cc5  test    bx,1h                           
0cc9  je      0CDBh                           
0ccb  push    ax                              
0ccc  call far KERNEL.GLOBALLOCK              
0cd1  or      ax,ax                           
0cd3  jne     0D03h                           
0cd5  or      ax,dx                           
0cd7  je      0D03h                           
0cd9  mov     ax,dx                           
0cdb  mov     ds,ax                           
0cdd  push    ax                              
0cde  call far KERNEL.GLOBALSIZE              
0ce3  or      dx,ax                           
0ce5  je      0D03h                           
0ce7  mov     dx,ax                           
0ce9  pop     ax                              
0cea  pop     es                              
0ceb  pop     cx                              
0cec  xor     bx,bx                           
0cee  mov     [bx+6h],ax                      
0cf1  mov     ax,es:[di+0Ch]                  
0cf5  mov     [bx+2h],ax                      
0cf8  mov     ax,dx                           
0cfa  call    11FEh                           
0cfd  call    1232h                           
0d00  clc                                     
0d01  jmp     0D0Ch                           
0d03  mov     ax,12h                          
0d06  jmp     0C4Ah                           
0d09  pop     es                              
0d0a  pop     cx                              
0d0b  stc                                     
0d0c  ret                                     
0d0d  add     [bx+si],al                      

; ----- sub_0d0e -----
0d0e  push    bp                              
0d0f  mov     bp,sp                           
0d11  mov     bx,2B42h                        
0d14  push    ds                              
0d15  pop     es                              
0d16  call    11C0h                           
0d19  pop     bp                              
0d1a  ret                                     
0d1b  add     [bx+di+57h],dl                  
0d1e  test    byte ptr [bx+2h],1h             
0d22  je      0D8Ch                           
0d24  call    0E13h                           
0d27  mov     di,si                           
0d29  mov     ax,[si]                         
0d2b  test    al,1h                           
0d2d  je      0D32h                           
0d2f  sub     cx,ax                           
0d31  dec     cx                              
0d32  inc     cx                              
0d33  inc     cx                              
0d34  mov     si,[bx+4h]                      
0d37  or      si,si                           
0d39  je      0D8Ch                           
0d3b  add     cx,si                           
0d3d  jae     0D48h                           
0d3f  xor     ax,ax                           
0d41  mov     dx,0FFF0h                       
0d44  jcxz    0D7Bh                           
0d46  jmp     0D8Ch                           
0d48  call far sub_0e68                       
0d4d  mov     es,ax                           
0d4f  mov     ax,es:[2B50h]                   
0d53  cmp     ax,1000h                        
0d56  je      0D6Eh                           
0d58  mov     dx,8000h                        
0d5b  cmp     dx,ax                           
0d5d  jb      0D65h                           
0d5f  shr     dx,1                            
0d61  jne     0D5Bh                           
0d63  jmp     0D87h                           
0d65  cmp     dx,8h                           
0d68  jb      0D87h                           
0d6a  shl     dx,1                            
0d6c  mov     ax,dx                           
0d6e  dec     ax                              
0d6f  mov     dx,ax                           
0d71  add     ax,cx                           
0d73  jae     0D77h                           
0d75  xor     ax,ax                           
0d77  not     dx                              
0d79  and     ax,dx                           
0d7b  push    dx                              
0d7c  call    0DADh                           
0d7f  pop     dx                              
0d80  jae     0D8Fh                           
0d82  cmp     dx,-10h                         
0d85  je      0D8Ch                           
0d87  mov     ax,10h                          
0d8a  jmp     0D6Eh                           
0d8c  stc                                     
0d8d  jmp     0DAAh                           
0d8f  mov     dx,ax                           
0d91  sub     dx,[bx+4h]                      
0d94  mov     [bx+4h],ax                      
0d97  mov     [bx+0Ah],di                     
0d9a  mov     si,[bx+0Ch]                     
0d9d  dec     dx                              
0d9e  mov     [si],dx                         
0da0  inc     dx                              
0da1  add     si,dx                           
0da3  mov     word ptr [si],0FFFEh            
0da7  mov     [bx+0Ch],si                     
0daa  pop     di                              
0dab  pop     cx                              
0dac  ret                                     

; ----- sub_0dad -----
0dad  mov     dx,ax                           
0daf  test    byte ptr [bx+2h],4h             
0db3  je      0DB7h                           
0db5  jmp     0E08h                           
0db7  push    dx                              
0db8  push    cx                              
0db9  push    bx                              
0dba  mov     si,[bx+6h]                      
0dbd  mov     bx,cs:[17Ah]                    
0dc2  xor     cx,cx                           
0dc4  or      dx,dx                           
0dc6  jne     0DCFh                           
0dc8  test    bx,10h                          
0dcc  jne     0E0Eh                           
0dce  inc     cx                              
0dcf  mov     ax,2002h                        
0dd2  test    bx,1h                           
0dd6  jne     0DDBh                           
0dd8  mov     ax,2020h                        
0ddb  push    si                              
0ddc  push    cx                              
0ddd  push    dx                              
0dde  push    ax                              
0ddf  call far KERNEL.GLOBALREALLOC           
0de4  or      ax,ax                           
0de6  je      0E0Eh                           
0de8  cmp     ax,si                           
0dea  jne     0E08h                           
0dec  push    si                              
0ded  call far KERNEL.GLOBALSIZE              
0df2  or      dx,ax                           
0df4  je      0E08h                           
0df6  pop     bx                              
0df7  pop     cx                              
0df8  pop     dx                              
0df9  mov     ax,dx                           
0dfb  test    byte ptr [bx+2h],4h             
0dff  je      0E05h                           
0e01  dec     dx                              
0e02  mov     [bx-2h],dx                      
0e05  clc                                     
0e06  jmp     0E12h                           
0e08  mov     ax,12h                          
0e0b  jmp     0C4Ah                           
0e0e  pop     bx                              
0e0f  pop     cx                              
0e10  pop     dx                              
0e11  stc                                     
0e12  ret                                     

; ----- sub_0e13 -----
0e13  push    di                              
0e14  mov     si,[bx+0Ah]                     
0e17  cmp     si,[bx+0Ch]                     
0e1a  jne     0E1Fh                           
0e1c  mov     si,[bx+8h]                      
0e1f  lodsw                                   
0e20  cmp     ax,-2h                          
0e23  je      0E2Dh                           
0e25  mov     di,si                           
0e27  and     al,0FEh                         
0e29  add     si,ax                           
0e2b  jmp     0E1Fh                           
0e2d  dec     di                              
0e2e  dec     di                              
0e2f  mov     si,di                           
0e31  pop     di                              
0e32  ret                                     
0e33  add     [bx+si+2h],bh                   
0e37  jmp     0C4Ah                           

; ----- sub_0e3a -----
0e3a  push    bp                              
0e3b  mov     bp,sp                           
0e3d  push    bx                              
0e3e  push    es                              
0e3f  push    cx                              
0e40  mov     cx,1000h                        
0e43  xchg    cx,[2B50h]                      
0e47  push    cx                              
0e48  push    ax                              
0e49  call far sub_04b7                       
0e4e  pop     bx                              
0e4f  pop     [2B50h]                         
0e53  pop     cx                              
0e54  mov     bx,dx                           
0e56  or      bx,ax                           
0e58  je      0E5Eh                           
0e5a  pop     es                              
0e5b  pop     bx                              
0e5c  jmp     0E63h                           
0e5e  mov     ax,cx                           
0e60  jmp     0C4Ah                           
0e63  mov     sp,bp                           
0e65  pop     bp                              
0e66  ret                                     
0e67  add     [bx+si],al                      

; ----- sub_0e68 -----
0e68  cmp     byte ptr cs:[11EAh],0B8h        
0e6e  je      0E73h                           
0e70  mov     ax,ss                           
0e72  retf                                    
0e73  mov     ax,cs:[11EBh]                   
0e77  retf                                    

; ----- sub_0e78 -----
0e78  ret                                     
0e79  add     [bx+si],al                      

; ----- sub_0e7a -----
0e7a  inc     cx                              
0e7b  and     cl,0FEh                         
0e7e  push    bx                              
0e7f  cld                                     
0e80  mov     si,[bx+0Ah]                     
0e83  mov     bx,[bx+0Ch]                     
0e86  xor     di,di                           
0e88  jmp     0EADh                           
0e8a  mov     ax,bx                           
0e8c  pop     bx                              
0e8d  test    al,1h                           
0e8f  jne     0ED3h                           
0e91  push    bx                              
0e92  mov     si,[bx+8h]                      
0e95  mov     bx,[bx+0Ah]                     
0e98  cmp     bx,si                           
0e9a  je      0ED2h                           
0e9c  dec     bx                              
0e9d  xor     di,di                           
0e9f  jmp     0EADh                           
0ea1  nop                                     
0ea2  lea     dx,[si-2h]                      
0ea5  cmp     dx,bx                           
0ea7  jae     0E8Ah                           
0ea9  add     si,ax                           
0eab  jb      0ED0h                           
0ead  lodsw                                   
0eae  test    al,1h                           
0eb0  je      0EA2h                           
0eb2  mov     di,si                           
0eb4  dec     ax                              
0eb5  cmp     ax,cx                           
0eb7  jae     0EDCh                           
0eb9  add     si,ax                           
0ebb  jb      0ED0h                           
0ebd  mov     dx,ax                           
0ebf  lodsw                                   
0ec0  test    al,1h                           
0ec2  je      0EA2h                           
0ec4  add     ax,dx                           
0ec6  add     ax,2h                           
0ec9  mov     si,di                           
0ecb  mov     [si-2h],ax                      
0ece  jmp     0EB4h                           
0ed0  mov     ax,ax                           
0ed2  pop     bx                              
0ed3  mov     ax,[bx+8h]                      
0ed6  mov     [bx+0Ah],ax                     
0ed9  stc                                     
0eda  jmp     0EF5h                           
0edc  pop     bx                              
0edd  mov     [si-2h],cx                      
0ee0  je      0EEBh                           
0ee2  add     di,cx                           
0ee4  sub     ax,cx                           
0ee6  dec     ax                              
0ee7  mov     [di],ax                         
0ee9  sub     di,cx                           
0eeb  add     di,cx                           
0eed  mov     [bx+0Ah],di                     
0ef0  mov     ax,si                           
0ef2  mov     dx,ds                           
0ef4  clc                                     
0ef5  ret                                     

; ----- sub_0ef6 -----
0ef6  inc     bp                              
0ef7  push    bp                              
0ef8  mov     bp,sp                           
0efa  push    ds                              
0efb  push    di                              
0efc  push    si                              
0efd  jmp     0F03h                           
0eff  nop                                     
0f00  inc     word ptr [bp+6h]                
0f03  les     bx,[bp+6h]                      
0f06  mov     al,es:[bx]                      
0f09  cbw                                     
0f0a  mov     bx,ax                           
0f0c  test    byte ptr [bx+2B53h],8h          
0f11  jne     0F00h                           
0f13  xor     ax,ax                           
0f15  push    ax                              
0f16  push    ax                              
0f17  push    es                              
0f18  push    word ptr [bp+6h]                
0f1b  call far sub_1268                       
0f20  add     sp,4h                           
0f23  push    ax                              
0f24  push    word ptr [bp+8h]                
0f27  push    word ptr [bp+6h]                
0f2a  call far sub_1436                       
0f2f  add     sp,0Ah                          
0f32  add     ax,8h                           
0f35  mov     bx,3178h                        
0f38  push    ds                              
0f39  mov     di,bx                           
0f3b  mov     si,ax                           
0f3d  push    ds                              
0f3e  pop     es                              
0f3f  mov     ds,dx                           
0f41  movsw                                   
0f42  movsw                                   
0f43  movsw                                   
0f44  movsw                                   
0f45  pop     ds                              
0f46  mov     ax,bx                           
0f48  mov     dx,ds                           
0f4a  pop     si                              
0f4b  pop     di                              
0f4c  lea     sp,[bp-2h]                      
0f4f  pop     ds                              
0f50  pop     bp                              
0f51  dec     bp                              
0f52  retf                                    
0f53  nop                                     

; ----- sub_0f54 -----
0f54  inc     bp                              
0f55  push    bp                              
0f56  mov     bp,sp                           
0f58  push    ds                              
0f59  sub     sp,0Ah                          
0f5c  les     bx,[bp+0Ch]                     
0f5f  mov     ax,es:[bx+6h]                   
0f63  mov     dx,es:[bx+8h]                   
0f67  mov     [bp-0Ah],ax                     
0f6a  mov     [bp-8h],dx                      
0f6d  les     bx,[bp+6h]                      
0f70  mov     byte ptr es:[bx],30h            
0f74  lea     ax,[bx+1h]                      
0f77  mov     [bp-6h],ax                      
0f7a  mov     [bp-4h],es                      
0f7d  jmp     0FAAh                           
0f7f  nop                                     
0f80  les     bx,[bp-0Ah]                     
0f83  cmp     byte ptr es:[bx],0h             
0f87  je      0F96h                           
0f89  mov     al,es:[bx]                      
0f8c  cbw                                     
0f8d  mov     [bp-0Ch],ax                     
0f90  inc     word ptr [bp-0Ah]               
0f93  jmp     0F9Bh                           
0f95  nop                                     
0f96  mov     word ptr [bp-0Ch],30h           
0f9b  mov     al,[bp-0Ch]                     
0f9e  les     bx,[bp-6h]                      
0fa1  inc     word ptr [bp-6h]                
0fa4  mov     es:[bx],al                      
0fa7  dec     word ptr [bp+0Ah]               
0faa  cmp     word ptr [bp+0Ah],0h            
0fae  jg      0F80h                           
0fb0  les     bx,[bp-6h]                      
0fb3  mov     byte ptr es:[bx],0h             
0fb7  cmp     word ptr [bp+0Ah],0h            
0fbb  jl      0FDBh                           
0fbd  les     bx,[bp-0Ah]                     
0fc0  cmp     byte ptr es:[bx],35h            
0fc4  jl      0FDBh                           
0fc6  jmp     0FCCh                           
0fc8  mov     byte ptr es:[bx],30h            
0fcc  dec     word ptr [bp-6h]                
0fcf  les     bx,[bp-6h]                      
0fd2  cmp     byte ptr es:[bx],39h            
0fd6  je      0FC8h                           
0fd8  inc     byte ptr es:[bx]                
0fdb  les     bx,[bp+6h]                      
0fde  cmp     byte ptr es:[bx],31h            
0fe2  jne     0FEEh                           
0fe4  les     bx,[bp+0Ch]                     
0fe7  inc     word ptr es:[bx+2h]             
0feb  jmp     0FFAh                           
0fed  nop                                     
0fee  lea     ax,[bx+1h]                      
0ff1  push    es                              
0ff2  push    ax                              
0ff3  push    es                              
0ff4  push    bx                              
0ff5  call far sub_101c                       
0ffa  lea     sp,[bp-2h]                      
0ffd  pop     ds                              
0ffe  pop     bp                              
0fff  dec     bp                              
1000  retf                                    
1001  nop                                     

; ----- sub_1002 -----
1002  push    bp                              
1003  mov     bp,sp                           
1005  mov     dx,di                           
1007  les     di,[bp+6h]                      
100a  xor     ax,ax                           
100c  mov     cx,0FFFFh                       
100f  repne   scasb                           
1011  not     cx                              
1013  jne     1016h                           
1015  dec     cx                              
1016  xchg    ax,cx                           
1017  mov     di,dx                           
1019  pop     bp                              
101a  retf                                    
101b  add     [bx+si],al                      

; ----- sub_101c -----
101c  push    bp                              
101d  mov     bp,sp                           
101f  mov     dx,di                           
1021  mov     bx,si                           
1023  push    ds                              
1024  lds     si,[bp+0Ah]                     
1027  mov     di,si                           
1029  mov     ax,ds                           
102b  mov     es,ax                           
102d  xor     ax,ax                           
102f  mov     cx,0FFFFh                       
1032  repne   scasb                           
1034  not     cx                              
1036  les     di,[bp+6h]                      
1039  mov     ax,di                           
103b  je      1041h                           
103d  movsw                                   
103e  dec     cx                              
103f  jmp     1047h                           
1041  test    al,1h                           
1043  je      1047h                           
1045  movsb                                   
1046  dec     cx                              
1047  shr     cx,1                            
1049  rep     movsw                           
104b  adc     cx,cx                           
104d  rep     movsb                           
104f  mov     si,bx                           
1051  mov     di,dx                           
1053  pop     ds                              
1054  mov     dx,es                           
1056  pop     bp                              
1057  retf                                    

; ----- sub_1058 -----
1058  push    bp                              
1059  mov     bp,sp                           
105b  mov     cx,[bp+0Ch]                     
105e  jcxz    1098h                           
1060  push    di                              
1061  les     di,[bp+6h]                      
1064  mov     dx,di                           
1066  neg     dx                              
1068  je      1076h                           
106a  sub     dx,cx                           
106c  sbb     bx,bx                           
106e  and     dx,bx                           
1070  add     dx,cx                           
1072  xchg    dx,cx                           
1074  sub     dx,cx                           
1076  mov     ax,[bp+0Ah]                     
1079  mov     ah,al                           
107b  shr     cx,1                            
107d  rep     stosw                           
107f  adc     cx,cx                           
1081  rep     stosb                           
1083  xchg    dx,cx                           
1085  jcxz    1097h                           
1087  mov     bx,es                           
1089  add     bx,1000h                        
108d  mov     es,bx                           
108f  shr     cx,1                            
1091  rep     stosw                           
1093  adc     cx,cx                           
1095  rep     stosb                           
1097  pop     di                              
1098  mov     ax,[bp+6h]                      
109b  mov     dx,[bp+8h]                      
109e  pop     bp                              
109f  retf                                    

; ----- sub_10a0 -----
10a0  push    bp                              
10a1  mov     bp,sp                           
10a3  mov     cx,[bp+0Eh]                     
10a6  push    ds                              
10a7  push    di                              
10a8  push    si                              
10a9  or      cx,cx                           
10ab  jne     10B0h                           
10ad  jmp     115Fh                           
10b0  lds     si,[bp+0Ah]                     
10b3  les     di,[bp+6h]                      
10b6  push    ds                              
10b7  push    si                              
10b8  push    es                              
10b9  push    di                              
10ba  call far sub_1282                       
10bf  mov     cx,[bp+0Eh]                     
10c2  or      dx,dx                           
10c4  js      111Dh                           
10c6  sub     ax,cx                           
10c8  sbb     dx,0h                           
10cb  jae     111Dh                           
10cd  dec     cx                              
10ce  add     si,cx                           
10d0  jae     10D9h                           
10d2  mov     ax,ds                           
10d4  add     ax,1000h                        
10d7  mov     ds,ax                           
10d9  add     di,cx                           
10db  jae     10E4h                           
10dd  mov     ax,es                           
10df  add     ax,1000h                        
10e2  mov     es,ax                           
10e4  inc     cx                              
10e5  mov     ax,cx                           
10e7  dec     ax                              
10e8  sub     ax,di                           
10ea  sbb     bx,bx                           
10ec  and     ax,bx                           
10ee  add     ax,di                           
10f0  sub     ax,si                           
10f2  sbb     bx,bx                           
10f4  and     ax,bx                           
10f6  add     ax,si                           
10f8  inc     ax                              
10f9  xchg    ax,cx                           
10fa  sub     ax,cx                           
10fc  std                                     
10fd  rep     movsb                           
10ff  cld                                     
1100  xchg    ax,cx                           
1101  jcxz    115Fh                           
1103  cmp     si,-1h                          
1106  jne     110Fh                           
1108  mov     ax,ds                           
110a  sub     ax,1000h                        
110d  mov     ds,ax                           
110f  cmp     di,-1h                          
1112  jne     10E5h                           
1114  mov     ax,es                           
1116  sub     ax,1000h                        
1119  mov     es,ax                           
111b  jmp     10E5h                           
111d  mov     ax,cx                           
111f  dec     ax                              
1120  mov     dx,di                           
1122  not     dx                              
1124  sub     ax,dx                           
1126  sbb     bx,bx                           
1128  and     ax,bx                           
112a  add     ax,dx                           
112c  mov     dx,si                           
112e  not     dx                              
1130  sub     ax,dx                           
1132  sbb     bx,bx                           
1134  and     ax,bx                           
1136  add     ax,dx                           
1138  inc     ax                              
1139  xchg    ax,cx                           
113a  sub     ax,cx                           
113c  shr     cx,1                            
113e  rep     movsw                           
1140  adc     cx,cx                           
1142  rep     movsb                           
1144  xchg    ax,cx                           
1145  jcxz    115Fh                           
1147  or      si,si                           
1149  jne     1152h                           
114b  mov     ax,ds                           
114d  add     ax,1000h                        
1150  mov     ds,ax                           
1152  or      di,di                           
1154  jne     111Dh                           
1156  mov     ax,es                           
1158  add     ax,1000h                        
115b  mov     es,ax                           
115d  jmp     111Dh                           
115f  mov     ax,[bp+6h]                      
1162  mov     dx,[bp+8h]                      
1165  pop     si                              
1166  pop     di                              
1167  pop     ds                              
1168  pop     bp                              
1169  retf                                    

; ----- sub_116a -----
116a  mov     ax,ds                           
116c  nop                                     
116d  inc     bp                              
116e  push    bp                              
116f  mov     bp,sp                           
1171  push    ds                              
1172  mov     ds,ax                           
1174  push    si                              
1175  push    di                              
1176  cld                                     
1177  mov     ax,ds                           
1179  mov     es,ax                           
117b  lea     si,[bp+6h]                      
117e  mov     di,2C5Eh                        
1181  movsw   ss:                             
1183  movsw   ss:                             
1185  movsw   ss:                             
1187  movsw   ss:                             
1189  mov     si,2C5Eh                        
118c  push    bp                              
118d  call    12F0h                           
1190  pop     bp                              
1191  mov     di,2C66h                        
1194  mov     cx,ax                           
1196  lodsb                                   
1197  cbw                                     
1198  xchg    ax,cx                           
1199  rep     movsb                           
119b  xchg    ax,cx                           
119c  stosb                                   
119d  mov     di,2C54h                        
11a0  xor     bh,bh                           
11a2  mov     [di],bx                         
11a4  mov     [di+2h],dx                      
11a7  mov     [di+4h],cx                      
11aa  mov     word ptr [di+6h],2C66h          
11af  mov     [di+8h],ds                      
11b2  mov     dx,ds                           
11b4  mov     ax,di                           
11b6  pop     di                              
11b7  pop     si                              
11b8  lea     sp,[bp-2h]                      
11bb  pop     ds                              
11bc  pop     bp                              
11bd  dec     bp                              
11be  retf                                    
11bf  add     [bx+si],al                      

; ----- sub_11c0 -----
11c0  push    bp                              
11c1  mov     bp,sp                           
11c3  push    di                              
11c4  les     bx,es:[bx]                      
11c7  mov     cx,es                           
11c9  jcxz    11E5h                           
11cb  mov     ax,es:[bx+6h]                   
11cf  les     bx,es:[bx+0Eh]                  
11d3  push    bx                              
11d4  push    es                              
11d5  push    ax                              
11d6  push    ax                              
11d7  call far KERNEL.GLOBALUNLOCK            
11dc  call far KERNEL.GLOBALFREE              
11e1  pop     es                              
11e2  pop     bx                              
11e3  jmp     11C7h                           
11e5  pop     di                              
11e6  mov     sp,bp                           
11e8  pop     bp                              
11e9  ret                                     

; ===== ___EXPORTEDSTUB =====
11ea  mov     ax,ds                           
11ec  nop                                     
11ed  inc     bp                              
11ee  push    bp                              
11ef  mov     bp,sp                           
11f1  push    ds                              
11f2  mov     ds,ax                           
11f4  xor     ax,ax                           
11f6  lea     sp,[bp-2h]                      
11f9  pop     ds                              
11fa  pop     bp                              
11fb  dec     bp                              
11fc  retf                                    
11fd  nop                                     

; ----- sub_11fe -----
11fe  push    es                              
11ff  push    di                              
1200  mov     di,ax                           
1202  add     di,bx                           
1204  mov     [bx+4h],di                      
1207  dec     di                              
1208  dec     di                              
1209  sub     ax,18h                          
120c  lea     si,[bx+16h]                     
120f  mov     word ptr [di],0FFFEh            
1213  mov     [bx+0Ch],di                     
1216  dec     ax                              
1217  mov     [si],ax                         
1219  mov     [bx],ds                         
121b  mov     ax,si                           
121d  mov     dx,ds                           
121f  mov     es,dx                           
1221  lea     di,[bx+8h]                      
1224  cld                                     
1225  stosw                                   
1226  stosw                                   
1227  inc     di                              
1228  inc     di                              
1229  xor     ax,ax                           
122b  stosw                                   
122c  stosw                                   
122d  stosw                                   
122e  stosw                                   
122f  pop     di                              
1230  pop     es                              
1231  ret                                     

; ----- sub_1232 -----
1232  mov     ax,es:[di+2h]                   
1236  or      ax,ax                           
1238  jne     1243h                           
123a  mov     es:[di+2h],ds                   
123e  mov     es:[di],bx                      
1241  jmp     1257h                           
1243  push    es                              
1244  les     si,es:[di+8h]                   
1248  mov     es:[si+10h],ds                  
124c  mov     es:[si+0Eh],bx                  
1250  mov     [bx+14h],es                     
1253  mov     [bx+12h],si                     
1256  pop     es                              
1257  mov     es:[di+0Ah],ds                  
125b  mov     es:[di+8h],bx                   
125f  mov     es:[di+6h],ds                   
1263  mov     es:[di+4h],bx                   
1267  ret                                     

; ----- sub_1268 -----
1268  push    bp                              
1269  mov     bp,sp                           
126b  mov     dx,di                           
126d  les     di,[bp+6h]                      
1270  xor     ax,ax                           
1272  mov     cx,0FFFFh                       
1275  repne   scasb                           
1277  not     cx                              
1279  jne     127Ch                           
127b  dec     cx                              
127c  xchg    ax,cx                           
127d  mov     di,dx                           
127f  pop     bp                              
1280  retf                                    
1281  add     [bx+si],al                      

; ----- sub_1282 -----
1282  push    bp                              
1283  mov     bp,sp                           
1285  push    bx                              
1286  push    cx                              
1287  mov     ax,[bp+6h]                      
128a  mov     dx,[bp+8h]                      
128d  mov     bx,[bp+0Ch]                     
1290  mov     cx,0Ch                          
1293  shr     dx,cl                           
1295  shr     bx,cl                           
1297  sub     ax,[bp+0Ah]                     
129a  sbb     dx,bx                           
129c  pop     cx                              
129d  pop     bx                              
129e  pop     bp                              
129f  retf    8h                              
12a2  cld                                     
12a4  ???                                     
12a6  ???                                     
12a8  ???                                     
12aa  ???                                     
12ac  int     0CCh                            
12ae  int 3                                   
12af  int 3                                   
12b0  int 3                                   
12b1  int 3                                   
12b2  int 3                                   
12b3  int 3                                   
12b4  sti                                     
12b5  aas                                     
12b6  mov     si,2C86h                        
12b9  mov     word ptr [si],3001h             
12bd  xor     ax,ax                           
12bf  mov     dx,ax                           
12c1  inc     ax                              
12c2  mov     bl,20h                          
12c4  pop     es                              
12c5  ret                                     
12c6  or      dx,dx                           
12c8  jne     12D4h                           
12ca  cmp     cx,-8h                          
12cd  je      12E6h                           
12cf  and     cl,0Fh                          
12d2  je      12E1h                           
12d4  mov     si,2C9Eh                        
12d7  test    cl,8h                           
12da  jne     12E9h                           
12dc  mov     si,2C97h                        
12df  jmp     12E9h                           
12e1  mov     si,2CA5h                        
12e4  jmp     12E9h                           
12e6  mov     si,2CABh                        
12e9  mov     dx,1h                           
12ec  pop     es                              
12ed  xor     ax,ax                           
12ef  ret                                     

; ----- sub_12f0 -----
12f0  push    es                              
12f1  mov     ax,ds                           
12f3  mov     es,ax                           
12f5  cld                                     
12f6  mov     di,2C7Ah                        
12f9  push    di                              
12fa  mov     cx,4h                           
12fd  rep     movsw                           
12ff  pop     si                              
1300  mov     cx,[si+6h]                      
1303  and     byte ptr [si+7h],7Fh            
1307  mov     bl,20h                          
1309  mov     ax,[si]                         
130b  or      ax,[si+2h]                      
130e  or      ax,[si+4h]                      
1311  mov     dx,ax                           
1313  or      ax,[si+6h]                      
1316  je      12B6h                           
1318  or      cx,cx                           
131a  jns     131Eh                           
131c  mov     bl,2Dh                          
131e  not     cx                              
1320  test    cx,7FF0h                        
1324  not     cx                              
1326  je      12C6h                           
1328  push    bx                              
1329  wait                                    
132a  fstcw   word ptr [2CB3h]                
132e  nop                                     
132f  wait                                    
1330  push    ax                              
1331  mov     al,[2CB3h]                      
1334  mov     [2CB5h],al                      
1337  pop     ax                              
1338  wait                                    
1339  fldcw   word ptr [2CB5h]                
133d  wait                                    
133e  fld     qword ptr [si]                  
1340  wait                                    
1341  fld     st(0),st(0)                     
1343  wait                                    
1344  fstp    tword ptr [si]                  
1346  nop                                     
1347  wait                                    
1348  xor     di,di                           
134a  mov     si,2C81h                        
134d  lodsb                                   
134e  mov     bh,al                           
1350  lodsw                                   
1351  mov     cx,ax                           
1353  mov     dx,4D10h                        
1356  mul     dx                              
1358  xchg    ax,cx                           
1359  mov     al,4Dh                          
135b  mul     ah                              
135d  add     cx,ax                           
135f  adc     dx,di                           
1361  mov     al,9Ah                          
1363  mul     bh                              
1365  add     cx,ax                           
1367  adc     di,dx                           
1369  sub     cx,12F4h                        
136d  sbb     di,1343h                        
1371  push    di                              
1372  neg     di                              
1374  mov     si,2C7Ah                        
1377  call    1616h                           
137a  mov     bx,12A2h                        
137d  pop     di                              
137e  wait                                    
137f  fld     tword ptr cs:[bx]               
1382  wait                                    
1383  fcomp   st(0),st(1)                     
1385  wait                                    
1386  fstsw   word ptr [2CB1h]                
138a  nop                                     
138b  wait                                    
138c  test    byte ptr [2CB2h],41h            
1391  je      139Eh                           
1393  inc     di                              
1394  mov     bx,12ACh                        
1397  wait                                    
1398  fld     tword ptr cs:[bx]               
139b  wait                                    
139c  fmulp   st(1)                           
139e  push    di                              
139f  wait                                    
13a0  fstp    tword ptr [si]                  
13a2  wait                                    
13a3  fldcw   word ptr [2CB3h]                
13a7  nop                                     
13a8  wait                                    
13a9  lodsw                                   
13aa  xchg    ax,di                           
13ab  lodsw                                   
13ac  xchg    ax,bp                           
13ad  lodsw                                   
13ae  xchg    ax,dx                           
13af  lodsw                                   
13b0  xchg    ax,bx                           
13b1  lodsw                                   
13b2  xchg    ax,cx                           
13b3  sub     cx,3FFEh                        
13b7  neg     cx                              
13b9  mov     si,di                           
13bb  xor     ax,ax                           
13bd  jcxz    13CBh                           
13bf  shr     bx,1                            
13c1  rcr     dx,1                            
13c3  rcr     bp,1                            
13c5  rcr     si,1                            
13c7  rcr     ah,1                            
13c9  loop    13BFh                           
13cb  adc     si,39Ah                         
13cf  adc     bp,cx                           
13d1  adc     dx,cx                           
13d3  adc     bx,cx                           
13d5  mov     di,2C87h                        
13d8  mov     cx,10h                          
13db  xor     al,al                           
13dd  push    cx                              
13de  push    bx                              
13df  push    dx                              
13e0  push    bp                              
13e1  push    si                              
13e2  push    ax                              
13e3  shl     ah,1                            
13e5  rcl     si,1                            
13e7  rcl     bp,1                            
13e9  rcl     dx,1                            
13eb  rcl     bx,1                            
13ed  rcl     al,1                            
13ef  shl     ah,1                            
13f1  rcl     si,1                            
13f3  rcl     bp,1                            
13f5  rcl     dx,1                            
13f7  rcl     bx,1                            
13f9  rcl     al,1                            
13fb  pop     cx                              
13fc  adc     ah,ch                           
13fe  pop     cx                              
13ff  adc     si,cx                           
1401  pop     cx                              
1402  adc     bp,cx                           
1404  pop     cx                              
1405  adc     dx,cx                           
1407  pop     cx                              
1408  adc     bx,cx                           
140a  adc     al,0h                           
140c  shl     ah,1                            
140e  rcl     si,1                            
1410  rcl     bp,1                            
1412  rcl     dx,1                            
1414  rcl     bx,1                            
1416  rcl     al,1                            
1418  pop     cx                              
1419  add     al,30h                          
141b  stosb                                   
141c  loop    13DBh                           
141e  dec     di                              
141f  dec     cx                              
1420  mov     al,30h                          
1422  std                                     
1423  rep     scasb                           
1425  cld                                     
1426  add     cx,12h                          
1429  mov     si,2C86h                        
142c  mov     [si],cl                         
142e  mov     ax,1h                           
1431  pop     dx                              
1432  pop     bx                              
1433  pop     es                              
1434  ret                                     
1435  add     [bx+si],al                      

; ----- sub_1436 -----
1436  mov     ax,ds                           
1438  nop                                     
1439  inc     bp                              
143a  push    bp                              
143b  mov     bp,sp                           
143d  push    ds                              
143e  mov     ds,ax                           
1440  sub     sp,6h                           
1443  mov     ax,305Ch                        
1446  push    ds                              
1447  push    ax                              
1448  lea     cx,[bp-6h]                      
144b  push    ss                              
144c  push    cx                              
144d  push    word ptr [bp+8h]                
1450  push    word ptr [bp+6h]                
1453  xor     dx,dx                           
1455  push    dx                              
1456  call    1654h                           
1459  mov     [bp-8h],ax                      
145c  mov     ax,[bp-6h]                      
145f  sub     ax,[bp+6h]                      
1462  mov     [3056h],ax                      
1465  mov     word ptr [3054h],0h             
146b  test    byte ptr [bp-8h],4h             
146f  je      1477h                           
1471  mov     word ptr [3054h],200h           
1477  test    byte ptr [bp-8h],2h             
147b  je      1482h                           
147d  or      byte ptr [3054h],1h             
1482  test    byte ptr [bp-8h],1h             
1486  je      148Dh                           
1488  or      byte ptr [3055h],1h             
148d  mov     ax,3054h                        
1490  mov     dx,ds                           
1492  lea     sp,[bp-2h]                      
1495  pop     ds                              
1496  pop     bp                              
1497  dec     bp                              
1498  retf                                    
1499  nop                                     
149a  add     [bx+si],al                      
149c  add     [bx+si],al                      
149e  add     [bx+si],al                      
14a0  add     [bx+si+4002h],ah                
14a4  add     [bx+si],al                      
14a6  add     [bx+si],al                      
14a8  add     [bx+si],al                      
14aa  add     al,cl                           
14ac  add     ax,40h                          
14af  add     [bx+si],al                      
14b1  add     [bx+si],al                      
14b3  add     [bx+si],al                      
14b5  cli                                     
14b6  or      [bx+si],al                      
14b9  add     [bx+si],al                      
14bb  add     [bx+si],al                      
14bd  add     [bx+si-64h],al                  
14c0  or      al,40h                          
14c2  add     [bx+si],al                      
14c4  add     [bx+si],al                      
14c6  add     [bx+si],al                      
14c8  push    ax                              
14c9  ret                                     
14ca  cmovo   ax,[bx+si]                      
14cd  add     [bx+si],al                      
14cf  add     [bx+si],al                      
14d1  add     [si],ah                         
14d3  hlt                                     
14d4  adc     al,[bx+si]                      
14d7  add     [bx+si],al                      
14d9  add     [bx+si],al                      
14db  adc     byte ptr [bp+1698h],40h         
14e0  add     [bx+si],al                      
14e2  add     [bx+si],al                      
14e4  add     [bx+si],ah                      
14e6  mov     sp,19BEh                        
14e9  inc     ax                              
14ea  add     [bx+si],al                      
14ec  add     [si],al                         
14ee  mov     di,1BC9h                        
14f1  mov     ???,[si]                        
14f3  inc     ax                              
14f4  add     [bx+di-3313h],ah                
14f8  into                                    
14f9  sbb     ax,dx                           
14fb  ror     word ptr [bp+40h],cl            
14fe  sahf                                    
14ff  mov     ch,70h                          
1501  sub     bp,[bx+si-3A53h]                
1505  popf                                    
1506  imul    ax,[bx+si-3h],0E525h            
150b  sbb     cl,[bp+194Fh]                   
150f  jmp     1494h                           
1511  inc     ax                              
1512  xlat                                    
1513  xchg    ax,bp                           
1514  inc     bx                              
1515  push    cs                              
1516  add     ax,298Dh                        
1519  scasw                                   
151a  sahf                                    
151b  inc     ax                              
151c  mov     al,[0ED44h]                     
151f  adc     word ptr [bp+si],818Fh          
1523  cmp     byte ptr [bx+di-2AC0h],0A6h     
1528  iret                                    
1529  dec     word ptr [bx+di+1Fh]            
152c  js      14F0h                           
152e  rol     word ptr [bx+si-20h],cl         
1531  mov     cx,gs                           
1533  or      cl,47h                          
1536  mov     dx,0A893h                       
1539  inc     cx                              
153a  imul    dx,[di+27h],39h                 
153e  lea     si,di                           
1540  jo      1522h                           
1542  jl      1586h                           
1544  mov     ds,si                           
1546  stc                                     
1547  popf                                    
1548  sti                                     
1549  jmp     15C9h                           
154b  stosb                                   
154c  push    cx                              
154d  inc     bx                              
154e  jbe     1533h                           
1550  int 3                                   
1551  repne   sub     [bx],bp                 
1554  test    [bx+di+4426h],al                
1558  int     0CCh                            
155a  int 3                                   
155b  int 3                                   
155c  int 3                                   
155d  int 3                                   
155e  int 3                                   
155f  int 3                                   
1560  sti                                     
1561  aas                                     
1562  or      dl,bh                           
1564  mov     [3D70h],ax                      
1567  or      dl,bh                           
1569  mov     [3FF8h],ax                      
156c  cmp     bx,di                           
156e  dec     di                              
156f  lea     dx,[bx+126Eh]                   
1573  xor     bp,3Fh                          
1576  sub     al,65h                          
1578  sbb     dx,sp                           
157a  pop     ax                              
157b  pop     ss                              
157c  mov     bh,0D1h                         
157e  ???                                     
157f  aas                                     
1580  and     ax,[si+1B47h]                   
1584  inc     di                              
1585  lodsb                                   
1586  lds     sp,[bx+3FEEh]                   
158a  mov     dh,69h                          
158c  insb                                    
158d  scasw                                   
158e  add     ax,37BDh                        
1591  xchg    ch,bl                           
1593  aas                                     
1594  mov     sp,7A42h                        
1597  in      ax,0D5h                         
1599  xchg    ax,sp                           
159a  mov     di,0E7D6h                       
159d  aas                                     
159e  std                                     
159f  into                                    
15a0  popa                                    
15a1  test    [bx+di],dl                      
15a3  ja      1571h                           
15a5  stosw                                   
15a6  in      al,3Fh                          
15a8  pop     bx                              
15a9  loopz   15F8h                           
15ab  les     di,[bp-6A6Ch]                   
15af  out     0C9h,al                         
15b1  aas                                     
15b2  push    bx                              
15b3  cmp     si,[di+44h]                     
15b6  int     14h                             
15b8  mov     si,0AF9Ah                       
15bb  aas                                     
15bc  mov     dx,3994h                        
15bf  inc     bp                              
15c0  lodsw                                   
15c1  push    ds                              
15c2  mov     cl,0CFh                         
15c4  xchg    ax,sp                           
15c5  aas                                     
15c6  mov     dl,0BCh                         
15c9  mov     dx,313Bh                        
15cc  popa                                    
15cd  mov     di,[bp+si+3Fh]                  
15d0  pop     cx                              
15d1  sar     word ptr [bp-4Fh],53h           
15d5  jl      15E9h                           
15d7  mov     bx,3F5Fh                        
15da  das                                     
15db  lea     ax,[92BEh]                      
15df  test    [di],dx                         
15e1  sti                                     
15e2  inc     sp                              
15e3  aas                                     
15e4  movsw                                   
15e5  jmp     0BB21h                          
15e8  daa                                     
15e9  jmp     3F2Ah:0A87Fh                    
15ee  mov     ax,[0BCE4h]                     
15f1  jl      163Ah                           
15f4  rcr     ch,1                            
15f6  push    bp                              
15f7  push    es                              
15f9  int 3                                   
15fa  and     dx,[si+77h]                     
15fd  cmp     di,-6Fh                         
1600  cmp     word ptr [di],193Ah             
1604  jp      1669h                           
1606  and     ax,3143h                        
1609  shr     byte ptr [si-2EC4h],38h         
160e  add     byte ptr [bx-69h],0B8h          
1612  add     ch,bh                           
1614  xlat                                    
1615  cmp     ax,[bx+si]                      

; ----- sub_1616 -----
1616  mov     bx,144Ah                        
1619  or      di,di                           
161b  jns     1622h                           
161d  mov     bx,1508h                        
1620  neg     di                              
1622  push    di                              
1623  pop     di                              
1624  add     bx,46h                          
1627  or      di,di                           
1629  je      1652h                           
162b  mov     ax,di                           
162d  shr     di,1                            
162f  shr     di,1                            
1631  shr     di,1                            
1633  push    di                              
1634  and     ax,7h                           
1637  je      1623h                           
1639  push    bx                              
163a  shl     al,1                            
163c  mov     ah,al                           
163e  shl     al,1                            
1640  shl     al,1                            
1642  add     al,ah                           
1644  xor     ah,ah                           
1646  add     bx,ax                           
1648  wait                                    
1649  fld     tword ptr cs:[bx]               
164c  wait                                    
164d  fmulp   st(1)                           
164f  pop     bx                              
1650  jmp     1623h                           
1652  ret                                     
1653  add     [bx+si],al                      

; ----- sub_1654 -----
1654  push    bp                              
1655  mov     bp,sp                           
1657  sub     sp,0Eh                          
165a  push    ss                              
165b  lea     ax,[bp-0Ah]                     
165e  push    ax                              
165f  push    word ptr [bp+0Ch]               
1662  push    word ptr [bp+0Ah]               
1665  push    word ptr [bp+8h]                
1668  push    word ptr [bp+6h]                
166b  push    word ptr [bp+4h]                
166e  call    16BCh                           
1671  wait                                    
1672  fstcw   word ptr [bp-0Eh]               
1675  wait                                    
1676  fld     tword ptr [bp-0Ah]              
1679  mov     bx,[bp-0Eh]                     
167c  or      bx,18h                          
167f  mov     [bp-0Ch],bx                     
1682  wait                                    
1683  fclex                                   
1685  les     bx,[bp+0Eh]                     
1688  wait                                    
1689  fldcw   word ptr [bp-0Ch]               
168c  wait                                    
168d  fstp    qword ptr es:[bx]               
1690  wait                                    
1691  fstsw   word ptr [bp-0Ch]               
1694  wait                                    
1695  fclex                                   
1697  wait                                    
1698  fldcw   word ptr [bp-0Eh]               
169b  or      ax,ax                           
169d  jne     16B6h                           
169f  mov     bx,[bp-0Ch]                     
16a2  xor     ax,ax                           
16a4  test    bx,18h                          
16a8  je      16B6h                           
16aa  mov     ax,2h                           
16ad  test    bx,8h                           
16b1  jne     16B6h                           
16b3  mov     ax,1h                           
16b6  mov     sp,bp                           
16b8  pop     bp                              
16b9  ret     0Eh                             

; ----- sub_16bc -----
16bc  push    bp                              
16bd  mov     bp,sp                           
16bf  sub     sp,34h                          
16c2  push    si                              
16c3  push    di                              
16c4  push    ds                              
16c5  lds     si,[bp+6h]                      
16c8  xor     ax,ax                           
16ca  mov     [bp-0Eh],ax                     
16cd  mov     [bp-10h],ds                     
16d0  mov     [bp-12h],si                     
16d3  mov     [bp-14h],ax                     
16d6  mov     [bp-18h],ax                     
16d9  mov     [bp-16h],ax                     
16dc  mov     word ptr [bp-1Ah],19h           
16e1  push    ss                              
16e2  pop     es                              
16e3  lea     di,[bp-34h]                     
16e6  lodsb                                   
16e7  cmp     al,20h                          
16e9  je      16E6h                           
16eb  cmp     al,9h                           
16ed  je      16E6h                           
16ef  cmp     al,0Ah                          
16f1  je      16E6h                           
16f3  cmp     al,0Dh                          
16f5  je      16E6h                           
16f7  or      al,al                           
16f9  jne     16FEh                           
16fb  jmp     18EDh                           
16fe  cmp     al,2Bh                          
1700  je      170Bh                           
1702  cmp     al,2Dh                          
1704  jne     170Ch                           
1706  mov     word ptr [bp-14h],8000h         
170b  lodsb                                   
170c  cmp     al,30h                          
170e  jb      1714h                           
1710  cmp     al,39h                          
1712  jbe     1724h                           
1714  cmp     al,2Eh                          
1716  jne     16FBh                           
1718  lodsb                                   
1719  cmp     al,30h                          
171b  jb      16FBh                           
171d  cmp     al,39h                          
171f  ja      16FBh                           
1721  jmp     1738h                           
1723  lodsb                                   
1724  cmp     al,30h                          
1726  je      1723h                           
1728  or      al,al                           
172a  jne     1733h                           
172c  dec     si                              
172d  mov     [bp-12h],si                     
1730  jmp     18F1h                           
1733  cmp     al,2Eh                          
1735  jne     1749h                           
1737  lodsb                                   
1738  dec     word ptr [bp-16h]               
173b  cmp     al,30h                          
173d  je      1737h                           
173f  inc     word ptr [bp-16h]               
1742  or      al,al                           
1744  je      172Ch                           
1746  jmp     1773h                           
1748  lodsb                                   
1749  cmp     al,30h                          
174b  jb      176Eh                           
174d  cmp     al,39h                          
174f  ja      176Eh                           
1751  sub     al,30h                          
1753  stosb                                   
1754  dec     word ptr [bp-1Ah]               
1757  jne     1748h                           
1759  lodsb                                   
175a  inc     word ptr [bp-16h]               
175d  cmp     al,30h                          
175f  jb      1765h                           
1761  cmp     al,39h                          
1763  jbe     1759h                           
1765  dec     word ptr [bp-16h]               
1768  cmp     al,2Eh                          
176a  je      1786h                           
176c  jmp     178Fh                           
176e  cmp     al,2Eh                          
1770  jne     178Fh                           
1772  lodsb                                   
1773  cmp     al,30h                          
1775  jb      178Fh                           
1777  cmp     al,39h                          
1779  ja      178Fh                           
177b  sub     al,30h                          
177d  stosb                                   
177e  dec     word ptr [bp-16h]               
1781  dec     word ptr [bp-1Ah]               
1784  jne     1772h                           
1786  lodsb                                   
1787  cmp     al,30h                          
1789  jb      178Fh                           
178b  cmp     al,39h                          
178d  jbe     1786h                           
178f  neg     word ptr [bp-1Ah]               
1792  add     word ptr [bp-1Ah],19h           
1796  lea     bx,[si-1h]                      
1799  mov     [bp-12h],bx                     
179c  xor     bx,bx                           
179e  cmp     al,45h                          
17a0  je      17B0h                           
17a2  cmp     al,65h                          
17a4  je      17B0h                           
17a6  cmp     al,44h                          
17a8  je      17B0h                           
17aa  cmp     al,64h                          
17ac  je      17B0h                           
17ae  jmp     1802h                           
17b0  lodsb                                   
17b1  cmp     al,2Bh                          
17b3  je      17BEh                           
17b5  cmp     al,2Dh                          
17b7  jne     17BFh                           
17b9  mov     word ptr [bp-18h],0FFFFh        
17be  lodsb                                   
17bf  cmp     al,30h                          
17c1  jb      1802h                           
17c3  cmp     al,39h                          
17c5  ja      1802h                           
17c7  sub     ax,30h                          
17ca  mov     bx,ax                           
17cc  lodsb                                   
17cd  cmp     al,30h                          
17cf  jb      17F5h                           
17d1  cmp     al,39h                          
17d3  ja      17F5h                           
17d5  sub     al,30h                          
17d7  cmp     bx,666h                         
17db  ja      17E9h                           
17dd  shl     bx,1                            
17df  add     ax,bx                           
17e1  shl     bx,1                            
17e3  shl     bx,1                            
17e5  add     bx,ax                           
17e7  jns     17CCh                           
17e9  mov     bx,3FFFh                        
17ec  lodsb                                   
17ed  cmp     al,30h                          
17ef  jb      17F5h                           
17f1  cmp     al,39h                          
17f3  jbe     17ECh                           
17f5  xor     bx,[bp-18h]                     
17f8  sub     bx,[bp-18h]                     
17fb  add     [bp-16h],bx                     
17fe  dec     si                              
17ff  mov     [bp-12h],si                     
1802  cmp     word ptr [bp-1Ah],0h            
1806  jne     180Bh                           
1808  jmp     18F1h                           
180b  mov     byte ptr es:[di],0h             
180f  dec     di                              
1810  cmp     word ptr [bp-1Ah],18h           
1814  jbe     182Dh                           
1816  mov     al,es:[di]                      
1819  mov     byte ptr es:[di],0h             
181d  dec     word ptr [bp-1Ah]               
1820  inc     word ptr [bp-16h]               
1823  dec     di                              
1824  cmp     al,5h                           
1826  jb      183Ch                           
1828  inc     byte ptr es:[di]                
182b  jmp     1842h                           
182d  cmp     word ptr [bp-16h],0h            
1831  je      1842h                           
1833  jmp     183Ch                           
1835  dec     di                              
1836  dec     word ptr [bp-1Ah]               
1839  inc     word ptr [bp-16h]               
183c  cmp     byte ptr es:[di],0h             
1840  je      1835h                           
1842  push    ss                              
1843  lea     ax,[bp-34h]                     
1846  push    ax                              
1847  push    word ptr [bp-1Ah]               
184a  lea     ax,[bp-0Ch]                     
184d  push    ax                              
184e  call    1E36h                           
1851  mov     ax,[bp-16h]                     
1854  or      ax,ax                           
1856  je      1876h                           
1858  cmp     ax,1450h                        
185b  jl      1860h                           
185d  jmp     1903h                           
1860  cmp     ax,0EBB0h                       
1863  jg      1868h                           
1865  jmp     18FDh                           
1868  push    ss                              
1869  lea     ax,[bp-0Ch]                     
186c  push    ax                              
186d  push    word ptr [bp-16h]               
1870  push    word ptr [bp+4h]                
1873  call    1BDCh                           
1876  mov     ax,[bp-4h]                      
1879  mov     bx,[bp-6h]                      
187c  mov     cx,[bp-8h]                      
187f  mov     dx,[bp-0Ah]                     
1882  cmp     word ptr [bp-0Ch],8000h         
1887  jb      18A5h                           
1889  ja      1891h                           
188b  test    dx,1h                           
188f  je      18A5h                           
1891  add     dx,1h                           
1894  adc     cx,0h                           
1897  adc     bx,0h                           
189a  adc     ax,0h                           
189d  jae     18A5h                           
189f  or      ah,80h                          
18a2  inc     word ptr [bp-2h]                
18a5  mov     si,[bp-2h]                      
18a8  cmp     si,7FFFh                        
18ac  jae     1903h                           
18ae  or      si,si                           
18b0  jne     18BCh                           
18b2  mov     si,ax                           
18b4  or      si,bx                           
18b6  or      si,cx                           
18b8  or      si,dx                           
18ba  je      18FDh                           
18bc  lds     si,[bp+0Eh]                     
18bf  mov     [si+6h],ax                      
18c2  mov     [si+4h],bx                      
18c5  mov     [si+2h],cx                      
18c8  mov     [si],dx                         
18ca  mov     ax,[bp-2h]                      
18cd  or      ax,[bp-14h]                     
18d0  mov     [si+8h],ax                      
18d3  lds     si,[bp+0Ah]                     
18d6  mov     ax,[bp-12h]                     
18d9  mov     [si],ax                         
18db  mov     ax,[bp-10h]                     
18de  mov     [si+2h],ax                      
18e1  mov     ax,[bp-0Eh]                     
18e4  pop     ds                              
18e5  pop     di                              
18e6  pop     si                              
18e7  mov     sp,bp                           
18e9  pop     bp                              
18ea  ret     0Eh                             
18ed  or      word ptr [bp-0Eh],4h            
18f1  les     di,[bp+0Eh]                     
18f4  xor     ax,ax                           
18f6  mov     cx,5h                           
18f9  rep     stosw                           
18fb  jmp     18D3h                           
18fd  or      word ptr [bp-0Eh],1h            
1901  jmp     18F1h                           
1903  or      word ptr [bp-0Eh],2h            
1907  lds     si,[bp+0Eh]                     
190a  mov     ax,7FFFh                        
190d  or      ax,[bp-14h]                     
1910  mov     [si+8h],ax                      
1913  mov     word ptr [si+6h],8000h          
1918  xor     ax,ax                           
191a  mov     [si+4h],ax                      
191d  mov     [si+2h],ax                      
1920  mov     [si],ax                         
1922  jmp     18D3h                           
1924  add     [bx+si],al                      
1926  add     [bx+si],al                      
1928  add     [bx+si],al                      
192a  add     [bx+si],al                      
192c  add     [bx+si+4002h],ah                
1930  add     [bx+si],al                      
1932  add     [bx+si],al                      
1934  add     [bx+si],al                      
1936  add     [bx+si],al                      
1938  add     al,cl                           
193a  add     ax,40h                          
193d  add     [bx+si],al                      
193f  add     [bx+si],al                      
1941  add     [bx+si],al                      
1943  add     [bx+si],al                      
1945  cli                                     
1946  or      [bx+si],al                      
1949  add     [bx+si],al                      
194b  add     [bx+si],al                      
194d  add     [bx+si],al                      
194f  add     [bx+si-64h],al                  
1952  or      al,40h                          
1954  add     [bx+si],al                      
1956  add     [bx+si],al                      
1958  add     [bx+si],al                      
195a  add     [bx+si],al                      
195c  push    ax                              
195d  ret                                     
195e  cmovo   ax,[bx+si]                      
1961  add     [bx+si],al                      
1963  add     [bx+si],al                      
1965  add     [bx+si],al                      
1967  add     [si],ah                         
1969  hlt                                     
196a  adc     al,[bx+si]                      
196d  add     [bx+si],al                      
196f  add     [bx+si],al                      
1971  add     [bx+si],al                      
1973  adc     byte ptr [bp+1698h],40h         
1978  add     [bx+si],al                      
197a  add     [bx+si],al                      
197c  add     [bx+si],al                      
197e  add     [bx+si],ah                      
1980  mov     sp,19BEh                        
1983  inc     ax                              
1984  add     [bx+si],al                      
1986  add     [bx+si],al                      
1988  add     [si],al                         
198a  mov     di,1BC9h                        
198d  mov     ???,[si]                        
198f  inc     ax                              
1990  add     [bx+si],al                      
1992  add     [bx+di-3313h],ah                
1996  into                                    
1997  sbb     ax,dx                           
1999  ror     word ptr [bp+40h],cl            
199c  and     al,dh                           
199e  sahf                                    
199f  mov     ch,70h                          
19a1  sub     bp,[bx+si-3A53h]                
19a5  popf                                    
19a6  imul    ax,[bx+si-30h],0FD5Dh           
19ab  and     ax,1AE5h                        
19ae  mov     cs,[bx+19h]                     
19b1  jmp     1936h                           
19b3  inc     ax                              
19b4  jno     194Ch                           
19b6  xlat                                    
19b7  xchg    ax,bp                           
19b8  inc     bx                              
19b9  push    cs                              
19ba  add     ax,298Dh                        
19bd  scasw                                   
19be  sahf                                    
19bf  inc     ax                              
19c0  stc                                     
19c1  mov     di,44A0h                        
19c4  in      ax,dx                           
19c5  adc     word ptr [bp+si],818Fh          
19c9  cmp     byte ptr [bx+di-40C0h],3Ch      
19ce  aad     0A6h                            
19d0  iret                                    
19d1  dec     word ptr [bx+di+1Fh]            
19d4  js      1998h                           
19d6  rol     word ptr [bx+si+6Fh],cl         
19d9  mov     al,8Ch                          
19dc  jmp     0E35Fh                          
19df  inc     di                              
19e0  mov     dx,0A893h                       
19e3  inc     cx                              
19e4  mov     sp,6B85h                        
19e7  push    bp                              
19e8  daa                                     
19e9  cmp     [di+70F7h],cx                   
19ed  loopne  1A6Bh                           
19ef  inc     dx                              
19f0  mov     sp,8EDDh                        
19f3  fdivp   st(1)                           
19f5  popf                                    
19f6  sti                                     
19f7  jmp     1A77h                           
19f9  stosb                                   
19fa  push    cx                              
19fb  inc     bx                              
19fc  mov     ax,[76E6h]                      
19ff  jcxz    19CDh                           
1a01  repne   sub     [bx],bp                 
1a04  test    [bx+di+4426h],al                
1a08  sub     [bx+si],dl                      
1a0a  pop     ss                              
1a0b  stosb                                   
1a0c  clc                                     
1a0d  scasb                                   
1a0e  adc     bl,ah                           
1a10  lds     ax,sp                           
1a12  cli                                     
1a13  inc     sp                              
1a14  jmp     19BDh                           
1a16  aam     0F3h                            
1a18  imul    bx                              
1a1a  loopz   1A66h                           
1a1c  jp      19B3h                           
1a1e  iret                                    
1a1f  inc     bp                              
1a20  int 3                                   
1a22  mov     word ptr [bx+di-59F2h],0A0AEh   
1a28  sbb     bx,sp                           
1a2a  mov     [0D46h],ax                      
1a2d  pop     ss                              
1a2f  or      al,75h                          
1a31  add     word ptr [bp+7675h],48C9h       
1a37  dec     bp                              
1a38  pop     ax                              
1a39  inc     dx                              
1a3a  in      al,0A7h                         
1a3c  xchg    ax,bx                           
1a3d  cmp     [bp+di],di                      
1a3f  xor     ax,0B2B8h                       
1a42  in      ax,dx                           
1a43  push    bx                              
1a44  dec     bp                              
1a45  cmpsw                                   
1a46  in      ax,5Dh                          
1a48  cmp     ax,5DC5h                        
1a4b  cmp     cx,[bp+di-6D62h]                
1a4f  pop     dx                              
1a50  call    far ptr  [di-5Ah]               
1a53  lock                                    
1a54  mov     ax,[0C020h]                     
1a57  push    sp                              
1a58  movsw                                   
1a59  mov     [bx],???                        
1a5b  popa                                    
1a5c  sar     bp,1                            
1a5e  mov     bx,[bp+si-75h]                  
1a61  fsub    dword ptr [di]                  
1a63  pop     bp                              
1a64  mov     cx,di                           
1a66  ??? (FPU)                               
1a69  xchg    ax,bp                           
1a6a  clc                                     
1a6b  rep     daa                             
1a6d  mov     di,0C8A2h                       
1a70  pop     bp                              
1a71  fld     qword ptr [bx+si+4C6Eh]         
1a75  leave                                   
1a76  wait                                    
1a77  xchg    ax,di                           
1a78  and     [bp+si+5202h],cl                
1a7c  pusha                                   
1a7d  les     sp,[di]                         
1a7f  jne     1A4Eh                           
1a81  int 3                                   
1a82  int     0CCh                            
1a84  int 3                                   
1a85  int 3                                   
1a86  int 3                                   
1a87  int 3                                   
1a88  int 3                                   
1a89  int 3                                   
1a8a  sti                                     
1a8b  aas                                     
1a8c  jno     1ACBh                           
1a8e  or      dl,bh                           
1a90  mov     [3D70h],ax                      
1a93  or      dl,bh                           
1a95  mov     [3FF8h],ax                      
1a98  pop     dx                              
1a99  cmp     bx,di                           
1a9c  dec     di                              
1a9d  lea     dx,[bx+126Eh]                   
1aa1  xor     bp,3Fh                          
1aa4  ret                                     
1aa5  shr     word ptr [si],cl                
1aa7  sbb     dx,sp                           
1aaa  pop     ax                              
1aab  pop     ss                              
1aac  mov     bh,0D1h                         
1aae  ???                                     
1aaf  aas                                     
1ab0  ror     byte ptr [bx],1                 
1ab2  and     ax,[si+1B47h]                   
1ab6  inc     di                              
1ab7  lodsb                                   
1ab8  lds     sp,[bx+3FEEh]                   
1abc  inc     ax                              
1abd  cmpsb                                   
1abe  mov     dh,69h                          
1ac0  insb                                    
1ac1  scasw                                   
1ac2  add     ax,37BDh                        
1ac5  xchg    ch,bl                           
1ac7  aas                                     
1ac8  xor     di,[di]                         
1aca  mov     sp,7A42h                        
1acd  in      ax,0D5h                         
1acf  xchg    ax,sp                           
1ad0  mov     di,0E7D6h                       
1ad3  aas                                     
1ad4  ret     0FDFDh                          
1ad7  into                                    
1ad8  popa                                    
1ad9  test    [bx+di],dl                      
1adb  ja      1AA9h                           
1add  stosw                                   
1ade  in      al,3Fh                          
1ae0  das                                     
1ae1  dec     sp                              
1ae2  pop     bx                              
1ae3  loopz   1B32h                           
1ae5  les     di,[bp-6A6Ch]                   
1ae9  out     0C9h,al                         
1aeb  aas                                     
1aec  xchg    ax,dx                           
1aed  les     dx,[bp+di+3Bh]                  
1af0  jne     1B36h                           
1af2  int     14h                             
1af4  mov     si,0AF9Ah                       
1af7  aas                                     
1af8  fisub   word ptr [bx-46h]               
1afb  xchg    ax,sp                           
1afc  cmp     [di-53h],ax                     
1aff  push    ds                              
1b00  mov     cl,0CFh                         
1b02  xchg    ax,sp                           
1b03  aas                                     
1b04  and     al,23h                          
1b06  mov     dl,0BCh                         
1b09  mov     dx,313Bh                        
1b0c  popa                                    
1b0d  mov     di,[bp+si+3Fh]                  
1b10  popa                                    
1b11  push    bp                              
1b12  pop     cx                              
1b13  sar     word ptr [bp-4Fh],53h           
1b17  jl      1B2Bh                           
1b19  mov     bx,3F5Fh                        
1b1c  xlat                                    
1b1d  out     dx,al                           
1b1e  das                                     
1b1f  lea     ax,[92BEh]                      
1b23  test    [di],dx                         
1b25  sti                                     
1b26  inc     sp                              
1b27  aas                                     
1b28  and     al,3Fh                          
1b2a  movsw                                   
1b2b  jmp     0C067h                          
1b2e  daa                                     
1b2f  jmp     3F2Ah:0A87Fh                    
1b34  jge     1AE2h                           
1b36  mov     ax,[0BCE4h]                     
1b39  jl      1B82h                           
1b3c  rcr     ch,1                            
1b3e  push    bp                              
1b3f  arpl    ds:[bp+di+6h],di                
1b43  int 3                                   
1b44  and     dx,[si+77h]                     
1b47  cmp     di,-6Fh                         
1b4a  cmp     word ptr [di],0FA91h            
1b4e  cmp     bl,[bx+di]                      
1b50  jp      1BB5h                           
1b52  and     ax,3143h                        
1b55  shr     byte ptr [si+213Ch],89h         
1b5a  sar     word ptr [bx+si],1              
1b5c  add     byte ptr [bx-69h],0B8h          
1b60  add     ch,bh                           
1b62  xlat                                    
1b63  cmp     bx,sp                           
1b65  mov     [bx+si+8h],bl                   
1b68  sbb     si,[bx+di-1C18h]                
1b6c  xchg    ah,[bp+3B03h]                   
1b70  mov     byte ptr [si+4245h],7h          
1b75  mov     dh,99h                          
1b77  jne     1BB0h                           
1b79  fld     tword ptr [333Ah]               
1b7d  jno     1B9Bh                           
1b7f  shl     byte ptr [bp+di],cl             
1b81  ??? (FPU)                               
1b83  out     dx,al                           
1b84  dec     cx                              
1b85  nop                                     
1b86  pop     dx                              
1b87  cmp     [bp-4179h],sp                   
1b8b  rcl     byte ptr [bx-26h],0A5h          
1b8f  and     byte ptr [bp-4A5Eh],32h         
1b94  loop    1BFEh                           
1b96  mov     dl,11h                          
1b98  cmpsw                                   
1b99  push    dx                              
1b9a  lahf                                    
1b9b  inc     sp                              
1b9c  pop     cx                              
1b9d  mov     bh,10h                          
1b9f  sub     al,25h                          
1ba1  dec     cx                              
1ba2  in      al,2Dh                          
1ba4  xor     al,4Fh                          
1ba7  push    bx                              
1ba8  scasb                                   
1ba9  into                                    
1baa  imul    sp,[di],-71h                    
1bad  pop     cx                              
1bae  add     al,0A4h                         
1bb0  rcr     dh,0C2h                         
1bb3  jge     1BB0h                           
1bb5  call    3A7Eh                           
1bb8  sahf                                    
1bb9  out     88h,ax                          
1bbb  pop     dx                              
1bbc  push    di                              
1bbd  xchg    ax,cx                           
1bbe  cmp     al,0BFh                         
1bc0  push    ax                              
1bc1  and     word ptr [bp+si],18h            
1bc4  dec     si                              
1bc5  dec     bx                              
1bc6  bound   di,bp                           
1bc9  or      word ptr [bx+6AFh],-6Ch         
1bce  jge     1BE1h                           
1bd0  in      al,2Dh                          
1bd2  ficomp  word ptr [bx-2D32h]             
1bd6  enter   0DD04h,0A6h                     
1bda  fmul    dword ptr [bp+si]               

; ----- sub_1bdc -----
1bdc  push    bp                              
1bdd  mov     bp,sp                           
1bdf  sub     sp,6h                           
1be2  push    si                              
1be3  push    di                              
1be4  mov     di,[bp+6h]                      
1be7  mov     bx,18C4h                        
1bea  or      di,di                           
1bec  je      1C68h                           
1bee  jns     1BF5h                           
1bf0  mov     bx,1A20h                        
1bf3  neg     di                              
1bf5  mov     word ptr [bp-6h],1C7Ah          
1bfa  cmp     word ptr [bp+4h],0h             
1bfe  jne     1C20h                           
1c00  mov     word ptr [bp-6h],1C70h          
1c05  wait                                    
1c06  fstcw   word ptr [bp-2h]                
1c09  nop                                     
1c0a  wait                                    
1c0b  mov     ax,[bp-2h]                      
1c0e  or      ax,38h                          
1c11  mov     [bp-4h],ax                      
1c14  wait                                    
1c15  fldcw   word ptr [bp-4h]                
1c18  les     si,[bp+8h]                      
1c1b  wait                                    
1c1c  fld     tword ptr es:[si+2h]            
1c20  push    di                              
1c21  pop     di                              
1c22  add     bx,54h                          
1c25  or      di,di                           
1c27  je      1C4Ch                           
1c29  mov     ax,di                           
1c2b  shr     di,1                            
1c2d  shr     di,1                            
1c2f  shr     di,1                            
1c31  push    di                              
1c32  and     ax,7h                           
1c35  je      1C21h                           
1c37  push    bx                              
1c38  shl     al,1                            
1c3a  shl     al,1                            
1c3c  mov     ah,al                           
1c3e  shl     al,1                            
1c40  add     al,ah                           
1c42  xor     ah,ah                           
1c44  add     bx,ax                           
1c46  jmp     word ptr [bp-6h]                
1c49  pop     bx                              
1c4a  jmp     1C21h                           
1c4c  cmp     word ptr [bp+4h],0h             
1c50  jne     1C68h                           
1c52  wait                                    
1c53  fclex                                   
1c55  wait                                    
1c56  fldcw   word ptr [bp-2h]                
1c59  les     si,[bp+8h]                      
1c5c  wait                                    
1c5d  fstp    tword ptr es:[si+2h]            
1c61  mov     word ptr es:[si],0h             
1c66  nop                                     
1c67  wait                                    
1c68  pop     di                              
1c69  pop     si                              
1c6a  mov     sp,bp                           
1c6c  pop     bp                              
1c6d  ret     8h                              
1c70  wait                                    
1c71  fld     tword ptr cs:[bx+2h]            
1c75  wait                                    
1c76  fmulp   st(1)                           
1c78  jmp     1C49h                           
1c7a  push    word ptr cs:[bx+0Ah]            
1c7e  push    word ptr cs:[bx+8h]             
1c82  push    word ptr cs:[bx+6h]             
1c86  push    word ptr cs:[bx+4h]             
1c8a  mov     cx,cs:[bx+2h]                   
1c8e  mov     ax,cs:[bx]                      
1c91  cmp     ax,8000h                        
1c94  adc     cx,-1h                          
1c97  push    cx                              
1c98  push    ax                              
1c99  mov     ax,sp                           
1c9b  push    word ptr [bp+0Ah]               
1c9e  push    word ptr [bp+8h]                
1ca1  push    ss                              
1ca2  push    ax                              
1ca3  call    1CB1h                           
1ca6  add     sp,0Ch                          
1ca9  jmp     1C49h                           
1cab  jmp     1E1Ah                           
1cae  jmp     1E05h                           

; ----- sub_1cb1 -----
1cb1  push    bp                              
1cb2  mov     bp,sp                           
1cb4  sub     sp,12h                          
1cb7  push    si                              
1cb8  push    di                              
1cb9  mov     cx,9h                           
1cbc  mov     ax,ss                           
1cbe  mov     es,ax                           
1cc0  lea     di,[bp-12h]                     
1cc3  xor     ax,ax                           
1cc5  rep     stosw                           
1cc7  lds     si,[bp+8h]                      
1cca  les     di,[bp+4h]                      
1ccd  mov     ax,[si+0Ah]                     
1cd0  mov     bx,es:[di+0Ah]                  
1cd4  mov     cx,ax                           
1cd6  xor     cx,bx                           
1cd8  and     cx,8000h                        
1cdc  mov     [bp-2h],cx                      
1cdf  mov     dx,7FFFh                        
1ce2  and     ax,dx                           
1ce4  cmp     ax,dx                           
1ce6  je      1CABh                           
1ce8  and     bx,dx                           
1cea  cmp     bx,dx                           
1cec  je      1CABh                           
1cee  mov     dx,ax                           
1cf0  add     dx,bx                           
1cf2  cmp     dx,0BFFDh                       
1cf6  ja      1CABh                           
1cf8  cmp     dx,3FBFh                        
1cfc  jbe     1CAEh                           
1cfe  or      ax,ax                           
1d00  jne     1D13h                           
1d02  inc     dx                              
1d03  mov     ax,[si]                         
1d05  or      ax,[si+2h]                      
1d08  or      ax,[si+4h]                      
1d0b  or      ax,[si+6h]                      
1d0e  or      ax,[si+8h]                      
1d11  je      1CAEh                           
1d13  or      bx,bx                           
1d15  jne     1D2Dh                           
1d17  inc     dx                              
1d18  mov     ax,es:[di]                      
1d1b  or      ax,es:[di+2h]                   
1d1f  or      ax,es:[di+4h]                   
1d23  or      ax,es:[di+6h]                   
1d27  or      ax,es:[di+8h]                   
1d2b  je      1CAEh                           
1d2d  sub     dx,3FFEh                        
1d31  mov     [si+0Ah],dx                     
1d34  add     di,8h                           
1d37  mov     cx,5h                           
1d3a  lea     bx,[bp-12h]                     
1d3d  push    cx                              
1d3e  push    si                              
1d3f  push    di                              
1d40  mov     ax,es:[di]                      
1d43  mul     word ptr [si]                   
1d45  add     ss:[bx],ax                      
1d48  adc     ss:[bx+2h],dx                   
1d4c  adc     word ptr ss:[bx+4h],0h          
1d51  add     si,2h                           
1d54  sub     di,2h                           
1d57  loop    1D40h                           
1d59  pop     di                              
1d5a  pop     si                              
1d5b  pop     cx                              
1d5c  add     bx,2h                           
1d5f  add     si,2h                           
1d62  add     cx,-1h                          
1d65  jne     1D3Dh                           
1d67  mov     si,[bp+8h]                      
1d6a  mov     dx,[bp-10h]                     
1d6d  mov     cx,[bp-0Eh]                     
1d70  mov     bx,[bp-0Ch]                     
1d73  mov     ax,[bp-0Ah]                     
1d76  mov     di,[bp-8h]                      
1d79  cmp     word ptr [si+0Ah],0h            
1d7d  jg      1D93h                           
1d7f  jmp     1DE0h                           
1d81  shl     word ptr [bp-12h],1             
1d84  rcl     dx,1                            
1d86  rcl     cx,1                            
1d88  rcl     bx,1                            
1d8a  rcl     ax,1                            
1d8c  rcl     di,1                            
1d8e  dec     word ptr [si+0Ah]               
1d91  je      1DE0h                           
1d93  or      di,di                           
1d95  jns     1D81h                           
1d97  cmp     word ptr [bp-12h],8000h         
1d9c  jb      1DBDh                           
1d9e  ja      1DA6h                           
1da0  test    dx,1h                           
1da4  je      1DBDh                           
1da6  add     dx,1h                           
1da9  adc     cx,0h                           
1dac  adc     bx,0h                           
1daf  adc     ax,0h                           
1db2  adc     di,0h                           
1db5  jae     1DBDh                           
1db7  mov     di,8000h                        
1dba  inc     word ptr [si+0Ah]               
1dbd  cmp     word ptr [si+0Ah],7FFFh         
1dc2  jae     1E1Ah                           
1dc4  mov     [si+8h],di                      
1dc7  mov     [si+6h],ax                      
1dca  mov     [si+4h],bx                      
1dcd  mov     [si+2h],cx                      
1dd0  mov     [si],dx                         
1dd2  mov     ax,[bp-2h]                      
1dd5  or      [si+0Ah],ax                     
1dd8  pop     di                              
1dd9  pop     si                              
1dda  mov     sp,bp                           
1ddc  pop     bp                              
1ddd  ret     8h                              
1de0  dec     word ptr [si+0Ah]               
1de3  shr     di,1                            
1de5  rcr     ax,1                            
1de7  rcr     bx,1                            
1de9  rcr     cx,1                            
1deb  rcr     dx,1                            
1ded  rcr     word ptr [bp-12h],1             
1df0  adc     word ptr [bp-4h],0h             
1df4  inc     word ptr [si+0Ah]               
1df7  jne     1DE3h                           
1df9  cmp     word ptr [bp-4h],0h             
1dfd  je      1D97h                           
1dff  or      word ptr [bp-12h],1h            
1e03  jmp     1D97h                           
1e05  xor     ax,ax                           
1e07  mov     [si+0Ah],ax                     
1e0a  mov     [si+8h],ax                      
1e0d  mov     [si+6h],ax                      
1e10  mov     [si+4h],ax                      
1e13  mov     [si+2h],ax                      
1e16  mov     [si],ax                         
1e18  jmp     1DD8h                           
1e1a  mov     ax,7FFFh                        
1e1d  or      ax,[bp-2h]                      
1e20  mov     [si+0Ah],ax                     
1e23  xor     ax,ax                           
1e25  mov     [si+8h],ax                      
1e28  mov     [si+6h],ax                      
1e2b  mov     [si+4h],ax                      
1e2e  mov     [si+2h],ax                      
1e31  mov     [si],ax                         
1e33  jmp     1DD8h                           
1e35  add     [bx+si],al                      

; ----- sub_1e36 -----
1e36  push    bp                              
1e37  mov     bp,sp                           
1e39  sub     sp,0Ch                          
1e3c  push    si                              
1e3d  push    di                              
1e3e  mov     ax,[bp+6h]                      
1e41  mov     [bp-0Ch],ax                     
1e44  les     si,[bp+8h]                      
1e47  xor     ax,ax                           
1e49  mov     di,ax                           
1e4b  mov     bx,ax                           
1e4d  mov     cx,ax                           
1e4f  mov     dx,ax                           
1e51  mov     dl,es:[si]                      
1e54  inc     si                              
1e55  jmp     1E91h                           
1e57  mov     [bp-2h],di                      
1e5a  mov     [bp-4h],ax                      
1e5d  mov     [bp-6h],bx                      
1e60  mov     [bp-8h],cx                      
1e63  mov     [bp-0Ah],dx                     
1e66  call    1EE4h                           
1e69  call    1EE4h                           
1e6c  add     dx,[bp-0Ah]                     
1e6f  adc     cx,[bp-8h]                      
1e72  adc     bx,[bp-6h]                      
1e75  adc     ax,[bp-4h]                      
1e78  adc     di,[bp-2h]                      
1e7b  call    1EE4h                           
1e7e  add     dl,es:[si]                      
1e81  inc     si                              
1e82  adc     dh,0h                           
1e85  adc     cx,0h                           
1e88  adc     bx,0h                           
1e8b  adc     ax,0h                           
1e8e  adc     di,0h                           
1e91  dec     word ptr [bp-0Ch]               
1e94  jne     1E57h                           
1e96  mov     si,404Eh                        
1e99  jmp     1EA8h                           
1e9b  mov     di,ax                           
1e9d  mov     ax,bx                           
1e9f  mov     bx,cx                           
1ea1  mov     cx,dx                           
1ea3  xor     dx,dx                           
1ea5  sub     si,10h                          
1ea8  or      di,di                           
1eaa  je      1E9Bh                           
1eac  js      1EBDh                           
1eae  shl     dx,1                            
1eb0  rcl     cx,1                            
1eb2  rcl     bx,1                            
1eb4  rcl     ax,1                            
1eb6  rcl     di,1                            
1eb8  dec     si                              
1eb9  or      di,di                           
1ebb  jns     1EAEh                           
1ebd  push    si                              
1ebe  mov     si,[bp+4h]                      
1ec1  pop     ss:[si+0Ah]                     
1ec5  mov     ss:[si+8h],di                   
1ec9  mov     ss:[si+6h],ax                   
1ecd  mov     ss:[si+4h],bx                   
1ed1  mov     ss:[si+2h],cx                   
1ed5  mov     ss:[si],dx                      
1ed8  mov     ax,si                           
1eda  mov     dx,ss                           
1edc  pop     di                              
1edd  pop     si                              
1ede  mov     sp,bp                           
1ee0  pop     bp                              
1ee1  ret     8h                              

; ----- sub_1ee4 -----
1ee4  shl     dx,1                            
1ee6  rcl     cx,1                            
1ee8  rcl     bx,1                            
1eea  rcl     ax,1                            
1eec  rcl     di,1                            
1eee  ret                                     
1eef  add     [bx+si],al                      

; ----- sub_1ef0 -----
1ef0  mov     ax,1h                           
1ef3  retf    0Ah                             
1ef6  mov     ax,1h                           
1ef9  retf    2h                              

; ===== DLLENTRYPOINT =====
1efc  push    bp                              
1efd  mov     bp,sp                           
1eff  push    1F06h                           ; segment seg1:0000
1f02  push    2790h                           
1f05  push    1F17h                           ; segment seg1:0000
1f08  push    2786h                           
1f0b  push    word ptr [bp+10h]               
1f0e  push    word ptr [bp+14h]               
1f11  push    word ptr [bp+12h]               
1f14  call far sub_0144                       
1f19  cmp     ax,1h                           
1f1c  sbb     ax,ax                           
1f1e  inc     ax                              
1f1f  leave                                   
1f20  retf    10h                             
1f23  add     [bx+si],al                      

; ===== SRV_TIMER_TICK =====
1f24  mov     ax,147h                         ; segment seg2:0000
1f27  push    bp                              
1f28  mov     bp,sp                           
1f2a  push    ds                              
1f2b  mov     ds,ax                           
1f2d  call far sub_2c30                       
1f32  pop     ds                              
1f33  leave                                   
1f34  retf                                    
1f35  add     [bx+si],al                      

; ===== SRV_SET_LANGUAGE_HANDLE =====
1f36  mov     ax,1F25h                        ; segment seg2:0000
1f39  push    bp                              
1f3a  mov     bp,sp                           
1f3c  push    ds                              
1f3d  mov     ds,ax                           
1f3f  push    word ptr [bp+6h]                
1f42  call far sub_2c36                       
1f47  pop     ds                              
1f48  leave                                   
1f49  retf    2h                              

; ===== SRV_SET_VALUE =====
1f4c  mov     ax,1F37h                        ; segment seg2:0000
1f4f  push    bp                              
1f50  mov     bp,sp                           
1f52  push    ds                              
1f53  mov     ds,ax                           
1f55  push    word ptr [bp+0Ah]               
1f58  push    word ptr [bp+8h]                
1f5b  push    word ptr [bp+6h]                
1f5e  call far sub_2c96                       
1f63  pop     ds                              
1f64  leave                                   
1f65  retf    6h                              

; ===== SRV_SET_STRING =====
1f68  mov     ax,1F4Dh                        ; segment seg2:0000
1f6b  push    bp                              
1f6c  mov     bp,sp                           
1f6e  push    ds                              
1f6f  mov     ds,ax                           
1f71  push    word ptr [bp+8h]                
1f74  push    word ptr [bp+6h]                
1f77  call far sub_2c46                       
1f7c  pop     ds                              
1f7d  leave                                   
1f7e  retf    4h                              
1f81  add     [bx+si],al                      

; ===== SRV_GET_VALUE =====
1f82  mov     ax,1F69h                        ; segment seg2:0000
1f85  push    bp                              
1f86  mov     bp,sp                           
1f88  push    ds                              
1f89  mov     ds,ax                           
1f8b  push    word ptr [bp+8h]                
1f8e  push    word ptr [bp+6h]                
1f91  call far sub_2cac                       
1f96  pop     ds                              
1f97  leave                                   
1f98  retf    4h                              
1f9b  add     [bx+si],al                      

; ===== SRV_GET_VALUE_EXTRA =====
1f9c  mov     ax,1F83h                        ; segment seg2:0000
1f9f  push    bp                              
1fa0  mov     bp,sp                           
1fa2  push    ds                              
1fa3  mov     ds,ax                           
1fa5  push    word ptr [bp+8h]                
1fa8  push    word ptr [bp+6h]                
1fab  call far sub_2d08                       
1fb0  pop     ds                              
1fb1  leave                                   
1fb2  retf    4h                              
1fb5  add     [bx+si],al                      

; ===== SRV_GET_COMMAND =====
1fb6  mov     ax,1F9Dh                        ; segment seg2:0000
1fb9  push    bp                              
1fba  mov     bp,sp                           
1fbc  push    ds                              
1fbd  mov     ds,ax                           
1fbf  push    word ptr [bp+8h]                
1fc2  push    word ptr [bp+6h]                
1fc5  call far sub_2e0e                       
1fca  pop     ds                              
1fcb  leave                                   
1fcc  retf    4h                              
1fcf  add     [bx+si],al                      

; ===== SRV_SET_STATE =====
1fd0  mov     ax,1FB7h                        ; segment seg2:0000
1fd3  push    bp                              
1fd4  mov     bp,sp                           
1fd6  push    ds                              
1fd7  mov     ds,ax                           
1fd9  push    word ptr [bp+8h]                
1fdc  push    word ptr [bp+6h]                
1fdf  call far sub_2eb4                       
1fe4  pop     ds                              
1fe5  leave                                   
1fe6  retf    4h                              
1fe9  add     [bx+si],al                      

; ===== SRV_GET_STATE =====
1fea  mov     ax,1FD1h                        ; segment seg2:0000
1fed  push    bp                              
1fee  mov     bp,sp                           
1ff0  push    ds                              
1ff1  mov     ds,ax                           
1ff3  push    word ptr [bp+8h]                
1ff6  push    word ptr [bp+6h]                
1ff9  call far sub_2f08                       
1ffe  pop     ds                              
1fff  leave                                   
2000  retf    4h                              
2003  add     [bx+si],al                      

; ===== SRV_SET_XY =====
2004  mov     ax,1FEBh                        ; segment seg2:0000
2007  push    bp                              
2008  mov     bp,sp                           
200a  push    ds                              
200b  mov     ds,ax                           
200d  push    word ptr [bp+0Ah]               
2010  push    word ptr [bp+8h]                
2013  push    word ptr [bp+6h]                
2016  call far sub_3532                       
201b  pop     ds                              
201c  leave                                   
201d  retf    6h                              

; ===== SRV_GET_XY =====
2020  mov     ax,2005h                        ; segment seg2:0000
2023  push    bp                              
2024  mov     bp,sp                           
2026  push    ds                              
2027  mov     ds,ax                           
2029  push    word ptr [bp+0Ah]               
202c  push    word ptr [bp+8h]                
202f  push    word ptr [bp+6h]                
2032  call far sub_3562                       
2037  pop     ds                              
2038  leave                                   
2039  retf    6h                              

; ===== SRV_NUDGE_VALUE =====
203c  mov     ax,2021h                        ; segment seg2:0000
203f  push    bp                              
2040  mov     bp,sp                           
2042  push    ds                              
2043  mov     ds,ax                           
2045  push    word ptr [bp+8h]                
2048  push    word ptr [bp+6h]                
204b  call far sub_35c2                       
2050  pop     ds                              
2051  leave                                   
2052  retf    4h                              
2055  add     [bx+si],al                      

; ===== SRV_EXECUTE_COMMAND =====
2056  mov     ax,203Dh                        ; segment seg2:0000
2059  push    bp                              
205a  mov     bp,sp                           
205c  push    ds                              
205d  mov     ds,ax                           
205f  push    word ptr [bp+6h]                
2062  call far sub_35d4                       
2067  pop     ds                              
2068  leave                                   
2069  retf    2h                              

; ===== SRV_INITIATE =====
206c  mov     ax,2057h                        ; segment seg2:0000
206f  push    bp                              
2070  mov     bp,sp                           
2072  push    ds                              
2073  mov     ds,ax                           
2075  push    word ptr [bp+0Ch]               
2078  push    word ptr [bp+0Ah]               
207b  push    word ptr [bp+8h]                
207e  push    word ptr [bp+6h]                
2081  call far sub_35e4                       
2086  pop     ds                              
2087  leave                                   
2088  retf    8h                              
208b  add     [bx+si],al                      

; ===== SRV_INITIALISE_CONTROLLER =====
208c  mov     ax,206Dh                        ; segment seg2:0000
208f  push    bp                              
2090  mov     bp,sp                           
2092  push    ds                              
2093  mov     ds,ax                           
2095  push    word ptr [bp+8h]                
2098  push    word ptr [bp+6h]                
209b  call far sub_360e                       
20a0  pop     ds                              
20a1  leave                                   
20a2  retf    4h                              
20a5  add     [bx+si],al                      

; ===== SRV_NOTIFY =====
20a6  mov     ax,208Dh                        ; segment seg2:0000
20a9  push    bp                              
20aa  mov     bp,sp                           
20ac  push    ds                              
20ad  mov     ds,ax                           
20af  push    word ptr [bp+8h]                
20b2  push    word ptr [bp+6h]                
20b5  call far sub_3620                       
20ba  pop     ds                              
20bb  leave                                   
20bc  retf    4h                              
20bf  add     [bx+si],al                      

; ===== SRV_HANDLE =====
20c0  mov     ax,20A7h                        ; segment seg2:0000
20c3  push    bp                              
20c4  mov     bp,sp                           
20c6  push    ds                              
20c7  mov     ds,ax                           
20c9  call far sub_3632                       
20ce  pop     ds                              
20cf  leave                                   
20d0  retf                                    
20d1  add     [bx+si],al                      

; ===== SRV_SHUTDOWN =====
20d2  mov     ax,20C1h                        ; segment seg2:0000
20d5  push    bp                              
20d6  mov     bp,sp                           
20d8  push    ds                              
20d9  mov     ds,ax                           
20db  push    word ptr [bp+8h]                
20de  push    word ptr [bp+6h]                
20e1  call far sub_3638                       
20e6  pop     ds                              
20e7  leave                                   
20e8  retf    4h                              
20eb  add     [bx+si],al                      

; ===== SRV_SUSPEND_CONTROLLER =====
20ec  mov     ax,20D3h                        ; segment seg2:0000
20ef  push    bp                              
20f0  mov     bp,sp                           
20f2  push    ds                              
20f3  mov     ds,ax                           
20f5  push    word ptr [bp+6h]                
20f8  call far sub_364a                       
20fd  pop     ds                              
20fe  leave                                   
20ff  retf    2h                              

; ===== SRV_KILL_CONTROLLER =====
2102  mov     ax,20EDh                        ; segment seg2:0000
2105  push    bp                              
2106  mov     bp,sp                           
2108  push    ds                              
2109  mov     ds,ax                           
210b  push    word ptr [bp+6h]                
210e  call far sub_365c                       
2113  pop     ds                              
2114  leave                                   
2115  retf    2h                              

; ===== SRV_LOAD_DLL =====
2118  mov     ax,2103h                        ; segment seg2:0000
211b  enter   100h,0h                         
211f  push    si                              
2120  push    ds                              
2121  mov     ds,ax                           
2123  mov     si,[bp+6h]                      
2126  push    si                              
2127  lea     ax,[bp-100h]                    
212b  push    ss                              
212c  push    ax                              
212d  push    0FFh                            
2130  call far USER.GLOBALGETATOMNAME         
2135  push    si                              
2136  call far USER.GLOBALDELETEATOM          
213b  lea     ax,[bp-100h]                    
213f  push    ss                              
2140  push    ax                              
2141  call far KERNEL.LOADLIBRARY             
2146  pop     ds                              
2147  pop     si                              
2148  leave                                   
2149  retf    2h                              

; ===== SRV_UNLOAD_DLL =====
214c  mov     ax,2119h                        ; segment seg2:0000
214f  push    bp                              
2150  mov     bp,sp                           
2152  push    ds                              
2153  mov     ds,ax                           
2155  push    word ptr [bp+6h]                
2158  call far KERNEL.FREELIBRARY             
215d  mov     ax,1h                           
2160  pop     ds                              
2161  leave                                   
2162  retf    2h                              
2165  add     [bx+si],al                      

; ===== SRV_LOAD_STRING =====
2166  mov     ax,214Dh                        ; segment seg2:0000
2169  enter   100h,0h                         
216d  push    ds                              
216e  mov     ds,ax                           
2170  push    word ptr [bp+8h]                
2173  push    word ptr [bp+6h]                
2176  lea     ax,[bp-100h]                    
217a  push    ss                              
217b  push    ax                              
217c  push    0FFh                            
217f  call far USER.LOADSTRING                
2184  lea     ax,[bp-100h]                    
2188  push    ss                              
2189  push    ax                              
218a  call far USER.GLOBALADDATOM             
218f  pop     ds                              
2190  leave                                   
2191  retf    4h                              

; ===== SRV_USE_ATOM =====
2194  mov     ax,2167h                        ; segment seg2:0000
2197  push    bp                              
2198  mov     bp,sp                           
219a  push    ds                              
219b  mov     ds,ax                           
219d  call far sub_366e                       
21a2  pop     ds                              
21a3  leave                                   
21a4  retf                                    
21a5  add     [bx+si],al                      

; ===== SRV_SET_FORMAT_MODIFIER =====
21a6  mov     ax,2195h                        ; segment seg2:0000
21a9  push    bp                              
21aa  mov     bp,sp                           
21ac  push    ds                              
21ad  mov     ds,ax                           
21af  push    word ptr [bp+8h]                
21b2  push    word ptr [bp+6h]                
21b5  call far sub_3674                       
21ba  mov     ax,1h                           
21bd  pop     ds                              
21be  leave                                   
21bf  retf    4h                              

; ===== SRV_SET_DEF_PRINTING_FACTOR =====
21c2  mov     ax,21A7h                        ; segment seg2:0000
21c5  push    bp                              
21c6  mov     bp,sp                           
21c8  push    ds                              
21c9  mov     ds,ax                           
21cb  push    word ptr [bp+8h]                
21ce  push    word ptr [bp+6h]                
21d1  call far sub_368a                       
21d6  mov     ax,1h                           
21d9  pop     ds                              
21da  leave                                   
21db  retf    4h                              

; ===== SRV_LOAD_VIS_TABLE =====
21de  mov     ax,21C3h                        ; segment seg2:0000
21e1  push    bp                              
21e2  mov     bp,sp                           
21e4  push    ds                              
21e5  mov     ds,ax                           
21e7  call far sub_36a0                       
21ec  mov     ax,1h                           
21ef  pop     ds                              
21f0  leave                                   
21f1  retf                                    

; ===== SRV_SAVE_VIS_TABLE =====
21f2  mov     ax,21DFh                        ; segment seg2:0000
21f5  push    bp                              
21f6  mov     bp,sp                           
21f8  push    ds                              
21f9  mov     ds,ax                           
21fb  call far sub_36ac                       
2200  mov     ax,1h                           
2203  pop     ds                              
2204  leave                                   
2205  retf                                    

; ===== SRV_GET_CONFIGURATION =====
2206  mov     ax,21F3h                        ; segment seg2:0000
2209  push    bp                              
220a  mov     bp,sp                           
220c  push    ds                              
220d  mov     ds,ax                           
220f  call far sub_36ae                       
2214  pop     ds                              
2215  leave                                   
2216  retf                                    
2217  add     [bx+si],al                      

; ===== SRV_SAVE_CONFIGURATION =====
2218  mov     ax,2207h                        ; segment seg2:0000
221b  push    bp                              
221c  mov     bp,sp                           
221e  push    ds                              
221f  mov     ds,ax                           
2221  call far sub_36ee                       
2226  pop     ds                              
2227  leave                                   
2228  retf                                    
2229  add     [bx+si],al                      

; ===== SRV_GET_MACHINE_TYPE =====
222a  mov     ax,2219h                        ; segment seg2:0000
222d  push    bp                              
222e  mov     bp,sp                           
2230  push    ds                              
2231  mov     ds,ax                           
2233  call far sub_373a                       
2238  pop     ds                              
2239  leave                                   
223a  retf                                    
223b  add     [bx+si],al                      

; ===== SRV_GET_LICENSES =====
223c  mov     ax,222Bh                        ; segment seg2:0000
223f  push    bp                              
2240  mov     bp,sp                           
2242  push    ds                              
2243  mov     ds,ax                           
2245  push    word ptr [bp+8h]                
2248  push    word ptr [bp+6h]                
224b  call far sub_370a                       
2250  mov     ax,1h                           
2253  pop     ds                              
2254  leave                                   
2255  retf    4h                              

; ===== SRV_SET_LICENSES =====
2258  mov     ax,223Dh                        ; segment seg2:0000
225b  push    bp                              
225c  mov     bp,sp                           
225e  push    ds                              
225f  mov     ds,ax                           
2261  push    word ptr [bp+8h]                
2264  push    word ptr [bp+6h]                
2267  call far sub_3722                       
226c  mov     ax,1h                           
226f  pop     ds                              
2270  leave                                   
2271  retf    4h                              

; ===== SRV_GET_SERIAL_NUMBER =====
2274  mov     ax,2259h                        ; segment seg2:0000
2277  enter   100h,0h                         
227b  push    si                              
227c  push    ds                              
227d  mov     ds,ax                           
227f  lea     ax,[bp-100h]                    
2283  push    ss                              
2284  push    ax                              
2285  call far sub_375e                       
228a  mov     si,ax                           
228c  or      si,ax                           
228e  je      22B6h                           
2290  push    si                              
2291  push    226Ah                           ; segment seg1:0000
2294  push    279Ah                           
2297  lea     ax,[bp-100h]                    
229b  push    ss                              
229c  push    ax                              
229d  call far USER._WSPRINTF                 ; "SRVM_Get_Serial_Number returned error code %d"
22a2  add     sp,0Ah                          
22a5  push    0h                              
22a7  lea     ax,[bp-100h]                    
22ab  push    ss                              
22ac  push    ax                              
22ad  call far M007.UIF_MESSAGE               
22b2  xor     ax,ax                           
22b4  jmp     22CEh                           
22b6  push    0h                              
22b8  lea     ax,[bp-100h]                    
22bc  push    ss                              
22bd  push    ax                              
22be  call far M007.UIF_MESSAGE               
22c3  lea     ax,[bp-100h]                    
22c7  push    ss                              
22c8  push    ax                              
22c9  call far USER.GLOBALADDATOM             
22ce  pop     ds                              
22cf  pop     si                              
22d0  leave                                   
22d1  retf                                    

; ===== SRV_EO_COLUMN_TYPE =====
22d2  mov     ax,2275h                        ; segment seg2:0000
22d5  push    bp                              
22d6  mov     bp,sp                           
22d8  push    ds                              
22d9  mov     ds,ax                           
22db  call far sub_393c                       
22e0  pop     ds                              
22e1  leave                                   
22e2  retf                                    
22e3  add     [bx+si],al                      

; ===== SRV_SET_USER_LEVEL =====
22e4  mov     ax,22D3h                        ; segment seg2:0000
22e7  push    bp                              
22e8  mov     bp,sp                           
22ea  push    ds                              
22eb  mov     ds,ax                           
22ed  push    word ptr [bp+6h]                
22f0  call far sub_3942                       
22f5  pop     ds                              
22f6  leave                                   
22f7  retf    2h                              

; ===== SRV_GET_STATE_STRING =====
22fa  mov     ax,22E5h                        ; segment seg2:0000
22fd  push    bp                              
22fe  mov     bp,sp                           
2300  push    ds                              
2301  mov     ds,ax                           
2303  push    word ptr [bp+8h]                
2306  push    word ptr [bp+6h]                
2309  call far sub_3180                       
230e  pop     ds                              
230f  leave                                   
2310  retf    4h                              
2313  add     [bx+si],al                      

; ===== SRV_GETSTATEVALUERESOURCEID =====
2314  mov     ax,22FBh                        ; segment seg2:0000
2317  push    bp                              
2318  mov     bp,sp                           
231a  push    ds                              
231b  mov     ds,ax                           
231d  push    word ptr [bp+8h]                
2320  push    word ptr [bp+6h]                
2323  call far sub_315a                       
2328  pop     ds                              
2329  leave                                   
232a  retf    4h                              
232d  add     [bx+si],al                      

; ===== SRV_GET_ADMIN_CONFIG =====
232e  mov     ax,2315h                        ; segment seg2:0000
2331  push    bp                              
2332  mov     bp,sp                           
2334  push    ds                              
2335  mov     ds,ax                           
2337  push    word ptr [bp+8h]                
233a  push    word ptr [bp+6h]                
233d  call far sub_3952                       
2342  pop     ds                              
2343  leave                                   
2344  retf    4h                              
2347  add     [bx+si],al                      

; ===== SRV_SET_ADMIN_CONFIG =====
2348  mov     ax,232Fh                        ; segment seg2:0000
234b  push    bp                              
234c  mov     bp,sp                           
234e  push    ds                              
234f  mov     ds,ax                           
2351  push    word ptr [bp+8h]                
2354  push    word ptr [bp+6h]                
2357  call far sub_3964                       
235c  pop     ds                              
235d  leave                                   
235e  retf    4h                              
2361  add     [bx+si],al                      

; ===== SRV_SET_BEAMSHIFT_DISTANCE =====
2362  mov     ax,2349h                        ; segment seg2:0000
2365  push    bp                              
2366  mov     bp,sp                           
2368  push    ds                              
2369  mov     ds,ax                           
236b  push    word ptr [bp+8h]                
236e  push    word ptr [bp+6h]                
2371  call far sub_3992                       
2376  pop     ds                              
2377  leave                                   
2378  retf    4h                              
237b  add     [bx+si],al                      

; ===== SRV_STAGE_GOTO =====
237c  mov     ax,2363h                        ; segment seg2:0000
237f  push    bp                              
2380  mov     bp,sp                           
2382  push    ds                              
2383  mov     ds,ax                           
2385  push    word ptr [bp+8h]                
2388  push    word ptr [bp+6h]                
238b  call far sub_39ce                       
2390  pop     ds                              
2391  leave                                   
2392  retf    4h                              
2395  add     [bx+si],al                      

; ===== SRV_GET_STAGE_POSITION =====
2396  mov     ax,237Dh                        ; segment seg2:0000
2399  push    bp                              
239a  mov     bp,sp                           
239c  push    ds                              
239d  mov     ds,ax                           
239f  push    word ptr [bp+8h]                
23a2  push    word ptr [bp+6h]                
23a5  call far sub_3a56                       
23aa  pop     ds                              
23ab  leave                                   
23ac  retf    4h                              
23af  add     [bx+si],al                      

; ===== SRV_GET_APERTURE_TABLE =====
23b0  mov     ax,2397h                        ; segment seg2:0000
23b3  push    bp                              
23b4  mov     bp,sp                           
23b6  push    ds                              
23b7  mov     ds,ax                           
23b9  push    word ptr [bp+8h]                
23bc  push    word ptr [bp+6h]                
23bf  call far sub_3b22                       
23c4  pop     ds                              
23c5  leave                                   
23c6  retf    4h                              
23c9  add     [bx+si],al                      

; ===== SRV_SET_APERTURE_TABLE =====
23ca  mov     ax,23B1h                        ; segment seg2:0000
23cd  push    bp                              
23ce  mov     bp,sp                           
23d0  push    ds                              
23d1  mov     ds,ax                           
23d3  push    word ptr [bp+8h]                
23d6  push    word ptr [bp+6h]                
23d9  call far sub_3cd0                       
23de  pop     ds                              
23df  leave                                   
23e0  retf    4h                              
23e3  add     [bx+si],al                      

; ===== SRV_SET_LUT_POINT =====
23e4  mov     ax,23CBh                        ; segment seg2:0000
23e7  push    bp                              
23e8  mov     bp,sp                           
23ea  push    ds                              
23eb  mov     ds,ax                           
23ed  push    word ptr [bp+8h]                
23f0  push    word ptr [bp+6h]                
23f3  call far sub_3d84                       
23f8  pop     ds                              
23f9  leave                                   
23fa  retf    4h                              
23fd  add     [bx+si],al                      

; ===== SRV_SET_LUT_RGB =====
23fe  mov     ax,23E5h                        ; segment seg2:0000
2401  push    bp                              
2402  mov     bp,sp                           
2404  push    ds                              
2405  mov     ds,ax                           
2407  push    word ptr [bp+8h]                
240a  push    word ptr [bp+6h]                
240d  call far sub_3e68                       
2412  pop     ds                              
2413  leave                                   
2414  retf    4h                              
2417  add     [bx+si],al                      

; ===== SRV_SET_LUT_COLOR =====
2418  mov     ax,23FFh                        ; segment seg2:0000
241b  push    bp                              
241c  mov     bp,sp                           
241e  push    ds                              
241f  mov     ds,ax                           
2421  push    word ptr [bp+8h]                
2424  push    word ptr [bp+6h]                
2427  call far sub_3e90                       
242c  pop     ds                              
242d  leave                                   
242e  retf    4h                              
2431  add     [bx+si],al                      

; ===== SRV_SET_LUT_BC =====
2432  mov     ax,2419h                        ; segment seg2:0000
2435  push    bp                              
2436  mov     bp,sp                           
2438  push    ds                              
2439  mov     ds,ax                           
243b  push    word ptr [bp+8h]                
243e  push    word ptr [bp+6h]                
2441  call far sub_3eec                       
2446  pop     ds                              
2447  leave                                   
2448  retf    4h                              
244b  add     [bx+si],al                      

; ===== SRV_SET_LUT_INVERSE =====
244c  mov     ax,2433h                        ; segment seg2:0000
244f  push    bp                              
2450  mov     bp,sp                           
2452  push    ds                              
2453  mov     ds,ax                           
2455  push    word ptr [bp+8h]                
2458  push    word ptr [bp+6h]                
245b  call far sub_3f14                       
2460  pop     ds                              
2461  leave                                   
2462  retf    4h                              
2465  add     [bx+si],al                      

; ===== SRV_SET_LUT_LINEAR =====
2466  mov     ax,244Dh                        ; segment seg2:0000
2469  push    bp                              
246a  mov     bp,sp                           
246c  push    ds                              
246d  mov     ds,ax                           
246f  push    word ptr [bp+8h]                
2472  push    word ptr [bp+6h]                
2475  call far sub_3f3c                       
247a  pop     ds                              
247b  leave                                   
247c  retf    4h                              
247f  add     [bx+si],al                      

; ===== SRV_SET_LUT_GAMMA =====
2480  mov     ax,2467h                        ; segment seg2:0000
2483  push    bp                              
2484  mov     bp,sp                           
2486  push    ds                              
2487  mov     ds,ax                           
2489  push    word ptr [bp+8h]                
248c  push    word ptr [bp+6h]                
248f  call far sub_3f64                       
2494  pop     ds                              
2495  leave                                   
2496  retf    4h                              
2499  add     [bx+si],al                      

; ===== SRV_DRAW_GREY_WEDGE =====
249a  mov     ax,2481h                        ; segment seg2:0000
249d  push    bp                              
249e  mov     bp,sp                           
24a0  push    ds                              
24a1  mov     ds,ax                           
24a3  push    word ptr [bp+8h]                
24a6  push    word ptr [bp+6h]                
24a9  call far sub_3f84                       
24ae  pop     ds                              
24af  leave                                   
24b0  retf    4h                              
24b3  add     [bx+si],al                      

; ===== SRV_GET_IMAGE_PIXEL =====
24b4  mov     ax,249Bh                        ; segment seg2:0000
24b7  push    bp                              
24b8  mov     bp,sp                           
24ba  push    ds                              
24bb  mov     ds,ax                           
24bd  push    word ptr [bp+8h]                
24c0  push    word ptr [bp+6h]                
24c3  call far sub_3f96                       
24c8  pop     ds                              
24c9  leave                                   
24ca  retf    4h                              
24cd  add     [di-75h],dl                     
24d0  in      al,dx                           
24d1  push    word ptr [bp+8h]                
24d4  push    word ptr [bp+6h]                
24d7  call far sub_3fb6                       
24dc  leave                                   
24dd  retf    4h                              

; ===== SRV_LUT_LOAD =====
24e0  mov     ax,24B5h                        ; segment seg2:0000
24e3  push    bp                              
24e4  mov     bp,sp                           
24e6  push    ds                              
24e7  mov     ds,ax                           
24e9  push    word ptr [bp+8h]                
24ec  push    word ptr [bp+6h]                
24ef  call far sub_3fd6                       
24f4  pop     ds                              
24f5  leave                                   
24f6  retf    4h                              
24f9  add     [bx+si],al                      

; ===== SRV_LUT_READ =====
24fa  mov     ax,24E1h                        ; segment seg2:0000
24fd  push    bp                              
24fe  mov     bp,sp                           
2500  push    ds                              
2501  mov     ds,ax                           
2503  push    word ptr [bp+8h]                
2506  push    word ptr [bp+6h]                
2509  call far sub_3ffa                       
250e  pop     ds                              
250f  leave                                   
2510  retf    4h                              
2513  add     [bx+si],al                      

; ===== SRV_READ_COLOR =====
2514  mov     ax,24FBh                        ; segment seg2:0000
2517  push    bp                              
2518  mov     bp,sp                           
251a  push    ds                              
251b  mov     ds,ax                           
251d  push    word ptr [bp+8h]                
2520  push    word ptr [bp+6h]                
2523  call far sub_401e                       
2528  pop     ds                              
2529  leave                                   
252a  retf    4h                              
252d  add     [bx+si],al                      

; ===== SRV_LUT_FILL =====
252e  mov     ax,2515h                        ; segment seg2:0000
2531  push    bp                              
2532  mov     bp,sp                           
2534  push    ds                              
2535  mov     ds,ax                           
2537  push    word ptr [bp+8h]                
253a  push    word ptr [bp+6h]                
253d  call far sub_4086                       
2542  pop     ds                              
2543  leave                                   
2544  retf    4h                              
2547  add     [bx+si],al                      

; ===== SRV_LUT_QLIN =====
2548  mov     ax,252Fh                        ; segment seg2:0000
254b  push    bp                              
254c  mov     bp,sp                           
254e  push    ds                              
254f  mov     ds,ax                           
2551  push    word ptr [bp+8h]                
2554  push    word ptr [bp+6h]                
2557  call far sub_40b2                       
255c  pop     ds                              
255d  leave                                   
255e  retf    4h                              
2561  add     [bx+si],al                      

; ===== SRV_LUT_QINV =====
2562  mov     ax,2549h                        ; segment seg2:0000
2565  push    bp                              
2566  mov     bp,sp                           
2568  push    ds                              
2569  mov     ds,ax                           
256b  push    word ptr [bp+8h]                
256e  push    word ptr [bp+6h]                
2571  call far sub_40c4                       
2576  pop     ds                              
2577  leave                                   
2578  retf    4h                              
257b  add     [bx+si],al                      

; ===== SRV_LUT_SAVE =====
257c  mov     ax,2563h                        ; segment seg2:0000
257f  push    bp                              
2580  mov     bp,sp                           
2582  push    ds                              
2583  mov     ds,ax                           
2585  push    word ptr [bp+8h]                
2588  push    word ptr [bp+6h]                
258b  call far sub_40d6                       
2590  pop     ds                              
2591  leave                                   
2592  retf    4h                              
2595  add     [bx+si],al                      

; ===== SRV_LUT_RESTORE =====
2596  mov     ax,257Dh                        ; segment seg2:0000
2599  push    bp                              
259a  mov     bp,sp                           
259c  push    ds                              
259d  mov     ds,ax                           
259f  push    word ptr [bp+8h]                
25a2  push    word ptr [bp+6h]                
25a5  call far sub_40f2                       
25aa  pop     ds                              
25ab  leave                                   
25ac  retf    4h                              
25af  add     [bx+si],al                      

; ===== SRV_READ_COLOR_LUT =====
25b0  mov     ax,2597h                        ; segment seg2:0000
25b3  push    bp                              
25b4  mov     bp,sp                           
25b6  push    ds                              
25b7  mov     ds,ax                           
25b9  push    word ptr [bp+8h]                
25bc  push    word ptr [bp+6h]                
25bf  call far sub_410e                       
25c4  pop     ds                              
25c5  leave                                   
25c6  retf    4h                              
25c9  add     [bx+si],al                      

; ===== SRV_POINT_AS_ZONE =====
25ca  mov     ax,25B1h                        ; segment seg2:0000
25cd  push    bp                              
25ce  mov     bp,sp                           
25d0  push    ds                              
25d1  mov     ds,ax                           
25d3  push    word ptr [bp+0Ah]               
25d6  push    word ptr [bp+8h]                
25d9  push    word ptr [bp+6h]                
25dc  call far sub_2c1a                       
25e1  pop     ds                              
25e2  leave                                   
25e3  retf    6h                              

; ===== SRV_IMPORT_EXPORT =====
25e6  mov     ax,25CBh                        ; segment seg2:0000
25e9  push    bp                              
25ea  mov     bp,sp                           
25ec  push    ds                              
25ed  mov     ds,ax                           
25ef  push    word ptr [bp+8h]                
25f2  push    word ptr [bp+6h]                
25f5  call far sub_2b46                       
25fa  pop     ds                              
25fb  leave                                   
25fc  retf    4h                              
25ff  add     [bx+si],al                      

; ===== SRV_GET_COVARIANCE =====
2600  mov     ax,25E7h                        ; segment seg2:0000
2603  push    bp                              
2604  mov     bp,sp                           
2606  push    ds                              
2607  mov     ds,ax                           
2609  push    word ptr [bp+8h]                
260c  push    word ptr [bp+6h]                
260f  call far sub_41c0                       
2614  pop     ds                              
2615  leave                                   
2616  retf    4h                              
2619  add     [bx+si],al                      

; ===== SRV_MISC_FUNCTION =====
261a  mov     ax,2601h                        ; segment seg2:0000
261d  push    bp                              
261e  mov     bp,sp                           
2620  push    ds                              
2621  mov     ds,ax                           
2623  push    word ptr [bp+6h]                
2626  call far sub_420c                       
262b  pop     ds                              
262c  leave                                   
262d  retf    2h                              

; ===== SRV_GET_HISTO =====
2630  mov     ax,261Bh                        ; segment seg2:0000
2633  push    bp                              
2634  mov     bp,sp                           
2636  push    ds                              
2637  mov     ds,ax                           
2639  push    word ptr [bp+8h]                
263c  push    word ptr [bp+6h]                
263f  call far sub_4282                       
2644  pop     ds                              
2645  leave                                   
2646  retf    4h                              
2649  add     [bx+si],al                      

; ===== SRV_GETLINEDATA =====
264a  mov     ax,2631h                        ; segment seg2:0000
264d  push    bp                              
264e  mov     bp,sp                           
2650  push    ds                              
2651  mov     ds,ax                           
2653  push    word ptr [bp+8h]                
2656  push    word ptr [bp+6h]                
2659  call far sub_4294                       
265e  pop     ds                              
265f  leave                                   
2660  retf    4h                              
2663  add     [bx+si],al                      

; ===== SRV_GET_COLOUR_PIXEL =====
2664  mov     ax,264Bh                        ; segment seg2:0000
2667  push    bp                              
2668  mov     bp,sp                           
266a  push    ds                              
266b  mov     ds,ax                           
266d  push    word ptr [bp+8h]                
2670  push    word ptr [bp+6h]                
2673  call far sub_4182                       
2678  pop     ds                              
2679  leave                                   
267a  retf    4h                              
267d  add     [bx+si],al                      

; ===== SRV_DO_FEATURESCAN =====
267e  mov     ax,2665h                        ; segment seg2:0000
2681  push    bp                              
2682  mov     bp,sp                           
2684  push    ds                              
2685  mov     ds,ax                           
2687  push    word ptr [bp+10h]               
268a  push    word ptr [bp+0Eh]               
268d  push    word ptr [bp+0Ch]               
2690  push    word ptr [bp+0Ah]               
2693  push    word ptr [bp+8h]                
2696  push    word ptr [bp+6h]                
2699  call far sub_42d2                       
269e  pop     ds                              
269f  leave                                   
26a0  retf    0Ch                             
26a3  add     [bx+si],al                      

; ===== SRV_STOP_FEATURESCAN =====
26a4  mov     ax,267Fh                        ; segment seg2:0000
26a7  push    bp                              
26a8  mov     bp,sp                           
26aa  push    ds                              
26ab  mov     ds,ax                           
26ad  call far sub_42f0                       
26b2  pop     ds                              
26b3  leave                                   
26b4  retf                                    
26b5  add     [bx+si],al                      

; ===== SRV_SETKNOB =====
26b6  mov     ax,26A5h                        ; segment seg2:0000
26b9  push    bp                              
26ba  mov     bp,sp                           
26bc  push    ds                              
26bd  mov     ds,ax                           
26bf  push    word ptr [bp+8h]                
26c2  push    word ptr [bp+6h]                
26c5  call far sub_42f6                       
26ca  pop     ds                              
26cb  leave                                   
26cc  retf    4h                              
26cf  add     [bx+si],al                      

; ===== SRV_GET_COLUMN_CAL_DATA =====
26d0  mov     ax,26B7h                        ; segment seg2:0000
26d3  push    bp                              
26d4  mov     bp,sp                           
26d6  push    ds                              
26d7  mov     ds,ax                           
26d9  push    word ptr [bp+8h]                
26dc  push    word ptr [bp+6h]                
26df  call far sub_4308                       
26e4  pop     ds                              
26e5  leave                                   
26e6  retf    4h                              
26e9  add     [bx+si],al                      

; ===== SRV_UPDATE_HPSEM_PANEL =====
26ea  mov     ax,26D1h                        ; segment seg2:0000
26ed  push    bp                              
26ee  mov     bp,sp                           
26f0  push    ds                              
26f1  mov     ds,ax                           
26f3  push    word ptr [bp+8h]                
26f6  push    word ptr [bp+6h]                
26f9  call far sub_431a                       
26fe  pop     ds                              
26ff  leave                                   
2700  retf    4h                              
2703  add     [bx+si],al                      

; ===== SRV_HPSEM_FUNCTION =====
2704  mov     ax,26EBh                        ; segment seg2:0000
2707  push    bp                              
2708  mov     bp,sp                           
270a  push    ds                              
270b  mov     ds,ax                           
270d  push    word ptr [bp+0Ah]               
2710  push    word ptr [bp+8h]                
2713  push    word ptr [bp+6h]                
2716  call far sub_432c                       
271b  pop     ds                              
271c  leave                                   
271d  retf    6h                              

; ===== SRV_SET_STAGE_POSITION =====
2720  mov     ax,2705h                        ; segment seg2:0000
2723  push    bp                              
2724  mov     bp,sp                           
2726  push    ds                              
2727  mov     ds,ax                           
2729  push    word ptr [bp+8h]                
272c  push    word ptr [bp+6h]                
272f  call far sub_3a12                       
2734  pop     ds                              
2735  leave                                   
2736  retf    4h                              
2739  add     [bx+si],al                      

; ===== SRV_DEFINE_CUSTOM_STAGE =====
273a  mov     ax,2721h                        ; segment seg2:0000
273d  push    bp                              
273e  mov     bp,sp                           
2740  push    ds                              
2741  mov     ds,ax                           
2743  push    word ptr [bp+8h]                
2746  push    word ptr [bp+6h]                
2749  call far sub_43cc                       
274e  pop     ds                              
274f  leave                                   
2750  retf    4h                              
2753  add     [bx+si],al                      

; ===== SRV_CUSTOM_STAGE_NAME =====
2754  mov     ax,273Bh                        ; segment seg2:0000
2757  push    bp                              
2758  mov     bp,sp                           
275a  push    ds                              
275b  mov     ds,ax                           
275d  push    word ptr [bp+6h]                
2760  call far sub_43f8                       
2765  pop     ds                              
2766  leave                                   
2767  retf    2h                              

; ===== SRV_AXIS_HIGH_RANGE =====
276a  mov     ax,2755h                        ; segment seg2:0000
276d  push    bp                              
276e  mov     bp,sp                           
2770  push    ds                              
2771  mov     ds,ax                           
2773  push    word ptr [bp+0Ah]               
2776  push    word ptr [bp+8h]                
2779  push    word ptr [bp+6h]                
277c  call far sub_4428                       
2781  pop     ds                              
2782  leave                                   
2783  retf    6h                              
2786  push    bx                              
2787  push    dx                              
2788  push    si                              
2789  xor     si,[bp+si]                      
278b  inc     sp                              
278d  dec     sp                              
278e  dec     sp                              
278f  add     [bp+di+52h],dl                  
2792  push    si                              
2793  xor     [442Eh],si                      
2797  dec     sp                              
2798  dec     sp                              
2799  add     [bp+di+52h],dl                  
279c  push    si                              
279d  dec     bp                              
279e  pop     di                              
279f  inc     di                              
27a0  je      2802h                           
27a3  push    bx                              
27a4  jb      2810h                           
27a7  popa                                    
27a8  insb                                    
27a9  pop     di                              
27aa  dec     si                              
27ab  jne     281Ah                           
27ad  bound   sp,[di+72h]                     
27b0  and     [bp+si+65h],dh                  
27b3  je      282Ah                           
27b5  jb      2825h                           
27b7  and     fs:[di+72h],ah                  
27bc  jb      282Dh                           
27be  jb      27E0h                           
27c0  arpl    [bx+64h],bp                     
27c3  and     gs:[di],ah                      
27c6  add     fs:[bx+si],al                   

; ----- sub_27c8 -----
27c8  push    bp                              
27c9  mov     bp,sp                           
27cb  push    si                              
27cc  mov     si,[bp+6h]                      
27cf  or      si,si                           
27d1  jne     27D9h                           
27d3  mov     ax,1h                           
27d6  pop     si                              
27d7  leave                                   
27d8  retf                                    
27d9  push    53h                             
27db  call far M007.M007_GETSTATE             ; DP_STAGE_TYPE
27e0  dec     ax                              
27e1  dec     ax                              
27e2  cmp     ax,5h                           
27e5  ja      2816h                           
27e7  add     ax,ax                           
27e9  xchg    ax,bx                           
27ea  jmp     word ptr cs:[bx+27EFh]          
27ef  shl     word ptr [bx],cl                
27f1  sti                                     
27f2  daa                                     
27f3  sti                                     
27f4  daa                                     
27f5  shl     word ptr [bx],cl                
27f7  sti                                     
27f8  daa                                     
27f9  add     ch,[bx+si]                      
27fb  cmp     si,2h                           
27fe  jne     2816h                           
2800  jmp     27D3h                           
2802  cmp     word ptr [3Ah],0h               
2807  je      2816h                           
2809  push    159h                            
280c  call far M007.M007_GETSTATE             ; DP_CARTESIAN_STAGE
2811  dec     ax                              
2812  jne     27FBh                           
2814  jmp     27D3h                           
2816  xor     ax,ax                           
2818  pop     si                              
2819  leave                                   
281a  retf                                    
281b  add     [bx+si],al                      

; ----- sub_281c -----
281c  push    bp                              
281d  mov     bp,sp                           
281f  push    si                              
2820  push    11Bh                            
2823  call far M007.M007_GETSTATE             ; DP_SEM
2828  mov     si,ax                           
282a  mov     ax,[bp+6h]                      
282d  cmp     ax,7h                           
2830  jbe     2835h                           
2832  jmp     28C1h                           
2835  add     ax,ax                           
2837  xchg    ax,bx                           
2838  jmp     word ptr cs:[bx+283Dh]          
283d  pop     cx                              
283e  sub     [di+28h],cl                     
2841  jae     286Bh                           
2843  jns     286Dh                           
2845  mov     [bx+si],gs                      
2847  jns     2871h                           
2849  jns     2873h                           
284b  mov     [8B28h],al                      
284e  mov     byte ptr [di],0Fh               
2851  add     [si+5h],bh                      
2854  jo      2859h                           
2856  dec     ax                              
2857  jle     2873h                           
2859  push    8Ch                             
285c  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2861  or      ax,ax                           
2863  jl      2867h                           
2865  jno     2869h                           
2867  jmp     28C1h                           
2869  dec     ax                              
286a  jle     2873h                           
286c  dec     ax                              
286d  dec     ax                              
286e  jl      28C1h                           
2870  dec     ax                              
2871  jg      28C1h                           
2873  mov     ax,1h                           
2876  pop     si                              
2877  leave                                   
2878  retf                                    
2879  push    8Ch                             
287c  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2881  sub     ax,6h                           
2884  je      2873h                           
2886  dec     ax                              
2887  dec     ax                              
2888  je      2873h                           
288a  jmp     28C1h                           
288c  push    8Ch                             
288f  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2894  sub     ax,5h                           
2897  jl      28C1h                           
2899  jo      28C1h                           
289b  sub     ax,3h                           
289e  jle     2873h                           
28a0  jmp     28C1h                           
28a2  push    8Ch                             
28a5  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
28aa  or      ax,ax                           
28ac  jl      28BAh                           
28ae  jo      28BAh                           
28b0  dec     ax                              
28b1  jle     28C1h                           
28b3  dec     ax                              
28b4  dec     ax                              
28b5  jl      28BAh                           
28b7  dec     ax                              
28b8  jle     28C1h                           
28ba  cmp     word ptr [3Ah],0h               
28bf  jne     2873h                           
28c1  xor     ax,ax                           
28c3  pop     si                              
28c4  leave                                   
28c5  retf                                    

; ----- sub_28c6 -----
28c6  enter   80h,0h                          
28ca  push    si                              
28cb  push    6614h                           
28ce  push    40h                             
28d0  lea     ax,[bp-80h]                     
28d3  push    ss                              
28d4  push    ax                              
28d5  call far M007.UIF_READ_LICENCES         
28da  or      ax,ax                           
28dc  jne     28EFh                           
28de  mov     si,[bp+6h]                      
28e1  add     si,si                           
28e3  cmp     word ptr [bp+si-80h],1h         
28e7  jne     28EFh                           
28e9  mov     ax,1h                           
28ec  pop     si                              
28ed  leave                                   
28ee  retf                                    
28ef  xor     ax,ax                           
28f1  pop     si                              
28f2  leave                                   
28f3  retf                                    

; ----- sub_28f4 -----
28f4  mov     ax,[3164h]                      
28f7  cmp     ax,18h                          
28fa  ja      2936h                           
28fc  add     ax,ax                           
28fe  xchg    ax,bx                           
28ff  jmp     word ptr cs:[bx+2904h]          
2904  inc     sp                              
2905  sub     [bx+di],di                      
2907  sub     [si+29h],ax                     
290a  pop     si                              
290b  sub     [bx+si+29h],cx                  
290e  pop     si                              
290f  sub     [bp+29h],bx                     
2912  pop     dx                              
2913  sub     [bp+si+29h],bx                  
2916  pop     dx                              
2917  sub     [bx+si+29h],cx                  
291a  inc     sp                              
291b  sub     [bx+si+29h],cx                  
291e  inc     sp                              
291f  sub     [bx+si+29h],cx                  
2922  inc     sp                              
2923  sub     [bx+si+29h],cx                  
2926  inc     sp                              
2927  sub     [bx+si+29h],cx                  
292a  pop     dx                              
292b  sub     [si+29h],ax                     
292e  dec     ax                              
292f  sub     [bp+si+29h],bx                  
2932  pop     dx                              
2933  sub     [bp+si+29h],bx                  
2936  xor     ax,ax                           
2938  retf                                    
2939  push    0CCh                            
293c  call far M007.M007_GETSTATE             ; DP_EBBU
2941  dec     ax                              
2942  jne     295Eh                           
2944  mov     ax,3h                           
2947  retf                                    
2948  push    10Ah                            
294b  call far M007.M007_GETSTATE             ; DP_FIXED_APERTURE
2950  cmp     ax,1h                           
2953  sbb     ax,ax                           
2955  and     ax,1h                           
2958  inc     ax                              
2959  retf                                    
295a  mov     ax,6h                           
295d  retf                                    
295e  mov     ax,4h                           
2961  retf                                    

; ----- sub_2962 -----
2962  mov     ax,[3164h]                      
2965  sub     ax,7h                           
2968  jl      2979h                           
296a  jo      2979h                           
296c  dec     ax                              
296d  dec     ax                              
296e  jle     297Dh                           
2970  dec     ax                              
2971  dec     ax                              
2972  jl      2979h                           
2974  sub     ax,0Dh                          
2977  jle     297Dh                           
2979  mov     ax,4h                           
297c  retf                                    
297d  mov     ax,2h                           
2980  retf                                    
2981  add     [bx+si],al                      

; ----- sub_2982 -----
2982  push    bp                              
2983  mov     bp,sp                           
2985  mov     ax,[3164h]                      
2988  dec     ax                              
2989  je      2995h                           
298b  cmp     word ptr [bp+6h],1h             
298f  jne     2995h                           
2991  xor     ax,ax                           
2993  leave                                   
2994  retf                                    
2995  mov     ax,1h                           
2998  leave                                   
2999  retf                                    

; ----- sub_299a -----
299a  push    bp                              
299b  mov     bp,sp                           
299d  push    8Ch                             
29a0  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
29a5  sub     ax,5h                           
29a8  jl      29B1h                           
29aa  jo      29B1h                           
29ac  sub     ax,3h                           
29af  jle     29C5h                           
29b1  mov     bx,[bp+6h]                      
29b4  cmp     bx,4h                           
29b7  je      29DCh                           
29b9  cmp     bx,5h                           
29bc  je      29DCh                           
29be  cmp     bx,6h                           
29c1  jne     29D7h                           
29c3  jmp     29DCh                           
29c5  mov     bx,[bp+6h]                      
29c8  cmp     bx,1h                           
29cb  je      29DCh                           
29cd  cmp     bx,2h                           
29d0  je      29DCh                           
29d2  cmp     bx,3h                           
29d5  je      29DCh                           
29d7  mov     ax,1h                           
29da  leave                                   
29db  retf                                    
29dc  xor     ax,ax                           
29de  leave                                   
29df  retf                                    

; ----- sub_29e0 -----
29e0  push    bp                              
29e1  mov     bp,sp                           
29e3  push    8Ch                             
29e6  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
29eb  cmp     ax,8h                           
29ee  ja      2A0Ah                           
29f0  add     ax,ax                           
29f2  xchg    ax,bx                           
29f3  jmp     word ptr cs:[bx+29F8h]          
29f8  push    cs                              
29f9  sub     bl,[262Ah]                      
29fd  sub     bl,[0E2Ah]                      
2a01  sub     ch,[si]                         
2a03  sub     dl,[bx+di+2Ah]                  
2a06  sub     al,2Ah                          
2a08  push    cx                              
2a09  sub     dh,[bp+di]                      
2a0b  ror     cl,0CBh                         
2a0e  mov     ax,[bp+6h]                      
2a11  or      ax,ax                           
2a13  jl      2A0Ah                           
2a15  jo      2A0Ah                           
2a17  sub     ax,3h                           
2a1a  jle     2A5Dh                           
2a1c  jmp     2A0Ah                           
2a1e  cmp     word ptr [bp+6h],0h             
2a22  je      2A5Dh                           
2a24  jmp     2A0Ah                           
2a26  cmp     word ptr [bp+6h],4h             
2a2a  jmp     2A22h                           
2a2c  mov     ax,[bp+6h]                      
2a2f  or      ax,ax                           
2a31  je      2A42h                           
2a33  dec     ax                              
2a34  dec     ax                              
2a35  je      2A5Dh                           
2a37  sub     ax,3h                           
2a3a  jl      2A0Ah                           
2a3c  jo      2A0Ah                           
2a3e  dec     ax                              
2a3f  dec     ax                              
2a40  jmp     2A1Ah                           
2a42  push    144h                            
2a45  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2a4a  cmp     ax,2h                           
2a4d  jne     2A5Dh                           
2a4f  jmp     2A0Ah                           
2a51  mov     bx,[bp+6h]                      
2a54  or      bx,bx                           
2a56  je      2A5Dh                           
2a58  cmp     bx,4h                           
2a5b  jmp     2A22h                           
2a5d  mov     ax,1h                           
2a60  leave                                   
2a61  retf                                    

; ----- sub_2a62 -----
2a62  push    bp                              
2a63  mov     bp,sp                           
2a65  push    di                              
2a66  push    si                              
2a67  xor     bx,bx                           
2a69  mov     byte ptr [bx+3166h],0h          
2a6e  inc     bx                              
2a6f  cmp     bx,11h                          
2a72  jl      2A69h                           
2a74  push    ds                              
2a75  push    30B0h                           
2a78  push    2AFFh                           ; segment seg1:0000
2a7b  push    443Eh                           
2a7e  call far KERNEL.LSTRCPY                 ; "----"
2a83  push    149h                            
2a86  push    0h                              
2a88  push    0h                              
2a8a  call far M007.SETSTATE                  
2a8f  xor     si,si                           
2a91  mov     di,[bp+6h]                      
2a94  jmp     2B19h                           
2a97  imul    ax,si,12h                       
2a9a  add     ax,di                           
2a9c  push    word ptr [bp+8h]                
2a9f  push    ax                              
2aa0  call far KERNEL.LSTRLEN                 
2aa5  or      ax,ax                           
2aa7  jle     2AC1h                           
2aa9  imul    ax,si,0Ah                       
2aac  add     ax,30BAh                        
2aaf  push    ds                              
2ab0  push    ax                              
2ab1  imul    ax,si,12h                       
2ab4  add     ax,di                           
2ab6  push    word ptr [bp+8h]                
2ab9  push    ax                              
2aba  call far KERNEL.LSTRCPY                 
2abf  jmp     2AD6h                           
2ac1  push    66h                             
2ac3  lea     ax,[si+1h]                      
2ac6  push    ax                              
2ac7  imul    ax,si,0Ah                       
2aca  add     ax,30BAh                        
2acd  push    ds                              
2ace  push    ax                              
2acf  push    0Ah                             
2ad1  call far M070.STATE_VALUE_STRING        
2ad6  mov     es,[bp+8h]                      
2ad9  imul    bx,si,12h                       
2adc  add     bx,di                           
2ade  cmp     byte ptr es:[bx+0Eh],0h         
2ae3  je      2B18h                           
2ae5  lea     ax,[si+1h]                      
2ae8  imul    bx,si,12h                       
2aeb  add     bx,di                           
2aed  mov     cx,ax                           
2aef  mov     al,es:[bx+0Eh]                  
2af3  cbw                                     
2af4  mov     dx,bx                           
2af6  mov     bx,ax                           
2af8  mov     [bx+3165h],cl                   
2afc  push    es                              
2afd  push    dx                              
2afe  push    277Fh                           ; segment seg1:0000
2b01  push    4444h                           
2b04  call far USER.LSTRCMP                   ; "VPSE"
2b09  or      ax,ax                           
2b0b  jne     2B18h                           
2b0d  push    149h                            
2b10  push    ax                              
2b11  push    1h                              
2b13  call far M007.SETSTATE                  
2b18  inc     si                              
2b19  cmp     si,11h                          
2b1c  jge     2B21h                           
2b1e  jmp     2A97h                           
2b21  xor     si,si                           
2b23  mov     al,[si+3166h]                   
2b27  mov     [si+316Eh],al                   
2b2b  inc     si                              
2b2c  cmp     si,7h                           
2b2f  jl      2B23h                           
2b31  push    71h                             
2b33  call far M007.M007_GETSTATE             ; DP_CHANNEL_9
2b38  or      ax,ax                           
2b3a  jne     2B42h                           
2b3c  mov     al,[316Dh]                      
2b3f  mov     [3175h],al                      
2b42  pop     si                              
2b43  pop     di                              
2b44  leave                                   
2b45  retf                                    

; ----- sub_2b46 -----
2b46  enter   116h,0h                         
2b4a  push    di                              
2b4b  push    si                              
2b4c  les     bx,[bp+6h]                      
2b4f  mov     si,es:[bx+14h]                  
2b53  or      si,si                           
2b55  je      2B81h                           
2b57  push    si                              
2b58  lea     ax,[bp-116h]                    
2b5c  push    ss                              
2b5d  push    ax                              
2b5e  push    100h                            
2b61  call far USER.GLOBALGETATOMNAME         
2b66  push    si                              
2b67  call far USER.GLOBALDELETEATOM          
2b6c  xor     si,si                           
2b6e  lea     ax,[bp-116h]                    
2b72  mov     [bp-16h],ax                     
2b75  mov     [bp-14h],ss                     
2b78  les     bx,[bp+6h]                      
2b7b  mov     es:[bx+14h],si                  
2b7f  jmp     2B89h                           
2b81  sub     ax,ax                           
2b83  mov     [bp-14h],ax                     
2b86  mov     [bp-16h],ax                     
2b89  les     bx,[bp+6h]                      
2b8c  mov     ax,es:[bx+6h]                   
2b90  mov     [bp-12h],ax                     
2b93  mov     ax,es:[bx+4h]                   
2b97  mov     [bp-10h],ax                     
2b9a  push    ds                              
2b9b  lea     di,[bp-0Eh]                     
2b9e  lea     si,[bx+0Ah]                     
2ba1  push    es                              
2ba2  pop     ds                              
2ba3  push    ss                              
2ba4  pop     es                              
2ba5  movsw                                   
2ba6  movsw                                   
2ba7  movsw                                   
2ba8  movsw                                   
2ba9  pop     ds                              
2baa  les     bx,[bp+6h]                      
2bad  mov     ax,es:[bx+12h]                  
2bb1  mov     [bp-6h],ax                      
2bb4  mov     ax,es:[bx+8h]                   
2bb8  mov     [bp-4h],ax                      
2bbb  mov     ax,es:[bx+16h]                  
2bbf  mov     [bp-2h],ax                      
2bc2  mov     ax,es:[bx]                      
2bc5  or      ax,ax                           
2bc7  je      2BDAh                           
2bc9  dec     ax                              
2bca  je      2BE6h                           
2bcc  dec     ax                              
2bcd  je      2BF2h                           
2bcf  dec     ax                              
2bd0  je      2BFEh                           
2bd2  dec     ax                              
2bd3  je      2C0Ah                           
2bd5  mov     ax,2h                           
2bd8  jmp     2C14h                           
2bda  lea     ax,[bp-16h]                     
2bdd  push    ss                              
2bde  push    ax                              
2bdf  call far M800.Z130IMAGETOFILE           
2be4  jmp     2C14h                           
2be6  lea     ax,[bp-16h]                     
2be9  push    ss                              
2bea  push    ax                              
2beb  call far M800.Z130IMAGEFROMFILE         
2bf0  jmp     2C14h                           
2bf2  lea     ax,[bp-16h]                     
2bf5  push    ss                              
2bf6  push    ax                              
2bf7  call far M800.Z130IMAGETOHRRU           
2bfc  jmp     2C14h                           
2bfe  lea     ax,[bp-16h]                     
2c01  push    ss                              
2c02  push    ax                              
2c03  call far M800.Z130FILETOHRRU            
2c08  jmp     2C14h                           
2c0a  lea     ax,[bp-16h]                     
2c0d  push    ss                              
2c0e  push    ax                              
2c0f  call far M800.Z130RAWIMAGETOFILE        
2c14  pop     si                              
2c15  pop     di                              
2c16  leave                                   
2c17  retf    4h                              

; ----- sub_2c1a -----
2c1a  push    bp                              
2c1b  mov     bp,sp                           
2c1d  push    word ptr [bp+0Ah]               
2c20  push    word ptr [bp+8h]                
2c23  push    word ptr [bp+6h]                
2c26  call far M400.POINTASZONE               
2c2b  leave                                   
2c2c  retf    6h                              
2c2f  add     [bx+si],al                      

; ----- sub_2c30 -----
2c30  call far M007.S300_TICK                 
2c35  retf                                    

; ----- sub_2c36 -----
2c36  push    bp                              
2c37  mov     bp,sp                           
2c39  push    word ptr [bp+6h]                
2c3c  call far M007.UIF_SET_HLANGUAGE         
2c41  leave                                   
2c42  retf    2h                              
2c45  add     [bx+si],al                      

; ----- sub_2c46 -----
2c46  enter   100h,0h                         
2c4a  push    di                              
2c4b  push    si                              
2c4c  mov     si,[bp+6h]                      
2c4f  mov     ax,2A79h                        ; segment seg1:0000
2c52  push    si                              
2c53  push    ds                              
2c54  lea     di,[bp-100h]                    
2c58  mov     si,444Ah                        
2c5b  push    ss                              
2c5c  pop     es                              
2c5d  mov     ds,ax                           
2c5f  movsb                                   
2c60  pop     ds                              
2c61  pop     si                              
2c62  xor     ax,ax                           
2c64  mov     cx,7Fh                          
2c67  lea     di,[bp-0FFh]                    
2c6b  rep     stosw                           
2c6d  push    si                              
2c6e  lea     ax,[bp-100h]                    
2c72  push    ss                              
2c73  push    ax                              
2c74  push    0FFh                            
2c77  call far USER.GLOBALGETATOMNAME         
2c7c  push    si                              
2c7d  call far USER.GLOBALDELETEATOM          
2c82  push    word ptr [bp+8h]                
2c85  lea     ax,[bp-100h]                    
2c89  push    ss                              
2c8a  push    ax                              
2c8b  call far M007.M007_SETSTRING            
2c90  pop     si                              
2c91  pop     di                              
2c92  leave                                   
2c93  retf    4h                              

; ----- sub_2c96 -----
2c96  push    bp                              
2c97  mov     bp,sp                           
2c99  push    word ptr [bp+0Ah]               
2c9c  push    word ptr [bp+8h]                
2c9f  push    word ptr [bp+6h]                
2ca2  call far M007.SETVALUE                  
2ca7  leave                                   
2ca8  retf    6h                              
2cab  add     [bx+si],al                      

; ----- sub_2cac -----
2cac  enter   4h,0h                           
2cb0  push    di                              
2cb1  push    si                              
2cb2  mov     si,[bp+6h]                      
2cb5  mov     es,[bp+8h]                      
2cb8  push    word ptr es:[si]                
2cbb  call far M070.ISAVISIBLE                
2cc0  mov     di,ax                           
2cc2  cmp     di,1h                           
2cc5  jg      2D02h                           
2cc7  mov     es,[bp+8h]                      
2cca  push    word ptr es:[si]                
2ccd  lea     ax,[bp-4h]                      
2cd0  push    ax                              
2cd1  call far M007.M007_GETVALUE             
2cd6  mov     bx,ax                           
2cd8  mov     ax,ss:[bx]                      
2cdb  mov     dx,ss:[bx+2h]                   
2cdf  mov     es,[bp+8h]                      
2ce2  mov     es:[si+2h],ax                   
2ce6  mov     es:[si+4h],dx                   
2cea  push    word ptr es:[si]                
2ced  call far M007.VALUEENABLE               
2cf2  cmp     ax,1h                           
2cf5  sbb     ax,ax                           
2cf7  neg     ax                              
2cf9  mov     es,[bp+8h]                      
2cfc  mov     es:[si+6h],ax                   
2d00  xor     ax,ax                           
2d02  pop     si                              
2d03  pop     di                              
2d04  leave                                   
2d05  retf    4h                              

; ----- sub_2d08 -----
2d08  enter   7Ah,0h                          
2d0c  push    di                              
2d0d  push    si                              
2d0e  les     bx,[bp+6h]                      
2d11  push    word ptr es:[bx]                
2d14  call far M070.ISAVISIBLE                
2d19  mov     [bp-2h],ax                      
2d1c  cmp     ax,1h                           
2d1f  jle     2D24h                           
2d21  jmp     2E08h                           
2d24  sbb     ax,ax                           
2d26  neg     ax                              
2d28  les     bx,[bp+6h]                      
2d2b  mov     es:[bx+22h],ax                  
2d2f  les     bx,[bp+6h]                      
2d32  push    word ptr es:[bx]                
2d35  lea     ax,[bp-6h]                      
2d38  push    ax                              
2d39  call far M007.M007_GETLOW               
2d3e  mov     bx,ax                           
2d40  mov     ax,ss:[bx]                      
2d43  mov     dx,ss:[bx+2h]                   
2d47  les     bx,[bp+6h]                      
2d4a  mov     es:[bx+1Ah],ax                  
2d4e  mov     es:[bx+1Ch],dx                  
2d52  push    word ptr es:[bx]                
2d55  lea     ax,[bp-0Ah]                     
2d58  push    ax                              
2d59  call far M007.M007_GETHIGH              
2d5e  mov     bx,ax                           
2d60  mov     ax,ss:[bx]                      
2d63  mov     dx,ss:[bx+2h]                   
2d67  les     bx,[bp+6h]                      
2d6a  mov     es:[bx+1Eh],ax                  
2d6e  mov     es:[bx+20h],dx                  
2d72  push    word ptr es:[bx]                
2d75  lea     ax,[bp-3Ah]                     
2d78  push    ax                              
2d79  call far sub_45a0                       
2d7e  push    ds                              
2d7f  lea     di,[bp-22h]                     
2d82  mov     si,ax                           
2d84  push    ss                              
2d85  pop     es                              
2d86  push    ss                              
2d87  pop     ds                              
2d88  mov     cx,0Ch                          
2d8b  rep     movsw                           
2d8d  pop     ds                              
2d8e  mov     ax,[bp-20h]                     
2d91  les     bx,[bp+6h]                      
2d94  mov     es:[bx+2h],ax                   
2d98  mov     ax,[bp-16h]                     
2d9b  mov     es:[bx+4h],ax                   
2d9f  mov     ax,[bp-0Ch]                     
2da2  mov     es:[bx+6h],ax                   
2da6  mov     ax,[bp-22h]                     
2da9  mov     es:[bx+8h],ax                   
2dad  mov     ax,[bp-1Eh]                     
2db0  mov     dx,[bp-1Ch]                     
2db3  mov     es:[bx+0Ah],ax                  
2db7  mov     es:[bx+0Ch],dx                  
2dbb  mov     ax,[bp-1Ah]                     
2dbe  mov     dx,[bp-18h]                     
2dc1  mov     es:[bx+0Eh],ax                  
2dc5  mov     es:[bx+10h],dx                  
2dc9  mov     ax,[bp-14h]                     
2dcc  mov     dx,[bp-12h]                     
2dcf  mov     es:[bx+12h],ax                  
2dd3  mov     es:[bx+14h],dx                  
2dd7  mov     ax,[bp-10h]                     
2dda  mov     dx,[bp-0Eh]                     
2ddd  mov     es:[bx+16h],ax                  
2de1  mov     es:[bx+18h],dx                  
2de5  push    word ptr es:[bx]                
2de8  lea     ax,[bp-7Ah]                     
2deb  push    ss                              
2dec  push    ax                              
2ded  push    40h                             
2def  call far M070.PARAMETER_NAME_STRING     
2df4  lea     ax,[bp-7Ah]                     
2df7  push    ss                              
2df8  push    ax                              
2df9  call far USER.GLOBALADDATOM             
2dfe  les     bx,[bp+6h]                      
2e01  mov     es:[bx+24h],ax                  
2e05  mov     ax,1h                           
2e08  pop     si                              
2e09  pop     di                              
2e0a  leave                                   
2e0b  retf    4h                              

; ----- sub_2e0e -----
2e0e  enter   40h,0h                          
2e12  push    di                              
2e13  push    si                              
2e14  mov     si,[bp+6h]                      
2e17  mov     es,[bp+8h]                      
2e1a  push    word ptr es:[si]                
2e1d  call far M070.ISCVISIBLE                
2e22  mov     di,ax                           
2e24  cmp     di,1h                           
2e27  jle     2E2Ch                           
2e29  jmp     2EADh                           
2e2c  sbb     ax,ax                           
2e2e  neg     ax                              
2e30  mov     es,[bp+8h]                      
2e33  mov     es:[si+4h],ax                   
2e37  mov     es,[bp+8h]                      
2e3a  cmp     word ptr es:[si],0B7h           
2e3f  je      2E48h                           
2e41  cmp     word ptr es:[si],0ADh           
2e46  jne     2E72h                           
2e48  push    144h                            
2e4b  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2e50  cmp     ax,2h                           
2e53  jne     2E72h                           
2e55  push    8Ch                             
2e58  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2e5d  mov     di,ax                           
2e5f  cmp     di,5h                           
2e62  je      2E69h                           
2e64  cmp     di,7h                           
2e67  jne     2E72h                           
2e69  mov     es,[bp+8h]                      
2e6c  mov     word ptr es:[si+4h],0h          
2e72  mov     es,[bp+8h]                      
2e75  push    word ptr es:[si]                
2e78  mov     di,es                           
2e7a  call far M007.COMMANDENABLE             
2e7f  mov     es,di                           
2e81  cmp     ax,1h                           
2e84  sbb     ax,ax                           
2e86  neg     ax                              
2e88  mov     es:[si+2h],ax                   
2e8c  push    word ptr es:[si]                
2e8f  lea     ax,[bp-40h]                     
2e92  push    ss                              
2e93  push    ax                              
2e94  push    40h                             
2e96  call far M070.COMMAND_NAME_STRING       
2e9b  lea     ax,[bp-40h]                     
2e9e  push    ss                              
2e9f  push    ax                              
2ea0  call far USER.GLOBALADDATOM             
2ea5  mov     es,di                           
2ea7  mov     es:[si+6h],ax                   
2eab  xor     ax,ax                           
2ead  pop     si                              
2eae  pop     di                              
2eaf  leave                                   
2eb0  retf    4h                              
2eb3  add     [bx+si],al                      

; ----- sub_2eb4 -----
2eb4  push    bp                              
2eb5  mov     bp,sp                           
2eb7  push    di                              
2eb8  push    si                              
2eb9  mov     di,[bp+8h]                      
2ebc  mov     si,[bp+6h]                      
2ebf  cmp     di,7h                           
2ec2  jne     2ED4h                           
2ec4  cmp     si,1h                           
2ec7  jne     2ED4h                           
2ec9  push    0h                              
2ecb  push    ds                              
2ecc  push    20h                             
2ecf  call far M007.UIF_MESSAGE               
2ed4  cmp     di,0Bh                          
2ed7  jne     2EE9h                           
2ed9  push    si                              
2eda  call far sub_29e0                       
2edf  pop     bx                              
2ee0  or      ax,ax                           
2ee2  jne     2EE9h                           
2ee4  mov     ax,192h                         
2ee7  jmp     2F02h                           
2ee9  cmp     di,64h                          
2eec  jne     2EF7h                           
2eee  call far sub_2962                       
2ef3  cmp     ax,si                           
2ef5  jl      2EE4h                           
2ef7  push    di                              
2ef8  mov     ax,si                           
2efa  cwd                                     
2efb  push    dx                              
2efc  push    si                              
2efd  call far M007.SETSTATE                  
2f02  pop     si                              
2f03  pop     di                              
2f04  leave                                   
2f05  retf    4h                              

; ----- sub_2f08 -----
2f08  enter   7Ah,0h                          
2f0c  push    si                              
2f0d  mov     si,[bp+6h]                      
2f10  mov     es,[bp+8h]                      
2f13  push    word ptr es:[si]                
2f16  call far M007.STATEENABLE               
2f1b  cmp     ax,1h                           
2f1e  sbb     ax,ax                           
2f20  neg     ax                              
2f22  mov     es,[bp+8h]                      
2f25  mov     es:[si+4h],ax                   
2f29  push    word ptr es:[si]                
2f2c  call far M070.ISDVISIBLE                
2f31  mov     [bp-2h],ax                      
2f34  cmp     ax,1h                           
2f37  jle     2F3Ch                           
2f39  jmp     3155h                           
2f3c  sbb     ax,ax                           
2f3e  neg     ax                              
2f40  mov     es,[bp+8h]                      
2f43  mov     es:[si+6h],ax                   
2f47  mov     es,[bp+8h]                      
2f4a  push    word ptr es:[si]                
2f4d  call far M007.M007_GETSTATE             
2f52  mov     es,[bp+8h]                      
2f55  mov     es:[si+2h],ax                   
2f59  mov     ax,es:[si]                      
2f5c  sub     ax,1Ah                          
2f5f  je      2F87h                           
2f61  sub     ax,4Ah                          
2f64  je      2F8Eh                           
2f66  dec     ax                              
2f67  je      2F95h                           
2f69  sub     ax,32h                          
2f6c  je      2F95h                           
2f6e  sub     ax,91h                          
2f71  je      2FB7h                           
2f73  mov     es,[bp+8h]                      
2f76  push    word ptr es:[si]                
2f79  call far M007.STATEMAX                  
2f7e  mov     es,[bp+8h]                      
2f81  mov     es:[si+8h],ax                   
2f85  jmp     2FC0h                           
2f87  call far sub_28f4                       
2f8c  jmp     2F7Eh                           
2f8e  call far sub_2962                       
2f93  jmp     2F7Eh                           
2f95  mov     ax,[3164h]                      
2f98  sub     ax,7h                           
2f9b  jl      2F73h                           
2f9d  jo      2F73h                           
2f9f  dec     ax                              
2fa0  dec     ax                              
2fa1  jle     2FACh                           
2fa3  dec     ax                              
2fa4  dec     ax                              
2fa5  jl      2F73h                           
2fa7  sub     ax,0Dh                          
2faa  jg      2F73h                           
2fac  mov     es,[bp+8h]                      
2faf  mov     word ptr es:[si+8h],7h          
2fb5  jmp     2FC0h                           
2fb7  mov     es,[bp+8h]                      
2fba  mov     word ptr es:[si+8h],2h          
2fc0  mov     es,[bp+8h]                      
2fc3  push    word ptr es:[si]                
2fc6  lea     ax,[bp-7Ah]                     
2fc9  push    ss                              
2fca  push    ax                              
2fcb  push    50h                             
2fcd  call far M070.STATE_NAME_STRING         
2fd2  lea     ax,[bp-7Ah]                     
2fd5  push    ss                              
2fd6  push    ax                              
2fd7  push    304Eh                           ; segment seg1:0000
2fda  push    444Ch                           
2fdd  call far KERNEL.LSTRCAT                 ; " = "
2fe2  mov     es,[bp+8h]                      
2fe5  mov     ax,es:[si]                      
2fe8  sub     ax,53h                          
2feb  je      3031h                           
2fed  sub     ax,12h                          
2ff0  jne     2FF5h                           
2ff2  jmp     3094h                           
2ff5  dec     ax                              
2ff6  jne     2FFBh                           
2ff8  jmp     30AAh                           
2ffb  sub     ax,31h                          
2ffe  jne     3003h                           
3000  jmp     30B6h                           
3003  sub     ax,22h                          
3006  jl      3018h                           
3008  jo      3018h                           
300a  dec     ax                              
300b  jg      3010h                           
300d  jmp     30C7h                           
3010  sub     ax,4Fh                          
3013  jne     3018h                           
3015  jmp     3104h                           
3018  mov     es,[bp+8h]                      
301b  push    word ptr es:[si]                
301e  push    word ptr es:[si+2h]             
3022  lea     ax,[bp-2Ah]                     
3025  push    ss                              
3026  push    ax                              
3027  push    28h                             
3029  call far M070.STATE_VALUE_STRING        
302e  jmp     3133h                           
3031  mov     ax,es:[si+2h]                   
3035  sub     ax,3h                           
3038  je      3048h                           
303a  dec     ax                              
303b  je      305Bh                           
303d  dec     ax                              
303e  je      3068h                           
3040  dec     ax                              
3041  je      3075h                           
3043  dec     ax                              
3044  je      3082h                           
3046  jmp     3018h                           
3048  lea     ax,[bp-2Ah]                     
304b  push    ss                              
304c  push    ax                              
304d  push    3061h                           ; segment seg1:0000
3050  push    4464h                           
3053  call far KERNEL.LSTRCPY                 ; "Makro MK1"
3058  jmp     3133h                           
305b  lea     ax,[bp-2Ah]                     
305e  push    ss                              
305f  push    ax                              
3060  push    306Eh                           ; segment seg1:0000
3063  push    4450h                           
3066  jmp     3053h                           
3068  lea     ax,[bp-2Ah]                     
306b  push    ss                              
306c  push    ax                              
306d  push    307Bh                           ; segment seg1:0000
3070  push    445Ah                           
3073  jmp     3053h                           
3075  lea     ax,[bp-2Ah]                     
3078  push    ss                              
3079  push    ax                              
307a  push    30F0h                           ; segment seg1:0000
307d  push    446Eh                           
3080  jmp     3053h                           
3082  cmp     word ptr [3Ah],0h               
3087  je      30E1h                           
3089  lea     ax,[bp-2Ah]                     
308c  push    ss                              
308d  push    ax                              
308e  push    ds                              
308f  push    3070h                           
3092  jmp     3053h                           
3094  lea     ax,[bp-2Ah]                     
3097  push    ss                              
3098  push    ax                              
3099  mov     al,0Ah                          
309b  mov     bx,es:[si+2h]                   
309f  imul    byte ptr [bx+3166h]             
30a3  add     ax,30B0h                        
30a6  push    ds                              
30a7  push    ax                              
30a8  jmp     3053h                           
30aa  lea     ax,[bp-2Ah]                     
30ad  push    ss                              
30ae  push    ax                              
30af  imul    ax,es:[si+2h],0Ah               
30b4  jmp     30A3h                           
30b6  lea     ax,[bp-2Ah]                     
30b9  push    ss                              
30ba  push    ax                              
30bb  mov     al,0Ah                          
30bd  mov     bx,es:[si+2h]                   
30c1  imul    byte ptr [bx+316Eh]             
30c5  jmp     30A3h                           
30c7  push    8Ch                             
30ca  call far M007.M007_GETSTATE             ; "Fjeld 6""  "Fjeld 5""  "Makro MK2"
30cf  cmp     ax,6h                           
30d2  je      30E1h                           
30d4  push    8Ch                             
30d7  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
30dc  cmp     ax,8h                           
30df  jne     30E4h                           
30e1  jmp     3018h                           
30e4  mov     es,[bp+8h]                      
30e7  mov     ax,es:[si+2h]                   
30eb  add     ax,7h                           
30ee  push    ax                              
30ef  push    2EDDh                           ; segment seg1:0000
30f2  push    4478h                           
30f5  lea     ax,[bp-2Ah]                     
30f8  push    ss                              
30f9  push    ax                              
30fa  call far USER._WSPRINTF                 
30ff  add     sp,0Ah                          
3102  jmp     3133h                           
3104  cmp     word ptr es:[si+2h],0h          
3109  jne     3116h                           
310b  call far M007.HLEOUIFLANGUAGE           
3110  push    ax                              
3111  push    57Eh                            
3114  jmp     3127h                           
3116  call far M007.HLEOUIFLANGUAGE           
311b  push    ax                              
311c  mov     es,[bp+8h]                      
311f  mov     ax,es:[si+2h]                   
3123  add     ax,225h                         
3126  push    ax                              
3127  lea     ax,[bp-2Ah]                     
312a  push    ss                              
312b  push    ax                              
312c  push    28h                             
312e  call far USER.LOADSTRING                
3133  lea     cx,[bp-7Ah]                     
3136  push    ss                              
3137  push    cx                              
3138  lea     dx,[bp-2Ah]                     
313b  push    ss                              
313c  push    dx                              
313d  call far KERNEL.LSTRCAT                 
3142  lea     ax,[bp-7Ah]                     
3145  push    ss                              
3146  push    ax                              
3147  call far USER.GLOBALADDATOM             
314c  mov     es,[bp+8h]                      
314f  mov     es:[si+0Ah],ax                  
3153  xor     ax,ax                           
3155  pop     si                              
3156  leave                                   
3157  retf    4h                              

; ----- sub_315a -----
315a  push    bp                              
315b  mov     bp,sp                           
315d  push    si                              
315e  mov     si,[bp+8h]                      
3161  push    si                              
3162  call far M070.ISDVISIBLE                
3167  cmp     ax,1h                           
316a  jle     3171h                           
316c  xor     ax,ax                           
316e  cwd                                     
316f  jmp     317Ah                           
3171  push    si                              
3172  push    word ptr [bp+6h]                
3175  call far M070.STATE_VALUE_RESID         
317a  pop     si                              
317b  leave                                   
317c  retf    4h                              
317f  add     [bx+si],al                      

; ----- sub_3180 -----
3180  enter   50h,0h                          
3184  push    di                              
3185  push    si                              
3186  push    8Ch                             
3189  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
318e  mov     di,ax                           
3190  les     bx,[bp+6h]                      
3193  push    word ptr es:[bx]                
3196  call far M070.ISDVISIBLE                
319b  mov     si,ax                           
319d  cmp     si,1h                           
31a0  jle     31A5h                           
31a2  jmp     352Ch                           
31a5  mov     si,[bp+6h]                      
31a8  mov     es,[bp+8h]                      
31ab  mov     ax,es:[si]                      
31ae  or      ax,ax                           
31b0  je      322Dh                           
31b2  sub     ax,0Bh                          
31b5  jne     31BAh                           
31b7  jmp     3244h                           
31ba  sub     ax,48h                          
31bd  jne     31C2h                           
31bf  jmp     3250h                           
31c2  sub     ax,10h                          
31c5  jne     31CAh                           
31c7  jmp     32C8h                           
31ca  dec     ax                              
31cb  dec     ax                              
31cc  jne     31D1h                           
31ce  jmp     3327h                           
31d1  dec     ax                              
31d2  jne     31D7h                           
31d4  jmp     333Eh                           
31d7  sub     ax,8h                           
31da  jne     31DFh                           
31dc  jmp     334Ah                           
31df  sub     ax,8h                           
31e2  jne     31E7h                           
31e4  jmp     3371h                           
31e7  sub     ax,19h                          
31ea  jne     31EFh                           
31ec  jmp     33F9h                           
31ef  sub     ax,8h                           
31f2  jne     31F7h                           
31f4  jmp     341Bh                           
31f7  sub     ax,22h                          
31fa  jge     31FFh                           
31fc  jmp     3503h                           
31ff  jno     3204h                           
3201  jmp     3503h                           
3204  dec     ax                              
3205  jg      320Ah                           
3207  jmp     342Dh                           
320a  sub     ax,6h                           
320d  jne     3212h                           
320f  jmp     347Bh                           
3212  sub     ax,53h                          
3215  jne     321Ah                           
3217  jmp     3486h                           
321a  sub     ax,1Bh                          
321d  jne     3222h                           
321f  jmp     34A7h                           
3222  sub     ax,9h                           
3225  jne     322Ah                           
3227  jmp     34F2h                           
322a  jmp     3503h                           
322d  push    word ptr es:[si+2h]             
3231  call far sub_299a                       
3236  pop     bx                              
3237  or      ax,ax                           
3239  je      323Eh                           
323b  jmp     3503h                           
323e  mov     ax,192h                         
3241  jmp     352Ch                           
3244  push    word ptr es:[si+2h]             
3248  call far sub_29e0                       
324d  jmp     34FBh                           
3250  push    word ptr es:[si+2h]             
3254  call far sub_281c                       
3259  pop     bx                              
325a  or      ax,ax                           
325c  je      323Eh                           
325e  mov     es,[bp+8h]                      
3261  mov     ax,es:[si+2h]                   
3265  sub     ax,3h                           
3268  je      3279h                           
326a  dec     ax                              
326b  je      328Ch                           
326d  dec     ax                              
326e  je      3299h                           
3270  dec     ax                              
3271  je      32A6h                           
3273  dec     ax                              
3274  je      32B3h                           
3276  jmp     3503h                           
3279  lea     ax,[bp-28h]                     
327c  push    ss                              
327d  push    ax                              
327e  push    3292h                           ; segment seg1:0000
3281  push    4464h                           
3284  call far KERNEL.LSTRCPY                 ; "Makro MK1"
3289  jmp     3519h                           
328c  lea     ax,[bp-28h]                     
328f  push    ss                              
3290  push    ax                              
3291  push    329Fh                           ; segment seg1:0000
3294  push    4450h                           
3297  jmp     3284h                           
3299  lea     ax,[bp-28h]                     
329c  push    ss                              
329d  push    ax                              
329e  push    32ACh                           ; segment seg1:0000
32a1  push    445Ah                           
32a4  jmp     3284h                           
32a6  lea     ax,[bp-28h]                     
32a9  push    ss                              
32aa  push    ax                              
32ab  push    3451h                           ; segment seg1:0000
32ae  push    446Eh                           
32b1  jmp     3284h                           
32b3  cmp     word ptr [3Ah],0h               
32b8  jne     32BDh                           
32ba  jmp     3503h                           
32bd  lea     ax,[bp-28h]                     
32c0  push    ss                              
32c1  push    ax                              
32c2  push    ds                              
32c3  push    3070h                           
32c6  jmp     3284h                           
32c8  push    144h                            
32cb  call far M007.M007_GETSTATE             ; "Fjeld 6""  "Fjeld 5""  "Makro MK2"
32d0  or      ax,ax                           
32d2  je      32D7h                           
32d4  jmp     3503h                           
32d7  mov     es,[bp+8h]                      
32da  cmp     word ptr es:[si+2h],2h          
32df  je      32EBh                           
32e1  cmp     word ptr es:[si+2h],3h          
32e6  je      32EBh                           
32e8  jmp     3503h                           
32eb  push    11h                             
32ed  call far M007.M007_GETSTATE             ; DP_SCANRATE
32f2  cmp     ax,0Ch                          
32f5  jle     32FAh                           
32f7  jmp     323Eh                           
32fa  push    22h                             
32fc  call far M007.M007_GETSTATE             ; DP_LINE_SCAN
3301  dec     ax                              
3302  je      3319h                           
3304  push    0C7h                            
3307  call far M007.M007_GETSTATE             ; DP_XRAY_LINESCAN
330c  dec     ax                              
330d  je      3319h                           
330f  push    1Fh                             
3311  call far M007.M007_GETSTATE             ; DP_ZOOM
3316  dec     ax                              
3317  jne     331Ch                           
3319  jmp     323Eh                           
331c  push    1Eh                             
331e  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
3323  dec     ax                              
3324  jmp     3239h                           
3327  lea     ax,[bp-28h]                     
332a  push    ss                              
332b  push    ax                              
332c  mov     al,0Ah                          
332e  mov     bx,es:[si+2h]                   
3332  imul    byte ptr [bx+3166h]             
3336  add     ax,30B0h                        
3339  push    ds                              
333a  push    ax                              
333b  jmp     3284h                           
333e  lea     ax,[bp-28h]                     
3341  push    ss                              
3342  push    ax                              
3343  imul    ax,es:[si+2h],0Ah               
3348  jmp     3336h                           
334a  cmp     word ptr es:[si+2h],3h          
334f  jge     3354h                           
3351  jmp     3503h                           
3354  cmp     di,6h                           
3357  je      3363h                           
3359  cmp     di,8h                           
335c  je      3363h                           
335e  cmp     di,5h                           
3361  jne     3366h                           
3363  jmp     3503h                           
3366  cmp     di,7h                           
3369  je      336Eh                           
336b  jmp     323Eh                           
336e  jmp     3503h                           
3371  cmp     word ptr es:[si+2h],1h          
3376  je      337Bh                           
3378  jmp     3503h                           
337b  cmp     word ptr [3164h],8h             
3380  jne     3385h                           
3382  jmp     323Eh                           
3385  cmp     word ptr [3164h],7h             
338a  je      33EEh                           
338c  cmp     word ptr [3164h],9h             
3391  je      33EEh                           
3393  cmp     word ptr [3164h],13h            
3398  je      33EEh                           
339a  cmp     word ptr [3164h],0Bh            
339f  je      33EEh                           
33a1  cmp     word ptr [3164h],0Ch            
33a6  je      33EEh                           
33a8  cmp     word ptr [3164h],14h            
33ad  je      33EEh                           
33af  cmp     word ptr [3164h],15h            
33b4  je      33EEh                           
33b6  cmp     word ptr [3164h],0Dh            
33bb  je      33EEh                           
33bd  cmp     word ptr [3164h],0Eh            
33c2  je      33EEh                           
33c4  cmp     word ptr [3164h],0Fh            
33c9  je      33EEh                           
33cb  cmp     word ptr [3164h],10h            
33d0  je      33EEh                           
33d2  cmp     word ptr [3164h],11h            
33d7  je      33EEh                           
33d9  cmp     word ptr [3164h],12h            
33de  je      33EEh                           
33e0  cmp     word ptr [3164h],16h            
33e5  je      33EEh                           
33e7  cmp     word ptr [3164h],17h            
33ec  jne     33F1h                           
33ee  jmp     323Eh                           
33f1  cmp     word ptr [3164h],18h            
33f6  jmp     3239h                           
33f9  cmp     word ptr es:[si+2h],1h          
33fe  je      3403h                           
3400  jmp     3503h                           
3403  cmp     di,6h                           
3406  je      3412h                           
3408  cmp     di,8h                           
340b  je      3412h                           
340d  cmp     di,5h                           
3410  jne     3415h                           
3412  jmp     323Eh                           
3415  cmp     di,7h                           
3418  jmp     3239h                           
341b  lea     ax,[bp-28h]                     
341e  push    ss                              
341f  push    ax                              
3420  mov     al,0Ah                          
3422  mov     bx,es:[si+2h]                   
3426  imul    byte ptr [bx+316Eh]             
342a  jmp     3336h                           
342d  cmp     di,6h                           
3430  jne     3435h                           
3432  jmp     3503h                           
3435  cmp     di,8h                           
3438  jne     343Dh                           
343a  jmp     3503h                           
343d  push    11h                             
343f  lea     ax,[bp-50h]                     
3442  push    ss                              
3443  push    ax                              
3444  push    28h                             
3446  call far M070.STATE_NAME_STRING         
344b  lea     ax,[bp-50h]                     
344e  push    ss                              
344f  push    ax                              
3450  push    3482h                           ; segment seg1:0000
3453  push    447Ch                           
3456  call far KERNEL.LSTRCAT                 ; " = %u"
345b  mov     es,[bp+8h]                      
345e  mov     ax,es:[si+2h]                   
3462  add     ax,7h                           
3465  push    ax                              
3466  lea     ax,[bp-50h]                     
3469  push    ss                              
346a  push    ax                              
346b  lea     ax,[bp-28h]                     
346e  push    ss                              
346f  push    ax                              
3470  call far USER._WSPRINTF                 
3475  add     sp,0Ah                          
3478  jmp     3519h                           
347b  push    word ptr es:[si+2h]             
347f  call far sub_2982                       
3484  jmp     34FBh                           
3486  push    0Bh                             
3488  call far sub_28c6                       
348d  pop     bx                              
348e  or      ax,ax                           
3490  jne     3503h                           
3492  mov     es,[bp+8h]                      
3495  cmp     word ptr es:[si+2h],1h          
349a  jne     349Fh                           
349c  jmp     323Eh                           
349f  cmp     word ptr es:[si+2h],3h          
34a4  jmp     3239h                           
34a7  push    144h                            
34aa  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
34af  or      ax,ax                           
34b1  jne     34DAh                           
34b3  mov     es,[bp+8h]                      
34b6  cmp     es:[si+2h],ax                   
34ba  jne     34DAh                           
34bc  push    63h                             
34be  call far M007.M007_GETSTATE             ; DP_IMAGE_STORE
34c3  cmp     ax,2h                           
34c6  jne     34CBh                           
34c8  jmp     323Eh                           
34cb  push    63h                             
34cd  call far M007.M007_GETSTATE             ; DP_IMAGE_STORE
34d2  cmp     ax,3h                           
34d5  jne     34DAh                           
34d7  jmp     323Eh                           
34da  push    144h                            
34dd  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
34e2  or      ax,ax                           
34e4  jne     3503h                           
34e6  mov     es,[bp+8h]                      
34e9  cmp     word ptr es:[si+2h],3h          
34ee  jg      3500h                           
34f0  jmp     3503h                           
34f2  push    word ptr es:[si+2h]             
34f6  call far sub_27c8                       
34fb  pop     bx                              
34fc  or      ax,ax                           
34fe  jne     3503h                           
3500  jmp     323Eh                           
3503  mov     es,[bp+8h]                      
3506  push    word ptr es:[si]                
3509  push    word ptr es:[si+2h]             
350d  lea     ax,[bp-28h]                     
3510  push    ss                              
3511  push    ax                              
3512  push    28h                             
3514  call far M070.STATE_VALUE_STRING        
3519  lea     ax,[bp-28h]                     
351c  push    ss                              
351d  push    ax                              
351e  call far USER.GLOBALADDATOM             
3523  mov     es,[bp+8h]                      
3526  mov     es:[si+4h],ax                   
352a  xor     ax,ax                           
352c  pop     si                              
352d  pop     di                              
352e  leave                                   
352f  retf    4h                              

; ----- sub_3532 -----
3532  enter   10h,0h                          
3536  push    si                              
3537  mov     si,[bp+6h]                      
353a  mov     es,[bp+8h]                      
353d  wait                                    
353e  fld     dword ptr es:[si]               
3541  wait                                    
3542  fstp    qword ptr [bp-10h]              
3545  wait                                    
3546  fld     dword ptr es:[si+4h]            
354a  wait                                    
354b  fstp    qword ptr [bp-8h]               
354e  nop                                     
354f  wait                                    
3550  push    word ptr [bp+0Ah]               
3553  lea     ax,[bp-10h]                     
3556  push    ss                              
3557  push    ax                              
3558  call far M007.SETXY                     
355d  pop     si                              
355e  leave                                   
355f  retf    6h                              

; ----- sub_3562 -----
3562  enter   8h,0h                           
3566  push    di                              
3567  push    si                              
3568  mov     di,[bp+0Ah]                     
356b  push    di                              
356c  call far M070.ISAVISIBLE                
3571  mov     si,ax                           
3573  cmp     si,1h                           
3576  jg      35BCh                           
3578  mov     si,[bp+6h]                      
357b  push    di                              
357c  lea     ax,[bp-4h]                      
357f  push    ax                              
3580  call far M007.M007_GETVALUE             
3585  mov     bx,ax                           
3587  mov     ax,ss:[bx]                      
358a  mov     dx,ss:[bx+2h]                   
358e  mov     es,[bp+8h]                      
3591  mov     es:[si],ax                      
3594  mov     es:[si+2h],dx                   
3598  lea     ax,[di+1h]                      
359b  push    ax                              
359c  lea     ax,[bp-8h]                      
359f  push    ax                              
35a0  mov     di,es                           
35a2  call far M007.M007_GETVALUE             
35a7  mov     bx,ax                           
35a9  mov     ax,ss:[bx]                      
35ac  mov     dx,ss:[bx+2h]                   
35b0  mov     es,di                           
35b2  mov     es:[si+4h],ax                   
35b6  mov     es:[si+6h],dx                   
35ba  xor     ax,ax                           
35bc  pop     si                              
35bd  pop     di                              
35be  leave                                   
35bf  retf    6h                              

; ----- sub_35c2 -----
35c2  push    bp                              
35c3  mov     bp,sp                           
35c5  push    word ptr [bp+8h]                
35c8  push    word ptr [bp+6h]                
35cb  call far M007.NUDGEVALUE                
35d0  leave                                   
35d1  retf    4h                              

; ----- sub_35d4 -----
35d4  push    bp                              
35d5  mov     bp,sp                           
35d7  push    word ptr [bp+6h]                
35da  call far M007.EXECUTECOMMAND            
35df  leave                                   
35e0  retf    2h                              
35e3  add     [bx+si],al                      

; ----- sub_35e4 -----
35e4  push    bp                              
35e5  mov     bp,sp                           
35e7  push    si                              
35e8  push    word ptr [bp+0Ch]               
35eb  push    word ptr [bp+0Ah]               
35ee  push    word ptr [bp+8h]                
35f1  push    word ptr [bp+6h]                
35f4  call far M007.UIF_INITIATE              
35f9  mov     si,ax                           
35fb  push    0h                              
35fd  push    ds                              
35fe  push    20h                             
3601  call far M007.UIF_MESSAGE               
3606  mov     ax,si                           
3608  pop     si                              
3609  leave                                   
360a  retf    8h                              
360d  add     [bx+si],al                      

; ----- sub_360e -----
360e  push    bp                              
360f  mov     bp,sp                           
3611  push    word ptr [bp+8h]                
3614  push    word ptr [bp+6h]                
3617  call far M007.INITIALISE_CONTROLLER     
361c  leave                                   
361d  retf    4h                              

; ----- sub_3620 -----
3620  push    bp                              
3621  mov     bp,sp                           
3623  push    word ptr [bp+8h]                
3626  push    word ptr [bp+6h]                
3629  call far M007.UIF_NOTIFY                
362e  leave                                   
362f  retf    4h                              

; ----- sub_3632 -----
3632  call far M007.HLEOUIFINSTANCE           
3637  retf                                    

; ----- sub_3638 -----
3638  push    bp                              
3639  mov     bp,sp                           
363b  push    word ptr [bp+8h]                
363e  push    word ptr [bp+6h]                
3641  call far M007.UIF_SHUTDOWN              
3646  leave                                   
3647  retf    4h                              

; ----- sub_364a -----
364a  push    bp                              
364b  mov     bp,sp                           
364d  push    word ptr [bp+6h]                
3650  call far M007.SUSPEND_CONTROLLER        
3655  mov     ax,1h                           
3658  leave                                   
3659  retf    2h                              

; ----- sub_365c -----
365c  push    bp                              
365d  mov     bp,sp                           
365f  push    word ptr [bp+6h]                
3662  call far M007.KILL_CONTROLLER           
3667  mov     ax,1h                           
366a  leave                                   
366b  retf    2h                              

; ----- sub_366e -----
366e  call far M007.SETUSEATOMS               
3673  retf                                    

; ----- sub_3674 -----
3674  push    bp                              
3675  mov     bp,sp                           
3677  les     bx,[bp+6h]                      
367a  push    word ptr es:[bx+2h]             
367e  push    word ptr es:[bx]                
3681  call far M200.SETFORMAT_MODIFIER        
3686  leave                                   
3687  retf    4h                              

; ----- sub_368a -----
368a  push    bp                              
368b  mov     bp,sp                           
368d  les     bx,[bp+6h]                      
3690  push    word ptr es:[bx+2h]             
3694  push    word ptr es:[bx]                
3697  call far M200.SETDEFPRINTFACTOR         
369c  leave                                   
369d  retf    4h                              

; ----- sub_36a0 -----
36a0  call far M070.LOADVISTABLES             
36a5  call far M070.CLEARMENULIST             
36aa  retf                                    
36ab  add     [bx+si],al                      

; ----- sub_36ac -----
36ac  retf                                    
36ad  add     [bx+si],al                      

; ----- sub_36ae -----
36ae  enter   1F0h,0h                         
36b2  push    si                              
36b3  lea     ax,[bp-1F0h]                    
36b7  push    ss                              
36b8  push    ax                              
36b9  call far M007.GET_CONFIG                
36be  mov     si,ax                           
36c0  cmp     si,199h                         
36c4  je      36E9h                           
36c6  or      si,ax                           
36c8  je      36D6h                           
36ca  cmp     si,19Ch                         
36ce  je      36D6h                           
36d0  cmp     si,19Eh                         
36d4  jne     36E9h                           
36d6  call far sub_373a                       
36db  lea     ax,[bp-1DEh]                    
36df  push    ss                              
36e0  push    ax                              
36e1  call far sub_2a62                       
36e6  add     sp,4h                           
36e9  mov     ax,si                           
36eb  pop     si                              
36ec  leave                                   
36ed  retf                                    

; ----- sub_36ee -----
36ee  enter   1F0h,0h                         
36f2  lea     ax,[bp-1F0h]                    
36f6  push    ss                              
36f7  push    ax                              
36f8  call far M007.GET_CONFIG                
36fd  lea     ax,[bp-1F0h]                    
3701  push    ss                              
3702  push    ax                              
3703  call far M007.PUT_CONFIG                
3708  leave                                   
3709  retf                                    

; ----- sub_370a -----
370a  push    bp                              
370b  mov     bp,sp                           
370d  push    6614h                           
3710  push    40h                             
3712  push    word ptr [bp+8h]                
3715  push    word ptr [bp+6h]                
3718  call far M007.UIF_READ_LICENCES         
371d  leave                                   
371e  retf    4h                              
3721  add     [bx+si],al                      

; ----- sub_3722 -----
3722  push    bp                              
3723  mov     bp,sp                           
3725  push    6614h                           
3728  push    40h                             
372a  push    word ptr [bp+8h]                
372d  push    word ptr [bp+6h]                
3730  call far M007.UIF_WRITE_LICENCES        
3735  leave                                   
3736  retf    4h                              
3739  add     [bx+si],al                      

; ----- sub_373a -----
373a  enter   80h,0h                          
373e  push    6614h                           
3741  push    40h                             
3743  lea     ax,[bp-80h]                     
3746  push    ss                              
3747  push    ax                              
3748  call far M007.UIF_READ_LICENCES         
374d  or      ax,ax                           
374f  jne     3759h                           
3751  mov     ax,[bp-80h]                     
3754  mov     [3164h],ax                      
3757  leave                                   
3758  retf                                    
3759  mov     ax,0FFFFh                       
375c  leave                                   
375d  retf                                    

; ----- sub_375e -----
375e  enter   24h,0h                          
3762  push    si                              
3763  call far M007.UIF_READ_SN               
3768  mov     si,ax                           
376a  mov     cx,64h                          
376d  cwd                                     
376e  idiv    cx                              
3770  mov     [bp-2h],ax                      
3773  imul    ax,ax,-64h                      
3776  add     ax,si                           
3778  mov     [bp-4h],ax                      
377b  call far sub_373a                       
3780  cmp     ax,18h                          
3783  ja      37BFh                           
3785  add     ax,ax                           
3787  xchg    ax,bx                           
3788  jmp     word ptr cs:[bx+378Dh]          
378d  int     37h                             
378f  ??? (FPU)                               
3791  jmp     0F6CBh                          
3794  aaa                                     
3795  div     word ptr [bx]                   
3797  add     ax,1338h                        
379a  cmp     [bx+di],ah                      
379c  cmp     [bx],ch                         
379e  cmp     [di],bh                         
37a0  cmp     [bp+di+38h],cl                  
37a3  pop     cx                              
37a4  cmp     [bx+38h],ah                     
37a7  jne     37E1h                           
37a9  cmp     word ptr [bx+si],-6Fh           
37ac  cmp     [bp-54C8h],bl                   
37b0  cmp     [bx+si-3AC8h],bh                
37b4  cmp     dl,dl                           
37b6  cmp     bh,bl                           
37b8  cmp     ah,ch                           
37ba  cmp     cl,bh                           
37bc  cmp     [8D39h],al                      
37c0  inc     si                              
37c1  fcom    qword ptr [6850h]               
37c5  sal     word ptr [bx],cl                
37c7  push    44A0h                           
37ca  jmp     3911h                           
37cd  lea     ax,[bp-24h]                     
37d0  push    ss                              
37d1  push    ax                              
37d2  push    37E1h                           ; segment seg1:0000
37d5  push    4482h                           
37d8  jmp     3911h                           
37db  lea     ax,[bp-24h]                     
37de  push    ss                              
37df  push    ax                              
37e0  push    37EFh                           ; segment seg1:0000
37e3  push    448Ch                           
37e6  jmp     3911h                           
37e9  lea     ax,[bp-24h]                     
37ec  push    ss                              
37ed  push    ax                              
37ee  push    37FDh                           ; segment seg1:0000
37f1  push    4496h                           
37f4  jmp     3911h                           
37f7  lea     ax,[bp-24h]                     
37fa  push    ss                              
37fb  push    ax                              
37fc  push    380Bh                           ; segment seg1:0000
37ff  push    44A8h                           
3802  jmp     3911h                           
3805  lea     ax,[bp-24h]                     
3808  push    ss                              
3809  push    ax                              
380a  push    3819h                           ; segment seg1:0000
380d  push    44B4h                           
3810  jmp     3911h                           
3813  lea     ax,[bp-24h]                     
3816  push    ss                              
3817  push    ax                              
3818  push    3827h                           ; segment seg1:0000
381b  push    44C0h                           
381e  jmp     3911h                           
3821  lea     ax,[bp-24h]                     
3824  push    ss                              
3825  push    ax                              
3826  push    3835h                           ; segment seg1:0000
3829  push    44CCh                           
382c  jmp     3911h                           
382f  lea     ax,[bp-24h]                     
3832  push    ss                              
3833  push    ax                              
3834  push    3843h                           ; segment seg1:0000
3837  push    44D6h                           
383a  jmp     3911h                           
383d  lea     ax,[bp-24h]                     
3840  push    ss                              
3841  push    ax                              
3842  push    3851h                           ; segment seg1:0000
3845  push    44E0h                           
3848  jmp     3911h                           
384b  lea     ax,[bp-24h]                     
384e  push    ss                              
384f  push    ax                              
3850  push    385Fh                           ; segment seg1:0000
3853  push    44EAh                           
3856  jmp     3911h                           
3859  lea     ax,[bp-24h]                     
385c  push    ss                              
385d  push    ax                              
385e  push    386Dh                           ; segment seg1:0000
3861  push    44F6h                           
3864  jmp     3911h                           
3867  lea     ax,[bp-24h]                     
386a  push    ss                              
386b  push    ax                              
386c  push    387Bh                           ; segment seg1:0000
386f  push    4500h                           
3872  jmp     3911h                           
3875  lea     ax,[bp-24h]                     
3878  push    ss                              
3879  push    ax                              
387a  push    3889h                           ; segment seg1:0000
387d  push    450Ch                           
3880  jmp     3911h                           
3883  lea     ax,[bp-24h]                     
3886  push    ss                              
3887  push    ax                              
3888  push    3897h                           ; segment seg1:0000
388b  push    4516h                           
388e  jmp     3911h                           
3891  lea     ax,[bp-24h]                     
3894  push    ss                              
3895  push    ax                              
3896  push    38A4h                           ; segment seg1:0000
3899  push    4522h                           
389c  jmp     3911h                           
389e  lea     ax,[bp-24h]                     
38a1  push    ss                              
38a2  push    ax                              
38a3  push    38B1h                           ; segment seg1:0000
38a6  push    452Ch                           
38a9  jmp     3911h                           
38ab  lea     ax,[bp-24h]                     
38ae  push    ss                              
38af  push    ax                              
38b0  push    38BEh                           ; segment seg1:0000
38b3  push    4538h                           
38b6  jmp     3911h                           
38b8  lea     ax,[bp-24h]                     
38bb  push    ss                              
38bc  push    ax                              
38bd  push    38CBh                           ; segment seg1:0000
38c0  push    4542h                           
38c3  jmp     3911h                           
38c5  lea     ax,[bp-24h]                     
38c8  push    ss                              
38c9  push    ax                              
38ca  push    38D8h                           ; segment seg1:0000
38cd  push    454Eh                           
38d0  jmp     3911h                           
38d2  lea     ax,[bp-24h]                     
38d5  push    ss                              
38d6  push    ax                              
38d7  push    38E5h                           ; segment seg1:0000
38da  push    4558h                           
38dd  jmp     3911h                           
38df  lea     ax,[bp-24h]                     
38e2  push    ss                              
38e3  push    ax                              
38e4  push    38F2h                           ; segment seg1:0000
38e7  push    4562h                           
38ea  jmp     3911h                           
38ec  lea     ax,[bp-24h]                     
38ef  push    ss                              
38f0  push    ax                              
38f1  push    38FFh                           ; segment seg1:0000
38f4  push    456Eh                           
38f7  jmp     3911h                           
38f9  lea     ax,[bp-24h]                     
38fc  push    ss                              
38fd  push    ax                              
38fe  push    390Ch                           ; segment seg1:0000
3901  push    457Ah                           
3904  jmp     3911h                           
3906  lea     ax,[bp-24h]                     
3909  push    ss                              
390a  push    ax                              
390b  push    3922h                           ; segment seg1:0000
390e  push    4586h                           
3911  call far KERNEL.LSTRCPY                 ; "LEO 420-"  "LEO 440-"  "LEO 430-"  "LEO 435VP-"  "LEO EBL50-"  "LEO EBL100-"  "LEO 1550-"  "LEO 1530-"  "LEO 1560-"  "LEO 438VP-"  "LEO 1450-"  "LEO 1450VP-"  "LEO 1460-"  "LEO 1460VP-"  "LEO 1420-"  "LEO 1420VP-"  "LEO 1430-"  "LEO 1430VP-"  "LEO 1525-"  "LEO 1455-"  "LEO 1455VP-"  "LEO 1525VP-"  "LEO 1530VP-"  "LEO 1550VP-"
3916  push    word ptr [bp-4h]                
3919  push    word ptr [bp-2h]                
391c  lea     ax,[bp-24h]                     
391f  push    ss                              
3920  push    ax                              
3921  push    36D9h                           ; segment seg1:0000
3924  push    4592h                           
3927  push    word ptr [bp+8h]                
392a  push    word ptr [bp+6h]                
392d  call far USER._WSPRINTF                 ; "%s%2.2u-%2.2u"
3932  add     sp,10h                          
3935  xor     ax,ax                           
3937  pop     si                              
3938  leave                                   
3939  retf    4h                              

; ----- sub_393c -----
393c  call far M200.EO_COLUMN_TYPE            
3941  retf                                    

; ----- sub_3942 -----
3942  push    bp                              
3943  mov     bp,sp                           
3945  push    word ptr [bp+6h]                
3948  call far M070.SETVISMODE                
394d  leave                                   
394e  retf    2h                              
3951  add     [bx+si],al                      

; ----- sub_3952 -----
3952  push    bp                              
3953  mov     bp,sp                           
3955  push    word ptr [bp+8h]                
3958  push    word ptr [bp+6h]                
395b  call far M007.GET_SRV_CONFIG            
3960  leave                                   
3961  retf    4h                              

; ----- sub_3964 -----
3964  push    bp                              
3965  mov     bp,sp                           
3967  push    si                              
3968  push    word ptr [bp+8h]                
396b  push    word ptr [bp+6h]                
396e  call far M007.SET_SRV_CONFIG            
3973  mov     si,ax                           
3975  call far sub_36ae                       
397a  cmp     si,19Ch                         
397e  je      398Ah                           
3980  cmp     si,19Eh                         
3984  je      398Ah                           
3986  mov     ax,si                           
3988  jmp     398Ch                           
398a  xor     ax,ax                           
398c  pop     si                              
398d  leave                                   
398e  retf    4h                              
3991  add     [bx+si],al                      

; ----- sub_3992 -----
3992  push    bp                              
3993  mov     bp,sp                           
3995  push    si                              
3996  mov     si,[bp+6h]                      
3999  mov     es,[bp+8h]                      
399c  wait                                    
399d  fld     dword ptr es:[si]               
39a0  wait                                    
39a1  fmul    dword ptr [2CE0h]               ; [ds] = 1000000
39a5  sub     sp,4h                           
39a8  mov     bx,sp                           
39aa  wait                                    
39ab  fstp    dword ptr ss:[bx]               
39ae  wait                                    
39af  fld     dword ptr es:[si+4h]            
39b3  wait                                    
39b4  fmul    dword ptr [2CE0h]               ; [ds] = 1000000
39b8  sub     sp,4h                           
39bb  mov     bx,sp                           
39bd  wait                                    
39be  fstp    dword ptr ss:[bx]               
39c1  nop                                     
39c2  wait                                    
39c3  call far M200.SETBEAMSHIFTDIST          
39c8  pop     si                              
39c9  leave                                   
39ca  retf    4h                              
39cd  add     [bx+si],al                      

; ----- sub_39ce -----
39ce  push    bp                              
39cf  mov     bp,sp                           
39d1  push    si                              
39d2  mov     si,[bp+6h]                      
39d5  mov     es,[bp+8h]                      
39d8  push    word ptr es:[si+2h]             
39dc  push    word ptr es:[si]                
39df  push    word ptr es:[si+6h]             
39e3  push    word ptr es:[si+4h]             
39e7  push    word ptr es:[si+0Ah]            
39eb  push    word ptr es:[si+8h]             
39ef  push    word ptr es:[si+0Eh]            
39f3  push    word ptr es:[si+0Ch]            
39f7  push    word ptr es:[si+12h]            
39fb  push    word ptr es:[si+10h]            
39ff  push    word ptr es:[si+16h]            
3a03  push    word ptr es:[si+14h]            
3a07  call far M007.MOVESTAGEXYZTRM           
3a0c  pop     si                              
3a0d  leave                                   
3a0e  retf    4h                              
3a11  add     [bx+si],al                      

; ----- sub_3a12 -----
3a12  push    bp                              
3a13  mov     bp,sp                           
3a15  push    si                              
3a16  mov     si,[bp+6h]                      
3a19  mov     es,[bp+8h]                      
3a1c  push    word ptr es:[si+2h]             
3a20  push    word ptr es:[si]                
3a23  push    word ptr es:[si+6h]             
3a27  push    word ptr es:[si+4h]             
3a2b  push    word ptr es:[si+0Ah]            
3a2f  push    word ptr es:[si+8h]             
3a33  push    word ptr es:[si+0Eh]            
3a37  push    word ptr es:[si+0Ch]            
3a3b  push    word ptr es:[si+12h]            
3a3f  push    word ptr es:[si+10h]            
3a43  push    word ptr es:[si+16h]            
3a47  push    word ptr es:[si+14h]            
3a4b  call far M500.SETSTAGEPOSITION          
3a50  pop     si                              
3a51  leave                                   
3a52  retf    4h                              
3a55  add     [bx+si],al                      

; ----- sub_3a56 -----
3a56  enter   18h,0h                          
3a5a  push    di                              
3a5b  push    si                              
3a5c  mov     si,[bp+6h]                      
3a5f  push    84h                             
3a62  lea     ax,[bp-4h]                      
3a65  push    ax                              
3a66  call far M007.M007_GETVALUE             ; AP_STAGE_AT_X
3a6b  mov     bx,ax                           
3a6d  mov     ax,ss:[bx]                      
3a70  mov     dx,ss:[bx+2h]                   
3a74  mov     es,[bp+8h]                      
3a77  mov     es:[si],ax                      
3a7a  mov     es:[si+2h],dx                   

; ----- sub_3a7e -----
3a7e  push    85h                             
3a81  lea     ax,[bp-8h]                      
3a84  push    ax                              
3a85  mov     di,es                           
3a87  call far M007.M007_GETVALUE             ; AP_STAGE_AT_Y
3a8c  mov     bx,ax                           
3a8e  mov     ax,ss:[bx]                      
3a91  mov     dx,ss:[bx+2h]                   
3a95  mov     es,di                           
3a97  mov     es:[si+4h],ax                   
3a9b  mov     es:[si+6h],dx                   
3a9f  push    86h                             
3aa2  lea     ax,[bp-0Ch]                     
3aa5  push    ax                              
3aa6  call far M007.M007_GETVALUE             ; AP_STAGE_AT_Z
3aab  mov     bx,ax                           
3aad  mov     ax,ss:[bx]                      
3ab0  mov     dx,ss:[bx+2h]                   
3ab4  mov     es,di                           
3ab6  mov     es:[si+8h],ax                   
3aba  mov     es:[si+0Ah],dx                  
3abe  push    113h                            
3ac1  lea     ax,[bp-10h]                     
3ac4  push    ax                              
3ac5  call far M007.M007_GETVALUE             ; AP_STAGE_AT_T
3aca  mov     bx,ax                           
3acc  mov     ax,ss:[bx]                      
3acf  mov     dx,ss:[bx+2h]                   
3ad3  mov     es,di                           
3ad5  mov     es:[si+0Ch],ax                  
3ad9  mov     es:[si+0Eh],dx                  
3add  push    112h                            
3ae0  lea     ax,[bp-14h]                     
3ae3  push    ax                              
3ae4  call far M007.M007_GETVALUE             ; AP_STAGE_AT_R
3ae9  mov     bx,ax                           
3aeb  mov     ax,ss:[bx]                      
3aee  mov     dx,ss:[bx+2h]                   
3af2  mov     es,di                           
3af4  mov     es:[si+10h],ax                  
3af8  mov     es:[si+12h],dx                  
3afc  push    15Eh                            
3aff  lea     ax,[bp-18h]                     
3b02  push    ax                              
3b03  call far M007.M007_GETVALUE             ; AP_STAGE_AT_M
3b08  mov     bx,ax                           
3b0a  mov     ax,ss:[bx]                      
3b0d  mov     dx,ss:[bx+2h]                   
3b11  mov     es,di                           
3b13  mov     es:[si+14h],ax                  
3b17  mov     es:[si+16h],dx                  
3b1b  pop     si                              
3b1c  pop     di                              
3b1d  leave                                   
3b1e  retf    4h                              
3b21  add     [bx+si],al                      

; ----- sub_3b22 -----
3b22  enter   17Ch,0h                         
3b26  push    di                              
3b27  push    si                              
3b28  xor     bx,bx                           
3b2a  mov     di,[bp+6h]                      
3b2d  jmp     3B73h                           
3b2f  mov     si,bx                           
3b31  shl     si,4h                           
3b34  add     si,di                           
3b36  mov     es,[bp+8h]                      
3b39  mov     word ptr es:[si+10h],0h         
3b3f  mov     ax,[2CE4h]                      
3b42  mov     dx,[2CE6h]                      
3b46  mov     es:[si+2h],ax                   
3b4a  mov     es:[si+4h],dx                   
3b4e  mov     ax,[2CE4h]                      
3b51  mov     dx,[2CE6h]                      
3b55  mov     es:[si+6h],ax                   
3b59  mov     es:[si+8h],dx                   
3b5d  mov     ax,[2CE4h]                      
3b60  mov     dx,[2CE6h]                      
3b64  mov     es:[si+0Ah],ax                  
3b68  mov     es:[si+0Ch],dx                  
3b6c  mov     word ptr es:[si+0Eh],0h         
3b72  inc     bx                              
3b73  cmp     bx,7h                           
3b76  jl      3B2Fh                           
3b78  call far sub_28f4                       
3b7d  mov     es,[bp+8h]                      
3b80  mov     es:[di],ax                      
3b83  cmp     word ptr [3164h],1h             
3b88  jne     3B9Bh                           
3b8a  push    0CCh                            
3b8d  call far M007.M007_GETSTATE             ; DP_EBBU
3b92  dec     ax                              
3b93  jne     3B9Bh                           
3b95  mov     es,[bp+8h]                      
3b98  inc     word ptr es:[di]                
3b9b  cmp     word ptr [3164h],8h             
3ba0  jne     3BA5h                           
3ba2  jmp     3C80h                           
3ba5  cmp     word ptr [3164h],7h             
3baa  je      3BCFh                           
3bac  cmp     word ptr [3164h],9h             
3bb1  je      3BCFh                           
3bb3  cmp     word ptr [3164h],13h            
3bb8  je      3BCFh                           
3bba  cmp     word ptr [3164h],16h            
3bbf  je      3BCFh                           
3bc1  cmp     word ptr [3164h],17h            
3bc6  je      3BCFh                           
3bc8  cmp     word ptr [3164h],18h            
3bcd  jne     3BD2h                           
3bcf  jmp     3C80h                           
3bd2  lea     ax,[bp-70h]                     
3bd5  push    ss                              
3bd6  push    ax                              
3bd7  call far M200.EXPORTAPERTURETABLE       
3bdc  cmp     word ptr [3164h],4h             
3be1  je      3C0Dh                           
3be3  cmp     word ptr [3164h],0Ah            
3be8  je      3C0Dh                           
3bea  cmp     word ptr [3164h],10h            
3bef  je      3C0Dh                           
3bf1  cmp     word ptr [3164h],12h            
3bf6  je      3C0Dh                           
3bf8  cmp     word ptr [3164h],0Ch            
3bfd  je      3C0Dh                           
3bff  cmp     word ptr [3164h],15h            
3c04  je      3C0Dh                           
3c06  cmp     word ptr [3164h],0Eh            
3c0b  jne     3C13h                           
3c0d  mov     es,[bp+8h]                      
3c10  inc     word ptr es:[di]                
3c13  xor     bx,bx                           
3c15  mov     es,[bp+8h]                      
3c18  cmp     es:[di],bx                      
3c1b  jge     3C20h                           
3c1d  jmp     3CCAh                           
3c20  mov     si,bx                           
3c22  shl     si,4h                           
3c25  mov     ax,[bp+si-62h]                  
3c28  mov     cx,si                           
3c2a  add     si,di                           
3c2c  mov     es:[si+10h],ax                  
3c30  mov     ax,si                           
3c32  mov     si,cx                           
3c34  mov     dx,[bp+si-70h]                  
3c37  mov     cx,[bp+si-6Eh]                  
3c3a  mov     [bp-17Ch],si                    
3c3e  mov     si,ax                           
3c40  mov     es:[si+2h],dx                   
3c44  mov     es:[si+4h],cx                   
3c48  mov     si,[bp-17Ch]                    
3c4c  mov     cx,[bp+si-64h]                  
3c4f  mov     si,ax                           
3c51  mov     es:[si+0Eh],cx                  
3c55  mov     si,[bp-17Ch]                    
3c59  mov     cx,[bp+si-6Ch]                  
3c5c  mov     dx,[bp+si-6Ah]                  
3c5f  mov     si,ax                           
3c61  mov     es:[si+6h],cx                   
3c65  mov     es:[si+8h],dx                   
3c69  mov     si,[bp-17Ch]                    
3c6d  mov     cx,[bp+si-68h]                  
3c70  mov     dx,[bp+si-66h]                  
3c73  mov     si,ax                           
3c75  mov     es:[si+0Ah],cx                  
3c79  mov     es:[si+0Ch],dx                  
3c7d  inc     bx                              
3c7e  jmp     3C15h                           
3c80  lea     ax,[bp-17Ah]                    
3c84  push    ss                              
3c85  push    ax                              
3c86  call far M200.EXPORTZ130APERTURETABLE   
3c8b  xor     si,si                           
3c8d  mov     es,[bp+8h]                      
3c90  cmp     es:[di],si                      
3c93  jl      3CCAh                           
3c95  imul    bx,si,26h                       
3c98  lea     ax,[bp-156h]                    
3c9c  mov     cx,bx                           
3c9e  add     bx,ax                           
3ca0  mov     ax,ss:[bx]                      
3ca3  mov     bx,si                           
3ca5  shl     bx,4h                           
3ca8  add     bx,di                           
3caa  mov     es:[bx+10h],ax                  
3cae  mov     ax,bx                           
3cb0  lea     bx,[bp-17Ah]                    
3cb4  add     bx,cx                           
3cb6  mov     cx,ss:[bx]                      
3cb9  mov     dx,ss:[bx+2h]                   
3cbd  mov     bx,ax                           
3cbf  mov     es:[bx+2h],cx                   
3cc3  mov     es:[bx+4h],dx                   
3cc7  inc     si                              
3cc8  jmp     3C8Dh                           
3cca  pop     si                              
3ccb  pop     di                              
3ccc  leave                                   
3ccd  retf    4h                              

; ----- sub_3cd0 -----
3cd0  enter   74h,0h                          
3cd4  push    di                              
3cd5  push    si                              
3cd6  xor     bx,bx                           
3cd8  mov     si,bx                           
3cda  shl     si,4h                           
3cdd  mov     word ptr [bp+si-62h],0h         
3ce2  mov     ax,[2CE4h]                      
3ce5  mov     dx,[2CE6h]                      
3ce9  mov     [bp+si-70h],ax                  
3cec  mov     [bp+si-6Eh],dx                  
3cef  mov     [bp+si-6Ch],ax                  
3cf2  mov     [bp+si-6Ah],dx                  
3cf5  mov     [bp+si-68h],ax                  
3cf8  mov     [bp+si-66h],dx                  
3cfb  mov     word ptr [bp+si-64h],0h         
3d00  inc     bx                              
3d01  cmp     bx,6h                           
3d04  jl      3CD8h                           
3d06  xor     bx,bx                           
3d08  mov     di,[bp+6h]                      
3d0b  jmp     3D6Ch                           
3d0d  mov     si,bx                           
3d0f  shl     si,4h                           
3d12  mov     ax,si                           
3d14  add     si,di                           
3d16  mov     cx,es:[si+10h]                  
3d1a  mov     dx,si                           
3d1c  mov     si,ax                           
3d1e  mov     [bp+si-62h],cx                  
3d21  mov     si,dx                           
3d23  mov     cx,es:[si+2h]                   
3d27  mov     dx,es:[si+4h]                   
3d2b  mov     [bp-74h],si                     
3d2e  mov     [bp-72h],es                     
3d31  mov     si,ax                           
3d33  mov     [bp+si-70h],cx                  
3d36  mov     [bp+si-6Eh],dx                  
3d39  les     si,[bp-74h]                     
3d3c  mov     cx,es:[si+6h]                   
3d40  mov     dx,es:[si+8h]                   
3d44  mov     si,ax                           
3d46  mov     [bp+si-6Ch],cx                  
3d49  mov     [bp+si-6Ah],dx                  
3d4c  les     si,[bp-74h]                     
3d4f  mov     cx,es:[si+0Ah]                  
3d53  mov     dx,es:[si+0Ch]                  
3d57  mov     si,ax                           
3d59  mov     [bp+si-68h],cx                  
3d5c  mov     [bp+si-66h],dx                  
3d5f  les     si,[bp-74h]                     
3d62  mov     cx,es:[si+0Eh]                  
3d66  mov     si,ax                           
3d68  mov     [bp+si-64h],cx                  
3d6b  inc     bx                              
3d6c  mov     es,[bp+8h]                      
3d6f  cmp     es:[di],bx                      
3d72  jge     3D0Dh                           
3d74  lea     ax,[bp-70h]                     
3d77  push    ss                              
3d78  push    ax                              
3d79  call far M200.IMPORTAPERTURETABLE       
3d7e  pop     si                              
3d7f  pop     di                              
3d80  leave                                   
3d81  retf    4h                              

; ----- sub_3d84 -----
3d84  enter   4h,0h                           
3d88  push    di                              
3d89  push    si                              
3d8a  push    800h                            
3d8d  call far sub_04b7                       
3d92  pop     bx                              
3d93  mov     [bp-2h],dx                      
3d96  xor     si,si                           
3d98  mov     [bp-4h],ax                      
3d9b  mov     di,[bp+6h]                      
3d9e  mov     cx,ax                           
3da0  jmp     3DCAh                           
3da2  lea     bx,[di+6h]                      
3da5  mov     al,es:[bx+si]                   
3da8  mov     es,[bp-2h]                      
3dab  mov     bx,si                           
3dad  add     bx,si                           
3daf  add     bx,cx                           
3db1  mov     es:[bx],al                      
3db4  mov     ax,bx                           
3db6  lea     bx,[di+406h]                    
3dba  mov     es,[bp+8h]                      
3dbd  mov     dl,es:[bx+si]                   
3dc0  mov     bx,ax                           
3dc2  mov     es,[bp-2h]                      
3dc5  mov     es:[bx+1h],dl                   
3dc9  inc     si                              
3dca  mov     es,[bp+8h]                      
3dcd  cmp     es:[di+4h],si                   
3dd1  jg      3DA2h                           
3dd3  cmp     word ptr es:[di],1h             
3dd7  jne     3E00h                           
3dd9  push    word ptr es:[di+2h]             
3ddd  push    word ptr es:[di+4h]             
3de1  push    word ptr [bp-2h]                
3de4  push    word ptr [bp-4h]                
3de7  call far M300.OPLUT_SET_RED_PTS         
3dec  mov     si,ax                           
3dee  push    word ptr [bp-2h]                
3df1  push    word ptr [bp-4h]                
3df4  call far sub_0496                       
3df9  add     sp,4h                           
3dfc  mov     ax,si                           
3dfe  jmp     3E61h                           
3e00  cmp     word ptr es:[di],2h             
3e04  jne     3E1Bh                           
3e06  push    word ptr es:[di+2h]             
3e0a  push    word ptr es:[di+4h]             
3e0e  push    word ptr [bp-2h]                
3e11  push    word ptr [bp-4h]                
3e14  call far M300.OPLUT_SET_GREEN_PTS       
3e19  jmp     3DECh                           
3e1b  cmp     word ptr es:[di],3h             
3e1f  jne     3E36h                           
3e21  push    word ptr es:[di+2h]             
3e25  push    word ptr es:[di+4h]             
3e29  push    word ptr [bp-2h]                
3e2c  push    word ptr [bp-4h]                
3e2f  call far M300.OPLUT_SET_BLUE_PTS        
3e34  jmp     3DECh                           
3e36  cmp     word ptr es:[di],4h             
3e3a  jne     3E51h                           
3e3c  push    word ptr es:[di+2h]             
3e40  push    word ptr es:[di+4h]             
3e44  push    word ptr [bp-2h]                
3e47  push    word ptr [bp-4h]                
3e4a  call far M300.OPLUT_SET_GREY_PTS        
3e4f  jmp     3DECh                           
3e51  push    word ptr [bp-2h]                
3e54  push    word ptr [bp-4h]                
3e57  call far sub_0496                       
3e5c  add     sp,4h                           
3e5f  xor     ax,ax                           
3e61  pop     si                              
3e62  pop     di                              
3e63  leave                                   
3e64  retf    4h                              
3e67  add     [bx+si],al                      

; ----- sub_3e68 -----
3e68  push    bp                              
3e69  mov     bp,sp                           
3e6b  push    si                              
3e6c  mov     si,[bp+6h]                      
3e6f  mov     es,[bp+8h]                      
3e72  push    word ptr es:[si]                
3e75  push    word ptr es:[si+2h]             
3e79  push    word ptr es:[si+4h]             
3e7d  push    word ptr es:[si+6h]             
3e81  push    word ptr es:[si+8h]             
3e85  call far M300.OPLUT_RGB_SET             
3e8a  pop     si                              
3e8b  leave                                   
3e8c  retf    4h                              
3e8f  add     [bx+si],al                      

; ----- sub_3e90 -----
3e90  push    bp                              
3e91  mov     bp,sp                           
3e93  push    si                              
3e94  mov     si,[bp+6h]                      
3e97  mov     es,[bp+8h]                      
3e9a  cmp     word ptr es:[si],1h             
3e9e  jne     3EB3h                           
3ea0  push    word ptr es:[si+2h]             
3ea4  push    word ptr es:[si+4h]             
3ea8  push    word ptr es:[si+6h]             
3eac  call far M300.OPLUT_SET_RED             
3eb1  jmp     3EE7h                           
3eb3  cmp     word ptr es:[si],2h             
3eb7  jne     3ECCh                           
3eb9  push    word ptr es:[si+2h]             
3ebd  push    word ptr es:[si+4h]             
3ec1  push    word ptr es:[si+6h]             
3ec5  call far M300.OPLUT_SET_GREEN           
3eca  jmp     3EE7h                           
3ecc  cmp     word ptr es:[si],3h             
3ed0  jne     3EE5h                           
3ed2  push    word ptr es:[si+2h]             
3ed6  push    word ptr es:[si+4h]             
3eda  push    word ptr es:[si+6h]             
3ede  call far M300.OPLUT_SET_BLUE            
3ee3  jmp     3EE7h                           
3ee5  xor     ax,ax                           
3ee7  pop     si                              
3ee8  leave                                   
3ee9  retf    4h                              

; ----- sub_3eec -----
3eec  push    bp                              
3eed  mov     bp,sp                           
3eef  push    si                              
3ef0  mov     si,[bp+6h]                      
3ef3  mov     es,[bp+8h]                      
3ef6  push    word ptr es:[si]                
3ef9  push    word ptr es:[si+4h]             
3efd  push    word ptr es:[si+2h]             
3f01  push    word ptr es:[si+8h]             
3f05  push    word ptr es:[si+6h]             
3f09  call far M300.OPLUT_BRI_AND_CONT        
3f0e  pop     si                              
3f0f  leave                                   
3f10  retf    4h                              
3f13  add     [bx+si],al                      

; ----- sub_3f14 -----
3f14  push    bp                              
3f15  mov     bp,sp                           
3f17  push    si                              
3f18  mov     si,[bp+6h]                      
3f1b  mov     es,[bp+8h]                      
3f1e  push    word ptr es:[si]                
3f21  push    word ptr es:[si+4h]             
3f25  push    word ptr es:[si+2h]             
3f29  push    word ptr es:[si+8h]             
3f2d  push    word ptr es:[si+6h]             
3f31  call far M300.OPLUT_INV                 
3f36  pop     si                              
3f37  leave                                   
3f38  retf    4h                              
3f3b  add     [bx+si],al                      

; ----- sub_3f3c -----
3f3c  push    bp                              
3f3d  mov     bp,sp                           
3f3f  push    si                              
3f40  mov     si,[bp+6h]                      
3f43  mov     es,[bp+8h]                      
3f46  push    word ptr es:[si]                
3f49  push    word ptr es:[si+4h]             
3f4d  push    word ptr es:[si+2h]             
3f51  push    word ptr es:[si+8h]             
3f55  push    word ptr es:[si+6h]             
3f59  call far M300.OPLUT_LIN                 
3f5e  pop     si                              
3f5f  leave                                   
3f60  retf    4h                              
3f63  add     [bx+si],al                      

; ----- sub_3f64 -----
3f64  push    bp                              
3f65  mov     bp,sp                           
3f67  push    si                              
3f68  mov     si,[bp+6h]                      
3f6b  mov     es,[bp+8h]                      
3f6e  push    word ptr es:[si]                
3f71  push    word ptr es:[si+4h]             
3f75  push    word ptr es:[si+2h]             
3f79  call far M300.OPLUT_GAMMA               
3f7e  pop     si                              
3f7f  leave                                   
3f80  retf    4h                              
3f83  add     [bx+si],al                      

; ----- sub_3f84 -----
3f84  push    bp                              
3f85  mov     bp,sp                           
3f87  les     bx,[bp+6h]                      
3f8a  push    word ptr es:[bx]                
3f8d  call far M300.DRAW_GREY_WEDGE           
3f92  leave                                   
3f93  retf    4h                              

; ----- sub_3f96 -----
3f96  push    bp                              
3f97  mov     bp,sp                           
3f99  push    si                              
3f9a  mov     si,[bp+6h]                      
3f9d  mov     es,[bp+8h]                      
3fa0  push    word ptr es:[si]                
3fa3  push    word ptr es:[si+2h]             
3fa7  push    word ptr es:[si+4h]             
3fab  call far M300.READ_AN_IMAGE_PIXEL       
3fb0  pop     si                              
3fb1  leave                                   
3fb2  retf    4h                              
3fb5  add     [bx+si],al                      

; ----- sub_3fb6 -----
3fb6  push    bp                              
3fb7  mov     bp,sp                           
3fb9  push    si                              
3fba  mov     si,[bp+6h]                      
3fbd  mov     es,[bp+8h]                      
3fc0  push    word ptr es:[si]                
3fc3  push    word ptr es:[si+2h]             
3fc7  lea     ax,[si+4h]                      
3fca  push    es                              
3fcb  push    ax                              
3fcc  call far M300.OPLUT_RGB_READ            
3fd1  pop     si                              
3fd2  leave                                   
3fd3  retf    4h                              

; ----- sub_3fd6 -----
3fd6  push    bp                              
3fd7  mov     bp,sp                           
3fd9  push    si                              
3fda  mov     si,[bp+6h]                      
3fdd  mov     es,[bp+8h]                      
3fe0  push    word ptr es:[si]                
3fe3  push    word ptr es:[si+2h]             
3fe7  push    word ptr es:[si+4h]             
3feb  lea     ax,[si+6h]                      
3fee  push    es                              
3fef  push    ax                              
3ff0  call far M300.OPLUT_LOAD                
3ff5  pop     si                              
3ff6  leave                                   
3ff7  retf    4h                              

; ----- sub_3ffa -----
3ffa  push    bp                              
3ffb  mov     bp,sp                           
3ffd  push    si                              
3ffe  mov     si,[bp+6h]                      
4001  mov     es,[bp+8h]                      
4004  push    word ptr es:[si]                
4007  push    word ptr es:[si+2h]             
400b  push    word ptr es:[si+4h]             
400f  lea     ax,[si+6h]                      
4012  push    es                              
4013  push    ax                              
4014  call far M300.OPLUT_READ                
4019  pop     si                              
401a  leave                                   
401b  retf    4h                              

; ----- sub_401e -----
401e  enter   4h,0h                           
4022  push    si                              
4023  mov     si,[bp+6h]                      
4026  mov     ax,si                           
4028  mov     dx,[bp+8h]                      
402b  add     ax,6h                           
402e  mov     [bp-2h],dx                      
4031  mov     es,dx                           
4033  cmp     word ptr es:[si],1h             
4037  jne     404Ah                           
4039  push    word ptr es:[si+2h]             
403d  push    word ptr es:[si+4h]             
4041  push    dx                              
4042  push    ax                              
4043  call far M300.OPLUT_READ_RED            
4048  jmp     4080h                           
404a  mov     es,dx                           
404c  cmp     word ptr es:[si],2h             
4050  jne     4065h                           
4052  push    word ptr es:[si+2h]             
4056  push    word ptr es:[si+4h]             
405a  push    word ptr [bp-2h]                
405d  push    ax                              
405e  call far M300.OPLUT_READ_GREEN          
4063  jmp     4080h                           
4065  cmp     word ptr es:[si],3h             
4069  jne     407Eh                           
406b  push    word ptr es:[si+2h]             
406f  push    word ptr es:[si+4h]             
4073  push    word ptr [bp-2h]                
4076  push    ax                              
4077  call far M300.OPLUT_READ_BLUE           
407c  jmp     4080h                           
407e  xor     ax,ax                           
4080  pop     si                              
4081  leave                                   
4082  retf    4h                              
4085  add     [bx+si],al                      

; ----- sub_4086 -----
4086  push    bp                              
4087  mov     bp,sp                           
4089  push    si                              
408a  mov     si,[bp+6h]                      
408d  mov     es,[bp+8h]                      
4090  push    word ptr es:[si]                
4093  push    word ptr es:[si+2h]             
4097  push    word ptr es:[si+4h]             
409b  push    word ptr es:[si+6h]             
409f  push    word ptr es:[si+8h]             
40a3  push    word ptr es:[si+0Ah]            
40a7  call far M300.OPLUT_FILL                
40ac  pop     si                              
40ad  leave                                   
40ae  retf    4h                              
40b1  add     [bx+si],al                      

; ----- sub_40b2 -----
40b2  push    bp                              
40b3  mov     bp,sp                           
40b5  les     bx,[bp+6h]                      
40b8  push    word ptr es:[bx]                
40bb  call far M300.OPLUT_QLIN                
40c0  leave                                   
40c1  retf    4h                              

; ----- sub_40c4 -----
40c4  push    bp                              
40c5  mov     bp,sp                           
40c7  les     bx,[bp+6h]                      
40ca  push    word ptr es:[bx]                
40cd  call far M300.OPLUT_QINV                
40d2  leave                                   
40d3  retf    4h                              

; ----- sub_40d6 -----
40d6  push    bp                              
40d7  mov     bp,sp                           
40d9  push    si                              
40da  mov     si,[bp+6h]                      
40dd  mov     es,[bp+8h]                      
40e0  push    word ptr es:[si]                
40e3  push    word ptr es:[si+2h]             
40e7  call far M300.OPLUT_SAVE                
40ec  pop     si                              
40ed  leave                                   
40ee  retf    4h                              
40f1  add     [bx+si],al                      

; ----- sub_40f2 -----
40f2  push    bp                              
40f3  mov     bp,sp                           
40f5  push    si                              
40f6  mov     si,[bp+6h]                      
40f9  mov     es,[bp+8h]                      
40fc  push    word ptr es:[si]                
40ff  push    word ptr es:[si+2h]             
4103  call far M300.OPLUT_RESTORE             
4108  pop     si                              
4109  leave                                   
410a  retf    4h                              
410d  add     [bx+si],al                      

; ----- sub_410e -----
410e  enter   4h,0h                           
4112  push    si                              
4113  mov     si,[bp+6h]                      
4116  mov     ax,si                           
4118  mov     dx,[bp+8h]                      
411b  add     ax,8h                           
411e  mov     [bp-2h],dx                      
4121  mov     es,dx                           
4123  cmp     word ptr es:[si],1h             
4127  jne     413Eh                           
4129  push    word ptr es:[si+2h]             
412d  push    word ptr es:[si+4h]             
4131  push    word ptr es:[si+6h]             
4135  push    dx                              
4136  push    ax                              
4137  call far M300.OPLUT_READ_RED_LUT        
413c  jmp     417Ch                           
413e  mov     es,dx                           
4140  cmp     word ptr es:[si],2h             
4144  jne     415Dh                           
4146  push    word ptr es:[si+2h]             
414a  push    word ptr es:[si+4h]             
414e  push    word ptr es:[si+6h]             
4152  push    word ptr [bp-2h]                
4155  push    ax                              
4156  call far M300.OPLUT_READ_GREEN_LUT      
415b  jmp     417Ch                           
415d  cmp     word ptr es:[si],3h             
4161  jne     417Ah                           
4163  push    word ptr es:[si+2h]             
4167  push    word ptr es:[si+4h]             
416b  push    word ptr es:[si+6h]             
416f  push    word ptr [bp-2h]                
4172  push    ax                              
4173  call far M300.OPLUT_READ_BLUE_LUT       
4178  jmp     417Ch                           
417a  xor     ax,ax                           
417c  pop     si                              
417d  leave                                   
417e  retf    4h                              
4181  add     [bx+si],al                      

; ----- sub_4182 -----
4182  enter   8h,0h                           
4186  push    di                              
4187  push    si                              
4188  mov     di,[bp+6h]                      
418b  mov     es,[bp+8h]                      
418e  mov     ax,es:[di]                      
4191  mov     dx,es:[di+2h]                   
4195  mov     [bp-8h],ax                      
4198  mov     [bp-6h],dx                      
419b  lea     ax,[bp-8h]                      
419e  push    ss                              
419f  push    ax                              
41a0  call far M800.Z130PIXELDATA             
41a5  mov     si,ax                           
41a7  mov     ax,[bp-4h]                      
41aa  mov     dx,[bp-2h]                      
41ad  mov     es,[bp+8h]                      
41b0  mov     es:[di+4h],ax                   
41b4  mov     es:[di+6h],dx                   
41b8  mov     ax,si                           
41ba  pop     si                              
41bb  pop     di                              
41bc  leave                                   
41bd  retf    4h                              

; ----- sub_41c0 -----
41c0  enter   4h,0h                           
41c4  push    di                              
41c5  push    si                              
41c6  mov     si,[bp+6h]                      
41c9  mov     es,[bp+8h]                      
41cc  push    word ptr es:[si+6h]             
41d0  push    word ptr es:[si+4h]             
41d4  push    word ptr es:[si+8h]             
41d8  push    word ptr es:[si+0Ch]            
41dc  push    word ptr es:[si+0Ah]            
41e0  push    word ptr es:[si+10h]            
41e4  push    word ptr es:[si+0Eh]            
41e8  lea     ax,[bp-4h]                      
41eb  push    ax                              
41ec  mov     di,es                           
41ee  call far M200.Z130_GET_COVARIANCE       
41f3  mov     bx,ax                           
41f5  mov     ax,ss:[bx]                      
41f8  mov     dx,ss:[bx+2h]                   
41fc  mov     es,di                           
41fe  mov     es:[si],ax                      
4201  mov     es:[si+2h],dx                   
4205  pop     si                              
4206  pop     di                              
4207  leave                                   
4208  retf    4h                              
420b  add     [bx+si],al                      

; ----- sub_420c -----
420c  push    bp                              
420d  mov     bp,sp                           
420f  mov     ax,[bp+6h]                      
4212  cmp     ax,6h                           
4215  ja      422Dh                           
4217  add     ax,ax                           
4219  xchg    ax,bx                           
421a  jmp     word ptr cs:[bx+421Fh]          
421f  xor     [bp+si+38h],ax                  
4222  inc     dx                              
4223  aas                                     
4224  inc     dx                              
4225  dec     bx                              
4226  inc     dx                              
4227  push    dx                              
4228  inc     dx                              
4229  pop     cx                              
422a  inc     dx                              
422b  insw                                    
422c  inc     dx                              
422d  xor     ax,ax                           
422f  jmp     427Eh                           
4231  call far M200.SETSHIFT_START            
4236  jmp     427Bh                           
4238  call far M200.SETSHIFT_END              
423d  jmp     427Bh                           
423f  call far sub_36ee                       
4244  call far M600.FORCE_SAVE_NVRAM          
4249  jmp     427Bh                           
424b  call far M200.GET_FEATURESCAN_STATUS    
4250  jmp     427Eh                           
4252  call far M500.SUSPENDSTAGE              
4257  jmp     427Bh                           
4259  push    110h                            
425c  call far M007.M007_GETSTATE             ; DP_SCANGEN
4261  mov     [3Ch],ax                        
4264  push    110h                            
4267  push    0h                              
4269  push    0h                              
426b  jmp     4276h                           
426d  push    110h                            
4270  mov     ax,[3Ch]                        
4273  cwd                                     
4274  push    dx                              
4275  push    ax                              
4276  call far M007.SETSTATE                  
427b  mov     ax,1h                           
427e  leave                                   
427f  retf    2h                              

; ----- sub_4282 -----
4282  push    bp                              
4283  mov     bp,sp                           
4285  push    word ptr [bp+8h]                
4288  push    word ptr [bp+6h]                
428b  call far M800.Z130HISTOGRAM             
4290  leave                                   
4291  retf    4h                              

; ----- sub_4294 -----
4294  enter   0Ch,0h                          
4298  push    si                              
4299  mov     si,[bp+6h]                      
429c  mov     es,[bp+8h]                      
429f  mov     ax,es:[si]                      
42a2  mov     dx,es:[si+2h]                   
42a6  mov     [bp-0Ch],ax                     
42a9  mov     [bp-0Ah],dx                     
42ac  mov     ax,es:[si+4h]                   
42b0  mov     dx,es:[si+6h]                   
42b4  mov     [bp-8h],ax                      
42b7  mov     [bp-6h],dx                      
42ba  lea     ax,[si+8h]                      
42bd  mov     [bp-4h],ax                      
42c0  mov     [bp-2h],es                      
42c3  lea     ax,[bp-0Ch]                     
42c6  push    ss                              
42c7  push    ax                              
42c8  call far M800.Z130LINEDATA              
42cd  pop     si                              
42ce  leave                                   
42cf  retf    4h                              

; ----- sub_42d2 -----
42d2  push    bp                              
42d3  mov     bp,sp                           
42d5  push    word ptr [bp+10h]               
42d8  push    word ptr [bp+0Eh]               
42db  push    word ptr [bp+0Ch]               
42de  push    word ptr [bp+0Ah]               
42e1  push    word ptr [bp+8h]                
42e4  push    word ptr [bp+6h]                
42e7  call far M200.DO_FEATURESCAN            
42ec  leave                                   
42ed  retf    0Ch                             

; ----- sub_42f0 -----
42f0  call far M200.STOP_FEATURESCAN          
42f5  retf                                    

; ----- sub_42f6 -----
42f6  push    bp                              
42f7  mov     bp,sp                           
42f9  push    word ptr [bp+8h]                
42fc  push    word ptr [bp+6h]                
42ff  call far M200.SETHARDPANELKNOB          
4304  leave                                   
4305  retf    4h                              

; ----- sub_4308 -----
4308  push    bp                              
4309  mov     bp,sp                           
430b  push    word ptr [bp+8h]                
430e  push    word ptr [bp+6h]                
4311  call far M200.READ_COLUMN_CAL_DATA      
4316  leave                                   
4317  retf    4h                              

; ----- sub_431a -----
431a  push    bp                              
431b  mov     bp,sp                           
431d  push    word ptr [bp+8h]                
4320  push    word ptr [bp+6h]                
4323  call far M600.UPDATE_HPSEM_PANEL        
4328  leave                                   
4329  retf    4h                              

; ----- sub_432c -----
432c  push    bp                              
432d  mov     bp,sp                           
432f  mov     ax,[bp+0Ah]                     
4332  cmp     ax,9h                           
4335  jbe     433Ah                           
4337  jmp     43C8h                           
433a  add     ax,ax                           
433c  xchg    ax,bx                           
433d  jmp     word ptr cs:[bx+4342h]          
4342  push    si                              
4343  inc     bx                              
4344  inc     bx                              
4346  js      438Bh                           
4348  mov     [bp+di-66h],ax                  
434b  inc     bx                              
434c  cmpsw                                   
434d  inc     bx                              
434e  scasb                                   
434f  inc     bx                              
4350  mov     ch,43h                          
4352  mov     sp,0C343h                       
4355  inc     bx                              
4356  wait                                    
4357  fld     dword ptr [bp+6h]               
435a  call far sub_0278                       
435f  push    ax                              
4360  call far M600.HP_STATE_EVENT            
4365  jmp     43C8h                           
4367  wait                                    
4368  fld     dword ptr [bp+6h]               
436b  call far sub_0278                       
4370  push    ax                              
4371  call far M600.HP_ERROR_EVENT            
4376  jmp     43C8h                           
4378  wait                                    
4379  fld     dword ptr [bp+6h]               
437c  call far sub_0278                       
4381  push    ax                              
4382  call far M600.HP_SET_V8                 
4387  jmp     43C8h                           
4389  wait                                    
438a  fld     dword ptr [bp+6h]               
438d  call far sub_0278                       
4392  push    ax                              
4393  call far M600.HP_SET_V14                
4398  jmp     43C8h                           
439a  push    word ptr [bp+8h]                
439d  push    word ptr [bp+6h]                
43a0  call far M600.HP_SET_CHAMBER_PRESSURE   
43a5  jmp     43C8h                           
43a7  call far M600.HP_STILL_ACTIVE           
43ac  jmp     43C8h                           
43ae  call far M600.HP_SHOW_PANEL             
43b3  jmp     43C8h                           
43b5  call far M600.HP_SHOW_SERVICE_PANEL     
43ba  jmp     43C8h                           
43bc  call far M600.RESTART_HPAPP             
43c1  jmp     43C8h                           
43c3  call far M600.CLOSE_HPAPP               
43c8  leave                                   
43c9  retf    6h                              

; ----- sub_43cc -----
43cc  push    bp                              
43cd  mov     bp,sp                           
43cf  push    di                              
43d0  push    si                              
43d1  mov     ax,[bp+6h]                      
43d4  mov     dx,[bp+8h]                      
43d7  sub     sp,156h                         
43db  push    ds                              
43dc  mov     si,ax                           
43de  mov     di,sp                           
43e0  inc     di                              
43e1  inc     di                              
43e2  push    ss                              
43e3  pop     es                              
43e4  mov     ds,dx                           
43e6  mov     cx,0ABh                         
43e9  rep     movsw                           
43eb  pop     ds                              
43ec  call far M500.DEFINECUSTOMSTAGE         
43f1  pop     si                              
43f2  pop     di                              
43f3  leave                                   
43f4  retf    4h                              
43f7  add     [bx+si],al                      

; ----- sub_43f8 -----
43f8  push    bp                              
43f9  mov     bp,sp                           
43fb  push    si                              
43fc  mov     si,[bp+6h]                      
43ff  push    si                              
4400  push    ds                              
4401  push    3070h                           
4404  push    40h                             
4406  call far USER.GLOBALGETATOMNAME         
440b  push    si                              
440c  call far USER.GLOBALDELETEATOM          
4411  push    ds                              
4412  push    3070h                           
4415  call far KERNEL.LSTRLEN                 
441a  cmp     ax,1h                           
441d  sbb     ax,ax                           
441f  inc     ax                              
4420  mov     [3Ah],ax                        
4423  pop     si                              
4424  leave                                   
4425  retf    2h                              

; ----- sub_4428 -----
4428  push    bp                              
4429  mov     bp,sp                           
442b  push    word ptr [bp+0Ah]               
442e  push    word ptr [bp+8h]                
4431  push    word ptr [bp+6h]                
4434  call far M500.DEFINEAXISHIGHRANGE       
4439  leave                                   
443a  retf    6h                              
443d  add     [di],ch                         
443f  sub     ax,2D2Dh                        
4442  add     [bx+si],al                      
4444  push    si                              
4445  push    ax                              
4446  push    bx                              
4447  inc     bp                              
4448  add     [bx+si],al                      
444a  add     [bx+si],al                      
444c  and     [di],bh                         
444e  and     [bx+si],al                      
4450  inc     si                              
4451  push    65h                             
4453  insb                                    
4454  and     fs:[22h],dh                     
4459  add     [bp+6Ah],al                     
445c  insb                                    
445e  and     fs:[di],dh                      
4461  and     al,[bx+si]                      
4463  add     [di+61h],cl                     
4466  imul    si,[bp+si+6Fh],20h              
446a  dec     bp                              
446b  dec     bx                              
446c  xor     [bx+si],ax                      
446e  dec     bp                              
446f  popa                                    
4470  imul    si,[bp+si+6Fh],20h              
4474  dec     bp                              
4475  dec     bx                              
4476  xor     al,[bx+si]                      
4478  and     ax,75h                          
447b  add     [bx+si],ah                      
447d  cmp     ax,2520h                        
4480  jne     4482h                           
4482  dec     sp                              
4483  inc     bp                              
4484  dec     di                              
4485  and     [si],dh                         
4487  xor     dh,[bx+si]                      
4489  sub     ax,0h                           
448c  dec     sp                              
448d  inc     bp                              
448e  dec     di                              
448f  and     [si],dh                         
4491  xor     al,30h                          
4493  sub     ax,0h                           
4496  dec     sp                              
4497  inc     bp                              
4498  dec     di                              
4499  and     [si],dh                         
449b  xor     si,[bx+si]                      
449d  sub     ax,0h                           
44a0  dec     sp                              
44a1  inc     bp                              
44a2  dec     di                              
44a3  and     [bx],bh                         
44a5  jle     44A7h                           
44a7  add     [si+45h],cl                     
44aa  dec     di                              
44ab  and     [si],dh                         
44ad  xor     si,[di]                         
44af  push    si                              
44b0  push    ax                              
44b1  sub     ax,0h                           
44b4  dec     sp                              
44b5  inc     bp                              
44b6  dec     di                              
44b7  and     [di+42h],al                     
44ba  dec     sp                              
44bb  xor     ax,2D30h                        
44be  add     [bx+si],al                      
44c0  dec     sp                              
44c1  inc     bp                              
44c2  dec     di                              
44c3  and     [di+42h],al                     
44c6  dec     sp                              
44c7  xor     [bx+si],si                      
44c9  xor     [di],ch                         
44cb  add     [si+45h],cl                     
44ce  dec     di                              
44cf  and     [bx+di],dh                      
44d1  xor     ax,3035h                        
44d4  sub     ax,4C00h                        
44d7  inc     bp                              
44d8  dec     di                              
44d9  and     [bx+di],dh                      
44db  xor     ax,3033h                        
44de  sub     ax,4C00h                        
44e1  inc     bp                              
44e2  dec     di                              
44e3  and     [bx+di],dh                      
44e5  xor     ax,3036h                        
44e8  sub     ax,4C00h                        
44eb  inc     bp                              
44ec  dec     di                              
44ed  and     [si],dh                         
44ef  xor     di,[bx+si]                      
44f1  push    si                              
44f2  push    ax                              
44f3  sub     ax,0h                           
44f6  dec     sp                              
44f7  inc     bp                              
44f8  dec     di                              
44f9  and     [bx+di],dh                      
44fb  xor     al,35h                          
44fd  xor     [di],ch                         
44ff  add     [si+45h],cl                     
4502  dec     di                              
4503  and     [bx+di],dh                      
4505  xor     al,35h                          
4507  xor     [bp+50h],dl                     
450a  sub     ax,4C00h                        
450d  inc     bp                              
450e  dec     di                              
450f  and     [bx+di],dh                      
4511  xor     al,36h                          
4513  xor     [di],ch                         
4515  add     [si+45h],cl                     
4518  dec     di                              
4519  and     [bx+di],dh                      
451b  xor     al,36h                          
451d  xor     [bp+50h],dl                     
4520  sub     ax,4C00h                        
4523  inc     bp                              
4524  dec     di                              
4525  and     [bx+di],dh                      
4527  xor     al,32h                          
4529  xor     [di],ch                         
452b  add     [si+45h],cl                     
452e  dec     di                              
452f  and     [bx+di],dh                      
4531  xor     al,32h                          
4533  xor     [bp+50h],dl                     
4536  sub     ax,4C00h                        
4539  inc     bp                              
453a  dec     di                              
453b  and     [bx+di],dh                      
453d  xor     al,33h                          
453f  xor     [di],ch                         
4541  add     [si+45h],cl                     
4544  dec     di                              
4545  and     [bx+di],dh                      
4547  xor     al,33h                          
4549  xor     [bp+50h],dl                     
454c  sub     ax,4C00h                        
454f  inc     bp                              
4550  dec     di                              
4551  and     [bx+di],dh                      
4553  xor     ax,3532h                        
4556  sub     ax,4C00h                        
4559  inc     bp                              
455a  dec     di                              
455b  and     [bx+di],dh                      
455d  xor     al,35h                          
455f  xor     ax,2Dh                          
4562  dec     sp                              
4563  inc     bp                              
4564  dec     di                              
4565  and     [bx+di],dh                      
4567  xor     al,35h                          
4569  xor     ax,5056h                        
456c  sub     ax,4C00h                        
456f  inc     bp                              
4570  dec     di                              
4571  and     [bx+di],dh                      
4573  xor     ax,3532h                        
4576  push    si                              
4577  push    ax                              
4578  sub     ax,4C00h                        
457b  inc     bp                              
457c  dec     di                              
457d  and     [bx+di],dh                      
457f  xor     ax,3033h                        
4582  push    si                              
4583  push    ax                              
4584  sub     ax,4C00h                        
4587  inc     bp                              
4588  dec     di                              
4589  and     [bx+di],dh                      
458b  xor     ax,3035h                        
458e  push    si                              
458f  push    ax                              
4590  sub     ax,2500h                        
4593  jae     45BAh                           
4595  xor     ch,[7532h]                      
4599  sub     ax,3225h                        
459c  xor     dh,cs:[di]                      

; ----- sub_45a0 -----
45a0  push    bp                              
45a1  mov     bp,sp                           
45a3  push    di                              
45a4  push    si                              
45a5  cmp     word ptr [bp+8h],1C4h           
45aa  jb      45CBh                           
45ac  push    0h                              
45ae  push    45B5h                           ; segment seg1:0000
45b1  push    45F6h                           
45b4  push    435Dh                           ; segment seg1:0000
45b7  push    45EAh                           
45ba  push    30h                             
45bc  call far USER.MESSAGEBOX                ; "Parameter data undefined"  "File M081.C"
45c1  mov     bx,[bp+6h]                      
45c4  mov     di,bx                           
45c6  mov     si,3Eh                          
45c9  jmp     45D9h                           
45cb  imul    ax,[bp+8h],18h                  
45cf  add     ax,3Eh                          
45d2  mov     bx,[bp+6h]                      
45d5  mov     di,bx                           
45d7  mov     si,ax                           
45d9  push    ss                              
45da  pop     es                              
45db  mov     cx,0Ch                          
45de  rep     movsw                           
45e0  mov     ax,bx                           
45e2  mov     dx,ss                           
45e4  pop     si                              
45e5  pop     di                              
45e6  leave                                   
45e7  retf    4h                              
45ea  inc     si                              
45eb  imul    bp,[si+65h],4D20h               
45f0  xor     [bx+si],bh                      
45f2  xor     [43h],bp                        
45f6  push    ax                              
45f7  popa                                    
45f8  jb      465Bh                           
45fa  insw                                    
45fb  je      4663h                           
45fe  jb      4620h                           
4600  popa                                    
4602  je      4665h                           
4604  and     [di+6Eh],dh                     
4607  imul    ebp,gs:[bp+65h],64h             
