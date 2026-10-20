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
0060  mov     [168h],di                       
0064  mov     [16Ah],ds                       
0068  mov     [16Ch],cx                       
006c  mov     [16Eh],bx                       
0070  mov     [170h],si                       
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
0094  mov     [2A4h],ax                       
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [2A8h],ax                       
00ae  xchg    al,ah                           
00b0  mov     [2A6h],ax                       
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [2ABh],al                       
00c1  call far sub_0318                       
00c6  call far sub_0420                       
00cb  inc     byte ptr [172h]                 
00cf  push    word ptr [2CCh]                 
00d3  push    word ptr [2CAh]                 ; [ds] f32 here = 0
00d7  push    word ptr [2C8h]                 ; [ds] f32 here = 0
00db  push    word ptr [2C6h]                 ; [ds] f32 here = 0
00df  push    word ptr [2C4h]                 ; [ds] f32 here = 0
00e3  call far sub_02ec                       
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
0111  mov     ax,[bp+8h]                      
0114  mov     cx,[bp+0Ch]                     
0117  or      cx,ax                           
0119  mov     cx,[bp+0Ah]                     
011c  jne     127h                            
011e  mov     ax,[bp+6h]                      
0121  mul     cx                              
0123  pop     bp                              
0124  retf    8h                              
0127  push    bx                              
0128  mul     cx                              
012a  mov     bx,ax                           
012c  mov     ax,[bp+6h]                      
012f  mul     word ptr [bp+0Ch]               
0132  add     bx,ax                           
0134  mov     ax,[bp+6h]                      
0137  mul     cx                              
0139  add     dx,bx                           
013b  pop     bx                              
013c  pop     bp                              
013d  retf    8h                              

; ----- sub_0140 -----
0140  push    bp                              
0141  mov     bp,sp                           
0143  push    bx                              
0144  push    si                              
0145  mov     ax,[bp+0Ch]                     
0148  or      ax,ax                           
014a  jne     161h                            
014c  mov     cx,[bp+0Ah]                     
014f  mov     ax,[bp+8h]                      
0152  xor     dx,dx                           
0154  div     cx                              
0156  mov     bx,ax                           
0158  mov     ax,[bp+6h]                      
015b  div     cx                              
015d  mov     dx,bx                           
015f  jmp     199h                            
0161  mov     cx,ax                           
0163  mov     bx,[bp+0Ah]                     
0166  mov     dx,[bp+8h]                      
0169  mov     ax,[bp+6h]                      
016c  shr     cx,1                            
016e  rcr     bx,1                            
0170  shr     dx,1                            
0172  rcr     ax,1                            
0174  or      cx,cx                           
0176  jne     16Ch                            
0178  div     bx                              
017a  mov     si,ax                           
017c  mul     word ptr [bp+0Ch]               
017f  xchg    ax,cx                           
0180  mov     ax,[bp+0Ah]                     
0183  mul     si                              
0185  add     dx,cx                           
0187  jb      195h                            
0189  cmp     dx,[bp+8h]                      
018c  ja      195h                            
018e  jb      196h                            
0190  cmp     ax,[bp+6h]                      
0193  jbe     196h                            
0195  dec     si                              
0196  xor     dx,dx                           
0198  xchg    ax,si                           
0199  pop     si                              
019a  pop     bx                              
019b  pop     bp                              
019c  retf    8h                              
019f  add     [bx+si],al                      

; ----- sub_01a0 -----
01a0  push    bp                              
01a1  mov     bp,sp                           
01a3  mov     cx,[bp+0Eh]                     
01a6  push    ds                              
01a7  push    di                              
01a8  push    si                              
01a9  jcxz    1F3h                            
01ab  lds     si,[bp+0Ah]                     
01ae  les     di,[bp+6h]                      
01b1  mov     ax,cx                           
01b3  dec     ax                              
01b4  mov     dx,di                           
01b6  not     dx                              
01b8  sub     ax,dx                           
01ba  sbb     bx,bx                           
01bc  and     ax,bx                           
01be  add     ax,dx                           
01c0  mov     dx,si                           
01c2  not     dx                              
01c4  sub     ax,dx                           
01c6  sbb     bx,bx                           
01c8  and     ax,bx                           
01ca  add     ax,dx                           
01cc  inc     ax                              
01cd  xchg    ax,cx                           
01ce  sub     ax,cx                           
01d0  shr     cx,1                            
01d2  rep     movsw                           
01d4  adc     cx,cx                           
01d6  rep     movsb                           
01d8  xchg    ax,cx                           
01d9  jcxz    1F3h                            
01db  or      si,si                           
01dd  jne     1E6h                            
01df  mov     ax,ds                           
01e1  add     ax,0FFFFh                       
01e4  mov     ds,ax                           
01e6  or      di,di                           
01e8  jne     1B1h                            
01ea  mov     ax,es                           
01ec  add     ax,1E2h                         
01ef  mov     es,ax                           
01f1  jmp     1B1h                            
01f3  mov     ax,[bp+6h]                      
01f6  mov     dx,[bp+8h]                      
01f9  pop     si                              
01fa  pop     di                              
01fb  pop     ds                              
01fc  pop     bp                              
01fd  retf                                    

; ----- sub_01fe -----
01fe  push    bp                              
01ff  mov     bp,sp                           
0201  mov     cx,[bp+0Ch]                     
0204  jcxz    23Eh                            
0206  push    di                              
0207  les     di,[bp+6h]                      
020a  mov     dx,di                           
020c  neg     dx                              
020e  je      21Ch                            
0210  sub     dx,cx                           
0212  sbb     bx,bx                           
0214  and     dx,bx                           
0216  add     dx,cx                           
0218  xchg    dx,cx                           
021a  sub     dx,cx                           
021c  mov     ax,[bp+0Ah]                     
021f  mov     ah,al                           
0221  shr     cx,1                            
0223  rep     stosw                           
0225  adc     cx,cx                           
0227  rep     stosb                           
0229  xchg    dx,cx                           
022b  jcxz    23Dh                            
022d  mov     bx,es                           
022f  add     bx,1EDh                         
0233  mov     es,bx                           
0235  shr     cx,1                            
0237  rep     stosw                           
0239  adc     cx,cx                           
023b  rep     stosb                           
023d  pop     di                              
023e  mov     ax,[bp+6h]                      
0241  mov     dx,[bp+8h]                      
0244  pop     bp                              
0245  retf                                    
0246  mov     ax,ds                           
0248  nop                                     
0249  inc     bp                              
024a  push    bp                              
024b  mov     bp,sp                           
024d  push    ds                              
024e  mov     ds,ax                           
0250  sub     sp,2h                           
0253  wait                                    
0254  fxch    st(0),st(1)                     
0256  wait                                    
0257  fcompp                                  
0259  wait                                    
025a  fstsw   word ptr [bp-4h]                
025d  nop                                     
025e  wait                                    
025f  mov     ah,[bp-3h]                      
0262  and     ax,4100h                        
0265  shr     ax,1                            
0267  shl     ah,1                            
0269  or      ah,al                           
026b  sahf                                    
026c  lea     sp,[bp-2h]                      
026f  pop     ds                              
0270  pop     bp                              
0271  lea     bp,[bp-1h]                      
0274  retf                                    

; ----- sub_0275 -----
0275  mov     ax,ds                           
0277  nop                                     
0278  inc     bp                              
0279  push    bp                              
027a  mov     bp,sp                           
027c  push    ds                              
027d  mov     ds,ax                           
027f  sub     sp,2h                           
0282  push    ax                              
0283  wait                                    
0284  fcompp                                  
0286  wait                                    
0287  fstsw   word ptr [bp-4h]                
028a  nop                                     
028b  wait                                    
028c  mov     ah,[bp-3h]                      
028f  sahf                                    
0290  pop     ax                              
0291  lea     sp,[bp-2h]                      
0294  pop     ds                              
0295  pop     bp                              
0296  lea     bp,[bp-1h]                      
0299  retf                                    

; ----- sub_029a -----
029a  mov     ax,ds                           
029c  nop                                     
029d  inc     bp                              
029e  push    bp                              
029f  mov     bp,sp                           
02a1  push    ds                              
02a2  mov     ds,ax                           
02a4  sub     sp,0Ch                          
02a7  push    bx                              
02a8  push    cx                              
02a9  push    si                              
02aa  push    di                              
02ab  wait                                    
02ac  fstcw   word ptr [bp-4h]                
02af  nop                                     
02b0  wait                                    
02b1  mov     ax,[bp-4h]                      
02b4  or      ah,0Ch                          
02b7  mov     [bp-6h],ax                      
02ba  wait                                    
02bb  fldcw   word ptr [bp-6h]                
02be  wait                                    
02bf  fistp   qword ptr [bp-0Eh]              
02c2  wait                                    
02c3  fldcw   word ptr [bp-4h]                
02c6  mov     ax,[bp-0Eh]                     
02c9  mov     dx,[bp-0Ch]                     
02cc  pop     di                              
02cd  pop     si                              
02ce  pop     cx                              
02cf  pop     bx                              
02d0  lea     sp,[bp-2h]                      
02d3  pop     ds                              
02d4  pop     bp                              
02d5  dec     bp                              
02d6  retf                                    
02d7  add     [bp+57h],dl                     
02da  mov     ax,ds                           
02dc  mov     es,ax                           
02de  mov     si,27Eh                         
02e1  mov     di,2DAh                         
02e4  mov     cx,0Ah                          
02e7  rep     movsw                           
02e9  pop     di                              
02ea  pop     si                              
02eb  retf                                    

; ----- sub_02ec -----
02ec  mov     ax,ds                           
02ee  nop                                     
02ef  inc     bp                              
02f0  push    bp                              
02f1  mov     bp,sp                           
02f3  push    ds                              
02f4  mov     ds,ax                           
02f6  push    word ptr [168h]                 ; [ds] f32 here = 0
02fa  push    word ptr [16Ah]                 ; [ds] f32 here = 0
02fe  push    word ptr [16Ch]                 ; [ds] f32 here = 0
0302  push    word ptr [170h]                 
0306  push    word ptr [16Eh]                 ; [ds] f32 here = 0
030a  call far sub_1ed0                       
030f  sub     bp,2h                           
0312  mov     sp,bp                           
0314  pop     ds                              
0315  pop     bp                              
0316  dec     bp                              
0317  retf                                    

; ----- sub_0318 -----
0318  mov     ax,ds                           
031a  nop                                     
031b  inc     bp                              
031c  push    bp                              
031d  mov     bp,sp                           
031f  push    ds                              
0320  mov     ds,ax                           
0322  mov     cx,[39Ah]                       
0326  jcxz    33Ch                            
0328  xor     si,si                           
032a  mov     ax,[39Ch]                       
032d  mov     dx,[39Eh]                       
0331  xor     bx,bx                           
0333  call    far ptr  [398h]                 
0337  jae     33Ch                            
0339  jmp     0BE6h                           
033c  mov     si,3A8h                         
033f  mov     di,3A8h                         
0342  call    3E8h                            
0345  mov     si,3A4h                         
0348  mov     di,3A8h                         
034b  call    3E8h                            
034e  mov     si,3A8h                         
0351  mov     di,3A8h                         
0354  call    3E8h                            
0357  sub     bp,2h                           
035a  mov     sp,bp                           
035c  pop     ds                              
035d  pop     bp                              
035e  dec     bp                              
035f  retf                                    
0360  mov     ax,ds                           
0362  nop                                     
0363  inc     bp                              
0364  push    bp                              
0365  mov     bp,sp                           
0367  push    ds                              
0368  mov     ds,ax                           
036a  push    si                              
036b  push    di                              
036c  mov     cx,100h                         
036f  jmp     380h                            
0371  mov     ax,ds                           
0373  nop                                     
0374  inc     bp                              
0375  push    bp                              
0376  mov     bp,sp                           
0378  push    ds                              
0379  mov     ds,ax                           
037b  push    si                              
037c  push    di                              
037d  mov     cx,101h                         
0380  mov     [2D5h],ch                       
0384  push    cx                              
0385  or      cl,cl                           
0387  jne     39Bh                            
0389  mov     si,0F40h                        
038c  mov     di,0F40h                        
038f  call    3E8h                            
0392  mov     si,3A8h                         
0395  mov     di,3A8h                         
0398  call    3E8h                            
039b  mov     si,3A8h                         
039e  mov     di,3A8h                         
03a1  call    3E8h                            
03a4  mov     si,3A8h                         
03a7  mov     di,3A8h                         
03aa  call    3E8h                            
03ad  call    1578h                           
03b0  call    0C2Ah                           
03b3  pop     ax                              
03b4  pop     di                              
03b5  pop     si                              
03b6  sub     bp,2h                           
03b9  mov     sp,bp                           
03bb  pop     ds                              
03bc  pop     bp                              
03bd  dec     bp                              
03be  retf                                    
03bf  mov     cx,[39Ah]                       
03c3  jcxz    3CCh                            
03c5  mov     bx,2h                           
03c8  call    far ptr  [398h]                 
03cc  push    ds                              
03cd  lds     dx,[292h]                       
03d1  mov     ax,2500h                        
03d4  test    word ptr cs:[10h],1h            
03db  je      3E4h                            
03dd  call far KERNEL.DOS3CALL                
03e2  jmp     3E6h                            
03e4  int     21h                             
03e6  pop     ds                              
03e7  ret                                     

; ----- sub_03e8 -----
03e8  cmp     si,di                           
03ea  jae     3FAh                            
03ec  sub     di,4h                           
03ef  mov     ax,[di]                         
03f1  or      ax,[di+2h]                      
03f4  je      3E8h                            
03f6  call    far ptr  [di]                   
03f8  jmp     3E8h                            
03fa  ret                                     
03fb  add     [bx+si],al                      

; ----- sub_03fc -----
03fc  mov     ax,ds                           
03fe  nop                                     
03ff  inc     bp                              
0400  push    bp                              
0401  mov     bp,sp                           
0403  push    ds                              
0404  mov     ds,ax                           
0406  mov     ax,0FCh                         
0409  push    ax                              
040a  push    cs                              
040b  call    0B83h                           
040e  mov     ax,0FFh                         
0411  push    ax                              
0412  push    cs                              
0413  call    0B83h                           
0416  sub     bp,2h                           
0419  mov     sp,bp                           
041b  pop     ds                              
041c  pop     bp                              
041d  dec     bp                              
041e  retf                                    
041f  add     [bx+si],al                      

; ----- sub_0420 -----
0420  mov     ax,ds                           
0422  nop                                     
0423  inc     bp                              
0424  push    bp                              
0425  mov     bp,sp                           
0427  push    ds                              
0428  mov     ds,ax                           
042a  sub     sp,6h                           
042d  push    ds                              
042e  call far KERNEL.GETDOSENVIRONMENT       
0433  or      ax,ax                           
0435  je      43Ah                            
0437  mov     dx,0h                           
043a  mov     bx,dx                           
043c  mov     es,dx                           
043e  mov     [bp-4h],es                      
0441  mov     [bp-8h],ds                      
0444  xor     ax,ax                           
0446  xor     si,si                           
0448  xor     di,di                           
044a  mov     cx,0FFFFh                       
044d  or      bx,bx                           
044f  je      45Fh                            
0451  cmp     byte ptr es:[0h],0h             
0457  je      45Fh                            
0459  repne   scasb                           
045b  inc     si                              
045c  scasb                                   
045d  jne     459h                            
045f  mov     ax,di                           
0461  inc     ax                              
0462  and     al,0FEh                         
0464  inc     si                              
0465  mov     di,si                           
0467  shl     si,1                            
0469  shl     si,1                            
046b  mov     cx,9h                           
046e  call    0BECh                           
0471  push    dx                              
0472  push    ax                              
0473  mov     ax,si                           
0475  call    0BECh                           
0478  mov     [2CAh],ax                       
047b  mov     [2CCh],dx                       
047f  mov     [bp-6h],dx                      
0482  push    es                              
0483  pop     ds                              
0484  mov     cx,di                           
0486  mov     bx,ax                           
0488  xor     si,si                           
048a  pop     di                              
048b  pop     es                              
048c  dec     cx                              
048d  jcxz    4A5h                            
048f  mov     ds,[bp-6h]                      
0492  mov     [bx],di                         
0494  mov     [bx+2h],es                      
0497  add     bx,4h                           
049a  mov     ds,[bp-4h]                      
049d  lodsb                                   
049e  stosb                                   
049f  or      al,al                           
04a1  jne     49Dh                            
04a3  loop    48Fh                            
04a5  mov     ds,[bp-6h]                      
04a8  mov     [bx],cx                         
04aa  mov     [bx+2h],cx                      
04ad  pop     ds                              
04ae  sub     bp,2h                           
04b1  mov     sp,bp                           
04b3  pop     ds                              
04b4  pop     bp                              
04b5  dec     bp                              
04b6  retf                                    
04b7  add     [si-6F28h],cl                   
04bb  inc     bp                              
04bc  push    bp                              
04bd  mov     bp,sp                           
04bf  push    ds                              
04c0  mov     ds,ax                           
04c2  sub     sp,0Ah                          
04c5  les     bx,[bp+6h]                      
04c8  mov     al,es:[bx]                      
04cb  cbw                                     
04cc  mov     bx,ax                           
04ce  test    byte ptr [bx+17Dh],1h           
04d3  je      4DAh                            
04d5  lea     ax,[bx+20h]                     
04d8  jmp     4E1h                            
04da  mov     bx,[bp+6h]                      
04dd  mov     al,es:[bx]                      
04e0  cbw                                     
04e1  cmp     ax,65h                          
04e4  je      4F9h                            
04e6  inc     word ptr [bp+6h]                
04e9  mov     bx,[bp+6h]                      
04ec  mov     al,es:[bx]                      
04ef  cbw                                     
04f0  mov     bx,ax                           
04f2  test    byte ptr [bx+17Dh],4h           
04f7  jne     4E6h                            
04f9  mov     bx,[bp+6h]                      
04fc  mov     al,es:[bx]                      
04ff  mov     [bp-4h],al                      
0502  mov     byte ptr es:[bx],2Eh            
0506  inc     word ptr [bp+6h]                
0509  mov     bx,[bp+6h]                      
050c  mov     al,es:[bx]                      
050f  mov     [bp-6h],al                      
0512  mov     al,[bp-4h]                      
0515  mov     es:[bx],al                      
0518  mov     al,[bp-6h]                      
051b  mov     [bp-4h],al                      
051e  inc     word ptr [bp+6h]                
0521  cmp     byte ptr es:[bx],0h             
0525  jne     509h                            
0527  lea     sp,[bp-2h]                      
052a  pop     ds                              
052b  pop     bp                              
052c  dec     bp                              
052d  retf                                    
052e  mov     ax,ds                           
0530  nop                                     
0531  inc     bp                              
0532  push    bp                              
0533  mov     bp,sp                           
0535  push    ds                              
0536  mov     ds,ax                           
0538  sub     sp,8h                           
053b  jmp     547h                            
053d  nop                                     
053e  cmp     byte ptr es:[bx],2Eh            
0542  je      550h                            
0544  inc     word ptr [bp+6h]                
0547  les     bx,[bp+6h]                      
054a  cmp     byte ptr es:[bx],0h             
054e  jne     53Eh                            
0550  inc     word ptr [bp+6h]                
0553  cmp     byte ptr es:[bx],0h             
0557  je      5ABh                            
0559  jmp     56Bh                            
055b  nop                                     
055c  cmp     byte ptr es:[bx],65h            
0560  je      574h                            
0562  cmp     byte ptr es:[bx],45h            
0566  je      574h                            
0568  inc     word ptr [bp+6h]                
056b  mov     bx,[bp+6h]                      
056e  cmp     byte ptr es:[bx],0h             
0572  jne     55Ch                            
0574  dec     word ptr [bp+6h]                
0577  mov     [bp-6h],bx                      
057a  mov     [bp-4h],es                      
057d  jmp     583h                            
057f  nop                                     
0580  dec     word ptr [bp+6h]                
0583  mov     bx,[bp+6h]                      
0586  cmp     byte ptr es:[bx],30h            
058a  je      580h                            
058c  cmp     byte ptr es:[bx],2Eh            
0590  jne     595h                            
0592  dec     word ptr [bp+6h]                
0595  les     bx,[bp-6h]                      
0598  inc     word ptr [bp-6h]                
059b  mov     al,es:[bx]                      
059e  inc     word ptr [bp+6h]                
05a1  les     bx,[bp+6h]                      
05a4  mov     es:[bx],al                      
05a7  or      al,al                           
05a9  jne     595h                            
05ab  lea     sp,[bp-2h]                      
05ae  pop     ds                              
05af  pop     bp                              
05b0  dec     bp                              
05b1  retf                                    
05b2  mov     ax,ds                           
05b4  nop                                     
05b5  inc     bp                              
05b6  push    bp                              
05b7  mov     bp,sp                           
05b9  push    ds                              
05ba  mov     ds,ax                           
05bc  sub     sp,2h                           
05bf  les     bx,[bp+6h]                      
05c2  wait                                    
05c3  fld     qword ptr es:[bx]               
05c6  wait                                    
05c7  fcom    qword ptr [404h]                ; [ds] = 0
05cb  wait                                    
05cc  fstp    st(0)                           
05ce  wait                                    
05cf  fstsw   word ptr [bp-4h]                
05d2  nop                                     
05d3  wait                                    
05d4  mov     ah,[bp-3h]                      
05d7  sahf                                    
05d8  jb      5E0h                            
05da  mov     ax,1h                           
05dd  jmp     5E2h                            
05df  nop                                     
05e0  xor     ax,ax                           
05e2  lea     sp,[bp-2h]                      
05e5  pop     ds                              
05e6  pop     bp                              
05e7  dec     bp                              
05e8  retf                                    
05e9  nop                                     
05ea  mov     ax,ds                           
05ec  nop                                     
05ed  inc     bp                              
05ee  push    bp                              
05ef  mov     bp,sp                           
05f1  push    ds                              
05f2  mov     ds,ax                           
05f4  push    di                              
05f5  push    si                              
05f6  cmp     word ptr [bp+6h],0h             
05fa  je      61Ah                            
05fc  push    word ptr [bp+0Eh]               
05ff  push    word ptr [bp+0Ch]               
0602  call far sub_0c2c                       
0607  add     sp,4h                           
060a  push    ds                              
060b  mov     si,ax                           
060d  mov     ds,dx                           
060f  les     di,[bp+8h]                      
0612  movsw                                   
0613  movsw                                   
0614  movsw                                   
0615  movsw                                   
0616  pop     ds                              
0617  jmp     639h                            
0619  nop                                     
061a  push    word ptr [bp+0Eh]               
061d  push    word ptr [bp+0Ch]               
0620  call far sub_0c2c                       
0625  add     sp,4h                           
0628  mov     es,dx                           
062a  mov     bx,ax                           
062c  wait                                    
062d  fld     qword ptr es:[bx]               
0630  les     bx,[bp+8h]                      
0633  wait                                    
0634  fstp    dword ptr es:[bx]               
0637  nop                                     
0638  wait                                    
0639  pop     si                              
063a  pop     di                              
063b  lea     sp,[bp-2h]                      
063e  pop     ds                              
063f  pop     bp                              
0640  dec     bp                              
0641  retf                                    

; ----- sub_0642 -----
0642  mov     ax,ds                           
0644  nop                                     
0645  inc     bp                              
0646  push    bp                              
0647  mov     bp,sp                           
0649  push    ds                              
064a  mov     ds,ax                           
064c  sub     sp,0Ah                          
064f  push    si                              
0650  cmp     byte ptr [2FCh],0h              
0655  je      698h                            
0657  mov     ax,[0F2Ch]                      
065a  mov     dx,[0F2Eh]                      
065e  mov     [bp-6h],ax                      
0661  mov     [bp-4h],dx                      
0664  mov     es,dx                           
0666  mov     bx,ax                           
0668  cmp     word ptr es:[bx],2Dh            
066c  jne     674h                            
066e  mov     ax,1h                           
0671  jmp     676h                            
0673  nop                                     
0674  xor     ax,ax                           
0676  add     ax,[bp+0Ah]                     
0679  mov     dx,[bp+0Ch]                     
067c  mov     [bp-0Ah],ax                     
067f  mov     [bp-8h],dx                      
0682  push    dx                              
0683  push    ax                              
0684  cmp     word ptr [bp+0Eh],0h            
0688  jle     690h                            
068a  mov     ax,1h                           
068d  jmp     692h                            
068f  nop                                     
0690  xor     ax,ax                           
0692  push    ax                              
0693  call    0AF4h                           
0696  jmp     6F3h                            
0698  les     bx,[bp+6h]                      
069b  push    word ptr es:[bx+6h]             
069f  push    word ptr es:[bx+4h]             
06a3  push    word ptr es:[bx+2h]             
06a7  push    word ptr es:[bx]                
06aa  call far sub_0e58                       
06af  add     sp,8h                           
06b2  mov     [bp-6h],ax                      
06b5  mov     [bp-4h],dx                      
06b8  push    dx                              
06b9  push    ax                              
06ba  mov     ax,[bp+0Eh]                     
06bd  inc     ax                              
06be  push    ax                              
06bf  les     bx,[bp-6h]                      
06c2  cmp     word ptr es:[bx],2Dh            
06c6  jne     6CEh                            
06c8  mov     ax,1h                           
06cb  jmp     6D0h                            
06cd  nop                                     
06ce  xor     ax,ax                           
06d0  mov     [bp-0Ch],ax                     
06d3  cmp     word ptr [bp+0Eh],0h            
06d7  jle     6DEh                            
06d9  mov     ax,1h                           
06dc  jmp     6E0h                            
06de  xor     ax,ax                           
06e0  add     ax,[bp-0Ch]                     
06e3  add     ax,[bp+0Ah]                     
06e6  mov     dx,[bp+0Ch]                     
06e9  push    dx                              
06ea  push    ax                              
06eb  call far sub_0c8a                       
06f0  add     sp,0Ah                          
06f3  mov     ax,[bp+0Ah]                     
06f6  mov     dx,[bp+0Ch]                     
06f9  mov     [bp-0Ah],ax                     
06fc  mov     [bp-8h],dx                      
06ff  les     bx,[bp-6h]                      
0702  cmp     word ptr es:[bx],2Dh            
0706  jne     714h                            
0708  mov     bx,ax                           
070a  mov     es,dx                           
070c  mov     byte ptr es:[bx],2Dh            
0710  inc     ax                              
0711  mov     [bp-0Ah],ax                     
0714  cmp     word ptr [bp+0Eh],0h            
0718  jle     72Ch                            
071a  les     bx,[bp-0Ah]                     
071d  mov     al,es:[bx+1h]                   
0721  mov     es:[bx],al                      
0724  inc     bx                              
0725  mov     [bp-0Ah],bx                     
0728  mov     byte ptr es:[bx],2Eh            
072c  mov     ax,301h                         
072f  push    ds                              
0730  push    ax                              
0731  cmp     byte ptr [2FCh],1h              
0736  sbb     ax,ax                           
0738  neg     ax                              
073a  add     ax,[bp-0Ah]                     
073d  mov     dx,[bp-8h]                      
0740  add     ax,[bp+0Eh]                     
0743  push    dx                              
0744  push    ax                              
0745  call far sub_0d52                       
074a  add     sp,8h                           
074d  mov     [bp-0Ah],ax                     
0750  mov     [bp-8h],dx                      
0753  cmp     word ptr [bp+10h],0h            
0757  je      760h                            
0759  les     bx,[bp-0Ah]                     
075c  mov     byte ptr es:[bx],45h            
0760  inc     word ptr [bp-0Ah]               
0763  les     bx,[bp-6h]                      
0766  les     bx,es:[bx+6h]                   
076a  cmp     byte ptr es:[bx],30h            
076e  je      7CCh                            
0770  les     bx,[bp-6h]                      
0773  mov     si,es:[bx+2h]                   
0777  dec     si                              
0778  jns     787h                            
077a  mov     ax,si                           
077c  neg     ax                              
077e  mov     si,ax                           
0780  les     bx,[bp-0Ah]                     
0783  mov     byte ptr es:[bx],2Dh            
0787  inc     word ptr [bp-0Ah]               
078a  cmp     si,64h                          
078d  jl      7A4h                            
078f  mov     ax,si                           
0791  mov     cx,64h                          
0794  cwd                                     
0795  idiv    cx                              
0797  les     bx,[bp-0Ah]                     
079a  add     es:[bx],al                      
079d  mov     ax,si                           
079f  cwd                                     
07a0  idiv    cx                              
07a2  mov     si,dx                           
07a4  inc     word ptr [bp-0Ah]               
07a7  cmp     si,0Ah                          
07aa  jl      7C1h                            
07ac  mov     ax,si                           
07ae  mov     cx,0Ah                          
07b1  cwd                                     
07b2  idiv    cx                              
07b4  les     bx,[bp-0Ah]                     
07b7  add     es:[bx],al                      
07ba  mov     ax,si                           
07bc  cwd                                     
07bd  idiv    cx                              
07bf  mov     si,dx                           
07c1  mov     ax,si                           
07c3  inc     word ptr [bp-0Ah]               
07c6  les     bx,[bp-0Ah]                     
07c9  add     es:[bx],al                      
07cc  mov     ax,[bp+0Ah]                     
07cf  mov     dx,[bp+0Ch]                     
07d2  pop     si                              
07d3  lea     sp,[bp-2h]                      
07d6  pop     ds                              
07d7  pop     bp                              
07d8  dec     bp                              
07d9  retf                                    

; ----- sub_07da -----
07da  mov     ax,ds                           
07dc  nop                                     
07dd  inc     bp                              
07de  push    bp                              
07df  mov     bp,sp                           
07e1  push    ds                              
07e2  mov     ds,ax                           
07e4  sub     sp,4h                           
07e7  mov     byte ptr [2FCh],1h              
07ec  push    word ptr [bp+10h]               
07ef  push    word ptr [bp+0Eh]               
07f2  push    word ptr [bp+0Ch]               
07f5  push    word ptr [bp+0Ah]               
07f8  push    word ptr [bp+8h]                
07fb  push    word ptr [bp+6h]                
07fe  push    cs                              
07ff  call    642h                            
0802  mov     byte ptr [2FCh],0h              
0807  lea     sp,[bp-2h]                      
080a  pop     ds                              
080b  pop     bp                              
080c  dec     bp                              
080d  retf                                    

; ----- sub_080e -----
080e  mov     ax,ds                           
0810  nop                                     
0811  inc     bp                              
0812  push    bp                              
0813  mov     bp,sp                           
0815  push    ds                              
0816  mov     ds,ax                           
0818  sub     sp,0Eh                          
081b  push    si                              
081c  cmp     byte ptr [2FCh],0h              
0821  je      86Ah                            
0823  mov     ax,[0F2Ch]                      
0826  mov     dx,[0F2Eh]                      
082a  mov     [bp-6h],ax                      
082d  mov     [bp-4h],dx                      
0830  mov     es,dx                           
0832  mov     bx,ax                           
0834  cmp     word ptr es:[bx],2Dh            
0838  jne     840h                            
083a  mov     ax,1h                           
083d  jmp     842h                            
083f  nop                                     
0840  xor     ax,ax                           
0842  add     ax,[bp+0Ah]                     
0845  mov     dx,[bp+0Ch]                     
0848  mov     [bp-0Ah],ax                     
084b  mov     [bp-8h],dx                      
084e  mov     cx,[2FEh]                       
0852  cmp     [bp+0Eh],cx                     
0855  jne     8B4h                            
0857  mov     es,dx                           
0859  mov     bx,ax                           
085b  mov     si,cx                           
085d  mov     byte ptr es:[bx+si],30h         
0861  add     bx,cx                           
0863  inc     bx                              
0864  mov     byte ptr es:[bx],0h             
0868  jmp     8B4h                            
086a  les     bx,[bp+6h]                      
086d  push    word ptr es:[bx+6h]             
0871  push    word ptr es:[bx+4h]             
0875  push    word ptr es:[bx+2h]             
0879  push    word ptr es:[bx]                
087c  call far sub_0e58                       
0881  add     sp,8h                           
0884  mov     [bp-6h],ax                      
0887  mov     [bp-4h],dx                      
088a  push    dx                              
088b  les     bx,[bp-6h]                      
088e  push    ax                              
088f  mov     ax,es:[bx+2h]                   
0893  add     ax,[bp+0Eh]                     
0896  push    ax                              
0897  cmp     word ptr es:[bx],2Dh            
089b  jne     8A2h                            
089d  mov     ax,1h                           
08a0  jmp     8A4h                            
08a2  xor     ax,ax                           
08a4  add     ax,[bp+0Ah]                     
08a7  mov     dx,[bp+0Ch]                     
08aa  push    dx                              
08ab  push    ax                              
08ac  call far sub_0c8a                       
08b1  add     sp,0Ah                          
08b4  mov     ax,[bp+0Ah]                     
08b7  mov     dx,[bp+0Ch]                     
08ba  mov     [bp-0Ah],ax                     
08bd  mov     [bp-8h],dx                      
08c0  les     bx,[bp-6h]                      
08c3  cmp     word ptr es:[bx],2Dh            
08c7  jne     8D5h                            
08c9  mov     bx,ax                           
08cb  mov     es,dx                           
08cd  mov     byte ptr es:[bx],2Dh            
08d1  inc     ax                              
08d2  mov     [bp-0Ah],ax                     
08d5  les     bx,[bp-6h]                      
08d8  cmp     word ptr es:[bx+2h],0h          
08dd  jg      8F8h                            
08df  push    word ptr [bp-8h]                
08e2  push    word ptr [bp-0Ah]               
08e5  mov     ax,1h                           
08e8  push    ax                              
08e9  call    0AF4h                           
08ec  les     bx,[bp-0Ah]                     
08ef  inc     word ptr [bp-0Ah]               
08f2  mov     byte ptr es:[bx],30h            
08f6  jmp     8FFh                            
08f8  mov     ax,es:[bx+2h]                   
08fc  add     [bp-0Ah],ax                     
08ff  cmp     word ptr [bp+0Eh],0h            
0903  jle     966h                            
0905  push    word ptr [bp-8h]                
0908  push    word ptr [bp-0Ah]               
090b  mov     ax,1h                           
090e  push    ax                              
090f  call    0AF4h                           
0912  les     bx,[bp-0Ah]                     
0915  inc     word ptr [bp-0Ah]               
0918  mov     byte ptr es:[bx],2Eh            
091c  les     bx,[bp-6h]                      
091f  cmp     word ptr es:[bx+2h],0h          
0924  jge     966h                            
0926  cmp     byte ptr [2FCh],0h              
092b  je      936h                            
092d  mov     ax,es:[bx+2h]                   
0931  neg     ax                              
0933  jmp     944h                            
0935  nop                                     
0936  mov     ax,es:[bx+2h]                   
093a  neg     ax                              
093c  cmp     ax,[bp+0Eh]                     
093f  jle     944h                            
0941  mov     ax,[bp+0Eh]                     
0944  mov     [bp+0Eh],ax                     
0947  push    word ptr [bp-8h]                
094a  push    word ptr [bp-0Ah]               
094d  push    ax                              
094e  call    0AF4h                           
0951  push    word ptr [bp+0Eh]               
0954  mov     ax,30h                          
0957  push    ax                              
0958  push    word ptr [bp-8h]                
095b  push    word ptr [bp-0Ah]               
095e  call far sub_01fe                       
0963  add     sp,8h                           
0966  mov     ax,[bp+0Ah]                     
0969  mov     dx,[bp+0Ch]                     
096c  pop     si                              
096d  lea     sp,[bp-2h]                      
0970  pop     ds                              
0971  pop     bp                              
0972  dec     bp                              
0973  retf                                    

; ----- sub_0974 -----
0974  mov     ax,ds                           
0976  nop                                     
0977  inc     bp                              
0978  push    bp                              
0979  mov     bp,sp                           
097b  push    ds                              
097c  mov     ds,ax                           
097e  sub     sp,4h                           
0981  mov     byte ptr [2FCh],1h              
0986  push    word ptr [bp+0Eh]               
0989  push    word ptr [bp+0Ch]               
098c  push    word ptr [bp+0Ah]               
098f  push    word ptr [bp+8h]                
0992  push    word ptr [bp+6h]                
0995  push    cs                              
0996  call    80Eh                            
0999  mov     byte ptr [2FCh],0h              
099e  lea     sp,[bp-2h]                      
09a1  pop     ds                              
09a2  pop     bp                              
09a3  dec     bp                              
09a4  retf                                    
09a5  nop                                     

; ----- sub_09a6 -----
09a6  mov     ax,ds                           
09a8  nop                                     
09a9  inc     bp                              
09aa  push    bp                              
09ab  mov     bp,sp                           
09ad  push    ds                              
09ae  mov     ds,ax                           
09b0  sub     sp,0Ah                          
09b3  les     bx,[bp+6h]                      
09b6  push    word ptr es:[bx+6h]             
09ba  push    word ptr es:[bx+4h]             
09be  push    word ptr es:[bx+2h]             
09c2  push    word ptr es:[bx]                
09c5  call far sub_0e58                       
09ca  add     sp,8h                           
09cd  mov     [0F2Ch],ax                      
09d0  mov     [0F2Eh],dx                      
09d4  les     bx,[0F2Ch]                      
09d8  mov     ax,es:[bx+2h]                   
09dc  dec     ax                              
09dd  mov     [2FEh],ax                       
09e0  cmp     word ptr es:[bx],2Dh            
09e4  jne     9ECh                            
09e6  mov     ax,1h                           
09e9  jmp     9EEh                            
09eb  nop                                     
09ec  xor     ax,ax                           
09ee  add     ax,[bp+0Ah]                     
09f1  mov     dx,[bp+0Ch]                     
09f4  mov     [bp-6h],ax                      
09f7  mov     [bp-4h],dx                      
09fa  push    es                              
09fb  push    bx                              
09fc  push    word ptr [bp+0Eh]               
09ff  push    dx                              
0a00  push    ax                              
0a01  call far sub_0c8a                       
0a06  add     sp,0Ah                          
0a09  les     bx,[0F2Ch]                      
0a0d  mov     ax,es:[bx+2h]                   
0a11  dec     ax                              
0a12  mov     [bp-8h],ax                      
0a15  cmp     ax,[2FEh]                       
0a19  jle     0A20h                           
0a1b  mov     al,1h                           
0a1d  jmp     0A22h                           
0a1f  nop                                     
0a20  xor     al,al                           
0a22  mov     [300h],al                       
0a25  mov     ax,[bp-8h]                      
0a28  mov     [2FEh],ax                       
0a2b  cmp     ax,0FFFCh                       
0a2e  jl      0A35h                           
0a30  cmp     ax,[bp+0Eh]                     
0a33  jl      0A50h                           
0a35  push    word ptr [bp+10h]               
0a38  push    word ptr [bp+0Eh]               
0a3b  push    word ptr [bp+0Ch]               
0a3e  push    word ptr [bp+0Ah]               
0a41  push    word ptr [bp+8h]                
0a44  push    word ptr [bp+6h]                
0a47  push    cs                              
0a48  call    7DAh                            
0a4b  add     sp,0Ch                          
0a4e  jmp     0A7Eh                           
0a50  cmp     byte ptr [300h],0h              
0a55  je      0A6Bh                           
0a57  les     bx,[bp-6h]                      
0a5a  inc     word ptr [bp-6h]                
0a5d  cmp     byte ptr es:[bx],0h             
0a61  jne     0A57h                           
0a63  mov     bx,[bp-6h]                      
0a66  mov     byte ptr es:[bx-2h],0h          
0a6b  push    word ptr [bp+0Eh]               
0a6e  push    word ptr [bp+0Ch]               
0a71  push    word ptr [bp+0Ah]               
0a74  push    word ptr [bp+8h]                
0a77  push    word ptr [bp+6h]                
0a7a  push    cs                              
0a7b  call    974h                            
0a7e  lea     sp,[bp-2h]                      
0a81  pop     ds                              
0a82  pop     bp                              
0a83  dec     bp                              
0a84  retf                                    
0a85  nop                                     
0a86  mov     ax,ds                           
0a88  nop                                     
0a89  inc     bp                              
0a8a  push    bp                              
0a8b  mov     bp,sp                           
0a8d  push    ds                              
0a8e  mov     ds,ax                           
0a90  cmp     word ptr [bp+0Eh],65h           
0a94  je      0A9Ch                           
0a96  cmp     word ptr [bp+0Eh],45h           
0a9a  jne     0AB8h                           
0a9c  push    word ptr [bp+12h]               
0a9f  push    word ptr [bp+10h]               
0aa2  push    word ptr [bp+0Ch]               
0aa5  push    word ptr [bp+0Ah]               
0aa8  push    word ptr [bp+8h]                
0aab  push    word ptr [bp+6h]                
0aae  push    cs                              
0aaf  call    642h                            
0ab2  add     sp,0Ch                          
0ab5  jmp     0AECh                           
0ab7  nop                                     
0ab8  cmp     word ptr [bp+0Eh],66h           
0abc  jne     0AD6h                           
0abe  push    word ptr [bp+10h]               
0ac1  push    word ptr [bp+0Ch]               
0ac4  push    word ptr [bp+0Ah]               
0ac7  push    word ptr [bp+8h]                
0aca  push    word ptr [bp+6h]                
0acd  push    cs                              
0ace  call    80Eh                            
0ad1  add     sp,0Ah                          
0ad4  jmp     0AECh                           
0ad6  push    word ptr [bp+12h]               
0ad9  push    word ptr [bp+10h]               
0adc  push    word ptr [bp+0Ch]               
0adf  push    word ptr [bp+0Ah]               
0ae2  push    word ptr [bp+8h]                
0ae5  push    word ptr [bp+6h]                
0ae8  push    cs                              
0ae9  call    9A6h                            
0aec  lea     sp,[bp-2h]                      
0aef  pop     ds                              
0af0  pop     bp                              
0af1  dec     bp                              
0af2  retf                                    
0af3  nop                                     

; ----- sub_0af4 -----
0af4  push    bp                              
0af5  mov     bp,sp                           
0af7  cmp     word ptr [bp+4h],0h             
0afb  je      0B21h                           
0afd  push    word ptr [bp+8h]                
0b00  push    word ptr [bp+6h]                
0b03  call far sub_0d38                       
0b08  add     sp,4h                           
0b0b  inc     ax                              
0b0c  push    ax                              
0b0d  push    word ptr [bp+8h]                
0b10  mov     ax,[bp+6h]                      
0b13  push    ax                              
0b14  mov     dx,[bp+8h]                      
0b17  add     ax,[bp+4h]                      
0b1a  push    dx                              
0b1b  push    ax                              
0b1c  call far sub_0d8e                       
0b21  mov     sp,bp                           
0b23  pop     bp                              
0b24  ret     6h                              
0b27  nop                                     
0b28  inc     bp                              
0b29  push    bp                              
0b2a  mov     bp,sp                           
0b2c  push    ds                              
0b2d  push    es                              
0b2e  push    ax                              
0b2f  push    bx                              
0b30  push    cx                              
0b31  push    dx                              
0b32  xor     ah,ah                           
0b34  add     ax,-1Ch                         
0b37  push    ax                              
0b38  call far sub_0c1a                       
0b3d  mov     ds,ax                           
0b3f  pop     ax                              
0b40  call    0BA4h                           
0b43  pop     dx                              
0b44  pop     cx                              
0b45  pop     bx                              
0b46  pop     ax                              
0b47  pop     es                              
0b48  pop     ds                              
0b49  pop     bp                              
0b4a  dec     bp                              
0b4b  retf                                    

; ----- sub_0b4c -----
0b4c  mov     ax,ds                           
0b4e  nop                                     
0b4f  inc     bp                              
0b50  push    bp                              
0b51  mov     bp,sp                           
0b53  push    ds                              
0b54  mov     ds,ax                           
0b56  push    si                              
0b57  push    di                              
0b58  push    ds                              
0b59  pop     es                              
0b5a  mov     dx,[bp+6h]                      
0b5d  mov     si,414h                         
0b60  lodsw                                   
0b61  cmp     ax,dx                           
0b63  je      0B75h                           
0b65  inc     ax                              
0b66  xchg    ax,si                           
0b67  je      0B75h                           
0b69  xchg    ax,di                           
0b6a  xor     ax,ax                           
0b6c  mov     cx,0FFFFh                       
0b6f  repne   scasb                           
0b71  mov     si,di                           
0b73  jmp     0B60h                           
0b75  xchg    ax,si                           
0b76  pop     di                              
0b77  pop     si                              
0b78  sub     bp,2h                           
0b7b  mov     sp,bp                           
0b7d  pop     ds                              
0b7e  pop     bp                              
0b7f  dec     bp                              
0b80  retf    2h                              

; ----- sub_0b83 -----
0b83  mov     ax,ds                           
0b85  nop                                     
0b86  inc     bp                              
0b87  push    bp                              
0b88  mov     bp,sp                           
0b8a  push    ds                              
0b8b  mov     ds,ax                           
0b8d  push    di                              
0b8e  pop     di                              
0b8f  sub     bp,2h                           
0b92  mov     sp,bp                           
0b94  pop     ds                              
0b95  pop     bp                              
0b96  dec     bp                              
0b97  retf    2h                              
0b9a  call far sub_0c1a                       
0b9f  mov     ds,ax                           
0ba1  mov     ax,3h                           

; ----- sub_0ba4 -----
0ba4  push    ax                              
0ba5  push    ax                              
0ba6  push    cs                              
0ba7  call    3FCh                            
0baa  push    cs                              
0bab  call    0B83h                           
0bae  push    cs                              
0baf  call    0B4Ch                           
0bb2  xor     bx,bx                           
0bb4  or      ax,ax                           
0bb6  je      0BD5h                           
0bb8  mov     di,ax                           
0bba  mov     ax,9h                           
0bbd  cmp     byte ptr [di],4Dh               
0bc0  jne     0BC5h                           
0bc2  mov     ax,0Fh                          
0bc5  add     di,ax                           
0bc7  push    di                              
0bc8  push    ds                              
0bc9  pop     es                              
0bca  mov     al,0Dh                          
0bcc  mov     cx,22h                          
0bcf  repne   scasb                           
0bd1  mov     [di-1h],bl                      
0bd4  pop     ax                              
0bd5  push    bx                              
0bd6  push    ds                              
0bd7  push    ax                              
0bd8  call far KERNEL.FATALAPPEXIT            
0bdd  mov     ax,0FFh                         
0be0  push    ax                              
0be1  call far KERNEL.FATALEXIT               
0be6  mov     ax,2h                           
0be9  jmp     0BA4h                           

; ----- sub_0bec -----
0bec  push    bp                              
0bed  mov     bp,sp                           
0bef  push    bx                              
0bf0  push    es                              
0bf1  push    cx                              
0bf2  mov     cx,1000h                        
0bf5  xchg    cx,[32Eh]                       
0bf9  push    cx                              
0bfa  push    ax                              
0bfb  call far sub_122d                       
0c00  pop     bx                              
0c01  pop     [32Eh]                          
0c05  pop     cx                              
0c06  mov     bx,dx                           
0c08  or      bx,ax                           
0c0a  je      0C10h                           
0c0c  pop     es                              
0c0d  pop     bx                              
0c0e  jmp     0C15h                           
0c10  mov     ax,cx                           
0c12  jmp     0BA4h                           
0c15  mov     sp,bp                           
0c17  pop     bp                              
0c18  ret                                     
0c19  add     [bx+si],al                      

; ----- sub_0c1a -----
0c1a  cmp     byte ptr cs:[0FC6h],0B8h        
0c20  je      0C25h                           
0c22  mov     ax,ss                           
0c24  retf                                    
0c25  mov     ax,cs:[0FC7h]                   
0c29  retf                                    

; ----- sub_0c2a -----
0c2a  ret                                     
0c2b  add     [bx+si],al                      

; ----- sub_0c2c -----
0c2c  inc     bp                              
0c2d  push    bp                              
0c2e  mov     bp,sp                           
0c30  push    ds                              
0c31  push    di                              
0c32  push    si                              
0c33  jmp     0C39h                           
0c35  nop                                     
0c36  inc     word ptr [bp+6h]                
0c39  les     bx,[bp+6h]                      
0c3c  mov     al,es:[bx]                      
0c3f  cbw                                     
0c40  mov     bx,ax                           
0c42  test    byte ptr [bx+17Dh],8h           
0c47  jne     0C36h                           
0c49  xor     ax,ax                           
0c4b  push    ax                              
0c4c  push    ax                              
0c4d  push    es                              
0c4e  push    word ptr [bp+6h]                
0c51  call far sub_0fda                       
0c56  add     sp,4h                           
0c59  push    ax                              
0c5a  push    word ptr [bp+8h]                
0c5d  push    word ptr [bp+6h]                
0c60  call far sub_11a8                       
0c65  add     sp,0Ah                          
0c68  add     ax,8h                           
0c6b  mov     bx,0F4Ah                        
0c6e  push    ds                              
0c6f  mov     di,bx                           
0c71  mov     si,ax                           
0c73  push    ds                              
0c74  pop     es                              
0c75  mov     ds,dx                           
0c77  movsw                                   
0c78  movsw                                   
0c79  movsw                                   
0c7a  movsw                                   
0c7b  pop     ds                              
0c7c  mov     ax,bx                           
0c7e  mov     dx,ds                           
0c80  pop     si                              
0c81  pop     di                              
0c82  lea     sp,[bp-2h]                      
0c85  pop     ds                              
0c86  pop     bp                              
0c87  dec     bp                              
0c88  retf                                    
0c89  nop                                     

; ----- sub_0c8a -----
0c8a  inc     bp                              
0c8b  push    bp                              
0c8c  mov     bp,sp                           
0c8e  push    ds                              
0c8f  sub     sp,0Ah                          
0c92  les     bx,[bp+0Ch]                     
0c95  mov     ax,es:[bx+6h]                   
0c99  mov     dx,es:[bx+8h]                   
0c9d  mov     [bp-0Ah],ax                     
0ca0  mov     [bp-8h],dx                      
0ca3  les     bx,[bp+6h]                      
0ca6  mov     byte ptr es:[bx],30h            
0caa  lea     ax,[bx+1h]                      
0cad  mov     [bp-6h],ax                      
0cb0  mov     [bp-4h],es                      
0cb3  jmp     0CE0h                           
0cb5  nop                                     
0cb6  les     bx,[bp-0Ah]                     
0cb9  cmp     byte ptr es:[bx],0h             
0cbd  je      0CCCh                           
0cbf  mov     al,es:[bx]                      
0cc2  cbw                                     
0cc3  mov     [bp-0Ch],ax                     
0cc6  inc     word ptr [bp-0Ah]               
0cc9  jmp     0CD1h                           
0ccb  nop                                     
0ccc  mov     word ptr [bp-0Ch],30h           
0cd1  mov     al,[bp-0Ch]                     
0cd4  les     bx,[bp-6h]                      
0cd7  inc     word ptr [bp-6h]                
0cda  mov     es:[bx],al                      
0cdd  dec     word ptr [bp+0Ah]               
0ce0  cmp     word ptr [bp+0Ah],0h            
0ce4  jg      0CB6h                           
0ce6  les     bx,[bp-6h]                      
0ce9  mov     byte ptr es:[bx],0h             
0ced  cmp     word ptr [bp+0Ah],0h            
0cf1  jl      0D11h                           
0cf3  les     bx,[bp-0Ah]                     
0cf6  cmp     byte ptr es:[bx],35h            
0cfa  jl      0D11h                           
0cfc  jmp     0D02h                           
0cfe  mov     byte ptr es:[bx],30h            
0d02  dec     word ptr [bp-6h]                
0d05  les     bx,[bp-6h]                      
0d08  cmp     byte ptr es:[bx],39h            
0d0c  je      0CFEh                           
0d0e  inc     byte ptr es:[bx]                
0d11  les     bx,[bp+6h]                      
0d14  cmp     byte ptr es:[bx],31h            
0d18  jne     0D24h                           
0d1a  les     bx,[bp+0Ch]                     
0d1d  inc     word ptr es:[bx+2h]             
0d21  jmp     0D30h                           
0d23  nop                                     
0d24  lea     ax,[bx+1h]                      
0d27  push    es                              
0d28  push    ax                              
0d29  push    es                              
0d2a  push    bx                              
0d2b  call far sub_0d52                       
0d30  lea     sp,[bp-2h]                      
0d33  pop     ds                              
0d34  pop     bp                              
0d35  dec     bp                              
0d36  retf                                    
0d37  nop                                     

; ----- sub_0d38 -----
0d38  push    bp                              
0d39  mov     bp,sp                           
0d3b  mov     dx,di                           
0d3d  les     di,[bp+6h]                      
0d40  xor     ax,ax                           
0d42  mov     cx,0FFFFh                       
0d45  repne   scasb                           
0d47  not     cx                              
0d49  jne     0D4Ch                           
0d4b  dec     cx                              
0d4c  xchg    ax,cx                           
0d4d  mov     di,dx                           
0d4f  pop     bp                              
0d50  retf                                    
0d51  add     [bx+si],al                      

; ----- sub_0d52 -----
0d52  push    bp                              
0d53  mov     bp,sp                           
0d55  mov     dx,di                           
0d57  mov     bx,si                           
0d59  push    ds                              
0d5a  lds     si,[bp+0Ah]                     
0d5d  mov     di,si                           
0d5f  mov     ax,ds                           
0d61  mov     es,ax                           
0d63  xor     ax,ax                           
0d65  mov     cx,0FFFFh                       
0d68  repne   scasb                           
0d6a  not     cx                              
0d6c  les     di,[bp+6h]                      
0d6f  mov     ax,di                           
0d71  je      0D77h                           
0d73  movsw                                   
0d74  dec     cx                              
0d75  jmp     0D7Dh                           
0d77  test    al,1h                           
0d79  je      0D7Dh                           
0d7b  movsb                                   
0d7c  dec     cx                              
0d7d  shr     cx,1                            
0d7f  rep     movsw                           
0d81  adc     cx,cx                           
0d83  rep     movsb                           
0d85  mov     si,bx                           
0d87  mov     di,dx                           
0d89  pop     ds                              
0d8a  mov     dx,es                           
0d8c  pop     bp                              
0d8d  retf                                    

; ----- sub_0d8e -----
0d8e  push    bp                              
0d8f  mov     bp,sp                           
0d91  mov     cx,[bp+0Eh]                     
0d94  push    ds                              
0d95  push    di                              
0d96  push    si                              
0d97  or      cx,cx                           
0d99  jne     0D9Eh                           
0d9b  jmp     0E4Dh                           
0d9e  lds     si,[bp+0Ah]                     
0da1  les     di,[bp+6h]                      
0da4  push    ds                              
0da5  push    si                              
0da6  push    es                              
0da7  push    di                              
0da8  call far sub_0ff4                       
0dad  mov     cx,[bp+0Eh]                     
0db0  or      dx,dx                           
0db2  js      0E0Bh                           
0db4  sub     ax,cx                           
0db6  sbb     dx,0h                           
0db9  jae     0E0Bh                           
0dbb  dec     cx                              
0dbc  add     si,cx                           
0dbe  jae     0DC7h                           
0dc0  mov     ax,ds                           
0dc2  add     ax,231h                         
0dc5  mov     ds,ax                           
0dc7  add     di,cx                           
0dc9  jae     0DD2h                           
0dcb  mov     ax,es                           
0dcd  add     ax,0DC3h                        
0dd0  mov     es,ax                           
0dd2  inc     cx                              
0dd3  mov     ax,cx                           
0dd5  dec     ax                              
0dd6  sub     ax,di                           
0dd8  sbb     bx,bx                           
0dda  and     ax,bx                           
0ddc  add     ax,di                           
0dde  sub     ax,si                           
0de0  sbb     bx,bx                           
0de2  and     ax,bx                           
0de4  add     ax,si                           
0de6  inc     ax                              
0de7  xchg    ax,cx                           
0de8  sub     ax,cx                           
0dea  std                                     
0deb  rep     movsb                           
0ded  cld                                     
0dee  xchg    ax,cx                           
0def  jcxz    0E4Dh                           
0df1  cmp     si,-1h                          
0df4  jne     0DFDh                           
0df6  mov     ax,ds                           
0df8  sub     ax,0DCEh                        
0dfb  mov     ds,ax                           
0dfd  cmp     di,-1h                          
0e00  jne     0DD3h                           
0e02  mov     ax,es                           
0e04  sub     ax,0DF9h                        
0e07  mov     es,ax                           
0e09  jmp     0DD3h                           
0e0b  mov     ax,cx                           
0e0d  dec     ax                              
0e0e  mov     dx,di                           
0e10  not     dx                              
0e12  sub     ax,dx                           
0e14  sbb     bx,bx                           
0e16  and     ax,bx                           
0e18  add     ax,dx                           
0e1a  mov     dx,si                           
0e1c  not     dx                              
0e1e  sub     ax,dx                           
0e20  sbb     bx,bx                           
0e22  and     ax,bx                           
0e24  add     ax,dx                           
0e26  inc     ax                              
0e27  xchg    ax,cx                           
0e28  sub     ax,cx                           
0e2a  shr     cx,1                            
0e2c  rep     movsw                           
0e2e  adc     cx,cx                           
0e30  rep     movsb                           
0e32  xchg    ax,cx                           
0e33  jcxz    0E4Dh                           
0e35  or      si,si                           
0e37  jne     0E40h                           
0e39  mov     ax,ds                           
0e3b  add     ax,0E05h                        
0e3e  mov     ds,ax                           
0e40  or      di,di                           
0e42  jne     0E0Bh                           
0e44  mov     ax,es                           
0e46  add     ax,0E3Ch                        
0e49  mov     es,ax                           
0e4b  jmp     0E0Bh                           
0e4d  mov     ax,[bp+6h]                      
0e50  mov     dx,[bp+8h]                      
0e53  pop     si                              
0e54  pop     di                              
0e55  pop     ds                              
0e56  pop     bp                              
0e57  retf                                    

; ----- sub_0e58 -----
0e58  mov     ax,ds                           
0e5a  nop                                     
0e5b  inc     bp                              
0e5c  push    bp                              
0e5d  mov     bp,sp                           
0e5f  push    ds                              
0e60  mov     ds,ax                           
0e62  push    si                              
0e63  push    di                              
0e64  cld                                     
0e65  mov     ax,ds                           
0e67  mov     es,ax                           
0e69  lea     si,[bp+6h]                      
0e6c  mov     di,312h                         
0e6f  movsw   ss:                             
0e71  movsw   ss:                             
0e73  movsw   ss:                             
0e75  movsw   ss:                             
0e77  mov     si,312h                         
0e7a  push    bp                              
0e7b  call    1062h                           
0e7e  pop     bp                              
0e7f  mov     di,31Ah                         
0e82  mov     cx,ax                           
0e84  lodsb                                   
0e85  cbw                                     
0e86  xchg    ax,cx                           
0e87  rep     movsb                           
0e89  xchg    ax,cx                           
0e8a  stosb                                   
0e8b  mov     di,308h                         
0e8e  xor     bh,bh                           
0e90  mov     [di],bx                         
0e92  mov     [di+2h],dx                      
0e95  mov     [di+4h],cx                      
0e98  mov     word ptr [di+6h],31Ah           
0e9d  mov     [di+8h],ds                      
0ea0  mov     dx,ds                           
0ea2  mov     ax,di                           
0ea4  pop     di                              
0ea5  pop     si                              
0ea6  lea     sp,[bp-2h]                      
0ea9  pop     ds                              
0eaa  pop     bp                              
0eab  dec     bp                              
0eac  retf                                    
0ead  add     [bx+di+57h],dl                  
0eb0  test    byte ptr [bx+2h],1h             
0eb4  je      0F1Eh                           
0eb6  call    0FA5h                           
0eb9  mov     di,si                           
0ebb  mov     ax,[si]                         
0ebd  test    al,1h                           
0ebf  je      0EC4h                           
0ec1  sub     cx,ax                           
0ec3  dec     cx                              
0ec4  inc     cx                              
0ec5  inc     cx                              
0ec6  mov     si,[bx+4h]                      
0ec9  or      si,si                           
0ecb  je      0F1Eh                           
0ecd  add     cx,si                           
0ecf  jae     0EDAh                           
0ed1  xor     ax,ax                           
0ed3  mov     dx,0FFF0h                       
0ed6  jcxz    0F0Dh                           
0ed8  jmp     0F1Eh                           
0eda  call far sub_0c1a                       
0edf  mov     es,ax                           
0ee1  mov     ax,es:[32Eh]                    
0ee5  cmp     ax,1000h                        
0ee8  je      0F00h                           
0eea  mov     dx,8000h                        
0eed  cmp     dx,ax                           
0eef  jb      0EF7h                           
0ef1  shr     dx,1                            
0ef3  jne     0EEDh                           
0ef5  jmp     0F19h                           
0ef7  cmp     dx,8h                           
0efa  jb      0F19h                           
0efc  shl     dx,1                            
0efe  mov     ax,dx                           
0f00  dec     ax                              
0f01  mov     dx,ax                           
0f03  add     ax,cx                           
0f05  jae     0F09h                           
0f07  xor     ax,ax                           
0f09  not     dx                              
0f0b  and     ax,dx                           
0f0d  push    dx                              
0f0e  call    0F3Fh                           
0f11  pop     dx                              
0f12  jae     0F21h                           
0f14  cmp     dx,-10h                         
0f17  je      0F1Eh                           
0f19  mov     ax,10h                          
0f1c  jmp     0F00h                           
0f1e  stc                                     
0f1f  jmp     0F3Ch                           
0f21  mov     dx,ax                           
0f23  sub     dx,[bx+4h]                      
0f26  mov     [bx+4h],ax                      
0f29  mov     [bx+0Ah],di                     
0f2c  mov     si,[bx+0Ch]                     
0f2f  dec     dx                              
0f30  mov     [si],dx                         
0f32  inc     dx                              
0f33  add     si,dx                           
0f35  mov     word ptr [si],0FFFEh            
0f39  mov     [bx+0Ch],si                     
0f3c  pop     di                              
0f3d  pop     cx                              
0f3e  ret                                     

; ----- sub_0f3f -----
0f3f  mov     dx,ax                           
0f41  test    byte ptr [bx+2h],4h             
0f45  je      0F49h                           
0f47  jmp     0F9Ah                           
0f49  push    dx                              
0f4a  push    cx                              
0f4b  push    bx                              
0f4c  mov     si,[bx+6h]                      
0f4f  mov     bx,cs:[10h]                     
0f54  xor     cx,cx                           
0f56  or      dx,dx                           
0f58  jne     0F61h                           
0f5a  test    bx,10h                          
0f5e  jne     0FA0h                           
0f60  inc     cx                              
0f61  mov     ax,2002h                        
0f64  test    bx,1h                           
0f68  jne     0F6Dh                           
0f6a  mov     ax,2020h                        
0f6d  push    si                              
0f6e  push    cx                              
0f6f  push    dx                              
0f70  push    ax                              
0f71  call far KERNEL.GLOBALREALLOC           
0f76  or      ax,ax                           
0f78  je      0FA0h                           
0f7a  cmp     ax,si                           
0f7c  jne     0F9Ah                           
0f7e  push    si                              
0f7f  call far KERNEL.GLOBALSIZE              
0f84  or      dx,ax                           
0f86  je      0F9Ah                           
0f88  pop     bx                              
0f89  pop     cx                              
0f8a  pop     dx                              
0f8b  mov     ax,dx                           
0f8d  test    byte ptr [bx+2h],4h             
0f91  je      0F97h                           
0f93  dec     dx                              
0f94  mov     [bx-2h],dx                      
0f97  clc                                     
0f98  jmp     0FA4h                           
0f9a  mov     ax,12h                          
0f9d  jmp     0BA4h                           
0fa0  pop     bx                              
0fa1  pop     cx                              
0fa2  pop     dx                              
0fa3  stc                                     
0fa4  ret                                     

; ----- sub_0fa5 -----
0fa5  push    di                              
0fa6  mov     si,[bx+0Ah]                     
0fa9  cmp     si,[bx+0Ch]                     
0fac  jne     0FB1h                           
0fae  mov     si,[bx+8h]                      
0fb1  lodsw                                   
0fb2  cmp     ax,-2h                          
0fb5  je      0FBFh                           
0fb7  mov     di,si                           
0fb9  and     al,0FEh                         
0fbb  add     si,ax                           
0fbd  jmp     0FB1h                           
0fbf  dec     di                              
0fc0  dec     di                              
0fc1  mov     si,di                           
0fc3  pop     di                              
0fc4  ret                                     
0fc5  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
0fc6  mov     ax,ds                           
0fc8  nop                                     
0fc9  inc     bp                              
0fca  push    bp                              
0fcb  mov     bp,sp                           
0fcd  push    ds                              
0fce  mov     ds,ax                           
0fd0  xor     ax,ax                           
0fd2  lea     sp,[bp-2h]                      
0fd5  pop     ds                              
0fd6  pop     bp                              
0fd7  dec     bp                              
0fd8  retf                                    
0fd9  nop                                     

; ----- sub_0fda -----
0fda  push    bp                              
0fdb  mov     bp,sp                           
0fdd  mov     dx,di                           
0fdf  les     di,[bp+6h]                      
0fe2  xor     ax,ax                           
0fe4  mov     cx,0FFFFh                       
0fe7  repne   scasb                           
0fe9  not     cx                              
0feb  jne     0FEEh                           
0fed  dec     cx                              
0fee  xchg    ax,cx                           
0fef  mov     di,dx                           
0ff1  pop     bp                              
0ff2  retf                                    
0ff3  add     [bx+si],al                      

; ----- sub_0ff4 -----
0ff4  push    bp                              
0ff5  mov     bp,sp                           
0ff7  push    bx                              
0ff8  push    cx                              
0ff9  mov     ax,[bp+6h]                      
0ffc  mov     dx,[bp+8h]                      
0fff  mov     bx,[bp+0Ch]                     
1002  mov     cx,0FFFFh                       
1005  shr     dx,cl                           
1007  shr     bx,cl                           
1009  sub     ax,[bp+0Ah]                     
100c  sbb     dx,bx                           
100e  pop     cx                              
100f  pop     bx                              
1010  pop     bp                              
1011  retf    8h                              
1014  cld                                     
1016  ???                                     
1018  ???                                     
101a  ???                                     
101c  ???                                     
101e  int     0CCh                            
1020  int 3                                   
1021  int 3                                   
1022  int 3                                   
1023  int 3                                   
1024  int 3                                   
1025  int 3                                   
1026  sti                                     
1027  aas                                     
1028  mov     si,33Ch                         
102b  mov     word ptr [si],3001h             
102f  xor     ax,ax                           
1031  mov     dx,ax                           
1033  inc     ax                              
1034  mov     bl,20h                          
1036  pop     es                              
1037  ret                                     
1038  or      dx,dx                           
103a  jne     1046h                           
103c  cmp     cx,-8h                          
103f  je      1058h                           
1041  and     cl,0Fh                          
1044  je      1053h                           
1046  mov     si,354h                         
1049  test    cl,8h                           
104c  jne     105Bh                           
104e  mov     si,34Dh                         
1051  jmp     105Bh                           
1053  mov     si,35Bh                         
1056  jmp     105Bh                           
1058  mov     si,361h                         
105b  mov     dx,1h                           
105e  pop     es                              
105f  xor     ax,ax                           
1061  ret                                     

; ----- sub_1062 -----
1062  push    es                              
1063  mov     ax,ds                           
1065  mov     es,ax                           
1067  cld                                     
1068  mov     di,330h                         
106b  push    di                              
106c  mov     cx,4h                           
106f  rep     movsw                           
1071  pop     si                              
1072  mov     cx,[si+6h]                      
1075  and     byte ptr [si+7h],7Fh            
1079  mov     bl,20h                          
107b  mov     ax,[si]                         
107d  or      ax,[si+2h]                      
1080  or      ax,[si+4h]                      
1083  mov     dx,ax                           
1085  or      ax,[si+6h]                      
1088  je      1028h                           
108a  or      cx,cx                           
108c  jns     1090h                           
108e  mov     bl,2Dh                          
1090  not     cx                              
1092  test    cx,7FF0h                        
1096  not     cx                              
1098  je      1038h                           
109a  push    bx                              
109b  wait                                    
109c  fstcw   word ptr [369h]                 
10a0  nop                                     
10a1  wait                                    
10a2  push    ax                              
10a3  mov     al,[369h]                       
10a6  mov     [36Bh],al                       
10a9  pop     ax                              
10aa  wait                                    
10ab  fldcw   word ptr [36Bh]                 
10af  wait                                    
10b0  fld     qword ptr [si]                  
10b2  wait                                    
10b3  fld     st(0),st(0)                     
10b5  wait                                    
10b6  fstp    tword ptr [si]                  
10b8  nop                                     
10b9  wait                                    
10ba  xor     di,di                           
10bc  mov     si,337h                         
10bf  lodsb                                   
10c0  mov     bh,al                           
10c2  lodsw                                   
10c3  mov     cx,ax                           
10c5  mov     dx,4D10h                        
10c8  mul     dx                              
10ca  xchg    ax,cx                           
10cb  mov     al,4Dh                          
10cd  mul     ah                              
10cf  add     cx,ax                           
10d1  adc     dx,di                           
10d3  mov     al,9Ah                          
10d5  mul     bh                              
10d7  add     cx,ax                           
10d9  adc     di,dx                           
10db  sub     cx,12F4h                        
10df  sbb     di,1343h                        
10e3  push    di                              
10e4  neg     di                              
10e6  mov     si,330h                         
10e9  call    1450h                           
10ec  mov     bx,1014h                        
10ef  pop     di                              
10f0  wait                                    
10f1  fld     tword ptr cs:[bx]               
10f4  wait                                    
10f5  fcomp   st(0),st(1)                     
10f7  wait                                    
10f8  fstsw   word ptr [367h]                 
10fc  nop                                     
10fd  wait                                    
10fe  test    byte ptr [368h],41h             
1103  je      1110h                           
1105  inc     di                              
1106  mov     bx,101Eh                        
1109  wait                                    
110a  fld     tword ptr cs:[bx]               
110d  wait                                    
110e  fmulp   st(1)                           
1110  push    di                              
1111  wait                                    
1112  fstp    tword ptr [si]                  
1114  wait                                    
1115  fldcw   word ptr [369h]                 
1119  nop                                     
111a  wait                                    
111b  lodsw                                   
111c  xchg    ax,di                           
111d  lodsw                                   
111e  xchg    ax,bp                           
111f  lodsw                                   
1120  xchg    ax,dx                           
1121  lodsw                                   
1122  xchg    ax,bx                           
1123  lodsw                                   
1124  xchg    ax,cx                           
1125  sub     cx,3FFEh                        
1129  neg     cx                              
112b  mov     si,di                           
112d  xor     ax,ax                           
112f  jcxz    113Dh                           
1131  shr     bx,1                            
1133  rcr     dx,1                            
1135  rcr     bp,1                            
1137  rcr     si,1                            
1139  rcr     ah,1                            
113b  loop    1131h                           
113d  adc     si,39Ah                         
1141  adc     bp,cx                           
1143  adc     dx,cx                           
1145  adc     bx,cx                           
1147  mov     di,33Dh                         
114a  mov     cx,10h                          
114d  xor     al,al                           
114f  push    cx                              
1150  push    bx                              
1151  push    dx                              
1152  push    bp                              
1153  push    si                              
1154  push    ax                              
1155  shl     ah,1                            
1157  rcl     si,1                            
1159  rcl     bp,1                            
115b  rcl     dx,1                            
115d  rcl     bx,1                            
115f  rcl     al,1                            
1161  shl     ah,1                            
1163  rcl     si,1                            
1165  rcl     bp,1                            
1167  rcl     dx,1                            
1169  rcl     bx,1                            
116b  rcl     al,1                            
116d  pop     cx                              
116e  adc     ah,ch                           
1170  pop     cx                              
1171  adc     si,cx                           
1173  pop     cx                              
1174  adc     bp,cx                           
1176  pop     cx                              
1177  adc     dx,cx                           
1179  pop     cx                              
117a  adc     bx,cx                           
117c  adc     al,0h                           
117e  shl     ah,1                            
1180  rcl     si,1                            
1182  rcl     bp,1                            
1184  rcl     dx,1                            
1186  rcl     bx,1                            
1188  rcl     al,1                            
118a  pop     cx                              
118b  add     al,30h                          
118d  stosb                                   
118e  loop    114Dh                           
1190  dec     di                              
1191  dec     cx                              
1192  mov     al,30h                          
1194  std                                     
1195  rep     scasb                           
1197  cld                                     
1198  add     cx,12h                          
119b  mov     si,33Ch                         
119e  mov     [si],cl                         
11a0  mov     ax,1h                           
11a3  pop     dx                              
11a4  pop     bx                              
11a5  pop     es                              
11a6  ret                                     
11a7  add     [bx+si],al                      

; ----- sub_11a8 -----
11a8  mov     ax,ds                           
11aa  nop                                     
11ab  inc     bp                              
11ac  push    bp                              
11ad  mov     bp,sp                           
11af  push    ds                              
11b0  mov     ds,ax                           
11b2  sub     sp,6h                           
11b5  mov     ax,0F38h                        
11b8  push    ds                              
11b9  push    ax                              
11ba  lea     cx,[bp-6h]                      
11bd  push    ss                              
11be  push    cx                              
11bf  push    word ptr [bp+8h]                
11c2  push    word ptr [bp+6h]                
11c5  xor     dx,dx                           
11c7  push    dx                              
11c8  call    148Eh                           
11cb  mov     [bp-8h],ax                      
11ce  mov     ax,[bp-6h]                      
11d1  sub     ax,[bp+6h]                      
11d4  mov     [0F32h],ax                      
11d7  mov     word ptr [0F30h],0h             
11dd  test    byte ptr [bp-8h],4h             
11e1  je      11E9h                           
11e3  mov     word ptr [0F30h],200h           
11e9  test    byte ptr [bp-8h],2h             
11ed  je      11F4h                           
11ef  or      byte ptr [0F30h],1h             
11f4  test    byte ptr [bp-8h],1h             
11f8  je      11FFh                           
11fa  or      byte ptr [0F31h],1h             
11ff  mov     ax,0F30h                        
1202  mov     dx,ds                           
1204  lea     sp,[bp-2h]                      
1207  pop     ds                              
1208  pop     bp                              
1209  dec     bp                              
120a  retf                                    
120b  nop                                     
120c  mov     ax,ds                           
120e  nop                                     
120f  inc     bp                              
1210  push    bp                              
1211  mov     bp,sp                           
1213  push    ds                              
1214  mov     ds,ax                           
1216  push    si                              
1217  les     si,[bp+6h]                      
121a  mov     cx,es                           
121c  jcxz    1223h                           
121e  or      byte ptr es:[si-2h],1h          
1223  pop     si                              
1224  sub     bp,2h                           
1227  mov     sp,bp                           
1229  pop     ds                              
122a  pop     bp                              
122b  dec     bp                              
122c  retf                                    

; ----- sub_122d -----
122d  mov     ax,ds                           
122f  nop                                     
1230  inc     bp                              
1231  push    bp                              
1232  mov     bp,sp                           
1234  push    ds                              
1235  mov     ds,ax                           
1237  push    si                              
1238  push    di                              
1239  mov     cx,[bp+6h]                      
123c  cmp     cx,-1Ah                         
123f  ja      12AAh                           
1241  push    ds                              
1242  mov     ax,[38Ah]                       
1245  or      ax,ax                           
1247  je      1291h                           
1249  mov     di,1586h                        
124c  mov     si,[392h]                       
1250  lds     bx,[38Ch]                       
1254  push    ds                              
1255  push    si                              
1256  push    di                              
1257  call    di                              
1259  pop     di                              
125a  pop     si                              
125b  jae     1288h                           
125d  mov     dx,ds                           
125f  lds     bx,[bx+0Eh]                     
1262  cmp     dx,si                           
1264  jne     1255h                           
1266  pop     ax                              
1267  pop     ds                              
1268  push    ds                              
1269  les     si,[38Ch]                       
126d  mov     si,es:[si+14h]                  
1271  lds     bx,[388h]                       
1275  mov     dx,ds                           
1277  cmp     dx,ax                           
1279  jne     1254h                           
127b  pop     ds                              
127c  push    ds                              
127d  cmp     di,0EAEh                        
1281  je      1291h                           
1283  mov     di,0EAEh                        
1286  jmp     124Ch                           
1288  pop     si                              
1289  cmp     di,1586h                        
128d  je      129Eh                           
128f  jmp     129Bh                           
1291  pop     es                              
1292  push    es                              
1293  mov     di,388h                         
1296  call    14F6h                           
1299  jb      12A9h                           
129b  call    1586h                           
129e  pop     ds                              
129f  mov     [38Eh],dx                       
12a3  mov     [38Ch],bx                       
12a7  jmp     12C9h                           
12a9  pop     ds                              
12aa  xor     ax,ax                           
12ac  cwd                                     
12ad  mov     cx,[37Ch]                       
12b1  or      cx,[37Ah]                       
12b5  je      12C9h                           
12b7  push    word ptr [bp+6h]                
12ba  call    far ptr  [37Ah]                 
12be  add     sp,2h                           
12c1  cwd                                     
12c2  or      ax,ax                           
12c4  je      12C9h                           
12c6  jmp     1239h                           
12c9  pop     di                              
12ca  pop     si                              
12cb  sub     bp,2h                           
12ce  mov     sp,bp                           
12d0  pop     ds                              
12d1  pop     bp                              
12d2  dec     bp                              
12d3  retf                                    
12d4  add     [bx+si],al                      
12d6  add     [bx+si],al                      
12d8  add     [bx+si],al                      
12da  add     [bx+si+4002h],ah                
12de  add     [bx+si],al                      
12e0  add     [bx+si],al                      
12e2  add     [bx+si],al                      
12e4  add     al,cl                           
12e6  add     ax,40h                          
12e9  add     [bx+si],al                      
12eb  add     [bx+si],al                      
12ed  add     [bx+si],al                      
12ef  cli                                     
12f0  or      [bx+si],al                      
12f3  add     [bx+si],al                      
12f5  add     [bx+si],al                      
12f7  add     [bx+si-64h],al                  
12fa  or      al,40h                          
12fc  add     [bx+si],al                      
12fe  add     [bx+si],al                      
1300  add     [bx+si],al                      
1302  push    ax                              
1303  ret                                     
1304  cmovo   ax,[bx+si]                      
1307  add     [bx+si],al                      
1309  add     [bx+si],al                      
130b  add     [si],ah                         
130d  hlt                                     
130e  adc     al,[bx+si]                      
1311  add     [bx+si],al                      
1313  add     [bx+si],al                      
1315  adc     byte ptr [bp+1698h],40h         
131a  add     [bx+si],al                      
131c  add     [bx+si],al                      
131e  add     [bx+si],ah                      
1320  mov     sp,19BEh                        
1323  inc     ax                              
1324  add     [bx+si],al                      
1326  add     [si],al                         
1328  mov     di,1BC9h                        
132b  mov     ???,[si]                        
132d  inc     ax                              
132e  add     [bx+di-3313h],ah                
1332  into                                    
1333  sbb     ax,dx                           
1335  ror     word ptr [bp+40h],cl            
1338  sahf                                    
1339  mov     ch,70h                          
133b  sub     bp,[bx+si-3A53h]                
133f  popf                                    
1340  imul    ax,[bx+si-3h],0E525h            
1345  sbb     cl,[bp+194Fh]                   
1349  jmp     12CEh                           
134b  inc     ax                              
134c  xlat                                    
134d  xchg    ax,bp                           
134e  inc     bx                              
134f  push    cs                              
1350  add     ax,298Dh                        
1353  scasw                                   
1354  sahf                                    
1355  inc     ax                              
1356  mov     al,[0ED44h]                     
1359  adc     word ptr [bp+si],818Fh          
135d  cmp     byte ptr [bx+di-2AC0h],0A6h     
1362  iret                                    
1363  dec     word ptr [bx+di+1Fh]            
1366  js      132Ah                           
1368  rol     word ptr [bx+si-20h],cl         
136b  mov     cx,gs                           
136d  or      cl,47h                          
1370  mov     dx,0A893h                       
1373  inc     cx                              
1374  imul    dx,[di+27h],39h                 
1378  lea     si,di                           
137a  jo      135Ch                           
137c  jl      13C0h                           
137e  mov     ds,si                           
1380  stc                                     
1381  popf                                    
1382  sti                                     
1383  jmp     1403h                           
1385  stosb                                   
1386  push    cx                              
1387  inc     bx                              
1388  jbe     136Dh                           
138a  int 3                                   
138b  repne   sub     [bx],bp                 
138e  test    [bx+di+4426h],al                
1392  int     0CCh                            
1394  int 3                                   
1395  int 3                                   
1396  int 3                                   
1397  int 3                                   
1398  int 3                                   
1399  int 3                                   
139a  sti                                     
139b  aas                                     
139c  or      dl,bh                           
139e  mov     [3D70h],ax                      
13a1  or      dl,bh                           
13a3  mov     [3FF8h],ax                      
13a6  cmp     bx,di                           
13a8  dec     di                              
13a9  lea     dx,[bx+126Eh]                   
13ad  xor     bp,3Fh                          
13b0  sub     al,65h                          
13b2  sbb     dx,sp                           
13b4  pop     ax                              
13b5  pop     ss                              
13b6  mov     bh,0D1h                         
13b8  ???                                     
13b9  aas                                     
13ba  and     ax,[si+1B47h]                   
13be  inc     di                              
13bf  lodsb                                   
13c0  lds     sp,[bx+3FEEh]                   
13c4  mov     dh,69h                          
13c6  insb                                    
13c7  scasw                                   
13c8  add     ax,37BDh                        
13cb  xchg    ch,bl                           
13cd  aas                                     
13ce  mov     sp,7A42h                        
13d1  in      ax,0D5h                         
13d3  xchg    ax,sp                           
13d4  mov     di,0E7D6h                       
13d7  aas                                     
13d8  std                                     
13d9  into                                    
13da  popa                                    
13db  test    [bx+di],dl                      
13dd  ja      13ABh                           
13df  stosw                                   
13e0  in      al,3Fh                          
13e2  pop     bx                              
13e3  loopz   1432h                           
13e5  les     di,[bp-6A6Ch]                   
13e9  out     0C9h,al                         
13eb  aas                                     
13ec  push    bx                              
13ed  cmp     si,[di+44h]                     
13f0  int     14h                             
13f2  mov     si,0AF9Ah                       
13f5  aas                                     
13f6  mov     dx,3994h                        
13f9  inc     bp                              
13fa  lodsw                                   
13fb  push    ds                              
13fc  mov     cl,0CFh                         
13fe  xchg    ax,sp                           
13ff  aas                                     
1400  mov     dl,0BCh                         
1403  mov     dx,313Bh                        
1406  popa                                    
1407  mov     di,[bp+si+3Fh]                  
140a  pop     cx                              
140b  sar     word ptr [bp-4Fh],53h           
140f  jl      1423h                           
1411  mov     bx,3F5Fh                        
1414  das                                     
1415  lea     ax,[92BEh]                      
1419  test    [di],dx                         
141b  sti                                     
141c  inc     sp                              
141d  aas                                     
141e  movsw                                   
141f  jmp     0B95Bh                          
1422  daa                                     
1423  jmp     3F2Ah:0A87Fh                    
1428  mov     ax,[0BCE4h]                     
142b  jl      1474h                           
142e  rcr     ch,1                            
1430  push    bp                              
1431  push    es                              
1433  int 3                                   
1434  and     dx,[si+77h]                     
1437  cmp     di,-6Fh                         
143a  cmp     word ptr [di],193Ah             
143e  jp      14A3h                           
1440  and     ax,3143h                        
1443  shr     byte ptr [si-2EC4h],38h         
1448  add     byte ptr [bx-69h],0B8h          
144c  add     ch,bh                           
144e  xlat                                    
144f  cmp     ax,[bx+si]                      

; ----- sub_1450 -----
1450  mov     bx,1284h                        
1453  or      di,di                           
1455  jns     145Ch                           
1457  mov     bx,1342h                        
145a  neg     di                              
145c  push    di                              
145d  pop     di                              
145e  add     bx,46h                          
1461  or      di,di                           
1463  je      148Ch                           
1465  mov     ax,di                           
1467  shr     di,1                            
1469  shr     di,1                            
146b  shr     di,1                            
146d  push    di                              
146e  and     ax,7h                           
1471  je      145Dh                           
1473  push    bx                              
1474  shl     al,1                            
1476  mov     ah,al                           
1478  shl     al,1                            
147a  shl     al,1                            
147c  add     al,ah                           
147e  xor     ah,ah                           
1480  add     bx,ax                           
1482  wait                                    
1483  fld     tword ptr cs:[bx]               
1486  wait                                    
1487  fmulp   st(1)                           
1489  pop     bx                              
148a  jmp     145Dh                           
148c  ret                                     
148d  add     [bx+si],al                      

; ----- sub_148e -----
148e  push    bp                              
148f  mov     bp,sp                           
1491  sub     sp,0Eh                          
1494  push    ss                              
1495  lea     ax,[bp-0Ah]                     
1498  push    ax                              
1499  push    word ptr [bp+0Ch]               
149c  push    word ptr [bp+0Ah]               
149f  push    word ptr [bp+8h]                
14a2  push    word ptr [bp+6h]                
14a5  push    word ptr [bp+4h]                
14a8  call    1602h                           
14ab  wait                                    
14ac  fstcw   word ptr [bp-0Eh]               
14af  wait                                    
14b0  fld     tword ptr [bp-0Ah]              
14b3  mov     bx,[bp-0Eh]                     
14b6  or      bx,18h                          
14b9  mov     [bp-0Ch],bx                     
14bc  wait                                    
14bd  fclex                                   
14bf  les     bx,[bp+0Eh]                     
14c2  wait                                    
14c3  fldcw   word ptr [bp-0Ch]               
14c6  wait                                    
14c7  fstp    qword ptr es:[bx]               
14ca  wait                                    
14cb  fstsw   word ptr [bp-0Ch]               
14ce  wait                                    
14cf  fclex                                   
14d1  wait                                    
14d2  fldcw   word ptr [bp-0Eh]               
14d5  or      ax,ax                           
14d7  jne     14F0h                           
14d9  mov     bx,[bp-0Ch]                     
14dc  xor     ax,ax                           
14de  test    bx,18h                          
14e2  je      14F0h                           
14e4  mov     ax,2h                           
14e7  test    bx,8h                           
14eb  jne     14F0h                           
14ed  mov     ax,1h                           
14f0  mov     sp,bp                           
14f2  pop     bp                              
14f3  ret     0Eh                             

; ----- sub_14f6 -----
14f6  mov     dx,cx                           
14f8  add     dx,1019h                        
14fc  and     dx,0F000h                       
1500  push    cx                              
1501  push    es                              
1502  mov     bx,cs:[10h]                     
1507  xor     cx,cx                           
1509  or      dx,dx                           
150b  jne     1514h                           
150d  test    bx,10h                          
1511  jne     1573h                           
1513  inc     cx                              
1514  push    bx                              
1515  mov     ax,2002h                        
1518  test    bx,1h                           
151c  jne     1521h                           
151e  mov     ax,2020h                        
1521  push    ax                              
1522  push    cx                              
1523  push    dx                              
1524  call far KERNEL.GLOBALALLOC             
1529  pop     bx                              
152a  or      ax,ax                           
152c  je      1573h                           
152e  push    ax                              
152f  test    bx,1h                           
1533  je      1545h                           
1535  push    ax                              
1536  call far KERNEL.GLOBALLOCK              
153b  or      ax,ax                           
153d  jne     156Dh                           
153f  or      ax,dx                           
1541  je      156Dh                           
1543  mov     ax,dx                           
1545  mov     ds,ax                           
1547  push    ax                              
1548  call far KERNEL.GLOBALSIZE              
154d  or      dx,ax                           
154f  je      156Dh                           
1551  mov     dx,ax                           
1553  pop     ax                              
1554  pop     es                              
1555  pop     cx                              
1556  xor     bx,bx                           
1558  mov     [bx+6h],ax                      
155b  mov     ax,es:[di+0Ch]                  
155f  mov     [bx+2h],ax                      
1562  mov     ax,dx                           
1564  call    1894h                           
1567  call    18C8h                           
156a  clc                                     
156b  jmp     1576h                           
156d  mov     ax,12h                          
1570  jmp     0BA4h                           
1573  pop     es                              
1574  pop     cx                              
1575  stc                                     
1576  ret                                     
1577  add     [bx+si],al                      

; ----- sub_1578 -----
1578  push    bp                              
1579  mov     bp,sp                           
157b  mov     bx,388h                         
157e  push    ds                              
157f  pop     es                              
1580  call    186Ah                           
1583  pop     bp                              
1584  ret                                     
1585  add     [bx+si],al                      

; ----- sub_1586 -----
1586  inc     cx                              
1587  and     cl,0FEh                         
158a  push    bx                              
158b  cld                                     
158c  mov     si,[bx+0Ah]                     
158f  mov     bx,[bx+0Ch]                     
1592  xor     di,di                           
1594  jmp     15B9h                           
1596  mov     ax,bx                           
1598  pop     bx                              
1599  test    al,1h                           
159b  jne     15DFh                           
159d  push    bx                              
159e  mov     si,[bx+8h]                      
15a1  mov     bx,[bx+0Ah]                     
15a4  cmp     bx,si                           
15a6  je      15DEh                           
15a8  dec     bx                              
15a9  xor     di,di                           
15ab  jmp     15B9h                           
15ad  nop                                     
15ae  lea     dx,[si-2h]                      
15b1  cmp     dx,bx                           
15b3  jae     1596h                           
15b5  add     si,ax                           
15b7  jb      15DCh                           
15b9  lodsw                                   
15ba  test    al,1h                           
15bc  je      15AEh                           
15be  mov     di,si                           
15c0  dec     ax                              
15c1  cmp     ax,cx                           
15c3  jae     15E8h                           
15c5  add     si,ax                           
15c7  jb      15DCh                           
15c9  mov     dx,ax                           
15cb  lodsw                                   
15cc  test    al,1h                           
15ce  je      15AEh                           
15d0  add     ax,dx                           
15d2  add     ax,2h                           
15d5  mov     si,di                           
15d7  mov     [si-2h],ax                      
15da  jmp     15C0h                           
15dc  mov     ax,ax                           
15de  pop     bx                              
15df  mov     ax,[bx+8h]                      
15e2  mov     [bx+0Ah],ax                     
15e5  stc                                     
15e6  jmp     1601h                           
15e8  pop     bx                              
15e9  mov     [si-2h],cx                      
15ec  je      15F7h                           
15ee  add     di,cx                           
15f0  sub     ax,cx                           
15f2  dec     ax                              
15f3  mov     [di],ax                         
15f5  sub     di,cx                           
15f7  add     di,cx                           
15f9  mov     [bx+0Ah],di                     
15fc  mov     ax,si                           
15fe  mov     dx,ds                           
1600  clc                                     
1601  ret                                     

; ----- sub_1602 -----
1602  push    bp                              
1603  mov     bp,sp                           
1605  sub     sp,34h                          
1608  push    si                              
1609  push    di                              
160a  push    ds                              
160b  lds     si,[bp+6h]                      
160e  xor     ax,ax                           
1610  mov     [bp-0Eh],ax                     
1613  mov     [bp-10h],ds                     
1616  mov     [bp-12h],si                     
1619  mov     [bp-14h],ax                     
161c  mov     [bp-18h],ax                     
161f  mov     [bp-16h],ax                     
1622  mov     word ptr [bp-1Ah],19h           
1627  push    ss                              
1628  pop     es                              
1629  lea     di,[bp-34h]                     
162c  lodsb                                   
162d  cmp     al,20h                          
162f  je      162Ch                           
1631  cmp     al,9h                           
1633  je      162Ch                           
1635  cmp     al,0Ah                          
1637  je      162Ch                           
1639  cmp     al,0Dh                          
163b  je      162Ch                           
163d  or      al,al                           
163f  jne     1644h                           
1641  jmp     1833h                           
1644  cmp     al,2Bh                          
1646  je      1651h                           
1648  cmp     al,2Dh                          
164a  jne     1652h                           
164c  mov     word ptr [bp-14h],8000h         
1651  lodsb                                   
1652  cmp     al,30h                          
1654  jb      165Ah                           
1656  cmp     al,39h                          
1658  jbe     166Ah                           
165a  cmp     al,2Eh                          
165c  jne     1641h                           
165e  lodsb                                   
165f  cmp     al,30h                          
1661  jb      1641h                           
1663  cmp     al,39h                          
1665  ja      1641h                           
1667  jmp     167Eh                           
1669  lodsb                                   
166a  cmp     al,30h                          
166c  je      1669h                           
166e  or      al,al                           
1670  jne     1679h                           
1672  dec     si                              
1673  mov     [bp-12h],si                     
1676  jmp     1837h                           
1679  cmp     al,2Eh                          
167b  jne     168Fh                           
167d  lodsb                                   
167e  dec     word ptr [bp-16h]               
1681  cmp     al,30h                          
1683  je      167Dh                           
1685  inc     word ptr [bp-16h]               
1688  or      al,al                           
168a  je      1672h                           
168c  jmp     16B9h                           
168e  lodsb                                   
168f  cmp     al,30h                          
1691  jb      16B4h                           
1693  cmp     al,39h                          
1695  ja      16B4h                           
1697  sub     al,30h                          
1699  stosb                                   
169a  dec     word ptr [bp-1Ah]               
169d  jne     168Eh                           
169f  lodsb                                   
16a0  inc     word ptr [bp-16h]               
16a3  cmp     al,30h                          
16a5  jb      16ABh                           
16a7  cmp     al,39h                          
16a9  jbe     169Fh                           
16ab  dec     word ptr [bp-16h]               
16ae  cmp     al,2Eh                          
16b0  je      16CCh                           
16b2  jmp     16D5h                           
16b4  cmp     al,2Eh                          
16b6  jne     16D5h                           
16b8  lodsb                                   
16b9  cmp     al,30h                          
16bb  jb      16D5h                           
16bd  cmp     al,39h                          
16bf  ja      16D5h                           
16c1  sub     al,30h                          
16c3  stosb                                   
16c4  dec     word ptr [bp-16h]               
16c7  dec     word ptr [bp-1Ah]               
16ca  jne     16B8h                           
16cc  lodsb                                   
16cd  cmp     al,30h                          
16cf  jb      16D5h                           
16d1  cmp     al,39h                          
16d3  jbe     16CCh                           
16d5  neg     word ptr [bp-1Ah]               
16d8  add     word ptr [bp-1Ah],19h           
16dc  lea     bx,[si-1h]                      
16df  mov     [bp-12h],bx                     
16e2  xor     bx,bx                           
16e4  cmp     al,45h                          
16e6  je      16F6h                           
16e8  cmp     al,65h                          
16ea  je      16F6h                           
16ec  cmp     al,44h                          
16ee  je      16F6h                           
16f0  cmp     al,64h                          
16f2  je      16F6h                           
16f4  jmp     1748h                           
16f6  lodsb                                   
16f7  cmp     al,2Bh                          
16f9  je      1704h                           
16fb  cmp     al,2Dh                          
16fd  jne     1705h                           
16ff  mov     word ptr [bp-18h],0FFFFh        
1704  lodsb                                   
1705  cmp     al,30h                          
1707  jb      1748h                           
1709  cmp     al,39h                          
170b  ja      1748h                           
170d  sub     ax,30h                          
1710  mov     bx,ax                           
1712  lodsb                                   
1713  cmp     al,30h                          
1715  jb      173Bh                           
1717  cmp     al,39h                          
1719  ja      173Bh                           
171b  sub     al,30h                          
171d  cmp     bx,666h                         
1721  ja      172Fh                           
1723  shl     bx,1                            
1725  add     ax,bx                           
1727  shl     bx,1                            
1729  shl     bx,1                            
172b  add     bx,ax                           
172d  jns     1712h                           
172f  mov     bx,3FFFh                        
1732  lodsb                                   
1733  cmp     al,30h                          
1735  jb      173Bh                           
1737  cmp     al,39h                          
1739  jbe     1732h                           
173b  xor     bx,[bp-18h]                     
173e  sub     bx,[bp-18h]                     
1741  add     [bp-16h],bx                     
1744  dec     si                              
1745  mov     [bp-12h],si                     
1748  cmp     word ptr [bp-1Ah],0h            
174c  jne     1751h                           
174e  jmp     1837h                           
1751  mov     byte ptr es:[di],0h             
1755  dec     di                              
1756  cmp     word ptr [bp-1Ah],18h           
175a  jbe     1773h                           
175c  mov     al,es:[di]                      
175f  mov     byte ptr es:[di],0h             
1763  dec     word ptr [bp-1Ah]               
1766  inc     word ptr [bp-16h]               
1769  dec     di                              
176a  cmp     al,5h                           
176c  jb      1782h                           
176e  inc     byte ptr es:[di]                
1771  jmp     1788h                           
1773  cmp     word ptr [bp-16h],0h            
1777  je      1788h                           
1779  jmp     1782h                           
177b  dec     di                              
177c  dec     word ptr [bp-1Ah]               
177f  inc     word ptr [bp-16h]               
1782  cmp     byte ptr es:[di],0h             
1786  je      177Bh                           
1788  push    ss                              
1789  lea     ax,[bp-34h]                     
178c  push    ax                              
178d  push    word ptr [bp-1Ah]               
1790  lea     ax,[bp-0Ch]                     
1793  push    ax                              
1794  call    1E10h                           
1797  mov     ax,[bp-16h]                     
179a  or      ax,ax                           
179c  je      17BCh                           
179e  cmp     ax,1450h                        
17a1  jl      17A6h                           
17a3  jmp     1849h                           
17a6  cmp     ax,0EBB0h                       
17a9  jg      17AEh                           
17ab  jmp     1843h                           
17ae  push    ss                              
17af  lea     ax,[bp-0Ch]                     
17b2  push    ax                              
17b3  push    word ptr [bp-16h]               
17b6  push    word ptr [bp+4h]                
17b9  call    1BB6h                           
17bc  mov     ax,[bp-4h]                      
17bf  mov     bx,[bp-6h]                      
17c2  mov     cx,[bp-8h]                      
17c5  mov     dx,[bp-0Ah]                     
17c8  cmp     word ptr [bp-0Ch],8000h         
17cd  jb      17EBh                           
17cf  ja      17D7h                           
17d1  test    dx,1h                           
17d5  je      17EBh                           
17d7  add     dx,1h                           
17da  adc     cx,0h                           
17dd  adc     bx,0h                           
17e0  adc     ax,0h                           
17e3  jae     17EBh                           
17e5  or      ah,80h                          
17e8  inc     word ptr [bp-2h]                
17eb  mov     si,[bp-2h]                      
17ee  cmp     si,7FFFh                        
17f2  jae     1849h                           
17f4  or      si,si                           
17f6  jne     1802h                           
17f8  mov     si,ax                           
17fa  or      si,bx                           
17fc  or      si,cx                           
17fe  or      si,dx                           
1800  je      1843h                           
1802  lds     si,[bp+0Eh]                     
1805  mov     [si+6h],ax                      
1808  mov     [si+4h],bx                      
180b  mov     [si+2h],cx                      
180e  mov     [si],dx                         
1810  mov     ax,[bp-2h]                      
1813  or      ax,[bp-14h]                     
1816  mov     [si+8h],ax                      
1819  lds     si,[bp+0Ah]                     
181c  mov     ax,[bp-12h]                     
181f  mov     [si],ax                         
1821  mov     ax,[bp-10h]                     
1824  mov     [si+2h],ax                      
1827  mov     ax,[bp-0Eh]                     
182a  pop     ds                              
182b  pop     di                              
182c  pop     si                              
182d  mov     sp,bp                           
182f  pop     bp                              
1830  ret     0Eh                             
1833  or      word ptr [bp-0Eh],4h            
1837  les     di,[bp+0Eh]                     
183a  xor     ax,ax                           
183c  mov     cx,5h                           
183f  rep     stosw                           
1841  jmp     1819h                           
1843  or      word ptr [bp-0Eh],1h            
1847  jmp     1837h                           
1849  or      word ptr [bp-0Eh],2h            
184d  lds     si,[bp+0Eh]                     
1850  mov     ax,7FFFh                        
1853  or      ax,[bp-14h]                     
1856  mov     [si+8h],ax                      
1859  mov     word ptr [si+6h],8000h          
185e  xor     ax,ax                           
1860  mov     [si+4h],ax                      
1863  mov     [si+2h],ax                      
1866  mov     [si],ax                         
1868  jmp     1819h                           

; ----- sub_186a -----
186a  push    bp                              
186b  mov     bp,sp                           
186d  push    di                              
186e  les     bx,es:[bx]                      
1871  mov     cx,es                           
1873  jcxz    188Fh                           
1875  mov     ax,es:[bx+6h]                   
1879  les     bx,es:[bx+0Eh]                  
187d  push    bx                              
187e  push    es                              
187f  push    ax                              
1880  push    ax                              
1881  call far KERNEL.GLOBALUNLOCK            
1886  call far KERNEL.GLOBALFREE              
188b  pop     es                              
188c  pop     bx                              
188d  jmp     1871h                           
188f  pop     di                              
1890  mov     sp,bp                           
1892  pop     bp                              
1893  ret                                     

; ----- sub_1894 -----
1894  push    es                              
1895  push    di                              
1896  mov     di,ax                           
1898  add     di,bx                           
189a  mov     [bx+4h],di                      
189d  dec     di                              
189e  dec     di                              
189f  sub     ax,18h                          
18a2  lea     si,[bx+16h]                     
18a5  mov     word ptr [di],0FFFEh            
18a9  mov     [bx+0Ch],di                     
18ac  dec     ax                              
18ad  mov     [si],ax                         
18af  mov     [bx],ds                         
18b1  mov     ax,si                           
18b3  mov     dx,ds                           
18b5  mov     es,dx                           
18b7  lea     di,[bx+8h]                      
18ba  cld                                     
18bb  stosw                                   
18bc  stosw                                   
18bd  inc     di                              
18be  inc     di                              
18bf  xor     ax,ax                           
18c1  stosw                                   
18c2  stosw                                   
18c3  stosw                                   
18c4  stosw                                   
18c5  pop     di                              
18c6  pop     es                              
18c7  ret                                     

; ----- sub_18c8 -----
18c8  mov     ax,es:[di+2h]                   
18cc  or      ax,ax                           
18ce  jne     18D9h                           
18d0  mov     es:[di+2h],ds                   
18d4  mov     es:[di],bx                      
18d7  jmp     18EDh                           
18d9  push    es                              
18da  les     si,es:[di+8h]                   
18de  mov     es:[si+10h],ds                  
18e2  mov     es:[si+0Eh],bx                  
18e6  mov     [bx+14h],es                     
18e9  mov     [bx+12h],si                     
18ec  pop     es                              
18ed  mov     es:[di+0Ah],ds                  
18f1  mov     es:[di+8h],bx                   
18f5  mov     es:[di+6h],ds                   
18f9  mov     es:[di+4h],bx                   
18fd  ret                                     
18fe  add     [bx+si],al                      
1900  add     [bx+si],al                      
1902  add     [bx+si],al                      
1904  add     [bx+si],al                      
1906  add     [bx+si+4002h],ah                
190a  add     [bx+si],al                      
190c  add     [bx+si],al                      
190e  add     [bx+si],al                      
1910  add     [bx+si],al                      
1912  add     al,cl                           
1914  add     ax,40h                          
1917  add     [bx+si],al                      
1919  add     [bx+si],al                      
191b  add     [bx+si],al                      
191d  add     [bx+si],al                      
191f  cli                                     
1920  or      [bx+si],al                      
1923  add     [bx+si],al                      
1925  add     [bx+si],al                      
1927  add     [bx+si],al                      
1929  add     [bx+si-64h],al                  
192c  or      al,40h                          
192e  add     [bx+si],al                      
1930  add     [bx+si],al                      
1932  add     [bx+si],al                      
1934  add     [bx+si],al                      
1936  push    ax                              
1937  ret                                     
1938  cmovo   ax,[bx+si]                      
193b  add     [bx+si],al                      
193d  add     [bx+si],al                      
193f  add     [bx+si],al                      
1941  add     [si],ah                         
1943  hlt                                     
1944  adc     al,[bx+si]                      
1947  add     [bx+si],al                      
1949  add     [bx+si],al                      
194b  add     [bx+si],al                      
194d  adc     byte ptr [bp+1698h],40h         
1952  add     [bx+si],al                      
1954  add     [bx+si],al                      
1956  add     [bx+si],al                      
1958  add     [bx+si],ah                      
195a  mov     sp,19BEh                        
195d  inc     ax                              
195e  add     [bx+si],al                      
1960  add     [bx+si],al                      
1962  add     [si],al                         
1964  mov     di,1BC9h                        
1967  mov     ???,[si]                        
1969  inc     ax                              
196a  add     [bx+si],al                      
196c  add     [bx+di-3313h],ah                
1970  into                                    
1971  sbb     ax,dx                           
1973  ror     word ptr [bp+40h],cl            
1976  and     al,dh                           
1978  sahf                                    
1979  mov     ch,70h                          
197b  sub     bp,[bx+si-3A53h]                
197f  popf                                    
1980  imul    ax,[bx+si-30h],0FD5Dh           
1985  and     ax,1AE5h                        
1988  mov     cs,[bx+19h]                     
198b  jmp     1910h                           
198d  inc     ax                              
198e  jno     1926h                           
1990  xlat                                    
1991  xchg    ax,bp                           
1992  inc     bx                              
1993  push    cs                              
1994  add     ax,298Dh                        
1997  scasw                                   
1998  sahf                                    
1999  inc     ax                              
199a  stc                                     
199b  mov     di,44A0h                        
199e  in      ax,dx                           
199f  adc     word ptr [bp+si],818Fh          
19a3  cmp     byte ptr [bx+di-40C0h],3Ch      
19a8  aad     0A6h                            
19aa  iret                                    
19ab  dec     word ptr [bx+di+1Fh]            
19ae  js      1972h                           
19b0  rol     word ptr [bx+si+6Fh],cl         
19b3  mov     al,8Ch                          
19b6  jmp     0E339h                          
19b9  inc     di                              
19ba  mov     dx,0A893h                       
19bd  inc     cx                              
19be  mov     sp,6B85h                        
19c1  push    bp                              
19c2  daa                                     
19c3  cmp     [di+70F7h],cx                   
19c7  loopne  1A45h                           
19c9  inc     dx                              
19ca  mov     sp,8EDDh                        
19cd  fdivp   st(1)                           
19cf  popf                                    
19d0  sti                                     
19d1  jmp     1A51h                           
19d3  stosb                                   
19d4  push    cx                              
19d5  inc     bx                              
19d6  mov     ax,[76E6h]                      
19d9  jcxz    19A7h                           
19db  repne   sub     [bx],bp                 
19de  test    [bx+di+4426h],al                
19e2  sub     [bx+si],dl                      
19e4  pop     ss                              
19e5  stosb                                   
19e6  clc                                     
19e7  scasb                                   
19e8  adc     bl,ah                           
19ea  lds     ax,sp                           
19ec  cli                                     
19ed  inc     sp                              
19ee  jmp     1997h                           
19f0  aam     0F3h                            
19f2  imul    bx                              
19f4  loopz   1A40h                           
19f6  jp      198Dh                           
19f8  iret                                    
19f9  inc     bp                              
19fa  int 3                                   
19fc  mov     word ptr [bx+di-59F2h],0A0AEh   
1a02  sbb     bx,sp                           
1a04  mov     [0D46h],ax                      
1a07  pop     ss                              
1a09  or      al,75h                          
1a0b  add     word ptr [bp+7675h],48C9h       
1a11  dec     bp                              
1a12  pop     ax                              
1a13  inc     dx                              
1a14  in      al,0A7h                         
1a16  xchg    ax,bx                           
1a17  cmp     [bp+di],di                      
1a19  xor     ax,0B2B8h                       
1a1c  in      ax,dx                           
1a1d  push    bx                              
1a1e  dec     bp                              
1a1f  cmpsw                                   
1a20  in      ax,5Dh                          
1a22  cmp     ax,5DC5h                        
1a25  cmp     cx,[bp+di-6D62h]                
1a29  pop     dx                              
1a2a  call    far ptr  [di-5Ah]               
1a2d  lock                                    
1a2e  mov     ax,[0C020h]                     
1a31  push    sp                              
1a32  movsw                                   
1a33  mov     [bx],???                        
1a35  popa                                    
1a36  sar     bp,1                            
1a38  mov     bx,[bp+si-75h]                  
1a3b  fsub    dword ptr [di]                  
1a3d  pop     bp                              
1a3e  mov     cx,di                           
1a40  ??? (FPU)                               
1a43  xchg    ax,bp                           
1a44  clc                                     
1a45  rep     daa                             
1a47  mov     di,0C8A2h                       
1a4a  pop     bp                              
1a4b  fld     qword ptr [bx+si+4C6Eh]         
1a4f  leave                                   
1a50  wait                                    
1a51  xchg    ax,di                           
1a52  and     [bp+si+5202h],cl                
1a56  pusha                                   
1a57  les     sp,[di]                         
1a59  jne     1A28h                           
1a5b  int 3                                   
1a5c  int     0CCh                            
1a5e  int 3                                   
1a5f  int 3                                   
1a60  int 3                                   
1a61  int 3                                   
1a62  int 3                                   
1a63  int 3                                   
1a64  sti                                     
1a65  aas                                     
1a66  jno     1AA5h                           
1a68  or      dl,bh                           
1a6a  mov     [3D70h],ax                      
1a6d  or      dl,bh                           
1a6f  mov     [3FF8h],ax                      
1a72  pop     dx                              
1a73  cmp     bx,di                           
1a76  dec     di                              
1a77  lea     dx,[bx+126Eh]                   
1a7b  xor     bp,3Fh                          
1a7e  ret                                     
1a7f  shr     word ptr [si],cl                
1a81  sbb     dx,sp                           
1a84  pop     ax                              
1a85  pop     ss                              
1a86  mov     bh,0D1h                         
1a88  ???                                     
1a89  aas                                     
1a8a  ror     byte ptr [bx],1                 
1a8c  and     ax,[si+1B47h]                   
1a90  inc     di                              
1a91  lodsb                                   
1a92  lds     sp,[bx+3FEEh]                   
1a96  inc     ax                              
1a97  cmpsb                                   
1a98  mov     dh,69h                          
1a9a  insb                                    
1a9b  scasw                                   
1a9c  add     ax,37BDh                        
1a9f  xchg    ch,bl                           
1aa1  aas                                     
1aa2  xor     di,[di]                         
1aa4  mov     sp,7A42h                        
1aa7  in      ax,0D5h                         
1aa9  xchg    ax,sp                           
1aaa  mov     di,0E7D6h                       
1aad  aas                                     
1aae  ret     0FDFDh                          
1ab1  into                                    
1ab2  popa                                    
1ab3  test    [bx+di],dl                      
1ab5  ja      1A83h                           
1ab7  stosw                                   
1ab8  in      al,3Fh                          
1aba  das                                     
1abb  dec     sp                              
1abc  pop     bx                              
1abd  loopz   1B0Ch                           
1abf  les     di,[bp-6A6Ch]                   
1ac3  out     0C9h,al                         
1ac5  aas                                     
1ac6  xchg    ax,dx                           
1ac7  les     dx,[bp+di+3Bh]                  
1aca  jne     1B10h                           
1acc  int     14h                             
1ace  mov     si,0AF9Ah                       
1ad1  aas                                     
1ad2  fisub   word ptr [bx-46h]               
1ad5  xchg    ax,sp                           
1ad6  cmp     [di-53h],ax                     
1ad9  push    ds                              
1ada  mov     cl,0CFh                         
1adc  xchg    ax,sp                           
1add  aas                                     
1ade  and     al,23h                          
1ae0  mov     dl,0BCh                         
1ae3  mov     dx,313Bh                        
1ae6  popa                                    
1ae7  mov     di,[bp+si+3Fh]                  
1aea  popa                                    
1aeb  push    bp                              
1aec  pop     cx                              
1aed  sar     word ptr [bp-4Fh],53h           
1af1  jl      1B05h                           
1af3  mov     bx,3F5Fh                        
1af6  xlat                                    
1af7  out     dx,al                           
1af8  das                                     
1af9  lea     ax,[92BEh]                      
1afd  test    [di],dx                         
1aff  sti                                     
1b00  inc     sp                              
1b01  aas                                     
1b02  and     al,3Fh                          
1b04  movsw                                   
1b05  jmp     0C041h                          
1b08  daa                                     
1b09  jmp     3F2Ah:0A87Fh                    
1b0e  jge     1ABCh                           
1b10  mov     ax,[0BCE4h]                     
1b13  jl      1B5Ch                           
1b16  rcr     ch,1                            
1b18  push    bp                              
1b19  arpl    ds:[bp+di+6h],di                
1b1d  int 3                                   
1b1e  and     dx,[si+77h]                     
1b21  cmp     di,-6Fh                         
1b24  cmp     word ptr [di],0FA91h            
1b28  cmp     bl,[bx+di]                      
1b2a  jp      1B8Fh                           
1b2c  and     ax,3143h                        
1b2f  shr     byte ptr [si+213Ch],89h         
1b34  sar     word ptr [bx+si],1              
1b36  add     byte ptr [bx-69h],0B8h          
1b3a  add     ch,bh                           
1b3c  xlat                                    
1b3d  cmp     bx,sp                           
1b3f  mov     [bx+si+8h],bl                   
1b42  sbb     si,[bx+di-1C18h]                
1b46  xchg    ah,[bp+3B03h]                   
1b4a  mov     byte ptr [si+4245h],7h          
1b4f  mov     dh,99h                          
1b51  jne     1B8Ah                           
1b53  fld     tword ptr [333Ah]               
1b57  jno     1B75h                           
1b59  shl     byte ptr [bp+di],cl             
1b5b  ??? (FPU)                               
1b5d  out     dx,al                           
1b5e  dec     cx                              
1b5f  nop                                     
1b60  pop     dx                              
1b61  cmp     [bp-4179h],sp                   
1b65  rcl     byte ptr [bx-26h],0A5h          
1b69  and     byte ptr [bp-4A5Eh],32h         
1b6e  loop    1BD8h                           
1b70  mov     dl,11h                          
1b72  cmpsw                                   
1b73  push    dx                              
1b74  lahf                                    
1b75  inc     sp                              
1b76  pop     cx                              
1b77  mov     bh,10h                          
1b79  sub     al,25h                          
1b7b  dec     cx                              
1b7c  in      al,2Dh                          
1b7e  xor     al,4Fh                          
1b81  push    bx                              
1b82  scasb                                   
1b83  into                                    
1b84  imul    sp,[di],-71h                    
1b87  pop     cx                              
1b88  add     al,0A4h                         
1b8a  rcr     dh,0C2h                         
1b8d  jge     1B8Ah                           
1b8f  call    3A58h                           
1b92  sahf                                    
1b93  out     88h,ax                          
1b95  pop     dx                              
1b96  push    di                              
1b97  xchg    ax,cx                           
1b98  cmp     al,0BFh                         
1b9a  push    ax                              
1b9b  and     word ptr [bp+si],18h            
1b9e  dec     si                              
1b9f  dec     bx                              
1ba0  bound   di,bp                           
1ba3  or      word ptr [bx+6AFh],-6Ch         
1ba8  jge     1BBBh                           
1baa  in      al,2Dh                          
1bac  ficomp  word ptr [bx-2D32h]             
1bb0  enter   0DD04h,0A6h                     
1bb4  fmul    dword ptr [bp+si]               

; ----- sub_1bb6 -----
1bb6  push    bp                              
1bb7  mov     bp,sp                           
1bb9  sub     sp,6h                           
1bbc  push    si                              
1bbd  push    di                              
1bbe  mov     di,[bp+6h]                      
1bc1  mov     bx,189Eh                        
1bc4  or      di,di                           
1bc6  je      1C42h                           
1bc8  jns     1BCFh                           
1bca  mov     bx,19FAh                        
1bcd  neg     di                              
1bcf  mov     word ptr [bp-6h],1C54h          
1bd4  cmp     word ptr [bp+4h],0h             
1bd8  jne     1BFAh                           
1bda  mov     word ptr [bp-6h],1C4Ah          
1bdf  wait                                    
1be0  fstcw   word ptr [bp-2h]                
1be3  nop                                     
1be4  wait                                    
1be5  mov     ax,[bp-2h]                      
1be8  or      ax,38h                          
1beb  mov     [bp-4h],ax                      
1bee  wait                                    
1bef  fldcw   word ptr [bp-4h]                
1bf2  les     si,[bp+8h]                      
1bf5  wait                                    
1bf6  fld     tword ptr es:[si+2h]            
1bfa  push    di                              
1bfb  pop     di                              
1bfc  add     bx,54h                          
1bff  or      di,di                           
1c01  je      1C26h                           
1c03  mov     ax,di                           
1c05  shr     di,1                            
1c07  shr     di,1                            
1c09  shr     di,1                            
1c0b  push    di                              
1c0c  and     ax,7h                           
1c0f  je      1BFBh                           
1c11  push    bx                              
1c12  shl     al,1                            
1c14  shl     al,1                            
1c16  mov     ah,al                           
1c18  shl     al,1                            
1c1a  add     al,ah                           
1c1c  xor     ah,ah                           
1c1e  add     bx,ax                           
1c20  jmp     word ptr [bp-6h]                
1c23  pop     bx                              
1c24  jmp     1BFBh                           
1c26  cmp     word ptr [bp+4h],0h             
1c2a  jne     1C42h                           
1c2c  wait                                    
1c2d  fclex                                   
1c2f  wait                                    
1c30  fldcw   word ptr [bp-2h]                
1c33  les     si,[bp+8h]                      
1c36  wait                                    
1c37  fstp    tword ptr es:[si+2h]            
1c3b  mov     word ptr es:[si],0h             
1c40  nop                                     
1c41  wait                                    
1c42  pop     di                              
1c43  pop     si                              
1c44  mov     sp,bp                           
1c46  pop     bp                              
1c47  ret     8h                              
1c4a  wait                                    
1c4b  fld     tword ptr cs:[bx+2h]            
1c4f  wait                                    
1c50  fmulp   st(1)                           
1c52  jmp     1C23h                           
1c54  push    word ptr cs:[bx+0Ah]            
1c58  push    word ptr cs:[bx+8h]             
1c5c  push    word ptr cs:[bx+6h]             
1c60  push    word ptr cs:[bx+4h]             
1c64  mov     cx,cs:[bx+2h]                   
1c68  mov     ax,cs:[bx]                      
1c6b  cmp     ax,8000h                        
1c6e  adc     cx,-1h                          
1c71  push    cx                              
1c72  push    ax                              
1c73  mov     ax,sp                           
1c75  push    word ptr [bp+0Ah]               
1c78  push    word ptr [bp+8h]                
1c7b  push    ss                              
1c7c  push    ax                              
1c7d  call    1C8Bh                           
1c80  add     sp,0Ch                          
1c83  jmp     1C23h                           
1c85  jmp     1DF4h                           
1c88  jmp     1DDFh                           

; ----- sub_1c8b -----
1c8b  push    bp                              
1c8c  mov     bp,sp                           
1c8e  sub     sp,12h                          
1c91  push    si                              
1c92  push    di                              
1c93  mov     cx,9h                           
1c96  mov     ax,ss                           
1c98  mov     es,ax                           
1c9a  lea     di,[bp-12h]                     
1c9d  xor     ax,ax                           
1c9f  rep     stosw                           
1ca1  lds     si,[bp+8h]                      
1ca4  les     di,[bp+4h]                      
1ca7  mov     ax,[si+0Ah]                     
1caa  mov     bx,es:[di+0Ah]                  
1cae  mov     cx,ax                           
1cb0  xor     cx,bx                           
1cb2  and     cx,8000h                        
1cb6  mov     [bp-2h],cx                      
1cb9  mov     dx,7FFFh                        
1cbc  and     ax,dx                           
1cbe  cmp     ax,dx                           
1cc0  je      1C85h                           
1cc2  and     bx,dx                           
1cc4  cmp     bx,dx                           
1cc6  je      1C85h                           
1cc8  mov     dx,ax                           
1cca  add     dx,bx                           
1ccc  cmp     dx,0BFFDh                       
1cd0  ja      1C85h                           
1cd2  cmp     dx,3FBFh                        
1cd6  jbe     1C88h                           
1cd8  or      ax,ax                           
1cda  jne     1CEDh                           
1cdc  inc     dx                              
1cdd  mov     ax,[si]                         
1cdf  or      ax,[si+2h]                      
1ce2  or      ax,[si+4h]                      
1ce5  or      ax,[si+6h]                      
1ce8  or      ax,[si+8h]                      
1ceb  je      1C88h                           
1ced  or      bx,bx                           
1cef  jne     1D07h                           
1cf1  inc     dx                              
1cf2  mov     ax,es:[di]                      
1cf5  or      ax,es:[di+2h]                   
1cf9  or      ax,es:[di+4h]                   
1cfd  or      ax,es:[di+6h]                   
1d01  or      ax,es:[di+8h]                   
1d05  je      1C88h                           
1d07  sub     dx,3FFEh                        
1d0b  mov     [si+0Ah],dx                     
1d0e  add     di,8h                           
1d11  mov     cx,5h                           
1d14  lea     bx,[bp-12h]                     
1d17  push    cx                              
1d18  push    si                              
1d19  push    di                              
1d1a  mov     ax,es:[di]                      
1d1d  mul     word ptr [si]                   
1d1f  add     ss:[bx],ax                      
1d22  adc     ss:[bx+2h],dx                   
1d26  adc     word ptr ss:[bx+4h],0h          
1d2b  add     si,2h                           
1d2e  sub     di,2h                           
1d31  loop    1D1Ah                           
1d33  pop     di                              
1d34  pop     si                              
1d35  pop     cx                              
1d36  add     bx,2h                           
1d39  add     si,2h                           
1d3c  add     cx,-1h                          
1d3f  jne     1D17h                           
1d41  mov     si,[bp+8h]                      
1d44  mov     dx,[bp-10h]                     
1d47  mov     cx,[bp-0Eh]                     
1d4a  mov     bx,[bp-0Ch]                     
1d4d  mov     ax,[bp-0Ah]                     
1d50  mov     di,[bp-8h]                      
1d53  cmp     word ptr [si+0Ah],0h            
1d57  jg      1D6Dh                           
1d59  jmp     1DBAh                           
1d5b  shl     word ptr [bp-12h],1             
1d5e  rcl     dx,1                            
1d60  rcl     cx,1                            
1d62  rcl     bx,1                            
1d64  rcl     ax,1                            
1d66  rcl     di,1                            
1d68  dec     word ptr [si+0Ah]               
1d6b  je      1DBAh                           
1d6d  or      di,di                           
1d6f  jns     1D5Bh                           
1d71  cmp     word ptr [bp-12h],8000h         
1d76  jb      1D97h                           
1d78  ja      1D80h                           
1d7a  test    dx,1h                           
1d7e  je      1D97h                           
1d80  add     dx,1h                           
1d83  adc     cx,0h                           
1d86  adc     bx,0h                           
1d89  adc     ax,0h                           
1d8c  adc     di,0h                           
1d8f  jae     1D97h                           
1d91  mov     di,8000h                        
1d94  inc     word ptr [si+0Ah]               
1d97  cmp     word ptr [si+0Ah],7FFFh         
1d9c  jae     1DF4h                           
1d9e  mov     [si+8h],di                      
1da1  mov     [si+6h],ax                      
1da4  mov     [si+4h],bx                      
1da7  mov     [si+2h],cx                      
1daa  mov     [si],dx                         
1dac  mov     ax,[bp-2h]                      
1daf  or      [si+0Ah],ax                     
1db2  pop     di                              
1db3  pop     si                              
1db4  mov     sp,bp                           
1db6  pop     bp                              
1db7  ret     8h                              
1dba  dec     word ptr [si+0Ah]               
1dbd  shr     di,1                            
1dbf  rcr     ax,1                            
1dc1  rcr     bx,1                            
1dc3  rcr     cx,1                            
1dc5  rcr     dx,1                            
1dc7  rcr     word ptr [bp-12h],1             
1dca  adc     word ptr [bp-4h],0h             
1dce  inc     word ptr [si+0Ah]               
1dd1  jne     1DBDh                           
1dd3  cmp     word ptr [bp-4h],0h             
1dd7  je      1D71h                           
1dd9  or      word ptr [bp-12h],1h            
1ddd  jmp     1D71h                           
1ddf  xor     ax,ax                           
1de1  mov     [si+0Ah],ax                     
1de4  mov     [si+8h],ax                      
1de7  mov     [si+6h],ax                      
1dea  mov     [si+4h],ax                      
1ded  mov     [si+2h],ax                      
1df0  mov     [si],ax                         
1df2  jmp     1DB2h                           
1df4  mov     ax,7FFFh                        
1df7  or      ax,[bp-2h]                      
1dfa  mov     [si+0Ah],ax                     
1dfd  xor     ax,ax                           
1dff  mov     [si+8h],ax                      
1e02  mov     [si+6h],ax                      
1e05  mov     [si+4h],ax                      
1e08  mov     [si+2h],ax                      
1e0b  mov     [si],ax                         
1e0d  jmp     1DB2h                           
1e0f  add     [bx+si],al                      

; ----- sub_1e10 -----
1e10  push    bp                              
1e11  mov     bp,sp                           
1e13  sub     sp,0Ch                          
1e16  push    si                              
1e17  push    di                              
1e18  mov     ax,[bp+6h]                      
1e1b  mov     [bp-0Ch],ax                     
1e1e  les     si,[bp+8h]                      
1e21  xor     ax,ax                           
1e23  mov     di,ax                           
1e25  mov     bx,ax                           
1e27  mov     cx,ax                           
1e29  mov     dx,ax                           
1e2b  mov     dl,es:[si]                      
1e2e  inc     si                              
1e2f  jmp     1E6Bh                           
1e31  mov     [bp-2h],di                      
1e34  mov     [bp-4h],ax                      
1e37  mov     [bp-6h],bx                      
1e3a  mov     [bp-8h],cx                      
1e3d  mov     [bp-0Ah],dx                     
1e40  call    1EBEh                           
1e43  call    1EBEh                           
1e46  add     dx,[bp-0Ah]                     
1e49  adc     cx,[bp-8h]                      
1e4c  adc     bx,[bp-6h]                      
1e4f  adc     ax,[bp-4h]                      
1e52  adc     di,[bp-2h]                      
1e55  call    1EBEh                           
1e58  add     dl,es:[si]                      
1e5b  inc     si                              
1e5c  adc     dh,0h                           
1e5f  adc     cx,0h                           
1e62  adc     bx,0h                           
1e65  adc     ax,0h                           
1e68  adc     di,0h                           
1e6b  dec     word ptr [bp-0Ch]               
1e6e  jne     1E31h                           
1e70  mov     si,404Eh                        
1e73  jmp     1E82h                           
1e75  mov     di,ax                           
1e77  mov     ax,bx                           
1e79  mov     bx,cx                           
1e7b  mov     cx,dx                           
1e7d  xor     dx,dx                           
1e7f  sub     si,10h                          
1e82  or      di,di                           
1e84  je      1E75h                           
1e86  js      1E97h                           
1e88  shl     dx,1                            
1e8a  rcl     cx,1                            
1e8c  rcl     bx,1                            
1e8e  rcl     ax,1                            
1e90  rcl     di,1                            
1e92  dec     si                              
1e93  or      di,di                           
1e95  jns     1E88h                           
1e97  push    si                              
1e98  mov     si,[bp+4h]                      
1e9b  pop     ss:[si+0Ah]                     
1e9f  mov     ss:[si+8h],di                   
1ea3  mov     ss:[si+6h],ax                   
1ea7  mov     ss:[si+4h],bx                   
1eab  mov     ss:[si+2h],cx                   
1eaf  mov     ss:[si],dx                      
1eb2  mov     ax,si                           
1eb4  mov     dx,ss                           
1eb6  pop     di                              
1eb7  pop     si                              
1eb8  mov     sp,bp                           
1eba  pop     bp                              
1ebb  ret     8h                              

; ----- sub_1ebe -----
1ebe  shl     dx,1                            
1ec0  rcl     cx,1                            
1ec2  rcl     bx,1                            
1ec4  rcl     ax,1                            
1ec6  rcl     di,1                            
1ec8  ret                                     
1ec9  add     [bx+si],al                      
1ecb  add     [bx+si],al                      
1ecd  add     [bx+si],al                      
1ecf  add     [bx+si],al                      

; ----- sub_1ed0 -----
1ed0  mov     ax,0FFFFh                       ; segment seg2:0000
1ed3  enter   2h,0h                           
1ed7  push    si                              
1ed8  push    di                              
1ed9  push    ds                              
1eda  mov     ds,ax                           
1edc  mov     ax,1h                           
1edf  jmp     1EE2h                           
1ee2  pop     ds                              
1ee3  pop     di                              
1ee4  pop     si                              
1ee5  leave                                   
1ee6  retf    0Ah                             
1ee9  add     [bx+si],al                      

; ===== WEP =====
1eea  mov     ax,1ED1h                        ; segment seg2:0000
1eed  enter   2h,0h                           
1ef1  push    si                              
1ef2  push    di                              
1ef3  push    ds                              
1ef4  mov     ds,ax                           
1ef6  mov     ax,1h                           
1ef9  jmp     1EFCh                           
1efc  pop     ds                              
1efd  pop     di                              
1efe  pop     si                              
1eff  leave                                   
1f00  retf    2h                              
1f03  add     [bx+si],al                      

; ===== VAC_REPORTID =====
1f04  mov     ax,1EEBh                        ; segment seg2:0000
1f07  enter   2h,0h                           
1f0b  push    si                              
1f0c  push    di                              
1f0d  push    ds                              
1f0e  mov     ds,ax                           
1f10  push    0h                              
1f12  push    0FFFFh                          ; segment seg1:0000
1f15  push    23DAh                           
1f18  call far M007.UIF_MESSAGE               ; "Vac - V03.00 10-Jan-95"
1f1d  pop     ds                              
1f1e  pop     di                              
1f1f  pop     si                              
1f20  leave                                   
1f21  retf                                    

; ===== INITIALISE_VAC_CNTRLER_DATA =====
1f22  mov     ax,1F05h                        ; segment seg2:0000
1f25  enter   2h,0h                           
1f29  push    si                              
1f2a  push    di                              
1f2b  push    ds                              
1f2c  mov     ds,ax                           
1f2e  push    133h                            
1f31  push    1h                              
1f33  call far M007.M007_PUTSTATE             ; DP_WATER_OK = 1
1f38  push    9Ch                             
1f3b  sub     sp,4h                           
1f3e  wait                                    
1f3f  fld     dword ptr [3A8h]                ; [ds] = 1
1f43  nop                                     
1f44  wait                                    
1f45  mov     bx,sp                           
1f47  wait                                    
1f48  fstp    dword ptr ss:[bx]               
1f4b  nop                                     
1f4c  wait                                    
1f4d  call far M007.M007_PUTVALUE             ; AP_SYSTEM_VAC
1f52  push    9Eh                             
1f55  sub     sp,4h                           
1f58  wait                                    
1f59  fld     dword ptr [3A8h]                ; [ds] = 1
1f5d  nop                                     
1f5e  wait                                    
1f5f  mov     bx,sp                           
1f61  wait                                    
1f62  fstp    dword ptr ss:[bx]               
1f65  nop                                     
1f66  wait                                    
1f67  call far M007.M007_PUTVALUE             ; AP_COLUMN_VAC
1f6c  push    143h                            
1f6f  sub     sp,4h                           
1f72  wait                                    
1f73  fld     dword ptr [3A8h]                ; [ds] = 1
1f77  nop                                     
1f78  wait                                    
1f79  mov     bx,sp                           
1f7b  wait                                    
1f7c  fstp    dword ptr ss:[bx]               
1f7f  nop                                     
1f80  wait                                    
1f81  call far M007.M007_PUTVALUE             ; AP_CHAMBER_PRESSURE
1f86  push    142h                            
1f89  sub     sp,4h                           
1f8c  wait                                    
1f8d  fld     dword ptr [3ACh]                ; [ds] = 0.0001
1f91  nop                                     
1f92  wait                                    
1f93  mov     bx,sp                           
1f95  wait                                    
1f96  fstp    dword ptr ss:[bx]               
1f99  nop                                     
1f9a  wait                                    
1f9b  call far M007.M007_PUTVALUE             ; AP_HP_TARGET
1fa0  push    1B8h                            
1fa3  sub     sp,4h                           
1fa6  wait                                    
1fa7  fld     dword ptr [3B0h]                ; [ds] = 0.00275
1fab  nop                                     
1fac  wait                                    
1fad  mov     bx,sp                           
1faf  wait                                    
1fb0  fstp    dword ptr ss:[bx]               
1fb3  nop                                     
1fb4  wait                                    
1fb5  call far M007.M007_PUTVALUE             ; AP_VP_LIMIT
1fba  push    9Ch                             
1fbd  sub     sp,4h                           
1fc0  wait                                    
1fc1  fld     dword ptr [3B4h]                ; [ds] = 1E-08
1fc5  nop                                     
1fc6  wait                                    
1fc7  mov     bx,sp                           
1fc9  wait                                    
1fca  fstp    dword ptr ss:[bx]               
1fcd  nop                                     
1fce  wait                                    
1fcf  call far M007.M007_PUTLOW               ; AP_SYSTEM_VAC
1fd4  push    9Eh                             
1fd7  sub     sp,4h                           
1fda  wait                                    
1fdb  fld     dword ptr [3B8h]                ; [ds] = 1E-11
1fdf  nop                                     
1fe0  wait                                    
1fe1  mov     bx,sp                           
1fe3  wait                                    
1fe4  fstp    dword ptr ss:[bx]               
1fe7  nop                                     
1fe8  wait                                    
1fe9  call far M007.M007_PUTLOW               ; AP_COLUMN_VAC
1fee  push    9Dh                             
1ff1  sub     sp,4h                           
1ff4  wait                                    
1ff5  fld     dword ptr [3B8h]                ; [ds] = 1E-11
1ff9  nop                                     
1ffa  wait                                    
1ffb  mov     bx,sp                           
1ffd  wait                                    
1ffe  fstp    dword ptr ss:[bx]               
2001  nop                                     
2002  wait                                    
2003  call far M007.M007_PUTLOW               ; AP_EDX_VAC_LIMIT
2008  push    142h                            
200b  sub     sp,4h                           
200e  wait                                    
200f  fld     dword ptr [3BCh]                ; [ds] = 1E-05
2013  nop                                     
2014  wait                                    
2015  mov     bx,sp                           
2017  wait                                    
2018  fstp    dword ptr ss:[bx]               
201b  nop                                     
201c  wait                                    
201d  call far M007.M007_PUTLOW               ; AP_HP_TARGET
2022  push    1B8h                            
2025  sub     sp,4h                           
2028  wait                                    
2029  fld     dword ptr [3C0h]                ; [ds] = 0.0005
202d  nop                                     
202e  wait                                    
202f  mov     bx,sp                           
2031  wait                                    
2032  fstp    dword ptr ss:[bx]               
2035  nop                                     
2036  wait                                    
2037  call far M007.M007_PUTLOW               ; AP_VP_LIMIT
203c  push    9Ch                             
203f  sub     sp,4h                           
2042  wait                                    
2043  fld     dword ptr [3C4h]                ; [ds] = 1.2
2047  nop                                     
2048  wait                                    
2049  mov     bx,sp                           
204b  wait                                    
204c  fstp    dword ptr ss:[bx]               
204f  nop                                     
2050  wait                                    
2051  call far M007.M007_PUTHIGH              ; AP_SYSTEM_VAC
2056  push    9Eh                             
2059  sub     sp,4h                           
205c  wait                                    
205d  fld     dword ptr [3C4h]                ; [ds] = 1.2
2061  nop                                     
2062  wait                                    
2063  mov     bx,sp                           
2065  wait                                    
2066  fstp    dword ptr ss:[bx]               
2069  nop                                     
206a  wait                                    
206b  call far M007.M007_PUTHIGH              ; AP_COLUMN_VAC
2070  push    9Dh                             
2073  sub     sp,4h                           
2076  wait                                    
2077  fld     dword ptr [3C8h]                ; [ds] = 1E-06
207b  nop                                     
207c  wait                                    
207d  mov     bx,sp                           
207f  wait                                    
2080  fstp    dword ptr ss:[bx]               
2083  nop                                     
2084  wait                                    
2085  call far M007.M007_PUTHIGH              ; AP_EDX_VAC_LIMIT
208a  push    142h                            
208d  sub     sp,4h                           
2090  wait                                    
2091  fld     dword ptr [3CCh]                ; [ds] = 0.004
2095  nop                                     
2096  wait                                    
2097  mov     bx,sp                           
2099  wait                                    
209a  fstp    dword ptr ss:[bx]               
209d  nop                                     
209e  wait                                    
209f  call far M007.M007_PUTHIGH              ; AP_HP_TARGET
20a4  push    1B8h                            
20a7  sub     sp,4h                           
20aa  wait                                    
20ab  fld     dword ptr [3CCh]                ; [ds] = 0.004
20af  nop                                     
20b0  wait                                    
20b1  mov     bx,sp                           
20b3  wait                                    
20b4  fstp    dword ptr ss:[bx]               
20b7  nop                                     
20b8  wait                                    
20b9  call far M007.M007_PUTHIGH              ; AP_VP_LIMIT
20be  call far VAC_REPORTID                   
20c3  pop     ds                              
20c4  pop     di                              
20c5  pop     si                              
20c6  leave                                   
20c7  retf                                    

; ===== INITIALISE_VAC_CONTROLLER =====
20c8  mov     ax,1F23h                        ; segment seg2:0000
20cb  enter   6h,0h                           
20cf  push    si                              
20d0  push    di                              
20d1  push    ds                              
20d2  mov     ds,ax                           
20d4  mov     ax,[bp+6h]                      
20d7  mov     [10h],ax                        
20da  push    20C1h                           ; segment seg1:0000
20dd  push    23D0h                           
20e0  call far sub_3976                       
20e5  add     sp,4h                           
20e8  cmp     ax,0h                           
20eb  jl      20F0h                           
20ed  jmp     2105h                           
20f0  push    1A1h                            
20f3  push    0h                              
20f5  push    0h                              
20f7  push    2000h                           
20fa  call far M007.UIF_LOG                   
20ff  mov     ax,1A1h                         
2102  jmp     214Dh                           
2105  call far sub_39e0                       
210a  mov     [bp-6h],ax                      
210d  mov     [bp-4h],dx                      
2110  cmp     word ptr [bp-6h],0h             
2114  je      2119h                           
2116  jmp     2122h                           
2119  cmp     word ptr [bp-4h],0h             
211d  jne     2122h                           
211f  jmp     2137h                           
2122  push    1A6h                            
2125  push    0h                              
2127  push    0h                              
2129  push    2000h                           
212c  call far M007.UIF_LOG                   
2131  mov     ax,1A6h                         
2134  jmp     214Dh                           
2137  mov     word ptr [14h],2h               
213d  call far sub_2cc2                       
2142  call far sub_4048                       
2147  mov     ax,0h                           
214a  jmp     214Dh                           
214d  pop     ds                              
214e  pop     di                              
214f  pop     si                              
2150  leave                                   
2151  retf    2h                              

; ===== VBSETVACMODULE =====
2154  mov     ax,20C9h                        ; segment seg2:0000
2157  enter   2h,0h                           
215b  push    si                              
215c  push    di                              
215d  push    ds                              
215e  mov     ds,ax                           
2160  push    2145h                           ; segment seg1:0000
2163  push    23D0h                           
2166  call far TIGASEM.SETVACMODULE           ; "G600.440"
216b  jmp     216Eh                           
216e  pop     ds                              
216f  pop     di                              
2170  pop     si                              
2171  leave                                   
2172  retf                                    
2173  add     [bx+si],al                      

; ===== VAC_CONTROLLER_SHUTDOWN =====
2174  mov     ax,2155h                        ; segment seg2:0000
2177  enter   2h,0h                           
217b  push    si                              
217c  push    di                              
217d  push    ds                              
217e  mov     ds,ax                           
2180  call far sub_2d60                       
2185  jmp     2188h                           
2188  pop     ds                              
2189  pop     di                              
218a  pop     si                              
218b  leave                                   
218c  retf                                    
218d  add     [bx+si],al                      

; ===== FORCE_SAVE_NVRAM =====
218e  mov     ax,2175h                        ; segment seg2:0000
2191  enter   2h,0h                           
2195  push    si                              
2196  push    di                              
2197  push    ds                              
2198  mov     ds,ax                           
219a  call far sub_2d60                       
219f  cmp     ax,199h                         
21a2  je      21A7h                           
21a4  jmp     21B4h                           
21a7  call far sub_2834                       
21ac  call far sub_3036                       
21b1  jmp     219Ah                           
21b4  pop     ds                              
21b5  pop     di                              
21b6  pop     si                              
21b7  leave                                   
21b8  retf                                    
21b9  add     [bx+si],al                      

; ===== VAC_TIMER_TICK =====
21ba  mov     ax,218Fh                        ; segment seg2:0000
21bd  enter   2h,0h                           
21c1  push    si                              
21c2  push    di                              
21c3  push    ds                              
21c4  mov     ds,ax                           
21c6  call far sub_2834                       
21cb  call far sub_3036                       
21d0  pop     ds                              
21d1  pop     di                              
21d2  pop     si                              
21d3  leave                                   
21d4  retf    2h                              
21d7  add     [bx+si],al                      

; ===== VAC_CONTROLLER_SUSPEND =====
21d8  mov     ax,21BBh                        ; segment seg2:0000
21db  enter   6h,0h                           
21df  push    si                              
21e0  push    di                              
21e1  push    ds                              
21e2  mov     ds,ax                           
21e4  call far sub_3a16                       
21e9  mov     [bp-6h],ax                      
21ec  mov     [bp-4h],dx                      
21ef  pop     ds                              
21f0  pop     di                              
21f1  pop     si                              
21f2  leave                                   
21f3  retf                                    

; ===== VAC_CONTROLLER_REMOVE =====
21f4  mov     ax,21D9h                        ; segment seg2:0000
21f7  enter   4h,0h                           
21fb  push    si                              
21fc  push    di                              
21fd  push    ds                              
21fe  mov     ds,ax                           
2200  call far sub_39ae                       
2205  mov     [bp-4h],ax                      
2208  pop     ds                              
2209  pop     di                              
220a  pop     si                              
220b  leave                                   
220c  retf                                    
220d  add     [bx+si],al                      

; ===== WRITE_NVRAM =====
220e  mov     ax,21F5h                        ; segment seg2:0000
2211  enter   626h,0h                         
2215  push    si                              
2216  push    di                              
2217  push    ds                              
2218  mov     ds,ax                           
221a  push    word ptr [bp+8h]                
221d  push    word ptr [bp+6h]                
2220  push    0h                              
2222  call far KERNEL._LOPEN                  
2227  mov     [bp-626h],ax                    
222b  cmp     word ptr [bp-626h],0h           
2230  jge     2235h                           
2232  jmp     2326h                           
2235  lea     ax,[bp-622h]                    
2239  mov     dx,ss                           
223b  push    dx                              
223c  push    ax                              
223d  push    word ptr [bp-626h]              
2241  call far sub_46a8                       
2246  add     sp,6h                           
2249  cbw                                     
224a  cmp     ax,1h                           
224d  je      2252h                           
224f  jmp     2264h                           
2252  push    word ptr [bp-626h]              
2256  call far KERNEL._LCLOSE                 
225b  mov     ax,5h                           
225e  jmp     232Ch                           
2261  jmp     2323h                           
2264  push    word ptr [bp-626h]              
2268  call far KERNEL._LCLOSE                 
226d  mov     al,[bp-622h]                    
2271  cbw                                     
2272  cmp     ax,16h                          
2275  jne     227Ah                           
2277  jmp     2280h                           
227a  mov     ax,2h                           
227d  jmp     232Ch                           
2280  lea     ax,[bp-622h]                    
2284  mov     dx,ss                           
2286  push    dx                              
2287  push    ax                              
2288  call far sub_4d0e                       
228d  add     sp,4h                           
2290  cbw                                     
2291  cmp     ax,1h                           
2294  je      2299h                           
2296  jmp     229Fh                           
2299  mov     ax,3h                           
229c  jmp     232Ch                           
229f  mov     word ptr [bp-624h],1h           
22a5  jmp     22BBh                           
22a8  mov     ax,[bp-624h]                    
22ac  lea     bx,[bp-11Bh]                    
22b0  add     bx,ax                           
22b2  mov     byte ptr ss:[bx],0h             
22b6  add     word ptr [bp-624h],1h           
22bb  cmp     word ptr [bp-624h],40h          
22c0  jge     22C5h                           
22c2  jmp     22A8h                           
22c5  lea     ax,[bp-622h]                    
22c9  mov     dx,ss                           
22cb  push    dx                              
22cc  push    ax                              
22cd  call far sub_4afe                       
22d2  add     sp,4h                           
22d5  lea     ax,[bp-622h]                    
22d9  mov     dx,ss                           
22db  push    dx                              
22dc  push    ax                              
22dd  call far TIGASEM.SAVESYSTEMCONFIGDATATIGA
22e2  jmp     2320h                           
22e5  call far TIGASEM.GETSYSTEMCONFIGSTATUSTIGA
22ea  jmp     2305h                           
22ed  mov     ax,0h                           
22f0  jmp     232Ch                           
22f3  jmp     2320h                           
22f6  jmp     2320h                           
22f9  mov     ax,1h                           
22fc  jmp     232Ch                           
22ff  jmp     2320h                           
2302  jmp     2320h                           
2305  cmp     ax,0h                           
2308  jne     230Dh                           
230a  jmp     22F6h                           
230d  cmp     ax,1h                           
2310  jne     2315h                           
2312  jmp     22EDh                           
2315  cmp     ax,4h                           
2318  jne     231Dh                           
231a  jmp     22F9h                           
231d  jmp     2320h                           
2320  jmp     22E5h                           
2323  jmp     232Ch                           
2326  mov     ax,4h                           
2329  jmp     232Ch                           
232c  pop     ds                              
232d  pop     di                              
232e  pop     si                              
232f  leave                                   
2330  retf    4h                              
2333  add     [bx+si],al                      

; ===== READ_NVRAM =====
2334  mov     ax,220Fh                        ; segment seg2:0000
2337  enter   622h,0h                         
233b  push    si                              
233c  push    di                              
233d  push    ds                              
233e  mov     ds,ax                           
2340  call far TIGASEM.REQUESTSYSTEMCONFIGTIGA
2345  jmp     23C8h                           
2348  call far TIGASEM.GETSYSTEMCONFIGSTATUSTIGA
234d  jmp     23ADh                           
2350  lea     ax,[bp-622h]                    
2354  mov     dx,ss                           
2356  push    dx                              
2357  push    ax                              
2358  call far TIGASEM.GETSYSTEMCONFIGDATATIGA
235d  mov     al,[bp-622h]                    
2361  cbw                                     
2362  cmp     ax,16h                          
2365  je      236Ah                           
2367  jmp     2395h                           
236a  lea     ax,[bp-622h]                    
236e  mov     dx,ss                           
2370  push    dx                              
2371  push    ax                              
2372  call far sub_4d0e                       
2377  add     sp,4h                           
237a  cbw                                     
237b  cmp     ax,0h                           
237e  je      2383h                           
2380  jmp     238Ch                           
2383  mov     ax,0h                           
2386  jmp     23CBh                           
2389  jmp     2392h                           
238c  mov     ax,3h                           
238f  jmp     23CBh                           
2392  jmp     239Bh                           
2395  mov     ax,2h                           
2398  jmp     23CBh                           
239b  jmp     23C8h                           
239e  mov     ax,1h                           
23a1  jmp     23CBh                           
23a4  jmp     23C8h                           
23a7  jmp     23C8h                           
23aa  jmp     23C8h                           
23ad  cmp     ax,2h                           
23b0  jne     23B5h                           
23b2  jmp     23A7h                           
23b5  cmp     ax,3h                           
23b8  jne     23BDh                           
23ba  jmp     2350h                           
23bd  cmp     ax,4h                           
23c0  jne     23C5h                           
23c2  jmp     239Eh                           
23c5  jmp     23C8h                           
23c8  jmp     2348h                           
23cb  pop     ds                              
23cc  pop     di                              
23cd  pop     si                              
23ce  leave                                   
23cf  retf                                    
23d0  inc     di                              
23d1  xor     ss:[bx+si],dh                   
23d4  xor     al,34h                          
23d7  xor     [bx+si],al                      
23d9  add     [bp+61h],dl                     
23dc  arpl    [bx+si],sp                      
23de  sub     ax,5620h                        
23e1  xor     [bp+di],dh                      
23e3  xor     cs:[bx+si],dh                   
23e6  and     [bx+di],dh                      
23e8  xor     [di],ch                         
23ea  dec     dx                              
23eb  popa                                    
23ec  outsb                                   
23ed  sub     ax,3539h                        
23f0  add     [bx+si],al                      

; ===== UPDATE_HPSEM_PANEL =====
23f2  mov     ax,2335h                        ; segment seg2:0000
23f5  enter   2h,0h                           
23f9  push    si                              
23fa  push    di                              
23fb  push    ds                              
23fc  mov     ds,ax                           
23fe  push    word ptr [bp+8h]                
2401  push    word ptr [bp+6h]                
2404  call far sub_7380                       
2409  add     sp,4h                           
240c  jmp     240Fh                           
240f  pop     ds                              
2410  pop     di                              
2411  pop     si                              
2412  leave                                   
2413  retf    4h                              

; ===== SWITCHVAC_MODE =====
2416  mov     ax,23F3h                        ; segment seg2:0000
2419  enter   2h,0h                           
241d  push    si                              
241e  push    di                              
241f  push    ds                              
2420  mov     ds,ax                           
2422  push    word ptr [bp+6h]                
2425  call far sub_5908                       
242a  add     sp,2h                           
242d  pop     ds                              
242e  pop     di                              
242f  pop     si                              
2430  leave                                   
2431  retf    2h                              

; ===== DOCOMMANDGOTO_HV =====
2434  mov     ax,2417h                        ; segment seg2:0000
2437  enter   2h,0h                           
243b  push    si                              
243c  push    di                              
243d  push    ds                              
243e  mov     ds,ax                           
2440  push    108h                            
2443  call far M007.M007_GETSTATE             ; DP_HP_STATUS
2448  cmp     ax,0h                           
244b  jne     2450h                           
244d  jmp     2470h                           
2450  push    108h                            
2453  call far M007.M007_GETSTATE             ; DP_HP_STATUS
2458  cmp     ax,0Ch                          
245b  jne     2460h                           
245d  jmp     2470h                           
2460  push    108h                            
2463  call far M007.M007_GETSTATE             ; DP_HP_STATUS
2468  cmp     ax,0Dh                          
246b  je      2470h                           
246d  jmp     2478h                           
2470  call far RESTART_HPAPP                  
2475  jmp     2482h                           
2478  push    0h                              
247a  call far sub_5908                       
247f  add     sp,2h                           
2482  pop     ds                              
2483  pop     di                              
2484  pop     si                              
2485  leave                                   
2486  retf                                    
2487  add     [bx+si],al                      

; ===== DOCOMMANDGOTO_VP =====
2488  mov     ax,2435h                        ; segment seg2:0000
248b  enter   2h,0h                           
248f  push    si                              
2490  push    di                              
2491  push    ds                              
2492  mov     ds,ax                           
2494  push    1h                              
2496  call far sub_5908                       
249b  add     sp,2h                           
249e  pop     ds                              
249f  pop     di                              
24a0  pop     si                              
24a1  leave                                   
24a2  retf                                    
24a3  add     [bx+si],al                      

; ===== SETHP_TARGET =====
24a4  mov     ax,2489h                        ; segment seg2:0000
24a7  enter   2h,0h                           
24ab  push    si                              
24ac  push    di                              
24ad  push    ds                              
24ae  mov     ds,ax                           
24b0  mov     word ptr [1Eh],1h               
24b6  push    142h                            
24b9  push    word ptr [bp+8h]                
24bc  push    word ptr [bp+6h]                
24bf  call far M007.M007_PUTVALUE             ; AP_HP_TARGET
24c4  pop     ds                              
24c5  pop     di                              
24c6  pop     si                              
24c7  leave                                   
24c8  retf    4h                              
24cb  add     [bx+si],al                      

; ===== SWITCHIXI_BACKPLATE =====
24cc  mov     ax,24A5h                        ; segment seg2:0000
24cf  enter   2h,0h                           
24d3  push    si                              
24d4  push    di                              
24d5  push    ds                              
24d6  mov     ds,ax                           
24d8  push    10Fh                            
24db  push    word ptr [bp+6h]                
24de  call far M007.M007_PUTSTATE             ; DP_IXI_BACKPLATE
24e3  push    53h                             
24e5  call far M007.M007_GETSTATE             ; DP_STAGE_TYPE
24ea  cmp     ax,2h                           
24ed  je      24F2h                           
24ef  jmp     24F9h                           
24f2  push    1h                              
24f4  call far M500.SWITCHSTAGE_MOTOR         
24f9  pop     ds                              
24fa  pop     di                              
24fb  pop     si                              
24fc  leave                                   
24fd  retf    2h                              

; ===== SWITCHBAKEOUT =====
2500  mov     ax,24CDh                        ; segment seg2:0000
2503  enter   2h,0h                           
2507  push    si                              
2508  push    di                              
2509  push    ds                              
250a  mov     ds,ax                           
250c  pop     ds                              
250d  pop     di                              
250e  pop     si                              
250f  leave                                   
2510  retf    2h                              
2513  add     [bx+si],al                      

; ===== DOCOMMANDSTART_BAKEOUT =====
2514  mov     ax,2501h                        ; segment seg2:0000
2517  enter   2h,0h                           
251b  push    si                              
251c  push    di                              
251d  push    ds                              
251e  mov     ds,ax                           
2520  pop     ds                              
2521  pop     di                              
2522  pop     si                              
2523  leave                                   
2524  retf                                    
2525  add     [bx+si],al                      

; ===== DOCOMMANDABORT_BAKEOUT =====
2526  mov     ax,2515h                        ; segment seg2:0000
2529  enter   2h,0h                           
252d  push    si                              
252e  push    di                              
252f  push    ds                              
2530  mov     ds,ax                           
2532  pop     ds                              
2533  pop     di                              
2534  pop     si                              
2535  leave                                   
2536  retf                                    
2537  add     [bx+si],al                      

; ===== SETBAKEOUT_HEAT =====
2538  mov     ax,2527h                        ; segment seg2:0000
253b  enter   2h,0h                           
253f  push    si                              
2540  push    di                              
2541  push    ds                              
2542  mov     ds,ax                           
2544  pop     ds                              
2545  pop     di                              
2546  pop     si                              
2547  leave                                   
2548  retf    4h                              
254b  add     [bx+si],al                      

; ===== SETBAKEOUT_COOL =====
254c  mov     ax,2539h                        ; segment seg2:0000
254f  enter   2h,0h                           
2553  push    si                              
2554  push    di                              
2555  push    ds                              
2556  mov     ds,ax                           
2558  pop     ds                              
2559  pop     di                              
255a  pop     si                              
255b  leave                                   
255c  retf    4h                              
255f  add     [bx+si],al                      

; ===== SWITCHPARTIAL_VENT =====
2560  mov     ax,254Dh                        ; segment seg2:0000
2563  enter   2h,0h                           
2567  push    si                              
2568  push    di                              
2569  push    ds                              
256a  mov     ds,ax                           
256c  push    121h                            
256f  push    word ptr [bp+6h]                
2572  call far M007.M007_PUTSTATE             ; DP_PARTIAL_VENT
2577  cmp     word ptr [bp+6h],0h             
257b  je      2580h                           
257d  jmp     2583h                           
2580  jmp     258Ch                           
2583  cmp     word ptr [bp+6h],1h             
2587  je      258Ch                           
2589  jmp     258Ch                           
258c  pop     ds                              
258d  pop     di                              
258e  pop     si                              
258f  leave                                   
2590  retf    2h                              
2593  add     [bx+si],al                      

; ===== DOCOMMANDPUMP =====
2594  mov     ax,2561h                        ; segment seg2:0000
2597  enter   2h,0h                           
259b  push    si                              
259c  push    di                              
259d  push    ds                              
259e  mov     ds,ax                           
25a0  call far sub_56c4                       
25a5  cmp     ax,0h                           
25a8  jne     25ADh                           
25aa  jmp     25B7h                           
25ad  push    0h                              
25af  call far sub_3a4c                       
25b4  add     sp,2h                           
25b7  pop     ds                              
25b8  pop     di                              
25b9  pop     si                              
25ba  leave                                   
25bb  retf                                    

; ===== DOCOMMANDVENT =====
25bc  mov     ax,2595h                        ; segment seg2:0000
25bf  enter   2h,0h                           
25c3  push    si                              
25c4  push    di                              
25c5  push    ds                              
25c6  mov     ds,ax                           
25c8  call far M500.STAGEINSAFEPOSITION       
25cd  cmp     ax,0h                           
25d0  jne     25D5h                           
25d2  jmp     25ECh                           
25d5  call far sub_5756                       
25da  cmp     ax,0h                           
25dd  jne     25E2h                           
25df  jmp     25ECh                           
25e2  push    1h                              
25e4  call far sub_3a4c                       
25e9  add     sp,2h                           
25ec  pop     ds                              
25ed  pop     di                              
25ee  pop     si                              
25ef  leave                                   
25f0  retf                                    
25f1  add     [bx+si],al                      

; ===== DOCOMMANDVAC_ABORT =====
25f2  mov     ax,25BDh                        ; segment seg2:0000
25f5  enter   2h,0h                           
25f9  push    si                              
25fa  push    di                              
25fb  push    ds                              
25fc  mov     ds,ax                           
25fe  call far sub_583c                       
2603  cmp     ax,0h                           
2606  jne     260Bh                           
2608  jmp     2615h                           
260b  push    2h                              
260d  call far sub_3a4c                       
2612  add     sp,2h                           
2615  pop     ds                              
2616  pop     di                              
2617  pop     si                              
2618  leave                                   
2619  retf                                    

; ===== DOCOMMANDSTART_COLUMN_PUMP =====
261a  mov     ax,25F3h                        ; segment seg2:0000
261d  enter   2h,0h                           
2621  push    si                              
2622  push    di                              
2623  push    ds                              
2624  mov     ds,ax                           
2626  push    0h                              
2628  call far sub_3a94                       
262d  add     sp,2h                           
2630  push    1h                              
2632  call far SWITCHCOLUMN_ISOLATION         
2637  pop     ds                              
2638  pop     di                              
2639  pop     si                              
263a  leave                                   
263b  retf                                    

; ===== DOCOMMANDSTOP_COLUMN_PUMP =====
263c  mov     ax,261Bh                        ; segment seg2:0000
263f  enter   2h,0h                           
2643  push    si                              
2644  push    di                              
2645  push    ds                              
2646  mov     ds,ax                           
2648  push    1h                              
264a  call far sub_3a94                       
264f  add     sp,2h                           
2652  push    0h                              
2654  call far SWITCHCOLUMN_ISOLATION         
2659  pop     ds                              
265a  pop     di                              
265b  pop     si                              
265c  leave                                   
265d  retf                                    

; ===== SWITCHEDX =====
265e  mov     ax,263Dh                        ; segment seg2:0000
2661  enter   2h,0h                           
2665  push    si                              
2666  push    di                              
2667  push    ds                              
2668  mov     ds,ax                           
266a  push    3Fh                             
266c  push    word ptr [bp+6h]                
266f  call far M007.M007_PUTSTATE             ; DP_EDX
2674  mov     ax,[bp+6h]                      
2677  cbw                                     
2678  push    ax                              
2679  call far sub_3adc                       
267e  add     sp,2h                           
2681  pop     ds                              
2682  pop     di                              
2683  pop     si                              
2684  leave                                   
2685  retf    2h                              

; ===== SWITCHWDX =====
2688  mov     ax,265Fh                        ; segment seg2:0000
268b  enter   2h,0h                           
268f  push    si                              
2690  push    di                              
2691  push    ds                              
2692  mov     ds,ax                           
2694  push    40h                             
2696  push    word ptr [bp+6h]                
2699  call far M007.M007_PUTSTATE             ; DP_WDX
269e  cmp     word ptr [bp+6h],1h             
26a2  je      26A7h                           
26a4  jmp     26CEh                           
26a7  call far sub_41a0                       
26ac  cmp     ax,0h                           
26af  je      26B4h                           
26b1  jmp     26C1h                           
26b4  push    1h                              
26b6  call far sub_3b06                       
26bb  add     sp,2h                           
26be  jmp     26CBh                           
26c1  push    2h                              
26c3  call far sub_3b06                       
26c8  add     sp,2h                           
26cb  jmp     26D8h                           
26ce  push    0h                              
26d0  call far sub_3b06                       
26d5  add     sp,2h                           
26d8  pop     ds                              
26d9  pop     di                              
26da  pop     si                              
26db  leave                                   
26dc  retf    2h                              
26df  add     [bx+si],al                      

; ===== SWITCHAIRLOCK =====
26e0  mov     ax,2689h                        ; segment seg2:0000
26e3  enter   2h,0h                           
26e7  push    si                              
26e8  push    di                              
26e9  push    ds                              
26ea  mov     ds,ax                           
26ec  push    41h                             
26ee  push    word ptr [bp+6h]                
26f1  call far M007.M007_PUTSTATE             ; DP_AIRLOCK
26f6  cmp     word ptr [bp+6h],1h             
26fa  je      26FFh                           
26fc  jmp     2709h                           
26ff  push    135h                            
2702  push    1h                              
2704  call far M007.M007_PUTSTATE             ; DP_PROTECTED_Z = 1
2709  mov     ax,[bp+6h]                      
270c  cbw                                     
270d  push    ax                              
270e  call far sub_3b30                       
2713  add     sp,2h                           
2716  pop     ds                              
2717  pop     di                              
2718  pop     si                              
2719  leave                                   
271a  retf    2h                              
271d  add     [bx+si],al                      

; ===== SWITCHVIEWING_WINDOW =====
271e  mov     ax,26E1h                        ; segment seg2:0000
2721  enter   2h,0h                           
2725  push    si                              
2726  push    di                              
2727  push    ds                              
2728  mov     ds,ax                           
272a  push    42h                             
272c  push    word ptr [bp+6h]                
272f  call far M007.M007_PUTSTATE             ; DP_VIEWING_WINDOW
2734  mov     ax,[bp+6h]                      
2737  cbw                                     
2738  push    ax                              
2739  call far sub_3b5a                       
273e  add     sp,2h                           
2741  pop     ds                              
2742  pop     di                              
2743  pop     si                              
2744  leave                                   
2745  retf    2h                              

; ===== SWITCHCOLUMN_PUMP =====
2748  mov     ax,271Fh                        ; segment seg2:0000
274b  enter   2h,0h                           
274f  push    si                              
2750  push    di                              
2751  push    ds                              
2752  mov     ds,ax                           
2754  push    46h                             
2756  push    word ptr [bp+6h]                
2759  call far M007.M007_PUTSTATE             ; DP_COLUMN_PUMP
275e  mov     ax,[bp+6h]                      
2761  cbw                                     
2762  push    ax                              
2763  call far sub_3b84                       
2768  add     sp,2h                           
276b  pop     ds                              
276c  pop     di                              
276d  pop     si                              
276e  leave                                   
276f  retf    2h                              

; ===== SWITCHGATE_VALVE =====
2772  mov     ax,2749h                        ; segment seg2:0000
2775  enter   2h,0h                           
2779  push    si                              
277a  push    di                              
277b  push    ds                              
277c  mov     ds,ax                           
277e  push    4Fh                             
2780  push    word ptr [bp+6h]                
2783  call far M007.M007_PUTSTATE             ; DP_GATE_VALVE
2788  mov     ax,[bp+6h]                      
278b  cbw                                     
278c  push    ax                              
278d  call far sub_3bae                       
2792  add     sp,2h                           
2795  pop     ds                              
2796  pop     di                              
2797  pop     si                              
2798  leave                                   
2799  retf    2h                              

; ===== SWITCHCOLUMN_ISOLATION =====
279c  mov     ax,2773h                        ; segment seg2:0000
279f  enter   2h,0h                           
27a3  push    si                              
27a4  push    di                              
27a5  push    ds                              
27a6  mov     ds,ax                           
27a8  push    50h                             
27aa  push    word ptr [bp+6h]                
27ad  call far M007.M007_PUTSTATE             ; DP_COLUMN_ISOLATION
27b2  mov     ax,[bp+6h]                      
27b5  cbw                                     
27b6  push    ax                              
27b7  call far sub_3bd8                       
27bc  add     sp,2h                           
27bf  pop     ds                              
27c0  pop     di                              
27c1  pop     si                              
27c2  leave                                   
27c3  retf    2h                              

; ===== SWITCHWDX_GATE_VALVE_MOTOR =====
27c6  mov     ax,279Dh                        ; segment seg2:0000
27c9  enter   2h,0h                           
27cd  push    si                              
27ce  push    di                              
27cf  push    ds                              
27d0  mov     ds,ax                           
27d2  push    54h                             
27d4  push    word ptr [bp+6h]                
27d7  call far M007.M007_PUTSTATE             ; DP_WDX_GATE_VALVE_MOTOR
27dc  cmp     word ptr [bp+6h],0h             
27e0  je      27E5h                           
27e2  jmp     27F2h                           
27e5  push    1h                              
27e7  call far sub_3b06                       
27ec  add     sp,2h                           
27ef  jmp     27FCh                           
27f2  push    2h                              
27f4  call far sub_3b06                       
27f9  add     sp,2h                           
27fc  pop     ds                              
27fd  pop     di                              
27fe  pop     si                              
27ff  leave                                   
2800  retf    2h                              
2803  add     [bx+si],al                      

; ===== SETEDX_VAC_LIMIT =====
2804  mov     ax,27C7h                        ; segment seg2:0000
2807  enter   2h,0h                           
280b  push    si                              
280c  push    di                              
280d  push    ds                              
280e  mov     ds,ax                           
2810  push    9Dh                             
2813  push    word ptr [bp+8h]                
2816  push    word ptr [bp+6h]                
2819  call far M007.M007_PUTVALUE             ; AP_EDX_VAC_LIMIT
281e  push    word ptr [bp+8h]                
2821  push    word ptr [bp+6h]                
2824  call far sub_3c02                       
2829  add     sp,4h                           
282c  pop     ds                              
282d  pop     di                              
282e  pop     si                              
282f  leave                                   
2830  retf    4h                              
2833  add     [bx+si],al                      

; ----- sub_2834 -----
2834  mov     ax,2805h                        ; segment seg2:0000
2837  enter   24h,0h                          
283b  push    si                              
283c  push    di                              
283d  push    ds                              
283e  mov     ds,ax                           
2840  cmp     word ptr [1Eh],0h               
2845  jne     284Ah                           
2847  jmp     286Fh                           
284a  push    142h                            
284d  lea     ax,[bp-24h]                     
2850  push    ax                              
2851  call far M007.M007_GETVALUE             ; AP_HP_TARGET
2856  mov     bx,ax                           
2858  mov     es,dx                           
285a  push    word ptr es:[bx+2h]             
285e  push    word ptr es:[bx]                
2861  call far sub_597a                       
2866  add     sp,4h                           
2869  mov     word ptr [1Eh],0h               
286f  mov     ax,770h                         
2872  mov     dx,ds                           
2874  push    dx                              
2875  push    ax                              
2876  call far sub_3cc8                       
287b  add     sp,4h                           
287e  mov     ax,770h                         
2881  mov     dx,ds                           
2883  push    dx                              
2884  push    ax                              
2885  call far sub_59bc                       
288a  add     sp,4h                           
288d  mov     ax,[790h]                       
2890  mov     dx,[792h]                       
2894  and     ax,1h                           
2897  and     dx,0h                           
289a  cmp     ax,0h                           
289d  je      28A2h                           
289f  jmp     28AAh                           
28a2  cmp     dx,0h                           
28a5  jne     28AAh                           
28a7  jmp     28B9h                           
28aa  mov     ax,770h                         
28ad  mov     dx,ds                           
28af  push    dx                              
28b0  push    ax                              
28b1  call far sub_41bc                       
28b6  add     sp,4h                           
28b9  mov     ax,[790h]                       
28bc  mov     dx,[792h]                       
28c0  and     ax,2h                           
28c3  and     dx,0h                           
28c6  cmp     ax,0h                           
28c9  je      28CEh                           
28cb  jmp     28D6h                           
28ce  cmp     dx,0h                           
28d1  jne     28D6h                           
28d3  jmp     28E5h                           
28d6  mov     ax,780h                         
28d9  mov     dx,ds                           
28db  push    dx                              
28dc  push    ax                              
28dd  call far sub_42e8                       
28e2  add     sp,4h                           
28e5  mov     ax,[790h]                       
28e8  mov     dx,[792h]                       
28ec  and     ax,4h                           
28ef  and     dx,0h                           
28f2  cmp     ax,0h                           
28f5  je      28FAh                           
28f7  jmp     2902h                           
28fa  cmp     dx,0h                           
28fd  jne     2902h                           
28ff  jmp     2911h                           
2902  mov     ax,78Ch                         
2905  mov     dx,ds                           
2907  push    dx                              
2908  push    ax                              
2909  call far sub_4536                       
290e  add     sp,4h                           
2911  mov     ax,[790h]                       
2914  mov     dx,[792h]                       
2918  and     ax,8h                           
291b  and     dx,0h                           
291e  cmp     ax,0h                           
2921  je      2926h                           
2923  jmp     292Eh                           
2926  cmp     dx,0h                           
2929  jne     292Eh                           
292b  jmp     2944h                           
292e  mov     al,[796h]                       
2931  and     ax,0FFh                         
2934  push    ax                              
2935  mov     al,[795h]                       
2938  and     ax,0FFh                         
293b  push    ax                              
293c  call far sub_458e                       
2941  add     sp,4h                           
2944  mov     ax,[790h]                       
2947  mov     dx,[792h]                       
294b  and     ax,20h                          
294e  and     dx,0h                           
2951  cmp     ax,0h                           
2954  je      2959h                           
2956  jmp     2961h                           
2959  cmp     dx,0h                           
295c  jne     2961h                           
295e  jmp     2970h                           
2961  push    0A7h                            
2964  mov     al,[797h]                       
2967  and     ax,0FFh                         
296a  push    ax                              
296b  call far M007.M007_PUTSTATE             ; DP_SCM_RANGE
2970  mov     ax,[790h]                       
2973  mov     dx,[792h]                       
2977  and     ax,10h                          
297a  and     dx,0h                           
297d  cmp     ax,0h                           
2980  je      2985h                           
2982  jmp     298Dh                           
2985  cmp     dx,0h                           
2988  jne     298Dh                           
298a  jmp     299Bh                           
298d  push    5Ah                             
298f  mov     al,[798h]                       
2992  and     ax,0FFh                         
2995  push    ax                              
2996  call far M007.M007_PUTSTATE             ; DP_4QBSD_GAIN
299b  mov     al,[794h]                       
299e  and     ax,0FFh                         
29a1  and     ax,80h                          
29a4  cmp     ax,0h                           
29a7  jne     29ACh                           
29a9  jmp     29F2h                           
29ac  push    0h                              
29ae  call far M007.M007_GETSTATE             ; DP_EOBOARD
29b3  cmp     ax,0h                           
29b6  jne     29BBh                           
29b8  jmp     29F2h                           
29bb  mov     al,[794h]                       
29be  and     ax,0FFh                         
29c1  cmp     ax,0FFh                         
29c4  je      29C9h                           
29c6  jmp     29DBh                           
29c9  push    1DFh                            
29cc  push    0h                              
29ce  push    0h                              
29d0  push    1800h                           
29d3  call far M007.UIF_LOG                   
29d8  jmp     29F2h                           
29db  push    1B5h                            
29de  mov     al,[794h]                       
29e1  and     ax,0FFh                         
29e4  and     ax,7Fh                          
29e7  cwd                                     
29e8  push    dx                              
29e9  push    ax                              
29ea  push    6000h                           
29ed  call far M007.UIF_LOG                   
29f2  call far sub_74e4                       
29f7  cmp     word ptr [12h],1h               
29fc  je      2A01h                           
29fe  jmp     2ABFh                           
2a01  mov     ax,0F40h                        
2a04  mov     dx,ds                           
2a06  push    dx                              
2a07  push    ax                              
2a08  call far sub_3c48                       
2a0d  add     sp,4h                           
2a10  mov     ax,0F52h                        
2a13  mov     dx,ds                           
2a15  push    dx                              
2a16  push    ax                              
2a17  call far sub_3c88                       
2a1c  add     sp,4h                           
2a1f  mov     ax,0F40h                        
2a22  mov     dx,ds                           
2a24  push    dx                              
2a25  push    ax                              
2a26  push    2A1Ah                           ; segment seg1:0000
2a29  push    37E4h                           
2a2c  call far USER.LSTRCMP                   ; "NOTREAD"
2a31  cmp     ax,0h                           
2a34  jne     2A39h                           
2a36  jmp     2ABFh                           
2a39  mov     ax,0F52h                        
2a3c  mov     dx,ds                           
2a3e  push    dx                              
2a3f  push    ax                              
2a40  push    2A27h                           ; segment seg1:0000
2a43  push    37E4h                           
2a46  call far USER.LSTRCMP                   ; "NOTREAD"
2a4b  cmp     ax,0h                           
2a4e  jne     2A53h                           
2a50  jmp     2ABFh                           
2a53  lea     ax,[bp-20h]                     
2a56  mov     dx,ss                           
2a58  push    dx                              
2a59  push    ax                              
2a5a  push    2A41h                           ; segment seg1:0000
2a5d  push    37ECh                           
2a60  call far KERNEL.LSTRCPY                 ; "STGVAC Comms cpu = "
2a65  lea     ax,[bp-20h]                     
2a68  mov     dx,ss                           
2a6a  push    dx                              
2a6b  push    ax                              
2a6c  mov     ax,0F40h                        
2a6f  mov     dx,ds                           
2a71  push    dx                              
2a72  push    ax                              
2a73  call far KERNEL.LSTRCAT                 
2a78  push    0h                              
2a7a  lea     ax,[bp-20h]                     
2a7d  mov     dx,ss                           
2a7f  push    dx                              
2a80  push    ax                              
2a81  call far M007.UIF_MESSAGE               
2a86  lea     ax,[bp-20h]                     
2a89  mov     dx,ss                           
2a8b  push    dx                              
2a8c  push    ax                              
2a8d  push    2A5Bh                           ; segment seg1:0000
2a90  push    3800h                           
2a93  call far KERNEL.LSTRCPY                 ; "STGVAC Vac cpu = "
2a98  lea     ax,[bp-20h]                     
2a9b  mov     dx,ss                           
2a9d  push    dx                              
2a9e  push    ax                              
2a9f  mov     ax,0F52h                        
2aa2  mov     dx,ds                           
2aa4  push    dx                              
2aa5  push    ax                              
2aa6  call far KERNEL.LSTRCAT                 
2aab  push    0h                              
2aad  lea     ax,[bp-20h]                     
2ab0  mov     dx,ss                           
2ab2  push    dx                              
2ab3  push    ax                              
2ab4  call far M007.UIF_MESSAGE               
2ab9  mov     word ptr [12h],0h               
2abf  push    3Bh                             
2ac1  call far M007.M007_GETSTATE             ; DP_VENT_INHIBITED
2ac6  cmp     ax,1h                           
2ac9  je      2ACEh                           
2acb  jmp     2C0Fh                           
2ace  push    46h                             
2ad0  call far M007.M007_GETSTATE             ; DP_COLUMN_PUMP
2ad5  cmp     ax,1h                           
2ad8  je      2ADDh                           
2ada  jmp     2B5Fh                           
2add  push    50h                             
2adf  call far M007.M007_GETSTATE             ; DP_COLUMN_ISOLATION
2ae4  cmp     ax,1h                           
2ae7  je      2AECh                           
2ae9  jmp     2B27h                           
2aec  push    48h                             
2aee  call far M007.M007_GETSTATE             ; DP_GUN_CHAMBER_VALVE
2af3  cmp     ax,0h                           
2af6  jne     2AFBh                           
2af8  jmp     2B08h                           
2afb  push    85h                             
2afe  push    5h                              
2b00  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 5
2b05  jmp     2CBCh                           
2b08  push    49h                             
2b0a  call far M007.M007_GETSTATE             ; DP_COLUMN_CHAMBER_VALVE
2b0f  cmp     ax,0h                           
2b12  jne     2B17h                           
2b14  jmp     2B24h                           
2b17  push    85h                             
2b1a  push    7h                              
2b1c  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 7
2b21  jmp     2CBCh                           
2b24  jmp     2B5Fh                           
2b27  push    48h                             
2b29  call far M007.M007_GETSTATE             ; DP_GUN_CHAMBER_VALVE
2b2e  cmp     ax,1h                           
2b31  jne     2B36h                           
2b33  jmp     2B43h                           
2b36  push    85h                             
2b39  push    4h                              
2b3b  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 4
2b40  jmp     2CBCh                           
2b43  push    49h                             
2b45  call far M007.M007_GETSTATE             ; DP_COLUMN_CHAMBER_VALVE
2b4a  cmp     ax,1h                           
2b4d  jne     2B52h                           
2b4f  jmp     2B5Fh                           
2b52  push    85h                             
2b55  push    6h                              
2b57  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 6
2b5c  jmp     2CBCh                           
2b5f  push    3Fh                             
2b61  call far M007.M007_GETSTATE             ; DP_EDX
2b66  cmp     ax,1h                           
2b69  je      2B6Eh                           
2b6b  jmp     2B8Ah                           
2b6e  push    44h                             
2b70  call far M007.M007_GETSTATE             ; DP_EDX_WINDOW
2b75  cmp     ax,0h                           
2b78  jne     2B7Dh                           
2b7a  jmp     2B8Ah                           
2b7d  push    85h                             
2b80  push    1h                              
2b82  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 1
2b87  jmp     2CBCh                           
2b8a  push    40h                             
2b8c  call far M007.M007_GETSTATE             ; DP_WDX
2b91  cmp     ax,1h                           
2b94  je      2B99h                           
2b96  jmp     2BB5h                           
2b99  push    4Fh                             
2b9b  call far M007.M007_GETSTATE             ; DP_GATE_VALVE
2ba0  cmp     ax,0h                           
2ba3  jne     2BA8h                           
2ba5  jmp     2BB5h                           
2ba8  push    85h                             
2bab  push    2h                              
2bad  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 2
2bb2  jmp     2CBCh                           
2bb5  push    41h                             
2bb7  call far M007.M007_GETSTATE             ; DP_AIRLOCK
2bbc  cmp     ax,1h                           
2bbf  je      2BC4h                           
2bc1  jmp     2BE0h                           
2bc4  push    45h                             
2bc6  call far M007.M007_GETSTATE             ; DP_AIRLOCK_IS
2bcb  cmp     ax,0h                           
2bce  jne     2BD3h                           
2bd0  jmp     2BE0h                           
2bd3  push    85h                             
2bd6  push    3h                              
2bd8  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 3
2bdd  jmp     2CBCh                           
2be0  push    53h                             
2be2  call far M007.M007_GETSTATE             ; DP_STAGE_TYPE
2be7  cmp     ax,1h                           
2bea  je      2BEFh                           
2bec  jmp     2C0Ch                           
2bef  push    86h                             
2bf2  call far M007.M007_GETSTATE             ; DP_TILTED
2bf7  cmp     ax,1h                           
2bfa  je      2BFFh                           
2bfc  jmp     2C0Ch                           
2bff  push    85h                             
2c02  push    8h                              
2c04  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 8
2c09  jmp     2CBCh                           
2c0c  jmp     2CBCh                           
2c0f  push    3Ah                             
2c11  call far M007.M007_GETSTATE             ; DP_VACSTATUS
2c16  cmp     ax,3h                           
2c19  je      2C1Eh                           
2c1b  jmp     2C2Bh                           
2c1e  push    85h                             
2c21  push    0Ah                             
2c23  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 10
2c28  jmp     2CBCh                           
2c2b  push    0Eh                             
2c2d  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
2c32  cmp     ax,0h                           
2c35  jne     2C3Ah                           
2c37  jmp     2C66h                           
2c3a  push    0Eh                             
2c3c  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
2c41  cmp     ax,9h                           
2c44  jne     2C49h                           
2c46  jmp     2C66h                           
2c49  push    0A9h                            
2c4c  call far M007.M007_GETSTATE             ; DP_COLUMN_ISOLATED
2c51  cmp     ax,1h                           
2c54  jne     2C59h                           
2c56  jmp     2C66h                           
2c59  push    85h                             
2c5c  push    9h                              
2c5e  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 9
2c63  jmp     2CBCh                           
2c66  push    12Eh                            
2c69  lea     ax,[bp-24h]                     
2c6c  push    ax                              
2c6d  call far M007.M007_GETVALUE             ; AP_HCSTAGE_TEMP
2c72  mov     bx,ax                           
2c74  mov     es,dx                           
2c76  wait                                    
2c77  fld     dword ptr es:[bx]               
2c7a  wait                                    
2c7b  fld     qword ptr [3D0h]                ; [ds] = 15
2c7f  wait                                    
2c80  fxch    st(0),st(1)                     
2c82  call far sub_0275                       
2c87  jae     2C8Ch                           
2c89  jmp     2CB2h                           
2c8c  push    12Eh                            
2c8f  lea     ax,[bp-24h]                     
2c92  push    ax                              
2c93  call far M007.M007_GETVALUE             ; AP_HCSTAGE_TEMP
2c98  mov     bx,ax                           
2c9a  mov     es,dx                           
2c9c  wait                                    
2c9d  fld     dword ptr es:[bx]               
2ca0  wait                                    
2ca1  fld     qword ptr [3D8h]                ; [ds] = 40
2ca5  wait                                    
2ca6  fxch    st(0),st(1)                     
2ca8  call far sub_0275                       
2cad  ja      2CB2h                           
2caf  jmp     2CB2h                           
2cb2  push    85h                             
2cb5  push    0h                              
2cb7  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID_REASON = 0
2cbc  pop     ds                              
2cbd  pop     di                              
2cbe  pop     si                              
2cbf  leave                                   
2cc0  retf                                    
2cc1  add     [bx+si],al                      

; ----- sub_2cc2 -----
2cc2  mov     ax,2835h                        ; segment seg2:0000
2cc5  enter   2h,0h                           
2cc9  push    si                              
2cca  push    di                              
2ccb  push    ds                              
2ccc  mov     ds,ax                           
2cce  cmp     word ptr [10h],3h               
2cd3  jne     2CD8h                           
2cd5  jmp     2CE2h                           
2cd8  cmp     word ptr [10h],1h               
2cdd  je      2CE2h                           
2cdf  jmp     2CE7h                           
2ce2  call far sub_3f8a                       
2ce7  cmp     word ptr [10h],4h               
2cec  je      2CF1h                           
2cee  jmp     2D46h                           
2cf1  jmp     2D43h                           
2cf4  call far sub_409a                       
2cf9  cmp     ax,0h                           
2cfc  je      2D01h                           
2cfe  jmp     2D40h                           
2d01  push    0h                              
2d03  push    2CF7h                           ; segment seg1:0000
2d06  push    3838h                           
2d09  push    2D04h                           ; segment seg1:0000
2d0c  push    3812h                           
2d0f  push    25h                             
2d11  call far USER.MESSAGEBOX                ; "Re-read Serial Number and Licences from Dongle"  "LEO Serial Number and Licence Dongle"
2d16  cmp     ax,2h                           
2d19  je      2D1Eh                           
2d1b  jmp     2D3Dh                           
2d1e  push    30h                             
2d20  call far USER.MESSAGEBEEP               
2d25  push    0h                              
2d27  push    2D0Ah                           ; segment seg1:0000
2d2a  push    3880h                           
2d2d  push    2D28h                           ; segment seg1:0000
2d30  push    3868h                           
2d33  push    30h                             
2d35  call far USER.MESSAGEBOX                ; "LEO Dongle Read Failure"
2d3a  jmp     2D46h                           
2d3d  jmp     2D43h                           
2d40  jmp     2D46h                           
2d43  jmp     2CF4h                           
2d46  cmp     word ptr [10h],5h               
2d4b  je      2D50h                           
2d4d  jmp     2D55h                           
2d50  call far sub_4088                       
2d55  mov     word ptr [1Ah],1h               
2d5b  pop     ds                              
2d5c  pop     di                              
2d5d  pop     si                              
2d5e  leave                                   
2d5f  retf                                    

; ----- sub_2d60 -----
2d60  mov     ax,2CC3h                        ; segment seg2:0000
2d63  enter   624h,0h                         
2d67  push    si                              
2d68  push    di                              
2d69  push    ds                              
2d6a  mov     ds,ax                           
2d6c  call far sub_60f8                       
2d71  cmp     ax,0h                           
2d74  je      2D79h                           
2d76  jmp     2D7Fh                           
2d79  mov     ax,199h                         
2d7c  jmp     3031h                           
2d7f  mov     ax,[14h]                        
2d82  jmp     3006h                           
2d85  lea     ax,[bp-624h]                    
2d89  mov     dx,ss                           
2d8b  push    dx                              
2d8c  push    ax                              
2d8d  call far sub_3666                       
2d92  lea     ax,[bp-61Fh]                    
2d96  mov     dx,ss                           
2d98  push    dx                              
2d99  push    ax                              
2d9a  call far M500.GET_STAGE_CONFIG          
2d9f  lea     ax,[bp-613h]                    
2da3  mov     dx,ss                           
2da5  push    dx                              
2da6  push    ax                              
2da7  call far GET_VACUUM_CONFIG              
2dac  lea     ax,[bp-5FDh]                    
2db0  mov     dx,ss                           
2db2  push    dx                              
2db3  push    ax                              
2db4  call far M200.GET_EO_CONFIG             
2db9  lea     ax,[bp-255h]                    
2dbd  mov     dx,ss                           
2dbf  push    dx                              
2dc0  push    ax                              
2dc1  call far M007.GET_MASTER_CONFIG         
2dc6  lea     ax,[bp-7Ah]                     
2dc9  mov     dx,ss                           
2dcb  push    dx                              
2dcc  push    ax                              
2dcd  call far M400.GET_MODES_CONFIG          
2dd2  lea     ax,[bp-79h]                     
2dd5  mov     dx,ss                           
2dd7  push    dx                              
2dd8  push    ax                              
2dd9  call far M300.GET_DISPLAY_CONFIG        
2dde  lea     ax,[bp-78h]                     
2de1  mov     dx,ss                           
2de3  push    dx                              
2de4  push    ax                              
2de5  call far M700.GET_ACQUIRE_CONFIG        
2dea  lea     ax,[bp-73h]                     
2ded  mov     dx,ss                           
2def  push    dx                              
2df0  push    ax                              
2df1  call far M100.GET_EHT_CONFIG            
2df6  lea     ax,[bp-624h]                    
2dfa  mov     dx,ss                           
2dfc  push    dx                              
2dfd  push    ax                              
2dfe  call far sub_4afe                       
2e03  add     sp,4h                           
2e06  cmp     word ptr [10h],3h               
2e0b  jne     2E10h                           
2e0d  jmp     2E1Ah                           
2e10  cmp     word ptr [10h],2h               
2e15  je      2E1Ah                           
2e17  jmp     2E30h                           
2e1a  lea     ax,[bp-624h]                    
2e1e  mov     dx,ss                           
2e20  push    dx                              
2e21  push    ax                              
2e22  call far sub_3fb0                       
2e27  add     sp,4h                           
2e2a  mov     word ptr [1Ah],2h               
2e30  cmp     word ptr [10h],4h               
2e35  je      2E3Ah                           
2e37  jmp     2EA0h                           
2e3a  jmp     2E97h                           
2e3d  lea     ax,[bp-624h]                    
2e41  mov     dx,ss                           
2e43  push    dx                              
2e44  push    ax                              
2e45  call far sub_4118                       
2e4a  add     sp,4h                           
2e4d  cmp     ax,0h                           
2e50  je      2E55h                           
2e52  jmp     2E94h                           
2e55  push    0h                              
2e57  push    2E48h                           ; segment seg1:0000
2e5a  push    38ECh                           
2e5d  push    2E58h                           ; segment seg1:0000
2e60  push    3812h                           
2e63  push    25h                             
2e65  call far USER.MESSAGEBOX                ; "Re-write Licences to Dongle"  "LEO Serial Number and Licence Dongle"
2e6a  cmp     ax,2h                           
2e6d  je      2E72h                           
2e6f  jmp     2E91h                           
2e72  push    30h                             
2e74  call far USER.MESSAGEBEEP               
2e79  push    0h                              
2e7b  push    2E5Eh                           ; segment seg1:0000
2e7e  push    3922h                           
2e81  push    2E7Ch                           ; segment seg1:0000
2e84  push    3908h                           
2e87  push    30h                             
2e89  call far USER.MESSAGEBOX                ; "Licence information has NOT been written to the dongle"  "LEO Dongle Write Failure"
2e8e  jmp     2E9Ah                           
2e91  jmp     2E97h                           
2e94  jmp     2E9Ah                           
2e97  jmp     2E3Dh                           
2e9a  mov     word ptr [1Ah],2h               
2ea0  cmp     word ptr [10h],5h               
2ea5  je      2EAAh                           
2ea7  jmp     2EC0h                           
2eaa  lea     ax,[bp-624h]                    
2eae  mov     dx,ss                           
2eb0  push    dx                              
2eb1  push    ax                              
2eb2  call far sub_40b2                       
2eb7  add     sp,4h                           
2eba  mov     word ptr [1Ah],2h               
2ec0  mov     byte ptr [bp-4h],1h             
2ec4  jmp     2ECBh                           
2ec7  add     byte ptr [bp-4h],1h             
2ecb  mov     al,[bp-4h]                      
2ece  cbw                                     
2ecf  cmp     ax,40h                          
2ed2  jl      2ED7h                           
2ed4  jmp     2EE8h                           
2ed7  mov     al,[bp-4h]                      
2eda  cbw                                     
2edb  lea     bx,[bp-11Dh]                    
2edf  add     bx,ax                           
2ee1  mov     byte ptr ss:[bx],0h             
2ee5  jmp     2EC7h                           
2ee8  lea     ax,[bp-624h]                    
2eec  mov     dx,ss                           
2eee  push    dx                              
2eef  push    ax                              
2ef0  call far sub_4afe                       
2ef5  add     sp,4h                           
2ef8  lea     ax,[bp-624h]                    
2efc  mov     dx,ss                           
2efe  push    dx                              
2eff  push    ax                              
2f00  call far sub_48b2                       
2f05  add     sp,4h                           
2f08  cbw                                     
2f09  cmp     ax,1h                           
2f0c  je      2F11h                           
2f0e  jmp     2F1Ah                           
2f11  mov     word ptr [1Ch],1h               
2f17  jmp     2F20h                           
2f1a  mov     word ptr [1Ch],0h               
2f20  cmp     word ptr [10h],3h               
2f25  jne     2F2Ah                           
2f27  jmp     2F34h                           
2f2a  cmp     word ptr [10h],2h               
2f2f  je      2F34h                           
2f31  jmp     2F43h                           
2f34  mov     word ptr [14h],0h               
2f3a  mov     ax,199h                         
2f3d  jmp     3031h                           
2f40  jmp     2F71h                           
2f43  mov     word ptr [14h],4h               
2f49  cmp     word ptr [1Ch],0h               
2f4e  je      2F53h                           
2f50  jmp     2F6Bh                           
2f53  push    1AEh                            
2f56  push    0h                              
2f58  push    0h                              
2f5a  push    2000h                           
2f5d  call far M007.UIF_LOG                   
2f62  mov     ax,1AEh                         
2f65  jmp     3031h                           
2f68  jmp     2F71h                           
2f6b  mov     ax,0h                           
2f6e  jmp     3031h                           
2f71  jmp     3031h                           
2f74  mov     word ptr [14h],4h               
2f7a  cmp     word ptr [1Ch],0h               
2f7f  je      2F84h                           
2f81  jmp     2F9Ch                           
2f84  push    1AFh                            
2f87  push    0h                              
2f89  push    0h                              
2f8b  push    2000h                           
2f8e  call far M007.UIF_LOG                   
2f93  mov     ax,1AFh                         
2f96  jmp     3031h                           
2f99  jmp     2FB1h                           
2f9c  push    1ADh                            
2f9f  push    0h                              
2fa1  push    0h                              
2fa3  push    2000h                           
2fa6  call far M007.UIF_LOG                   
2fab  mov     ax,1ADh                         
2fae  jmp     3031h                           
2fb1  jmp     3031h                           
2fb4  mov     word ptr [14h],4h               
2fba  cmp     word ptr [1Ch],0h               
2fbf  je      2FC4h                           
2fc1  jmp     2FDCh                           
2fc4  push    1AEh                            
2fc7  push    0h                              
2fc9  push    0h                              
2fcb  push    2000h                           
2fce  call far M007.UIF_LOG                   
2fd3  mov     ax,1AEh                         
2fd6  jmp     3031h                           
2fd9  jmp     2FE2h                           
2fdc  mov     ax,0h                           
2fdf  jmp     3031h                           
2fe2  jmp     3031h                           
2fe5  mov     ax,199h                         
2fe8  jmp     3031h                           
2feb  jmp     3031h                           
2fee  mov     word ptr [14h],2h               
2ff4  mov     ax,199h                         
2ff7  jmp     3031h                           
2ffa  jmp     3031h                           
2ffd  mov     ax,0h                           
3000  jmp     3031h                           
3003  jmp     3031h                           
3006  cmp     ax,0h                           
3009  jne     300Eh                           
300b  jmp     2FE5h                           
300e  cmp     ax,1h                           
3011  jne     3016h                           
3013  jmp     2FB4h                           
3016  cmp     ax,2h                           
3019  jne     301Eh                           
301b  jmp     2D85h                           
301e  cmp     ax,3h                           
3021  jne     3026h                           
3023  jmp     2F74h                           
3026  cmp     ax,4h                           
3029  jne     302Eh                           
302b  jmp     2FEEh                           
302e  jmp     2FFDh                           
3031  pop     ds                              
3032  pop     di                              
3033  pop     si                              
3034  leave                                   
3035  retf                                    

; ----- sub_3036 -----
3036  mov     ax,2D61h                        ; segment seg2:0000
3039  enter   62Ah,0h                         
303d  push    si                              
303e  push    di                              
303f  push    ds                              
3040  mov     ds,ax                           
3042  cmp     word ptr [1Ah],1h               
3047  je      304Ch                           
3049  jmp     3330h                           
304c  mov     ax,[10h]                        
304f  jmp     3070h                           
3052  call far sub_4016                       
3057  mov     [bp-6h],ax                      
305a  jmp     309Bh                           
305d  mov     word ptr [bp-6h],3h             
3062  jmp     309Bh                           
3065  mov     word ptr [bp-6h],4h             
306a  jmp     309Bh                           
306d  jmp     309Bh                           
3070  cmp     ax,1h                           
3073  jne     3078h                           
3075  jmp     3052h                           
3078  cmp     ax,3h                           
307b  jne     3080h                           
307d  jmp     3052h                           
3080  cmp     ax,4h                           
3083  jne     3088h                           
3085  jmp     305Dh                           
3088  cmp     ax,5h                           
308b  jne     3090h                           
308d  jmp     305Dh                           
3090  cmp     ax,6h                           
3093  jne     3098h                           
3095  jmp     305Dh                           
3098  jmp     3065h                           
309b  mov     ax,[bp-6h]                      
309e  jmp     3315h                           
30a1  cmp     word ptr [bp-6h],3h             
30a5  je      30AAh                           
30a7  jmp     312Bh                           
30aa  mov     word ptr [bp-62Ah],0h           
30b0  cmp     word ptr [10h],4h               
30b5  jne     30BAh                           
30b7  jmp     30CEh                           
30ba  cmp     word ptr [10h],5h               
30bf  jne     30C4h                           
30c1  jmp     30CEh                           
30c4  cmp     word ptr [10h],6h               
30c9  je      30CEh                           
30cb  jmp     30E5h                           
30ce  lea     ax,[bp-628h]                    
30d2  mov     dx,ss                           
30d4  push    dx                              
30d5  push    ax                              
30d6  call far sub_4130                       
30db  add     sp,4h                           
30de  cbw                                     
30df  mov     [bp-8h],ax                      
30e2  jmp     30F9h                           
30e5  lea     ax,[bp-628h]                    
30e9  mov     dx,ss                           
30eb  push    dx                              
30ec  push    ax                              
30ed  call far sub_3fdc                       
30f2  add     sp,4h                           
30f5  cbw                                     
30f6  mov     [bp-8h],ax                      
30f9  cmp     word ptr [bp-8h],0h             
30fd  je      3102h                           
30ff  jmp     312Bh                           
3102  mov     al,[bp-628h]                    
3106  cbw                                     
3107  cmp     ax,16h                          
310a  je      310Fh                           
310c  jmp     3126h                           
310f  lea     ax,[bp-628h]                    
3113  mov     dx,ss                           
3115  push    dx                              
3116  push    ax                              
3117  call far sub_4d0e                       
311c  add     sp,4h                           
311f  cbw                                     
3120  mov     [bp-8h],ax                      
3123  jmp     312Bh                           
3126  mov     word ptr [bp-8h],1h             
312b  cmp     word ptr [bp-6h],4h             
312f  jne     3134h                           
3131  jmp     313Dh                           
3134  cmp     word ptr [bp-8h],1h             
3138  je      313Dh                           
313a  jmp     31A5h                           
313d  cmp     word ptr [10h],3h               
3142  jne     3147h                           
3144  jmp     3151h                           
3147  cmp     word ptr [10h],1h               
314c  je      3151h                           
314e  jmp     31A0h                           
3151  mov     word ptr [bp-62Ah],1h           
3157  lea     ax,[bp-628h]                    
315b  mov     dx,ss                           
315d  push    dx                              
315e  push    ax                              
315f  call far sub_462c                       
3164  add     sp,4h                           
3167  cbw                                     
3168  mov     [bp-8h],ax                      
316b  cmp     word ptr [bp-8h],0h             
316f  je      3174h                           
3171  jmp     319Dh                           
3174  mov     al,[bp-628h]                    
3178  cbw                                     
3179  cmp     ax,16h                          
317c  je      3181h                           
317e  jmp     3198h                           
3181  lea     ax,[bp-628h]                    
3185  mov     dx,ss                           
3187  push    dx                              
3188  push    ax                              
3189  call far sub_4d0e                       
318e  add     sp,4h                           
3191  cbw                                     
3192  mov     [bp-8h],ax                      
3195  jmp     319Dh                           
3198  mov     word ptr [bp-8h],1h             
319d  jmp     31A5h                           
31a0  mov     word ptr [bp-8h],1h             
31a5  cmp     word ptr [bp-8h],1h             
31a9  je      31AEh                           
31ab  jmp     31FAh                           
31ae  mov     word ptr [bp-62Ah],2h           
31b4  lea     ax,[bp-628h]                    
31b8  mov     dx,ss                           
31ba  push    dx                              
31bb  push    ax                              
31bc  call far sub_4836                       
31c1  add     sp,4h                           
31c4  cbw                                     
31c5  mov     [bp-8h],ax                      
31c8  cmp     word ptr [bp-8h],0h             
31cc  je      31D1h                           
31ce  jmp     31FAh                           
31d1  mov     al,[bp-628h]                    
31d5  cbw                                     
31d6  cmp     ax,16h                          
31d9  je      31DEh                           
31db  jmp     31F5h                           
31de  lea     ax,[bp-628h]                    
31e2  mov     dx,ss                           
31e4  push    dx                              
31e5  push    ax                              
31e6  call far sub_4d0e                       
31eb  add     sp,4h                           
31ee  cbw                                     
31ef  mov     [bp-8h],ax                      
31f2  jmp     31FAh                           
31f5  mov     word ptr [bp-8h],1h             
31fa  cmp     word ptr [bp-62Ah],0h           
31ff  jne     3204h                           
3201  jmp     3226h                           
3204  mov     word ptr [bp-4h],1h             
3209  jmp     321Dh                           
320c  mov     ax,[bp-4h]                      
320f  lea     bx,[bp-121h]                    
3213  add     bx,ax                           
3215  mov     byte ptr ss:[bx],0h             
3219  add     word ptr [bp-4h],1h             
321d  cmp     word ptr [bp-4h],40h            
3221  jge     3226h                           
3223  jmp     320Ch                           
3226  cmp     word ptr [bp-8h],1h             
322a  je      322Fh                           
322c  jmp     3250h                           
322f  push    19Fh                            
3232  push    0h                              
3234  push    0h                              
3236  push    1000h                           
3239  call far M007.UIF_LOG                   
323e  lea     ax,[bp-259h]                    
3242  mov     dx,ss                           
3244  push    dx                              
3245  push    ax                              
3246  push    3h                              
3248  call far M007.RESTORE_MASTER_CONFIG     
324d  jmp     3306h                           
3250  lea     ax,[bp-628h]                    
3254  mov     dx,ss                           
3256  push    dx                              
3257  push    ax                              
3258  call far sub_3648                       
325d  lea     ax,[bp-623h]                    
3261  mov     dx,ss                           
3263  push    dx                              
3264  push    ax                              
3265  call far M500.RESTORE_STAGE_CONFIG      
326a  lea     ax,[bp-617h]                    
326e  mov     dx,ss                           
3270  push    dx                              
3271  push    ax                              
3272  call far RESTORE_VACUUM_CONFIG          
3277  lea     ax,[bp-601h]                    
327b  mov     dx,ss                           
327d  push    dx                              
327e  push    ax                              
327f  call far M200.RESTORE_EO_CONFIG         
3284  lea     ax,[bp-7Eh]                     
3287  mov     dx,ss                           
3289  push    dx                              
328a  push    ax                              
328b  call far M400.RESTORE_MODES_CONFIG      
3290  lea     ax,[bp-7Dh]                     
3293  mov     dx,ss                           
3295  push    dx                              
3296  push    ax                              
3297  call far M300.RESTORE_DISPLAY_CONFIG    
329c  lea     ax,[bp-7Ch]                     
329f  mov     dx,ss                           
32a1  push    dx                              
32a2  push    ax                              
32a3  call far M700.RESTORE_ACQUIRE_CONFIG    
32a8  lea     ax,[bp-77h]                     
32ab  mov     dx,ss                           
32ad  push    dx                              
32ae  push    ax                              
32af  call far M100.RESTORE_EHT_CONFIG        
32b4  lea     ax,[bp-259h]                    
32b8  mov     dx,ss                           
32ba  push    dx                              
32bb  push    ax                              
32bc  push    word ptr [bp-62Ah]              
32c0  call far M007.RESTORE_MASTER_CONFIG     
32c5  mov     ax,[bp-62Ah]                    
32c9  jmp     32F3h                           
32cc  push    19Eh                            
32cf  push    0h                              
32d1  push    0h                              
32d3  push    1000h                           
32d6  call far M007.UIF_LOG                   
32db  jmp     3306h                           
32de  push    19Dh                            
32e1  push    0h                              
32e3  push    0h                              
32e5  push    1000h                           
32e8  call far M007.UIF_LOG                   
32ed  jmp     3306h                           
32f0  jmp     3306h                           
32f3  cmp     ax,1h                           
32f6  jne     32FBh                           
32f8  jmp     32DEh                           
32fb  cmp     ax,2h                           
32fe  jne     3303h                           
3300  jmp     32CCh                           
3303  jmp     3306h                           
3306  mov     word ptr [1Ah],0h               
330c  jmp     3330h                           
330f  jmp     3330h                           
3312  jmp     3330h                           
3315  cmp     ax,2h                           
3318  jne     331Dh                           
331a  jmp     330Fh                           
331d  cmp     ax,3h                           
3320  jne     3325h                           
3322  jmp     30A1h                           
3325  cmp     ax,4h                           
3328  jne     332Dh                           
332a  jmp     30A1h                           
332d  jmp     3330h                           
3330  cmp     word ptr [1Ah],2h               
3335  je      333Ah                           
3337  jmp     33CEh                           
333a  mov     ax,[10h]                        
333d  jmp     335Eh                           
3340  call far sub_4016                       
3345  mov     [bp-6h],ax                      
3348  jmp     3389h                           
334b  mov     word ptr [bp-6h],1h             
3350  jmp     3389h                           
3353  mov     word ptr [bp-6h],4h             
3358  jmp     3389h                           
335b  jmp     3389h                           
335e  cmp     ax,2h                           
3361  jne     3366h                           
3363  jmp     3340h                           
3366  cmp     ax,3h                           
3369  jne     336Eh                           
336b  jmp     3340h                           
336e  cmp     ax,4h                           
3371  jne     3376h                           
3373  jmp     334Bh                           
3376  cmp     ax,5h                           
3379  jne     337Eh                           
337b  jmp     334Bh                           
337e  cmp     ax,6h                           
3381  jne     3386h                           
3383  jmp     334Bh                           
3386  jmp     3353h                           
3389  mov     ax,[bp-6h]                      
338c  jmp     33B3h                           
338f  mov     word ptr [14h],1h               
3395  mov     word ptr [1Ah],0h               
339b  jmp     33CEh                           
339e  jmp     33CEh                           
33a1  mov     word ptr [14h],3h               
33a7  mov     word ptr [1Ah],0h               
33ad  jmp     33CEh                           
33b0  jmp     33CEh                           
33b3  cmp     ax,0h                           
33b6  jne     33BBh                           
33b8  jmp     339Eh                           
33bb  cmp     ax,1h                           
33be  jne     33C3h                           
33c0  jmp     338Fh                           
33c3  cmp     ax,4h                           
33c6  jne     33CBh                           
33c8  jmp     33A1h                           
33cb  jmp     33CEh                           
33ce  pop     ds                              
33cf  pop     di                              
33d0  pop     si                              
33d1  leave                                   
33d2  retf                                    
33d3  add     [bx+si],al                      

; ===== RESTORE_VACUUM_CONFIG =====
33d4  mov     ax,3037h                        ; segment seg2:0000
33d7  enter   2h,0h                           
33db  push    si                              
33dc  push    di                              
33dd  push    ds                              
33de  mov     ds,ax                           
33e0  les     bx,[bp+6h]                      
33e3  mov     al,es:[bx+4h]                   
33e7  cbw                                     
33e8  push    ax                              
33e9  call far SWITCHEDX                      
33ee  push    54h                             
33f0  les     bx,[bp+6h]                      
33f3  mov     al,es:[bx+0Ah]                  
33f7  cbw                                     
33f8  push    ax                              
33f9  call far M007.M007_PUTSTATE             ; DP_WDX_GATE_VALVE_MOTOR
33fe  les     bx,[bp+6h]                      
3401  mov     al,es:[bx+5h]                   
3405  cbw                                     
3406  push    ax                              
3407  call far SWITCHWDX                      
340c  les     bx,[bp+6h]                      
340f  mov     al,es:[bx+6h]                   
3413  cbw                                     
3414  push    ax                              
3415  call far SWITCHAIRLOCK                  
341a  les     bx,[bp+6h]                      
341d  mov     al,es:[bx+7h]                   
3421  cbw                                     
3422  push    ax                              
3423  call far SWITCHVIEWING_WINDOW           
3428  les     bx,[bp+6h]                      
342b  mov     al,es:[bx+8h]                   
342f  cbw                                     
3430  push    ax                              
3431  call far SWITCHCOLUMN_PUMP              
3436  les     bx,[bp+6h]                      
3439  mov     al,es:[bx+9h]                   
343d  cbw                                     
343e  push    ax                              
343f  call far SWITCHCOLUMN_ISOLATION         
3444  les     bx,[bp+6h]                      
3447  push    word ptr es:[bx+2h]             
344b  push    word ptr es:[bx]                
344e  call far SETEDX_VAC_LIMIT               
3453  les     bx,[bp+6h]                      
3456  mov     al,es:[bx+0Bh]                  
345a  cbw                                     
345b  push    ax                              
345c  call far SWITCHIXI_BACKPLATE            
3461  les     bx,[bp+6h]                      
3464  mov     al,es:[bx+0Ch]                  
3468  cbw                                     
3469  push    ax                              
346a  call far SWITCHPARTIAL_VENT             
346f  les     bx,[bp+6h]                      
3472  mov     al,es:[bx+0Dh]                  
3476  cbw                                     
3477  push    ax                              
3478  call far SWITCHBAKEOUT                  
347d  les     bx,[bp+6h]                      
3480  wait                                    
3481  fld     dword ptr es:[bx+0Eh]           
3485  wait                                    
3486  fstp    dword ptr [7B6h]                
348a  nop                                     
348b  wait                                    
348c  les     bx,[bp+6h]                      
348f  wait                                    
3490  fld     dword ptr es:[bx+12h]           
3494  wait                                    
3495  fstp    dword ptr [7BAh]                
3499  nop                                     
349a  wait                                    
349b  push    12Fh                            
349e  push    0h                              
34a0  call far M007.M007_PUTSTATE             ; DP_AIRLOCK_CONTROL = 0
34a5  pop     ds                              
34a6  pop     di                              
34a7  pop     si                              
34a8  leave                                   
34a9  retf    4h                              

; ===== GET_VACUUM_CONFIG =====
34ac  mov     ax,33D5h                        ; segment seg2:0000
34af  enter   4Ah,0h                          
34b3  push    si                              
34b4  push    di                              
34b5  push    ds                              
34b6  mov     ds,ax                           
34b8  push    142h                            
34bb  lea     ax,[bp-4Ah]                     
34be  push    ax                              
34bf  call far M007.M007_GETVALUE             ; AP_HP_TARGET
34c4  mov     bx,ax                           
34c6  mov     es,dx                           
34c8  wait                                    
34c9  fld     dword ptr es:[bx]               
34cc  wait                                    
34cd  fstp    dword ptr [bp-6h]               
34d0  wait                                    
34d1  fld     dword ptr [bp-6h]               
34d4  wait                                    
34d5  fld     dword ptr [3E0h]                ; [ds] = 100000
34d9  wait                                    
34da  fmulp   st(1)                           
34dc  call far sub_029a                       
34e1  push    ax                              
34e2  push    34DFh                           ; segment seg1:0000
34e5  push    395Ah                           
34e8  lea     ax,[bp-46h]                     
34eb  mov     dx,ss                           
34ed  push    dx                              
34ee  push    ax                              
34ef  call far USER._WSPRINTF                 
34f4  add     sp,0Ah                          
34f7  push    34E3h                           ; segment seg1:0000
34fa  push    3972h                           
34fd  push    34F8h                           ; segment seg1:0000
3500  push    395Eh                           
3503  lea     ax,[bp-46h]                     
3506  mov     dx,ss                           
3508  push    dx                              
3509  push    ax                              
350a  call far M007.GETLEOINIFILEPATH         ; "VP target"
350f  push    dx                              
3510  push    ax                              
3511  call far KERNEL.WRITEPRIVATEPROFILESTRING
3516  push    1B8h                            
3519  lea     ax,[bp-4Ah]                     
351c  push    ax                              
351d  call far M007.M007_GETVALUE             ; AP_VP_LIMIT
3522  mov     bx,ax                           
3524  mov     es,dx                           
3526  wait                                    
3527  fld     dword ptr es:[bx]               
352a  wait                                    
352b  fstp    dword ptr [bp-6h]               
352e  wait                                    
352f  fld     dword ptr [bp-6h]               
3532  wait                                    
3533  fld     dword ptr [3E0h]                ; [ds] = 100000
3537  wait                                    
3538  fmulp   st(1)                           
353a  call far sub_029a                       
353f  push    ax                              
3540  push    353Dh                           ; segment seg1:0000
3543  push    395Ah                           
3546  lea     ax,[bp-46h]                     
3549  mov     dx,ss                           
354b  push    dx                              
354c  push    ax                              
354d  call far USER._WSPRINTF                 
3552  add     sp,0Ah                          
3555  push    3541h                           ; segment seg1:0000
3558  push    3972h                           
355b  push    3556h                           ; segment seg1:0000
355e  push    3968h                           
3561  lea     ax,[bp-46h]                     
3564  mov     dx,ss                           
3566  push    dx                              
3567  push    ax                              
3568  call far M007.GETLEOINIFILEPATH         ; "VP Limit"
356d  push    dx                              
356e  push    ax                              
356f  call far KERNEL.WRITEPRIVATEPROFILESTRING
3574  push    3Fh                             
3576  call far M007.M007_GETSTATE             ; DP_EDX
357b  les     bx,[bp+6h]                      
357e  mov     es:[bx+4h],al                   
3582  push    40h                             
3584  call far M007.M007_GETSTATE             ; DP_WDX
3589  les     bx,[bp+6h]                      
358c  mov     es:[bx+5h],al                   
3590  push    41h                             
3592  call far M007.M007_GETSTATE             ; DP_AIRLOCK
3597  les     bx,[bp+6h]                      
359a  mov     es:[bx+6h],al                   
359e  push    42h                             
35a0  call far M007.M007_GETSTATE             ; DP_VIEWING_WINDOW
35a5  les     bx,[bp+6h]                      
35a8  mov     es:[bx+7h],al                   
35ac  push    46h                             
35ae  call far M007.M007_GETSTATE             ; DP_COLUMN_PUMP
35b3  les     bx,[bp+6h]                      
35b6  mov     es:[bx+8h],al                   
35ba  push    50h                             
35bc  call far M007.M007_GETSTATE             ; DP_COLUMN_ISOLATION
35c1  les     bx,[bp+6h]                      
35c4  mov     es:[bx+9h],al                   
35c8  push    54h                             
35ca  call far M007.M007_GETSTATE             ; DP_WDX_GATE_VALVE_MOTOR
35cf  les     bx,[bp+6h]                      
35d2  mov     es:[bx+0Ah],al                  
35d6  push    9Dh                             
35d9  lea     ax,[bp-4Ah]                     
35dc  push    ax                              
35dd  call far M007.M007_GETVALUE             ; AP_EDX_VAC_LIMIT
35e2  mov     bx,ax                           
35e4  mov     es,dx                           
35e6  wait                                    
35e7  fld     dword ptr es:[bx]               
35ea  nop                                     
35eb  wait                                    
35ec  les     bx,[bp+6h]                      
35ef  wait                                    
35f0  fstp    dword ptr es:[bx]               
35f3  nop                                     
35f4  wait                                    
35f5  push    10Fh                            
35f8  call far M007.M007_GETSTATE             ; DP_IXI_BACKPLATE
35fd  les     bx,[bp+6h]                      
3600  mov     es:[bx+0Bh],al                  
3604  push    121h                            
3607  call far M007.M007_GETSTATE             ; DP_PARTIAL_VENT
360c  les     bx,[bp+6h]                      
360f  mov     es:[bx+0Ch],al                  
3613  push    11Eh                            
3616  call far M007.M007_GETSTATE             ; DP_BAKEOUT
361b  les     bx,[bp+6h]                      
361e  mov     es:[bx+0Dh],al                  
3622  les     bx,[bp+6h]                      
3625  wait                                    
3626  fld     dword ptr [7B6h]                
362a  wait                                    
362b  fstp    dword ptr es:[bx+0Eh]           
362f  nop                                     
3630  wait                                    
3631  les     bx,[bp+6h]                      
3634  wait                                    
3635  fld     dword ptr [7BAh]                
3639  wait                                    
363a  fstp    dword ptr es:[bx+12h]           
363e  nop                                     
363f  wait                                    
3640  pop     ds                              
3641  pop     di                              
3642  pop     si                              
3643  leave                                   
3644  retf    4h                              
3647  add     [bx+si],al                      

; ----- sub_3648 -----
3648  mov     ax,34ADh                        ; segment seg2:0000
364b  enter   2h,0h                           
364f  push    si                              
3650  push    di                              
3651  push    ds                              
3652  mov     ds,ax                           
3654  les     bx,[bp+6h]                      
3657  mov     ax,es:[bx+1h]                   
365b  mov     [18h],ax                        
365e  pop     ds                              
365f  pop     di                              
3660  pop     si                              
3661  leave                                   
3662  retf    4h                              
3665  add     [bx+si],al                      

; ----- sub_3666 -----
3666  mov     ax,3649h                        ; segment seg2:0000
3669  enter   2h,0h                           
366d  push    si                              
366e  push    di                              
366f  push    ds                              
3670  mov     ds,ax                           
3672  les     bx,[bp+6h]                      
3675  mov     byte ptr es:[bx],16h            
3679  add     word ptr [18h],1h               
367e  les     bx,[bp+6h]                      
3681  mov     ax,[18h]                        
3684  mov     es:[bx+1h],ax                   
3688  les     bx,[bp+6h]                      
368b  mov     word ptr es:[bx+3h],0h          
3691  pop     ds                              
3692  pop     di                              
3693  pop     si                              
3694  leave                                   
3695  retf    4h                              

; ===== DOCOMMANDGETCOMMSPSU =====
3698  mov     ax,3667h                        ; segment seg2:0000
369b  enter   2h,0h                           
369f  push    si                              
36a0  push    di                              
36a1  push    ds                              
36a2  mov     ds,ax                           
36a4  call far sub_4048                       
36a9  pop     ds                              
36aa  pop     di                              
36ab  pop     si                              
36ac  leave                                   
36ad  retf                                    

; ===== DOCOMMANDOPEN_COL_CHAMBER_VALVE =====
36ae  mov     ax,3699h                        ; segment seg2:0000
36b1  enter   2h,0h                           
36b5  push    si                              
36b6  push    di                              
36b7  push    ds                              
36b8  mov     ds,ax                           
36ba  pop     ds                              
36bb  pop     di                              
36bc  pop     si                              
36bd  leave                                   
36be  retf                                    
36bf  add     [bx+si],al                      

; ===== DOCOMMANDCLOSE_COL_CHAMBER_VALVE =====
36c0  mov     ax,36AFh                        ; segment seg2:0000
36c3  enter   2h,0h                           
36c7  push    si                              
36c8  push    di                              
36c9  push    ds                              
36ca  mov     ds,ax                           
36cc  pop     ds                              
36cd  pop     di                              
36ce  pop     si                              
36cf  leave                                   
36d0  retf                                    
36d1  add     [bx+si],al                      

; ===== SWITCHSCM1500 =====
36d2  mov     ax,36C1h                        ; segment seg2:0000
36d5  enter   2h,0h                           
36d9  push    si                              
36da  push    di                              
36db  push    ds                              
36dc  mov     ds,ax                           
36de  push    12Bh                            
36e1  push    word ptr [bp+6h]                
36e4  call far M007.M007_PUTSTATE             ; DP_SCM1500
36e9  pop     ds                              
36ea  pop     di                              
36eb  pop     si                              
36ec  leave                                   
36ed  retf    2h                              

; ===== DOCOMMANDPUMP_AIRLOCK =====
36f0  mov     ax,36D3h                        ; segment seg2:0000
36f3  enter   2h,0h                           
36f7  push    si                              
36f8  push    di                              
36f9  push    ds                              
36fa  mov     ds,ax                           
36fc  pop     ds                              
36fd  pop     di                              
36fe  pop     si                              
36ff  leave                                   
3700  retf                                    
3701  add     [bx+si],al                      

; ===== DOCOMMANDVENT_AIRLOCK =====
3702  mov     ax,36F1h                        ; segment seg2:0000
3705  enter   2h,0h                           
3709  push    si                              
370a  push    di                              
370b  push    ds                              
370c  mov     ds,ax                           
370e  pop     ds                              
370f  pop     di                              
3710  pop     si                              
3711  leave                                   
3712  retf                                    
3713  add     [bx+si],al                      

; ===== DOCOMMANDHOLD_AIRLOCK_VACUUM =====
3714  mov     ax,3703h                        ; segment seg2:0000
3717  enter   2h,0h                           
371b  push    si                              
371c  push    di                              
371d  push    ds                              
371e  mov     ds,ax                           
3720  pop     ds                              
3721  pop     di                              
3722  pop     si                              
3723  leave                                   
3724  retf                                    
3725  add     [bx+si],al                      

; ===== SWITCHAIRLOCK_CONTROL =====
3726  mov     ax,3715h                        ; segment seg2:0000
3729  enter   2h,0h                           
372d  push    si                              
372e  push    di                              
372f  push    ds                              
3730  mov     ds,ax                           
3732  pop     ds                              
3733  pop     di                              
3734  pop     si                              
3735  leave                                   
3736  retf    2h                              
3739  add     [bx+si],al                      

; ===== SETVP_LIMIT =====
373a  mov     ax,3727h                        ; segment seg2:0000
373d  enter   2h,0h                           
3741  push    si                              
3742  push    di                              
3743  push    ds                              
3744  mov     ds,ax                           
3746  push    1B8h                            
3749  push    word ptr [bp+8h]                
374c  push    word ptr [bp+6h]                
374f  call far M007.M007_PUTVALUE             ; AP_VP_LIMIT
3754  push    0Bh                             
3756  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
375b  push    ax                              
375c  call far CHANGEFILAMENTTYPE             
3761  pop     ds                              
3762  pop     di                              
3763  pop     si                              
3764  leave                                   
3765  retf    4h                              

; ===== CHANGEFILAMENTTYPE =====
3768  mov     ax,373Bh                        ; segment seg2:0000
376b  enter   2h,0h                           
376f  push    si                              
3770  push    di                              
3771  push    ds                              
3772  mov     ds,ax                           
3774  pop     ds                              
3775  pop     di                              
3776  pop     si                              
3777  leave                                   
3778  retf    2h                              
377b  add     [bx+si],al                      

; ===== Z130_VACCANSEND =====
377c  mov     ax,3769h                        ; segment seg2:0000
377f  enter   2h,0h                           
3783  push    si                              
3784  push    di                              
3785  push    ds                              
3786  mov     ds,ax                           
3788  mov     ax,0h                           
378b  jmp     378Eh                           
378e  pop     ds                              
378f  pop     di                              
3790  pop     si                              
3791  leave                                   
3792  retf    4h                              
3795  add     [bx+si],al                      

; ===== Z130_VACCANGETBUFFER =====
3796  mov     ax,377Dh                        ; segment seg2:0000
3799  enter   2h,0h                           
379d  push    si                              
379e  push    di                              
379f  push    ds                              
37a0  mov     ds,ax                           
37a2  mov     ax,0h                           
37a5  jmp     37A8h                           
37a8  pop     ds                              
37a9  pop     di                              
37aa  pop     si                              
37ab  leave                                   
37ac  retf    6h                              
37af  add     [bx+si],al                      

; ===== Z130_VACCANGETBUFFERSTATUS =====
37b0  mov     ax,3797h                        ; segment seg2:0000
37b3  enter   2h,0h                           
37b7  push    si                              
37b8  push    di                              
37b9  push    ds                              
37ba  mov     ds,ax                           
37bc  mov     ax,0h                           
37bf  jmp     37C2h                           
37c2  pop     ds                              
37c3  pop     di                              
37c4  pop     si                              
37c5  leave                                   
37c6  retf    6h                              
37c9  add     [bx+si],al                      

; ===== Z130_VACCANCONFIGBUFFER =====
37ca  mov     ax,37B1h                        ; segment seg2:0000
37cd  enter   2h,0h                           
37d1  push    si                              
37d2  push    di                              
37d3  push    ds                              
37d4  mov     ds,ax                           
37d6  mov     ax,0h                           
37d9  jmp     37DCh                           
37dc  pop     ds                              
37dd  pop     di                              
37de  pop     si                              
37df  leave                                   
37e0  retf    6h                              
37e3  add     [bp+4Fh],cl                     
37e6  push    sp                              
37e7  push    dx                              
37e8  inc     bp                              
37e9  inc     cx                              
37ea  inc     sp                              
37eb  add     [bp+di+54h],dl                  
37ee  inc     di                              
37ef  push    si                              
37f0  inc     cx                              
37f1  inc     bx                              
37f2  and     [bp+di+6Fh],al                  
37f5  insw                                    
37f6  insw                                    
37f7  jae     3819h                           
37f9  arpl    [bx+si+75h],si                  
37fc  and     [di],bh                         
37fe  and     [bx+si],al                      
3800  push    bx                              
3801  push    sp                              
3802  inc     di                              
3803  push    si                              
3804  inc     cx                              
3805  inc     bx                              
3806  and     [bp+61h],dl                     
3809  arpl    [bx+si],sp                      
380b  arpl    [bx+si+75h],si                  
380e  and     [di],bh                         
3810  and     [bx+si],al                      
3812  dec     sp                              
3813  inc     bp                              
3814  dec     di                              
3815  and     [bp+di+65h],dl                  
3818  jb      3883h                           
381a  popa                                    
381b  insb                                    
381c  and     [bp+75h],cl                     
381f  insw                                    
3820  bound   sp,[di+72h]                     
3823  and     [bx+di+6Eh],ah                  
3826  and     fs:[si+69h],cl                  
382a  arpl    [di+6Eh],sp                     
382d  arpl    [di+20h],sp                     
3830  inc     sp                              
3831  outsw                                   
3832  outsb                                   
3833  insb                                    
3835  add     gs:[bx+si],al                   
3838  push    dx                              
3839  sub     ax,6572h                        
383d  popa                                    
383e  and     fs:[bp+di+65h],dl               
3842  jb      38ADh                           
3844  popa                                    
3845  insb                                    
3846  and     [bp+75h],cl                     
3849  insw                                    
384a  bound   sp,[di+72h]                     
384d  and     [bx+di+6Eh],ah                  
3850  and     fs:[si+69h],cl                  
3854  arpl    [di+6Eh],sp                     
3857  arpl    [di+73h],sp                     
385a  and     [bp+72h],ah                     
385d  outsw                                   
385e  insw                                    
385f  and     [si+6Fh],al                     
3862  outsb                                   
3863  insb                                    
3865  add     gs:[bx+si],al                   
3868  dec     sp                              
3869  inc     bp                              
386a  dec     di                              
386b  and     [si+6Fh],al                     
386e  outsb                                   
386f  insb                                    
3871  and     gs:[bp+si+65h],dl               
3875  popa                                    
3876  and     fs:[bp+61h],al                  
387a  imul    bp,[si+75h],6572h               
387f  add     [bp+di+68h],dl                  
3882  jne     38F8h                           
3884  je      38EFh                           
3886  outsb                                   
3887  and     [edi+ebp*2+77h],ah              
388c  outsb                                   
388d  and     [si+45h],cl                     
3890  dec     di                              
3891  and     [bx+di+6Eh],ch                  
3894  and     [si+68h],dh                     
3897  imul    si,[bp+di+20h],7473h            
389c  popa                                    
389d  je      3904h                           
389f  and     [di+61h],ch                     
38a2  jns     38C4h                           
38a4  arpl    [bx+72h],bp                     
38a7  jb      391Eh                           
38a9  jo      391Fh                           
38ab  and     [si+69h],ch                     
38ae  arpl    [di+6Eh],sp                     
38b1  arpl    [di+20h],sp                     
38b4  imul    bp,[bp+66h],726Fh               
38b9  insw                                    
38ba  popa                                    
38bb  je      3926h                           
38bd  outsw                                   
38be  outsb                                   
38bf  or      ax,520Ah                        
38c2  bound   bp,gs:[bx+6Fh]                  
38c6  je      38E8h                           
38c8  jae     3943h                           
38ca  jae     3940h                           
38cc  insw                                    
38ce  and     [bp+6Fh],ch                     
38d1  ja      38F3h                           
38d3  je      3944h                           
38d5  and     [bx+si+72h],dh                  
38d8  jae     3940h                           
38db  jb      3953h                           
38dd  and     gs:[si+69h],cl                  
38e1  arpl    [di+6Eh],sp                     
38e4  arpl    [di+20h],sp                     
38e7  popa                                    
38e9  je      394Ch                           
38eb  add     [bp+si+65h],dl                  
38ee  sub     ax,7277h                        
38f1  imul    si,[si+65h],4C20h               
38f6  imul    sp,[bp+di+65h],636Eh            
38fb  jae     391Eh                           
38fe  je      396Fh                           
3900  and     [si+6Fh],al                     
3903  outsb                                   
3904  insb                                    
3906  add     gs:[si+45h],cl                  
390a  dec     di                              
390b  and     [si+6Fh],al                     
390e  outsb                                   
390f  insb                                    
3911  and     gs:[bx+72h],dl                  
3915  imul    si,[si+65h],4620h               
391a  popa                                    
391b  imul    bp,[si+75h],6572h               
3920  add     [bx+si],al                      
3922  dec     sp                              
3923  imul    sp,[bp+di+65h],636Eh            
3928  and     gs:[bx+di+6Eh],ch               
392c  outsd                                   
392e  jb      399Dh                           
3930  popa                                    
3931  je      399Ch                           
3933  outsw                                   
3934  outsb                                   
3935  and     [bx+si+61h],ch                  
3938  jae     395Ah                           
393a  dec     si                              
393b  dec     di                              
393c  push    sp                              
393d  and     [bp+si+65h],ah                  
3940  outsb   gs:                             
3942  and     [bx+72h],dh                     
3945  imul    si,[si+74h],6E65h               
394a  and     [si+6Fh],dh                     
394d  and     [si+68h],dh                     
3950  and     gs:[si+6Fh],ah                  
3954  outsb                                   
3955  insb                                    
3957  add     gs:[bx+si],al                   
395a  and     ax,64h                          
395d  add     [bp+50h],dl                     
3960  and     [si+61h],dh                     
3963  jb      39CCh                           
3965  je      3968h                           
3968  push    si                              
3969  push    ax                              
396a  and     [si+69h],cl                     
396d  insw                                    
396e  imul    si,[si],5600h                   
3973  push    ax                              
3974  add     [bx+si],al                      

; ----- sub_3976 -----
3976  mov     ax,37CBh                        ; segment seg2:0000
3979  enter   2h,0h                           
397d  push    si                              
397e  push    di                              
397f  push    ds                              
3980  mov     ds,ax                           
3982  push    83h                             
3985  call far M007.M007_GETSTATE             ; DP_EOBOARD = 131
398a  cmp     ax,1h                           
398d  je      3992h                           
398f  jmp     39A3h                           
3992  push    word ptr [bp+8h]                
3995  push    word ptr [bp+6h]                
3998  call far TIGASEM.SETVACMODULE           
399d  jmp     39A9h                           
39a0  jmp     39A9h                           
39a3  mov     ax,0h                           
39a6  jmp     39A9h                           
39a9  pop     ds                              
39aa  pop     di                              
39ab  pop     si                              
39ac  leave                                   
39ad  retf                                    

; ----- sub_39ae -----
39ae  mov     ax,3977h                        ; segment seg2:0000
39b1  enter   2h,0h                           
39b5  push    si                              
39b6  push    di                              
39b7  push    ds                              
39b8  mov     ds,ax                           
39ba  push    83h                             
39bd  call far M007.M007_GETSTATE             ; DP_GSP
39c2  cmp     ax,1h                           
39c5  je      39CAh                           
39c7  jmp     39D5h                           
39ca  call far TIGASEM.DELVACMODULE           
39cf  jmp     39DBh                           
39d2  jmp     39DBh                           
39d5  mov     ax,0h                           
39d8  jmp     39DBh                           
39db  pop     ds                              
39dc  pop     di                              
39dd  pop     si                              
39de  leave                                   
39df  retf                                    

; ----- sub_39e0 -----
39e0  mov     ax,39AFh                        ; segment seg2:0000
39e3  enter   2h,0h                           
39e7  push    si                              
39e8  push    di                              
39e9  push    ds                              
39ea  mov     ds,ax                           
39ec  push    83h                             
39ef  call far M007.M007_GETSTATE             ; DP_GSP
39f4  cmp     ax,1h                           
39f7  je      39FCh                           
39f9  jmp     3A07h                           
39fc  call far TIGASEM.INITVACCOMMS           
3a01  jmp     3A10h                           
3a04  jmp     3A10h                           
3a07  mov     ax,0h                           
3a0a  mov     dx,0h                           
3a0d  jmp     3A10h                           
3a10  pop     ds                              
3a11  pop     di                              
3a12  pop     si                              
3a13  leave                                   
3a14  retf                                    
3a15  add     [bx+si],al                      

; ----- sub_3a16 -----
3a16  mov     ax,39E1h                        ; segment seg2:0000
3a19  enter   2h,0h                           
3a1d  push    si                              
3a1e  push    di                              
3a1f  push    ds                              
3a20  mov     ds,ax                           
3a22  push    83h                             
3a25  call far M007.M007_GETSTATE             ; DP_GSP
3a2a  cmp     ax,1h                           
3a2d  je      3A32h                           
3a2f  jmp     3A3Dh                           
3a32  call far TIGASEM.SUSPENDVACMODULE       
3a37  jmp     3A46h                           
3a3a  jmp     3A46h                           
3a3d  mov     ax,0h                           
3a40  mov     dx,0h                           
3a43  jmp     3A46h                           
3a46  pop     ds                              
3a47  pop     di                              
3a48  pop     si                              
3a49  leave                                   
3a4a  retf                                    
3a4b  add     [bx+si],al                      

; ----- sub_3a4c -----
3a4c  mov     ax,3A17h                        ; segment seg2:0000
3a4f  enter   2h,0h                           
3a53  push    si                              
3a54  push    di                              
3a55  push    ds                              
3a56  mov     ds,ax                           

; ----- sub_3a58 -----
3a58  push    83h                             
3a5b  call far M007.M007_GETSTATE             ; DP_GSP
3a60  cmp     ax,1h                           
3a63  je      3A68h                           
3a65  jmp     3A73h                           
3a68  push    word ptr [bp+6h]                
3a6b  call far TIGASEM.SYSTEMPUMPINGSTATE     
3a70  jmp     3A8Fh                           
3a73  cmp     word ptr [bp+6h],0h             
3a77  je      3A7Ch                           
3a79  jmp     3A81h                           
3a7c  mov     byte ptr [20h],0h               
3a81  cmp     word ptr [bp+6h],1h             
3a85  je      3A8Ah                           
3a87  jmp     3A8Fh                           
3a8a  mov     byte ptr [20h],1h               
3a8f  pop     ds                              
3a90  pop     di                              
3a91  pop     si                              
3a92  leave                                   
3a93  retf                                    

; ----- sub_3a94 -----
3a94  mov     ax,3A4Dh                        ; segment seg2:0000
3a97  enter   2h,0h                           
3a9b  push    si                              
3a9c  push    di                              
3a9d  push    ds                              
3a9e  mov     ds,ax                           
3aa0  push    83h                             
3aa3  call far M007.M007_GETSTATE             ; DP_GSP
3aa8  cmp     ax,1h                           
3aab  je      3AB0h                           
3aad  jmp     3ABBh                           
3ab0  push    word ptr [bp+6h]                
3ab3  call far TIGASEM.COLUMNPUMPINGSTATE     
3ab8  jmp     3AD7h                           
3abb  cmp     word ptr [bp+6h],0h             
3abf  je      3AC4h                           
3ac1  jmp     3AC9h                           
3ac4  mov     byte ptr [26h],0h               
3ac9  cmp     word ptr [bp+6h],1h             
3acd  je      3AD2h                           
3acf  jmp     3AD7h                           
3ad2  mov     byte ptr [26h],1h               
3ad7  pop     ds                              
3ad8  pop     di                              
3ad9  pop     si                              
3ada  leave                                   
3adb  retf                                    

; ----- sub_3adc -----
3adc  mov     ax,3A95h                        ; segment seg2:0000
3adf  enter   2h,0h                           
3ae3  push    si                              
3ae4  push    di                              
3ae5  push    ds                              
3ae6  mov     ds,ax                           
3ae8  push    83h                             
3aeb  call far M007.M007_GETSTATE             ; DP_GSP
3af0  cmp     ax,1h                           
3af3  je      3AF8h                           
3af5  jmp     3B00h                           
3af8  push    word ptr [bp+6h]                
3afb  call far TIGASEM.CONFIGUREEDXTIGA       
3b00  pop     ds                              
3b01  pop     di                              
3b02  pop     si                              
3b03  leave                                   
3b04  retf                                    
3b05  add     [bx+si],al                      

; ----- sub_3b06 -----
3b06  mov     ax,3ADDh                        ; segment seg2:0000
3b09  enter   2h,0h                           
3b0d  push    si                              
3b0e  push    di                              
3b0f  push    ds                              
3b10  mov     ds,ax                           
3b12  push    83h                             
3b15  call far M007.M007_GETSTATE             ; DP_GSP
3b1a  cmp     ax,1h                           
3b1d  je      3B22h                           
3b1f  jmp     3B2Ah                           
3b22  push    word ptr [bp+6h]                
3b25  call far TIGASEM.CONFIGUREWDXTIGA       
3b2a  pop     ds                              
3b2b  pop     di                              
3b2c  pop     si                              
3b2d  leave                                   
3b2e  retf                                    
3b2f  add     [bx+si],al                      

; ----- sub_3b30 -----
3b30  mov     ax,3B07h                        ; segment seg2:0000
3b33  enter   2h,0h                           
3b37  push    si                              
3b38  push    di                              
3b39  push    ds                              
3b3a  mov     ds,ax                           
3b3c  push    83h                             
3b3f  call far M007.M007_GETSTATE             ; DP_GSP
3b44  cmp     ax,1h                           
3b47  je      3B4Ch                           
3b49  jmp     3B54h                           
3b4c  push    word ptr [bp+6h]                
3b4f  call far TIGASEM.CONFIGUREAIRLOCKTIGA   
3b54  pop     ds                              
3b55  pop     di                              
3b56  pop     si                              
3b57  leave                                   
3b58  retf                                    
3b59  add     [bx+si],al                      

; ----- sub_3b5a -----
3b5a  mov     ax,3B31h                        ; segment seg2:0000
3b5d  enter   2h,0h                           
3b61  push    si                              
3b62  push    di                              
3b63  push    ds                              
3b64  mov     ds,ax                           
3b66  push    83h                             
3b69  call far M007.M007_GETSTATE             ; DP_GSP
3b6e  cmp     ax,1h                           
3b71  je      3B76h                           
3b73  jmp     3B7Eh                           
3b76  push    word ptr [bp+6h]                
3b79  call far TIGASEM.CONFIGUREVIEWINGWINDOWTIGA
3b7e  pop     ds                              
3b7f  pop     di                              
3b80  pop     si                              
3b81  leave                                   
3b82  retf                                    
3b83  add     [bx+si],al                      

; ----- sub_3b84 -----
3b84  mov     ax,3B5Bh                        ; segment seg2:0000
3b87  enter   2h,0h                           
3b8b  push    si                              
3b8c  push    di                              
3b8d  push    ds                              
3b8e  mov     ds,ax                           
3b90  push    83h                             
3b93  call far M007.M007_GETSTATE             ; DP_GSP
3b98  cmp     ax,1h                           
3b9b  je      3BA0h                           
3b9d  jmp     3BA8h                           
3ba0  push    word ptr [bp+6h]                
3ba3  call far TIGASEM.CONFIGURECOLUMNPUMPINGTIGA
3ba8  pop     ds                              
3ba9  pop     di                              
3baa  pop     si                              
3bab  leave                                   
3bac  retf                                    
3bad  add     [bx+si],al                      

; ----- sub_3bae -----
3bae  mov     ax,3B85h                        ; segment seg2:0000
3bb1  enter   2h,0h                           
3bb5  push    si                              
3bb6  push    di                              
3bb7  push    ds                              
3bb8  mov     ds,ax                           
3bba  push    83h                             
3bbd  call far M007.M007_GETSTATE             ; DP_GSP
3bc2  cmp     ax,1h                           
3bc5  je      3BCAh                           
3bc7  jmp     3BD2h                           
3bca  push    word ptr [bp+6h]                
3bcd  call far TIGASEM.OPERATEWDXGATEVALVETIGA
3bd2  pop     ds                              
3bd3  pop     di                              
3bd4  pop     si                              
3bd5  leave                                   
3bd6  retf                                    
3bd7  add     [bx+si],al                      

; ----- sub_3bd8 -----
3bd8  mov     ax,3BAFh                        ; segment seg2:0000
3bdb  enter   2h,0h                           
3bdf  push    si                              
3be0  push    di                              
3be1  push    ds                              
3be2  mov     ds,ax                           
3be4  push    83h                             
3be7  call far M007.M007_GETSTATE             ; DP_GSP
3bec  cmp     ax,1h                           
3bef  je      3BF4h                           
3bf1  jmp     3BFCh                           
3bf4  push    word ptr [bp+6h]                
3bf7  call far TIGASEM.COLUMNISOLATIONTIGA    
3bfc  pop     ds                              
3bfd  pop     di                              
3bfe  pop     si                              
3bff  leave                                   
3c00  retf                                    
3c01  add     [bx+si],al                      

; ----- sub_3c02 -----
3c02  mov     ax,3BD9h                        ; segment seg2:0000
3c05  enter   2h,0h                           
3c09  push    si                              
3c0a  push    di                              
3c0b  push    ds                              
3c0c  mov     ds,ax                           
3c0e  push    83h                             
3c11  call far M007.M007_GETSTATE             ; DP_GSP
3c16  cmp     ax,1h                           
3c19  je      3C1Eh                           
3c1b  jmp     3C37h                           
3c1e  sub     sp,8h                           
3c21  wait                                    
3c22  fld     dword ptr [bp+6h]               
3c25  nop                                     
3c26  wait                                    
3c27  mov     bx,sp                           
3c29  wait                                    
3c2a  fstp    qword ptr ss:[bx]               
3c2d  nop                                     
3c2e  wait                                    
3c2f  call far TIGASEM.SETEDXTHRESHOLDTIGA    
3c34  jmp     3C42h                           
3c37  wait                                    
3c38  fld     dword ptr [bp+6h]               
3c3b  wait                                    
3c3c  fstp    dword ptr [2Eh]                 ; [ds] = 1.316E-08
3c40  nop                                     
3c41  wait                                    
3c42  pop     ds                              
3c43  pop     di                              
3c44  pop     si                              
3c45  leave                                   
3c46  retf                                    
3c47  add     [bx+si],al                      

; ----- sub_3c48 -----
3c48  mov     ax,3C03h                        ; segment seg2:0000
3c4b  enter   2h,0h                           
3c4f  push    si                              
3c50  push    di                              
3c51  push    ds                              
3c52  mov     ds,ax                           
3c54  push    83h                             
3c57  call far M007.M007_GETSTATE             ; DP_GSP
3c5c  cmp     ax,1h                           
3c5f  je      3C64h                           
3c61  jmp     3C72h                           
3c64  push    word ptr [bp+8h]                
3c67  push    word ptr [bp+6h]                
3c6a  call far TIGASEM.READVACID              
3c6f  jmp     3C83h                           
3c72  push    word ptr [bp+8h]                
3c75  push    word ptr [bp+6h]                
3c78  push    375Fh                           ; segment seg1:0000
3c7b  push    418Eh                           
3c7e  call far KERNEL.LSTRCPY                 
3c83  pop     ds                              
3c84  pop     di                              
3c85  pop     si                              
3c86  leave                                   
3c87  retf                                    

; ----- sub_3c88 -----
3c88  mov     ax,3C49h                        ; segment seg2:0000
3c8b  enter   2h,0h                           
3c8f  push    si                              
3c90  push    di                              
3c91  push    ds                              
3c92  mov     ds,ax                           
3c94  push    83h                             
3c97  call far M007.M007_GETSTATE             ; DP_GSP
3c9c  cmp     ax,1h                           
3c9f  je      3CA4h                           
3ca1  jmp     3CB2h                           
3ca4  push    word ptr [bp+8h]                
3ca7  push    word ptr [bp+6h]                
3caa  call far TIGASEM.READCOMMSID            
3caf  jmp     3CC3h                           
3cb2  push    word ptr [bp+8h]                
3cb5  push    word ptr [bp+6h]                
3cb8  push    3C79h                           ; segment seg1:0000
3cbb  push    418Eh                           
3cbe  call far KERNEL.LSTRCPY                 
3cc3  pop     ds                              
3cc4  pop     di                              
3cc5  pop     si                              
3cc6  leave                                   
3cc7  retf                                    

; ----- sub_3cc8 -----
3cc8  mov     ax,3C89h                        ; segment seg2:0000
3ccb  enter   2h,0h                           
3ccf  push    si                              
3cd0  push    di                              
3cd1  push    ds                              
3cd2  mov     ds,ax                           
3cd4  push    83h                             
3cd7  call far M007.M007_GETSTATE             ; DP_GSP
3cdc  cmp     ax,1h                           
3cdf  je      3CE4h                           
3ce1  jmp     3CF2h                           
3ce4  push    word ptr [bp+8h]                
3ce7  push    word ptr [bp+6h]                
3cea  call far TIGASEM.READVACSTATUS          
3cef  jmp     3F70h                           
3cf2  mov     al,[20h]                        
3cf5  cbw                                     
3cf6  cmp     ax,0h                           
3cf9  je      3CFEh                           
3cfb  jmp     3D69h                           
3cfe  wait                                    
3cff  fld     dword ptr [3E4h]                ; [ds] = 1.316E-07
3d03  wait                                    
3d04  fld     dword ptr [22h]                 ; [ds] = 1
3d08  nop                                     
3d09  wait                                    
3d0a  call far sub_0275                       
3d0f  jb      3D14h                           
3d11  jmp     3D4Ah                           
3d14  les     bx,[bp+6h]                      
3d17  mov     byte ptr es:[bx+8h],1h          
3d1c  wait                                    
3d1d  fld     dword ptr [22h]                 ; [ds] = 1
3d21  wait                                    
3d22  fld     qword ptr [3E8h]                ; [ds] = 1E-09
3d26  wait                                    
3d27  fxch    st(0),st(1)                     
3d29  call far sub_0275                       
3d2e  ja      3D33h                           
3d30  jmp     3D47h                           
3d33  wait                                    
3d34  fld     dword ptr [22h]                 ; [ds] = 1
3d38  wait                                    
3d39  fld     dword ptr [3F0h]                ; [ds] = 1.1
3d3d  wait                                    
3d3e  fdivp   st(1)                           
3d40  wait                                    
3d41  fstp    dword ptr [22h]                 ; [ds] = 1
3d45  nop                                     
3d46  wait                                    
3d47  jmp     3D66h                           
3d4a  les     bx,[bp+6h]                      
3d4d  mov     byte ptr es:[bx+8h],2h          
3d52  wait                                    
3d53  fld     dword ptr [22h]                 ; [ds] = 1
3d57  wait                                    
3d58  fld     dword ptr [3F0h]                ; [ds] = 1.1
3d5c  wait                                    
3d5d  fdivp   st(1)                           
3d5f  wait                                    
3d60  fstp    dword ptr [22h]                 ; [ds] = 1
3d64  nop                                     
3d65  wait                                    
3d66  jmp     3DAAh                           
3d69  wait                                    
3d6a  fld     dword ptr [3F4h]                ; [ds] = 1
3d6e  wait                                    
3d6f  fld     dword ptr [22h]                 ; [ds] = 1
3d73  nop                                     
3d74  wait                                    
3d75  call far sub_0275                       
3d7a  jb      3D7Fh                           
3d7c  jmp     3D96h                           
3d7f  wait                                    
3d80  fld     dword ptr [22h]                 ; [ds] = 1
3d84  wait                                    
3d85  fld     dword ptr [3F0h]                ; [ds] = 1.1
3d89  wait                                    
3d8a  fmulp   st(1)                           
3d8c  wait                                    
3d8d  fstp    dword ptr [22h]                 ; [ds] = 1
3d91  nop                                     
3d92  wait                                    
3d93  jmp     3DA2h                           
3d96  wait                                    
3d97  fld     dword ptr [3F4h]                ; [ds] = 1
3d9b  wait                                    
3d9c  fstp    dword ptr [22h]                 ; [ds] = 1
3da0  nop                                     
3da1  wait                                    
3da2  les     bx,[bp+6h]                      
3da5  mov     byte ptr es:[bx+8h],0h          
3daa  wait                                    
3dab  fld     dword ptr [22h]                 ; [ds] = 1
3daf  nop                                     
3db0  wait                                    
3db1  les     bx,[bp+6h]                      
3db4  wait                                    
3db5  fstp    dword ptr es:[bx]               
3db8  wait                                    
3db9  fld     dword ptr [2Eh]                 ; [ds] = 1.316E-08
3dbd  wait                                    
3dbe  fld     dword ptr [22h]                 ; [ds] = 1
3dc2  nop                                     
3dc3  wait                                    
3dc4  call far sub_0275                       
3dc9  jb      3DCEh                           
3dcb  jmp     3DD9h                           
3dce  les     bx,[bp+6h]                      
3dd1  mov     byte ptr es:[bx+11h],1h         
3dd6  jmp     3DE1h                           
3dd9  les     bx,[bp+6h]                      
3ddc  mov     byte ptr es:[bx+11h],0h         
3de1  mov     al,[26h]                        
3de4  cbw                                     
3de5  cmp     ax,0h                           
3de8  je      3DEDh                           
3dea  jmp     3E6Fh                           
3ded  wait                                    
3dee  fld     dword ptr [3F8h]                ; [ds] = 2.6E-09
3df2  wait                                    
3df3  fld     dword ptr [22h]                 ; [ds] = 1
3df7  nop                                     
3df8  wait                                    
3df9  call far sub_0275                       
3dfe  ja      3E03h                           
3e00  jmp     3E0Eh                           
3e03  les     bx,[bp+6h]                      
3e06  mov     byte ptr es:[bx+9h],4h          
3e0b  jmp     3E6Ch                           
3e0e  mov     al,[2Ch]                        
3e11  cbw                                     
3e12  cmp     ax,0h                           
3e15  je      3E1Ah                           
3e17  jmp     3E2Eh                           
3e1a  wait                                    
3e1b  fld     dword ptr [3F8h]                ; [ds] = 2.6E-09
3e1f  wait                                    
3e20  fstp    dword ptr [28h]                 ; [ds] = 1
3e24  nop                                     
3e25  wait                                    
3e26  mov     byte ptr [2Ch],1h               
3e2b  jmp     3E6Ch                           
3e2e  wait                                    
3e2f  fld     dword ptr [28h]                 ; [ds] = 1
3e33  wait                                    
3e34  fld     qword ptr [3FCh]                ; [ds] = 6.57E-10
3e38  wait                                    
3e39  fxch    st(0),st(1)                     
3e3b  call far sub_0275                       
3e40  jb      3E45h                           
3e42  jmp     3E50h                           
3e45  les     bx,[bp+6h]                      
3e48  mov     byte ptr es:[bx+9h],1h          
3e4d  jmp     3E6Ch                           
3e50  wait                                    
3e51  fld     dword ptr [28h]                 ; [ds] = 1
3e55  wait                                    
3e56  fld     dword ptr [3F0h]                ; [ds] = 1.1
3e5a  wait                                    
3e5b  fdivp   st(1)                           
3e5d  wait                                    
3e5e  fstp    dword ptr [28h]                 ; [ds] = 1
3e62  nop                                     
3e63  wait                                    
3e64  les     bx,[bp+6h]                      
3e67  mov     byte ptr es:[bx+9h],2h          
3e6c  jmp     3E88h                           
3e6f  les     bx,[bp+6h]                      
3e72  mov     byte ptr es:[bx+9h],0h          
3e77  wait                                    
3e78  fld     dword ptr [3F4h]                ; [ds] = 1
3e7c  wait                                    
3e7d  fstp    dword ptr [28h]                 ; [ds] = 1
3e81  nop                                     
3e82  wait                                    
3e83  mov     byte ptr [2Ch],0h               
3e88  les     bx,[bp+6h]                      
3e8b  wait                                    
3e8c  fld     dword ptr [28h]                 ; [ds] = 1
3e90  wait                                    
3e91  fstp    dword ptr es:[bx+4h]            
3e95  nop                                     
3e96  wait                                    
3e97  les     bx,[bp+6h]                      
3e9a  mov     byte ptr es:[bx+0Ah],1h         
3e9f  les     bx,[bp+6h]                      
3ea2  mov     byte ptr es:[bx+0Bh],1h         
3ea7  les     bx,[bp+6h]                      
3eaa  mov     byte ptr es:[bx+0Ch],0h         
3eaf  les     bx,[bp+6h]                      
3eb2  mov     byte ptr es:[bx+0Dh],0h         
3eb7  les     bx,[bp+6h]                      
3eba  mov     byte ptr es:[bx+0Eh],0h         
3ebf  les     bx,[bp+6h]                      
3ec2  mov     byte ptr es:[bx+10h],0h         
3ec7  les     bx,[bp+6h]                      
3eca  mov     byte ptr es:[bx+12h],0h         
3ecf  les     bx,[bp+6h]                      
3ed2  mov     byte ptr es:[bx+13h],0h         
3ed7  les     bx,[bp+6h]                      
3eda  mov     byte ptr es:[bx+14h],0h         
3edf  les     bx,[bp+6h]                      
3ee2  mov     byte ptr es:[bx+15h],0h         
3ee7  les     bx,[bp+6h]                      
3eea  mov     byte ptr es:[bx+16h],0h         
3eef  les     bx,[bp+6h]                      
3ef2  mov     byte ptr es:[bx+17h],0h         
3ef7  les     bx,[bp+6h]                      
3efa  mov     byte ptr es:[bx+18h],0h         
3eff  les     bx,[bp+6h]                      
3f02  mov     byte ptr es:[bx+19h],0h         
3f07  les     bx,[bp+6h]                      
3f0a  mov     byte ptr es:[bx+1Ah],0h         
3f0f  les     bx,[bp+6h]                      
3f12  mov     byte ptr es:[bx+1Ch],0h         
3f17  les     bx,[bp+6h]                      
3f1a  mov     byte ptr es:[bx+1Dh],0h         
3f1f  les     bx,[bp+6h]                      
3f22  mov     byte ptr es:[bx+1Eh],0h         
3f27  les     bx,[bp+6h]                      
3f2a  mov     byte ptr es:[bx+1Fh],0h         
3f2f  les     bx,[bp+6h]                      
3f32  mov     word ptr es:[bx+20h],7h         
3f38  mov     word ptr es:[bx+22h],0h         
3f3e  les     bx,[bp+6h]                      
3f41  mov     ax,[36h]                        
3f44  mov     dx,[38h]                        
3f48  or      es:[bx+20h],ax                  
3f4c  or      es:[bx+22h],dx                  
3f50  mov     al,[3Ah]                        
3f53  les     bx,[bp+6h]                      
3f56  mov     es:[bx+25h],al                  
3f5a  mov     al,[3Bh]                        
3f5d  les     bx,[bp+6h]                      
3f60  mov     es:[bx+26h],al                  
3f64  mov     word ptr [36h],0h               
3f6a  mov     word ptr [38h],0h               
3f70  pop     ds                              
3f71  pop     di                              
3f72  pop     si                              
3f73  leave                                   
3f74  retf                                    
3f75  add     [bx+si],al                      

; ===== FE_READ_STATUS_TIGA =====
3f76  mov     ax,3CC9h                        ; segment seg2:0000
3f79  enter   2h,0h                           
3f7d  push    si                              
3f7e  push    di                              
3f7f  push    ds                              
3f80  mov     ds,ax                           
3f82  pop     ds                              
3f83  pop     di                              
3f84  pop     si                              
3f85  leave                                   
3f86  retf    4h                              
3f89  add     [bx+si],al                      

; ----- sub_3f8a -----
3f8a  mov     ax,3F77h                        ; segment seg2:0000
3f8d  enter   2h,0h                           
3f91  push    si                              
3f92  push    di                              
3f93  push    ds                              
3f94  mov     ds,ax                           
3f96  push    83h                             
3f99  call far M007.M007_GETSTATE             ; DP_GSP
3f9e  cmp     ax,1h                           
3fa1  je      3FA6h                           
3fa3  jmp     3FABh                           
3fa6  call far TIGASEM.REQUESTSYSTEMCONFIGTIGA
3fab  pop     ds                              
3fac  pop     di                              
3fad  pop     si                              
3fae  leave                                   
3faf  retf                                    

; ----- sub_3fb0 -----
3fb0  mov     ax,3F8Bh                        ; segment seg2:0000
3fb3  enter   2h,0h                           
3fb7  push    si                              
3fb8  push    di                              
3fb9  push    ds                              
3fba  mov     ds,ax                           
3fbc  push    83h                             
3fbf  call far M007.M007_GETSTATE             ; DP_GSP
3fc4  cmp     ax,1h                           
3fc7  je      3FCCh                           
3fc9  jmp     3FD7h                           
3fcc  push    word ptr [bp+8h]                
3fcf  push    word ptr [bp+6h]                
3fd2  call far TIGASEM.SAVESYSTEMCONFIGDATATIGA
3fd7  pop     ds                              
3fd8  pop     di                              
3fd9  pop     si                              
3fda  leave                                   
3fdb  retf                                    

; ----- sub_3fdc -----
3fdc  mov     ax,3FB1h                        ; segment seg2:0000
3fdf  enter   2h,0h                           
3fe3  push    si                              
3fe4  push    di                              
3fe5  push    ds                              
3fe6  mov     ds,ax                           
3fe8  push    83h                             
3feb  call far M007.M007_GETSTATE             ; DP_GSP
3ff0  cmp     ax,1h                           
3ff3  je      3FF8h                           
3ff5  jmp     400Bh                           
3ff8  push    word ptr [bp+8h]                
3ffb  push    word ptr [bp+6h]                
3ffe  call far TIGASEM.GETSYSTEMCONFIGDATATIGA
4003  mov     al,0h                           
4005  jmp     4010h                           
4008  jmp     4010h                           
400b  mov     al,1h                           
400d  jmp     4010h                           
4010  pop     ds                              
4011  pop     di                              
4012  pop     si                              
4013  leave                                   
4014  retf                                    
4015  add     [bx+si],al                      

; ----- sub_4016 -----
4016  mov     ax,3FDDh                        ; segment seg2:0000
4019  enter   2h,0h                           
401d  push    si                              
401e  push    di                              
401f  push    ds                              
4020  mov     ds,ax                           
4022  push    83h                             
4025  call far M007.M007_GETSTATE             ; DP_GSP
402a  cmp     ax,1h                           
402d  je      4032h                           
402f  jmp     403Dh                           
4032  call far TIGASEM.GETSYSTEMCONFIGSTATUSTIGA
4037  jmp     4043h                           
403a  jmp     4043h                           
403d  mov     ax,4h                           
4040  jmp     4043h                           
4043  pop     ds                              
4044  pop     di                              
4045  pop     si                              
4046  leave                                   
4047  retf                                    

; ----- sub_4048 -----
4048  mov     ax,4017h                        ; segment seg2:0000
404b  enter   2h,0h                           
404f  push    si                              
4050  push    di                              
4051  push    ds                              
4052  mov     ds,ax                           
4054  push    83h                             
4057  call far M007.M007_GETSTATE             ; DP_GSP
405c  cmp     ax,1h                           
405f  je      4064h                           
4061  jmp     406Ch                           
4064  call far TIGASEM.GETCOMMSPSUSTATUS      
4069  jmp     4082h                           
406c  mov     word ptr [36h],8h               
4072  mov     word ptr [38h],0h               
4078  mov     byte ptr [3Ah],0h               
407d  mov     byte ptr [3Bh],0h               
4082  pop     ds                              
4083  pop     di                              
4084  pop     si                              
4085  leave                                   
4086  retf                                    
4087  add     [bx+si],al                      

; ----- sub_4088 -----
4088  mov     ax,4049h                        ; segment seg2:0000
408b  enter   2h,0h                           
408f  push    si                              
4090  push    di                              
4091  push    ds                              
4092  mov     ds,ax                           
4094  pop     ds                              
4095  pop     di                              
4096  pop     si                              
4097  leave                                   
4098  retf                                    
4099  add     [bx+si],al                      

; ----- sub_409a -----
409a  mov     ax,4089h                        ; segment seg2:0000
409d  enter   2h,0h                           
40a1  push    si                              
40a2  push    di                              
40a3  push    ds                              
40a4  mov     ds,ax                           
40a6  mov     ax,0h                           
40a9  jmp     40ACh                           
40ac  pop     ds                              
40ad  pop     di                              
40ae  pop     si                              
40af  leave                                   
40b0  retf                                    
40b1  add     [bx+si],al                      

; ----- sub_40b2 -----
40b2  mov     ax,409Bh                        ; segment seg2:0000
40b5  enter   6h,0h                           
40b9  push    si                              
40ba  push    di                              
40bb  push    ds                              
40bc  mov     ds,ax                           
40be  push    3E3Eh                           ; segment seg1:0000
40c1  push    4190h                           
40c4  push    0h                              
40c6  call far KERNEL._LCREAT                 ; "C:\leo\data.dgl"
40cb  mov     [bp-4h],ax                      
40ce  cmp     word ptr [bp-4h],0h             
40d2  jge     40D7h                           
40d4  jmp     4113h                           
40d7  push    word ptr [bp-4h]                
40da  mov     ax,547h                         
40dd  mov     cx,[bp+6h]                      
40e0  mov     dx,[bp+8h]                      
40e3  add     cx,ax                           
40e5  push    dx                              
40e6  push    cx                              
40e7  push    2h                              
40e9  call far KERNEL._LWRITE                 
40ee  mov     [bp-6h],ax                      
40f1  push    word ptr [bp-4h]                
40f4  mov     ax,508h                         
40f7  mov     cx,[bp+6h]                      
40fa  mov     dx,[bp+8h]                      
40fd  add     cx,ax                           
40ff  push    dx                              
4100  push    cx                              
4101  push    3Fh                             
4103  call far KERNEL._LWRITE                 
4108  mov     [bp-6h],ax                      
410b  push    word ptr [bp-4h]                
410e  call far KERNEL._LCLOSE                 
4113  pop     ds                              
4114  pop     di                              
4115  pop     si                              
4116  leave                                   
4117  retf                                    

; ----- sub_4118 -----
4118  mov     ax,40B3h                        ; segment seg2:0000
411b  enter   2h,0h                           
411f  push    si                              
4120  push    di                              
4121  push    ds                              
4122  mov     ds,ax                           
4124  mov     ax,0h                           
4127  jmp     412Ah                           
412a  pop     ds                              
412b  pop     di                              
412c  pop     si                              
412d  leave                                   
412e  retf                                    
412f  add     [bx+si],al                      

; ----- sub_4130 -----
4130  mov     ax,4119h                        ; segment seg2:0000
4133  enter   4h,0h                           
4137  push    si                              
4138  push    di                              
4139  push    ds                              
413a  mov     ds,ax                           
413c  push    word ptr [bp+8h]                
413f  push    word ptr [bp+6h]                
4142  call far sub_462c                       
4147  add     sp,4h                           
414a  mov     word ptr [bp-4h],1h             
414f  jmp     416Ch                           
4152  mov     ax,507h                         
4155  mov     bx,[bp+6h]                      
4158  mov     cx,[bp+8h]                      
415b  add     bx,ax                           
415d  mov     ax,[bp-4h]                      
4160  add     bx,ax                           
4162  mov     es,cx                           
4164  mov     byte ptr es:[bx],0h             
4168  add     word ptr [bp-4h],1h             
416c  cmp     word ptr [bp-4h],40h            
4170  jge     4175h                           
4172  jmp     4152h                           
4175  push    word ptr [bp+8h]                
4178  push    word ptr [bp+6h]                
417b  call far sub_4afe                       
4180  add     sp,4h                           
4183  mov     al,0h                           
4185  jmp     4188h                           
4188  pop     ds                              
4189  pop     di                              
418a  pop     si                              
418b  leave                                   
418c  retf                                    
418d  add     [bx+si],al                      
418f  add     [bp+di+3Ah],al                  
4192  pop     sp                              
4193  insb                                    
4194  outsw   gs:                             
4196  pop     sp                              
4197  popa                                    
4199  je      41FCh                           
419b  insb                                    
419f  add     [bx+si],al                      

; ----- sub_41a0 -----
41a0  mov     ax,4131h                        ; segment seg2:0000
41a3  enter   2h,0h                           
41a7  push    si                              
41a8  push    di                              
41a9  push    ds                              
41aa  mov     ds,ax                           
41ac  push    54h                             
41ae  call far M007.M007_GETSTATE             ; DP_WDX_GATE_VALVE_MOTOR
41b3  jmp     41B6h                           
41b6  pop     ds                              
41b7  pop     di                              
41b8  pop     si                              
41b9  leave                                   
41ba  retf                                    
41bb  add     [bx+si],al                      

; ----- sub_41bc -----
41bc  mov     ax,41A1h                        ; segment seg2:0000
41bf  enter   4h,0h                           
41c3  push    si                              
41c4  push    di                              
41c5  push    ds                              
41c6  mov     ds,ax                           
41c8  push    3Ah                             
41ca  call far M007.M007_GETSTATE             ; DP_VACSTATUS
41cf  mov     [bp-4h],ax                      
41d2  push    3Ah                             
41d4  les     bx,[bp+6h]                      
41d7  mov     al,es:[bx+8h]                   
41db  and     ax,0FFh                         
41de  push    ax                              
41df  call far M007.M007_PUTSTATE             ; DP_VACSTATUS = 1287
41e4  les     bx,[bp+6h]                      
41e7  mov     al,es:[bx+8h]                   
41eb  and     ax,0FFh                         
41ee  cmp     [bp-4h],ax                      
41f1  jne     41F6h                           
41f3  jmp     41FBh                           
41f6  call far M500.CHANGEINVACSTATUS         
41fb  push    9Ch                             
41fe  les     bx,[bp+6h]                      
4201  push    word ptr es:[bx+2h]             
4205  push    word ptr es:[bx]                
4208  call far M007.M007_PUTVALUE             ; AP_SYSTEM_VAC
420d  push    47h                             
420f  les     bx,[bp+6h]                      
4212  mov     al,es:[bx+9h]                   
4216  and     ax,0FFh                         
4219  push    ax                              
421a  call far M007.M007_PUTSTATE             ; DP_COLUMN_PUMPING
421f  push    9Eh                             
4222  les     bx,[bp+6h]                      
4225  push    word ptr es:[bx+6h]             
4229  push    word ptr es:[bx+4h]             
422d  call far M007.M007_PUTVALUE             ; AP_COLUMN_VAC
4232  push    48h                             
4234  les     bx,[bp+6h]                      
4237  mov     al,es:[bx+0Ah]                  
423b  and     ax,0FFh                         
423e  push    ax                              
423f  call far M007.M007_PUTSTATE             ; DP_GUN_CHAMBER_VALVE
4244  push    49h                             
4246  les     bx,[bp+6h]                      
4249  mov     al,es:[bx+0Bh]                  
424d  and     ax,0FFh                         
4250  push    ax                              
4251  call far M007.M007_PUTSTATE             ; DP_COLUMN_CHAMBER_VALVE
4256  push    44h                             
4258  les     bx,[bp+6h]                      
425b  mov     al,es:[bx+0Ch]                  
425f  and     ax,0FFh                         
4262  push    ax                              
4263  call far M007.M007_PUTSTATE             ; DP_EDX_WINDOW
4268  push    4Fh                             
426a  les     bx,[bp+6h]                      
426d  mov     al,es:[bx+0Dh]                  
4271  and     ax,0FFh                         
4274  push    ax                              
4275  call far M007.M007_PUTSTATE             ; DP_GATE_VALVE
427a  push    45h                             
427c  les     bx,[bp+6h]                      
427f  mov     al,es:[bx+0Eh]                  
4283  and     ax,0FFh                         
4286  push    ax                              
4287  call far M007.M007_PUTSTATE             ; DP_AIRLOCK_IS
428c  push    46h                             
428e  call far M007.M007_GETSTATE             ; DP_COLUMN_PUMP
4293  cmp     ax,1h                           
4296  je      429Bh                           
4298  jmp     42D9h                           
429b  les     bx,[bp+6h]                      
429e  mov     al,es:[bx+0Ah]                  
42a2  and     ax,0FFh                         
42a5  cmp     ax,0h                           
42a8  je      42ADh                           
42aa  jmp     42CCh                           
42ad  les     bx,[bp+6h]                      
42b0  mov     al,es:[bx+0Bh]                  
42b4  and     ax,0FFh                         
42b7  cmp     ax,0h                           
42ba  je      42BFh                           
42bc  jmp     42CCh                           
42bf  push    0A9h                            
42c2  push    1h                              
42c4  call far M007.M007_PUTSTATE             ; DP_COLUMN_ISOLATED = 1
42c9  jmp     42D6h                           
42cc  push    0A9h                            
42cf  push    0h                              
42d1  call far M007.M007_PUTSTATE             ; DP_COLUMN_ISOLATED = 0
42d6  jmp     42E3h                           
42d9  push    0A9h                            
42dc  push    0h                              
42de  call far M007.M007_PUTSTATE             ; DP_COLUMN_ISOLATED = 0
42e3  pop     ds                              
42e4  pop     di                              
42e5  pop     si                              
42e6  leave                                   
42e7  retf                                    

; ----- sub_42e8 -----
42e8  mov     ax,41BDh                        ; segment seg2:0000
42eb  enter   2h,0h                           
42ef  push    si                              
42f0  push    di                              
42f1  push    ds                              
42f2  mov     ds,ax                           
42f4  push    3Bh                             
42f6  les     bx,[bp+6h]                      
42f9  mov     al,es:[bx]                      
42fc  and     ax,0FFh                         
42ff  push    ax                              
4300  call far M007.M007_PUTSTATE             ; DP_VENT_INHIBITED
4305  push    3Ch                             
4307  les     bx,[bp+6h]                      
430a  mov     al,es:[bx+1h]                   
430e  and     ax,0FFh                         
4311  push    ax                              
4312  call far M007.M007_PUTSTATE             ; DP_EDX_ENABLE
4317  push    43h                             
4319  les     bx,[bp+6h]                      
431c  mov     al,es:[bx+4h]                   
4320  and     ax,0FFh                         
4323  push    ax                              
4324  call far M007.M007_PUTSTATE             ; DP_VIEWING_WINDOW_IS
4329  push    4Ah                             
432b  les     bx,[bp+6h]                      
432e  mov     al,es:[bx+5h]                   
4332  and     ax,0FFh                         
4335  push    ax                              
4336  call far M007.M007_PUTSTATE             ; DP_VENT_INVALID
433b  push    86h                             
433e  les     bx,[bp+6h]                      
4341  mov     al,es:[bx+0Bh]                  
4345  and     ax,0FFh                         
4348  push    ax                              
4349  call far M007.M007_PUTSTATE             ; DP_TILTED
434e  les     bx,[bp+6h]                      
4351  mov     al,es:[bx+2h]                   
4355  and     ax,0FFh                         
4358  cmp     ax,1h                           
435b  je      4360h                           
435d  jmp     438Ah                           
4360  push    3Dh                             
4362  call far M007.M007_GETSTATE             ; DP_CHAMBER_LEAK
4367  cmp     ax,0h                           
436a  je      436Fh                           
436c  jmp     4387h                           
436f  push    3Dh                             
4371  push    1h                              
4373  call far M007.M007_PUTSTATE             ; DP_CHAMBER_LEAK = 1
4378  push    1C7h                            
437b  push    0h                              
437d  push    0h                              
437f  push    1000h                           
4382  call far M007.UIF_LOG                   
4387  jmp     4393h                           
438a  push    3Dh                             
438c  push    0h                              
438e  call far M007.M007_PUTSTATE             ; DP_CHAMBER_LEAK = 0
4393  les     bx,[bp+6h]                      
4396  mov     al,es:[bx+3h]                   
439a  and     ax,0FFh                         
439d  cmp     ax,1h                           
43a0  je      43A5h                           
43a2  jmp     43CFh                           
43a5  push    3Eh                             
43a7  call far M007.M007_GETSTATE             ; DP_PENNING_FAIL
43ac  cmp     ax,0h                           
43af  je      43B4h                           
43b1  jmp     43CCh                           
43b4  push    3Eh                             
43b6  push    1h                              
43b8  call far M007.M007_PUTSTATE             ; DP_PENNING_FAIL = 1
43bd  push    1C8h                            
43c0  push    0h                              
43c2  push    0h                              
43c4  push    1000h                           
43c7  call far M007.UIF_LOG                   
43cc  jmp     43D8h                           
43cf  push    3Eh                             
43d1  push    0h                              
43d3  call far M007.M007_PUTSTATE             ; DP_PENNING_FAIL = 0
43d8  les     bx,[bp+6h]                      
43db  mov     al,es:[bx+6h]                   
43df  and     ax,0FFh                         
43e2  cmp     ax,1h                           
43e5  je      43EAh                           
43e7  jmp     4414h                           
43ea  push    4Bh                             
43ec  call far M007.M007_GETSTATE             ; DP_GUN_VALVE_POSITION
43f1  cmp     ax,0h                           
43f4  je      43F9h                           
43f6  jmp     4411h                           
43f9  push    4Bh                             
43fb  push    1h                              
43fd  call far M007.M007_PUTSTATE             ; DP_GUN_VALVE_POSITION = 1
4402  push    1F6h                            
4405  push    0h                              
4407  push    0h                              
4409  push    1800h                           
440c  call far M007.UIF_LOG                   
4411  jmp     441Dh                           
4414  push    4Bh                             
4416  push    0h                              
4418  call far M007.M007_PUTSTATE             ; DP_GUN_VALVE_POSITION = 0
441d  les     bx,[bp+6h]                      
4420  mov     al,es:[bx+7h]                   
4424  and     ax,0FFh                         
4427  cmp     ax,1h                           
442a  je      442Fh                           
442c  jmp     4459h                           
442f  push    4Ch                             
4431  call far M007.M007_GETSTATE             ; DP_CHAMBER_VALVE_POSITION
4436  cmp     ax,0h                           
4439  je      443Eh                           
443b  jmp     4456h                           
443e  push    4Ch                             
4440  push    1h                              
4442  call far M007.M007_PUTSTATE             ; DP_CHAMBER_VALVE_POSITION = 1
4447  push    1F7h                            
444a  push    0h                              
444c  push    0h                              
444e  push    1800h                           
4451  call far M007.UIF_LOG                   
4456  jmp     4462h                           
4459  push    4Ch                             
445b  push    0h                              
445d  call far M007.M007_PUTSTATE             ; DP_CHAMBER_VALVE_POSITION = 0
4462  les     bx,[bp+6h]                      
4465  mov     al,es:[bx+8h]                   
4469  and     ax,0FFh                         
446c  cmp     ax,1h                           
446f  je      4474h                           
4471  jmp     449Eh                           
4474  push    4Dh                             
4476  call far M007.M007_GETSTATE             ; DP_EDX_WINDOW_POSITION
447b  cmp     ax,0h                           
447e  je      4483h                           
4480  jmp     449Bh                           
4483  push    4Dh                             
4485  push    1h                              
4487  call far M007.M007_PUTSTATE             ; DP_EDX_WINDOW_POSITION = 1
448c  push    1F8h                            
448f  push    0h                              
4491  push    0h                              
4493  push    1800h                           
4496  call far M007.UIF_LOG                   
449b  jmp     44A7h                           
449e  push    4Dh                             
44a0  push    0h                              
44a2  call far M007.M007_PUTSTATE             ; DP_EDX_WINDOW_POSITION = 0
44a7  les     bx,[bp+6h]                      
44aa  mov     al,es:[bx+9h]                   
44ae  and     ax,0FFh                         
44b1  cmp     ax,1h                           
44b4  je      44B9h                           
44b6  jmp     44E3h                           
44b9  push    51h                             
44bb  call far M007.M007_GETSTATE             ; DP_GATE_VALVE_POSITION
44c0  cmp     ax,0h                           
44c3  je      44C8h                           
44c5  jmp     44E0h                           
44c8  push    51h                             
44ca  push    1h                              
44cc  call far M007.M007_PUTSTATE             ; DP_GATE_VALVE_POSITION = 1
44d1  push    1FAh                            
44d4  push    0h                              
44d6  push    0h                              
44d8  push    1800h                           
44db  call far M007.UIF_LOG                   
44e0  jmp     44ECh                           
44e3  push    51h                             
44e5  push    0h                              
44e7  call far M007.M007_PUTSTATE             ; DP_GATE_VALVE_POSITION = 0
44ec  les     bx,[bp+6h]                      
44ef  mov     al,es:[bx+0Ah]                  
44f3  and     ax,0FFh                         
44f6  cmp     ax,1h                           
44f9  je      44FEh                           
44fb  jmp     4528h                           
44fe  push    4Eh                             
4500  call far M007.M007_GETSTATE             ; DP_AIRLOCK_POSITION
4505  cmp     ax,0h                           
4508  je      450Dh                           
450a  jmp     4525h                           
450d  push    4Eh                             
450f  push    1h                              
4511  call far M007.M007_PUTSTATE             ; DP_AIRLOCK_POSITION = 1
4516  push    1F9h                            
4519  push    0h                              
451b  push    0h                              
451d  push    1800h                           
4520  call far M007.UIF_LOG                   
4525  jmp     4531h                           
4528  push    4Eh                             
452a  push    0h                              
452c  call far M007.M007_PUTSTATE             ; DP_AIRLOCK_POSITION = 0
4531  pop     ds                              
4532  pop     di                              
4533  pop     si                              
4534  leave                                   
4535  retf                                    

; ----- sub_4536 -----
4536  mov     ax,42E9h                        ; segment seg2:0000
4539  enter   2h,0h                           
453d  push    si                              
453e  push    di                              
453f  push    ds                              
4540  mov     ds,ax                           
4542  push    5Eh                             
4544  les     bx,[bp+6h]                      
4547  mov     al,es:[bx]                      
454a  and     ax,0FFh                         
454d  push    ax                              
454e  call far M007.M007_PUTSTATE             ; DP_VAC_EHT_INHIBIT
4553  push    5Fh                             
4555  les     bx,[bp+6h]                      
4558  mov     al,es:[bx+1h]                   
455c  and     ax,0FFh                         
455f  push    ax                              
4560  call far M007.M007_PUTSTATE             ; DP_VAC_ACC_VOLT_INHIBIT
4565  push    61h                             
4567  les     bx,[bp+6h]                      
456a  mov     al,es:[bx+2h]                   
456e  and     ax,0FFh                         
4571  push    ax                              
4572  call far M007.M007_PUTSTATE             ; DP_VAC_SCINT_INHIBIT
4577  push    60h                             
4579  les     bx,[bp+6h]                      
457c  mov     al,es:[bx+3h]                   
4580  and     ax,0FFh                         
4583  push    ax                              
4584  call far M007.M007_PUTSTATE             ; DP_VAC_PM_INHIBIT
4589  pop     ds                              
458a  pop     di                              
458b  pop     si                              
458c  leave                                   
458d  retf                                    

; ----- sub_458e -----
458e  mov     ax,4537h                        ; segment seg2:0000
4591  enter   2h,0h                           
4595  push    si                              
4596  push    di                              
4597  push    ds                              
4598  mov     ds,ax                           
459a  mov     al,[bp+6h]                      
459d  and     ax,0FFh                         
45a0  jmp     45CDh                           
45a3  push    1B6h                            
45a6  push    0h                              
45a8  push    0h                              
45aa  push    1000h                           
45ad  call far M007.UIF_LOG                   
45b2  jmp     45E0h                           
45b5  push    1B7h                            
45b8  push    0h                              
45ba  push    0h                              
45bc  push    1000h                           
45bf  call far M007.UIF_LOG                   
45c4  jmp     45E0h                           
45c7  jmp     45E0h                           
45ca  jmp     45E0h                           
45cd  cmp     ax,1h                           
45d0  jne     45D5h                           
45d2  jmp     45A3h                           
45d5  cmp     ax,2h                           
45d8  jne     45DDh                           
45da  jmp     45B5h                           
45dd  jmp     45C7h                           
45e0  mov     al,[bp+8h]                      
45e3  and     ax,0FFh                         
45e6  jmp     4613h                           
45e9  push    1B8h                            
45ec  push    0h                              
45ee  push    0h                              
45f0  push    1000h                           
45f3  call far M007.UIF_LOG                   
45f8  jmp     4626h                           
45fb  push    1B9h                            
45fe  push    0h                              
4600  push    0h                              
4602  push    1000h                           
4605  call far M007.UIF_LOG                   
460a  jmp     4626h                           
460d  jmp     4626h                           
4610  jmp     4626h                           
4613  cmp     ax,1h                           
4616  jne     461Bh                           
4618  jmp     45E9h                           
461b  cmp     ax,2h                           
461e  jne     4623h                           
4620  jmp     45FBh                           
4623  jmp     460Dh                           
4626  pop     ds                              
4627  pop     di                              
4628  pop     si                              
4629  leave                                   
462a  retf                                    
462b  add     [bx+si],al                      

; ----- sub_462c -----
462c  mov     ax,458Fh                        ; segment seg2:0000
462f  enter   106h,0h                         
4633  push    si                              
4634  push    di                              
4635  push    ds                              
4636  mov     ds,ax                           
4638  mov     byte ptr [bp-106h],1h           
463d  lea     ax,[bp-104h]                    
4641  mov     dx,ss                           
4643  push    dx                              
4644  push    ax                              
4645  call far M007.GETLEOPATH                
464a  push    dx                              
464b  push    ax                              
464c  call far KERNEL.LSTRCPY                 
4651  lea     ax,[bp-104h]                    
4655  mov     dx,ss                           
4657  push    dx                              
4658  push    ax                              
4659  push    417Eh                           ; segment seg1:0000
465c  push    4F38h                           
465f  call far KERNEL.LSTRCAT                 ; "data.vac"
4664  lea     ax,[bp-104h]                    
4668  mov     dx,ss                           
466a  push    dx                              
466b  push    ax                              
466c  push    0h                              
466e  call far KERNEL._LOPEN                  
4673  mov     [bp-4h],ax                      
4676  cmp     word ptr [bp-4h],0h             
467a  jge     467Fh                           
467c  jmp     469Ch                           
467f  push    word ptr [bp+8h]                
4682  push    word ptr [bp+6h]                
4685  push    word ptr [bp-4h]                
4688  call far sub_46a8                       
468d  add     sp,6h                           
4690  mov     [bp-106h],al                    
4694  push    word ptr [bp-4h]                
4697  call far KERNEL._LCLOSE                 
469c  mov     al,[bp-106h]                    
46a0  jmp     46A3h                           
46a3  pop     ds                              
46a4  pop     di                              
46a5  pop     si                              
46a6  leave                                   
46a7  retf                                    

; ----- sub_46a8 -----
46a8  mov     ax,462Dh                        ; segment seg2:0000
46ab  enter   4h,0h                           
46af  push    si                              
46b0  push    di                              
46b1  push    ds                              
46b2  mov     ds,ax                           
46b4  push    word ptr [bp+6h]                
46b7  mov     ax,[bp+8h]                      
46ba  mov     dx,[bp+0Ah]                     
46bd  push    dx                              
46be  push    ax                              
46bf  push    5h                              
46c1  call far KERNEL._LREAD                  
46c6  mov     [bp-4h],ax                      
46c9  mov     ax,[bp-4h]                      
46cc  cmp     ax,5h                           
46cf  jne     46D4h                           
46d1  jmp     46D9h                           
46d4  mov     al,1h                           
46d6  jmp     4830h                           
46d9  push    word ptr [bp+6h]                
46dc  mov     ax,5h                           
46df  mov     cx,[bp+8h]                      
46e2  mov     dx,[bp+0Ah]                     
46e5  add     cx,ax                           
46e7  push    dx                              
46e8  push    cx                              
46e9  push    0Ch                             
46eb  call far KERNEL._LREAD                  
46f0  mov     [bp-4h],ax                      
46f3  mov     ax,[bp-4h]                      
46f6  cmp     ax,0Ch                          
46f9  jne     46FEh                           
46fb  jmp     4703h                           
46fe  mov     al,1h                           
4700  jmp     4830h                           
4703  push    word ptr [bp+6h]                
4706  mov     ax,11h                          
4709  mov     cx,[bp+8h]                      
470c  mov     dx,[bp+0Ah]                     
470f  add     cx,ax                           
4711  push    dx                              
4712  push    cx                              
4713  push    16h                             
4715  call far KERNEL._LREAD                  
471a  mov     [bp-4h],ax                      
471d  mov     ax,[bp-4h]                      
4720  cmp     ax,16h                          
4723  jne     4728h                           
4725  jmp     472Dh                           
4728  mov     al,1h                           
472a  jmp     4830h                           
472d  push    word ptr [bp+6h]                
4730  mov     ax,27h                          
4733  mov     cx,[bp+8h]                      
4736  mov     dx,[bp+0Ah]                     
4739  add     cx,ax                           
473b  push    dx                              
473c  push    cx                              
473d  push    3A8h                            
4740  call far KERNEL._LREAD                  
4745  mov     [bp-4h],ax                      
4748  mov     ax,[bp-4h]                      
474b  cmp     ax,3A8h                         
474e  jne     4753h                           
4750  jmp     4758h                           
4753  mov     al,1h                           
4755  jmp     4830h                           
4758  push    word ptr [bp+6h]                
475b  mov     ax,3CFh                         
475e  mov     cx,[bp+8h]                      
4761  mov     dx,[bp+0Ah]                     
4764  add     cx,ax                           
4766  push    dx                              
4767  push    cx                              
4768  push    1DBh                            
476b  call far KERNEL._LREAD                  
4770  mov     [bp-4h],ax                      
4773  mov     ax,[bp-4h]                      
4776  cmp     ax,1DBh                         
4779  jne     477Eh                           
477b  jmp     4783h                           
477e  mov     al,1h                           
4780  jmp     4830h                           
4783  push    word ptr [bp+6h]                
4786  mov     ax,5AAh                         
4789  mov     cx,[bp+8h]                      
478c  mov     dx,[bp+0Ah]                     
478f  add     cx,ax                           
4791  push    dx                              
4792  push    cx                              
4793  push    1h                              
4795  call far KERNEL._LREAD                  
479a  mov     [bp-4h],ax                      
479d  mov     ax,[bp-4h]                      
47a0  cmp     ax,1h                           
47a3  jne     47A8h                           
47a5  jmp     47ADh                           
47a8  mov     al,1h                           
47aa  jmp     4830h                           
47ad  push    word ptr [bp+6h]                
47b0  mov     ax,5ABh                         
47b3  mov     cx,[bp+8h]                      
47b6  mov     dx,[bp+0Ah]                     
47b9  add     cx,ax                           
47bb  push    dx                              
47bc  push    cx                              
47bd  push    1h                              
47bf  call far KERNEL._LREAD                  
47c4  mov     [bp-4h],ax                      
47c7  mov     ax,[bp-4h]                      
47ca  cmp     ax,1h                           
47cd  jne     47D2h                           
47cf  jmp     47D7h                           
47d2  mov     al,1h                           
47d4  jmp     4830h                           
47d7  push    word ptr [bp+6h]                
47da  mov     ax,5ACh                         
47dd  mov     cx,[bp+8h]                      
47e0  mov     dx,[bp+0Ah]                     
47e3  add     cx,ax                           
47e5  push    dx                              
47e6  push    cx                              
47e7  push    5h                              
47e9  call far KERNEL._LREAD                  
47ee  mov     [bp-4h],ax                      
47f1  mov     ax,[bp-4h]                      
47f4  cmp     ax,5h                           
47f7  jne     47FCh                           
47f9  jmp     4801h                           
47fc  mov     al,1h                           
47fe  jmp     4830h                           
4801  push    word ptr [bp+6h]                
4804  mov     ax,5B1h                         
4807  mov     cx,[bp+8h]                      
480a  mov     dx,[bp+0Ah]                     
480d  add     cx,ax                           
480f  push    dx                              
4810  push    cx                              
4811  push    6Eh                             
4813  call far KERNEL._LREAD                  
4818  mov     [bp-4h],ax                      
481b  mov     ax,[bp-4h]                      
481e  cmp     ax,6Eh                          
4821  jne     4826h                           
4823  jmp     482Bh                           
4826  mov     al,1h                           
4828  jmp     4830h                           
482b  mov     al,0h                           
482d  jmp     4830h                           
4830  pop     ds                              
4831  pop     di                              
4832  pop     si                              
4833  leave                                   
4834  retf                                    
4835  add     [bx+si],al                      

; ----- sub_4836 -----
4836  mov     ax,46A9h                        ; segment seg2:0000
4839  enter   106h,0h                         
483d  push    si                              
483e  push    di                              
483f  push    ds                              
4840  mov     ds,ax                           
4842  mov     byte ptr [bp-106h],1h           
4847  lea     ax,[bp-104h]                    
484b  mov     dx,ss                           
484d  push    dx                              
484e  push    ax                              
484f  call far M007.GETLEOPATH                
4854  push    dx                              
4855  push    ax                              
4856  call far KERNEL.LSTRCPY                 
485b  lea     ax,[bp-104h]                    
485f  mov     dx,ss                           
4861  push    dx                              
4862  push    ax                              
4863  push    468Bh                           ; segment seg1:0000
4866  push    4F42h                           
4869  call far KERNEL.LSTRCAT                 ; "default.vac"
486e  lea     ax,[bp-104h]                    
4872  mov     dx,ss                           
4874  push    dx                              
4875  push    ax                              
4876  push    0h                              
4878  call far KERNEL._LOPEN                  
487d  mov     [bp-4h],ax                      
4880  cmp     word ptr [bp-4h],0h             
4884  jge     4889h                           
4886  jmp     48A6h                           
4889  push    word ptr [bp+8h]                
488c  push    word ptr [bp+6h]                
488f  push    word ptr [bp-4h]                
4892  call far sub_46a8                       
4897  add     sp,6h                           
489a  mov     [bp-106h],al                    
489e  push    word ptr [bp-4h]                
48a1  call far KERNEL._LCLOSE                 
48a6  mov     al,[bp-106h]                    
48aa  jmp     48ADh                           
48ad  pop     ds                              
48ae  pop     di                              
48af  pop     si                              
48b0  leave                                   
48b1  retf                                    

; ----- sub_48b2 -----
48b2  mov     ax,4837h                        ; segment seg2:0000
48b5  enter   106h,0h                         
48b9  push    si                              
48ba  push    di                              
48bb  push    ds                              
48bc  mov     ds,ax                           
48be  lea     ax,[bp-104h]                    
48c2  mov     dx,ss                           
48c4  push    dx                              
48c5  push    ax                              
48c6  call far M007.GETLEOPATH                
48cb  push    dx                              
48cc  push    ax                              
48cd  call far KERNEL.LSTRCPY                 
48d2  lea     ax,[bp-104h]                    
48d6  mov     dx,ss                           
48d8  push    dx                              
48d9  push    ax                              
48da  push    4895h                           ; segment seg1:0000
48dd  push    4F38h                           
48e0  call far KERNEL.LSTRCAT                 ; "data.vac"
48e5  lea     ax,[bp-104h]                    
48e9  mov     dx,ss                           
48eb  push    dx                              
48ec  push    ax                              
48ed  push    0h                              
48ef  call far KERNEL._LCREAT                 
48f4  mov     [bp-4h],ax                      
48f7  cmp     word ptr [bp-4h],0h             
48fb  jl      4900h                           
48fd  jmp     491Ah                           
4900  push    0h                              
4902  push    48DBh                           ; segment seg1:0000
4905  push    4F4Eh                           
4908  push    4903h                           ; segment seg1:0000
490b  push    4F68h                           
490e  push    30h                             
4910  call far USER.MESSAGEBOX                ; "Failed to write DATA.VAC"  "System Shutdown"
4915  mov     al,0h                           
4917  jmp     4AF8h                           
491a  push    word ptr [bp-4h]                
491d  mov     ax,[bp+6h]                      
4920  mov     dx,[bp+8h]                      
4923  push    dx                              
4924  push    ax                              
4925  push    5h                              
4927  call far KERNEL._LWRITE                 
492c  mov     [bp-106h],ax                    
4930  mov     ax,[bp-106h]                    
4934  cmp     ax,5h                           
4937  jne     493Ch                           
4939  jmp     4949h                           
493c  push    word ptr [bp-4h]                
493f  call far KERNEL._LCLOSE                 
4944  mov     al,0h                           
4946  jmp     4AF8h                           
4949  push    word ptr [bp-4h]                
494c  mov     ax,5h                           
494f  mov     cx,[bp+6h]                      
4952  mov     dx,[bp+8h]                      
4955  add     cx,ax                           
4957  push    dx                              
4958  push    cx                              
4959  push    0Ch                             
495b  call far KERNEL._LWRITE                 
4960  mov     [bp-106h],ax                    
4964  mov     ax,[bp-106h]                    
4968  cmp     ax,0Ch                          
496b  jne     4970h                           
496d  jmp     497Dh                           
4970  push    word ptr [bp-4h]                
4973  call far KERNEL._LCLOSE                 
4978  mov     al,0h                           
497a  jmp     4AF8h                           
497d  push    word ptr [bp-4h]                
4980  mov     ax,11h                          
4983  mov     cx,[bp+6h]                      
4986  mov     dx,[bp+8h]                      
4989  add     cx,ax                           
498b  push    dx                              
498c  push    cx                              
498d  push    16h                             
498f  call far KERNEL._LWRITE                 
4994  mov     [bp-106h],ax                    
4998  mov     ax,[bp-106h]                    
499c  cmp     ax,16h                          
499f  jne     49A4h                           
49a1  jmp     49B1h                           
49a4  push    word ptr [bp-4h]                
49a7  call far KERNEL._LCLOSE                 
49ac  mov     al,0h                           
49ae  jmp     4AF8h                           
49b1  push    word ptr [bp-4h]                
49b4  mov     ax,27h                          
49b7  mov     cx,[bp+6h]                      
49ba  mov     dx,[bp+8h]                      
49bd  add     cx,ax                           
49bf  push    dx                              
49c0  push    cx                              
49c1  push    3A8h                            
49c4  call far KERNEL._LWRITE                 
49c9  mov     [bp-106h],ax                    
49cd  mov     ax,[bp-106h]                    
49d1  cmp     ax,3A8h                         
49d4  jne     49D9h                           
49d6  jmp     49E6h                           
49d9  push    word ptr [bp-4h]                
49dc  call far KERNEL._LCLOSE                 
49e1  mov     al,0h                           
49e3  jmp     4AF8h                           
49e6  push    word ptr [bp-4h]                
49e9  mov     ax,3CFh                         
49ec  mov     cx,[bp+6h]                      
49ef  mov     dx,[bp+8h]                      
49f2  add     cx,ax                           
49f4  push    dx                              
49f5  push    cx                              
49f6  push    1DBh                            
49f9  call far KERNEL._LWRITE                 
49fe  mov     [bp-106h],ax                    
4a02  mov     ax,[bp-106h]                    
4a06  cmp     ax,1DBh                         
4a09  jne     4A0Eh                           
4a0b  jmp     4A1Bh                           
4a0e  push    word ptr [bp-4h]                
4a11  call far KERNEL._LCLOSE                 
4a16  mov     al,0h                           
4a18  jmp     4AF8h                           
4a1b  push    word ptr [bp-4h]                
4a1e  mov     ax,5AAh                         
4a21  mov     cx,[bp+6h]                      
4a24  mov     dx,[bp+8h]                      
4a27  add     cx,ax                           
4a29  push    dx                              
4a2a  push    cx                              
4a2b  push    1h                              
4a2d  call far KERNEL._LWRITE                 
4a32  mov     [bp-106h],ax                    
4a36  mov     ax,[bp-106h]                    
4a3a  cmp     ax,1h                           
4a3d  jne     4A42h                           
4a3f  jmp     4A4Fh                           
4a42  push    word ptr [bp-4h]                
4a45  call far KERNEL._LCLOSE                 
4a4a  mov     al,0h                           
4a4c  jmp     4AF8h                           
4a4f  push    word ptr [bp-4h]                
4a52  mov     ax,5ABh                         
4a55  mov     cx,[bp+6h]                      
4a58  mov     dx,[bp+8h]                      
4a5b  add     cx,ax                           
4a5d  push    dx                              
4a5e  push    cx                              
4a5f  push    1h                              
4a61  call far KERNEL._LWRITE                 
4a66  mov     [bp-106h],ax                    
4a6a  mov     ax,[bp-106h]                    
4a6e  cmp     ax,1h                           
4a71  jne     4A76h                           
4a73  jmp     4A83h                           
4a76  push    word ptr [bp-4h]                
4a79  call far KERNEL._LCLOSE                 
4a7e  mov     al,0h                           
4a80  jmp     4AF8h                           
4a83  push    word ptr [bp-4h]                
4a86  mov     ax,5ACh                         
4a89  mov     cx,[bp+6h]                      
4a8c  mov     dx,[bp+8h]                      
4a8f  add     cx,ax                           
4a91  push    dx                              
4a92  push    cx                              
4a93  push    5h                              
4a95  call far KERNEL._LWRITE                 
4a9a  mov     [bp-106h],ax                    
4a9e  mov     ax,[bp-106h]                    
4aa2  cmp     ax,5h                           
4aa5  jne     4AAAh                           
4aa7  jmp     4AB7h                           
4aaa  push    word ptr [bp-4h]                
4aad  call far KERNEL._LCLOSE                 
4ab2  mov     al,0h                           
4ab4  jmp     4AF8h                           
4ab7  push    word ptr [bp-4h]                
4aba  mov     ax,5B1h                         
4abd  mov     cx,[bp+6h]                      
4ac0  mov     dx,[bp+8h]                      
4ac3  add     cx,ax                           
4ac5  push    dx                              
4ac6  push    cx                              
4ac7  push    6Eh                             
4ac9  call far KERNEL._LWRITE                 
4ace  mov     [bp-106h],ax                    
4ad2  mov     ax,[bp-106h]                    
4ad6  cmp     ax,6Eh                          
4ad9  jne     4ADEh                           
4adb  jmp     4AEBh                           
4ade  push    word ptr [bp-4h]                
4ae1  call far KERNEL._LCLOSE                 
4ae6  mov     al,0h                           
4ae8  jmp     4AF8h                           
4aeb  push    word ptr [bp-4h]                
4aee  call far KERNEL._LCLOSE                 
4af3  mov     al,1h                           
4af5  jmp     4AF8h                           
4af8  pop     ds                              
4af9  pop     di                              
4afa  pop     si                              
4afb  leave                                   
4afc  retf                                    
4afd  add     [bx+si],al                      

; ----- sub_4afe -----
4afe  mov     ax,48B3h                        ; segment seg2:0000
4b01  enter   8h,0h                           
4b05  push    si                              
4b06  push    di                              
4b07  push    ds                              
4b08  mov     ds,ax                           
4b0a  mov     word ptr [bp-6h],0h             
4b0f  mov     word ptr [bp-4h],0h             
4b14  mov     word ptr [bp-8h],0h             
4b19  jmp     4B3Ah                           
4b1c  mov     ax,[bp-8h]                      
4b1f  mov     bx,[bp+6h]                      
4b22  mov     cx,[bp+8h]                      
4b25  add     bx,ax                           
4b27  mov     es,cx                           
4b29  mov     al,es:[bx]                      
4b2c  and     ax,0FFh                         
4b2f  cwd                                     
4b30  add     [bp-6h],ax                      
4b33  adc     [bp-4h],dx                      
4b36  add     word ptr [bp-8h],1h             
4b3a  mov     ax,[bp-8h]                      
4b3d  cmp     ax,3h                           
4b40  jae     4B45h                           
4b42  jmp     4B1Ch                           
4b45  mov     word ptr [bp-8h],0h             
4b4a  jmp     4B70h                           
4b4d  mov     ax,5h                           
4b50  mov     bx,[bp+6h]                      
4b53  mov     cx,[bp+8h]                      
4b56  add     bx,ax                           
4b58  mov     ax,[bp-8h]                      
4b5b  add     bx,ax                           
4b5d  mov     es,cx                           
4b5f  mov     al,es:[bx]                      
4b62  and     ax,0FFh                         
4b65  cwd                                     
4b66  add     [bp-6h],ax                      
4b69  adc     [bp-4h],dx                      
4b6c  add     word ptr [bp-8h],1h             
4b70  mov     ax,[bp-8h]                      
4b73  cmp     ax,0Ch                          
4b76  jae     4B7Bh                           
4b78  jmp     4B4Dh                           
4b7b  mov     word ptr [bp-8h],0h             
4b80  jmp     4BA6h                           
4b83  mov     ax,11h                          
4b86  mov     bx,[bp+6h]                      
4b89  mov     cx,[bp+8h]                      
4b8c  add     bx,ax                           
4b8e  mov     ax,[bp-8h]                      
4b91  add     bx,ax                           
4b93  mov     es,cx                           
4b95  mov     al,es:[bx]                      
4b98  and     ax,0FFh                         
4b9b  cwd                                     
4b9c  add     [bp-6h],ax                      
4b9f  adc     [bp-4h],dx                      
4ba2  add     word ptr [bp-8h],1h             
4ba6  mov     ax,[bp-8h]                      
4ba9  cmp     ax,16h                          
4bac  jae     4BB1h                           
4bae  jmp     4B83h                           
4bb1  mov     word ptr [bp-8h],0h             
4bb6  jmp     4BDCh                           
4bb9  mov     ax,27h                          
4bbc  mov     bx,[bp+6h]                      
4bbf  mov     cx,[bp+8h]                      
4bc2  add     bx,ax                           
4bc4  mov     ax,[bp-8h]                      
4bc7  add     bx,ax                           
4bc9  mov     es,cx                           
4bcb  mov     al,es:[bx]                      
4bce  and     ax,0FFh                         
4bd1  cwd                                     
4bd2  add     [bp-6h],ax                      
4bd5  adc     [bp-4h],dx                      
4bd8  add     word ptr [bp-8h],1h             
4bdc  mov     ax,[bp-8h]                      
4bdf  cmp     ax,3A8h                         
4be2  jae     4BE7h                           
4be4  jmp     4BB9h                           
4be7  mov     word ptr [bp-8h],0h             
4bec  jmp     4C12h                           
4bef  mov     ax,3CFh                         
4bf2  mov     bx,[bp+6h]                      
4bf5  mov     cx,[bp+8h]                      
4bf8  add     bx,ax                           
4bfa  mov     ax,[bp-8h]                      
4bfd  add     bx,ax                           
4bff  mov     es,cx                           
4c01  mov     al,es:[bx]                      
4c04  and     ax,0FFh                         
4c07  cwd                                     
4c08  add     [bp-6h],ax                      
4c0b  adc     [bp-4h],dx                      
4c0e  add     word ptr [bp-8h],1h             
4c12  mov     ax,[bp-8h]                      
4c15  cmp     ax,1DBh                         
4c18  jae     4C1Dh                           
4c1a  jmp     4BEFh                           
4c1d  mov     word ptr [bp-8h],0h             
4c22  jmp     4C48h                           
4c25  mov     ax,5AAh                         
4c28  mov     bx,[bp+6h]                      
4c2b  mov     cx,[bp+8h]                      
4c2e  add     bx,ax                           
4c30  mov     ax,[bp-8h]                      
4c33  add     bx,ax                           
4c35  mov     es,cx                           
4c37  mov     al,es:[bx]                      
4c3a  and     ax,0FFh                         
4c3d  cwd                                     
4c3e  add     [bp-6h],ax                      
4c41  adc     [bp-4h],dx                      
4c44  add     word ptr [bp-8h],1h             
4c48  mov     ax,[bp-8h]                      
4c4b  cmp     ax,1h                           
4c4e  jae     4C53h                           
4c50  jmp     4C25h                           
4c53  mov     word ptr [bp-8h],0h             
4c58  jmp     4C7Eh                           
4c5b  mov     ax,5ABh                         
4c5e  mov     bx,[bp+6h]                      
4c61  mov     cx,[bp+8h]                      
4c64  add     bx,ax                           
4c66  mov     ax,[bp-8h]                      
4c69  add     bx,ax                           
4c6b  mov     es,cx                           
4c6d  mov     al,es:[bx]                      
4c70  and     ax,0FFh                         
4c73  cwd                                     
4c74  add     [bp-6h],ax                      
4c77  adc     [bp-4h],dx                      
4c7a  add     word ptr [bp-8h],1h             
4c7e  mov     ax,[bp-8h]                      
4c81  cmp     ax,1h                           
4c84  jae     4C89h                           
4c86  jmp     4C5Bh                           
4c89  mov     word ptr [bp-8h],0h             
4c8e  jmp     4CB4h                           
4c91  mov     ax,5ACh                         
4c94  mov     bx,[bp+6h]                      
4c97  mov     cx,[bp+8h]                      
4c9a  add     bx,ax                           
4c9c  mov     ax,[bp-8h]                      
4c9f  add     bx,ax                           
4ca1  mov     es,cx                           
4ca3  mov     al,es:[bx]                      
4ca6  and     ax,0FFh                         
4ca9  cwd                                     
4caa  add     [bp-6h],ax                      
4cad  adc     [bp-4h],dx                      
4cb0  add     word ptr [bp-8h],1h             
4cb4  mov     ax,[bp-8h]                      
4cb7  cmp     ax,5h                           
4cba  jae     4CBFh                           
4cbc  jmp     4C91h                           
4cbf  mov     word ptr [bp-8h],0h             
4cc4  jmp     4CEAh                           
4cc7  mov     ax,5B1h                         
4cca  mov     bx,[bp+6h]                      
4ccd  mov     cx,[bp+8h]                      
4cd0  add     bx,ax                           
4cd2  mov     ax,[bp-8h]                      
4cd5  add     bx,ax                           
4cd7  mov     es,cx                           
4cd9  mov     al,es:[bx]                      
4cdc  and     ax,0FFh                         
4cdf  cwd                                     
4ce0  add     [bp-6h],ax                      
4ce3  adc     [bp-4h],dx                      
4ce6  add     word ptr [bp-8h],1h             
4cea  mov     ax,[bp-8h]                      
4ced  cmp     ax,6Eh                          
4cf0  jae     4CF5h                           
4cf2  jmp     4CC7h                           
4cf5  mov     ax,[bp-6h]                      
4cf8  mov     dx,[bp-4h]                      
4cfb  and     ax,0FFFFh                       
4cfe  and     dx,0h                           
4d01  les     bx,[bp+6h]                      
4d04  mov     es:[bx+3h],ax                   
4d08  pop     ds                              
4d09  pop     di                              
4d0a  pop     si                              
4d0b  leave                                   
4d0c  retf                                    
4d0d  add     [bx+si],al                      

; ----- sub_4d0e -----
4d0e  mov     ax,4AFFh                        ; segment seg2:0000
4d11  enter   8h,0h                           
4d15  push    si                              
4d16  push    di                              
4d17  push    ds                              
4d18  mov     ds,ax                           
4d1a  mov     word ptr [bp-6h],0h             
4d1f  mov     word ptr [bp-4h],0h             
4d24  mov     word ptr [bp-8h],0h             
4d29  jmp     4D4Ah                           
4d2c  mov     ax,[bp-8h]                      
4d2f  mov     bx,[bp+6h]                      
4d32  mov     cx,[bp+8h]                      
4d35  add     bx,ax                           
4d37  mov     es,cx                           
4d39  mov     al,es:[bx]                      
4d3c  and     ax,0FFh                         
4d3f  cwd                                     
4d40  add     [bp-6h],ax                      
4d43  adc     [bp-4h],dx                      
4d46  add     word ptr [bp-8h],1h             
4d4a  mov     ax,[bp-8h]                      
4d4d  cmp     ax,3h                           
4d50  jae     4D55h                           
4d52  jmp     4D2Ch                           
4d55  mov     word ptr [bp-8h],0h             
4d5a  jmp     4D80h                           
4d5d  mov     ax,5h                           
4d60  mov     bx,[bp+6h]                      
4d63  mov     cx,[bp+8h]                      
4d66  add     bx,ax                           
4d68  mov     ax,[bp-8h]                      
4d6b  add     bx,ax                           
4d6d  mov     es,cx                           
4d6f  mov     al,es:[bx]                      
4d72  and     ax,0FFh                         
4d75  cwd                                     
4d76  add     [bp-6h],ax                      
4d79  adc     [bp-4h],dx                      
4d7c  add     word ptr [bp-8h],1h             
4d80  mov     ax,[bp-8h]                      
4d83  cmp     ax,0Ch                          
4d86  jae     4D8Bh                           
4d88  jmp     4D5Dh                           
4d8b  mov     word ptr [bp-8h],0h             
4d90  jmp     4DB6h                           
4d93  mov     ax,11h                          
4d96  mov     bx,[bp+6h]                      
4d99  mov     cx,[bp+8h]                      
4d9c  add     bx,ax                           
4d9e  mov     ax,[bp-8h]                      
4da1  add     bx,ax                           
4da3  mov     es,cx                           
4da5  mov     al,es:[bx]                      
4da8  and     ax,0FFh                         
4dab  cwd                                     
4dac  add     [bp-6h],ax                      
4daf  adc     [bp-4h],dx                      
4db2  add     word ptr [bp-8h],1h             
4db6  mov     ax,[bp-8h]                      
4db9  cmp     ax,16h                          
4dbc  jae     4DC1h                           
4dbe  jmp     4D93h                           
4dc1  mov     word ptr [bp-8h],0h             
4dc6  jmp     4DECh                           
4dc9  mov     ax,27h                          
4dcc  mov     bx,[bp+6h]                      
4dcf  mov     cx,[bp+8h]                      
4dd2  add     bx,ax                           
4dd4  mov     ax,[bp-8h]                      
4dd7  add     bx,ax                           
4dd9  mov     es,cx                           
4ddb  mov     al,es:[bx]                      
4dde  and     ax,0FFh                         
4de1  cwd                                     
4de2  add     [bp-6h],ax                      
4de5  adc     [bp-4h],dx                      
4de8  add     word ptr [bp-8h],1h             
4dec  mov     ax,[bp-8h]                      
4def  cmp     ax,3A8h                         
4df2  jae     4DF7h                           
4df4  jmp     4DC9h                           
4df7  mov     word ptr [bp-8h],0h             
4dfc  jmp     4E22h                           
4dff  mov     ax,3CFh                         
4e02  mov     bx,[bp+6h]                      
4e05  mov     cx,[bp+8h]                      
4e08  add     bx,ax                           
4e0a  mov     ax,[bp-8h]                      
4e0d  add     bx,ax                           
4e0f  mov     es,cx                           
4e11  mov     al,es:[bx]                      
4e14  and     ax,0FFh                         
4e17  cwd                                     
4e18  add     [bp-6h],ax                      
4e1b  adc     [bp-4h],dx                      
4e1e  add     word ptr [bp-8h],1h             
4e22  mov     ax,[bp-8h]                      
4e25  cmp     ax,1DBh                         
4e28  jae     4E2Dh                           
4e2a  jmp     4DFFh                           
4e2d  mov     word ptr [bp-8h],0h             
4e32  jmp     4E58h                           
4e35  mov     ax,5AAh                         
4e38  mov     bx,[bp+6h]                      
4e3b  mov     cx,[bp+8h]                      
4e3e  add     bx,ax                           
4e40  mov     ax,[bp-8h]                      
4e43  add     bx,ax                           
4e45  mov     es,cx                           
4e47  mov     al,es:[bx]                      
4e4a  and     ax,0FFh                         
4e4d  cwd                                     
4e4e  add     [bp-6h],ax                      
4e51  adc     [bp-4h],dx                      
4e54  add     word ptr [bp-8h],1h             
4e58  mov     ax,[bp-8h]                      
4e5b  cmp     ax,1h                           
4e5e  jae     4E63h                           
4e60  jmp     4E35h                           
4e63  mov     word ptr [bp-8h],0h             
4e68  jmp     4E8Eh                           
4e6b  mov     ax,5ABh                         
4e6e  mov     bx,[bp+6h]                      
4e71  mov     cx,[bp+8h]                      
4e74  add     bx,ax                           
4e76  mov     ax,[bp-8h]                      
4e79  add     bx,ax                           
4e7b  mov     es,cx                           
4e7d  mov     al,es:[bx]                      
4e80  and     ax,0FFh                         
4e83  cwd                                     
4e84  add     [bp-6h],ax                      
4e87  adc     [bp-4h],dx                      
4e8a  add     word ptr [bp-8h],1h             
4e8e  mov     ax,[bp-8h]                      
4e91  cmp     ax,1h                           
4e94  jae     4E99h                           
4e96  jmp     4E6Bh                           
4e99  mov     word ptr [bp-8h],0h             
4e9e  jmp     4EC4h                           
4ea1  mov     ax,5ACh                         
4ea4  mov     bx,[bp+6h]                      
4ea7  mov     cx,[bp+8h]                      
4eaa  add     bx,ax                           
4eac  mov     ax,[bp-8h]                      
4eaf  add     bx,ax                           
4eb1  mov     es,cx                           
4eb3  mov     al,es:[bx]                      
4eb6  and     ax,0FFh                         
4eb9  cwd                                     
4eba  add     [bp-6h],ax                      
4ebd  adc     [bp-4h],dx                      
4ec0  add     word ptr [bp-8h],1h             
4ec4  mov     ax,[bp-8h]                      
4ec7  cmp     ax,5h                           
4eca  jae     4ECFh                           
4ecc  jmp     4EA1h                           
4ecf  mov     word ptr [bp-8h],0h             
4ed4  jmp     4EFAh                           
4ed7  mov     ax,5B1h                         
4eda  mov     bx,[bp+6h]                      
4edd  mov     cx,[bp+8h]                      
4ee0  add     bx,ax                           
4ee2  mov     ax,[bp-8h]                      
4ee5  add     bx,ax                           
4ee7  mov     es,cx                           
4ee9  mov     al,es:[bx]                      
4eec  and     ax,0FFh                         
4eef  cwd                                     
4ef0  add     [bp-6h],ax                      
4ef3  adc     [bp-4h],dx                      
4ef6  add     word ptr [bp-8h],1h             
4efa  mov     ax,[bp-8h]                      
4efd  cmp     ax,6Eh                          
4f00  jae     4F05h                           
4f02  jmp     4ED7h                           
4f05  mov     ax,[bp-6h]                      
4f08  mov     dx,[bp-4h]                      
4f0b  and     ax,0FFFFh                       
4f0e  and     dx,0h                           
4f11  les     bx,[bp+6h]                      
4f14  mov     cx,es:[bx+3h]                   
4f18  mov     bx,0h                           
4f1b  cmp     ax,cx                           
4f1d  je      4F22h                           
4f1f  jmp     4F2Eh                           
4f22  cmp     dx,bx                           
4f24  je      4F29h                           
4f26  jmp     4F2Eh                           
4f29  mov     al,0h                           
4f2b  jmp     4F33h                           
4f2e  mov     al,1h                           
4f30  jmp     4F33h                           
4f33  pop     ds                              
4f34  pop     di                              
4f35  pop     si                              
4f36  leave                                   
4f37  retf                                    
4f38  popa                                    
4f3a  je      4F9Dh                           
4f3c  jbe     4FA0h                           
4f3f  arpl    [bx+si],ax                      
4f41  add     [si+65h],ah                     
4f44  popad                                   
4f46  jne     4FB4h                           
4f48  je      4F78h                           
4f4a  jbe     4FADh                           
4f4c  arpl    [bx+si],ax                      
4f4e  inc     si                              
4f4f  popa                                    
4f50  imul    bp,[si+65h],2064h               
4f55  je      4FC6h                           
4f57  and     [bx+72h],dh                     
4f5a  imul    si,[si+65h],4420h               
4f5f  inc     cx                              
4f60  push    sp                              
4f61  inc     cx                              
4f62  push    si                              
4f64  inc     cx                              
4f65  inc     bx                              
4f66  add     [bx+si],al                      
4f68  push    bx                              
4f69  jns     4FDEh                           
4f6b  je      4FD2h                           
4f6d  insw                                    
4f6e  and     [bp+di+68h],dl                  
4f71  jne     4FE7h                           
4f73  outsw   fs:                             
4f75  ja      4FE5h                           
4f77  add     [bx+si],al                      

; ===== HP_VAC_STATUS_ERROR =====
4f78  mov     ax,4D0Fh                        ; segment seg2:0000
4f7b  enter   2h,0h                           
4f7f  push    si                              
4f80  push    di                              
4f81  push    ds                              
4f82  mov     ds,ax                           
4f84  mov     word ptr [88h],1h               
4f8a  pop     ds                              
4f8b  pop     di                              
4f8c  pop     si                              
4f8d  leave                                   
4f8e  retf                                    
4f8f  add     [bx+si],al                      

; ===== HP_VAC_STATUS_OK =====
4f90  mov     ax,4F79h                        ; segment seg2:0000
4f93  enter   2h,0h                           
4f97  push    si                              
4f98  push    di                              
4f99  push    ds                              
4f9a  mov     ds,ax                           
4f9c  mov     word ptr [88h],0h               
4fa2  pop     ds                              
4fa3  pop     di                              
4fa4  pop     si                              
4fa5  leave                                   
4fa6  retf                                    
4fa7  add     [bx+si],al                      

; ===== HP_SHOW_PANEL =====
4fa8  mov     ax,4F91h                        ; segment seg2:0000
4fab  enter   2h,0h                           
4faf  push    si                              
4fb0  push    di                              
4fb1  push    ds                              
4fb2  mov     ds,ax                           
4fb4  push    0h                              
4fb6  push    1h                              
4fb8  push    1Ah                             
4fba  call far sub_6052                       
4fbf  add     sp,6h                           
4fc2  pop     ds                              
4fc3  pop     di                              
4fc4  pop     si                              
4fc5  leave                                   
4fc6  retf                                    
4fc7  add     [bx+si],al                      

; ===== HP_SHOW_SERVICE_PANEL =====
4fc8  mov     ax,4FA9h                        ; segment seg2:0000
4fcb  enter   2h,0h                           
4fcf  push    si                              
4fd0  push    di                              
4fd1  push    ds                              
4fd2  mov     ds,ax                           
4fd4  push    0h                              
4fd6  push    0h                              
4fd8  push    1Ah                             
4fda  call far sub_6052                       
4fdf  add     sp,6h                           
4fe2  pop     ds                              
4fe3  pop     di                              
4fe4  pop     si                              
4fe5  leave                                   
4fe6  retf                                    
4fe7  add     [bx+si],al                      

; ===== HP_STILL_ACTIVE =====
4fe8  mov     ax,4FC9h                        ; segment seg2:0000
4feb  enter   2h,0h                           
4fef  push    si                              
4ff0  push    di                              
4ff1  push    ds                              
4ff2  mov     ds,ax                           
4ff4  mov     word ptr [6Eh],0h               
4ffa  pop     ds                              
4ffb  pop     di                              
4ffc  pop     si                              
4ffd  leave                                   
4ffe  retf                                    
4fff  add     [bx+si],al                      

; ===== HP_MESSAGE_REJECTED =====
5000  mov     ax,4FE9h                        ; segment seg2:0000
5003  enter   2h,0h                           
5007  push    si                              
5008  push    di                              
5009  push    ds                              
500a  mov     ds,ax                           
500c  cmp     word ptr [5Ch],0h               
5011  jne     5016h                           
5013  jmp     5024h                           
5016  push    258h                            
5019  push    4FDDh                           ; segment seg1:0000
501c  push    7D0Ah                           
501f  call far M007.UIF_MESSAGE               ; "HP_message_rejected (HPSEM column)"
5024  mov     ax,[bp+6h]                      
5027  jmp     50B0h                           
502a  push    105h                            
502d  push    1h                              
502f  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 1
5034  mov     byte ptr [7C1h],0Ch             
5039  jmp     50DBh                           
503c  push    105h                            
503f  push    1h                              
5041  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 1
5046  mov     byte ptr [7C1h],0Dh             
504b  jmp     50DBh                           
504e  push    105h                            
5051  push    1h                              
5053  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 1
5058  mov     byte ptr [7C1h],0Ch             
505d  jmp     50DBh                           
5060  push    105h                            
5063  push    0h                              
5065  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
506a  push    0h                              
506c  push    0h                              
506e  push    3h                              
5070  call far sub_6052                       
5075  add     sp,6h                           
5078  mov     byte ptr [7C1h],3h              
507d  jmp     50DBh                           
5080  push    105h                            
5083  push    0h                              
5085  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
508a  mov     byte ptr [7C1h],14h             
508f  jmp     50DBh                           
5092  cmp     word ptr [5Ch],0h               
5097  jne     509Ch                           
5099  jmp     50AAh                           
509c  push    258h                            
509f  push    5073h                           ; segment seg1:0000
50a2  push    7D2Eh                           
50a5  call far M007.UIF_MESSAGE               ; "No Action Taken!"
50aa  jmp     50DBh                           
50ad  jmp     50DBh                           
50b0  cmp     ax,0Ah                          
50b3  jne     50B8h                           
50b5  jmp     5060h                           
50b8  cmp     ax,0Bh                          
50bb  jne     50C0h                           
50bd  jmp     5080h                           
50c0  cmp     ax,0Eh                          
50c3  jne     50C8h                           
50c5  jmp     502Ah                           
50c8  cmp     ax,0Fh                          
50cb  jne     50D0h                           
50cd  jmp     503Ch                           
50d0  cmp     ax,10h                          
50d3  jne     50D8h                           
50d5  jmp     504Eh                           
50d8  jmp     5092h                           
50db  pop     ds                              
50dc  pop     di                              
50dd  pop     si                              
50de  leave                                   
50df  retf    2h                              

; ===== HP_STATE_EVENT =====
50e2  mov     ax,5001h                        ; segment seg2:0000
50e5  enter   2h,0h                           
50e9  push    si                              
50ea  push    di                              
50eb  push    ds                              
50ec  mov     ds,ax                           
50ee  push    108h                            
50f1  mov     ax,[bp+6h]                      
50f4  push    ax                              
50f5  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 1457
50fa  mov     ax,[bp+6h]                      
50fd  mov     [70h],al                        
5100  mov     ax,[bp+6h]                      
5103  jmp     51ACh                           
5106  push    3h                              
5108  call far M100.SWITCHSCINT               
510d  jmp     51D5h                           
5110  push    5h                              
5112  call far sub_6938                       
5117  add     sp,2h                           
511a  jmp     51D5h                           
511d  push    6h                              
511f  call far sub_6938                       
5124  add     sp,2h                           
5127  jmp     51D5h                           
512a  push    7h                              
512c  call far sub_6938                       
5131  add     sp,2h                           
5134  jmp     51D5h                           
5137  push    0Ch                             
5139  call far sub_6938                       
513e  add     sp,2h                           
5141  jmp     51D5h                           
5144  push    0Fh                             
5146  call far sub_6938                       
514b  add     sp,2h                           
514e  jmp     51D5h                           
5151  push    0Eh                             
5153  call far sub_6938                       
5158  add     sp,2h                           
515b  jmp     51D5h                           
515e  push    9h                              
5160  call far sub_6938                       
5165  add     sp,2h                           
5168  jmp     51D5h                           
516b  push    8h                              
516d  call far sub_6938                       
5172  add     sp,2h                           
5175  push    3h                              
5177  call far M100.SWITCHSCINT               
517c  jmp     51D5h                           
517f  push    0Bh                             
5181  call far sub_6938                       
5186  add     sp,2h                           
5189  jmp     51D5h                           
518c  push    0Ah                             
518e  call far sub_6938                       
5193  add     sp,2h                           
5196  jmp     51D5h                           
5199  push    0Dh                             
519b  call far sub_6938                       
51a0  add     sp,2h                           
51a3  jmp     51D5h                           
51a6  jmp     51D5h                           
51a9  jmp     51D5h                           
51ac  cmp     ax,0Bh                          
51af  jbe     51B4h                           
51b1  jmp     51A6h                           
51b4  shl     ax,1                            
51b6  mov     bx,ax                           
51b8  jmp     word ptr cs:[bx+51BDh]          
51bd  push    es                              
51be  push    cx                              
51bf  adc     [bx+di+1Dh],dl                  
51c2  push    cx                              
51c3  sub     dl,[bx+di+37h]                  
51c6  push    cx                              
51c7  inc     sp                              
51c8  push    cx                              
51c9  push    cx                              
51ca  push    cx                              
51cb  pop     si                              
51cc  push    cx                              
51cd  imul    dx,[bx+di+7Fh],51h              
51d1  mov     [bx+di-67h],ss                  
51d4  push    cx                              
51d5  pop     ds                              
51d6  pop     di                              
51d7  pop     si                              
51d8  leave                                   
51d9  retf    2h                              

; ===== HP_ERROR_EVENT =====
51dc  mov     ax,50E3h                        ; segment seg2:0000
51df  enter   4h,0h                           
51e3  push    si                              
51e4  push    di                              
51e5  push    ds                              
51e6  mov     ds,ax                           
51e8  mov     word ptr [bp-4h],270Fh          
51ed  mov     ax,[bp-4h]                      
51f0  cmp     [bp+6h],ax                      
51f3  je      51F8h                           
51f5  jmp     51FBh                           
51f8  jmp     563Fh                           
51fb  cmp     word ptr [bp+6h],0Fh            
51ff  je      5204h                           
5201  jmp     5207h                           
5204  jmp     563Fh                           
5207  cmp     word ptr [bp+6h],0h             
520b  je      5210h                           
520d  jmp     524Ch                           
5210  push    108h                            
5213  call far M007.M007_GETSTATE             ; DP_HP_STATUS
5218  mov     [70h],al                        
521b  push    109h                            
521e  call far M007.M007_GETSTATE             ; DP_HP_ERROR
5223  cmp     ax,6h                           
5226  je      522Bh                           
5228  jmp     5246h                           
522b  push    109h                            
522e  push    0h                              
5230  call far M007.M007_PUTSTATE             ; DP_HP_ERROR = 0
5235  mov     byte ptr [71h],0h               
523a  mov     word ptr [6Ah],0h               
5240  mov     word ptr [58h],1h               
5246  jmp     563Fh                           
5249  jmp     5286h                           
524c  cmp     word ptr [bp+6h],15h            
5250  je      5255h                           
5252  jmp     527Bh                           
5255  push    108h                            
5258  call far M007.M007_GETSTATE             ; DP_HP_STATUS
525d  mov     [70h],al                        
5260  push    109h                            
5263  push    0h                              
5265  call far M007.M007_PUTSTATE             ; DP_HP_ERROR = 0
526a  mov     byte ptr [71h],0h               
526f  mov     word ptr [6Ah],0h               
5275  jmp     563Fh                           
5278  jmp     5286h                           
527b  mov     ax,[bp+6h]                      
527e  mov     [bp-4h],ax                      
5281  mov     byte ptr [70h],0Ch              
5286  mov     ax,[bp+6h]                      
5289  jmp     5460h                           
528c  push    226h                            
528f  mov     ax,[bp+6h]                      
5292  mov     dx,0h                           
5295  push    dx                              
5296  push    ax                              
5297  push    6000h                           
529a  call far M007.UIF_LOG                   
529f  jmp     54A0h                           
52a2  push    227h                            
52a5  mov     ax,[bp+6h]                      
52a8  mov     dx,0h                           
52ab  push    dx                              
52ac  push    ax                              
52ad  push    6000h                           
52b0  call far M007.UIF_LOG                   
52b5  jmp     54A0h                           
52b8  push    228h                            
52bb  mov     ax,[bp+6h]                      
52be  mov     dx,0h                           
52c1  push    dx                              
52c2  push    ax                              
52c3  push    6000h                           
52c6  call far M007.UIF_LOG                   
52cb  jmp     54A0h                           
52ce  push    229h                            
52d1  mov     ax,[bp+6h]                      
52d4  mov     dx,0h                           
52d7  push    dx                              
52d8  push    ax                              
52d9  push    6000h                           
52dc  call far M007.UIF_LOG                   
52e1  jmp     54A0h                           
52e4  push    22Ah                            
52e7  mov     ax,[bp+6h]                      
52ea  mov     dx,0h                           
52ed  push    dx                              
52ee  push    ax                              
52ef  push    6000h                           
52f2  call far M007.UIF_LOG                   
52f7  jmp     54A0h                           
52fa  push    22Bh                            
52fd  mov     ax,[bp+6h]                      
5300  mov     dx,0h                           
5303  push    dx                              
5304  push    ax                              
5305  push    6000h                           
5308  call far M007.UIF_LOG                   
530d  jmp     54A0h                           
5310  push    22Ch                            
5313  mov     ax,[bp+6h]                      
5316  mov     dx,0h                           
5319  push    dx                              
531a  push    ax                              
531b  push    6000h                           
531e  call far M007.UIF_LOG                   
5323  jmp     54A0h                           
5326  push    22Dh                            
5329  mov     ax,[bp+6h]                      
532c  mov     dx,0h                           
532f  push    dx                              
5330  push    ax                              
5331  push    6000h                           
5334  call far M007.UIF_LOG                   
5339  jmp     54A0h                           
533c  push    22Eh                            
533f  mov     ax,[bp+6h]                      
5342  mov     dx,0h                           
5345  push    dx                              
5346  push    ax                              
5347  push    6000h                           
534a  call far M007.UIF_LOG                   
534f  jmp     54A0h                           
5352  push    22Fh                            
5355  mov     ax,[bp+6h]                      
5358  mov     dx,0h                           
535b  push    dx                              
535c  push    ax                              
535d  push    6000h                           
5360  call far M007.UIF_LOG                   
5365  jmp     54A0h                           
5368  push    230h                            
536b  mov     ax,[bp+6h]                      
536e  mov     dx,0h                           
5371  push    dx                              
5372  push    ax                              
5373  push    6000h                           
5376  call far M007.UIF_LOG                   
537b  jmp     54A0h                           
537e  push    231h                            
5381  mov     ax,[bp+6h]                      
5384  mov     dx,0h                           
5387  push    dx                              
5388  push    ax                              
5389  push    6000h                           
538c  call far M007.UIF_LOG                   
5391  jmp     54A0h                           
5394  push    232h                            
5397  mov     ax,[bp+6h]                      
539a  mov     dx,0h                           
539d  push    dx                              
539e  push    ax                              
539f  push    6000h                           
53a2  call far M007.UIF_LOG                   
53a7  jmp     54A0h                           
53aa  push    233h                            
53ad  mov     ax,[bp+6h]                      
53b0  mov     dx,0h                           
53b3  push    dx                              
53b4  push    ax                              
53b5  push    6000h                           
53b8  call far M007.UIF_LOG                   
53bd  jmp     54A0h                           
53c0  push    234h                            
53c3  mov     ax,[bp+6h]                      
53c6  mov     dx,0h                           
53c9  push    dx                              
53ca  push    ax                              
53cb  push    6000h                           
53ce  call far M007.UIF_LOG                   
53d3  jmp     54A0h                           
53d6  push    235h                            
53d9  mov     ax,[bp+6h]                      
53dc  mov     dx,0h                           
53df  push    dx                              
53e0  push    ax                              
53e1  push    6000h                           
53e4  call far M007.UIF_LOG                   
53e9  jmp     54A0h                           
53ec  push    236h                            
53ef  mov     ax,[bp+6h]                      
53f2  mov     dx,0h                           
53f5  push    dx                              
53f6  push    ax                              
53f7  push    6000h                           
53fa  call far M007.UIF_LOG                   
53ff  jmp     54A0h                           
5402  push    237h                            
5405  mov     ax,[bp+6h]                      
5408  mov     dx,0h                           
540b  push    dx                              
540c  push    ax                              
540d  push    6000h                           
5410  call far M007.UIF_LOG                   
5415  jmp     54A0h                           
5418  push    238h                            
541b  mov     ax,[bp+6h]                      
541e  mov     dx,0h                           
5421  push    dx                              
5422  push    ax                              
5423  push    6000h                           
5426  call far M007.UIF_LOG                   
542b  jmp     54A0h                           
542e  push    239h                            
5431  mov     ax,[bp+6h]                      
5434  mov     dx,0h                           
5437  push    dx                              
5438  push    ax                              
5439  push    6000h                           
543c  call far M007.UIF_LOG                   
5441  jmp     54A0h                           
5444  jmp     54A0h                           
5447  push    23Ah                            
544a  mov     ax,[bp+6h]                      
544d  mov     dx,0h                           
5450  push    dx                              
5451  push    ax                              
5452  push    6000h                           
5455  call far M007.UIF_LOG                   
545a  jmp     54A0h                           
545d  jmp     54A0h                           
5460  sub     ax,1h                           
5463  cmp     ax,15h                          
5466  jbe     546Bh                           
5468  jmp     5447h                           
546b  shl     ax,1                            
546d  mov     bx,ax                           
546f  jmp     word ptr cs:[bx+5474h]          
5474  mov     [bp+si-5Eh],ss                  
5477  push    dx                              
5478  mov     ax,0CE52h                       
547b  push    dx                              
547c  in      al,52h                          
547e  cli                                     
547f  push    dx                              
5480  adc     [bp+di+26h],dl                  
5483  push    bx                              
5484  cmp     al,53h                          
5486  push    dx                              
5487  push    bx                              
5488  push    7E53h                           
548b  push    bx                              
548c  xchg    ax,sp                           
548d  push    bx                              
548e  stosb                                   
548f  push    bx                              
5490  rcl     byte ptr [bp+di-2Ah],53h        
5494  in      al,dx                           
5495  push    bx                              
5496  add     dl,[si+18h]                     
5499  push    sp                              
549a  push    sp                              
549c  inc     sp                              
549d  push    sp                              
549e  inc     di                              
549f  push    sp                              
54a0  mov     ax,[bp+6h]                      
54a3  jmp     5607h                           
54a6  push    105h                            
54a9  push    0h                              
54ab  call far M007.M007_PUTSTATE             
54b0  call far RESTART_HPAPP                  
54b5  jmp     563Fh                           
54b8  cmp     word ptr [5Ch],0h               
54bd  jne     54C2h                           
54bf  jmp     54D2h                           
54c2  push    258h                            
54c5  push    word ptr [86h]                  
54c9  push    word ptr [84h]                  
54cd  call far M007.UIF_MESSAGE               
54d2  push    108h                            
54d5  push    0Dh                             
54d7  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
54dc  push    109h                            
54df  mov     ax,[bp+6h]                      
54e2  push    ax                              
54e3  call far M007.M007_PUTSTATE             ; DP_HP_ERROR = 52818
54e8  mov     word ptr [6Ah],1h               
54ee  mov     word ptr [58h],0h               
54f4  mov     word ptr [5Eh],0h               
54fa  jmp     563Fh                           
54fd  mov     word ptr [6Ch],1h               
5503  mov     al,[7C1h]                       
5506  and     ax,0FFh                         
5509  jmp     553Eh                           
550c  mov     al,[7C2h]                       
550f  mov     [7C1h],al                       
5512  cmp     word ptr [5Ch],0h               
5517  jne     551Ch                           
5519  jmp     5538h                           
551c  push    258h                            
551f  mov     al,[7C1h]                       
5522  and     ax,0FFh                         
5525  mov     bx,ax                           
5527  shl     bx,1                            
5529  shl     bx,1                            
552b  push    word ptr [bx+8Ch]               
552f  push    word ptr [bx+8Ah]               
5533  call far M007.UIF_MESSAGE               
5538  jmp     5578h                           
553b  jmp     5578h                           
553e  sub     ax,3h                           
5541  cmp     ax,12h                          
5544  jbe     5549h                           
5546  jmp     5578h                           
5549  shl     ax,1                            
554b  mov     bx,ax                           
554d  jmp     word ptr cs:[bx+5552h]          
5552  or      al,55h                          
5554  js      55ABh                           
5556  js      55ADh                           
5558  js      55AFh                           
555a  or      al,55h                          
555c  or      al,55h                          
555e  or      al,55h                          
5560  js      55B7h                           
5562  js      55B9h                           
5564  js      55BBh                           
5566  js      55BDh                           
5568  js      55BFh                           
556a  js      55C1h                           
556c  js      55C3h                           
556e  or      al,55h                          
5570  or      al,55h                          
5572  js      55C9h                           
5574  js      55CBh                           
5576  or      al,55h                          
5578  push    108h                            
557b  push    0Dh                             
557d  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
5582  push    109h                            
5585  mov     ax,[bp+6h]                      
5588  push    ax                              
5589  call far M007.M007_PUTSTATE             ; DP_HP_ERROR
558e  jmp     563Fh                           
5591  push    1h                              
5593  call far sub_3a4c                       
5598  add     sp,2h                           
559b  push    0h                              
559d  push    0h                              
559f  push    19h                             
55a1  call far sub_6052                       
55a6  add     sp,6h                           
55a9  push    105h                            
55ac  push    0h                              
55ae  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
55b3  push    109h                            
55b6  mov     ax,[bp+6h]                      
55b9  push    ax                              
55ba  call far M007.M007_PUTSTATE             ; DP_HP_ERROR
55bf  push    108h                            
55c2  push    0Dh                             
55c4  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
55c9  mov     byte ptr [71h],1h               
55ce  jmp     563Fh                           
55d1  push    109h                            
55d4  push    0h                              
55d6  call far M007.M007_PUTSTATE             ; DP_HP_ERROR = 0
55db  mov     byte ptr [71h],0h               
55e0  mov     word ptr [6Ah],0h               
55e6  mov     word ptr [6Ch],0h               
55ec  mov     word ptr [58h],1h               
55f2  jmp     563Fh                           
55f5  push    109h                            
55f8  mov     ax,[bp+6h]                      
55fb  push    ax                              
55fc  call far M007.M007_PUTSTATE             ; DP_HP_ERROR
5601  jmp     563Fh                           
5604  jmp     563Fh                           
5607  sub     ax,5h                           
560a  cmp     ax,11h                          
560d  jbe     5612h                           
560f  jmp     55F5h                           
5612  shl     ax,1                            
5614  mov     bx,ax                           
5616  jmp     word ptr cs:[bx+561Bh]          
561b  cmpsb                                   
561c  push    sp                              
561d  mov     ax,0FD54h                       
5620  push    sp                              
5621  std                                     
5622  push    sp                              
5623  std                                     
5624  push    sp                              
5625  std                                     
5626  push    sp                              
5627  std                                     
5628  push    sp                              
5629  std                                     
562a  push    sp                              
562b  std                                     
562c  push    sp                              
562d  std                                     
562e  push    sp                              
562f  std                                     
5630  push    sp                              
5631  std                                     
5632  push    sp                              
5633  std                                     
5634  push    sp                              
5635  std                                     
5636  push    sp                              
5637  std                                     
5638  push    sp                              
5639  xchg    ax,cx                           
563a  push    bp                              
563b  rcl     word ptr [di-3h],1              
563e  push    sp                              
563f  pop     ds                              
5640  pop     di                              
5641  pop     si                              
5642  leave                                   
5643  retf    2h                              

; ===== HP_SET_V8 =====
5646  mov     ax,51DDh                        ; segment seg2:0000
5649  enter   2h,0h                           
564d  push    si                              
564e  push    di                              
564f  push    ds                              
5650  mov     ds,ax                           
5652  cmp     word ptr [bp+6h],2h             
5656  ja      565Bh                           
5658  jmp     5660h                           
565b  mov     word ptr [bp+6h],2h             
5660  push    106h                            
5663  mov     ax,[bp+6h]                      
5666  push    ax                              
5667  call far M007.M007_PUTSTATE             ; DP_HP_V8 = 64852
566c  pop     ds                              
566d  pop     di                              
566e  pop     si                              
566f  leave                                   
5670  retf    2h                              
5673  add     [bx+si],al                      

; ===== HP_SET_V14 =====
5674  mov     ax,5647h                        ; segment seg2:0000
5677  enter   2h,0h                           
567b  push    si                              
567c  push    di                              
567d  push    ds                              
567e  mov     ds,ax                           
5680  cmp     word ptr [bp+6h],2h             
5684  ja      5689h                           
5686  jmp     568Eh                           
5689  mov     word ptr [bp+6h],2h             
568e  push    107h                            
5691  mov     ax,[bp+6h]                      
5694  push    ax                              
5695  call far M007.M007_PUTSTATE             ; DP_HP_V14
569a  pop     ds                              
569b  pop     di                              
569c  pop     si                              
569d  leave                                   
569e  retf    2h                              
56a1  add     [bx+si],al                      

; ===== HP_SET_CHAMBER_PRESSURE =====
56a2  mov     ax,5675h                        ; segment seg2:0000
56a5  enter   2h,0h                           
56a9  push    si                              
56aa  push    di                              
56ab  push    ds                              
56ac  mov     ds,ax                           
56ae  push    143h                            
56b1  push    word ptr [bp+8h]                
56b4  push    word ptr [bp+6h]                
56b7  call far M007.M007_PUTVALUE             ; AP_CHAMBER_PRESSURE
56bc  pop     ds                              
56bd  pop     di                              
56be  pop     si                              
56bf  leave                                   
56c0  retf    4h                              
56c3  add     [bx+si],al                      

; ----- sub_56c4 -----
56c4  mov     ax,56A3h                        ; segment seg2:0000
56c7  enter   2h,0h                           
56cb  push    si                              
56cc  push    di                              
56cd  push    ds                              
56ce  mov     ds,ax                           
56d0  push    8Ch                             
56d3  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
56d8  cmp     ax,3h                           
56db  je      56E0h                           
56dd  jmp     56F0h                           
56e0  push    83h                             
56e3  call far M007.M007_GETSTATE             ; DP_GSP
56e8  cmp     ax,1h                           
56eb  jne     56F0h                           
56ed  jmp     56F9h                           
56f0  mov     ax,1h                           
56f3  jmp     5750h                           
56f6  jmp     574Ah                           
56f9  push    108h                            
56fc  call far M007.M007_GETSTATE             ; DP_HP_STATUS
5701  cmp     ax,0Dh                          
5704  je      5709h                           
5706  jmp     572Ah                           
5709  cmp     word ptr [5Ch],0h               
570e  jne     5713h                           
5710  jmp     5721h                           
5713  push    258h                            
5716  push    55A4h                           ; segment seg1:0000
5719  push    7D40h                           
571c  call far M007.UIF_MESSAGE               ; "pump (HPSEM column-LP mode only)"
5721  mov     ax,1h                           
5724  jmp     5750h                           
5727  jmp     574Ah                           
572a  cmp     word ptr [58h],1h               
572f  je      5734h                           
5731  jmp     5744h                           
5734  push    0h                              
5736  call far sub_6938                       
573b  add     sp,2h                           
573e  mov     ax,0h                           
5741  jmp     5750h                           
5744  mov     ax,1h                           
5747  jmp     5750h                           
574a  mov     ax,1h                           
574d  jmp     5750h                           
5750  pop     ds                              
5751  pop     di                              
5752  pop     si                              
5753  leave                                   
5754  retf                                    
5755  add     [bx+si],al                      

; ----- sub_5756 -----
5756  mov     ax,56C5h                        ; segment seg2:0000
5759  enter   2h,0h                           
575d  push    si                              
575e  push    di                              
575f  push    ds                              
5760  mov     ds,ax                           
5762  push    8Ch                             
5765  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
576a  cmp     ax,3h                           
576d  je      5772h                           
576f  jmp     5782h                           
5772  push    83h                             
5775  call far M007.M007_GETSTATE             ; DP_GSP
577a  cmp     ax,1h                           
577d  jne     5782h                           
577f  jmp     578Bh                           
5782  mov     ax,1h                           
5785  jmp     5837h                           
5788  jmp     5831h                           
578b  push    108h                            
578e  call far M007.M007_GETSTATE             ; DP_HP_STATUS
5793  cmp     ax,0Dh                          
5796  je      579Bh                           
5798  jmp     57BCh                           
579b  cmp     word ptr [5Ch],0h               
57a0  jne     57A5h                           
57a2  jmp     57B3h                           
57a5  push    258h                            
57a8  push    5739h                           ; segment seg1:0000
57ab  push    7D62h                           
57ae  call far M007.UIF_MESSAGE               ; "vent (HPSEM column-LP mode only)"
57b3  mov     ax,1h                           
57b6  jmp     5837h                           
57b9  jmp     5831h                           
57bc  cmp     word ptr [58h],1h               
57c1  je      57C6h                           
57c3  jmp     57DDh                           
57c6  cmp     word ptr [5Eh],0h               
57cb  je      57D0h                           
57cd  jmp     57DAh                           
57d0  push    1h                              
57d2  call far sub_6938                       
57d7  add     sp,2h                           
57da  jmp     582Bh                           
57dd  cmp     word ptr [6Ah],1h               
57e2  je      57E7h                           
57e4  jmp     5825h                           
57e7  cmp     word ptr [5Ch],0h               
57ec  jne     57F1h                           
57ee  jmp     57FFh                           
57f1  push    258h                            
57f4  push    57D5h                           ; segment seg1:0000
57f7  push    7D84h                           
57fa  call far M007.UIF_MESSAGE               ; "User vent whilst time out monitor active."
57ff  push    1h                              
5801  call far sub_3a4c                       
5806  add     sp,2h                           
5809  push    105h                            
580c  push    0h                              
580e  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
5813  push    108h                            
5816  push    0Dh                             
5818  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
581d  mov     byte ptr [71h],1h               
5822  jmp     582Bh                           
5825  mov     ax,1h                           
5828  jmp     5837h                           
582b  mov     ax,0h                           
582e  jmp     5837h                           
5831  mov     ax,1h                           
5834  jmp     5837h                           
5837  pop     ds                              
5838  pop     di                              
5839  pop     si                              
583a  leave                                   
583b  retf                                    

; ----- sub_583c -----
583c  mov     ax,5757h                        ; segment seg2:0000
583f  enter   2h,0h                           
5843  push    si                              
5844  push    di                              
5845  push    ds                              
5846  mov     ds,ax                           
5848  push    8Ch                             
584b  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
5850  cmp     ax,3h                           
5853  jne     5858h                           
5855  jmp     5861h                           
5858  mov     ax,1h                           
585b  jmp     5903h                           
585e  jmp     5903h                           
5861  push    108h                            
5864  call far M007.M007_GETSTATE             ; DP_HP_STATUS
5869  cmp     ax,0Dh                          
586c  je      5871h                           
586e  jmp     5892h                           
5871  cmp     word ptr [5Ch],0h               
5876  jne     587Bh                           
5878  jmp     5889h                           
587b  push    258h                            
587e  push    5804h                           ; segment seg1:0000
5881  push    7DAEh                           
5884  call far M007.UIF_MESSAGE               ; "vac_abort (HPSEM column-LP mode only)"
5889  mov     ax,1h                           
588c  jmp     5903h                           
588f  jmp     5903h                           
5892  cmp     word ptr [58h],1h               
5897  je      589Ch                           
5899  jmp     58C2h                           
589c  cmp     word ptr [5Eh],0h               
58a1  je      58A6h                           
58a3  jmp     58B4h                           
58a6  push    0h                              
58a8  push    0h                              
58aa  push    18h                             
58ac  call far sub_6052                       
58b1  add     sp,6h                           
58b4  call far RESTART_HPAPP                  
58b9  mov     ax,1h                           
58bc  jmp     5903h                           
58bf  jmp     58FDh                           
58c2  cmp     word ptr [6Ah],1h               
58c7  je      58CCh                           
58c9  jmp     58FDh                           
58cc  cmp     word ptr [5Ch],0h               
58d1  jne     58D6h                           
58d3  jmp     58E4h                           
58d6  push    258h                            
58d9  push    58B7h                           ; segment seg1:0000
58dc  push    7DD4h                           
58df  call far M007.UIF_MESSAGE               ; "User vac abort whilst time out monitor active."
58e4  push    2h                              
58e6  call far sub_3a4c                       
58eb  add     sp,2h                           
58ee  push    105h                            
58f1  push    0h                              
58f3  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
58f8  call far RESTART_HPAPP                  
58fd  mov     ax,0h                           
5900  jmp     5903h                           
5903  pop     ds                              
5904  pop     di                              
5905  pop     si                              
5906  leave                                   
5907  retf                                    

; ----- sub_5908 -----
5908  mov     ax,583Dh                        ; segment seg2:0000
590b  enter   2h,0h                           
590f  push    si                              
5910  push    di                              
5911  push    ds                              
5912  mov     ds,ax                           
5914  cmp     word ptr [58h],1h               
5919  je      591Eh                           
591b  jmp     5975h                           
591e  cmp     word ptr [bp+6h],1h             
5922  je      5927h                           
5924  jmp     5949h                           
5927  push    2h                              
5929  call far M100.SWITCHSCINT               
592e  push    0h                              
5930  push    0h                              
5932  push    16h                             
5934  call far sub_6052                       
5939  add     sp,6h                           
593c  push    3h                              
593e  call far sub_6938                       
5943  add     sp,2h                           
5946  jmp     5975h                           
5949  cmp     word ptr [5Eh],0h               
594e  je      5953h                           
5950  jmp     5960h                           
5953  push    4h                              
5955  call far sub_6938                       
595a  add     sp,2h                           
595d  jmp     5975h                           
5960  push    0h                              
5962  push    5958h                           ; segment seg1:0000
5965  push    7E0Ah                           
5968  push    5963h                           ; segment seg1:0000
596b  push    7E04h                           
596e  push    0h                              
5970  call far USER.MESSAGEBOX                ; "wait_for_beam_off != FALSE"  "M600"
5975  pop     ds                              
5976  pop     di                              
5977  pop     si                              
5978  leave                                   
5979  retf                                    

; ----- sub_597a -----
597a  mov     ax,5909h                        ; segment seg2:0000
597d  enter   2h,0h                           
5981  push    si                              
5982  push    di                              
5983  push    ds                              
5984  mov     ds,ax                           
5986  cmp     word ptr [58h],1h               
598b  je      5990h                           
598d  jmp     59B6h                           
5990  push    0h                              
5992  push    0h                              
5994  push    16h                             
5996  call far sub_6052                       
599b  add     sp,6h                           
599e  cmp     word ptr [5Ch],0h               
59a3  jne     59A8h                           
59a5  jmp     59B6h                           
59a8  push    258h                            
59ab  push    5999h                           ; segment seg1:0000
59ae  push    7E26h                           
59b1  call far M007.UIF_MESSAGE               ; "target changed (HPSEM column)"
59b6  pop     ds                              
59b7  pop     di                              
59b8  pop     si                              
59b9  leave                                   
59ba  retf                                    
59bb  add     [bx+si],al                      

; ----- sub_59bc -----
59bc  mov     ax,597Bh                        ; segment seg2:0000
59bf  enter   208h,0h                         
59c3  push    si                              
59c4  push    di                              
59c5  push    ds                              
59c6  mov     ds,ax                           
59c8  les     bx,[bp+6h]                      
59cb  mov     al,es:[bx+8h]                   
59cf  mov     [72h],al                        
59d2  push    8Ch                             
59d5  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
59da  cmp     ax,3h                           
59dd  jne     59E2h                           
59df  jmp     59E5h                           
59e2  jmp     604Dh                           
59e5  cmp     word ptr [54h],1h               
59ea  je      59EFh                           
59ec  jmp     5A0Fh                           
59ef  cmp     word ptr [56h],0h               
59f4  je      59F9h                           
59f6  jmp     5A0Fh                           
59f9  les     bx,[bp+6h]                      
59fc  mov     al,es:[bx+8h]                   
5a00  and     ax,0FFh                         
5a03  push    ax                              
5a04  call far sub_67d2                       
5a09  add     sp,2h                           
5a0c  jmp     604Dh                           
5a0f  cmp     word ptr [58h],1h               
5a14  je      5A19h                           
5a16  jmp     5C01h                           
5a19  les     bx,[bp+6h]                      
5a1c  mov     al,es:[bx+8h]                   
5a20  and     ax,0FFh                         
5a23  cmp     ax,16h                          
5a26  jne     5A2Bh                           
5a28  jmp     5A35h                           
5a2b  les     bx,[bp+6h]                      
5a2e  mov     al,es:[bx+8h]                   
5a32  mov     [7C0h],al                       
5a35  push    5A07h                           ; segment seg1:0000
5a38  push    7E44h                           
5a3b  call far KERNEL.GETMODULEHANDLE         ; "HPAPP.EXE"
5a40  cmp     ax,0h                           
5a43  je      5A48h                           
5a45  jmp     5A7Eh                           
5a48  cmp     word ptr [5Ch],0h               
5a4d  jne     5A52h                           
5a4f  jmp     5A62h                           
5a52  push    258h                            
5a55  push    word ptr [7Eh]                  
5a59  push    word ptr [7Ch]                  
5a5d  call far M007.UIF_MESSAGE               
5a62  push    3h                              
5a64  call far HP_ERROR_EVENT                 
5a69  mov     word ptr [6Ah],1h               
5a6f  mov     word ptr [58h],0h               
5a75  mov     word ptr [5Eh],0h               
5a7b  jmp     604Dh                           
5a7e  add     word ptr [15Ah],1h              
5a83  cmp     word ptr [15Ah],3Ch             
5a88  jge     5A8Dh                           
5a8a  jmp     5AFEh                           
5a8d  mov     word ptr [15Ah],0h              
5a93  cmp     word ptr [6Eh],0h               
5a98  je      5A9Dh                           
5a9a  jmp     5AABh                           
5a9d  mov     byte ptr [15Ch],0h              
5aa2  mov     word ptr [6Eh],1h               
5aa8  jmp     5AFEh                           
5aab  cmp     word ptr [6Eh],1h               
5ab0  je      5AB5h                           
5ab2  jmp     5AFEh                           
5ab5  add     byte ptr [15Ch],1h              
5aba  mov     al,[15Ch]                       
5abd  and     ax,0FFh                         
5ac0  cmp     ax,3h                           
5ac3  jge     5AC8h                           
5ac5  jmp     5AFEh                           
5ac8  cmp     word ptr [5Ch],0h               
5acd  jne     5AD2h                           
5acf  jmp     5AE2h                           
5ad2  push    258h                            
5ad5  push    word ptr [82h]                  
5ad9  push    word ptr [80h]                  
5add  call far M007.UIF_MESSAGE               
5ae2  push    4h                              
5ae4  call far HP_ERROR_EVENT                 
5ae9  mov     word ptr [6Ah],1h               
5aef  mov     word ptr [58h],0h               
5af5  mov     word ptr [5Eh],0h               
5afb  jmp     604Dh                           
5afe  cmp     word ptr [68h],1h               
5b03  je      5B08h                           
5b05  jmp     5B61h                           
5b08  sub     word ptr [64h],1h               
5b0d  sbb     word ptr [66h],0h               
5b12  cmp     word ptr [66h],0h               
5b17  jle     5B1Ch                           
5b19  jmp     5B61h                           
5b1c  jge     5B21h                           
5b1e  jmp     5B2Bh                           
5b21  cmp     word ptr [64h],0h               
5b26  jbe     5B2Bh                           
5b28  jmp     5B61h                           
5b2b  cmp     word ptr [5Ch],0h               
5b30  jne     5B35h                           
5b32  jmp     5B45h                           
5b35  push    258h                            
5b38  push    word ptr [7Ah]                  
5b3c  push    word ptr [78h]                  
5b40  call far M007.UIF_MESSAGE               
5b45  push    2h                              
5b47  call far HP_ERROR_EVENT                 
5b4c  mov     word ptr [6Ah],1h               
5b52  mov     word ptr [58h],0h               
5b58  mov     word ptr [5Eh],0h               
5b5e  jmp     604Dh                           
5b61  cmp     word ptr [88h],1h               
5b66  je      5B6Bh                           
5b68  jmp     5B78h                           
5b6b  push    16h                             
5b6d  call far sub_6938                       
5b72  add     sp,2h                           
5b75  jmp     5C01h                           
5b78  les     bx,[bp+6h]                      
5b7b  mov     al,es:[bx+8h]                   
5b7f  and     ax,0FFh                         
5b82  jmp     5BD6h                           
5b85  push    10h                             
5b87  call far sub_6938                       
5b8c  add     sp,2h                           
5b8f  jmp     5C01h                           
5b92  push    11h                             
5b94  call far sub_6938                       
5b99  add     sp,2h                           
5b9c  jmp     5C01h                           
5b9f  push    13h                             
5ba1  call far sub_6938                       
5ba6  add     sp,2h                           
5ba9  push    14h                             
5bab  call far sub_6938                       
5bb0  add     sp,2h                           
5bb3  push    12h                             
5bb5  call far sub_6938                       
5bba  add     sp,2h                           
5bbd  jmp     5C01h                           
5bc0  jmp     5C01h                           
5bc3  push    15h                             
5bc5  call far sub_6938                       
5bca  add     sp,2h                           
5bcd  jmp     5C01h                           
5bd0  jmp     5C01h                           
5bd3  jmp     5C01h                           
5bd6  cmp     ax,0h                           
5bd9  jne     5BDEh                           
5bdb  jmp     5B85h                           
5bde  cmp     ax,1h                           
5be1  jne     5BE6h                           
5be3  jmp     5B92h                           
5be6  cmp     ax,3h                           
5be9  jne     5BEEh                           
5beb  jmp     5BC0h                           
5bee  cmp     ax,4h                           
5bf1  jne     5BF6h                           
5bf3  jmp     5B9Fh                           
5bf6  cmp     ax,6h                           
5bf9  jne     5BFEh                           
5bfb  jmp     5BC3h                           
5bfe  jmp     5BD0h                           
5c01  cmp     word ptr [5Eh],1h               
5c06  je      5C0Bh                           
5c08  jmp     5C15h                           
5c0b  push    4h                              
5c0d  call far sub_6938                       
5c12  add     sp,2h                           
5c15  cmp     word ptr [62h],1h               
5c1a  je      5C1Fh                           
5c1c  jmp     5C39h                           
5c1f  push    0Eh                             
5c21  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
5c26  cmp     ax,1h                           
5c29  je      5C2Eh                           
5c2b  jmp     5C39h                           
5c2e  mov     word ptr [62h],0h               
5c34  call far M700.DOCOMMANDUNFREEZE_ALL     
5c39  cmp     word ptr [6Ah],1h               
5c3e  je      5C43h                           
5c40  jmp     604Dh                           
5c43  cmp     word ptr [15Eh],1h              
5c48  je      5C4Dh                           
5c4a  jmp     5E0Eh                           
5c4d  push    1h                              
5c4f  push    5C10h                           ; segment seg1:0000
5c52  push    418Eh                           
5c55  lea     ax,[bp-208h]                    
5c59  mov     dx,ss                           
5c5b  push    dx                              
5c5c  push    ax                              
5c5d  call far sub_01a0                       
5c62  add     sp,0Ah                          
5c65  push    0FEh                            
5c68  push    0h                              
5c6a  lea     ax,[bp-207h]                    
5c6e  mov     dx,ss                           
5c70  push    dx                              
5c71  push    ax                              
5c72  call far sub_01fe                       
5c77  add     sp,8h                           
5c7a  push    1h                              
5c7c  push    5C75h                           ; segment seg1:0000
5c7f  push    418Eh                           
5c82  lea     ax,[bp-108h]                    
5c86  mov     dx,ss                           
5c88  push    dx                              
5c89  push    ax                              
5c8a  call far sub_01a0                       
5c8f  add     sp,0Ah                          
5c92  push    0FEh                            
5c95  push    0h                              
5c97  lea     ax,[bp-107h]                    
5c9b  mov     dx,ss                           
5c9d  push    dx                              
5c9e  push    ax                              
5c9f  call far sub_01fe                       
5ca4  add     sp,8h                           
5ca7  mov     word ptr [15Eh],0h              
5cad  call far USER.GETTICKCOUNT              
5cb2  mov     [0D04h],ax                      
5cb5  mov     [0D06h],dx                      
5cb9  lea     ax,[bp-108h]                    
5cbd  mov     dx,ss                           
5cbf  push    dx                              
5cc0  push    ax                              
5cc1  push    0FFh                            
5cc4  call far KERNEL.GETWINDOWSDIRECTORY     
5cc9  lea     ax,[bp-108h]                    
5ccd  mov     dx,ss                           
5ccf  push    dx                              
5cd0  push    ax                              
5cd1  call far KERNEL.LSTRLEN                 
5cd6  add     ax,0FFFFh                       
5cd9  lea     bx,[bp-108h]                    
5cdd  add     bx,ax                           
5cdf  mov     al,ss:[bx]                      
5ce2  and     ax,0FFh                         
5ce5  cmp     ax,5Ch                          
5ce8  jne     5CEDh                           
5cea  jmp     5D00h                           
5ced  lea     ax,[bp-108h]                    
5cf1  mov     dx,ss                           
5cf3  push    dx                              
5cf4  push    ax                              
5cf5  push    5CA2h                           ; segment seg1:0000
5cf8  push    7E4Eh                           
5cfb  call far KERNEL.LSTRCAT                 
5d00  lea     ax,[bp-208h]                    
5d04  mov     dx,ss                           
5d06  push    dx                              
5d07  push    ax                              
5d08  lea     ax,[bp-108h]                    
5d0c  mov     dx,ss                           
5d0e  push    dx                              
5d0f  push    ax                              
5d10  call far KERNEL.LSTRCPY                 
5d15  lea     ax,[bp-208h]                    
5d19  mov     dx,ss                           
5d1b  push    dx                              
5d1c  push    ax                              
5d1d  push    5CF6h                           ; segment seg1:0000
5d20  push    7E50h                           
5d23  call far KERNEL.LSTRCAT                 ; "LEO.INI"
5d28  push    5D1Eh                           ; segment seg1:0000
5d2b  push    7E6Ah                           
5d2e  push    5D29h                           ; segment seg1:0000
5d31  push    7E58h                           
5d34  push    5D2Fh                           ; segment seg1:0000
5d37  push    418Eh                           
5d3a  mov     ax,0D26h                        
5d3d  mov     dx,ds                           
5d3f  push    dx                              
5d40  push    ax                              
5d41  push    0FFh                            
5d44  lea     ax,[bp-208h]                    
5d48  mov     dx,ss                           
5d4a  push    dx                              
5d4b  push    ax                              
5d4c  call far KERNEL.GETPRIVATEPROFILESTRING ; "HPAPP"  "OrsayBoardTimeout"
5d51  mov     [bp-8h],ax                      
5d54  mov     ax,0D26h                        
5d57  mov     dx,ds                           
5d59  push    dx                              
5d5a  push    ax                              
5d5b  call far KERNEL.LSTRLEN                 
5d60  cmp     ax,0h                           
5d63  jne     5D68h                           
5d65  jmp     5D81h                           
5d68  mov     ax,0D26h                        
5d6b  mov     dx,ds                           
5d6d  push    dx                              
5d6e  push    ax                              
5d6f  call far sub_729a                       
5d74  add     sp,4h                           
5d77  mov     [0E28h],ax                      
5d7a  mov     [0E2Ah],dx                      
5d7e  jmp     5D8Dh                           
5d81  mov     word ptr [0E28h],5Ah            
5d87  mov     word ptr [0E2Ah],0h             
5d8d  cmp     word ptr [0E2Ah],0h             
5d92  jae     5D97h                           
5d94  jmp     5DB3h                           
5d97  jbe     5D9Ch                           
5d99  jmp     5DA7h                           
5d9c  cmp     word ptr [0E28h],12Ch           
5da2  ja      5DA7h                           
5da4  jmp     5DB3h                           
5da7  mov     word ptr [0E28h],12Ch           
5dad  mov     word ptr [0E2Ah],0h             
5db3  cmp     word ptr [0E2Ah],0h             
5db8  jbe     5DBDh                           
5dba  jmp     5DD8h                           
5dbd  jae     5DC2h                           
5dbf  jmp     5DCCh                           
5dc2  cmp     word ptr [0E28h],0Ah            
5dc7  jb      5DCCh                           
5dc9  jmp     5DD8h                           
5dcc  mov     word ptr [0E28h],0Ah            
5dd2  mov     word ptr [0E2Ah],0h             
5dd8  push    word ptr [0E2Ah]                
5ddc  push    word ptr [0E28h]                
5de0  push    5D72h                           ; segment seg1:0000
5de3  push    7E70h                           
5de6  mov     ax,0E2Ch                        
5de9  mov     dx,ds                           
5deb  push    dx                              
5dec  push    ax                              
5ded  call far USER._WSPRINTF                 ; "timeout period %lu"
5df2  add     sp,0Ch                          
5df5  cmp     word ptr [5Ch],0h               
5dfa  jne     5DFFh                           
5dfc  jmp     5E0Eh                           
5dff  push    258h                            
5e02  mov     ax,0E2Ch                        
5e05  mov     dx,ds                           
5e07  push    dx                              
5e08  push    ax                              
5e09  call far M007.UIF_MESSAGE               
5e0e  mov     ax,3E8h                         
5e11  mov     dx,0h                           
5e14  push    dx                              
5e15  push    ax                              
5e16  call far USER.GETTICKCOUNT              
5e1b  sub     ax,[0D04h]                      
5e1f  sbb     dx,[0D06h]                      
5e23  push    dx                              
5e24  push    ax                              
5e25  call far sub_0140                       
5e2a  mov     [bp-6h],ax                      
5e2d  mov     [bp-4h],dx                      
5e30  mov     al,[7C1h]                       
5e33  and     ax,0FFh                         
5e36  jmp     6001h                           
5e39  cmp     word ptr [bp-4h],0h             
5e3d  jae     5E42h                           
5e3f  jmp     5E64h                           
5e42  jbe     5E47h                           
5e44  jmp     5E50h                           
5e47  cmp     word ptr [bp-6h],0h             
5e4b  jae     5E50h                           
5e4d  jmp     5E64h                           
5e50  push    105h                            
5e53  push    0h                              
5e55  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
5e5a  push    108h                            
5e5d  push    0Dh                             
5e5f  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
5e64  jmp     604Ah                           
5e67  cmp     word ptr [160h],1h              
5e6c  je      5E71h                           
5e6e  jmp     5E8Fh                           
5e71  cmp     word ptr [5Ch],0h               
5e76  jne     5E7Bh                           
5e78  jmp     5E89h                           
5e7b  push    258h                            
5e7e  push    5E28h                           ; segment seg1:0000
5e81  push    7E84h                           
5e84  call far M007.UIF_MESSAGE               ; "HPAPP Error. (2)"
5e89  mov     word ptr [160h],0h              
5e8f  mov     ax,[0E28h]                      
5e92  mov     dx,[0E2Ah]                      
5e96  cmp     [bp-4h],dx                      
5e99  jae     5E9Eh                           
5e9b  jmp     5EDCh                           
5e9e  jbe     5EA3h                           
5ea0  jmp     5EABh                           
5ea3  cmp     [bp-6h],ax                      
5ea6  ja      5EABh                           
5ea8  jmp     5EDCh                           
5eab  cmp     word ptr [5Ch],0h               
5eb0  jne     5EB5h                           
5eb2  jmp     5EC3h                           
5eb5  push    258h                            
5eb8  push    5E7Fh                           ; segment seg1:0000
5ebb  push    7E96h                           
5ebe  call far M007.UIF_MESSAGE               ; "SEM now in a safe LP only mode"
5ec3  push    105h                            
5ec6  push    0h                              
5ec8  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
5ecd  push    108h                            
5ed0  push    0Dh                             
5ed2  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
5ed7  mov     byte ptr [71h],1h               
5edc  jmp     604Ah                           
5edf  cmp     word ptr [160h],1h              
5ee4  je      5EE9h                           
5ee6  jmp     5F07h                           
5ee9  cmp     word ptr [5Ch],0h               
5eee  jne     5EF3h                           
5ef0  jmp     5F01h                           
5ef3  push    258h                            
5ef6  push    5EB9h                           ; segment seg1:0000
5ef9  push    7EB6h                           
5efc  call far M007.UIF_MESSAGE               ; "HPAPP Error. (3)"
5f01  mov     word ptr [160h],0h              
5f07  mov     ax,[0E28h]                      
5f0a  mov     dx,[0E2Ah]                      
5f0e  cmp     [bp-4h],dx                      
5f11  jae     5F16h                           
5f13  jmp     5F54h                           
5f16  jbe     5F1Bh                           
5f18  jmp     5F23h                           
5f1b  cmp     [bp-6h],ax                      
5f1e  ja      5F23h                           
5f20  jmp     5F54h                           
5f23  cmp     word ptr [5Ch],0h               
5f28  jne     5F2Dh                           
5f2a  jmp     5F3Bh                           
5f2d  push    258h                            
5f30  push    5EF7h                           ; segment seg1:0000
5f33  push    7E96h                           
5f36  call far M007.UIF_MESSAGE               ; "SEM now in a safe LP only mode"
5f3b  push    105h                            
5f3e  push    0h                              
5f40  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
5f45  push    108h                            
5f48  push    0Dh                             
5f4a  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
5f4f  mov     byte ptr [71h],1h               
5f54  jmp     604Ah                           
5f57  cmp     word ptr [160h],1h              
5f5c  je      5F61h                           
5f5e  jmp     5F89h                           
5f61  cmp     word ptr [5Ch],0h               
5f66  jne     5F6Bh                           
5f68  jmp     5F79h                           
5f6b  push    258h                            
5f6e  push    5F31h                           ; segment seg1:0000
5f71  push    7EC8h                           
5f74  call far M007.UIF_MESSAGE               ; "HPAPP Error. (4)"
5f79  push    1h                              
5f7b  call far sub_3a4c                       
5f80  add     sp,2h                           
5f83  mov     word ptr [160h],0h              
5f89  mov     ax,[0E28h]                      
5f8c  mov     dx,[0E2Ah]                      
5f90  cmp     [bp-4h],dx                      
5f93  jae     5F98h                           
5f95  jmp     5FD6h                           
5f98  jbe     5F9Dh                           
5f9a  jmp     5FA5h                           
5f9d  cmp     [bp-6h],ax                      
5fa0  ja      5FA5h                           
5fa2  jmp     5FD6h                           
5fa5  cmp     word ptr [5Ch],0h               
5faa  jne     5FAFh                           
5fac  jmp     5FBDh                           
5faf  push    258h                            
5fb2  push    5F7Eh                           ; segment seg1:0000
5fb5  push    7E96h                           
5fb8  call far M007.UIF_MESSAGE               ; "SEM now in a safe LP only mode"
5fbd  push    105h                            
5fc0  push    0h                              
5fc2  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
5fc7  push    108h                            
5fca  push    0Dh                             
5fcc  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
5fd1  mov     byte ptr [71h],1h               
5fd6  jmp     604Ah                           
5fd9  cmp     word ptr [5Ch],0h               
5fde  jne     5FE3h                           
5fe0  jmp     5FF1h                           
5fe3  push    258h                            
5fe6  push    5FB3h                           ; segment seg1:0000
5fe9  push    7EDAh                           
5fec  call far M007.UIF_MESSAGE               ; "HPAPP Error. (default)"
5ff1  push    108h                            
5ff4  push    0Dh                             
5ff6  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
5ffb  jmp     604Ah                           
5ffe  jmp     604Ah                           
6001  cmp     ax,1Bh                          
6004  jbe     6009h                           
6006  jmp     5FD9h                           
6009  shl     ax,1                            
600b  mov     bx,ax                           
600d  jmp     word ptr cs:[bx+6012h]          
6012  cmp     [bp+39h],bx                     
6015  pop     si                              
6016  cmp     [bp+39h],bx                     
6019  pop     si                              
601a  cmp     [bp+39h],bx                     
601d  pop     si                              
601e  cmp     [bp+39h],bx                     
6021  pop     si                              
6022  cmp     [bp+67h],bx                     
6025  pop     si                              
6026  push    di                              
6027  pop     di                              
6028  fistp   word ptr [bp-21h]               
602b  pop     si                              
602c  fistp   word ptr [bp-21h]               
602f  pop     si                              
6030  push    di                              
6031  pop     di                              
6032  pop     si                              
6034  cmp     [bp-21h],bx                     
6037  pop     si                              
6038  fistp   word ptr [bp+39h]               
603b  pop     si                              
603c  fistp   word ptr [bp-21h]               
603f  pop     si                              
6040  cmp     [bp+39h],bx                     
6043  pop     si                              
6044  fistp   word ptr [bp+57h]               
6047  pop     di                              
6048  pop     si                              
604a  jmp     604Dh                           
604d  pop     ds                              
604e  pop     di                              
604f  pop     si                              
6050  leave                                   
6051  retf                                    

; ----- sub_6052 -----
6052  mov     ax,59BDh                        ; segment seg2:0000
6055  enter   2h,0h                           
6059  push    si                              
605a  push    di                              
605b  push    ds                              
605c  mov     ds,ax                           
605e  cmp     word ptr [3Ch],0h               
6063  jne     6068h                           
6065  jmp     607Eh                           
6068  push    word ptr [3Ch]                  ; [ds] f32 here = 0.000743866
606c  push    word ptr [7BEh]                 
6070  push    word ptr [bp+6h]                
6073  push    word ptr [bp+0Ah]               
6076  push    word ptr [bp+8h]                
6079  call far USER.POSTMESSAGE               
607e  pop     ds                              
607f  pop     di                              
6080  pop     si                              
6081  leave                                   
6082  retf                                    
6083  add     [bx+si],al                      

; ----- sub_6084 -----
6084  mov     ax,6053h                        ; segment seg2:0000
6087  enter   0Ch,0h                          
608b  push    si                              
608c  push    di                              
608d  push    ds                              
608e  mov     ds,ax                           
6090  push    8Ch                             
6093  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
6098  cmp     ax,3h                           
609b  je      60A0h                           
609d  jmp     60F3h                           
60a0  push    0h                              
60a2  push    0h                              
60a4  push    5FE7h                           ; segment seg1:0000
60a7  push    7EF2h                           
60aa  call far USER.FINDWINDOW                ; "Untitled - hpapp32"
60af  mov     [3Ch],ax                        
60b2  push    60A5h                           ; segment seg1:0000
60b5  push    7F06h                           
60b8  call far USER.REGISTERWINDOWMESSAGE     ; "LEO_HPAPP_MESSAGE"
60bd  mov     [7BEh],ax                       
60c0  mov     word ptr [54h],1h               
60c6  call far sub_61d8                       
60cb  lea     ax,[bp-0Ch]                     
60ce  mov     dx,ss                           
60d0  mov     [bp-8h],ax                      
60d3  mov     [bp-6h],dx                      
60d6  push    word ptr [bp-6h]                
60d9  push    word ptr [bp-8h]                
60dc  call far USER.GETCURSORPOS              
60e1  push    word ptr [bp-0Ch]               
60e4  push    word ptr [bp-0Ah]               
60e7  call far USER.SETCURSORPOS              
60ec  push    3h                              
60ee  call far M100.SWITCHSCINT               
60f3  pop     ds                              
60f4  pop     di                              
60f5  pop     si                              
60f6  leave                                   
60f7  retf                                    

; ----- sub_60f8 -----
60f8  mov     ax,6085h                        ; segment seg2:0000
60fb  enter   14h,0h                          
60ff  push    si                              
6100  push    di                              
6101  push    ds                              
6102  mov     ds,ax                           
6104  mov     ax,1h                           
6107  jmp     61D2h                           
610a  push    8Ch                             
610d  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
6112  cmp     ax,3h                           
6115  je      611Ah                           
6117  jmp     61CCh                           
611a  push    108h                            
611d  call far M007.M007_GETSTATE             ; DP_HP_STATUS
6122  cmp     ax,3h                           
6125  jne     612Ah                           
6127  jmp     6152h                           
612a  push    108h                            
612d  call far M007.M007_GETSTATE             ; DP_HP_STATUS
6132  cmp     ax,2h                           
6135  jne     613Ah                           
6137  jmp     6152h                           
613a  cmp     word ptr [58h],0h               
613f  jne     6144h                           
6141  jmp     6152h                           
6144  mov     al,[71h]                        
6147  and     ax,0FFh                         
614a  cmp     ax,1h                           
614d  je      6152h                           
614f  jmp     616Ch                           
6152  mov     word ptr [162h],0h              
6158  call far CLOSE_HPAPP                    
615d  mov     word ptr [58h],0h               
6163  mov     ax,1h                           
6166  jmp     61D2h                           
6169  jmp     61CCh                           
616c  cmp     word ptr [162h],0h              
6171  je      6176h                           
6173  jmp     61C6h                           
6176  push    0h                              
6178  call far sub_5908                       
617d  add     sp,2h                           
6180  lea     ax,[bp-14h]                     
6183  mov     dx,ss                           
6185  push    dx                              
6186  push    ax                              
6187  push    0h                              
6189  push    0h                              
618b  push    0h                              
618d  push    1h                              
618f  call far USER.PEEKMESSAGE               
6194  cmp     ax,0h                           
6197  jne     619Ch                           
6199  jmp     61B7h                           
619c  lea     ax,[bp-14h]                     
619f  mov     dx,ss                           
61a1  push    dx                              
61a2  push    ax                              
61a3  call far USER.TRANSLATEMESSAGE          
61a8  lea     ax,[bp-14h]                     
61ab  mov     dx,ss                           
61ad  push    dx                              
61ae  push    ax                              
61af  call far USER.DISPATCHMESSAGE           
61b4  jmp     6180h                           
61b7  mov     word ptr [162h],1h              
61bd  mov     ax,0h                           
61c0  jmp     61D2h                           
61c3  jmp     61CCh                           
61c6  mov     ax,0h                           
61c9  jmp     61D2h                           
61cc  mov     ax,1h                           
61cf  jmp     61D2h                           
61d2  pop     ds                              
61d3  pop     di                              
61d4  pop     si                              
61d5  leave                                   
61d6  retf                                    
61d7  add     [bx+si],al                      

; ----- sub_61d8 -----
61d8  mov     ax,60F9h                        ; segment seg2:0000
61db  enter   118h,0h                         
61df  push    si                              
61e0  push    di                              
61e1  push    ds                              
61e2  mov     ds,ax                           
61e4  mov     byte ptr [bp-116h],1h           
61e9  mov     byte ptr [bp-115h],0h           
61ee  mov     byte ptr [bp-114h],2h           
61f3  mov     byte ptr [bp-113h],2h           
61f8  mov     byte ptr [bp-112h],1h           
61fd  mov     byte ptr [bp-111h],3h           
6202  mov     byte ptr [bp-110h],3h           
6207  mov     byte ptr [bp-10Fh],11h          
620c  mov     byte ptr [bp-10Eh],2h           
6211  mov     byte ptr [bp-10Dh],1h           
6216  mov     byte ptr [bp-10Ch],4h           
621b  mov     byte ptr [bp-10Bh],1h           
6220  mov     byte ptr [bp-10Ah],2h           
6225  mov     byte ptr [bp-109h],12h          
622a  mov     byte ptr [bp-108h],5h           
622f  mov     byte ptr [bp-107h],3h           
6234  mov     byte ptr [bp-106h],2h           
6239  mov     byte ptr [bp-105h],16h          
623e  mov     byte ptr [bp-104h],1Ah          
6243  mov     byte ptr [bp-103h],17h          
6248  mov     byte ptr [bp-102h],2h           
624d  mov     byte ptr [bp-101h],11h          
6252  mov     byte ptr [bp-100h],5h           
6257  mov     byte ptr [bp-0FFh],3h           
625c  mov     byte ptr [bp-0FEh],3h           
6261  mov     byte ptr [bp-0FDh],7h           
6266  mov     byte ptr [bp-0FCh],0h           
626b  mov     byte ptr [bp-0FBh],4h           
6270  mov     byte ptr [bp-0FAh],4h           
6275  mov     byte ptr [bp-0F9h],1h           
627a  mov     byte ptr [bp-0F8h],4h           
627f  mov     byte ptr [bp-0F7h],6h           
6284  mov     byte ptr [bp-0F6h],4h           
6289  mov     byte ptr [bp-0F5h],3h           
628e  mov     byte ptr [bp-0F4h],6h           
6293  mov     byte ptr [bp-0F3h],15h          
6298  mov     byte ptr [bp-0F2h],4h           
629d  mov     byte ptr [bp-0F1h],11h          
62a2  mov     byte ptr [bp-0F0h],19h          
62a7  mov     byte ptr [bp-0EFh],5h           
62ac  mov     byte ptr [bp-0EEh],4h           
62b1  mov     byte ptr [bp-0EDh],16h          
62b6  mov     byte ptr [bp-0ECh],1Ah          
62bb  mov     byte ptr [bp-0EBh],18h          
62c0  mov     byte ptr [bp-0EAh],5h           
62c5  mov     byte ptr [bp-0E9h],1h           
62ca  mov     byte ptr [bp-0E8h],4h           
62cf  mov     byte ptr [bp-0E7h],6h           
62d4  mov     byte ptr [bp-0E6h],5h           
62d9  mov     byte ptr [bp-0E5h],3h           
62de  mov     byte ptr [bp-0E4h],6h           
62e3  mov     byte ptr [bp-0E3h],15h          
62e8  mov     byte ptr [bp-0E2h],5h           
62ed  mov     byte ptr [bp-0E1h],16h          
62f2  mov     byte ptr [bp-0E0h],1Ah          
62f7  mov     byte ptr [bp-0DFh],18h          
62fc  mov     byte ptr [bp-0DEh],6h           
6301  mov     byte ptr [bp-0DDh],10h          
6306  mov     byte ptr [bp-0DCh],7h           
630b  mov     byte ptr [bp-0DBh],7h           
6310  mov     byte ptr [bp-0DAh],7h           
6315  mov     byte ptr [bp-0D9h],6h           
631a  mov     byte ptr [bp-0D8h],0h           
631f  mov     byte ptr [bp-0D7h],1h           
6324  mov     byte ptr [bp-0D6h],8h           
6329  mov     byte ptr [bp-0D5h],0h           
632e  mov     byte ptr [bp-0D4h],8h           
6333  mov     byte ptr [bp-0D3h],9h           
6338  mov     byte ptr [bp-0D2h],8h           
633d  mov     byte ptr [bp-0D1h],4h           
6342  mov     byte ptr [bp-0D0h],9h           
6347  mov     byte ptr [bp-0CFh],7h           
634c  mov     byte ptr [bp-0CEh],9h           
6351  mov     byte ptr [bp-0CDh],9h           
6356  mov     byte ptr [bp-0CCh],2h           
635b  mov     byte ptr [bp-0CBh],0Ah          
6360  mov     byte ptr [bp-0CAh],0Ah          
6365  mov     byte ptr [bp-0C9h],1h           
636a  mov     byte ptr [bp-0C8h],0Ah          
636f  mov     byte ptr [bp-0C7h],0Fh          
6374  mov     byte ptr [bp-0C6h],0Ah          
6379  mov     byte ptr [bp-0C5h],4h           
637e  mov     byte ptr [bp-0C4h],0Bh          
6383  mov     byte ptr [bp-0C3h],12h          
6388  mov     byte ptr [bp-0C2h],0Ah          
638d  mov     byte ptr [bp-0C1h],12h          
6392  mov     byte ptr [bp-0C0h],0Ch          
6397  mov     byte ptr [bp-0BFh],0Bh          
639c  mov     byte ptr [bp-0BEh],0Ah          
63a1  mov     byte ptr [bp-0BDh],16h          
63a6  mov     byte ptr [bp-0BCh],1Ah          
63ab  mov     byte ptr [bp-0BBh],19h          
63b0  mov     byte ptr [bp-0BAh],0Ah          
63b5  mov     byte ptr [bp-0B9h],11h          
63ba  mov     byte ptr [bp-0B8h],0Ch          
63bf  mov     byte ptr [bp-0B7h],0Bh          
63c4  mov     byte ptr [bp-0B6h],0Bh          
63c9  mov     byte ptr [bp-0B5h],0Ch          
63ce  mov     byte ptr [bp-0B4h],0h           
63d3  mov     byte ptr [bp-0B3h],0Ch          
63d8  mov     byte ptr [bp-0B2h],0Ch          
63dd  mov     byte ptr [bp-0B1h],1h           
63e2  mov     byte ptr [bp-0B0h],0Dh          
63e7  mov     byte ptr [bp-0AFh],0Fh          
63ec  mov     byte ptr [bp-0AEh],0Ch          
63f1  mov     byte ptr [bp-0ADh],4h           
63f6  mov     byte ptr [bp-0ACh],0Eh          
63fb  mov     byte ptr [bp-0ABh],12h          
6400  mov     byte ptr [bp-0AAh],0Ch          
6405  mov     byte ptr [bp-0A9h],0Fh          
640a  mov     byte ptr [bp-0A8h],0h           
640f  mov     byte ptr [bp-0A7h],0Dh          
6414  mov     byte ptr [bp-0A6h],0Ch          
6419  mov     byte ptr [bp-0A5h],16h          
641e  mov     byte ptr [bp-0A4h],1Ah          
6423  mov     byte ptr [bp-0A3h],19h          
6428  mov     byte ptr [bp-0A2h],0Ch          
642d  mov     byte ptr [bp-0A1h],3h           
6432  mov     byte ptr [bp-0A0h],19h          
6437  mov     byte ptr [bp-9Fh],0Ch           
643c  mov     byte ptr [bp-9Eh],0Dh           
6441  mov     byte ptr [bp-9Dh],1h            
6446  mov     byte ptr [bp-9Ch],0Fh           
644b  mov     byte ptr [bp-9Bh],0Fh           
6450  mov     byte ptr [bp-9Ah],0Dh           
6455  mov     byte ptr [bp-99h],4h            
645a  mov     byte ptr [bp-98h],10h           
645f  mov     byte ptr [bp-97h],12h           
6464  mov     byte ptr [bp-96h],0Dh           
6469  mov     byte ptr [bp-95h],0Ch           
646e  mov     byte ptr [bp-94h],0h            
6473  mov     byte ptr [bp-93h],0Ch           
6478  mov     byte ptr [bp-92h],0Dh           
647d  mov     byte ptr [bp-91h],11h           
6482  mov     byte ptr [bp-90h],19h           
6487  mov     byte ptr [bp-8Fh],0Eh           
648c  mov     byte ptr [bp-8Eh],0Dh           
6491  mov     byte ptr [bp-8Dh],16h           
6496  mov     byte ptr [bp-8Ch],1Ah           
649b  mov     byte ptr [bp-8Bh],19h           
64a0  mov     byte ptr [bp-8Ah],0Dh           
64a5  mov     byte ptr [bp-89h],3h            
64aa  mov     byte ptr [bp-88h],19h           
64af  mov     byte ptr [bp-87h],0Dh           
64b4  mov     byte ptr [bp-86h],0Eh           
64b9  mov     byte ptr [bp-85h],1h            
64be  mov     byte ptr [bp-84h],0Fh           
64c3  mov     byte ptr [bp-83h],0Fh           
64c8  mov     byte ptr [bp-82h],0Eh           
64cd  mov     byte ptr [bp-81h],4h            
64d2  mov     byte ptr [bp-80h],10h           
64d6  mov     byte ptr [bp-7Fh],12h           
64da  mov     byte ptr [bp-7Eh],0Eh           
64de  mov     byte ptr [bp-7Dh],0Ch           
64e2  mov     byte ptr [bp-7Ch],0h            
64e6  mov     byte ptr [bp-7Bh],0Ch           
64ea  mov     byte ptr [bp-7Ah],0Eh           
64ee  mov     byte ptr [bp-79h],12h           
64f2  mov     byte ptr [bp-78h],0h            
64f6  mov     byte ptr [bp-77h],0Dh           
64fa  mov     byte ptr [bp-76h],0Eh           
64fe  mov     byte ptr [bp-75h],13h           
6502  mov     byte ptr [bp-74h],0h            
6506  mov     byte ptr [bp-73h],0Dh           
650a  mov     byte ptr [bp-72h],0Eh           
650e  mov     byte ptr [bp-71h],14h           
6512  mov     byte ptr [bp-70h],0h            
6516  mov     byte ptr [bp-6Fh],0Dh           
651a  mov     byte ptr [bp-6Eh],0Eh           
651e  mov     byte ptr [bp-6Dh],15h           
6522  mov     byte ptr [bp-6Ch],0h            
6526  mov     byte ptr [bp-6Bh],0Dh           
652a  mov     byte ptr [bp-6Ah],0Eh           
652e  mov     byte ptr [bp-69h],16h           
6532  mov     byte ptr [bp-68h],1Ah           
6536  mov     byte ptr [bp-67h],19h           
653a  mov     byte ptr [bp-66h],0Eh           
653e  mov     byte ptr [bp-65h],3h            
6542  mov     byte ptr [bp-64h],19h           
6546  mov     byte ptr [bp-63h],0Eh           
654a  mov     byte ptr [bp-62h],0Fh           
654e  mov     byte ptr [bp-61h],0Eh           
6552  mov     byte ptr [bp-60h],4h            
6556  mov     byte ptr [bp-5Fh],10h           
655a  mov     byte ptr [bp-5Eh],10h           
655e  mov     byte ptr [bp-5Dh],10h           
6562  mov     byte ptr [bp-5Ch],11h           
6566  mov     byte ptr [bp-5Bh],11h           
656a  mov     byte ptr [bp-5Ah],11h           
656e  mov     byte ptr [bp-59h],5h            
6572  mov     byte ptr [bp-58h],0h            
6576  mov     byte ptr [bp-57h],8h            
657a  mov     byte ptr [bp-56h],12h           
657e  mov     byte ptr [bp-55h],0Dh           
6582  mov     byte ptr [bp-54h],0h            
6586  mov     byte ptr [bp-53h],13h           
658a  mov     byte ptr [bp-52h],13h           
658e  mov     byte ptr [bp-51h],3h            
6592  mov     byte ptr [bp-50h],13h           
6596  mov     byte ptr [bp-4Fh],0Bh           
659a  mov     byte ptr [bp-4Eh],13h           
659e  mov     byte ptr [bp-4Dh],0Bh           
65a2  mov     byte ptr [bp-4Ch],0h            
65a6  mov     byte ptr [bp-4Bh],14h           
65aa  mov     byte ptr [bp-4Ah],13h           
65ae  mov     byte ptr [bp-49h],16h           
65b2  mov     byte ptr [bp-48h],13h           
65b6  mov     byte ptr [bp-47h],1Bh           
65ba  mov     byte ptr [bp-46h],14h           
65be  mov     byte ptr [bp-45h],3h            
65c2  mov     byte ptr [bp-44h],14h           
65c6  mov     byte ptr [bp-43h],15h           
65ca  mov     byte ptr [bp-42h],14h           
65ce  mov     byte ptr [bp-41h],8h            
65d2  mov     byte ptr [bp-40h],15h           
65d6  mov     byte ptr [bp-3Fh],3h            
65da  mov     byte ptr [bp-3Eh],14h           
65de  mov     byte ptr [bp-3Dh],16h           
65e2  mov     byte ptr [bp-3Ch],1Bh           
65e6  mov     byte ptr [bp-3Bh],3h            
65ea  mov     byte ptr [bp-3Ah],15h           
65ee  mov     byte ptr [bp-39h],0Ah           
65f2  mov     byte ptr [bp-38h],0h            
65f6  mov     byte ptr [bp-37h],16h           
65fa  mov     byte ptr [bp-36h],16h           
65fe  mov     byte ptr [bp-35h],1h            
6602  mov     byte ptr [bp-34h],16h           
6606  mov     byte ptr [bp-33h],0Fh           
660a  mov     byte ptr [bp-32h],16h           
660e  mov     byte ptr [bp-31h],4h            
6612  mov     byte ptr [bp-30h],17h           
6616  mov     byte ptr [bp-2Fh],13h           
661a  mov     byte ptr [bp-2Eh],16h           
661e  mov     byte ptr [bp-2Dh],0Ch           
6622  mov     byte ptr [bp-2Ch],0h            
6626  mov     byte ptr [bp-2Bh],0Ch           
662a  mov     byte ptr [bp-2Ah],16h           
662e  mov     byte ptr [bp-29h],16h           
6632  mov     byte ptr [bp-28h],1Ah           
6636  mov     byte ptr [bp-27h],19h           
663a  mov     byte ptr [bp-26h],17h           
663e  mov     byte ptr [bp-25h],2h            
6642  mov     byte ptr [bp-24h],12h           
6646  mov     byte ptr [bp-23h],1h            
664a  mov     byte ptr [bp-22h],17h           
664e  mov     byte ptr [bp-21h],1h            
6652  mov     byte ptr [bp-20h],4h            
6656  mov     byte ptr [bp-1Fh],1h            
665a  mov     byte ptr [bp-1Eh],18h           
665e  mov     byte ptr [bp-1Dh],2h            
6662  mov     byte ptr [bp-1Ch],12h           
6666  mov     byte ptr [bp-1Bh],6h            
666a  mov     byte ptr [bp-1Ah],18h           
666e  mov     byte ptr [bp-19h],1h            
6672  mov     byte ptr [bp-18h],4h            
6676  mov     byte ptr [bp-17h],6h            
667a  mov     byte ptr [bp-16h],19h           
667e  mov     byte ptr [bp-15h],2h            
6682  mov     byte ptr [bp-14h],18h           
6686  mov     byte ptr [bp-13h],1Ah           
668a  mov     byte ptr [bp-12h],19h           
668e  mov     byte ptr [bp-11h],1h            
6692  mov     byte ptr [bp-10h],18h           
6696  mov     byte ptr [bp-0Fh],0Fh           
669a  mov     byte ptr [bp-0Eh],1Ah           
669e  mov     byte ptr [bp-0Dh],0Eh           
66a2  mov     byte ptr [bp-0Ch],12h           
66a6  mov     byte ptr [bp-0Bh],10h           
66aa  mov     byte ptr [bp-0Ah],1Bh           
66ae  mov     byte ptr [bp-9h],0Ch            
66b2  mov     byte ptr [bp-8h],0h             
66b6  mov     byte ptr [bp-7h],19h            
66ba  mov     word ptr [bp-4h],0h             
66bf  jmp     6702h                           
66c2  mov     word ptr [bp-6h],0h             
66c7  jmp     66F5h                           
66ca  imul    ax,[bp-4h],30h                  
66ce  mov     bx,7C4h                         
66d1  add     bx,ax                           
66d3  mov     ax,[bp-6h]                      
66d6  shl     ax,1                            
66d8  add     bx,ax                           
66da  mov     byte ptr [bx],0h                
66dd  imul    ax,[bp-4h],30h                  
66e1  mov     bx,7C4h                         
66e4  add     bx,ax                           
66e6  mov     ax,[bp-6h]                      
66e9  shl     ax,1                            
66eb  add     bx,ax                           
66ed  mov     byte ptr [bx+1h],0h             
66f1  add     word ptr [bp-6h],1h             
66f5  cmp     word ptr [bp-6h],18h            
66f9  jge     66FEh                           
66fb  jmp     66CAh                           
66fe  add     word ptr [bp-4h],1h             
6702  cmp     word ptr [bp-4h],1Ch            
6706  jge     670Bh                           
6708  jmp     66C2h                           
670b  mov     word ptr [bp-4h],0h             
6710  jmp     67B8h                           
6713  mov     ax,[bp-4h]                      
6716  shl     ax,1                            
6718  shl     ax,1                            
671a  lea     bx,[bp-116h]                    
671e  add     bx,ax                           
6720  mov     al,ss:[bx+2h]                   
6724  mov     dx,[bp-4h]                      
6727  shl     dx,1                            
6729  shl     dx,1                            
672b  lea     bx,[bp-116h]                    
672f  add     bx,dx                           
6731  mov     cl,ss:[bx]                      
6734  mov     [bp-118h],ax                    
6738  mov     ax,cx                           
673a  and     ax,0FFh                         
673d  imul    ax,ax,30h                       
6740  mov     bx,7C4h                         
6743  add     bx,ax                           
6745  mov     ax,[bp-4h]                      
6748  shl     ax,1                            
674a  shl     ax,1                            
674c  lea     si,[bp-116h]                    
6750  add     si,ax                           
6752  mov     al,ss:[si+1h]                   
6756  and     ax,0FFh                         
6759  shl     ax,1                            
675b  add     bx,ax                           
675d  mov     ax,[bp-118h]                    
6761  mov     [bx],al                         
6763  mov     ax,[bp-4h]                      
6766  shl     ax,1                            
6768  shl     ax,1                            
676a  lea     bx,[bp-116h]                    
676e  add     bx,ax                           
6770  mov     al,ss:[bx+3h]                   
6774  mov     dx,[bp-4h]                      
6777  shl     dx,1                            
6779  shl     dx,1                            
677b  lea     bx,[bp-116h]                    
677f  add     bx,dx                           
6781  mov     cl,ss:[bx]                      
6784  mov     [bp-118h],ax                    
6788  mov     ax,cx                           
678a  and     ax,0FFh                         
678d  imul    ax,ax,30h                       
6790  mov     bx,7C4h                         
6793  add     bx,ax                           
6795  mov     ax,[bp-4h]                      
6798  shl     ax,1                            
679a  shl     ax,1                            
679c  lea     si,[bp-116h]                    
67a0  add     si,ax                           
67a2  mov     al,ss:[si+1h]                   
67a6  and     ax,0FFh                         
67a9  shl     ax,1                            
67ab  add     bx,ax                           
67ad  mov     ax,[bp-118h]                    
67b1  mov     [bx+1h],al                      
67b4  add     word ptr [bp-4h],1h             
67b8  cmp     word ptr [bp-4h],44h            
67bc  jge     67C1h                           
67be  jmp     6713h                           
67c1  mov     byte ptr [7C1h],0h              
67c6  mov     al,[7C1h]                       
67c9  mov     [7C2h],al                       
67cc  pop     ds                              
67cd  pop     di                              
67ce  pop     si                              
67cf  leave                                   
67d0  retf                                    
67d1  add     [bx+si],al                      

; ----- sub_67d2 -----
67d2  mov     ax,61D9h                        ; segment seg2:0000
67d5  enter   2h,0h                           
67d9  push    si                              
67da  push    di                              
67db  push    ds                              
67dc  mov     ds,ax                           
67de  cmp     word ptr [3Ch],0h               
67e3  jne     67E8h                           
67e5  jmp     6933h                           
67e8  mov     al,[bp+6h]                      
67eb  and     ax,0FFh                         
67ee  cmp     ax,0h                           
67f1  jne     67F6h                           
67f3  jmp     682Eh                           
67f6  mov     al,[bp+6h]                      
67f9  and     ax,0FFh                         
67fc  cmp     ax,1h                           
67ff  jne     6804h                           
6801  jmp     682Eh                           
6804  mov     al,[bp+6h]                      
6807  and     ax,0FFh                         
680a  cmp     ax,2h                           
680d  jne     6812h                           
680f  jmp     682Eh                           
6812  mov     al,[bp+6h]                      
6815  and     ax,0FFh                         
6818  cmp     ax,4h                           
681b  jne     6820h                           
681d  jmp     682Eh                           
6820  mov     al,[bp+6h]                      
6823  and     ax,0FFh                         
6826  cmp     ax,5h                           
6829  je      682Eh                           
682b  jmp     6933h                           
682e  push    109h                            
6831  push    0h                              
6833  call far M007.M007_PUTSTATE             ; DP_HP_ERROR = 0
6838  mov     byte ptr [71h],0h               
683d  mov     word ptr [6Eh],0h               
6843  mov     word ptr [54h],1h               
6849  mov     word ptr [6Ah],0h               
684f  mov     al,[bp+6h]                      
6852  and     ax,0FFh                         
6855  cmp     ax,4h                           
6858  jne     685Dh                           
685a  jmp     686Bh                           
685d  mov     al,[bp+6h]                      
6860  and     ax,0FFh                         
6863  cmp     ax,5h                           
6866  je      686Bh                           
6868  jmp     686Fh                           
686b  mov     byte ptr [bp+6h],2h             
686f  push    word ptr [3Ch]                  ; [ds] f32 here = 0.000743866
6873  push    word ptr [7BEh]                 
6877  push    2h                              
6879  mov     al,[bp+6h]                      
687c  and     ax,0FFh                         
687f  mov     dx,0h                           
6882  push    dx                              
6883  push    ax                              
6884  call far USER.SENDMESSAGE               
6889  cmp     ax,0h                           
688c  je      6891h                           
688e  jmp     68F1h                           
6891  cmp     dx,0h                           
6894  je      6899h                           
6896  jmp     68F1h                           
6899  cmp     word ptr [5Ch],0h               
689e  jne     68A3h                           
68a0  jmp     68B3h                           
68a3  push    258h                            
68a6  push    word ptr [76h]                  
68aa  push    word ptr [74h]                  
68ae  call far M007.UIF_MESSAGE               
68b3  push    word ptr [3Ch]                  ; [ds] f32 here = 0.000743866
68b7  push    word ptr [7BEh]                 
68bb  push    17h                             
68bd  push    0h                              
68bf  push    0h                              
68c1  call far USER.SENDMESSAGE               
68c6  push    226h                            
68c9  push    0h                              
68cb  push    1h                              
68cd  push    6000h                           
68d0  call far M007.UIF_LOG                   
68d5  push    108h                            
68d8  push    0Dh                             
68da  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 13
68df  push    109h                            
68e2  push    1h                              
68e4  call far M007.M007_PUTSTATE             ; DP_HP_ERROR = 1
68e9  mov     byte ptr [71h],1h               
68ee  jmp     6926h                           
68f1  mov     al,[bp+6h]                      
68f4  and     ax,0FFh                         
68f7  cmp     ax,0h                           
68fa  je      68FFh                           
68fc  jmp     6907h                           
68ff  mov     byte ptr [7C1h],1h              
6904  jmp     690Ch                           
6907  mov     byte ptr [7C1h],4h              
690c  mov     al,[7C1h]                       
690f  mov     [7C2h],al                       
6912  mov     word ptr [58h],1h               
6918  push    0h                              
691a  push    0h                              
691c  push    16h                             
691e  call far sub_6052                       
6923  add     sp,6h                           
6926  mov     word ptr [56h],1h               
692c  push    3h                              
692e  call far M100.SWITCHSCINT               
6933  pop     ds                              
6934  pop     di                              
6935  pop     si                              
6936  leave                                   
6937  retf                                    

; ----- sub_6938 -----
6938  mov     ax,67D3h                        ; segment seg2:0000
693b  enter   2h,0h                           
693f  push    si                              
6940  push    di                              
6941  push    ds                              
6942  mov     ds,ax                           
6944  mov     word ptr [0E26h],1h             
694a  cmp     word ptr [5Ch],0h               
694f  jne     6954h                           
6951  jmp     6970h                           
6954  push    258h                            
6957  mov     al,[bp+6h]                      
695a  and     ax,0FFh                         
695d  mov     bx,ax                           
695f  shl     bx,1                            
6961  shl     bx,1                            
6963  push    word ptr [bx+0FCh]              
6967  push    word ptr [bx+0FAh]              
696b  call far M007.UIF_MESSAGE               
6970  mov     al,[7C1h]                       
6973  and     ax,0FFh                         
6976  imul    ax,ax,30h                       
6979  mov     bx,7C4h                         
697c  add     bx,ax                           
697e  mov     al,[bp+6h]                      
6981  and     ax,0FFh                         
6984  shl     ax,1                            
6986  add     bx,ax                           
6988  mov     al,[bx]                         
698a  and     ax,0FFh                         
698d  jmp     6FFFh                           
6990  cmp     word ptr [5Ch],0h               
6995  jne     699Ah                           
6997  jmp     69A8h                           
699a  push    258h                            
699d  push    6921h                           ; segment seg1:0000
69a0  push    7F18h                           
69a3  call far M007.UIF_MESSAGE               ; "action 0 - do nothing"
69a8  cmp     word ptr [6Ch],1h               
69ad  je      69B2h                           
69af  jmp     69FAh                           
69b2  mov     al,[bp+6h]                      
69b5  and     ax,0FFh                         
69b8  cmp     ax,1h                           
69bb  je      69C0h                           
69bd  jmp     69FAh                           
69c0  push    1h                              
69c2  call far sub_3a4c                       
69c7  add     sp,2h                           
69ca  push    0h                              
69cc  push    0h                              
69ce  push    19h                             
69d0  call far sub_6052                       
69d5  add     sp,6h                           
69d8  push    105h                            
69db  push    0h                              
69dd  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
69e2  cmp     word ptr [5Ch],0h               
69e7  jne     69ECh                           
69e9  jmp     69FAh                           
69ec  push    258h                            
69ef  push    69D3h                           ; segment seg1:0000
69f2  push    7F2Eh                           
69f5  call far M007.UIF_MESSAGE               ; "user vent during HP error"
69fa  jmp     7048h                           
69fd  cmp     word ptr [5Ch],0h               
6a02  jne     6A07h                           
6a04  jmp     6A15h                           
6a07  push    258h                            
6a0a  push    69F0h                           ; segment seg1:0000
6a0d  push    7F48h                           
6a10  call far M007.UIF_MESSAGE               ; "action 1 - HP_Start msg - not done here"
6a15  jmp     7048h                           
6a18  cmp     word ptr [5Ch],0h               
6a1d  jne     6A22h                           
6a1f  jmp     6A30h                           
6a22  push    258h                            
6a25  push    6A0Bh                           ; segment seg1:0000
6a28  push    7F70h                           
6a2b  call far M007.UIF_MESSAGE               ; "action 2 - GSP pump"
6a30  push    0h                              
6a32  call far sub_3a4c                       
6a37  add     sp,2h                           
6a3a  jmp     7048h                           
6a3d  cmp     word ptr [5Ch],0h               
6a42  jne     6A47h                           
6a44  jmp     6A55h                           
6a47  push    258h                            
6a4a  push    6A35h                           ; segment seg1:0000
6a4d  push    7F84h                           
6a50  call far M007.UIF_MESSAGE               ; "action 3 - HP_REQUIRED_1 Msg"
6a55  push    0h                              
6a57  push    0h                              
6a59  push    8h                              
6a5b  call far sub_6052                       
6a60  add     sp,6h                           
6a63  push    105h                            
6a66  push    1h                              
6a68  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 1
6a6d  jmp     7048h                           
6a70  cmp     word ptr [5Ch],0h               
6a75  jne     6A7Ah                           
6a77  jmp     6A88h                           
6a7a  push    258h                            
6a7d  push    6A5Eh                           ; segment seg1:0000
6a80  push    7FA2h                           
6a83  call far M007.UIF_MESSAGE               ; "action 4 - GSP vent"
6a88  mov     word ptr [60h],0h               
6a8e  push    1h                              
6a90  call far sub_3a4c                       
6a95  add     sp,2h                           
6a98  jmp     7048h                           
6a9b  cmp     word ptr [5Ch],0h               
6aa0  jne     6AA5h                           
6aa2  jmp     6AB3h                           
6aa5  push    258h                            
6aa8  push    6A93h                           ; segment seg1:0000
6aab  push    7FB6h                           
6aae  call far M007.UIF_MESSAGE               ; "action 5 - PUMPING_ON_LP Msg"
6ab3  push    0h                              
6ab5  push    0h                              
6ab7  push    5h                              
6ab9  call far sub_6052                       
6abe  add     sp,6h                           
6ac1  jmp     7048h                           
6ac4  cmp     word ptr [5Ch],0h               
6ac9  jne     6ACEh                           
6acb  jmp     6ADCh                           
6ace  push    258h                            
6ad1  push    6ABCh                           ; segment seg1:0000
6ad4  push    7FD4h                           
6ad7  call far M007.UIF_MESSAGE               ; "action 6 - HP_REQUIRED_2 Msg"
6adc  push    0h                              
6ade  push    0h                              
6ae0  push    9h                              
6ae2  call far sub_6052                       
6ae7  add     sp,6h                           
6aea  push    105h                            
6aed  push    1h                              
6aef  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 1
6af4  jmp     7048h                           
6af7  cmp     word ptr [5Ch],0h               
6afc  jne     6B01h                           
6afe  jmp     6B0Fh                           
6b01  push    258h                            
6b04  push    6AE5h                           ; segment seg1:0000
6b07  push    7FF2h                           
6b0a  call far M007.UIF_MESSAGE               ; "action 7 - HP_PUMPING_OFF_LP Msg"
6b0f  push    0h                              
6b11  push    0h                              
6b13  push    7h                              
6b15  call far sub_6052                       
6b1a  add     sp,6h                           
6b1d  jmp     7048h                           
6b20  cmp     word ptr [5Ch],0h               
6b25  jne     6B2Ah                           
6b27  jmp     6B38h                           
6b2a  push    258h                            
6b2d  push    6B18h                           ; segment seg1:0000
6b30  push    8014h                           
6b33  call far M007.UIF_MESSAGE               ; "action 8 - HP_PUMP Msg"
6b38  push    0h                              
6b3a  push    0h                              
6b3c  push    11h                             
6b3e  call far sub_6052                       
6b43  add     sp,6h                           
6b46  jmp     7048h                           
6b49  cmp     word ptr [5Ch],0h               
6b4e  jne     6B53h                           
6b50  jmp     6B61h                           
6b53  push    258h                            
6b56  push    6B41h                           ; segment seg1:0000
6b59  push    802Ch                           
6b5c  call far M007.UIF_MESSAGE               ; "action 9 - LP_REQUIRED_1 Msg"
6b61  push    0h                              
6b63  push    0h                              
6b65  push    0Ch                             
6b67  call far sub_6052                       
6b6c  add     sp,6h                           
6b6f  push    105h                            
6b72  push    0h                              
6b74  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
6b79  jmp     7048h                           
6b7c  cmp     word ptr [5Ch],0h               
6b81  jne     6B86h                           
6b83  jmp     6B94h                           
6b86  push    258h                            
6b89  push    6B6Ah                           ; segment seg1:0000
6b8c  push    804Ah                           
6b8f  call far M007.UIF_MESSAGE               ; "action 10 - HP_VENT_1 Msg"
6b94  push    0h                              
6b96  push    0h                              
6b98  push    12h                             
6b9a  call far sub_6052                       
6b9f  add     sp,6h                           
6ba2  jmp     7048h                           
6ba5  cmp     word ptr [5Ch],0h               
6baa  jne     6BAFh                           
6bac  jmp     6BBDh                           
6baf  push    258h                            
6bb2  push    6B9Dh                           ; segment seg1:0000
6bb5  push    8064h                           
6bb8  call far M007.UIF_MESSAGE               ; "action 11 - LP_REQUIRED_2 Msg"
6bbd  push    0h                              
6bbf  push    0h                              
6bc1  push    0Dh                             
6bc3  call far sub_6052                       
6bc8  add     sp,6h                           
6bcb  push    105h                            
6bce  push    0h                              
6bd0  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
6bd5  jmp     7048h                           
6bd8  cmp     word ptr [5Ch],0h               
6bdd  jne     6BE2h                           
6bdf  jmp     6BF0h                           
6be2  push    258h                            
6be5  push    6BC6h                           ; segment seg1:0000
6be8  push    8082h                           
6beb  call far M007.UIF_MESSAGE               ; "action 12 - HP_PUMPING_ON_HP Msg"
6bf0  push    0h                              
6bf2  push    0h                              
6bf4  push    4h                              
6bf6  call far sub_6052                       
6bfb  add     sp,6h                           
6bfe  jmp     7048h                           
6c01  cmp     word ptr [5Ch],0h               
6c06  jne     6C0Bh                           
6c08  jmp     6C19h                           
6c0b  push    258h                            
6c0e  push    6BF9h                           ; segment seg1:0000
6c11  push    80A4h                           
6c14  call far M007.UIF_MESSAGE               ; "action 13 - HP_VENT_3 Msg"
6c19  push    0h                              
6c1b  push    0h                              
6c1d  push    14h                             
6c1f  call far sub_6052                       
6c24  add     sp,6h                           
6c27  jmp     7048h                           
6c2a  cmp     word ptr [5Ch],0h               
6c2f  jne     6C34h                           
6c31  jmp     6C42h                           
6c34  push    258h                            
6c37  push    6C22h                           ; segment seg1:0000
6c3a  push    80BEh                           
6c3d  call far M007.UIF_MESSAGE               ; "action 14 - LP_REQUIRED_4 Msg"
6c42  call far sub_716a                       
6c47  cmp     ax,0h                           
6c4a  jne     6C4Fh                           
6c4c  jmp     6C6Ah                           
6c4f  push    0h                              
6c51  push    0h                              
6c53  push    0Fh                             
6c55  call far sub_6052                       
6c5a  add     sp,6h                           
6c5d  push    105h                            
6c60  push    0h                              
6c62  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
6c67  jmp     6C70h                           
6c6a  mov     word ptr [0E26h],0h             
6c70  jmp     7048h                           
6c73  cmp     word ptr [5Ch],0h               
6c78  jne     6C7Dh                           
6c7a  jmp     6C8Bh                           
6c7d  push    258h                            
6c80  push    6C58h                           ; segment seg1:0000
6c83  push    80DCh                           
6c86  call far M007.UIF_MESSAGE               ; "action 15 - HP_VENT_4 Msg"
6c8b  push    0h                              
6c8d  push    0h                              
6c8f  push    15h                             
6c91  call far sub_6052                       
6c96  add     sp,6h                           
6c99  jmp     7048h                           
6c9c  cmp     word ptr [5Ch],0h               
6ca1  jne     6CA6h                           
6ca3  jmp     6CB4h                           
6ca6  push    258h                            
6ca9  push    6C94h                           ; segment seg1:0000
6cac  push    80F6h                           
6caf  call far M007.UIF_MESSAGE               ; "action 16 - LP_REQUIRED_5 Msg"
6cb4  call far sub_716a                       
6cb9  cmp     ax,0h                           
6cbc  jne     6CC1h                           
6cbe  jmp     6CDCh                           
6cc1  push    0h                              
6cc3  push    0h                              
6cc5  push    10h                             
6cc7  call far sub_6052                       
6ccc  add     sp,6h                           
6ccf  push    105h                            
6cd2  push    0h                              
6cd4  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
6cd9  jmp     6CE2h                           
6cdc  mov     word ptr [0E26h],0h             
6ce2  jmp     7048h                           
6ce5  cmp     word ptr [5Ch],0h               
6cea  jne     6CEFh                           
6cec  jmp     6CFDh                           
6cef  push    258h                            
6cf2  push    6CCAh                           ; segment seg1:0000
6cf5  push    8114h                           
6cf8  call far M007.UIF_MESSAGE               ; "action 17 - HP_PUMPING_OFF_HP Msg"
6cfd  push    0h                              
6cff  push    0h                              
6d01  push    6h                              
6d03  call far sub_6052                       
6d08  add     sp,6h                           
6d0b  jmp     7048h                           
6d0e  cmp     word ptr [5Ch],0h               
6d13  jne     6D18h                           
6d15  jmp     6D26h                           
6d18  push    258h                            
6d1b  push    6D06h                           ; segment seg1:0000
6d1e  push    8136h                           
6d21  call far M007.UIF_MESSAGE               ; "action 18 - GSP Vac Abort"
6d26  mov     word ptr [60h],0h               
6d2c  push    0h                              
6d2e  push    0h                              
6d30  push    18h                             
6d32  call far sub_6052                       
6d37  add     sp,6h                           
6d3a  jmp     7048h                           
6d3d  cmp     word ptr [5Ch],0h               
6d42  jne     6D47h                           
6d44  jmp     6D55h                           
6d47  push    258h                            
6d4a  push    6D35h                           ; segment seg1:0000
6d4d  push    8150h                           
6d50  call far M007.UIF_MESSAGE               ; "action 19 - HP_REQUIRED_4 Msg"
6d55  push    0h                              
6d57  push    0h                              
6d59  push    0Bh                             
6d5b  call far sub_6052                       
6d60  add     sp,6h                           
6d63  push    105h                            
6d66  push    1h                              
6d68  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 1
6d6d  jmp     7048h                           
6d70  cmp     word ptr [5Ch],0h               
6d75  jne     6D7Ah                           
6d77  jmp     6D88h                           
6d7a  push    258h                            
6d7d  push    6D5Eh                           ; segment seg1:0000
6d80  push    816Eh                           
6d83  call far M007.UIF_MESSAGE               ; "action 20 - HP_REQUIRED_3 Msg"
6d88  push    0h                              
6d8a  push    0h                              
6d8c  push    0Ah                             
6d8e  call far sub_6052                       
6d93  add     sp,6h                           
6d96  push    105h                            
6d99  push    1h                              
6d9b  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 1
6da0  jmp     7048h                           
6da3  cmp     word ptr [5Ch],0h               
6da8  jne     6DADh                           
6daa  jmp     6DBBh                           
6dad  push    258h                            
6db0  push    6D91h                           ; segment seg1:0000
6db3  push    818Ch                           
6db6  call far M007.UIF_MESSAGE               ; "action 21 - HP_PUMPING_ON Msg"
6dbb  push    0h                              
6dbd  push    0h                              
6dbf  push    3h                              
6dc1  call far sub_6052                       
6dc6  add     sp,6h                           
6dc9  jmp     7048h                           
6dcc  cmp     word ptr [5Ch],0h               
6dd1  jne     6DD6h                           
6dd3  jmp     6DE4h                           
6dd6  push    258h                            
6dd9  push    6DC4h                           ; segment seg1:0000
6ddc  push    81AAh                           
6ddf  call far M007.UIF_MESSAGE               ; "action 22 - HP_VENT_2 Msg"
6de4  push    0h                              
6de6  push    0h                              
6de8  push    13h                             
6dea  call far sub_6052                       
6def  add     sp,6h                           
6df2  jmp     7048h                           
6df5  cmp     word ptr [5Ch],0h               
6dfa  jne     6DFFh                           
6dfc  jmp     6E0Dh                           
6dff  push    258h                            
6e02  push    6DEDh                           ; segment seg1:0000
6e05  push    81C4h                           
6e08  call far M007.UIF_MESSAGE               ; "action 23 - LP_REQUIRED_3 Msg"
6e0d  push    0h                              
6e0f  push    0h                              
6e11  push    0Eh                             
6e13  call far sub_6052                       
6e18  add     sp,6h                           
6e1b  push    105h                            
6e1e  push    0h                              
6e20  call far M007.M007_PUTSTATE             ; DP_VAC_MODE = 0
6e25  jmp     7048h                           
6e28  mov     al,[7C2h]                       
6e2b  and     ax,0FFh                         
6e2e  jmp     6F04h                           
6e31  cmp     word ptr [5Ch],0h               
6e36  jne     6E3Bh                           
6e38  jmp     6E49h                           
6e3b  push    258h                            
6e3e  push    6E16h                           ; segment seg1:0000
6e41  push    81E2h                           
6e44  call far M007.UIF_MESSAGE               ; "action 24 - HP_VENT_1 Msg"
6e49  push    0h                              
6e4b  push    0h                              
6e4d  push    12h                             
6e4f  call far sub_6052                       
6e54  add     sp,6h                           
6e57  jmp     6F37h                           
6e5a  cmp     word ptr [5Ch],0h               
6e5f  jne     6E64h                           
6e61  jmp     6E72h                           
6e64  push    258h                            
6e67  push    6E52h                           ; segment seg1:0000
6e6a  push    81FCh                           
6e6d  call far M007.UIF_MESSAGE               ; "action 24 - HP_VENT_3 Msg"
6e72  push    0h                              
6e74  push    0h                              
6e76  push    14h                             
6e78  call far sub_6052                       
6e7d  add     sp,6h                           
6e80  jmp     6F37h                           
6e83  cmp     word ptr [5Ch],0h               
6e88  jne     6E8Dh                           
6e8a  jmp     6E9Bh                           
6e8d  push    258h                            
6e90  push    6E7Bh                           ; segment seg1:0000
6e93  push    8216h                           
6e96  call far M007.UIF_MESSAGE               ; "action 24 - HP_VENT_4 Msg"
6e9b  push    0h                              
6e9d  push    0h                              
6e9f  push    15h                             
6ea1  call far sub_6052                       
6ea6  add     sp,6h                           
6ea9  jmp     6F37h                           
6eac  cmp     word ptr [5Ch],0h               
6eb1  jne     6EB6h                           
6eb3  jmp     6EC4h                           
6eb6  push    258h                            
6eb9  push    6EA4h                           ; segment seg1:0000
6ebc  push    81FCh                           
6ebf  call far M007.UIF_MESSAGE               ; "action 24 - HP_VENT_3 Msg"
6ec4  push    0h                              
6ec6  push    0h                              
6ec8  push    14h                             
6eca  call far sub_6052                       
6ecf  add     sp,6h                           
6ed2  jmp     6F37h                           
6ed5  cmp     word ptr [5Ch],0h               
6eda  jne     6EDFh                           
6edc  jmp     6EEDh                           
6edf  push    258h                            
6ee2  push    6ECDh                           ; segment seg1:0000
6ee5  push    8230h                           
6ee8  call far M007.UIF_MESSAGE               ; "action 24 - HP_VENT_2 Msg"
6eed  push    0h                              
6eef  push    0h                              
6ef1  push    13h                             
6ef3  call far sub_6052                       
6ef8  add     sp,6h                           
6efb  jmp     6F37h                           
6efe  jmp     6F37h                           
6f01  jmp     6F37h                           
6f04  cmp     ax,0Ah                          
6f07  jne     6F0Ch                           
6f09  jmp     6E31h                           
6f0c  cmp     ax,0Ch                          
6f0f  jne     6F14h                           
6f11  jmp     6E5Ah                           
6f14  cmp     ax,0Dh                          
6f17  jne     6F1Ch                           
6f19  jmp     6E83h                           
6f1c  cmp     ax,0Eh                          
6f1f  jne     6F24h                           
6f21  jmp     6E83h                           
6f24  cmp     ax,16h                          
6f27  jne     6F2Ch                           
6f29  jmp     6ED5h                           
6f2c  cmp     ax,1Bh                          
6f2f  jne     6F34h                           
6f31  jmp     6EACh                           
6f34  jmp     6EFEh                           
6f37  jmp     7048h                           
6f3a  cmp     word ptr [60h],1h               
6f3f  je      6F44h                           
6f41  jmp     6F70h                           
6f44  cmp     word ptr [5Ch],0h               
6f49  jne     6F4Eh                           
6f4b  jmp     6F5Ch                           
6f4e  push    258h                            
6f51  push    6EF6h                           ; segment seg1:0000
6f54  push    824Ah                           
6f57  call far M007.UIF_MESSAGE               ; "action 25 - turn beam on"
6f5c  call far M100.DOCOMMANDBEAM_ON          
6f61  mov     word ptr [62h],1h               
6f67  mov     word ptr [60h],0h               
6f6d  jmp     6F88h                           
6f70  cmp     word ptr [5Ch],0h               
6f75  jne     6F7Ah                           
6f77  jmp     6F88h                           
6f7a  push    258h                            
6f7d  push    6F52h                           ; segment seg1:0000
6f80  push    8264h                           
6f83  call far M007.UIF_MESSAGE               ; "action 25 - don't turn beam on"
6f88  mov     word ptr [5Eh],0h               
6f8e  jmp     7048h                           
6f91  cmp     word ptr [5Ch],0h               
6f96  jne     6F9Bh                           
6f98  jmp     6FA9h                           
6f9b  push    258h                            
6f9e  push    6F7Eh                           ; segment seg1:0000
6fa1  push    8284h                           
6fa4  call far M007.UIF_MESSAGE               ; "action 26 - reset beam on/off variables"
6fa9  mov     word ptr [5Eh],0h               
6faf  mov     word ptr [60h],0h               
6fb5  jmp     7048h                           
6fb8  cmp     word ptr [5Ch],0h               
6fbd  jne     6FC2h                           
6fbf  jmp     6FD0h                           
6fc2  push    258h                            
6fc5  push    6F9Fh                           ; segment seg1:0000
6fc8  push    82ACh                           
6fcb  call far M007.UIF_MESSAGE               ; "action 27 - HP_VAC_ABORT Msg"
6fd0  push    0h                              
6fd2  push    0h                              
6fd4  push    18h                             
6fd6  call far sub_6052                       
6fdb  add     sp,6h                           
6fde  jmp     7048h                           
6fe1  cmp     word ptr [5Ch],0h               
6fe6  jne     6FEBh                           
6fe8  jmp     6FF9h                           
6feb  push    258h                            
6fee  push    6FD9h                           ; segment seg1:0000
6ff1  push    82CAh                           
6ff4  call far M007.UIF_MESSAGE               ; "default - shouldn't get here"
6ff9  jmp     7048h                           
6ffc  jmp     7048h                           
6fff  cmp     ax,1Bh                          
7002  jbe     7007h                           
7004  jmp     6FE1h                           
7007  shl     ax,1                            
7009  mov     bx,ax                           
700b  jmp     word ptr cs:[bx+7010h]          
7010  nop                                     
7011  imul    di,bp,1869h                     
7015  push    3Dh                             
7017  push    70h                             
7019  push    -65h                            
701b  push    -3Ch                            
701d  push    -9h                             
701f  push    20h                             
7021  imul    cx,[bx+di+6Bh],7Ch              
7025  imul    sp,[di-2795h],6Bh               
702a  add     [si+2Ah],bp                     
702d  insb                                    
702e  jae     709Ch                           
7030  pushf                                   
7031  insb                                    
7032  in      ax,6Ch                          
7034  push    cs                              
7035  insw                                    
7036  cmp     ax,706Dh                        
7039  insw                                    
703a  mov     [0CC6Dh],ax                     
703d  insw                                    
703e  cmc                                     
703f  insw                                    
7040  sub     [bp+3Ah],ch                     
7043  outsw                                   
7044  xchg    ax,cx                           
7045  outsw                                   
7046  mov     ax,0A06Fh                       
7049  rol     word ptr [bx],25h               
704c  inc     word ptr [bx+si]                
704e  imul    ax,ax,30h                       
7051  mov     bx,7C4h                         
7054  add     bx,ax                           
7056  mov     al,[bp+6h]                      
7059  and     ax,0FFh                         
705c  shl     ax,1                            
705e  add     bx,ax                           
7060  mov     al,[bx+1h]                      
7063  and     ax,0FFh                         
7066  cmp     ax,0h                           
7069  jne     706Eh                           
706b  jmp     713Eh                           
706e  cmp     word ptr [0E26h],1h             
7073  je      7078h                           
7075  jmp     713Eh                           
7078  mov     al,[7C1h]                       
707b  mov     [7C2h],al                       
707e  mov     al,[7C1h]                       
7081  and     ax,0FFh                         
7084  imul    ax,ax,30h                       
7087  mov     bx,7C4h                         
708a  add     bx,ax                           
708c  mov     al,[bp+6h]                      
708f  and     ax,0FFh                         
7092  shl     ax,1                            
7094  add     bx,ax                           
7096  mov     al,[bx+1h]                      
7099  mov     [7C1h],al                       
709c  mov     al,[7C1h]                       
709f  and     ax,0FFh                         
70a2  jmp     70D2h                           
70a5  mov     word ptr [64h],0h               
70ab  mov     word ptr [66h],0h               
70b1  jmp     7116h                           
70b4  mov     word ptr [64h],0h               
70ba  mov     word ptr [66h],0h               
70c0  jmp     7116h                           
70c3  mov     word ptr [64h],0h               
70c9  mov     word ptr [66h],0h               
70cf  jmp     7116h                           
70d2  sub     ax,3h                           
70d5  cmp     ax,17h                          
70d8  jbe     70DDh                           
70da  jmp     70C3h                           
70dd  shl     ax,1                            
70df  mov     bx,ax                           
70e1  jmp     word ptr cs:[bx+70E6h]          
70e6  mov     ah,70h                          
70e8  ret                                     
70e9  jo      70AEh                           
70eb  jo      70B0h                           
70ed  jo      70A3h                           
70ef  jo      70B4h                           
70f1  jo      70A7h                           
70f3  jo      70B8h                           
70f5  jo      70ABh                           
70f7  jo      709Eh                           
70f9  jo      70BEh                           
70fb  jo      70C0h                           
70fd  jo      70B3h                           
70ff  jo      70C4h                           
7101  jo      70B7h                           
7103  jo      70B9h                           
7105  jo      70ACh                           
7107  jo      70AEh                           
7109  jo      70B0h                           
710b  jo      70B2h                           
710d  jo      70D2h                           
710f  jo      70D4h                           
7111  jo      70D6h                           
7113  jo      70C9h                           
7115  jo      709Ah                           
7117  add     ds:[bx+si],al                   
711b  jge     7120h                           
711d  jmp     7138h                           
7120  jle     7125h                           
7122  jmp     712Fh                           
7125  cmp     word ptr [64h],0h               
712a  ja      712Fh                           
712c  jmp     7138h                           
712f  mov     word ptr [68h],1h               
7135  jmp     713Eh                           
7138  mov     word ptr [68h],0h               
713e  cmp     word ptr [5Ch],0h               
7143  jne     7148h                           
7145  jmp     7164h                           
7148  push    258h                            
714b  mov     al,[7C1h]                       
714e  and     ax,0FFh                         
7151  mov     bx,ax                           
7153  shl     bx,1                            
7155  shl     bx,1                            
7157  push    word ptr [bx+8Ch]               
715b  push    word ptr [bx+8Ah]               
715f  call far M007.UIF_MESSAGE               
7164  pop     ds                              
7165  pop     di                              
7166  pop     si                              
7167  leave                                   
7168  retf                                    
7169  add     [bx+si],al                      

; ----- sub_716a -----
716a  mov     ax,6939h                        ; segment seg2:0000
716d  enter   2h,0h                           
7171  push    si                              
7172  push    di                              
7173  push    ds                              
7174  mov     ds,ax                           
7176  push    0Eh                             
7178  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
717d  cmp     ax,9h                           
7180  jne     7185h                           
7182  jmp     7194h                           
7185  push    0Eh                             
7187  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
718c  cmp     ax,0h                           
718f  je      7194h                           
7191  jmp     71BBh                           
7194  cmp     word ptr [5Ch],0h               
7199  jne     719Eh                           
719b  jmp     71ACh                           
719e  push    258h                            
71a1  push    6FEFh                           ; segment seg1:0000
71a4  push    8308h                           
71a7  call far M007.UIF_MESSAGE               
71ac  mov     word ptr [5Eh],0h               
71b2  mov     ax,1h                           
71b5  jmp     7294h                           
71b8  jmp     7294h                           
71bb  push    0Eh                             
71bd  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
71c2  cmp     ax,1h                           
71c5  jne     71CAh                           
71c7  jmp     7206h                           
71ca  push    0Eh                             
71cc  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
71d1  cmp     ax,7h                           
71d4  jne     71D9h                           
71d6  jmp     7206h                           
71d9  push    0Eh                             
71db  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
71e0  cmp     ax,0Ah                          
71e3  jne     71E8h                           
71e5  jmp     7206h                           
71e8  push    0Eh                             
71ea  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
71ef  cmp     ax,6h                           
71f2  jne     71F7h                           
71f4  jmp     7206h                           
71f7  push    0Eh                             
71f9  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
71fe  cmp     ax,2h                           
7201  je      7206h                           
7203  jmp     7288h                           
7206  push    0Eh                             
7208  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
720d  cmp     ax,1h                           
7210  jne     7215h                           
7212  jmp     7233h                           
7215  push    0Eh                             
7217  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
721c  cmp     ax,6h                           
721f  jne     7224h                           
7221  jmp     7233h                           
7224  push    0Eh                             
7226  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
722b  cmp     ax,2h                           
722e  je      7233h                           
7230  jmp     723Ch                           
7233  mov     word ptr [60h],1h               
7239  jmp     7242h                           
723c  mov     word ptr [60h],0h               
7242  cmp     word ptr [5Ch],0h               
7247  jne     724Ch                           
7249  jmp     725Ah                           
724c  push    258h                            
724f  push    71A2h                           ; segment seg1:0000
7252  push    82E8h                           
7255  call far M007.UIF_MESSAGE               ; "beam_is_off - turning beam off"
725a  push    0h                              
725c  push    1h                              
725e  push    16h                             
7260  call far sub_6052                       
7265  add     sp,6h                           
7268  push    2h                              
726a  call far M700.SWITCHFREEZE_ON           
726f  call far M700.DOCOMMANDFREEZE_ALL       
7274  call far M100.DOCOMMANDBEAM_OFF         
7279  mov     word ptr [5Eh],1h               
727f  mov     ax,0h                           
7282  jmp     7294h                           
7285  jmp     7294h                           
7288  mov     word ptr [5Eh],1h               
728e  mov     ax,0h                           
7291  jmp     7294h                           
7294  pop     ds                              
7295  pop     di                              
7296  pop     si                              
7297  leave                                   
7298  retf                                    
7299  add     [bx+si],al                      

; ----- sub_729a -----
729a  mov     ax,716Bh                        ; segment seg2:0000
729d  enter   0Ah,0h                          
72a1  push    si                              
72a2  push    di                              
72a3  push    ds                              
72a4  mov     ds,ax                           
72a6  mov     word ptr [bp-8h],0h             
72ab  mov     word ptr [bp-6h],0h             
72b0  les     bx,[bp+6h]                      
72b3  mov     al,es:[bx]                      
72b6  cbw                                     
72b7  mov     bx,17Dh                         
72ba  add     bx,ax                           
72bc  mov     al,[bx]                         
72be  and     ax,0FFh                         
72c1  and     ax,8h                           
72c4  cmp     ax,0h                           
72c7  jne     72CCh                           
72c9  jmp     72D3h                           
72cc  add     word ptr [bp+6h],1h             
72d0  jmp     72B0h                           
72d3  les     bx,[bp+6h]                      
72d6  mov     al,es:[bx]                      
72d9  mov     [bp-4h],al                      
72dc  cbw                                     
72dd  cmp     ax,2Dh                          
72e0  je      72E5h                           
72e2  jmp     72EBh                           
72e5  mov     ax,1h                           
72e8  jmp     72EEh                           
72eb  mov     ax,0h                           
72ee  mov     [bp-0Ah],ax                     
72f1  cmp     ax,0h                           
72f4  jne     72F9h                           
72f6  jmp     7309h                           
72f9  add     word ptr [bp+6h],1h             
72fd  les     bx,[bp+6h]                      
7300  mov     al,es:[bx]                      
7303  mov     [bp-4h],al                      
7306  jmp     7322h                           
7309  mov     al,[bp-4h]                      
730c  cbw                                     
730d  cmp     ax,2Bh                          
7310  je      7315h                           
7312  jmp     7322h                           
7315  add     word ptr [bp+6h],1h             
7319  les     bx,[bp+6h]                      
731c  mov     al,es:[bx]                      
731f  mov     [bp-4h],al                      
7322  mov     al,[bp-4h]                      
7325  cbw                                     
7326  mov     bx,17Dh                         
7329  add     bx,ax                           
732b  mov     al,[bx]                         
732d  and     ax,0FFh                         
7330  and     ax,4h                           
7333  cmp     ax,0h                           
7336  jne     733Bh                           
7338  jmp     7372h                           
733b  mov     ax,0Ah                          
733e  mov     dx,0h                           
7341  push    dx                              
7342  push    ax                              
7343  push    word ptr [bp-6h]                
7346  push    word ptr [bp-8h]                
7349  call far sub_010e                       
734e  mov     [bp-8h],ax                      
7351  mov     [bp-6h],dx                      
7354  mov     al,[bp-4h]                      
7357  cbw                                     
7358  add     ax,0FFD0h                       
735b  cwd                                     
735c  add     [bp-8h],ax                      
735f  adc     [bp-6h],dx                      
7362  add     word ptr [bp+6h],1h             
7366  les     bx,[bp+6h]                      
7369  mov     al,es:[bx]                      
736c  mov     [bp-4h],al                      
736f  jmp     7322h                           
7372  mov     ax,[bp-8h]                      
7375  mov     dx,[bp-6h]                      
7378  jmp     737Bh                           
737b  pop     ds                              
737c  pop     di                              
737d  pop     si                              
737e  leave                                   
737f  retf                                    

; ----- sub_7380 -----
7380  mov     ax,729Bh                        ; segment seg2:0000
7383  enter   2h,0h                           
7387  push    si                              
7388  push    di                              
7389  push    ds                              
738a  mov     ds,ax                           
738c  mov     ax,[58h]                        
738f  les     bx,[bp+6h]                      
7392  mov     es:[bx],ax                      
7395  mov     al,[7C1h]                       
7398  and     ax,0FFh                         
739b  cmp     ax,16h                          
739e  jne     73A3h                           
73a0  jmp     73B0h                           
73a3  mov     al,[7C1h]                       
73a6  and     ax,0FFh                         
73a9  les     bx,[bp+6h]                      
73ac  mov     es:[bx+2h],ax                   
73b0  mov     al,[70h]                        
73b3  and     ax,0FFh                         
73b6  les     bx,[bp+6h]                      
73b9  mov     es:[bx+4h],ax                   
73bd  les     bx,[bp+6h]                      
73c0  mov     ax,[6Ah]                        
73c3  mov     es:[bx+6h],ax                   
73c7  les     bx,[bp+6h]                      
73ca  mov     ax,[6Ch]                        
73cd  mov     es:[bx+8h],ax                   
73d1  les     bx,[bp+6h]                      
73d4  mov     ax,[5Eh]                        
73d7  mov     es:[bx+0Ah],ax                  
73db  mov     al,[71h]                        
73de  and     ax,0FFh                         
73e1  les     bx,[bp+6h]                      
73e4  mov     es:[bx+0Ch],ax                  
73e8  mov     al,[72h]                        
73eb  and     ax,0FFh                         
73ee  les     bx,[bp+6h]                      
73f1  mov     es:[bx+0Eh],ax                  
73f5  push    10Ah                            
73f8  call far M007.M007_GETSTATE             ; DP_FIXED_APERTURE
73fd  les     bx,[bp+6h]                      
7400  mov     es:[bx+10h],ax                  
7404  push    109h                            
7407  call far M007.M007_GETSTATE             ; DP_HP_ERROR
740c  les     bx,[bp+6h]                      
740f  mov     es:[bx+12h],ax                  
7413  push    0Eh                             
7415  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
741a  les     bx,[bp+6h]                      
741d  mov     es:[bx+14h],ax                  
7421  push    106h                            
7424  call far M007.M007_GETSTATE             ; DP_HP_V8
7429  les     bx,[bp+6h]                      
742c  mov     es:[bx+16h],ax                  
7430  push    107h                            
7433  call far M007.M007_GETSTATE             ; DP_HP_V14
7438  les     bx,[bp+6h]                      
743b  mov     es:[bx+18h],ax                  
743f  mov     ax,1h                           
7442  jmp     7445h                           
7445  pop     ds                              
7446  pop     di                              
7447  pop     si                              
7448  leave                                   
7449  retf                                    

; ===== RESTART_HPAPP =====
744a  mov     ax,7381h                        ; segment seg2:0000
744d  enter   2h,0h                           
7451  push    si                              
7452  push    di                              
7453  push    ds                              
7454  mov     ds,ax                           
7456  mov     word ptr [56h],0h               
745c  call far sub_6084                       
7461  push    108h                            
7464  mov     al,[7C1h]                       
7467  and     ax,0FFh                         
746a  push    ax                              
746b  call far M007.M007_PUTSTATE             ; DP_HP_STATUS = 1
7470  push    109h                            
7473  push    0h                              
7475  call far M007.M007_PUTSTATE             ; DP_HP_ERROR = 0
747a  mov     byte ptr [71h],0h               
747f  mov     word ptr [6Eh],0h               
7485  mov     word ptr [54h],1h               
748b  mov     word ptr [58h],1h               
7491  mov     word ptr [6Ah],0h               
7497  pop     ds                              
7498  pop     di                              
7499  pop     si                              
749a  leave                                   
749b  retf                                    

; ===== CLOSE_HPAPP =====
749c  mov     ax,744Bh                        ; segment seg2:0000
749f  enter   2h,0h                           
74a3  push    si                              
74a4  push    di                              
74a5  push    ds                              
74a6  mov     ds,ax                           
74a8  push    745Fh                           ; segment seg1:0000
74ab  push    7E44h                           
74ae  call far KERNEL.GETMODULEHANDLE         ; "HPAPP.EXE"
74b3  cmp     ax,0h                           
74b6  jne     74BBh                           
74b8  jmp     74D8h                           
74bb  push    0h                              
74bd  push    0h                              
74bf  push    17h                             
74c1  call far sub_6052                       
74c6  add     sp,6h                           
74c9  mov     word ptr [58h],0h               
74cf  mov     ax,0h                           
74d2  jmp     74DEh                           
74d5  jmp     74DEh                           
74d8  mov     ax,1h                           
74db  jmp     74DEh                           
74de  pop     ds                              
74df  pop     di                              
74e0  pop     si                              
74e1  leave                                   
74e2  retf                                    
74e3  add     [bx+si],al                      

; ----- sub_74e4 -----
74e4  mov     ax,749Dh                        ; segment seg2:0000
74e7  enter   20h,0h                          
74eb  push    si                              
74ec  push    di                              
74ed  push    ds                              
74ee  mov     ds,ax                           
74f0  lea     ax,[bp-1Ch]                     
74f3  mov     dx,ss                           
74f5  push    dx                              
74f6  push    ax                              
74f7  call far sub_7380                       
74fc  add     sp,4h                           
74ff  cmp     word ptr [bp-0Ch],0h            
7503  jne     7508h                           
7505  jmp     7523h                           
7508  cmp     word ptr [bp-10h],1h            
750c  jne     7511h                           
750e  jmp     7523h                           
7511  cmp     word ptr [bp-12h],1h            
7515  jne     751Ah                           
7517  jmp     7523h                           
751a  cmp     word ptr [bp-16h],1h            
751e  je      7523h                           
7520  jmp     7530h                           
7523  push    141h                            
7526  push    0h                              
7528  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
752d  jmp     773Ah                           
7530  mov     ax,[bp-1Ah]                     
7533  jmp     76F1h                           
7536  push    141h                            
7539  push    0h                              
753b  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
7540  jmp     773Ah                           
7543  push    141h                            
7546  push    1h                              
7548  call far M007.M007_PUTSTATE             ; DP_VP_OK = 1
754d  jmp     773Ah                           
7550  push    141h                            
7553  push    0h                              
7555  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
755a  jmp     773Ah                           
755d  push    141h                            
7560  push    0h                              
7562  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
7567  jmp     773Ah                           
756a  push    3Ah                             
756c  call far M007.M007_GETSTATE             ; DP_VACSTATUS
7571  cwd                                     
7572  mov     [bp-20h],ax                     
7575  mov     [bp-1Eh],dx                     
7578  cmp     word ptr [bp-20h],4h            
757c  je      7581h                           
757e  jmp     758Ah                           
7581  cmp     word ptr [bp-1Eh],0h            
7585  jne     758Ah                           
7587  jmp     759Ch                           
758a  cmp     word ptr [bp-20h],5h            
758e  je      7593h                           
7590  jmp     75A9h                           
7593  cmp     word ptr [bp-1Eh],0h            
7597  je      759Ch                           
7599  jmp     75A9h                           
759c  push    141h                            
759f  push    0h                              
75a1  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
75a6  jmp     75B3h                           
75a9  push    141h                            
75ac  push    1h                              
75ae  call far M007.M007_PUTSTATE             ; DP_VP_OK = 1
75b3  jmp     773Ah                           
75b6  push    141h                            
75b9  push    1h                              
75bb  call far M007.M007_PUTSTATE             ; DP_VP_OK = 1
75c0  jmp     773Ah                           
75c3  push    141h                            
75c6  push    0h                              
75c8  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
75cd  jmp     773Ah                           
75d0  push    141h                            
75d3  push    0h                              
75d5  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
75da  jmp     773Ah                           
75dd  push    141h                            
75e0  push    2h                              
75e2  call far M007.M007_PUTSTATE             ; DP_VP_OK = 2
75e7  jmp     773Ah                           
75ea  push    141h                            
75ed  push    0h                              
75ef  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
75f4  jmp     773Ah                           
75f7  push    141h                            
75fa  push    2h                              
75fc  call far M007.M007_PUTSTATE             ; DP_VP_OK = 2
7601  jmp     773Ah                           
7604  push    141h                            
7607  push    0h                              
7609  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
760e  jmp     773Ah                           
7611  push    141h                            
7614  push    2h                              
7616  call far M007.M007_PUTSTATE             ; DP_VP_OK = 2
761b  jmp     773Ah                           
761e  push    141h                            
7621  push    2h                              
7623  call far M007.M007_PUTSTATE             ; DP_VP_OK = 2
7628  jmp     773Ah                           
762b  push    141h                            
762e  push    2h                              
7630  call far M007.M007_PUTSTATE             ; DP_VP_OK = 2
7635  jmp     773Ah                           
7638  push    141h                            
763b  push    0h                              
763d  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
7642  jmp     773Ah                           
7645  push    141h                            
7648  push    0h                              
764a  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
764f  jmp     773Ah                           
7652  push    141h                            
7655  push    0h                              
7657  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
765c  jmp     773Ah                           
765f  push    141h                            
7662  push    0h                              
7664  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
7669  jmp     773Ah                           
766c  push    141h                            
766f  push    0h                              
7671  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
7676  jmp     773Ah                           
7679  push    141h                            
767c  push    0h                              
767e  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
7683  jmp     773Ah                           
7686  push    141h                            
7689  push    0h                              
768b  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
7690  jmp     773Ah                           
7693  push    141h                            
7696  push    0h                              
7698  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
769d  jmp     773Ah                           
76a0  push    141h                            
76a3  push    0h                              
76a5  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
76aa  jmp     773Ah                           
76ad  push    141h                            
76b0  push    0h                              
76b2  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
76b7  jmp     773Ah                           
76ba  push    141h                            
76bd  push    0h                              
76bf  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
76c4  jmp     773Ah                           
76c7  push    141h                            
76ca  push    0h                              
76cc  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
76d1  jmp     773Ah                           
76d4  push    141h                            
76d7  push    0h                              
76d9  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
76de  jmp     773Ah                           
76e1  push    141h                            
76e4  push    0h                              
76e6  call far M007.M007_PUTSTATE             ; DP_VP_OK = 0
76eb  jmp     773Ah                           
76ee  jmp     773Ah                           
76f1  cmp     ax,1Bh                          
76f4  jbe     76F9h                           
76f6  jmp     76E1h                           
76f9  shl     ax,1                            
76fb  mov     bx,ax                           
76fd  jmp     word ptr cs:[bx+7702h]          
7702  jne     7748h                           
7705  jne     7757h                           
7707  jne     7766h                           
7709  jne     7775h                           
770b  jne     76C3h                           
770d  jne     76D2h                           
770f  jne     76E1h                           
7711  jne     76F0h                           
7713  jne     76FFh                           
7715  jne     770Eh                           
7717  jne     771Dh                           
7719  jbe     772Ch                           
771b  jbe     773Bh                           
771d  jbe     774Ah                           
771f  jbe     7759h                           
7721  jbe     7768h                           
7723  jbe     7777h                           
7725  jbe     7786h                           
7727  jbe     7795h                           
7729  jbe     77A4h                           
772b  jbe     76B3h                           
772d  jbe     76C2h                           
772f  jbe     76D1h                           
7731  jbe     76E0h                           
7733  jbe     76EFh                           
7735  jbe     76FEh                           
7737  jbe     770Dh                           
7739  jbe     775Ah                           
773b  pop     di                              
773c  pop     si                              
773d  leave                                   
773e  retf                                    
773f  add     [bx+si+50h],cl                  
7742  inc     cx                              
7743  push    ax                              
7744  push    ax                              
7745  and     [bp+di+74h],dh                  
7748  popa                                    
7749  jb      77BFh                           
774b  and     [di+72h],ah                     
774e  jb      77BFh                           
7750  jb      7780h                           
7752  and     [bp+di+45h],dl                  
7755  dec     bp                              
7756  and     [bp+di+65h],dh                  
7759  je      777Bh                           
775b  je      77CCh                           
775d  and     [si+50h],cl                     
7760  and     [di+6Fh],ch                     
7763  and     gs:[bx+6Eh],ch                  
7768  insb                                    
7769  jns     7799h                           
776b  add     [bx+si+50h],cl                  
776e  inc     cx                              
776f  push    ax                              
7770  push    ax                              
7771  and     [bp+si+65h],dh                  
7774  jae     77E6h                           
7776  outsw                                   
7777  outsb                                   
7778  jae     77DFh                           
777a  and     [si+69h],dh                     
777d  insw                                    
777e  outsw   gs:                             
7780  jne     77F6h                           
7782  and     cs:[bx+si+6Ch],dl               
7786  popa                                    
7788  jae     77EFh                           
778a  and     [bx+61h],dh                     
778d  imul    si,[si+20h],6F66h               
7792  jb      77B4h                           
7794  push    bx                              
7795  inc     bp                              
7796  dec     bp                              
7797  and     [si+6Fh],dh                     
779a  and     [bp+si+65h],dh                  
779d  popa                                    
779e  arpl    [bx+si+20h],bp                  
77a1  popa                                    
77a2  and     [bp+di+61h],dh                  
77a5  and     gs:[bp+di+74h],dh               
77aa  popa                                    
77ab  je      7812h                           
77ad  add     cs:[bx+si],al                   
77b0  dec     ax                              
77b1  push    ax                              
77b2  inc     cx                              
77b3  push    ax                              
77b4  push    ax                              
77b5  and     [bx+si+61h],ch                  
77b8  jae     77DAh                           
77ba  arpl    [si+6Fh],bp                     
77bd  jae     7824h                           
77bf  and     cs:[bx+si+6Ch],dl               
77c4  popa                                    
77c6  jae     782Dh                           
77c8  and     [bx+61h],dh                     
77cb  imul    si,[si+20h],6F66h               
77d0  jb      77F2h                           
77d2  push    bx                              
77d3  inc     bp                              
77d4  dec     bp                              
77d5  and     [si+6Fh],dh                     
77d8  and     [bp+si+65h],dh                  
77db  popa                                    
77dc  arpl    [bx+si+20h],bp                  
77df  popa                                    
77e0  and     [bp+di+61h],dh                  
77e3  and     gs:[bp+di+74h],dh               
77e8  popa                                    
77e9  je      7850h                           
77eb  add     cs:[bx+si],al                   
77ee  dec     ax                              
77ef  push    ax                              
77f0  inc     cx                              
77f1  push    ax                              
77f2  push    ax                              
77f3  and     [bx+si+75h],ch                  
77f6  outsb                                   
77f7  and     [ebp+70h],dh                    
77fb  and     cs:[bx+si+6Ch],dl               
77ff  popa                                    
7801  jae     7868h                           
7803  and     [bx+61h],dh                     
7806  imul    si,[si+20h],6F66h               
780b  jb      782Dh                           
780d  push    bx                              
780e  inc     bp                              
780f  dec     bp                              
7810  and     [si+6Fh],dh                     
7813  and     [bp+si+65h],dh                  
7816  popa                                    
7817  arpl    [bx+si+20h],bp                  
781a  popa                                    
781b  and     [bp+di+61h],dh                  
781e  and     gs:[bp+di+74h],dh               
7823  popa                                    
7824  je      788Bh                           
7826  add     cs:[bx+si+50h],cl               
782a  inc     cx                              
782b  push    ax                              
782c  push    ax                              
782d  and     [bx+si+61h],ch                  
7830  jae     7852h                           
7832  je      789Bh                           
7836  arpl    [si+65h],si                     
7839  and     fs:[bx+di+20h],ah               
783d  arpl    [bx+6Dh],bp                     
7840  insw                                    
7841  jae     7863h                           
7843  je      78AEh                           
7845  insw                                    
7846  and     gs:[bx+75h],ch                  
784a  je      787Ah                           
784c  and     [bx+si+6Ch],dl                  
784f  popa                                    
7851  jae     78B8h                           
7853  and     [bx+61h],dh                     
7856  imul    si,[si+20h],6F66h               
785b  jb      787Dh                           
785d  push    bx                              
785e  inc     bp                              
785f  dec     bp                              
7860  and     [si+6Fh],dh                     
7863  and     [bp+si+65h],dh                  
7866  popa                                    
7867  arpl    [bx+si+20h],bp                  
786a  popa                                    
786b  and     [bp+di+61h],dh                  
786e  and     gs:[bp+di+74h],dh               
7873  popa                                    
7874  je      78DBh                           
7876  add     cs:[bx+di+6Eh],cl               
787a  imul    si,[si+69h],6C61h               
787f  imul    si,[bp+di+65h],2820h            
7884  inc     cx                              
7885  sub     [bx+si],ax                      
7887  add     [bx+di+74h],al                  
788a  and     [bx+di+69h],al                  
788d  jb      78AFh                           
788f  dec     sp                              
7890  push    ax                              
7891  and     [bx+si],ch                      
7893  inc     dx                              
7894  sub     [bx+si],ax                      
7896  push    di                              
7897  popa                                    
7898  imul    si,[si+69h],676Eh               
789d  and     [bx+si+75h],dl                  
78a0  insw                                    
78a1  jo      7916h                           
78a3  and     [si+50h],cl                     
78a6  and     [bx+si],ch                      
78a8  inc     bx                              
78a9  sub     [bx+si],ax                      
78ab  add     [bx+61h],dl                     
78ae  imul    si,[si+69h],676Eh               
78b3  and     [bx+si+75h],dl                  
78b6  insw                                    
78b7  jo      7922h                           
78b9  outsb                                   
78ba  and     [eax+edx*2+20h],cl              
78bf  sub     [si+29h],al                     
78c2  add     [bx+si],al                      
78c4  push    ax                              
78c5  jne     7934h                           
78c7  jo      7932h                           
78c9  outsb                                   
78ca  and     [eax+edx*2+20h],cl              
78cf  sub     [di+29h],al                     
78d2  add     [bx+si],al                      
78d4  push    si                              
78d5  popa                                    
78d6  arpl    [bx+si],sp                      
78d8  push    dx                              
78d9  popa                                    
78db  jns     78FEh                           
78de  dec     sp                              
78df  push    ax                              
78e0  and     [bx+si],ch                      
78e2  inc     si                              
78e3  sub     [bx+si],ax                      
78e5  add     [bx+61h],dl                     
78e8  imul    si,[si+69h],676Eh               
78ed  and     [bp+6Fh],ah                     
78f0  jb      7912h                           
78f2  inc     cx                              
78f3  imul    si,[bp+si+20h],6441h            
78f8  insw                                    
78f9  imul    si,[si+20h],504Ch               
78fe  and     [bx+si],ch                      
7900  inc     di                              
7901  sub     [bx+si],ax                      
7903  add     [bx+61h],dl                     
7906  imul    si,[si+69h],676Eh               
790b  and     [bp+6Fh],ah                     
790e  jb      7930h                           
7910  inc     cx                              
7911  je      7933h                           
7913  inc     cx                              
7914  imul    si,[bp+si+20h],504Ch            
7919  and     [bx+si],ch                      
791b  dec     ax                              
791c  sub     [bx+si],ax                      
791e  inc     cx                              
791f  je      7941h                           
7921  inc     cx                              
7922  imul    si,[bp+si+20h],5048h            
7927  and     [bx+si],ch                      
7929  dec     cx                              
792a  sub     [bx+si],ax                      
792c  push    di                              
792d  popa                                    
792e  imul    si,[si+69h],676Eh               
7933  and     [bp+6Fh],ah                     
7936  jb      7958h                           
7938  push    dx                              
7939  popa                                    
793b  jns     795Eh                           
793e  je      79AFh                           
7940  and     [bx+si+75h],dl                  
7943  insw                                    
7944  jo      7966h                           
7946  dec     ax                              
7947  push    ax                              
7948  and     [bx+si],ch                      
794a  dec     dx                              
794b  sub     [bx+si],ax                      
794d  add     [bx+61h],dl                     
7950  imul    si,[si+69h],676Eh               
7955  and     [bx+si+75h],dl                  
7958  insw                                    
7959  jo      79CEh                           
795b  and     [bx+si+50h],cl                  
795e  and     [bx+si],ch                      
7960  dec     bx                              
7961  sub     [bx+si],ax                      
7963  add     [bx+61h],dl                     
7966  imul    si,[si+69h],676Eh               
796b  and     [bp+6Fh],ah                     
796e  jb      7990h                           
7970  inc     di                              
7971  outsw                                   
7972  imul    bp,[bp+67h],7420h               
7977  outsw                                   
7978  and     [bx+si+50h],cl                  
797b  and     [bx+si],ch                      
797d  dec     sp                              
797e  sub     [bx+si],ax                      
7980  push    di                              
7981  popa                                    
7982  imul    si,[si+69h],676Eh               
7987  and     [bp+6Fh],ah                     
798a  jb      79ACh                           
798c  inc     cx                              
798d  je      79AFh                           
798f  dec     ax                              
7990  push    ax                              
7991  and     [bx+si],ch                      
7993  dec     bp                              
7994  sub     [bx+si],ax                      
7996  dec     ax                              
7997  push    ax                              
7998  and     [bp+si+65h],dl                  
799b  popa                                    
799c  arpl    [bx+si+65h],bp                  
799f  and     fs:[bx+si],ch                   
79a2  inc     bx                              
79a3  push    6D61h                           
79a6  bound   bp,[5020h]                      
79aa  jb      7A11h                           
79ac  jae     7A21h                           
79ae  sub     cs:[bx+si],sp                   
79b1  sub     [bp+29h],cl                     
79b4  add     [bx+si],al                      
79b6  push    si                              
79b7  popa                                    
79b8  arpl    [bx+si],sp                      
79ba  push    dx                              
79bb  popa                                    
79bd  jns     79E0h                           
79c0  dec     ax                              
79c1  push    ax                              
79c2  and     [bx+si],ch                      
79c4  dec     di                              
79c5  sub     [bx+si],ax                      
79c7  add     [bx+61h],dl                     
79ca  imul    si,[si+69h],676Eh               
79cf  and     [bp+6Fh],ah                     
79d2  jb      79F4h                           
79d4  push    dx                              
79d5  popa                                    
79d7  jns     79FAh                           
79da  je      7A4Bh                           
79dc  and     [bp+65h],dl                     
79df  outsb                                   
79e0  je      7A02h                           
79e2  xor     [bx+si],sp                      
79e4  sub     [bx+si+29h],dl                  
79e7  add     [bx+61h],dl                     
79ea  imul    si,[si+69h],676Eh               
79ef  and     [bp+6Fh],ah                     
79f2  jb      7A14h                           
79f4  inc     cx                              
79f5  imul    si,[bp+si+20h],6441h            
79fa  insw                                    
79fb  imul    si,[si+20h],5048h               
7a00  and     [bx+si],ch                      
7a02  push    cx                              
7a03  sub     [bx+si],ax                      
7a05  add     [bx+61h],dl                     
7a08  imul    si,[si+69h],676Eh               
7a0d  and     [bp+6Fh],ah                     
7a10  jb      7A32h                           
7a12  inc     cx                              
7a13  je      7A35h                           
7a15  inc     cx                              
7a16  imul    si,[bp+si+20h],5048h            
7a1b  and     [bx+si],ch                      
7a1d  push    dx                              
7a1e  sub     [bx+si],ax                      
7a20  push    di                              
7a21  popa                                    
7a22  imul    si,[si+69h],676Eh               
7a27  and     [bp+6Fh],ah                     
7a2a  jb      7A4Ch                           
7a2c  dec     bp                              
7a2d  outsw                                   
7a2e  outsb                                   
7a2f  imul    si,[si+6Fh],2072h               
7a34  dec     di                              
7a35  and     [bx+si],ch                      
7a39  push    bx                              
7a3a  sub     [bx+si],ax                      
7a3c  push    di                              
7a3d  popa                                    
7a3e  imul    si,[si+69h],676Eh               
7a43  and     [di+6Eh],dh                     
7a46  je      7AB1h                           
7a48  insb                                    
7a49  and     [bp+si+65h],ah                  
7a4c  insb                                    
7a4d  outsw                                   
7a4e  ja      7A70h                           
7a50  dec     bp                              
7a51  inc     bx                              
7a52  push    ax                              
7a53  and     [bx+si],ch                      
7a55  push    sp                              
7a56  sub     [bx+si],ax                      
7a58  push    di                              
7a59  popa                                    
7a5a  imul    si,[si+69h],676Eh               
7a5f  and     [bp+6Fh],ah                     
7a62  jb      7A84h                           
7a64  inc     di                              
7a65  jne     7AD5h                           
7a67  and     [di+6Eh],al                     
7a6a  popa                                    
7a6b  bound   bp,[si+65h]                     
7a6e  and     [bx+4Bh],cl                     
7a71  and     [bx+si],ch                      
7a73  push    bp                              
7a74  sub     [bx+si],ax                      
7a76  push    di                              
7a77  popa                                    
7a78  imul    si,[si+69h],676Eh               
7a7d  and     [bp+6Fh],ah                     
7a80  jb      7AA2h                           
7a82  push    si                              
7a83  popa                                    
7a84  insb                                    
7a85  jbe     7AECh                           
7a87  and     [bp+di+68h],al                  
7a8a  popa                                    
7a8b  outsb                                   
7a8c  jae     7AB0h                           
7a90  sub     [bp+29h],dl                     
7a93  add     [bx+61h],dl                     
7a96  imul    si,[si+69h],676Eh               
7a9b  and     [di+6Eh],dh                     
7a9e  je      7B09h                           
7aa0  insb                                    
7aa1  and     [bx+di+62h],ah                  
7aa4  outsw                                   
7aa5  jbe     7B0Ch                           
7aa7  and     [di+43h],cl                     
7aaa  push    ax                              
7aab  and     [bx+si],ch                      
7aad  push    di                              
7aae  sub     [bx+si],ax                      
7ab0  dec     sp                              
7ab1  push    ax                              
7ab2  and     [di+6Fh],cl                     
7ab5  and     gs:[di+72h],al                  
7aba  jb      7B2Bh                           
7abc  jb      7ADEh                           
7abe  push    bx                              
7abf  je      7B22h                           
7ac1  je      7B28h                           
7ac3  and     [bx+di],dh                      
7ac5  and     [bx+si],ch                      
7ac7  pop     ax                              
7ac8  sub     [bx+si],ax                      
7aca  dec     sp                              
7acb  push    ax                              
7acc  and     [di+6Fh],cl                     
7acf  and     gs:[di+72h],al                  
7ad4  jb      7B45h                           
7ad6  jb      7AF8h                           
7ad8  push    bx                              
7ad9  je      7B3Ch                           
7adb  je      7B42h                           
7add  and     [bp+si],dh                      
7adf  and     [bx+si],ch                      
7ae1  pop     cx                              
7ae2  sub     [bx+si],ax                      
7ae4  dec     ax                              
7ae5  push    ax                              
7ae6  and     [di+6Fh],cl                     
7ae9  and     gs:[di+72h],al                  
7aee  jb      7B5Fh                           
7af0  jb      7B12h                           
7af2  push    bx                              
7af3  je      7B56h                           
7af5  je      7B5Ch                           
7af7  and     [bx+si],ch                      
7af9  pop     dx                              
7afa  sub     [bx+si],ax                      
7afc  push    di                              
7afd  popa                                    
7afe  imul    si,[si+69h],676Eh               
7b03  and     [bp+6Fh],ah                     
7b06  jb      7B28h                           
7b08  push    dx                              
7b09  popa                                    
7b0b  jns     7B2Eh                           
7b0e  je      7B7Fh                           
7b10  and     [bp+65h],dl                     
7b13  outsb                                   
7b14  je      7B36h                           
7b16  xor     ah,[bx+si]                      
7b18  sub     [bx+di+31h],al                  
7b1b  sub     [bx+si],ax                      
7b1d  add     [bx+61h],dl                     
7b20  imul    si,[si+69h],676Eh               
7b25  and     [bp+6Fh],ah                     
7b28  jb      7B4Ah                           
7b2a  inc     di                              
7b2b  outsw                                   
7b2c  imul    bp,[bp+67h],7420h               
7b31  outsw                                   
7b32  and     [bx+si+50h],cl                  
7b35  and     [bx+si],ch                      
7b37  inc     cx                              
7b38  xor     ch,[bx+di]                      
7b3a  add     [bx+si],al                      
7b3c  push    bp                              
7b3d  jae     7BA4h                           
7b3f  jb      7B61h                           
7b41  push    ax                              
7b42  jne     7BB1h                           
7b44  jo      7B46h                           
7b46  push    bp                              
7b47  jae     7BAEh                           
7b49  jb      7B6Bh                           
7b4b  push    si                              
7b4c  outsb   gs:                             
7b4e  je      7B50h                           
7b50  push    bp                              
7b51  jae     7BB8h                           
7b53  jb      7B75h                           
7b55  push    si                              
7b56  popa                                    
7b57  arpl    [bx+si],sp                      
7b59  inc     cx                              
7b5a  bound   bp,[bx+72h]                     
7b5d  je      7B5Fh                           
7b5f  add     [di+73h],dl                     
7b62  jb      7B85h                           
7b65  dec     ax                              
7b66  push    ax                              
7b67  and     [bp+si+65h],dl                  
7b6a  jno     7BE1h                           
7b6c  imul    si,[bp+si+65h],64h              
7b71  add     [di+73h],dl                     
7b74  jb      7B97h                           
7b77  dec     sp                              
7b78  push    ax                              
7b79  and     [bp+si+65h],dl                  
7b7c  jno     7BF3h                           
7b7e  imul    si,[bp+si+65h],64h              
7b83  add     [bx+72h],cl                     
7b86  jae     7BE9h                           
7b88  jns     7BAAh                           
7b8a  inc     cx                              
7b8b  je      7BECh                           
7b8d  inc     cx                              
7b8e  imul    si,[bp+si+5Fh],5048h            
7b93  add     [bx+72h],cl                     
7b96  jae     7BF9h                           
7b98  jns     7BBAh                           
7b9a  inc     cx                              
7b9b  je      7BFCh                           
7b9d  inc     cx                              
7b9e  imul    si,[bp+si+5Fh],504Ch            
7ba3  add     [bx+72h],cl                     
7ba6  jae     7C09h                           
7ba8  jns     7BCAh                           
7baa  push    ax                              
7bab  jne     7C1Ah                           
7bad  jo      7C18h                           
7baf  outsb                                   
7bb0  pop     di                              
7bb2  dec     sp                              
7bb3  push    ax                              
7bb4  add     [bx+si],al                      
7bb6  dec     di                              
7bb7  jb      7C2Ch                           
7bb9  popa                                    
7bba  jns     7BDCh                           
7bbc  inc     di                              
7bbd  jne     7C2Dh                           
7bbf  pop     di                              
7bc0  inc     bp                              
7bc1  outsb                                   
7bc2  popa                                    
7bc3  bound   bp,[si+65h]                     
7bc6  pop     di                              
7bc7  dec     di                              
7bc8  dec     bx                              
7bc9  add     [bx+72h],cl                     
7bcc  jae     7C2Fh                           
7bce  jns     7BF0h                           
7bd0  push    dx                              
7bd1  popa                                    
7bd3  jns     7C35h                           
7bd6  push    sp                              
7bd7  outsw                                   
7bd8  pop     di                              
7bd9  push    ax                              
7bda  jne     7C49h                           
7bdc  jo      7BDEh                           
7bde  dec     di                              
7bdf  jb      7C54h                           
7be1  popa                                    
7be2  jns     7C04h                           
7be4  push    di                              
7be5  popa                                    
7be6  imul    si,[si+69h],676Eh               
7beb  and     [di+6Eh],dh                     
7bee  je      7C59h                           
7bf0  insb                                    
7bf1  and     [bx+di+62h],ah                  
7bf4  outsw                                   
7bf5  jbe     7C5Ch                           
7bf7  and     [di+43h],cl                     
7bfa  push    ax                              
7bfb  add     [bx+72h],cl                     
7bfe  jae     7C61h                           
7c00  jns     7C22h                           
7c02  inc     di                              
7c03  jne     7C73h                           
7c05  and     [di+6Eh],al                     
7c08  popa                                    
7c09  bound   bp,[si+65h]                     
7c0c  and     [si+65h],al                     
7c0f  insb                                    
7c10  popa                                    
7c11  jns     7C13h                           
7c13  add     [bx+72h],cl                     
7c16  jae     7C79h                           
7c18  jns     7C3Ah                           
7c1a  inc     di                              
7c1b  outsw                                   
7c1c  imul    bp,[bp+67h],7420h               
7c21  outsw                                   
7c22  and     [bx+si+50h],cl                  
7c25  add     [bx+72h],cl                     
7c28  jae     7C8Bh                           
7c2a  jns     7C4Ch                           
7c2c  push    di                              
7c2d  popa                                    
7c2e  imul    si,[si+69h],676Eh               
7c33  and     [di+6Eh],dh                     
7c36  je      7CA1h                           
7c38  insb                                    
7c39  and     [bp+si+65h],ah                  
7c3c  insb                                    
7c3d  outsw                                   
7c3e  ja      7C60h                           
7c40  dec     bp                              
7c41  inc     bx                              
7c42  push    ax                              
7c43  add     [bx+72h],cl                     
7c46  jae     7CA9h                           
7c48  jns     7C6Ah                           
7c4a  push    dx                              
7c4b  popa                                    
7c4d  jns     7C70h                           
7c50  je      7CC1h                           
7c52  and     [bp+65h],dl                     
7c55  outsb                                   
7c56  je      7C58h                           
7c58  dec     di                              
7c59  jb      7CCEh                           
7c5b  popa                                    
7c5c  jns     7C7Eh                           
7c5e  inc     cx                              
7c5f  je      7C81h                           
7c61  dec     ax                              
7c62  push    ax                              
7c63  add     [bp+61h],dl                     
7c66  arpl    [bx+si],sp                      
7c68  push    bx                              
7c69  je      7CCCh                           
7c6b  je      7CE2h                           
7c6d  jae     7C8Fh                           
7c6f  push    si                              
7c70  inc     bp                              
7c71  dec     si                              
7c72  push    sp                              
7c73  dec     cx                              
7c74  dec     si                              
7c75  inc     di                              
7c76  add     [bx+si],al                      
7c78  push    si                              
7c79  popa                                    
7c7a  arpl    [bx+si],sp                      
7c7c  push    bx                              
7c7d  je      7CE0h                           
7c7f  je      7CF6h                           
7c81  jae     7CA3h                           
7c83  push    dx                              
7c84  inc     bp                              
7c85  inc     cx                              
7c86  inc     sp                              
7c87  pop     cx                              
7c88  add     [bx+si],al                      
7c8a  push    si                              
7c8b  popa                                    
7c8c  arpl    [bx+si],sp                      
7c8e  push    bx                              
7c8f  je      7CF2h                           
7c91  je      7D08h                           
7c93  jae     7CB5h                           
7c95  push    ax                              
7c96  push    bp                              
7c97  dec     bp                              
7c98  push    ax                              
7c99  dec     cx                              
7c9a  dec     si                              
7c9b  inc     di                              
7c9c  add     [bx+si],al                      
7c9e  push    si                              
7c9f  popa                                    
7ca0  arpl    [bx+si],sp                      
7ca2  push    bx                              
7ca3  je      7D06h                           
7ca5  je      7D1Ch                           
7ca7  jae     7CC9h                           
7ca9  push    di                              
7caa  inc     cx                              
7cab  dec     cx                              
7cac  push    sp                              
7cad  dec     cx                              
7cae  dec     si                              
7caf  inc     di                              
7cb0  and     [si+55h],dl                     
7cb3  push    dx                              
7cb4  inc     dx                              
7cb5  dec     di                              
7cb6  add     [bx+si],al                      
7cb8  push    si                              
7cb9  popa                                    
7cba  arpl    [bx+si],sp                      
7cbc  push    bx                              
7cbd  je      7D20h                           
7cbf  je      7D36h                           
7cc1  jae     7CE3h                           
7cc3  push    di                              
7cc4  inc     cx                              
7cc5  dec     cx                              
7cc6  push    sp                              
7cc7  dec     cx                              
7cc8  dec     si                              
7cc9  inc     di                              
7cca  and     [bx+si+45h],dl                  
7ccd  dec     si                              
7cce  dec     si                              
7ccf  dec     cx                              
7cd0  dec     si                              
7cd1  inc     di                              
7cd2  add     [bx+si],al                      
7cd4  push    si                              
7cd5  popa                                    
7cd6  arpl    [bx+si],sp                      
7cd8  push    bx                              
7cd9  je      7D3Ch                           
7cdb  je      7D52h                           
7cdd  jae     7CFFh                           
7cdf  push    di                              
7ce0  inc     cx                              
7ce1  dec     cx                              
7ce2  push    sp                              
7ce3  dec     cx                              
7ce4  dec     si                              
7ce5  inc     di                              
7ce6  and     [di+48h],al                     
7ce9  push    sp                              
7cea  add     [bx+si],al                      
7cec  push    si                              
7ced  popa                                    
7cee  arpl    [bx+si],sp                      
7cf0  push    bx                              
7cf1  je      7D54h                           
7cf3  je      7D6Ah                           
7cf5  jae     7D17h                           
7cf7  inc     bp                              
7cf8  push    dx                              
7cf9  push    dx                              
7cfa  dec     di                              
7cfb  push    dx                              
7cfc  add     [bx+si],al                      
7cfe  dec     di                              
7cff  jb      7D74h                           
7d01  popa                                    
7d02  jns     7D24h                           
7d04  inc     bp                              
7d05  jb      7D79h                           
7d07  outsw                                   
7d08  jb      7D0Ah                           
7d0a  dec     ax                              
7d0b  push    ax                              
7d0c  pop     di                              
7d0d  insw                                    
7d0e  jae     7D84h                           
7d11  popa                                    
7d12  pop     di                              
7d15  jb      7D7Ch                           
7d17  push    65h                             
7d19  arpl    [si+65h],si                     
7d1c  and     fs:[bx+si],ch                   
7d1f  dec     ax                              
7d20  push    ax                              
7d21  push    bx                              
7d22  inc     bp                              
7d23  dec     bp                              
7d24  and     [bp+di+6Fh],ah                  
7d27  insb                                    
7d28  jne     7D97h                           
7d2a  outsb                                   
7d2b  sub     [bx+si],ax                      
7d2d  add     [bp+6Fh],cl                     
7d30  and     [bx+di+63h],al                  
7d33  je      7D9Eh                           
7d35  outsw                                   
7d36  outsb                                   
7d37  and     [si+61h],dl                     
7d3a  imul    sp,[di+6Eh],21h                 
7d3e  add     [bx+si],al                      
7d40  jo      7DB7h                           
7d42  insw                                    
7d43  jo      7D65h                           
7d45  sub     [bx+si+50h],cl                  
7d48  push    bx                              
7d49  inc     bp                              
7d4a  dec     bp                              
7d4b  and     [bp+di+6Fh],ah                  
7d4e  insb                                    
7d4f  jne     7DBEh                           
7d51  outsb                                   
7d52  sub     ax,504Ch                        
7d55  and     [di+6Fh],ch                     
7d58  and     gs:[bx+6Eh],ch                  
7d5d  insb                                    
7d5e  jns     7D89h                           
7d60  add     [bx+si],al                      
7d62  jbe     7DC9h                           
7d64  outsb                                   
7d65  je      7D87h                           
7d67  sub     [bx+si+50h],cl                  
7d6a  push    bx                              
7d6b  inc     bp                              
7d6c  dec     bp                              
7d6d  and     [bp+di+6Fh],ah                  
7d70  insb                                    
7d71  jne     7DE0h                           
7d73  outsb                                   
7d74  sub     ax,504Ch                        
7d77  and     [di+6Fh],ch                     
7d7a  and     gs:[bx+6Eh],ch                  
7d7f  insb                                    
7d80  jns     7DABh                           
7d82  add     [bx+si],al                      
7d84  push    bp                              
7d85  jae     7DECh                           
7d87  jb      7DA9h                           
7d89  jbe     7DF0h                           
7d8b  outsb                                   
7d8c  je      7DAEh                           
7d8e  ja      7DF8h                           
7d90  imul    bp,[si+73h],2074h               
7d95  je      7E00h                           
7d97  insw                                    
7d98  and     gs:[bx+75h],ch                  
7d9c  je      7DBEh                           
7d9e  insw                                    
7d9f  outsw                                   
7da0  outsb                                   
7da1  imul    si,[si+6Fh],2072h               
7da6  popa                                    
7da7  arpl    [si+69h],si                     
7daa  jbe     7E11h                           
7dac  add     cs:[bp+61h],dh                  
7db0  arpl    [bx+61h],bx                     
7db3  bound   bp,[bx+72h]                     
7db6  je      7DD8h                           
7db8  sub     [bx+si+50h],cl                  
7dbb  push    bx                              
7dbc  inc     bp                              
7dbd  dec     bp                              
7dbe  and     [bp+di+6Fh],ah                  
7dc1  insb                                    
7dc2  jne     7E31h                           
7dc4  outsb                                   
7dc5  sub     ax,504Ch                        
7dc8  and     [di+6Fh],ch                     
7dcb  and     gs:[bx+6Eh],ch                  
7dd0  insb                                    
7dd1  jns     7DFCh                           
7dd3  add     [di+73h],dl                     
7dd6  jb      7DF9h                           
7dd9  jbe     7E3Ch                           
7ddb  arpl    [bx+si],sp                      
7ddd  popa                                    
7dde  bound   bp,[bx+72h]                     
7de1  je      7E03h                           
7de3  ja      7E4Dh                           
7de5  imul    bp,[si+73h],2074h               
7dea  je      7E55h                           
7dec  insw                                    
7ded  and     gs:[bx+75h],ch                  
7df1  je      7E13h                           
7df3  insw                                    
7df4  outsw                                   
7df5  outsb                                   
7df6  imul    si,[si+6Fh],2072h               
7dfb  popa                                    
7dfc  arpl    [si+69h],si                     
7dff  jbe     7E66h                           
7e01  add     cs:[bx+si],al                   
7e04  dec     bp                              
7e05  xor     ss:[bx+si],dh                   
7e08  add     [bx+si],al                      
7e0a  ja      7E6Dh                           
7e0c  imul    si,[si+5Fh],6F66h               
7e11  jb      7E72h                           
7e13  bound   sp,[di+61h]                     
7e16  insw                                    
7e17  pop     di                              
7e18  outsw                                   
7e19  and     [bx+di],ah                      
7e1d  cmp     ax,4620h                        
7e20  inc     cx                              
7e21  dec     sp                              
7e22  push    bx                              
7e23  inc     bp                              
7e24  add     [bx+si],al                      
7e26  je      7E89h                           
7e28  jb      7E91h                           
7e2a  je      7E4Dh                           
7e2d  arpl    [bx+si+61h],bp                  
7e30  outsb                                   
7e31  and     fs:[eax],ch                     
7e36  dec     ax                              
7e37  push    ax                              
7e38  push    bx                              
7e39  inc     bp                              
7e3a  dec     bp                              
7e3b  and     [bp+di+6Fh],ah                  
7e3e  insb                                    
7e3f  jne     7EAEh                           
7e41  outsb                                   
7e42  sub     [bx+si],ax                      
7e44  dec     ax                              
7e45  push    ax                              
7e46  inc     cx                              
7e47  push    ax                              
7e48  push    ax                              
7e49  inc     bp                              
7e4b  pop     ax                              
7e4c  inc     bp                              
7e4d  add     [si],bl                         
7e50  dec     sp                              
7e51  inc     bp                              
7e52  dec     di                              
7e53  dec     cx                              
7e55  dec     si                              
7e56  dec     cx                              
7e57  add     [bx+72h],cl                     
7e5a  jae     7EBDh                           
7e5c  jns     7EA0h                           
7e5e  outsw                                   
7e5f  popa                                    
7e60  jb      7EC6h                           
7e62  push    sp                              
7e63  imul    bp,[di+65h],756Fh               
7e68  je      7E6Ah                           
7e6a  dec     ax                              
7e6b  push    ax                              
7e6c  inc     cx                              
7e6d  push    ax                              
7e6e  push    ax                              
7e6f  add     [si+69h],dh                     
7e72  insw                                    
7e73  outsw   gs:                             
7e75  jne     7EEBh                           
7e77  and     [bx+si+65h],dh                  
7e7a  jb      7EE5h                           
7e7c  outsw                                   
7e7d  and     fs:[di],ah                      
7e80  insb                                    
7e81  jne     7E83h                           
7e83  add     [bx+si+50h],cl                  
7e86  inc     cx                              
7e87  push    ax                              
7e88  push    ax                              
7e89  and     [di+72h],al                     
7e8c  jb      7EFDh                           
7e8e  jb      7EBEh                           
7e90  and     [bx+si],ch                      
7e92  xor     ch,[bx+di]                      
7e94  add     [bx+si],al                      
7e96  push    bx                              
7e97  inc     bp                              
7e98  dec     bp                              
7e99  and     [bp+6Fh],ch                     
7e9c  ja      7EBEh                           
7e9e  imul    bp,[bp+20h],2061h               
7ea3  jae     7F06h                           
7ea5  and     gs:[si+50h],cl                  
7eaa  and     [bx+6Eh],ch                     
7ead  insb                                    
7eae  jns     7ED0h                           
7eb0  insw                                    
7eb1  outsw                                   
7eb2  add     gs:[bx+si],al                   
7eb6  dec     ax                              
7eb7  push    ax                              
7eb8  inc     cx                              
7eb9  push    ax                              
7eba  push    ax                              
7ebb  and     [di+72h],al                     
7ebe  jb      7F2Fh                           
7ec0  jb      7EF0h                           
7ec2  and     [bx+si],ch                      
7ec4  xor     bp,[bx+di]                      
7ec6  add     [bx+si],al                      
7ec8  dec     ax                              
7ec9  push    ax                              
7eca  inc     cx                              
7ecb  push    ax                              
7ecc  push    ax                              
7ecd  and     [di+72h],al                     
7ed0  jb      7F41h                           
7ed2  jb      7F02h                           
7ed4  and     [bx+si],ch                      
7ed6  xor     al,29h                          
7ed8  add     [bx+si],al                      
7eda  dec     ax                              
7edb  push    ax                              
7edc  inc     cx                              
7edd  push    ax                              
7ede  push    ax                              
7edf  and     [di+72h],al                     
7ee2  jb      7F53h                           
7ee4  jb      7F14h                           
7ee6  and     [bx+si],ch                      
7ee8  popad                                   
7eec  jne     7F5Ah                           
7eee  je      7F19h                           
7ef0  add     [bx+si],al                      
7ef2  push    bp                              
7ef3  outsb                                   
7ef4  je      7F5Fh                           
7ef6  je      7F64h                           
7ef8  and     fs:[di],ch                      
7efc  and     [bx+si+70h],ch                  
7eff  popa                                    
7f00  jo      7F72h                           
7f02  xor     si,[bp+si]                      
7f04  add     [bx+si],al                      
7f06  dec     sp                              
7f07  inc     bp                              
7f08  dec     di                              
7f09  pop     di                              
7f0a  dec     ax                              
7f0b  push    ax                              
7f0c  inc     cx                              
7f0d  push    ax                              
7f0e  push    ax                              
7f0f  pop     di                              
7f10  dec     bp                              
7f11  inc     bp                              
7f12  push    bx                              
7f13  push    bx                              
7f14  inc     cx                              
7f15  inc     di                              
7f16  inc     bp                              
7f17  add     [bx+di+63h],ah                  
7f1a  je      7F85h                           
7f1c  outsw                                   
7f1d  outsb                                   
7f1e  and     [bx+si],dh                      
7f20  and     [di],ch                         
7f22  and     [si+6Fh],ah                     
7f25  and     [bp+6Fh],ch                     
7f28  je      7F92h                           
7f2a  imul    bp,[bp+67h],7500h               
7f2f  jae     7F96h                           
7f31  jb      7F53h                           
7f33  jbe     7F9Ah                           
7f35  outsb                                   
7f36  je      7F58h                           
7f38  jne     7FADh                           
7f3b  imul    bp,[bp+67h],4820h               
7f40  push    ax                              
7f41  and     [di+72h],ah                     
7f44  jb      7FB5h                           
7f46  jb      7F48h                           
7f48  popa                                    
7f49  arpl    [si+69h],si                     
7f4c  outsw                                   
7f4d  outsb                                   
7f4e  and     [bx+di],dh                      
7f50  and     [di],ch                         
7f52  and     [bx+si+50h],cl                  
7f55  pop     di                              
7f56  push    bx                              
7f57  je      7FBAh                           
7f59  jb      7FCFh                           
7f5b  and     [di+73h],ch                     
7f5e  and     [746F6E20h],ch                  
7f65  and     [si+6Fh],ah                     
7f68  outsb                                   
7f69  and     gs:[bx+si+65h],ch               
7f6d  jb      7FD4h                           
7f6f  add     [bx+di+63h],ah                  
7f72  je      7FDDh                           
7f74  outsw                                   
7f75  outsb                                   
7f76  and     [bp+si],dh                      
7f78  and     [di],ch                         
7f7a  and     [bx+53h],al                     
7f7d  push    ax                              
7f7e  and     [bx+si+75h],dh                  
7f81  insw                                    
7f82  jo      7F84h                           
7f84  popa                                    
7f85  arpl    [si+69h],si                     
7f88  outsw                                   
7f89  outsb                                   
7f8a  and     [bp+di],dh                      
7f8c  and     [di],ch                         
7f8e  and     [bx+si+50h],cl                  
7f91  pop     di                              
7f92  push    dx                              
7f93  inc     bp                              
7f94  push    cx                              
7f95  push    bp                              
7f96  dec     cx                              
7f97  push    dx                              
7f98  inc     bp                              
7f99  inc     sp                              
7f9a  pop     di                              
7f9b  xor     [bx+si],sp                      
7f9d  dec     bp                              
7f9e  jae     8007h                           
7fa0  add     [bx+si],al                      
7fa2  popa                                    
7fa3  arpl    [si+69h],si                     
7fa6  outsw                                   
7fa7  outsb                                   
7fa8  and     [si],dh                         
7faa  and     [di],ch                         
7fac  and     [bx+53h],al                     
7faf  push    ax                              
7fb0  and     [bp+65h],dh                     
7fb3  outsb                                   
7fb4  je      7FB6h                           
7fb6  popa                                    
7fb7  arpl    [si+69h],si                     
7fba  outsw                                   
7fbb  outsb                                   
7fbc  and     [di],dh                         
7fbe  and     [di],ch                         
7fc0  and     [bx+si+55h],dl                  
7fc3  dec     bp                              
7fc4  push    ax                              
7fc5  dec     cx                              
7fc6  dec     si                              
7fc7  inc     di                              
7fc8  pop     di                              
7fc9  dec     di                              
7fca  dec     si                              
7fcb  pop     di                              
7fcc  dec     sp                              
7fcd  push    ax                              
7fce  and     [di+73h],cl                     
7fd1  add     [eax],al                        
7fd4  popa                                    
7fd5  arpl    [si+69h],si                     
7fd8  outsw                                   
7fd9  outsb                                   
7fda  and     [2D20h],dh                      
7fde  and     [bx+si+50h],cl                  
7fe1  pop     di                              
7fe2  push    dx                              
7fe3  inc     bp                              
7fe4  push    cx                              
7fe5  push    bp                              
7fe6  dec     cx                              
7fe7  push    dx                              
7fe8  inc     bp                              
7fe9  inc     sp                              
7fea  pop     di                              
7feb  xor     ah,[bx+si]                      
7fed  dec     bp                              
7fee  jae     8057h                           
7ff0  add     [bx+si],al                      
7ff2  popa                                    
7ff3  arpl    [si+69h],si                     
7ff6  outsw                                   
7ff7  outsb                                   
7ff8  and     [bx],dh                         
7ffa  and     [di],ch                         
7ffc  and     [bx+si+50h],cl                  
7fff  pop     di                              
8000  push    ax                              
8001  push    bp                              
8002  dec     bp                              
8003  push    ax                              
8004  dec     cx                              
8005  dec     si                              
8006  inc     di                              
8007  pop     di                              
8008  dec     di                              
8009  inc     si                              
800a  inc     si                              
800b  pop     di                              
800c  dec     sp                              
800d  push    ax                              
800e  and     [di+73h],cl                     
8011  add     [eax],al                        
8014  popa                                    
8015  arpl    [si+69h],si                     
8018  outsw                                   
8019  outsb                                   
801a  and     [bx+si],bh                      
801c  and     [di],ch                         
801e  and     [bx+si+50h],cl                  
8021  pop     di                              
8022  push    ax                              
8023  push    bp                              
8024  dec     bp                              
8025  push    ax                              
8026  and     [di+73h],cl                     
8029  add     [eax],al                        
802c  popa                                    
802d  arpl    [si+69h],si                     
8030  outsw                                   
8031  outsb                                   
8032  and     [bx+di],bh                      
8034  and     [di],ch                         
8036  and     [si+50h],cl                     
8039  pop     di                              
803a  push    dx                              
803b  inc     bp                              
803c  push    cx                              
803d  push    bp                              
803e  dec     cx                              
803f  push    dx                              
8040  inc     bp                              
8041  inc     sp                              
8042  pop     di                              
8043  xor     [bx+si],sp                      
8045  dec     bp                              
8046  jae     80AFh                           
8048  add     [bx+si],al                      
804a  popa                                    
804b  arpl    [si+69h],si                     
804e  outsw                                   
804f  outsb                                   
8050  and     [bx+di],dh                      
8052  xor     [bx+si],ah                      
8054  sub     ax,4820h                        
8057  push    ax                              
8058  pop     di                              
8059  push    si                              
805a  inc     bp                              
805b  dec     si                              
805c  push    sp                              
805d  pop     di                              
805e  xor     [bx+si],sp                      
8060  dec     bp                              
8061  jae     80CAh                           
8063  add     [bx+di+63h],ah                  
8066  je      80D1h                           
8068  outsw                                   
8069  outsb                                   
806a  and     [bx+di],dh                      
806c  xor     [bx+si],sp                      
806e  sub     ax,4C20h                        
8071  push    ax                              
8072  pop     di                              
8073  push    dx                              
8074  inc     bp                              
8075  push    cx                              
8076  push    bp                              
8077  dec     cx                              
8078  push    dx                              
8079  inc     bp                              
807a  inc     sp                              
807b  pop     di                              
807c  xor     ah,[bx+si]                      
807e  dec     bp                              
807f  jae     80E8h                           
8081  add     [bx+di+63h],ah                  
8084  je      80EFh                           
8086  outsw                                   
8087  outsb                                   
8088  and     [bx+di],dh                      
808a  xor     ah,[bx+si]                      
808c  sub     ax,4820h                        
808f  push    ax                              
8090  pop     di                              
8091  push    ax                              
8092  push    bp                              
8093  dec     bp                              
8094  push    ax                              
8095  dec     cx                              
8096  dec     si                              
8097  inc     di                              
8098  pop     di                              
8099  dec     di                              
809a  dec     si                              
809b  pop     di                              
809c  dec     ax                              
809d  push    ax                              
809e  and     [di+73h],cl                     
80a1  add     [eax],al                        
80a4  popa                                    
80a5  arpl    [si+69h],si                     
80a8  outsw                                   
80a9  outsb                                   
80aa  and     [bx+di],dh                      
80ac  xor     sp,[bx+si]                      
80ae  sub     ax,4820h                        
80b1  push    ax                              
80b2  pop     di                              
80b3  push    si                              
80b4  inc     bp                              
80b5  dec     si                              
80b6  push    sp                              
80b7  pop     di                              
80b8  xor     sp,[bx+si]                      
80ba  dec     bp                              
80bb  jae     8124h                           
80bd  add     [bx+di+63h],ah                  
80c0  je      812Bh                           
80c2  outsw                                   
80c3  outsb                                   
80c4  and     [bx+di],dh                      
80c6  xor     al,20h                          
80c8  sub     ax,4C20h                        
80cb  push    ax                              
80cc  pop     di                              
80cd  push    dx                              
80ce  inc     bp                              
80cf  push    cx                              
80d0  push    bp                              
80d1  dec     cx                              
80d2  push    dx                              
80d3  inc     bp                              
80d4  inc     sp                              
80d5  pop     di                              
80d6  xor     al,20h                          
80d8  dec     bp                              
80d9  jae     8142h                           
80db  add     [bx+di+63h],ah                  
80de  je      8149h                           
80e0  outsw                                   
80e1  outsb                                   
80e2  and     [bx+di],dh                      
80e4  xor     ax,2D20h                        
80e7  and     [bx+si+50h],cl                  
80ea  pop     di                              
80eb  push    si                              
80ec  inc     bp                              
80ed  dec     si                              
80ee  push    sp                              
80ef  pop     di                              
80f0  xor     al,20h                          
80f2  dec     bp                              
80f3  jae     815Ch                           
80f5  add     [bx+di+63h],ah                  
80f8  je      8163h                           
80fa  outsw                                   
80fb  outsb                                   
80fc  and     [bx+di],dh                      
80fe  and     ss:[di],ch                      
8101  and     [si+50h],cl                     
8104  pop     di                              
8105  push    dx                              
8106  inc     bp                              
8107  push    cx                              
8108  push    bp                              
8109  dec     cx                              
810a  push    dx                              
810b  inc     bp                              
810c  inc     sp                              
810d  pop     di                              
810e  xor     ax,4D20h                        
8111  jae     817Ah                           
8113  add     [bx+di+63h],ah                  
8116  je      8181h                           
8118  outsw                                   
8119  outsb                                   
811a  and     [bx+di],dh                      
811c  aaa                                     
811d  and     [di],ch                         
811f  and     [bx+si+50h],cl                  
8122  pop     di                              
8123  push    ax                              
8124  push    bp                              
8125  dec     bp                              
8126  push    ax                              
8127  dec     cx                              
8128  dec     si                              
8129  inc     di                              
812a  pop     di                              
812b  dec     di                              
812c  inc     si                              
812d  inc     si                              
812e  pop     di                              
812f  dec     ax                              
8130  push    ax                              
8131  and     [di+73h],cl                     
8134  add     [ecx+63h],ah                    
8138  je      81A3h                           
813a  outsw                                   
813b  outsb                                   
813c  and     [bx+di],dh                      
813e  cmp     [bx+si],ah                      
8140  sub     ax,4720h                        
8143  push    bx                              
8144  push    ax                              
8145  and     [bp+61h],dl                     
8148  arpl    [bx+si],sp                      
814a  inc     cx                              
814b  bound   bp,[bx+72h]                     
814e  je      8150h                           
8150  popa                                    
8151  arpl    [si+69h],si                     
8154  outsw                                   
8155  outsb                                   
8156  and     [bx+di],dh                      
8158  cmp     [bx+si],sp                      
815a  sub     ax,4820h                        
815d  push    ax                              
815e  pop     di                              
815f  push    dx                              
8160  inc     bp                              
8161  push    cx                              
8162  push    bp                              
8163  dec     cx                              
8164  push    dx                              
8165  inc     bp                              
8166  inc     sp                              
8167  pop     di                              
8168  xor     al,20h                          
816a  dec     bp                              
816b  jae     81D4h                           
816d  add     [bx+di+63h],ah                  
8170  je      81DBh                           
8172  outsw                                   
8173  outsb                                   
8174  and     [bp+si],dh                      
8176  xor     [bx+si],ah                      
8178  sub     ax,4820h                        
817b  push    ax                              
817c  pop     di                              
817d  push    dx                              
817e  inc     bp                              
817f  push    cx                              
8180  push    bp                              
8181  dec     cx                              
8182  push    dx                              
8183  inc     bp                              
8184  inc     sp                              
8185  pop     di                              
8186  xor     sp,[bx+si]                      
8188  dec     bp                              
8189  jae     81F2h                           
818b  add     [bx+di+63h],ah                  
818e  je      81F9h                           
8190  outsw                                   
8191  outsb                                   
8192  and     [bp+si],dh                      
8194  xor     [bx+si],sp                      
8196  sub     ax,4820h                        
8199  push    ax                              
819a  pop     di                              
819b  push    ax                              
819c  push    bp                              
819d  dec     bp                              
819e  push    ax                              
819f  dec     cx                              
81a0  dec     si                              
81a1  inc     di                              
81a2  pop     di                              
81a3  dec     di                              
81a4  dec     si                              
81a5  and     [di+73h],cl                     
81a8  add     [ecx+63h],ah                    
81ac  je      8217h                           
81ae  outsw                                   
81af  outsb                                   
81b0  and     [bp+si],dh                      
81b2  xor     ah,[bx+si]                      
81b4  sub     ax,4820h                        
81b7  push    ax                              
81b8  pop     di                              
81b9  push    si                              
81ba  inc     bp                              
81bb  dec     si                              
81bc  push    sp                              
81bd  pop     di                              
81be  xor     ah,[bx+si]                      
81c0  dec     bp                              
81c1  jae     822Ah                           
81c3  add     [bx+di+63h],ah                  
81c6  je      8231h                           
81c8  outsw                                   
81c9  outsb                                   
81ca  and     [bp+si],dh                      
81cc  xor     sp,[bx+si]                      
81ce  sub     ax,4C20h                        
81d1  push    ax                              
81d2  pop     di                              
81d3  push    dx                              
81d4  inc     bp                              
81d5  push    cx                              
81d6  push    bp                              
81d7  dec     cx                              
81d8  push    dx                              
81d9  inc     bp                              
81da  inc     sp                              
81db  pop     di                              
81dc  xor     sp,[bx+si]                      
81de  dec     bp                              
81df  jae     8248h                           
81e1  add     [bx+di+63h],ah                  
81e4  je      824Fh                           
81e6  outsw                                   
81e7  outsb                                   
81e8  and     [bp+si],dh                      
81ea  xor     al,20h                          
81ec  sub     ax,4820h                        
81ef  push    ax                              
81f0  pop     di                              
81f1  push    si                              
81f2  inc     bp                              
81f3  dec     si                              
81f4  push    sp                              
81f5  pop     di                              
81f6  xor     [bx+si],sp                      
81f8  dec     bp                              
81f9  jae     8262h                           
81fb  add     [bx+di+63h],ah                  
81fe  je      8269h                           
8200  outsw                                   
8201  outsb                                   
8202  and     [bp+si],dh                      
8204  xor     al,20h                          
8206  sub     ax,4820h                        
8209  push    ax                              
820a  pop     di                              
820b  push    si                              
820c  inc     bp                              
820d  dec     si                              
820e  push    sp                              
820f  pop     di                              
8210  xor     sp,[bx+si]                      
8212  dec     bp                              
8213  jae     827Ch                           
8215  add     [bx+di+63h],ah                  
8218  je      8283h                           
821a  outsw                                   
821b  outsb                                   
821c  and     [bp+si],dh                      
821e  xor     al,20h                          
8220  sub     ax,4820h                        
8223  push    ax                              
8224  pop     di                              
8225  push    si                              
8226  inc     bp                              
8227  dec     si                              
8228  push    sp                              
8229  pop     di                              
822a  xor     al,20h                          
822c  dec     bp                              
822d  jae     8296h                           
822f  add     [bx+di+63h],ah                  
8232  je      829Dh                           
8234  outsw                                   
8235  outsb                                   
8236  and     [bp+si],dh                      
8238  xor     al,20h                          
823a  sub     ax,4820h                        
823d  push    ax                              
823e  pop     di                              
823f  push    si                              
8240  inc     bp                              
8241  dec     si                              
8242  push    sp                              
8243  pop     di                              
8244  xor     ah,[bx+si]                      
8246  dec     bp                              
8247  jae     82B0h                           
8249  add     [bx+di+63h],ah                  
824c  je      82B7h                           
824e  outsw                                   
824f  outsb                                   
8250  and     [bp+si],dh                      
8252  xor     ax,2D20h                        
8255  and     [si+75h],dh                     
8258  jb      82C8h                           
825a  and     [bp+si+65h],ah                  
825d  popa                                    
825e  insw                                    
825f  and     [bx+6Eh],ch                     
8262  add     [bx+si],al                      
8264  popa                                    
8265  arpl    [si+69h],si                     
8268  outsw                                   
8269  outsb                                   
826a  and     [bp+si],dh                      
826c  xor     ax,2D20h                        
826f  and     [si+6Fh],ah                     
8272  outsb                                   
8273  daa                                     
8274  je      8296h                           
8276  je      82EDh                           
8278  jb      82E8h                           
827a  and     [bp+si+65h],ah                  
827d  popa                                    
827e  insw                                    
827f  and     [bx+6Eh],ch                     
8282  add     [bx+si],al                      
8284  popa                                    
8285  arpl    [si+69h],si                     
8288  outsw                                   
8289  outsb                                   
828a  and     [bp+si],dh                      
828c  and     ss:[di],ch                      
828f  and     [bp+si+65h],dh                  
8292  jae     82F9h                           
8294  je      82B6h                           
8296  bound   sp,[di+61h]                     
8299  insw                                    
829a  and     [bx+6Eh],ch                     
829d  das                                     
829e  outsw                                   
829f  and     [bp+61h],dh                     
82a4  jb      830Fh                           
82a6  popa                                    
82a7  bound   bp,[si+65h]                     
82aa  jae     82ACh                           
82ac  popa                                    
82ad  arpl    [si+69h],si                     
82b0  outsw                                   
82b1  outsb                                   
82b2  and     [bp+si],dh                      
82b4  aaa                                     
82b5  and     [di],ch                         
82b7  and     [bx+si+50h],cl                  
82ba  pop     di                              
82bb  push    si                              
82bc  inc     cx                              
82bd  inc     bx                              
82be  pop     di                              
82bf  inc     cx                              
82c0  inc     dx                              
82c1  dec     di                              
82c2  push    dx                              
82c3  push    sp                              
82c4  and     [di+73h],cl                     
82c7  add     [eax],al                        
82ca  popad                                   
82ce  jne     833Ch                           
82d0  je      82F2h                           
82d2  sub     ax,7320h                        
82d5  push    756Fh                           
82d8  insb                                    
82d9  outsb   fs:                             
82db  daa                                     
82dc  je      82FEh                           
82de  je      8302h                           
82e2  push    7265h                           
82e5  add     gs:[bx+si],al                   
82e8  bound   sp,[di+61h]                     
82eb  insw                                    
82ec  pop     di                              
82ed  imul    si,[bp+di+5Fh],666Fh            
82f2  and     [di],ch                         
82f5  and     [si+75h],dh                     
82f8  jb      8368h                           
82fa  imul    bp,[bp+67h],6220h               
82ff  popa                                    
8301  insw                                    
8302  and     [bx+66h],ch                     
8305  add     [bx+si],al                      
8308  bound   sp,[di+61h]                     
830b  insw                                    
830c  pop     di                              
830d  imul    si,[bp+di+5Fh],666Fh            
8312  and     [di],ch                         
8315  and     [bp+si+65h],ah                  
8318  popa                                    
8319  insw                                    
831a  and     [bx+di+73h],ch                  
831d  and     [bx+66h],ch                     
8320  add     [bx+si],al                      
