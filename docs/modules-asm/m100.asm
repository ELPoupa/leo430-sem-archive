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
0060  mov     [11Ah],di                       
0064  mov     [11Ch],ds                       
0068  mov     [11Eh],cx                       
006c  mov     [120h],bx                       
0070  mov     [122h],si                       
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
0094  mov     [140h],ax                       
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [144h],ax                       
00ae  xchg    al,ah                           
00b0  mov     [142h],ax                       
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [147h],al                       
00c1  call far sub_010e                       
00c6  call far sub_03f0                       
00cb  inc     byte ptr [124h]                 
00cf  push    word ptr [168h]                 
00d3  push    word ptr [166h]                 ; [ds] f32 here = 0
00d7  push    word ptr [164h]                 ; [ds] f32 here = 0
00db  push    word ptr [162h]                 ; [ds] f32 here = 0
00df  push    word ptr [160h]                 ; [ds] f32 here = 0
00e3  call far sub_03a0                       
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
0118  mov     cx,[362h]                       
011c  jcxz    132h                            
011e  xor     si,si                           
0120  mov     ax,[364h]                       
0123  mov     dx,[366h]                       
0127  xor     bx,bx                           
0129  call    far ptr  [360h]                 
012d  jae     132h                            
012f  jmp     488h                            
0132  mov     si,36Ch                         
0135  mov     di,36Ch                         
0138  call    1DEh                            
013b  mov     si,36Ch                         
013e  mov     di,370h                         
0141  call    1DEh                            
0144  mov     si,370h                         
0147  mov     di,370h                         
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
0176  mov     [171h],ch                       
017a  push    cx                              
017b  or      cl,cl                           
017d  jne     191h                            
017f  mov     si,97Eh                         
0182  mov     di,97Eh                         
0185  call    1DEh                            
0188  mov     si,370h                         
018b  mov     di,370h                         
018e  call    1DEh                            
0191  mov     si,370h                         
0194  mov     di,370h                         
0197  call    1DEh                            
019a  mov     si,370h                         
019d  mov     di,370h                         
01a0  call    1DEh                            
01a3  call    1DDEh                           
01a6  call    4FCh                            
01a9  pop     ax                              
01aa  pop     di                              
01ab  pop     si                              
01ac  sub     bp,2h                           
01af  mov     sp,bp                           
01b1  pop     ds                              
01b2  pop     bp                              
01b3  dec     bp                              
01b4  retf                                    
01b5  mov     cx,[362h]                       
01b9  jcxz    1C2h                            
01bb  mov     bx,2h                           
01be  call    far ptr  [360h]                 
01c2  push    ds                              
01c3  lds     dx,[12Eh]                       
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
01f1  add     [bx+si],al                      

; ----- sub_01f2 -----
01f2  jmp     518h                            
01f5  add     [bx+si],al                      

; ----- sub_01f6 -----
01f6  inc     bp                              
01f7  push    bp                              
01f8  mov     bp,sp                           
01fa  push    ds                              
01fb  push    di                              
01fc  push    si                              
01fd  jmp     203h                            
01ff  nop                                     
0200  inc     word ptr [bp+6h]                
0203  les     bx,[bp+6h]                      
0206  mov     al,es:[bx]                      
0209  cbw                                     
020a  mov     bx,ax                           
020c  test    byte ptr [bx+1C3h],8h           
0211  jne     200h                            
0213  xor     ax,ax                           
0215  push    ax                              
0216  push    ax                              
0217  push    es                              
0218  push    word ptr [bp+6h]                
021b  call far sub_04fe                       
0220  add     sp,4h                           
0223  push    ax                              
0224  push    word ptr [bp+8h]                
0227  push    word ptr [bp+6h]                
022a  call far sub_0bde                       
022f  add     sp,0Ah                          
0232  add     ax,8h                           
0235  mov     bx,980h                         
0238  push    ds                              
0239  mov     di,bx                           
023b  mov     si,ax                           
023d  push    ds                              
023e  pop     es                              
023f  mov     ds,dx                           
0241  movsw                                   
0242  movsw                                   
0243  movsw                                   
0244  movsw                                   
0245  pop     ds                              
0246  mov     ax,bx                           
0248  mov     dx,ds                           
024a  pop     si                              
024b  pop     di                              
024c  lea     sp,[bp-2h]                      
024f  pop     ds                              
0250  pop     bp                              
0251  dec     bp                              
0252  retf                                    
0253  nop                                     

; ----- sub_0254 -----
0254  mov     ax,ds                           
0256  nop                                     
0257  inc     bp                              
0258  push    bp                              
0259  mov     bp,sp                           
025b  push    ds                              
025c  mov     ds,ax                           
025e  push    ds                              
025f  lds     dx,[bp+6h]                      
0262  mov     ax,4300h                        
0265  test    word ptr cs:[10h],1h            
026c  je      275h                            
026e  call far KERNEL.DOS3CALL                
0273  jmp     277h                            
0275  int     21h                             
0277  pop     ds                              
0278  jb      289h                            
027a  test    byte ptr [bp+0Ah],2h            
027e  je      289h                            
0280  test    cl,1h                           
0283  je      289h                            
0285  mov     ax,0D00h                        
0288  stc                                     
0289  jmp     48Eh                            

; ----- sub_028c -----
028c  push    bp                              
028d  mov     bp,sp                           
028f  mov     dx,di                           
0291  mov     bx,si                           
0293  push    ds                              
0294  lds     si,[bp+0Ah]                     
0297  mov     di,si                           
0299  mov     ax,ds                           
029b  mov     es,ax                           
029d  xor     ax,ax                           
029f  mov     cx,0FFFFh                       
02a2  repne   scasb                           
02a4  not     cx                              
02a6  les     di,[bp+6h]                      
02a9  mov     ax,di                           
02ab  je      2B1h                            
02ad  movsw                                   
02ae  dec     cx                              
02af  jmp     2B7h                            
02b1  test    al,1h                           
02b3  je      2B7h                            
02b5  movsb                                   
02b6  dec     cx                              
02b7  shr     cx,1                            
02b9  rep     movsw                           
02bb  adc     cx,cx                           
02bd  rep     movsb                           
02bf  mov     si,bx                           
02c1  mov     di,dx                           
02c3  pop     ds                              
02c4  mov     dx,es                           
02c6  pop     bp                              
02c7  retf                                    

; ----- sub_02c8 -----
02c8  mov     ax,ds                           
02ca  nop                                     
02cb  inc     bp                              
02cc  push    bp                              
02cd  mov     bp,sp                           
02cf  push    ds                              
02d0  mov     ds,ax                           
02d2  sub     sp,0Ch                          
02d5  push    bx                              
02d6  push    cx                              
02d7  push    si                              
02d8  push    di                              
02d9  wait                                    
02da  fstcw   word ptr [bp-4h]                
02dd  nop                                     
02de  wait                                    
02df  mov     ax,[bp-4h]                      
02e2  or      ah,0Ch                          
02e5  mov     [bp-6h],ax                      
02e8  wait                                    
02e9  fldcw   word ptr [bp-6h]                
02ec  wait                                    
02ed  fistp   qword ptr [bp-0Eh]              
02f0  wait                                    
02f1  fldcw   word ptr [bp-4h]                
02f4  mov     ax,[bp-0Eh]                     
02f7  mov     dx,[bp-0Ch]                     
02fa  pop     di                              
02fb  pop     si                              
02fc  pop     cx                              
02fd  pop     bx                              
02fe  lea     sp,[bp-2h]                      
0301  pop     ds                              
0302  pop     bp                              
0303  dec     bp                              
0304  retf                                    
0305  add     [bx+si],al                      

; ----- sub_0306 -----
0306  mov     ax,ds                           
0308  nop                                     
0309  inc     bp                              
030a  push    bp                              
030b  mov     bp,sp                           
030d  push    ds                              
030e  mov     ds,ax                           
0310  wait                                    
0311  fcom    st(0),st(1)                     
0313  wait                                    
0314  fstsw   word ptr [172h]                 
0318  nop                                     
0319  wait                                    
031a  test    byte ptr [173h],1h              
031f  jne     326h                            
0321  wait                                    
0322  fstp    st(1)                           
0324  jmp     329h                            
0326  wait                                    
0327  fstp    st(0)                           
0329  lea     sp,[bp-2h]                      
032c  pop     ds                              
032d  pop     bp                              
032e  dec     bp                              
032f  retf                                    

; ----- sub_0330 -----
0330  mov     ax,ds                           
0332  nop                                     
0333  inc     bp                              
0334  push    bp                              
0335  mov     bp,sp                           
0337  push    ds                              
0338  mov     ds,ax                           
033a  wait                                    
033b  fcom    st(0),st(1)                     
033d  wait                                    
033e  fstsw   word ptr [172h]                 
0342  nop                                     
0343  wait                                    
0344  test    byte ptr [173h],1h              
0349  je      350h                            
034b  wait                                    
034c  fstp    st(1)                           
034e  jmp     353h                            
0350  wait                                    
0351  fstp    st(0)                           
0353  lea     sp,[bp-2h]                      
0356  pop     ds                              
0357  pop     bp                              
0358  dec     bp                              
0359  retf                                    

; ----- sub_035a -----
035a  mov     ax,ds                           
035c  nop                                     
035d  inc     bp                              
035e  push    bp                              
035f  mov     bp,sp                           
0361  push    ds                              
0362  mov     ds,ax                           
0364  mov     ax,[bp+6h]                      
0367  mov     [132h],ax                       
036a  mov     ax,[bp+8h]                      
036d  mov     [134h],ax                       
0370  mov     ax,[bp+0Ah]                     
0373  mov     [136h],ax                       
0376  mov     ax,[bp+0Ch]                     
0379  and     ah,7Fh                          
037c  mov     [138h],ax                       
037f  mov     ax,132h                         
0382  mov     dx,ds                           
0384  lea     sp,[bp-2h]                      
0387  pop     ds                              
0388  pop     bp                              
0389  dec     bp                              
038a  retf                                    
038b  add     [bp+57h],dl                     
038e  mov     ax,ds                           
0390  mov     es,ax                           
0392  mov     si,174h                         
0395  mov     di,1A0h                         
0398  mov     cx,0Ah                          
039b  rep     movsw                           
039d  pop     di                              
039e  pop     si                              
039f  retf                                    

; ----- sub_03a0 -----
03a0  mov     ax,ds                           
03a2  nop                                     
03a3  inc     bp                              
03a4  push    bp                              
03a5  mov     bp,sp                           
03a7  push    ds                              
03a8  mov     ds,ax                           
03aa  push    word ptr [11Ah]                 ; [ds] f32 here = 0
03ae  push    word ptr [11Ch]                 ; [ds] f32 here = 0
03b2  push    word ptr [11Eh]                 ; [ds] f32 here = 0
03b6  push    word ptr [122h]                 
03ba  push    word ptr [120h]                 ; [ds] f32 here = 0
03be  call far sub_2010                       
03c3  sub     bp,2h                           
03c6  mov     sp,bp                           
03c8  pop     ds                              
03c9  pop     bp                              
03ca  dec     bp                              
03cb  retf                                    

; ----- sub_03cc -----
03cc  mov     ax,ds                           
03ce  nop                                     
03cf  inc     bp                              
03d0  push    bp                              
03d1  mov     bp,sp                           
03d3  push    ds                              
03d4  mov     ds,ax                           
03d6  mov     ax,0FCh                         
03d9  push    ax                              
03da  push    cs                              
03db  call    0C9Dh                           
03de  mov     ax,0FFh                         
03e1  push    ax                              
03e2  push    cs                              
03e3  call    0C9Dh                           
03e6  sub     bp,2h                           
03e9  mov     sp,bp                           
03eb  pop     ds                              
03ec  pop     bp                              
03ed  dec     bp                              
03ee  retf                                    
03ef  add     [bx+si],al                      

; ----- sub_03f0 -----
03f0  mov     ax,ds                           
03f2  nop                                     
03f3  inc     bp                              
03f4  push    bp                              
03f5  mov     bp,sp                           
03f7  push    ds                              
03f8  mov     ds,ax                           
03fa  sub     sp,6h                           
03fd  push    ds                              
03fe  call far KERNEL.GETDOSENVIRONMENT       
0403  or      ax,ax                           
0405  je      40Ah                            
0407  mov     dx,0h                           
040a  mov     bx,dx                           
040c  mov     es,dx                           
040e  mov     [bp-4h],es                      
0411  mov     [bp-8h],ds                      
0414  xor     ax,ax                           
0416  xor     si,si                           
0418  xor     di,di                           
041a  mov     cx,0FFFFh                       
041d  or      bx,bx                           
041f  je      42Fh                            
0421  cmp     byte ptr es:[0h],0h             
0427  je      42Fh                            
0429  repne   scasb                           
042b  inc     si                              
042c  scasb                                   
042d  jne     429h                            
042f  mov     ax,di                           
0431  inc     ax                              
0432  and     al,0FEh                         
0434  inc     si                              
0435  mov     di,si                           
0437  shl     si,1                            
0439  shl     si,1                            
043b  mov     cx,9h                           
043e  call    0D00h                           
0441  push    dx                              
0442  push    ax                              
0443  mov     ax,si                           
0445  call    0D00h                           
0448  mov     [166h],ax                       
044b  mov     [168h],dx                       
044f  mov     [bp-6h],dx                      
0452  push    es                              
0453  pop     ds                              
0454  mov     cx,di                           
0456  mov     bx,ax                           
0458  xor     si,si                           
045a  pop     di                              
045b  pop     es                              
045c  dec     cx                              
045d  jcxz    475h                            
045f  mov     ds,[bp-6h]                      
0462  mov     [bx],di                         
0464  mov     [bx+2h],es                      
0467  add     bx,4h                           
046a  mov     ds,[bp-4h]                      
046d  lodsb                                   
046e  stosb                                   
046f  or      al,al                           
0471  jne     46Dh                            
0473  loop    45Fh                            
0475  mov     ds,[bp-6h]                      
0478  mov     [bx],cx                         
047a  mov     [bx+2h],cx                      
047d  pop     ds                              
047e  sub     bp,2h                           
0481  mov     sp,bp                           
0483  pop     ds                              
0484  pop     bp                              
0485  dec     bp                              
0486  retf                                    
0487  add     [bx+si+2h],bh                   
048b  jmp     0CBEh                           
048e  jb      4AFh                            
0490  xor     ax,ax                           
0492  sub     bp,2h                           
0495  mov     sp,bp                           
0497  pop     ds                              
0498  pop     bp                              
0499  dec     bp                              
049a  retf                                    
049b  jae     490h                            
049d  push    ax                              
049e  call    4C5h                            
04a1  pop     ax                              
04a2  xor     ah,ah                           
04a4  sub     bp,2h                           
04a7  mov     sp,bp                           
04a9  pop     ds                              
04aa  pop     bp                              
04ab  dec     bp                              
04ac  retf                                    
04ad  jae     4B6h                            
04af  call    4C5h                            
04b2  mov     ax,0FFFFh                       
04b5  cwd                                     
04b6  sub     bp,2h                           
04b9  mov     sp,bp                           
04bb  pop     ds                              
04bc  pop     bp                              
04bd  dec     bp                              
04be  retf                                    
04bf  xor     ah,ah                           
04c1  call    4C5h                            
04c4  retf                                    

; ----- sub_04c5 -----
04c5  mov     [148h],al                       
04c8  or      ah,ah                           
04ca  jne     4E7h                            
04cc  cmp     al,22h                          
04ce  jae     4DCh                            
04d0  cmp     al,20h                          
04d2  jb      4D8h                            
04d4  mov     al,5h                           
04d6  jmp     4DEh                            
04d8  cmp     al,13h                          
04da  jbe     4DEh                            
04dc  mov     al,13h                          
04de  mov     bx,18Ch                         
04e1  xlat                                    
04e2  cbw                                     
04e3  mov     [13Ch],ax                       
04e6  ret                                     
04e7  mov     al,ah                           
04e9  jmp     4E2h                            
04eb  add     [bx+si],al                      

; ----- sub_04ec -----
04ec  cmp     byte ptr cs:[0D2Eh],0B8h        
04f2  je      4F7h                            
04f4  mov     ax,ss                           
04f6  retf                                    
04f7  mov     ax,cs:[0D2Fh]                   
04fb  retf                                    

; ----- sub_04fc -----
04fc  ret                                     
04fd  add     [bx+si],al                      

; ----- sub_04fe -----
04fe  push    bp                              
04ff  mov     bp,sp                           
0501  mov     dx,di                           
0503  les     di,[bp+6h]                      
0506  xor     ax,ax                           
0508  mov     cx,0FFFFh                       
050b  repne   scasb                           
050d  not     cx                              
050f  jne     512h                            
0511  dec     cx                              
0512  xchg    ax,cx                           
0513  mov     di,dx                           
0515  pop     bp                              
0516  retf                                    
0517  add     [di-75h],dl                     
051a  in      al,dx                           
051b  push    di                              
051c  push    si                              
051d  push    ds                              
051e  lds     si,[bp+6h]                      
0521  xor     ax,ax                           
0523  cwd                                     
0524  xor     bx,bx                           
0526  lodsb                                   
0527  cmp     al,20h                          
0529  je      526h                            
052b  cmp     al,9h                           
052d  je      526h                            
052f  push    ax                              
0530  cmp     al,2Dh                          
0532  je      538h                            
0534  cmp     al,2Bh                          
0536  jne     539h                            
0538  lodsb                                   
0539  cmp     al,39h                          
053b  ja      55Ch                            
053d  sub     al,30h                          
053f  jb      55Ch                            
0541  shl     bx,1                            
0543  rcl     dx,1                            
0545  mov     cx,bx                           
0547  mov     di,dx                           
0549  shl     bx,1                            
054b  rcl     dx,1                            
054d  shl     bx,1                            
054f  rcl     dx,1                            
0551  add     bx,cx                           
0553  adc     dx,di                           
0555  add     bx,ax                           
0557  adc     dx,0h                           
055a  jmp     538h                            
055c  pop     ax                              
055d  cmp     al,2Dh                          
055f  xchg    ax,bx                           
0560  jne     569h                            
0562  neg     ax                              
0564  adc     dx,0h                           
0567  neg     dx                              
0569  pop     ds                              
056a  pop     si                              
056b  pop     di                              
056c  pop     bp                              
056d  retf                                    
056e  mov     ax,ds                           
0570  nop                                     
0571  inc     bp                              
0572  push    bp                              
0573  mov     bp,sp                           
0575  push    ds                              
0576  mov     ds,ax                           
0578  sub     sp,0Ah                          
057b  les     bx,[bp+6h]                      
057e  mov     al,es:[bx]                      
0581  cbw                                     
0582  mov     bx,ax                           
0584  test    byte ptr [bx+1C3h],1h           
0589  je      590h                            
058b  lea     ax,[bx+20h]                     
058e  jmp     597h                            
0590  mov     bx,[bp+6h]                      
0593  mov     al,es:[bx]                      
0596  cbw                                     
0597  cmp     ax,65h                          
059a  je      5AFh                            
059c  inc     word ptr [bp+6h]                
059f  mov     bx,[bp+6h]                      
05a2  mov     al,es:[bx]                      
05a5  cbw                                     
05a6  mov     bx,ax                           
05a8  test    byte ptr [bx+1C3h],4h           
05ad  jne     59Ch                            
05af  mov     bx,[bp+6h]                      
05b2  mov     al,es:[bx]                      
05b5  mov     [bp-4h],al                      
05b8  mov     byte ptr es:[bx],2Eh            
05bc  inc     word ptr [bp+6h]                
05bf  mov     bx,[bp+6h]                      
05c2  mov     al,es:[bx]                      
05c5  mov     [bp-6h],al                      
05c8  mov     al,[bp-4h]                      
05cb  mov     es:[bx],al                      
05ce  mov     al,[bp-6h]                      
05d1  mov     [bp-4h],al                      
05d4  inc     word ptr [bp+6h]                
05d7  cmp     byte ptr es:[bx],0h             
05db  jne     5BFh                            
05dd  lea     sp,[bp-2h]                      
05e0  pop     ds                              
05e1  pop     bp                              
05e2  dec     bp                              
05e3  retf                                    
05e4  mov     ax,ds                           
05e6  nop                                     
05e7  inc     bp                              
05e8  push    bp                              
05e9  mov     bp,sp                           
05eb  push    ds                              
05ec  mov     ds,ax                           
05ee  sub     sp,8h                           
05f1  jmp     5FDh                            
05f3  nop                                     
05f4  cmp     byte ptr es:[bx],2Eh            
05f8  je      606h                            
05fa  inc     word ptr [bp+6h]                
05fd  les     bx,[bp+6h]                      
0600  cmp     byte ptr es:[bx],0h             
0604  jne     5F4h                            
0606  inc     word ptr [bp+6h]                
0609  cmp     byte ptr es:[bx],0h             
060d  je      661h                            
060f  jmp     621h                            
0611  nop                                     
0612  cmp     byte ptr es:[bx],65h            
0616  je      62Ah                            
0618  cmp     byte ptr es:[bx],45h            
061c  je      62Ah                            
061e  inc     word ptr [bp+6h]                
0621  mov     bx,[bp+6h]                      
0624  cmp     byte ptr es:[bx],0h             
0628  jne     612h                            
062a  dec     word ptr [bp+6h]                
062d  mov     [bp-6h],bx                      
0630  mov     [bp-4h],es                      
0633  jmp     639h                            
0635  nop                                     
0636  dec     word ptr [bp+6h]                
0639  mov     bx,[bp+6h]                      
063c  cmp     byte ptr es:[bx],30h            
0640  je      636h                            
0642  cmp     byte ptr es:[bx],2Eh            
0646  jne     64Bh                            
0648  dec     word ptr [bp+6h]                
064b  les     bx,[bp-6h]                      
064e  inc     word ptr [bp-6h]                
0651  mov     al,es:[bx]                      
0654  inc     word ptr [bp+6h]                
0657  les     bx,[bp+6h]                      
065a  mov     es:[bx],al                      
065d  or      al,al                           
065f  jne     64Bh                            
0661  lea     sp,[bp-2h]                      
0664  pop     ds                              
0665  pop     bp                              
0666  dec     bp                              
0667  retf                                    
0668  mov     ax,ds                           
066a  nop                                     
066b  inc     bp                              
066c  push    bp                              
066d  mov     bp,sp                           
066f  push    ds                              
0670  mov     ds,ax                           
0672  sub     sp,2h                           
0675  les     bx,[bp+6h]                      
0678  wait                                    
0679  fld     qword ptr es:[bx]               
067c  wait                                    
067d  fcom    qword ptr [4B0h]                ; [ds] = 0
0681  wait                                    
0682  fstp    st(0)                           
0684  wait                                    
0685  fstsw   word ptr [bp-4h]                
0688  nop                                     
0689  wait                                    
068a  mov     ah,[bp-3h]                      
068d  sahf                                    
068e  jb      696h                            
0690  mov     ax,1h                           
0693  jmp     698h                            
0695  nop                                     
0696  xor     ax,ax                           
0698  lea     sp,[bp-2h]                      
069b  pop     ds                              
069c  pop     bp                              
069d  dec     bp                              
069e  retf                                    
069f  nop                                     
06a0  mov     ax,ds                           
06a2  nop                                     
06a3  inc     bp                              
06a4  push    bp                              
06a5  mov     bp,sp                           
06a7  push    ds                              
06a8  mov     ds,ax                           
06aa  push    di                              
06ab  push    si                              
06ac  cmp     word ptr [bp+6h],0h             
06b0  je      6D0h                            
06b2  push    word ptr [bp+0Eh]               
06b5  push    word ptr [bp+0Ch]               
06b8  call far sub_01f6                       
06bd  add     sp,4h                           
06c0  push    ds                              
06c1  mov     si,ax                           
06c3  mov     ds,dx                           
06c5  les     di,[bp+8h]                      
06c8  movsw                                   
06c9  movsw                                   
06ca  movsw                                   
06cb  movsw                                   
06cc  pop     ds                              
06cd  jmp     6EFh                            
06cf  nop                                     
06d0  push    word ptr [bp+0Eh]               
06d3  push    word ptr [bp+0Ch]               
06d6  call far sub_01f6                       
06db  add     sp,4h                           
06de  mov     es,dx                           
06e0  mov     bx,ax                           
06e2  wait                                    
06e3  fld     qword ptr es:[bx]               
06e6  les     bx,[bp+8h]                      
06e9  wait                                    
06ea  fstp    dword ptr es:[bx]               
06ed  nop                                     
06ee  wait                                    
06ef  pop     si                              
06f0  pop     di                              
06f1  lea     sp,[bp-2h]                      
06f4  pop     ds                              
06f5  pop     bp                              
06f6  dec     bp                              
06f7  retf                                    

; ----- sub_06f8 -----
06f8  mov     ax,ds                           
06fa  nop                                     
06fb  inc     bp                              
06fc  push    bp                              
06fd  mov     bp,sp                           
06ff  push    ds                              
0700  mov     ds,ax                           
0702  sub     sp,0Ah                          
0705  push    si                              
0706  cmp     byte ptr [2C4h],0h              
070b  je      74Eh                            
070d  mov     ax,[962h]                       
0710  mov     dx,[964h]                       
0714  mov     [bp-6h],ax                      
0717  mov     [bp-4h],dx                      
071a  mov     es,dx                           
071c  mov     bx,ax                           
071e  cmp     word ptr es:[bx],2Dh            
0722  jne     72Ah                            
0724  mov     ax,1h                           
0727  jmp     72Ch                            
0729  nop                                     
072a  xor     ax,ax                           
072c  add     ax,[bp+0Ah]                     
072f  mov     dx,[bp+0Ch]                     
0732  mov     [bp-0Ah],ax                     
0735  mov     [bp-8h],dx                      
0738  push    dx                              
0739  push    ax                              
073a  cmp     word ptr [bp+0Eh],0h            
073e  jle     746h                            
0740  mov     ax,1h                           
0743  jmp     748h                            
0745  nop                                     
0746  xor     ax,ax                           
0748  push    ax                              
0749  call    0BAAh                           
074c  jmp     7A9h                            
074e  les     bx,[bp+6h]                      
0751  push    word ptr es:[bx+6h]             
0755  push    word ptr es:[bx+4h]             
0759  push    word ptr es:[bx+2h]             
075d  push    word ptr es:[bx]                
0760  call far sub_0f84                       
0765  add     sp,8h                           
0768  mov     [bp-6h],ax                      
076b  mov     [bp-4h],dx                      
076e  push    dx                              
076f  push    ax                              
0770  mov     ax,[bp+0Eh]                     
0773  inc     ax                              
0774  push    ax                              
0775  les     bx,[bp-6h]                      
0778  cmp     word ptr es:[bx],2Dh            
077c  jne     784h                            
077e  mov     ax,1h                           
0781  jmp     786h                            
0783  nop                                     
0784  xor     ax,ax                           
0786  mov     [bp-0Ch],ax                     
0789  cmp     word ptr [bp+0Eh],0h            
078d  jle     794h                            
078f  mov     ax,1h                           
0792  jmp     796h                            
0794  xor     ax,ax                           
0796  add     ax,[bp-0Ch]                     
0799  add     ax,[bp+0Ah]                     
079c  mov     dx,[bp+0Ch]                     
079f  push    dx                              
07a0  push    ax                              
07a1  call far sub_0d42                       
07a6  add     sp,0Ah                          
07a9  mov     ax,[bp+0Ah]                     
07ac  mov     dx,[bp+0Ch]                     
07af  mov     [bp-0Ah],ax                     
07b2  mov     [bp-8h],dx                      
07b5  les     bx,[bp-6h]                      
07b8  cmp     word ptr es:[bx],2Dh            
07bc  jne     7CAh                            
07be  mov     bx,ax                           
07c0  mov     es,dx                           
07c2  mov     byte ptr es:[bx],2Dh            
07c6  inc     ax                              
07c7  mov     [bp-0Ah],ax                     
07ca  cmp     word ptr [bp+0Eh],0h            
07ce  jle     7E2h                            
07d0  les     bx,[bp-0Ah]                     
07d3  mov     al,es:[bx+1h]                   
07d7  mov     es:[bx],al                      
07da  inc     bx                              
07db  mov     [bp-0Ah],bx                     
07de  mov     byte ptr es:[bx],2Eh            
07e2  mov     ax,2C9h                         
07e5  push    ds                              
07e6  push    ax                              
07e7  cmp     byte ptr [2C4h],1h              
07ec  sbb     ax,ax                           
07ee  neg     ax                              
07f0  add     ax,[bp-0Ah]                     
07f3  mov     dx,[bp-8h]                      
07f6  add     ax,[bp+0Eh]                     
07f9  push    dx                              
07fa  push    ax                              
07fb  call far sub_028c                       
0800  add     sp,8h                           
0803  mov     [bp-0Ah],ax                     
0806  mov     [bp-8h],dx                      
0809  cmp     word ptr [bp+10h],0h            
080d  je      816h                            
080f  les     bx,[bp-0Ah]                     
0812  mov     byte ptr es:[bx],45h            
0816  inc     word ptr [bp-0Ah]               
0819  les     bx,[bp-6h]                      
081c  les     bx,es:[bx+6h]                   
0820  cmp     byte ptr es:[bx],30h            
0824  je      882h                            
0826  les     bx,[bp-6h]                      
0829  mov     si,es:[bx+2h]                   
082d  dec     si                              
082e  jns     83Dh                            
0830  mov     ax,si                           
0832  neg     ax                              
0834  mov     si,ax                           
0836  les     bx,[bp-0Ah]                     
0839  mov     byte ptr es:[bx],2Dh            
083d  inc     word ptr [bp-0Ah]               
0840  cmp     si,64h                          
0843  jl      85Ah                            
0845  mov     ax,si                           
0847  mov     cx,64h                          
084a  cwd                                     
084b  idiv    cx                              
084d  les     bx,[bp-0Ah]                     
0850  add     es:[bx],al                      
0853  mov     ax,si                           
0855  cwd                                     
0856  idiv    cx                              
0858  mov     si,dx                           
085a  inc     word ptr [bp-0Ah]               
085d  cmp     si,0Ah                          
0860  jl      877h                            
0862  mov     ax,si                           
0864  mov     cx,0Ah                          
0867  cwd                                     
0868  idiv    cx                              
086a  les     bx,[bp-0Ah]                     
086d  add     es:[bx],al                      
0870  mov     ax,si                           
0872  cwd                                     
0873  idiv    cx                              
0875  mov     si,dx                           
0877  mov     ax,si                           
0879  inc     word ptr [bp-0Ah]               
087c  les     bx,[bp-0Ah]                     
087f  add     es:[bx],al                      
0882  mov     ax,[bp+0Ah]                     
0885  mov     dx,[bp+0Ch]                     
0888  pop     si                              
0889  lea     sp,[bp-2h]                      
088c  pop     ds                              
088d  pop     bp                              
088e  dec     bp                              
088f  retf                                    

; ----- sub_0890 -----
0890  mov     ax,ds                           
0892  nop                                     
0893  inc     bp                              
0894  push    bp                              
0895  mov     bp,sp                           
0897  push    ds                              
0898  mov     ds,ax                           
089a  sub     sp,4h                           
089d  mov     byte ptr [2C4h],1h              
08a2  push    word ptr [bp+10h]               
08a5  push    word ptr [bp+0Eh]               
08a8  push    word ptr [bp+0Ch]               
08ab  push    word ptr [bp+0Ah]               
08ae  push    word ptr [bp+8h]                
08b1  push    word ptr [bp+6h]                
08b4  push    cs                              
08b5  call    6F8h                            
08b8  mov     byte ptr [2C4h],0h              
08bd  lea     sp,[bp-2h]                      
08c0  pop     ds                              
08c1  pop     bp                              
08c2  dec     bp                              
08c3  retf                                    

; ----- sub_08c4 -----
08c4  mov     ax,ds                           
08c6  nop                                     
08c7  inc     bp                              
08c8  push    bp                              
08c9  mov     bp,sp                           
08cb  push    ds                              
08cc  mov     ds,ax                           
08ce  sub     sp,0Eh                          
08d1  push    si                              
08d2  cmp     byte ptr [2C4h],0h              
08d7  je      920h                            
08d9  mov     ax,[962h]                       
08dc  mov     dx,[964h]                       
08e0  mov     [bp-6h],ax                      
08e3  mov     [bp-4h],dx                      
08e6  mov     es,dx                           
08e8  mov     bx,ax                           
08ea  cmp     word ptr es:[bx],2Dh            
08ee  jne     8F6h                            
08f0  mov     ax,1h                           
08f3  jmp     8F8h                            
08f5  nop                                     
08f6  xor     ax,ax                           
08f8  add     ax,[bp+0Ah]                     
08fb  mov     dx,[bp+0Ch]                     
08fe  mov     [bp-0Ah],ax                     
0901  mov     [bp-8h],dx                      
0904  mov     cx,[2C6h]                       
0908  cmp     [bp+0Eh],cx                     
090b  jne     96Ah                            
090d  mov     es,dx                           
090f  mov     bx,ax                           
0911  mov     si,cx                           
0913  mov     byte ptr es:[bx+si],30h         
0917  add     bx,cx                           
0919  inc     bx                              
091a  mov     byte ptr es:[bx],0h             
091e  jmp     96Ah                            
0920  les     bx,[bp+6h]                      
0923  push    word ptr es:[bx+6h]             
0927  push    word ptr es:[bx+4h]             
092b  push    word ptr es:[bx+2h]             
092f  push    word ptr es:[bx]                
0932  call far sub_0f84                       
0937  add     sp,8h                           
093a  mov     [bp-6h],ax                      
093d  mov     [bp-4h],dx                      
0940  push    dx                              
0941  les     bx,[bp-6h]                      
0944  push    ax                              
0945  mov     ax,es:[bx+2h]                   
0949  add     ax,[bp+0Eh]                     
094c  push    ax                              
094d  cmp     word ptr es:[bx],2Dh            
0951  jne     958h                            
0953  mov     ax,1h                           
0956  jmp     95Ah                            
0958  xor     ax,ax                           
095a  add     ax,[bp+0Ah]                     
095d  mov     dx,[bp+0Ch]                     
0960  push    dx                              
0961  push    ax                              
0962  call far sub_0d42                       
0967  add     sp,0Ah                          
096a  mov     ax,[bp+0Ah]                     
096d  mov     dx,[bp+0Ch]                     
0970  mov     [bp-0Ah],ax                     
0973  mov     [bp-8h],dx                      
0976  les     bx,[bp-6h]                      
0979  cmp     word ptr es:[bx],2Dh            
097d  jne     98Bh                            
097f  mov     bx,ax                           
0981  mov     es,dx                           
0983  mov     byte ptr es:[bx],2Dh            
0987  inc     ax                              
0988  mov     [bp-0Ah],ax                     
098b  les     bx,[bp-6h]                      
098e  cmp     word ptr es:[bx+2h],0h          
0993  jg      9AEh                            
0995  push    word ptr [bp-8h]                
0998  push    word ptr [bp-0Ah]               
099b  mov     ax,1h                           
099e  push    ax                              
099f  call    0BAAh                           
09a2  les     bx,[bp-0Ah]                     
09a5  inc     word ptr [bp-0Ah]               
09a8  mov     byte ptr es:[bx],30h            
09ac  jmp     9B5h                            
09ae  mov     ax,es:[bx+2h]                   
09b2  add     [bp-0Ah],ax                     
09b5  cmp     word ptr [bp+0Eh],0h            
09b9  jle     0A1Ch                           
09bb  push    word ptr [bp-8h]                
09be  push    word ptr [bp-0Ah]               
09c1  mov     ax,1h                           
09c4  push    ax                              
09c5  call    0BAAh                           
09c8  les     bx,[bp-0Ah]                     
09cb  inc     word ptr [bp-0Ah]               
09ce  mov     byte ptr es:[bx],2Eh            
09d2  les     bx,[bp-6h]                      
09d5  cmp     word ptr es:[bx+2h],0h          
09da  jge     0A1Ch                           
09dc  cmp     byte ptr [2C4h],0h              
09e1  je      9ECh                            
09e3  mov     ax,es:[bx+2h]                   
09e7  neg     ax                              
09e9  jmp     9FAh                            
09eb  nop                                     
09ec  mov     ax,es:[bx+2h]                   
09f0  neg     ax                              
09f2  cmp     ax,[bp+0Eh]                     
09f5  jle     9FAh                            
09f7  mov     ax,[bp+0Eh]                     
09fa  mov     [bp+0Eh],ax                     
09fd  push    word ptr [bp-8h]                
0a00  push    word ptr [bp-0Ah]               
0a03  push    ax                              
0a04  call    0BAAh                           
0a07  push    word ptr [bp+0Eh]               
0a0a  mov     ax,30h                          
0a0d  push    ax                              
0a0e  push    word ptr [bp-8h]                
0a11  push    word ptr [bp-0Ah]               
0a14  call far sub_0e0a                       
0a19  add     sp,8h                           
0a1c  mov     ax,[bp+0Ah]                     
0a1f  mov     dx,[bp+0Ch]                     
0a22  pop     si                              
0a23  lea     sp,[bp-2h]                      
0a26  pop     ds                              
0a27  pop     bp                              
0a28  dec     bp                              
0a29  retf                                    

; ----- sub_0a2a -----
0a2a  mov     ax,ds                           
0a2c  nop                                     
0a2d  inc     bp                              
0a2e  push    bp                              
0a2f  mov     bp,sp                           
0a31  push    ds                              
0a32  mov     ds,ax                           
0a34  sub     sp,4h                           
0a37  mov     byte ptr [2C4h],1h              
0a3c  push    word ptr [bp+0Eh]               
0a3f  push    word ptr [bp+0Ch]               
0a42  push    word ptr [bp+0Ah]               
0a45  push    word ptr [bp+8h]                
0a48  push    word ptr [bp+6h]                
0a4b  push    cs                              
0a4c  call    8C4h                            
0a4f  mov     byte ptr [2C4h],0h              
0a54  lea     sp,[bp-2h]                      
0a57  pop     ds                              
0a58  pop     bp                              
0a59  dec     bp                              
0a5a  retf                                    
0a5b  nop                                     

; ----- sub_0a5c -----
0a5c  mov     ax,ds                           
0a5e  nop                                     
0a5f  inc     bp                              
0a60  push    bp                              
0a61  mov     bp,sp                           
0a63  push    ds                              
0a64  mov     ds,ax                           
0a66  sub     sp,0Ah                          
0a69  les     bx,[bp+6h]                      
0a6c  push    word ptr es:[bx+6h]             
0a70  push    word ptr es:[bx+4h]             
0a74  push    word ptr es:[bx+2h]             
0a78  push    word ptr es:[bx]                
0a7b  call far sub_0f84                       
0a80  add     sp,8h                           
0a83  mov     [962h],ax                       
0a86  mov     [964h],dx                       
0a8a  les     bx,[962h]                       
0a8e  mov     ax,es:[bx+2h]                   
0a92  dec     ax                              
0a93  mov     [2C6h],ax                       
0a96  cmp     word ptr es:[bx],2Dh            
0a9a  jne     0AA2h                           
0a9c  mov     ax,1h                           
0a9f  jmp     0AA4h                           
0aa1  nop                                     
0aa2  xor     ax,ax                           
0aa4  add     ax,[bp+0Ah]                     
0aa7  mov     dx,[bp+0Ch]                     
0aaa  mov     [bp-6h],ax                      
0aad  mov     [bp-4h],dx                      
0ab0  push    es                              
0ab1  push    bx                              
0ab2  push    word ptr [bp+0Eh]               
0ab5  push    dx                              
0ab6  push    ax                              
0ab7  call far sub_0d42                       
0abc  add     sp,0Ah                          
0abf  les     bx,[962h]                       
0ac3  mov     ax,es:[bx+2h]                   
0ac7  dec     ax                              
0ac8  mov     [bp-8h],ax                      
0acb  cmp     ax,[2C6h]                       
0acf  jle     0AD6h                           
0ad1  mov     al,1h                           
0ad3  jmp     0AD8h                           
0ad5  nop                                     
0ad6  xor     al,al                           
0ad8  mov     [2C8h],al                       
0adb  mov     ax,[bp-8h]                      
0ade  mov     [2C6h],ax                       
0ae1  cmp     ax,0FFFCh                       
0ae4  jl      0AEBh                           
0ae6  cmp     ax,[bp+0Eh]                     
0ae9  jl      0B06h                           
0aeb  push    word ptr [bp+10h]               
0aee  push    word ptr [bp+0Eh]               
0af1  push    word ptr [bp+0Ch]               
0af4  push    word ptr [bp+0Ah]               
0af7  push    word ptr [bp+8h]                
0afa  push    word ptr [bp+6h]                
0afd  push    cs                              
0afe  call    890h                            
0b01  add     sp,0Ch                          
0b04  jmp     0B34h                           
0b06  cmp     byte ptr [2C8h],0h              
0b0b  je      0B21h                           
0b0d  les     bx,[bp-6h]                      
0b10  inc     word ptr [bp-6h]                
0b13  cmp     byte ptr es:[bx],0h             
0b17  jne     0B0Dh                           
0b19  mov     bx,[bp-6h]                      
0b1c  mov     byte ptr es:[bx-2h],0h          
0b21  push    word ptr [bp+0Eh]               
0b24  push    word ptr [bp+0Ch]               
0b27  push    word ptr [bp+0Ah]               
0b2a  push    word ptr [bp+8h]                
0b2d  push    word ptr [bp+6h]                
0b30  push    cs                              
0b31  call    0A2Ah                           
0b34  lea     sp,[bp-2h]                      
0b37  pop     ds                              
0b38  pop     bp                              
0b39  dec     bp                              
0b3a  retf                                    
0b3b  nop                                     
0b3c  mov     ax,ds                           
0b3e  nop                                     
0b3f  inc     bp                              
0b40  push    bp                              
0b41  mov     bp,sp                           
0b43  push    ds                              
0b44  mov     ds,ax                           
0b46  cmp     word ptr [bp+0Eh],65h           
0b4a  je      0B52h                           
0b4c  cmp     word ptr [bp+0Eh],45h           
0b50  jne     0B6Eh                           
0b52  push    word ptr [bp+12h]               
0b55  push    word ptr [bp+10h]               
0b58  push    word ptr [bp+0Ch]               
0b5b  push    word ptr [bp+0Ah]               
0b5e  push    word ptr [bp+8h]                
0b61  push    word ptr [bp+6h]                
0b64  push    cs                              
0b65  call    6F8h                            
0b68  add     sp,0Ch                          
0b6b  jmp     0BA2h                           
0b6d  nop                                     
0b6e  cmp     word ptr [bp+0Eh],66h           
0b72  jne     0B8Ch                           
0b74  push    word ptr [bp+10h]               
0b77  push    word ptr [bp+0Ch]               
0b7a  push    word ptr [bp+0Ah]               
0b7d  push    word ptr [bp+8h]                
0b80  push    word ptr [bp+6h]                
0b83  push    cs                              
0b84  call    8C4h                            
0b87  add     sp,0Ah                          
0b8a  jmp     0BA2h                           
0b8c  push    word ptr [bp+12h]               
0b8f  push    word ptr [bp+10h]               
0b92  push    word ptr [bp+0Ch]               
0b95  push    word ptr [bp+0Ah]               
0b98  push    word ptr [bp+8h]                
0b9b  push    word ptr [bp+6h]                
0b9e  push    cs                              
0b9f  call    0A5Ch                           
0ba2  lea     sp,[bp-2h]                      
0ba5  pop     ds                              
0ba6  pop     bp                              
0ba7  dec     bp                              
0ba8  retf                                    
0ba9  nop                                     

; ----- sub_0baa -----
0baa  push    bp                              
0bab  mov     bp,sp                           
0bad  cmp     word ptr [bp+4h],0h             
0bb1  je      0BD7h                           
0bb3  push    word ptr [bp+8h]                
0bb6  push    word ptr [bp+6h]                
0bb9  call far sub_0df0                       
0bbe  add     sp,4h                           
0bc1  inc     ax                              
0bc2  push    ax                              
0bc3  push    word ptr [bp+8h]                
0bc6  mov     ax,[bp+6h]                      
0bc9  push    ax                              
0bca  mov     dx,[bp+8h]                      
0bcd  add     ax,[bp+4h]                      
0bd0  push    dx                              
0bd1  push    ax                              
0bd2  call far sub_0e52                       
0bd7  mov     sp,bp                           
0bd9  pop     bp                              
0bda  ret     6h                              
0bdd  nop                                     

; ----- sub_0bde -----
0bde  mov     ax,ds                           
0be0  nop                                     
0be1  inc     bp                              
0be2  push    bp                              
0be3  mov     bp,sp                           
0be5  push    ds                              
0be6  mov     ds,ax                           
0be8  sub     sp,6h                           
0beb  mov     ax,96Eh                         
0bee  push    ds                              
0bef  push    ax                              
0bf0  lea     cx,[bp-6h]                      
0bf3  push    ss                              
0bf4  push    cx                              
0bf5  push    word ptr [bp+8h]                
0bf8  push    word ptr [bp+6h]                
0bfb  xor     dx,dx                           
0bfd  push    dx                              
0bfe  call    0F1Ch                           
0c01  mov     [bp-8h],ax                      
0c04  mov     ax,[bp-6h]                      
0c07  sub     ax,[bp+6h]                      
0c0a  mov     [968h],ax                       
0c0d  mov     word ptr [966h],0h              
0c13  test    byte ptr [bp-8h],4h             
0c17  je      0C1Fh                           
0c19  mov     word ptr [966h],200h            
0c1f  test    byte ptr [bp-8h],2h             
0c23  je      0C2Ah                           
0c25  or      byte ptr [966h],1h              
0c2a  test    byte ptr [bp-8h],1h             
0c2e  je      0C35h                           
0c30  or      byte ptr [967h],1h              
0c35  mov     ax,966h                         
0c38  mov     dx,ds                           
0c3a  lea     sp,[bp-2h]                      
0c3d  pop     ds                              
0c3e  pop     bp                              
0c3f  dec     bp                              
0c40  retf                                    
0c41  nop                                     
0c42  inc     bp                              
0c43  push    bp                              
0c44  mov     bp,sp                           
0c46  push    ds                              
0c47  push    es                              
0c48  push    ax                              
0c49  push    bx                              
0c4a  push    cx                              
0c4b  push    dx                              
0c4c  xor     ah,ah                           
0c4e  add     ax,-1Ch                         
0c51  push    ax                              
0c52  call far sub_04ec                       
0c57  mov     ds,ax                           
0c59  pop     ax                              
0c5a  call    0CBEh                           
0c5d  pop     dx                              
0c5e  pop     cx                              
0c5f  pop     bx                              
0c60  pop     ax                              
0c61  pop     es                              
0c62  pop     ds                              
0c63  pop     bp                              
0c64  dec     bp                              
0c65  retf                                    

; ----- sub_0c66 -----
0c66  mov     ax,ds                           
0c68  nop                                     
0c69  inc     bp                              
0c6a  push    bp                              
0c6b  mov     bp,sp                           
0c6d  push    ds                              
0c6e  mov     ds,ax                           
0c70  push    si                              
0c71  push    di                              
0c72  push    ds                              
0c73  pop     es                              
0c74  mov     dx,[bp+6h]                      
0c77  mov     si,4C0h                         
0c7a  lodsw                                   
0c7b  cmp     ax,dx                           
0c7d  je      0C8Fh                           
0c7f  inc     ax                              
0c80  xchg    ax,si                           
0c81  je      0C8Fh                           
0c83  xchg    ax,di                           
0c84  xor     ax,ax                           
0c86  mov     cx,0FFFFh                       
0c89  repne   scasb                           
0c8b  mov     si,di                           
0c8d  jmp     0C7Ah                           
0c8f  xchg    ax,si                           
0c90  pop     di                              
0c91  pop     si                              
0c92  sub     bp,2h                           
0c95  mov     sp,bp                           
0c97  pop     ds                              
0c98  pop     bp                              
0c99  dec     bp                              
0c9a  retf    2h                              

; ----- sub_0c9d -----
0c9d  mov     ax,ds                           
0c9f  nop                                     
0ca0  inc     bp                              
0ca1  push    bp                              
0ca2  mov     bp,sp                           
0ca4  push    ds                              
0ca5  mov     ds,ax                           
0ca7  push    di                              
0ca8  pop     di                              
0ca9  sub     bp,2h                           
0cac  mov     sp,bp                           
0cae  pop     ds                              
0caf  pop     bp                              
0cb0  dec     bp                              
0cb1  retf    2h                              
0cb4  call far sub_04ec                       
0cb9  mov     ds,ax                           
0cbb  mov     ax,3h                           

; ----- sub_0cbe -----
0cbe  push    ax                              
0cbf  push    ax                              
0cc0  push    cs                              
0cc1  call    3CCh                            
0cc4  push    cs                              
0cc5  call    0C9Dh                           
0cc8  push    cs                              
0cc9  call    0C66h                           
0ccc  xor     bx,bx                           
0cce  or      ax,ax                           
0cd0  je      0CEFh                           
0cd2  mov     di,ax                           
0cd4  mov     ax,9h                           
0cd7  cmp     byte ptr [di],4Dh               
0cda  jne     0CDFh                           
0cdc  mov     ax,0Fh                          
0cdf  add     di,ax                           
0ce1  push    di                              
0ce2  push    ds                              
0ce3  pop     es                              
0ce4  mov     al,0Dh                          
0ce6  mov     cx,22h                          
0ce9  repne   scasb                           
0ceb  mov     [di-1h],bl                      
0cee  pop     ax                              
0cef  push    bx                              
0cf0  push    ds                              
0cf1  push    ax                              
0cf2  call far KERNEL.FATALAPPEXIT            
0cf7  mov     ax,0FFh                         
0cfa  push    ax                              
0cfb  call far KERNEL.FATALEXIT               

; ----- sub_0d00 -----
0d00  push    bp                              
0d01  mov     bp,sp                           
0d03  push    bx                              
0d04  push    es                              
0d05  push    cx                              
0d06  mov     cx,1000h                        
0d09  xchg    cx,[300h]                       
0d0d  push    cx                              
0d0e  push    ax                              
0d0f  call far sub_152f                       
0d14  pop     bx                              
0d15  pop     [300h]                          
0d19  pop     cx                              
0d1a  mov     bx,dx                           
0d1c  or      bx,ax                           
0d1e  je      0D24h                           
0d20  pop     es                              
0d21  pop     bx                              
0d22  jmp     0D29h                           
0d24  mov     ax,cx                           
0d26  jmp     0CBEh                           
0d29  mov     sp,bp                           
0d2b  pop     bp                              
0d2c  ret                                     
0d2d  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
0d2e  mov     ax,ds                           
0d30  nop                                     
0d31  inc     bp                              
0d32  push    bp                              
0d33  mov     bp,sp                           
0d35  push    ds                              
0d36  mov     ds,ax                           
0d38  xor     ax,ax                           
0d3a  lea     sp,[bp-2h]                      
0d3d  pop     ds                              
0d3e  pop     bp                              
0d3f  dec     bp                              
0d40  retf                                    
0d41  nop                                     

; ----- sub_0d42 -----
0d42  inc     bp                              
0d43  push    bp                              
0d44  mov     bp,sp                           
0d46  push    ds                              
0d47  sub     sp,0Ah                          
0d4a  les     bx,[bp+0Ch]                     
0d4d  mov     ax,es:[bx+6h]                   
0d51  mov     dx,es:[bx+8h]                   
0d55  mov     [bp-0Ah],ax                     
0d58  mov     [bp-8h],dx                      
0d5b  les     bx,[bp+6h]                      
0d5e  mov     byte ptr es:[bx],30h            
0d62  lea     ax,[bx+1h]                      
0d65  mov     [bp-6h],ax                      
0d68  mov     [bp-4h],es                      
0d6b  jmp     0D98h                           
0d6d  nop                                     
0d6e  les     bx,[bp-0Ah]                     
0d71  cmp     byte ptr es:[bx],0h             
0d75  je      0D84h                           
0d77  mov     al,es:[bx]                      
0d7a  cbw                                     
0d7b  mov     [bp-0Ch],ax                     
0d7e  inc     word ptr [bp-0Ah]               
0d81  jmp     0D89h                           
0d83  nop                                     
0d84  mov     word ptr [bp-0Ch],30h           
0d89  mov     al,[bp-0Ch]                     
0d8c  les     bx,[bp-6h]                      
0d8f  inc     word ptr [bp-6h]                
0d92  mov     es:[bx],al                      
0d95  dec     word ptr [bp+0Ah]               
0d98  cmp     word ptr [bp+0Ah],0h            
0d9c  jg      0D6Eh                           
0d9e  les     bx,[bp-6h]                      
0da1  mov     byte ptr es:[bx],0h             
0da5  cmp     word ptr [bp+0Ah],0h            
0da9  jl      0DC9h                           
0dab  les     bx,[bp-0Ah]                     
0dae  cmp     byte ptr es:[bx],35h            
0db2  jl      0DC9h                           
0db4  jmp     0DBAh                           
0db6  mov     byte ptr es:[bx],30h            
0dba  dec     word ptr [bp-6h]                
0dbd  les     bx,[bp-6h]                      
0dc0  cmp     byte ptr es:[bx],39h            
0dc4  je      0DB6h                           
0dc6  inc     byte ptr es:[bx]                
0dc9  les     bx,[bp+6h]                      
0dcc  cmp     byte ptr es:[bx],31h            
0dd0  jne     0DDCh                           
0dd2  les     bx,[bp+0Ch]                     
0dd5  inc     word ptr es:[bx+2h]             
0dd9  jmp     0DE8h                           
0ddb  nop                                     
0ddc  lea     ax,[bx+1h]                      
0ddf  push    es                              
0de0  push    ax                              
0de1  push    es                              
0de2  push    bx                              
0de3  call far sub_028c                       
0de8  lea     sp,[bp-2h]                      
0deb  pop     ds                              
0dec  pop     bp                              
0ded  dec     bp                              
0dee  retf                                    
0def  nop                                     

; ----- sub_0df0 -----
0df0  push    bp                              
0df1  mov     bp,sp                           
0df3  mov     dx,di                           
0df5  les     di,[bp+6h]                      
0df8  xor     ax,ax                           
0dfa  mov     cx,0FFFFh                       
0dfd  repne   scasb                           
0dff  not     cx                              
0e01  jne     0E04h                           
0e03  dec     cx                              
0e04  xchg    ax,cx                           
0e05  mov     di,dx                           
0e07  pop     bp                              
0e08  retf                                    
0e09  add     [bx+si],al                      

; ----- sub_0e0a -----
0e0a  push    bp                              
0e0b  mov     bp,sp                           
0e0d  mov     cx,[bp+0Ch]                     
0e10  jcxz    0E4Ah                           
0e12  push    di                              
0e13  les     di,[bp+6h]                      
0e16  mov     dx,di                           
0e18  neg     dx                              
0e1a  je      0E28h                           
0e1c  sub     dx,cx                           
0e1e  sbb     bx,bx                           
0e20  and     dx,bx                           
0e22  add     dx,cx                           
0e24  xchg    dx,cx                           
0e26  sub     dx,cx                           
0e28  mov     ax,[bp+0Ah]                     
0e2b  mov     ah,al                           
0e2d  shr     cx,1                            
0e2f  rep     stosw                           
0e31  adc     cx,cx                           
0e33  rep     stosb                           
0e35  xchg    dx,cx                           
0e37  jcxz    0E49h                           
0e39  mov     bx,es                           
0e3b  add     bx,0FFFFh                       
0e3f  mov     es,bx                           
0e41  shr     cx,1                            
0e43  rep     stosw                           
0e45  adc     cx,cx                           
0e47  rep     stosb                           
0e49  pop     di                              
0e4a  mov     ax,[bp+6h]                      
0e4d  mov     dx,[bp+8h]                      
0e50  pop     bp                              
0e51  retf                                    

; ----- sub_0e52 -----
0e52  push    bp                              
0e53  mov     bp,sp                           
0e55  mov     cx,[bp+0Eh]                     
0e58  push    ds                              
0e59  push    di                              
0e5a  push    si                              
0e5b  or      cx,cx                           
0e5d  jne     0E62h                           
0e5f  jmp     0F11h                           
0e62  lds     si,[bp+0Ah]                     
0e65  les     di,[bp+6h]                      
0e68  push    ds                              
0e69  push    si                              
0e6a  push    es                              
0e6b  push    di                              
0e6c  call far sub_10f2                       
0e71  mov     cx,[bp+0Eh]                     
0e74  or      dx,dx                           
0e76  js      0ECFh                           
0e78  sub     ax,cx                           
0e7a  sbb     dx,0h                           
0e7d  jae     0ECFh                           
0e7f  dec     cx                              
0e80  add     si,cx                           
0e82  jae     0E8Bh                           
0e84  mov     ax,ds                           
0e86  add     ax,0E3Dh                        
0e89  mov     ds,ax                           
0e8b  add     di,cx                           
0e8d  jae     0E96h                           
0e8f  mov     ax,es                           
0e91  add     ax,0E87h                        
0e94  mov     es,ax                           
0e96  inc     cx                              
0e97  mov     ax,cx                           
0e99  dec     ax                              
0e9a  sub     ax,di                           
0e9c  sbb     bx,bx                           
0e9e  and     ax,bx                           
0ea0  add     ax,di                           
0ea2  sub     ax,si                           
0ea4  sbb     bx,bx                           
0ea6  and     ax,bx                           
0ea8  add     ax,si                           
0eaa  inc     ax                              
0eab  xchg    ax,cx                           
0eac  sub     ax,cx                           
0eae  std                                     
0eaf  rep     movsb                           
0eb1  cld                                     
0eb2  xchg    ax,cx                           
0eb3  jcxz    0F11h                           
0eb5  cmp     si,-1h                          
0eb8  jne     0EC1h                           
0eba  mov     ax,ds                           
0ebc  sub     ax,0E92h                        
0ebf  mov     ds,ax                           
0ec1  cmp     di,-1h                          
0ec4  jne     0E97h                           
0ec6  mov     ax,es                           
0ec8  sub     ax,0EBDh                        
0ecb  mov     es,ax                           
0ecd  jmp     0E97h                           
0ecf  mov     ax,cx                           
0ed1  dec     ax                              
0ed2  mov     dx,di                           
0ed4  not     dx                              
0ed6  sub     ax,dx                           
0ed8  sbb     bx,bx                           
0eda  and     ax,bx                           
0edc  add     ax,dx                           
0ede  mov     dx,si                           
0ee0  not     dx                              
0ee2  sub     ax,dx                           
0ee4  sbb     bx,bx                           
0ee6  and     ax,bx                           
0ee8  add     ax,dx                           
0eea  inc     ax                              
0eeb  xchg    ax,cx                           
0eec  sub     ax,cx                           
0eee  shr     cx,1                            
0ef0  rep     movsw                           
0ef2  adc     cx,cx                           
0ef4  rep     movsb                           
0ef6  xchg    ax,cx                           
0ef7  jcxz    0F11h                           
0ef9  or      si,si                           
0efb  jne     0F04h                           
0efd  mov     ax,ds                           
0eff  add     ax,0EC9h                        
0f02  mov     ds,ax                           
0f04  or      di,di                           
0f06  jne     0ECFh                           
0f08  mov     ax,es                           
0f0a  add     ax,0F00h                        
0f0d  mov     es,ax                           
0f0f  jmp     0ECFh                           
0f11  mov     ax,[bp+6h]                      
0f14  mov     dx,[bp+8h]                      
0f17  pop     si                              
0f18  pop     di                              
0f19  pop     ds                              
0f1a  pop     bp                              
0f1b  retf                                    

; ----- sub_0f1c -----
0f1c  push    bp                              
0f1d  mov     bp,sp                           
0f1f  sub     sp,0Eh                          
0f22  push    ss                              
0f23  lea     ax,[bp-0Ah]                     
0f26  push    ax                              
0f27  push    word ptr [bp+0Ch]               
0f2a  push    word ptr [bp+0Ah]               
0f2d  push    word ptr [bp+8h]                
0f30  push    word ptr [bp+6h]                
0f33  push    word ptr [bp+4h]                
0f36  call    12A6h                           
0f39  wait                                    
0f3a  fstcw   word ptr [bp-0Eh]               
0f3d  wait                                    
0f3e  fld     tword ptr [bp-0Ah]              
0f41  mov     bx,[bp-0Eh]                     
0f44  or      bx,18h                          
0f47  mov     [bp-0Ch],bx                     
0f4a  wait                                    
0f4b  fclex                                   
0f4d  les     bx,[bp+0Eh]                     
0f50  wait                                    
0f51  fldcw   word ptr [bp-0Ch]               
0f54  wait                                    
0f55  fstp    qword ptr es:[bx]               
0f58  wait                                    
0f59  fstsw   word ptr [bp-0Ch]               
0f5c  wait                                    
0f5d  fclex                                   
0f5f  wait                                    
0f60  fldcw   word ptr [bp-0Eh]               
0f63  or      ax,ax                           
0f65  jne     0F7Eh                           
0f67  mov     bx,[bp-0Ch]                     
0f6a  xor     ax,ax                           
0f6c  test    bx,18h                          
0f70  je      0F7Eh                           
0f72  mov     ax,2h                           
0f75  test    bx,8h                           
0f79  jne     0F7Eh                           
0f7b  mov     ax,1h                           
0f7e  mov     sp,bp                           
0f80  pop     bp                              
0f81  ret     0Eh                             

; ----- sub_0f84 -----
0f84  mov     ax,ds                           
0f86  nop                                     
0f87  inc     bp                              
0f88  push    bp                              
0f89  mov     bp,sp                           
0f8b  push    ds                              
0f8c  mov     ds,ax                           
0f8e  push    si                              
0f8f  push    di                              
0f90  cld                                     
0f91  mov     ax,ds                           
0f93  mov     es,ax                           
0f95  lea     si,[bp+6h]                      
0f98  mov     di,2E4h                         
0f9b  movsw   ss:                             
0f9d  movsw   ss:                             
0f9f  movsw   ss:                             
0fa1  movsw   ss:                             
0fa3  mov     si,2E4h                         
0fa6  push    bp                              
0fa7  call    1160h                           
0faa  pop     bp                              
0fab  mov     di,2ECh                         
0fae  mov     cx,ax                           
0fb0  lodsb                                   
0fb1  cbw                                     
0fb2  xchg    ax,cx                           
0fb3  rep     movsb                           
0fb5  xchg    ax,cx                           
0fb6  stosb                                   
0fb7  mov     di,2DAh                         
0fba  xor     bh,bh                           
0fbc  mov     [di],bx                         
0fbe  mov     [di+2h],dx                      
0fc1  mov     [di+4h],cx                      
0fc4  mov     word ptr [di+6h],2ECh           
0fc9  mov     [di+8h],ds                      
0fcc  mov     dx,ds                           
0fce  mov     ax,di                           
0fd0  pop     di                              
0fd1  pop     si                              
0fd2  lea     sp,[bp-2h]                      
0fd5  pop     ds                              
0fd6  pop     bp                              
0fd7  dec     bp                              
0fd8  retf                                    
0fd9  add     [bx+di+57h],dl                  
0fdc  test    byte ptr [bx+2h],1h             
0fe0  je      104Ah                           
0fe2  call    10D1h                           
0fe5  mov     di,si                           
0fe7  mov     ax,[si]                         
0fe9  test    al,1h                           
0feb  je      0FF0h                           
0fed  sub     cx,ax                           
0fef  dec     cx                              
0ff0  inc     cx                              
0ff1  inc     cx                              
0ff2  mov     si,[bx+4h]                      
0ff5  or      si,si                           
0ff7  je      104Ah                           
0ff9  add     cx,si                           
0ffb  jae     1006h                           
0ffd  xor     ax,ax                           
0fff  mov     dx,0FFF0h                       
1002  jcxz    1039h                           
1004  jmp     104Ah                           
1006  call far sub_04ec                       
100b  mov     es,ax                           
100d  mov     ax,es:[300h]                    
1011  cmp     ax,1000h                        
1014  je      102Ch                           
1016  mov     dx,8000h                        
1019  cmp     dx,ax                           
101b  jb      1023h                           
101d  shr     dx,1                            
101f  jne     1019h                           
1021  jmp     1045h                           
1023  cmp     dx,8h                           
1026  jb      1045h                           
1028  shl     dx,1                            
102a  mov     ax,dx                           
102c  dec     ax                              
102d  mov     dx,ax                           
102f  add     ax,cx                           
1031  jae     1035h                           
1033  xor     ax,ax                           
1035  not     dx                              
1037  and     ax,dx                           
1039  push    dx                              
103a  call    106Bh                           
103d  pop     dx                              
103e  jae     104Dh                           
1040  cmp     dx,-10h                         
1043  je      104Ah                           
1045  mov     ax,10h                          
1048  jmp     102Ch                           
104a  stc                                     
104b  jmp     1068h                           
104d  mov     dx,ax                           
104f  sub     dx,[bx+4h]                      
1052  mov     [bx+4h],ax                      
1055  mov     [bx+0Ah],di                     
1058  mov     si,[bx+0Ch]                     
105b  dec     dx                              
105c  mov     [si],dx                         
105e  inc     dx                              
105f  add     si,dx                           
1061  mov     word ptr [si],0FFFEh            
1065  mov     [bx+0Ch],si                     
1068  pop     di                              
1069  pop     cx                              
106a  ret                                     

; ----- sub_106b -----
106b  mov     dx,ax                           
106d  test    byte ptr [bx+2h],4h             
1071  je      1075h                           
1073  jmp     10C6h                           
1075  push    dx                              
1076  push    cx                              
1077  push    bx                              
1078  mov     si,[bx+6h]                      
107b  mov     bx,cs:[10h]                     
1080  xor     cx,cx                           
1082  or      dx,dx                           
1084  jne     108Dh                           
1086  test    bx,10h                          
108a  jne     10CCh                           
108c  inc     cx                              
108d  mov     ax,2002h                        
1090  test    bx,1h                           
1094  jne     1099h                           
1096  mov     ax,2020h                        
1099  push    si                              
109a  push    cx                              
109b  push    dx                              
109c  push    ax                              
109d  call far KERNEL.GLOBALREALLOC           
10a2  or      ax,ax                           
10a4  je      10CCh                           
10a6  cmp     ax,si                           
10a8  jne     10C6h                           
10aa  push    si                              
10ab  call far KERNEL.GLOBALSIZE              
10b0  or      dx,ax                           
10b2  je      10C6h                           
10b4  pop     bx                              
10b5  pop     cx                              
10b6  pop     dx                              
10b7  mov     ax,dx                           
10b9  test    byte ptr [bx+2h],4h             
10bd  je      10C3h                           
10bf  dec     dx                              
10c0  mov     [bx-2h],dx                      
10c3  clc                                     
10c4  jmp     10D0h                           
10c6  mov     ax,12h                          
10c9  jmp     0CBEh                           
10cc  pop     bx                              
10cd  pop     cx                              
10ce  pop     dx                              
10cf  stc                                     
10d0  ret                                     

; ----- sub_10d1 -----
10d1  push    di                              
10d2  mov     si,[bx+0Ah]                     
10d5  cmp     si,[bx+0Ch]                     
10d8  jne     10DDh                           
10da  mov     si,[bx+8h]                      
10dd  lodsw                                   
10de  cmp     ax,-2h                          
10e1  je      10EBh                           
10e3  mov     di,si                           
10e5  and     al,0FEh                         
10e7  add     si,ax                           
10e9  jmp     10DDh                           
10eb  dec     di                              
10ec  dec     di                              
10ed  mov     si,di                           
10ef  pop     di                              
10f0  ret                                     
10f1  add     [bx+si],al                      

; ----- sub_10f2 -----
10f2  push    bp                              
10f3  mov     bp,sp                           
10f5  push    bx                              
10f6  push    cx                              
10f7  mov     ax,[bp+6h]                      
10fa  mov     dx,[bp+8h]                      
10fd  mov     bx,[bp+0Ch]                     
1100  mov     cx,0FFFFh                       
1103  shr     dx,cl                           
1105  shr     bx,cl                           
1107  sub     ax,[bp+0Ah]                     
110a  sbb     dx,bx                           
110c  pop     cx                              
110d  pop     bx                              
110e  pop     bp                              
110f  retf    8h                              
1112  cld                                     
1114  ???                                     
1116  ???                                     
1118  ???                                     
111a  ???                                     
111c  int     0CCh                            
111e  int 3                                   
111f  int 3                                   
1120  int 3                                   
1121  int 3                                   
1122  int 3                                   
1123  int 3                                   
1124  sti                                     
1125  aas                                     
1126  mov     si,30Eh                         
1129  mov     word ptr [si],3001h             
112d  xor     ax,ax                           
112f  mov     dx,ax                           
1131  inc     ax                              
1132  mov     bl,20h                          
1134  pop     es                              
1135  ret                                     
1136  or      dx,dx                           
1138  jne     1144h                           
113a  cmp     cx,-8h                          
113d  je      1156h                           
113f  and     cl,0Fh                          
1142  je      1151h                           
1144  mov     si,326h                         
1147  test    cl,8h                           
114a  jne     1159h                           
114c  mov     si,31Fh                         
114f  jmp     1159h                           
1151  mov     si,32Dh                         
1154  jmp     1159h                           
1156  mov     si,333h                         
1159  mov     dx,1h                           
115c  pop     es                              
115d  xor     ax,ax                           
115f  ret                                     

; ----- sub_1160 -----
1160  push    es                              
1161  mov     ax,ds                           
1163  mov     es,ax                           
1165  cld                                     
1166  mov     di,302h                         
1169  push    di                              
116a  mov     cx,4h                           
116d  rep     movsw                           
116f  pop     si                              
1170  mov     cx,[si+6h]                      
1173  and     byte ptr [si+7h],7Fh            
1177  mov     bl,20h                          
1179  mov     ax,[si]                         
117b  or      ax,[si+2h]                      
117e  or      ax,[si+4h]                      
1181  mov     dx,ax                           
1183  or      ax,[si+6h]                      
1186  je      1126h                           
1188  or      cx,cx                           
118a  jns     118Eh                           
118c  mov     bl,2Dh                          
118e  not     cx                              
1190  test    cx,7FF0h                        
1194  not     cx                              
1196  je      1136h                           
1198  push    bx                              
1199  wait                                    
119a  fstcw   word ptr [33Bh]                 
119e  nop                                     
119f  wait                                    
11a0  push    ax                              
11a1  mov     al,[33Bh]                       
11a4  mov     [33Dh],al                       
11a7  pop     ax                              
11a8  wait                                    
11a9  fldcw   word ptr [33Dh]                 
11ad  wait                                    
11ae  fld     qword ptr [si]                  
11b0  wait                                    
11b1  fld     st(0),st(0)                     
11b3  wait                                    
11b4  fstp    tword ptr [si]                  
11b6  nop                                     
11b7  wait                                    
11b8  xor     di,di                           
11ba  mov     si,309h                         
11bd  lodsb                                   
11be  mov     bh,al                           
11c0  lodsw                                   
11c1  mov     cx,ax                           
11c3  mov     dx,4D10h                        
11c6  mul     dx                              
11c8  xchg    ax,cx                           
11c9  mov     al,4Dh                          
11cb  mul     ah                              
11cd  add     cx,ax                           
11cf  adc     dx,di                           
11d1  mov     al,9Ah                          
11d3  mul     bh                              
11d5  add     cx,ax                           
11d7  adc     di,dx                           
11d9  sub     cx,12F4h                        
11dd  sbb     di,1343h                        
11e1  push    di                              
11e2  neg     di                              
11e4  mov     si,302h                         
11e7  call    1752h                           
11ea  mov     bx,1112h                        
11ed  pop     di                              
11ee  wait                                    
11ef  fld     tword ptr cs:[bx]               
11f2  wait                                    
11f3  fcomp   st(0),st(1)                     
11f5  wait                                    
11f6  fstsw   word ptr [339h]                 
11fa  nop                                     
11fb  wait                                    
11fc  test    byte ptr [33Ah],41h             
1201  je      120Eh                           
1203  inc     di                              
1204  mov     bx,111Ch                        
1207  wait                                    
1208  fld     tword ptr cs:[bx]               
120b  wait                                    
120c  fmulp   st(1)                           
120e  push    di                              
120f  wait                                    
1210  fstp    tword ptr [si]                  
1212  wait                                    
1213  fldcw   word ptr [33Bh]                 
1217  nop                                     
1218  wait                                    
1219  lodsw                                   
121a  xchg    ax,di                           
121b  lodsw                                   
121c  xchg    ax,bp                           
121d  lodsw                                   
121e  xchg    ax,dx                           
121f  lodsw                                   
1220  xchg    ax,bx                           
1221  lodsw                                   
1222  xchg    ax,cx                           
1223  sub     cx,3FFEh                        
1227  neg     cx                              
1229  mov     si,di                           
122b  xor     ax,ax                           
122d  jcxz    123Bh                           
122f  shr     bx,1                            
1231  rcr     dx,1                            
1233  rcr     bp,1                            
1235  rcr     si,1                            
1237  rcr     ah,1                            
1239  loop    122Fh                           
123b  adc     si,39Ah                         
123f  adc     bp,cx                           
1241  adc     dx,cx                           
1243  adc     bx,cx                           
1245  mov     di,30Fh                         
1248  mov     cx,10h                          
124b  xor     al,al                           
124d  push    cx                              
124e  push    bx                              
124f  push    dx                              
1250  push    bp                              
1251  push    si                              
1252  push    ax                              
1253  shl     ah,1                            
1255  rcl     si,1                            
1257  rcl     bp,1                            
1259  rcl     dx,1                            
125b  rcl     bx,1                            
125d  rcl     al,1                            
125f  shl     ah,1                            
1261  rcl     si,1                            
1263  rcl     bp,1                            
1265  rcl     dx,1                            
1267  rcl     bx,1                            
1269  rcl     al,1                            
126b  pop     cx                              
126c  adc     ah,ch                           
126e  pop     cx                              
126f  adc     si,cx                           
1271  pop     cx                              
1272  adc     bp,cx                           
1274  pop     cx                              
1275  adc     dx,cx                           
1277  pop     cx                              
1278  adc     bx,cx                           
127a  adc     al,0h                           
127c  shl     ah,1                            
127e  rcl     si,1                            
1280  rcl     bp,1                            
1282  rcl     dx,1                            
1284  rcl     bx,1                            
1286  rcl     al,1                            
1288  pop     cx                              
1289  add     al,30h                          
128b  stosb                                   
128c  loop    124Bh                           
128e  dec     di                              
128f  dec     cx                              
1290  mov     al,30h                          
1292  std                                     
1293  rep     scasb                           
1295  cld                                     
1296  add     cx,12h                          
1299  mov     si,30Eh                         
129c  mov     [si],cl                         
129e  mov     ax,1h                           
12a1  pop     dx                              
12a2  pop     bx                              
12a3  pop     es                              
12a4  ret                                     
12a5  add     [bx+si],al                      

; ----- sub_12a6 -----
12a6  push    bp                              
12a7  mov     bp,sp                           
12a9  sub     sp,34h                          
12ac  push    si                              
12ad  push    di                              
12ae  push    ds                              
12af  lds     si,[bp+6h]                      
12b2  xor     ax,ax                           
12b4  mov     [bp-0Eh],ax                     
12b7  mov     [bp-10h],ds                     
12ba  mov     [bp-12h],si                     
12bd  mov     [bp-14h],ax                     
12c0  mov     [bp-18h],ax                     
12c3  mov     [bp-16h],ax                     
12c6  mov     word ptr [bp-1Ah],19h           
12cb  push    ss                              
12cc  pop     es                              
12cd  lea     di,[bp-34h]                     
12d0  lodsb                                   
12d1  cmp     al,20h                          
12d3  je      12D0h                           
12d5  cmp     al,9h                           
12d7  je      12D0h                           
12d9  cmp     al,0Ah                          
12db  je      12D0h                           
12dd  cmp     al,0Dh                          
12df  je      12D0h                           
12e1  or      al,al                           
12e3  jne     12E8h                           
12e5  jmp     14D7h                           
12e8  cmp     al,2Bh                          
12ea  je      12F5h                           
12ec  cmp     al,2Dh                          
12ee  jne     12F6h                           
12f0  mov     word ptr [bp-14h],8000h         
12f5  lodsb                                   
12f6  cmp     al,30h                          
12f8  jb      12FEh                           
12fa  cmp     al,39h                          
12fc  jbe     130Eh                           
12fe  cmp     al,2Eh                          
1300  jne     12E5h                           
1302  lodsb                                   
1303  cmp     al,30h                          
1305  jb      12E5h                           
1307  cmp     al,39h                          
1309  ja      12E5h                           
130b  jmp     1322h                           
130d  lodsb                                   
130e  cmp     al,30h                          
1310  je      130Dh                           
1312  or      al,al                           
1314  jne     131Dh                           
1316  dec     si                              
1317  mov     [bp-12h],si                     
131a  jmp     14DBh                           
131d  cmp     al,2Eh                          
131f  jne     1333h                           
1321  lodsb                                   
1322  dec     word ptr [bp-16h]               
1325  cmp     al,30h                          
1327  je      1321h                           
1329  inc     word ptr [bp-16h]               
132c  or      al,al                           
132e  je      1316h                           
1330  jmp     135Dh                           
1332  lodsb                                   
1333  cmp     al,30h                          
1335  jb      1358h                           
1337  cmp     al,39h                          
1339  ja      1358h                           
133b  sub     al,30h                          
133d  stosb                                   
133e  dec     word ptr [bp-1Ah]               
1341  jne     1332h                           
1343  lodsb                                   
1344  inc     word ptr [bp-16h]               
1347  cmp     al,30h                          
1349  jb      134Fh                           
134b  cmp     al,39h                          
134d  jbe     1343h                           
134f  dec     word ptr [bp-16h]               
1352  cmp     al,2Eh                          
1354  je      1370h                           
1356  jmp     1379h                           
1358  cmp     al,2Eh                          
135a  jne     1379h                           
135c  lodsb                                   
135d  cmp     al,30h                          
135f  jb      1379h                           
1361  cmp     al,39h                          
1363  ja      1379h                           
1365  sub     al,30h                          
1367  stosb                                   
1368  dec     word ptr [bp-16h]               
136b  dec     word ptr [bp-1Ah]               
136e  jne     135Ch                           
1370  lodsb                                   
1371  cmp     al,30h                          
1373  jb      1379h                           
1375  cmp     al,39h                          
1377  jbe     1370h                           
1379  neg     word ptr [bp-1Ah]               
137c  add     word ptr [bp-1Ah],19h           
1380  lea     bx,[si-1h]                      
1383  mov     [bp-12h],bx                     
1386  xor     bx,bx                           
1388  cmp     al,45h                          
138a  je      139Ah                           
138c  cmp     al,65h                          
138e  je      139Ah                           
1390  cmp     al,44h                          
1392  je      139Ah                           
1394  cmp     al,64h                          
1396  je      139Ah                           
1398  jmp     13ECh                           
139a  lodsb                                   
139b  cmp     al,2Bh                          
139d  je      13A8h                           
139f  cmp     al,2Dh                          
13a1  jne     13A9h                           
13a3  mov     word ptr [bp-18h],0FFFFh        
13a8  lodsb                                   
13a9  cmp     al,30h                          
13ab  jb      13ECh                           
13ad  cmp     al,39h                          
13af  ja      13ECh                           
13b1  sub     ax,30h                          
13b4  mov     bx,ax                           
13b6  lodsb                                   
13b7  cmp     al,30h                          
13b9  jb      13DFh                           
13bb  cmp     al,39h                          
13bd  ja      13DFh                           
13bf  sub     al,30h                          
13c1  cmp     bx,666h                         
13c5  ja      13D3h                           
13c7  shl     bx,1                            
13c9  add     ax,bx                           
13cb  shl     bx,1                            
13cd  shl     bx,1                            
13cf  add     bx,ax                           
13d1  jns     13B6h                           
13d3  mov     bx,3FFFh                        
13d6  lodsb                                   
13d7  cmp     al,30h                          
13d9  jb      13DFh                           
13db  cmp     al,39h                          
13dd  jbe     13D6h                           
13df  xor     bx,[bp-18h]                     
13e2  sub     bx,[bp-18h]                     
13e5  add     [bp-16h],bx                     
13e8  dec     si                              
13e9  mov     [bp-12h],si                     
13ec  cmp     word ptr [bp-1Ah],0h            
13f0  jne     13F5h                           
13f2  jmp     14DBh                           
13f5  mov     byte ptr es:[di],0h             
13f9  dec     di                              
13fa  cmp     word ptr [bp-1Ah],18h           
13fe  jbe     1417h                           
1400  mov     al,es:[di]                      
1403  mov     byte ptr es:[di],0h             
1407  dec     word ptr [bp-1Ah]               
140a  inc     word ptr [bp-16h]               
140d  dec     di                              
140e  cmp     al,5h                           
1410  jb      1426h                           
1412  inc     byte ptr es:[di]                
1415  jmp     142Ch                           
1417  cmp     word ptr [bp-16h],0h            
141b  je      142Ch                           
141d  jmp     1426h                           
141f  dec     di                              
1420  dec     word ptr [bp-1Ah]               
1423  inc     word ptr [bp-16h]               
1426  cmp     byte ptr es:[di],0h             
142a  je      141Fh                           
142c  push    ss                              
142d  lea     ax,[bp-34h]                     
1430  push    ax                              
1431  push    word ptr [bp-1Ah]               
1434  lea     ax,[bp-0Ch]                     
1437  push    ax                              
1438  call    1CA2h                           
143b  mov     ax,[bp-16h]                     
143e  or      ax,ax                           
1440  je      1460h                           
1442  cmp     ax,1450h                        
1445  jl      144Ah                           
1447  jmp     14EDh                           
144a  cmp     ax,0EBB0h                       
144d  jg      1452h                           
144f  jmp     14E7h                           
1452  push    ss                              
1453  lea     ax,[bp-0Ch]                     
1456  push    ax                              
1457  push    word ptr [bp-16h]               
145a  push    word ptr [bp+4h]                
145d  call    1A48h                           
1460  mov     ax,[bp-4h]                      
1463  mov     bx,[bp-6h]                      
1466  mov     cx,[bp-8h]                      
1469  mov     dx,[bp-0Ah]                     
146c  cmp     word ptr [bp-0Ch],8000h         
1471  jb      148Fh                           
1473  ja      147Bh                           
1475  test    dx,1h                           
1479  je      148Fh                           
147b  add     dx,1h                           
147e  adc     cx,0h                           
1481  adc     bx,0h                           
1484  adc     ax,0h                           
1487  jae     148Fh                           
1489  or      ah,80h                          
148c  inc     word ptr [bp-2h]                
148f  mov     si,[bp-2h]                      
1492  cmp     si,7FFFh                        
1496  jae     14EDh                           
1498  or      si,si                           
149a  jne     14A6h                           
149c  mov     si,ax                           
149e  or      si,bx                           
14a0  or      si,cx                           
14a2  or      si,dx                           
14a4  je      14E7h                           
14a6  lds     si,[bp+0Eh]                     
14a9  mov     [si+6h],ax                      
14ac  mov     [si+4h],bx                      
14af  mov     [si+2h],cx                      
14b2  mov     [si],dx                         
14b4  mov     ax,[bp-2h]                      
14b7  or      ax,[bp-14h]                     
14ba  mov     [si+8h],ax                      
14bd  lds     si,[bp+0Ah]                     
14c0  mov     ax,[bp-12h]                     
14c3  mov     [si],ax                         
14c5  mov     ax,[bp-10h]                     
14c8  mov     [si+2h],ax                      
14cb  mov     ax,[bp-0Eh]                     
14ce  pop     ds                              
14cf  pop     di                              
14d0  pop     si                              
14d1  mov     sp,bp                           
14d3  pop     bp                              
14d4  ret     0Eh                             
14d7  or      word ptr [bp-0Eh],4h            
14db  les     di,[bp+0Eh]                     
14de  xor     ax,ax                           
14e0  mov     cx,5h                           
14e3  rep     stosw                           
14e5  jmp     14BDh                           
14e7  or      word ptr [bp-0Eh],1h            
14eb  jmp     14DBh                           
14ed  or      word ptr [bp-0Eh],2h            
14f1  lds     si,[bp+0Eh]                     
14f4  mov     ax,7FFFh                        
14f7  or      ax,[bp-14h]                     
14fa  mov     [si+8h],ax                      
14fd  mov     word ptr [si+6h],8000h          
1502  xor     ax,ax                           
1504  mov     [si+4h],ax                      
1507  mov     [si+2h],ax                      
150a  mov     [si],ax                         
150c  jmp     14BDh                           
150e  mov     ax,ds                           
1510  nop                                     
1511  inc     bp                              
1512  push    bp                              
1513  mov     bp,sp                           
1515  push    ds                              
1516  mov     ds,ax                           
1518  push    si                              
1519  les     si,[bp+6h]                      
151c  mov     cx,es                           
151e  jcxz    1525h                           
1520  or      byte ptr es:[si-2h],1h          
1525  pop     si                              
1526  sub     bp,2h                           
1529  mov     sp,bp                           
152b  pop     ds                              
152c  pop     bp                              
152d  dec     bp                              
152e  retf                                    

; ----- sub_152f -----
152f  mov     ax,ds                           
1531  nop                                     
1532  inc     bp                              
1533  push    bp                              
1534  mov     bp,sp                           
1536  push    ds                              
1537  mov     ds,ax                           
1539  push    si                              
153a  push    di                              
153b  mov     cx,[bp+6h]                      
153e  cmp     cx,-1Ah                         
1541  ja      15ACh                           
1543  push    ds                              
1544  mov     ax,[352h]                       
1547  or      ax,ax                           
1549  je      1593h                           
154b  mov     di,1DECh                        
154e  mov     si,[35Ah]                       
1552  lds     bx,[354h]                       
1556  push    ds                              
1557  push    si                              
1558  push    di                              
1559  call    di                              
155b  pop     di                              
155c  pop     si                              
155d  jae     158Ah                           
155f  mov     dx,ds                           
1561  lds     bx,[bx+0Eh]                     
1564  cmp     dx,si                           
1566  jne     1557h                           
1568  pop     ax                              
1569  pop     ds                              
156a  push    ds                              
156b  les     si,[354h]                       
156f  mov     si,es:[si+14h]                  
1573  lds     bx,[350h]                       
1577  mov     dx,ds                           
1579  cmp     dx,ax                           
157b  jne     1556h                           
157d  pop     ds                              
157e  push    ds                              
157f  cmp     di,0FDAh                        
1583  je      1593h                           
1585  mov     di,0FDAh                        
1588  jmp     154Eh                           
158a  pop     si                              
158b  cmp     di,1DECh                        
158f  je      15A0h                           
1591  jmp     159Dh                           
1593  pop     es                              
1594  push    es                              
1595  mov     di,350h                         
1598  call    1D5Ch                           
159b  jb      15ABh                           
159d  call    1DECh                           
15a0  pop     ds                              
15a1  mov     [356h],dx                       
15a5  mov     [354h],bx                       
15a9  jmp     15CBh                           
15ab  pop     ds                              
15ac  xor     ax,ax                           
15ae  cwd                                     
15af  mov     cx,[34Eh]                       
15b3  or      cx,[34Ch]                       
15b7  je      15CBh                           
15b9  push    word ptr [bp+6h]                
15bc  call    far ptr  [34Ch]                 
15c0  add     sp,2h                           
15c3  cwd                                     
15c4  or      ax,ax                           
15c6  je      15CBh                           
15c8  jmp     153Bh                           
15cb  pop     di                              
15cc  pop     si                              
15cd  sub     bp,2h                           
15d0  mov     sp,bp                           
15d2  pop     ds                              
15d3  pop     bp                              
15d4  dec     bp                              
15d5  retf                                    
15d6  add     [bx+si],al                      
15d8  add     [bx+si],al                      
15da  add     [bx+si],al                      
15dc  add     [bx+si+4002h],ah                
15e0  add     [bx+si],al                      
15e2  add     [bx+si],al                      
15e4  add     [bx+si],al                      
15e6  add     al,cl                           
15e8  add     ax,40h                          
15eb  add     [bx+si],al                      
15ed  add     [bx+si],al                      
15ef  add     [bx+si],al                      
15f1  cli                                     
15f2  or      [bx+si],al                      
15f5  add     [bx+si],al                      
15f7  add     [bx+si],al                      
15f9  add     [bx+si-64h],al                  
15fc  or      al,40h                          
15fe  add     [bx+si],al                      
1600  add     [bx+si],al                      
1602  add     [bx+si],al                      
1604  push    ax                              
1605  ret                                     
1606  cmovo   ax,[bx+si]                      
1609  add     [bx+si],al                      
160b  add     [bx+si],al                      
160d  add     [si],ah                         
160f  hlt                                     
1610  adc     al,[bx+si]                      
1613  add     [bx+si],al                      
1615  add     [bx+si],al                      
1617  adc     byte ptr [bp+1698h],40h         
161c  add     [bx+si],al                      
161e  add     [bx+si],al                      
1620  add     [bx+si],ah                      
1622  mov     sp,19BEh                        
1625  inc     ax                              
1626  add     [bx+si],al                      
1628  add     [si],al                         
162a  mov     di,1BC9h                        
162d  mov     ???,[si]                        
162f  inc     ax                              
1630  add     [bx+di-3313h],ah                
1634  into                                    
1635  sbb     ax,dx                           
1637  ror     word ptr [bp+40h],cl            
163a  sahf                                    
163b  mov     ch,70h                          
163d  sub     bp,[bx+si-3A53h]                
1641  popf                                    
1642  imul    ax,[bx+si-3h],0E525h            
1647  sbb     cl,[bp+194Fh]                   
164b  jmp     15D0h                           
164d  inc     ax                              
164e  xlat                                    
164f  xchg    ax,bp                           
1650  inc     bx                              
1651  push    cs                              
1652  add     ax,298Dh                        
1655  scasw                                   
1656  sahf                                    
1657  inc     ax                              
1658  mov     al,[0ED44h]                     
165b  adc     word ptr [bp+si],818Fh          
165f  cmp     byte ptr [bx+di-2AC0h],0A6h     
1664  iret                                    
1665  dec     word ptr [bx+di+1Fh]            
1668  js      162Ch                           
166a  rol     word ptr [bx+si-20h],cl         
166d  mov     cx,gs                           
166f  or      cl,47h                          
1672  mov     dx,0A893h                       
1675  inc     cx                              
1676  imul    dx,[di+27h],39h                 
167a  lea     si,di                           
167c  jo      165Eh                           
167e  jl      16C2h                           
1680  mov     ds,si                           
1682  stc                                     
1683  popf                                    
1684  sti                                     
1685  jmp     1705h                           
1687  stosb                                   
1688  push    cx                              
1689  inc     bx                              
168a  jbe     166Fh                           
168c  int 3                                   
168d  repne   sub     [bx],bp                 
1690  test    [bx+di+4426h],al                
1694  int     0CCh                            
1696  int 3                                   
1697  int 3                                   
1698  int 3                                   
1699  int 3                                   
169a  int 3                                   
169b  int 3                                   
169c  sti                                     
169d  aas                                     
169e  or      dl,bh                           
16a0  mov     [3D70h],ax                      
16a3  or      dl,bh                           
16a5  mov     [3FF8h],ax                      
16a8  cmp     bx,di                           
16aa  dec     di                              
16ab  lea     dx,[bx+126Eh]                   
16af  xor     bp,3Fh                          
16b2  sub     al,65h                          
16b4  sbb     dx,sp                           
16b6  pop     ax                              
16b7  pop     ss                              
16b8  mov     bh,0D1h                         
16ba  ???                                     
16bb  aas                                     
16bc  and     ax,[si+1B47h]                   
16c0  inc     di                              
16c1  lodsb                                   
16c2  lds     sp,[bx+3FEEh]                   
16c6  mov     dh,69h                          
16c8  insb                                    
16c9  scasw                                   
16ca  add     ax,37BDh                        
16cd  xchg    ch,bl                           
16cf  aas                                     
16d0  mov     sp,7A42h                        
16d3  in      ax,0D5h                         
16d5  xchg    ax,sp                           
16d6  mov     di,0E7D6h                       
16d9  aas                                     
16da  std                                     
16db  into                                    
16dc  popa                                    
16dd  test    [bx+di],dl                      
16df  ja      16ADh                           
16e1  stosw                                   
16e2  in      al,3Fh                          
16e4  pop     bx                              
16e5  loopz   1734h                           
16e7  les     di,[bp-6A6Ch]                   
16eb  out     0C9h,al                         
16ed  aas                                     
16ee  push    bx                              
16ef  cmp     si,[di+44h]                     
16f2  int     14h                             
16f4  mov     si,0AF9Ah                       
16f7  aas                                     
16f8  mov     dx,3994h                        
16fb  inc     bp                              
16fc  lodsw                                   
16fd  push    ds                              
16fe  mov     cl,0CFh                         
1700  xchg    ax,sp                           
1701  aas                                     
1702  mov     dl,0BCh                         
1705  mov     dx,313Bh                        
1708  popa                                    
1709  mov     di,[bp+si+3Fh]                  
170c  pop     cx                              
170d  sar     word ptr [bp-4Fh],53h           
1711  jl      1725h                           
1713  mov     bx,3F5Fh                        
1716  das                                     
1717  lea     ax,[92BEh]                      
171b  test    [di],dx                         
171d  sti                                     
171e  inc     sp                              
171f  aas                                     
1720  movsw                                   
1721  jmp     0BC5Dh                          
1724  daa                                     
1725  jmp     3F2Ah:0A87Fh                    
172a  mov     ax,[0BCE4h]                     
172d  jl      1776h                           
1730  rcr     ch,1                            
1732  push    bp                              
1733  push    es                              
1735  int 3                                   
1736  and     dx,[si+77h]                     
1739  cmp     di,-6Fh                         
173c  cmp     word ptr [di],193Ah             
1740  jp      17A5h                           
1742  and     ax,3143h                        
1745  shr     byte ptr [si-2EC4h],38h         
174a  add     byte ptr [bx-69h],0B8h          
174e  add     ch,bh                           
1750  xlat                                    
1751  cmp     ax,[bx+si]                      

; ----- sub_1752 -----
1752  mov     bx,1586h                        
1755  or      di,di                           
1757  jns     175Eh                           
1759  mov     bx,1644h                        
175c  neg     di                              
175e  push    di                              
175f  pop     di                              
1760  add     bx,46h                          
1763  or      di,di                           
1765  je      178Eh                           
1767  mov     ax,di                           
1769  shr     di,1                            
176b  shr     di,1                            
176d  shr     di,1                            
176f  push    di                              
1770  and     ax,7h                           
1773  je      175Fh                           
1775  push    bx                              
1776  shl     al,1                            
1778  mov     ah,al                           
177a  shl     al,1                            
177c  shl     al,1                            
177e  add     al,ah                           
1780  xor     ah,ah                           
1782  add     bx,ax                           
1784  wait                                    
1785  fld     tword ptr cs:[bx]               
1788  wait                                    
1789  fmulp   st(1)                           
178b  pop     bx                              
178c  jmp     175Fh                           
178e  ret                                     
178f  add     [bx+si],al                      
1791  add     [bx+si],al                      
1793  add     [bx+si],al                      
1795  add     [bx+si],al                      
1797  add     [bx+si],al                      
1799  mov     al,[4002h]                      
179c  add     [bx+si],al                      
179e  add     [bx+si],al                      
17a0  add     [bx+si],al                      
17a2  add     [bx+si],al                      
17a4  add     al,cl                           
17a6  add     ax,40h                          
17a9  add     [bx+si],al                      
17ab  add     [bx+si],al                      
17ad  add     [bx+si],al                      
17af  add     [bx+si],al                      
17b1  cli                                     
17b2  or      [bx+si],al                      
17b5  add     [bx+si],al                      
17b7  add     [bx+si],al                      
17b9  add     [bx+si],al                      
17bb  add     [bx+si-64h],al                  
17be  or      al,40h                          
17c0  add     [bx+si],al                      
17c2  add     [bx+si],al                      
17c4  add     [bx+si],al                      
17c6  add     [bx+si],al                      
17c8  push    ax                              
17c9  ret                                     
17ca  cmovo   ax,[bx+si]                      
17cd  add     [bx+si],al                      
17cf  add     [bx+si],al                      
17d1  add     [bx+si],al                      
17d3  add     [si],ah                         
17d5  hlt                                     
17d6  adc     al,[bx+si]                      
17d9  add     [bx+si],al                      
17db  add     [bx+si],al                      
17dd  add     [bx+si],al                      
17df  adc     byte ptr [bp+1698h],40h         
17e4  add     [bx+si],al                      
17e6  add     [bx+si],al                      
17e8  add     [bx+si],al                      
17ea  add     [bx+si],ah                      
17ec  mov     sp,19BEh                        
17ef  inc     ax                              
17f0  add     [bx+si],al                      
17f2  add     [bx+si],al                      
17f4  add     [si],al                         
17f6  mov     di,1BC9h                        
17f9  mov     ???,[si]                        
17fb  inc     ax                              
17fc  add     [bx+si],al                      
17fe  add     [bx+di-3313h],ah                
1802  into                                    
1803  sbb     ax,dx                           
1805  ror     word ptr [bp+40h],cl            
1808  and     al,dh                           
180a  sahf                                    
180b  mov     ch,70h                          
180d  sub     bp,[bx+si-3A53h]                
1811  popf                                    
1812  imul    ax,[bx+si-30h],0FD5Dh           
1817  and     ax,1AE5h                        
181a  mov     cs,[bx+19h]                     
181d  jmp     17A2h                           
181f  inc     ax                              
1820  jno     17B8h                           
1822  xlat                                    
1823  xchg    ax,bp                           
1824  inc     bx                              
1825  push    cs                              
1826  add     ax,298Dh                        
1829  scasw                                   
182a  sahf                                    
182b  inc     ax                              
182c  stc                                     
182d  mov     di,44A0h                        
1830  in      ax,dx                           
1831  adc     word ptr [bp+si],818Fh          
1835  cmp     byte ptr [bx+di-40C0h],3Ch      
183a  aad     0A6h                            
183c  iret                                    
183d  dec     word ptr [bx+di+1Fh]            
1840  js      1804h                           
1842  rol     word ptr [bx+si+6Fh],cl         
1845  mov     al,8Ch                          
1848  jmp     0E1CBh                          
184b  inc     di                              
184c  mov     dx,0A893h                       
184f  inc     cx                              
1850  mov     sp,6B85h                        
1853  push    bp                              
1854  daa                                     
1855  cmp     [di+70F7h],cx                   
1859  loopne  18D7h                           
185b  inc     dx                              
185c  mov     sp,8EDDh                        
185f  fdivp   st(1)                           
1861  popf                                    
1862  sti                                     
1863  jmp     18E3h                           
1865  stosb                                   
1866  push    cx                              
1867  inc     bx                              
1868  mov     ax,[76E6h]                      
186b  jcxz    1839h                           
186d  repne   sub     [bx],bp                 
1870  test    [bx+di+4426h],al                
1874  sub     [bx+si],dl                      
1876  pop     ss                              
1877  stosb                                   
1878  clc                                     
1879  scasb                                   
187a  adc     bl,ah                           
187c  lds     ax,sp                           
187e  cli                                     
187f  inc     sp                              
1880  jmp     1829h                           
1882  aam     0F3h                            
1884  imul    bx                              
1886  loopz   18D2h                           
1888  jp      181Fh                           
188a  iret                                    
188b  inc     bp                              
188c  int 3                                   
188e  mov     word ptr [bx+di-59F2h],0A0AEh   
1894  sbb     bx,sp                           
1896  mov     [0D46h],ax                      
1899  pop     ss                              
189b  or      al,75h                          
189d  add     word ptr [bp+7675h],48C9h       
18a3  dec     bp                              
18a4  pop     ax                              
18a5  inc     dx                              
18a6  in      al,0A7h                         
18a8  xchg    ax,bx                           
18a9  cmp     [bp+di],di                      
18ab  xor     ax,0B2B8h                       
18ae  in      ax,dx                           
18af  push    bx                              
18b0  dec     bp                              
18b1  cmpsw                                   
18b2  in      ax,5Dh                          
18b4  cmp     ax,5DC5h                        
18b7  cmp     cx,[bp+di-6D62h]                
18bb  pop     dx                              
18bc  call    far ptr  [di-5Ah]               
18bf  lock                                    
18c0  mov     ax,[0C020h]                     
18c3  push    sp                              
18c4  movsw                                   
18c5  mov     [bx],???                        
18c7  popa                                    
18c8  sar     bp,1                            
18ca  mov     bx,[bp+si-75h]                  
18cd  fsub    dword ptr [di]                  
18cf  pop     bp                              
18d0  mov     cx,di                           
18d2  ??? (FPU)                               
18d5  xchg    ax,bp                           
18d6  clc                                     
18d7  rep     daa                             
18d9  mov     di,0C8A2h                       
18dc  pop     bp                              
18dd  fld     qword ptr [bx+si+4C6Eh]         
18e1  leave                                   
18e2  wait                                    
18e3  xchg    ax,di                           
18e4  and     [bp+si+5202h],cl                
18e8  pusha                                   
18e9  les     sp,[di]                         
18eb  jne     18BAh                           
18ed  int 3                                   
18ee  int     0CCh                            
18f0  int 3                                   
18f1  int 3                                   
18f2  int 3                                   
18f3  int 3                                   
18f4  int 3                                   
18f5  int 3                                   
18f6  sti                                     
18f7  aas                                     
18f8  jno     1937h                           
18fa  or      dl,bh                           
18fc  mov     [3D70h],ax                      
18ff  or      dl,bh                           
1901  mov     [3FF8h],ax                      
1904  pop     dx                              
1905  cmp     bx,di                           
1908  dec     di                              
1909  lea     dx,[bx+126Eh]                   
190d  xor     bp,3Fh                          
1910  ret                                     
1911  shr     word ptr [si],cl                
1913  sbb     dx,sp                           
1916  pop     ax                              
1917  pop     ss                              
1918  mov     bh,0D1h                         
191a  ???                                     
191b  aas                                     
191c  ror     byte ptr [bx],1                 
191e  and     ax,[si+1B47h]                   
1922  inc     di                              
1923  lodsb                                   
1924  lds     sp,[bx+3FEEh]                   
1928  inc     ax                              
1929  cmpsb                                   
192a  mov     dh,69h                          
192c  insb                                    
192d  scasw                                   
192e  add     ax,37BDh                        
1931  xchg    ch,bl                           
1933  aas                                     
1934  xor     di,[di]                         
1936  mov     sp,7A42h                        
1939  in      ax,0D5h                         
193b  xchg    ax,sp                           
193c  mov     di,0E7D6h                       
193f  aas                                     
1940  ret     0FDFDh                          
1943  into                                    
1944  popa                                    
1945  test    [bx+di],dl                      
1947  ja      1915h                           
1949  stosw                                   
194a  in      al,3Fh                          
194c  das                                     
194d  dec     sp                              
194e  pop     bx                              
194f  loopz   199Eh                           
1951  les     di,[bp-6A6Ch]                   
1955  out     0C9h,al                         
1957  aas                                     
1958  xchg    ax,dx                           
1959  les     dx,[bp+di+3Bh]                  
195c  jne     19A2h                           
195e  int     14h                             
1960  mov     si,0AF9Ah                       
1963  aas                                     
1964  fisub   word ptr [bx-46h]               
1967  xchg    ax,sp                           
1968  cmp     [di-53h],ax                     
196b  push    ds                              
196c  mov     cl,0CFh                         
196e  xchg    ax,sp                           
196f  aas                                     
1970  and     al,23h                          
1972  mov     dl,0BCh                         
1975  mov     dx,313Bh                        
1978  popa                                    
1979  mov     di,[bp+si+3Fh]                  
197c  popa                                    
197d  push    bp                              
197e  pop     cx                              
197f  sar     word ptr [bp-4Fh],53h           
1983  jl      1997h                           
1985  mov     bx,3F5Fh                        
1988  xlat                                    
1989  out     dx,al                           
198a  das                                     
198b  lea     ax,[92BEh]                      
198f  test    [di],dx                         
1991  sti                                     
1992  inc     sp                              
1993  aas                                     
1994  and     al,3Fh                          
1996  movsw                                   
1997  jmp     0BED3h                          
199a  daa                                     
199b  jmp     3F2Ah:0A87Fh                    
19a0  jge     194Eh                           
19a2  mov     ax,[0BCE4h]                     
19a5  jl      19EEh                           
19a8  rcr     ch,1                            
19aa  push    bp                              
19ab  arpl    ds:[bp+di+6h],di                
19af  int 3                                   
19b0  and     dx,[si+77h]                     
19b3  cmp     di,-6Fh                         
19b6  cmp     word ptr [di],0FA91h            
19ba  cmp     bl,[bx+di]                      
19bc  jp      1A21h                           
19be  and     ax,3143h                        
19c1  shr     byte ptr [si+213Ch],89h         
19c6  sar     word ptr [bx+si],1              
19c8  add     byte ptr [bx-69h],0B8h          
19cc  add     ch,bh                           
19ce  xlat                                    
19cf  cmp     bx,sp                           
19d1  mov     [bx+si+8h],bl                   
19d4  sbb     si,[bx+di-1C18h]                
19d8  xchg    ah,[bp+3B03h]                   
19dc  mov     byte ptr [si+4245h],7h          
19e1  mov     dh,99h                          
19e3  jne     1A1Ch                           
19e5  fld     tword ptr [333Ah]               
19e9  jno     1A07h                           
19eb  shl     byte ptr [bp+di],cl             
19ed  ??? (FPU)                               
19ef  out     dx,al                           
19f0  dec     cx                              
19f1  nop                                     
19f2  pop     dx                              
19f3  cmp     [bp-4179h],sp                   
19f7  rcl     byte ptr [bx-26h],0A5h          
19fb  and     byte ptr [bp-4A5Eh],32h         
1a00  loop    1A6Ah                           
1a02  mov     dl,11h                          
1a04  cmpsw                                   
1a05  push    dx                              
1a06  lahf                                    
1a07  inc     sp                              
1a08  pop     cx                              
1a09  mov     bh,10h                          
1a0b  sub     al,25h                          
1a0d  dec     cx                              
1a0e  in      al,2Dh                          
1a10  xor     al,4Fh                          
1a13  push    bx                              
1a14  scasb                                   
1a15  into                                    
1a16  imul    sp,[di],-71h                    
1a19  pop     cx                              
1a1a  add     al,0A4h                         
1a1c  rcr     dh,0C2h                         
1a1f  jge     1A1Ch                           
1a21  call    38EAh                           
1a24  sahf                                    
1a25  out     88h,ax                          
1a27  pop     dx                              
1a28  push    di                              
1a29  xchg    ax,cx                           
1a2a  cmp     al,0BFh                         
1a2c  push    ax                              
1a2d  and     word ptr [bp+si],18h            
1a30  dec     si                              
1a31  dec     bx                              
1a32  bound   di,bp                           
1a35  or      word ptr [bx+6AFh],-6Ch         
1a3a  jge     1A4Dh                           
1a3c  in      al,2Dh                          
1a3e  ficomp  word ptr [bx-2D32h]             
1a42  enter   0DD04h,0A6h                     
1a46  fmul    dword ptr [bp+si]               

; ----- sub_1a48 -----
1a48  push    bp                              
1a49  mov     bp,sp                           
1a4b  sub     sp,6h                           
1a4e  push    si                              
1a4f  push    di                              
1a50  mov     di,[bp+6h]                      
1a53  mov     bx,1730h                        
1a56  or      di,di                           
1a58  je      1AD4h                           
1a5a  jns     1A61h                           
1a5c  mov     bx,188Ch                        
1a5f  neg     di                              
1a61  mov     word ptr [bp-6h],1AE6h          
1a66  cmp     word ptr [bp+4h],0h             
1a6a  jne     1A8Ch                           
1a6c  mov     word ptr [bp-6h],1ADCh          
1a71  wait                                    
1a72  fstcw   word ptr [bp-2h]                
1a75  nop                                     
1a76  wait                                    
1a77  mov     ax,[bp-2h]                      
1a7a  or      ax,38h                          
1a7d  mov     [bp-4h],ax                      
1a80  wait                                    
1a81  fldcw   word ptr [bp-4h]                
1a84  les     si,[bp+8h]                      
1a87  wait                                    
1a88  fld     tword ptr es:[si+2h]            
1a8c  push    di                              
1a8d  pop     di                              
1a8e  add     bx,54h                          
1a91  or      di,di                           
1a93  je      1AB8h                           
1a95  mov     ax,di                           
1a97  shr     di,1                            
1a99  shr     di,1                            
1a9b  shr     di,1                            
1a9d  push    di                              
1a9e  and     ax,7h                           
1aa1  je      1A8Dh                           
1aa3  push    bx                              
1aa4  shl     al,1                            
1aa6  shl     al,1                            
1aa8  mov     ah,al                           
1aaa  shl     al,1                            
1aac  add     al,ah                           
1aae  xor     ah,ah                           
1ab0  add     bx,ax                           
1ab2  jmp     word ptr [bp-6h]                
1ab5  pop     bx                              
1ab6  jmp     1A8Dh                           
1ab8  cmp     word ptr [bp+4h],0h             
1abc  jne     1AD4h                           
1abe  wait                                    
1abf  fclex                                   
1ac1  wait                                    
1ac2  fldcw   word ptr [bp-2h]                
1ac5  les     si,[bp+8h]                      
1ac8  wait                                    
1ac9  fstp    tword ptr es:[si+2h]            
1acd  mov     word ptr es:[si],0h             
1ad2  nop                                     
1ad3  wait                                    
1ad4  pop     di                              
1ad5  pop     si                              
1ad6  mov     sp,bp                           
1ad8  pop     bp                              
1ad9  ret     8h                              
1adc  wait                                    
1add  fld     tword ptr cs:[bx+2h]            
1ae1  wait                                    
1ae2  fmulp   st(1)                           
1ae4  jmp     1AB5h                           
1ae6  push    word ptr cs:[bx+0Ah]            
1aea  push    word ptr cs:[bx+8h]             
1aee  push    word ptr cs:[bx+6h]             
1af2  push    word ptr cs:[bx+4h]             
1af6  mov     cx,cs:[bx+2h]                   
1afa  mov     ax,cs:[bx]                      
1afd  cmp     ax,8000h                        
1b00  adc     cx,-1h                          
1b03  push    cx                              
1b04  push    ax                              
1b05  mov     ax,sp                           
1b07  push    word ptr [bp+0Ah]               
1b0a  push    word ptr [bp+8h]                
1b0d  push    ss                              
1b0e  push    ax                              
1b0f  call    1B1Dh                           
1b12  add     sp,0Ch                          
1b15  jmp     1AB5h                           
1b17  jmp     1C86h                           
1b1a  jmp     1C71h                           

; ----- sub_1b1d -----
1b1d  push    bp                              
1b1e  mov     bp,sp                           
1b20  sub     sp,12h                          
1b23  push    si                              
1b24  push    di                              
1b25  mov     cx,9h                           
1b28  mov     ax,ss                           
1b2a  mov     es,ax                           
1b2c  lea     di,[bp-12h]                     
1b2f  xor     ax,ax                           
1b31  rep     stosw                           
1b33  lds     si,[bp+8h]                      
1b36  les     di,[bp+4h]                      
1b39  mov     ax,[si+0Ah]                     
1b3c  mov     bx,es:[di+0Ah]                  
1b40  mov     cx,ax                           
1b42  xor     cx,bx                           
1b44  and     cx,8000h                        
1b48  mov     [bp-2h],cx                      
1b4b  mov     dx,7FFFh                        
1b4e  and     ax,dx                           
1b50  cmp     ax,dx                           
1b52  je      1B17h                           
1b54  and     bx,dx                           
1b56  cmp     bx,dx                           
1b58  je      1B17h                           
1b5a  mov     dx,ax                           
1b5c  add     dx,bx                           
1b5e  cmp     dx,0BFFDh                       
1b62  ja      1B17h                           
1b64  cmp     dx,3FBFh                        
1b68  jbe     1B1Ah                           
1b6a  or      ax,ax                           
1b6c  jne     1B7Fh                           
1b6e  inc     dx                              
1b6f  mov     ax,[si]                         
1b71  or      ax,[si+2h]                      
1b74  or      ax,[si+4h]                      
1b77  or      ax,[si+6h]                      
1b7a  or      ax,[si+8h]                      
1b7d  je      1B1Ah                           
1b7f  or      bx,bx                           
1b81  jne     1B99h                           
1b83  inc     dx                              
1b84  mov     ax,es:[di]                      
1b87  or      ax,es:[di+2h]                   
1b8b  or      ax,es:[di+4h]                   
1b8f  or      ax,es:[di+6h]                   
1b93  or      ax,es:[di+8h]                   
1b97  je      1B1Ah                           
1b99  sub     dx,3FFEh                        
1b9d  mov     [si+0Ah],dx                     
1ba0  add     di,8h                           
1ba3  mov     cx,5h                           
1ba6  lea     bx,[bp-12h]                     
1ba9  push    cx                              
1baa  push    si                              
1bab  push    di                              
1bac  mov     ax,es:[di]                      
1baf  mul     word ptr [si]                   
1bb1  add     ss:[bx],ax                      
1bb4  adc     ss:[bx+2h],dx                   
1bb8  adc     word ptr ss:[bx+4h],0h          
1bbd  add     si,2h                           
1bc0  sub     di,2h                           
1bc3  loop    1BACh                           
1bc5  pop     di                              
1bc6  pop     si                              
1bc7  pop     cx                              
1bc8  add     bx,2h                           
1bcb  add     si,2h                           
1bce  add     cx,-1h                          
1bd1  jne     1BA9h                           
1bd3  mov     si,[bp+8h]                      
1bd6  mov     dx,[bp-10h]                     
1bd9  mov     cx,[bp-0Eh]                     
1bdc  mov     bx,[bp-0Ch]                     
1bdf  mov     ax,[bp-0Ah]                     
1be2  mov     di,[bp-8h]                      
1be5  cmp     word ptr [si+0Ah],0h            
1be9  jg      1BFFh                           
1beb  jmp     1C4Ch                           
1bed  shl     word ptr [bp-12h],1             
1bf0  rcl     dx,1                            
1bf2  rcl     cx,1                            
1bf4  rcl     bx,1                            
1bf6  rcl     ax,1                            
1bf8  rcl     di,1                            
1bfa  dec     word ptr [si+0Ah]               
1bfd  je      1C4Ch                           
1bff  or      di,di                           
1c01  jns     1BEDh                           
1c03  cmp     word ptr [bp-12h],8000h         
1c08  jb      1C29h                           
1c0a  ja      1C12h                           
1c0c  test    dx,1h                           
1c10  je      1C29h                           
1c12  add     dx,1h                           
1c15  adc     cx,0h                           
1c18  adc     bx,0h                           
1c1b  adc     ax,0h                           
1c1e  adc     di,0h                           
1c21  jae     1C29h                           
1c23  mov     di,8000h                        
1c26  inc     word ptr [si+0Ah]               
1c29  cmp     word ptr [si+0Ah],7FFFh         
1c2e  jae     1C86h                           
1c30  mov     [si+8h],di                      
1c33  mov     [si+6h],ax                      
1c36  mov     [si+4h],bx                      
1c39  mov     [si+2h],cx                      
1c3c  mov     [si],dx                         
1c3e  mov     ax,[bp-2h]                      
1c41  or      [si+0Ah],ax                     
1c44  pop     di                              
1c45  pop     si                              
1c46  mov     sp,bp                           
1c48  pop     bp                              
1c49  ret     8h                              
1c4c  dec     word ptr [si+0Ah]               
1c4f  shr     di,1                            
1c51  rcr     ax,1                            
1c53  rcr     bx,1                            
1c55  rcr     cx,1                            
1c57  rcr     dx,1                            
1c59  rcr     word ptr [bp-12h],1             
1c5c  adc     word ptr [bp-4h],0h             
1c60  inc     word ptr [si+0Ah]               
1c63  jne     1C4Fh                           
1c65  cmp     word ptr [bp-4h],0h             
1c69  je      1C03h                           
1c6b  or      word ptr [bp-12h],1h            
1c6f  jmp     1C03h                           
1c71  xor     ax,ax                           
1c73  mov     [si+0Ah],ax                     
1c76  mov     [si+8h],ax                      
1c79  mov     [si+6h],ax                      
1c7c  mov     [si+4h],ax                      
1c7f  mov     [si+2h],ax                      
1c82  mov     [si],ax                         
1c84  jmp     1C44h                           
1c86  mov     ax,7FFFh                        
1c89  or      ax,[bp-2h]                      
1c8c  mov     [si+0Ah],ax                     
1c8f  xor     ax,ax                           
1c91  mov     [si+8h],ax                      
1c94  mov     [si+6h],ax                      
1c97  mov     [si+4h],ax                      
1c9a  mov     [si+2h],ax                      
1c9d  mov     [si],ax                         
1c9f  jmp     1C44h                           
1ca1  add     [bx+si],al                      

; ----- sub_1ca2 -----
1ca2  push    bp                              
1ca3  mov     bp,sp                           
1ca5  sub     sp,0Ch                          
1ca8  push    si                              
1ca9  push    di                              
1caa  mov     ax,[bp+6h]                      
1cad  mov     [bp-0Ch],ax                     
1cb0  les     si,[bp+8h]                      
1cb3  xor     ax,ax                           
1cb5  mov     di,ax                           
1cb7  mov     bx,ax                           
1cb9  mov     cx,ax                           
1cbb  mov     dx,ax                           
1cbd  mov     dl,es:[si]                      
1cc0  inc     si                              
1cc1  jmp     1CFDh                           
1cc3  mov     [bp-2h],di                      
1cc6  mov     [bp-4h],ax                      
1cc9  mov     [bp-6h],bx                      
1ccc  mov     [bp-8h],cx                      
1ccf  mov     [bp-0Ah],dx                     
1cd2  call    1D50h                           
1cd5  call    1D50h                           
1cd8  add     dx,[bp-0Ah]                     
1cdb  adc     cx,[bp-8h]                      
1cde  adc     bx,[bp-6h]                      
1ce1  adc     ax,[bp-4h]                      
1ce4  adc     di,[bp-2h]                      
1ce7  call    1D50h                           
1cea  add     dl,es:[si]                      
1ced  inc     si                              
1cee  adc     dh,0h                           
1cf1  adc     cx,0h                           
1cf4  adc     bx,0h                           
1cf7  adc     ax,0h                           
1cfa  adc     di,0h                           
1cfd  dec     word ptr [bp-0Ch]               
1d00  jne     1CC3h                           
1d02  mov     si,404Eh                        
1d05  jmp     1D14h                           
1d07  mov     di,ax                           
1d09  mov     ax,bx                           
1d0b  mov     bx,cx                           
1d0d  mov     cx,dx                           
1d0f  xor     dx,dx                           
1d11  sub     si,10h                          
1d14  or      di,di                           
1d16  je      1D07h                           
1d18  js      1D29h                           
1d1a  shl     dx,1                            
1d1c  rcl     cx,1                            
1d1e  rcl     bx,1                            
1d20  rcl     ax,1                            
1d22  rcl     di,1                            
1d24  dec     si                              
1d25  or      di,di                           
1d27  jns     1D1Ah                           
1d29  push    si                              
1d2a  mov     si,[bp+4h]                      
1d2d  pop     ss:[si+0Ah]                     
1d31  mov     ss:[si+8h],di                   
1d35  mov     ss:[si+6h],ax                   
1d39  mov     ss:[si+4h],bx                   
1d3d  mov     ss:[si+2h],cx                   
1d41  mov     ss:[si],dx                      
1d44  mov     ax,si                           
1d46  mov     dx,ss                           
1d48  pop     di                              
1d49  pop     si                              
1d4a  mov     sp,bp                           
1d4c  pop     bp                              
1d4d  ret     8h                              

; ----- sub_1d50 -----
1d50  shl     dx,1                            
1d52  rcl     cx,1                            
1d54  rcl     bx,1                            
1d56  rcl     ax,1                            
1d58  rcl     di,1                            
1d5a  ret                                     
1d5b  add     [bx+si],al                      

; ----- sub_1d5c -----
1d5c  mov     dx,cx                           
1d5e  add     dx,1019h                        
1d62  and     dx,0F000h                       
1d66  push    cx                              
1d67  push    es                              
1d68  mov     bx,cs:[10h]                     
1d6d  xor     cx,cx                           
1d6f  or      dx,dx                           
1d71  jne     1D7Ah                           
1d73  test    bx,10h                          
1d77  jne     1DD9h                           
1d79  inc     cx                              
1d7a  push    bx                              
1d7b  mov     ax,2002h                        
1d7e  test    bx,1h                           
1d82  jne     1D87h                           
1d84  mov     ax,2020h                        
1d87  push    ax                              
1d88  push    cx                              
1d89  push    dx                              
1d8a  call far KERNEL.GLOBALALLOC             
1d8f  pop     bx                              
1d90  or      ax,ax                           
1d92  je      1DD9h                           
1d94  push    ax                              
1d95  test    bx,1h                           
1d99  je      1DABh                           
1d9b  push    ax                              
1d9c  call far KERNEL.GLOBALLOCK              
1da1  or      ax,ax                           
1da3  jne     1DD3h                           
1da5  or      ax,dx                           
1da7  je      1DD3h                           
1da9  mov     ax,dx                           
1dab  mov     ds,ax                           
1dad  push    ax                              
1dae  call far KERNEL.GLOBALSIZE              
1db3  or      dx,ax                           
1db5  je      1DD3h                           
1db7  mov     dx,ax                           
1db9  pop     ax                              
1dba  pop     es                              
1dbb  pop     cx                              
1dbc  xor     bx,bx                           
1dbe  mov     [bx+6h],ax                      
1dc1  mov     ax,es:[di+0Ch]                  
1dc5  mov     [bx+2h],ax                      
1dc8  mov     ax,dx                           
1dca  call    1E92h                           
1dcd  call    1EC6h                           
1dd0  clc                                     
1dd1  jmp     1DDCh                           
1dd3  mov     ax,12h                          
1dd6  jmp     0CBEh                           
1dd9  pop     es                              
1dda  pop     cx                              
1ddb  stc                                     
1ddc  ret                                     
1ddd  add     [bx+si],al                      

; ----- sub_1dde -----
1dde  push    bp                              
1ddf  mov     bp,sp                           
1de1  mov     bx,350h                         
1de4  push    ds                              
1de5  pop     es                              
1de6  call    1E68h                           
1de9  pop     bp                              
1dea  ret                                     
1deb  add     [bx+si],al                      

; ----- sub_1dec -----
1dec  inc     cx                              
1ded  and     cl,0FEh                         
1df0  push    bx                              
1df1  cld                                     
1df2  mov     si,[bx+0Ah]                     
1df5  mov     bx,[bx+0Ch]                     
1df8  xor     di,di                           
1dfa  jmp     1E1Fh                           
1dfc  mov     ax,bx                           
1dfe  pop     bx                              
1dff  test    al,1h                           
1e01  jne     1E45h                           
1e03  push    bx                              
1e04  mov     si,[bx+8h]                      
1e07  mov     bx,[bx+0Ah]                     
1e0a  cmp     bx,si                           
1e0c  je      1E44h                           
1e0e  dec     bx                              
1e0f  xor     di,di                           
1e11  jmp     1E1Fh                           
1e13  nop                                     
1e14  lea     dx,[si-2h]                      
1e17  cmp     dx,bx                           
1e19  jae     1DFCh                           
1e1b  add     si,ax                           
1e1d  jb      1E42h                           
1e1f  lodsw                                   
1e20  test    al,1h                           
1e22  je      1E14h                           
1e24  mov     di,si                           
1e26  dec     ax                              
1e27  cmp     ax,cx                           
1e29  jae     1E4Eh                           
1e2b  add     si,ax                           
1e2d  jb      1E42h                           
1e2f  mov     dx,ax                           
1e31  lodsw                                   
1e32  test    al,1h                           
1e34  je      1E14h                           
1e36  add     ax,dx                           
1e38  add     ax,2h                           
1e3b  mov     si,di                           
1e3d  mov     [si-2h],ax                      
1e40  jmp     1E26h                           
1e42  mov     ax,ax                           
1e44  pop     bx                              
1e45  mov     ax,[bx+8h]                      
1e48  mov     [bx+0Ah],ax                     
1e4b  stc                                     
1e4c  jmp     1E67h                           
1e4e  pop     bx                              
1e4f  mov     [si-2h],cx                      
1e52  je      1E5Dh                           
1e54  add     di,cx                           
1e56  sub     ax,cx                           
1e58  dec     ax                              
1e59  mov     [di],ax                         
1e5b  sub     di,cx                           
1e5d  add     di,cx                           
1e5f  mov     [bx+0Ah],di                     
1e62  mov     ax,si                           
1e64  mov     dx,ds                           
1e66  clc                                     
1e67  ret                                     

; ----- sub_1e68 -----
1e68  push    bp                              
1e69  mov     bp,sp                           
1e6b  push    di                              
1e6c  les     bx,es:[bx]                      
1e6f  mov     cx,es                           
1e71  jcxz    1E8Dh                           
1e73  mov     ax,es:[bx+6h]                   
1e77  les     bx,es:[bx+0Eh]                  
1e7b  push    bx                              
1e7c  push    es                              
1e7d  push    ax                              
1e7e  push    ax                              
1e7f  call far KERNEL.GLOBALUNLOCK            
1e84  call far KERNEL.GLOBALFREE              
1e89  pop     es                              
1e8a  pop     bx                              
1e8b  jmp     1E6Fh                           
1e8d  pop     di                              
1e8e  mov     sp,bp                           
1e90  pop     bp                              
1e91  ret                                     

; ----- sub_1e92 -----
1e92  push    es                              
1e93  push    di                              
1e94  mov     di,ax                           
1e96  add     di,bx                           
1e98  mov     [bx+4h],di                      
1e9b  dec     di                              
1e9c  dec     di                              
1e9d  sub     ax,18h                          
1ea0  lea     si,[bx+16h]                     
1ea3  mov     word ptr [di],0FFFEh            
1ea7  mov     [bx+0Ch],di                     
1eaa  dec     ax                              
1eab  mov     [si],ax                         
1ead  mov     [bx],ds                         
1eaf  mov     ax,si                           
1eb1  mov     dx,ds                           
1eb3  mov     es,dx                           
1eb5  lea     di,[bx+8h]                      
1eb8  cld                                     
1eb9  stosw                                   
1eba  stosw                                   
1ebb  inc     di                              
1ebc  inc     di                              
1ebd  xor     ax,ax                           
1ebf  stosw                                   
1ec0  stosw                                   
1ec1  stosw                                   
1ec2  stosw                                   
1ec3  pop     di                              
1ec4  pop     es                              
1ec5  ret                                     

; ----- sub_1ec6 -----
1ec6  mov     ax,es:[di+2h]                   
1eca  or      ax,ax                           
1ecc  jne     1ED7h                           
1ece  mov     es:[di+2h],ds                   
1ed2  mov     es:[di],bx                      
1ed5  jmp     1EEBh                           
1ed7  push    es                              
1ed8  les     si,es:[di+8h]                   
1edc  mov     es:[si+10h],ds                  
1ee0  mov     es:[si+0Eh],bx                  
1ee4  mov     [bx+14h],es                     
1ee7  mov     [bx+12h],si                     
1eea  pop     es                              
1eeb  mov     es:[di+0Ah],ds                  
1eef  mov     es:[di+8h],bx                   
1ef3  mov     es:[di+6h],ds                   
1ef7  mov     es:[di+4h],bx                   
1efb  ret                                     

; ----- sub_1efc -----
1efc  inc     bp                              
1efd  push    bp                              
1efe  mov     bp,sp                           
1f00  push    ds                              
1f01  sub     sp,16h                          
1f04  push    di                              
1f05  push    si                              
1f06  push    word ptr [bp+0Ch]               
1f09  push    word ptr [bp+0Ah]               
1f0c  push    word ptr [bp+8h]                
1f0f  push    word ptr [bp+6h]                
1f12  call far sub_0f84                       
1f17  add     sp,8h                           
1f1a  mov     es,dx                           
1f1c  mov     bx,ax                           
1f1e  mov     [bp-6h],ax                      
1f21  mov     [bp-4h],es                      
1f24  mov     ax,es:[bx+2h]                   
1f28  dec     ax                              
1f29  mov     [bp-8h],ax                      
1f2c  mov     ax,976h                         
1f2f  push    ds                              
1f30  mov     di,ax                           
1f32  lea     si,[bp+6h]                      
1f35  push    ds                              
1f36  pop     es                              
1f37  push    ss                              
1f38  pop     ds                              
1f39  movsw                                   
1f3a  movsw                                   
1f3b  movsw                                   
1f3c  movsw                                   
1f3d  pop     ds                              
1f3e  cmp     word ptr [bp-8h],-1h            
1f42  jl      1F4Dh                           
1f44  mov     ax,[bp+0Eh]                     
1f47  dec     ax                              
1f48  cmp     ax,[bp-8h]                      
1f4b  jge     1F6Ah                           
1f4d  xor     ax,ax                           
1f4f  push    ax                              
1f50  mov     ax,[bp+0Eh]                     
1f53  dec     ax                              
1f54  push    ax                              
1f55  push    word ptr [bp+12h]               
1f58  push    word ptr [bp+10h]               
1f5b  mov     ax,976h                         
1f5e  push    ds                              
1f5f  push    ax                              
1f60  call far sub_06f8                       
1f65  add     sp,0Ch                          
1f68  jmp     1F88h                           
1f6a  mov     ax,[bp+0Eh]                     
1f6d  les     bx,[bp-6h]                      
1f70  sub     ax,es:[bx+2h]                   
1f74  push    ax                              
1f75  push    word ptr [bp+12h]               
1f78  push    word ptr [bp+10h]               
1f7b  mov     ax,976h                         
1f7e  push    ds                              
1f7f  push    ax                              
1f80  call far sub_08c4                       
1f85  add     sp,0Ah                          
1f88  mov     [bp-10h],ax                     
1f8b  mov     [bp-0Eh],dx                     
1f8e  mov     [bp-0Ch],ax                     
1f91  mov     [bp-0Ah],dx                     
1f94  jmp     1F9Fh                           
1f96  cmp     byte ptr es:[bx],2Eh            
1f9a  je      1FA8h                           
1f9c  inc     word ptr [bp-10h]               
1f9f  les     bx,[bp-10h]                     
1fa2  cmp     byte ptr es:[bx],0h             
1fa6  jne     1F96h                           
1fa8  inc     word ptr [bp-10h]               
1fab  cmp     byte ptr es:[bx],0h             
1faf  je      1FF4h                           
1fb1  jmp     1FBDh                           
1fb3  nop                                     
1fb4  cmp     byte ptr es:[bx],65h            
1fb8  je      1FC6h                           
1fba  inc     word ptr [bp-10h]               
1fbd  mov     bx,[bp-10h]                     
1fc0  cmp     byte ptr es:[bx],0h             
1fc4  jne     1FB4h                           
1fc6  dec     word ptr [bp-10h]               
1fc9  mov     [bp-14h],bx                     
1fcc  mov     [bp-12h],es                     
1fcf  jmp     1FD5h                           
1fd1  nop                                     
1fd2  dec     word ptr [bp-10h]               
1fd5  mov     bx,[bp-10h]                     
1fd8  cmp     byte ptr es:[bx],30h            
1fdc  je      1FD2h                           
1fde  les     bx,[bp-14h]                     
1fe1  inc     word ptr [bp-14h]               
1fe4  mov     al,es:[bx]                      
1fe7  inc     word ptr [bp-10h]               
1fea  les     bx,[bp-10h]                     
1fed  mov     es:[bx],al                      
1ff0  or      al,al                           
1ff2  jne     1FDEh                           
1ff4  mov     ax,[bp-0Ch]                     
1ff7  mov     dx,[bp-0Ah]                     
1ffa  pop     si                              
1ffb  pop     di                              
1ffc  lea     sp,[bp-2h]                      
1fff  pop     ds                              
2000  pop     bp                              
2001  dec     bp                              
2002  retf                                    
2003  nop                                     
2004  add     [bx+si],al                      
2006  add     [bx+si],al                      
2008  add     [bx+si],al                      
200a  add     [bx+si],al                      
200c  add     [bx+si],al                      
200e  add     [bx+si],al                      

; ----- sub_2010 -----
2010  mov     ax,0FFFFh                       ; segment seg2:0000
2013  push    bp                              
2014  mov     bp,sp                           
2016  push    ds                              
2017  mov     ds,ax                           
2019  mov     ax,1h                           
201c  pop     ds                              
201d  leave                                   
201e  retf    0Ah                             
2021  add     [bx+si],al                      

; ===== WEP =====
2022  mov     ax,2011h                        ; segment seg2:0000
2025  push    bp                              
2026  mov     bp,sp                           
2028  push    ds                              
2029  mov     ds,ax                           
202b  mov     ax,1h                           
202e  pop     ds                              
202f  leave                                   
2030  retf    2h                              
2033  add     [bx+si],al                      

; ===== EHT_REPORTID =====
2034  mov     ax,2023h                        ; segment seg2:0000
2037  push    bp                              
2038  mov     bp,sp                           
203a  push    ds                              
203b  mov     ds,ax                           
203d  push    0h                              
203f  push    0FFFFh                          ; segment seg1:0000
2042  push    3082h                           
2045  call far M007.UIF_MESSAGE               ; "EHT DLL - V05.00 :  10-Jan-95"
204a  pop     ds                              
204b  leave                                   
204c  retf                                    
204d  add     [bx+si],al                      

; ===== INITIALISE_EHT_CONTROLLER_DATA =====
204e  mov     ax,2035h                        ; segment seg2:0000
2051  push    bp                              
2052  mov     bp,sp                           
2054  push    ds                              
2055  mov     ds,ax                           
2057  mov     word ptr [10h],0h               
205d  push    14Ch                            
2060  push    1h                              
2062  call far M007.M007_PUTSTATE             ; DP_SE_SUPPLIES = 1
2067  push    0D2h                            
206a  push    word ptr [372h]                 
206e  push    word ptr [370h]                 ; [ds] f32 here = 10000
2072  call far M007.M007_PUTHIGH              ; AP_FILAMENT_AGE
2077  push    1A6h                            
207a  push    word ptr [376h]                 ; [ds] f32 here = -2.004328
207e  push    word ptr [374h]                 ; [ds] f32 here = 30000
2082  call far M007.M007_PUTHIGH              ; AP_USER_MAX_EHT
2087  push    1A6h                            
208a  push    word ptr [376h]                 ; [ds] f32 here = -2.004328
208e  push    word ptr [374h]                 ; [ds] f32 here = 30000
2092  call far M007.M007_PUTVALUE             ; AP_USER_MAX_EHT
2097  push    12Fh                            
209a  push    word ptr [37Ah]                 
209e  push    word ptr [378h]                 ; [ds] f32 here = 7000
20a2  call far M007.M007_PUTHIGH              ; AP_ACTUALEXT
20a7  push    130h                            
20aa  push    word ptr [37Eh]                 
20ae  push    word ptr [37Ch]                 ; [ds] f32 here = 500
20b2  call far M007.M007_PUTHIGH              ; AP_ACTUALSUPP
20b7  push    131h                            
20ba  push    word ptr [372h]                 
20be  push    word ptr [370h]                 ; [ds] f32 here = 10000
20c2  call far M007.M007_PUTHIGH              ; AP_ACTUALLENS
20c7  push    132h                            
20ca  push    word ptr [382h]                 
20ce  push    word ptr [380h]                 ; [ds] f32 here = 0.0005
20d2  call far M007.M007_PUTHIGH              ; AP_EXTCURRENT
20d7  push    133h                            
20da  push    word ptr [37Ah]                 
20de  push    word ptr [378h]                 ; [ds] f32 here = 7000
20e2  call far M007.M007_PUTHIGH              ; AP_NOMINALEXT
20e7  push    134h                            
20ea  push    word ptr [37Eh]                 
20ee  push    word ptr [37Ch]                 ; [ds] f32 here = 500
20f2  call far M007.M007_PUTHIGH              ; AP_NOMINALSUPP
20f7  push    135h                            
20fa  push    word ptr [386h]                 
20fe  push    word ptr [384h]                 ; [ds] f32 here = 3
2102  call far M007.M007_PUTHIGH              ; AP_NOMINALFIL
2107  push    136h                            
210a  push    word ptr [382h]                 
210e  push    word ptr [380h]                 ; [ds] f32 here = 0.0005
2112  call far M007.M007_PUTHIGH              ; AP_NOMINALEXTI
2117  push    13Ah                            
211a  push    word ptr [38Ah]                 
211e  push    word ptr [388h]                 ; [ds] f32 here = 3E-05
2122  call far M007.M007_PUTHIGH              ; AP_NOMINALBEAM
2127  push    14Fh                            
212a  push    word ptr [37Ah]                 
212e  push    word ptr [378h]                 ; [ds] f32 here = 7000
2132  call far M007.M007_PUTHIGH              ; AP_MANUALEXT
2137  push    150h                            
213a  push    word ptr [37Eh]                 
213e  push    word ptr [37Ch]                 ; [ds] f32 here = 500
2142  call far M007.M007_PUTHIGH              ; AP_MANUALSUPP
2147  push    151h                            
214a  push    word ptr [372h]                 
214e  push    word ptr [370h]                 ; [ds] f32 here = 10000
2152  call far M007.M007_PUTHIGH              ; AP_MANUALLENS
2157  push    152h                            
215a  push    word ptr [38Eh]                 
215e  push    word ptr [38Ch]                 ; [ds] f32 here = 6000
2162  call far M007.M007_PUTHIGH              ; AP_MIN_EXT
2167  push    19h                             
2169  push    word ptr [392h]                 
216d  push    word ptr [390h]                 ; [ds] f32 here = 4
2171  call far M007.M007_PUTHIGH              ; AP_USERMAXCURRENT
2176  push    17h                             
2178  push    word ptr [392h]                 
217c  push    word ptr [390h]                 ; [ds] f32 here = 4
2180  call far M007.M007_PUTHIGH              ; AP_TARGETCURRENT
2185  push    1Bh                             
2187  push    word ptr [392h]                 
218b  push    word ptr [390h]                 ; [ds] f32 here = 4
218f  call far M007.M007_PUTHIGH              ; AP_MANUALCURRENT
2194  push    1Dh                             
2196  push    word ptr [392h]                 
219a  push    word ptr [390h]                 ; [ds] f32 here = 4
219e  call far M007.M007_PUTHIGH              ; AP_ACTUALCURRENT
21a3  push    127h                            
21a6  push    word ptr [396h]                 
21aa  push    word ptr [394h]                 ; [ds] f32 here = 100
21ae  call far M007.M007_PUTHIGH              ; AP_EHT_OFFSET
21b3  push    127h                            
21b6  push    word ptr [39Ah]                 
21ba  push    word ptr [398h]                 ; [ds] f32 here = -100
21be  call far M007.M007_PUTLOW               ; AP_EHT_OFFSET
21c3  push    159h                            
21c6  push    word ptr [39Eh]                 
21ca  push    word ptr [39Ch]                 ; [ds] f32 here = 10
21ce  call far M007.M007_PUTLOW               ; AP_EHT_CAL_100
21d3  push    159h                            
21d6  push    word ptr [396h]                 
21da  push    word ptr [394h]                 ; [ds] f32 here = 100
21de  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_100
21e3  push    159h                            
21e6  push    word ptr [3A2h]                 ; [ds] f32 here = 2.004179
21ea  push    word ptr [3A0h]                 ; [ds] f32 here = 1000
21ee  call far M007.M007_PUTHIGH              ; AP_EHT_CAL_100
21f3  push    15Ah                            
21f6  push    word ptr [3A6h]                 
21fa  push    word ptr [3A4h]                 ; [ds] f32 here = 5000
21fe  call far M007.M007_PUTLOW               ; AP_EHT_CAL_10KV
2203  push    15Ah                            
2206  push    word ptr [372h]                 
220a  push    word ptr [370h]                 ; [ds] f32 here = 10000
220e  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_10KV
2213  push    15Ah                            
2216  push    word ptr [3AAh]                 ; [ds] f32 here = 2.004298
221a  push    word ptr [3A8h]                 ; [ds] f32 here = 15000
221e  call far M007.M007_PUTHIGH              ; AP_EHT_CAL_10KV
2223  push    15Bh                            
2226  push    word ptr [3AEh]                 
222a  push    word ptr [3ACh]                 ; [ds] f32 here = 20000
222e  call far M007.M007_PUTLOW               ; AP_EHT_CAL_24KV
2233  push    15Bh                            
2236  push    word ptr [3B2h]                 ; [ds] f32 here = -2.004317
223a  push    word ptr [3B0h]                 ; [ds] f32 here = 24000
223e  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_24KV
2243  push    15Bh                            
2246  push    word ptr [3B6h]                 
224a  push    word ptr [3B4h]                 ; [ds] f32 here = 28000
224e  call far M007.M007_PUTHIGH              ; AP_EHT_CAL_24KV
2253  push    15Ch                            
2256  push    word ptr [3BAh]                 
225a  push    word ptr [3B8h]                 ; [ds] f32 here = 25000
225e  call far M007.M007_PUTLOW               ; AP_EHT_CAL_30KV
2263  push    15Ch                            
2266  push    word ptr [376h]                 ; [ds] f32 here = -2.004328
226a  push    word ptr [374h]                 ; [ds] f32 here = 30000
226e  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_30KV
2273  push    15Ch                            
2276  push    word ptr [3BEh]                 
227a  push    word ptr [3BCh]                 ; [ds] f32 here = 32000
227e  call far M007.M007_PUTHIGH              ; AP_EHT_CAL_30KV
2283  push    15Dh                            
2286  push    word ptr [3C2h]                 
228a  push    word ptr [3C0h]                 ; [ds] f32 here = 2000
228e  call far M007.M007_PUTLOW               ; AP_MAX_EXTRACTOR_V
2293  push    15Dh                            
2296  push    word ptr [37Ah]                 
229a  push    word ptr [378h]                 ; [ds] f32 here = 7000
229e  call far M007.M007_PUTVALUE             ; AP_MAX_EXTRACTOR_V
22a3  push    15Dh                            
22a6  push    word ptr [37Ah]                 
22aa  push    word ptr [378h]                 ; [ds] f32 here = 7000
22ae  call far M007.M007_PUTHIGH              ; AP_MAX_EXTRACTOR_V
22b3  push    0CDh                            
22b6  push    word ptr [3A2h]                 ; [ds] f32 here = 2.004179
22ba  push    word ptr [3A0h]                 ; [ds] f32 here = 1000
22be  call far M007.M007_PUTHIGH              ; AP_PM1
22c3  push    0CEh                            
22c6  push    word ptr [3A2h]                 ; [ds] f32 here = 2.004179
22ca  push    word ptr [3A0h]                 ; [ds] f32 here = 1000
22ce  call far M007.M007_PUTHIGH              ; AP_PM2
22d3  push    0CFh                            
22d6  push    word ptr [3A2h]                 ; [ds] f32 here = 2.004179
22da  push    word ptr [3A0h]                 ; [ds] f32 here = 1000
22de  call far M007.M007_PUTHIGH              ; AP_PM3
22e3  push    0CDh                            
22e6  push    word ptr [396h]                 
22ea  push    word ptr [394h]                 ; [ds] f32 here = 100
22ee  call far M007.M007_PUTLOW               ; AP_PM1
22f3  push    0CEh                            
22f6  push    word ptr [396h]                 
22fa  push    word ptr [394h]                 ; [ds] f32 here = 100
22fe  call far M007.M007_PUTLOW               ; AP_PM2
2303  push    0CFh                            
2306  push    word ptr [396h]                 
230a  push    word ptr [394h]                 ; [ds] f32 here = 100
230e  call far M007.M007_PUTLOW               ; AP_PM3
2313  push    0F2h                            
2316  push    word ptr [3C6h]                 ; [ds] f32 here = -1.076092E+08
231a  push    word ptr [3C4h]                 ; [ds] f32 here = 1.11
231e  call far M007.M007_PUTHIGH              ; AP_EHT_ACTUAL_1
2323  push    0F3h                            
2326  push    word ptr [3CAh]                 
232a  push    word ptr [3C8h]                 ; [ds] f32 here = 3.45
232e  call far M007.M007_PUTHIGH              ; AP_EHT_ACTUAL_3
2333  push    0F2h                            
2336  push    word ptr [3CEh]                 ; [ds] f32 here = -1.076089E+08
233a  push    word ptr [3CCh]                 ; [ds] f32 here = 0.89
233e  call far M007.M007_PUTLOW               ; AP_EHT_ACTUAL_1
2343  push    0F3h                            
2346  push    word ptr [3D2h]                 
234a  push    word ptr [3D0h]                 ; [ds] f32 here = 2.95
234e  call far M007.M007_PUTLOW               ; AP_EHT_ACTUAL_3
2353  push    19h                             
2355  push    word ptr [392h]                 
2359  push    word ptr [390h]                 ; [ds] f32 here = 4
235d  call far M007.M007_PUTVALUE             ; AP_USERMAXCURRENT
2362  push    0CDh                            
2365  push    word ptr [396h]                 
2369  push    word ptr [394h]                 ; [ds] f32 here = 100
236d  call far M007.M007_PUTVALUE             ; AP_PM1
2372  push    0CEh                            
2375  push    word ptr [396h]                 
2379  push    word ptr [394h]                 ; [ds] f32 here = 100
237d  call far M007.M007_PUTVALUE             ; AP_PM2
2382  push    0CFh                            
2385  push    word ptr [396h]                 
2389  push    word ptr [394h]                 ; [ds] f32 here = 100
238d  call far M007.M007_PUTVALUE             ; AP_PM3
2392  push    0F2h                            
2395  push    word ptr [3D6h]                 ; [ds] f32 here = -1.076091E+08
2399  push    word ptr [3D4h]                 ; [ds] f32 here = 1
239d  call far M007.M007_PUTVALUE             ; AP_EHT_ACTUAL_1
23a2  push    0F3h                            
23a5  push    word ptr [3DAh]                 
23a9  push    word ptr [3D8h]                 ; [ds] f32 here = 3.2
23ad  call far M007.M007_PUTVALUE             ; AP_EHT_ACTUAL_3
23b2  push    0Fh                             
23b4  push    0h                              
23b6  call far M007.M007_PUTSTATE             ; DP_EHTCOMMSFAIL = 0
23bb  push    26h                             
23bd  push    2h                              
23bf  call far M007.M007_PUTSTATE             ; DP_FIL_BLOWN = 2
23c4  push    27h                             
23c6  push    0h                              
23c8  call far M007.M007_PUTSTATE             ; DP_EHT_TRIPPED = 0
23cd  push    0EAh                            
23d0  push    0h                              
23d2  call far M007.M007_PUTSTATE             ; DP_EXTRACTOR_TRIP = 0
23d7  push    29h                             
23d9  push    0h                              
23db  call far M007.M007_PUTSTATE             ; DP_EHT_VAC_READY = 0
23e0  push    146h                            
23e3  push    0h                              
23e5  call far M007.M007_PUTSTATE             ; DP_EHT_INTERLOCK_OK = 0
23ea  push    28h                             
23ec  push    0h                              
23ee  call far M007.M007_PUTSTATE             ; DP_EHT_RESET = 0
23f3  push    0Bh                             
23f5  push    4h                              
23f7  call far M007.M007_PUTSTATE             ; DP_FILAMENT_TYPE = 4
23fc  push    0E9h                            
23ff  push    2h                              
2401  call far M007.M007_PUTSTATE             ; DP_COND_STATE = 2
2406  call far EHT_REPORTID                   
240b  pop     ds                              
240c  leave                                   
240d  retf                                    

; ===== INITIALISE_EHT_CONTROLLER =====
240e  mov     ax,204Fh                        ; segment seg2:0000
2411  enter   4h,0h                           
2415  push    ds                              
2416  mov     ds,ax                           
2418  push    83h                             
241b  call far M007.M007_GETSTATE             ; DP_GSP
2420  dec     ax                              
2421  jne     2468h                           
2423  push    2409h                           ; segment seg1:0000
2426  push    30A0h                           
2429  call far TIGASEM.SETEHTMODULE           ; "G100.440"
242e  call far TIGASEM.INITEHTCOMMS           
2433  mov     [bp-4h],ax                      
2436  mov     [bp-2h],dx                      
2439  or      dx,ax                           
243b  je      2468h                           
243d  push    0h                              
243f  wait                                    
2440  fild    dword ptr [bp-4h]               
2443  sub     sp,8h                           
2446  mov     bx,sp                           
2448  wait                                    
2449  fstp    qword ptr ss:[bx]               
244c  nop                                     
244d  wait                                    
244e  call far M007.UIF_PRINT_DOUBLE          
2453  push    1AAh                            
2456  push    0h                              
2458  push    0h                              
245a  push    2000h                           
245d  call far M007.UIF_LOG                   
2462  mov     ax,1AAh                         
2465  pop     ds                              
2466  leave                                   
2467  retf                                    
2468  xor     ax,ax                           
246a  pop     ds                              
246b  leave                                   
246c  retf                                    
246d  add     [bx+si],al                      

; ===== SUSPEND_EHT_CONTROLLER =====
246e  mov     ax,240Fh                        ; segment seg2:0000
2471  push    bp                              
2472  mov     bp,sp                           
2474  push    ds                              
2475  mov     ds,ax                           
2477  push    83h                             
247a  call far M007.M007_GETSTATE             ; DP_GSP
247f  dec     ax                              
2480  jne     2487h                           
2482  call far TIGASEM.SUSPENDEHTMODULE       
2487  xor     ax,ax                           
2489  pop     ds                              
248a  leave                                   
248b  retf                                    

; ===== KILL_EHT_CONTROLLER =====
248c  mov     ax,246Fh                        ; segment seg2:0000
248f  enter   2h,0h                           
2493  push    ds                              
2494  mov     ds,ax                           
2496  push    83h                             
2499  call far M007.M007_GETSTATE             ; DP_GSP
249e  dec     ax                              
249f  jne     24A6h                           
24a1  call far TIGASEM.DELEHTMODULE           
24a6  xor     ax,ax                           
24a8  pop     ds                              
24a9  leave                                   
24aa  retf                                    
24ab  add     [bx+si],al                      

; ===== EHT_CONTROLLER_SHUTDOWN =====
24ac  mov     ax,248Dh                        ; segment seg2:0000
24af  enter   2h,0h                           
24b3  push    ds                              
24b4  mov     ds,ax                           
24b6  push    0Eh                             
24b8  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
24bd  or      ax,ax                           
24bf  je      24D1h                           
24c1  cmp     ax,3h                           
24c4  je      24CBh                           
24c6  call far DOCOMMANDSHUTDOWN              
24cb  mov     ax,199h                         
24ce  pop     ds                              
24cf  leave                                   
24d0  retf                                    
24d1  xor     ax,ax                           
24d3  pop     ds                              
24d4  leave                                   
24d5  retf                                    

; ===== EHT_TIMER_TICK =====
24d6  mov     ax,24ADh                        ; segment seg2:0000
24d9  enter   88h,0h                          
24dd  push    ds                              
24de  mov     ds,ax                           
24e0  cmp     word ptr [10h],1h               
24e5  jne     24EEh                           
24e7  cmp     byte ptr [20h],0h               
24ec  jne     24F1h                           
24ee  jmp     25A0h                           
24f1  call far sub_665c                       
24f6  call far USER.GETTICKCOUNT              
24fb  cmp     dx,[14h]                        
24ff  jae     2504h                           
2501  jmp     25B3h                           
2504  ja      250Fh                           
2506  cmp     ax,[12h]                        
250a  jae     250Fh                           
250c  jmp     25B3h                           
250f  call far USER.GETTICKCOUNT              
2514  add     ax,0EA60h                       
2517  adc     dx,0h                           
251a  mov     [12h],ax                        
251d  mov     [14h],dx                        
2521  push    1Dh                             
2523  lea     ax,[bp-4h]                      
2526  push    ax                              
2527  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT = 409
252c  mov     bx,ax                           
252e  wait                                    
252f  fld     dword ptr ss:[bx]               
2532  wait                                    
2533  fcom    dword ptr [3DCh]                ; [ds] = 0
2537  wait                                    
2538  fstp    st(0)                           
253a  wait                                    
253b  fstsw   ax                              
253d  sahf                                    
253e  jbe     256Ah                           
2540  push    0D2h                            
2543  push    0D2h                            
2546  lea     ax,[bp-8h]                      
2549  push    ax                              
254a  call far M007.M007_GETVALUE             ; AP_FILAMENT_AGE = 210
254f  mov     bx,ax                           
2551  wait                                    
2552  fld     dword ptr ss:[bx]               
2555  wait                                    
2556  fadd    dword ptr [3E0h]                ; [ds] = 0.0167
255a  sub     sp,4h                           
255d  mov     bx,sp                           
255f  wait                                    
2560  fstp    dword ptr ss:[bx]               
2563  nop                                     
2564  wait                                    
2565  call far M007.M007_PUTVALUE             
256a  push    0Eh                             
256c  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
2571  dec     ax                              
2572  jne     25B3h                           
2574  push    111h                            
2577  push    111h                            
257a  lea     ax,[bp-8h]                      
257d  push    ax                              
257e  call far M007.M007_GETVALUE             ; AP_BEAM_TIME = 273
2583  mov     bx,ax                           
2585  wait                                    
2586  fld     dword ptr ss:[bx]               
2589  wait                                    
258a  fadd    dword ptr [3E0h]                ; [ds] = 0.0167
258e  sub     sp,4h                           
2591  mov     bx,sp                           
2593  wait                                    
2594  fstp    dword ptr ss:[bx]               
2597  nop                                     
2598  wait                                    
2599  call far M007.M007_PUTVALUE             
259e  jmp     25B3h                           
25a0  cmp     byte ptr [20h],0h               
25a5  jne     25B3h                           
25a7  push    ds                              
25a8  push    16h                             
25ab  call far sub_50f0                       
25b0  add     sp,4h                           
25b3  cmp     byte ptr [20h],0h               
25b8  jne     25BDh                           
25ba  jmp     26A3h                           
25bd  cmp     word ptr [22h],0h               
25c2  jne     25C7h                           
25c4  jmp     26A3h                           
25c7  push    1A6h                            
25ca  wait                                    
25cb  fld     dword ptr [16h]                 ; [ds] = 25000
25cf  wait                                    
25d0  fstp    dword ptr [bp-8h]               
25d3  nop                                     
25d4  wait                                    
25d5  push    word ptr [bp-6h]                
25d8  push    word ptr [bp-8h]                
25db  call far M007.M007_PUTHIGH              ; AP_USER_MAX_EHT
25e0  push    1A6h                            
25e3  push    word ptr [1Ch]                  ; [ds] f32 here = 0
25e7  push    word ptr [1Ah]                  ; [ds] f32 here = 0
25eb  call far M007.M007_PUTLOW               ; AP_USER_MAX_EHT
25f0  wait                                    
25f1  fld     dword ptr [16h]                 ; [ds] = 25000
25f5  call far sub_02c8                       
25fa  push    ax                              
25fb  push    261Bh                           ; segment seg1:0000
25fe  push    30AAh                           
2601  lea     ax,[bp-88h]                     
2605  push    ss                              
2606  push    ax                              
2607  call far USER._WSPRINTF                 
260c  add     sp,0Ah                          
260f  push    0h                              
2611  call far M007.GETLEOINIFILEPATH         
2616  push    dx                              
2617  push    ax                              
2618  call far sub_0254                       
261d  add     sp,6h                           
2620  or      ax,ax                           
2622  jne     2661h                           
2624  push    262Bh                           ; segment seg1:0000
2627  push    30BAh                           
262a  push    2651h                           ; segment seg1:0000
262d  push    30AEh                           
2630  lea     ax,[bp-88h]                     
2634  push    ss                              
2635  push    ax                              
2636  lea     ax,[bp-48h]                     
2639  push    ss                              
263a  push    ax                              
263b  push    40h                             
263d  call far M007.GETLEOINIFILEPATH         ; "User"  "UserMaxEht"
2642  push    dx                              
2643  push    ax                              
2644  call far KERNEL.GETPRIVATEPROFILESTRING 
2649  lea     ax,[bp-48h]                     
264c  push    ss                              
264d  push    ax                              
264e  call far sub_01f2                       
2653  add     sp,4h                           
2656  mov     [bp-4h],ax                      
2659  wait                                    
265a  fild    word ptr [bp-4h]                
265d  wait                                    
265e  fstp    dword ptr [bp-8h]               
2661  wait                                    
2662  fld     dword ptr [bp-8h]               
2665  wait                                    
2666  fst     dword ptr [bp-4h]               
2669  wait                                    
266a  fcom    dword ptr [16h]                 ; [ds] = 25000
266e  wait                                    
266f  fstp    st(0)                           
2671  wait                                    
2672  fstsw   ax                              
2674  sahf                                    
2675  ja      269Dh                           
2677  wait                                    
2678  fld     dword ptr [bp-4h]               
267b  wait                                    
267c  fcom    dword ptr [1Ah]                 ; [ds] = 0
2680  wait                                    
2681  fstp    st(0)                           
2683  wait                                    
2684  fstsw   ax                              
2686  sahf                                    
2687  jb      269Dh                           
2689  wait                                    
268a  fld     dword ptr [bp-4h]               
268d  sub     sp,4h                           
2690  mov     bx,sp                           
2692  wait                                    
2693  fstp    dword ptr ss:[bx]               
2696  nop                                     
2697  wait                                    
2698  call far SETUSER_MAX_EHT                
269d  mov     word ptr [22h],0h               
26a3  pop     ds                              
26a4  leave                                   
26a5  retf    2h                              

; ===== TEST_100 =====
26a8  mov     ax,24D7h                        ; segment seg2:0000
26ab  enter   2h,0h                           
26af  push    ds                              
26b0  mov     ds,ax                           
26b2  push    0h                              
26b4  push    24F4h                           ; segment seg1:0000
26b7  push    30C0h                           
26ba  call far M007.UIF_MESSAGE               ; "TEST_100"
26bf  push    64h                             
26c1  wait                                    
26c2  fld     dword ptr [bp+8h]               
26c5  sub     sp,8h                           
26c8  mov     bx,sp                           
26ca  wait                                    
26cb  fstp    qword ptr ss:[bx]               
26ce  nop                                     
26cf  wait                                    
26d0  call far M007.UIF_PRINT_DOUBLE          
26d5  push    1AAh                            
26d8  push    0h                              
26da  push    0h                              
26dc  push    2000h                           
26df  call far M007.UIF_LOG                   
26e4  mov     ax,[3DCh]                       
26e7  mov     bx,[bp+6h]                      
26ea  mov     dx,[3DEh]                       
26ee  mov     ss:[bx],ax                      
26f1  mov     ss:[bx+2h],dx                   
26f5  mov     ax,bx                           
26f7  mov     dx,ss                           
26f9  pop     ds                              
26fa  leave                                   
26fb  retf    8h                              

; ===== RESTORE_EHT_CONFIG =====
26fe  mov     ax,26A9h                        ; segment seg2:0000
2701  enter   0A0h,0h                         
2705  push    si                              
2706  push    ds                              
2707  mov     ds,ax                           
2709  xor     ax,ax                           
270b  mov     [bp-84h],ax                     
270f  mov     [bp-86h],ax                     
2713  push    ds                              
2714  push    16h                             
2717  call far sub_50f0                       
271c  add     sp,4h                           
271f  les     bx,[bp+6h]                      
2722  mov     al,es:[bx+5h]                   
2726  cbw                                     
2727  or      ax,ax                           
2729  jl      2730h                           
272b  jo      2730h                           
272d  dec     ax                              
272e  jle     2734h                           
2730  push    1h                              
2732  jmp     273Ah                           
2734  mov     al,es:[bx+5h]                   
2738  cbw                                     
2739  push    ax                              
273a  call far SWITCHANODE                    
273f  push    8Ch                             
2742  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2747  cmp     ax,5h                           
274a  je      2759h                           
274c  push    8Ch                             
274f  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2754  cmp     ax,7h                           
2757  jne     275Fh                           
2759  mov     word ptr [bp-84h],1h            
275f  push    144h                            
2762  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2767  cmp     ax,2h                           
276a  jne     2772h                           
276c  mov     word ptr [bp-86h],1h            
2772  cmp     word ptr [bp-84h],0h            
2777  je      27D6h                           
2779  push    2780h                           ; segment seg1:0000
277c  push    30D4h                           
277f  push    2786h                           ; segment seg1:0000
2782  push    30CEh                           
2785  push    27A6h                           ; segment seg1:0000
2788  push    30CAh                           
278b  lea     cx,[bp-42h]                     
278e  push    ss                              
278f  push    cx                              
2790  push    40h                             
2792  call far M007.GETLEOINIFILEPATH         ; "Filament"  "Type"
2797  push    dx                              
2798  push    ax                              
2799  call far KERNEL.GETPRIVATEPROFILESTRING 
279e  lea     ax,[bp-42h]                     
27a1  push    ss                              
27a2  push    ax                              
27a3  call far sub_01f2                       
27a8  add     sp,4h                           
27ab  mov     [bp-8Ch],ax                     
27af  or      ax,ax                           
27b1  jge     27CBh                           
27b3  cmp     word ptr [bp-86h],0h            
27b8  je      27D6h                           
27ba  les     bx,[bp+6h]                      
27bd  cmp     byte ptr es:[bx+4h],0h          
27c2  jne     27D6h                           
27c4  mov     byte ptr es:[bx+4h],5h          
27c9  jmp     27D6h                           
27cb  mov     al,[bp-8Ch]                     
27cf  les     bx,[bp+6h]                      
27d2  mov     es:[bx+4h],al                   
27d6  les     bx,[bp+6h]                      
27d9  mov     al,es:[bx+4h]                   
27dd  cbw                                     
27de  or      ax,ax                           
27e0  jl      27F1h                           
27e2  jo      27F1h                           
27e4  sub     ax,3h                           
27e7  jle     27F5h                           
27e9  dec     ax                              
27ea  dec     ax                              
27eb  jl      27F1h                           
27ed  dec     ax                              
27ee  dec     ax                              
27ef  jle     27F5h                           
27f1  push    1h                              
27f3  jmp     27FBh                           
27f5  mov     al,es:[bx+4h]                   
27f9  cbw                                     
27fa  push    ax                              
27fb  call far SWITCHFILAMENT_TYPE            
2800  push    0Bh                             
2802  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2807  cmp     ax,4h                           
280a  je      282Ah                           
280c  push    81h                             
280f  push    word ptr [3DEh]                 
2813  push    word ptr [3DCh]                 ; [ds] f32 here = 0
2817  call far M007.M007_PUTVALUE             ; AP_BEAM_CURRENT
281c  push    0Bh                             
281e  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2823  push    ax                              
2824  call far sub_58fe                       
2829  pop     bx                              
282a  les     bx,[bp+6h]                      
282d  mov     al,es:[bx+6h]                   
2831  cbw                                     
2832  or      ax,ax                           
2834  jl      283Bh                           
2836  jo      283Bh                           
2838  dec     ax                              
2839  jle     2841h                           
283b  push    0Dh                             
283d  push    1h                              
283f  jmp     284Ch                           
2841  push    0Dh                             
2843  les     bx,[bp+6h]                      
2846  mov     al,es:[bx+6h]                   
284a  cbw                                     
284b  push    ax                              
284c  call far M007.M007_PUTSTATE             ; DP_NEWFILAMENT = 1
2851  les     bx,[bp+6h]                      
2854  push    word ptr es:[bx+9h]             
2858  push    word ptr es:[bx+7h]             
285c  call far SETEHT_ACTUAL_1                
2861  les     bx,[bp+6h]                      
2864  push    word ptr es:[bx+0Dh]            
2868  push    word ptr es:[bx+0Bh]            
286c  call far SETEHT_ACTUAL_3                
2871  push    133h                            
2874  les     bx,[bp+6h]                      
2877  push    word ptr es:[bx+31h]            
287b  push    word ptr es:[bx+2Fh]            
287f  call far M007.M007_PUTVALUE             ; AP_NOMINALEXT
2884  push    152h                            
2887  les     bx,[bp+6h]                      
288a  push    word ptr es:[bx+58h]            
288e  push    word ptr es:[bx+56h]            
2892  call far M007.M007_PUTVALUE             ; AP_MIN_EXT
2897  push    15Dh                            
289a  les     bx,[bp+6h]                      
289d  push    word ptr es:[bx+5Ch]            
28a1  push    word ptr es:[bx+5Ah]            
28a5  call far M007.M007_PUTVALUE             ; AP_MAX_EXTRACTOR_V
28aa  push    14Fh                            
28ad  push    152h                            
28b0  lea     ax,[bp-90h]                     
28b4  push    ax                              
28b5  call far M007.M007_GETVALUE             ; AP_MANUALEXT = 338
28ba  mov     bx,ax                           
28bc  push    word ptr ss:[bx+2h]             
28c0  push    word ptr ss:[bx]                
28c3  call far M007.M007_PUTLOW               
28c8  push    14Fh                            
28cb  push    15Dh                            
28ce  lea     ax,[bp-94h]                     
28d2  push    ax                              
28d3  call far M007.M007_GETVALUE             ; AP_MANUALEXT = 349
28d8  mov     bx,ax                           
28da  push    word ptr ss:[bx+2h]             
28de  push    word ptr ss:[bx]                
28e1  call far M007.M007_PUTHIGH              
28e6  push    135h                            
28e9  les     bx,[bp+6h]                      
28ec  push    word ptr es:[bx+39h]            
28f0  push    word ptr es:[bx+37h]            
28f4  call far M007.M007_PUTVALUE             ; AP_NOMINALFIL
28f9  push    136h                            
28fc  les     bx,[bp+6h]                      
28ff  push    word ptr es:[bx+3Dh]            
2903  push    word ptr es:[bx+3Bh]            
2907  call far M007.M007_PUTVALUE             ; AP_NOMINALEXTI
290c  push    14Fh                            
290f  push    133h                            
2912  lea     ax,[bp-98h]                     
2916  push    ax                              
2917  call far M007.M007_GETVALUE             ; AP_MANUALEXT = 307
291c  mov     bx,ax                           
291e  push    word ptr ss:[bx+2h]             
2922  push    word ptr ss:[bx]                
2925  call far M007.M007_PUTVALUE             
292a  push    159h                            
292d  les     bx,[bp+6h]                      
2930  push    word ptr es:[bx+60h]            
2934  push    word ptr es:[bx+5Eh]            
2938  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_100
293d  push    15Ah                            
2940  les     bx,[bp+6h]                      
2943  push    word ptr es:[bx+64h]            
2947  push    word ptr es:[bx+62h]            
294b  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_10KV
2950  push    15Bh                            
2953  les     bx,[bp+6h]                      
2956  push    word ptr es:[bx+68h]            
295a  push    word ptr es:[bx+66h]            
295e  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_24KV
2963  push    15Ch                            
2966  les     bx,[bp+6h]                      
2969  push    word ptr es:[bx+6Ch]            
296d  push    word ptr es:[bx+6Ah]            
2971  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_30KV
2976  call far sub_59b4                       
297b  mov     word ptr [bp-2h],0h             
2980  jmp     2985h                           
2982  inc     word ptr [bp-2h]                
2985  cmp     word ptr [bp-2h],5h             
2989  jge     29A8h                           
298b  les     bx,[bp+6h]                      
298e  add     bx,0Fh                          
2991  mov     si,[bp-2h]                      
2994  shl     si,2h                           
2997  mov     ax,es:[bx+si]                   
299a  mov     dx,es:[bx+si+2h]                
299e  mov     [si+24h],ax                     
29a2  mov     [si+26h],dx                     
29a6  jmp     2982h                           
29a8  cmp     word ptr [bp-84h],0h            
29ad  jne     29B2h                           
29af  jmp     2A8Fh                           
29b2  mov     word ptr [bp-2h],0h             
29b7  jmp     29FBh                           
29b9  mov     ax,[bp-2h]                      
29bc  sub     ax,5h                           
29bf  je      29CCh                           
29c1  dec     ax                              
29c2  je      29DAh                           
29c4  dec     ax                              
29c5  jne     29CAh                           
29c7  jmp     2A85h                           
29ca  jmp     29F8h                           
29cc  cmp     word ptr [bp-86h],0h            
29d1  je      29E3h                           
29d3  cmp     word ptr [bp-8Ch],0h            
29d8  jge     29E3h                           
29da  mov     ax,[24h]                        
29dd  mov     dx,[26h]                        
29e1  jmp     29EAh                           
29e3  mov     ax,[3E4h]                       
29e6  mov     dx,[3E6h]                       
29ea  mov     bx,[bp-2h]                      
29ed  shl     bx,2h                           
29f0  mov     [bx+24h],ax                     
29f4  mov     [bx+26h],dx                     
29f8  inc     word ptr [bp-2h]                
29fb  cmp     word ptr [bp-2h],8h             
29ff  jl      2A04h                           
2a01  jmp     2A8Fh                           
2a04  push    word ptr [bp-2h]                
2a07  push    2A1Ch                           ; segment seg1:0000
2a0a  push    30DEh                           
2a0d  lea     ax,[bp-82h]                     
2a11  push    ss                              
2a12  push    ax                              
2a13  call far USER._WSPRINTF                 ; "C%d"
2a18  add     sp,0Ah                          
2a1b  push    2A28h                           ; segment seg1:0000
2a1e  push    30D4h                           
2a21  lea     ax,[bp-82h]                     
2a25  push    ss                              
2a26  push    ax                              
2a27  push    2A48h                           ; segment seg1:0000
2a2a  push    30CAh                           
2a2d  lea     ax,[bp-42h]                     
2a30  push    ss                              
2a31  push    ax                              
2a32  push    40h                             
2a34  call far M007.GETLEOINIFILEPATH         ; "Filament"
2a39  push    dx                              
2a3a  push    ax                              
2a3b  call far KERNEL.GETPRIVATEPROFILESTRING 
2a40  lea     ax,[bp-42h]                     
2a43  push    ss                              
2a44  push    ax                              
2a45  call far sub_01f6                       
2a4a  add     sp,4h                           
2a4d  mov     es,dx                           
2a4f  mov     bx,ax                           
2a51  wait                                    
2a52  fld     qword ptr es:[bx]               
2a55  wait                                    
2a56  fst     dword ptr [bp-8Ah]              
2a5a  wait                                    
2a5b  fst     dword ptr [bp-98h]              
2a5f  wait                                    
2a60  fcom    dword ptr [3DCh]                ; [ds] = 0
2a64  wait                                    
2a65  fstp    st(0)                           
2a67  wait                                    
2a68  fstsw   ax                              
2a6a  sahf                                    
2a6b  jae     2A70h                           
2a6d  jmp     29B9h                           
2a70  wait                                    
2a71  fld     dword ptr [bp-98h]              
2a75  mov     bx,[bp-2h]                      
2a78  shl     bx,2h                           
2a7b  wait                                    
2a7c  fstp    dword ptr [bx+24h]              
2a80  nop                                     
2a81  wait                                    
2a82  jmp     29F8h                           
2a85  mov     ax,[3DCh]                       
2a88  mov     dx,[3DEh]                       
2a8c  jmp     29EAh                           
2a8f  push    0Bh                             
2a91  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2a96  mov     bx,ax                           
2a98  shl     bx,2h                           
2a9b  push    word ptr [bx+26h]               
2a9f  push    word ptr [bx+24h]               
2aa3  call far SETTARGETCURRENT               
2aa8  mov     word ptr [10h],1h               
2aae  push    111h                            
2ab1  les     bx,[bp+6h]                      
2ab4  mov     ax,es:[bx+27h]                  
2ab8  mov     dx,es:[bx+29h]                  
2abc  mov     word ptr [bp-9Ah],0h            
2ac2  mov     word ptr [bp-9Ch],0h            
2ac8  mov     [bp-9Eh],dx                     
2acc  mov     [bp-0A0h],ax                    
2ad0  wait                                    
2ad1  fild    qword ptr [bp-0A0h]             
2ad5  wait                                    
2ad6  fmul    dword ptr [3E8h]                ; [ds] = 0.01666667
2ada  sub     sp,4h                           
2add  mov     bx,sp                           
2adf  wait                                    
2ae0  fstp    dword ptr ss:[bx]               
2ae3  nop                                     
2ae4  wait                                    
2ae5  call far M007.M007_PUTVALUE             ; AP_BEAM_TIME
2aea  les     bx,[bp+6h]                      
2aed  push    word ptr es:[bx+25h]            
2af1  push    word ptr es:[bx+23h]            
2af5  call far SETEHT_OFFSET                  
2afa  push    0E0h                            
2afd  les     bx,[bp+6h]                      
2b00  mov     al,es:[bx+3Fh]                  
2b04  cbw                                     
2b05  push    ax                              
2b06  call far M007.M007_PUTSTATE             ; DP_ADJ_ANODE
2b0b  mov     word ptr [bp-2h],0h             
2b10  mov     es,[bp+8h]                      
2b13  mov     bx,[bp+6h]                      
2b16  add     bx,40h                          
2b19  mov     si,[bp-2h]                      
2b1c  shl     si,2h                           
2b1f  mov     ax,es:[bx+si]                   
2b22  mov     dx,es:[bx+si+2h]                
2b26  mov     [si+44h],ax                     
2b2a  mov     [si+46h],dx                     
2b2e  inc     word ptr [bp-2h]                
2b31  cmp     word ptr [bp-2h],5h             
2b35  jl      2B13h                           
2b37  cmp     word ptr [bp-84h],0h            
2b3c  jne     2B41h                           
2b3e  jmp     2C11h                           
2b41  mov     word ptr [bp-2h],0h             
2b46  jmp     2B87h                           
2b48  mov     ax,[bp-2h]                      
2b4b  sub     ax,5h                           
2b4e  je      2B58h                           
2b50  dec     ax                              
2b51  je      2B66h                           
2b53  dec     ax                              
2b54  je      2B6Fh                           
2b56  jmp     2B84h                           
2b58  cmp     word ptr [bp-86h],0h            
2b5d  je      2B6Fh                           
2b5f  cmp     word ptr [bp-8Ch],0h            
2b64  jge     2B6Fh                           
2b66  mov     ax,[44h]                        
2b69  mov     dx,[46h]                        
2b6d  jmp     2B76h                           
2b6f  mov     ax,[3DCh]                       
2b72  mov     dx,[3DEh]                       
2b76  mov     bx,[bp-2h]                      
2b79  shl     bx,2h                           
2b7c  mov     [bx+44h],ax                     
2b80  mov     [bx+46h],dx                     
2b84  inc     word ptr [bp-2h]                
2b87  cmp     word ptr [bp-2h],8h             
2b8b  jl      2B90h                           
2b8d  jmp     2C11h                           
2b90  push    word ptr [bp-2h]                
2b93  push    2BA8h                           ; segment seg1:0000
2b96  push    30E2h                           
2b99  lea     ax,[bp-82h]                     
2b9d  push    ss                              
2b9e  push    ax                              
2b9f  call far USER._WSPRINTF                 ; "A%d"
2ba4  add     sp,0Ah                          
2ba7  push    2BB4h                           ; segment seg1:0000
2baa  push    30D4h                           
2bad  lea     ax,[bp-82h]                     
2bb1  push    ss                              
2bb2  push    ax                              
2bb3  push    2BD4h                           ; segment seg1:0000
2bb6  push    30CAh                           
2bb9  lea     ax,[bp-42h]                     
2bbc  push    ss                              
2bbd  push    ax                              
2bbe  push    40h                             
2bc0  call far M007.GETLEOINIFILEPATH         ; "Filament"
2bc5  push    dx                              
2bc6  push    ax                              
2bc7  call far KERNEL.GETPRIVATEPROFILESTRING 
2bcc  lea     ax,[bp-42h]                     
2bcf  push    ss                              
2bd0  push    ax                              
2bd1  call far sub_01f6                       
2bd6  add     sp,4h                           
2bd9  mov     es,dx                           
2bdb  mov     bx,ax                           
2bdd  wait                                    
2bde  fld     qword ptr es:[bx]               
2be1  wait                                    
2be2  fst     dword ptr [bp-8Ah]              
2be6  wait                                    
2be7  fst     dword ptr [bp-0A0h]             
2beb  wait                                    
2bec  fcom    dword ptr [3DCh]                ; [ds] = 0
2bf0  wait                                    
2bf1  fstp    st(0)                           
2bf3  wait                                    
2bf4  fstsw   ax                              
2bf6  sahf                                    
2bf7  jae     2BFCh                           
2bf9  jmp     2B48h                           
2bfc  wait                                    
2bfd  fld     dword ptr [bp-0A0h]             
2c01  mov     bx,[bp-2h]                      
2c04  shl     bx,2h                           
2c07  wait                                    
2c08  fstp    dword ptr [bx+44h]              
2c0c  nop                                     
2c0d  wait                                    
2c0e  jmp     2B84h                           
2c11  push    0D2h                            
2c14  push    0Bh                             
2c16  call far M007.M007_GETSTATE             ; DP_COPY_ZONE = 11
2c1b  mov     bx,ax                           
2c1d  shl     bx,2h                           
2c20  push    word ptr [bx+46h]               
2c24  push    word ptr [bx+44h]               
2c28  call far M007.M007_PUTVALUE             
2c2d  push    0E9h                            
2c30  les     bx,[bp+6h]                      
2c33  mov     al,es:[bx+54h]                  
2c37  cbw                                     
2c38  push    ax                              
2c39  call far M007.M007_PUTSTATE             ; DP_COND_STATE
2c3e  push    10Eh                            
2c41  les     bx,[bp+6h]                      
2c44  mov     al,es:[bx+55h]                  
2c48  cbw                                     
2c49  push    ax                              
2c4a  call far M007.M007_PUTSTATE             ; DP_LEAVE_BEAM_ON
2c4f  pop     ds                              
2c50  pop     si                              
2c51  leave                                   
2c52  retf    4h                              
2c55  add     [bx+si],al                      

; ===== GET_EHT_CONFIG =====
2c56  mov     ax,26FFh                        ; segment seg2:0000
2c59  enter   0BAh,0h                         
2c5d  push    si                              
2c5e  push    ds                              
2c5f  mov     ds,ax                           
2c61  mov     word ptr [bp-4h],0h             
2c66  push    8Ch                             
2c69  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2c6e  cmp     ax,5h                           
2c71  je      2C80h                           
2c73  push    8Ch                             
2c76  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
2c7b  cmp     ax,7h                           
2c7e  jne     2C85h                           
2c80  mov     word ptr [bp-4h],1h             
2c85  push    0Bh                             
2c87  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2c8c  mov     [bp-8Ah],ax                     
2c90  push    0D2h                            
2c93  lea     ax,[bp-88h]                     
2c97  push    ax                              
2c98  call far M007.M007_GETVALUE             ; AP_FILAMENT_AGE
2c9d  mov     bx,ax                           
2c9f  mov     ax,ss:[bx]                      
2ca2  mov     dx,ss:[bx+2h]                   
2ca6  mov     bx,[bp-8Ah]                     
2caa  shl     bx,2h                           
2cad  mov     [bx+44h],ax                     
2cb1  mov     [bx+46h],dx                     
2cb5  cmp     word ptr [bp-4h],0h             
2cb9  jne     2CBEh                           
2cbb  jmp     2E08h                           
2cbe  push    0Bh                             
2cc0  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2cc5  or      ax,ax                           
2cc7  jne     2CE5h                           
2cc9  mov     ax,[44h]                        
2ccc  mov     dx,[46h]                        
2cd0  mov     [5Ch],ax                        
2cd3  mov     [5Eh],dx                        
2cd7  mov     ax,[24h]                        
2cda  mov     dx,[26h]                        
2cde  mov     [3Ch],ax                        
2ce1  mov     [3Eh],dx                        
2ce5  push    0Bh                             
2ce7  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2cec  cmp     ax,6h                           
2cef  jne     2D0Dh                           
2cf1  mov     ax,[5Ch]                        
2cf4  mov     dx,[5Eh]                        
2cf8  mov     [44h],ax                        
2cfb  mov     [46h],dx                        
2cff  mov     ax,[3Ch]                        
2d02  mov     dx,[3Eh]                        
2d06  mov     [24h],ax                        
2d09  mov     [26h],dx                        
2d0d  push    0Bh                             
2d0f  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2d14  push    ax                              
2d15  push    2D2Ah                           ; segment seg1:0000
2d18  push    30AAh                           
2d1b  lea     ax,[bp-84h]                     
2d1f  push    ss                              
2d20  push    ax                              
2d21  call far USER._WSPRINTF                 
2d26  add     sp,0Ah                          
2d29  push    2D30h                           ; segment seg1:0000
2d2c  push    30D4h                           
2d2f  push    2D50h                           ; segment seg1:0000
2d32  push    30CEh                           
2d35  lea     ax,[bp-84h]                     
2d39  push    ss                              
2d3a  push    ax                              
2d3b  call far M007.GETLEOINIFILEPATH         ; "Filament"  "Type"
2d40  push    dx                              
2d41  push    ax                              
2d42  call far KERNEL.WRITEPRIVATEPROFILESTRING
2d47  mov     word ptr [bp-2h],0h             
2d4c  push    word ptr [bp-2h]                
2d4f  push    2D87h                           ; segment seg1:0000
2d52  push    30DEh                           
2d55  lea     ax,[bp-44h]                     
2d58  push    ss                              
2d59  push    ax                              
2d5a  call far USER._WSPRINTF                 ; "C%d"
2d5f  add     sp,0Ah                          
2d62  lea     ax,[bp-84h]                     
2d66  push    ss                              
2d67  push    ax                              
2d68  push    14h                             
2d6a  mov     bx,[bp-2h]                      
2d6d  shl     bx,2h                           
2d70  wait                                    
2d71  fld     dword ptr [bx+24h]              
2d75  mov     ax,bx                           
2d77  sub     sp,8h                           
2d7a  mov     bx,sp                           
2d7c  wait                                    
2d7d  fstp    qword ptr ss:[bx]               
2d80  nop                                     
2d81  wait                                    
2d82  mov     si,ax                           
2d84  call far sub_1efc                       
2d89  add     sp,0Eh                          
2d8c  push    2DADh                           ; segment seg1:0000
2d8f  push    30D4h                           
2d92  lea     ax,[bp-44h]                     
2d95  push    ss                              
2d96  push    ax                              
2d97  lea     ax,[bp-84h]                     
2d9b  push    ss                              
2d9c  push    ax                              
2d9d  call far M007.GETLEOINIFILEPATH         ; "Filament"
2da2  push    dx                              
2da3  push    ax                              
2da4  call far KERNEL.WRITEPRIVATEPROFILESTRING
2da9  push    word ptr [bp-2h]                
2dac  push    2DDAh                           ; segment seg1:0000
2daf  push    30E2h                           
2db2  lea     ax,[bp-44h]                     
2db5  push    ss                              
2db6  push    ax                              
2db7  call far USER._WSPRINTF                 ; "A%d"
2dbc  add     sp,0Ah                          
2dbf  lea     ax,[bp-84h]                     
2dc3  push    ss                              
2dc4  push    ax                              
2dc5  push    14h                             
2dc7  wait                                    
2dc8  fld     dword ptr [si+44h]              
2dcc  sub     sp,8h                           
2dcf  mov     bx,sp                           
2dd1  wait                                    
2dd2  fstp    qword ptr ss:[bx]               
2dd5  nop                                     
2dd6  wait                                    
2dd7  call far sub_1efc                       
2ddc  add     sp,0Eh                          
2ddf  push    2EEBh                           ; segment seg1:0000
2de2  push    30D4h                           
2de5  lea     ax,[bp-44h]                     
2de8  push    ss                              
2de9  push    ax                              
2dea  lea     ax,[bp-84h]                     
2dee  push    ss                              
2def  push    ax                              
2df0  call far M007.GETLEOINIFILEPATH         ; "Filament"
2df5  push    dx                              
2df6  push    ax                              
2df7  call far KERNEL.WRITEPRIVATEPROFILESTRING
2dfc  inc     word ptr [bp-2h]                
2dff  cmp     word ptr [bp-2h],8h             
2e03  jge     2E08h                           
2e05  jmp     2D4Ch                           
2e08  mov     word ptr [bp-2h],0h             
2e0d  mov     es,[bp+8h]                      
2e10  mov     bx,[bp-2h]                      
2e13  shl     bx,2h                           
2e16  mov     ax,[bx+44h]                     
2e1a  mov     dx,[bx+46h]                     
2e1e  mov     cx,bx                           
2e20  mov     bx,[bp+6h]                      
2e23  mov     si,cx                           
2e25  mov     es:[bx+si+40h],ax               
2e29  mov     es:[bx+si+42h],dx               
2e2d  inc     word ptr [bp-2h]                
2e30  cmp     word ptr [bp-2h],5h             
2e34  jl      2E10h                           
2e36  mov     word ptr [bp-2h],0h             
2e3b  mov     es,[bp+8h]                      
2e3e  mov     bx,[bp-2h]                      
2e41  shl     bx,2h                           
2e44  mov     ax,[bx+24h]                     
2e48  mov     dx,[bx+26h]                     
2e4c  mov     cx,bx                           
2e4e  mov     bx,[bp+6h]                      
2e51  mov     si,cx                           
2e53  mov     es:[bx+si+0Fh],ax               
2e57  mov     es:[bx+si+11h],dx               
2e5b  inc     word ptr [bp-2h]                
2e5e  cmp     word ptr [bp-2h],5h             
2e62  jl      2E3Eh                           
2e64  push    0Ch                             
2e66  call far M007.M007_GETSTATE             ; DP_ANODE
2e6b  les     bx,[bp+6h]                      
2e6e  mov     es:[bx+5h],al                   
2e72  push    0Bh                             
2e74  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
2e79  les     bx,[bp+6h]                      
2e7c  mov     es:[bx+4h],al                   
2e80  push    0Dh                             
2e82  call far M007.M007_GETSTATE             ; DP_NEWFILAMENT
2e87  les     bx,[bp+6h]                      
2e8a  mov     es:[bx+6h],al                   
2e8e  push    0F2h                            
2e91  lea     ax,[bp-88h]                     
2e95  push    ax                              
2e96  call far M007.M007_GETVALUE             ; AP_EHT_ACTUAL_1
2e9b  mov     bx,ax                           
2e9d  mov     ax,ss:[bx]                      
2ea0  mov     dx,ss:[bx+2h]                   
2ea4  les     bx,[bp+6h]                      
2ea7  mov     es:[bx+7h],ax                   
2eab  mov     es:[bx+9h],dx                   
2eaf  push    0F3h                            
2eb2  lea     ax,[bp-8Eh]                     
2eb6  push    ax                              
2eb7  call far M007.M007_GETVALUE             ; AP_EHT_ACTUAL_3
2ebc  mov     bx,ax                           
2ebe  mov     ax,ss:[bx]                      
2ec1  mov     dx,ss:[bx+2h]                   
2ec5  les     bx,[bp+6h]                      
2ec8  mov     es:[bx+0Bh],ax                  
2ecc  mov     es:[bx+0Dh],dx                  
2ed0  push    111h                            
2ed3  lea     ax,[bp-92h]                     
2ed7  push    ax                              
2ed8  call far M007.M007_GETVALUE             ; AP_BEAM_TIME
2edd  mov     bx,ax                           
2edf  wait                                    
2ee0  fld     dword ptr ss:[bx]               
2ee3  wait                                    
2ee4  fmul    dword ptr [3ECh]                ; [ds] = 60
2ee8  call far sub_02c8                       
2eed  les     bx,[bp+6h]                      
2ef0  mov     es:[bx+27h],ax                  
2ef4  mov     es:[bx+29h],dx                  
2ef8  push    127h                            
2efb  lea     ax,[bp-96h]                     
2eff  push    ax                              
2f00  call far M007.M007_GETVALUE             ; AP_EHT_OFFSET
2f05  mov     bx,ax                           
2f07  mov     ax,ss:[bx]                      
2f0a  mov     dx,ss:[bx+2h]                   
2f0e  les     bx,[bp+6h]                      
2f11  mov     es:[bx+23h],ax                  
2f15  mov     es:[bx+25h],dx                  
2f19  push    0E0h                            
2f1c  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
2f21  les     bx,[bp+6h]                      
2f24  mov     es:[bx+3Fh],al                  
2f28  push    133h                            
2f2b  lea     ax,[bp-9Ah]                     
2f2f  push    ax                              
2f30  call far M007.M007_GETVALUE             ; AP_NOMINALEXT
2f35  mov     bx,ax                           
2f37  mov     ax,ss:[bx]                      
2f3a  mov     dx,ss:[bx+2h]                   
2f3e  les     bx,[bp+6h]                      
2f41  mov     es:[bx+2Fh],ax                  
2f45  mov     es:[bx+31h],dx                  
2f49  push    152h                            
2f4c  lea     ax,[bp-9Eh]                     
2f50  push    ax                              
2f51  call far M007.M007_GETVALUE             ; AP_MIN_EXT
2f56  mov     bx,ax                           
2f58  mov     ax,ss:[bx]                      
2f5b  mov     dx,ss:[bx+2h]                   
2f5f  les     bx,[bp+6h]                      
2f62  mov     es:[bx+56h],ax                  
2f66  mov     es:[bx+58h],dx                  
2f6a  push    15Dh                            
2f6d  lea     ax,[bp-0A2h]                    
2f71  push    ax                              
2f72  call far M007.M007_GETVALUE             ; AP_MAX_EXTRACTOR_V
2f77  mov     bx,ax                           
2f79  mov     ax,ss:[bx]                      
2f7c  mov     dx,ss:[bx+2h]                   
2f80  les     bx,[bp+6h]                      
2f83  mov     es:[bx+5Ah],ax                  
2f87  mov     es:[bx+5Ch],dx                  
2f8b  push    135h                            
2f8e  lea     ax,[bp-0A6h]                    
2f92  push    ax                              
2f93  call far M007.M007_GETVALUE             ; AP_NOMINALFIL
2f98  mov     bx,ax                           
2f9a  mov     ax,ss:[bx]                      
2f9d  mov     dx,ss:[bx+2h]                   
2fa1  les     bx,[bp+6h]                      
2fa4  mov     es:[bx+37h],ax                  
2fa8  mov     es:[bx+39h],dx                  
2fac  push    136h                            
2faf  lea     ax,[bp-0AAh]                    
2fb3  push    ax                              
2fb4  call far M007.M007_GETVALUE             ; AP_NOMINALEXTI
2fb9  mov     bx,ax                           
2fbb  mov     ax,ss:[bx]                      
2fbe  mov     dx,ss:[bx+2h]                   
2fc2  les     bx,[bp+6h]                      
2fc5  mov     es:[bx+3Bh],ax                  
2fc9  mov     es:[bx+3Dh],dx                  
2fcd  push    0E9h                            
2fd0  call far M007.M007_GETSTATE             ; DP_COND_STATE
2fd5  les     bx,[bp+6h]                      
2fd8  mov     es:[bx+54h],al                  
2fdc  push    10Eh                            
2fdf  call far M007.M007_GETSTATE             ; DP_LEAVE_BEAM_ON
2fe4  les     bx,[bp+6h]                      
2fe7  mov     es:[bx+55h],al                  
2feb  push    159h                            
2fee  lea     ax,[bp-0AEh]                    
2ff2  push    ax                              
2ff3  call far M007.M007_GETVALUE             ; AP_EHT_CAL_100
2ff8  mov     bx,ax                           
2ffa  mov     ax,ss:[bx]                      
2ffd  mov     dx,ss:[bx+2h]                   
3001  les     bx,[bp+6h]                      
3004  mov     es:[bx+5Eh],ax                  
3008  mov     es:[bx+60h],dx                  
300c  push    15Ah                            
300f  lea     ax,[bp-0B2h]                    
3013  push    ax                              
3014  call far M007.M007_GETVALUE             ; AP_EHT_CAL_10KV
3019  mov     bx,ax                           
301b  mov     ax,ss:[bx]                      
301e  mov     dx,ss:[bx+2h]                   
3022  les     bx,[bp+6h]                      
3025  mov     es:[bx+62h],ax                  
3029  mov     es:[bx+64h],dx                  
302d  push    15Bh                            
3030  lea     ax,[bp-0B6h]                    
3034  push    ax                              
3035  call far M007.M007_GETVALUE             ; AP_EHT_CAL_24KV
303a  mov     bx,ax                           
303c  mov     ax,ss:[bx]                      
303f  mov     dx,ss:[bx+2h]                   
3043  les     bx,[bp+6h]                      
3046  mov     es:[bx+66h],ax                  
304a  mov     es:[bx+68h],dx                  
304e  push    15Ch                            
3051  lea     ax,[bp-0BAh]                    
3055  push    ax                              
3056  call far M007.M007_GETVALUE             ; AP_EHT_CAL_30KV
305b  mov     bx,ax                           
305d  mov     ax,ss:[bx]                      
3060  mov     dx,ss:[bx+2h]                   
3064  les     bx,[bp+6h]                      
3067  mov     es:[bx+6Ah],ax                  
306b  mov     es:[bx+6Ch],dx                  
306f  pop     ds                              
3070  pop     si                              
3071  leave                                   
3072  retf    4h                              
3075  add     [bx+si],al                      

; ===== SET_FE_FILAMENT_LIMITS =====
3076  mov     ax,2C57h                        ; segment seg2:0000
3079  push    bp                              
307a  mov     bp,sp                           
307c  push    ds                              
307d  mov     ds,ax                           
307f  pop     ds                              
3080  leave                                   
3081  retf                                    
3082  inc     bp                              
3083  dec     ax                              
3084  push    sp                              
3085  and     [si+4Ch],al                     
3088  dec     sp                              
3089  and     [di],ch                         
308b  and     [bp+30h],dl                     
308e  xor     ax,302Eh                        
3091  xor     [bx+si],ah                      
3093  cmp     ah,[bx+si]                      
3095  and     [bx+di],dh                      
3097  xor     [di],ch                         
3099  dec     dx                              
309a  popa                                    
309b  outsb                                   
309c  sub     ax,3539h                        
309f  add     [bx+31h],al                     
30a2  xor     [bx+si],dh                      
30a4  xor     al,34h                          
30a7  xor     [bx+si],al                      
30a9  add     [di],ah                         
30ab  add     fs:[bx+si],al                   
30ae  push    bp                              
30af  jae     3116h                           
30b1  jb      3100h                           
30b3  popa                                    
30b4  js      30FBh                           
30b6  push    74h                             
30b9  add     [di+73h],dl                     
30bc  jb      30BFh                           
30bf  add     [si+45h],dl                     
30c2  push    bx                              
30c3  push    sp                              
30c4  pop     di                              
30c5  xor     [bx+si],si                      
30c7  xor     [bx+si],al                      
30c9  add     [di],ch                         
30cb  xor     [bx+si],ax                      
30cd  add     [si+79h],dl                     
30d0  jo      3137h                           
30d2  add     [bx+si],al                      
30d4  inc     si                              
30d5  imul    bp,[si+61h],656Dh               
30da  outsb                                   
30db  je      30DDh                           
30dd  add     [bp+di+25h],al                  
30e0  add     fs:[bx+di+25h],al               
30e4  add     fs:[bx+si],al                   

; ===== SWITCHLEAVE_BEAM_ON =====
30e6  mov     ax,3077h                        ; segment seg2:0000
30e9  push    bp                              
30ea  mov     bp,sp                           
30ec  push    ds                              
30ed  mov     ds,ax                           
30ef  push    10Eh                            
30f2  push    word ptr [bp+6h]                
30f5  call far M007.M007_PUTSTATE             ; DP_RIGHT_FROZEN = 270
30fa  pop     ds                              
30fb  leave                                   
30fc  retf    2h                              
30ff  add     [bx+si],al                      

; ===== SWITCHADJ_ANODE =====
3100  mov     ax,30E7h                        ; segment seg2:0000
3103  push    bp                              
3104  mov     bp,sp                           
3106  push    ds                              
3107  mov     ds,ax                           
3109  push    0E0h                            
310c  push    word ptr [bp+6h]                
310f  call far M007.M007_PUTSTATE             ; DP_ADJ_ANODE
3114  pop     ds                              
3115  leave                                   
3116  retf    2h                              
3119  add     [bx+si],al                      

; ----- sub_311a -----
311a  mov     ax,3101h                        ; segment seg2:0000
311d  enter   8h,0h                           
3121  push    ds                              
3122  mov     ds,ax                           
3124  cmp     word ptr [6Ch],0h               
3129  je      312Eh                           
312b  jmp     320Ah                           
312e  push    1Ch                             
3130  lea     ax,[bp-4h]                      
3133  push    ax                              
3134  call far M007.M007_GETVALUE             ; AP_ACTUALKV
3139  mov     bx,ax                           
313b  wait                                    
313c  fld     dword ptr ss:[bx]               
313f  wait                                    
3140  fld     dword ptr [bp+6h]               
3143  wait                                    
3144  fst     dword ptr [bp-8h]               
3147  wait                                    
3148  fcom    st(0),st(1)                     
314a  wait                                    
314b  fstp    st(0)                           
314d  wait                                    
314e  fstp    st(0)                           
3150  wait                                    
3151  fstsw   ax                              
3153  sahf                                    
3154  jbe     3192h                           
3156  wait                                    
3157  fld     dword ptr [bp-8h]               
315a  wait                                    
315b  fcom    dword ptr [3F0h]                ; [ds] = 505
315f  wait                                    
3160  fstp    st(0)                           
3162  wait                                    
3163  fstsw   ax                              
3165  sahf                                    
3166  jbe     3192h                           
3168  push    0Ch                             
316a  call far M007.M007_GETSTATE             ; DP_ANODE
316f  dec     ax                              
3170  jne     3192h                           
3172  mov     word ptr [6Ch],1h               
3178  push    740h                            
317b  push    741h                            
317e  push    0h                              
3180  call far M007.LEO_MSGBOX                
3185  push    0h                              
3187  call far SWITCHANODE                    
318c  mov     word ptr [6Ch],0h               
3192  push    1Ch                             
3194  lea     ax,[bp-8h]                      
3197  push    ax                              
3198  call far M007.M007_GETVALUE             ; AP_ACTUALKV
319d  mov     bx,ax                           
319f  wait                                    
31a0  fld     dword ptr ss:[bx]               
31a3  wait                                    
31a4  fld     dword ptr [bp+6h]               
31a7  wait                                    
31a8  fst     dword ptr [bp-4h]               
31ab  wait                                    
31ac  fcom    st(0),st(1)                     
31ae  wait                                    
31af  fstp    st(0)                           
31b1  wait                                    
31b2  fstp    st(0)                           
31b4  wait                                    
31b5  fstsw   ax                              
31b7  sahf                                    
31b8  jne     320Ah                           
31ba  wait                                    
31bb  fld     dword ptr [bp-4h]               
31be  wait                                    
31bf  fcom    dword ptr [3F0h]                ; [ds] = 505
31c3  wait                                    
31c4  fstp    st(0)                           
31c6  wait                                    
31c7  fstsw   ax                              
31c9  sahf                                    
31ca  ja      320Ah                           
31cc  push    0Ch                             
31ce  call far M007.M007_GETSTATE             ; DP_ANODE
31d3  or      ax,ax                           
31d5  jne     320Ah                           
31d7  mov     word ptr [6Ch],1h               
31dd  push    740h                            
31e0  push    742h                            
31e3  push    ax                              
31e4  call far M007.LEO_MSGBOX                
31e9  push    1h                              
31eb  call far SWITCHANODE                    
31f0  wait                                    
31f1  fld     dword ptr [bp-4h]               
31f4  sub     sp,4h                           
31f7  mov     bx,sp                           
31f9  wait                                    
31fa  fstp    dword ptr ss:[bx]               
31fd  nop                                     
31fe  wait                                    
31ff  call far SETMANUALKV                    
3204  mov     word ptr [6Ch],0h               
320a  pop     ds                              
320b  leave                                   
320c  retf                                    
320d  add     [bx+si],al                      

; ===== SETMAX_EXTRACTOR_V =====
320e  mov     ax,311Bh                        ; segment seg2:0000
3211  push    bp                              
3212  mov     bp,sp                           
3214  push    ds                              
3215  mov     ds,ax                           
3217  push    15Dh                            
321a  push    word ptr [bp+8h]                
321d  push    word ptr [bp+6h]                
3220  call far M007.M007_PUTVALUE             ; AP_MAX_EXTRACTOR_V
3225  pop     ds                              
3226  leave                                   
3227  retf    4h                              

; ===== SETEHT_OFFSET =====
322a  mov     ax,320Fh                        ; segment seg2:0000
322d  enter   0Ch,0h                          
3231  push    ds                              
3232  mov     ds,ax                           
3234  push    127h                            
3237  wait                                    
3238  fld     dword ptr [bp+6h]               
323b  wait                                    
323c  fstp    dword ptr [bp-8h]               
323f  nop                                     
3240  wait                                    
3241  push    word ptr [bp-6h]                
3244  push    word ptr [bp-8h]                
3247  call far M007.M007_PUTVALUE             ; AP_EHT_OFFSET
324c  push    83h                             
324f  call far M007.M007_GETSTATE             ; DP_GSP
3254  dec     ax                              
3255  jne     326Bh                           
3257  wait                                    
3258  fld     dword ptr [bp-8h]               
325b  sub     sp,8h                           
325e  mov     bx,sp                           
3260  wait                                    
3261  fstp    qword ptr ss:[bx]               
3264  nop                                     
3265  wait                                    
3266  call far TIGASEM.SETEHTSETVOLTOFFSET    
326b  push    0Eh                             
326d  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
3272  dec     ax                              
3273  jne     32B7h                           
3275  push    1Ah                             
3277  lea     ax,[bp-8h]                      
327a  push    ax                              
327b  call far M007.M007_GETVALUE             ; AP_MANUALKV
3280  mov     bx,ax                           
3282  wait                                    
3283  fld     dword ptr ss:[bx]               
3286  wait                                    
3287  fst     dword ptr [bp-4h]               
328a  wait                                    
328b  fst     dword ptr [bp-0Ch]              
328e  wait                                    
328f  fadd    dword ptr [3F4h]                ; [ds] = 10
3293  sub     sp,4h                           
3296  mov     bx,sp                           
3298  wait                                    
3299  fstp    dword ptr ss:[bx]               
329c  nop                                     
329d  wait                                    
329e  call far SETMANUALKV                    
32a3  wait                                    
32a4  fld     dword ptr [bp-0Ch]              
32a7  sub     sp,4h                           
32aa  mov     bx,sp                           
32ac  wait                                    
32ad  fstp    dword ptr ss:[bx]               
32b0  nop                                     
32b1  wait                                    
32b2  call far SETMANUALKV                    
32b7  pop     ds                              
32b8  leave                                   
32b9  retf    4h                              

; ===== CHECKKVLICENCES =====
32bc  mov     ax,322Bh                        ; segment seg2:0000
32bf  enter   18h,0h                          
32c3  push    ds                              
32c4  mov     ds,ax                           
32c6  push    0Ch                             
32c8  call far M007.M007_GETSTATE             ; DP_ANODE
32cd  push    ax                              
32ce  call far sub_574a                       
32d3  pop     bx                              
32d4  mov     es,dx                           
32d6  mov     bx,ax                           
32d8  wait                                    
32d9  fld     dword ptr es:[bx]               
32dc  wait                                    
32dd  fst     dword ptr [bp-4h]               
32e0  wait                                    
32e1  fstp    dword ptr [bp-14h]              
32e4  nop                                     
32e5  wait                                    
32e6  push    word ptr [bp-12h]               
32e9  push    word ptr [bp-14h]               
32ec  call far sub_50a0                       
32f1  add     sp,4h                           
32f4  wait                                    
32f5  fld     dword ptr [bp-14h]              
32f8  sub     sp,4h                           
32fb  mov     bx,sp                           
32fd  wait                                    
32fe  fstp    dword ptr ss:[bx]               
3301  nop                                     
3302  wait                                    
3303  call far sub_57a2                       
3308  add     sp,4h                           
330b  wait                                    
330c  fld     dword ptr [bp-14h]              
330f  push    1Ch                             
3311  lea     ax,[bp-10h]                     
3314  push    ax                              
3315  wait                                    
3316  fstp    dword ptr [bp-18h]              
3319  call far M007.M007_GETVALUE             ; AP_ACTUALKV
331e  wait                                    
331f  fld     dword ptr [bp-18h]              
3322  mov     bx,ax                           
3324  wait                                    
3325  fcom    dword ptr ss:[bx]               
3328  wait                                    
3329  fstp    st(0)                           
332b  wait                                    
332c  fstsw   ax                              
332e  sahf                                    
332f  jae     3345h                           
3331  wait                                    
3332  fld     dword ptr [bp-18h]              
3335  sub     sp,4h                           
3338  mov     bx,sp                           
333a  wait                                    
333b  fstp    dword ptr ss:[bx]               
333e  nop                                     
333f  wait                                    
3340  call far SETMANUALKV                    
3345  push    24h                             
3347  call far M007.ISLICENCED                
334c  dec     ax                              
334d  jne     3358h                           
334f  mov     ax,[3F8h]                       
3352  mov     dx,[3FAh]                       
3356  jmp     335Fh                           
3358  mov     ax,[3FCh]                       
335b  mov     dx,[3FEh]                       
335f  mov     [bp-8h],ax                      
3362  mov     [bp-6h],dx                      
3365  push    104h                            
3368  lea     ax,[bp-18h]                     
336b  push    ax                              
336c  call far M007.M007_GETVALUE             ; AP_EHT_SET_MIN
3371  mov     bx,ax                           
3373  wait                                    
3374  fld     dword ptr ss:[bx]               
3377  wait                                    
3378  fst     dword ptr [bp-0Ch]              
337b  wait                                    
337c  fst     dword ptr [bp-14h]              
337f  lea     bx,[bp-8h]                      
3382  wait                                    
3383  fcom    dword ptr ss:[bx]               
3386  wait                                    
3387  fstp    st(0)                           
3389  wait                                    
338a  fstsw   ax                              
338c  sahf                                    
338d  jbe     3399h                           
338f  wait                                    
3390  fld     dword ptr [bp-14h]              
3393  wait                                    
3394  fstp    dword ptr ss:[bx]               
3397  nop                                     
3398  wait                                    
3399  push    1Ah                             
339b  push    word ptr [bp-6h]                
339e  push    word ptr [bp-8h]                
33a1  call far M007.M007_PUTLOW               ; AP_MANUALKV
33a6  pop     ds                              
33a7  leave                                   
33a8  retf                                    
33a9  add     [bx+si],al                      

; ===== SWITCHSE_SUPPLIES =====
33aa  mov     ax,32BDh                        ; segment seg2:0000
33ad  push    bp                              
33ae  mov     bp,sp                           
33b0  push    ds                              
33b1  mov     ds,ax                           
33b3  push    14Ch                            
33b6  push    word ptr [bp+6h]                
33b9  call far M007.M007_PUTSTATE             ; DP_SE_SUPPLIES
33be  pop     ds                              
33bf  leave                                   
33c0  retf    2h                              
33c3  add     [bx+si],al                      

; ===== SETEHT_ACTUAL_1 =====
33c4  mov     ax,33ABh                        ; segment seg2:0000
33c7  enter   10h,0h                          
33cb  push    ds                              
33cc  mov     ds,ax                           
33ce  push    0F2h                            
33d1  lea     ax,[bp-4h]                      
33d4  push    ax                              
33d5  call far M007.M007_GETHIGH              ; AP_EHT_ACTUAL_1
33da  mov     bx,ax                           
33dc  wait                                    
33dd  fld     dword ptr ss:[bx]               
33e0  wait                                    
33e1  fld     dword ptr [bp+6h]               
33e4  wait                                    
33e5  fst     dword ptr [bp-10h]              
33e8  wait                                    
33e9  fcom    st(0),st(1)                     
33eb  wait                                    
33ec  fstp    st(0)                           
33ee  wait                                    
33ef  fstp    st(0)                           
33f1  wait                                    
33f2  fstsw   ax                              
33f4  sahf                                    
33f5  ja      3469h                           
33f7  push    0F2h                            
33fa  lea     ax,[bp-8h]                      
33fd  push    ax                              
33fe  call far M007.M007_GETLOW               ; AP_EHT_ACTUAL_1
3403  mov     bx,ax                           
3405  wait                                    
3406  fld     dword ptr ss:[bx]               
3409  wait                                    
340a  fcom    dword ptr [bp-10h]              
340d  wait                                    
340e  fstp    st(0)                           
3410  wait                                    
3411  fstsw   ax                              
3413  sahf                                    
3414  ja      3469h                           
3416  push    0F2h                            
3419  wait                                    
341a  fld     dword ptr [bp-10h]              
341d  sub     sp,4h                           
3420  mov     bx,sp                           
3422  wait                                    
3423  fstp    dword ptr ss:[bx]               
3426  nop                                     
3427  wait                                    
3428  call far M007.M007_PUTVALUE             ; AP_EHT_ACTUAL_1
342d  push    83h                             
3430  call far M007.M007_GETSTATE             ; DP_GSP
3435  dec     ax                              
3436  jne     3469h                           
3438  wait                                    
3439  fld     dword ptr [bp-10h]              
343c  sub     sp,8h                           
343f  mov     bx,sp                           
3441  wait                                    
3442  fstp    qword ptr ss:[bx]               
3445  nop                                     
3446  wait                                    
3447  push    0F3h                            
344a  lea     ax,[bp-0Ch]                     
344d  push    ax                              
344e  call far M007.M007_GETVALUE             ; AP_EHT_ACTUAL_3
3453  mov     bx,ax                           
3455  wait                                    
3456  fld     dword ptr ss:[bx]               
3459  sub     sp,8h                           
345c  mov     bx,sp                           
345e  wait                                    
345f  fstp    qword ptr ss:[bx]               
3462  nop                                     
3463  wait                                    
3464  call far TIGASEM.SETEHTSETFILICALIB     
3469  pop     ds                              
346a  leave                                   
346b  retf    4h                              

; ===== SETEHT_ACTUAL_3 =====
346e  mov     ax,33C5h                        ; segment seg2:0000
3471  enter   10h,0h                          
3475  push    ds                              
3476  mov     ds,ax                           
3478  push    0F3h                            
347b  lea     ax,[bp-4h]                      
347e  push    ax                              
347f  call far M007.M007_GETHIGH              ; AP_EHT_ACTUAL_3
3484  mov     bx,ax                           
3486  wait                                    
3487  fld     dword ptr ss:[bx]               
348a  wait                                    
348b  fld     dword ptr [bp+6h]               
348e  wait                                    
348f  fst     dword ptr [bp-10h]              
3492  wait                                    
3493  fcom    st(0),st(1)                     
3495  wait                                    
3496  fstp    st(0)                           
3498  wait                                    
3499  fstp    st(0)                           
349b  wait                                    
349c  fstsw   ax                              
349e  sahf                                    
349f  ja      3511h                           
34a1  push    0F3h                            
34a4  lea     ax,[bp-8h]                      
34a7  push    ax                              
34a8  call far M007.M007_GETLOW               ; AP_EHT_ACTUAL_3
34ad  mov     bx,ax                           
34af  wait                                    
34b0  fld     dword ptr ss:[bx]               
34b3  wait                                    
34b4  fcom    dword ptr [bp-10h]              
34b7  wait                                    
34b8  fstp    st(0)                           
34ba  wait                                    
34bb  fstsw   ax                              
34bd  sahf                                    
34be  ja      3511h                           
34c0  push    0F3h                            
34c3  wait                                    
34c4  fld     dword ptr [bp-10h]              
34c7  sub     sp,4h                           
34ca  mov     bx,sp                           
34cc  wait                                    
34cd  fstp    dword ptr ss:[bx]               
34d0  nop                                     
34d1  wait                                    
34d2  call far M007.M007_PUTVALUE             ; AP_EHT_ACTUAL_3
34d7  push    83h                             
34da  call far M007.M007_GETSTATE             ; DP_GSP
34df  dec     ax                              
34e0  jne     3511h                           
34e2  push    0F2h                            
34e5  lea     ax,[bp-0Ch]                     
34e8  push    ax                              
34e9  call far M007.M007_GETVALUE             ; AP_EHT_ACTUAL_1
34ee  mov     bx,ax                           
34f0  wait                                    
34f1  fld     dword ptr ss:[bx]               
34f4  sub     sp,8h                           
34f7  mov     bx,sp                           
34f9  wait                                    
34fa  fstp    qword ptr ss:[bx]               
34fd  wait                                    
34fe  fld     dword ptr [bp-10h]              
3501  sub     sp,8h                           
3504  mov     bx,sp                           
3506  wait                                    
3507  fstp    qword ptr ss:[bx]               
350a  nop                                     
350b  wait                                    
350c  call far TIGASEM.SETEHTSETFILICALIB     
3511  pop     ds                              
3512  leave                                   
3513  retf    4h                              

; ===== SETBEAM_CURRENT =====
3516  mov     ax,346Fh                        ; segment seg2:0000
3519  enter   0Ch,0h                          
351d  push    ds                              
351e  mov     ds,ax                           
3520  push    81h                             
3523  lea     ax,[bp-4h]                      
3526  push    ax                              
3527  call far M007.M007_GETHIGH              ; AP_BEAM_CURRENT
352c  mov     bx,ax                           
352e  wait                                    
352f  fld     dword ptr ss:[bx]               
3532  wait                                    
3533  fld     dword ptr [bp+6h]               
3536  wait                                    
3537  fst     dword ptr [bp-0Ch]              
353a  wait                                    
353b  fcom    st(0),st(1)                     
353d  wait                                    
353e  fstp    st(0)                           
3540  wait                                    
3541  fstp    st(0)                           
3543  wait                                    
3544  fstsw   ax                              
3546  sahf                                    
3547  ja      35A9h                           
3549  push    81h                             
354c  lea     ax,[bp-8h]                      
354f  push    ax                              
3550  call far M007.M007_GETLOW               ; AP_BEAM_CURRENT
3555  mov     bx,ax                           
3557  wait                                    
3558  fld     dword ptr ss:[bx]               
355b  wait                                    
355c  fcom    dword ptr [bp-0Ch]              
355f  wait                                    
3560  fstp    st(0)                           
3562  wait                                    
3563  fstsw   ax                              
3565  sahf                                    
3566  ja      35A9h                           
3568  push    81h                             
356b  wait                                    
356c  fld     dword ptr [bp-0Ch]              
356f  sub     sp,4h                           
3572  mov     bx,sp                           
3574  wait                                    
3575  fstp    dword ptr ss:[bx]               
3578  nop                                     
3579  wait                                    
357a  call far M007.M007_PUTVALUE             ; AP_BEAM_CURRENT
357f  wait                                    
3580  fld     dword ptr [bp-0Ch]              
3583  wait                                    
3584  fstp    dword ptr [0E6h]                ; [ds] = 0
3588  nop                                     
3589  wait                                    
358a  push    83h                             
358d  call far M007.M007_GETSTATE             ; DP_GSP
3592  dec     ax                              
3593  jne     35A9h                           
3595  wait                                    
3596  fld     dword ptr [bp-0Ch]              
3599  sub     sp,8h                           
359c  mov     bx,sp                           
359e  wait                                    
359f  fstp    qword ptr ss:[bx]               
35a2  nop                                     
35a3  wait                                    
35a4  call far TIGASEM.SETBEAMCURRENTGSPREQUEST
35a9  pop     ds                              
35aa  leave                                   
35ab  retf    4h                              

; ===== SETPM1 =====
35ae  mov     ax,3517h                        ; segment seg2:0000
35b1  enter   0Ch,0h                          
35b5  push    ds                              
35b6  mov     ds,ax                           
35b8  push    0CDh                            
35bb  lea     ax,[bp-4h]                      
35be  push    ax                              
35bf  call far M007.M007_GETHIGH              ; AP_PM1
35c4  mov     bx,ax                           
35c6  wait                                    
35c7  fld     dword ptr ss:[bx]               
35ca  wait                                    
35cb  fld     dword ptr [bp+6h]               
35ce  wait                                    
35cf  fst     dword ptr [bp-0Ch]              
35d2  wait                                    
35d3  fcom    st(0),st(1)                     
35d5  wait                                    
35d6  fstp    st(0)                           
35d8  wait                                    
35d9  fstp    st(0)                           
35db  wait                                    
35dc  fstsw   ax                              
35de  sahf                                    
35df  ja      3638h                           
35e1  push    0CDh                            
35e4  lea     ax,[bp-8h]                      
35e7  push    ax                              
35e8  call far M007.M007_GETLOW               ; AP_PM1
35ed  mov     bx,ax                           
35ef  wait                                    
35f0  fld     dword ptr ss:[bx]               
35f3  wait                                    
35f4  fcom    dword ptr [bp-0Ch]              
35f7  wait                                    
35f8  fstp    st(0)                           
35fa  wait                                    
35fb  fstsw   ax                              
35fd  sahf                                    
35fe  ja      3638h                           
3600  push    0CDh                            
3603  wait                                    
3604  fld     dword ptr [bp-0Ch]              
3607  sub     sp,4h                           
360a  mov     bx,sp                           
360c  wait                                    
360d  fstp    dword ptr ss:[bx]               
3610  nop                                     
3611  wait                                    
3612  call far M007.M007_PUTVALUE             ; AP_PM1
3617  push    83h                             
361a  call far M007.M007_GETSTATE             ; DP_GSP
361f  dec     ax                              
3620  jne     3638h                           
3622  push    1h                              
3624  wait                                    
3625  fld     dword ptr [bp-0Ch]              
3628  sub     sp,8h                           
362b  mov     bx,sp                           
362d  wait                                    
362e  fstp    qword ptr ss:[bx]               
3631  nop                                     
3632  wait                                    
3633  call far TIGASEM.SETEHTSETPMVOLTAGE     
3638  pop     ds                              
3639  leave                                   
363a  retf    4h                              
363d  add     [bx+si],al                      

; ===== SETPM2 =====
363e  mov     ax,35AFh                        ; segment seg2:0000
3641  enter   0Ch,0h                          
3645  push    ds                              
3646  mov     ds,ax                           
3648  push    0CEh                            
364b  lea     ax,[bp-4h]                      
364e  push    ax                              
364f  call far M007.M007_GETHIGH              ; AP_PM2
3654  mov     bx,ax                           
3656  wait                                    
3657  fld     dword ptr ss:[bx]               
365a  wait                                    
365b  fld     dword ptr [bp+6h]               
365e  wait                                    
365f  fst     dword ptr [bp-0Ch]              
3662  wait                                    
3663  fcom    st(0),st(1)                     
3665  wait                                    
3666  fstp    st(0)                           
3668  wait                                    
3669  fstp    st(0)                           
366b  wait                                    
366c  fstsw   ax                              
366e  sahf                                    
366f  ja      36C8h                           
3671  push    0CEh                            
3674  lea     ax,[bp-8h]                      
3677  push    ax                              
3678  call far M007.M007_GETLOW               ; AP_PM2
367d  mov     bx,ax                           
367f  wait                                    
3680  fld     dword ptr ss:[bx]               
3683  wait                                    
3684  fcom    dword ptr [bp-0Ch]              
3687  wait                                    
3688  fstp    st(0)                           
368a  wait                                    
368b  fstsw   ax                              
368d  sahf                                    
368e  ja      36C8h                           
3690  push    0CEh                            
3693  wait                                    
3694  fld     dword ptr [bp-0Ch]              
3697  sub     sp,4h                           
369a  mov     bx,sp                           
369c  wait                                    
369d  fstp    dword ptr ss:[bx]               
36a0  nop                                     
36a1  wait                                    
36a2  call far M007.M007_PUTVALUE             ; AP_PM2
36a7  push    83h                             
36aa  call far M007.M007_GETSTATE             ; DP_GSP
36af  dec     ax                              
36b0  jne     36C8h                           
36b2  push    2h                              
36b4  wait                                    
36b5  fld     dword ptr [bp-0Ch]              
36b8  sub     sp,8h                           
36bb  mov     bx,sp                           
36bd  wait                                    
36be  fstp    qword ptr ss:[bx]               
36c1  nop                                     
36c2  wait                                    
36c3  call far TIGASEM.SETEHTSETPMVOLTAGE     
36c8  pop     ds                              
36c9  leave                                   
36ca  retf    4h                              
36cd  add     [bx+si],al                      

; ===== SETPM3 =====
36ce  mov     ax,363Fh                        ; segment seg2:0000
36d1  enter   0Ch,0h                          
36d5  push    ds                              
36d6  mov     ds,ax                           
36d8  push    0CFh                            
36db  lea     ax,[bp-4h]                      
36de  push    ax                              
36df  call far M007.M007_GETHIGH              ; AP_PM3
36e4  mov     bx,ax                           
36e6  wait                                    
36e7  fld     dword ptr ss:[bx]               
36ea  wait                                    
36eb  fld     dword ptr [bp+6h]               
36ee  wait                                    
36ef  fst     dword ptr [bp-0Ch]              
36f2  wait                                    
36f3  fcom    st(0),st(1)                     
36f5  wait                                    
36f6  fstp    st(0)                           
36f8  wait                                    
36f9  fstp    st(0)                           
36fb  wait                                    
36fc  fstsw   ax                              
36fe  sahf                                    
36ff  ja      3758h                           
3701  push    0CFh                            
3704  lea     ax,[bp-8h]                      
3707  push    ax                              
3708  call far M007.M007_GETLOW               ; AP_PM3
370d  mov     bx,ax                           
370f  wait                                    
3710  fld     dword ptr ss:[bx]               
3713  wait                                    
3714  fcom    dword ptr [bp-0Ch]              
3717  wait                                    
3718  fstp    st(0)                           
371a  wait                                    
371b  fstsw   ax                              
371d  sahf                                    
371e  ja      3758h                           
3720  push    0CFh                            
3723  wait                                    
3724  fld     dword ptr [bp-0Ch]              
3727  sub     sp,4h                           
372a  mov     bx,sp                           
372c  wait                                    
372d  fstp    dword ptr ss:[bx]               
3730  nop                                     
3731  wait                                    
3732  call far M007.M007_PUTVALUE             ; AP_PM3
3737  push    83h                             
373a  call far M007.M007_GETSTATE             ; DP_GSP
373f  dec     ax                              
3740  jne     3758h                           
3742  push    3h                              
3744  wait                                    
3745  fld     dword ptr [bp-0Ch]              
3748  sub     sp,8h                           
374b  mov     bx,sp                           
374d  wait                                    
374e  fstp    qword ptr ss:[bx]               
3751  nop                                     
3752  wait                                    
3753  call far TIGASEM.SETEHTSETPMVOLTAGE     
3758  pop     ds                              
3759  leave                                   
375a  retf    4h                              
375d  add     [bx+si],al                      

; ===== SETTARGETKV =====
375e  mov     ax,36CFh                        ; segment seg2:0000
3761  enter   0Ch,0h                          
3765  push    ds                              
3766  mov     ds,ax                           
3768  push    18h                             
376a  lea     ax,[bp-4h]                      
376d  push    ax                              
376e  call far M007.M007_GETHIGH              ; AP_TARGETKV
3773  mov     bx,ax                           
3775  wait                                    
3776  fld     dword ptr ss:[bx]               
3779  wait                                    
377a  fld     dword ptr [bp+6h]               
377d  wait                                    
377e  fst     dword ptr [bp-0Ch]              
3781  wait                                    
3782  fcom    st(0),st(1)                     
3784  wait                                    
3785  fstp    st(0)                           
3787  wait                                    
3788  fstp    st(0)                           
378a  wait                                    
378b  fstsw   ax                              
378d  sahf                                    
378e  ja      37C4h                           
3790  push    18h                             
3792  lea     ax,[bp-8h]                      
3795  push    ax                              
3796  call far M007.M007_GETLOW               ; AP_TARGETKV
379b  mov     bx,ax                           
379d  wait                                    
379e  fld     dword ptr ss:[bx]               
37a1  wait                                    
37a2  fcom    dword ptr [bp-0Ch]              
37a5  wait                                    
37a6  fstp    st(0)                           
37a8  wait                                    
37a9  fstsw   ax                              
37ab  sahf                                    
37ac  ja      37C4h                           
37ae  push    18h                             
37b0  wait                                    
37b1  fld     dword ptr [bp-0Ch]              
37b4  sub     sp,4h                           
37b7  mov     bx,sp                           
37b9  wait                                    
37ba  fstp    dword ptr ss:[bx]               
37bd  nop                                     
37be  wait                                    
37bf  call far M007.M007_PUTVALUE             ; AP_TARGETKV
37c4  push    1Ah                             
37c6  push    18h                             
37c8  lea     ax,[bp-0Ch]                     
37cb  push    ax                              
37cc  call far M007.M007_GETVALUE             ; AP_MANUALKV = 24
37d1  mov     bx,ax                           
37d3  push    word ptr ss:[bx+2h]             
37d7  push    word ptr ss:[bx]                
37da  call far M007.M007_PUTVALUE             
37df  push    18h                             
37e1  lea     ax,[bp-8h]                      
37e4  push    ax                              
37e5  call far M007.M007_GETVALUE             ; AP_TARGETKV
37ea  mov     bx,ax                           
37ec  mov     ax,ss:[bx]                      
37ef  mov     dx,ss:[bx+2h]                   
37f3  mov     [64h],ax                        
37f6  mov     [66h],dx                        
37fa  pop     ds                              
37fb  leave                                   
37fc  retf    4h                              
37ff  add     [bx+si],al                      

; ===== SETTARGETCURRENT =====
3800  mov     ax,375Fh                        ; segment seg2:0000
3803  enter   0Ch,0h                          
3807  push    ds                              
3808  mov     ds,ax                           
380a  push    17h                             
380c  lea     ax,[bp-4h]                      
380f  push    ax                              
3810  call far M007.M007_GETHIGH              ; AP_TARGETCURRENT
3815  mov     bx,ax                           
3817  wait                                    
3818  fld     dword ptr ss:[bx]               
381b  wait                                    
381c  fld     dword ptr [bp+6h]               
381f  wait                                    
3820  fst     dword ptr [bp-0Ch]              
3823  wait                                    
3824  fcom    st(0),st(1)                     
3826  wait                                    
3827  fstp    st(0)                           
3829  wait                                    
382a  fstp    st(0)                           
382c  wait                                    
382d  fstsw   ax                              
382f  sahf                                    
3830  ja      3866h                           
3832  push    17h                             
3834  lea     ax,[bp-8h]                      
3837  push    ax                              
3838  call far M007.M007_GETLOW               ; AP_TARGETCURRENT
383d  mov     bx,ax                           
383f  wait                                    
3840  fld     dword ptr ss:[bx]               
3843  wait                                    
3844  fcom    dword ptr [bp-0Ch]              
3847  wait                                    
3848  fstp    st(0)                           
384a  wait                                    
384b  fstsw   ax                              
384d  sahf                                    
384e  ja      3866h                           
3850  push    17h                             
3852  wait                                    
3853  fld     dword ptr [bp-0Ch]              
3856  sub     sp,4h                           
3859  mov     bx,sp                           
385b  wait                                    
385c  fstp    dword ptr ss:[bx]               
385f  nop                                     
3860  wait                                    
3861  call far M007.M007_PUTVALUE             ; AP_TARGETCURRENT
3866  push    1Bh                             
3868  push    17h                             
386a  lea     ax,[bp-0Ch]                     
386d  push    ax                              
386e  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT = 23
3873  mov     bx,ax                           
3875  push    word ptr ss:[bx+2h]             
3879  push    word ptr ss:[bx]                
387c  call far M007.M007_PUTVALUE             
3881  push    0Bh                             
3883  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3888  mov     [bp-4h],ax                      
388b  push    17h                             
388d  lea     ax,[bp-8h]                      
3890  push    ax                              
3891  call far M007.M007_GETVALUE             ; AP_TARGETCURRENT
3896  mov     bx,ax                           
3898  mov     ax,ss:[bx]                      
389b  mov     dx,ss:[bx+2h]                   
389f  mov     bx,[bp-4h]                      
38a2  shl     bx,2h                           
38a5  mov     [bx+24h],ax                     
38a9  mov     [bx+26h],dx                     
38ad  pop     ds                              
38ae  leave                                   
38af  retf    4h                              

; ===== SETUSERMAXCURRENT =====
38b2  mov     ax,3801h                        ; segment seg2:0000
38b5  enter   0A4h,0h                         
38b9  push    ds                              
38ba  mov     ds,ax                           
38bc  push    1Dh                             
38be  lea     ax,[bp-14h]                     
38c1  push    ax                              
38c2  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
38c7  mov     bx,ax                           
38c9  mov     ax,ss:[bx]                      
38cc  mov     dx,ss:[bx+2h]                   
38d0  mov     [bp-4h],ax                      
38d3  mov     [bp-2h],dx                      
38d6  push    0Bh                             
38d8  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
38dd  push    ax                              
38de  call far sub_5698                       
38e3  pop     bx                              
38e4  mov     es,dx                           
38e6  mov     bx,ax                           
38e8  wait                                    
38e9  add     es:[bx+si],al                   

; ----- sub_38ea -----
38ea  fld     dword ptr [bx]                  
38ec  wait                                    
38ed  fst     dword ptr [bp-8h]               
38f0  wait                                    
38f1  fst     dword ptr [bp-9Ch]              
38f5  lea     bx,[bp+6h]                      
38f8  wait                                    
38f9  fld     dword ptr ss:[bx]               
38fc  call far sub_0330                       
3901  wait                                    
3902  fst     dword ptr [bp+6h]               
3905  nop                                     
3906  wait                                    
3907  lea     bx,[bp-4h]                      
390a  wait                                    
390b  fld     dword ptr ss:[bx]               
390e  call far sub_0306                       
3913  wait                                    
3914  fst     dword ptr [bp-0A0h]             
3918  wait                                    
3919  fstp    dword ptr [bp-10h]              
391c  nop                                     
391d  wait                                    
391e  push    19h                             
3920  wait                                    
3921  fld     dword ptr [bp-0A0h]             
3925  sub     sp,4h                           
3928  mov     bx,sp                           
392a  wait                                    
392b  fstp    dword ptr ss:[bx]               
392e  nop                                     
392f  wait                                    
3930  call far M007.M007_PUTVALUE             ; AP_USERMAXCURRENT
3935  wait                                    
3936  fld     dword ptr [bp-0A0h]             
393a  wait                                    
393b  fld     dword ptr [bp-9Ch]              
393f  call far sub_0330                       
3944  wait                                    
3945  fst     dword ptr [bp-0A4h]             
3949  wait                                    
394a  fstp    dword ptr [bp-0Ch]              
394d  nop                                     
394e  wait                                    
394f  push    1Bh                             
3951  wait                                    
3952  fld     dword ptr [bp-0A4h]             
3956  sub     sp,4h                           
3959  mov     bx,sp                           
395b  wait                                    
395c  fstp    dword ptr ss:[bx]               
395f  nop                                     
3960  wait                                    
3961  call far M007.M007_PUTHIGH              ; AP_MANUALCURRENT
3966  push    17h                             
3968  wait                                    
3969  fld     dword ptr [bp-0A4h]             
396d  sub     sp,4h                           
3970  mov     bx,sp                           
3972  wait                                    
3973  fstp    dword ptr ss:[bx]               
3976  nop                                     
3977  wait                                    
3978  call far M007.M007_PUTHIGH              ; AP_TARGETCURRENT
397d  wait                                    
397e  fld     dword ptr [bp-0A4h]             
3982  sub     sp,4h                           
3985  mov     bx,sp                           
3987  wait                                    
3988  fstp    dword ptr ss:[bx]               
398b  nop                                     
398c  wait                                    
398d  call far sub_5610                       
3992  add     sp,4h                           
3995  push    0Bh                             
3997  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
399c  push    ax                              
399d  push    39CAh                           ; segment seg1:0000
39a0  push    5080h                           
39a3  lea     ax,[bp-54h]                     
39a6  push    ss                              
39a7  push    ax                              
39a8  call far USER._WSPRINTF                 ; "Filament%d"
39ad  add     sp,0Ah                          
39b0  push    19h                             
39b2  lea     ax,[bp-98h]                     
39b6  push    ax                              
39b7  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
39bc  mov     bx,ax                           
39be  wait                                    
39bf  fld     dword ptr ss:[bx]               
39c2  wait                                    
39c3  fmul    dword ptr [400h]                ; [ds] = 1000
39c7  call far sub_02c8                       
39cc  push    ax                              
39cd  push    39E2h                           ; segment seg1:0000
39d0  push    30AAh                           
39d3  lea     ax,[bp-94h]                     
39d7  push    ss                              
39d8  push    ax                              
39d9  call far USER._WSPRINTF                 
39de  add     sp,0Ah                          
39e1  push    32D1h                           ; segment seg1:0000
39e4  push    30BAh                           
39e7  lea     ax,[bp-54h]                     
39ea  push    ss                              
39eb  push    ax                              
39ec  lea     ax,[bp-94h]                     
39f0  push    ss                              
39f1  push    ax                              
39f2  call far M007.GETLEOINIFILEPATH         ; "User"
39f7  push    dx                              
39f8  push    ax                              
39f9  call far KERNEL.WRITEPRIVATEPROFILESTRING
39fe  pop     ds                              
39ff  leave                                   
3a00  retf    4h                              
3a03  add     [bx+si],al                      

; ===== SWITCHANODE =====
3a04  mov     ax,38B3h                        ; segment seg2:0000
3a07  enter   8h,0h                           
3a0b  push    ds                              
3a0c  mov     ds,ax                           
3a0e  push    8Ch                             
3a11  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
3a16  cmp     ax,6h                           
3a19  je      3A81h                           
3a1b  push    8Ch                             
3a1e  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
3a23  cmp     ax,8h                           
3a26  je      3A81h                           
3a28  push    word ptr [bp+6h]                
3a2b  call far sub_574a                       
3a30  pop     bx                              
3a31  mov     es,dx                           
3a33  mov     bx,ax                           
3a35  wait                                    
3a36  fld     dword ptr es:[bx]               
3a39  wait                                    
3a3a  fstp    dword ptr [bp-8h]               
3a3d  nop                                     
3a3e  wait                                    
3a3f  push    word ptr [bp-6h]                
3a42  push    word ptr [bp-8h]                
3a45  call far sub_50a0                       
3a4a  add     sp,4h                           
3a4d  wait                                    
3a4e  fld     dword ptr [bp-8h]               
3a51  sub     sp,4h                           
3a54  mov     bx,sp                           
3a56  wait                                    
3a57  fstp    dword ptr ss:[bx]               
3a5a  nop                                     
3a5b  wait                                    
3a5c  call far sub_57a2                       
3a61  add     sp,4h                           
3a64  push    0Ch                             
3a66  push    word ptr [bp+6h]                
3a69  call far M007.M007_PUTSTATE             ; DP_ANODE
3a6e  push    83h                             
3a71  call far M007.M007_GETSTATE             ; DP_GSP
3a76  dec     ax                              
3a77  jne     3A81h                           
3a79  push    word ptr [bp+6h]                
3a7c  call far TIGASEM.SENDANODETYPEGSPMESSAGE
3a81  pop     ds                              
3a82  leave                                   
3a83  retf    2h                              

; ===== SWITCHNEWFILAMENT =====
3a86  mov     ax,3A05h                        ; segment seg2:0000
3a89  push    bp                              
3a8a  mov     bp,sp                           
3a8c  push    ds                              
3a8d  mov     ds,ax                           
3a8f  push    0Dh                             
3a91  push    word ptr [bp+6h]                
3a94  call far M007.M007_PUTSTATE             ; DP_NEWFILAMENT
3a99  cmp     word ptr [bp+6h],1h             
3a9d  jne     3AAFh                           
3a9f  push    0D2h                            
3aa2  push    word ptr [406h]                 
3aa6  push    word ptr [404h]                 ; [ds] f32 here = 0
3aaa  call far M007.M007_PUTVALUE             ; AP_FILAMENT_AGE
3aaf  pop     ds                              
3ab0  leave                                   
3ab1  retf    2h                              

; ===== SWITCHFILAMENT_TYPE =====
3ab4  mov     ax,3A87h                        ; segment seg2:0000
3ab7  enter   1Eh,0h                          
3abb  push    ds                              
3abc  mov     ds,ax                           
3abe  mov     word ptr [bp-2h],1h             
3ac3  push    word ptr [bp+6h]                
3ac6  call far sub_582a                       
3acb  pop     bx                              
3acc  mov     bx,ax                           
3ace  mov     es,dx                           
3ad0  mov     ax,es:[bx]                      
3ad3  mov     dx,es:[bx+2h]                   
3ad7  mov     [bp-6h],ax                      
3ada  mov     [bp-4h],dx                      
3add  push    81h                             
3ae0  lea     ax,[bp-0Eh]                     
3ae3  push    ax                              
3ae4  call far M007.M007_GETVALUE             ; AP_BEAM_CURRENT
3ae9  mov     bx,ax                           
3aeb  mov     ax,ss:[bx]                      
3aee  mov     dx,ss:[bx+2h]                   
3af2  mov     [bp-0Ah],ax                     
3af5  mov     [bp-8h],dx                      
3af8  push    0Bh                             
3afa  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3aff  cmp     ax,4h                           
3b02  je      3B69h                           
3b04  push    0Bh                             
3b06  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3b0b  push    ax                              
3b0c  push    3B37h                           ; segment seg1:0000
3b0f  push    5080h                           
3b12  push    ds                              
3b13  push    818h                            
3b16  call far USER._WSPRINTF                 ; "Filament%d"
3b1b  add     sp,0Ah                          
3b1e  push    19h                             
3b20  lea     ax,[bp-12h]                     
3b23  push    ax                              
3b24  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
3b29  mov     bx,ax                           
3b2b  wait                                    
3b2c  fld     dword ptr ss:[bx]               
3b2f  wait                                    
3b30  fmul    dword ptr [400h]                ; [ds] = 1000
3b34  call far sub_02c8                       
3b39  push    ax                              
3b3a  push    3B4Dh                           ; segment seg1:0000
3b3d  push    30AAh                           
3b40  push    ds                              
3b41  push    858h                            
3b44  call far USER._WSPRINTF                 
3b49  add     sp,0Ah                          
3b4c  push    3BDFh                           ; segment seg1:0000
3b4f  push    30BAh                           
3b52  push    ds                              
3b53  push    818h                            
3b56  push    ds                              
3b57  push    858h                            
3b5a  call far M007.GETLEOINIFILEPATH         ; "User"
3b5f  push    dx                              
3b60  push    ax                              
3b61  call far KERNEL.WRITEPRIVATEPROFILESTRING
3b66  mov     [bp-2h],ax                      
3b69  push    0Bh                             
3b6b  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3b70  mov     [bp-0Eh],ax                     
3b73  push    0D2h                            
3b76  lea     ax,[bp-12h]                     
3b79  push    ax                              
3b7a  call far M007.M007_GETVALUE             ; AP_FILAMENT_AGE
3b7f  mov     bx,ax                           
3b81  mov     ax,ss:[bx]                      
3b84  mov     dx,ss:[bx+2h]                   
3b88  mov     bx,[bp-0Eh]                     
3b8b  shl     bx,2h                           
3b8e  mov     [bx+44h],ax                     
3b92  mov     [bx+46h],dx                     
3b96  push    0D2h                            
3b99  mov     bx,[bp+6h]                      
3b9c  shl     bx,2h                           
3b9f  push    word ptr [bx+46h]               
3ba3  push    word ptr [bx+44h]               
3ba7  call far M007.M007_PUTVALUE             ; AP_FILAMENT_AGE
3bac  push    1Bh                             
3bae  wait                                    
3baf  fld     dword ptr [bp-6h]               
3bb2  wait                                    
3bb3  fstp    dword ptr [bp-1Ah]              
3bb6  nop                                     
3bb7  wait                                    
3bb8  push    word ptr [bp-18h]               
3bbb  push    word ptr [bp-1Ah]               
3bbe  call far M007.M007_PUTHIGH              ; AP_MANUALCURRENT
3bc3  push    17h                             
3bc5  wait                                    
3bc6  fld     dword ptr [bp-1Ah]              
3bc9  sub     sp,4h                           
3bcc  mov     bx,sp                           
3bce  wait                                    
3bcf  fstp    dword ptr ss:[bx]               
3bd2  nop                                     
3bd3  wait                                    
3bd4  call far M007.M007_PUTHIGH              ; AP_TARGETCURRENT
3bd9  push    word ptr [bp+6h]                
3bdc  call far sub_58fe                       
3be1  pop     bx                              
3be2  push    81h                             
3be5  lea     ax,[bp-16h]                     
3be8  push    ax                              
3be9  call far M007.M007_GETVALUE             ; AP_BEAM_CURRENT
3bee  mov     bx,ax                           
3bf0  wait                                    
3bf1  fld     dword ptr ss:[bx]               
3bf4  wait                                    
3bf5  fld     dword ptr [bp-0Ah]              
3bf8  wait                                    
3bf9  fst     dword ptr [bp-1Eh]              
3bfc  wait                                    
3bfd  fcom    st(0),st(1)                     
3bff  wait                                    
3c00  fstp    st(0)                           
3c02  wait                                    
3c03  fstp    st(0)                           
3c05  wait                                    
3c06  fstsw   ax                              
3c08  sahf                                    
3c09  jae     3C22h                           
3c0b  push    81h                             
3c0e  wait                                    
3c0f  fld     dword ptr [bp-1Eh]              
3c12  sub     sp,4h                           
3c15  mov     bx,sp                           
3c17  wait                                    
3c18  fstp    dword ptr ss:[bx]               
3c1b  nop                                     
3c1c  wait                                    
3c1d  call far M007.M007_PUTVALUE             ; AP_BEAM_CURRENT
3c22  push    word ptr [bp-4h]                
3c25  push    word ptr [bp-6h]                
3c28  call far sub_5610                       
3c2d  add     sp,4h                           
3c30  push    0Bh                             
3c32  push    word ptr [bp+6h]                
3c35  call far M007.M007_PUTSTATE             ; DP_FILAMENT_TYPE
3c3a  push    0Bh                             
3c3c  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3c41  cmp     ax,4h                           
3c44  je      3C4Ch                           
3c46  cmp     word ptr [bp-2h],0h             
3c4a  jne     3C4Fh                           
3c4c  jmp     3D1Bh                           
3c4f  mov     ax,[404h]                       
3c52  mov     dx,[406h]                       
3c56  mov     [bp-1Eh],ax                     
3c59  mov     [bp-1Ch],dx                     
3c5c  push    0Bh                             
3c5e  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3c63  push    ax                              
3c64  push    3C77h                           ; segment seg1:0000
3c67  push    5080h                           
3c6a  push    ds                              
3c6b  push    818h                            
3c6e  call far USER._WSPRINTF                 ; "Filament%d"
3c73  add     sp,0Ah                          
3c76  push    3C81h                           ; segment seg1:0000
3c79  push    30BAh                           
3c7c  push    ds                              
3c7d  push    818h                            
3c80  push    3CA6h                           ; segment seg1:0000
3c83  push    508Ch                           
3c86  push    ds                              
3c87  push    858h                            
3c8a  push    40h                             
3c8c  call far M007.GETLEOINIFILEPATH         ; "User"
3c91  push    dx                              
3c92  push    ax                              
3c93  call far KERNEL.GETPRIVATEPROFILESTRING 
3c98  mov     [bp-2h],ax                      
3c9b  or      ax,ax                           
3c9d  je      3CBDh                           
3c9f  push    ds                              
3ca0  push    858h                            
3ca3  call far sub_01f2                       
3ca8  add     sp,4h                           
3cab  mov     [bp-1Ah],ax                     
3cae  wait                                    
3caf  fild    word ptr [bp-1Ah]               
3cb2  wait                                    
3cb3  fmul    dword ptr [408h]                ; [ds] = 0.001
3cb7  wait                                    
3cb8  fstp    dword ptr [bp-1Eh]              
3cbb  nop                                     
3cbc  wait                                    
3cbd  lea     bx,[bp-1Eh]                     
3cc0  wait                                    
3cc1  fld     dword ptr ss:[bx]               
3cc4  wait                                    
3cc5  fst     dword ptr [bp-12h]              
3cc8  wait                                    
3cc9  fcom    dword ptr [404h]                ; [ds] = 0
3ccd  wait                                    
3cce  fstp    st(0)                           
3cd0  wait                                    
3cd1  fstsw   ax                              
3cd3  sahf                                    
3cd4  jbe     3D1Bh                           
3cd6  push    19h                             
3cd8  lea     ax,[bp-1Ah]                     
3cdb  push    ax                              
3cdc  call far M007.M007_GETHIGH              ; AP_USERMAXCURRENT
3ce1  mov     bx,ax                           
3ce3  wait                                    
3ce4  fld     dword ptr ss:[bx]               
3ce7  wait                                    
3ce8  fcom    dword ptr [bp-12h]              
3ceb  wait                                    
3cec  fstp    st(0)                           
3cee  wait                                    
3cef  fstsw   ax                              
3cf1  sahf                                    
3cf2  jae     3D0Eh                           
3cf4  push    19h                             
3cf6  lea     ax,[bp-16h]                     
3cf9  push    ax                              
3cfa  call far M007.M007_GETHIGH              ; AP_USERMAXCURRENT
3cff  mov     bx,ax                           
3d01  mov     ax,ss:[bx]                      
3d04  mov     dx,ss:[bx+2h]                   
3d08  mov     [bp-1Eh],ax                     
3d0b  mov     [bp-1Ch],dx                     
3d0e  push    19h                             
3d10  push    word ptr [bp-1Ch]               
3d13  push    word ptr [bp-1Eh]               
3d16  call far M007.M007_PUTVALUE             ; AP_USERMAXCURRENT
3d1b  push    83h                             
3d1e  call far M007.M007_GETSTATE             ; DP_GSP
3d23  dec     ax                              
3d24  jne     3D2Eh                           
3d26  push    word ptr [bp+6h]                
3d29  call far TIGASEM.CHANGEFILTYPEGSPMESSAGE
3d2e  push    1Bh                             
3d30  mov     bx,[bp+6h]                      
3d33  shl     bx,2h                           
3d36  push    word ptr [bx+26h]               
3d3a  push    word ptr [bx+24h]               
3d3e  call far M007.M007_PUTVALUE             ; AP_MANUALCURRENT
3d43  pop     ds                              
3d44  leave                                   
3d45  retf    2h                              

; ===== SWITCHSCINT =====
3d48  mov     ax,3AB5h                        ; segment seg2:0000
3d4b  push    bp                              
3d4c  mov     bp,sp                           
3d4e  push    ds                              
3d4f  mov     ds,ax                           
3d51  push    83h                             
3d54  call far M007.M007_GETSTATE             ; DP_GSP
3d59  dec     ax                              
3d5a  jne     3D64h                           
3d5c  push    word ptr [bp+6h]                
3d5f  call far TIGASEM.SETEHTSETSCINTTOGGLE   
3d64  cmp     word ptr [bp+6h],3h             
3d68  jne     3D6Fh                           
3d6a  mov     word ptr [bp+6h],0h             
3d6f  cmp     word ptr [bp+6h],2h             
3d73  jne     3D7Ah                           
3d75  mov     word ptr [bp+6h],0h             
3d7a  push    84h                             
3d7d  push    word ptr [bp+6h]                
3d80  call far M007.M007_PUTSTATE             ; DP_SCINT
3d85  pop     ds                              
3d86  leave                                   
3d87  retf    2h                              

; ===== SETMANUALKV =====
3d8a  mov     ax,3D49h                        ; segment seg2:0000
3d8d  enter   1Eh,0h                          
3d91  push    ds                              
3d92  mov     ds,ax                           
3d94  push    0Bh                             
3d96  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3d9b  mov     [bp-2h],ax                      
3d9e  push    1Dh                             
3da0  lea     ax,[bp-12h]                     
3da3  push    ax                              
3da4  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
3da9  mov     bx,ax                           
3dab  mov     ax,ss:[bx]                      
3dae  mov     dx,ss:[bx+2h]                   
3db2  mov     [bp-6h],ax                      
3db5  mov     [bp-4h],dx                      
3db8  push    1Ch                             
3dba  lea     ax,[bp-16h]                     
3dbd  push    ax                              
3dbe  call far M007.M007_GETVALUE             ; AP_ACTUALKV
3dc3  mov     bx,ax                           
3dc5  mov     ax,ss:[bx]                      
3dc8  mov     dx,ss:[bx+2h]                   
3dcc  mov     [bp-0Ah],ax                     
3dcf  mov     [bp-8h],dx                      
3dd2  push    1A6h                            
3dd5  lea     ax,[bp-1Ah]                     
3dd8  push    ax                              
3dd9  call far M007.M007_GETVALUE             ; AP_USER_MAX_EHT
3dde  mov     bx,ax                           
3de0  wait                                    
3de1  fld     dword ptr ss:[bx]               
3de4  lea     bx,[bp+6h]                      
3de7  wait                                    
3de8  fcom    dword ptr ss:[bx]               
3deb  wait                                    
3dec  fstp    st(0)                           
3dee  wait                                    
3def  fstsw   ax                              
3df1  sahf                                    
3df2  jae     3E0Fh                           
3df4  push    1A6h                            
3df7  lea     ax,[bp-1Eh]                     
3dfa  push    ax                              
3dfb  call far M007.M007_GETVALUE             ; AP_USER_MAX_EHT
3e00  mov     bx,ax                           
3e02  mov     ax,ss:[bx]                      
3e05  mov     dx,ss:[bx+2h]                   
3e09  mov     [bp+6h],ax                      
3e0c  mov     [bp+8h],dx                      
3e0f  push    1Ah                             
3e11  wait                                    
3e12  fld     dword ptr [bp+6h]               
3e15  wait                                    
3e16  fst     dword ptr [bp-0Eh]              
3e19  wait                                    
3e1a  fstp    dword ptr [bp-1Eh]              
3e1d  nop                                     
3e1e  wait                                    
3e1f  push    word ptr [bp-1Ch]               
3e22  push    word ptr [bp-1Eh]               
3e25  call far M007.M007_PUTVALUE             ; AP_MANUALKV
3e2a  push    0Eh                             
3e2c  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
3e31  dec     ax                              
3e32  je      3E37h                           
3e34  jmp     3ECAh                           
3e37  push    0E0h                            
3e3a  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
3e3f  dec     ax                              
3e40  jne     3E59h                           
3e42  wait                                    
3e43  fld     dword ptr [bp-1Eh]              
3e46  sub     sp,4h                           
3e49  mov     bx,sp                           
3e4b  wait                                    
3e4c  fstp    dword ptr ss:[bx]               
3e4f  nop                                     
3e50  wait                                    
3e51  call far sub_311a                       
3e56  add     sp,4h                           
3e59  mov     ax,[bp-2h]                      
3e5c  jmp     3EADh                           
3e5e  push    word ptr [bp-0Ch]               
3e61  push    word ptr [bp-0Eh]               
3e64  push    word ptr [bp-8h]                
3e67  push    word ptr [bp-0Ah]               
3e6a  call far sub_7926                       
3e6f  add     sp,8h                           
3e72  jmp     3ECAh                           
3e74  push    word ptr [bp-0Ch]               
3e77  push    word ptr [bp-0Eh]               
3e7a  push    word ptr [bp-8h]                
3e7d  push    word ptr [bp-0Ah]               
3e80  call far sub_86bc                       
3e85  jmp     3E6Fh                           
3e87  push    word ptr [bp-0Ch]               
3e8a  push    word ptr [bp-0Eh]               
3e8d  push    word ptr [bp-8h]                
3e90  push    word ptr [bp-0Ah]               
3e93  call far sub_8046                       
3e98  jmp     3E6Fh                           
3e9a  push    word ptr [bp-0Ch]               
3e9d  push    word ptr [bp-0Eh]               
3ea0  push    word ptr [bp-8h]                
3ea3  push    word ptr [bp-0Ah]               
3ea6  call far sub_7282                       
3eab  jmp     3E6Fh                           
3ead  cmp     ax,7h                           
3eb0  ja      3ECAh                           
3eb2  add     ax,ax                           
3eb4  xchg    ax,bx                           
3eb5  jmp     word ptr cs:[bx+3EBAh]          
3eba  call    743Eh:5E3Eh                     
3ebf  xchg    di,ds:[3ECAh]                   
3ec4  call    9A3Eh:9A3Eh                     
3ec9  push    1Ah                             
3ecc  lea     ax,[bp-1Eh]                     
3ecf  push    ax                              
3ed0  call far M007.M007_GETVALUE             ; AP_MANUALKV
3ed5  mov     bx,ax                           
3ed7  mov     ax,ss:[bx]                      
3eda  mov     dx,ss:[bx+2h]                   
3ede  mov     [64h],ax                        
3ee1  mov     [66h],dx                        
3ee5  pop     ds                              
3ee6  leave                                   
3ee7  retf    4h                              

; ===== SETMANUALCURRENT =====
3eea  mov     ax,3D8Bh                        ; segment seg2:0000
3eed  enter   0Eh,0h                          
3ef1  push    ds                              
3ef2  mov     ds,ax                           
3ef4  push    0Bh                             
3ef6  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3efb  mov     [bp-2h],ax                      
3efe  push    1Dh                             
3f00  lea     ax,[bp-0Eh]                     
3f03  push    ax                              
3f04  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
3f09  mov     bx,ax                           
3f0b  mov     ax,ss:[bx]                      
3f0e  mov     dx,ss:[bx+2h]                   
3f12  mov     [bp-6h],ax                      
3f15  mov     [bp-4h],dx                      
3f18  push    1Bh                             
3f1a  wait                                    
3f1b  fld     dword ptr [bp+6h]               
3f1e  wait                                    
3f1f  fstp    dword ptr [bp-0Ah]              
3f22  nop                                     
3f23  wait                                    
3f24  push    word ptr [bp-8h]                
3f27  push    word ptr [bp-0Ah]               
3f2a  call far M007.M007_PUTVALUE             ; AP_MANUALCURRENT
3f2f  push    0Eh                             
3f31  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
3f36  dec     ax                              
3f37  jne     3FB8h                           
3f39  mov     ax,[bp-2h]                      
3f3c  jmp     3F9Bh                           
3f3e  push    word ptr [bp-8h]                
3f41  push    word ptr [bp-0Ah]               
3f44  push    word ptr [bp-4h]                
3f47  push    word ptr [bp-6h]                
3f4a  call far sub_7b0c                       
3f4f  add     sp,8h                           
3f52  jmp     3FB8h                           
3f54  push    word ptr [bp-8h]                
3f57  push    word ptr [bp-0Ah]               
3f5a  push    word ptr [bp-4h]                
3f5d  push    word ptr [bp-6h]                
3f60  call far sub_88a2                       
3f65  jmp     3F4Fh                           
3f67  push    word ptr [bp-8h]                
3f6a  push    word ptr [bp-0Ah]               
3f6d  push    word ptr [bp-4h]                
3f70  push    word ptr [bp-6h]                
3f73  call far sub_822c                       
3f78  jmp     3F4Fh                           
3f7a  push    83h                             
3f7d  call far M007.M007_GETSTATE             ; DP_GSP
3f82  dec     ax                              
3f83  jne     3FB8h                           
3f85  wait                                    
3f86  fld     dword ptr [bp+6h]               
3f89  sub     sp,8h                           
3f8c  mov     bx,sp                           
3f8e  wait                                    
3f8f  fstp    qword ptr ss:[bx]               
3f92  nop                                     
3f93  wait                                    
3f94  call far TIGASEM.SETFILCURRENT          
3f99  jmp     3FB8h                           
3f9b  cmp     ax,7h                           
3f9e  ja      3FB8h                           
3fa0  add     ax,ax                           
3fa2  xchg    ax,bx                           
3fa3  jmp     word ptr cs:[bx+3FA8h]          
3fa8  jp      3FE9h                           
3faa  aas                                     
3fac  push    sp                              
3fad  aas                                     
3fae  aas                                     
3fb0  mov     ax,7A3Fh                        
3fb3  aas                                     
3fb4  jp      3FF5h                           
3fb6  jp      3FF7h                           
3fb8  push    1Bh                             
3fba  lea     ax,[bp-0Eh]                     
3fbd  push    ax                              
3fbe  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT = 31295
3fc3  mov     bx,ax                           
3fc5  mov     ax,ss:[bx]                      
3fc8  mov     dx,ss:[bx+2h]                   
3fcc  mov     bx,[bp-2h]                      
3fcf  shl     bx,2h                           
3fd2  mov     [bx+24h],ax                     
3fd6  mov     [bx+26h],dx                     
3fda  pop     ds                              
3fdb  leave                                   
3fdc  retf    4h                              
3fdf  add     [bx+si],al                      

; ===== DOCOMMANDSHUTDOWN =====
3fe0  mov     ax,3EEBh                        ; segment seg2:0000
3fe3  enter   1Ah,0h                          
3fe7  push    ds                              
3fe8  mov     ds,ax                           
3fea  call far sub_59b4                       
3fef  push    0Bh                             
3ff1  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
3ff6  mov     [bp-2h],ax                      
3ff9  push    1Dh                             
3ffb  lea     ax,[bp-16h]                     
3ffe  push    ax                              
3fff  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
4004  mov     bx,ax                           
4006  mov     ax,ss:[bx]                      
4009  mov     dx,ss:[bx+2h]                   
400d  mov     [bp-12h],ax                     
4010  mov     [bp-10h],dx                     
4013  push    1Ch                             
4015  lea     ax,[bp-1Ah]                     
4018  push    ax                              
4019  call far M007.M007_GETVALUE             ; AP_ACTUALKV
401e  mov     bx,ax                           
4020  mov     ax,ss:[bx]                      
4023  mov     dx,ss:[bx+2h]                   
4027  mov     [bp-0Eh],ax                     
402a  mov     [bp-0Ch],dx                     
402d  call far sub_5c9a                       
4032  push    83h                             
4035  call far M007.M007_GETSTATE             ; DP_GSP
403a  dec     ax                              
403b  jne     4044h                           
403d  push    0h                              
403f  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
4044  mov     ax,[404h]                       
4047  mov     dx,[406h]                       
404b  mov     [bp-6h],ax                      
404e  mov     [bp-4h],dx                      
4051  mov     [bp-0Ah],ax                     
4054  mov     [bp-8h],dx                      
4057  mov     ax,[bp-2h]                      
405a  jmp     40DBh                           
405c  push    word ptr [bp-8h]                
405f  push    word ptr [bp-0Ah]               
4062  push    word ptr [bp-4h]                
4065  push    word ptr [bp-6h]                
4068  push    word ptr [bp-0Ch]               
406b  push    word ptr [bp-0Eh]               
406e  push    word ptr [bp-10h]               
4071  push    word ptr [bp-12h]               
4074  call far sub_7468                       
4079  add     sp,10h                          
407c  jmp     40F8h                           
407e  push    word ptr [bp-8h]                
4081  push    word ptr [bp-0Ah]               
4084  push    word ptr [bp-4h]                
4087  push    word ptr [bp-6h]                
408a  push    word ptr [bp-0Ch]               
408d  push    word ptr [bp-0Eh]               
4090  push    word ptr [bp-10h]               
4093  push    word ptr [bp-12h]               
4096  call far sub_82a8                       
409b  jmp     4079h                           
409d  push    word ptr [bp-8h]                
40a0  push    word ptr [bp-0Ah]               
40a3  push    word ptr [bp-4h]                
40a6  push    word ptr [bp-6h]                
40a9  push    word ptr [bp-0Ch]               
40ac  push    word ptr [bp-0Eh]               
40af  push    word ptr [bp-10h]               
40b2  push    word ptr [bp-12h]               
40b5  call far sub_7c32                       
40ba  jmp     4079h                           
40bc  push    word ptr [bp-8h]                
40bf  push    word ptr [bp-0Ah]               
40c2  push    word ptr [bp-4h]                
40c5  push    word ptr [bp-6h]                
40c8  push    word ptr [bp-0Ch]               
40cb  push    word ptr [bp-0Eh]               
40ce  push    word ptr [bp-10h]               
40d1  push    word ptr [bp-12h]               
40d4  call far sub_6f48                       
40d9  jmp     4079h                           
40db  cmp     ax,7h                           
40de  ja      40F8h                           
40e0  add     ax,ax                           
40e2  xchg    ax,bx                           
40e3  jmp     word ptr cs:[bx+40E8h]          
40e8  mov     sp,5C40h                        
40eb  inc     ax                              
40ec  jle     412Eh                           
40ee  popf                                    
40ef  inc     ax                              
40f0  clc                                     
40f1  inc     ax                              
40f2  mov     sp,0BC40h                       
40f5  inc     ax                              
40f6  mov     sp,6A40h                        
40f9  push    cs                              
40fa  push    3h                              
40fc  call far M007.M007_PUTSTATE             ; DP_C1WOBBLE
4101  push    1h                              
4103  call far M200.EOSTANDBY                 
4108  call far sub_66c6                       
410d  pop     ds                              
410e  leave                                   
410f  retf                                    

; ===== DOCOMMANDMANUAL =====
4110  mov     ax,3FE1h                        ; segment seg2:0000
4113  enter   0Ch,0h                          
4117  push    ds                              
4118  mov     ds,ax                           
411a  call far DOCOMMANDBEAM_ON               
411f  pop     ds                              
4120  leave                                   
4121  retf                                    

; ===== DOCOMMANDSTANDBY =====
4122  mov     ax,4111h                        ; segment seg2:0000
4125  enter   1Ah,0h                          
4129  push    ds                              
412a  mov     ds,ax                           
412c  call far sub_59b4                       
4131  push    0Bh                             
4133  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
4138  mov     [bp-2h],ax                      
413b  push    1Dh                             
413d  lea     ax,[bp-16h]                     
4140  push    ax                              
4141  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
4146  mov     bx,ax                           
4148  mov     ax,ss:[bx]                      
414b  mov     dx,ss:[bx+2h]                   
414f  mov     [bp-12h],ax                     
4152  mov     [bp-10h],dx                     
4155  push    1Ch                             
4157  lea     ax,[bp-1Ah]                     
415a  push    ax                              
415b  call far M007.M007_GETVALUE             ; AP_ACTUALKV
4160  mov     bx,ax                           
4162  mov     ax,ss:[bx]                      
4165  mov     dx,ss:[bx+2h]                   
4169  mov     [bp-0Eh],ax                     
416c  mov     [bp-0Ch],dx                     
416f  call far sub_5c9a                       
4174  push    83h                             
4177  call far M007.M007_GETSTATE             ; DP_GSP
417c  dec     ax                              
417d  jne     4186h                           
417f  push    7h                              
4181  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
4186  mov     ax,[404h]                       
4189  mov     dx,[406h]                       
418d  mov     [bp-0Ah],ax                     
4190  mov     [bp-8h],dx                      
4193  mov     ax,[bp-2h]                      
4196  jmp     4290h                           
4199  push    word ptr [bp-8h]                
419c  push    word ptr [bp-0Ah]               
419f  wait                                    
41a0  fld     dword ptr [bp-12h]              
41a3  wait                                    
41a4  fst     dword ptr [bp-1Ah]              
41a7  wait                                    
41a8  fmul    dword ptr [414h]                ; [ds] = 0.8
41ac  wait                                    
41ad  fldz                                    
41af  call far sub_0306                       
41b4  wait                                    
41b5  fstp    dword ptr [bp-6h]               
41b8  nop                                     
41b9  wait                                    
41ba  push    word ptr [bp-4h]                
41bd  push    word ptr [bp-6h]                
41c0  push    word ptr [bp-0Ch]               
41c3  push    word ptr [bp-0Eh]               
41c6  wait                                    
41c7  fld     dword ptr [bp-1Ah]              
41ca  sub     sp,4h                           
41cd  mov     bx,sp                           
41cf  wait                                    
41d0  fstp    dword ptr ss:[bx]               
41d3  nop                                     
41d4  wait                                    
41d5  call far sub_7468                       
41da  add     sp,10h                          
41dd  jmp     42ADh                           
41e0  push    word ptr [bp-8h]                
41e3  push    word ptr [bp-0Ah]               
41e6  wait                                    
41e7  fld     dword ptr [bp-12h]              
41ea  wait                                    
41eb  fst     dword ptr [bp-1Ah]              
41ee  wait                                    
41ef  fmul    dword ptr [414h]                ; [ds] = 0.8
41f3  wait                                    
41f4  fldz                                    
41f6  call far sub_0306                       
41fb  wait                                    
41fc  fstp    dword ptr [bp-6h]               
41ff  nop                                     
4200  wait                                    
4201  push    word ptr [bp-4h]                
4204  push    word ptr [bp-6h]                
4207  push    word ptr [bp-0Ch]               
420a  push    word ptr [bp-0Eh]               
420d  wait                                    
420e  fld     dword ptr [bp-1Ah]              
4211  sub     sp,4h                           
4214  mov     bx,sp                           
4216  wait                                    
4217  fstp    dword ptr ss:[bx]               
421a  nop                                     
421b  wait                                    
421c  call far sub_82a8                       
4221  jmp     41DAh                           
4223  push    word ptr [bp-8h]                
4226  push    word ptr [bp-0Ah]               
4229  wait                                    
422a  fld     dword ptr [bp-12h]              
422d  wait                                    
422e  fst     dword ptr [bp-1Ah]              
4231  wait                                    
4232  fmul    dword ptr [414h]                ; [ds] = 0.8
4236  wait                                    
4237  fldz                                    
4239  call far sub_0306                       
423e  wait                                    
423f  fstp    dword ptr [bp-6h]               
4242  nop                                     
4243  wait                                    
4244  push    word ptr [bp-4h]                
4247  push    word ptr [bp-6h]                
424a  push    word ptr [bp-0Ch]               
424d  push    word ptr [bp-0Eh]               
4250  wait                                    
4251  fld     dword ptr [bp-1Ah]              
4254  sub     sp,4h                           
4257  mov     bx,sp                           
4259  wait                                    
425a  fstp    dword ptr ss:[bx]               
425d  nop                                     
425e  wait                                    
425f  call far sub_7c32                       
4264  jmp     41DAh                           
4267  mov     ax,[404h]                       
426a  mov     dx,[406h]                       
426e  mov     [bp-6h],ax                      
4271  mov     [bp-4h],dx                      
4274  push    word ptr [bp-8h]                
4277  push    word ptr [bp-0Ah]               
427a  push    dx                              
427b  push    ax                              
427c  push    word ptr [bp-0Ch]               
427f  push    word ptr [bp-0Eh]               
4282  push    word ptr [bp-10h]               
4285  push    word ptr [bp-12h]               
4288  call far sub_6f48                       
428d  jmp     41DAh                           
4290  cmp     ax,7h                           
4293  ja      42ADh                           
4295  add     ax,ax                           
4297  xchg    ax,bx                           
4298  jmp     word ptr cs:[bx+429Dh]          
429d  inc     dx                              
429f  cwd                                     
42a0  inc     cx                              
42a1  loopne  42E4h                           
42a3  and     ax,[bp+si-53h]                  
42a6  inc     dx                              
42a7  inc     dx                              
42a9  inc     dx                              
42ab  inc     dx                              
42ad  push    0Eh                             
42af  push    4h                              
42b1  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 4
42b6  push    1h                              
42b8  call far M200.EOSTANDBY                 
42bd  pop     ds                              
42be  leave                                   
42bf  retf                                    

; ===== DOCOMMANDBEAM_OFF =====
42c0  mov     ax,4123h                        ; segment seg2:0000
42c3  enter   1Ah,0h                          
42c7  push    ds                              
42c8  mov     ds,ax                           
42ca  call far sub_59b4                       
42cf  push    0Bh                             
42d1  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
42d6  mov     [bp-2h],ax                      
42d9  push    1Dh                             
42db  lea     ax,[bp-16h]                     
42de  push    ax                              
42df  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
42e4  mov     bx,ax                           
42e6  mov     ax,ss:[bx]                      
42e9  mov     dx,ss:[bx+2h]                   
42ed  mov     [bp-12h],ax                     
42f0  mov     [bp-10h],dx                     
42f3  push    1Ch                             
42f5  lea     ax,[bp-1Ah]                     
42f8  push    ax                              
42f9  call far M007.M007_GETVALUE             ; AP_ACTUALKV
42fe  mov     bx,ax                           
4300  mov     ax,ss:[bx]                      
4303  mov     dx,ss:[bx+2h]                   
4307  mov     [bp-0Eh],ax                     
430a  mov     [bp-0Ch],dx                     
430d  call far sub_5c9a                       
4312  push    83h                             
4315  call far M007.M007_GETSTATE             ; DP_GSP
431a  dec     ax                              
431b  jne     4324h                           
431d  push    9h                              
431f  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
4324  mov     ax,[404h]                       
4327  mov     dx,[406h]                       
432b  mov     [bp-6h],ax                      
432e  mov     [bp-4h],dx                      
4331  mov     [bp-0Ah],ax                     
4334  mov     [bp-8h],dx                      
4337  mov     ax,[bp-2h]                      
433a  jmp     43BBh                           
433c  push    word ptr [bp-8h]                
433f  push    word ptr [bp-0Ah]               
4342  push    word ptr [bp-4h]                
4345  push    word ptr [bp-6h]                
4348  push    word ptr [bp-0Ch]               
434b  push    word ptr [bp-0Eh]               
434e  push    word ptr [bp-10h]               
4351  push    word ptr [bp-12h]               
4354  call far sub_7468                       
4359  add     sp,10h                          
435c  jmp     43D8h                           
435e  push    word ptr [bp-8h]                
4361  push    word ptr [bp-0Ah]               
4364  push    word ptr [bp-4h]                
4367  push    word ptr [bp-6h]                
436a  push    word ptr [bp-0Ch]               
436d  push    word ptr [bp-0Eh]               
4370  push    word ptr [bp-10h]               
4373  push    word ptr [bp-12h]               
4376  call far sub_82a8                       
437b  jmp     4359h                           
437d  push    word ptr [bp-8h]                
4380  push    word ptr [bp-0Ah]               
4383  push    word ptr [bp-4h]                
4386  push    word ptr [bp-6h]                
4389  push    word ptr [bp-0Ch]               
438c  push    word ptr [bp-0Eh]               
438f  push    word ptr [bp-10h]               
4392  push    word ptr [bp-12h]               
4395  call far sub_7c32                       
439a  jmp     4359h                           
439c  push    word ptr [bp-8h]                
439f  push    word ptr [bp-0Ah]               
43a2  push    word ptr [bp-4h]                
43a5  push    word ptr [bp-6h]                
43a8  push    word ptr [bp-0Ch]               
43ab  push    word ptr [bp-0Eh]               
43ae  push    word ptr [bp-10h]               
43b1  push    word ptr [bp-12h]               
43b4  call far sub_6f48                       
43b9  jmp     4359h                           
43bb  cmp     ax,7h                           
43be  ja      43D8h                           
43c0  add     ax,ax                           
43c2  xchg    ax,bx                           
43c3  jmp     word ptr cs:[bx+43C8h]          
43c8  pushf                                   
43c9  inc     bx                              
43ca  cmp     al,43h                          
43cc  pop     si                              
43cd  inc     bx                              
43ce  jge     4413h                           
43d0  fadd    dword ptr [bp+di-64h]           
43d3  inc     bx                              
43d4  pushf                                   
43d5  inc     bx                              
43d6  pushf                                   
43d7  inc     bx                              
43d8  push    0Eh                             
43da  push    5h                              
43dc  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 5
43e1  push    1h                              
43e3  call far M200.EOSTANDBY                 
43e8  pop     ds                              
43e9  leave                                   
43ea  retf                                    
43eb  add     [bx+si],al                      

; ===== DOCOMMANDEHT_OFF =====
43ec  mov     ax,42C1h                        ; segment seg2:0000
43ef  enter   16h,0h                          
43f3  push    ds                              
43f4  mov     ds,ax                           
43f6  call far sub_59b4                       
43fb  push    0Bh                             
43fd  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
4402  mov     [bp-2h],ax                      
4405  push    1Dh                             
4407  lea     ax,[bp-12h]                     
440a  push    ax                              
440b  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
4410  mov     bx,ax                           
4412  mov     ax,ss:[bx]                      
4415  mov     dx,ss:[bx+2h]                   
4419  mov     [bp-0Eh],ax                     
441c  mov     [bp-0Ch],dx                     
441f  push    1Ch                             
4421  lea     ax,[bp-16h]                     
4424  push    ax                              
4425  call far M007.M007_GETVALUE             ; AP_ACTUALKV
442a  mov     bx,ax                           
442c  mov     ax,ss:[bx]                      
442f  mov     dx,ss:[bx+2h]                   
4433  mov     [bp-0Ah],ax                     
4436  mov     [bp-8h],dx                      
4439  call far sub_5c9a                       
443e  mov     ax,[404h]                       
4441  mov     dx,[406h]                       
4445  mov     [bp-6h],ax                      
4448  mov     [bp-4h],dx                      
444b  push    83h                             
444e  call far M007.M007_GETSTATE             ; DP_GSP
4453  dec     ax                              
4454  jne     445Dh                           
4456  push    7h                              
4458  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
445d  mov     ax,[bp-2h]                      
4460  jmp     44B1h                           
4462  push    word ptr [bp-4h]                
4465  push    word ptr [bp-6h]                
4468  push    word ptr [bp-8h]                
446b  push    word ptr [bp-0Ah]               
446e  call far sub_7926                       
4473  add     sp,8h                           
4476  jmp     44CEh                           
4478  push    word ptr [bp-4h]                
447b  push    word ptr [bp-6h]                
447e  push    word ptr [bp-8h]                
4481  push    word ptr [bp-0Ah]               
4484  call far sub_86bc                       
4489  jmp     4473h                           
448b  push    word ptr [bp-4h]                
448e  push    word ptr [bp-6h]                
4491  push    word ptr [bp-8h]                
4494  push    word ptr [bp-0Ah]               
4497  call far sub_8046                       
449c  jmp     4473h                           
449e  push    word ptr [bp-4h]                
44a1  push    word ptr [bp-6h]                
44a4  push    word ptr [bp-8h]                
44a7  push    word ptr [bp-0Ah]               
44aa  call far sub_7282                       
44af  jmp     4473h                           
44b1  cmp     ax,7h                           
44b4  ja      44CEh                           
44b6  add     ax,ax                           
44b8  xchg    ax,bx                           
44b9  jmp     word ptr cs:[bx+44BEh]          
44be  sahf                                    
44bf  inc     sp                              
44c0  bound   ax,[si+78h]                     
44c3  inc     sp                              
44c4  mov     ax,[si-32h]                     
44c7  inc     sp                              
44c8  sahf                                    
44c9  inc     sp                              
44ca  sahf                                    
44cb  inc     sp                              
44cc  sahf                                    
44cd  inc     sp                              
44ce  push    0Eh                             
44d0  push    8h                              
44d2  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 8
44d7  push    1h                              
44d9  call far M200.EOSTANDBY                 
44de  call far sub_66c6                       
44e3  pop     ds                              
44e4  leave                                   
44e5  retf                                    

; ===== DOCOMMANDRUNUP =====
44e6  mov     ax,43EDh                        ; segment seg2:0000
44e9  enter   24h,0h                          
44ed  push    ds                              
44ee  mov     ds,ax                           
44f0  push    0E0h                            
44f3  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
44f8  dec     ax                              
44f9  jne     4517h                           
44fb  push    1Ah                             
44fd  lea     ax,[bp-18h]                     
4500  push    ax                              
4501  call far M007.M007_GETVALUE             ; AP_MANUALKV
4506  mov     bx,ax                           
4508  push    word ptr ss:[bx+2h]             
450c  push    word ptr ss:[bx]                
450f  call far sub_311a                       
4514  add     sp,4h                           
4517  push    29h                             
4519  call far M007.M007_GETSTATE             ; DP_EHT_VAC_READY
451e  dec     ax                              
451f  je      4524h                           
4521  jmp     473Eh                           
4524  push    83h                             
4527  call far M007.M007_GETSTATE             ; DP_GSP
452c  dec     ax                              
452d  jne     4536h                           
452f  push    2h                              
4531  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
4536  push    26h                             
4538  call far M007.M007_GETSTATE             ; DP_FIL_BLOWN
453d  dec     ax                              
453e  jne     4549h                           
4540  push    26h                             
4542  push    2h                              
4544  call far M007.M007_PUTSTATE             ; DP_FIL_BLOWN = 2
4549  call far sub_59b4                       
454e  push    0Dh                             
4550  call far M007.M007_GETSTATE             ; DP_NEWFILAMENT
4555  mov     [bp-2h],ax                      
4558  push    0Bh                             
455a  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
455f  mov     [bp-4h],ax                      
4562  push    1Dh                             
4564  lea     ax,[bp-18h]                     
4567  push    ax                              
4568  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
456d  mov     bx,ax                           
456f  mov     ax,ss:[bx]                      
4572  mov     dx,ss:[bx+2h]                   
4576  mov     [bp-14h],ax                     
4579  mov     [bp-12h],dx                     
457c  push    1Ch                             
457e  lea     ax,[bp-1Ch]                     
4581  push    ax                              
4582  call far M007.M007_GETVALUE             ; AP_ACTUALKV
4587  mov     bx,ax                           
4589  mov     ax,ss:[bx]                      
458c  mov     dx,ss:[bx+2h]                   
4590  mov     [bp-10h],ax                     
4593  mov     [bp-0Eh],dx                     
4596  push    0Bh                             
4598  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
459d  cmp     ax,4h                           
45a0  jne     45A5h                           
45a2  jmp     465Ah                           
45a5  push    0Bh                             
45a7  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
45ac  mov     bx,ax                           
45ae  shl     bx,2h                           
45b1  mov     ax,[bx+24h]                     
45b5  mov     dx,[bx+26h]                     
45b9  mov     [bp-8h],ax                      
45bc  mov     [bp-6h],dx                      
45bf  push    19h                             
45c1  lea     ax,[bp-20h]                     
45c4  push    ax                              
45c5  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
45ca  mov     bx,ax                           
45cc  wait                                    
45cd  fld     dword ptr ss:[bx]               
45d0  lea     bx,[bp-8h]                      
45d3  wait                                    
45d4  fcom    dword ptr ss:[bx]               
45d7  wait                                    
45d8  fstp    st(0)                           
45da  wait                                    
45db  fstsw   ax                              
45dd  sahf                                    
45de  jae     45FAh                           
45e0  push    19h                             
45e2  lea     ax,[bp-24h]                     
45e5  push    ax                              
45e6  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
45eb  mov     bx,ax                           
45ed  mov     ax,ss:[bx]                      
45f0  mov     dx,ss:[bx+2h]                   
45f4  mov     [bp-8h],ax                      
45f7  mov     [bp-6h],dx                      
45fa  mov     ax,[64h]                        
45fd  mov     dx,[66h]                        
4601  mov     [bp-0Ch],ax                     
4604  mov     [bp-0Ah],dx                     
4607  wait                                    
4608  fld     dword ptr [0E6h]                ; [ds] = 0
460c  wait                                    
460d  fcom    qword ptr [40Ch]                ; [ds] = 0
4611  wait                                    
4612  fstp    st(0)                           
4614  wait                                    
4615  fstsw   ax                              
4617  sahf                                    
4618  je      463Ah                           
461a  push    81h                             
461d  lea     ax,[bp-24h]                     
4620  push    ax                              
4621  call far M007.M007_GETHIGH              ; AP_BEAM_CURRENT
4626  mov     bx,ax                           
4628  wait                                    
4629  fld     dword ptr ss:[bx]               
462c  wait                                    
462d  fcom    dword ptr [0E6h]                ; [ds] = 0
4631  wait                                    
4632  fstp    st(0)                           
4634  wait                                    
4635  fstsw   ax                              
4637  sahf                                    
4638  jae     4645h                           
463a  push    word ptr [bp-4h]                
463d  call far sub_58fe                       
4642  pop     bx                              
4643  jmp     4655h                           
4645  push    81h                             
4648  push    word ptr [0E8h]                 ; [ds] f32 here = 0
464c  push    word ptr [0E6h]                 ; [ds] f32 here = 0
4650  call far M007.M007_PUTVALUE             ; AP_BEAM_CURRENT
4655  call far sub_5df0                       
465a  mov     ax,[bp-4h]                      
465d  jmp     4709h                           
4660  cmp     word ptr [bp-2h],1h             
4664  jne     466Eh                           
4666  call far sub_77a2                       
466b  jmp     4726h                           
466e  push    word ptr [bp-0Ah]               
4671  push    word ptr [bp-0Ch]               
4674  push    word ptr [bp-6h]                
4677  push    word ptr [bp-8h]                
467a  push    word ptr [bp-0Eh]               
467d  push    word ptr [bp-10h]               
4680  push    word ptr [bp-12h]               
4683  push    word ptr [bp-14h]               
4686  call far sub_7468                       
468b  add     sp,10h                          
468e  jmp     4726h                           
4691  cmp     word ptr [bp-2h],1h             
4695  jne     469Fh                           
4697  call far sub_8538                       
469c  jmp     4726h                           
469f  push    word ptr [bp-0Ah]               
46a2  push    word ptr [bp-0Ch]               
46a5  push    word ptr [bp-6h]                
46a8  push    word ptr [bp-8h]                
46ab  push    word ptr [bp-0Eh]               
46ae  push    word ptr [bp-10h]               
46b1  push    word ptr [bp-12h]               
46b4  push    word ptr [bp-14h]               
46b7  call far sub_82a8                       
46bc  jmp     468Bh                           
46be  cmp     word ptr [bp-2h],1h             
46c2  jne     46CBh                           
46c4  call far sub_7ec2                       
46c9  jmp     4726h                           
46cb  push    word ptr [bp-0Ah]               
46ce  push    word ptr [bp-0Ch]               
46d1  push    word ptr [bp-6h]                
46d4  push    word ptr [bp-8h]                
46d7  push    word ptr [bp-0Eh]               
46da  push    word ptr [bp-10h]               
46dd  push    word ptr [bp-12h]               
46e0  push    word ptr [bp-14h]               
46e3  call far sub_7c32                       
46e8  jmp     468Bh                           
46ea  push    word ptr [bp-0Ah]               
46ed  push    word ptr [bp-0Ch]               
46f0  push    word ptr [bp-6h]                
46f3  push    word ptr [bp-8h]                
46f6  push    word ptr [bp-0Eh]               
46f9  push    word ptr [bp-10h]               
46fc  push    word ptr [bp-12h]               
46ff  push    word ptr [bp-14h]               
4702  call far sub_6f48                       
4707  jmp     468Bh                           
4709  cmp     ax,7h                           
470c  ja      4726h                           
470e  add     ax,ax                           
4710  xchg    ax,bx                           
4711  jmp     word ptr cs:[bx+4716h]          
4716  jmp     9146h:6046h                     
471b  inc     si                              
471c  mov     si,2646h                        
471f  inc     di                              
4720  jmp     0EA46h:0EA46h                   
4725  inc     si                              
4726  push    0Eh                             
4728  push    2h                              
472a  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 2
472f  push    0h                              
4731  call far M200.EOSTANDBY                 
4736  call far sub_66c6                       
473b  pop     ds                              
473c  leave                                   
473d  retf                                    
473e  push    0Eh                             
4740  push    0Ch                             
4742  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 12
4747  pop     ds                              
4748  leave                                   
4749  retf                                    

; ===== DOCOMMANDBEAM_ON =====
474a  mov     ax,44E7h                        ; segment seg2:0000
474d  enter   22h,0h                          
4751  push    ds                              
4752  mov     ds,ax                           
4754  push    0Eh                             
4756  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
475b  mov     [bp-6h],ax                      
475e  push    0E0h                            
4761  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
4766  dec     ax                              
4767  jne     4785h                           
4769  push    1Ah                             
476b  lea     ax,[bp-1Ah]                     
476e  push    ax                              
476f  call far M007.M007_GETVALUE             ; AP_MANUALKV
4774  mov     bx,ax                           
4776  push    word ptr ss:[bx+2h]             
477a  push    word ptr ss:[bx]                
477d  call far sub_311a                       
4782  add     sp,4h                           
4785  push    0Eh                             
4787  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
478c  or      ax,ax                           
478e  jne     4798h                           
4790  call far DOCOMMANDRUNUP                 
4795  pop     ds                              
4796  leave                                   
4797  retf                                    
4798  push    29h                             
479a  call far M007.M007_GETSTATE             ; DP_EHT_VAC_READY
479f  dec     ax                              
47a0  je      47A5h                           
47a2  jmp     499Ah                           
47a5  push    83h                             
47a8  call far M007.M007_GETSTATE             ; DP_GSP
47ad  dec     ax                              
47ae  jne     47B7h                           
47b0  push    6h                              
47b2  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
47b7  push    26h                             
47b9  call far M007.M007_GETSTATE             ; DP_FIL_BLOWN
47be  dec     ax                              
47bf  jne     47CAh                           
47c1  push    26h                             
47c3  push    2h                              
47c5  call far M007.M007_PUTSTATE             ; DP_FIL_BLOWN = 2
47ca  call far sub_59b4                       
47cf  push    0Dh                             
47d1  call far M007.M007_GETSTATE             ; DP_NEWFILAMENT
47d6  mov     [bp-2h],ax                      
47d9  push    0Bh                             
47db  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
47e0  mov     [bp-4h],ax                      
47e3  push    1Dh                             
47e5  lea     ax,[bp-1Ah]                     
47e8  push    ax                              
47e9  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
47ee  mov     bx,ax                           
47f0  mov     ax,ss:[bx]                      
47f3  mov     dx,ss:[bx+2h]                   
47f7  mov     [bp-16h],ax                     
47fa  mov     [bp-14h],dx                     
47fd  push    1Ch                             
47ff  lea     ax,[bp-1Eh]                     
4802  push    ax                              
4803  call far M007.M007_GETVALUE             ; AP_ACTUALKV
4808  mov     bx,ax                           
480a  mov     ax,ss:[bx]                      
480d  mov     dx,ss:[bx+2h]                   
4811  mov     [bp-12h],ax                     
4814  mov     [bp-10h],dx                     
4817  push    0Bh                             
4819  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
481e  cmp     ax,4h                           
4821  je      483Dh                           
4823  push    1Bh                             
4825  lea     ax,[bp-22h]                     
4828  push    ax                              
4829  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT
482e  mov     bx,ax                           
4830  mov     ax,ss:[bx]                      
4833  mov     dx,ss:[bx+2h]                   
4837  mov     [bp-0Ah],ax                     
483a  mov     [bp-8h],dx                      
483d  push    1Ah                             
483f  lea     ax,[bp-22h]                     
4842  push    ax                              
4843  call far M007.M007_GETVALUE             ; AP_MANUALKV
4848  mov     bx,ax                           
484a  mov     ax,ss:[bx]                      
484d  mov     dx,ss:[bx+2h]                   
4851  mov     [bp-0Eh],ax                     
4854  mov     [bp-0Ch],dx                     
4857  push    0Bh                             
4859  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
485e  cmp     ax,4h                           
4861  je      48B6h                           
4863  wait                                    
4864  fld     dword ptr [0E6h]                ; [ds] = 0
4868  wait                                    
4869  fcom    qword ptr [40Ch]                ; [ds] = 0
486d  wait                                    
486e  fstp    st(0)                           
4870  wait                                    
4871  fstsw   ax                              
4873  sahf                                    
4874  je      4896h                           
4876  push    81h                             
4879  lea     ax,[bp-1Eh]                     
487c  push    ax                              
487d  call far M007.M007_GETHIGH              ; AP_BEAM_CURRENT
4882  mov     bx,ax                           
4884  wait                                    
4885  fld     dword ptr ss:[bx]               
4888  wait                                    
4889  fcom    dword ptr [0E6h]                ; [ds] = 0
488d  wait                                    
488e  fstp    st(0)                           
4890  wait                                    
4891  fstsw   ax                              
4893  sahf                                    
4894  jae     48A1h                           
4896  push    word ptr [bp-4h]                
4899  call far sub_58fe                       
489e  pop     bx                              
489f  jmp     48B1h                           
48a1  push    81h                             
48a4  push    word ptr [0E8h]                 ; [ds] f32 here = 0
48a8  push    word ptr [0E6h]                 ; [ds] f32 here = 0
48ac  call far M007.M007_PUTVALUE             ; AP_BEAM_CURRENT
48b1  call far sub_5df0                       
48b6  mov     ax,[bp-4h]                      
48b9  jmp     4965h                           
48bc  cmp     word ptr [bp-2h],1h             
48c0  jne     48CAh                           
48c2  call far sub_77a2                       
48c7  jmp     4982h                           
48ca  push    word ptr [bp-0Ch]               
48cd  push    word ptr [bp-0Eh]               
48d0  push    word ptr [bp-8h]                
48d3  push    word ptr [bp-0Ah]               
48d6  push    word ptr [bp-10h]               
48d9  push    word ptr [bp-12h]               
48dc  push    word ptr [bp-14h]               
48df  push    word ptr [bp-16h]               
48e2  call far sub_7468                       
48e7  add     sp,10h                          
48ea  jmp     4982h                           
48ed  cmp     word ptr [bp-2h],1h             
48f1  jne     48FBh                           
48f3  call far sub_8538                       
48f8  jmp     4982h                           
48fb  push    word ptr [bp-0Ch]               
48fe  push    word ptr [bp-0Eh]               
4901  push    word ptr [bp-8h]                
4904  push    word ptr [bp-0Ah]               
4907  push    word ptr [bp-10h]               
490a  push    word ptr [bp-12h]               
490d  push    word ptr [bp-14h]               
4910  push    word ptr [bp-16h]               
4913  call far sub_82a8                       
4918  jmp     48E7h                           
491a  cmp     word ptr [bp-2h],1h             
491e  jne     4927h                           
4920  call far sub_7ec2                       
4925  jmp     4982h                           
4927  push    word ptr [bp-0Ch]               
492a  push    word ptr [bp-0Eh]               
492d  push    word ptr [bp-8h]                
4930  push    word ptr [bp-0Ah]               
4933  push    word ptr [bp-10h]               
4936  push    word ptr [bp-12h]               
4939  push    word ptr [bp-14h]               
493c  push    word ptr [bp-16h]               
493f  call far sub_7c32                       
4944  jmp     48E7h                           
4946  push    word ptr [bp-0Ch]               
4949  push    word ptr [bp-0Eh]               
494c  push    word ptr [bp-8h]                
494f  push    word ptr [bp-0Ah]               
4952  push    word ptr [bp-10h]               
4955  push    word ptr [bp-12h]               
4958  push    word ptr [bp-14h]               
495b  push    word ptr [bp-16h]               
495e  call far sub_6f48                       
4963  jmp     48E7h                           
4965  cmp     ax,7h                           
4968  ja      4982h                           
496a  add     ax,ax                           
496c  xchg    ax,bx                           
496d  jmp     word ptr cs:[bx+4972h]          
4972  inc     si                              
4973  dec     cx                              
4974  mov     sp,0ED48h                       
4977  dec     ax                              
4978  sbb     cl,[bx+di-7Eh]                  
497b  dec     cx                              
497c  inc     si                              
497d  dec     cx                              
497e  inc     si                              
497f  dec     cx                              
4980  inc     si                              
4981  dec     cx                              
4982  push    0Eh                             
4984  push    6h                              
4986  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 6
498b  push    0h                              
498d  call far M200.EOSTANDBY                 
4992  call far sub_66c6                       
4997  pop     ds                              
4998  leave                                   
4999  retf                                    
499a  push    0Eh                             
499c  push    0Ch                             
499e  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 12
49a3  pop     ds                              
49a4  leave                                   
49a5  retf                                    

; ===== DOCOMMANDLOAD_TARGETS =====
49a6  mov     ax,474Bh                        ; segment seg2:0000
49a9  enter   8h,0h                           
49ad  push    ds                              
49ae  mov     ds,ax                           
49b0  push    18h                             
49b2  push    1Ch                             
49b4  lea     ax,[bp-4h]                      
49b7  push    ax                              
49b8  call far M007.M007_GETVALUE             ; AP_TARGETKV = 28
49bd  mov     bx,ax                           
49bf  push    word ptr ss:[bx+2h]             
49c3  push    word ptr ss:[bx]                
49c6  call far M007.M007_PUTVALUE             
49cb  push    17h                             
49cd  push    1Dh                             
49cf  lea     ax,[bp-8h]                      
49d2  push    ax                              
49d3  call far M007.M007_GETVALUE             ; AP_TARGETCURRENT = 29
49d8  mov     bx,ax                           
49da  push    word ptr ss:[bx+2h]             
49de  push    word ptr ss:[bx]                
49e1  call far M007.M007_PUTVALUE             
49e6  pop     ds                              
49e7  leave                                   
49e8  retf                                    
49e9  add     [bx+si],al                      

; ===== DOCOMMANDSERVICE_RUNUP =====
49ea  mov     ax,49A7h                        ; segment seg2:0000
49ed  enter   12h,0h                          
49f1  push    ds                              
49f2  mov     ds,ax                           
49f4  push    0Eh                             
49f6  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
49fb  mov     [bp-2h],ax                      
49fe  push    29h                             
4a00  call far M007.M007_GETSTATE             ; DP_EHT_VAC_READY
4a05  dec     ax                              
4a06  je      4A0Bh                           
4a08  jmp     4AB0h                           
4a0b  push    83h                             
4a0e  call far M007.M007_GETSTATE             ; DP_GSP
4a13  dec     ax                              
4a14  jne     4A1Dh                           
4a16  push    2h                              
4a18  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
4a1d  push    26h                             
4a1f  call far M007.M007_GETSTATE             ; DP_FIL_BLOWN
4a24  dec     ax                              
4a25  jne     4A30h                           
4a27  push    26h                             
4a29  push    2h                              
4a2b  call far M007.M007_PUTSTATE             ; DP_FIL_BLOWN = 2
4a30  push    0Eh                             
4a32  push    1h                              
4a34  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 1
4a39  push    1Ah                             
4a3b  push    1Ch                             
4a3d  lea     ax,[bp-6h]                      
4a40  push    ax                              
4a41  call far M007.M007_GETVALUE             ; AP_MANUALKV = 28
4a46  mov     bx,ax                           
4a48  push    word ptr ss:[bx+2h]             
4a4c  push    word ptr ss:[bx]                
4a4f  call far M007.M007_PUTVALUE             
4a54  push    1Bh                             
4a56  push    1Dh                             
4a58  lea     ax,[bp-0Ah]                     
4a5b  push    ax                              
4a5c  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT = 29
4a61  mov     bx,ax                           
4a63  push    word ptr ss:[bx+2h]             
4a67  push    word ptr ss:[bx]                
4a6a  call far M007.M007_PUTVALUE             
4a6f  push    14Fh                            
4a72  push    12Fh                            
4a75  lea     ax,[bp-0Eh]                     
4a78  push    ax                              
4a79  call far M007.M007_GETVALUE             ; AP_MANUALEXT = 303
4a7e  mov     bx,ax                           
4a80  push    word ptr ss:[bx+2h]             
4a84  push    word ptr ss:[bx]                
4a87  call far M007.M007_PUTVALUE             
4a8c  push    151h                            
4a8f  push    131h                            
4a92  lea     ax,[bp-12h]                     
4a95  push    ax                              
4a96  call far M007.M007_GETVALUE             ; AP_MANUALLENS = 305
4a9b  mov     bx,ax                           
4a9d  push    word ptr ss:[bx+2h]             
4aa1  push    word ptr ss:[bx]                
4aa4  call far M007.M007_PUTVALUE             
4aa9  push    0h                              
4aab  call far M200.EOSTANDBY                 
4ab0  pop     ds                              
4ab1  leave                                   
4ab2  retf                                    
4ab3  add     [bx+si],al                      

; ===== DOCOMMANDEMERGENCYRUNDOWN =====
4ab4  mov     ax,49EBh                        ; segment seg2:0000
4ab7  push    bp                              
4ab8  mov     bp,sp                           
4aba  push    ds                              
4abb  mov     ds,ax                           
4abd  pop     ds                              
4abe  leave                                   
4abf  retf                                    

; ===== READ_GSP_EHT_STATUS =====
4ac0  mov     ax,4AB5h                        ; segment seg2:0000
4ac3  push    bp                              
4ac4  mov     bp,sp                           
4ac6  push    ds                              
4ac7  mov     ds,ax                           
4ac9  mov     ax,[9Ah]                        
4acc  mov     dx,[9Ch]                        
4ad0  les     bx,[bp+6h]                      
4ad3  mov     es:[bx+4h],ax                   
4ad7  mov     es:[bx+6h],dx                   
4adb  mov     ax,[96h]                        
4ade  mov     dx,[98h]                        
4ae2  mov     es:[bx],ax                      
4ae5  mov     es:[bx+2h],dx                   
4ae9  mov     ax,[0AEh]                       
4aec  mov     dx,[0B0h]                       
4af0  mov     es:[bx+18h],ax                  
4af4  mov     es:[bx+1Ah],dx                  
4af8  mov     ax,[0B2h]                       
4afb  mov     dx,[0B4h]                       
4aff  mov     es:[bx+1Ch],ax                  
4b03  mov     es:[bx+1Eh],dx                  
4b07  mov     ax,[0B6h]                       
4b0a  mov     dx,[0B8h]                       
4b0e  mov     es:[bx+20h],ax                  
4b12  mov     es:[bx+22h],dx                  
4b16  mov     ax,[0BEh]                       
4b19  mov     dx,[0C0h]                       
4b1d  mov     es:[bx+28h],ax                  
4b21  mov     es:[bx+2Ah],dx                  
4b25  mov     ax,[0C2h]                       
4b28  mov     es:[bx+2Ch],ax                  
4b2c  mov     ax,[0C4h]                       
4b2f  mov     es:[bx+2Eh],ax                  
4b33  mov     ax,[0CCh]                       
4b36  mov     es:[bx+36h],ax                  
4b3a  mov     ax,[0BAh]                       
4b3d  mov     dx,[0BCh]                       
4b41  mov     es:[bx+24h],ax                  
4b45  mov     es:[bx+26h],dx                  
4b49  mov     ax,[0D0h]                       
4b4c  mov     es:[bx+3Ah],ax                  
4b50  mov     ax,[0CEh]                       
4b53  mov     es:[bx+38h],ax                  
4b57  pop     ds                              
4b58  leave                                   
4b59  retf    4h                              

; ===== SEND_GSP_EHT_RAMP_REQUEST =====
4b5c  mov     ax,4AC1h                        ; segment seg2:0000
4b5f  enter   18h,0h                          
4b63  push    ds                              
4b64  mov     ds,ax                           
4b66  push    1Ah                             
4b68  wait                                    
4b69  fld     dword ptr [bp+0Ah]              
4b6c  wait                                    
4b6d  fstp    dword ptr [bp-14h]              
4b70  nop                                     
4b71  wait                                    
4b72  push    word ptr [bp-12h]               
4b75  push    word ptr [bp-14h]               
4b78  call far M007.M007_PUTVALUE             ; AP_MANUALKV
4b7d  wait                                    
4b7e  fld     dword ptr [bp-14h]              
4b81  wait                                    
4b82  fstp    dword ptr [64h]                 ; [ds] = 0
4b86  nop                                     
4b87  wait                                    
4b88  push    83h                             
4b8b  call far M007.M007_GETSTATE             ; DP_GSP
4b90  dec     ax                              
4b91  jne     4C09h                           
4b93  mov     ax,[404h]                       
4b96  mov     dx,[406h]                       
4b9a  mov     [bp-10h],ax                     
4b9d  mov     [bp-0Eh],dx                     
4ba0  wait                                    
4ba1  fld     dword ptr [bp-14h]              
4ba4  wait                                    
4ba5  fcom    dword ptr [9Ah]                 ; [ds] = 0
4ba9  wait                                    
4baa  fstp    st(0)                           
4bac  wait                                    
4bad  fstsw   ax                              
4baf  sahf                                    
4bb0  jae     4BD8h                           
4bb2  lea     bx,[bp+6h]                      
4bb5  wait                                    
4bb6  fld     dword ptr ss:[bx]               
4bb9  wait                                    
4bba  fst     dword ptr [bp-18h]              
4bbd  wait                                    
4bbe  fcom    dword ptr [404h]                ; [ds] = 0
4bc2  wait                                    
4bc3  fstp    st(0)                           
4bc5  wait                                    
4bc6  fstsw   ax                              
4bc8  sahf                                    
4bc9  jbe     4BD8h                           
4bcb  wait                                    
4bcc  fld     dword ptr [bp-18h]              
4bcf  wait                                    
4bd0  fchs                                    
4bd2  wait                                    
4bd3  fstp    dword ptr ss:[bx]               
4bd6  nop                                     
4bd7  wait                                    
4bd8  mov     ax,[bp+6h]                      
4bdb  mov     dx,[bp+8h]                      
4bde  mov     [bp-0Ch],ax                     
4be1  mov     [bp-0Ah],dx                     
4be4  mov     ax,[418h]                       
4be7  mov     dx,[41Ah]                       
4beb  mov     [bp-8h],ax                      
4bee  mov     [bp-6h],dx                      
4bf1  mov     ax,[bp+0Ah]                     
4bf4  mov     dx,[bp+0Ch]                     
4bf7  mov     [bp-4h],ax                      
4bfa  mov     [bp-2h],dx                      
4bfd  lea     ax,[bp-10h]                     
4c00  push    ss                              
4c01  push    ax                              
4c02  call far TIGASEM.SENDGSPEHTRAMPREQUEST  
4c07  jmp     4C1Ch                           
4c09  mov     ax,[bp+0Ah]                     
4c0c  mov     dx,[bp+0Ch]                     
4c0f  mov     [9Ah],ax                        
4c12  mov     [9Ch],dx                        
4c16  mov     word ptr [0C2h],0h              
4c1c  pop     ds                              
4c1d  leave                                   
4c1e  retf    8h                              
4c21  add     [bx+si],al                      

; ===== SEND_GSP_FIL_RAMP_REQUEST =====
4c22  mov     ax,4B5Dh                        ; segment seg2:0000
4c25  enter   14h,0h                          
4c29  push    ds                              
4c2a  mov     ds,ax                           
4c2c  push    83h                             
4c2f  call far M007.M007_GETSTATE             ; DP_GSP
4c34  dec     ax                              
4c35  jne     4CADh                           
4c37  mov     ax,[404h]                       
4c3a  mov     dx,[406h]                       
4c3e  mov     [bp-10h],ax                     
4c41  mov     [bp-0Eh],dx                     
4c44  wait                                    
4c45  fld     dword ptr [bp+0Ah]              
4c48  wait                                    
4c49  fcom    dword ptr [96h]                 ; [ds] = 0
4c4d  wait                                    
4c4e  fstp    st(0)                           
4c50  wait                                    
4c51  fstsw   ax                              
4c53  sahf                                    
4c54  jae     4C7Ch                           
4c56  lea     bx,[bp+6h]                      
4c59  wait                                    
4c5a  fld     dword ptr ss:[bx]               
4c5d  wait                                    
4c5e  fst     dword ptr [bp-14h]              
4c61  wait                                    
4c62  fcom    dword ptr [404h]                ; [ds] = 0
4c66  wait                                    
4c67  fstp    st(0)                           
4c69  wait                                    
4c6a  fstsw   ax                              
4c6c  sahf                                    
4c6d  jbe     4C7Ch                           
4c6f  wait                                    
4c70  fld     dword ptr [bp-14h]              
4c73  wait                                    
4c74  fchs                                    
4c76  wait                                    
4c77  fstp    dword ptr ss:[bx]               
4c7a  nop                                     
4c7b  wait                                    
4c7c  mov     ax,[bp+6h]                      
4c7f  mov     dx,[bp+8h]                      
4c82  mov     [bp-0Ch],ax                     
4c85  mov     [bp-0Ah],dx                     
4c88  mov     ax,[418h]                       
4c8b  mov     dx,[41Ah]                       
4c8f  mov     [bp-8h],ax                      
4c92  mov     [bp-6h],dx                      
4c95  mov     ax,[bp+0Ah]                     
4c98  mov     dx,[bp+0Ch]                     
4c9b  mov     [bp-4h],ax                      
4c9e  mov     [bp-2h],dx                      
4ca1  lea     ax,[bp-10h]                     
4ca4  push    ss                              
4ca5  push    ax                              
4ca6  call far TIGASEM.SENDGSPFILRAMPREQUEST  
4cab  jmp     4CC0h                           
4cad  mov     ax,[bp+0Ah]                     
4cb0  mov     dx,[bp+0Ch]                     
4cb3  mov     [96h],ax                        
4cb6  mov     [98h],dx                        
4cba  mov     word ptr [0C4h],0h              
4cc0  pop     ds                              
4cc1  leave                                   
4cc2  retf    8h                              
4cc5  add     [bx+si],al                      

; ===== SEND_GSP_EXT_RAMP_REQUEST =====
4cc6  mov     ax,4C23h                        ; segment seg2:0000
4cc9  push    bp                              
4cca  mov     bp,sp                           
4ccc  push    ds                              
4ccd  mov     ds,ax                           
4ccf  pop     ds                              
4cd0  leave                                   
4cd1  retf    8h                              

; ===== SEND_GSP_SUPP_RAMP_REQUEST =====
4cd4  mov     ax,4CC7h                        ; segment seg2:0000
4cd7  push    bp                              
4cd8  mov     bp,sp                           
4cda  push    ds                              
4cdb  mov     ds,ax                           
4cdd  pop     ds                              
4cde  leave                                   
4cdf  retf    8h                              

; ===== SEND_GSP_LENS_RAMP_REQUEST =====
4ce2  mov     ax,4CD5h                        ; segment seg2:0000
4ce5  push    bp                              
4ce6  mov     bp,sp                           
4ce8  push    ds                              
4ce9  mov     ds,ax                           
4ceb  pop     ds                              
4cec  leave                                   
4ced  retf    8h                              

; ===== SET_EHT_SET_SUPPLY_TOGGLE =====
4cf0  mov     ax,4CE3h                        ; segment seg2:0000
4cf3  push    bp                              
4cf4  mov     bp,sp                           
4cf6  push    ds                              
4cf7  mov     ds,ax                           
4cf9  push    83h                             
4cfc  call far M007.M007_GETSTATE             ; DP_GSP
4d01  dec     ax                              
4d02  jne     4D0Ch                           
4d04  push    word ptr [bp+6h]                
4d07  call far TIGASEM.SETEHTSETSUPPLYTOGGLE  
4d0c  pop     ds                              
4d0d  leave                                   
4d0e  retf    2h                              
4d11  add     [bx+si],al                      

; ===== GET_EHT_SET_DESC =====
4d12  mov     ax,4CF1h                        ; segment seg2:0000
4d15  push    bp                              
4d16  mov     bp,sp                           
4d18  push    ds                              
4d19  mov     ds,ax                           
4d1b  push    83h                             
4d1e  call far M007.M007_GETSTATE             ; DP_GSP
4d23  dec     ax                              
4d24  jne     4D33h                           
4d26  push    word ptr [bp+8h]                
4d29  push    word ptr [bp+6h]                
4d2c  call far TIGASEM.GETGSPEHTSETDESCRIPTION
4d31  jmp     4D5Eh                           
4d33  mov     ax,[41Ch]                       
4d36  mov     dx,[41Eh]                       
4d3a  les     bx,[bp+6h]                      
4d3d  mov     es:[bx],ax                      
4d40  mov     es:[bx+2h],dx                   
4d44  mov     ax,[3FCh]                       
4d47  mov     dx,[3FEh]                       
4d4b  mov     es:[bx+4h],ax                   
4d4f  mov     es:[bx+6h],dx                   
4d53  mov     word ptr es:[bx+8h],0h          
4d59  mov     byte ptr es:[bx+0Ah],41h        
4d5e  pop     ds                              
4d5f  leave                                   
4d60  retf    4h                              
4d63  add     [bx+si],al                      

; ===== READ_EHT_SET_READBACK =====
4d64  mov     ax,4D13h                        ; segment seg2:0000
4d67  push    bp                              
4d68  mov     bp,sp                           
4d6a  push    ds                              
4d6b  mov     ds,ax                           
4d6d  push    83h                             
4d70  call far M007.M007_GETSTATE             ; DP_GSP
4d75  dec     ax                              
4d76  je      4D8Ch                           
4d78  push    4D87h                           ; segment seg1:0000
4d7b  push    508Eh                           
4d7e  push    word ptr [bp+8h]                
4d81  push    word ptr [bp+6h]                
4d84  call far sub_028c                       
4d89  add     sp,8h                           
4d8c  mov     ax,1h                           
4d8f  pop     ds                              
4d90  leave                                   
4d91  retf    4h                              

; ===== TOGGLE_READBACK =====
4d94  mov     ax,4D65h                        ; segment seg2:0000
4d97  push    bp                              
4d98  mov     bp,sp                           
4d9a  push    ds                              
4d9b  mov     ds,ax                           
4d9d  push    83h                             
4da0  call far M007.M007_GETSTATE             ; DP_GSP
4da5  dec     ax                              
4da6  jne     4DB4h                           
4da8  mov     ax,[bp+6h]                      
4dab  mov     [68h],ax                        
4dae  push    ax                              
4daf  call far TIGASEM.TOGGLEREADBACK         
4db4  pop     ds                              
4db5  leave                                   
4db6  retf    2h                              
4db9  add     [bx+si],al                      

; ===== SEND_GSP_LENS_WOBBLE =====
4dba  mov     ax,4D95h                        ; segment seg2:0000
4dbd  push    bp                              
4dbe  mov     bp,sp                           
4dc0  push    ds                              
4dc1  mov     ds,ax                           
4dc3  push    83h                             
4dc6  call far M007.M007_GETSTATE             ; DP_GSP
4dcb  dec     ax                              
4dcc  jne     4DD6h                           
4dce  push    word ptr [bp+6h]                
4dd1  call far TIGASEM.SENDGSPLENSWOBBLE      
4dd6  pop     ds                              
4dd7  leave                                   
4dd8  retf    2h                              
4ddb  add     [bx+si],al                      

; ===== SEND_GSP_BEAM_WOBBLE =====
4ddc  mov     ax,4DBBh                        ; segment seg2:0000
4ddf  push    bp                              
4de0  mov     bp,sp                           
4de2  push    ds                              
4de3  mov     ds,ax                           
4de5  push    83h                             
4de8  call far M007.M007_GETSTATE             ; DP_GSP
4ded  dec     ax                              
4dee  jne     4DF8h                           
4df0  push    word ptr [bp+6h]                
4df3  call far TIGASEM.SENDGSPBEAMWOBBLE      
4df8  pop     ds                              
4df9  leave                                   
4dfa  retf    2h                              
4dfd  add     [bx+si],al                      

; ===== SET_FE_EHT_CONFIG =====
4dfe  mov     ax,4DDDh                        ; segment seg2:0000
4e01  push    bp                              
4e02  mov     bp,sp                           
4e04  push    ds                              
4e05  mov     ds,ax                           
4e07  pop     ds                              
4e08  leave                                   
4e09  retf    10h                             

; ===== SETNOMINALEXT =====
4e0c  mov     ax,4DFFh                        ; segment seg2:0000
4e0f  push    bp                              
4e10  mov     bp,sp                           
4e12  push    ds                              
4e13  mov     ds,ax                           
4e15  pop     ds                              
4e16  leave                                   
4e17  retf    4h                              

; ===== SETNOMINALEXTI =====
4e1a  mov     ax,4E0Dh                        ; segment seg2:0000
4e1d  push    bp                              
4e1e  mov     bp,sp                           
4e20  push    ds                              
4e21  mov     ds,ax                           
4e23  pop     ds                              
4e24  leave                                   
4e25  retf    4h                              

; ===== SETNOMINALFIL =====
4e28  mov     ax,4E1Bh                        ; segment seg2:0000
4e2b  push    bp                              
4e2c  mov     bp,sp                           
4e2e  push    ds                              
4e2f  mov     ds,ax                           
4e31  pop     ds                              
4e32  leave                                   
4e33  retf    4h                              

; ===== DOCOMMANDEHT_RESET =====
4e36  mov     ax,4E29h                        ; segment seg2:0000
4e39  push    bp                              
4e3a  mov     bp,sp                           
4e3c  push    ds                              
4e3d  mov     ds,ax                           
4e3f  pop     ds                              
4e40  leave                                   
4e41  retf                                    

; ===== SETMANUALEXT =====
4e42  mov     ax,4E37h                        ; segment seg2:0000
4e45  push    bp                              
4e46  mov     bp,sp                           
4e48  push    ds                              
4e49  mov     ds,ax                           
4e4b  pop     ds                              
4e4c  leave                                   
4e4d  retf    4h                              

; ===== SETMANUALSUPP =====
4e50  mov     ax,4E43h                        ; segment seg2:0000
4e53  push    bp                              
4e54  mov     bp,sp                           
4e56  push    ds                              
4e57  mov     ds,ax                           
4e59  pop     ds                              
4e5a  leave                                   
4e5b  retf    4h                              

; ===== SETMANUALLENS =====
4e5e  mov     ax,4E51h                        ; segment seg2:0000
4e61  push    bp                              
4e62  mov     bp,sp                           
4e64  push    ds                              
4e65  mov     ds,ax                           
4e67  pop     ds                              
4e68  leave                                   
4e69  retf    4h                              

; ===== SETMIN_EXT =====
4e6c  mov     ax,4E5Fh                        ; segment seg2:0000
4e6f  push    bp                              
4e70  mov     bp,sp                           
4e72  push    ds                              
4e73  mov     ds,ax                           
4e75  pop     ds                              
4e76  leave                                   
4e77  retf    4h                              

; ===== SWITCHCOND_STATUS =====
4e7a  mov     ax,4E6Dh                        ; segment seg2:0000
4e7d  push    bp                              
4e7e  mov     bp,sp                           
4e80  push    ds                              
4e81  mov     ds,ax                           
4e83  pop     ds                              
4e84  leave                                   
4e85  retf    2h                              

; ===== SWITCHRUNUPSTATE =====
4e88  mov     ax,4E7Bh                        ; segment seg2:0000
4e8b  push    bp                              
4e8c  mov     bp,sp                           
4e8e  push    ds                              
4e8f  mov     ds,ax                           
4e91  pop     ds                              
4e92  leave                                   
4e93  retf    2h                              

; ===== SETEHT_CAL_100 =====
4e96  mov     ax,4E89h                        ; segment seg2:0000
4e99  enter   4h,0h                           
4e9d  push    ds                              
4e9e  mov     ds,ax                           
4ea0  push    159h                            
4ea3  push    word ptr [bp+8h]                
4ea6  push    word ptr [bp+6h]                
4ea9  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_100
4eae  push    0Eh                             
4eb0  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
4eb5  dec     ax                              
4eb6  jne     4ED1h                           
4eb8  push    1Ah                             
4eba  lea     ax,[bp-4h]                      
4ebd  push    ax                              
4ebe  call far M007.M007_GETVALUE             ; AP_MANUALKV
4ec3  mov     bx,ax                           
4ec5  push    word ptr ss:[bx+2h]             
4ec9  push    word ptr ss:[bx]                
4ecc  call far SETMANUALKV                    
4ed1  pop     ds                              
4ed2  leave                                   
4ed3  retf    4h                              

; ===== SETEHT_CAL_10KV =====
4ed6  mov     ax,4E97h                        ; segment seg2:0000
4ed9  enter   4h,0h                           
4edd  push    ds                              
4ede  mov     ds,ax                           
4ee0  push    15Ah                            
4ee3  push    word ptr [bp+8h]                
4ee6  push    word ptr [bp+6h]                
4ee9  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_10KV
4eee  push    0Eh                             
4ef0  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
4ef5  dec     ax                              
4ef6  jne     4F11h                           
4ef8  push    1Ah                             
4efa  lea     ax,[bp-4h]                      
4efd  push    ax                              
4efe  call far M007.M007_GETVALUE             ; AP_MANUALKV
4f03  mov     bx,ax                           
4f05  push    word ptr ss:[bx+2h]             
4f09  push    word ptr ss:[bx]                
4f0c  call far SETMANUALKV                    
4f11  pop     ds                              
4f12  leave                                   
4f13  retf    4h                              

; ===== SETEHT_CAL_24KV =====
4f16  mov     ax,4ED7h                        ; segment seg2:0000
4f19  enter   4h,0h                           
4f1d  push    ds                              
4f1e  mov     ds,ax                           
4f20  push    15Bh                            
4f23  push    word ptr [bp+8h]                
4f26  push    word ptr [bp+6h]                
4f29  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_24KV
4f2e  push    0Eh                             
4f30  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
4f35  dec     ax                              
4f36  jne     4F51h                           
4f38  push    1Ah                             
4f3a  lea     ax,[bp-4h]                      
4f3d  push    ax                              
4f3e  call far M007.M007_GETVALUE             ; AP_MANUALKV
4f43  mov     bx,ax                           
4f45  push    word ptr ss:[bx+2h]             
4f49  push    word ptr ss:[bx]                
4f4c  call far SETMANUALKV                    
4f51  pop     ds                              
4f52  leave                                   
4f53  retf    4h                              

; ===== SETEHT_CAL_30KV =====
4f56  mov     ax,4F17h                        ; segment seg2:0000
4f59  enter   4h,0h                           
4f5d  push    ds                              
4f5e  mov     ds,ax                           
4f60  push    15Ch                            
4f63  push    word ptr [bp+8h]                
4f66  push    word ptr [bp+6h]                
4f69  call far M007.M007_PUTVALUE             ; AP_EHT_CAL_30KV
4f6e  push    0Eh                             
4f70  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
4f75  dec     ax                              
4f76  jne     4F91h                           
4f78  push    1Ah                             
4f7a  lea     ax,[bp-4h]                      
4f7d  push    ax                              
4f7e  call far M007.M007_GETVALUE             ; AP_MANUALKV
4f83  mov     bx,ax                           
4f85  push    word ptr ss:[bx+2h]             
4f89  push    word ptr ss:[bx]                
4f8c  call far SETMANUALKV                    
4f91  pop     ds                              
4f92  leave                                   
4f93  retf    4h                              

; ===== SEND_EHT_DIRECT_COMMAND =====
4f96  mov     ax,4F57h                        ; segment seg2:0000
4f99  push    bp                              
4f9a  mov     bp,sp                           
4f9c  push    ds                              
4f9d  mov     ds,ax                           
4f9f  push    83h                             
4fa2  call far M007.M007_GETSTATE             ; DP_GSP
4fa7  dec     ax                              
4fa8  jne     4FB5h                           
4faa  push    word ptr [bp+8h]                
4fad  push    word ptr [bp+6h]                
4fb0  call far TIGASEM.SENDGSPDIRECTCOMMAND   
4fb5  pop     ds                              
4fb6  leave                                   
4fb7  retf    4h                              

; ===== SETUSER_MAX_EHT =====
4fba  mov     ax,4F97h                        ; segment seg2:0000
4fbd  enter   48h,0h                          
4fc1  push    ds                              
4fc2  mov     ds,ax                           
4fc4  push    1A6h                            
4fc7  wait                                    
4fc8  fld     dword ptr [bp+6h]               
4fcb  wait                                    
4fcc  fstp    dword ptr [bp-48h]              
4fcf  nop                                     
4fd0  wait                                    
4fd1  push    word ptr [bp-46h]               
4fd4  push    word ptr [bp-48h]               
4fd7  call far M007.M007_PUTVALUE             ; AP_USER_MAX_EHT
4fdc  push    1Ah                             
4fde  wait                                    
4fdf  fld     dword ptr [bp-48h]              
4fe2  sub     sp,4h                           
4fe5  mov     bx,sp                           
4fe7  wait                                    
4fe8  fstp    dword ptr ss:[bx]               
4feb  nop                                     
4fec  wait                                    
4fed  call far M007.M007_PUTHIGH              ; AP_MANUALKV
4ff2  push    1Ah                             
4ff4  lea     ax,[bp-44h]                     
4ff7  push    ax                              
4ff8  call far M007.M007_GETVALUE             ; AP_MANUALKV
4ffd  mov     bx,ax                           
4fff  wait                                    
5000  fld     dword ptr ss:[bx]               
5003  wait                                    
5004  fcom    dword ptr [bp-48h]              
5007  wait                                    
5008  fstp    st(0)                           
500a  wait                                    
500b  fstsw   ax                              
500d  sahf                                    
500e  jbe     5024h                           
5010  wait                                    
5011  fld     dword ptr [bp-48h]              
5014  sub     sp,4h                           
5017  mov     bx,sp                           
5019  wait                                    
501a  fstp    dword ptr ss:[bx]               
501d  nop                                     
501e  wait                                    
501f  call far SETMANUALKV                    
5024  wait                                    
5025  fld     dword ptr [bp+6h]               
5028  call far sub_02c8                       
502d  push    ax                              
502e  push    5042h                           ; segment seg1:0000
5031  push    30AAh                           
5034  lea     ax,[bp-40h]                     
5037  push    ss                              
5038  push    ax                              
5039  call far USER._WSPRINTF                 
503e  add     sp,0Ah                          
5041  push    5048h                           ; segment seg1:0000
5044  push    30BAh                           
5047  push    4F8Fh                           ; segment seg1:0000
504a  push    30AEh                           
504d  lea     ax,[bp-40h]                     
5050  push    ss                              
5051  push    ax                              
5052  call far M007.GETLEOINIFILEPATH         ; "User"  "UserMaxEht"
5057  push    dx                              
5058  push    ax                              
5059  call far KERNEL.WRITEPRIVATEPROFILESTRING
505e  pop     ds                              
505f  leave                                   
5060  retf    4h                              
5063  add     [bx+si],al                      

; ===== SETFILAMENT_AGE =====
5064  mov     ax,4FBBh                        ; segment seg2:0000
5067  push    bp                              
5068  mov     bp,sp                           
506a  push    ds                              
506b  mov     ds,ax                           
506d  push    0D2h                            
5070  push    word ptr [bp+8h]                
5073  push    word ptr [bp+6h]                
5076  call far M007.M007_PUTVALUE             ; AP_FILAMENT_AGE
507b  pop     ds                              
507c  leave                                   
507d  retf    4h                              
5080  inc     si                              
5081  imul    bp,[si+61h],656Dh               
5086  outsb                                   
5087  je      50AEh                           
5089  add     fs:[bx+si],al                   
508c  xor     [bx+si],al                      
508e  and     [bx+si],ah                      
5090  and     [bx+si],ah                      
5092  dec     ax                              
5093  insb                                    
5095  insb                                    
5096  outsw                                   
5097  and     [bx+6Fh],dl                     
509a  jb      5108h                           
509c  and     fs:[bx+si],ax                   
509f  add     [bx+si],al                      

; ----- sub_50a0 -----
50a0  mov     ax,5065h                        ; segment seg2:0000
50a3  enter   4h,0h                           
50a7  push    ds                              
50a8  mov     ds,ax                           
50aa  push    1Ch                             
50ac  wait                                    
50ad  fld     dword ptr [bp+6h]               
50b0  wait                                    
50b1  fstp    dword ptr [bp-4h]               
50b4  nop                                     
50b5  wait                                    
50b6  push    word ptr [bp-2h]                
50b9  push    word ptr [bp-4h]                
50bc  call far M007.M007_PUTHIGH              ; AP_ACTUALKV
50c1  push    1Ah                             
50c3  wait                                    
50c4  fld     dword ptr [bp-4h]               
50c7  sub     sp,4h                           
50ca  mov     bx,sp                           
50cc  wait                                    
50cd  fstp    dword ptr ss:[bx]               
50d0  nop                                     
50d1  wait                                    
50d2  call far M007.M007_PUTHIGH              ; AP_MANUALKV
50d7  push    18h                             
50d9  wait                                    
50da  fld     dword ptr [bp-4h]               
50dd  sub     sp,4h                           
50e0  mov     bx,sp                           
50e2  wait                                    
50e3  fstp    dword ptr ss:[bx]               
50e6  nop                                     
50e7  wait                                    
50e8  call far M007.M007_PUTHIGH              ; AP_TARGETKV
50ed  pop     ds                              
50ee  leave                                   
50ef  retf                                    

; ----- sub_50f0 -----
50f0  mov     ax,50A1h                        ; segment seg2:0000
50f3  push    bp                              
50f4  mov     bp,sp                           
50f6  push    ds                              
50f7  mov     ds,ax                           
50f9  push    83h                             
50fc  call far M007.M007_GETSTATE             ; DP_GSP
5101  dec     ax                              
5102  jne     5111h                           
5104  push    word ptr [bp+8h]                
5107  push    word ptr [bp+6h]                
510a  call far TIGASEM.GETGSPEHTSETDESCRIPTION
510f  jmp     513Ch                           
5111  mov     ax,[420h]                       
5114  mov     dx,[422h]                       
5118  les     bx,[bp+6h]                      
511b  mov     es:[bx],ax                      
511e  mov     es:[bx+2h],dx                   
5122  mov     ax,[424h]                       
5125  mov     dx,[426h]                       
5129  mov     es:[bx+4h],ax                   
512d  mov     es:[bx+6h],dx                   
5131  mov     word ptr es:[bx+8h],0h          
5137  mov     byte ptr es:[bx+0Ah],41h        
513c  les     bx,[bp+6h]                      
513f  cmp     byte ptr es:[bx+0Ah],0h         
5144  jne     5149h                           
5146  jmp     51DCh                           
5149  push    82h                             
514c  push    word ptr es:[bx+2h]             
5150  push    word ptr es:[bx]                
5153  call far M007.M007_PUTVALUE             ; AP_EHT_SET_MAX
5158  push    104h                            
515b  les     bx,[bp+6h]                      
515e  push    word ptr es:[bx+6h]             
5162  push    word ptr es:[bx+4h]             
5166  call far M007.M007_PUTVALUE             ; AP_EHT_SET_MIN
516b  push    1Ch                             
516d  les     bx,[bp+6h]                      
5170  push    word ptr es:[bx+2h]             
5174  push    word ptr es:[bx]                
5177  call far M007.M007_PUTHIGH              ; AP_ACTUALKV
517c  push    1Ah                             
517e  les     bx,[bp+6h]                      
5181  push    word ptr es:[bx+2h]             
5185  push    word ptr es:[bx]                
5188  call far M007.M007_PUTHIGH              ; AP_MANUALKV
518d  push    18h                             
518f  les     bx,[bp+6h]                      
5192  push    word ptr es:[bx+2h]             
5196  push    word ptr es:[bx]                
5199  call far M007.M007_PUTHIGH              ; AP_TARGETKV
519e  push    1Ah                             
51a0  les     bx,[bp+6h]                      
51a3  push    word ptr es:[bx+6h]             
51a7  push    word ptr es:[bx+4h]             
51ab  call far M007.M007_PUTLOW               ; AP_MANUALKV
51b0  push    18h                             
51b2  les     bx,[bp+6h]                      
51b5  push    word ptr es:[bx+6h]             
51b9  push    word ptr es:[bx+4h]             
51bd  call far M007.M007_PUTLOW               ; AP_TARGETKV
51c2  les     bx,[bp+6h]                      
51c5  cmp     byte ptr es:[bx+0Ah],58h        
51ca  jne     51DCh                           
51cc  push    0C4h                            
51cf  push    word ptr [42Ah]                 ; [ds] f32 here = 0
51d3  push    word ptr [428h]                 ; [ds] f32 here = 0
51d7  call far M007.M007_PUTLOW               ; AP_COLLECTOR_BIAS
51dc  pop     ds                              
51dd  leave                                   
51de  retf                                    
51df  add     [bx+si],al                      

; ----- sub_51e0 -----
51e0  mov     ax,50F1h                        ; segment seg2:0000
51e3  push    bp                              
51e4  mov     bp,sp                           
51e6  push    ds                              
51e7  mov     ds,ax                           
51e9  les     bx,[bp+6h]                      
51ec  cmp     word ptr es:[bx],0h             
51f0  jne     51F5h                           
51f2  jmp     5294h                           
51f5  push    0Fh                             
51f7  call far M007.M007_GETSTATE             ; DP_EHTCOMMSFAIL
51fc  dec     ax                              
51fd  jne     5202h                           
51ff  jmp     5282h                           
5202  les     bx,[bp+6h]                      
5205  cmp     word ptr es:[bx],1h             
5209  jne     5210h                           
520b  push    1DEh                            
520e  jmp     5224h                           
5210  cmp     word ptr es:[bx],2h             
5214  jne     521Bh                           
5216  push    1DAh                            
5219  jmp     5224h                           
521b  cmp     word ptr es:[bx],4h             
521f  jne     522Bh                           
5221  push    1DBh                            
5224  push    0h                              
5226  push    8000h                           
5229  jmp     5252h                           
522b  cmp     word ptr es:[bx],80h            
5230  jne     5257h                           
5232  inc     word ptr [0E4h]                 
5236  cmp     word ptr [0E4h],1h              
523b  jne     5249h                           
523d  push    1DDh                            
5240  push    0h                              
5242  push    0h                              
5244  push    0C000h                          
5247  jmp     527Dh                           
5249  push    1DDh                            
524c  mov     ax,[0E4h]                       
524f  cwd                                     
5250  push    dx                              
5251  push    ax                              
5252  push    2000h                           
5255  jmp     527Dh                           
5257  inc     word ptr [0E4h]                 
525b  cmp     word ptr [0E4h],1h              
5260  jne     526Fh                           
5262  push    225h                            
5265  sub     al,al                           
5267  mov     ah,es:[bx]                      
526a  cwd                                     
526b  push    dx                              
526c  push    ax                              
526d  jmp     5244h                           
526f  push    225h                            
5272  sub     al,al                           
5274  mov     ah,es:[bx]                      
5277  cwd                                     
5278  push    dx                              
5279  push    ax                              
527a  push    5000h                           
527d  call far M007.UIF_LOG                   
5282  cmp     word ptr [0E4h],1h              
5287  jle     52A3h                           
5289  push    0Fh                             
528b  push    1h                              
528d  call far M007.M007_PUTSTATE             ; DP_EHTCOMMSFAIL = 1
5292  jmp     52A3h                           
5294  push    0Fh                             
5296  push    0h                              
5298  call far M007.M007_PUTSTATE             ; DP_EHTCOMMSFAIL = 0
529d  mov     word ptr [0E4h],0h              
52a3  les     bx,[bp+6h]                      
52a6  cmp     word ptr es:[bx+2h],0h          
52ab  je      52D8h                           
52ad  push    26h                             
52af  call far M007.M007_GETSTATE             ; DP_FIL_BLOWN
52b4  dec     ax                              
52b5  je      52CFh                           
52b7  push    1B1h                            
52ba  push    0h                              
52bc  push    0h                              
52be  push    2000h                           
52c1  call far M007.UIF_LOG                   
52c6  push    0Eh                             
52c8  push    0h                              
52ca  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 0
52cf  push    26h                             
52d1  push    1h                              
52d3  call far M007.M007_PUTSTATE             ; DP_FIL_BLOWN = 1
52d8  les     bx,[bp+6h]                      
52db  cmp     word ptr es:[bx+4h],0h          
52e0  je      530Ah                           
52e2  push    27h                             
52e4  call far M007.M007_GETSTATE             ; DP_EHT_TRIPPED
52e9  dec     ax                              
52ea  je      5304h                           
52ec  push    1B2h                            
52ef  push    0h                              
52f1  push    0h                              
52f3  push    2000h                           
52f6  call far M007.UIF_LOG                   
52fb  push    0Eh                             
52fd  push    0h                              
52ff  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 0
5304  push    27h                             
5306  push    1h                              
5308  jmp     530Eh                           
530a  push    27h                             
530c  push    0h                              
530e  call far M007.M007_PUTSTATE             ; DP_EHT_TRIPPED = 1
5313  les     bx,[bp+6h]                      
5316  cmp     word ptr es:[bx+6h],0h          
531b  je      532Ch                           
531d  push    0Eh                             
531f  push    0h                              
5321  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 0
5326  push    29h                             
5328  push    0h                              
532a  jmp     5337h                           
532c  push    29h                             
532e  call far M007.M007_GETSTATE             ; DP_EHT_VAC_READY = 0
5333  push    29h                             
5335  push    1h                              
5337  call far M007.M007_PUTSTATE             ; DP_EHT_VAC_READY = 1
533c  les     bx,[bp+6h]                      
533f  cmp     word ptr es:[bx+8h],0h          
5344  je      536Eh                           
5346  push    28h                             
5348  call far M007.M007_GETSTATE             ; DP_EHT_RESET
534d  dec     ax                              
534e  je      5368h                           
5350  push    0Eh                             
5352  push    0h                              
5354  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 0
5359  push    1B4h                            
535c  push    0h                              
535e  push    0h                              
5360  push    2000h                           
5363  call far M007.UIF_LOG                   
5368  push    28h                             
536a  push    1h                              
536c  jmp     5372h                           
536e  push    28h                             
5370  push    0h                              
5372  call far M007.M007_PUTSTATE             ; DP_EHT_RESET = 1
5377  les     bx,[bp+6h]                      
537a  cmp     word ptr es:[bx+0Ch],0h         
537f  je      53A4h                           
5381  push    0EAh                            
5384  call far M007.M007_GETSTATE             ; DP_EXTRACTOR_TRIP
5389  dec     ax                              
538a  je      53AEh                           
538c  cmp     word ptr [6Eh],0h               
5391  jne     53AEh                           
5393  push    207h                            
5396  push    0h                              
5398  push    0h                              
539a  push    2000h                           
539d  call far M007.UIF_LOG                   
53a2  jmp     53AEh                           
53a4  push    0EAh                            
53a7  push    0h                              
53a9  call far M007.M007_PUTSTATE             ; DP_EXTRACTOR_TRIP = 0
53ae  les     bx,[bp+6h]                      
53b1  cmp     word ptr es:[bx+0Eh],0h         
53b6  je      53D4h                           
53b8  push    0EBh                            
53bb  call far M007.M007_GETSTATE             ; DP_EMERGENCY_RUNDOWN
53c0  dec     ax                              
53c1  je      53DEh                           
53c3  push    208h                            
53c6  push    0h                              
53c8  push    0h                              
53ca  push    2000h                           
53cd  call far M007.UIF_LOG                   
53d2  jmp     53DEh                           
53d4  push    0EBh                            
53d7  push    0h                              
53d9  call far M007.M007_PUTSTATE             ; DP_EMERGENCY_RUNDOWN = 0
53de  les     bx,[bp+6h]                      
53e1  cmp     word ptr es:[bx+0Ah],0h         
53e6  je      5419h                           
53e8  push    146h                            
53eb  call far M007.M007_GETSTATE             ; DP_EHT_INTERLOCK_OK
53f0  dec     ax                              
53f1  jne     542Fh                           
53f3  push    146h                            
53f6  push    0h                              
53f8  call far M007.M007_PUTSTATE             ; DP_EHT_INTERLOCK_OK = 0
53fd  push    0Eh                             
53ff  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
5404  dec     ax                              
5405  je      5413h                           
5407  push    0Eh                             
5409  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
540e  cmp     ax,8h                           
5411  jne     542Fh                           
5413  push    0Eh                             
5415  push    0Ah                             
5417  jmp     542Ah                           
5419  push    146h                            
541c  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE = 10
5421  or      ax,ax                           
5423  jne     542Fh                           
5425  push    146h                            
5428  push    1h                              
542a  call far M007.M007_PUTSTATE             ; DP_EHT_INTERLOCK_OK = 1
542f  pop     ds                              
5430  leave                                   
5431  retf                                    

; ----- sub_5432 -----
5432  mov     ax,51E1h                        ; segment seg2:0000
5435  enter   0Ch,0h                          
5439  push    ds                              
543a  mov     ds,ax                           
543c  push    0Eh                             
543e  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
5443  jmp     55C0h                           
5446  cmp     word ptr [84h],0h               
544b  je      545Ch                           
544d  push    0Bh                             
544f  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
5454  cmp     ax,4h                           
5457  je      545Ch                           
5459  jmp     55E6h                           
545c  cmp     word ptr [86h],0h               
5461  je      5466h                           
5463  jmp     55E6h                           
5466  push    0Eh                             
5468  push    1h                              
546a  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 1
546f  push    1Ah                             
5471  push    1Ch                             
5473  lea     ax,[bp-4h]                      
5476  push    ax                              
5477  call far M007.M007_GETVALUE             ; AP_MANUALKV = 28
547c  mov     bx,ax                           
547e  push    word ptr ss:[bx+2h]             
5482  push    word ptr ss:[bx]                
5485  call far M007.M007_PUTVALUE             
548a  push    1Bh                             
548c  push    1Dh                             
548e  lea     ax,[bp-8h]                      
5491  push    ax                              
5492  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT = 29
5497  mov     bx,ax                           
5499  push    word ptr ss:[bx+2h]             
549d  push    word ptr ss:[bx]                
54a0  call far M007.M007_PUTVALUE             
54a5  push    0E0h                            
54a8  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
54ad  dec     ax                              
54ae  jne     54CCh                           
54b0  push    1Ah                             
54b2  lea     ax,[bp-0Ch]                     
54b5  push    ax                              
54b6  call far M007.M007_GETVALUE             ; AP_MANUALKV
54bb  mov     bx,ax                           
54bd  push    word ptr ss:[bx+2h]             
54c1  push    word ptr ss:[bx]                
54c4  call far sub_311a                       
54c9  add     sp,4h                           
54cc  push    0Dh                             
54ce  call far M007.M007_GETSTATE             ; DP_NEWFILAMENT
54d3  dec     ax                              
54d4  jne     54DFh                           
54d6  push    0Dh                             
54d8  push    0h                              
54da  call far M007.M007_PUTSTATE             ; DP_NEWFILAMENT = 0
54df  push    26h                             
54e1  call far M007.M007_GETSTATE             ; DP_FIL_BLOWN
54e6  cmp     ax,2h                           
54e9  jne     54F4h                           
54eb  push    26h                             
54ed  push    0h                              
54ef  call far M007.M007_PUTSTATE             ; DP_FIL_BLOWN = 0
54f4  xor     ax,ax                           
54f6  mov     [84h],ax                        
54f9  mov     [86h],ax                        
54fc  call far sub_6f08                       
5501  pop     ds                              
5502  leave                                   
5503  retf                                    
5504  cmp     word ptr [84h],0h               
5509  jne     5526h                           
550b  cmp     word ptr [86h],0h               
5510  jne     5526h                           
5512  push    0Eh                             
5514  push    9h                              
5516  jmp     54EFh                           
5518  cmp     word ptr [84h],0h               
551d  jne     5526h                           
551f  cmp     word ptr [86h],0h               
5524  je      5529h                           
5526  jmp     55E6h                           
5529  push    0Eh                             
552b  push    1h                              
552d  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 9
5532  push    1Ah                             
5534  push    1Ch                             
5536  lea     ax,[bp-0Ch]                     
5539  push    ax                              
553a  call far M007.M007_GETVALUE             ; AP_MANUALKV = 28
553f  mov     bx,ax                           
5541  push    word ptr ss:[bx+2h]             
5545  push    word ptr ss:[bx]                
5548  call far M007.M007_PUTVALUE             
554d  push    1Bh                             
554f  push    1Dh                             
5551  lea     ax,[bp-8h]                      
5554  push    ax                              
5555  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT = 29
555a  mov     bx,ax                           
555c  push    word ptr ss:[bx+2h]             
5560  push    word ptr ss:[bx]                
5563  call far M007.M007_PUTVALUE             
5568  push    0E0h                            
556b  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
5570  dec     ax                              
5571  je      5576h                           
5573  jmp     54CCh                           
5576  push    1Ah                             
5578  lea     ax,[bp-4h]                      
557b  jmp     54B5h                           
557e  cmp     word ptr [84h],0h               
5583  jne     55E6h                           
5585  push    0Eh                             
5587  push    0Ah                             
5589  jmp     54EFh                           
558c  cmp     word ptr [84h],0h               
5591  jne     55E6h                           
5593  cmp     word ptr [86h],0h               
5598  je      55A6h                           
559a  push    0Bh                             
559c  call far M007.M007_GETSTATE             ; DP_APERTURE = 14
55a1  cmp     ax,4h                           
55a4  jne     55E6h                           
55a6  push    0Eh                             
55a8  push    7h                              
55aa  jmp     54EFh                           
55ad  cmp     word ptr [84h],0h               
55b2  jne     55E6h                           
55b4  cmp     word ptr [86h],0h               
55b9  jne     55E6h                           
55bb  push    0Eh                             
55bd  jmp     54EDh                           
55c0  cmp     ax,0Ah                          
55c3  jbe     55C8h                           
55c5  jmp     54FCh                           
55c8  add     ax,ax                           
55ca  xchg    ax,bx                           
55cb  jmp     word ptr cs:[bx+55D0h]          
55d0  cld                                     
55d1  push    sp                              
55d2  cld                                     
55d3  push    sp                              
55d4  inc     si                              
55d5  push    sp                              
55d6  lodsw                                   
55d7  push    bp                              
55d8  mov     [di+4h],ss                      
55db  push    bp                              
55dc  sbb     [di-4h],dl                      
55df  push    sp                              
55e0  jle     5637h                           
55e2  cld                                     
55e3  push    sp                              
55e4  cld                                     
55e5  push    sp                              
55e6  pop     ds                              
55e7  leave                                   
55e8  retf                                    
55e9  add     [bx+si],al                      

; ----- sub_55ea -----
55ea  mov     ax,5433h                        ; segment seg2:0000
55ed  push    bp                              
55ee  mov     bp,sp                           
55f0  push    ds                              
55f1  mov     ds,ax                           
55f3  wait                                    
55f4  fld     dword ptr [bp+0Ah]              
55f7  wait                                    
55f8  fld     dword ptr [bp+6h]               
55fb  call far sub_0330                       
5600  wait                                    
5601  fstp    dword ptr [132h]                ; [ds] = 0
5605  nop                                     
5606  wait                                    
5607  mov     ax,132h                         
560a  mov     dx,ds                           
560c  pop     ds                              
560d  leave                                   
560e  retf                                    
560f  add     [bx+si],al                      

; ----- sub_5610 -----
5610  mov     ax,55EBh                        ; segment seg2:0000
5613  enter   0Ch,0h                          
5617  push    ds                              
5618  mov     ds,ax                           
561a  push    17h                             
561c  wait                                    
561d  fld     dword ptr [bp+6h]               
5620  wait                                    
5621  fstp    dword ptr [bp-0Ch]              
5624  nop                                     
5625  wait                                    
5626  push    word ptr [bp-0Ah]               
5629  push    word ptr [bp-0Ch]               
562c  push    17h                             
562e  lea     ax,[bp-4h]                      
5631  push    ax                              
5632  call far M007.M007_GETVALUE             ; AP_TARGETCURRENT = 23
5637  mov     bx,ax                           
5639  push    word ptr ss:[bx+2h]             
563d  push    word ptr ss:[bx]                
5640  call far sub_55ea                       
5645  add     sp,8h                           
5648  mov     es,dx                           
564a  mov     bx,ax                           
564c  push    word ptr es:[bx+2h]             
5650  push    word ptr es:[bx]                
5653  call far M007.M007_PUTVALUE             
5658  push    1Bh                             
565a  wait                                    
565b  fld     dword ptr [bp-0Ch]              
565e  sub     sp,4h                           
5661  mov     bx,sp                           
5663  wait                                    
5664  fstp    dword ptr ss:[bx]               
5667  nop                                     
5668  wait                                    
5669  push    1Bh                             
566b  lea     ax,[bp-8h]                      
566e  push    ax                              
566f  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT = 27
5674  mov     bx,ax                           
5676  push    word ptr ss:[bx+2h]             
567a  push    word ptr ss:[bx]                
567d  call far sub_55ea                       
5682  add     sp,8h                           
5685  mov     es,dx                           
5687  mov     bx,ax                           
5689  push    word ptr es:[bx+2h]             
568d  push    word ptr es:[bx]                
5690  call far M007.M007_PUTVALUE             
5695  pop     ds                              
5696  leave                                   
5697  retf                                    

; ----- sub_5698 -----
5698  mov     ax,5611h                        ; segment seg2:0000
569b  enter   8h,0h                           
569f  push    ds                              
56a0  mov     ds,ax                           
56a2  mov     ax,[428h]                       
56a5  mov     dx,[42Ah]                       
56a9  mov     [bp-4h],ax                      
56ac  mov     [bp-2h],dx                      
56af  mov     ax,[bp+6h]                      
56b2  dec     ax                              
56b3  je      56C4h                           
56b5  dec     ax                              
56b6  je      56BBh                           
56b8  dec     ax                              
56b9  jne     56C4h                           
56bb  mov     ax,[430h]                       
56be  mov     dx,[432h]                       
56c2  jmp     56CBh                           
56c4  mov     ax,[42Ch]                       
56c7  mov     dx,[42Eh]                       
56cb  mov     [bp-4h],ax                      
56ce  mov     [bp-2h],dx                      
56d1  push    19h                             
56d3  wait                                    
56d4  fld     dword ptr [bp-4h]               
56d7  wait                                    
56d8  fstp    dword ptr [bp-8h]               
56db  nop                                     
56dc  wait                                    
56dd  push    word ptr [bp-6h]                
56e0  push    word ptr [bp-8h]                
56e3  call far M007.M007_PUTHIGH              ; AP_USERMAXCURRENT
56e8  wait                                    
56e9  fld     dword ptr [bp-8h]               
56ec  wait                                    
56ed  fstp    dword ptr [132h]                ; [ds] = 0
56f1  nop                                     
56f2  wait                                    
56f3  mov     ax,132h                         
56f6  mov     dx,ds                           
56f8  pop     ds                              
56f9  leave                                   
56fa  retf                                    
56fb  add     [bx+si],al                      

; ----- sub_56fc -----
56fc  mov     ax,5699h                        ; segment seg2:0000
56ff  push    bp                              
5700  mov     bp,sp                           
5702  push    ds                              
5703  mov     ds,ax                           
5705  mov     ax,[bp+6h]                      
5708  dec     ax                              
5709  je      571Eh                           
570b  push    23h                             
570d  call far M007.ISLICENCED                
5712  dec     ax                              
5713  jne     5740h                           
5715  mov     ax,[420h]                       
5718  mov     dx,[422h]                       
571c  jmp     5731h                           
571e  push    0E0h                            
5721  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
5726  or      ax,ax                           
5728  jne     570Bh                           
572a  mov     ax,[434h]                       
572d  mov     dx,[436h]                       
5731  mov     [132h],ax                       
5734  mov     [134h],dx                       
5738  mov     ax,132h                         
573b  mov     dx,ds                           
573d  pop     ds                              
573e  leave                                   
573f  retf                                    
5740  mov     ax,[438h]                       
5743  mov     dx,[43Ah]                       
5747  jmp     5731h                           
5749  add     [bx+si],al                      

; ----- sub_574a -----
574a  mov     ax,56FDh                        ; segment seg2:0000
574d  enter   0Ch,0h                          
5751  push    ds                              
5752  mov     ds,ax                           
5754  push    82h                             
5757  lea     ax,[bp-0Ch]                     
575a  push    ax                              
575b  call far M007.M007_GETVALUE             ; AP_EHT_SET_MAX = 306
5760  mov     bx,ax                           
5762  mov     ax,ss:[bx]                      
5765  mov     dx,ss:[bx+2h]                   
5769  mov     [bp-4h],ax                      
576c  mov     [bp-2h],dx                      
576f  push    word ptr [bp+6h]                
5772  call far sub_56fc                       
5777  pop     bx                              
5778  mov     es,dx                           
577a  mov     bx,ax                           
577c  wait                                    
577d  fld     dword ptr es:[bx]               
5780  wait                                    
5781  fst     dword ptr [bp-8h]               
5784  nop                                     
5785  wait                                    
5786  lea     bx,[bp-4h]                      
5789  wait                                    
578a  fld     dword ptr ss:[bx]               
578d  call far sub_0330                       
5792  wait                                    
5793  fstp    dword ptr [132h]                ; [ds] = 0
5797  nop                                     
5798  wait                                    
5799  mov     ax,132h                         
579c  mov     dx,ds                           
579e  pop     ds                              
579f  leave                                   
57a0  retf                                    
57a1  add     [bx+si],al                      

; ----- sub_57a2 -----
57a2  mov     ax,574Bh                        ; segment seg2:0000
57a5  enter   0Ch,0h                          
57a9  push    ds                              
57aa  mov     ds,ax                           
57ac  push    18h                             
57ae  wait                                    
57af  fld     dword ptr [bp+6h]               
57b2  wait                                    
57b3  fstp    dword ptr [bp-0Ch]              
57b6  nop                                     
57b7  wait                                    
57b8  push    word ptr [bp-0Ah]               
57bb  push    word ptr [bp-0Ch]               
57be  push    18h                             
57c0  lea     ax,[bp-4h]                      
57c3  push    ax                              
57c4  call far M007.M007_GETVALUE             ; AP_TARGETKV = 24
57c9  mov     bx,ax                           
57cb  push    word ptr ss:[bx+2h]             
57cf  push    word ptr ss:[bx]                
57d2  call far sub_55ea                       
57d7  add     sp,8h                           
57da  mov     es,dx                           
57dc  mov     bx,ax                           
57de  push    word ptr es:[bx+2h]             
57e2  push    word ptr es:[bx]                
57e5  call far M007.M007_PUTVALUE             
57ea  push    1Ah                             
57ec  wait                                    
57ed  fld     dword ptr [bp-0Ch]              
57f0  sub     sp,4h                           
57f3  mov     bx,sp                           
57f5  wait                                    
57f6  fstp    dword ptr ss:[bx]               
57f9  nop                                     
57fa  wait                                    
57fb  push    1Ah                             
57fd  lea     ax,[bp-8h]                      
5800  push    ax                              
5801  call far M007.M007_GETVALUE             ; AP_MANUALKV = 26
5806  mov     bx,ax                           
5808  push    word ptr ss:[bx+2h]             
580c  push    word ptr ss:[bx]                
580f  call far sub_55ea                       
5814  add     sp,8h                           
5817  mov     es,dx                           
5819  mov     bx,ax                           
581b  push    word ptr es:[bx+2h]             
581f  push    word ptr es:[bx]                
5822  call far M007.M007_PUTVALUE             
5827  pop     ds                              
5828  leave                                   
5829  retf                                    

; ----- sub_582a -----
582a  mov     ax,57A3h                        ; segment seg2:0000
582d  enter   0Ch,0h                          
5831  push    ds                              
5832  mov     ds,ax                           
5834  push    word ptr [bp+6h]                
5837  call far sub_5698                       
583c  pop     bx                              
583d  mov     bx,ax                           
583f  mov     es,dx                           
5841  mov     ax,es:[bx]                      
5844  mov     dx,es:[bx+2h]                   
5848  mov     [bp-4h],ax                      
584b  mov     [bp-2h],dx                      
584e  push    19h                             
5850  lea     ax,[bp-0Ch]                     
5853  push    ax                              
5854  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
5859  mov     bx,ax                           
585b  wait                                    
585c  fld     dword ptr ss:[bx]               
585f  wait                                    
5860  fst     dword ptr [bp-8h]               
5863  nop                                     
5864  wait                                    
5865  lea     bx,[bp-4h]                      
5868  wait                                    
5869  fld     dword ptr ss:[bx]               
586c  call far sub_0330                       
5871  wait                                    
5872  fstp    dword ptr [132h]                ; [ds] = 0
5876  nop                                     
5877  wait                                    
5878  mov     ax,132h                         
587b  mov     dx,ds                           
587d  pop     ds                              
587e  leave                                   
587f  retf                                    

; ----- sub_5880 -----
5880  mov     ax,582Bh                        ; segment seg2:0000
5883  push    bp                              
5884  mov     bp,sp                           
5886  push    ds                              
5887  mov     ds,ax                           
5889  mov     ax,[bp+6h]                      
588c  dec     ax                              
588d  jl      5897h                           
588f  jo      5897h                           
5891  dec     ax                              
5892  jle     58A0h                           
5894  dec     ax                              
5895  je      58B6h                           
5897  mov     ax,[444h]                       
589a  mov     dx,[446h]                       
589e  jmp     58A7h                           
58a0  mov     ax,[43Ch]                       
58a3  mov     dx,[43Eh]                       
58a7  mov     [132h],ax                       
58aa  mov     [134h],dx                       
58ae  mov     ax,132h                         
58b1  mov     dx,ds                           
58b3  pop     ds                              
58b4  leave                                   
58b5  retf                                    
58b6  mov     ax,[440h]                       
58b9  mov     dx,[442h]                       
58bd  jmp     58A7h                           
58bf  add     [bx+si],al                      

; ----- sub_58c0 -----
58c0  mov     ax,5881h                        ; segment seg2:0000
58c3  push    bp                              
58c4  mov     bp,sp                           
58c6  push    ds                              
58c7  mov     ds,ax                           
58c9  mov     ax,[bp+6h]                      
58cc  dec     ax                              
58cd  je      58DEh                           
58cf  dec     ax                              
58d0  je      58F4h                           
58d2  dec     ax                              
58d3  je      58F4h                           
58d5  mov     ax,[444h]                       
58d8  mov     dx,[446h]                       
58dc  jmp     58E5h                           
58de  mov     ax,[43Ch]                       
58e1  mov     dx,[43Eh]                       
58e5  mov     [132h],ax                       
58e8  mov     [134h],dx                       
58ec  mov     ax,132h                         
58ef  mov     dx,ds                           
58f1  pop     ds                              
58f2  leave                                   
58f3  retf                                    
58f4  mov     ax,[440h]                       
58f7  mov     dx,[442h]                       
58fb  jmp     58E5h                           
58fd  add     [bx+si],al                      

; ----- sub_58fe -----
58fe  mov     ax,58C1h                        ; segment seg2:0000
5901  enter   0Ch,0h                          
5905  push    ds                              
5906  mov     ds,ax                           
5908  push    word ptr [bp+6h]                
590b  call far sub_5880                       
5910  pop     bx                              
5911  mov     bx,ax                           
5913  mov     es,dx                           
5915  mov     ax,es:[bx]                      
5918  mov     dx,es:[bx+2h]                   
591c  mov     [bp-4h],ax                      
591f  mov     [bp-2h],dx                      
5922  push    81h                             
5925  lea     ax,[bp-0Ch]                     
5928  push    ax                              
5929  call far M007.M007_GETVALUE             ; AP_BEAM_CURRENT = 306
592e  mov     bx,ax                           
5930  mov     ax,ss:[bx]                      
5933  mov     dx,ss:[bx+2h]                   
5937  mov     [bp-8h],ax                      
593a  mov     [bp-6h],dx                      
593d  push    0Bh                             
593f  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
5944  cmp     ax,[bp+6h]                      
5947  je      596Dh                           
5949  push    word ptr [bp+6h]                
594c  call far sub_58c0                       
5951  pop     bx                              
5952  mov     bx,ax                           
5954  mov     es,dx                           
5956  mov     ax,es:[bx]                      
5959  mov     dx,es:[bx+2h]                   
595d  mov     [bp-8h],ax                      
5960  mov     [bp-6h],dx                      
5963  push    81h                             
5966  push    dx                              
5967  push    ax                              
5968  call far M007.M007_PUTVALUE             ; AP_BEAM_CURRENT
596d  wait                                    
596e  fld     dword ptr [bp-8h]               
5971  wait                                    
5972  fst     dword ptr [bp-0Ch]              
5975  wait                                    
5976  fcom    dword ptr [bp-4h]               
5979  wait                                    
597a  fstp    st(0)                           
597c  wait                                    
597d  fstsw   ax                              
597f  sahf                                    
5980  ja      5994h                           
5982  wait                                    
5983  fld     dword ptr [bp-0Ch]              
5986  wait                                    
5987  fcom    qword ptr [448h]                ; [ds] = 0
598b  wait                                    
598c  fstp    st(0)                           
598e  wait                                    
598f  fstsw   ax                              
5991  sahf                                    
5992  jne     59A2h                           
5994  push    81h                             
5997  push    word ptr [bp-2h]                
599a  push    word ptr [bp-4h]                
599d  call far M007.M007_PUTVALUE             ; AP_BEAM_CURRENT
59a2  push    81h                             
59a5  push    word ptr [bp-2h]                
59a8  push    word ptr [bp-4h]                
59ab  call far M007.M007_PUTHIGH              ; AP_BEAM_CURRENT
59b0  pop     ds                              
59b1  leave                                   
59b2  retf                                    
59b3  add     [bx+si],al                      

; ----- sub_59b4 -----
59b4  mov     ax,58FFh                        ; segment seg2:0000
59b7  enter   10h,0h                          
59bb  push    ds                              
59bc  mov     ds,ax                           
59be  push    83h                             
59c1  call far M007.M007_GETSTATE             ; DP_GSP
59c6  dec     ax                              
59c7  je      59CCh                           
59c9  jmp     5AC9h                           
59cc  lea     cx,[bp-4h]                      
59cf  push    ss                              
59d0  push    cx                              
59d1  lea     dx,[bp-8h]                      
59d4  push    ss                              
59d5  push    dx                              
59d6  call far TIGASEM.KILLGSPEHTANDFILRAMPING
59db  push    1Ch                             
59dd  lea     ax,[bp-0Ch]                     
59e0  push    ax                              
59e1  call far M007.M007_GETHIGH              ; AP_ACTUALKV
59e6  mov     bx,ax                           
59e8  wait                                    
59e9  fld     dword ptr ss:[bx]               
59ec  lea     bx,[bp-4h]                      
59ef  wait                                    
59f0  fcom    dword ptr ss:[bx]               
59f3  wait                                    
59f4  fstp    st(0)                           
59f6  wait                                    
59f7  fstsw   ax                              
59f9  sahf                                    
59fa  jae     5A16h                           
59fc  push    1Ch                             
59fe  lea     ax,[bp-10h]                     
5a01  push    ax                              
5a02  call far M007.M007_GETHIGH              ; AP_ACTUALKV
5a07  mov     bx,ax                           
5a09  mov     ax,ss:[bx]                      
5a0c  mov     dx,ss:[bx+2h]                   
5a10  mov     [bp-4h],ax                      
5a13  mov     [bp-2h],dx                      
5a16  push    1Ch                             
5a18  lea     ax,[bp-10h]                     
5a1b  push    ax                              
5a1c  call far M007.M007_GETLOW               ; AP_ACTUALKV
5a21  mov     bx,ax                           
5a23  wait                                    
5a24  fld     dword ptr ss:[bx]               
5a27  lea     bx,[bp-4h]                      
5a2a  wait                                    
5a2b  fcom    dword ptr ss:[bx]               
5a2e  wait                                    
5a2f  fstp    st(0)                           
5a31  wait                                    
5a32  fstsw   ax                              
5a34  sahf                                    
5a35  jbe     5A51h                           
5a37  push    1Ch                             
5a39  lea     ax,[bp-0Ch]                     
5a3c  push    ax                              
5a3d  call far M007.M007_GETLOW               ; AP_ACTUALKV
5a42  mov     bx,ax                           
5a44  mov     ax,ss:[bx]                      
5a47  mov     dx,ss:[bx+2h]                   
5a4b  mov     [bp-4h],ax                      
5a4e  mov     [bp-2h],dx                      
5a51  push    1Dh                             
5a53  lea     ax,[bp-10h]                     
5a56  push    ax                              
5a57  call far M007.M007_GETHIGH              ; AP_ACTUALCURRENT
5a5c  mov     bx,ax                           
5a5e  wait                                    
5a5f  fld     dword ptr ss:[bx]               
5a62  lea     bx,[bp-8h]                      
5a65  wait                                    
5a66  fcom    dword ptr ss:[bx]               
5a69  wait                                    
5a6a  fstp    st(0)                           
5a6c  wait                                    
5a6d  fstsw   ax                              
5a6f  sahf                                    
5a70  jae     5A8Ch                           
5a72  push    1Dh                             
5a74  lea     ax,[bp-0Ch]                     
5a77  push    ax                              
5a78  call far M007.M007_GETHIGH              ; AP_ACTUALCURRENT
5a7d  mov     bx,ax                           
5a7f  mov     ax,ss:[bx]                      
5a82  mov     dx,ss:[bx+2h]                   
5a86  mov     [bp-8h],ax                      
5a89  mov     [bp-6h],dx                      
5a8c  push    1Dh                             
5a8e  lea     ax,[bp-10h]                     
5a91  push    ax                              
5a92  call far M007.M007_GETLOW               ; AP_ACTUALCURRENT
5a97  mov     bx,ax                           
5a99  wait                                    
5a9a  fld     dword ptr ss:[bx]               
5a9d  lea     bx,[bp-8h]                      
5aa0  wait                                    
5aa1  fcom    dword ptr ss:[bx]               
5aa4  wait                                    
5aa5  fstp    st(0)                           
5aa7  wait                                    
5aa8  fstsw   ax                              
5aaa  sahf                                    
5aab  jbe     5AFDh                           
5aad  push    1Dh                             
5aaf  lea     ax,[bp-0Ch]                     
5ab2  push    ax                              
5ab3  call far M007.M007_GETLOW               ; AP_ACTUALCURRENT
5ab8  mov     bx,ax                           
5aba  mov     ax,ss:[bx]                      
5abd  mov     dx,ss:[bx+2h]                   
5ac1  mov     [bp-8h],ax                      
5ac4  mov     [bp-6h],dx                      
5ac7  jmp     5AFDh                           
5ac9  push    1Dh                             
5acb  lea     ax,[bp-10h]                     
5ace  push    ax                              
5acf  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
5ad4  mov     bx,ax                           
5ad6  mov     ax,ss:[bx]                      
5ad9  mov     dx,ss:[bx+2h]                   
5add  mov     [bp-8h],ax                      
5ae0  mov     [bp-6h],dx                      
5ae3  push    1Ch                             
5ae5  lea     ax,[bp-0Ch]                     
5ae8  push    ax                              
5ae9  call far M007.M007_GETVALUE             ; AP_ACTUALKV
5aee  mov     bx,ax                           
5af0  mov     ax,ss:[bx]                      
5af3  mov     dx,ss:[bx+2h]                   
5af7  mov     [bp-4h],ax                      
5afa  mov     [bp-2h],dx                      
5afd  push    1Dh                             
5aff  lea     ax,[bp-10h]                     
5b02  push    ax                              
5b03  call far M007.M007_GETHIGH              ; AP_ACTUALCURRENT
5b08  mov     bx,ax                           
5b0a  wait                                    
5b0b  fld     dword ptr ss:[bx]               
5b0e  lea     bx,[bp-8h]                      
5b11  wait                                    
5b12  fcom    dword ptr ss:[bx]               
5b15  wait                                    
5b16  fstp    st(0)                           
5b18  wait                                    
5b19  fstsw   ax                              
5b1b  sahf                                    
5b1c  jb      5B4Dh                           
5b1e  push    1Dh                             
5b20  lea     ax,[bp-0Ch]                     
5b23  push    ax                              
5b24  call far M007.M007_GETLOW               ; AP_ACTUALCURRENT
5b29  mov     bx,ax                           
5b2b  wait                                    
5b2c  fld     dword ptr ss:[bx]               
5b2f  lea     bx,[bp-8h]                      
5b32  wait                                    
5b33  fcom    dword ptr ss:[bx]               
5b36  wait                                    
5b37  fstp    st(0)                           
5b39  wait                                    
5b3a  fstsw   ax                              
5b3c  sahf                                    
5b3d  ja      5B4Dh                           
5b3f  push    1Dh                             
5b41  push    word ptr ss:[bx+2h]             
5b45  push    word ptr ss:[bx]                
5b48  call far M007.M007_PUTVALUE             ; AP_ACTUALCURRENT
5b4d  push    1Ch                             
5b4f  lea     ax,[bp-10h]                     
5b52  push    ax                              
5b53  call far M007.M007_GETHIGH              ; AP_ACTUALKV
5b58  mov     bx,ax                           
5b5a  wait                                    
5b5b  fld     dword ptr ss:[bx]               
5b5e  lea     bx,[bp-4h]                      
5b61  wait                                    
5b62  fcom    dword ptr ss:[bx]               
5b65  wait                                    
5b66  fstp    st(0)                           
5b68  wait                                    
5b69  fstsw   ax                              
5b6b  sahf                                    
5b6c  jb      5B9Dh                           
5b6e  push    1Ch                             
5b70  lea     ax,[bp-0Ch]                     
5b73  push    ax                              
5b74  call far M007.M007_GETLOW               ; AP_ACTUALKV
5b79  mov     bx,ax                           
5b7b  wait                                    
5b7c  fld     dword ptr ss:[bx]               
5b7f  lea     bx,[bp-4h]                      
5b82  wait                                    
5b83  fcom    dword ptr ss:[bx]               
5b86  wait                                    
5b87  fstp    st(0)                           
5b89  wait                                    
5b8a  fstsw   ax                              
5b8c  sahf                                    
5b8d  ja      5B9Dh                           
5b8f  push    1Ch                             
5b91  push    word ptr ss:[bx+2h]             
5b95  push    word ptr ss:[bx]                
5b98  call far M007.M007_PUTVALUE             ; AP_ACTUALKV
5b9d  xor     ax,ax                           
5b9f  mov     [7Ch],ax                        
5ba2  mov     [7Eh],ax                        
5ba5  mov     [80h],ax                        
5ba8  mov     [82h],ax                        
5bab  mov     [84h],ax                        
5bae  mov     [86h],ax                        
5bb1  mov     [88h],ax                        
5bb4  mov     [8Ah],ax                        
5bb7  pop     ds                              
5bb8  leave                                   
5bb9  retf                                    

; ----- sub_5bba -----
5bba  mov     ax,59B5h                        ; segment seg2:0000
5bbd  push    bp                              
5bbe  mov     bp,sp                           
5bc0  push    ds                              
5bc1  mov     ds,ax                           
5bc3  push    1Ch                             
5bc5  push    word ptr [42Ah]                 ; [ds] f32 here = 0
5bc9  push    word ptr [428h]                 ; [ds] f32 here = 0
5bcd  call far M007.M007_PUTVALUE             ; AP_ACTUALKV
5bd2  push    1Dh                             
5bd4  push    word ptr [42Ah]                 ; [ds] f32 here = 0
5bd8  push    word ptr [428h]                 ; [ds] f32 here = 0
5bdc  call far M007.M007_PUTVALUE             ; AP_ACTUALCURRENT
5be1  push    12Fh                            
5be4  push    word ptr [42Ah]                 ; [ds] f32 here = 0
5be8  push    word ptr [428h]                 ; [ds] f32 here = 0
5bec  call far M007.M007_PUTVALUE             ; AP_ACTUALEXT
5bf1  push    130h                            
5bf4  push    word ptr [42Ah]                 ; [ds] f32 here = 0
5bf8  push    word ptr [428h]                 ; [ds] f32 here = 0
5bfc  call far M007.M007_PUTVALUE             ; AP_ACTUALSUPP
5c01  push    131h                            
5c04  push    word ptr [42Ah]                 ; [ds] f32 here = 0
5c08  push    word ptr [428h]                 ; [ds] f32 here = 0
5c0c  call far M007.M007_PUTVALUE             ; AP_ACTUALLENS
5c11  push    0CDh                            
5c14  push    word ptr [452h]                 
5c18  push    word ptr [450h]                 ; [ds] f32 here = 100
5c1c  call far M007.M007_PUTVALUE             ; AP_PM1
5c21  push    0CEh                            
5c24  push    word ptr [452h]                 
5c28  push    word ptr [450h]                 ; [ds] f32 here = 100
5c2c  call far M007.M007_PUTVALUE             ; AP_PM2
5c31  push    0CFh                            
5c34  push    word ptr [452h]                 
5c38  push    word ptr [450h]                 ; [ds] f32 here = 100
5c3c  call far M007.M007_PUTVALUE             ; AP_PM3
5c41  push    87h                             
5c44  push    1h                              
5c46  call far M007.M007_PUTSTATE             ; DP_PM1_INHIBIT = 1
5c4b  push    88h                             
5c4e  push    1h                              
5c50  call far M007.M007_PUTSTATE             ; DP_PM2_INHIBIT = 1
5c55  push    89h                             
5c58  push    1h                              
5c5a  call far M007.M007_PUTSTATE             ; DP_PM3_INHIBIT = 1
5c5f  push    8Bh                             
5c62  push    1h                              
5c64  call far M007.M007_PUTSTATE             ; DP_COLL_INHIBIT = 1
5c69  push    8Ah                             
5c6c  push    1h                              
5c6e  call far M007.M007_PUTSTATE             ; DP_SCINT_INHIBIT = 1
5c73  pop     ds                              
5c74  leave                                   
5c75  retf                                    

; ----- sub_5c76 -----
5c76  mov     ax,5BBBh                        ; segment seg2:0000
5c79  push    bp                              
5c7a  mov     bp,sp                           
5c7c  push    ds                              
5c7d  mov     ds,ax                           
5c7f  push    0Eh                             
5c81  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
5c86  call far sub_59b4                       
5c8b  cmp     word ptr [0D2h],0h              
5c90  je      5C97h                           
5c92  call far sub_5bba                       
5c97  pop     ds                              
5c98  leave                                   
5c99  retf                                    

; ----- sub_5c9a -----
5c9a  mov     ax,5C77h                        ; segment seg2:0000
5c9d  enter   4h,0h                           
5ca1  push    ds                              
5ca2  mov     ds,ax                           
5ca4  push    83h                             
5ca7  call far M007.M007_GETSTATE             ; DP_GSP
5cac  dec     ax                              
5cad  jne     5CC4h                           
5caf  push    word ptr [44Eh]                 ; [ds] f32 here = 0
5cb3  push    word ptr [44Ch]                 ; [ds] f32 here = 0
5cb7  push    word ptr [44Ah]                 ; [ds] f32 here = 0
5cbb  push    word ptr [448h]                 ; [ds] f32 here = 0
5cbf  call far TIGASEM.SETBEAMCURRENTGSPREQUEST
5cc4  push    81h                             
5cc7  lea     ax,[bp-4h]                      
5cca  push    ax                              
5ccb  call far M007.M007_GETVALUE             ; AP_BEAM_CURRENT
5cd0  mov     bx,ax                           
5cd2  mov     ax,ss:[bx]                      
5cd5  mov     dx,ss:[bx+2h]                   
5cd9  mov     [0E6h],ax                       
5cdc  mov     [0E8h],dx                       
5ce0  pop     ds                              
5ce1  leave                                   
5ce2  retf                                    
5ce3  add     [bx+si],al                      

; ----- sub_5ce4 -----
5ce4  mov     ax,5C9Bh                        ; segment seg2:0000
5ce7  push    bp                              
5ce8  mov     bp,sp                           
5cea  push    ds                              
5ceb  mov     ds,ax                           
5ced  mov     ax,[bp+6h]                      
5cf0  mov     [7Ah],ax                        
5cf3  pop     ds                              
5cf4  leave                                   
5cf5  retf                                    

; ----- sub_5cf6 -----
5cf6  mov     ax,5CE5h                        ; segment seg2:0000
5cf9  push    bp                              
5cfa  mov     bp,sp                           
5cfc  push    ds                              
5cfd  mov     ds,ax                           
5cff  mov     ax,[bp+6h]                      
5d02  mov     [78h],ax                        
5d05  pop     ds                              
5d06  leave                                   
5d07  retf                                    

; ----- sub_5d08 -----
5d08  mov     ax,5CF7h                        ; segment seg2:0000
5d0b  push    bp                              
5d0c  mov     bp,sp                           
5d0e  push    ds                              
5d0f  mov     ds,ax                           
5d11  mov     ax,1h                           
5d14  mov     [8Ah],ax                        
5d17  mov     [7Eh],ax                        
5d1a  pop     ds                              
5d1b  leave                                   
5d1c  retf                                    
5d1d  add     [bx+si],al                      

; ----- sub_5d1e -----
5d1e  mov     ax,5D09h                        ; segment seg2:0000
5d21  push    bp                              
5d22  mov     bp,sp                           
5d24  push    ds                              
5d25  mov     ds,ax                           
5d27  mov     ax,1h                           
5d2a  mov     [88h],ax                        
5d2d  mov     [7Ch],ax                        
5d30  pop     ds                              
5d31  leave                                   
5d32  retf                                    
5d33  add     [bx+si],al                      

; ----- sub_5d34 -----
5d34  mov     ax,5D1Fh                        ; segment seg2:0000
5d37  push    bp                              
5d38  mov     bp,sp                           
5d3a  push    ds                              
5d3b  mov     ds,ax                           
5d3d  mov     ax,1h                           
5d40  mov     [88h],ax                        
5d43  mov     [8Ah],ax                        
5d46  mov     [7Ch],ax                        
5d49  mov     [7Eh],ax                        
5d4c  pop     ds                              
5d4d  leave                                   
5d4e  retf                                    
5d4f  add     [bx+si],al                      

; ----- sub_5d50 -----
5d50  mov     ax,5D35h                        ; segment seg2:0000
5d53  enter   4h,0h                           
5d57  push    ds                              
5d58  mov     ds,ax                           
5d5a  mov     ax,[bp+8h]                      
5d5d  imul    bx,[bp+6h],14h                  
5d61  add     bx,898h                         
5d65  mov     [bx],ax                         
5d67  mov     ax,[bp+0Ah]                     
5d6a  mov     dx,[bp+0Ch]                     
5d6d  mov     [bx+2h],ax                      
5d70  mov     [bx+4h],dx                      
5d73  mov     ax,[bp+0Eh]                     
5d76  mov     [bx+6h],ax                      
5d79  mov     ax,[bp+10h]                     
5d7c  mov     dx,[bp+12h]                     
5d7f  mov     [bx+8h],ax                      
5d82  mov     [bx+0Ah],dx                     
5d85  mov     ax,[bp+14h]                     
5d88  mov     dx,[bp+16h]                     
5d8b  mov     [bx+0Ch],ax                     
5d8e  mov     [bx+0Eh],dx                     
5d91  mov     ax,[bp+18h]                     
5d94  mov     dx,[bp+1Ah]                     
5d97  mov     [bx+10h],ax                     
5d9a  mov     [bx+12h],dx                     
5d9d  pop     ds                              
5d9e  leave                                   
5d9f  retf                                    

; ----- sub_5da0 -----
5da0  mov     ax,5D51h                        ; segment seg2:0000
5da3  enter   4h,0h                           
5da7  push    ds                              
5da8  mov     ds,ax                           
5daa  mov     ax,[bp+8h]                      
5dad  imul    bx,[bp+6h],14h                  
5db1  add     bx,8FCh                         
5db5  mov     [bx],ax                         
5db7  mov     ax,[bp+0Ah]                     
5dba  mov     dx,[bp+0Ch]                     
5dbd  mov     [bx+2h],ax                      
5dc0  mov     [bx+4h],dx                      
5dc3  mov     ax,[bp+0Eh]                     
5dc6  mov     [bx+6h],ax                      
5dc9  mov     ax,[bp+10h]                     
5dcc  mov     dx,[bp+12h]                     
5dcf  mov     [bx+8h],ax                      
5dd2  mov     [bx+0Ah],dx                     
5dd5  mov     ax,[bp+14h]                     
5dd8  mov     dx,[bp+16h]                     
5ddb  mov     [bx+0Ch],ax                     
5dde  mov     [bx+0Eh],dx                     
5de1  mov     ax,[bp+18h]                     
5de4  mov     dx,[bp+1Ah]                     
5de7  mov     [bx+10h],ax                     
5dea  mov     [bx+12h],dx                     
5ded  pop     ds                              
5dee  leave                                   
5def  retf                                    

; ----- sub_5df0 -----
5df0  mov     ax,5DA1h                        ; segment seg2:0000
5df3  enter   8h,0h                           
5df7  push    ds                              
5df8  mov     ds,ax                           
5dfa  push    81h                             
5dfd  lea     ax,[bp-8h]                      
5e00  push    ax                              
5e01  call far M007.M007_GETVALUE             ; AP_BEAM_CURRENT = 1
5e06  mov     bx,ax                           
5e08  mov     ax,ss:[bx]                      
5e0b  mov     dx,ss:[bx+2h]                   
5e0f  mov     [bp-4h],ax                      
5e12  mov     [bp-2h],dx                      
5e15  push    83h                             
5e18  call far M007.M007_GETSTATE             ; DP_GSP
5e1d  dec     ax                              
5e1e  jne     5E37h                           
5e20  lea     bx,[bp-4h]                      
5e23  wait                                    
5e24  fld     dword ptr ss:[bx]               
5e27  sub     sp,8h                           
5e2a  mov     bx,sp                           
5e2c  wait                                    
5e2d  fstp    qword ptr ss:[bx]               
5e30  nop                                     
5e31  wait                                    
5e32  call far TIGASEM.SETBEAMCURRENTGSPREQUEST
5e37  pop     ds                              
5e38  leave                                   
5e39  retf                                    

; ----- sub_5e3a -----
5e3a  mov     ax,5DF1h                        ; segment seg2:0000
5e3d  push    bp                              
5e3e  mov     bp,sp                           
5e40  push    ds                              
5e41  mov     ds,ax                           
5e43  les     bx,[bp+6h]                      
5e46  cmp     word ptr es:[bx],0h             
5e4a  je      5E5Fh                           
5e4c  cmp     word ptr es:[bx],20h            
5e50  je      5E5Fh                           
5e52  cmp     word ptr [0E4h],0h              
5e57  jle     5E5Fh                           
5e59  mov     ax,1h                           
5e5c  pop     ds                              
5e5d  leave                                   
5e5e  retf                                    
5e5f  cmp     word ptr es:[bx+2h],0h          
5e64  jne     5E59h                           
5e66  cmp     word ptr es:[bx+4h],0h          
5e6b  jne     5E59h                           
5e6d  cmp     word ptr es:[bx+6h],0h          
5e72  jne     5E59h                           
5e74  cmp     word ptr es:[bx+8h],0h          
5e79  jne     5E59h                           
5e7b  xor     ax,ax                           
5e7d  pop     ds                              
5e7e  leave                                   
5e7f  retf                                    

; ----- sub_5e80 -----
5e80  mov     ax,5E3Bh                        ; segment seg2:0000
5e83  enter   10h,0h                          
5e87  push    ds                              
5e88  mov     ds,ax                           
5e8a  push    83h                             
5e8d  call far M007.M007_GETSTATE             ; DP_GSP
5e92  dec     ax                              
5e93  je      5E98h                           
5e95  jmp     6186h                           
5e98  push    ds                              
5e99  push    96h                             
5e9c  call far TIGASEM.READGSPEHTSTATUS       
5ea1  wait                                    
5ea2  fld     dword ptr [0FAh]                ; [ds] = -1
5ea6  wait                                    
5ea7  fcom    dword ptr [96h]                 ; [ds] = 0
5eab  wait                                    
5eac  fstp    st(0)                           
5eae  wait                                    
5eaf  fstsw   ax                              
5eb1  sahf                                    
5eb2  je      5F0Fh                           
5eb4  push    1Dh                             
5eb6  lea     ax,[bp-0Ch]                     
5eb9  push    ax                              
5eba  call far M007.M007_GETHIGH              ; AP_ACTUALCURRENT = 1
5ebf  mov     bx,ax                           
5ec1  wait                                    
5ec2  fld     dword ptr ss:[bx]               
5ec5  wait                                    
5ec6  fcom    dword ptr [96h]                 ; [ds] = 0
5eca  wait                                    
5ecb  fstp    st(0)                           
5ecd  wait                                    
5ece  fstsw   ax                              
5ed0  sahf                                    
5ed1  jb      5F0Fh                           
5ed3  push    1Dh                             
5ed5  lea     ax,[bp-10h]                     
5ed8  push    ax                              
5ed9  call far M007.M007_GETLOW               ; AP_ACTUALCURRENT
5ede  mov     bx,ax                           
5ee0  wait                                    
5ee1  fld     dword ptr ss:[bx]               
5ee4  wait                                    
5ee5  fcom    dword ptr [96h]                 ; [ds] = 0
5ee9  wait                                    
5eea  fstp    st(0)                           
5eec  wait                                    
5eed  fstsw   ax                              
5eef  sahf                                    
5ef0  ja      5F0Fh                           
5ef2  push    1Dh                             
5ef4  push    word ptr [98h]                  ; [ds] f32 here = 0
5ef8  push    word ptr [96h]                  ; [ds] f32 here = 0
5efc  call far M007.M007_PUTVALUE             ; AP_ACTUALCURRENT
5f01  mov     ax,[96h]                        
5f04  mov     dx,[98h]                        
5f08  mov     [0FAh],ax                       
5f0b  mov     [0FCh],dx                       
5f0f  wait                                    
5f10  fld     dword ptr [0FEh]                ; [ds] = -1
5f14  wait                                    
5f15  fcom    dword ptr [9Ah]                 ; [ds] = 0
5f19  wait                                    
5f1a  fstp    st(0)                           
5f1c  wait                                    
5f1d  fstsw   ax                              
5f1f  sahf                                    
5f20  jne     5F25h                           
5f22  jmp     5FB6h                           
5f25  push    1Ch                             
5f27  lea     ax,[bp-10h]                     
5f2a  push    ax                              
5f2b  call far M007.M007_GETHIGH              ; AP_ACTUALKV
5f30  mov     bx,ax                           
5f32  wait                                    
5f33  fld     dword ptr ss:[bx]               
5f36  wait                                    
5f37  fcom    dword ptr [9Ah]                 ; [ds] = 0
5f3b  wait                                    
5f3c  fstp    st(0)                           
5f3e  wait                                    
5f3f  fstsw   ax                              
5f41  sahf                                    
5f42  jb      5FB6h                           
5f44  push    1Ch                             
5f46  lea     ax,[bp-0Ch]                     
5f49  push    ax                              
5f4a  call far M007.M007_GETLOW               ; AP_ACTUALKV
5f4f  mov     bx,ax                           
5f51  wait                                    
5f52  fld     dword ptr ss:[bx]               
5f55  wait                                    
5f56  fcom    dword ptr [9Ah]                 ; [ds] = 0
5f5a  wait                                    
5f5b  fstp    st(0)                           
5f5d  wait                                    
5f5e  fstsw   ax                              
5f60  sahf                                    
5f61  ja      5FB6h                           
5f63  push    1Ch                             
5f65  push    word ptr [9Ch]                  ; [ds] f32 here = 0
5f69  push    word ptr [9Ah]                  ; [ds] f32 here = 0
5f6d  call far M007.M007_PUTVALUE             ; AP_ACTUALKV
5f72  mov     ax,[9Ah]                        
5f75  mov     dx,[9Ch]                        
5f79  mov     [0FEh],ax                       
5f7c  mov     [100h],dx                       
5f80  push    0Eh                             
5f82  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
5f87  dec     ax                              
5f88  jne     5FB6h                           
5f8a  push    0E0h                            
5f8d  call far M007.M007_GETSTATE             ; DP_ADJ_ANODE
5f92  dec     ax                              
5f93  jne     5FB6h                           
5f95  wait                                    
5f96  fldz                                    
5f98  wait                                    
5f99  fcom    dword ptr [0FEh]                ; [ds] = -1
5f9d  wait                                    
5f9e  fstp    st(0)                           
5fa0  wait                                    
5fa1  fstsw   ax                              
5fa3  sahf                                    
5fa4  je      5FB6h                           
5fa6  push    word ptr [100h]                 
5faa  push    word ptr [0FEh]                 ; [ds] f32 here = -1
5fae  call far sub_311a                       
5fb3  add     sp,4h                           
5fb6  wait                                    
5fb7  fld     dword ptr [102h]                ; [ds] = -1
5fbb  wait                                    
5fbc  fcom    dword ptr [0AEh]                ; [ds] = 0
5fc0  wait                                    
5fc1  fstp    st(0)                           
5fc3  wait                                    
5fc4  fstsw   ax                              
5fc6  sahf                                    
5fc7  je      6027h                           
5fc9  push    0CDh                            
5fcc  lea     ax,[bp-10h]                     
5fcf  push    ax                              
5fd0  call far M007.M007_GETHIGH              ; AP_PM1
5fd5  mov     bx,ax                           
5fd7  wait                                    
5fd8  fld     dword ptr ss:[bx]               
5fdb  wait                                    
5fdc  fcom    dword ptr [0AEh]                ; [ds] = 0
5fe0  wait                                    
5fe1  fstp    st(0)                           
5fe3  wait                                    
5fe4  fstsw   ax                              
5fe6  sahf                                    
5fe7  jb      6027h                           
5fe9  push    0CDh                            
5fec  lea     ax,[bp-0Ch]                     
5fef  push    ax                              
5ff0  call far M007.M007_GETLOW               ; AP_PM1
5ff5  mov     bx,ax                           
5ff7  wait                                    
5ff8  fld     dword ptr ss:[bx]               
5ffb  wait                                    
5ffc  fcom    dword ptr [0AEh]                ; [ds] = 0
6000  wait                                    
6001  fstp    st(0)                           
6003  wait                                    
6004  fstsw   ax                              
6006  sahf                                    
6007  ja      6027h                           
6009  push    0CDh                            
600c  push    word ptr [0B0h]                 ; [ds] f32 here = 0
6010  push    word ptr [0AEh]                 ; [ds] f32 here = 0
6014  call far M007.M007_PUTVALUE             ; AP_PM1
6019  mov     ax,[0AEh]                       
601c  mov     dx,[0B0h]                       
6020  mov     [102h],ax                       
6023  mov     [104h],dx                       
6027  wait                                    
6028  fld     dword ptr [106h]                ; [ds] = -1
602c  wait                                    
602d  fcom    dword ptr [0B2h]                ; [ds] = 0
6031  wait                                    
6032  fstp    st(0)                           
6034  wait                                    
6035  fstsw   ax                              
6037  sahf                                    
6038  je      6098h                           
603a  push    0CEh                            
603d  lea     ax,[bp-10h]                     
6040  push    ax                              
6041  call far M007.M007_GETHIGH              ; AP_PM2
6046  mov     bx,ax                           
6048  wait                                    
6049  fld     dword ptr ss:[bx]               
604c  wait                                    
604d  fcom    dword ptr [0B2h]                ; [ds] = 0
6051  wait                                    
6052  fstp    st(0)                           
6054  wait                                    
6055  fstsw   ax                              
6057  sahf                                    
6058  jb      6098h                           
605a  push    0CEh                            
605d  lea     ax,[bp-0Ch]                     
6060  push    ax                              
6061  call far M007.M007_GETLOW               ; AP_PM2
6066  mov     bx,ax                           
6068  wait                                    
6069  fld     dword ptr ss:[bx]               
606c  wait                                    
606d  fcom    dword ptr [0B2h]                ; [ds] = 0
6071  wait                                    
6072  fstp    st(0)                           
6074  wait                                    
6075  fstsw   ax                              
6077  sahf                                    
6078  ja      6098h                           
607a  push    0CEh                            
607d  push    word ptr [0B4h]                 ; [ds] f32 here = 0
6081  push    word ptr [0B2h]                 ; [ds] f32 here = 0
6085  call far M007.M007_PUTVALUE             ; AP_PM2
608a  mov     ax,[0B2h]                       
608d  mov     dx,[0B4h]                       
6091  mov     [106h],ax                       
6094  mov     [108h],dx                       
6098  wait                                    
6099  fld     dword ptr [10Ah]                ; [ds] = -1
609d  wait                                    
609e  fcom    dword ptr [0B6h]                ; [ds] = 0
60a2  wait                                    
60a3  fstp    st(0)                           
60a5  wait                                    
60a6  fstsw   ax                              
60a8  sahf                                    
60a9  je      6109h                           
60ab  push    0CFh                            
60ae  lea     ax,[bp-10h]                     
60b1  push    ax                              
60b2  call far M007.M007_GETHIGH              ; AP_PM3
60b7  mov     bx,ax                           
60b9  wait                                    
60ba  fld     dword ptr ss:[bx]               
60bd  wait                                    
60be  fcom    dword ptr [0B6h]                ; [ds] = 0
60c2  wait                                    
60c3  fstp    st(0)                           
60c5  wait                                    
60c6  fstsw   ax                              
60c8  sahf                                    
60c9  jb      6109h                           
60cb  push    0CFh                            
60ce  lea     ax,[bp-0Ch]                     
60d1  push    ax                              
60d2  call far M007.M007_GETLOW               ; AP_PM3
60d7  mov     bx,ax                           
60d9  wait                                    
60da  fld     dword ptr ss:[bx]               
60dd  wait                                    
60de  fcom    dword ptr [0B6h]                ; [ds] = 0
60e2  wait                                    
60e3  fstp    st(0)                           
60e5  wait                                    
60e6  fstsw   ax                              
60e8  sahf                                    
60e9  ja      6109h                           
60eb  push    0CFh                            
60ee  push    word ptr [0B8h]                 ; [ds] f32 here = 0
60f2  push    word ptr [0B6h]                 ; [ds] f32 here = 0
60f6  call far M007.M007_PUTVALUE             ; AP_PM3
60fb  mov     ax,[0B6h]                       
60fe  mov     dx,[0B8h]                       
6102  mov     [10Ah],ax                       
6105  mov     [10Ch],dx                       
6109  wait                                    
610a  fld     dword ptr [112h]                ; [ds] = -1
610e  wait                                    
610f  fcom    dword ptr [0BEh]                ; [ds] = 0
6113  wait                                    
6114  fstp    st(0)                           
6116  wait                                    
6117  fstsw   ax                              
6119  sahf                                    
611a  je      617Ah                           
611c  push    0C4h                            
611f  lea     ax,[bp-10h]                     
6122  push    ax                              
6123  call far M007.M007_GETHIGH              ; AP_COLLECTOR_BIAS
6128  mov     bx,ax                           
612a  wait                                    
612b  fld     dword ptr ss:[bx]               
612e  wait                                    
612f  fcom    dword ptr [0BEh]                ; [ds] = 0
6133  wait                                    
6134  fstp    st(0)                           
6136  wait                                    
6137  fstsw   ax                              
6139  sahf                                    
613a  jb      617Ah                           
613c  push    0C4h                            
613f  lea     ax,[bp-0Ch]                     
6142  push    ax                              
6143  call far M007.M007_GETLOW               ; AP_COLLECTOR_BIAS
6148  mov     bx,ax                           
614a  wait                                    
614b  fld     dword ptr ss:[bx]               
614e  wait                                    
614f  fcom    dword ptr [0BEh]                ; [ds] = 0
6153  wait                                    
6154  fstp    st(0)                           
6156  wait                                    
6157  fstsw   ax                              
6159  sahf                                    
615a  ja      617Ah                           
615c  push    0C4h                            
615f  push    word ptr [0C0h]                 ; [ds] f32 here = 0
6163  push    word ptr [0BEh]                 ; [ds] f32 here = 0
6167  call far M007.M007_PUTVALUE             ; AP_COLLECTOR_BIAS
616c  mov     ax,[0BEh]                       
616f  mov     dx,[0C0h]                       
6173  mov     [112h],ax                       
6176  mov     [114h],dx                       
617a  push    84h                             
617d  push    word ptr [0CCh]                 
6181  call far M007.M007_PUTSTATE             ; DP_SCINT
6186  cmp     word ptr [0D0h],0h              
618b  je      6195h                           
618d  test    word ptr [0D0h],0FFA0h          
6193  je      61B4h                           
6195  mov     ax,[0D0h]                       
6198  cmp     [0E2h],ax                       
619c  je      61ACh                           
619e  push    225h                            
61a1  cwd                                     
61a2  push    dx                              
61a3  push    ax                              
61a4  push    5000h                           
61a7  call far M007.UIF_LOG                   
61ac  mov     ax,[0D0h]                       
61af  mov     [0E2h],ax                       
61b2  jmp     61BAh                           
61b4  mov     word ptr [0E2h],40h             
61ba  push    ds                              
61bb  push    0D2h                            
61be  call far sub_5e3a                       
61c3  add     sp,4h                           
61c6  or      ax,ax                           
61c8  je      61D7h                           
61ca  mov     word ptr [90h],0h               
61d0  call far sub_6f08                       
61d5  jmp     61ECh                           
61d7  cmp     word ptr [0DCh],0h              
61dc  je      61E6h                           
61de  mov     word ptr [90h],2h               
61e4  jmp     61ECh                           
61e6  mov     word ptr [90h],1h               
61ec  mov     ax,[90h]                        
61ef  or      ax,ax                           
61f1  je      61F9h                           
61f3  dec     ax                              
61f4  dec     ax                              
61f5  je      6209h                           
61f7  jmp     624Dh                           
61f9  call far sub_5c76                       
61fe  xor     ax,ax                           
6200  mov     [960h],ax                       
6203  mov     [92h],ax                        
6206  jmp     62B2h                           
6209  cmp     word ptr [94h],3h               
620e  je      6213h                           
6210  jmp     62B2h                           
6213  push    83h                             
6216  call far M007.M007_GETSTATE             ; DP_GSP
621b  dec     ax                              
621c  jne     622Dh                           
621e  lea     ax,[bp-8h]                      
6221  push    ss                              
6222  push    ax                              
6223  lea     ax,[bp-4h]                      
6226  push    ss                              
6227  push    ax                              
6228  call far TIGASEM.KILLGSPEHTANDFILRAMPING
622d  push    0Eh                             
622f  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
6234  mov     [960h],ax                       
6237  cmp     ax,1h                           
623a  jne     6245h                           
623c  push    0Eh                             
623e  push    0Ah                             
6240  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE = 10
6245  mov     word ptr [94h],2h               
624b  jmp     62B2h                           
624d  cmp     word ptr [92h],1h               
6252  jne     625Bh                           
6254  cmp     word ptr [94h],3h               
6259  je      62B2h                           
625b  cmp     word ptr [92h],0h               
6260  jne     629Ah                           
6262  push    87h                             
6265  push    0h                              
6267  call far M007.M007_PUTSTATE             ; DP_PM1_INHIBIT = 0
626c  push    88h                             
626f  push    0h                              
6271  call far M007.M007_PUTSTATE             ; DP_PM2_INHIBIT = 0
6276  push    89h                             
6279  push    0h                              
627b  call far M007.M007_PUTSTATE             ; DP_PM3_INHIBIT = 0
6280  push    8Bh                             
6283  push    0h                              
6285  call far M007.M007_PUTSTATE             ; DP_COLL_INHIBIT = 0
628a  push    8Ah                             
628d  push    0h                              
628f  call far M007.M007_PUTSTATE             ; DP_SCINT_INHIBIT = 0
6294  mov     word ptr [92h],1h               
629a  cmp     word ptr [94h],2h               
629f  jne     62B2h                           
62a1  push    0Eh                             
62a3  push    word ptr [960h]                 
62a7  call far M007.M007_PUTSTATE             ; DP_RUNUPSTATE
62ac  mov     word ptr [94h],3h               
62b2  push    ds                              
62b3  push    0D2h                            
62b6  call far sub_51e0                       
62bb  add     sp,4h                           
62be  cmp     word ptr [82h],0h               
62c3  je      62CBh                           
62c5  mov     ax,[0C4h]                       
62c8  mov     [8Eh],ax                        
62cb  cmp     word ptr [80h],0h               
62d0  je      62D8h                           
62d2  mov     ax,[0C2h]                       
62d5  mov     [8Ch],ax                        
62d8  call far sub_6910                       
62dd  pop     ds                              
62de  leave                                   
62df  retf                                    

; ----- sub_62e0 -----
62e0  mov     ax,5E81h                        ; segment seg2:0000
62e3  enter   1Ch,0h                          
62e7  push    ds                              
62e8  mov     ds,ax                           
62ea  imul    bx,[bp+6h],14h                  
62ee  add     bx,8FCh                         
62f2  mov     [bp-14h],bx                     
62f5  mov     [bp-12h],ds                     
62f8  mov     cx,[bx+2h]                      
62fb  mov     dx,[bx+4h]                      
62fe  mov     [bp-10h],cx                     
6301  mov     [bp-0Eh],dx                     
6304  mov     cx,[bx+8h]                      
6307  mov     dx,[bx+0Ah]                     
630a  mov     [bp-0Ch],cx                     
630d  mov     [bp-0Ah],dx                     
6310  mov     cx,[bx+0Ch]                     
6313  mov     dx,[bx+0Eh]                     
6316  mov     [bp-8h],cx                      
6319  mov     [bp-6h],dx                      
631c  mov     cx,[bx+10h]                     
631f  mov     dx,[bx+12h]                     
6322  mov     [bp-4h],cx                      
6325  mov     [bp-2h],dx                      
6328  push    1Ch                             
632a  lea     ax,[bp-18h]                     
632d  push    ax                              
632e  call far M007.M007_GETHIGH              ; AP_ACTUALKV
6333  mov     bx,ax                           
6335  wait                                    
6336  fld     dword ptr ss:[bx]               
6339  lea     bx,[bp-4h]                      
633c  wait                                    
633d  fcom    dword ptr ss:[bx]               
6340  wait                                    
6341  fstp    st(0)                           
6343  wait                                    
6344  fstsw   ax                              
6346  sahf                                    
6347  jae     6363h                           
6349  push    1Ch                             
634b  lea     ax,[bp-1Ch]                     
634e  push    ax                              
634f  call far M007.M007_GETHIGH              ; AP_ACTUALKV
6354  mov     bx,ax                           
6356  mov     ax,ss:[bx]                      
6359  mov     dx,ss:[bx+2h]                   
635d  mov     [bp-4h],ax                      
6360  mov     [bp-2h],dx                      
6363  push    1Ch                             
6365  lea     ax,[bp-1Ch]                     
6368  push    ax                              
6369  call far M007.M007_GETLOW               ; AP_ACTUALKV
636e  mov     bx,ax                           
6370  wait                                    
6371  fld     dword ptr ss:[bx]               
6374  lea     bx,[bp-4h]                      
6377  wait                                    
6378  fcom    dword ptr ss:[bx]               
637b  wait                                    
637c  fstp    st(0)                           
637e  wait                                    
637f  fstsw   ax                              
6381  sahf                                    
6382  jbe     639Eh                           
6384  push    1Ch                             
6386  lea     ax,[bp-18h]                     
6389  push    ax                              
638a  call far M007.M007_GETLOW               ; AP_ACTUALKV
638f  mov     bx,ax                           
6391  mov     ax,ss:[bx]                      
6394  mov     dx,ss:[bx+2h]                   
6398  mov     [bp-4h],ax                      
639b  mov     [bp-2h],dx                      
639e  push    83h                             
63a1  call far M007.M007_GETSTATE             ; DP_GSP
63a6  dec     ax                              
63a7  jne     63B6h                           
63a9  lea     ax,[bp-10h]                     
63ac  push    ss                              
63ad  push    ax                              
63ae  call far TIGASEM.SENDGSPEHTRAMPREQUEST  
63b3  pop     ds                              
63b4  leave                                   
63b5  retf                                    
63b6  les     bx,[bp-14h]                     
63b9  mov     ax,es:[bx+10h]                  
63bd  mov     dx,es:[bx+12h]                  
63c1  mov     [9Ah],ax                        
63c4  mov     [9Ch],dx                        
63c8  mov     word ptr [0C2h],0h              
63ce  pop     ds                              
63cf  leave                                   
63d0  retf                                    
63d1  add     [bx+si],al                      

; ----- sub_63d2 -----
63d2  mov     ax,62E1h                        ; segment seg2:0000
63d5  enter   1Ch,0h                          
63d9  push    ds                              
63da  mov     ds,ax                           
63dc  imul    bx,[bp+6h],14h                  
63e0  add     bx,898h                         
63e4  mov     [bp-14h],bx                     
63e7  mov     [bp-12h],ds                     
63ea  mov     cx,[bx+2h]                      
63ed  mov     dx,[bx+4h]                      
63f0  mov     [bp-10h],cx                     
63f3  mov     [bp-0Eh],dx                     
63f6  mov     cx,[bx+8h]                      
63f9  mov     dx,[bx+0Ah]                     
63fc  mov     [bp-0Ch],cx                     
63ff  mov     [bp-0Ah],dx                     
6402  mov     cx,[bx+0Ch]                     
6405  mov     dx,[bx+0Eh]                     
6408  mov     [bp-8h],cx                      
640b  mov     [bp-6h],dx                      
640e  mov     cx,[bx+10h]                     
6411  mov     dx,[bx+12h]                     
6414  mov     [bp-4h],cx                      
6417  mov     [bp-2h],dx                      
641a  push    1Dh                             
641c  lea     ax,[bp-18h]                     
641f  push    ax                              
6420  call far M007.M007_GETHIGH              ; AP_ACTUALCURRENT
6425  mov     bx,ax                           
6427  wait                                    
6428  fld     dword ptr ss:[bx]               
642b  lea     bx,[bp-4h]                      
642e  wait                                    
642f  fcom    dword ptr ss:[bx]               
6432  wait                                    
6433  fstp    st(0)                           
6435  wait                                    
6436  fstsw   ax                              
6438  sahf                                    
6439  jae     6455h                           
643b  push    1Dh                             
643d  lea     ax,[bp-1Ch]                     
6440  push    ax                              
6441  call far M007.M007_GETHIGH              ; AP_ACTUALCURRENT
6446  mov     bx,ax                           
6448  mov     ax,ss:[bx]                      
644b  mov     dx,ss:[bx+2h]                   
644f  mov     [bp-4h],ax                      
6452  mov     [bp-2h],dx                      
6455  push    1Dh                             
6457  lea     ax,[bp-1Ch]                     
645a  push    ax                              
645b  call far M007.M007_GETLOW               ; AP_ACTUALCURRENT
6460  mov     bx,ax                           
6462  wait                                    
6463  fld     dword ptr ss:[bx]               
6466  lea     bx,[bp-4h]                      
6469  wait                                    
646a  fcom    dword ptr ss:[bx]               
646d  wait                                    
646e  fstp    st(0)                           
6470  wait                                    
6471  fstsw   ax                              
6473  sahf                                    
6474  jbe     6490h                           
6476  push    1Dh                             
6478  lea     ax,[bp-18h]                     
647b  push    ax                              
647c  call far M007.M007_GETLOW               ; AP_ACTUALCURRENT
6481  mov     bx,ax                           
6483  mov     ax,ss:[bx]                      
6486  mov     dx,ss:[bx+2h]                   
648a  mov     [bp-4h],ax                      
648d  mov     [bp-2h],dx                      
6490  push    83h                             
6493  call far M007.M007_GETSTATE             ; DP_GSP
6498  dec     ax                              
6499  jne     64A8h                           
649b  lea     ax,[bp-10h]                     
649e  push    ss                              
649f  push    ax                              
64a0  call far TIGASEM.SENDGSPFILRAMPREQUEST  
64a5  pop     ds                              
64a6  leave                                   
64a7  retf                                    
64a8  les     bx,[bp-14h]                     
64ab  mov     ax,es:[bx+10h]                  
64af  mov     dx,es:[bx+12h]                  
64b3  mov     [96h],ax                        
64b6  mov     [98h],dx                        
64ba  mov     word ptr [0C4h],0h              
64c0  pop     ds                              
64c1  leave                                   
64c2  retf                                    
64c3  add     [bx+si],al                      

; ----- sub_64c4 -----
64c4  mov     ax,63D3h                        ; segment seg2:0000
64c7  push    bp                              
64c8  mov     bp,sp                           
64ca  push    ds                              
64cb  mov     ds,ax                           
64cd  mov     ax,[88h]                        
64d0  jmp     6574h                           
64d3  mov     ax,1h                           
64d6  mov     [76h],ax                        
64d9  mov     [84h],ax                        
64dc  cmp     word ptr [910h],0h              
64e1  je      653Ch                           
64e3  mov     word ptr [88h],20h              
64e9  pop     ds                              
64ea  leave                                   
64eb  retf                                    
64ec  cmp     word ptr [8Ch],0h               
64f1  je      64FDh                           
64f3  cmp     word ptr [8Ch],1h               
64f8  je      64FDh                           
64fa  jmp     658Dh                           
64fd  imul    bx,[76h],14h                    
6502  cmp     word ptr [bx+902h],0h           
6507  je      650Fh                           
6509  mov     word ptr [70h],1h               
650f  mov     ax,[76h]                        
6512  cmp     [7Ah],ax                        
6516  jne     652Bh                           
6518  xor     ax,ax                           
651a  mov     [88h],ax                        
651d  mov     [84h],ax                        
6520  mov     [80h],ax                        
6523  call far sub_5432                       
6528  pop     ds                              
6529  leave                                   
652a  retf                                    
652b  inc     word ptr [76h]                  
652f  mov     ax,[76h]                        
6532  imul    bx,ax,14h                       
6535  cmp     word ptr [bx+8FCh],0h           
653a  jne     6552h                           
653c  push    ax                              
653d  call far sub_62e0                       
6542  pop     bx                              
6543  mov     word ptr [80h],1h               
6549  mov     word ptr [88h],2h               
654f  pop     ds                              
6550  leave                                   
6551  retf                                    
6552  mov     word ptr [88h],20h              
6558  mov     word ptr [80h],0h               
655e  pop     ds                              
655f  leave                                   
6560  retf                                    
6561  cmp     word ptr [72h],0h               
6566  je      658Dh                           
6568  mov     word ptr [72h],0h               
656e  push    word ptr [76h]                  
6572  jmp     653Dh                           
6574  cmp     ax,20h                          
6577  je      6561h                           
6579  ja      658Dh                           
657b  or      al,al                           
657d  je      658Dh                           
657f  dec     al                              
6581  jne     6586h                           
6583  jmp     64D3h                           
6586  dec     al                              
6588  jne     658Dh                           
658a  jmp     64ECh                           
658d  pop     ds                              
658e  leave                                   
658f  retf                                    

; ----- sub_6590 -----
6590  mov     ax,64C5h                        ; segment seg2:0000
6593  push    bp                              
6594  mov     bp,sp                           
6596  push    ds                              
6597  mov     ds,ax                           
6599  mov     ax,[8Ah]                        
659c  jmp     6640h                           
659f  mov     ax,1h                           
65a2  mov     [74h],ax                        
65a5  mov     [86h],ax                        
65a8  cmp     word ptr [8ACh],0h              
65ad  je      6608h                           
65af  mov     word ptr [8Ah],10h              
65b5  pop     ds                              
65b6  leave                                   
65b7  retf                                    
65b8  cmp     word ptr [8Eh],0h               
65bd  je      65C9h                           
65bf  cmp     word ptr [8Eh],1h               
65c4  je      65C9h                           
65c6  jmp     6659h                           
65c9  imul    bx,[74h],14h                    
65ce  cmp     word ptr [bx+89Eh],0h           
65d3  je      65DBh                           
65d5  mov     word ptr [72h],1h               
65db  mov     ax,[74h]                        
65de  cmp     [78h],ax                        
65e2  jne     65F7h                           
65e4  xor     ax,ax                           
65e6  mov     [8Ah],ax                        
65e9  mov     [86h],ax                        
65ec  mov     [82h],ax                        
65ef  call far sub_5432                       
65f4  pop     ds                              
65f5  leave                                   
65f6  retf                                    
65f7  inc     word ptr [74h]                  
65fb  mov     ax,[74h]                        
65fe  imul    bx,ax,14h                       
6601  cmp     word ptr [bx+898h],0h           
6606  jne     661Eh                           
6608  push    ax                              
6609  call far sub_63d2                       
660e  pop     bx                              
660f  mov     word ptr [82h],1h               
6615  mov     word ptr [8Ah],3h               
661b  pop     ds                              
661c  leave                                   
661d  retf                                    
661e  mov     word ptr [8Ah],10h              
6624  mov     word ptr [82h],0h               
662a  pop     ds                              
662b  leave                                   
662c  retf                                    
662d  cmp     word ptr [70h],0h               
6632  je      6659h                           
6634  mov     word ptr [70h],0h               
663a  push    word ptr [74h]                  
663e  jmp     6609h                           
6640  cmp     ax,10h                          
6643  je      662Dh                           
6645  ja      6659h                           
6647  or      al,al                           
6649  je      6659h                           
664b  dec     al                              
664d  jne     6652h                           
664f  jmp     659Fh                           
6652  sub     al,2h                           
6654  jne     6659h                           
6656  jmp     65B8h                           
6659  pop     ds                              
665a  leave                                   
665b  retf                                    

; ----- sub_665c -----
665c  mov     ax,6591h                        ; segment seg2:0000
665f  push    bp                              
6660  mov     bp,sp                           
6662  push    ds                              
6663  mov     ds,ax                           
6665  call far sub_5e80                       
666a  push    0Eh                             
666c  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
6671  cmp     ax,0Ch                          
6674  jne     668Dh                           
6676  push    29h                             
6678  call far M007.M007_GETSTATE             ; DP_EHT_VAC_READY
667d  dec     ax                              
667e  jne     668Dh                           
6680  cmp     word ptr [116h],0h              
6685  jne     668Dh                           
6687  mov     word ptr [116h],0Ah             
668d  push    0Eh                             
668f  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
6694  cmp     ax,0Ch                          
6697  jne     66ABh                           
6699  cmp     word ptr [116h],0h              
669e  je      66ABh                           
66a0  dec     word ptr [116h]                 
66a4  jne     66ABh                           
66a6  call far DOCOMMANDBEAM_ON               
66ab  cmp     word ptr [7Ch],1h               
66b0  jne     66B7h                           
66b2  call far sub_64c4                       
66b7  cmp     word ptr [7Eh],1h               
66bc  jne     66C3h                           
66be  call far sub_6590                       
66c3  pop     ds                              
66c4  leave                                   
66c5  retf                                    

; ----- sub_66c6 -----
66c6  mov     ax,665Dh                        ; segment seg2:0000
66c9  enter   30h,0h                          
66cd  push    ds                              
66ce  mov     ds,ax                           
66d0  push    118h                            
66d3  call far M007.M007_GETSTATE             ; DP_PROGRESS
66d8  or      ax,ax                           
66da  je      66F9h                           
66dc  push    118h                            
66df  call far M007.M007_GETSTATE             ; DP_PROGRESS
66e4  cmp     ax,4h                           
66e7  je      66F9h                           
66e9  push    118h                            
66ec  call far M007.M007_GETSTATE             ; DP_PROGRESS
66f1  cmp     ax,7h                           
66f4  je      66F9h                           
66f6  jmp     690Ch                           
66f9  push    154h                            
66fc  push    word ptr [42Ah]                 ; [ds] f32 here = 0
6700  push    word ptr [428h]                 ; [ds] f32 here = 0
6704  call far M007.M007_PUTVALUE             ; AP_PROGRESS
6709  push    0Eh                             
670b  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
6710  dec     ax                              
6711  dec     ax                              
6712  je      6729h                           
6714  dec     ax                              
6715  jne     671Ah                           
6717  jmp     6879h                           
671a  sub     ax,3h                           
671d  je      6729h                           
671f  dec     ax                              
6720  dec     ax                              
6721  jne     6726h                           
6723  jmp     68BCh                           
6726  jmp     6907h                           
6729  push    1Dh                             
672b  lea     ax,[bp-4h]                      
672e  push    ax                              
672f  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
6734  mov     bx,ax                           
6736  wait                                    
6737  fld     dword ptr ss:[bx]               
673a  push    1Bh                             
673c  lea     ax,[bp-8h]                      
673f  push    ax                              
6740  wait                                    
6741  fstp    dword ptr [bp-24h]              
6744  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT
6749  mov     bx,ax                           
674b  wait                                    
674c  fld     dword ptr ss:[bx]               
674f  wait                                    
6750  fsubr   dword ptr [bp-24h]              
6753  sub     sp,8h                           
6756  mov     bx,sp                           
6758  wait                                    
6759  fstp    qword ptr ss:[bx]               
675c  nop                                     
675d  wait                                    
675e  call far sub_035a                       
6763  add     sp,8h                           
6766  mov     es,dx                           
6768  mov     bx,ax                           
676a  wait                                    
676b  fld     qword ptr es:[bx]               
676e  wait                                    
676f  fstp    dword ptr [0EEh]                ; [ds] = 0
6773  nop                                     
6774  wait                                    
6775  push    1Ch                             
6777  lea     ax,[bp-0Ch]                     
677a  push    ax                              
677b  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6780  mov     bx,ax                           
6782  wait                                    
6783  fld     dword ptr ss:[bx]               
6786  push    1Ah                             
6788  lea     ax,[bp-10h]                     
678b  push    ax                              
678c  wait                                    
678d  fstp    dword ptr [bp-28h]              
6790  call far M007.M007_GETVALUE             ; AP_MANUALKV
6795  mov     bx,ax                           
6797  wait                                    
6798  fld     dword ptr ss:[bx]               
679b  wait                                    
679c  fsubr   dword ptr [bp-28h]              
679f  sub     sp,8h                           
67a2  mov     bx,sp                           
67a4  wait                                    
67a5  fstp    qword ptr ss:[bx]               
67a8  nop                                     
67a9  wait                                    
67aa  call far sub_035a                       
67af  add     sp,8h                           
67b2  mov     es,dx                           
67b4  mov     bx,ax                           
67b6  wait                                    
67b7  fld     qword ptr es:[bx]               
67ba  wait                                    
67bb  fstp    dword ptr [0EAh]                ; [ds] = 0
67bf  nop                                     
67c0  wait                                    
67c1  push    0Bh                             
67c3  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
67c8  cmp     ax,4h                           
67cb  je      67D0h                           
67cd  jmp     686Ch                           
67d0  push    12Fh                            
67d3  lea     ax,[bp-14h]                     
67d6  push    ax                              
67d7  call far M007.M007_GETVALUE             ; AP_ACTUALEXT
67dc  mov     bx,ax                           
67de  wait                                    
67df  fld     dword ptr ss:[bx]               
67e2  push    14Fh                            
67e5  lea     ax,[bp-18h]                     
67e8  push    ax                              
67e9  wait                                    
67ea  fstp    dword ptr [bp-2Ch]              
67ed  call far M007.M007_GETVALUE             ; AP_MANUALEXT
67f2  mov     bx,ax                           
67f4  wait                                    
67f5  fld     dword ptr ss:[bx]               
67f8  wait                                    
67f9  fsubr   dword ptr [bp-2Ch]              
67fc  sub     sp,8h                           
67ff  mov     bx,sp                           
6801  wait                                    
6802  fstp    qword ptr ss:[bx]               
6805  nop                                     
6806  wait                                    
6807  call far sub_035a                       
680c  add     sp,8h                           
680f  mov     es,dx                           
6811  mov     bx,ax                           
6813  wait                                    
6814  fld     qword ptr es:[bx]               
6817  wait                                    
6818  fstp    dword ptr [0F6h]                ; [ds] = 0
681c  nop                                     
681d  wait                                    
681e  push    131h                            
6821  lea     ax,[bp-1Ch]                     
6824  push    ax                              
6825  call far M007.M007_GETVALUE             ; AP_ACTUALLENS
682a  mov     bx,ax                           
682c  wait                                    
682d  fld     dword ptr ss:[bx]               
6830  push    151h                            
6833  lea     ax,[bp-20h]                     
6836  push    ax                              
6837  wait                                    
6838  fstp    dword ptr [bp-30h]              
683b  call far M007.M007_GETVALUE             ; AP_MANUALLENS
6840  mov     bx,ax                           
6842  wait                                    
6843  fld     dword ptr ss:[bx]               
6846  wait                                    
6847  fsubr   dword ptr [bp-30h]              
684a  sub     sp,8h                           
684d  mov     bx,sp                           
684f  wait                                    
6850  fstp    qword ptr ss:[bx]               
6853  nop                                     
6854  wait                                    
6855  call far sub_035a                       
685a  add     sp,8h                           
685d  mov     es,dx                           
685f  mov     bx,ax                           
6861  wait                                    
6862  fld     qword ptr es:[bx]               
6865  wait                                    
6866  fstp    dword ptr [0F2h]                ; [ds] = 0
686a  nop                                     
686b  wait                                    
686c  push    118h                            
686f  push    4h                              
6871  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 4
6876  pop     ds                              
6877  leave                                   
6878  retf                                    
6879  push    1Dh                             
687b  lea     ax,[bp-30h]                     
687e  push    ax                              
687f  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
6884  mov     bx,ax                           
6886  mov     ax,ss:[bx]                      
6889  mov     dx,ss:[bx+2h]                   
688d  mov     [0EEh],ax                       
6890  mov     [0F0h],dx                       
6894  push    0Bh                             
6896  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
689b  cmp     ax,4h                           
689e  jne     68BCh                           
68a0  push    12Fh                            
68a3  lea     ax,[bp-2Ch]                     
68a6  push    ax                              
68a7  call far M007.M007_GETVALUE             ; AP_ACTUALEXT
68ac  mov     bx,ax                           
68ae  mov     ax,ss:[bx]                      
68b1  mov     dx,ss:[bx+2h]                   
68b5  mov     [0F6h],ax                       
68b8  mov     [0F8h],dx                       
68bc  push    1Ch                             
68be  lea     ax,[bp-30h]                     
68c1  push    ax                              
68c2  call far M007.M007_GETVALUE             ; AP_ACTUALKV
68c7  mov     bx,ax                           
68c9  mov     ax,ss:[bx]                      
68cc  mov     dx,ss:[bx+2h]                   
68d0  mov     [0EAh],ax                       
68d3  mov     [0ECh],dx                       
68d7  push    0Bh                             
68d9  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
68de  cmp     ax,4h                           
68e1  jne     68FFh                           
68e3  push    131h                            
68e6  lea     ax,[bp-2Ch]                     
68e9  push    ax                              
68ea  call far M007.M007_GETVALUE             ; AP_ACTUALLENS
68ef  mov     bx,ax                           
68f1  mov     ax,ss:[bx]                      
68f4  mov     dx,ss:[bx+2h]                   
68f8  mov     [0F2h],ax                       
68fb  mov     [0F4h],dx                       
68ff  push    118h                            
6902  push    7h                              
6904  jmp     6871h                           
6907  call far sub_6f08                       
690c  pop     ds                              
690d  leave                                   
690e  retf                                    
690f  add     [bx+si],al                      

; ----- sub_6910 -----
6910  mov     ax,66C7h                        ; segment seg2:0000
6913  enter   28h,0h                          
6917  push    ds                              
6918  mov     ds,ax                           
691a  push    118h                            
691d  call far M007.M007_GETSTATE             ; DP_PROGRESS
6922  cmp     ax,4h                           
6925  je      6937h                           
6927  push    118h                            
692a  call far M007.M007_GETSTATE             ; DP_PROGRESS
692f  cmp     ax,7h                           
6932  je      6937h                           
6934  jmp     6F05h                           
6937  mov     ax,[450h]                       
693a  mov     dx,[452h]                       
693e  mov     [bp-4h],ax                      
6941  mov     [bp-2h],dx                      
6944  push    0Eh                             
6946  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE
694b  jmp     6EDBh                           
694e  push    0Bh                             
6950  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
6955  cmp     ax,4h                           
6958  je      695Dh                           
695a  jmp     6BE1h                           
695d  wait                                    
695e  fldz                                    
6960  wait                                    
6961  fcom    dword ptr [0EEh]                ; [ds] = 0
6965  wait                                    
6966  fstp    st(0)                           
6968  wait                                    
6969  fstsw   ax                              
696b  sahf                                    
696c  jb      6971h                           
696e  jmp     6B07h                           
6971  wait                                    
6972  fldz                                    
6974  wait                                    
6975  fcom    dword ptr [0F6h]                ; [ds] = 0
6979  wait                                    
697a  fstp    st(0)                           
697c  wait                                    
697d  fstsw   ax                              
697f  sahf                                    
6980  jb      6985h                           
6982  jmp     6B07h                           
6985  push    1Dh                             
6987  lea     ax,[bp-8h]                      
698a  push    ax                              
698b  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
6990  mov     bx,ax                           
6992  wait                                    
6993  fld     dword ptr ss:[bx]               
6996  push    1Bh                             
6998  lea     ax,[bp-0Ch]                     
699b  push    ax                              
699c  wait                                    
699d  fstp    dword ptr [bp-20h]              
69a0  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT
69a5  mov     bx,ax                           
69a7  wait                                    
69a8  fld     dword ptr ss:[bx]               
69ab  wait                                    
69ac  fsubr   dword ptr [bp-20h]              
69af  sub     sp,8h                           
69b2  mov     bx,sp                           
69b4  wait                                    
69b5  fstp    qword ptr ss:[bx]               
69b8  nop                                     
69b9  wait                                    
69ba  call far sub_035a                       
69bf  add     sp,8h                           
69c2  mov     es,dx                           
69c4  mov     bx,ax                           
69c6  wait                                    
69c7  fld     qword ptr es:[bx]               
69ca  wait                                    
69cb  fdiv    dword ptr [0EEh]                ; [ds] = 0
69cf  wait                                    
69d0  fmul    dword ptr [454h]                ; [ds] = -45
69d4  wait                                    
69d5  fadd    dword ptr [bp-4h]               
69d8  wait                                    
69d9  fstp    dword ptr [bp-4h]               
69dc  nop                                     
69dd  wait                                    
69de  push    12Fh                            
69e1  lea     ax,[bp-10h]                     
69e4  push    ax                              
69e5  call far M007.M007_GETVALUE             ; AP_ACTUALEXT
69ea  mov     bx,ax                           
69ec  wait                                    
69ed  fld     dword ptr ss:[bx]               
69f0  push    14Fh                            
69f3  lea     ax,[bp-14h]                     
69f6  push    ax                              
69f7  wait                                    
69f8  fstp    dword ptr [bp-24h]              
69fb  call far M007.M007_GETVALUE             ; AP_MANUALEXT
6a00  mov     bx,ax                           
6a02  wait                                    
6a03  fld     dword ptr ss:[bx]               
6a06  wait                                    
6a07  fsubr   dword ptr [bp-24h]              
6a0a  sub     sp,8h                           
6a0d  mov     bx,sp                           
6a0f  wait                                    
6a10  fstp    qword ptr ss:[bx]               
6a13  nop                                     
6a14  wait                                    
6a15  call far sub_035a                       
6a1a  add     sp,8h                           
6a1d  mov     es,dx                           
6a1f  mov     bx,ax                           
6a21  wait                                    
6a22  fld     qword ptr es:[bx]               
6a25  wait                                    
6a26  fdiv    dword ptr [0F6h]                ; [ds] = 0
6a2a  wait                                    
6a2b  fmul    dword ptr [454h]                ; [ds] = -45
6a2f  wait                                    
6a30  fadd    dword ptr [bp-4h]               
6a33  wait                                    
6a34  fstp    dword ptr [bp-4h]               
6a37  wait                                    
6a38  fldz                                    
6a3a  wait                                    
6a3b  fcom    dword ptr [0EAh]                ; [ds] = 0
6a3f  wait                                    
6a40  fstp    st(0)                           
6a42  wait                                    
6a43  fstsw   ax                              
6a45  sahf                                    
6a46  jae     6A9Fh                           
6a48  push    1Ch                             
6a4a  lea     ax,[bp-18h]                     
6a4d  push    ax                              
6a4e  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6a53  mov     bx,ax                           
6a55  wait                                    
6a56  fld     dword ptr ss:[bx]               
6a59  push    1Ah                             
6a5b  lea     ax,[bp-1Ch]                     
6a5e  push    ax                              
6a5f  wait                                    
6a60  fstp    dword ptr [bp-28h]              
6a63  call far M007.M007_GETVALUE             ; AP_MANUALKV
6a68  mov     bx,ax                           
6a6a  wait                                    
6a6b  fld     dword ptr ss:[bx]               
6a6e  wait                                    
6a6f  fsubr   dword ptr [bp-28h]              
6a72  sub     sp,8h                           
6a75  mov     bx,sp                           
6a77  wait                                    
6a78  fstp    qword ptr ss:[bx]               
6a7b  nop                                     
6a7c  wait                                    
6a7d  call far sub_035a                       
6a82  add     sp,8h                           
6a85  mov     es,dx                           
6a87  mov     bx,ax                           
6a89  wait                                    
6a8a  fld     qword ptr es:[bx]               
6a8d  wait                                    
6a8e  fdiv    dword ptr [0EAh]                ; [ds] = 0
6a92  wait                                    
6a93  fmul    dword ptr [458h]                ; [ds] = -5
6a97  wait                                    
6a98  fadd    dword ptr [bp-4h]               
6a9b  wait                                    
6a9c  fstp    dword ptr [bp-4h]               
6a9f  wait                                    
6aa0  fldz                                    
6aa2  wait                                    
6aa3  fcom    dword ptr [0F2h]                ; [ds] = 0
6aa7  wait                                    
6aa8  fstp    st(0)                           
6aaa  wait                                    
6aab  fstsw   ax                              
6aad  sahf                                    
6aae  jb      6AB3h                           
6ab0  jmp     6EF7h                           
6ab3  push    131h                            
6ab6  lea     ax,[bp-28h]                     
6ab9  push    ax                              
6aba  call far M007.M007_GETVALUE             ; AP_ACTUALLENS
6abf  mov     bx,ax                           
6ac1  wait                                    
6ac2  fld     dword ptr ss:[bx]               
6ac5  push    151h                            
6ac8  lea     ax,[bp-24h]                     
6acb  push    ax                              
6acc  wait                                    
6acd  fstp    dword ptr [bp-20h]              
6ad0  call far M007.M007_GETVALUE             ; AP_MANUALLENS
6ad5  mov     bx,ax                           
6ad7  wait                                    
6ad8  fld     dword ptr ss:[bx]               
6adb  wait                                    
6adc  fsubr   dword ptr [bp-20h]              
6adf  sub     sp,8h                           
6ae2  mov     bx,sp                           
6ae4  wait                                    
6ae5  fstp    qword ptr ss:[bx]               
6ae8  nop                                     
6ae9  wait                                    
6aea  call far sub_035a                       
6aef  add     sp,8h                           
6af2  mov     es,dx                           
6af4  mov     bx,ax                           
6af6  wait                                    
6af7  fld     qword ptr es:[bx]               
6afa  wait                                    
6afb  fdiv    dword ptr [0F2h]                ; [ds] = 0
6aff  wait                                    
6b00  fmul    dword ptr [458h]                ; [ds] = -5
6b04  jmp     6BD4h                           
6b07  wait                                    
6b08  fldz                                    
6b0a  wait                                    
6b0b  fcom    dword ptr [0EAh]                ; [ds] = 0
6b0f  wait                                    
6b10  fstp    st(0)                           
6b12  wait                                    
6b13  fstsw   ax                              
6b15  sahf                                    
6b16  jae     6B6Fh                           
6b18  push    1Ch                             
6b1a  lea     ax,[bp-28h]                     
6b1d  push    ax                              
6b1e  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6b23  mov     bx,ax                           
6b25  wait                                    
6b26  fld     dword ptr ss:[bx]               
6b29  push    1Ah                             
6b2b  lea     ax,[bp-24h]                     
6b2e  push    ax                              
6b2f  wait                                    
6b30  fstp    dword ptr [bp-20h]              
6b33  call far M007.M007_GETVALUE             ; AP_MANUALKV
6b38  mov     bx,ax                           
6b3a  wait                                    
6b3b  fld     dword ptr ss:[bx]               
6b3e  wait                                    
6b3f  fsubr   dword ptr [bp-20h]              
6b42  sub     sp,8h                           
6b45  mov     bx,sp                           
6b47  wait                                    
6b48  fstp    qword ptr ss:[bx]               
6b4b  nop                                     
6b4c  wait                                    
6b4d  call far sub_035a                       
6b52  add     sp,8h                           
6b55  mov     es,dx                           
6b57  mov     bx,ax                           
6b59  wait                                    
6b5a  fld     qword ptr es:[bx]               
6b5d  wait                                    
6b5e  fdiv    dword ptr [0EAh]                ; [ds] = 0
6b62  wait                                    
6b63  fmul    dword ptr [45Ch]                ; [ds] = -60
6b67  wait                                    
6b68  fadd    dword ptr [bp-4h]               
6b6b  wait                                    
6b6c  fstp    dword ptr [bp-4h]               
6b6f  wait                                    
6b70  fldz                                    
6b72  wait                                    
6b73  fcom    dword ptr [0F2h]                ; [ds] = 0
6b77  wait                                    
6b78  fstp    st(0)                           
6b7a  wait                                    
6b7b  fstsw   ax                              
6b7d  sahf                                    
6b7e  jb      6B83h                           
6b80  jmp     6EF7h                           
6b83  push    131h                            
6b86  lea     ax,[bp-28h]                     
6b89  push    ax                              
6b8a  call far M007.M007_GETVALUE             ; AP_ACTUALLENS
6b8f  mov     bx,ax                           
6b91  wait                                    
6b92  fld     dword ptr ss:[bx]               
6b95  push    151h                            
6b98  lea     ax,[bp-24h]                     
6b9b  push    ax                              
6b9c  wait                                    
6b9d  fstp    dword ptr [bp-20h]              
6ba0  call far M007.M007_GETVALUE             ; AP_MANUALLENS
6ba5  mov     bx,ax                           
6ba7  wait                                    
6ba8  fld     dword ptr ss:[bx]               
6bab  wait                                    
6bac  fsubr   dword ptr [bp-20h]              
6baf  sub     sp,8h                           
6bb2  mov     bx,sp                           
6bb4  wait                                    
6bb5  fstp    qword ptr ss:[bx]               
6bb8  nop                                     
6bb9  wait                                    
6bba  call far sub_035a                       
6bbf  add     sp,8h                           
6bc2  mov     es,dx                           
6bc4  mov     bx,ax                           
6bc6  wait                                    
6bc7  fld     qword ptr es:[bx]               
6bca  wait                                    
6bcb  fdiv    dword ptr [0F2h]                ; [ds] = 0
6bcf  wait                                    
6bd0  fmul    dword ptr [460h]                ; [ds] = -40
6bd4  wait                                    
6bd5  fadd    dword ptr [bp-4h]               
6bd8  wait                                    
6bd9  fstp    dword ptr [bp-4h]               
6bdc  nop                                     
6bdd  wait                                    
6bde  jmp     6EF7h                           
6be1  wait                                    
6be2  fldz                                    
6be4  wait                                    
6be5  fcom    dword ptr [0EEh]                ; [ds] = 0
6be9  wait                                    
6bea  fstp    st(0)                           
6bec  wait                                    
6bed  fstsw   ax                              
6bef  sahf                                    
6bf0  jb      6BF5h                           
6bf2  jmp     6CAFh                           
6bf5  push    1Dh                             
6bf7  lea     ax,[bp-28h]                     
6bfa  push    ax                              
6bfb  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
6c00  mov     bx,ax                           
6c02  wait                                    
6c03  fld     dword ptr ss:[bx]               
6c06  push    1Bh                             
6c08  lea     ax,[bp-24h]                     
6c0b  push    ax                              
6c0c  wait                                    
6c0d  fstp    dword ptr [bp-18h]              
6c10  call far M007.M007_GETVALUE             ; AP_MANUALCURRENT
6c15  mov     bx,ax                           
6c17  wait                                    
6c18  fld     dword ptr ss:[bx]               
6c1b  wait                                    
6c1c  fsubr   dword ptr [bp-18h]              
6c1f  sub     sp,8h                           
6c22  mov     bx,sp                           
6c24  wait                                    
6c25  fstp    qword ptr ss:[bx]               
6c28  nop                                     
6c29  wait                                    
6c2a  call far sub_035a                       
6c2f  add     sp,8h                           
6c32  mov     es,dx                           
6c34  mov     bx,ax                           
6c36  wait                                    
6c37  fld     qword ptr es:[bx]               
6c3a  wait                                    
6c3b  fdiv    dword ptr [0EEh]                ; [ds] = 0
6c3f  wait                                    
6c40  fmul    dword ptr [464h]                ; [ds] = -90
6c44  wait                                    
6c45  fadd    dword ptr [bp-4h]               
6c48  wait                                    
6c49  fstp    dword ptr [bp-4h]               
6c4c  wait                                    
6c4d  fldz                                    
6c4f  wait                                    
6c50  fcom    dword ptr [0EAh]                ; [ds] = 0
6c54  wait                                    
6c55  fstp    st(0)                           
6c57  wait                                    
6c58  fstsw   ax                              
6c5a  sahf                                    
6c5b  jae     6CC0h                           
6c5d  push    1Ch                             
6c5f  lea     ax,[bp-20h]                     
6c62  push    ax                              
6c63  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6c68  mov     bx,ax                           
6c6a  wait                                    
6c6b  fld     dword ptr ss:[bx]               
6c6e  push    1Ah                             
6c70  lea     ax,[bp-1Ch]                     
6c73  push    ax                              
6c74  wait                                    
6c75  fstp    dword ptr [bp-14h]              
6c78  call far M007.M007_GETVALUE             ; AP_MANUALKV
6c7d  mov     bx,ax                           
6c7f  wait                                    
6c80  fld     dword ptr ss:[bx]               
6c83  wait                                    
6c84  fsubr   dword ptr [bp-14h]              
6c87  sub     sp,8h                           
6c8a  mov     bx,sp                           
6c8c  wait                                    
6c8d  fstp    qword ptr ss:[bx]               
6c90  nop                                     
6c91  wait                                    
6c92  call far sub_035a                       
6c97  add     sp,8h                           
6c9a  mov     es,dx                           
6c9c  mov     bx,ax                           
6c9e  wait                                    
6c9f  fld     qword ptr es:[bx]               
6ca2  wait                                    
6ca3  fdiv    dword ptr [0EAh]                ; [ds] = 0
6ca7  wait                                    
6ca8  fmul    dword ptr [468h]                ; [ds] = -10
6cac  jmp     6BD4h                           
6caf  wait                                    
6cb0  fldz                                    
6cb2  wait                                    
6cb3  fcom    dword ptr [0EAh]                ; [ds] = 0
6cb7  wait                                    
6cb8  fstp    st(0)                           
6cba  wait                                    
6cbb  fstsw   ax                              
6cbd  sahf                                    
6cbe  jb      6CC3h                           
6cc0  jmp     6EF7h                           
6cc3  push    1Ch                             
6cc5  lea     ax,[bp-28h]                     
6cc8  push    ax                              
6cc9  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6cce  mov     bx,ax                           
6cd0  wait                                    
6cd1  fld     dword ptr ss:[bx]               
6cd4  push    1Ah                             
6cd6  lea     ax,[bp-24h]                     
6cd9  push    ax                              
6cda  wait                                    
6cdb  fstp    dword ptr [bp-20h]              
6cde  call far M007.M007_GETVALUE             ; AP_MANUALKV
6ce3  mov     bx,ax                           
6ce5  wait                                    
6ce6  fld     dword ptr ss:[bx]               
6ce9  wait                                    
6cea  fsubr   dword ptr [bp-20h]              
6ced  sub     sp,8h                           
6cf0  mov     bx,sp                           
6cf2  wait                                    
6cf3  fstp    qword ptr ss:[bx]               
6cf6  nop                                     
6cf7  wait                                    
6cf8  call far sub_035a                       
6cfd  add     sp,8h                           
6d00  mov     es,dx                           
6d02  mov     bx,ax                           
6d04  wait                                    
6d05  fld     qword ptr es:[bx]               
6d08  wait                                    
6d09  fdiv    dword ptr [0EAh]                ; [ds] = 0
6d0d  wait                                    
6d0e  fmul    dword ptr [46Ch]                ; [ds] = -100
6d12  jmp     6BD4h                           
6d15  push    0Bh                             
6d17  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
6d1c  cmp     ax,4h                           
6d1f  je      6D24h                           
6d21  jmp     6DEAh                           
6d24  wait                                    
6d25  fldz                                    
6d27  wait                                    
6d28  fcom    dword ptr [0EEh]                ; [ds] = 0
6d2c  wait                                    
6d2d  fstp    st(0)                           
6d2f  wait                                    
6d30  fstsw   ax                              
6d32  sahf                                    
6d33  jae     6D58h                           
6d35  push    1Dh                             
6d37  lea     ax,[bp-28h]                     
6d3a  push    ax                              
6d3b  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
6d40  mov     bx,ax                           
6d42  wait                                    
6d43  fld     dword ptr ss:[bx]               
6d46  wait                                    
6d47  fdiv    dword ptr [0EEh]                ; [ds] = 0
6d4b  wait                                    
6d4c  fmul    dword ptr [454h]                ; [ds] = -45
6d50  wait                                    
6d51  fadd    dword ptr [bp-4h]               
6d54  wait                                    
6d55  fstp    dword ptr [bp-4h]               
6d58  wait                                    
6d59  fldz                                    
6d5b  wait                                    
6d5c  fcom    dword ptr [0F6h]                ; [ds] = 0
6d60  wait                                    
6d61  fstp    st(0)                           
6d63  wait                                    
6d64  fstsw   ax                              
6d66  sahf                                    
6d67  jae     6D8Dh                           
6d69  push    12Fh                            
6d6c  lea     ax,[bp-28h]                     
6d6f  push    ax                              
6d70  call far M007.M007_GETVALUE             ; AP_ACTUALEXT
6d75  mov     bx,ax                           
6d77  wait                                    
6d78  fld     dword ptr ss:[bx]               
6d7b  wait                                    
6d7c  fdiv    dword ptr [0F6h]                ; [ds] = 0
6d80  wait                                    
6d81  fmul    dword ptr [454h]                ; [ds] = -45
6d85  wait                                    
6d86  fadd    dword ptr [bp-4h]               
6d89  wait                                    
6d8a  fstp    dword ptr [bp-4h]               
6d8d  wait                                    
6d8e  fldz                                    
6d90  wait                                    
6d91  fcom    dword ptr [0EAh]                ; [ds] = 0
6d95  wait                                    
6d96  fstp    st(0)                           
6d98  wait                                    
6d99  fstsw   ax                              
6d9b  sahf                                    
6d9c  jae     6DC1h                           
6d9e  push    1Ch                             
6da0  lea     ax,[bp-28h]                     
6da3  push    ax                              
6da4  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6da9  mov     bx,ax                           
6dab  wait                                    
6dac  fld     dword ptr ss:[bx]               
6daf  wait                                    
6db0  fdiv    dword ptr [0EAh]                ; [ds] = 0
6db4  wait                                    
6db5  fmul    dword ptr [458h]                ; [ds] = -5
6db9  wait                                    
6dba  fadd    dword ptr [bp-4h]               
6dbd  wait                                    
6dbe  fstp    dword ptr [bp-4h]               
6dc1  wait                                    
6dc2  fldz                                    
6dc4  wait                                    
6dc5  fcom    dword ptr [0F2h]                ; [ds] = 0
6dc9  wait                                    
6dca  fstp    st(0)                           
6dcc  wait                                    
6dcd  fstsw   ax                              
6dcf  sahf                                    
6dd0  jb      6DD5h                           
6dd2  jmp     6EF7h                           
6dd5  push    131h                            
6dd8  lea     ax,[bp-28h]                     
6ddb  push    ax                              
6ddc  call far M007.M007_GETVALUE             ; AP_ACTUALLENS
6de1  mov     bx,ax                           
6de3  wait                                    
6de4  fld     dword ptr ss:[bx]               
6de7  jmp     6AFAh                           
6dea  wait                                    
6deb  fldz                                    
6ded  wait                                    
6dee  fcom    dword ptr [0EEh]                ; [ds] = 0
6df2  wait                                    
6df3  fstp    st(0)                           
6df5  wait                                    
6df6  fstsw   ax                              
6df8  sahf                                    
6df9  jae     6E1Eh                           
6dfb  push    1Dh                             
6dfd  lea     ax,[bp-28h]                     
6e00  push    ax                              
6e01  call far M007.M007_GETVALUE             ; AP_ACTUALCURRENT
6e06  mov     bx,ax                           
6e08  wait                                    
6e09  fld     dword ptr ss:[bx]               
6e0c  wait                                    
6e0d  fdiv    dword ptr [0EEh]                ; [ds] = 0
6e11  wait                                    
6e12  fmul    dword ptr [470h]                ; [ds] = -80
6e16  wait                                    
6e17  fadd    dword ptr [bp-4h]               
6e1a  wait                                    
6e1b  fstp    dword ptr [bp-4h]               
6e1e  wait                                    
6e1f  fldz                                    
6e21  wait                                    
6e22  fcom    dword ptr [0EAh]                ; [ds] = 0
6e26  wait                                    
6e27  fstp    st(0)                           
6e29  wait                                    
6e2a  fstsw   ax                              
6e2c  sahf                                    
6e2d  jb      6E32h                           
6e2f  jmp     6EF7h                           
6e32  push    1Ch                             
6e34  lea     ax,[bp-28h]                     
6e37  push    ax                              
6e38  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6e3d  mov     bx,ax                           
6e3f  wait                                    
6e40  fld     dword ptr ss:[bx]               
6e43  wait                                    
6e44  fdiv    dword ptr [0EAh]                ; [ds] = 0
6e48  wait                                    
6e49  fmul    dword ptr [474h]                ; [ds] = -20
6e4d  jmp     6BD4h                           
6e50  push    0Bh                             
6e52  call far M007.M007_GETSTATE             ; DP_FILAMENT_TYPE
6e57  cmp     ax,4h                           
6e5a  jne     6EB6h                           
6e5c  wait                                    
6e5d  fldz                                    
6e5f  wait                                    
6e60  fcom    dword ptr [0EAh]                ; [ds] = 0
6e64  wait                                    
6e65  fstp    st(0)                           
6e67  wait                                    
6e68  fstsw   ax                              
6e6a  sahf                                    
6e6b  jae     6E90h                           
6e6d  push    1Ch                             
6e6f  lea     ax,[bp-28h]                     
6e72  push    ax                              
6e73  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6e78  mov     bx,ax                           
6e7a  wait                                    
6e7b  fld     dword ptr ss:[bx]               
6e7e  wait                                    
6e7f  fdiv    dword ptr [0EAh]                ; [ds] = 0
6e83  wait                                    
6e84  fmul    dword ptr [45Ch]                ; [ds] = -60
6e88  wait                                    
6e89  fadd    dword ptr [bp-4h]               
6e8c  wait                                    
6e8d  fstp    dword ptr [bp-4h]               
6e90  wait                                    
6e91  fldz                                    
6e93  wait                                    
6e94  fcom    dword ptr [0F2h]                ; [ds] = 0
6e98  wait                                    
6e99  fstp    st(0)                           
6e9b  wait                                    
6e9c  fstsw   ax                              
6e9e  sahf                                    
6e9f  jae     6EF7h                           
6ea1  push    131h                            
6ea4  lea     ax,[bp-28h]                     
6ea7  push    ax                              
6ea8  call far M007.M007_GETVALUE             ; AP_ACTUALLENS
6ead  mov     bx,ax                           
6eaf  wait                                    
6eb0  fld     dword ptr ss:[bx]               
6eb3  jmp     6BCAh                           
6eb6  wait                                    
6eb7  fldz                                    
6eb9  wait                                    
6eba  fcom    dword ptr [0EAh]                ; [ds] = 0
6ebe  wait                                    
6ebf  fstp    st(0)                           
6ec1  wait                                    
6ec2  fstsw   ax                              
6ec4  sahf                                    
6ec5  jae     6EF7h                           
6ec7  push    1Ch                             
6ec9  lea     ax,[bp-28h]                     
6ecc  push    ax                              
6ecd  call far M007.M007_GETVALUE             ; AP_ACTUALKV
6ed2  mov     bx,ax                           
6ed4  wait                                    
6ed5  fld     dword ptr ss:[bx]               
6ed8  jmp     6D08h                           
6edb  dec     ax                              
6edc  dec     ax                              
6edd  jne     6EE2h                           
6edf  jmp     694Eh                           
6ee2  dec     ax                              
6ee3  jne     6EE8h                           
6ee5  jmp     6D15h                           
6ee8  sub     ax,3h                           
6eeb  jne     6EF0h                           
6eed  jmp     694Eh                           
6ef0  dec     ax                              
6ef1  dec     ax                              
6ef2  jne     6EF7h                           
6ef4  jmp     6E50h                           
6ef7  push    154h                            
6efa  push    word ptr [bp-2h]                
6efd  push    word ptr [bp-4h]                
6f00  call far M007.M007_PUTVALUE             ; AP_PROGRESS
6f05  pop     ds                              
6f06  leave                                   
6f07  retf                                    

; ----- sub_6f08 -----
6f08  mov     ax,6911h                        ; segment seg2:0000
6f0b  push    bp                              
6f0c  mov     bp,sp                           
6f0e  push    ds                              
6f0f  mov     ds,ax                           
6f11  push    118h                            
6f14  call far M007.M007_GETSTATE             ; DP_PROGRESS
6f19  cmp     ax,4h                           
6f1c  je      6F2Bh                           
6f1e  push    118h                            
6f21  call far M007.M007_GETSTATE             ; DP_PROGRESS
6f26  cmp     ax,7h                           
6f29  jne     6F45h                           
6f2b  push    154h                            
6f2e  push    word ptr [42Ah]                 ; [ds] f32 here = 0
6f32  push    word ptr [428h]                 ; [ds] f32 here = 0
6f36  call far M007.M007_PUTVALUE             ; AP_PROGRESS
6f3b  push    118h                            
6f3e  push    0h                              
6f40  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 0
6f45  pop     ds                              
6f46  leave                                   
6f47  retf                                    

; ----- sub_6f48 -----
6f48  mov     ax,6F09h                        ; segment seg2:0000
6f4b  enter   0Ah,0h                          
6f4f  push    ds                              
6f50  mov     ds,ax                           
6f52  mov     word ptr [bp-2h],0h             
6f57  wait                                    
6f58  fld     dword ptr [bp+12h]              
6f5b  wait                                    
6f5c  fst     dword ptr [bp-6h]               
6f5f  wait                                    
6f60  fld     dword ptr [bp+0Ah]              
6f63  wait                                    
6f64  fst     dword ptr [bp-0Ah]              
6f67  wait                                    
6f68  fcom    st(0),st(1)                     
6f6a  wait                                    
6f6b  fstp    st(0)                           
6f6d  wait                                    
6f6e  fstp    st(0)                           
6f70  wait                                    
6f71  fstsw   ax                              
6f73  sahf                                    
6f74  jb      6F79h                           
6f76  jmp     7062h                           
6f79  wait                                    
6f7a  fld     dword ptr [bp-6h]               
6f7d  wait                                    
6f7e  fcom    dword ptr [478h]                ; [ds] = 20000
6f82  wait                                    
6f83  fstp    st(0)                           
6f85  wait                                    
6f86  fstsw   ax                              
6f88  sahf                                    
6f89  jae     6F8Eh                           
6f8b  jmp     7043h                           
6f8e  wait                                    
6f8f  fld     dword ptr [bp-0Ah]              
6f92  wait                                    
6f93  fcom    dword ptr [478h]                ; [ds] = 20000
6f97  wait                                    
6f98  fstp    st(0)                           
6f9a  wait                                    
6f9b  fstsw   ax                              
6f9d  sahf                                    
6f9e  jae     7013h                           
6fa0  push    word ptr [47Ah]                 
6fa4  push    word ptr [478h]                 ; [ds] f32 here = 20000
6fa8  push    word ptr [47Eh]                 
6fac  push    word ptr [47Ch]                 ; [ds] f32 here = 1
6fb0  push    word ptr [47Ah]                 
6fb4  push    word ptr [478h]                 ; [ds] f32 here = 20000
6fb8  push    0h                              
6fba  push    word ptr [482h]                 ; [ds] f32 here = 0
6fbe  push    word ptr [480h]                 ; [ds] f32 here = 0
6fc2  push    0h                              
6fc4  push    1h                              
6fc6  call far sub_5da0                       
6fcb  add     sp,16h                          
6fce  wait                                    
6fcf  fld     dword ptr [bp-6h]               
6fd2  sub     sp,4h                           
6fd5  mov     bx,sp                           
6fd7  wait                                    
6fd8  fstp    dword ptr ss:[bx]               
6fdb  nop                                     
6fdc  wait                                    
6fdd  push    word ptr [47Eh]                 
6fe1  push    word ptr [47Ch]                 ; [ds] f32 here = 1
6fe5  push    word ptr [486h]                 
6fe9  push    word ptr [484h]                 ; [ds] f32 here = 1000
6fed  push    0h                              
6fef  push    word ptr [482h]                 ; [ds] f32 here = 0
6ff3  push    word ptr [480h]                 ; [ds] f32 here = 0
6ff7  push    1h                              
6ff9  push    2h                              
6ffb  call far sub_5da0                       
7000  add     sp,16h                          
7003  push    2h                              
7005  call far sub_5ce4                       
700a  pop     bx                              
700b  mov     word ptr [bp-2h],1h             
7010  jmp     7164h                           
7013  push    word ptr [bp+14h]               
7016  push    word ptr [bp+12h]               
7019  push    word ptr [47Eh]                 
701d  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7021  push    word ptr [486h]                 
7025  push    word ptr [484h]                 ; [ds] f32 here = 1000
7029  push    0h                              
702b  push    word ptr [482h]                 ; [ds] f32 here = 0
702f  push    word ptr [480h]                 ; [ds] f32 here = 0
7033  push    1h                              
7035  push    1h                              
7037  call far sub_5da0                       
703c  add     sp,16h                          
703f  push    1h                              
7041  jmp     7005h                           
7043  wait                                    
7044  fld     dword ptr [bp+12h]              
7047  wait                                    
7048  fstp    dword ptr [bp-0Ah]              
704b  nop                                     
704c  wait                                    
704d  push    word ptr [bp-8h]                
7050  push    word ptr [bp-0Ah]               
7053  push    word ptr [47Eh]                 
7057  push    word ptr [47Ch]                 ; [ds] f32 here = 1
705b  wait                                    
705c  fld     dword ptr [bp-0Ah]              
705f  jmp     713Bh                           
7062  wait                                    
7063  fld     dword ptr [bp+0Ah]              
7066  wait                                    
7067  fst     dword ptr [bp-0Ah]              
706a  wait                                    
706b  fcom    dword ptr [478h]                ; [ds] = 20000
706f  wait                                    
7070  fstp    st(0)                           
7072  wait                                    
7073  fstsw   ax                              
7075  sahf                                    
7076  jae     707Bh                           
7078  jmp     711Bh                           
707b  wait                                    
707c  fld     dword ptr [bp+12h]              
707f  wait                                    
7080  fst     dword ptr [bp-6h]               
7083  wait                                    
7084  fcom    dword ptr [478h]                ; [ds] = 20000
7088  wait                                    
7089  fstp    st(0)                           
708b  wait                                    
708c  fstsw   ax                              
708e  sahf                                    
708f  jae     7103h                           
7091  push    word ptr [47Ah]                 
7095  push    word ptr [478h]                 ; [ds] f32 here = 20000
7099  push    word ptr [47Eh]                 
709d  push    word ptr [47Ch]                 ; [ds] f32 here = 1
70a1  push    word ptr [48Ah]                 
70a5  push    word ptr [488h]                 ; [ds] f32 here = -1000
70a9  push    0h                              
70ab  push    word ptr [482h]                 ; [ds] f32 here = 0
70af  push    word ptr [480h]                 ; [ds] f32 here = 0
70b3  push    0h                              
70b5  push    1h                              
70b7  call far sub_5da0                       
70bc  add     sp,16h                          
70bf  wait                                    
70c0  fld     dword ptr [bp-6h]               
70c3  sub     sp,4h                           
70c6  mov     bx,sp                           
70c8  wait                                    
70c9  fstp    dword ptr ss:[bx]               
70cc  nop                                     
70cd  wait                                    
70ce  push    word ptr [47Eh]                 
70d2  push    word ptr [47Ch]                 ; [ds] f32 here = 1
70d6  wait                                    
70d7  fld     dword ptr [bp-6h]               
70da  wait                                    
70db  fsub    dword ptr [bp-0Ah]              
70de  sub     sp,4h                           
70e1  mov     bx,sp                           
70e3  wait                                    
70e4  fstp    dword ptr ss:[bx]               
70e7  nop                                     
70e8  wait                                    
70e9  push    0h                              
70eb  push    word ptr [482h]                 ; [ds] f32 here = 0
70ef  push    word ptr [480h]                 ; [ds] f32 here = 0
70f3  push    0h                              
70f5  push    2h                              
70f7  call far sub_5da0                       
70fc  add     sp,16h                          
70ff  push    2h                              
7101  jmp     715Eh                           
7103  push    word ptr [bp+14h]               
7106  push    word ptr [bp+12h]               
7109  push    word ptr [47Eh]                 
710d  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7111  push    word ptr [48Ah]                 
7115  push    word ptr [488h]                 ; [ds] f32 here = -1000
7119  jmp     7146h                           
711b  wait                                    
711c  fld     dword ptr [bp+12h]              
711f  wait                                    
7120  fstp    dword ptr [bp-0Ah]              
7123  nop                                     
7124  wait                                    
7125  push    word ptr [bp-8h]                
7128  push    word ptr [bp-0Ah]               
712b  push    word ptr [47Eh]                 
712f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7133  wait                                    
7134  fld     dword ptr [bp+0Ah]              
7137  wait                                    
7138  fsubr   dword ptr [bp-0Ah]              
713b  sub     sp,4h                           
713e  mov     bx,sp                           
7140  wait                                    
7141  fstp    dword ptr ss:[bx]               
7144  nop                                     
7145  wait                                    
7146  push    0h                              
7148  push    word ptr [482h]                 ; [ds] f32 here = 0
714c  push    word ptr [480h]                 ; [ds] f32 here = 0
7150  push    0h                              
7152  push    1h                              
7154  call far sub_5da0                       
7159  add     sp,16h                          
715c  push    1h                              
715e  call far sub_5ce4                       
7163  pop     bx                              
7164  wait                                    
7165  fld     dword ptr [bp+0Eh]              
7168  wait                                    
7169  fst     dword ptr [bp-0Ah]              
716c  wait                                    
716d  fld     dword ptr [bp+6h]               
7170  wait                                    
7171  fst     dword ptr [bp-6h]               
7174  wait                                    
7175  fcom    st(0),st(1)                     
7177  wait                                    
7178  fstp    st(0)                           
717a  wait                                    
717b  fstp    st(0)                           
717d  wait                                    
717e  fstsw   ax                              
7180  sahf                                    
7181  jb      7186h                           
7183  jmp     7245h                           
7186  wait                                    
7187  fld     dword ptr [bp-0Ah]              
718a  wait                                    
718b  fcom    dword ptr [48Ch]                ; [ds] = 1.8
718f  wait                                    
7190  fstp    st(0)                           
7192  wait                                    
7193  fstsw   ax                              
7195  sahf                                    
7196  ja      719Bh                           
7198  jmp     722Dh                           
719b  wait                                    
719c  fld     dword ptr [bp-6h]               
719f  wait                                    
71a0  fcom    dword ptr [48Ch]                ; [ds] = 1.8
71a4  wait                                    
71a5  fstp    st(0)                           
71a7  wait                                    
71a8  fstsw   ax                              
71aa  sahf                                    
71ab  jae     7215h                           
71ad  push    word ptr [48Eh]                 
71b1  push    word ptr [48Ch]                 ; [ds] f32 here = 1.8
71b5  push    word ptr [47Eh]                 
71b9  push    word ptr [47Ch]                 ; [ds] f32 here = 1
71bd  push    word ptr [492h]                 
71c1  push    word ptr [490h]                 ; [ds] f32 here = 0.15
71c5  push    0h                              
71c7  push    word ptr [482h]                 ; [ds] f32 here = 0
71cb  push    word ptr [480h]                 ; [ds] f32 here = 0
71cf  push    0h                              
71d1  push    1h                              
71d3  call far sub_5d50                       
71d8  add     sp,16h                          
71db  wait                                    
71dc  fld     dword ptr [bp-0Ah]              
71df  sub     sp,4h                           
71e2  mov     bx,sp                           
71e4  wait                                    
71e5  fstp    dword ptr ss:[bx]               
71e8  nop                                     
71e9  wait                                    
71ea  push    word ptr [47Eh]                 
71ee  push    word ptr [47Ch]                 ; [ds] f32 here = 1
71f2  push    word ptr [496h]                 
71f6  push    word ptr [494h]                 ; [ds] f32 here = 0.04
71fa  push    word ptr [bp-2h]                
71fd  push    word ptr [482h]                 ; [ds] f32 here = 0
7201  push    word ptr [480h]                 ; [ds] f32 here = 0
7205  push    0h                              
7207  push    2h                              
7209  call far sub_5d50                       
720e  add     sp,16h                          
7211  push    2h                              
7213  jmp     7274h                           
7215  push    word ptr [bp+10h]               
7218  push    word ptr [bp+0Eh]               
721b  push    word ptr [47Eh]                 
721f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7223  push    word ptr [496h]                 
7227  push    word ptr [494h]                 ; [ds] f32 here = 0.04
722b  jmp     725Bh                           
722d  push    word ptr [bp+10h]               
7230  push    word ptr [bp+0Eh]               
7233  push    word ptr [47Eh]                 
7237  push    word ptr [47Ch]                 ; [ds] f32 here = 1
723b  push    word ptr [492h]                 
723f  push    word ptr [490h]                 ; [ds] f32 here = 0.15
7243  jmp     725Bh                           
7245  push    word ptr [bp+10h]               
7248  push    word ptr [bp+0Eh]               
724b  push    word ptr [47Eh]                 
724f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7253  push    word ptr [49Ah]                 
7257  push    word ptr [498h]                 ; [ds] f32 here = -0.15
725b  push    word ptr [bp-2h]                
725e  push    word ptr [482h]                 ; [ds] f32 here = 0
7262  push    word ptr [480h]                 ; [ds] f32 here = 0
7266  push    0h                              
7268  push    1h                              
726a  call far sub_5d50                       
726f  add     sp,16h                          
7272  push    1h                              
7274  call far sub_5cf6                       
7279  pop     bx                              
727a  call far sub_5d34                       
727f  pop     ds                              
7280  leave                                   
7281  retf                                    

; ----- sub_7282 -----
7282  mov     ax,6F49h                        ; segment seg2:0000
7285  enter   8h,0h                           
7289  push    ds                              
728a  mov     ds,ax                           
728c  wait                                    
728d  fld     dword ptr [bp+0Ah]              
7290  wait                                    
7291  fst     dword ptr [bp-4h]               
7294  wait                                    
7295  fld     dword ptr [bp+6h]               
7298  wait                                    
7299  fst     dword ptr [bp-8h]               
729c  wait                                    
729d  fcom    st(0),st(1)                     
729f  wait                                    
72a0  fstp    st(0)                           
72a2  wait                                    
72a3  fstp    st(0)                           
72a5  wait                                    
72a6  fstsw   ax                              
72a8  sahf                                    
72a9  jb      72AEh                           
72ab  jmp     7375h                           
72ae  wait                                    
72af  fld     dword ptr [bp-4h]               
72b2  wait                                    
72b3  fcom    dword ptr [478h]                ; [ds] = 20000
72b7  wait                                    
72b8  fstp    st(0)                           
72ba  wait                                    
72bb  fstsw   ax                              
72bd  sahf                                    
72be  jae     72C3h                           
72c0  jmp     7356h                           
72c3  wait                                    
72c4  fld     dword ptr [bp-8h]               
72c7  wait                                    
72c8  fcom    dword ptr [478h]                ; [ds] = 20000
72cc  wait                                    
72cd  fstp    st(0)                           
72cf  wait                                    
72d0  fstsw   ax                              
72d2  sahf                                    
72d3  jae     733Dh                           
72d5  push    word ptr [47Ah]                 
72d9  push    word ptr [478h]                 ; [ds] f32 here = 20000
72dd  push    word ptr [47Eh]                 
72e1  push    word ptr [47Ch]                 ; [ds] f32 here = 1
72e5  push    word ptr [47Ah]                 
72e9  push    word ptr [478h]                 ; [ds] f32 here = 20000
72ed  push    0h                              
72ef  push    word ptr [482h]                 ; [ds] f32 here = 0
72f3  push    word ptr [480h]                 ; [ds] f32 here = 0
72f7  push    0h                              
72f9  push    1h                              
72fb  call far sub_5da0                       
7300  add     sp,16h                          
7303  wait                                    
7304  fld     dword ptr [bp-4h]               
7307  sub     sp,4h                           
730a  mov     bx,sp                           
730c  wait                                    
730d  fstp    dword ptr ss:[bx]               
7310  nop                                     
7311  wait                                    
7312  push    word ptr [47Eh]                 
7316  push    word ptr [47Ch]                 ; [ds] f32 here = 1
731a  push    word ptr [486h]                 
731e  push    word ptr [484h]                 ; [ds] f32 here = 1000
7322  push    0h                              
7324  push    word ptr [482h]                 ; [ds] f32 here = 0
7328  push    word ptr [480h]                 ; [ds] f32 here = 0
732c  push    0h                              
732e  push    2h                              
7330  call far sub_5da0                       
7335  add     sp,16h                          
7338  push    2h                              
733a  jmp     745Ah                           
733d  push    word ptr [bp+0Ch]               
7340  push    word ptr [bp+0Ah]               
7343  push    word ptr [47Eh]                 
7347  push    word ptr [47Ch]                 ; [ds] f32 here = 1
734b  push    word ptr [486h]                 
734f  push    word ptr [484h]                 ; [ds] f32 here = 1000
7353  jmp     7442h                           
7356  wait                                    
7357  fld     dword ptr [bp+0Ah]              
735a  wait                                    
735b  fstp    dword ptr [bp-8h]               
735e  nop                                     
735f  wait                                    
7360  push    word ptr [bp-6h]                
7363  push    word ptr [bp-8h]                
7366  push    word ptr [47Eh]                 
736a  push    word ptr [47Ch]                 ; [ds] f32 here = 1
736e  wait                                    
736f  fld     dword ptr [bp-8h]               
7372  jmp     7437h                           
7375  wait                                    
7376  fld     dword ptr [bp+6h]               
7379  wait                                    
737a  fst     dword ptr [bp-8h]               
737d  wait                                    
737e  fcom    dword ptr [478h]                ; [ds] = 20000
7382  wait                                    
7383  fstp    st(0)                           
7385  wait                                    
7386  fstsw   ax                              
7388  sahf                                    
7389  jae     738Eh                           
738b  jmp     7417h                           
738e  wait                                    
738f  fld     dword ptr [bp+0Ah]              
7392  wait                                    
7393  fst     dword ptr [bp-4h]               
7396  wait                                    
7397  fcom    dword ptr [478h]                ; [ds] = 20000
739b  wait                                    
739c  fstp    st(0)                           
739e  wait                                    
739f  fstsw   ax                              
73a1  sahf                                    
73a2  jae     73FFh                           
73a4  push    word ptr [47Ah]                 
73a8  push    word ptr [478h]                 ; [ds] f32 here = 20000
73ac  push    word ptr [47Eh]                 
73b0  push    word ptr [47Ch]                 ; [ds] f32 here = 1
73b4  push    word ptr [48Ah]                 
73b8  push    word ptr [488h]                 ; [ds] f32 here = -1000
73bc  push    0h                              
73be  push    word ptr [482h]                 ; [ds] f32 here = 0
73c2  push    word ptr [480h]                 ; [ds] f32 here = 0
73c6  push    0h                              
73c8  push    1h                              
73ca  call far sub_5da0                       
73cf  add     sp,16h                          
73d2  wait                                    
73d3  fld     dword ptr [bp-4h]               
73d6  sub     sp,4h                           
73d9  mov     bx,sp                           
73db  wait                                    
73dc  fstp    dword ptr ss:[bx]               
73df  nop                                     
73e0  wait                                    
73e1  push    word ptr [47Eh]                 
73e5  push    word ptr [47Ch]                 ; [ds] f32 here = 1
73e9  wait                                    
73ea  fld     dword ptr [bp-4h]               
73ed  wait                                    
73ee  fsub    dword ptr [bp-8h]               
73f1  sub     sp,4h                           
73f4  mov     bx,sp                           
73f6  wait                                    
73f7  fstp    dword ptr ss:[bx]               
73fa  nop                                     
73fb  wait                                    
73fc  jmp     7322h                           
73ff  push    word ptr [bp+0Ch]               
7402  push    word ptr [bp+0Ah]               
7405  push    word ptr [47Eh]                 
7409  push    word ptr [47Ch]                 ; [ds] f32 here = 1
740d  push    word ptr [48Ah]                 
7411  push    word ptr [488h]                 ; [ds] f32 here = -1000
7415  jmp     7442h                           
7417  wait                                    
7418  fld     dword ptr [bp+0Ah]              
741b  wait                                    
741c  fstp    dword ptr [bp-8h]               
741f  nop                                     
7420  wait                                    
7421  push    word ptr [bp-6h]                
7424  push    word ptr [bp-8h]                
7427  push    word ptr [47Eh]                 
742b  push    word ptr [47Ch]                 ; [ds] f32 here = 1
742f  wait                                    
7430  fld     dword ptr [bp+6h]               
7433  wait                                    
7434  fsubr   dword ptr [bp-8h]               
7437  sub     sp,4h                           
743a  mov     bx,sp                           
743c  wait                                    
743d  fstp    dword ptr ss:[bx]               
7440  nop                                     
7441  wait                                    
7442  push    0h                              
7444  push    word ptr [482h]                 ; [ds] f32 here = 0
7448  push    word ptr [480h]                 ; [ds] f32 here = 0
744c  push    0h                              
744e  push    1h                              
7450  call far sub_5da0                       
7455  add     sp,16h                          
7458  push    1h                              
745a  call far sub_5ce4                       
745f  pop     bx                              
7460  call far sub_5d1e                       
7465  pop     ds                              
7466  leave                                   
7467  retf                                    

; ----- sub_7468 -----
7468  mov     ax,7283h                        ; segment seg2:0000
746b  enter   0Ah,0h                          
746f  push    ds                              
7470  mov     ds,ax                           
7472  mov     word ptr [bp-2h],0h             
7477  wait                                    
7478  fld     dword ptr [bp+12h]              
747b  wait                                    
747c  fst     dword ptr [bp-6h]               
747f  wait                                    
7480  fld     dword ptr [bp+0Ah]              
7483  wait                                    
7484  fst     dword ptr [bp-0Ah]              
7487  wait                                    
7488  fcom    st(0),st(1)                     
748a  wait                                    
748b  fstp    st(0)                           
748d  wait                                    
748e  fstp    st(0)                           
7490  wait                                    
7491  fstsw   ax                              
7493  sahf                                    
7494  jb      7499h                           
7496  jmp     7582h                           
7499  wait                                    
749a  fld     dword ptr [bp-6h]               
749d  wait                                    
749e  fcom    dword ptr [478h]                ; [ds] = 20000
74a2  wait                                    
74a3  fstp    st(0)                           
74a5  wait                                    
74a6  fstsw   ax                              
74a8  sahf                                    
74a9  jae     74AEh                           
74ab  jmp     7563h                           
74ae  wait                                    
74af  fld     dword ptr [bp-0Ah]              
74b2  wait                                    
74b3  fcom    dword ptr [478h]                ; [ds] = 20000
74b7  wait                                    
74b8  fstp    st(0)                           
74ba  wait                                    
74bb  fstsw   ax                              
74bd  sahf                                    
74be  jae     7533h                           
74c0  push    word ptr [47Ah]                 
74c4  push    word ptr [478h]                 ; [ds] f32 here = 20000
74c8  push    word ptr [47Eh]                 
74cc  push    word ptr [47Ch]                 ; [ds] f32 here = 1
74d0  push    word ptr [47Ah]                 
74d4  push    word ptr [478h]                 ; [ds] f32 here = 20000
74d8  push    0h                              
74da  push    word ptr [482h]                 ; [ds] f32 here = 0
74de  push    word ptr [480h]                 ; [ds] f32 here = 0
74e2  push    0h                              
74e4  push    1h                              
74e6  call far sub_5da0                       
74eb  add     sp,16h                          
74ee  wait                                    
74ef  fld     dword ptr [bp-6h]               
74f2  sub     sp,4h                           
74f5  mov     bx,sp                           
74f7  wait                                    
74f8  fstp    dword ptr ss:[bx]               
74fb  nop                                     
74fc  wait                                    
74fd  push    word ptr [47Eh]                 
7501  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7505  push    word ptr [486h]                 
7509  push    word ptr [484h]                 ; [ds] f32 here = 1000
750d  push    0h                              
750f  push    word ptr [482h]                 ; [ds] f32 here = 0
7513  push    word ptr [480h]                 ; [ds] f32 here = 0
7517  push    1h                              
7519  push    2h                              
751b  call far sub_5da0                       
7520  add     sp,16h                          
7523  push    2h                              
7525  call far sub_5ce4                       
752a  pop     bx                              
752b  mov     word ptr [bp-2h],1h             
7530  jmp     7684h                           
7533  push    word ptr [bp+14h]               
7536  push    word ptr [bp+12h]               
7539  push    word ptr [47Eh]                 
753d  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7541  push    word ptr [486h]                 
7545  push    word ptr [484h]                 ; [ds] f32 here = 1000
7549  push    0h                              
754b  push    word ptr [482h]                 ; [ds] f32 here = 0
754f  push    word ptr [480h]                 ; [ds] f32 here = 0
7553  push    1h                              
7555  push    1h                              
7557  call far sub_5da0                       
755c  add     sp,16h                          
755f  push    1h                              
7561  jmp     7525h                           
7563  wait                                    
7564  fld     dword ptr [bp+12h]              
7567  wait                                    
7568  fstp    dword ptr [bp-0Ah]              
756b  nop                                     
756c  wait                                    
756d  push    word ptr [bp-8h]                
7570  push    word ptr [bp-0Ah]               
7573  push    word ptr [47Eh]                 
7577  push    word ptr [47Ch]                 ; [ds] f32 here = 1
757b  wait                                    
757c  fld     dword ptr [bp-0Ah]              
757f  jmp     765Bh                           
7582  wait                                    
7583  fld     dword ptr [bp+0Ah]              
7586  wait                                    
7587  fst     dword ptr [bp-0Ah]              
758a  wait                                    
758b  fcom    dword ptr [478h]                ; [ds] = 20000
758f  wait                                    
7590  fstp    st(0)                           
7592  wait                                    
7593  fstsw   ax                              
7595  sahf                                    
7596  jae     759Bh                           
7598  jmp     763Bh                           
759b  wait                                    
759c  fld     dword ptr [bp+12h]              
759f  wait                                    
75a0  fst     dword ptr [bp-6h]               
75a3  wait                                    
75a4  fcom    dword ptr [478h]                ; [ds] = 20000
75a8  wait                                    
75a9  fstp    st(0)                           
75ab  wait                                    
75ac  fstsw   ax                              
75ae  sahf                                    
75af  jae     7623h                           
75b1  push    word ptr [47Ah]                 
75b5  push    word ptr [478h]                 ; [ds] f32 here = 20000
75b9  push    word ptr [47Eh]                 
75bd  push    word ptr [47Ch]                 ; [ds] f32 here = 1
75c1  push    word ptr [48Ah]                 
75c5  push    word ptr [488h]                 ; [ds] f32 here = -1000
75c9  push    0h                              
75cb  push    word ptr [482h]                 ; [ds] f32 here = 0
75cf  push    word ptr [480h]                 ; [ds] f32 here = 0
75d3  push    0h                              
75d5  push    1h                              
75d7  call far sub_5da0                       
75dc  add     sp,16h                          
75df  wait                                    
75e0  fld     dword ptr [bp-6h]               
75e3  sub     sp,4h                           
75e6  mov     bx,sp                           
75e8  wait                                    
75e9  fstp    dword ptr ss:[bx]               
75ec  nop                                     
75ed  wait                                    
75ee  push    word ptr [47Eh]                 
75f2  push    word ptr [47Ch]                 ; [ds] f32 here = 1
75f6  wait                                    
75f7  fld     dword ptr [bp-6h]               
75fa  wait                                    
75fb  fsub    dword ptr [bp-0Ah]              
75fe  sub     sp,4h                           
7601  mov     bx,sp                           
7603  wait                                    
7604  fstp    dword ptr ss:[bx]               
7607  nop                                     
7608  wait                                    
7609  push    0h                              
760b  push    word ptr [482h]                 ; [ds] f32 here = 0
760f  push    word ptr [480h]                 ; [ds] f32 here = 0
7613  push    0h                              
7615  push    2h                              
7617  call far sub_5da0                       
761c  add     sp,16h                          
761f  push    2h                              
7621  jmp     767Eh                           
7623  push    word ptr [bp+14h]               
7626  push    word ptr [bp+12h]               
7629  push    word ptr [47Eh]                 
762d  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7631  push    word ptr [48Ah]                 
7635  push    word ptr [488h]                 ; [ds] f32 here = -1000
7639  jmp     7666h                           
763b  wait                                    
763c  fld     dword ptr [bp+12h]              
763f  wait                                    
7640  fstp    dword ptr [bp-0Ah]              
7643  nop                                     
7644  wait                                    
7645  push    word ptr [bp-8h]                
7648  push    word ptr [bp-0Ah]               
764b  push    word ptr [47Eh]                 
764f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7653  wait                                    
7654  fld     dword ptr [bp+0Ah]              
7657  wait                                    
7658  fsubr   dword ptr [bp-0Ah]              
765b  sub     sp,4h                           
765e  mov     bx,sp                           
7660  wait                                    
7661  fstp    dword ptr ss:[bx]               
7664  nop                                     
7665  wait                                    
7666  push    0h                              
7668  push    word ptr [482h]                 ; [ds] f32 here = 0
766c  push    word ptr [480h]                 ; [ds] f32 here = 0
7670  push    0h                              
7672  push    1h                              
7674  call far sub_5da0                       
7679  add     sp,16h                          
767c  push    1h                              
767e  call far sub_5ce4                       
7683  pop     bx                              
7684  wait                                    
7685  fld     dword ptr [bp+0Eh]              
7688  wait                                    
7689  fst     dword ptr [bp-0Ah]              
768c  wait                                    
768d  fld     dword ptr [bp+6h]               
7690  wait                                    
7691  fst     dword ptr [bp-6h]               
7694  wait                                    
7695  fcom    st(0),st(1)                     
7697  wait                                    
7698  fstp    st(0)                           
769a  wait                                    
769b  fstp    st(0)                           
769d  wait                                    
769e  fstsw   ax                              
76a0  sahf                                    
76a1  jb      76A6h                           
76a3  jmp     7765h                           
76a6  wait                                    
76a7  fld     dword ptr [bp-0Ah]              
76aa  wait                                    
76ab  fcom    dword ptr [48Ch]                ; [ds] = 1.8
76af  wait                                    
76b0  fstp    st(0)                           
76b2  wait                                    
76b3  fstsw   ax                              
76b5  sahf                                    
76b6  ja      76BBh                           
76b8  jmp     774Dh                           
76bb  wait                                    
76bc  fld     dword ptr [bp-6h]               
76bf  wait                                    
76c0  fcom    dword ptr [48Ch]                ; [ds] = 1.8
76c4  wait                                    
76c5  fstp    st(0)                           
76c7  wait                                    
76c8  fstsw   ax                              
76ca  sahf                                    
76cb  jae     7735h                           
76cd  push    word ptr [48Eh]                 
76d1  push    word ptr [48Ch]                 ; [ds] f32 here = 1.8
76d5  push    word ptr [47Eh]                 
76d9  push    word ptr [47Ch]                 ; [ds] f32 here = 1
76dd  push    word ptr [49Eh]                 
76e1  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
76e5  push    0h                              
76e7  push    word ptr [482h]                 ; [ds] f32 here = 0
76eb  push    word ptr [480h]                 ; [ds] f32 here = 0
76ef  push    0h                              
76f1  push    1h                              
76f3  call far sub_5d50                       
76f8  add     sp,16h                          
76fb  wait                                    
76fc  fld     dword ptr [bp-0Ah]              
76ff  sub     sp,4h                           
7702  mov     bx,sp                           
7704  wait                                    
7705  fstp    dword ptr ss:[bx]               
7708  nop                                     
7709  wait                                    
770a  push    word ptr [47Eh]                 
770e  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7712  push    word ptr [4A2h]                 
7716  push    word ptr [4A0h]                 ; [ds] f32 here = 0.002
771a  push    word ptr [bp-2h]                
771d  push    word ptr [482h]                 ; [ds] f32 here = 0
7721  push    word ptr [480h]                 ; [ds] f32 here = 0
7725  push    0h                              
7727  push    2h                              
7729  call far sub_5d50                       
772e  add     sp,16h                          
7731  push    2h                              
7733  jmp     7794h                           
7735  push    word ptr [bp+10h]               
7738  push    word ptr [bp+0Eh]               
773b  push    word ptr [47Eh]                 
773f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7743  push    word ptr [4A2h]                 
7747  push    word ptr [4A0h]                 ; [ds] f32 here = 0.002
774b  jmp     777Bh                           
774d  push    word ptr [bp+10h]               
7750  push    word ptr [bp+0Eh]               
7753  push    word ptr [47Eh]                 
7757  push    word ptr [47Ch]                 ; [ds] f32 here = 1
775b  push    word ptr [49Eh]                 
775f  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
7763  jmp     777Bh                           
7765  push    word ptr [bp+10h]               
7768  push    word ptr [bp+0Eh]               
776b  push    word ptr [47Eh]                 
776f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7773  push    word ptr [49Ah]                 
7777  push    word ptr [498h]                 ; [ds] f32 here = -0.15
777b  push    word ptr [bp-2h]                
777e  push    word ptr [482h]                 ; [ds] f32 here = 0
7782  push    word ptr [480h]                 ; [ds] f32 here = 0
7786  push    0h                              
7788  push    1h                              
778a  call far sub_5d50                       
778f  add     sp,16h                          
7792  push    1h                              
7794  call far sub_5cf6                       
7799  pop     bx                              
779a  call far sub_5d34                       
779f  pop     ds                              
77a0  leave                                   
77a1  retf                                    

; ----- sub_77a2 -----
77a2  mov     ax,7469h                        ; segment seg2:0000
77a5  enter   20h,0h                          
77a9  push    ds                              
77aa  mov     ds,ax                           
77ac  mov     ax,[478h]                       
77af  mov     dx,[47Ah]                       
77b3  mov     [bp-8h],ax                      
77b6  mov     [bp-6h],dx                      
77b9  push    19h                             
77bb  lea     ax,[bp-14h]                     
77be  push    ax                              
77bf  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
77c4  mov     bx,ax                           
77c6  wait                                    
77c7  fld     dword ptr ss:[bx]               
77ca  wait                                    
77cb  fld     dword ptr [4A4h]                ; [ds] = 2
77cf  wait                                    
77d0  fst     dword ptr [bp-4h]               
77d3  wait                                    
77d4  fcom    st(0),st(1)                     
77d6  wait                                    
77d7  fstp    st(0)                           
77d9  wait                                    
77da  fstp    st(0)                           
77dc  wait                                    
77dd  fstsw   ax                              
77df  sahf                                    
77e0  jb      77F5h                           
77e2  push    19h                             
77e4  lea     ax,[bp-18h]                     
77e7  push    ax                              
77e8  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
77ed  mov     bx,ax                           
77ef  wait                                    
77f0  fld     dword ptr ss:[bx]               
77f3  jmp     77F9h                           
77f5  wait                                    
77f6  fld     dword ptr [bp-4h]               
77f9  wait                                    
77fa  fst     dword ptr [bp-1Ch]              
77fd  wait                                    
77fe  fstp    dword ptr [bp-10h]              
7801  wait                                    
7802  fld     dword ptr [bp-1Ch]              
7805  sub     sp,4h                           
7808  mov     bx,sp                           
780a  wait                                    
780b  fstp    dword ptr ss:[bx]               
780e  nop                                     
780f  wait                                    
7810  push    word ptr [47Eh]                 
7814  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7818  push    word ptr [4AAh]                 
781c  push    word ptr [4A8h]                 ; [ds] f32 here = 0.001
7820  push    1h                              
7822  push    word ptr [482h]                 ; [ds] f32 here = 0
7826  push    word ptr [480h]                 ; [ds] f32 here = 0
782a  push    0h                              
782c  push    1h                              
782e  call far sub_5d50                       
7833  add     sp,16h                          
7836  push    1h                              
7838  call far sub_5cf6                       
783d  pop     bx                              
783e  push    17h                             
7840  wait                                    
7841  fld     dword ptr [bp-1Ch]              
7844  sub     sp,4h                           
7847  mov     bx,sp                           
7849  wait                                    
784a  fstp    dword ptr ss:[bx]               
784d  nop                                     
784e  wait                                    
784f  call far M007.M007_PUTVALUE             ; AP_TARGETCURRENT
7854  push    0Ch                             
7856  call far M007.M007_GETSTATE             ; DP_ANODE
785b  push    ax                              
785c  call far sub_56fc                       
7861  pop     bx                              
7862  mov     es,dx                           
7864  mov     bx,ax                           
7866  wait                                    
7867  fld     dword ptr es:[bx]               
786a  wait                                    
786b  fcom    dword ptr [bp-8h]               
786e  wait                                    
786f  fstp    st(0)                           
7871  wait                                    
7872  fstsw   ax                              
7874  sahf                                    
7875  ja      788Fh                           
7877  push    0Ch                             
7879  call far M007.M007_GETSTATE             ; DP_ANODE
787e  push    ax                              
787f  call far sub_56fc                       
7884  pop     bx                              
7885  mov     es,dx                           
7887  mov     bx,ax                           
7889  wait                                    
788a  fld     dword ptr es:[bx]               
788d  jmp     7893h                           
788f  wait                                    
7890  fld     dword ptr [bp-8h]               
7893  wait                                    
7894  fst     dword ptr [bp-20h]              
7897  wait                                    
7898  fstp    dword ptr [bp-0Ch]              
789b  nop                                     
789c  wait                                    
789d  push    word ptr [486h]                 
78a1  push    word ptr [484h]                 ; [ds] f32 here = 1000
78a5  push    word ptr [47Eh]                 
78a9  push    word ptr [47Ch]                 ; [ds] f32 here = 1
78ad  push    word ptr [486h]                 
78b1  push    word ptr [484h]                 ; [ds] f32 here = 1000
78b5  push    0h                              
78b7  push    word ptr [482h]                 ; [ds] f32 here = 0
78bb  push    word ptr [480h]                 ; [ds] f32 here = 0
78bf  push    0h                              
78c1  push    1h                              
78c3  call far sub_5da0                       
78c8  add     sp,16h                          
78cb  wait                                    
78cc  fld     dword ptr [bp-20h]              
78cf  sub     sp,4h                           
78d2  mov     bx,sp                           
78d4  wait                                    
78d5  fstp    dword ptr ss:[bx]               
78d8  nop                                     
78d9  wait                                    
78da  push    word ptr [47Eh]                 
78de  push    word ptr [47Ch]                 ; [ds] f32 here = 1
78e2  push    word ptr [4AEh]                 
78e6  push    word ptr [4ACh]                 ; [ds] f32 here = 20
78ea  push    0h                              
78ec  push    word ptr [482h]                 ; [ds] f32 here = 0
78f0  push    word ptr [480h]                 ; [ds] f32 here = 0
78f4  push    1h                              
78f6  push    2h                              
78f8  call far sub_5da0                       
78fd  add     sp,16h                          
7900  push    2h                              
7902  call far sub_5ce4                       
7907  pop     bx                              
7908  push    18h                             
790a  wait                                    
790b  fld     dword ptr [bp-20h]              
790e  sub     sp,4h                           
7911  mov     bx,sp                           
7913  wait                                    
7914  fstp    dword ptr ss:[bx]               
7917  nop                                     
7918  wait                                    
7919  call far M007.M007_PUTVALUE             ; AP_TARGETKV
791e  call far sub_5d34                       
7923  pop     ds                              
7924  leave                                   
7925  retf                                    

; ----- sub_7926 -----
7926  mov     ax,77A3h                        ; segment seg2:0000
7929  enter   8h,0h                           
792d  push    ds                              
792e  mov     ds,ax                           
7930  wait                                    
7931  fld     dword ptr [bp+0Ah]              
7934  wait                                    
7935  fst     dword ptr [bp-4h]               
7938  wait                                    
7939  fld     dword ptr [bp+6h]               
793c  wait                                    
793d  fst     dword ptr [bp-8h]               
7940  wait                                    
7941  fcom    st(0),st(1)                     
7943  wait                                    
7944  fstp    st(0)                           
7946  wait                                    
7947  fstp    st(0)                           
7949  wait                                    
794a  fstsw   ax                              
794c  sahf                                    
794d  jb      7952h                           
794f  jmp     7A19h                           
7952  wait                                    
7953  fld     dword ptr [bp-4h]               
7956  wait                                    
7957  fcom    dword ptr [478h]                ; [ds] = 20000
795b  wait                                    
795c  fstp    st(0)                           
795e  wait                                    
795f  fstsw   ax                              
7961  sahf                                    
7962  jae     7967h                           
7964  jmp     79FAh                           
7967  wait                                    
7968  fld     dword ptr [bp-8h]               
796b  wait                                    
796c  fcom    dword ptr [478h]                ; [ds] = 20000
7970  wait                                    
7971  fstp    st(0)                           
7973  wait                                    
7974  fstsw   ax                              
7976  sahf                                    
7977  jae     79E1h                           
7979  push    word ptr [47Ah]                 
797d  push    word ptr [478h]                 ; [ds] f32 here = 20000
7981  push    word ptr [47Eh]                 
7985  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7989  push    word ptr [47Ah]                 
798d  push    word ptr [478h]                 ; [ds] f32 here = 20000
7991  push    0h                              
7993  push    word ptr [482h]                 ; [ds] f32 here = 0
7997  push    word ptr [480h]                 ; [ds] f32 here = 0
799b  push    0h                              
799d  push    1h                              
799f  call far sub_5da0                       
79a4  add     sp,16h                          
79a7  wait                                    
79a8  fld     dword ptr [bp-4h]               
79ab  sub     sp,4h                           
79ae  mov     bx,sp                           
79b0  wait                                    
79b1  fstp    dword ptr ss:[bx]               
79b4  nop                                     
79b5  wait                                    
79b6  push    word ptr [47Eh]                 
79ba  push    word ptr [47Ch]                 ; [ds] f32 here = 1
79be  push    word ptr [486h]                 
79c2  push    word ptr [484h]                 ; [ds] f32 here = 1000
79c6  push    0h                              
79c8  push    word ptr [482h]                 ; [ds] f32 here = 0
79cc  push    word ptr [480h]                 ; [ds] f32 here = 0
79d0  push    0h                              
79d2  push    2h                              
79d4  call far sub_5da0                       
79d9  add     sp,16h                          
79dc  push    2h                              
79de  jmp     7AFEh                           
79e1  push    word ptr [bp+0Ch]               
79e4  push    word ptr [bp+0Ah]               
79e7  push    word ptr [47Eh]                 
79eb  push    word ptr [47Ch]                 ; [ds] f32 here = 1
79ef  push    word ptr [486h]                 
79f3  push    word ptr [484h]                 ; [ds] f32 here = 1000
79f7  jmp     7AE6h                           
79fa  wait                                    
79fb  fld     dword ptr [bp+0Ah]              
79fe  wait                                    
79ff  fstp    dword ptr [bp-8h]               
7a02  nop                                     
7a03  wait                                    
7a04  push    word ptr [bp-6h]                
7a07  push    word ptr [bp-8h]                
7a0a  push    word ptr [47Eh]                 
7a0e  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7a12  wait                                    
7a13  fld     dword ptr [bp-8h]               
7a16  jmp     7ADBh                           
7a19  wait                                    
7a1a  fld     dword ptr [bp+6h]               
7a1d  wait                                    
7a1e  fst     dword ptr [bp-8h]               
7a21  wait                                    
7a22  fcom    dword ptr [478h]                ; [ds] = 20000
7a26  wait                                    
7a27  fstp    st(0)                           
7a29  wait                                    
7a2a  fstsw   ax                              
7a2c  sahf                                    
7a2d  jae     7A32h                           
7a2f  jmp     7ABBh                           
7a32  wait                                    
7a33  fld     dword ptr [bp+0Ah]              
7a36  wait                                    
7a37  fst     dword ptr [bp-4h]               
7a3a  wait                                    
7a3b  fcom    dword ptr [478h]                ; [ds] = 20000
7a3f  wait                                    
7a40  fstp    st(0)                           
7a42  wait                                    
7a43  fstsw   ax                              
7a45  sahf                                    
7a46  jae     7AA3h                           
7a48  push    word ptr [47Ah]                 
7a4c  push    word ptr [478h]                 ; [ds] f32 here = 20000
7a50  push    word ptr [47Eh]                 
7a54  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7a58  push    word ptr [48Ah]                 
7a5c  push    word ptr [488h]                 ; [ds] f32 here = -1000
7a60  push    0h                              
7a62  push    word ptr [482h]                 ; [ds] f32 here = 0
7a66  push    word ptr [480h]                 ; [ds] f32 here = 0
7a6a  push    0h                              
7a6c  push    1h                              
7a6e  call far sub_5da0                       
7a73  add     sp,16h                          
7a76  wait                                    
7a77  fld     dword ptr [bp-4h]               
7a7a  sub     sp,4h                           
7a7d  mov     bx,sp                           
7a7f  wait                                    
7a80  fstp    dword ptr ss:[bx]               
7a83  nop                                     
7a84  wait                                    
7a85  push    word ptr [47Eh]                 
7a89  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7a8d  wait                                    
7a8e  fld     dword ptr [bp-4h]               
7a91  wait                                    
7a92  fsub    dword ptr [bp-8h]               
7a95  sub     sp,4h                           
7a98  mov     bx,sp                           
7a9a  wait                                    
7a9b  fstp    dword ptr ss:[bx]               
7a9e  nop                                     
7a9f  wait                                    
7aa0  jmp     79C6h                           
7aa3  push    word ptr [bp+0Ch]               
7aa6  push    word ptr [bp+0Ah]               
7aa9  push    word ptr [47Eh]                 
7aad  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7ab1  push    word ptr [48Ah]                 
7ab5  push    word ptr [488h]                 ; [ds] f32 here = -1000
7ab9  jmp     7AE6h                           
7abb  wait                                    
7abc  fld     dword ptr [bp+0Ah]              
7abf  wait                                    
7ac0  fstp    dword ptr [bp-8h]               
7ac3  nop                                     
7ac4  wait                                    
7ac5  push    word ptr [bp-6h]                
7ac8  push    word ptr [bp-8h]                
7acb  push    word ptr [47Eh]                 
7acf  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7ad3  wait                                    
7ad4  fld     dword ptr [bp+6h]               
7ad7  wait                                    
7ad8  fsubr   dword ptr [bp-8h]               
7adb  sub     sp,4h                           
7ade  mov     bx,sp                           
7ae0  wait                                    
7ae1  fstp    dword ptr ss:[bx]               
7ae4  nop                                     
7ae5  wait                                    
7ae6  push    0h                              
7ae8  push    word ptr [482h]                 ; [ds] f32 here = 0
7aec  push    word ptr [480h]                 ; [ds] f32 here = 0
7af0  push    0h                              
7af2  push    1h                              
7af4  call far sub_5da0                       
7af9  add     sp,16h                          
7afc  push    1h                              
7afe  call far sub_5ce4                       
7b03  pop     bx                              
7b04  call far sub_5d1e                       
7b09  pop     ds                              
7b0a  leave                                   
7b0b  retf                                    

; ----- sub_7b0c -----
7b0c  mov     ax,7927h                        ; segment seg2:0000
7b0f  enter   8h,0h                           
7b13  push    ds                              
7b14  mov     ds,ax                           
7b16  wait                                    
7b17  fld     dword ptr [bp+0Ah]              
7b1a  wait                                    
7b1b  fst     dword ptr [bp-4h]               
7b1e  wait                                    
7b1f  fld     dword ptr [bp+6h]               
7b22  wait                                    
7b23  fst     dword ptr [bp-8h]               
7b26  wait                                    
7b27  fcom    st(0),st(1)                     
7b29  wait                                    
7b2a  fstp    st(0)                           
7b2c  wait                                    
7b2d  fstp    st(0)                           
7b2f  wait                                    
7b30  fstsw   ax                              
7b32  sahf                                    
7b33  jb      7B38h                           
7b35  jmp     7BF6h                           
7b38  wait                                    
7b39  fld     dword ptr [bp-4h]               
7b3c  wait                                    
7b3d  fcom    dword ptr [48Ch]                ; [ds] = 1.8
7b41  wait                                    
7b42  fstp    st(0)                           
7b44  wait                                    
7b45  fstsw   ax                              
7b47  sahf                                    
7b48  ja      7B4Dh                           
7b4a  jmp     7BDEh                           
7b4d  wait                                    
7b4e  fld     dword ptr [bp-8h]               
7b51  wait                                    
7b52  fcom    dword ptr [48Ch]                ; [ds] = 1.8
7b56  wait                                    
7b57  fstp    st(0)                           
7b59  wait                                    
7b5a  fstsw   ax                              
7b5c  sahf                                    
7b5d  jae     7BC6h                           
7b5f  push    word ptr [48Eh]                 
7b63  push    word ptr [48Ch]                 ; [ds] f32 here = 1.8
7b67  push    word ptr [47Eh]                 
7b6b  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7b6f  push    word ptr [49Eh]                 
7b73  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
7b77  push    0h                              
7b79  push    word ptr [482h]                 ; [ds] f32 here = 0
7b7d  push    word ptr [480h]                 ; [ds] f32 here = 0
7b81  push    0h                              
7b83  push    1h                              
7b85  call far sub_5d50                       
7b8a  add     sp,16h                          
7b8d  wait                                    
7b8e  fld     dword ptr [bp-4h]               
7b91  sub     sp,4h                           
7b94  mov     bx,sp                           
7b96  wait                                    
7b97  fstp    dword ptr ss:[bx]               
7b9a  nop                                     
7b9b  wait                                    
7b9c  push    word ptr [47Eh]                 
7ba0  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7ba4  push    word ptr [4A2h]                 
7ba8  push    word ptr [4A0h]                 ; [ds] f32 here = 0.002
7bac  push    0h                              
7bae  push    word ptr [482h]                 ; [ds] f32 here = 0
7bb2  push    word ptr [480h]                 ; [ds] f32 here = 0
7bb6  push    0h                              
7bb8  push    2h                              
7bba  call far sub_5d50                       
7bbf  add     sp,16h                          
7bc2  push    2h                              
7bc4  jmp     7C24h                           
7bc6  push    word ptr [bp+0Ch]               
7bc9  push    word ptr [bp+0Ah]               
7bcc  push    word ptr [47Eh]                 
7bd0  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7bd4  push    word ptr [4A2h]                 
7bd8  push    word ptr [4A0h]                 ; [ds] f32 here = 0.002
7bdc  jmp     7C0Ch                           
7bde  push    word ptr [bp+0Ch]               
7be1  push    word ptr [bp+0Ah]               
7be4  push    word ptr [47Eh]                 
7be8  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7bec  push    word ptr [49Eh]                 
7bf0  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
7bf4  jmp     7C0Ch                           
7bf6  push    word ptr [bp+0Ch]               
7bf9  push    word ptr [bp+0Ah]               
7bfc  push    word ptr [47Eh]                 
7c00  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7c04  push    word ptr [49Ah]                 
7c08  push    word ptr [498h]                 ; [ds] f32 here = -0.15
7c0c  push    0h                              
7c0e  push    word ptr [482h]                 ; [ds] f32 here = 0
7c12  push    word ptr [480h]                 ; [ds] f32 here = 0
7c16  push    0h                              
7c18  push    1h                              
7c1a  call far sub_5d50                       
7c1f  add     sp,16h                          
7c22  push    1h                              
7c24  call far sub_5cf6                       
7c29  pop     bx                              
7c2a  call far sub_5d08                       
7c2f  pop     ds                              
7c30  leave                                   
7c31  retf                                    

; ----- sub_7c32 -----
7c32  mov     ax,7B0Dh                        ; segment seg2:0000
7c35  enter   0Ah,0h                          
7c39  push    ds                              
7c3a  mov     ds,ax                           
7c3c  mov     word ptr [bp-2h],0h             
7c41  wait                                    
7c42  fld     dword ptr [bp+12h]              
7c45  wait                                    
7c46  fst     dword ptr [bp-6h]               
7c49  wait                                    
7c4a  fld     dword ptr [bp+0Ah]              
7c4d  wait                                    
7c4e  fst     dword ptr [bp-0Ah]              
7c51  wait                                    
7c52  fcom    st(0),st(1)                     
7c54  wait                                    
7c55  fstp    st(0)                           
7c57  wait                                    
7c58  fstp    st(0)                           
7c5a  wait                                    
7c5b  fstsw   ax                              
7c5d  sahf                                    
7c5e  jb      7C63h                           
7c60  jmp     7D4Ch                           
7c63  wait                                    
7c64  fld     dword ptr [bp-6h]               
7c67  wait                                    
7c68  fcom    dword ptr [478h]                ; [ds] = 20000
7c6c  wait                                    
7c6d  fstp    st(0)                           
7c6f  wait                                    
7c70  fstsw   ax                              
7c72  sahf                                    
7c73  jae     7C78h                           
7c75  jmp     7D2Dh                           
7c78  wait                                    
7c79  fld     dword ptr [bp-0Ah]              
7c7c  wait                                    
7c7d  fcom    dword ptr [478h]                ; [ds] = 20000
7c81  wait                                    
7c82  fstp    st(0)                           
7c84  wait                                    
7c85  fstsw   ax                              
7c87  sahf                                    
7c88  jae     7CFDh                           
7c8a  push    word ptr [47Ah]                 
7c8e  push    word ptr [478h]                 ; [ds] f32 here = 20000
7c92  push    word ptr [47Eh]                 
7c96  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7c9a  push    word ptr [47Ah]                 
7c9e  push    word ptr [478h]                 ; [ds] f32 here = 20000
7ca2  push    0h                              
7ca4  push    word ptr [482h]                 ; [ds] f32 here = 0
7ca8  push    word ptr [480h]                 ; [ds] f32 here = 0
7cac  push    0h                              
7cae  push    1h                              
7cb0  call far sub_5da0                       
7cb5  add     sp,16h                          
7cb8  wait                                    
7cb9  fld     dword ptr [bp-6h]               
7cbc  sub     sp,4h                           
7cbf  mov     bx,sp                           
7cc1  wait                                    
7cc2  fstp    dword ptr ss:[bx]               
7cc5  nop                                     
7cc6  wait                                    
7cc7  push    word ptr [47Eh]                 
7ccb  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7ccf  push    word ptr [486h]                 
7cd3  push    word ptr [484h]                 ; [ds] f32 here = 1000
7cd7  push    0h                              
7cd9  push    word ptr [482h]                 ; [ds] f32 here = 0
7cdd  push    word ptr [480h]                 ; [ds] f32 here = 0
7ce1  push    1h                              
7ce3  push    2h                              
7ce5  call far sub_5da0                       
7cea  add     sp,16h                          
7ced  push    2h                              
7cef  call far sub_5ce4                       
7cf4  pop     bx                              
7cf5  mov     word ptr [bp-2h],1h             
7cfa  jmp     7E4Eh                           
7cfd  push    word ptr [bp+14h]               
7d00  push    word ptr [bp+12h]               
7d03  push    word ptr [47Eh]                 
7d07  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7d0b  push    word ptr [486h]                 
7d0f  push    word ptr [484h]                 ; [ds] f32 here = 1000
7d13  push    0h                              
7d15  push    word ptr [482h]                 ; [ds] f32 here = 0
7d19  push    word ptr [480h]                 ; [ds] f32 here = 0
7d1d  push    1h                              
7d1f  push    1h                              
7d21  call far sub_5da0                       
7d26  add     sp,16h                          
7d29  push    1h                              
7d2b  jmp     7CEFh                           
7d2d  wait                                    
7d2e  fld     dword ptr [bp+12h]              
7d31  wait                                    
7d32  fstp    dword ptr [bp-0Ah]              
7d35  nop                                     
7d36  wait                                    
7d37  push    word ptr [bp-8h]                
7d3a  push    word ptr [bp-0Ah]               
7d3d  push    word ptr [47Eh]                 
7d41  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7d45  wait                                    
7d46  fld     dword ptr [bp-0Ah]              
7d49  jmp     7E25h                           
7d4c  wait                                    
7d4d  fld     dword ptr [bp+0Ah]              
7d50  wait                                    
7d51  fst     dword ptr [bp-0Ah]              
7d54  wait                                    
7d55  fcom    dword ptr [478h]                ; [ds] = 20000
7d59  wait                                    
7d5a  fstp    st(0)                           
7d5c  wait                                    
7d5d  fstsw   ax                              
7d5f  sahf                                    
7d60  jae     7D65h                           
7d62  jmp     7E05h                           
7d65  wait                                    
7d66  fld     dword ptr [bp+12h]              
7d69  wait                                    
7d6a  fst     dword ptr [bp-6h]               
7d6d  wait                                    
7d6e  fcom    dword ptr [478h]                ; [ds] = 20000
7d72  wait                                    
7d73  fstp    st(0)                           
7d75  wait                                    
7d76  fstsw   ax                              
7d78  sahf                                    
7d79  jae     7DEDh                           
7d7b  push    word ptr [47Ah]                 
7d7f  push    word ptr [478h]                 ; [ds] f32 here = 20000
7d83  push    word ptr [47Eh]                 
7d87  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7d8b  push    word ptr [48Ah]                 
7d8f  push    word ptr [488h]                 ; [ds] f32 here = -1000
7d93  push    0h                              
7d95  push    word ptr [482h]                 ; [ds] f32 here = 0
7d99  push    word ptr [480h]                 ; [ds] f32 here = 0
7d9d  push    0h                              
7d9f  push    1h                              
7da1  call far sub_5da0                       
7da6  add     sp,16h                          
7da9  wait                                    
7daa  fld     dword ptr [bp-6h]               
7dad  sub     sp,4h                           
7db0  mov     bx,sp                           
7db2  wait                                    
7db3  fstp    dword ptr ss:[bx]               
7db6  nop                                     
7db7  wait                                    
7db8  push    word ptr [47Eh]                 
7dbc  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7dc0  wait                                    
7dc1  fld     dword ptr [bp-6h]               
7dc4  wait                                    
7dc5  fsub    dword ptr [bp-0Ah]              
7dc8  sub     sp,4h                           
7dcb  mov     bx,sp                           
7dcd  wait                                    
7dce  fstp    dword ptr ss:[bx]               
7dd1  nop                                     
7dd2  wait                                    
7dd3  push    0h                              
7dd5  push    word ptr [482h]                 ; [ds] f32 here = 0
7dd9  push    word ptr [480h]                 ; [ds] f32 here = 0
7ddd  push    0h                              
7ddf  push    2h                              
7de1  call far sub_5da0                       
7de6  add     sp,16h                          
7de9  push    2h                              
7deb  jmp     7E48h                           
7ded  push    word ptr [bp+14h]               
7df0  push    word ptr [bp+12h]               
7df3  push    word ptr [47Eh]                 
7df7  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7dfb  push    word ptr [48Ah]                 
7dff  push    word ptr [488h]                 ; [ds] f32 here = -1000
7e03  jmp     7E30h                           
7e05  wait                                    
7e06  fld     dword ptr [bp+12h]              
7e09  wait                                    
7e0a  fstp    dword ptr [bp-0Ah]              
7e0d  nop                                     
7e0e  wait                                    
7e0f  push    word ptr [bp-8h]                
7e12  push    word ptr [bp-0Ah]               
7e15  push    word ptr [47Eh]                 
7e19  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7e1d  wait                                    
7e1e  fld     dword ptr [bp+0Ah]              
7e21  wait                                    
7e22  fsubr   dword ptr [bp-0Ah]              
7e25  sub     sp,4h                           
7e28  mov     bx,sp                           
7e2a  wait                                    
7e2b  fstp    dword ptr ss:[bx]               
7e2e  nop                                     
7e2f  wait                                    
7e30  push    0h                              
7e32  push    word ptr [482h]                 ; [ds] f32 here = 0
7e36  push    word ptr [480h]                 ; [ds] f32 here = 0
7e3a  push    0h                              
7e3c  push    1h                              
7e3e  call far sub_5da0                       
7e43  add     sp,16h                          
7e46  push    1h                              
7e48  call far sub_5ce4                       
7e4d  pop     bx                              
7e4e  wait                                    
7e4f  fld     dword ptr [bp+0Eh]              
7e52  wait                                    
7e53  fst     dword ptr [bp-0Ah]              
7e56  wait                                    
7e57  fcom    dword ptr [bp+6h]               
7e5a  wait                                    
7e5b  fstp    st(0)                           
7e5d  wait                                    
7e5e  fstsw   ax                              
7e60  sahf                                    
7e61  jbe     7E84h                           
7e63  wait                                    
7e64  fld     dword ptr [bp-0Ah]              
7e67  sub     sp,4h                           
7e6a  mov     bx,sp                           
7e6c  wait                                    
7e6d  fstp    dword ptr ss:[bx]               
7e70  nop                                     
7e71  wait                                    
7e72  push    word ptr [47Eh]                 
7e76  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7e7a  push    word ptr [49Eh]                 
7e7e  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
7e82  jmp     7E9Ah                           
7e84  push    word ptr [bp+10h]               
7e87  push    word ptr [bp+0Eh]               
7e8a  push    word ptr [47Eh]                 
7e8e  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7e92  push    word ptr [49Ah]                 
7e96  push    word ptr [498h]                 ; [ds] f32 here = -0.15
7e9a  push    word ptr [bp-2h]                
7e9d  push    word ptr [482h]                 ; [ds] f32 here = 0
7ea1  push    word ptr [480h]                 ; [ds] f32 here = 0
7ea5  push    0h                              
7ea7  push    1h                              
7ea9  call far sub_5d50                       
7eae  add     sp,16h                          
7eb1  push    1h                              
7eb3  call far sub_5cf6                       
7eb8  pop     bx                              
7eb9  call far sub_5d34                       
7ebe  pop     ds                              
7ebf  leave                                   
7ec0  retf                                    
7ec1  add     [bx+si],al                      

; ----- sub_7ec2 -----
7ec2  mov     ax,7C33h                        ; segment seg2:0000
7ec5  enter   20h,0h                          
7ec9  push    ds                              
7eca  mov     ds,ax                           
7ecc  mov     ax,[478h]                       
7ecf  mov     dx,[47Ah]                       
7ed3  mov     [bp-8h],ax                      
7ed6  mov     [bp-6h],dx                      
7ed9  push    19h                             
7edb  lea     ax,[bp-14h]                     
7ede  push    ax                              
7edf  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
7ee4  mov     bx,ax                           
7ee6  wait                                    
7ee7  fld     dword ptr ss:[bx]               
7eea  wait                                    
7eeb  fld     dword ptr [48Ch]                ; [ds] = 1.8
7eef  wait                                    
7ef0  fst     dword ptr [bp-4h]               
7ef3  wait                                    
7ef4  fcom    st(0),st(1)                     
7ef6  wait                                    
7ef7  fstp    st(0)                           
7ef9  wait                                    
7efa  fstp    st(0)                           
7efc  wait                                    
7efd  fstsw   ax                              
7eff  sahf                                    
7f00  jb      7F15h                           
7f02  push    19h                             
7f04  lea     ax,[bp-18h]                     
7f07  push    ax                              
7f08  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
7f0d  mov     bx,ax                           
7f0f  wait                                    
7f10  fld     dword ptr ss:[bx]               
7f13  jmp     7F19h                           
7f15  wait                                    
7f16  fld     dword ptr [bp-4h]               
7f19  wait                                    
7f1a  fst     dword ptr [bp-1Ch]              
7f1d  wait                                    
7f1e  fstp    dword ptr [bp-10h]              
7f21  wait                                    
7f22  fld     dword ptr [bp-1Ch]              
7f25  sub     sp,4h                           
7f28  mov     bx,sp                           
7f2a  wait                                    
7f2b  fstp    dword ptr ss:[bx]               
7f2e  nop                                     
7f2f  wait                                    
7f30  push    word ptr [47Eh]                 
7f34  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7f38  push    word ptr [4AAh]                 
7f3c  push    word ptr [4A8h]                 ; [ds] f32 here = 0.001
7f40  push    1h                              
7f42  push    word ptr [482h]                 ; [ds] f32 here = 0
7f46  push    word ptr [480h]                 ; [ds] f32 here = 0
7f4a  push    0h                              
7f4c  push    1h                              
7f4e  call far sub_5d50                       
7f53  add     sp,16h                          
7f56  push    1h                              
7f58  call far sub_5cf6                       
7f5d  pop     bx                              
7f5e  push    17h                             
7f60  wait                                    
7f61  fld     dword ptr [bp-1Ch]              
7f64  sub     sp,4h                           
7f67  mov     bx,sp                           
7f69  wait                                    
7f6a  fstp    dword ptr ss:[bx]               
7f6d  nop                                     
7f6e  wait                                    
7f6f  call far M007.M007_PUTVALUE             ; AP_TARGETCURRENT
7f74  push    0Ch                             
7f76  call far M007.M007_GETSTATE             ; DP_ANODE
7f7b  push    ax                              
7f7c  call far sub_56fc                       
7f81  pop     bx                              
7f82  mov     es,dx                           
7f84  mov     bx,ax                           
7f86  wait                                    
7f87  fld     dword ptr es:[bx]               
7f8a  wait                                    
7f8b  fcom    dword ptr [bp-8h]               
7f8e  wait                                    
7f8f  fstp    st(0)                           
7f91  wait                                    
7f92  fstsw   ax                              
7f94  sahf                                    
7f95  ja      7FAFh                           
7f97  push    0Ch                             
7f99  call far M007.M007_GETSTATE             ; DP_ANODE
7f9e  push    ax                              
7f9f  call far sub_56fc                       
7fa4  pop     bx                              
7fa5  mov     es,dx                           
7fa7  mov     bx,ax                           
7fa9  wait                                    
7faa  fld     dword ptr es:[bx]               
7fad  jmp     7FB3h                           
7faf  wait                                    
7fb0  fld     dword ptr [bp-8h]               
7fb3  wait                                    
7fb4  fst     dword ptr [bp-20h]              
7fb7  wait                                    
7fb8  fstp    dword ptr [bp-0Ch]              
7fbb  nop                                     
7fbc  wait                                    
7fbd  push    word ptr [486h]                 
7fc1  push    word ptr [484h]                 ; [ds] f32 here = 1000
7fc5  push    word ptr [47Eh]                 
7fc9  push    word ptr [47Ch]                 ; [ds] f32 here = 1
7fcd  push    word ptr [486h]                 
7fd1  push    word ptr [484h]                 ; [ds] f32 here = 1000
7fd5  push    0h                              
7fd7  push    word ptr [482h]                 ; [ds] f32 here = 0
7fdb  push    word ptr [480h]                 ; [ds] f32 here = 0
7fdf  push    0h                              
7fe1  push    1h                              
7fe3  call far sub_5da0                       
7fe8  add     sp,16h                          
7feb  wait                                    
7fec  fld     dword ptr [bp-20h]              
7fef  sub     sp,4h                           
7ff2  mov     bx,sp                           
7ff4  wait                                    
7ff5  fstp    dword ptr ss:[bx]               
7ff8  nop                                     
7ff9  wait                                    
7ffa  push    word ptr [47Eh]                 
7ffe  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8002  push    word ptr [4AEh]                 
8006  push    word ptr [4ACh]                 ; [ds] f32 here = 20
800a  push    0h                              
800c  push    word ptr [482h]                 ; [ds] f32 here = 0
8010  push    word ptr [480h]                 ; [ds] f32 here = 0
8014  push    1h                              
8016  push    2h                              
8018  call far sub_5da0                       
801d  add     sp,16h                          
8020  push    2h                              
8022  call far sub_5ce4                       
8027  pop     bx                              
8028  push    18h                             
802a  wait                                    
802b  fld     dword ptr [bp-20h]              
802e  sub     sp,4h                           
8031  mov     bx,sp                           
8033  wait                                    
8034  fstp    dword ptr ss:[bx]               
8037  nop                                     
8038  wait                                    
8039  call far M007.M007_PUTVALUE             ; AP_TARGETKV
803e  call far sub_5d34                       
8043  pop     ds                              
8044  leave                                   
8045  retf                                    

; ----- sub_8046 -----
8046  mov     ax,7EC3h                        ; segment seg2:0000
8049  enter   8h,0h                           
804d  push    ds                              
804e  mov     ds,ax                           
8050  wait                                    
8051  fld     dword ptr [bp+0Ah]              
8054  wait                                    
8055  fst     dword ptr [bp-4h]               
8058  wait                                    
8059  fld     dword ptr [bp+6h]               
805c  wait                                    
805d  fst     dword ptr [bp-8h]               
8060  wait                                    
8061  fcom    st(0),st(1)                     
8063  wait                                    
8064  fstp    st(0)                           
8066  wait                                    
8067  fstp    st(0)                           
8069  wait                                    
806a  fstsw   ax                              
806c  sahf                                    
806d  jb      8072h                           
806f  jmp     8139h                           
8072  wait                                    
8073  fld     dword ptr [bp-4h]               
8076  wait                                    
8077  fcom    dword ptr [478h]                ; [ds] = 20000
807b  wait                                    
807c  fstp    st(0)                           
807e  wait                                    
807f  fstsw   ax                              
8081  sahf                                    
8082  jae     8087h                           
8084  jmp     811Ah                           
8087  wait                                    
8088  fld     dword ptr [bp-8h]               
808b  wait                                    
808c  fcom    dword ptr [478h]                ; [ds] = 20000
8090  wait                                    
8091  fstp    st(0)                           
8093  wait                                    
8094  fstsw   ax                              
8096  sahf                                    
8097  jae     8101h                           
8099  push    word ptr [47Ah]                 
809d  push    word ptr [478h]                 ; [ds] f32 here = 20000
80a1  push    word ptr [47Eh]                 
80a5  push    word ptr [47Ch]                 ; [ds] f32 here = 1
80a9  push    word ptr [47Ah]                 
80ad  push    word ptr [478h]                 ; [ds] f32 here = 20000
80b1  push    0h                              
80b3  push    word ptr [482h]                 ; [ds] f32 here = 0
80b7  push    word ptr [480h]                 ; [ds] f32 here = 0
80bb  push    0h                              
80bd  push    1h                              
80bf  call far sub_5da0                       
80c4  add     sp,16h                          
80c7  wait                                    
80c8  fld     dword ptr [bp-4h]               
80cb  sub     sp,4h                           
80ce  mov     bx,sp                           
80d0  wait                                    
80d1  fstp    dword ptr ss:[bx]               
80d4  nop                                     
80d5  wait                                    
80d6  push    word ptr [47Eh]                 
80da  push    word ptr [47Ch]                 ; [ds] f32 here = 1
80de  push    word ptr [486h]                 
80e2  push    word ptr [484h]                 ; [ds] f32 here = 1000
80e6  push    0h                              
80e8  push    word ptr [482h]                 ; [ds] f32 here = 0
80ec  push    word ptr [480h]                 ; [ds] f32 here = 0
80f0  push    0h                              
80f2  push    2h                              
80f4  call far sub_5da0                       
80f9  add     sp,16h                          
80fc  push    2h                              
80fe  jmp     821Eh                           
8101  push    word ptr [bp+0Ch]               
8104  push    word ptr [bp+0Ah]               
8107  push    word ptr [47Eh]                 
810b  push    word ptr [47Ch]                 ; [ds] f32 here = 1
810f  push    word ptr [486h]                 
8113  push    word ptr [484h]                 ; [ds] f32 here = 1000
8117  jmp     8206h                           
811a  wait                                    
811b  fld     dword ptr [bp+0Ah]              
811e  wait                                    
811f  fstp    dword ptr [bp-8h]               
8122  nop                                     
8123  wait                                    
8124  push    word ptr [bp-6h]                
8127  push    word ptr [bp-8h]                
812a  push    word ptr [47Eh]                 
812e  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8132  wait                                    
8133  fld     dword ptr [bp-8h]               
8136  jmp     81FBh                           
8139  wait                                    
813a  fld     dword ptr [bp+6h]               
813d  wait                                    
813e  fst     dword ptr [bp-8h]               
8141  wait                                    
8142  fcom    dword ptr [478h]                ; [ds] = 20000
8146  wait                                    
8147  fstp    st(0)                           
8149  wait                                    
814a  fstsw   ax                              
814c  sahf                                    
814d  jae     8152h                           
814f  jmp     81DBh                           
8152  wait                                    
8153  fld     dword ptr [bp+0Ah]              
8156  wait                                    
8157  fst     dword ptr [bp-4h]               
815a  wait                                    
815b  fcom    dword ptr [478h]                ; [ds] = 20000
815f  wait                                    
8160  fstp    st(0)                           
8162  wait                                    
8163  fstsw   ax                              
8165  sahf                                    
8166  jae     81C3h                           
8168  push    word ptr [47Ah]                 
816c  push    word ptr [478h]                 ; [ds] f32 here = 20000
8170  push    word ptr [47Eh]                 
8174  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8178  push    word ptr [48Ah]                 
817c  push    word ptr [488h]                 ; [ds] f32 here = -1000
8180  push    0h                              
8182  push    word ptr [482h]                 ; [ds] f32 here = 0
8186  push    word ptr [480h]                 ; [ds] f32 here = 0
818a  push    0h                              
818c  push    1h                              
818e  call far sub_5da0                       
8193  add     sp,16h                          
8196  wait                                    
8197  fld     dword ptr [bp-4h]               
819a  sub     sp,4h                           
819d  mov     bx,sp                           
819f  wait                                    
81a0  fstp    dword ptr ss:[bx]               
81a3  nop                                     
81a4  wait                                    
81a5  push    word ptr [47Eh]                 
81a9  push    word ptr [47Ch]                 ; [ds] f32 here = 1
81ad  wait                                    
81ae  fld     dword ptr [bp-4h]               
81b1  wait                                    
81b2  fsub    dword ptr [bp-8h]               
81b5  sub     sp,4h                           
81b8  mov     bx,sp                           
81ba  wait                                    
81bb  fstp    dword ptr ss:[bx]               
81be  nop                                     
81bf  wait                                    
81c0  jmp     80E6h                           
81c3  push    word ptr [bp+0Ch]               
81c6  push    word ptr [bp+0Ah]               
81c9  push    word ptr [47Eh]                 
81cd  push    word ptr [47Ch]                 ; [ds] f32 here = 1
81d1  push    word ptr [48Ah]                 
81d5  push    word ptr [488h]                 ; [ds] f32 here = -1000
81d9  jmp     8206h                           
81db  wait                                    
81dc  fld     dword ptr [bp+0Ah]              
81df  wait                                    
81e0  fstp    dword ptr [bp-8h]               
81e3  nop                                     
81e4  wait                                    
81e5  push    word ptr [bp-6h]                
81e8  push    word ptr [bp-8h]                
81eb  push    word ptr [47Eh]                 
81ef  push    word ptr [47Ch]                 ; [ds] f32 here = 1
81f3  wait                                    
81f4  fld     dword ptr [bp+6h]               
81f7  wait                                    
81f8  fsubr   dword ptr [bp-8h]               
81fb  sub     sp,4h                           
81fe  mov     bx,sp                           
8200  wait                                    
8201  fstp    dword ptr ss:[bx]               
8204  nop                                     
8205  wait                                    
8206  push    0h                              
8208  push    word ptr [482h]                 ; [ds] f32 here = 0
820c  push    word ptr [480h]                 ; [ds] f32 here = 0
8210  push    0h                              
8212  push    1h                              
8214  call far sub_5da0                       
8219  add     sp,16h                          
821c  push    1h                              
821e  call far sub_5ce4                       
8223  pop     bx                              
8224  call far sub_5d1e                       
8229  pop     ds                              
822a  leave                                   
822b  retf                                    

; ----- sub_822c -----
822c  mov     ax,8047h                        ; segment seg2:0000
822f  enter   4h,0h                           
8233  push    ds                              
8234  mov     ds,ax                           
8236  wait                                    
8237  fld     dword ptr [bp+0Ah]              
823a  wait                                    
823b  fst     dword ptr [bp-4h]               
823e  wait                                    
823f  fcom    dword ptr [bp+6h]               
8242  wait                                    
8243  fstp    st(0)                           
8245  wait                                    
8246  fstsw   ax                              
8248  sahf                                    
8249  jbe     826Ch                           
824b  wait                                    
824c  fld     dword ptr [bp-4h]               
824f  sub     sp,4h                           
8252  mov     bx,sp                           
8254  wait                                    
8255  fstp    dword ptr ss:[bx]               
8258  nop                                     
8259  wait                                    
825a  push    word ptr [47Eh]                 
825e  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8262  push    word ptr [49Eh]                 
8266  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
826a  jmp     8282h                           
826c  push    word ptr [bp+0Ch]               
826f  push    word ptr [bp+0Ah]               
8272  push    word ptr [47Eh]                 
8276  push    word ptr [47Ch]                 ; [ds] f32 here = 1
827a  push    word ptr [49Ah]                 
827e  push    word ptr [498h]                 ; [ds] f32 here = -0.15
8282  push    0h                              
8284  push    word ptr [482h]                 ; [ds] f32 here = 0
8288  push    word ptr [480h]                 ; [ds] f32 here = 0
828c  push    0h                              
828e  push    1h                              
8290  call far sub_5d50                       
8295  add     sp,16h                          
8298  push    1h                              
829a  call far sub_5cf6                       
829f  pop     bx                              
82a0  call far sub_5d08                       
82a5  pop     ds                              
82a6  leave                                   
82a7  retf                                    

; ----- sub_82a8 -----
82a8  mov     ax,822Dh                        ; segment seg2:0000
82ab  enter   0Ah,0h                          
82af  push    ds                              
82b0  mov     ds,ax                           
82b2  mov     word ptr [bp-2h],0h             
82b7  wait                                    
82b8  fld     dword ptr [bp+12h]              
82bb  wait                                    
82bc  fst     dword ptr [bp-6h]               
82bf  wait                                    
82c0  fld     dword ptr [bp+0Ah]              
82c3  wait                                    
82c4  fst     dword ptr [bp-0Ah]              
82c7  wait                                    
82c8  fcom    st(0),st(1)                     
82ca  wait                                    
82cb  fstp    st(0)                           
82cd  wait                                    
82ce  fstp    st(0)                           
82d0  wait                                    
82d1  fstsw   ax                              
82d3  sahf                                    
82d4  jb      82D9h                           
82d6  jmp     83C2h                           
82d9  wait                                    
82da  fld     dword ptr [bp-6h]               
82dd  wait                                    
82de  fcom    dword ptr [478h]                ; [ds] = 20000
82e2  wait                                    
82e3  fstp    st(0)                           
82e5  wait                                    
82e6  fstsw   ax                              
82e8  sahf                                    
82e9  jae     82EEh                           
82eb  jmp     83A3h                           
82ee  wait                                    
82ef  fld     dword ptr [bp-0Ah]              
82f2  wait                                    
82f3  fcom    dword ptr [478h]                ; [ds] = 20000
82f7  wait                                    
82f8  fstp    st(0)                           
82fa  wait                                    
82fb  fstsw   ax                              
82fd  sahf                                    
82fe  jae     8373h                           
8300  push    word ptr [47Ah]                 
8304  push    word ptr [478h]                 ; [ds] f32 here = 20000
8308  push    word ptr [47Eh]                 
830c  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8310  push    word ptr [47Ah]                 
8314  push    word ptr [478h]                 ; [ds] f32 here = 20000
8318  push    0h                              
831a  push    word ptr [482h]                 ; [ds] f32 here = 0
831e  push    word ptr [480h]                 ; [ds] f32 here = 0
8322  push    0h                              
8324  push    1h                              
8326  call far sub_5da0                       
832b  add     sp,16h                          
832e  wait                                    
832f  fld     dword ptr [bp-6h]               
8332  sub     sp,4h                           
8335  mov     bx,sp                           
8337  wait                                    
8338  fstp    dword ptr ss:[bx]               
833b  nop                                     
833c  wait                                    
833d  push    word ptr [47Eh]                 
8341  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8345  push    word ptr [486h]                 
8349  push    word ptr [484h]                 ; [ds] f32 here = 1000
834d  push    0h                              
834f  push    word ptr [482h]                 ; [ds] f32 here = 0
8353  push    word ptr [480h]                 ; [ds] f32 here = 0
8357  push    1h                              
8359  push    2h                              
835b  call far sub_5da0                       
8360  add     sp,16h                          
8363  push    2h                              
8365  call far sub_5ce4                       
836a  pop     bx                              
836b  mov     word ptr [bp-2h],1h             
8370  jmp     84C4h                           
8373  push    word ptr [bp+14h]               
8376  push    word ptr [bp+12h]               
8379  push    word ptr [47Eh]                 
837d  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8381  push    word ptr [486h]                 
8385  push    word ptr [484h]                 ; [ds] f32 here = 1000
8389  push    0h                              
838b  push    word ptr [482h]                 ; [ds] f32 here = 0
838f  push    word ptr [480h]                 ; [ds] f32 here = 0
8393  push    1h                              
8395  push    1h                              
8397  call far sub_5da0                       
839c  add     sp,16h                          
839f  push    1h                              
83a1  jmp     8365h                           
83a3  wait                                    
83a4  fld     dword ptr [bp+12h]              
83a7  wait                                    
83a8  fstp    dword ptr [bp-0Ah]              
83ab  nop                                     
83ac  wait                                    
83ad  push    word ptr [bp-8h]                
83b0  push    word ptr [bp-0Ah]               
83b3  push    word ptr [47Eh]                 
83b7  push    word ptr [47Ch]                 ; [ds] f32 here = 1
83bb  wait                                    
83bc  fld     dword ptr [bp-0Ah]              
83bf  jmp     849Bh                           
83c2  wait                                    
83c3  fld     dword ptr [bp+0Ah]              
83c6  wait                                    
83c7  fst     dword ptr [bp-0Ah]              
83ca  wait                                    
83cb  fcom    dword ptr [478h]                ; [ds] = 20000
83cf  wait                                    
83d0  fstp    st(0)                           
83d2  wait                                    
83d3  fstsw   ax                              
83d5  sahf                                    
83d6  jae     83DBh                           
83d8  jmp     847Bh                           
83db  wait                                    
83dc  fld     dword ptr [bp+12h]              
83df  wait                                    
83e0  fst     dword ptr [bp-6h]               
83e3  wait                                    
83e4  fcom    dword ptr [478h]                ; [ds] = 20000
83e8  wait                                    
83e9  fstp    st(0)                           
83eb  wait                                    
83ec  fstsw   ax                              
83ee  sahf                                    
83ef  jae     8463h                           
83f1  push    word ptr [47Ah]                 
83f5  push    word ptr [478h]                 ; [ds] f32 here = 20000
83f9  push    word ptr [47Eh]                 
83fd  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8401  push    word ptr [48Ah]                 
8405  push    word ptr [488h]                 ; [ds] f32 here = -1000
8409  push    0h                              
840b  push    word ptr [482h]                 ; [ds] f32 here = 0
840f  push    word ptr [480h]                 ; [ds] f32 here = 0
8413  push    0h                              
8415  push    1h                              
8417  call far sub_5da0                       
841c  add     sp,16h                          
841f  wait                                    
8420  fld     dword ptr [bp-6h]               
8423  sub     sp,4h                           
8426  mov     bx,sp                           
8428  wait                                    
8429  fstp    dword ptr ss:[bx]               
842c  nop                                     
842d  wait                                    
842e  push    word ptr [47Eh]                 
8432  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8436  wait                                    
8437  fld     dword ptr [bp-6h]               
843a  wait                                    
843b  fsub    dword ptr [bp-0Ah]              
843e  sub     sp,4h                           
8441  mov     bx,sp                           
8443  wait                                    
8444  fstp    dword ptr ss:[bx]               
8447  nop                                     
8448  wait                                    
8449  push    0h                              
844b  push    word ptr [482h]                 ; [ds] f32 here = 0
844f  push    word ptr [480h]                 ; [ds] f32 here = 0
8453  push    0h                              
8455  push    2h                              
8457  call far sub_5da0                       
845c  add     sp,16h                          
845f  push    2h                              
8461  jmp     84BEh                           
8463  push    word ptr [bp+14h]               
8466  push    word ptr [bp+12h]               
8469  push    word ptr [47Eh]                 
846d  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8471  push    word ptr [48Ah]                 
8475  push    word ptr [488h]                 ; [ds] f32 here = -1000
8479  jmp     84A6h                           
847b  wait                                    
847c  fld     dword ptr [bp+12h]              
847f  wait                                    
8480  fstp    dword ptr [bp-0Ah]              
8483  nop                                     
8484  wait                                    
8485  push    word ptr [bp-8h]                
8488  push    word ptr [bp-0Ah]               
848b  push    word ptr [47Eh]                 
848f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8493  wait                                    
8494  fld     dword ptr [bp+0Ah]              
8497  wait                                    
8498  fsubr   dword ptr [bp-0Ah]              
849b  sub     sp,4h                           
849e  mov     bx,sp                           
84a0  wait                                    
84a1  fstp    dword ptr ss:[bx]               
84a4  nop                                     
84a5  wait                                    
84a6  push    0h                              
84a8  push    word ptr [482h]                 ; [ds] f32 here = 0
84ac  push    word ptr [480h]                 ; [ds] f32 here = 0
84b0  push    0h                              
84b2  push    1h                              
84b4  call far sub_5da0                       
84b9  add     sp,16h                          
84bc  push    1h                              
84be  call far sub_5ce4                       
84c3  pop     bx                              
84c4  wait                                    
84c5  fld     dword ptr [bp+0Eh]              
84c8  wait                                    
84c9  fst     dword ptr [bp-0Ah]              
84cc  wait                                    
84cd  fcom    dword ptr [bp+6h]               
84d0  wait                                    
84d1  fstp    st(0)                           
84d3  wait                                    
84d4  fstsw   ax                              
84d6  sahf                                    
84d7  jbe     84FAh                           
84d9  wait                                    
84da  fld     dword ptr [bp-0Ah]              
84dd  sub     sp,4h                           
84e0  mov     bx,sp                           
84e2  wait                                    
84e3  fstp    dword ptr ss:[bx]               
84e6  nop                                     
84e7  wait                                    
84e8  push    word ptr [47Eh]                 
84ec  push    word ptr [47Ch]                 ; [ds] f32 here = 1
84f0  push    word ptr [49Eh]                 
84f4  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
84f8  jmp     8510h                           
84fa  push    word ptr [bp+10h]               
84fd  push    word ptr [bp+0Eh]               
8500  push    word ptr [47Eh]                 
8504  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8508  push    word ptr [49Ah]                 
850c  push    word ptr [498h]                 ; [ds] f32 here = -0.15
8510  push    word ptr [bp-2h]                
8513  push    word ptr [482h]                 ; [ds] f32 here = 0
8517  push    word ptr [480h]                 ; [ds] f32 here = 0
851b  push    0h                              
851d  push    1h                              
851f  call far sub_5d50                       
8524  add     sp,16h                          
8527  push    1h                              
8529  call far sub_5cf6                       
852e  pop     bx                              
852f  call far sub_5d34                       
8534  pop     ds                              
8535  leave                                   
8536  retf                                    
8537  add     [bx+si],al                      

; ----- sub_8538 -----
8538  mov     ax,82A9h                        ; segment seg2:0000
853b  enter   20h,0h                          
853f  push    ds                              
8540  mov     ds,ax                           
8542  mov     ax,[478h]                       
8545  mov     dx,[47Ah]                       
8549  mov     [bp-8h],ax                      
854c  mov     [bp-6h],dx                      
854f  push    19h                             
8551  lea     ax,[bp-14h]                     
8554  push    ax                              
8555  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
855a  mov     bx,ax                           
855c  wait                                    
855d  fld     dword ptr ss:[bx]               
8560  wait                                    
8561  fld     dword ptr [48Ch]                ; [ds] = 1.8
8565  wait                                    
8566  fst     dword ptr [bp-4h]               
8569  wait                                    
856a  fcom    st(0),st(1)                     
856c  wait                                    
856d  fstp    st(0)                           
856f  wait                                    
8570  fstp    st(0)                           
8572  wait                                    
8573  fstsw   ax                              
8575  sahf                                    
8576  jb      858Bh                           
8578  push    19h                             
857a  lea     ax,[bp-18h]                     
857d  push    ax                              
857e  call far M007.M007_GETVALUE             ; AP_USERMAXCURRENT
8583  mov     bx,ax                           
8585  wait                                    
8586  fld     dword ptr ss:[bx]               
8589  jmp     858Fh                           
858b  wait                                    
858c  fld     dword ptr [bp-4h]               
858f  wait                                    
8590  fst     dword ptr [bp-1Ch]              
8593  wait                                    
8594  fstp    dword ptr [bp-10h]              
8597  wait                                    
8598  fld     dword ptr [bp-1Ch]              
859b  sub     sp,4h                           
859e  mov     bx,sp                           
85a0  wait                                    
85a1  fstp    dword ptr ss:[bx]               
85a4  nop                                     
85a5  wait                                    
85a6  push    word ptr [47Eh]                 
85aa  push    word ptr [47Ch]                 ; [ds] f32 here = 1
85ae  push    word ptr [4AAh]                 
85b2  push    word ptr [4A8h]                 ; [ds] f32 here = 0.001
85b6  push    1h                              
85b8  push    word ptr [482h]                 ; [ds] f32 here = 0
85bc  push    word ptr [480h]                 ; [ds] f32 here = 0
85c0  push    0h                              
85c2  push    1h                              
85c4  call far sub_5d50                       
85c9  add     sp,16h                          
85cc  push    1h                              
85ce  call far sub_5cf6                       
85d3  pop     bx                              
85d4  push    17h                             
85d6  wait                                    
85d7  fld     dword ptr [bp-1Ch]              
85da  sub     sp,4h                           
85dd  mov     bx,sp                           
85df  wait                                    
85e0  fstp    dword ptr ss:[bx]               
85e3  nop                                     
85e4  wait                                    
85e5  call far M007.M007_PUTVALUE             ; AP_TARGETCURRENT
85ea  push    0Ch                             
85ec  call far M007.M007_GETSTATE             ; DP_ANODE
85f1  push    ax                              
85f2  call far sub_56fc                       
85f7  pop     bx                              
85f8  mov     es,dx                           
85fa  mov     bx,ax                           
85fc  wait                                    
85fd  fld     dword ptr es:[bx]               
8600  wait                                    
8601  fcom    dword ptr [bp-8h]               
8604  wait                                    
8605  fstp    st(0)                           
8607  wait                                    
8608  fstsw   ax                              
860a  sahf                                    
860b  ja      8625h                           
860d  push    0Ch                             
860f  call far M007.M007_GETSTATE             ; DP_ANODE
8614  push    ax                              
8615  call far sub_56fc                       
861a  pop     bx                              
861b  mov     es,dx                           
861d  mov     bx,ax                           
861f  wait                                    
8620  fld     dword ptr es:[bx]               
8623  jmp     8629h                           
8625  wait                                    
8626  fld     dword ptr [bp-8h]               
8629  wait                                    
862a  fst     dword ptr [bp-20h]              
862d  wait                                    
862e  fstp    dword ptr [bp-0Ch]              
8631  nop                                     
8632  wait                                    
8633  push    word ptr [486h]                 
8637  push    word ptr [484h]                 ; [ds] f32 here = 1000
863b  push    word ptr [47Eh]                 
863f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8643  push    word ptr [486h]                 
8647  push    word ptr [484h]                 ; [ds] f32 here = 1000
864b  push    0h                              
864d  push    word ptr [482h]                 ; [ds] f32 here = 0
8651  push    word ptr [480h]                 ; [ds] f32 here = 0
8655  push    0h                              
8657  push    1h                              
8659  call far sub_5da0                       
865e  add     sp,16h                          
8661  wait                                    
8662  fld     dword ptr [bp-20h]              
8665  sub     sp,4h                           
8668  mov     bx,sp                           
866a  wait                                    
866b  fstp    dword ptr ss:[bx]               
866e  nop                                     
866f  wait                                    
8670  push    word ptr [47Eh]                 
8674  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8678  push    word ptr [4AEh]                 
867c  push    word ptr [4ACh]                 ; [ds] f32 here = 20
8680  push    0h                              
8682  push    word ptr [482h]                 ; [ds] f32 here = 0
8686  push    word ptr [480h]                 ; [ds] f32 here = 0
868a  push    1h                              
868c  push    2h                              
868e  call far sub_5da0                       
8693  add     sp,16h                          
8696  push    2h                              
8698  call far sub_5ce4                       
869d  pop     bx                              
869e  push    18h                             
86a0  wait                                    
86a1  fld     dword ptr [bp-20h]              
86a4  sub     sp,4h                           
86a7  mov     bx,sp                           
86a9  wait                                    
86aa  fstp    dword ptr ss:[bx]               
86ad  nop                                     
86ae  wait                                    
86af  call far M007.M007_PUTVALUE             ; AP_TARGETKV
86b4  call far sub_5d34                       
86b9  pop     ds                              
86ba  leave                                   
86bb  retf                                    

; ----- sub_86bc -----
86bc  mov     ax,8539h                        ; segment seg2:0000
86bf  enter   8h,0h                           
86c3  push    ds                              
86c4  mov     ds,ax                           
86c6  wait                                    
86c7  fld     dword ptr [bp+0Ah]              
86ca  wait                                    
86cb  fst     dword ptr [bp-4h]               
86ce  wait                                    
86cf  fld     dword ptr [bp+6h]               
86d2  wait                                    
86d3  fst     dword ptr [bp-8h]               
86d6  wait                                    
86d7  fcom    st(0),st(1)                     
86d9  wait                                    
86da  fstp    st(0)                           
86dc  wait                                    
86dd  fstp    st(0)                           
86df  wait                                    
86e0  fstsw   ax                              
86e2  sahf                                    
86e3  jb      86E8h                           
86e5  jmp     87AFh                           
86e8  wait                                    
86e9  fld     dword ptr [bp-4h]               
86ec  wait                                    
86ed  fcom    dword ptr [478h]                ; [ds] = 20000
86f1  wait                                    
86f2  fstp    st(0)                           
86f4  wait                                    
86f5  fstsw   ax                              
86f7  sahf                                    
86f8  jae     86FDh                           
86fa  jmp     8790h                           
86fd  wait                                    
86fe  fld     dword ptr [bp-8h]               
8701  wait                                    
8702  fcom    dword ptr [478h]                ; [ds] = 20000
8706  wait                                    
8707  fstp    st(0)                           
8709  wait                                    
870a  fstsw   ax                              
870c  sahf                                    
870d  jae     8777h                           
870f  push    word ptr [47Ah]                 
8713  push    word ptr [478h]                 ; [ds] f32 here = 20000
8717  push    word ptr [47Eh]                 
871b  push    word ptr [47Ch]                 ; [ds] f32 here = 1
871f  push    word ptr [47Ah]                 
8723  push    word ptr [478h]                 ; [ds] f32 here = 20000
8727  push    0h                              
8729  push    word ptr [482h]                 ; [ds] f32 here = 0
872d  push    word ptr [480h]                 ; [ds] f32 here = 0
8731  push    0h                              
8733  push    1h                              
8735  call far sub_5da0                       
873a  add     sp,16h                          
873d  wait                                    
873e  fld     dword ptr [bp-4h]               
8741  sub     sp,4h                           
8744  mov     bx,sp                           
8746  wait                                    
8747  fstp    dword ptr ss:[bx]               
874a  nop                                     
874b  wait                                    
874c  push    word ptr [47Eh]                 
8750  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8754  push    word ptr [486h]                 
8758  push    word ptr [484h]                 ; [ds] f32 here = 1000
875c  push    0h                              
875e  push    word ptr [482h]                 ; [ds] f32 here = 0
8762  push    word ptr [480h]                 ; [ds] f32 here = 0
8766  push    0h                              
8768  push    2h                              
876a  call far sub_5da0                       
876f  add     sp,16h                          
8772  push    2h                              
8774  jmp     8894h                           
8777  push    word ptr [bp+0Ch]               
877a  push    word ptr [bp+0Ah]               
877d  push    word ptr [47Eh]                 
8781  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8785  push    word ptr [486h]                 
8789  push    word ptr [484h]                 ; [ds] f32 here = 1000
878d  jmp     887Ch                           
8790  wait                                    
8791  fld     dword ptr [bp+0Ah]              
8794  wait                                    
8795  fstp    dword ptr [bp-8h]               
8798  nop                                     
8799  wait                                    
879a  push    word ptr [bp-6h]                
879d  push    word ptr [bp-8h]                
87a0  push    word ptr [47Eh]                 
87a4  push    word ptr [47Ch]                 ; [ds] f32 here = 1
87a8  wait                                    
87a9  fld     dword ptr [bp-8h]               
87ac  jmp     8871h                           
87af  wait                                    
87b0  fld     dword ptr [bp+6h]               
87b3  wait                                    
87b4  fst     dword ptr [bp-8h]               
87b7  wait                                    
87b8  fcom    dword ptr [478h]                ; [ds] = 20000
87bc  wait                                    
87bd  fstp    st(0)                           
87bf  wait                                    
87c0  fstsw   ax                              
87c2  sahf                                    
87c3  jae     87C8h                           
87c5  jmp     8851h                           
87c8  wait                                    
87c9  fld     dword ptr [bp+0Ah]              
87cc  wait                                    
87cd  fst     dword ptr [bp-4h]               
87d0  wait                                    
87d1  fcom    dword ptr [478h]                ; [ds] = 20000
87d5  wait                                    
87d6  fstp    st(0)                           
87d8  wait                                    
87d9  fstsw   ax                              
87db  sahf                                    
87dc  jae     8839h                           
87de  push    word ptr [47Ah]                 
87e2  push    word ptr [478h]                 ; [ds] f32 here = 20000
87e6  push    word ptr [47Eh]                 
87ea  push    word ptr [47Ch]                 ; [ds] f32 here = 1
87ee  push    word ptr [48Ah]                 
87f2  push    word ptr [488h]                 ; [ds] f32 here = -1000
87f6  push    0h                              
87f8  push    word ptr [482h]                 ; [ds] f32 here = 0
87fc  push    word ptr [480h]                 ; [ds] f32 here = 0
8800  push    0h                              
8802  push    1h                              
8804  call far sub_5da0                       
8809  add     sp,16h                          
880c  wait                                    
880d  fld     dword ptr [bp-4h]               
8810  sub     sp,4h                           
8813  mov     bx,sp                           
8815  wait                                    
8816  fstp    dword ptr ss:[bx]               
8819  nop                                     
881a  wait                                    
881b  push    word ptr [47Eh]                 
881f  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8823  wait                                    
8824  fld     dword ptr [bp-4h]               
8827  wait                                    
8828  fsub    dword ptr [bp-8h]               
882b  sub     sp,4h                           
882e  mov     bx,sp                           
8830  wait                                    
8831  fstp    dword ptr ss:[bx]               
8834  nop                                     
8835  wait                                    
8836  jmp     875Ch                           
8839  push    word ptr [bp+0Ch]               
883c  push    word ptr [bp+0Ah]               
883f  push    word ptr [47Eh]                 
8843  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8847  push    word ptr [48Ah]                 
884b  push    word ptr [488h]                 ; [ds] f32 here = -1000
884f  jmp     887Ch                           
8851  wait                                    
8852  fld     dword ptr [bp+0Ah]              
8855  wait                                    
8856  fstp    dword ptr [bp-8h]               
8859  nop                                     
885a  wait                                    
885b  push    word ptr [bp-6h]                
885e  push    word ptr [bp-8h]                
8861  push    word ptr [47Eh]                 
8865  push    word ptr [47Ch]                 ; [ds] f32 here = 1
8869  wait                                    
886a  fld     dword ptr [bp+6h]               
886d  wait                                    
886e  fsubr   dword ptr [bp-8h]               
8871  sub     sp,4h                           
8874  mov     bx,sp                           
8876  wait                                    
8877  fstp    dword ptr ss:[bx]               
887a  nop                                     
887b  wait                                    
887c  push    0h                              
887e  push    word ptr [482h]                 ; [ds] f32 here = 0
8882  push    word ptr [480h]                 ; [ds] f32 here = 0
8886  push    0h                              
8888  push    1h                              
888a  call far sub_5da0                       
888f  add     sp,16h                          
8892  push    1h                              
8894  call far sub_5ce4                       
8899  pop     bx                              
889a  call far sub_5d1e                       
889f  pop     ds                              
88a0  leave                                   
88a1  retf                                    

; ----- sub_88a2 -----
88a2  mov     ax,86BDh                        ; segment seg2:0000
88a5  enter   4h,0h                           
88a9  push    ds                              
88aa  mov     ds,ax                           
88ac  wait                                    
88ad  fld     dword ptr [bp+0Ah]              
88b0  wait                                    
88b1  fst     dword ptr [bp-4h]               
88b4  wait                                    
88b5  fcom    dword ptr [bp+6h]               
88b8  wait                                    
88b9  fstp    st(0)                           
88bb  wait                                    
88bc  fstsw   ax                              
88be  sahf                                    
88bf  jbe     88E2h                           
88c1  wait                                    
88c2  fld     dword ptr [bp-4h]               
88c5  sub     sp,4h                           
88c8  mov     bx,sp                           
88ca  wait                                    
88cb  fstp    dword ptr ss:[bx]               
88ce  nop                                     
88cf  wait                                    
88d0  push    word ptr [47Eh]                 
88d4  push    word ptr [47Ch]                 ; [ds] f32 here = 1
88d8  push    word ptr [49Eh]                 
88dc  push    word ptr [49Ch]                 ; [ds] f32 here = 0.004
88e0  jmp     88F8h                           
88e2  push    word ptr [bp+0Ch]               
88e5  push    word ptr [bp+0Ah]               
88e8  push    word ptr [47Eh]                 
88ec  push    word ptr [47Ch]                 ; [ds] f32 here = 1
88f0  push    word ptr [49Ah]                 
88f4  push    word ptr [498h]                 ; [ds] f32 here = -0.15
88f8  push    0h                              
88fa  push    word ptr [482h]                 ; [ds] f32 here = 0
88fe  push    word ptr [480h]                 ; [ds] f32 here = 0
8902  push    0h                              
8904  push    1h                              
8906  call far sub_5d50                       
890b  add     sp,16h                          
890e  push    1h                              
8910  call far sub_5cf6                       
8915  pop     bx                              
8916  call far sub_5d08                       
891b  pop     ds                              
891c  leave                                   
891d  retf                                    
