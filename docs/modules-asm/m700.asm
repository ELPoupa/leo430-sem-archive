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
0060  mov     [7B2h],di                       
0064  mov     [7B4h],ds                       
0068  mov     [7B6h],cx                       
006c  mov     [7B8h],bx                       
0070  mov     [7BAh],si                       
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
0094  mov     [7F0h],ax                       
0097  mov     ah,30h                          
0099  test    word ptr cs:[10h],1h            
00a0  je      0A9h                            
00a2  call far KERNEL.DOS3CALL                
00a7  jmp     0ABh                            
00a9  int     21h                             
00ab  mov     [7F4h],ax                       
00ae  xchg    al,ah                           
00b0  mov     [7F2h],ax                       
00b3  test    word ptr cs:[10h],1h            
00ba  jne     0C1h                            
00bc  mov     al,0h                           
00be  mov     [7F7h],al                       
00c1  call far sub_01d8                       
00c6  call far sub_02e0                       
00cb  inc     byte ptr [7BCh]                 
00cf  push    word ptr [818h]                 
00d3  push    word ptr [816h]                 ; [ds] f32 here = 0
00d7  push    word ptr [814h]                 ; [ds] f32 here = 0
00db  push    word ptr [812h]                 ; [ds] f32 here = 0
00df  push    word ptr [810h]                 ; [ds] f32 here = 0
00e3  call far sub_01ac                       
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
010e  inc     bp                              
010f  push    bp                              
0110  mov     bp,sp                           
0112  push    ds                              
0113  mov     ax,[bp+6h]                      
0116  mov     [7C6h],ax                       
0119  mov     word ptr [7C8h],0h              
011f  lea     sp,[bp-2h]                      
0122  pop     ds                              
0123  pop     bp                              
0124  dec     bp                              
0125  retf                                    

; ----- sub_0126 -----
0126  inc     bp                              
0127  push    bp                              
0128  mov     bp,sp                           
012a  push    ds                              
012b  mov     ax,43FDh                        
012e  mov     dx,3h                           
0131  push    dx                              
0132  push    ax                              
0133  push    word ptr [7C8h]                 
0137  push    word ptr [7C6h]                 
013b  call far sub_0378                       
0140  add     ax,9EC3h                        
0143  adc     dx,26h                          
0146  mov     [7C6h],ax                       
0149  mov     [7C8h],dx                       
014d  mov     ax,dx                           
014f  and     ah,7Fh                          
0152  lea     sp,[bp-2h]                      
0155  pop     ds                              
0156  pop     bp                              
0157  dec     bp                              
0158  retf                                    
0159  nop                                     

; ----- sub_015a -----
015a  mov     ax,ds                           
015c  nop                                     
015d  inc     bp                              
015e  push    bp                              
015f  mov     bp,sp                           
0161  push    ds                              
0162  mov     ds,ax                           
0164  sub     sp,0Ch                          
0167  push    bx                              
0168  push    cx                              
0169  push    si                              
016a  push    di                              
016b  wait                                    
016c  fstcw   word ptr [bp-4h]                
016f  nop                                     
0170  wait                                    
0171  mov     ax,[bp-4h]                      
0174  or      ah,0Ch                          
0177  mov     [bp-6h],ax                      
017a  wait                                    
017b  fldcw   word ptr [bp-6h]                
017e  wait                                    
017f  fistp   qword ptr [bp-0Eh]              
0182  wait                                    
0183  fldcw   word ptr [bp-4h]                
0186  mov     ax,[bp-0Eh]                     
0189  mov     dx,[bp-0Ch]                     
018c  pop     di                              
018d  pop     si                              
018e  pop     cx                              
018f  pop     bx                              
0190  lea     sp,[bp-2h]                      
0193  pop     ds                              
0194  pop     bp                              
0195  dec     bp                              
0196  retf                                    
0197  add     [bp+57h],dl                     
019a  mov     ax,ds                           
019c  mov     es,ax                           
019e  mov     si,7CAh                         
01a1  mov     di,826h                         
01a4  mov     cx,0Ah                          
01a7  rep     movsw                           
01a9  pop     di                              
01aa  pop     si                              
01ab  retf                                    

; ----- sub_01ac -----
01ac  mov     ax,ds                           
01ae  nop                                     
01af  inc     bp                              
01b0  push    bp                              
01b1  mov     bp,sp                           
01b3  push    ds                              
01b4  mov     ds,ax                           
01b6  push    word ptr [7B2h]                 ; [ds] f32 here = 0
01ba  push    word ptr [7B4h]                 ; [ds] f32 here = 0
01be  push    word ptr [7B6h]                 ; [ds] f32 here = 0
01c2  push    word ptr [7BAh]                 
01c6  push    word ptr [7B8h]                 ; [ds] f32 here = 0
01ca  call far sub_1e10                       
01cf  sub     bp,2h                           
01d2  mov     sp,bp                           
01d4  pop     ds                              
01d5  pop     bp                              
01d6  dec     bp                              
01d7  retf                                    

; ----- sub_01d8 -----
01d8  mov     ax,ds                           
01da  nop                                     
01db  inc     bp                              
01dc  push    bp                              
01dd  mov     bp,sp                           
01df  push    ds                              
01e0  mov     ds,ax                           
01e2  mov     cx,[9E8h]                       
01e6  jcxz    1FCh                            
01e8  xor     si,si                           
01ea  mov     ax,[9EAh]                       
01ed  mov     dx,[9ECh]                       
01f1  xor     bx,bx                           
01f3  call    far ptr  [9E6h]                 
01f7  jae     1FCh                            
01f9  jmp     0AD8h                           
01fc  mov     si,9F6h                         
01ff  mov     di,9F6h                         
0202  call    2A8h                            
0205  mov     si,9F2h                         
0208  mov     di,9F6h                         
020b  call    2A8h                            
020e  mov     si,9F6h                         
0211  mov     di,9F6h                         
0214  call    2A8h                            
0217  sub     bp,2h                           
021a  mov     sp,bp                           
021c  pop     ds                              
021d  pop     bp                              
021e  dec     bp                              
021f  retf                                    
0220  mov     ax,ds                           
0222  nop                                     
0223  inc     bp                              
0224  push    bp                              
0225  mov     bp,sp                           
0227  push    ds                              
0228  mov     ds,ax                           
022a  push    si                              
022b  push    di                              
022c  mov     cx,100h                         
022f  jmp     240h                            
0231  mov     ax,ds                           
0233  nop                                     
0234  inc     bp                              
0235  push    bp                              
0236  mov     bp,sp                           
0238  push    ds                              
0239  mov     ds,ax                           
023b  push    si                              
023c  push    di                              
023d  mov     cx,101h                         
0240  mov     [821h],ch                       
0244  push    cx                              
0245  or      cl,cl                           
0247  jne     25Bh                            
0249  mov     si,0E06h                        
024c  mov     di,0E06h                        
024f  call    2A8h                            
0252  mov     si,9F6h                         
0255  mov     di,9F6h                         
0258  call    2A8h                            
025b  mov     si,9F6h                         
025e  mov     di,9F6h                         
0261  call    2A8h                            
0264  mov     si,9F6h                         
0267  mov     di,9F6h                         
026a  call    2A8h                            
026d  call    14B2h                           
0270  call    0B1Ch                           
0273  pop     ax                              
0274  pop     di                              
0275  pop     si                              
0276  sub     bp,2h                           
0279  mov     sp,bp                           
027b  pop     ds                              
027c  pop     bp                              
027d  dec     bp                              
027e  retf                                    
027f  mov     cx,[9E8h]                       
0283  jcxz    28Ch                            
0285  mov     bx,2h                           
0288  call    far ptr  [9E6h]                 
028c  push    ds                              
028d  lds     dx,[7DEh]                       
0291  mov     ax,2500h                        
0294  test    word ptr cs:[10h],1h            
029b  je      2A4h                            
029d  call far KERNEL.DOS3CALL                
02a2  jmp     2A6h                            
02a4  int     21h                             
02a6  pop     ds                              
02a7  ret                                     

; ----- sub_02a8 -----
02a8  cmp     si,di                           
02aa  jae     2BAh                            
02ac  sub     di,4h                           
02af  mov     ax,[di]                         
02b1  or      ax,[di+2h]                      
02b4  je      2A8h                            
02b6  call    far ptr  [di]                   
02b8  jmp     2A8h                            
02ba  ret                                     
02bb  add     [bx+si],al                      

; ----- sub_02bc -----
02bc  mov     ax,ds                           
02be  nop                                     
02bf  inc     bp                              
02c0  push    bp                              
02c1  mov     bp,sp                           
02c3  push    ds                              
02c4  mov     ds,ax                           
02c6  mov     ax,0FCh                         
02c9  push    ax                              
02ca  push    cs                              
02cb  call    0A75h                           
02ce  mov     ax,0FFh                         
02d1  push    ax                              
02d2  push    cs                              
02d3  call    0A75h                           
02d6  sub     bp,2h                           
02d9  mov     sp,bp                           
02db  pop     ds                              
02dc  pop     bp                              
02dd  dec     bp                              
02de  retf                                    
02df  add     [bx+si],al                      

; ----- sub_02e0 -----
02e0  mov     ax,ds                           
02e2  nop                                     
02e3  inc     bp                              
02e4  push    bp                              
02e5  mov     bp,sp                           
02e7  push    ds                              
02e8  mov     ds,ax                           
02ea  sub     sp,6h                           
02ed  push    ds                              
02ee  call far KERNEL.GETDOSENVIRONMENT       
02f3  or      ax,ax                           
02f5  je      2FAh                            
02f7  mov     dx,0h                           
02fa  mov     bx,dx                           
02fc  mov     es,dx                           
02fe  mov     [bp-4h],es                      
0301  mov     [bp-8h],ds                      
0304  xor     ax,ax                           
0306  xor     si,si                           
0308  xor     di,di                           
030a  mov     cx,0FFFFh                       
030d  or      bx,bx                           
030f  je      31Fh                            
0311  cmp     byte ptr es:[0h],0h             
0317  je      31Fh                            
0319  repne   scasb                           
031b  inc     si                              
031c  scasb                                   
031d  jne     319h                            
031f  mov     ax,di                           
0321  inc     ax                              
0322  and     al,0FEh                         
0324  inc     si                              
0325  mov     di,si                           
0327  shl     si,1                            
0329  shl     si,1                            
032b  mov     cx,9h                           
032e  call    0ADEh                           
0331  push    dx                              
0332  push    ax                              
0333  mov     ax,si                           
0335  call    0ADEh                           
0338  mov     [816h],ax                       
033b  mov     [818h],dx                       
033f  mov     [bp-6h],dx                      
0342  push    es                              
0343  pop     ds                              
0344  mov     cx,di                           
0346  mov     bx,ax                           
0348  xor     si,si                           
034a  pop     di                              
034b  pop     es                              
034c  dec     cx                              
034d  jcxz    365h                            
034f  mov     ds,[bp-6h]                      
0352  mov     [bx],di                         
0354  mov     [bx+2h],es                      
0357  add     bx,4h                           
035a  mov     ds,[bp-4h]                      
035d  lodsb                                   
035e  stosb                                   
035f  or      al,al                           
0361  jne     35Dh                            
0363  loop    34Fh                            
0365  mov     ds,[bp-6h]                      
0368  mov     [bx],cx                         
036a  mov     [bx+2h],cx                      
036d  pop     ds                              
036e  sub     bp,2h                           
0371  mov     sp,bp                           
0373  pop     ds                              
0374  pop     bp                              
0375  dec     bp                              
0376  retf                                    
0377  add     [bx+si],al                      

; ----- sub_0378 -----
0378  push    bp                              
0379  mov     bp,sp                           
037b  mov     ax,[bp+8h]                      
037e  mov     cx,[bp+0Ch]                     
0381  or      cx,ax                           
0383  mov     cx,[bp+0Ah]                     
0386  jne     391h                            
0388  mov     ax,[bp+6h]                      
038b  mul     cx                              
038d  pop     bp                              
038e  retf    8h                              
0391  push    bx                              
0392  mul     cx                              
0394  mov     bx,ax                           
0396  mov     ax,[bp+6h]                      
0399  mul     word ptr [bp+0Ch]               
039c  add     bx,ax                           
039e  mov     ax,[bp+6h]                      
03a1  mul     cx                              
03a3  add     dx,bx                           
03a5  pop     bx                              
03a6  pop     bp                              
03a7  retf    8h                              
03aa  mov     ax,ds                           
03ac  nop                                     
03ad  inc     bp                              
03ae  push    bp                              
03af  mov     bp,sp                           
03b1  push    ds                              
03b2  mov     ds,ax                           
03b4  sub     sp,0Ah                          
03b7  les     bx,[bp+6h]                      
03ba  mov     al,es:[bx]                      
03bd  cbw                                     
03be  mov     bx,ax                           
03c0  test    byte ptr [bx+855h],1h           
03c5  je      3CCh                            
03c7  lea     ax,[bx+20h]                     
03ca  jmp     3D3h                            
03cc  mov     bx,[bp+6h]                      
03cf  mov     al,es:[bx]                      
03d2  cbw                                     
03d3  cmp     ax,65h                          
03d6  je      3EBh                            
03d8  inc     word ptr [bp+6h]                
03db  mov     bx,[bp+6h]                      
03de  mov     al,es:[bx]                      
03e1  cbw                                     
03e2  mov     bx,ax                           
03e4  test    byte ptr [bx+855h],4h           
03e9  jne     3D8h                            
03eb  mov     bx,[bp+6h]                      
03ee  mov     al,es:[bx]                      
03f1  mov     [bp-4h],al                      
03f4  mov     byte ptr es:[bx],2Eh            
03f8  inc     word ptr [bp+6h]                
03fb  mov     bx,[bp+6h]                      
03fe  mov     al,es:[bx]                      
0401  mov     [bp-6h],al                      
0404  mov     al,[bp-4h]                      
0407  mov     es:[bx],al                      
040a  mov     al,[bp-6h]                      
040d  mov     [bp-4h],al                      
0410  inc     word ptr [bp+6h]                
0413  cmp     byte ptr es:[bx],0h             
0417  jne     3FBh                            
0419  lea     sp,[bp-2h]                      
041c  pop     ds                              
041d  pop     bp                              
041e  dec     bp                              
041f  retf                                    
0420  mov     ax,ds                           
0422  nop                                     
0423  inc     bp                              
0424  push    bp                              
0425  mov     bp,sp                           
0427  push    ds                              
0428  mov     ds,ax                           
042a  sub     sp,8h                           
042d  jmp     439h                            
042f  nop                                     
0430  cmp     byte ptr es:[bx],2Eh            
0434  je      442h                            
0436  inc     word ptr [bp+6h]                
0439  les     bx,[bp+6h]                      
043c  cmp     byte ptr es:[bx],0h             
0440  jne     430h                            
0442  inc     word ptr [bp+6h]                
0445  cmp     byte ptr es:[bx],0h             
0449  je      49Dh                            
044b  jmp     45Dh                            
044d  nop                                     
044e  cmp     byte ptr es:[bx],65h            
0452  je      466h                            
0454  cmp     byte ptr es:[bx],45h            
0458  je      466h                            
045a  inc     word ptr [bp+6h]                
045d  mov     bx,[bp+6h]                      
0460  cmp     byte ptr es:[bx],0h             
0464  jne     44Eh                            
0466  dec     word ptr [bp+6h]                
0469  mov     [bp-6h],bx                      
046c  mov     [bp-4h],es                      
046f  jmp     475h                            
0471  nop                                     
0472  dec     word ptr [bp+6h]                
0475  mov     bx,[bp+6h]                      
0478  cmp     byte ptr es:[bx],30h            
047c  je      472h                            
047e  cmp     byte ptr es:[bx],2Eh            
0482  jne     487h                            
0484  dec     word ptr [bp+6h]                
0487  les     bx,[bp-6h]                      
048a  inc     word ptr [bp-6h]                
048d  mov     al,es:[bx]                      
0490  inc     word ptr [bp+6h]                
0493  les     bx,[bp+6h]                      
0496  mov     es:[bx],al                      
0499  or      al,al                           
049b  jne     487h                            
049d  lea     sp,[bp-2h]                      
04a0  pop     ds                              
04a1  pop     bp                              
04a2  dec     bp                              
04a3  retf                                    
04a4  mov     ax,ds                           
04a6  nop                                     
04a7  inc     bp                              
04a8  push    bp                              
04a9  mov     bp,sp                           
04ab  push    ds                              
04ac  mov     ds,ax                           
04ae  sub     sp,2h                           
04b1  les     bx,[bp+6h]                      
04b4  wait                                    
04b5  fld     qword ptr es:[bx]               
04b8  wait                                    
04b9  fcom    qword ptr [0A72h]               ; [ds] = 0
04bd  wait                                    
04be  fstp    st(0)                           
04c0  wait                                    
04c1  fstsw   word ptr [bp-4h]                
04c4  nop                                     
04c5  wait                                    
04c6  mov     ah,[bp-3h]                      
04c9  sahf                                    
04ca  jb      4D2h                            
04cc  mov     ax,1h                           
04cf  jmp     4D4h                            
04d1  nop                                     
04d2  xor     ax,ax                           
04d4  lea     sp,[bp-2h]                      
04d7  pop     ds                              
04d8  pop     bp                              
04d9  dec     bp                              
04da  retf                                    
04db  nop                                     
04dc  mov     ax,ds                           
04de  nop                                     
04df  inc     bp                              
04e0  push    bp                              
04e1  mov     bp,sp                           
04e3  push    ds                              
04e4  mov     ds,ax                           
04e6  push    di                              
04e7  push    si                              
04e8  cmp     word ptr [bp+6h],0h             
04ec  je      50Ch                            
04ee  push    word ptr [bp+0Eh]               
04f1  push    word ptr [bp+0Ch]               
04f4  call far sub_0b1e                       
04f9  add     sp,4h                           
04fc  push    ds                              
04fd  mov     si,ax                           
04ff  mov     ds,dx                           
0501  les     di,[bp+8h]                      
0504  movsw                                   
0505  movsw                                   
0506  movsw                                   
0507  movsw                                   
0508  pop     ds                              
0509  jmp     52Bh                            
050b  nop                                     
050c  push    word ptr [bp+0Eh]               
050f  push    word ptr [bp+0Ch]               
0512  call far sub_0b1e                       
0517  add     sp,4h                           
051a  mov     es,dx                           
051c  mov     bx,ax                           
051e  wait                                    
051f  fld     qword ptr es:[bx]               
0522  les     bx,[bp+8h]                      
0525  wait                                    
0526  fstp    dword ptr es:[bx]               
0529  nop                                     
052a  wait                                    
052b  pop     si                              
052c  pop     di                              
052d  lea     sp,[bp-2h]                      
0530  pop     ds                              
0531  pop     bp                              
0532  dec     bp                              
0533  retf                                    

; ----- sub_0534 -----
0534  mov     ax,ds                           
0536  nop                                     
0537  inc     bp                              
0538  push    bp                              
0539  mov     bp,sp                           
053b  push    ds                              
053c  mov     ds,ax                           
053e  sub     sp,0Ah                          
0541  push    si                              
0542  cmp     byte ptr [848h],0h              
0547  je      58Ah                            
0549  mov     ax,[0DF2h]                      
054c  mov     dx,[0DF4h]                      
0550  mov     [bp-6h],ax                      
0553  mov     [bp-4h],dx                      
0556  mov     es,dx                           
0558  mov     bx,ax                           
055a  cmp     word ptr es:[bx],2Dh            
055e  jne     566h                            
0560  mov     ax,1h                           
0563  jmp     568h                            
0565  nop                                     
0566  xor     ax,ax                           
0568  add     ax,[bp+0Ah]                     
056b  mov     dx,[bp+0Ch]                     
056e  mov     [bp-0Ah],ax                     
0571  mov     [bp-8h],dx                      
0574  push    dx                              
0575  push    ax                              
0576  cmp     word ptr [bp+0Eh],0h            
057a  jle     582h                            
057c  mov     ax,1h                           
057f  jmp     584h                            
0581  nop                                     
0582  xor     ax,ax                           
0584  push    ax                              
0585  call    9E6h                            
0588  jmp     5E5h                            
058a  les     bx,[bp+6h]                      
058d  push    word ptr es:[bx+6h]             
0591  push    word ptr es:[bx+4h]             
0595  push    word ptr es:[bx+2h]             
0599  push    word ptr es:[bx]                
059c  call far sub_0d92                       
05a1  add     sp,8h                           
05a4  mov     [bp-6h],ax                      
05a7  mov     [bp-4h],dx                      
05aa  push    dx                              
05ab  push    ax                              
05ac  mov     ax,[bp+0Eh]                     
05af  inc     ax                              
05b0  push    ax                              
05b1  les     bx,[bp-6h]                      
05b4  cmp     word ptr es:[bx],2Dh            
05b8  jne     5C0h                            
05ba  mov     ax,1h                           
05bd  jmp     5C2h                            
05bf  nop                                     
05c0  xor     ax,ax                           
05c2  mov     [bp-0Ch],ax                     
05c5  cmp     word ptr [bp+0Eh],0h            
05c9  jle     5D0h                            
05cb  mov     ax,1h                           
05ce  jmp     5D2h                            
05d0  xor     ax,ax                           
05d2  add     ax,[bp-0Ch]                     
05d5  add     ax,[bp+0Ah]                     
05d8  mov     dx,[bp+0Ch]                     
05db  push    dx                              
05dc  push    ax                              
05dd  call far sub_0b7c                       
05e2  add     sp,0Ah                          
05e5  mov     ax,[bp+0Ah]                     
05e8  mov     dx,[bp+0Ch]                     
05eb  mov     [bp-0Ah],ax                     
05ee  mov     [bp-8h],dx                      
05f1  les     bx,[bp-6h]                      
05f4  cmp     word ptr es:[bx],2Dh            
05f8  jne     606h                            
05fa  mov     bx,ax                           
05fc  mov     es,dx                           
05fe  mov     byte ptr es:[bx],2Dh            
0602  inc     ax                              
0603  mov     [bp-0Ah],ax                     
0606  cmp     word ptr [bp+0Eh],0h            
060a  jle     61Eh                            
060c  les     bx,[bp-0Ah]                     
060f  mov     al,es:[bx+1h]                   
0613  mov     es:[bx],al                      
0616  inc     bx                              
0617  mov     [bp-0Ah],bx                     
061a  mov     byte ptr es:[bx],2Eh            
061e  mov     ax,84Dh                         
0621  push    ds                              
0622  push    ax                              
0623  cmp     byte ptr [848h],1h              
0628  sbb     ax,ax                           
062a  neg     ax                              
062c  add     ax,[bp-0Ah]                     
062f  mov     dx,[bp-8h]                      
0632  add     ax,[bp+0Eh]                     
0635  push    dx                              
0636  push    ax                              
0637  call far sub_0c44                       
063c  add     sp,8h                           
063f  mov     [bp-0Ah],ax                     
0642  mov     [bp-8h],dx                      
0645  cmp     word ptr [bp+10h],0h            
0649  je      652h                            
064b  les     bx,[bp-0Ah]                     
064e  mov     byte ptr es:[bx],45h            
0652  inc     word ptr [bp-0Ah]               
0655  les     bx,[bp-6h]                      
0658  les     bx,es:[bx+6h]                   
065c  cmp     byte ptr es:[bx],30h            
0660  je      6BEh                            
0662  les     bx,[bp-6h]                      
0665  mov     si,es:[bx+2h]                   
0669  dec     si                              
066a  jns     679h                            
066c  mov     ax,si                           
066e  neg     ax                              
0670  mov     si,ax                           
0672  les     bx,[bp-0Ah]                     
0675  mov     byte ptr es:[bx],2Dh            
0679  inc     word ptr [bp-0Ah]               
067c  cmp     si,64h                          
067f  jl      696h                            
0681  mov     ax,si                           
0683  mov     cx,64h                          
0686  cwd                                     
0687  idiv    cx                              
0689  les     bx,[bp-0Ah]                     
068c  add     es:[bx],al                      
068f  mov     ax,si                           
0691  cwd                                     
0692  idiv    cx                              
0694  mov     si,dx                           
0696  inc     word ptr [bp-0Ah]               
0699  cmp     si,0Ah                          
069c  jl      6B3h                            
069e  mov     ax,si                           
06a0  mov     cx,0Ah                          
06a3  cwd                                     
06a4  idiv    cx                              
06a6  les     bx,[bp-0Ah]                     
06a9  add     es:[bx],al                      
06ac  mov     ax,si                           
06ae  cwd                                     
06af  idiv    cx                              
06b1  mov     si,dx                           
06b3  mov     ax,si                           
06b5  inc     word ptr [bp-0Ah]               
06b8  les     bx,[bp-0Ah]                     
06bb  add     es:[bx],al                      
06be  mov     ax,[bp+0Ah]                     
06c1  mov     dx,[bp+0Ch]                     
06c4  pop     si                              
06c5  lea     sp,[bp-2h]                      
06c8  pop     ds                              
06c9  pop     bp                              
06ca  dec     bp                              
06cb  retf                                    

; ----- sub_06cc -----
06cc  mov     ax,ds                           
06ce  nop                                     
06cf  inc     bp                              
06d0  push    bp                              
06d1  mov     bp,sp                           
06d3  push    ds                              
06d4  mov     ds,ax                           
06d6  sub     sp,4h                           
06d9  mov     byte ptr [848h],1h              
06de  push    word ptr [bp+10h]               
06e1  push    word ptr [bp+0Eh]               
06e4  push    word ptr [bp+0Ch]               
06e7  push    word ptr [bp+0Ah]               
06ea  push    word ptr [bp+8h]                
06ed  push    word ptr [bp+6h]                
06f0  push    cs                              
06f1  call    534h                            
06f4  mov     byte ptr [848h],0h              
06f9  lea     sp,[bp-2h]                      
06fc  pop     ds                              
06fd  pop     bp                              
06fe  dec     bp                              
06ff  retf                                    

; ----- sub_0700 -----
0700  mov     ax,ds                           
0702  nop                                     
0703  inc     bp                              
0704  push    bp                              
0705  mov     bp,sp                           
0707  push    ds                              
0708  mov     ds,ax                           
070a  sub     sp,0Eh                          
070d  push    si                              
070e  cmp     byte ptr [848h],0h              
0713  je      75Ch                            
0715  mov     ax,[0DF2h]                      
0718  mov     dx,[0DF4h]                      
071c  mov     [bp-6h],ax                      
071f  mov     [bp-4h],dx                      
0722  mov     es,dx                           
0724  mov     bx,ax                           
0726  cmp     word ptr es:[bx],2Dh            
072a  jne     732h                            
072c  mov     ax,1h                           
072f  jmp     734h                            
0731  nop                                     
0732  xor     ax,ax                           
0734  add     ax,[bp+0Ah]                     
0737  mov     dx,[bp+0Ch]                     
073a  mov     [bp-0Ah],ax                     
073d  mov     [bp-8h],dx                      
0740  mov     cx,[84Ah]                       
0744  cmp     [bp+0Eh],cx                     
0747  jne     7A6h                            
0749  mov     es,dx                           
074b  mov     bx,ax                           
074d  mov     si,cx                           
074f  mov     byte ptr es:[bx+si],30h         
0753  add     bx,cx                           
0755  inc     bx                              
0756  mov     byte ptr es:[bx],0h             
075a  jmp     7A6h                            
075c  les     bx,[bp+6h]                      
075f  push    word ptr es:[bx+6h]             
0763  push    word ptr es:[bx+4h]             
0767  push    word ptr es:[bx+2h]             
076b  push    word ptr es:[bx]                
076e  call far sub_0d92                       
0773  add     sp,8h                           
0776  mov     [bp-6h],ax                      
0779  mov     [bp-4h],dx                      
077c  push    dx                              
077d  les     bx,[bp-6h]                      
0780  push    ax                              
0781  mov     ax,es:[bx+2h]                   
0785  add     ax,[bp+0Eh]                     
0788  push    ax                              
0789  cmp     word ptr es:[bx],2Dh            
078d  jne     794h                            
078f  mov     ax,1h                           
0792  jmp     796h                            
0794  xor     ax,ax                           
0796  add     ax,[bp+0Ah]                     
0799  mov     dx,[bp+0Ch]                     
079c  push    dx                              
079d  push    ax                              
079e  call far sub_0b7c                       
07a3  add     sp,0Ah                          
07a6  mov     ax,[bp+0Ah]                     
07a9  mov     dx,[bp+0Ch]                     
07ac  mov     [bp-0Ah],ax                     
07af  mov     [bp-8h],dx                      
07b2  les     bx,[bp-6h]                      
07b5  cmp     word ptr es:[bx],2Dh            
07b9  jne     7C7h                            
07bb  mov     bx,ax                           
07bd  mov     es,dx                           
07bf  mov     byte ptr es:[bx],2Dh            
07c3  inc     ax                              
07c4  mov     [bp-0Ah],ax                     
07c7  les     bx,[bp-6h]                      
07ca  cmp     word ptr es:[bx+2h],0h          
07cf  jg      7EAh                            
07d1  push    word ptr [bp-8h]                
07d4  push    word ptr [bp-0Ah]               
07d7  mov     ax,1h                           
07da  push    ax                              
07db  call    9E6h                            
07de  les     bx,[bp-0Ah]                     
07e1  inc     word ptr [bp-0Ah]               
07e4  mov     byte ptr es:[bx],30h            
07e8  jmp     7F1h                            
07ea  mov     ax,es:[bx+2h]                   
07ee  add     [bp-0Ah],ax                     
07f1  cmp     word ptr [bp+0Eh],0h            
07f5  jle     858h                            
07f7  push    word ptr [bp-8h]                
07fa  push    word ptr [bp-0Ah]               
07fd  mov     ax,1h                           
0800  push    ax                              
0801  call    9E6h                            
0804  les     bx,[bp-0Ah]                     
0807  inc     word ptr [bp-0Ah]               
080a  mov     byte ptr es:[bx],2Eh            
080e  les     bx,[bp-6h]                      
0811  cmp     word ptr es:[bx+2h],0h          
0816  jge     858h                            
0818  cmp     byte ptr [848h],0h              
081d  je      828h                            
081f  mov     ax,es:[bx+2h]                   
0823  neg     ax                              
0825  jmp     836h                            
0827  nop                                     
0828  mov     ax,es:[bx+2h]                   
082c  neg     ax                              
082e  cmp     ax,[bp+0Eh]                     
0831  jle     836h                            
0833  mov     ax,[bp+0Eh]                     
0836  mov     [bp+0Eh],ax                     
0839  push    word ptr [bp-8h]                
083c  push    word ptr [bp-0Ah]               
083f  push    ax                              
0840  call    9E6h                            
0843  push    word ptr [bp+0Eh]               
0846  mov     ax,30h                          
0849  push    ax                              
084a  push    word ptr [bp-8h]                
084d  push    word ptr [bp-0Ah]               
0850  call far sub_0c80                       
0855  add     sp,8h                           
0858  mov     ax,[bp+0Ah]                     
085b  mov     dx,[bp+0Ch]                     
085e  pop     si                              
085f  lea     sp,[bp-2h]                      
0862  pop     ds                              
0863  pop     bp                              
0864  dec     bp                              
0865  retf                                    

; ----- sub_0866 -----
0866  mov     ax,ds                           
0868  nop                                     
0869  inc     bp                              
086a  push    bp                              
086b  mov     bp,sp                           
086d  push    ds                              
086e  mov     ds,ax                           
0870  sub     sp,4h                           
0873  mov     byte ptr [848h],1h              
0878  push    word ptr [bp+0Eh]               
087b  push    word ptr [bp+0Ch]               
087e  push    word ptr [bp+0Ah]               
0881  push    word ptr [bp+8h]                
0884  push    word ptr [bp+6h]                
0887  push    cs                              
0888  call    700h                            
088b  mov     byte ptr [848h],0h              
0890  lea     sp,[bp-2h]                      
0893  pop     ds                              
0894  pop     bp                              
0895  dec     bp                              
0896  retf                                    
0897  nop                                     

; ----- sub_0898 -----
0898  mov     ax,ds                           
089a  nop                                     
089b  inc     bp                              
089c  push    bp                              
089d  mov     bp,sp                           
089f  push    ds                              
08a0  mov     ds,ax                           
08a2  sub     sp,0Ah                          
08a5  les     bx,[bp+6h]                      
08a8  push    word ptr es:[bx+6h]             
08ac  push    word ptr es:[bx+4h]             
08b0  push    word ptr es:[bx+2h]             
08b4  push    word ptr es:[bx]                
08b7  call far sub_0d92                       
08bc  add     sp,8h                           
08bf  mov     [0DF2h],ax                      
08c2  mov     [0DF4h],dx                      
08c6  les     bx,[0DF2h]                      
08ca  mov     ax,es:[bx+2h]                   
08ce  dec     ax                              
08cf  mov     [84Ah],ax                       
08d2  cmp     word ptr es:[bx],2Dh            
08d6  jne     8DEh                            
08d8  mov     ax,1h                           
08db  jmp     8E0h                            
08dd  nop                                     
08de  xor     ax,ax                           
08e0  add     ax,[bp+0Ah]                     
08e3  mov     dx,[bp+0Ch]                     
08e6  mov     [bp-6h],ax                      
08e9  mov     [bp-4h],dx                      
08ec  push    es                              
08ed  push    bx                              
08ee  push    word ptr [bp+0Eh]               
08f1  push    dx                              
08f2  push    ax                              
08f3  call far sub_0b7c                       
08f8  add     sp,0Ah                          
08fb  les     bx,[0DF2h]                      
08ff  mov     ax,es:[bx+2h]                   
0903  dec     ax                              
0904  mov     [bp-8h],ax                      
0907  cmp     ax,[84Ah]                       
090b  jle     912h                            
090d  mov     al,1h                           
090f  jmp     914h                            
0911  nop                                     
0912  xor     al,al                           
0914  mov     [84Ch],al                       
0917  mov     ax,[bp-8h]                      
091a  mov     [84Ah],ax                       
091d  cmp     ax,0FFFCh                       
0920  jl      927h                            
0922  cmp     ax,[bp+0Eh]                     
0925  jl      942h                            
0927  push    word ptr [bp+10h]               
092a  push    word ptr [bp+0Eh]               
092d  push    word ptr [bp+0Ch]               
0930  push    word ptr [bp+0Ah]               
0933  push    word ptr [bp+8h]                
0936  push    word ptr [bp+6h]                
0939  push    cs                              
093a  call    6CCh                            
093d  add     sp,0Ch                          
0940  jmp     970h                            
0942  cmp     byte ptr [84Ch],0h              
0947  je      95Dh                            
0949  les     bx,[bp-6h]                      
094c  inc     word ptr [bp-6h]                
094f  cmp     byte ptr es:[bx],0h             
0953  jne     949h                            
0955  mov     bx,[bp-6h]                      
0958  mov     byte ptr es:[bx-2h],0h          
095d  push    word ptr [bp+0Eh]               
0960  push    word ptr [bp+0Ch]               
0963  push    word ptr [bp+0Ah]               
0966  push    word ptr [bp+8h]                
0969  push    word ptr [bp+6h]                
096c  push    cs                              
096d  call    866h                            
0970  lea     sp,[bp-2h]                      
0973  pop     ds                              
0974  pop     bp                              
0975  dec     bp                              
0976  retf                                    
0977  nop                                     
0978  mov     ax,ds                           
097a  nop                                     
097b  inc     bp                              
097c  push    bp                              
097d  mov     bp,sp                           
097f  push    ds                              
0980  mov     ds,ax                           
0982  cmp     word ptr [bp+0Eh],65h           
0986  je      98Eh                            
0988  cmp     word ptr [bp+0Eh],45h           
098c  jne     9AAh                            
098e  push    word ptr [bp+12h]               
0991  push    word ptr [bp+10h]               
0994  push    word ptr [bp+0Ch]               
0997  push    word ptr [bp+0Ah]               
099a  push    word ptr [bp+8h]                
099d  push    word ptr [bp+6h]                
09a0  push    cs                              
09a1  call    534h                            
09a4  add     sp,0Ch                          
09a7  jmp     9DEh                            
09a9  nop                                     
09aa  cmp     word ptr [bp+0Eh],66h           
09ae  jne     9C8h                            
09b0  push    word ptr [bp+10h]               
09b3  push    word ptr [bp+0Ch]               
09b6  push    word ptr [bp+0Ah]               
09b9  push    word ptr [bp+8h]                
09bc  push    word ptr [bp+6h]                
09bf  push    cs                              
09c0  call    700h                            
09c3  add     sp,0Ah                          
09c6  jmp     9DEh                            
09c8  push    word ptr [bp+12h]               
09cb  push    word ptr [bp+10h]               
09ce  push    word ptr [bp+0Ch]               
09d1  push    word ptr [bp+0Ah]               
09d4  push    word ptr [bp+8h]                
09d7  push    word ptr [bp+6h]                
09da  push    cs                              
09db  call    898h                            
09de  lea     sp,[bp-2h]                      
09e1  pop     ds                              
09e2  pop     bp                              
09e3  dec     bp                              
09e4  retf                                    
09e5  nop                                     

; ----- sub_09e6 -----
09e6  push    bp                              
09e7  mov     bp,sp                           
09e9  cmp     word ptr [bp+4h],0h             
09ed  je      0A13h                           
09ef  push    word ptr [bp+8h]                
09f2  push    word ptr [bp+6h]                
09f5  call far sub_0c2a                       
09fa  add     sp,4h                           
09fd  inc     ax                              
09fe  push    ax                              
09ff  push    word ptr [bp+8h]                
0a02  mov     ax,[bp+6h]                      
0a05  push    ax                              
0a06  mov     dx,[bp+8h]                      
0a09  add     ax,[bp+4h]                      
0a0c  push    dx                              
0a0d  push    ax                              
0a0e  call far sub_0cc8                       
0a13  mov     sp,bp                           
0a15  pop     bp                              
0a16  ret     6h                              
0a19  nop                                     
0a1a  inc     bp                              
0a1b  push    bp                              
0a1c  mov     bp,sp                           
0a1e  push    ds                              
0a1f  push    es                              
0a20  push    ax                              
0a21  push    bx                              
0a22  push    cx                              
0a23  push    dx                              
0a24  xor     ah,ah                           
0a26  add     ax,-1Ch                         
0a29  push    ax                              
0a2a  call far sub_0b0c                       
0a2f  mov     ds,ax                           
0a31  pop     ax                              
0a32  call    0A96h                           
0a35  pop     dx                              
0a36  pop     cx                              
0a37  pop     bx                              
0a38  pop     ax                              
0a39  pop     es                              
0a3a  pop     ds                              
0a3b  pop     bp                              
0a3c  dec     bp                              
0a3d  retf                                    

; ----- sub_0a3e -----
0a3e  mov     ax,ds                           
0a40  nop                                     
0a41  inc     bp                              
0a42  push    bp                              
0a43  mov     bp,sp                           
0a45  push    ds                              
0a46  mov     ds,ax                           
0a48  push    si                              
0a49  push    di                              
0a4a  push    ds                              
0a4b  pop     es                              
0a4c  mov     dx,[bp+6h]                      
0a4f  mov     si,0A82h                        
0a52  lodsw                                   
0a53  cmp     ax,dx                           
0a55  je      0A67h                           
0a57  inc     ax                              
0a58  xchg    ax,si                           
0a59  je      0A67h                           
0a5b  xchg    ax,di                           
0a5c  xor     ax,ax                           
0a5e  mov     cx,0FFFFh                       
0a61  repne   scasb                           
0a63  mov     si,di                           
0a65  jmp     0A52h                           
0a67  xchg    ax,si                           
0a68  pop     di                              
0a69  pop     si                              
0a6a  sub     bp,2h                           
0a6d  mov     sp,bp                           
0a6f  pop     ds                              
0a70  pop     bp                              
0a71  dec     bp                              
0a72  retf    2h                              

; ----- sub_0a75 -----
0a75  mov     ax,ds                           
0a77  nop                                     
0a78  inc     bp                              
0a79  push    bp                              
0a7a  mov     bp,sp                           
0a7c  push    ds                              
0a7d  mov     ds,ax                           
0a7f  push    di                              
0a80  pop     di                              
0a81  sub     bp,2h                           
0a84  mov     sp,bp                           
0a86  pop     ds                              
0a87  pop     bp                              
0a88  dec     bp                              
0a89  retf    2h                              
0a8c  call far sub_0b0c                       
0a91  mov     ds,ax                           
0a93  mov     ax,3h                           

; ----- sub_0a96 -----
0a96  push    ax                              
0a97  push    ax                              
0a98  push    cs                              
0a99  call    2BCh                            
0a9c  push    cs                              
0a9d  call    0A75h                           
0aa0  push    cs                              
0aa1  call    0A3Eh                           
0aa4  xor     bx,bx                           
0aa6  or      ax,ax                           
0aa8  je      0AC7h                           
0aaa  mov     di,ax                           
0aac  mov     ax,9h                           
0aaf  cmp     byte ptr [di],4Dh               
0ab2  jne     0AB7h                           
0ab4  mov     ax,0Fh                          
0ab7  add     di,ax                           
0ab9  push    di                              
0aba  push    ds                              
0abb  pop     es                              
0abc  mov     al,0Dh                          
0abe  mov     cx,22h                          
0ac1  repne   scasb                           
0ac3  mov     [di-1h],bl                      
0ac6  pop     ax                              
0ac7  push    bx                              
0ac8  push    ds                              
0ac9  push    ax                              
0aca  call far KERNEL.FATALAPPEXIT            
0acf  mov     ax,0FFh                         
0ad2  push    ax                              
0ad3  call far KERNEL.FATALEXIT               
0ad8  mov     ax,2h                           
0adb  jmp     0A96h                           

; ----- sub_0ade -----
0ade  push    bp                              
0adf  mov     bp,sp                           
0ae1  push    bx                              
0ae2  push    es                              
0ae3  push    cx                              
0ae4  mov     cx,1000h                        
0ae7  xchg    cx,[97Ch]                       
0aeb  push    cx                              
0aec  push    ax                              
0aed  call far sub_1167                       
0af2  pop     bx                              
0af3  pop     [97Ch]                          
0af7  pop     cx                              
0af8  mov     bx,dx                           
0afa  or      bx,ax                           
0afc  je      0B02h                           
0afe  pop     es                              
0aff  pop     bx                              
0b00  jmp     0B07h                           
0b02  mov     ax,cx                           
0b04  jmp     0A96h                           
0b07  mov     sp,bp                           
0b09  pop     bp                              
0b0a  ret                                     
0b0b  add     [bx+si],al                      

; ----- sub_0b0c -----
0b0c  cmp     byte ptr cs:[0F00h],0B8h        
0b12  je      0B17h                           
0b14  mov     ax,ss                           
0b16  retf                                    
0b17  mov     ax,cs:[0F01h]                   
0b1b  retf                                    

; ----- sub_0b1c -----
0b1c  ret                                     
0b1d  add     [bx+si],al                      

; ----- sub_0b1e -----
0b1e  inc     bp                              
0b1f  push    bp                              
0b20  mov     bp,sp                           
0b22  push    ds                              
0b23  push    di                              
0b24  push    si                              
0b25  jmp     0B2Bh                           
0b27  nop                                     
0b28  inc     word ptr [bp+6h]                
0b2b  les     bx,[bp+6h]                      
0b2e  mov     al,es:[bx]                      
0b31  cbw                                     
0b32  mov     bx,ax                           
0b34  test    byte ptr [bx+855h],8h           
0b39  jne     0B28h                           
0b3b  xor     ax,ax                           
0b3d  push    ax                              
0b3e  push    ax                              
0b3f  push    es                              
0b40  push    word ptr [bp+6h]                
0b43  call far sub_0f14                       
0b48  add     sp,4h                           
0b4b  push    ax                              
0b4c  push    word ptr [bp+8h]                
0b4f  push    word ptr [bp+6h]                
0b52  call far sub_10e2                       
0b57  add     sp,0Ah                          
0b5a  add     ax,8h                           
0b5d  mov     bx,0E2Ah                        
0b60  push    ds                              
0b61  mov     di,bx                           
0b63  mov     si,ax                           
0b65  push    ds                              
0b66  pop     es                              
0b67  mov     ds,dx                           
0b69  movsw                                   
0b6a  movsw                                   
0b6b  movsw                                   
0b6c  movsw                                   
0b6d  pop     ds                              
0b6e  mov     ax,bx                           
0b70  mov     dx,ds                           
0b72  pop     si                              
0b73  pop     di                              
0b74  lea     sp,[bp-2h]                      
0b77  pop     ds                              
0b78  pop     bp                              
0b79  dec     bp                              
0b7a  retf                                    
0b7b  nop                                     

; ----- sub_0b7c -----
0b7c  inc     bp                              
0b7d  push    bp                              
0b7e  mov     bp,sp                           
0b80  push    ds                              
0b81  sub     sp,0Ah                          
0b84  les     bx,[bp+0Ch]                     
0b87  mov     ax,es:[bx+6h]                   
0b8b  mov     dx,es:[bx+8h]                   
0b8f  mov     [bp-0Ah],ax                     
0b92  mov     [bp-8h],dx                      
0b95  les     bx,[bp+6h]                      
0b98  mov     byte ptr es:[bx],30h            
0b9c  lea     ax,[bx+1h]                      
0b9f  mov     [bp-6h],ax                      
0ba2  mov     [bp-4h],es                      
0ba5  jmp     0BD2h                           
0ba7  nop                                     
0ba8  les     bx,[bp-0Ah]                     
0bab  cmp     byte ptr es:[bx],0h             
0baf  je      0BBEh                           
0bb1  mov     al,es:[bx]                      
0bb4  cbw                                     
0bb5  mov     [bp-0Ch],ax                     
0bb8  inc     word ptr [bp-0Ah]               
0bbb  jmp     0BC3h                           
0bbd  nop                                     
0bbe  mov     word ptr [bp-0Ch],30h           
0bc3  mov     al,[bp-0Ch]                     
0bc6  les     bx,[bp-6h]                      
0bc9  inc     word ptr [bp-6h]                
0bcc  mov     es:[bx],al                      
0bcf  dec     word ptr [bp+0Ah]               
0bd2  cmp     word ptr [bp+0Ah],0h            
0bd6  jg      0BA8h                           
0bd8  les     bx,[bp-6h]                      
0bdb  mov     byte ptr es:[bx],0h             
0bdf  cmp     word ptr [bp+0Ah],0h            
0be3  jl      0C03h                           
0be5  les     bx,[bp-0Ah]                     
0be8  cmp     byte ptr es:[bx],35h            
0bec  jl      0C03h                           
0bee  jmp     0BF4h                           
0bf0  mov     byte ptr es:[bx],30h            
0bf4  dec     word ptr [bp-6h]                
0bf7  les     bx,[bp-6h]                      
0bfa  cmp     byte ptr es:[bx],39h            
0bfe  je      0BF0h                           
0c00  inc     byte ptr es:[bx]                
0c03  les     bx,[bp+6h]                      
0c06  cmp     byte ptr es:[bx],31h            
0c0a  jne     0C16h                           
0c0c  les     bx,[bp+0Ch]                     
0c0f  inc     word ptr es:[bx+2h]             
0c13  jmp     0C22h                           
0c15  nop                                     
0c16  lea     ax,[bx+1h]                      
0c19  push    es                              
0c1a  push    ax                              
0c1b  push    es                              
0c1c  push    bx                              
0c1d  call far sub_0c44                       
0c22  lea     sp,[bp-2h]                      
0c25  pop     ds                              
0c26  pop     bp                              
0c27  dec     bp                              
0c28  retf                                    
0c29  nop                                     

; ----- sub_0c2a -----
0c2a  push    bp                              
0c2b  mov     bp,sp                           
0c2d  mov     dx,di                           
0c2f  les     di,[bp+6h]                      
0c32  xor     ax,ax                           
0c34  mov     cx,0FFFFh                       
0c37  repne   scasb                           
0c39  not     cx                              
0c3b  jne     0C3Eh                           
0c3d  dec     cx                              
0c3e  xchg    ax,cx                           
0c3f  mov     di,dx                           
0c41  pop     bp                              
0c42  retf                                    
0c43  add     [bx+si],al                      

; ----- sub_0c44 -----
0c44  push    bp                              
0c45  mov     bp,sp                           
0c47  mov     dx,di                           
0c49  mov     bx,si                           
0c4b  push    ds                              
0c4c  lds     si,[bp+0Ah]                     
0c4f  mov     di,si                           
0c51  mov     ax,ds                           
0c53  mov     es,ax                           
0c55  xor     ax,ax                           
0c57  mov     cx,0FFFFh                       
0c5a  repne   scasb                           
0c5c  not     cx                              
0c5e  les     di,[bp+6h]                      
0c61  mov     ax,di                           
0c63  je      0C69h                           
0c65  movsw                                   
0c66  dec     cx                              
0c67  jmp     0C6Fh                           
0c69  test    al,1h                           
0c6b  je      0C6Fh                           
0c6d  movsb                                   
0c6e  dec     cx                              
0c6f  shr     cx,1                            
0c71  rep     movsw                           
0c73  adc     cx,cx                           
0c75  rep     movsb                           
0c77  mov     si,bx                           
0c79  mov     di,dx                           
0c7b  pop     ds                              
0c7c  mov     dx,es                           
0c7e  pop     bp                              
0c7f  retf                                    

; ----- sub_0c80 -----
0c80  push    bp                              
0c81  mov     bp,sp                           
0c83  mov     cx,[bp+0Ch]                     
0c86  jcxz    0CC0h                           
0c88  push    di                              
0c89  les     di,[bp+6h]                      
0c8c  mov     dx,di                           
0c8e  neg     dx                              
0c90  je      0C9Eh                           
0c92  sub     dx,cx                           
0c94  sbb     bx,bx                           
0c96  and     dx,bx                           
0c98  add     dx,cx                           
0c9a  xchg    dx,cx                           
0c9c  sub     dx,cx                           
0c9e  mov     ax,[bp+0Ah]                     
0ca1  mov     ah,al                           
0ca3  shr     cx,1                            
0ca5  rep     stosw                           
0ca7  adc     cx,cx                           
0ca9  rep     stosb                           
0cab  xchg    dx,cx                           
0cad  jcxz    0CBFh                           
0caf  mov     bx,es                           
0cb1  add     bx,0FFFFh                       
0cb5  mov     es,bx                           
0cb7  shr     cx,1                            
0cb9  rep     stosw                           
0cbb  adc     cx,cx                           
0cbd  rep     stosb                           
0cbf  pop     di                              
0cc0  mov     ax,[bp+6h]                      
0cc3  mov     dx,[bp+8h]                      
0cc6  pop     bp                              
0cc7  retf                                    

; ----- sub_0cc8 -----
0cc8  push    bp                              
0cc9  mov     bp,sp                           
0ccb  mov     cx,[bp+0Eh]                     
0cce  push    ds                              
0ccf  push    di                              
0cd0  push    si                              
0cd1  or      cx,cx                           
0cd3  jne     0CD8h                           
0cd5  jmp     0D87h                           
0cd8  lds     si,[bp+0Ah]                     
0cdb  les     di,[bp+6h]                      
0cde  push    ds                              
0cdf  push    si                              
0ce0  push    es                              
0ce1  push    di                              
0ce2  call far sub_0f2e                       
0ce7  mov     cx,[bp+0Eh]                     
0cea  or      dx,dx                           
0cec  js      0D45h                           
0cee  sub     ax,cx                           
0cf0  sbb     dx,0h                           
0cf3  jae     0D45h                           
0cf5  dec     cx                              
0cf6  add     si,cx                           
0cf8  jae     0D01h                           
0cfa  mov     ax,ds                           
0cfc  add     ax,0CB3h                        
0cff  mov     ds,ax                           
0d01  add     di,cx                           
0d03  jae     0D0Ch                           
0d05  mov     ax,es                           
0d07  add     ax,0CFDh                        
0d0a  mov     es,ax                           
0d0c  inc     cx                              
0d0d  mov     ax,cx                           
0d0f  dec     ax                              
0d10  sub     ax,di                           
0d12  sbb     bx,bx                           
0d14  and     ax,bx                           
0d16  add     ax,di                           
0d18  sub     ax,si                           
0d1a  sbb     bx,bx                           
0d1c  and     ax,bx                           
0d1e  add     ax,si                           
0d20  inc     ax                              
0d21  xchg    ax,cx                           
0d22  sub     ax,cx                           
0d24  std                                     
0d25  rep     movsb                           
0d27  cld                                     
0d28  xchg    ax,cx                           
0d29  jcxz    0D87h                           
0d2b  cmp     si,-1h                          
0d2e  jne     0D37h                           
0d30  mov     ax,ds                           
0d32  sub     ax,0D08h                        
0d35  mov     ds,ax                           
0d37  cmp     di,-1h                          
0d3a  jne     0D0Dh                           
0d3c  mov     ax,es                           
0d3e  sub     ax,0D33h                        
0d41  mov     es,ax                           
0d43  jmp     0D0Dh                           
0d45  mov     ax,cx                           
0d47  dec     ax                              
0d48  mov     dx,di                           
0d4a  not     dx                              
0d4c  sub     ax,dx                           
0d4e  sbb     bx,bx                           
0d50  and     ax,bx                           
0d52  add     ax,dx                           
0d54  mov     dx,si                           
0d56  not     dx                              
0d58  sub     ax,dx                           
0d5a  sbb     bx,bx                           
0d5c  and     ax,bx                           
0d5e  add     ax,dx                           
0d60  inc     ax                              
0d61  xchg    ax,cx                           
0d62  sub     ax,cx                           
0d64  shr     cx,1                            
0d66  rep     movsw                           
0d68  adc     cx,cx                           
0d6a  rep     movsb                           
0d6c  xchg    ax,cx                           
0d6d  jcxz    0D87h                           
0d6f  or      si,si                           
0d71  jne     0D7Ah                           
0d73  mov     ax,ds                           
0d75  add     ax,0D3Fh                        
0d78  mov     ds,ax                           
0d7a  or      di,di                           
0d7c  jne     0D45h                           
0d7e  mov     ax,es                           
0d80  add     ax,0D76h                        
0d83  mov     es,ax                           
0d85  jmp     0D45h                           
0d87  mov     ax,[bp+6h]                      
0d8a  mov     dx,[bp+8h]                      
0d8d  pop     si                              
0d8e  pop     di                              
0d8f  pop     ds                              
0d90  pop     bp                              
0d91  retf                                    

; ----- sub_0d92 -----
0d92  mov     ax,ds                           
0d94  nop                                     
0d95  inc     bp                              
0d96  push    bp                              
0d97  mov     bp,sp                           
0d99  push    ds                              
0d9a  mov     ds,ax                           
0d9c  push    si                              
0d9d  push    di                              
0d9e  cld                                     
0d9f  mov     ax,ds                           
0da1  mov     es,ax                           
0da3  lea     si,[bp+6h]                      
0da6  mov     di,960h                         
0da9  movsw   ss:                             
0dab  movsw   ss:                             
0dad  movsw   ss:                             
0daf  movsw   ss:                             
0db1  mov     si,960h                         
0db4  push    bp                              
0db5  call    0F9Ch                           
0db8  pop     bp                              
0db9  mov     di,968h                         
0dbc  mov     cx,ax                           
0dbe  lodsb                                   
0dbf  cbw                                     
0dc0  xchg    ax,cx                           
0dc1  rep     movsb                           
0dc3  xchg    ax,cx                           
0dc4  stosb                                   
0dc5  mov     di,956h                         
0dc8  xor     bh,bh                           
0dca  mov     [di],bx                         
0dcc  mov     [di+2h],dx                      
0dcf  mov     [di+4h],cx                      
0dd2  mov     word ptr [di+6h],968h           
0dd7  mov     [di+8h],ds                      
0dda  mov     dx,ds                           
0ddc  mov     ax,di                           
0dde  pop     di                              
0ddf  pop     si                              
0de0  lea     sp,[bp-2h]                      
0de3  pop     ds                              
0de4  pop     bp                              
0de5  dec     bp                              
0de6  retf                                    
0de7  add     [bx+di+57h],dl                  
0dea  test    byte ptr [bx+2h],1h             
0dee  je      0E58h                           
0df0  call    0EDFh                           
0df3  mov     di,si                           
0df5  mov     ax,[si]                         
0df7  test    al,1h                           
0df9  je      0DFEh                           
0dfb  sub     cx,ax                           
0dfd  dec     cx                              
0dfe  inc     cx                              
0dff  inc     cx                              
0e00  mov     si,[bx+4h]                      
0e03  or      si,si                           
0e05  je      0E58h                           
0e07  add     cx,si                           
0e09  jae     0E14h                           
0e0b  xor     ax,ax                           
0e0d  mov     dx,0FFF0h                       
0e10  jcxz    0E47h                           
0e12  jmp     0E58h                           
0e14  call far sub_0b0c                       
0e19  mov     es,ax                           
0e1b  mov     ax,es:[97Ch]                    
0e1f  cmp     ax,1000h                        
0e22  je      0E3Ah                           
0e24  mov     dx,8000h                        
0e27  cmp     dx,ax                           
0e29  jb      0E31h                           
0e2b  shr     dx,1                            
0e2d  jne     0E27h                           
0e2f  jmp     0E53h                           
0e31  cmp     dx,8h                           
0e34  jb      0E53h                           
0e36  shl     dx,1                            
0e38  mov     ax,dx                           
0e3a  dec     ax                              
0e3b  mov     dx,ax                           
0e3d  add     ax,cx                           
0e3f  jae     0E43h                           
0e41  xor     ax,ax                           
0e43  not     dx                              
0e45  and     ax,dx                           
0e47  push    dx                              
0e48  call    0E79h                           
0e4b  pop     dx                              
0e4c  jae     0E5Bh                           
0e4e  cmp     dx,-10h                         
0e51  je      0E58h                           
0e53  mov     ax,10h                          
0e56  jmp     0E3Ah                           
0e58  stc                                     
0e59  jmp     0E76h                           
0e5b  mov     dx,ax                           
0e5d  sub     dx,[bx+4h]                      
0e60  mov     [bx+4h],ax                      
0e63  mov     [bx+0Ah],di                     
0e66  mov     si,[bx+0Ch]                     
0e69  dec     dx                              
0e6a  mov     [si],dx                         
0e6c  inc     dx                              
0e6d  add     si,dx                           
0e6f  mov     word ptr [si],0FFFEh            
0e73  mov     [bx+0Ch],si                     
0e76  pop     di                              
0e77  pop     cx                              
0e78  ret                                     

; ----- sub_0e79 -----
0e79  mov     dx,ax                           
0e7b  test    byte ptr [bx+2h],4h             
0e7f  je      0E83h                           
0e81  jmp     0ED4h                           
0e83  push    dx                              
0e84  push    cx                              
0e85  push    bx                              
0e86  mov     si,[bx+6h]                      
0e89  mov     bx,cs:[10h]                     
0e8e  xor     cx,cx                           
0e90  or      dx,dx                           
0e92  jne     0E9Bh                           
0e94  test    bx,10h                          
0e98  jne     0EDAh                           
0e9a  inc     cx                              
0e9b  mov     ax,2002h                        
0e9e  test    bx,1h                           
0ea2  jne     0EA7h                           
0ea4  mov     ax,2020h                        
0ea7  push    si                              
0ea8  push    cx                              
0ea9  push    dx                              
0eaa  push    ax                              
0eab  call far KERNEL.GLOBALREALLOC           
0eb0  or      ax,ax                           
0eb2  je      0EDAh                           
0eb4  cmp     ax,si                           
0eb6  jne     0ED4h                           
0eb8  push    si                              
0eb9  call far KERNEL.GLOBALSIZE              
0ebe  or      dx,ax                           
0ec0  je      0ED4h                           
0ec2  pop     bx                              
0ec3  pop     cx                              
0ec4  pop     dx                              
0ec5  mov     ax,dx                           
0ec7  test    byte ptr [bx+2h],4h             
0ecb  je      0ED1h                           
0ecd  dec     dx                              
0ece  mov     [bx-2h],dx                      
0ed1  clc                                     
0ed2  jmp     0EDEh                           
0ed4  mov     ax,12h                          
0ed7  jmp     0A96h                           
0eda  pop     bx                              
0edb  pop     cx                              
0edc  pop     dx                              
0edd  stc                                     
0ede  ret                                     

; ----- sub_0edf -----
0edf  push    di                              
0ee0  mov     si,[bx+0Ah]                     
0ee3  cmp     si,[bx+0Ch]                     
0ee6  jne     0EEBh                           
0ee8  mov     si,[bx+8h]                      
0eeb  lodsw                                   
0eec  cmp     ax,-2h                          
0eef  je      0EF9h                           
0ef1  mov     di,si                           
0ef3  and     al,0FEh                         
0ef5  add     si,ax                           
0ef7  jmp     0EEBh                           
0ef9  dec     di                              
0efa  dec     di                              
0efb  mov     si,di                           
0efd  pop     di                              
0efe  ret                                     
0eff  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
0f00  mov     ax,ds                           
0f02  nop                                     
0f03  inc     bp                              
0f04  push    bp                              
0f05  mov     bp,sp                           
0f07  push    ds                              
0f08  mov     ds,ax                           
0f0a  xor     ax,ax                           
0f0c  lea     sp,[bp-2h]                      
0f0f  pop     ds                              
0f10  pop     bp                              
0f11  dec     bp                              
0f12  retf                                    
0f13  nop                                     

; ----- sub_0f14 -----
0f14  push    bp                              
0f15  mov     bp,sp                           
0f17  mov     dx,di                           
0f19  les     di,[bp+6h]                      
0f1c  xor     ax,ax                           
0f1e  mov     cx,0FFFFh                       
0f21  repne   scasb                           
0f23  not     cx                              
0f25  jne     0F28h                           
0f27  dec     cx                              
0f28  xchg    ax,cx                           
0f29  mov     di,dx                           
0f2b  pop     bp                              
0f2c  retf                                    
0f2d  add     [bx+si],al                      

; ----- sub_0f2e -----
0f2e  push    bp                              
0f2f  mov     bp,sp                           
0f31  push    bx                              
0f32  push    cx                              
0f33  mov     ax,[bp+6h]                      
0f36  mov     dx,[bp+8h]                      
0f39  mov     bx,[bp+0Ch]                     
0f3c  mov     cx,0FFFFh                       
0f3f  shr     dx,cl                           
0f41  shr     bx,cl                           
0f43  sub     ax,[bp+0Ah]                     
0f46  sbb     dx,bx                           
0f48  pop     cx                              
0f49  pop     bx                              
0f4a  pop     bp                              
0f4b  retf    8h                              
0f4e  cld                                     
0f50  ???                                     
0f52  ???                                     
0f54  ???                                     
0f56  ???                                     
0f58  int     0CCh                            
0f5a  int 3                                   
0f5b  int 3                                   
0f5c  int 3                                   
0f5d  int 3                                   
0f5e  int 3                                   
0f5f  int 3                                   
0f60  sti                                     
0f61  aas                                     
0f62  mov     si,98Ah                         
0f65  mov     word ptr [si],3001h             
0f69  xor     ax,ax                           
0f6b  mov     dx,ax                           
0f6d  inc     ax                              
0f6e  mov     bl,20h                          
0f70  pop     es                              
0f71  ret                                     
0f72  or      dx,dx                           
0f74  jne     0F80h                           
0f76  cmp     cx,-8h                          
0f79  je      0F92h                           
0f7b  and     cl,0Fh                          
0f7e  je      0F8Dh                           
0f80  mov     si,9A2h                         
0f83  test    cl,8h                           
0f86  jne     0F95h                           
0f88  mov     si,99Bh                         
0f8b  jmp     0F95h                           
0f8d  mov     si,9A9h                         
0f90  jmp     0F95h                           
0f92  mov     si,9AFh                         
0f95  mov     dx,1h                           
0f98  pop     es                              
0f99  xor     ax,ax                           
0f9b  ret                                     

; ----- sub_0f9c -----
0f9c  push    es                              
0f9d  mov     ax,ds                           
0f9f  mov     es,ax                           
0fa1  cld                                     
0fa2  mov     di,97Eh                         
0fa5  push    di                              
0fa6  mov     cx,4h                           
0fa9  rep     movsw                           
0fab  pop     si                              
0fac  mov     cx,[si+6h]                      
0faf  and     byte ptr [si+7h],7Fh            
0fb3  mov     bl,20h                          
0fb5  mov     ax,[si]                         
0fb7  or      ax,[si+2h]                      
0fba  or      ax,[si+4h]                      
0fbd  mov     dx,ax                           
0fbf  or      ax,[si+6h]                      
0fc2  je      0F62h                           
0fc4  or      cx,cx                           
0fc6  jns     0FCAh                           
0fc8  mov     bl,2Dh                          
0fca  not     cx                              
0fcc  test    cx,7FF0h                        
0fd0  not     cx                              
0fd2  je      0F72h                           
0fd4  push    bx                              
0fd5  wait                                    
0fd6  fstcw   word ptr [9B7h]                 
0fda  nop                                     
0fdb  wait                                    
0fdc  push    ax                              
0fdd  mov     al,[9B7h]                       
0fe0  mov     [9B9h],al                       
0fe3  pop     ax                              
0fe4  wait                                    
0fe5  fldcw   word ptr [9B9h]                 
0fe9  wait                                    
0fea  fld     qword ptr [si]                  
0fec  wait                                    
0fed  fld     st(0),st(0)                     
0fef  wait                                    
0ff0  fstp    tword ptr [si]                  
0ff2  nop                                     
0ff3  wait                                    
0ff4  xor     di,di                           
0ff6  mov     si,985h                         
0ff9  lodsb                                   
0ffa  mov     bh,al                           
0ffc  lodsw                                   
0ffd  mov     cx,ax                           
0fff  mov     dx,4D10h                        
1002  mul     dx                              
1004  xchg    ax,cx                           
1005  mov     al,4Dh                          
1007  mul     ah                              
1009  add     cx,ax                           
100b  adc     dx,di                           
100d  mov     al,9Ah                          
100f  mul     bh                              
1011  add     cx,ax                           
1013  adc     di,dx                           
1015  sub     cx,12F4h                        
1019  sbb     di,1343h                        
101d  push    di                              
101e  neg     di                              
1020  mov     si,97Eh                         
1023  call    138Ah                           
1026  mov     bx,0F4Eh                        
1029  pop     di                              
102a  wait                                    
102b  fld     tword ptr cs:[bx]               
102e  wait                                    
102f  fcomp   st(0),st(1)                     
1031  wait                                    
1032  fstsw   word ptr [9B5h]                 
1036  nop                                     
1037  wait                                    
1038  test    byte ptr [9B6h],41h             
103d  je      104Ah                           
103f  inc     di                              
1040  mov     bx,0F58h                        
1043  wait                                    
1044  fld     tword ptr cs:[bx]               
1047  wait                                    
1048  fmulp   st(1)                           
104a  push    di                              
104b  wait                                    
104c  fstp    tword ptr [si]                  
104e  wait                                    
104f  fldcw   word ptr [9B7h]                 
1053  nop                                     
1054  wait                                    
1055  lodsw                                   
1056  xchg    ax,di                           
1057  lodsw                                   
1058  xchg    ax,bp                           
1059  lodsw                                   
105a  xchg    ax,dx                           
105b  lodsw                                   
105c  xchg    ax,bx                           
105d  lodsw                                   
105e  xchg    ax,cx                           
105f  sub     cx,3FFEh                        
1063  neg     cx                              
1065  mov     si,di                           
1067  xor     ax,ax                           
1069  jcxz    1077h                           
106b  shr     bx,1                            
106d  rcr     dx,1                            
106f  rcr     bp,1                            
1071  rcr     si,1                            
1073  rcr     ah,1                            
1075  loop    106Bh                           
1077  adc     si,39Ah                         
107b  adc     bp,cx                           
107d  adc     dx,cx                           
107f  adc     bx,cx                           
1081  mov     di,98Bh                         
1084  mov     cx,10h                          
1087  xor     al,al                           
1089  push    cx                              
108a  push    bx                              
108b  push    dx                              
108c  push    bp                              
108d  push    si                              
108e  push    ax                              
108f  shl     ah,1                            
1091  rcl     si,1                            
1093  rcl     bp,1                            
1095  rcl     dx,1                            
1097  rcl     bx,1                            
1099  rcl     al,1                            
109b  shl     ah,1                            
109d  rcl     si,1                            
109f  rcl     bp,1                            
10a1  rcl     dx,1                            
10a3  rcl     bx,1                            
10a5  rcl     al,1                            
10a7  pop     cx                              
10a8  adc     ah,ch                           
10aa  pop     cx                              
10ab  adc     si,cx                           
10ad  pop     cx                              
10ae  adc     bp,cx                           
10b0  pop     cx                              
10b1  adc     dx,cx                           
10b3  pop     cx                              
10b4  adc     bx,cx                           
10b6  adc     al,0h                           
10b8  shl     ah,1                            
10ba  rcl     si,1                            
10bc  rcl     bp,1                            
10be  rcl     dx,1                            
10c0  rcl     bx,1                            
10c2  rcl     al,1                            
10c4  pop     cx                              
10c5  add     al,30h                          
10c7  stosb                                   
10c8  loop    1087h                           
10ca  dec     di                              
10cb  dec     cx                              
10cc  mov     al,30h                          
10ce  std                                     
10cf  rep     scasb                           
10d1  cld                                     
10d2  add     cx,12h                          
10d5  mov     si,98Ah                         
10d8  mov     [si],cl                         
10da  mov     ax,1h                           
10dd  pop     dx                              
10de  pop     bx                              
10df  pop     es                              
10e0  ret                                     
10e1  add     [bx+si],al                      

; ----- sub_10e2 -----
10e2  mov     ax,ds                           
10e4  nop                                     
10e5  inc     bp                              
10e6  push    bp                              
10e7  mov     bp,sp                           
10e9  push    ds                              
10ea  mov     ds,ax                           
10ec  sub     sp,6h                           
10ef  mov     ax,0DFEh                        
10f2  push    ds                              
10f3  push    ax                              
10f4  lea     cx,[bp-6h]                      
10f7  push    ss                              
10f8  push    cx                              
10f9  push    word ptr [bp+8h]                
10fc  push    word ptr [bp+6h]                
10ff  xor     dx,dx                           
1101  push    dx                              
1102  call    13C8h                           
1105  mov     [bp-8h],ax                      
1108  mov     ax,[bp-6h]                      
110b  sub     ax,[bp+6h]                      
110e  mov     [0DF8h],ax                      
1111  mov     word ptr [0DF6h],0h             
1117  test    byte ptr [bp-8h],4h             
111b  je      1123h                           
111d  mov     word ptr [0DF6h],200h           
1123  test    byte ptr [bp-8h],2h             
1127  je      112Eh                           
1129  or      byte ptr [0DF6h],1h             
112e  test    byte ptr [bp-8h],1h             
1132  je      1139h                           
1134  or      byte ptr [0DF7h],1h             
1139  mov     ax,0DF6h                        
113c  mov     dx,ds                           
113e  lea     sp,[bp-2h]                      
1141  pop     ds                              
1142  pop     bp                              
1143  dec     bp                              
1144  retf                                    
1145  nop                                     
1146  mov     ax,ds                           
1148  nop                                     
1149  inc     bp                              
114a  push    bp                              
114b  mov     bp,sp                           
114d  push    ds                              
114e  mov     ds,ax                           
1150  push    si                              
1151  les     si,[bp+6h]                      
1154  mov     cx,es                           
1156  jcxz    115Dh                           
1158  or      byte ptr es:[si-2h],1h          
115d  pop     si                              
115e  sub     bp,2h                           
1161  mov     sp,bp                           
1163  pop     ds                              
1164  pop     bp                              
1165  dec     bp                              
1166  retf                                    

; ----- sub_1167 -----
1167  mov     ax,ds                           
1169  nop                                     
116a  inc     bp                              
116b  push    bp                              
116c  mov     bp,sp                           
116e  push    ds                              
116f  mov     ds,ax                           
1171  push    si                              
1172  push    di                              
1173  mov     cx,[bp+6h]                      
1176  cmp     cx,-1Ah                         
1179  ja      11E4h                           
117b  push    ds                              
117c  mov     ax,[9D8h]                       
117f  or      ax,ax                           
1181  je      11CBh                           
1183  mov     di,14C0h                        
1186  mov     si,[9E0h]                       
118a  lds     bx,[9DAh]                       
118e  push    ds                              
118f  push    si                              
1190  push    di                              
1191  call    di                              
1193  pop     di                              
1194  pop     si                              
1195  jae     11C2h                           
1197  mov     dx,ds                           
1199  lds     bx,[bx+0Eh]                     
119c  cmp     dx,si                           
119e  jne     118Fh                           
11a0  pop     ax                              
11a1  pop     ds                              
11a2  push    ds                              
11a3  les     si,[9DAh]                       
11a7  mov     si,es:[si+14h]                  
11ab  lds     bx,[9D6h]                       
11af  mov     dx,ds                           
11b1  cmp     dx,ax                           
11b3  jne     118Eh                           
11b5  pop     ds                              
11b6  push    ds                              
11b7  cmp     di,0DE8h                        
11bb  je      11CBh                           
11bd  mov     di,0DE8h                        
11c0  jmp     1186h                           
11c2  pop     si                              
11c3  cmp     di,14C0h                        
11c7  je      11D8h                           
11c9  jmp     11D5h                           
11cb  pop     es                              
11cc  push    es                              
11cd  mov     di,9D6h                         
11d0  call    1430h                           
11d3  jb      11E3h                           
11d5  call    14C0h                           
11d8  pop     ds                              
11d9  mov     [9DCh],dx                       
11dd  mov     [9DAh],bx                       
11e1  jmp     1203h                           
11e3  pop     ds                              
11e4  xor     ax,ax                           
11e6  cwd                                     
11e7  mov     cx,[9CAh]                       
11eb  or      cx,[9C8h]                       
11ef  je      1203h                           
11f1  push    word ptr [bp+6h]                
11f4  call    far ptr  [9C8h]                 
11f8  add     sp,2h                           
11fb  cwd                                     
11fc  or      ax,ax                           
11fe  je      1203h                           
1200  jmp     1173h                           
1203  pop     di                              
1204  pop     si                              
1205  sub     bp,2h                           
1208  mov     sp,bp                           
120a  pop     ds                              
120b  pop     bp                              
120c  dec     bp                              
120d  retf                                    
120e  add     [bx+si],al                      
1210  add     [bx+si],al                      
1212  add     [bx+si],al                      
1214  add     [bx+si+4002h],ah                
1218  add     [bx+si],al                      
121a  add     [bx+si],al                      
121c  add     [bx+si],al                      
121e  add     al,cl                           
1220  add     ax,40h                          
1223  add     [bx+si],al                      
1225  add     [bx+si],al                      
1227  add     [bx+si],al                      
1229  cli                                     
122a  or      [bx+si],al                      
122d  add     [bx+si],al                      
122f  add     [bx+si],al                      
1231  add     [bx+si-64h],al                  
1234  or      al,40h                          
1236  add     [bx+si],al                      
1238  add     [bx+si],al                      
123a  add     [bx+si],al                      
123c  push    ax                              
123d  ret                                     
123e  cmovo   ax,[bx+si]                      
1241  add     [bx+si],al                      
1243  add     [bx+si],al                      
1245  add     [si],ah                         
1247  hlt                                     
1248  adc     al,[bx+si]                      
124b  add     [bx+si],al                      
124d  add     [bx+si],al                      
124f  adc     byte ptr [bp+1698h],40h         
1254  add     [bx+si],al                      
1256  add     [bx+si],al                      
1258  add     [bx+si],ah                      
125a  mov     sp,19BEh                        
125d  inc     ax                              
125e  add     [bx+si],al                      
1260  add     [si],al                         
1262  mov     di,1BC9h                        
1265  mov     ???,[si]                        
1267  inc     ax                              
1268  add     [bx+di-3313h],ah                
126c  into                                    
126d  sbb     ax,dx                           
126f  ror     word ptr [bp+40h],cl            
1272  sahf                                    
1273  mov     ch,70h                          
1275  sub     bp,[bx+si-3A53h]                
1279  popf                                    
127a  imul    ax,[bx+si-3h],0E525h            
127f  sbb     cl,[bp+194Fh]                   
1283  jmp     1208h                           
1285  inc     ax                              
1286  xlat                                    
1287  xchg    ax,bp                           
1288  inc     bx                              
1289  push    cs                              
128a  add     ax,298Dh                        
128d  scasw                                   
128e  sahf                                    
128f  inc     ax                              
1290  mov     al,[0ED44h]                     
1293  adc     word ptr [bp+si],818Fh          
1297  cmp     byte ptr [bx+di-2AC0h],0A6h     
129c  iret                                    
129d  dec     word ptr [bx+di+1Fh]            
12a0  js      1264h                           
12a2  rol     word ptr [bx+si-20h],cl         
12a5  mov     cx,gs                           
12a7  or      cl,47h                          
12aa  mov     dx,0A893h                       
12ad  inc     cx                              
12ae  imul    dx,[di+27h],39h                 
12b2  lea     si,di                           
12b4  jo      1296h                           
12b6  jl      12FAh                           
12b8  mov     ds,si                           
12ba  stc                                     
12bb  popf                                    
12bc  sti                                     
12bd  jmp     133Dh                           
12bf  stosb                                   
12c0  push    cx                              
12c1  inc     bx                              
12c2  jbe     12A7h                           
12c4  int 3                                   
12c5  repne   sub     [bx],bp                 
12c8  test    [bx+di+4426h],al                
12cc  int     0CCh                            
12ce  int 3                                   
12cf  int 3                                   
12d0  int 3                                   
12d1  int 3                                   
12d2  int 3                                   
12d3  int 3                                   
12d4  sti                                     
12d5  aas                                     
12d6  or      dl,bh                           
12d8  mov     [3D70h],ax                      
12db  or      dl,bh                           
12dd  mov     [3FF8h],ax                      
12e0  cmp     bx,di                           
12e2  dec     di                              
12e3  lea     dx,[bx+126Eh]                   
12e7  xor     bp,3Fh                          
12ea  sub     al,65h                          
12ec  sbb     dx,sp                           
12ee  pop     ax                              
12ef  pop     ss                              
12f0  mov     bh,0D1h                         
12f2  ???                                     
12f3  aas                                     
12f4  and     ax,[si+1B47h]                   
12f8  inc     di                              
12f9  lodsb                                   
12fa  lds     sp,[bx+3FEEh]                   
12fe  mov     dh,69h                          
1300  insb                                    
1301  scasw                                   
1302  add     ax,37BDh                        
1305  xchg    ch,bl                           
1307  aas                                     
1308  mov     sp,7A42h                        
130b  in      ax,0D5h                         
130d  xchg    ax,sp                           
130e  mov     di,0E7D6h                       
1311  aas                                     
1312  std                                     
1313  into                                    
1314  popa                                    
1315  test    [bx+di],dl                      
1317  ja      12E5h                           
1319  stosw                                   
131a  in      al,3Fh                          
131c  pop     bx                              
131d  loopz   136Ch                           
131f  les     di,[bp-6A6Ch]                   
1323  out     0C9h,al                         
1325  aas                                     
1326  push    bx                              
1327  cmp     si,[di+44h]                     
132a  int     14h                             
132c  mov     si,0AF9Ah                       
132f  aas                                     
1330  mov     dx,3994h                        
1333  inc     bp                              
1334  lodsw                                   
1335  push    ds                              
1336  mov     cl,0CFh                         
1338  xchg    ax,sp                           
1339  aas                                     
133a  mov     dl,0BCh                         
133d  mov     dx,313Bh                        
1340  popa                                    
1341  mov     di,[bp+si+3Fh]                  
1344  pop     cx                              
1345  sar     word ptr [bp-4Fh],53h           
1349  jl      135Dh                           
134b  mov     bx,3F5Fh                        
134e  das                                     
134f  lea     ax,[92BEh]                      
1353  test    [di],dx                         
1355  sti                                     
1356  inc     sp                              
1357  aas                                     
1358  movsw                                   
1359  jmp     0B895h                          
135c  daa                                     
135d  jmp     3F2Ah:0A87Fh                    
1362  mov     ax,[0BCE4h]                     
1365  jl      13AEh                           
1368  rcr     ch,1                            
136a  push    bp                              
136b  push    es                              
136d  int 3                                   
136e  and     dx,[si+77h]                     
1371  cmp     di,-6Fh                         
1374  cmp     word ptr [di],193Ah             
1378  jp      13DDh                           
137a  and     ax,3143h                        
137d  shr     byte ptr [si-2EC4h],38h         
1382  add     byte ptr [bx-69h],0B8h          
1386  add     ch,bh                           
1388  xlat                                    
1389  cmp     ax,[bx+si]                      

; ----- sub_138a -----
138a  mov     bx,11BEh                        
138d  or      di,di                           
138f  jns     1396h                           
1391  mov     bx,127Ch                        
1394  neg     di                              
1396  push    di                              
1397  pop     di                              
1398  add     bx,46h                          
139b  or      di,di                           
139d  je      13C6h                           
139f  mov     ax,di                           
13a1  shr     di,1                            
13a3  shr     di,1                            
13a5  shr     di,1                            
13a7  push    di                              
13a8  and     ax,7h                           
13ab  je      1397h                           
13ad  push    bx                              
13ae  shl     al,1                            
13b0  mov     ah,al                           
13b2  shl     al,1                            
13b4  shl     al,1                            
13b6  add     al,ah                           
13b8  xor     ah,ah                           
13ba  add     bx,ax                           
13bc  wait                                    
13bd  fld     tword ptr cs:[bx]               
13c0  wait                                    
13c1  fmulp   st(1)                           
13c3  pop     bx                              
13c4  jmp     1397h                           
13c6  ret                                     
13c7  add     [bx+si],al                      

; ----- sub_13c8 -----
13c8  push    bp                              
13c9  mov     bp,sp                           
13cb  sub     sp,0Eh                          
13ce  push    ss                              
13cf  lea     ax,[bp-0Ah]                     
13d2  push    ax                              
13d3  push    word ptr [bp+0Ch]               
13d6  push    word ptr [bp+0Ah]               
13d9  push    word ptr [bp+8h]                
13dc  push    word ptr [bp+6h]                
13df  push    word ptr [bp+4h]                
13e2  call    153Ch                           
13e5  wait                                    
13e6  fstcw   word ptr [bp-0Eh]               
13e9  wait                                    
13ea  fld     tword ptr [bp-0Ah]              
13ed  mov     bx,[bp-0Eh]                     
13f0  or      bx,18h                          
13f3  mov     [bp-0Ch],bx                     
13f6  wait                                    
13f7  fclex                                   
13f9  les     bx,[bp+0Eh]                     
13fc  wait                                    
13fd  fldcw   word ptr [bp-0Ch]               
1400  wait                                    
1401  fstp    qword ptr es:[bx]               
1404  wait                                    
1405  fstsw   word ptr [bp-0Ch]               
1408  wait                                    
1409  fclex                                   
140b  wait                                    
140c  fldcw   word ptr [bp-0Eh]               
140f  or      ax,ax                           
1411  jne     142Ah                           
1413  mov     bx,[bp-0Ch]                     
1416  xor     ax,ax                           
1418  test    bx,18h                          
141c  je      142Ah                           
141e  mov     ax,2h                           
1421  test    bx,8h                           
1425  jne     142Ah                           
1427  mov     ax,1h                           
142a  mov     sp,bp                           
142c  pop     bp                              
142d  ret     0Eh                             

; ----- sub_1430 -----
1430  mov     dx,cx                           
1432  add     dx,1019h                        
1436  and     dx,0F000h                       
143a  push    cx                              
143b  push    es                              
143c  mov     bx,cs:[10h]                     
1441  xor     cx,cx                           
1443  or      dx,dx                           
1445  jne     144Eh                           
1447  test    bx,10h                          
144b  jne     14ADh                           
144d  inc     cx                              
144e  push    bx                              
144f  mov     ax,2002h                        
1452  test    bx,1h                           
1456  jne     145Bh                           
1458  mov     ax,2020h                        
145b  push    ax                              
145c  push    cx                              
145d  push    dx                              
145e  call far KERNEL.GLOBALALLOC             
1463  pop     bx                              
1464  or      ax,ax                           
1466  je      14ADh                           
1468  push    ax                              
1469  test    bx,1h                           
146d  je      147Fh                           
146f  push    ax                              
1470  call far KERNEL.GLOBALLOCK              
1475  or      ax,ax                           
1477  jne     14A7h                           
1479  or      ax,dx                           
147b  je      14A7h                           
147d  mov     ax,dx                           
147f  mov     ds,ax                           
1481  push    ax                              
1482  call far KERNEL.GLOBALSIZE              
1487  or      dx,ax                           
1489  je      14A7h                           
148b  mov     dx,ax                           
148d  pop     ax                              
148e  pop     es                              
148f  pop     cx                              
1490  xor     bx,bx                           
1492  mov     [bx+6h],ax                      
1495  mov     ax,es:[di+0Ch]                  
1499  mov     [bx+2h],ax                      
149c  mov     ax,dx                           
149e  call    17CEh                           
14a1  call    1802h                           
14a4  clc                                     
14a5  jmp     14B0h                           
14a7  mov     ax,12h                          
14aa  jmp     0A96h                           
14ad  pop     es                              
14ae  pop     cx                              
14af  stc                                     
14b0  ret                                     
14b1  add     [bx+si],al                      

; ----- sub_14b2 -----
14b2  push    bp                              
14b3  mov     bp,sp                           
14b5  mov     bx,9D6h                         
14b8  push    ds                              
14b9  pop     es                              
14ba  call    17A4h                           
14bd  pop     bp                              
14be  ret                                     
14bf  add     [bx+si],al                      

; ----- sub_14c0 -----
14c0  inc     cx                              
14c1  and     cl,0FEh                         
14c4  push    bx                              
14c5  cld                                     
14c6  mov     si,[bx+0Ah]                     
14c9  mov     bx,[bx+0Ch]                     
14cc  xor     di,di                           
14ce  jmp     14F3h                           
14d0  mov     ax,bx                           
14d2  pop     bx                              
14d3  test    al,1h                           
14d5  jne     1519h                           
14d7  push    bx                              
14d8  mov     si,[bx+8h]                      
14db  mov     bx,[bx+0Ah]                     
14de  cmp     bx,si                           
14e0  je      1518h                           
14e2  dec     bx                              
14e3  xor     di,di                           
14e5  jmp     14F3h                           
14e7  nop                                     
14e8  lea     dx,[si-2h]                      
14eb  cmp     dx,bx                           
14ed  jae     14D0h                           
14ef  add     si,ax                           
14f1  jb      1516h                           
14f3  lodsw                                   
14f4  test    al,1h                           
14f6  je      14E8h                           
14f8  mov     di,si                           
14fa  dec     ax                              
14fb  cmp     ax,cx                           
14fd  jae     1522h                           
14ff  add     si,ax                           
1501  jb      1516h                           
1503  mov     dx,ax                           
1505  lodsw                                   
1506  test    al,1h                           
1508  je      14E8h                           
150a  add     ax,dx                           
150c  add     ax,2h                           
150f  mov     si,di                           
1511  mov     [si-2h],ax                      
1514  jmp     14FAh                           
1516  mov     ax,ax                           
1518  pop     bx                              
1519  mov     ax,[bx+8h]                      
151c  mov     [bx+0Ah],ax                     
151f  stc                                     
1520  jmp     153Bh                           
1522  pop     bx                              
1523  mov     [si-2h],cx                      
1526  je      1531h                           
1528  add     di,cx                           
152a  sub     ax,cx                           
152c  dec     ax                              
152d  mov     [di],ax                         
152f  sub     di,cx                           
1531  add     di,cx                           
1533  mov     [bx+0Ah],di                     
1536  mov     ax,si                           
1538  mov     dx,ds                           
153a  clc                                     
153b  ret                                     

; ----- sub_153c -----
153c  push    bp                              
153d  mov     bp,sp                           
153f  sub     sp,34h                          
1542  push    si                              
1543  push    di                              
1544  push    ds                              
1545  lds     si,[bp+6h]                      
1548  xor     ax,ax                           
154a  mov     [bp-0Eh],ax                     
154d  mov     [bp-10h],ds                     
1550  mov     [bp-12h],si                     
1553  mov     [bp-14h],ax                     
1556  mov     [bp-18h],ax                     
1559  mov     [bp-16h],ax                     
155c  mov     word ptr [bp-1Ah],19h           
1561  push    ss                              
1562  pop     es                              
1563  lea     di,[bp-34h]                     
1566  lodsb                                   
1567  cmp     al,20h                          
1569  je      1566h                           
156b  cmp     al,9h                           
156d  je      1566h                           
156f  cmp     al,0Ah                          
1571  je      1566h                           
1573  cmp     al,0Dh                          
1575  je      1566h                           
1577  or      al,al                           
1579  jne     157Eh                           
157b  jmp     176Dh                           
157e  cmp     al,2Bh                          
1580  je      158Bh                           
1582  cmp     al,2Dh                          
1584  jne     158Ch                           
1586  mov     word ptr [bp-14h],8000h         
158b  lodsb                                   
158c  cmp     al,30h                          
158e  jb      1594h                           
1590  cmp     al,39h                          
1592  jbe     15A4h                           
1594  cmp     al,2Eh                          
1596  jne     157Bh                           
1598  lodsb                                   
1599  cmp     al,30h                          
159b  jb      157Bh                           
159d  cmp     al,39h                          
159f  ja      157Bh                           
15a1  jmp     15B8h                           
15a3  lodsb                                   
15a4  cmp     al,30h                          
15a6  je      15A3h                           
15a8  or      al,al                           
15aa  jne     15B3h                           
15ac  dec     si                              
15ad  mov     [bp-12h],si                     
15b0  jmp     1771h                           
15b3  cmp     al,2Eh                          
15b5  jne     15C9h                           
15b7  lodsb                                   
15b8  dec     word ptr [bp-16h]               
15bb  cmp     al,30h                          
15bd  je      15B7h                           
15bf  inc     word ptr [bp-16h]               
15c2  or      al,al                           
15c4  je      15ACh                           
15c6  jmp     15F3h                           
15c8  lodsb                                   
15c9  cmp     al,30h                          
15cb  jb      15EEh                           
15cd  cmp     al,39h                          
15cf  ja      15EEh                           
15d1  sub     al,30h                          
15d3  stosb                                   
15d4  dec     word ptr [bp-1Ah]               
15d7  jne     15C8h                           
15d9  lodsb                                   
15da  inc     word ptr [bp-16h]               
15dd  cmp     al,30h                          
15df  jb      15E5h                           
15e1  cmp     al,39h                          
15e3  jbe     15D9h                           
15e5  dec     word ptr [bp-16h]               
15e8  cmp     al,2Eh                          
15ea  je      1606h                           
15ec  jmp     160Fh                           
15ee  cmp     al,2Eh                          
15f0  jne     160Fh                           
15f2  lodsb                                   
15f3  cmp     al,30h                          
15f5  jb      160Fh                           
15f7  cmp     al,39h                          
15f9  ja      160Fh                           
15fb  sub     al,30h                          
15fd  stosb                                   
15fe  dec     word ptr [bp-16h]               
1601  dec     word ptr [bp-1Ah]               
1604  jne     15F2h                           
1606  lodsb                                   
1607  cmp     al,30h                          
1609  jb      160Fh                           
160b  cmp     al,39h                          
160d  jbe     1606h                           
160f  neg     word ptr [bp-1Ah]               
1612  add     word ptr [bp-1Ah],19h           
1616  lea     bx,[si-1h]                      
1619  mov     [bp-12h],bx                     
161c  xor     bx,bx                           
161e  cmp     al,45h                          
1620  je      1630h                           
1622  cmp     al,65h                          
1624  je      1630h                           
1626  cmp     al,44h                          
1628  je      1630h                           
162a  cmp     al,64h                          
162c  je      1630h                           
162e  jmp     1682h                           
1630  lodsb                                   
1631  cmp     al,2Bh                          
1633  je      163Eh                           
1635  cmp     al,2Dh                          
1637  jne     163Fh                           
1639  mov     word ptr [bp-18h],0FFFFh        
163e  lodsb                                   
163f  cmp     al,30h                          
1641  jb      1682h                           
1643  cmp     al,39h                          
1645  ja      1682h                           
1647  sub     ax,30h                          
164a  mov     bx,ax                           
164c  lodsb                                   
164d  cmp     al,30h                          
164f  jb      1675h                           
1651  cmp     al,39h                          
1653  ja      1675h                           
1655  sub     al,30h                          
1657  cmp     bx,666h                         
165b  ja      1669h                           
165d  shl     bx,1                            
165f  add     ax,bx                           
1661  shl     bx,1                            
1663  shl     bx,1                            
1665  add     bx,ax                           
1667  jns     164Ch                           
1669  mov     bx,3FFFh                        
166c  lodsb                                   
166d  cmp     al,30h                          
166f  jb      1675h                           
1671  cmp     al,39h                          
1673  jbe     166Ch                           
1675  xor     bx,[bp-18h]                     
1678  sub     bx,[bp-18h]                     
167b  add     [bp-16h],bx                     
167e  dec     si                              
167f  mov     [bp-12h],si                     
1682  cmp     word ptr [bp-1Ah],0h            
1686  jne     168Bh                           
1688  jmp     1771h                           
168b  mov     byte ptr es:[di],0h             
168f  dec     di                              
1690  cmp     word ptr [bp-1Ah],18h           
1694  jbe     16ADh                           
1696  mov     al,es:[di]                      
1699  mov     byte ptr es:[di],0h             
169d  dec     word ptr [bp-1Ah]               
16a0  inc     word ptr [bp-16h]               
16a3  dec     di                              
16a4  cmp     al,5h                           
16a6  jb      16BCh                           
16a8  inc     byte ptr es:[di]                
16ab  jmp     16C2h                           
16ad  cmp     word ptr [bp-16h],0h            
16b1  je      16C2h                           
16b3  jmp     16BCh                           
16b5  dec     di                              
16b6  dec     word ptr [bp-1Ah]               
16b9  inc     word ptr [bp-16h]               
16bc  cmp     byte ptr es:[di],0h             
16c0  je      16B5h                           
16c2  push    ss                              
16c3  lea     ax,[bp-34h]                     
16c6  push    ax                              
16c7  push    word ptr [bp-1Ah]               
16ca  lea     ax,[bp-0Ch]                     
16cd  push    ax                              
16ce  call    1D4Ah                           
16d1  mov     ax,[bp-16h]                     
16d4  or      ax,ax                           
16d6  je      16F6h                           
16d8  cmp     ax,1450h                        
16db  jl      16E0h                           
16dd  jmp     1783h                           
16e0  cmp     ax,0EBB0h                       
16e3  jg      16E8h                           
16e5  jmp     177Dh                           
16e8  push    ss                              
16e9  lea     ax,[bp-0Ch]                     
16ec  push    ax                              
16ed  push    word ptr [bp-16h]               
16f0  push    word ptr [bp+4h]                
16f3  call    1AF0h                           
16f6  mov     ax,[bp-4h]                      
16f9  mov     bx,[bp-6h]                      
16fc  mov     cx,[bp-8h]                      
16ff  mov     dx,[bp-0Ah]                     
1702  cmp     word ptr [bp-0Ch],8000h         
1707  jb      1725h                           
1709  ja      1711h                           
170b  test    dx,1h                           
170f  je      1725h                           
1711  add     dx,1h                           
1714  adc     cx,0h                           
1717  adc     bx,0h                           
171a  adc     ax,0h                           
171d  jae     1725h                           
171f  or      ah,80h                          
1722  inc     word ptr [bp-2h]                
1725  mov     si,[bp-2h]                      
1728  cmp     si,7FFFh                        
172c  jae     1783h                           
172e  or      si,si                           
1730  jne     173Ch                           
1732  mov     si,ax                           
1734  or      si,bx                           
1736  or      si,cx                           
1738  or      si,dx                           
173a  je      177Dh                           
173c  lds     si,[bp+0Eh]                     
173f  mov     [si+6h],ax                      
1742  mov     [si+4h],bx                      
1745  mov     [si+2h],cx                      
1748  mov     [si],dx                         
174a  mov     ax,[bp-2h]                      
174d  or      ax,[bp-14h]                     
1750  mov     [si+8h],ax                      
1753  lds     si,[bp+0Ah]                     
1756  mov     ax,[bp-12h]                     
1759  mov     [si],ax                         
175b  mov     ax,[bp-10h]                     
175e  mov     [si+2h],ax                      
1761  mov     ax,[bp-0Eh]                     
1764  pop     ds                              
1765  pop     di                              
1766  pop     si                              
1767  mov     sp,bp                           
1769  pop     bp                              
176a  ret     0Eh                             
176d  or      word ptr [bp-0Eh],4h            
1771  les     di,[bp+0Eh]                     
1774  xor     ax,ax                           
1776  mov     cx,5h                           
1779  rep     stosw                           
177b  jmp     1753h                           
177d  or      word ptr [bp-0Eh],1h            
1781  jmp     1771h                           
1783  or      word ptr [bp-0Eh],2h            
1787  lds     si,[bp+0Eh]                     
178a  mov     ax,7FFFh                        
178d  or      ax,[bp-14h]                     
1790  mov     [si+8h],ax                      
1793  mov     word ptr [si+6h],8000h          
1798  xor     ax,ax                           
179a  mov     [si+4h],ax                      
179d  mov     [si+2h],ax                      
17a0  mov     [si],ax                         
17a2  jmp     1753h                           

; ----- sub_17a4 -----
17a4  push    bp                              
17a5  mov     bp,sp                           
17a7  push    di                              
17a8  les     bx,es:[bx]                      
17ab  mov     cx,es                           
17ad  jcxz    17C9h                           
17af  mov     ax,es:[bx+6h]                   
17b3  les     bx,es:[bx+0Eh]                  
17b7  push    bx                              
17b8  push    es                              
17b9  push    ax                              
17ba  push    ax                              
17bb  call far KERNEL.GLOBALUNLOCK            
17c0  call far KERNEL.GLOBALFREE              
17c5  pop     es                              
17c6  pop     bx                              
17c7  jmp     17ABh                           
17c9  pop     di                              
17ca  mov     sp,bp                           
17cc  pop     bp                              
17cd  ret                                     

; ----- sub_17ce -----
17ce  push    es                              
17cf  push    di                              
17d0  mov     di,ax                           
17d2  add     di,bx                           
17d4  mov     [bx+4h],di                      
17d7  dec     di                              
17d8  dec     di                              
17d9  sub     ax,18h                          
17dc  lea     si,[bx+16h]                     
17df  mov     word ptr [di],0FFFEh            
17e3  mov     [bx+0Ch],di                     
17e6  dec     ax                              
17e7  mov     [si],ax                         
17e9  mov     [bx],ds                         
17eb  mov     ax,si                           
17ed  mov     dx,ds                           
17ef  mov     es,dx                           
17f1  lea     di,[bx+8h]                      
17f4  cld                                     
17f5  stosw                                   
17f6  stosw                                   
17f7  inc     di                              
17f8  inc     di                              
17f9  xor     ax,ax                           
17fb  stosw                                   
17fc  stosw                                   
17fd  stosw                                   
17fe  stosw                                   
17ff  pop     di                              
1800  pop     es                              
1801  ret                                     

; ----- sub_1802 -----
1802  mov     ax,es:[di+2h]                   
1806  or      ax,ax                           
1808  jne     1813h                           
180a  mov     es:[di+2h],ds                   
180e  mov     es:[di],bx                      
1811  jmp     1827h                           
1813  push    es                              
1814  les     si,es:[di+8h]                   
1818  mov     es:[si+10h],ds                  
181c  mov     es:[si+0Eh],bx                  
1820  mov     [bx+14h],es                     
1823  mov     [bx+12h],si                     
1826  pop     es                              
1827  mov     es:[di+0Ah],ds                  
182b  mov     es:[di+8h],bx                   
182f  mov     es:[di+6h],ds                   
1833  mov     es:[di+4h],bx                   
1837  ret                                     
1838  add     [bx+si],al                      
183a  add     [bx+si],al                      
183c  add     [bx+si],al                      
183e  add     [bx+si],al                      
1840  add     [bx+si+4002h],ah                
1844  add     [bx+si],al                      
1846  add     [bx+si],al                      
1848  add     [bx+si],al                      
184a  add     [bx+si],al                      
184c  add     al,cl                           
184e  add     ax,40h                          
1851  add     [bx+si],al                      
1853  add     [bx+si],al                      
1855  add     [bx+si],al                      
1857  add     [bx+si],al                      
1859  cli                                     
185a  or      [bx+si],al                      
185d  add     [bx+si],al                      
185f  add     [bx+si],al                      
1861  add     [bx+si],al                      
1863  add     [bx+si-64h],al                  
1866  or      al,40h                          
1868  add     [bx+si],al                      
186a  add     [bx+si],al                      
186c  add     [bx+si],al                      
186e  add     [bx+si],al                      
1870  push    ax                              
1871  ret                                     
1872  cmovo   ax,[bx+si]                      
1875  add     [bx+si],al                      
1877  add     [bx+si],al                      
1879  add     [bx+si],al                      
187b  add     [si],ah                         
187d  hlt                                     
187e  adc     al,[bx+si]                      
1881  add     [bx+si],al                      
1883  add     [bx+si],al                      
1885  add     [bx+si],al                      
1887  adc     byte ptr [bp+1698h],40h         
188c  add     [bx+si],al                      
188e  add     [bx+si],al                      
1890  add     [bx+si],al                      
1892  add     [bx+si],ah                      
1894  mov     sp,19BEh                        
1897  inc     ax                              
1898  add     [bx+si],al                      
189a  add     [bx+si],al                      
189c  add     [si],al                         
189e  mov     di,1BC9h                        
18a1  mov     ???,[si]                        
18a3  inc     ax                              
18a4  add     [bx+si],al                      
18a6  add     [bx+di-3313h],ah                
18aa  into                                    
18ab  sbb     ax,dx                           
18ad  ror     word ptr [bp+40h],cl            
18b0  and     al,dh                           
18b2  sahf                                    
18b3  mov     ch,70h                          
18b5  sub     bp,[bx+si-3A53h]                
18b9  popf                                    
18ba  imul    ax,[bx+si-30h],0FD5Dh           
18bf  and     ax,1AE5h                        
18c2  mov     cs,[bx+19h]                     
18c5  jmp     184Ah                           
18c7  inc     ax                              
18c8  jno     1860h                           
18ca  xlat                                    
18cb  xchg    ax,bp                           
18cc  inc     bx                              
18cd  push    cs                              
18ce  add     ax,298Dh                        
18d1  scasw                                   
18d2  sahf                                    
18d3  inc     ax                              
18d4  stc                                     
18d5  mov     di,44A0h                        
18d8  in      ax,dx                           
18d9  adc     word ptr [bp+si],818Fh          
18dd  cmp     byte ptr [bx+di-40C0h],3Ch      
18e2  aad     0A6h                            
18e4  iret                                    
18e5  dec     word ptr [bx+di+1Fh]            
18e8  js      18ACh                           
18ea  rol     word ptr [bx+si+6Fh],cl         
18ed  mov     al,8Ch                          
18f0  jmp     0E273h                          
18f3  inc     di                              
18f4  mov     dx,0A893h                       
18f7  inc     cx                              
18f8  mov     sp,6B85h                        
18fb  push    bp                              
18fc  daa                                     
18fd  cmp     [di+70F7h],cx                   
1901  loopne  197Fh                           
1903  inc     dx                              
1904  mov     sp,8EDDh                        
1907  fdivp   st(1)                           
1909  popf                                    
190a  sti                                     
190b  jmp     198Bh                           
190d  stosb                                   
190e  push    cx                              
190f  inc     bx                              
1910  mov     ax,[76E6h]                      
1913  jcxz    18E1h                           
1915  repne   sub     [bx],bp                 
1918  test    [bx+di+4426h],al                
191c  sub     [bx+si],dl                      
191e  pop     ss                              
191f  stosb                                   
1920  clc                                     
1921  scasb                                   
1922  adc     bl,ah                           
1924  lds     ax,sp                           
1926  cli                                     
1927  inc     sp                              
1928  jmp     18D1h                           
192a  aam     0F3h                            
192c  imul    bx                              
192e  loopz   197Ah                           
1930  jp      18C7h                           
1932  iret                                    
1933  inc     bp                              
1934  int 3                                   
1936  mov     word ptr [bx+di-59F2h],0A0AEh   
193c  sbb     bx,sp                           
193e  mov     [0D46h],ax                      
1941  pop     ss                              
1943  or      al,75h                          
1945  add     word ptr [bp+7675h],48C9h       
194b  dec     bp                              
194c  pop     ax                              
194d  inc     dx                              
194e  in      al,0A7h                         
1950  xchg    ax,bx                           
1951  cmp     [bp+di],di                      
1953  xor     ax,0B2B8h                       
1956  in      ax,dx                           
1957  push    bx                              
1958  dec     bp                              
1959  cmpsw                                   
195a  in      ax,5Dh                          
195c  cmp     ax,5DC5h                        
195f  cmp     cx,[bp+di-6D62h]                
1963  pop     dx                              
1964  call    far ptr  [di-5Ah]               
1967  lock                                    
1968  mov     ax,[0C020h]                     
196b  push    sp                              
196c  movsw                                   
196d  mov     [bx],???                        
196f  popa                                    
1970  sar     bp,1                            
1972  mov     bx,[bp+si-75h]                  
1975  fsub    dword ptr [di]                  
1977  pop     bp                              
1978  mov     cx,di                           
197a  ??? (FPU)                               
197d  xchg    ax,bp                           
197e  clc                                     
197f  rep     daa                             
1981  mov     di,0C8A2h                       
1984  pop     bp                              
1985  fld     qword ptr [bx+si+4C6Eh]         
1989  leave                                   
198a  wait                                    
198b  xchg    ax,di                           
198c  and     [bp+si+5202h],cl                
1990  pusha                                   
1991  les     sp,[di]                         
1993  jne     1962h                           
1995  int 3                                   
1996  int     0CCh                            
1998  int 3                                   
1999  int 3                                   
199a  int 3                                   
199b  int 3                                   
199c  int 3                                   
199d  int 3                                   
199e  sti                                     
199f  aas                                     
19a0  jno     19DFh                           
19a2  or      dl,bh                           
19a4  mov     [3D70h],ax                      
19a7  or      dl,bh                           
19a9  mov     [3FF8h],ax                      
19ac  pop     dx                              
19ad  cmp     bx,di                           
19b0  dec     di                              
19b1  lea     dx,[bx+126Eh]                   
19b5  xor     bp,3Fh                          
19b8  ret                                     
19b9  shr     word ptr [si],cl                
19bb  sbb     dx,sp                           
19be  pop     ax                              
19bf  pop     ss                              
19c0  mov     bh,0D1h                         
19c2  ???                                     
19c3  aas                                     
19c4  ror     byte ptr [bx],1                 
19c6  and     ax,[si+1B47h]                   
19ca  inc     di                              
19cb  lodsb                                   
19cc  lds     sp,[bx+3FEEh]                   
19d0  inc     ax                              
19d1  cmpsb                                   
19d2  mov     dh,69h                          
19d4  insb                                    
19d5  scasw                                   
19d6  add     ax,37BDh                        
19d9  xchg    ch,bl                           
19db  aas                                     
19dc  xor     di,[di]                         
19de  mov     sp,7A42h                        
19e1  in      ax,0D5h                         
19e3  xchg    ax,sp                           
19e4  mov     di,0E7D6h                       
19e7  aas                                     
19e8  ret     0FDFDh                          
19eb  into                                    
19ec  popa                                    
19ed  test    [bx+di],dl                      
19ef  ja      19BDh                           
19f1  stosw                                   
19f2  in      al,3Fh                          
19f4  das                                     
19f5  dec     sp                              
19f6  pop     bx                              
19f7  loopz   1A46h                           
19f9  les     di,[bp-6A6Ch]                   
19fd  out     0C9h,al                         
19ff  aas                                     
1a00  xchg    ax,dx                           
1a01  les     dx,[bp+di+3Bh]                  
1a04  jne     1A4Ah                           
1a06  int     14h                             
1a08  mov     si,0AF9Ah                       
1a0b  aas                                     
1a0c  fisub   word ptr [bx-46h]               
1a0f  xchg    ax,sp                           
1a10  cmp     [di-53h],ax                     
1a13  push    ds                              
1a14  mov     cl,0CFh                         
1a16  xchg    ax,sp                           
1a17  aas                                     
1a18  and     al,23h                          
1a1a  mov     dl,0BCh                         
1a1d  mov     dx,313Bh                        
1a20  popa                                    
1a21  mov     di,[bp+si+3Fh]                  
1a24  popa                                    
1a25  push    bp                              
1a26  pop     cx                              
1a27  sar     word ptr [bp-4Fh],53h           
1a2b  jl      1A3Fh                           
1a2d  mov     bx,3F5Fh                        
1a30  xlat                                    
1a31  out     dx,al                           
1a32  das                                     
1a33  lea     ax,[92BEh]                      
1a37  test    [di],dx                         
1a39  sti                                     
1a3a  inc     sp                              
1a3b  aas                                     
1a3c  and     al,3Fh                          
1a3e  movsw                                   
1a3f  jmp     0BF7Bh                          
1a42  daa                                     
1a43  jmp     3F2Ah:0A87Fh                    
1a48  jge     19F6h                           
1a4a  mov     ax,[0BCE4h]                     
1a4d  jl      1A96h                           
1a50  rcr     ch,1                            
1a52  push    bp                              
1a53  arpl    ds:[bp+di+6h],di                
1a57  int 3                                   
1a58  and     dx,[si+77h]                     
1a5b  cmp     di,-6Fh                         
1a5e  cmp     word ptr [di],0FA91h            
1a62  cmp     bl,[bx+di]                      
1a64  jp      1AC9h                           
1a66  and     ax,3143h                        
1a69  shr     byte ptr [si+213Ch],89h         
1a6e  sar     word ptr [bx+si],1              
1a70  add     byte ptr [bx-69h],0B8h          
1a74  add     ch,bh                           
1a76  xlat                                    
1a77  cmp     bx,sp                           
1a79  mov     [bx+si+8h],bl                   
1a7c  sbb     si,[bx+di-1C18h]                
1a80  xchg    ah,[bp+3B03h]                   
1a84  mov     byte ptr [si+4245h],7h          
1a89  mov     dh,99h                          
1a8b  jne     1AC4h                           
1a8d  fld     tword ptr [333Ah]               
1a91  jno     1AAFh                           
1a93  shl     byte ptr [bp+di],cl             
1a95  ??? (FPU)                               
1a97  out     dx,al                           
1a98  dec     cx                              
1a99  nop                                     
1a9a  pop     dx                              
1a9b  cmp     [bp-4179h],sp                   
1a9f  rcl     byte ptr [bx-26h],0A5h          
1aa3  and     byte ptr [bp-4A5Eh],32h         
1aa8  loop    1B12h                           
1aaa  mov     dl,11h                          
1aac  cmpsw                                   
1aad  push    dx                              
1aae  lahf                                    
1aaf  inc     sp                              
1ab0  pop     cx                              
1ab1  mov     bh,10h                          
1ab3  sub     al,25h                          
1ab5  dec     cx                              
1ab6  in      al,2Dh                          
1ab8  xor     al,4Fh                          
1abb  push    bx                              
1abc  scasb                                   
1abd  into                                    
1abe  imul    sp,[di],-71h                    
1ac1  pop     cx                              
1ac2  add     al,0A4h                         
1ac4  rcr     dh,0C2h                         
1ac7  jge     1AC4h                           
1ac9  call    3992h                           
1acc  sahf                                    
1acd  out     88h,ax                          
1acf  pop     dx                              
1ad0  push    di                              
1ad1  xchg    ax,cx                           
1ad2  cmp     al,0BFh                         
1ad4  push    ax                              
1ad5  and     word ptr [bp+si],18h            
1ad8  dec     si                              
1ad9  dec     bx                              
1ada  bound   di,bp                           
1add  or      word ptr [bx+6AFh],-6Ch         
1ae2  jge     1AF5h                           
1ae4  in      al,2Dh                          
1ae6  ficomp  word ptr [bx-2D32h]             
1aea  enter   0DD04h,0A6h                     
1aee  fmul    dword ptr [bp+si]               

; ----- sub_1af0 -----
1af0  push    bp                              
1af1  mov     bp,sp                           
1af3  sub     sp,6h                           
1af6  push    si                              
1af7  push    di                              
1af8  mov     di,[bp+6h]                      
1afb  mov     bx,17D8h                        
1afe  or      di,di                           
1b00  je      1B7Ch                           
1b02  jns     1B09h                           
1b04  mov     bx,1934h                        
1b07  neg     di                              
1b09  mov     word ptr [bp-6h],1B8Eh          
1b0e  cmp     word ptr [bp+4h],0h             
1b12  jne     1B34h                           
1b14  mov     word ptr [bp-6h],1B84h          
1b19  wait                                    
1b1a  fstcw   word ptr [bp-2h]                
1b1d  nop                                     
1b1e  wait                                    
1b1f  mov     ax,[bp-2h]                      
1b22  or      ax,38h                          
1b25  mov     [bp-4h],ax                      
1b28  wait                                    
1b29  fldcw   word ptr [bp-4h]                
1b2c  les     si,[bp+8h]                      
1b2f  wait                                    
1b30  fld     tword ptr es:[si+2h]            
1b34  push    di                              
1b35  pop     di                              
1b36  add     bx,54h                          
1b39  or      di,di                           
1b3b  je      1B60h                           
1b3d  mov     ax,di                           
1b3f  shr     di,1                            
1b41  shr     di,1                            
1b43  shr     di,1                            
1b45  push    di                              
1b46  and     ax,7h                           
1b49  je      1B35h                           
1b4b  push    bx                              
1b4c  shl     al,1                            
1b4e  shl     al,1                            
1b50  mov     ah,al                           
1b52  shl     al,1                            
1b54  add     al,ah                           
1b56  xor     ah,ah                           
1b58  add     bx,ax                           
1b5a  jmp     word ptr [bp-6h]                
1b5d  pop     bx                              
1b5e  jmp     1B35h                           
1b60  cmp     word ptr [bp+4h],0h             
1b64  jne     1B7Ch                           
1b66  wait                                    
1b67  fclex                                   
1b69  wait                                    
1b6a  fldcw   word ptr [bp-2h]                
1b6d  les     si,[bp+8h]                      
1b70  wait                                    
1b71  fstp    tword ptr es:[si+2h]            
1b75  mov     word ptr es:[si],0h             
1b7a  nop                                     
1b7b  wait                                    
1b7c  pop     di                              
1b7d  pop     si                              
1b7e  mov     sp,bp                           
1b80  pop     bp                              
1b81  ret     8h                              
1b84  wait                                    
1b85  fld     tword ptr cs:[bx+2h]            
1b89  wait                                    
1b8a  fmulp   st(1)                           
1b8c  jmp     1B5Dh                           
1b8e  push    word ptr cs:[bx+0Ah]            
1b92  push    word ptr cs:[bx+8h]             
1b96  push    word ptr cs:[bx+6h]             
1b9a  push    word ptr cs:[bx+4h]             
1b9e  mov     cx,cs:[bx+2h]                   
1ba2  mov     ax,cs:[bx]                      
1ba5  cmp     ax,8000h                        
1ba8  adc     cx,-1h                          
1bab  push    cx                              
1bac  push    ax                              
1bad  mov     ax,sp                           
1baf  push    word ptr [bp+0Ah]               
1bb2  push    word ptr [bp+8h]                
1bb5  push    ss                              
1bb6  push    ax                              
1bb7  call    1BC5h                           
1bba  add     sp,0Ch                          
1bbd  jmp     1B5Dh                           
1bbf  jmp     1D2Eh                           
1bc2  jmp     1D19h                           

; ----- sub_1bc5 -----
1bc5  push    bp                              
1bc6  mov     bp,sp                           
1bc8  sub     sp,12h                          
1bcb  push    si                              
1bcc  push    di                              
1bcd  mov     cx,9h                           
1bd0  mov     ax,ss                           
1bd2  mov     es,ax                           
1bd4  lea     di,[bp-12h]                     
1bd7  xor     ax,ax                           
1bd9  rep     stosw                           
1bdb  lds     si,[bp+8h]                      
1bde  les     di,[bp+4h]                      
1be1  mov     ax,[si+0Ah]                     
1be4  mov     bx,es:[di+0Ah]                  
1be8  mov     cx,ax                           
1bea  xor     cx,bx                           
1bec  and     cx,8000h                        
1bf0  mov     [bp-2h],cx                      
1bf3  mov     dx,7FFFh                        
1bf6  and     ax,dx                           
1bf8  cmp     ax,dx                           
1bfa  je      1BBFh                           
1bfc  and     bx,dx                           
1bfe  cmp     bx,dx                           
1c00  je      1BBFh                           
1c02  mov     dx,ax                           
1c04  add     dx,bx                           
1c06  cmp     dx,0BFFDh                       
1c0a  ja      1BBFh                           
1c0c  cmp     dx,3FBFh                        
1c10  jbe     1BC2h                           
1c12  or      ax,ax                           
1c14  jne     1C27h                           
1c16  inc     dx                              
1c17  mov     ax,[si]                         
1c19  or      ax,[si+2h]                      
1c1c  or      ax,[si+4h]                      
1c1f  or      ax,[si+6h]                      
1c22  or      ax,[si+8h]                      
1c25  je      1BC2h                           
1c27  or      bx,bx                           
1c29  jne     1C41h                           
1c2b  inc     dx                              
1c2c  mov     ax,es:[di]                      
1c2f  or      ax,es:[di+2h]                   
1c33  or      ax,es:[di+4h]                   
1c37  or      ax,es:[di+6h]                   
1c3b  or      ax,es:[di+8h]                   
1c3f  je      1BC2h                           
1c41  sub     dx,3FFEh                        
1c45  mov     [si+0Ah],dx                     
1c48  add     di,8h                           
1c4b  mov     cx,5h                           
1c4e  lea     bx,[bp-12h]                     
1c51  push    cx                              
1c52  push    si                              
1c53  push    di                              
1c54  mov     ax,es:[di]                      
1c57  mul     word ptr [si]                   
1c59  add     ss:[bx],ax                      
1c5c  adc     ss:[bx+2h],dx                   
1c60  adc     word ptr ss:[bx+4h],0h          
1c65  add     si,2h                           
1c68  sub     di,2h                           
1c6b  loop    1C54h                           
1c6d  pop     di                              
1c6e  pop     si                              
1c6f  pop     cx                              
1c70  add     bx,2h                           
1c73  add     si,2h                           
1c76  add     cx,-1h                          
1c79  jne     1C51h                           
1c7b  mov     si,[bp+8h]                      
1c7e  mov     dx,[bp-10h]                     
1c81  mov     cx,[bp-0Eh]                     
1c84  mov     bx,[bp-0Ch]                     
1c87  mov     ax,[bp-0Ah]                     
1c8a  mov     di,[bp-8h]                      
1c8d  cmp     word ptr [si+0Ah],0h            
1c91  jg      1CA7h                           
1c93  jmp     1CF4h                           
1c95  shl     word ptr [bp-12h],1             
1c98  rcl     dx,1                            
1c9a  rcl     cx,1                            
1c9c  rcl     bx,1                            
1c9e  rcl     ax,1                            
1ca0  rcl     di,1                            
1ca2  dec     word ptr [si+0Ah]               
1ca5  je      1CF4h                           
1ca7  or      di,di                           
1ca9  jns     1C95h                           
1cab  cmp     word ptr [bp-12h],8000h         
1cb0  jb      1CD1h                           
1cb2  ja      1CBAh                           
1cb4  test    dx,1h                           
1cb8  je      1CD1h                           
1cba  add     dx,1h                           
1cbd  adc     cx,0h                           
1cc0  adc     bx,0h                           
1cc3  adc     ax,0h                           
1cc6  adc     di,0h                           
1cc9  jae     1CD1h                           
1ccb  mov     di,8000h                        
1cce  inc     word ptr [si+0Ah]               
1cd1  cmp     word ptr [si+0Ah],7FFFh         
1cd6  jae     1D2Eh                           
1cd8  mov     [si+8h],di                      
1cdb  mov     [si+6h],ax                      
1cde  mov     [si+4h],bx                      
1ce1  mov     [si+2h],cx                      
1ce4  mov     [si],dx                         
1ce6  mov     ax,[bp-2h]                      
1ce9  or      [si+0Ah],ax                     
1cec  pop     di                              
1ced  pop     si                              
1cee  mov     sp,bp                           
1cf0  pop     bp                              
1cf1  ret     8h                              
1cf4  dec     word ptr [si+0Ah]               
1cf7  shr     di,1                            
1cf9  rcr     ax,1                            
1cfb  rcr     bx,1                            
1cfd  rcr     cx,1                            
1cff  rcr     dx,1                            
1d01  rcr     word ptr [bp-12h],1             
1d04  adc     word ptr [bp-4h],0h             
1d08  inc     word ptr [si+0Ah]               
1d0b  jne     1CF7h                           
1d0d  cmp     word ptr [bp-4h],0h             
1d11  je      1CABh                           
1d13  or      word ptr [bp-12h],1h            
1d17  jmp     1CABh                           
1d19  xor     ax,ax                           
1d1b  mov     [si+0Ah],ax                     
1d1e  mov     [si+8h],ax                      
1d21  mov     [si+6h],ax                      
1d24  mov     [si+4h],ax                      
1d27  mov     [si+2h],ax                      
1d2a  mov     [si],ax                         
1d2c  jmp     1CECh                           
1d2e  mov     ax,7FFFh                        
1d31  or      ax,[bp-2h]                      
1d34  mov     [si+0Ah],ax                     
1d37  xor     ax,ax                           
1d39  mov     [si+8h],ax                      
1d3c  mov     [si+6h],ax                      
1d3f  mov     [si+4h],ax                      
1d42  mov     [si+2h],ax                      
1d45  mov     [si],ax                         
1d47  jmp     1CECh                           
1d49  add     [bx+si],al                      

; ----- sub_1d4a -----
1d4a  push    bp                              
1d4b  mov     bp,sp                           
1d4d  sub     sp,0Ch                          
1d50  push    si                              
1d51  push    di                              
1d52  mov     ax,[bp+6h]                      
1d55  mov     [bp-0Ch],ax                     
1d58  les     si,[bp+8h]                      
1d5b  xor     ax,ax                           
1d5d  mov     di,ax                           
1d5f  mov     bx,ax                           
1d61  mov     cx,ax                           
1d63  mov     dx,ax                           
1d65  mov     dl,es:[si]                      
1d68  inc     si                              
1d69  jmp     1DA5h                           
1d6b  mov     [bp-2h],di                      
1d6e  mov     [bp-4h],ax                      
1d71  mov     [bp-6h],bx                      
1d74  mov     [bp-8h],cx                      
1d77  mov     [bp-0Ah],dx                     
1d7a  call    1DF8h                           
1d7d  call    1DF8h                           
1d80  add     dx,[bp-0Ah]                     
1d83  adc     cx,[bp-8h]                      
1d86  adc     bx,[bp-6h]                      
1d89  adc     ax,[bp-4h]                      
1d8c  adc     di,[bp-2h]                      
1d8f  call    1DF8h                           
1d92  add     dl,es:[si]                      
1d95  inc     si                              
1d96  adc     dh,0h                           
1d99  adc     cx,0h                           
1d9c  adc     bx,0h                           
1d9f  adc     ax,0h                           
1da2  adc     di,0h                           
1da5  dec     word ptr [bp-0Ch]               
1da8  jne     1D6Bh                           
1daa  mov     si,404Eh                        
1dad  jmp     1DBCh                           
1daf  mov     di,ax                           
1db1  mov     ax,bx                           
1db3  mov     bx,cx                           
1db5  mov     cx,dx                           
1db7  xor     dx,dx                           
1db9  sub     si,10h                          
1dbc  or      di,di                           
1dbe  je      1DAFh                           
1dc0  js      1DD1h                           
1dc2  shl     dx,1                            
1dc4  rcl     cx,1                            
1dc6  rcl     bx,1                            
1dc8  rcl     ax,1                            
1dca  rcl     di,1                            
1dcc  dec     si                              
1dcd  or      di,di                           
1dcf  jns     1DC2h                           
1dd1  push    si                              
1dd2  mov     si,[bp+4h]                      
1dd5  pop     ss:[si+0Ah]                     
1dd9  mov     ss:[si+8h],di                   
1ddd  mov     ss:[si+6h],ax                   
1de1  mov     ss:[si+4h],bx                   
1de5  mov     ss:[si+2h],cx                   
1de9  mov     ss:[si],dx                      
1dec  mov     ax,si                           
1dee  mov     dx,ss                           
1df0  pop     di                              
1df1  pop     si                              
1df2  mov     sp,bp                           
1df4  pop     bp                              
1df5  ret     8h                              

; ----- sub_1df8 -----
1df8  shl     dx,1                            
1dfa  rcl     cx,1                            
1dfc  rcl     bx,1                            
1dfe  rcl     ax,1                            
1e00  rcl     di,1                            
1e02  ret                                     
1e03  add     [bx+si],al                      
1e05  add     [bx+si],al                      
1e07  add     [bx+si],al                      
1e09  add     [bx+si],al                      
1e0b  add     [bx+si],al                      
1e0d  add     [bx+si],al                      
1e0f  add     [bx+si],al                      

; ----- sub_1e10 -----
1e10  mov     ax,0FFFFh                       ; segment seg2:0000
1e13  push    bp                              
1e14  mov     bp,sp                           
1e16  push    ds                              
1e17  mov     ds,ax                           
1e19  mov     ax,1h                           
1e1c  pop     ds                              
1e1d  leave                                   
1e1e  retf    0Ah                             
1e21  add     [bx+si],al                      

; ===== WEP =====
1e22  mov     ax,1E11h                        ; segment seg2:0000
1e25  push    bp                              
1e26  mov     bp,sp                           
1e28  push    ds                              
1e29  mov     ds,ax                           
1e2b  mov     ax,1h                           
1e2e  pop     ds                              
1e2f  leave                                   
1e30  retf    2h                              
1e33  add     [bx+si],al                      

; ===== ACQUIRE_REPORTID =====
1e34  mov     ax,1E23h                        ; segment seg2:0000
1e37  push    bp                              
1e38  mov     bp,sp                           
1e3a  push    ds                              
1e3b  mov     ds,ax                           
1e3d  push    0h                              
1e3f  push    0FFFFh                          ; segment seg1:0000
1e42  push    22A0h                           
1e45  call far M007.UIF_MESSAGE               ; "Acquire - V02.05 01-May-96"
1e4a  pop     ds                              
1e4b  leave                                   
1e4c  retf                                    
1e4d  add     [bx+si],al                      

; ===== INIT_ACQUIRE_CONTROLLER_DATA =====
1e4e  mov     ax,1E35h                        ; segment seg2:0000
1e51  push    bp                              
1e52  mov     bp,sp                           
1e54  push    ds                              
1e55  mov     ds,ax                           
1e57  push    1BDh                            
1e5a  push    word ptr [9F8h]                 
1e5e  push    word ptr [9F6h]                 ; [ds] f32 here = 100
1e62  call far M007.M007_PUTHIGH              ; AP_CCD_ILLUMINATION
1e67  push    1BDh                            
1e6a  push    word ptr [9FCh]                 
1e6e  push    word ptr [9FAh]                 ; [ds] f32 here = 50
1e72  call far M007.M007_PUTVALUE             ; AP_CCD_ILLUMINATION
1e77  push    0B5h                            
1e7a  push    word ptr [0A00h]                
1e7e  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1e82  call far M007.M007_PUTVALUE             ; AP_K1
1e87  push    0B9h                            
1e8a  push    word ptr [0A00h]                
1e8e  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1e92  call far M007.M007_PUTVALUE             ; AP_FRAME_AVERAGE_COUNT
1e97  push    0BBh                            
1e9a  push    word ptr [0A04h]                ; [ds] f32 here = -1.076101E+08
1e9e  push    word ptr [0A02h]                ; [ds] f32 here = 2
1ea2  call far M007.M007_PUTVALUE             ; AP_LINE_INT_COUNT
1ea7  push    0E3h                            
1eaa  push    word ptr [0A04h]                ; [ds] f32 here = -1.076101E+08
1eae  push    word ptr [0A02h]                ; [ds] f32 here = 2
1eb2  call far M007.M007_PUTVALUE             ; AP_LINE_AVERAGE_COUNT
1eb7  push    0BAh                            
1eba  push    word ptr [0A00h]                
1ebe  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1ec2  call far M007.M007_PUTVALUE             ; AP_FRAME_INT_COUNT
1ec7  push    0BCh                            
1eca  push    word ptr [0A00h]                
1ece  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1ed2  call far M007.M007_PUTVALUE             ; AP_GAMMA
1ed7  push    0E4h                            
1eda  push    word ptr [0A00h]                
1ede  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1ee2  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
1ee7  push    5Dh                             
1ee9  push    2h                              
1eeb  call far M007.M007_PUTSTATE             ; DP_NOISE_REDUCTION = 2
1ef0  push    76h                             
1ef2  push    2h                              
1ef4  call far M007.M007_PUTSTATE             ; DP_FREEZE_ON = 2
1ef9  push    0B9h                            
1efc  push    word ptr [0A00h]                
1f00  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1f04  call far M007.M007_PUTLOW               ; AP_FRAME_AVERAGE_COUNT
1f09  push    0E3h                            
1f0c  push    word ptr [0A04h]                ; [ds] f32 here = -1.076101E+08
1f10  push    word ptr [0A02h]                ; [ds] f32 here = 2
1f14  call far M007.M007_PUTLOW               ; AP_LINE_AVERAGE_COUNT
1f19  push    0BBh                            
1f1c  push    word ptr [0A04h]                ; [ds] f32 here = -1.076101E+08
1f20  push    word ptr [0A02h]                ; [ds] f32 here = 2
1f24  call far M007.M007_PUTLOW               ; AP_LINE_INT_COUNT
1f29  push    0BAh                            
1f2c  push    word ptr [0A00h]                
1f30  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1f34  call far M007.M007_PUTLOW               ; AP_FRAME_INT_COUNT
1f39  push    0E4h                            
1f3c  push    word ptr [0A00h]                
1f40  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1f44  call far M007.M007_PUTLOW               ; AP_NR_COEFF
1f49  push    0BCh                            
1f4c  push    word ptr [0A08h]                
1f50  push    word ptr [0A06h]                ; [ds] f32 here = 0.2
1f54  call far M007.M007_PUTLOW               ; AP_GAMMA
1f59  push    0C4h                            
1f5c  push    word ptr [0A0Ch]                
1f60  push    word ptr [0A0Ah]                ; [ds] f32 here = -250
1f64  call far M007.M007_PUTLOW               ; AP_COLLECTOR_BIAS
1f69  push    0BEh                            
1f6c  push    word ptr [0A10h]                
1f70  push    word ptr [0A0Eh]                ; [ds] f32 here = -100
1f74  call far M007.M007_PUTLOW               ; AP_OFFSET
1f79  push    0D8h                            
1f7c  push    word ptr [0A10h]                
1f80  push    word ptr [0A0Eh]                ; [ds] f32 here = -100
1f84  call far M007.M007_PUTLOW               ; AP_IMPLIED_OFFSET
1f89  push    0B5h                            
1f8c  push    word ptr [0A00h]                
1f90  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1f94  call far M007.M007_PUTHIGH              ; AP_K1
1f99  push    0B6h                            
1f9c  push    word ptr [0A00h]                
1fa0  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1fa4  call far M007.M007_PUTHIGH              ; AP_K2
1fa9  push    0B7h                            
1fac  push    word ptr [0A00h]                
1fb0  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1fb4  call far M007.M007_PUTHIGH              ; AP_ALPHA
1fb9  push    0B8h                            
1fbc  push    word ptr [0A00h]                
1fc0  push    word ptr [9FEh]                 ; [ds] f32 here = 1
1fc4  call far M007.M007_PUTHIGH              ; AP_BETA
1fc9  push    0B9h                            
1fcc  push    word ptr [0A14h]                
1fd0  push    word ptr [0A12h]                ; [ds] f32 here = 256
1fd4  call far M007.M007_PUTHIGH              ; AP_FRAME_AVERAGE_COUNT
1fd9  push    0E3h                            
1fdc  push    word ptr [0A14h]                
1fe0  push    word ptr [0A12h]                ; [ds] f32 here = 256
1fe4  call far M007.M007_PUTHIGH              ; AP_LINE_AVERAGE_COUNT
1fe9  push    0BBh                            
1fec  push    word ptr [0A14h]                
1ff0  push    word ptr [0A12h]                ; [ds] f32 here = 256
1ff4  call far M007.M007_PUTHIGH              ; AP_LINE_INT_COUNT
1ff9  push    0BAh                            
1ffc  push    word ptr [0A14h]                
2000  push    word ptr [0A12h]                ; [ds] f32 here = 256
2004  call far M007.M007_PUTHIGH              ; AP_FRAME_INT_COUNT
2009  push    0E4h                            
200c  push    word ptr [0A14h]                
2010  push    word ptr [0A12h]                ; [ds] f32 here = 256
2014  call far M007.M007_PUTHIGH              ; AP_NR_COEFF
2019  push    0BCh                            
201c  push    word ptr [0A18h]                
2020  push    word ptr [0A16h]                ; [ds] f32 here = 5
2024  call far M007.M007_PUTHIGH              ; AP_GAMMA
2029  push    0BDh                            
202c  push    word ptr [9F8h]                 
2030  push    word ptr [9F6h]                 ; [ds] f32 here = 100
2034  call far M007.M007_PUTHIGH              ; AP_GAIN
2039  push    0D7h                            
203c  push    word ptr [9F8h]                 
2040  push    word ptr [9F6h]                 ; [ds] f32 here = 100
2044  call far M007.M007_PUTHIGH              ; AP_IMPLIED_GAIN
2049  push    0BEh                            
204c  push    word ptr [9F8h]                 
2050  push    word ptr [9F6h]                 ; [ds] f32 here = 100
2054  call far M007.M007_PUTHIGH              ; AP_OFFSET
2059  push    0D8h                            
205c  push    word ptr [9F8h]                 
2060  push    word ptr [9F6h]                 ; [ds] f32 here = 100
2064  call far M007.M007_PUTHIGH              ; AP_IMPLIED_OFFSET
2069  push    1Eh                             
206b  push    word ptr [9F8h]                 
206f  push    word ptr [9F6h]                 ; [ds] f32 here = 100
2073  call far M007.M007_PUTHIGH              ; AP_BRIGHTNESS
2078  push    0BFh                            
207b  push    word ptr [9F8h]                 
207f  push    word ptr [9F6h]                 ; [ds] f32 here = 100
2083  call far M007.M007_PUTHIGH              ; AP_CONTRAST
2088  push    0C4h                            
208b  push    word ptr [0A1Ch]                ; [ds] f32 here = -1.076179E+08
208f  push    word ptr [0A1Ah]                ; [ds] f32 here = 400
2093  call far M007.M007_PUTHIGH              ; AP_COLLECTOR_BIAS
2098  push    0C1h                            
209b  push    word ptr [9F8h]                 
209f  push    word ptr [9F6h]                 ; [ds] f32 here = 100
20a3  call far M007.M007_PUTHIGH              ; AP_AUTO_CONTRAST
20a8  push    0C0h                            
20ab  push    word ptr [9F8h]                 
20af  push    word ptr [9F6h]                 ; [ds] f32 here = 100
20b3  call far M007.M007_PUTHIGH              ; AP_AUTO_BRIGHT
20b8  push    12Ch                            
20bb  push    word ptr [9F8h]                 
20bf  push    word ptr [9F6h]                 ; [ds] f32 here = 100
20c3  call far M007.M007_PUTHIGH              ; AP_ABC_BRIGHT
20c8  push    12Dh                            
20cb  push    word ptr [9F8h]                 
20cf  push    word ptr [9F6h]                 ; [ds] f32 here = 100
20d3  call far M007.M007_PUTHIGH              ; AP_ABC_CONTR
20d8  push    0F7h                            
20db  push    word ptr [9F8h]                 
20df  push    word ptr [9F6h]                 ; [ds] f32 here = 100
20e3  call far M007.M007_PUTHIGH              ; AP_DIFF
20e8  push    128h                            
20eb  push    word ptr [0A20h]                
20ef  push    word ptr [0A1Eh]                ; [ds] f32 here = 0.05
20f3  call far M007.M007_PUTLOW               ; AP_SPOT_DATA_RATE
20f8  push    128h                            
20fb  push    word ptr [0A24h]                
20ff  push    word ptr [0A22h]                ; [ds] f32 here = 1000
2103  call far M007.M007_PUTHIGH              ; AP_SPOT_DATA_RATE
2108  push    128h                            
210b  push    word ptr [0A00h]                
210f  push    word ptr [9FEh]                 ; [ds] f32 here = 1
2113  call far M007.M007_PUTVALUE             ; AP_SPOT_DATA_RATE
2118  push    129h                            
211b  push    word ptr [0A28h]                
211f  push    word ptr [0A26h]                ; [ds] f32 here = 10
2123  call far M007.M007_PUTLOW               ; AP_SPOT_DATA_DURATION
2128  push    129h                            
212b  push    word ptr [0A2Ch]                
212f  push    word ptr [0A2Ah]                ; [ds] f32 here = 500000
2133  call far M007.M007_PUTHIGH              ; AP_SPOT_DATA_DURATION
2138  push    129h                            
213b  push    word ptr [0A24h]                
213f  push    word ptr [0A22h]                ; [ds] f32 here = 1000
2143  call far M007.M007_PUTVALUE             ; AP_SPOT_DATA_DURATION
2148  push    12Ah                            
214b  push    word ptr [9F8h]                 
214f  push    word ptr [9F6h]                 ; [ds] f32 here = 100
2153  call far M007.M007_PUTHIGH              ; AP_SPOT_DATA_TO_DO
2158  mov     byte ptr [3BAh],1h              
215d  call far ACQUIRE_REPORTID               
2162  pop     ds                              
2163  leave                                   
2164  retf                                    
2165  add     [bx+si],al                      

; ===== INITIALISE_ACQUIRE_CONTROLLER =====
2166  mov     ax,1E4Fh                        ; segment seg2:0000
2169  push    bp                              
216a  mov     bp,sp                           
216c  push    ds                              
216d  mov     ds,ax                           
216f  push    83h                             
2172  call far M007.M007_GETSTATE             ; DP_GSP
2177  dec     ax                              
2178  je      217Dh                           
217a  jmp     2207h                           
217d  push    2186h                           ; segment seg1:0000
2180  push    22BCh                           
2183  call far sub_6076                       
2188  add     sp,4h                           
218b  or      ax,ax                           
218d  jge     21A4h                           
218f  push    1C2h                            
2192  push    0h                              
2194  push    0h                              
2196  push    2000h                           
2199  call far M007.UIF_LOG                   
219e  mov     ax,1C2h                         
21a1  pop     ds                              
21a2  leave                                   
21a3  retf                                    
21a4  call far sub_60e4                       
21a9  or      dx,ax                           
21ab  je      21C2h                           
21ad  push    1C3h                            
21b0  push    0h                              
21b2  push    0h                              
21b4  push    2000h                           
21b7  call far M007.UIF_LOG                   
21bc  mov     ax,1C3h                         
21bf  pop     ds                              
21c0  leave                                   
21c1  retf                                    
21c2  push    21CBh                           ; segment seg1:0000
21c5  push    22C6h                           
21c8  call far sub_5b3a                       
21cd  add     sp,4h                           
21d0  or      ax,ax                           
21d2  jge     21E9h                           
21d4  push    1A3h                            
21d7  push    0h                              
21d9  push    0h                              
21db  push    2000h                           
21de  call far M007.UIF_LOG                   
21e3  mov     ax,1A3h                         
21e6  pop     ds                              
21e7  leave                                   
21e8  retf                                    
21e9  call far sub_5ba6                       
21ee  or      dx,ax                           
21f0  je      2207h                           
21f2  push    1A8h                            
21f5  push    0h                              
21f7  push    0h                              
21f9  push    2000h                           
21fc  call far M007.UIF_LOG                   
2201  mov     ax,1A8h                         
2204  pop     ds                              
2205  leave                                   
2206  retf                                    
2207  call far sub_4d64                       
220c  push    1h                              
220e  call far SWITCHBSD_AUTO                 
2213  xor     ax,ax                           
2215  pop     ds                              
2216  leave                                   
2217  retf                                    

; ===== ACQUIRE_CONTROLLER_SHUTDOWN =====
2218  mov     ax,2167h                        ; segment seg2:0000
221b  push    bp                              
221c  mov     bp,sp                           
221e  push    ds                              
221f  mov     ds,ax                           
2221  push    0E1h                            
2224  call far M007.M007_GETSTATE             ; DP_SPOT_DATA_MODE
2229  or      ax,ax                           
222b  je      2232h                           
222d  call far DOCOMMANDFREE_SPOT_BUFFER      
2232  xor     ax,ax                           
2234  pop     ds                              
2235  leave                                   
2236  retf                                    
2237  add     [bx+si],al                      

; ===== ACQUIRE_TIMER_TICK =====
2238  mov     ax,2219h                        ; segment seg2:0000
223b  push    bp                              
223c  mov     bp,sp                           
223e  push    ds                              
223f  mov     ds,ax                           
2241  call far sub_4abe                       
2246  pop     ds                              
2247  leave                                   
2248  retf    2h                              
224b  add     [bx+si],al                      

; ===== TEST_700 =====
224c  mov     ax,2239h                        ; segment seg2:0000
224f  enter   2h,0h                           
2253  push    ds                              
2254  mov     ds,ax                           
2256  mov     ax,[0A2Eh]                      
2259  mov     bx,[bp+6h]                      
225c  mov     dx,[0A30h]                      
2260  mov     ss:[bx],ax                      
2263  mov     ss:[bx+2h],dx                   
2267  mov     ax,bx                           
2269  mov     dx,ss                           
226b  pop     ds                              
226c  leave                                   
226d  retf    8h                              

; ===== ACQUIRE_CONTROLLER_SUSPEND =====
2270  mov     ax,224Dh                        ; segment seg2:0000
2273  enter   4h,0h                           
2277  push    ds                              
2278  mov     ds,ax                           
227a  call far sub_60c0                       
227f  call far sub_5b84                       
2284  pop     ds                              
2285  leave                                   
2286  retf                                    
2287  add     [bx+si],al                      

; ===== ACQUIRE_CONTROLLER_REMOVE =====
2288  mov     ax,2271h                        ; segment seg2:0000
228b  enter   2h,0h                           
228f  push    ds                              
2290  mov     ds,ax                           
2292  call far sub_609e                       
2297  call far sub_5b62                       
229c  pop     ds                              
229d  leave                                   
229e  retf                                    
229f  add     [bx+di+63h],al                  
22a2  jno     2319h                           
22a4  imul    si,[bp+si+65h],2D20h            
22a9  and     [bp+30h],dl                     
22ac  xor     ch,[3530h]                      
22b0  and     [bx+si],dh                      
22b2  xor     [di],bp                         
22b4  dec     bp                              
22b5  popa                                    
22b6  jns     22E5h                           
22b8  cmp     [0h],si                         
22bc  inc     di                              
22bd  xor     [bx+si],si                      
22bf  xor     [bx+si],dh                      
22c1  push    dx                              
22c3  dec     sp                              
22c4  dec     bp                              
22c5  add     [bx+37h],al                     
22c8  xor     [bx+si],dh                      
22ca  push    dx                              
22cc  dec     sp                              
22cd  dec     bp                              
22ce  add     [bx+si],al                      

; ===== SWITCHINPUT_LUT_MODE =====
22d0  mov     ax,2289h                        ; segment seg2:0000
22d3  push    bp                              
22d4  mov     bp,sp                           
22d6  push    ds                              
22d7  mov     ds,ax                           
22d9  push    113h                            
22dc  call far M007.M007_GETSTATE             ; DP_INPUT_LUT_MODE
22e1  cmp     ax,[bp+6h]                      
22e4  je      233Ch                           
22e6  mov     ax,[bp+6h]                      
22e9  jmp     2327h                           
22eb  push    144h                            
22ee  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
22f3  cmp     ax,2h                           
22f6  je      2331h                           
22f8  call far DOCOMMANDLUT_TRANSPARENT       
22fd  jmp     2331h                           
22ff  push    144h                            
2302  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2307  cmp     ax,2h                           
230a  je      2331h                           
230c  call far DOCOMMANDLUT_GAMMA             
2311  jmp     2331h                           
2313  push    144h                            
2316  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
231b  cmp     ax,2h                           
231e  je      2331h                           
2320  call far DOCOMMANDLUT_INVERT            
2325  jmp     2331h                           
2327  or      ax,ax                           
2329  je      22EBh                           
232b  dec     ax                              
232c  je      22FFh                           
232e  dec     ax                              
232f  je      2313h                           
2331  push    113h                            
2334  push    word ptr [bp+6h]                
2337  call far M007.M007_PUTSTATE             ; DP_INPUT_LUT_MODE
233c  pop     ds                              
233d  leave                                   
233e  retf    2h                              
2341  add     [bx+si],al                      

; ===== DEFINE_LUT =====
2342  mov     ax,22D1h                        ; segment seg2:0000
2345  enter   4h,0h                           
2349  push    ds                              
234a  mov     ds,ax                           
234c  push    68h                             
234e  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
2353  mov     [bp-2h],al                      
2356  cmp     al,8h                           
2358  jl      2369h                           
235a  cmp     al,0Dh                          
235c  jg      2369h                           
235e  push    word ptr [bp+8h]                
2361  push    word ptr [bp+6h]                
2364  push    word ptr [bp+0Ah]               
2367  jmp     23BDh                           
2369  push    0A3h                            
236c  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
2371  dec     ax                              
2372  jne     23ADh                           
2374  push    23h                             
2376  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
237b  dec     ax                              
237c  jne     2384h                           
237e  mov     byte ptr [bp-4h],7h             
2382  jmp     2388h                           
2384  mov     byte ptr [bp-4h],3h             
2388  mov     byte ptr [bp-2h],0h             
238c  jmp     2391h                           
238e  inc     byte ptr [bp-2h]                
2391  mov     al,[bp-2h]                      
2394  cmp     [bp-4h],al                      
2397  jl      23C6h                           
2399  push    word ptr [bp+8h]                
239c  push    word ptr [bp+6h]                
239f  push    word ptr [bp+0Ah]               
23a2  push    ax                              
23a3  call far sub_5f8a                       
23a8  add     sp,8h                           
23ab  jmp     238Eh                           
23ad  push    word ptr [bp+8h]                
23b0  push    word ptr [bp+6h]                
23b3  push    word ptr [bp+0Ah]               
23b6  push    64h                             
23b8  call far M007.M007_GETSTATE             ; DP_ZONE
23bd  push    ax                              
23be  call far sub_5f8a                       
23c3  add     sp,8h                           
23c6  pop     ds                              
23c7  leave                                   
23c8  retf    6h                              
23cb  add     [bx+si],al                      

; ===== DEFINE_WIN_ELEMENT =====
23cc  mov     ax,2343h                        ; segment seg2:0000
23cf  push    bp                              
23d0  mov     bp,sp                           
23d2  push    ds                              
23d3  mov     ds,ax                           
23d5  mov     al,[bp+8h]                      
23d8  push    ax                              
23d9  mov     al,[bp+6h]                      
23dc  push    ax                              
23dd  les     bx,[bp+0Ah]                     
23e0  push    word ptr es:[bx+6h]             
23e4  push    word ptr es:[bx+4h]             
23e8  push    word ptr es:[bx+2h]             
23ec  push    word ptr es:[bx]                
23ef  call far sub_5dba                       
23f4  add     sp,0Ch                          
23f7  pop     ds                              
23f8  leave                                   
23f9  retf    8h                              

; ===== SWITCH4QBSD_Q1 =====
23fc  mov     ax,23CDh                        ; segment seg2:0000
23ff  push    bp                              
2400  mov     bp,sp                           
2402  push    ds                              
2403  mov     ds,ax                           
2405  push    0CEh                            
2408  call far M007.M007_GETSTATE             ; DP_BSD_TYPE
240d  cmp     ax,2h                           
2410  jne     2418h                           
2412  cmp     word ptr [bp+6h],0h             
2416  je      2430h                           
2418  push    55h                             
241a  push    word ptr [bp+6h]                
241d  call far M007.M007_PUTSTATE             ; DP_4QBSD_Q1
2422  mov     al,[bp+6h]                      
2425  push    ax                              
2426  push    4h                              
2428  call far sub_5d3e                       
242d  add     sp,4h                           
2430  pop     ds                              
2431  leave                                   
2432  retf    2h                              
2435  add     [bx+si],al                      

; ===== SWITCH4QBSD_Q2 =====
2436  mov     ax,23FDh                        ; segment seg2:0000
2439  push    bp                              
243a  mov     bp,sp                           
243c  push    ds                              
243d  mov     ds,ax                           
243f  push    0CEh                            
2442  call far M007.M007_GETSTATE             ; DP_BSD_TYPE
2447  cmp     ax,2h                           
244a  jne     2451h                           
244c  mov     word ptr [bp+6h],1h             
2451  push    56h                             
2453  push    word ptr [bp+6h]                
2456  call far M007.M007_PUTSTATE             ; DP_4QBSD_Q2
245b  mov     al,[bp+6h]                      
245e  push    ax                              
245f  push    5h                              
2461  call far sub_5d3e                       
2466  add     sp,4h                           
2469  pop     ds                              
246a  leave                                   
246b  retf    2h                              

; ===== SWITCH4QBSD_Q3 =====
246e  mov     ax,2437h                        ; segment seg2:0000
2471  push    bp                              
2472  mov     bp,sp                           
2474  push    ds                              
2475  mov     ds,ax                           
2477  push    57h                             
2479  push    word ptr [bp+6h]                
247c  call far M007.M007_PUTSTATE             ; DP_4QBSD_Q3
2481  mov     al,[bp+6h]                      
2484  push    ax                              
2485  push    6h                              
2487  call far sub_5d3e                       
248c  add     sp,4h                           
248f  pop     ds                              
2490  leave                                   
2491  retf    2h                              

; ===== SWITCH4QBSD_Q4 =====
2494  mov     ax,246Fh                        ; segment seg2:0000
2497  push    bp                              
2498  mov     bp,sp                           
249a  push    ds                              
249b  mov     ds,ax                           
249d  push    58h                             
249f  push    word ptr [bp+6h]                
24a2  call far M007.M007_PUTSTATE             ; DP_4QBSD_Q4
24a7  mov     al,[bp+6h]                      
24aa  push    ax                              
24ab  push    7h                              
24ad  call far sub_5d3e                       
24b2  add     sp,4h                           
24b5  pop     ds                              
24b6  leave                                   
24b7  retf    2h                              

; ===== SWITCH4QBSD_VISIBLE =====
24ba  mov     ax,2495h                        ; segment seg2:0000
24bd  push    bp                              
24be  mov     bp,sp                           
24c0  push    ds                              
24c1  mov     ds,ax                           
24c3  push    59h                             
24c5  push    word ptr [bp+6h]                
24c8  call far M007.M007_PUTSTATE             ; DP_4QBSD_VISIBLE
24cd  mov     al,[bp+6h]                      
24d0  push    ax                              
24d1  call far sub_5d64                       
24d6  pop     bx                              
24d7  pop     ds                              
24d8  leave                                   
24d9  retf    2h                              

; ===== SWITCH4QBSD_GAIN =====
24dc  mov     ax,24BBh                        ; segment seg2:0000
24df  push    bp                              
24e0  mov     bp,sp                           
24e2  push    ds                              
24e3  mov     ds,ax                           
24e5  push    5Ah                             
24e7  push    word ptr [bp+6h]                
24ea  call far M007.M007_PUTSTATE             ; DP_4QBSD_GAIN
24ef  mov     al,[bp+6h]                      
24f2  push    ax                              
24f3  call far sub_5d86                       
24f8  pop     bx                              
24f9  pop     ds                              
24fa  leave                                   
24fb  retf    2h                              

; ===== SWITCH4QBSD =====
24fe  mov     ax,24DDh                        ; segment seg2:0000
2501  push    bp                              
2502  mov     bp,sp                           
2504  push    ds                              
2505  mov     ds,ax                           
2507  push    5Bh                             
2509  push    word ptr [bp+6h]                
250c  call far M007.M007_PUTSTATE             ; DP_4QBSD
2511  pop     ds                              
2512  leave                                   
2513  retf    2h                              

; ===== DOCOMMANDCOMPO =====
2516  mov     ax,24FFh                        ; segment seg2:0000
2519  push    bp                              
251a  mov     bp,sp                           
251c  push    ds                              
251d  mov     ds,ax                           
251f  push    0CEh                            
2522  call far M007.M007_GETSTATE             ; DP_BSD_TYPE
2527  or      ax,ax                           
2529  je      253Ch                           
252b  dec     ax                              
252c  je      255Bh                           
252e  dec     ax                              
252f  je      253Ch                           
2531  dec     ax                              
2532  jl      2574h                           
2534  jo      2574h                           
2536  dec     ax                              
2537  jle     255Bh                           
2539  pop     ds                              
253a  leave                                   
253b  retf                                    
253c  push    1h                              
253e  call far SWITCH4QBSD_Q1                 
2543  push    1h                              
2545  call far SWITCH4QBSD_Q2                 
254a  push    0h                              
254c  call far SWITCH4QBSD_Q3                 
2551  push    0h                              
2553  call far SWITCH4QBSD_Q4                 
2558  pop     ds                              
2559  leave                                   
255a  retf                                    
255b  push    1h                              
255d  call far SWITCH4QBSD_Q1                 
2562  push    1h                              
2564  call far SWITCH4QBSD_Q2                 
2569  push    1h                              
256b  call far SWITCH4QBSD_Q3                 
2570  push    1h                              
2572  jmp     2553h                           
2574  pop     ds                              
2575  leave                                   
2576  retf                                    
2577  add     [bx+si],al                      

; ===== DOCOMMANDTOPO =====
2578  mov     ax,2517h                        ; segment seg2:0000
257b  push    bp                              
257c  mov     bp,sp                           
257e  push    ds                              
257f  mov     ds,ax                           
2581  push    0CEh                            
2584  call far M007.M007_GETSTATE             ; DP_BSD_TYPE
2589  or      ax,ax                           
258b  je      259Bh                           
258d  dec     ax                              
258e  je      259Bh                           
2590  dec     ax                              
2591  je      259Bh                           
2593  dec     ax                              
2594  jl      25C3h                           
2596  jo      25C3h                           
2598  dec     ax                              
2599  jg      25C3h                           
259b  mov     al,[3A6h]                       
259e  cbw                                     
259f  push    ax                              
25a0  call far SWITCH4QBSD_Q1                 
25a5  mov     al,[3A7h]                       
25a8  cbw                                     
25a9  push    ax                              
25aa  call far SWITCH4QBSD_Q2                 
25af  mov     al,[3A8h]                       
25b2  cbw                                     
25b3  push    ax                              
25b4  call far SWITCH4QBSD_Q3                 
25b9  mov     al,[3A9h]                       
25bc  cbw                                     
25bd  push    ax                              
25be  call far SWITCH4QBSD_Q4                 
25c3  pop     ds                              
25c4  leave                                   
25c5  retf                                    

; ===== DOCOMMANDBSD_IN =====
25c6  mov     ax,2579h                        ; segment seg2:0000
25c9  push    bp                              
25ca  mov     bp,sp                           
25cc  push    ds                              
25cd  mov     ds,ax                           
25cf  pop     ds                              
25d0  leave                                   
25d1  retf                                    

; ===== DOCOMMANDBSD_OUT =====
25d2  mov     ax,25C7h                        ; segment seg2:0000
25d5  push    bp                              
25d6  mov     bp,sp                           
25d8  push    ds                              
25d9  mov     ds,ax                           
25db  pop     ds                              
25dc  leave                                   
25dd  retf                                    

; ===== SWITCHBSD_TYPE =====
25de  mov     ax,25D3h                        ; segment seg2:0000
25e1  enter   2h,0h                           
25e5  push    ds                              
25e6  mov     ds,ax                           
25e8  mov     ax,[bp+6h]                      
25eb  or      ax,ax                           
25ed  jl      2627h                           
25ef  jo      2627h                           
25f1  dec     ax                              
25f2  jle     25FDh                           
25f4  dec     ax                              
25f5  jl      2627h                           
25f7  dec     ax                              
25f8  dec     ax                              
25f9  jle     2604h                           
25fb  jmp     2627h                           
25fd  mov     word ptr [bp-2h],0h             
2602  jmp     2609h                           
2604  mov     word ptr [bp-2h],1h             
2609  push    0CEh                            
260c  push    word ptr [bp+6h]                
260f  call far M007.M007_PUTSTATE             ; DP_BSD_TYPE
2614  push    83h                             
2617  call far M007.M007_GETSTATE             ; DP_GSP
261c  dec     ax                              
261d  jne     2627h                           
261f  push    word ptr [bp-2h]                
2622  call far TIGASEM.GSPSET4QBSDTYPE        
2627  pop     ds                              
2628  leave                                   
2629  retf    2h                              

; ===== SWITCHSCM =====
262c  mov     ax,25DFh                        ; segment seg2:0000
262f  push    bp                              
2630  mov     bp,sp                           
2632  push    ds                              
2633  mov     ds,ax                           
2635  push    5Ch                             
2637  push    word ptr [bp+6h]                
263a  call far M007.M007_PUTSTATE             ; DP_SCM
263f  pop     ds                              
2640  leave                                   
2641  retf    2h                              

; ----- sub_2644 -----
2644  mov     ax,262Dh                        ; segment seg2:0000
2647  enter   4h,0h                           
264b  push    si                              
264c  push    ds                              
264d  mov     ds,ax                           
264f  push    77h                             
2651  call far M007.M007_GETSTATE             ; DP_AUTO_FUNCTION
2656  cmp     ax,6h                           
2659  je      2665h                           
265b  cmp     ax,5h                           
265e  je      2665h                           
2660  cmp     ax,0Ah                          
2663  jne     2675h                           
2665  push    77h                             
2667  call far sub_612a                       
266c  push    ax                              
266d  call far M007.M007_PUTSTATE             
2672  jmp     271Fh                           
2675  or      ax,ax                           
2677  jne     2680h                           
2679  cmp     word ptr [6A0h],1h              
267e  je      2683h                           
2680  jmp     271Fh                           
2683  call far sub_612a                       
2688  mov     word ptr [bp-2h],0h             
268d  jmp     26EEh                           
268f  mov     al,[bx+150h]                    
2693  cbw                                     
2694  mov     si,ax                           
2696  shl     si,5h                           
2699  cmp     word ptr [si+168h],2h           
269e  jne     26BFh                           
26a0  push    77h                             
26a2  push    5h                              
26a4  call far M007.M007_PUTSTATE             ; DP_AUTO_FUNCTION = 5
26a9  push    5h                              
26ab  mov     bx,[bp-2h]                      
26ae  push    bx                              
26af  mov     al,[bx+150h]                    
26b3  cbw                                     
26b4  push    ax                              
26b5  call far sub_616a                       
26ba  add     sp,6h                           
26bd  jmp     26EBh                           
26bf  mov     al,[bx+150h]                    
26c3  cbw                                     
26c4  mov     si,ax                           
26c6  shl     si,5h                           
26c9  cmp     word ptr [si+168h],3h           
26ce  jne     26EBh                           
26d0  push    77h                             
26d2  push    0Ah                             
26d4  call far M007.M007_PUTSTATE             ; DP_AUTO_FUNCTION = 10
26d9  mov     bx,[bp-2h]                      
26dc  push    bx                              
26dd  mov     al,[bx+150h]                    
26e1  cbw                                     
26e2  push    ax                              
26e3  call far sub_6230                       
26e8  add     sp,4h                           
26eb  inc     word ptr [bp-2h]                
26ee  cmp     word ptr [bp-2h],8h             
26f2  jge     271Fh                           
26f4  mov     bx,[bp-2h]                      
26f7  cmp     byte ptr [bx+0E10h],1h          
26fc  jne     26EBh                           
26fe  mov     al,[bx+150h]                    
2702  cbw                                     
2703  mov     si,ax                           
2705  shl     si,5h                           
2708  cmp     word ptr [si+168h],1h           
270d  je      2712h                           
270f  jmp     268Fh                           
2712  push    77h                             
2714  push    6h                              
2716  call far M007.M007_PUTSTATE             ; DP_AUTO_FUNCTION = 6
271b  push    6h                              
271d  jmp     26ABh                           
271f  pop     ds                              
2720  pop     si                              
2721  leave                                   
2722  retf                                    
2723  add     [bx+si],al                      

; ===== DOCOMMANDFIND_MEAN =====
2724  mov     ax,2645h                        ; segment seg2:0000
2727  enter   2h,0h                           
272b  push    ds                              
272c  mov     ds,ax                           
272e  push    66h                             
2730  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
2735  mov     bx,ax                           
2737  mov     [bp-2h],ax                      
273a  cmp     byte ptr [bx+9Eh],1h            
273f  jne     2775h                           
2741  push    83h                             
2744  call far M007.M007_GETSTATE             ; DP_GSP
2749  dec     ax                              
274a  jne     2775h                           
274c  push    77h                             
274e  call far M007.M007_GETSTATE             ; DP_AUTO_FUNCTION
2753  or      ax,ax                           
2755  jne     2775h                           
2757  push    77h                             
2759  push    6h                              
275b  call far M007.M007_PUTSTATE             ; DP_AUTO_FUNCTION = 6
2760  push    6h                              
2762  push    64h                             
2764  call far M007.M007_GETSTATE             ; DP_OPTIBEAM = 100
2769  push    ax                              
276a  push    word ptr [bp-2h]                
276d  call far sub_616a                       
2772  add     sp,6h                           
2775  pop     ds                              
2776  leave                                   
2777  retf                                    

; ===== DOCOMMANDFIND_PEAK =====
2778  mov     ax,2725h                        ; segment seg2:0000
277b  enter   2h,0h                           
277f  push    ds                              
2780  mov     ds,ax                           
2782  push    66h                             
2784  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
2789  mov     bx,ax                           
278b  mov     [bp-2h],ax                      
278e  cmp     byte ptr [bx+9Eh],1h            
2793  jne     27C9h                           
2795  push    83h                             
2798  call far M007.M007_GETSTATE             ; DP_GSP
279d  dec     ax                              
279e  jne     27C9h                           
27a0  push    77h                             
27a2  call far M007.M007_GETSTATE             ; DP_AUTO_FUNCTION
27a7  or      ax,ax                           
27a9  jne     27C9h                           
27ab  push    77h                             
27ad  push    5h                              
27af  call far M007.M007_PUTSTATE             ; DP_AUTO_FUNCTION = 5
27b4  push    5h                              
27b6  push    64h                             
27b8  call far M007.M007_GETSTATE             ; DP_STIGBALANCE = 100
27bd  push    ax                              
27be  push    word ptr [bp-2h]                
27c1  call far sub_616a                       
27c6  add     sp,6h                           
27c9  pop     ds                              
27ca  leave                                   
27cb  retf                                    

; ===== DOCOMMANDABC =====
27cc  mov     ax,2779h                        ; segment seg2:0000
27cf  enter   2h,0h                           
27d3  push    ds                              
27d4  mov     ds,ax                           
27d6  push    66h                             
27d8  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
27dd  mov     bx,ax                           
27df  mov     [bp-2h],ax                      
27e2  cmp     byte ptr [bx+9Eh],1h            
27e7  jne     281Bh                           
27e9  push    83h                             
27ec  call far M007.M007_GETSTATE             ; DP_GSP
27f1  dec     ax                              
27f2  jne     281Bh                           
27f4  push    77h                             
27f6  call far M007.M007_GETSTATE             ; DP_AUTO_FUNCTION
27fb  or      ax,ax                           
27fd  jne     281Bh                           
27ff  push    77h                             
2801  push    0Ah                             
2803  call far M007.M007_PUTSTATE             ; DP_AUTO_FUNCTION = 10
2808  push    64h                             
280a  call far M007.M007_GETSTATE             ; DP_ZONE
280f  push    ax                              
2810  push    word ptr [bp-2h]                
2813  call far sub_6230                       
2818  add     sp,4h                           
281b  pop     ds                              
281c  leave                                   
281d  retf                                    

; ===== DOCOMMANDDETECTOR_CHAN_ASGN =====
281e  mov     ax,27CDh                        ; segment seg2:0000
2821  push    bp                              
2822  mov     bp,sp                           
2824  push    ds                              
2825  mov     ds,ax                           
2827  pop     ds                              
2828  leave                                   
2829  retf                                    

; ===== DOSTRUCTDETECTOR_PORT_ASGN =====
282a  mov     ax,281Fh                        ; segment seg2:0000
282d  enter   64h,0h                          
2831  push    di                              
2832  push    si                              
2833  push    ds                              
2834  mov     ds,ax                           
2836  mov     al,1h                           
2838  mov     [bp-62h],al                     
283b  mov     [bp-64h],al                     
283e  mov     byte ptr [bp-5Eh],0h            
2842  mov     al,[bp-5Eh]                     
2845  cbw                                     
2846  imul    si,ax,5h                        
2849  mov     [bp+si-5Ah],al                  
284c  xor     cl,cl                           
284e  mov     [bp+si-59h],cl                  
2851  mov     [bp+si-58h],cl                  
2854  mov     [bp+si-57h],cl                  
2857  mov     bx,ax                           
2859  mov     [bp+si-56h],cl                  
285c  mov     [bx+9Eh],cl                     
2860  inc     byte ptr [bp-5Eh]               
2863  cmp     byte ptr [bp-5Eh],11h           
2867  jle     2842h                           
2869  mov     [bp-5Ch],cl                     
286c  mov     al,[bp-5Ch]                     
286f  cbw                                     
2870  imul    bx,ax,5h                        
2873  les     si,[bp+6h]                      
2876  mov     al,es:[bx+si]                   
2879  mov     [bp-5Eh],al                     
287c  cbw                                     
287d  mov     di,ax                           
287f  add     bx,si                           
2881  mov     byte ptr [di+9Eh],1h            
2886  test    byte ptr es:[bx+1h],2h          
288b  je      289Ch                           
288d  mov     al,[bp-5Eh]                     
2890  cbw                                     
2891  imul    si,ax,5h                        
2894  mov     al,1h                           
2896  mov     [bp+si-59h],al                  
2899  mov     [bp+si-56h],al                  
289c  mov     al,[bp-5Ch]                     
289f  cbw                                     
28a0  imul    si,ax,5h                        
28a3  les     bx,[bp+6h]                      
28a6  test    byte ptr es:[bx+si+1h],4h       
28ab  je      28BCh                           
28ad  mov     al,[bp-5Eh]                     
28b0  cbw                                     
28b1  imul    si,ax,5h                        
28b4  mov     byte ptr [bp+si-59h],1h         
28b8  mov     byte ptr [bp+si-56h],2h         
28bc  mov     al,[bp-5Ch]                     
28bf  cbw                                     
28c0  imul    si,ax,5h                        
28c3  les     bx,[bp+6h]                      
28c6  test    byte ptr es:[bx+si+1h],8h       
28cb  je      28DCh                           
28cd  mov     al,[bp-5Eh]                     
28d0  cbw                                     
28d1  imul    si,ax,5h                        
28d4  mov     byte ptr [bp+si-59h],1h         
28d8  mov     byte ptr [bp+si-56h],3h         
28dc  mov     al,[bp-5Ch]                     
28df  cbw                                     
28e0  imul    si,ax,5h                        
28e3  les     bx,[bp+6h]                      
28e6  test    byte ptr es:[bx+si+1h],10h      
28eb  je      28F8h                           
28ed  mov     al,[bp-5Eh]                     
28f0  cbw                                     
28f1  imul    si,ax,5h                        
28f4  mov     byte ptr [bp+si-57h],1h         
28f8  mov     al,[bp-5Ch]                     
28fb  cbw                                     
28fc  imul    si,ax,5h                        
28ff  les     bx,[bp+6h]                      
2902  test    byte ptr es:[bx+si+1h],20h      
2907  je      2914h                           
2909  mov     al,[bp-5Eh]                     
290c  cbw                                     
290d  imul    si,ax,5h                        
2910  mov     byte ptr [bp+si-58h],1h         
2914  inc     byte ptr [bp-5Ch]               
2917  cmp     byte ptr [bp-5Ch],0Fh           
291b  jg      2920h                           
291d  jmp     286Ch                           
2920  sub     sp,5Ah                          
2923  push    ds                              
2924  lea     si,[bp-5Ah]                     
2927  mov     di,sp                           
2929  inc     di                              
292a  inc     di                              
292b  push    ss                              
292c  pop     es                              
292d  push    ss                              
292e  pop     ds                              
292f  mov     cx,2Dh                          
2932  rep     movsw                           
2934  pop     ds                              
2935  call far sub_6108                       
293a  add     sp,5Ah                          
293d  mov     byte ptr [bp-5Ch],0h            
2941  jmp     2986h                           
2943  cmp     byte ptr [bp-5Ch],8h            
2947  jge     2963h                           
2949  cmp     byte ptr [bp-62h],0h            
294d  je      2963h                           
294f  mov     al,[bp-5Ch]                     
2952  push    ax                              
2953  mov     al,[bp-5Eh]                     
2956  push    ax                              
2957  call far sub_69f6                       
295c  add     sp,4h                           
295f  mov     byte ptr [bp-62h],0h            
2963  cmp     byte ptr [bp-5Ch],8h            
2967  jl      2983h                           
2969  cmp     byte ptr [bp-64h],0h            
296d  je      2983h                           
296f  mov     al,[bp-5Ch]                     
2972  push    ax                              
2973  mov     al,[bp-5Eh]                     
2976  push    ax                              
2977  call far sub_69f6                       
297c  add     sp,4h                           
297f  mov     byte ptr [bp-64h],0h            
2983  inc     byte ptr [bp-5Ch]               
2986  cmp     byte ptr [bp-5Ch],0Fh           
298a  jg      29F6h                           
298c  mov     al,[bp-5Ch]                     
298f  cbw                                     
2990  imul    bx,ax,5h                        
2993  les     si,[bp+6h]                      
2996  mov     al,[bx+3C6h]                    
299a  cmp     es:[bx+si],al                   
299d  jne     29ABh                           
299f  mov     al,[bx+3C7h]                    
29a3  add     bx,si                           
29a5  cmp     es:[bx+1h],al                   
29a9  je      2983h                           
29ab  mov     al,[bp-5Ch]                     
29ae  cbw                                     
29af  imul    bx,ax,5h                        
29b2  mov     cl,es:[bx+si]                   
29b5  mov     [bx+3C6h],cl                    
29b9  mov     cx,bx                           
29bb  add     bx,si                           
29bd  mov     si,cx                           
29bf  mov     dl,es:[bx+1h]                   
29c3  mov     [si+3C7h],dl                    
29c7  mov     dl,es:[bx+2h]                   
29cb  mov     [si+3C8h],dl                    
29cf  mov     cl,es:[bx]                      
29d2  mov     bx,ax                           
29d4  mov     [bp-5Eh],cl                     
29d7  mov     [bx+8Eh],cl                     
29db  cmp     byte ptr [bp-5Eh],0h            
29df  jne     29E4h                           
29e1  jmp     2943h                           
29e4  mov     al,[bp-5Ch]                     
29e7  push    ax                              
29e8  mov     al,[bp-5Eh]                     
29eb  push    ax                              
29ec  call far sub_69f6                       
29f1  add     sp,4h                           
29f4  jmp     2983h                           
29f6  push    64h                             
29f8  call far M007.M007_GETSTATE             ; DP_ZONE
29fd  mov     [bp-60h],al                     
2a00  cbw                                     
2a01  mov     bx,ax                           
2a03  mov     al,[bx+150h]                    
2a07  mov     [bp-5Eh],al                     
2a0a  cmp     bl,3h                           
2a0d  jg      2A32h                           
2a0f  mov     byte ptr [bp-5Ch],0h            
2a13  jmp     2A18h                           
2a15  inc     byte ptr [bp-5Ch]               
2a18  cmp     byte ptr [bp-5Ch],7h            
2a1c  jge     2A5Bh                           
2a1e  mov     al,[bp-5Ch]                     
2a21  cbw                                     
2a22  mov     bx,ax                           
2a24  mov     al,[bp-5Eh]                     
2a27  cmp     [bx+8Eh],al                     
2a2b  jne     2A15h                           
2a2d  push    65h                             
2a2f  push    bx                              
2a30  jmp     2A56h                           
2a32  mov     byte ptr [bp-5Ch],8h            
2a36  jmp     2A3Bh                           
2a38  inc     byte ptr [bp-5Ch]               
2a3b  cmp     byte ptr [bp-5Ch],0Fh           
2a3f  jge     2A5Bh                           
2a41  mov     al,[bp-5Ch]                     
2a44  cbw                                     
2a45  mov     bx,ax                           
2a47  mov     al,[bp-5Eh]                     
2a4a  cmp     [bx+8Eh],al                     
2a4e  jne     2A38h                           
2a50  push    65h                             
2a52  lea     ax,[bx-8h]                      
2a55  push    ax                              
2a56  call far M007.M007_PUTSTATE             ; DP_DETECTOR_CHANNEL = 101
2a5b  push    0ABh                            
2a5e  call far M007.M007_GETSTATE             ; DP_MAIN_DETECTOR
2a63  or      ax,ax                           
2a65  jne     2A78h                           
2a67  mov     al,[bp-60h]                     
2a6a  cbw                                     
2a6b  mov     bx,ax                           
2a6d  mov     al,[bx+150h]                    
2a71  cbw                                     
2a72  push    ax                              
2a73  call far SWITCHDETECTOR_TYPE            
2a78  cmp     byte ptr [bp-60h],3h            
2a7c  jg      2A84h                           
2a7e  add     byte ptr [bp-60h],4h            
2a82  jmp     2A88h                           
2a84  sub     byte ptr [bp-60h],4h            
2a88  mov     al,[bp-60h]                     
2a8b  cbw                                     
2a8c  mov     bx,ax                           
2a8e  mov     al,[bx+150h]                    
2a92  mov     [bp-5Eh],al                     
2a95  cmp     bl,3h                           
2a98  jg      2ABEh                           
2a9a  mov     byte ptr [bp-5Ch],0h            
2a9e  jmp     2AA3h                           
2aa0  inc     byte ptr [bp-5Ch]               
2aa3  cmp     byte ptr [bp-5Ch],7h            
2aa7  jge     2AE8h                           
2aa9  mov     al,[bp-5Ch]                     
2aac  cbw                                     
2aad  mov     bx,ax                           
2aaf  mov     al,[bp-5Eh]                     
2ab2  cmp     [bx+8Eh],al                     
2ab6  jne     2AA0h                           
2ab8  push    97h                             
2abb  push    bx                              
2abc  jmp     2AE3h                           
2abe  mov     byte ptr [bp-5Ch],8h            
2ac2  jmp     2AC7h                           
2ac4  inc     byte ptr [bp-5Ch]               
2ac7  cmp     byte ptr [bp-5Ch],0Fh           
2acb  jge     2AE8h                           
2acd  mov     al,[bp-5Ch]                     
2ad0  cbw                                     
2ad1  mov     bx,ax                           
2ad3  mov     al,[bp-5Eh]                     
2ad6  cmp     [bx+8Eh],al                     
2ada  jne     2AC4h                           
2adc  push    97h                             
2adf  lea     ax,[bx-8h]                      
2ae2  push    ax                              
2ae3  call far M007.M007_PUTSTATE             ; DP_IMPLIED_DETECTOR = 151
2ae8  push    0ABh                            
2aeb  call far M007.M007_GETSTATE             ; DP_MAIN_DETECTOR
2af0  dec     ax                              
2af1  jne     2B04h                           
2af3  mov     al,[bp-60h]                     
2af6  cbw                                     
2af7  mov     bx,ax                           
2af9  mov     al,[bx+150h]                    
2afd  cbw                                     
2afe  push    ax                              
2aff  call far SWITCHDETECTOR_TYPE            
2b04  call far UPDATE_DETECTORS               
2b09  xor     al,al                           
2b0b  mov     [bp-5Eh],al                     
2b0e  mov     [bp-5Ch],al                     
2b11  jmp     2B3Ah                           
2b13  mov     al,[bp-5Ch]                     
2b16  cbw                                     
2b17  imul    bx,ax,5h                        
2b1a  cmp     byte ptr es:[bx+si],3h          
2b1e  jne     2B37h                           
2b20  mov     byte ptr [bp-5Eh],1h            
2b24  cmp     byte ptr [3BAh],1h              
2b29  jne     2B54h                           
2b2b  call far DOCOMMANDCOMPO                 
2b30  mov     byte ptr [3BAh],0h              
2b35  jmp     2B54h                           
2b37  inc     byte ptr [bp-5Ch]               
2b3a  cmp     byte ptr [bp-5Ch],0Fh           
2b3e  jg      2B54h                           
2b40  mov     al,[bp-5Ch]                     
2b43  cbw                                     
2b44  imul    bx,ax,5h                        
2b47  les     si,[bp+6h]                      
2b4a  cmp     byte ptr es:[bx+si],7h          
2b4e  jne     2B13h                           
2b50  mov     byte ptr [bp-5Eh],2h            
2b54  push    0E7h                            
2b57  mov     al,[bp-5Eh]                     
2b5a  cbw                                     
2b5b  push    ax                              
2b5c  call far M007.M007_PUTSTATE             ; DP_BSDA
2b61  pop     ds                              
2b62  pop     si                              
2b63  pop     di                              
2b64  leave                                   
2b65  retf    4h                              

; ===== DOCOMMANDDETECTOR_ZONE_ASGN =====
2b68  mov     ax,282Bh                        ; segment seg2:0000
2b6b  push    bp                              
2b6c  mov     bp,sp                           
2b6e  push    ds                              
2b6f  mov     ds,ax                           
2b71  pop     ds                              
2b72  leave                                   
2b73  retf                                    

; ===== DOCOMMANDCONTINUOUS_AVG =====
2b74  mov     ax,2B69h                        ; segment seg2:0000
2b77  push    bp                              
2b78  mov     bp,sp                           
2b7a  push    ds                              
2b7b  mov     ds,ax                           
2b7d  push    118h                            
2b80  call far M007.M007_GETSTATE             ; DP_PROGRESS
2b85  cmp     ax,6h                           
2b88  jne     2BA4h                           
2b8a  push    154h                            
2b8d  push    word ptr [0A34h]                ; [ds] f32 here = 0
2b91  push    word ptr [0A32h]                ; [ds] f32 here = 0
2b95  call far M007.M007_PUTVALUE             ; AP_PROGRESS
2b9a  push    118h                            
2b9d  push    0h                              
2b9f  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 0
2ba4  pop     ds                              
2ba5  leave                                   
2ba6  retf                                    
2ba7  add     [bx+si],al                      

; ===== DOCOMMANDFRAME_AVERAGE =====
2ba8  mov     ax,2B75h                        ; segment seg2:0000
2bab  enter   4h,0h                           
2baf  push    ds                              
2bb0  mov     ds,ax                           
2bb2  push    64h                             
2bb4  call far M007.M007_GETSTATE             ; DP_ZONE
2bb9  cbw                                     
2bba  mov     bx,ax                           
2bbc  sub     ah,ah                           
2bbe  mov     al,[bx+18h]                     
2bc2  inc     ax                              
2bc3  mov     [bp-4h],ax                      
2bc6  push    0C1h                            
2bc9  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
2bce  dec     ax                              
2bcf  je      2C47h                           
2bd1  push    0E4h                            
2bd4  push    word ptr [0A38h]                
2bd8  push    word ptr [0A36h]                ; [ds] f32 here = 1
2bdc  call far M007.M007_PUTLOW               ; AP_NR_COEFF
2be1  push    0E4h                            
2be4  wait                                    
2be5  fild    word ptr [bp-4h]                
2be8  sub     sp,4h                           
2beb  mov     bx,sp                           
2bed  wait                                    
2bee  fstp    dword ptr ss:[bx]               
2bf1  nop                                     
2bf2  wait                                    
2bf3  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
2bf8  mov     byte ptr [20h],1h               
2bfd  push    0A3h                            
2c00  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
2c05  dec     ax                              
2c06  jne     2C0Fh                           
2c08  call far DOCOMMANDUNFREEZE_ALL          
2c0d  jmp     2C14h                           
2c0f  call far DOCOMMANDUNFREEZE_ZONE         
2c14  push    ds                              
2c15  push    18h                             
2c18  call far sub_5c36                       
2c1d  add     sp,4h                           
2c20  push    118h                            
2c23  call far M007.M007_GETSTATE             ; DP_PROGRESS
2c28  cmp     ax,6h                           
2c2b  jne     2C47h                           
2c2d  push    154h                            
2c30  push    word ptr [0A34h]                ; [ds] f32 here = 0
2c34  push    word ptr [0A32h]                ; [ds] f32 here = 0
2c38  call far M007.M007_PUTVALUE             ; AP_PROGRESS
2c3d  push    118h                            
2c40  push    0h                              
2c42  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 0
2c47  pop     ds                              
2c48  leave                                   
2c49  retf                                    

; ===== DOCOMMANDFRAME_INT =====
2c4a  mov     ax,2BA9h                        ; segment seg2:0000
2c4d  enter   6h,0h                           
2c51  push    ds                              
2c52  mov     ds,ax                           
2c54  push    64h                             
2c56  call far M007.M007_GETSTATE             ; DP_ZONE
2c5b  cbw                                     
2c5c  mov     bx,ax                           
2c5e  sub     ah,ah                           
2c60  mov     al,[bx+18h]                     
2c64  inc     ax                              
2c65  mov     [bp-2h],ax                      
2c68  push    0C1h                            
2c6b  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
2c70  dec     ax                              
2c71  jne     2C76h                           
2c73  jmp     2D44h                           
2c76  push    144h                            
2c79  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
2c7e  or      ax,ax                           
2c80  je      2CAEh                           
2c82  push    0E4h                            
2c85  push    word ptr [0A38h]                
2c89  push    word ptr [0A36h]                ; [ds] f32 here = 1
2c8d  call far M007.M007_PUTLOW               ; AP_NR_COEFF
2c92  push    0E4h                            
2c95  wait                                    
2c96  fild    word ptr [bp-2h]                
2c99  sub     sp,4h                           
2c9c  mov     bx,sp                           
2c9e  wait                                    
2c9f  fstp    dword ptr ss:[bx]               
2ca2  nop                                     
2ca3  wait                                    
2ca4  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
2ca9  mov     byte ptr [20h],1h               
2cae  push    0A3h                            
2cb1  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
2cb6  dec     ax                              
2cb7  jne     2CC0h                           
2cb9  call far DOCOMMANDUNFREEZE_ALL          
2cbe  jmp     2CC5h                           
2cc0  call far DOCOMMANDUNFREEZE_ZONE         
2cc5  push    ds                              
2cc6  push    18h                             
2cc9  call far sub_5c36                       
2cce  add     sp,4h                           
2cd1  push    76h                             
2cd3  call far M007.M007_GETSTATE             ; DP_FREEZE_ON
2cd8  mov     [bp-6h],ax                      
2cdb  push    76h                             
2cdd  push    0h                              
2cdf  call far M007.M007_PUTSTATE             ; DP_FREEZE_ON = 0
2ce4  call far DOCOMMANDFREEZE_ALL            
2ce9  push    76h                             
2ceb  push    word ptr [bp-6h]                
2cee  call far M007.M007_PUTSTATE             ; DP_FREEZE_ON
2cf3  call far USER.GETTICKCOUNT              
2cf8  mov     [3BCh],ax                       
2cfb  mov     [3BEh],dx                       
2cff  call far TIGASEM.DSPCYCLETIME           
2d04  add     ax,1F4h                         
2d07  adc     dx,0h                           
2d0a  mov     [3C0h],ax                       
2d0d  mov     [3C2h],dx                       
2d11  push    118h                            
2d14  call far M007.M007_GETSTATE             ; DP_PROGRESS
2d19  or      ax,ax                           
2d1b  je      2D2Ah                           
2d1d  push    118h                            
2d20  call far M007.M007_GETSTATE             ; DP_PROGRESS
2d25  cmp     ax,6h                           
2d28  jne     2D44h                           
2d2a  push    118h                            
2d2d  push    6h                              
2d2f  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 6
2d34  push    154h                            
2d37  push    word ptr [0A34h]                ; [ds] f32 here = 0
2d3b  push    word ptr [0A32h]                ; [ds] f32 here = 0
2d3f  call far M007.M007_PUTVALUE             ; AP_PROGRESS
2d44  pop     ds                              
2d45  leave                                   
2d46  retf                                    
2d47  add     [bx+si],al                      

; ===== DOCOMMANDLINE_INT =====
2d48  mov     ax,2C4Bh                        ; segment seg2:0000
2d4b  enter   8h,0h                           
2d4f  push    ds                              
2d50  mov     ds,ax                           
2d52  push    0E3h                            
2d55  lea     ax,[bp-8h]                      
2d58  push    ax                              
2d59  call far M007.M007_GETVALUE             ; AP_LINE_AVERAGE_COUNT
2d5e  mov     bx,ax                           
2d60  wait                                    
2d61  fld     dword ptr ss:[bx]               
2d64  call far sub_015a                       
2d69  mov     [bp-2h],ax                      
2d6c  push    0C1h                            
2d6f  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
2d74  dec     ax                              
2d75  jne     2D7Ah                           
2d77  jmp     2E35h                           
2d7a  push    0E4h                            
2d7d  push    word ptr [0A3Ch]                
2d81  push    word ptr [0A3Ah]                ; [ds] f32 here = 2
2d85  call far M007.M007_PUTLOW               ; AP_NR_COEFF
2d8a  push    0E4h                            
2d8d  wait                                    
2d8e  fild    word ptr [bp-2h]                
2d91  sub     sp,4h                           
2d94  mov     bx,sp                           
2d96  wait                                    
2d97  fstp    dword ptr ss:[bx]               
2d9a  nop                                     
2d9b  wait                                    
2d9c  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
2da1  push    0A3h                            
2da4  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
2da9  dec     ax                              
2daa  jne     2DB3h                           
2dac  call far DOCOMMANDUNFREEZE_ALL          
2db1  jmp     2DB8h                           
2db3  call far DOCOMMANDUNFREEZE_ZONE         
2db8  push    1h                              
2dba  mov     al,[bp-2h]                      
2dbd  dec     al                              
2dbf  push    ax                              
2dc0  call far sub_5bfc                       
2dc5  add     sp,4h                           
2dc8  push    76h                             
2dca  call far M007.M007_GETSTATE             ; DP_FREEZE_ON
2dcf  mov     [bp-4h],ax                      
2dd2  push    76h                             
2dd4  push    0h                              
2dd6  call far M007.M007_PUTSTATE             ; DP_FREEZE_ON = 0
2ddb  call far DOCOMMANDFREEZE_ALL            
2de0  push    76h                             
2de2  push    word ptr [bp-4h]                
2de5  call far M007.M007_PUTSTATE             ; DP_FREEZE_ON
2dea  call far USER.GETTICKCOUNT              
2def  mov     [3BCh],ax                       
2df2  mov     [3BEh],dx                       
2df6  call far TIGASEM.DSPCYCLETIME           
2dfb  mov     [3C0h],ax                       
2dfe  mov     [3C2h],dx                       
2e02  push    118h                            
2e05  call far M007.M007_GETSTATE             ; DP_PROGRESS
2e0a  or      ax,ax                           
2e0c  je      2E1Bh                           
2e0e  push    118h                            
2e11  call far M007.M007_GETSTATE             ; DP_PROGRESS
2e16  cmp     ax,6h                           
2e19  jne     2E35h                           
2e1b  push    118h                            
2e1e  push    6h                              
2e20  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 6
2e25  push    154h                            
2e28  push    word ptr [0A34h]                ; [ds] f32 here = 0
2e2c  push    word ptr [0A32h]                ; [ds] f32 here = 0
2e30  call far M007.M007_PUTVALUE             ; AP_PROGRESS
2e35  pop     ds                              
2e36  leave                                   
2e37  retf                                    

; ===== DOCOMMANDLINE_AVG =====
2e38  mov     ax,2D49h                        ; segment seg2:0000
2e3b  enter   6h,0h                           
2e3f  push    ds                              
2e40  mov     ds,ax                           
2e42  push    0E3h                            
2e45  lea     ax,[bp-6h]                      
2e48  push    ax                              
2e49  call far M007.M007_GETVALUE             ; AP_LINE_AVERAGE_COUNT
2e4e  mov     bx,ax                           
2e50  wait                                    
2e51  fld     dword ptr ss:[bx]               
2e54  call far sub_015a                       
2e59  mov     [bp-2h],ax                      
2e5c  push    0C1h                            
2e5f  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
2e64  dec     ax                              
2e65  je      2EDCh                           
2e67  push    0E4h                            
2e6a  push    word ptr [0A3Ch]                
2e6e  push    word ptr [0A3Ah]                ; [ds] f32 here = 2
2e72  call far M007.M007_PUTLOW               ; AP_NR_COEFF
2e77  push    0E4h                            
2e7a  wait                                    
2e7b  fild    word ptr [bp-2h]                
2e7e  sub     sp,4h                           
2e81  mov     bx,sp                           
2e83  wait                                    
2e84  fstp    dword ptr ss:[bx]               
2e87  nop                                     
2e88  wait                                    
2e89  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
2e8e  push    0A3h                            
2e91  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
2e96  dec     ax                              
2e97  jne     2EA0h                           
2e99  call far DOCOMMANDUNFREEZE_ALL          
2e9e  jmp     2EA5h                           
2ea0  call far DOCOMMANDUNFREEZE_ZONE         
2ea5  push    1h                              
2ea7  mov     al,[bp-2h]                      
2eaa  dec     al                              
2eac  push    ax                              
2ead  call far sub_5bfc                       
2eb2  add     sp,4h                           
2eb5  push    118h                            
2eb8  call far M007.M007_GETSTATE             ; DP_PROGRESS
2ebd  cmp     ax,6h                           
2ec0  jne     2EDCh                           
2ec2  push    154h                            
2ec5  push    word ptr [0A34h]                ; [ds] f32 here = 0
2ec9  push    word ptr [0A32h]                ; [ds] f32 here = 0
2ecd  call far M007.M007_PUTVALUE             ; AP_PROGRESS
2ed2  push    118h                            
2ed5  push    0h                              
2ed7  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 0
2edc  pop     ds                              
2edd  leave                                   
2ede  retf                                    
2edf  add     [bx+si],al                      

; ===== DOCOMMANDPIXNR =====
2ee0  mov     ax,2E39h                        ; segment seg2:0000
2ee3  push    bp                              
2ee4  mov     bp,sp                           
2ee6  push    ds                              
2ee7  mov     ds,ax                           
2ee9  pop     ds                              
2eea  leave                                   
2eeb  retf                                    

; ===== DOCOMMANDLUT_TRANSPARENT =====
2eec  mov     ax,2EE1h                        ; segment seg2:0000
2eef  enter   4h,0h                           
2ef3  push    ds                              
2ef4  mov     ds,ax                           
2ef6  push    68h                             
2ef8  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
2efd  mov     [bp-2h],al                      
2f00  cmp     al,8h                           
2f02  jl      2F08h                           
2f04  cmp     al,0Dh                          
2f06  jle     2F48h                           
2f08  push    0A3h                            
2f0b  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
2f10  dec     ax                              
2f11  jne     2F41h                           
2f13  push    23h                             
2f15  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
2f1a  dec     ax                              
2f1b  jne     2F23h                           
2f1d  mov     byte ptr [bp-4h],7h             
2f21  jmp     2F27h                           
2f23  mov     byte ptr [bp-4h],3h             
2f27  mov     byte ptr [bp-2h],0h             
2f2b  jmp     2F30h                           
2f2d  inc     byte ptr [bp-2h]                
2f30  mov     al,[bp-2h]                      
2f33  cmp     [bp-4h],al                      
2f36  jl      2F4Fh                           
2f38  push    ax                              
2f39  call far sub_5c60                       
2f3e  pop     bx                              
2f3f  jmp     2F2Dh                           
2f41  push    64h                             
2f43  call far M007.M007_GETSTATE             ; DP_ZONE
2f48  push    ax                              
2f49  call far sub_5c60                       
2f4e  pop     bx                              
2f4f  push    113h                            
2f52  push    0h                              
2f54  call far M007.M007_PUTSTATE             ; DP_INPUT_LUT_MODE = 0
2f59  pop     ds                              
2f5a  leave                                   
2f5b  retf                                    

; ===== DOCOMMANDLUT_GAMMA =====
2f5c  mov     ax,2EEDh                        ; segment seg2:0000
2f5f  enter   6h,0h                           
2f63  push    ds                              
2f64  mov     ds,ax                           
2f66  mov     byte ptr [bp-6h],1h             
2f6a  push    68h                             
2f6c  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
2f71  mov     [bp-2h],al                      
2f74  cmp     al,8h                           
2f76  jl      2F87h                           
2f78  cmp     al,0Dh                          
2f7a  jg      2F87h                           
2f7c  push    word ptr [84h]                  
2f80  push    word ptr [82h]                  ; [ds] f32 here = 1
2f84  jmp     3041h                           
2f87  push    0A3h                            
2f8a  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
2f8f  dec     ax                              
2f90  je      2F95h                           
2f92  jmp     3029h                           
2f95  push    23h                             
2f97  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
2f9c  dec     ax                              
2f9d  jne     2FA5h                           
2f9f  mov     byte ptr [bp-4h],7h             
2fa3  jmp     2FA9h                           
2fa5  mov     byte ptr [bp-4h],3h             
2fa9  mov     byte ptr [bp-2h],0h             
2fad  jmp     2FCFh                           
2faf  cbw                                     
2fb0  mov     bx,ax                           
2fb2  shl     bx,2h                           
2fb5  wait                                    
2fb6  fld     dword ptr [bx+66h]              
2fba  wait                                    
2fbb  fcom    dword ptr [bx+62h]              
2fbf  wait                                    
2fc0  fstp    st(0)                           
2fc2  wait                                    
2fc3  fstsw   ax                              
2fc5  sahf                                    
2fc6  je      2FCCh                           
2fc8  mov     byte ptr [bp-6h],0h             
2fcc  inc     byte ptr [bp-2h]                
2fcf  mov     al,[bp-2h]                      
2fd2  cmp     [bp-4h],al                      
2fd5  jg      2FAFh                           
2fd7  cmp     byte ptr [bp-6h],0h             
2fdb  jne     3007h                           
2fdd  mov     byte ptr [bp-2h],0h             
2fe1  jmp     2FE6h                           
2fe3  inc     byte ptr [bp-2h]                
2fe6  mov     al,[bp-2h]                      
2fe9  cmp     [bp-4h],al                      
2fec  jl      304Ah                           
2fee  cbw                                     
2fef  mov     bx,ax                           
2ff1  shl     bx,2h                           
2ff4  push    word ptr [bx+64h]               
2ff8  push    word ptr [bx+62h]               
2ffc  push    ax                              
2ffd  call far sub_5c80                       
3002  add     sp,6h                           
3005  jmp     2FE3h                           
3007  push    23h                             
3009  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
300e  dec     ax                              
300f  jne     301Dh                           
3011  push    word ptr [64h]                  
3015  push    word ptr [62h]                  ; [ds] f32 here = 1
3019  push    0Fh                             
301b  jmp     3042h                           
301d  push    word ptr [64h]                  
3021  push    word ptr [62h]                  ; [ds] f32 here = 1
3025  push    0Eh                             
3027  jmp     3042h                           
3029  push    64h                             
302b  call far M007.M007_GETSTATE             ; DP_EHTCOMMSFAIL = 14
3030  mov     [bp-2h],al                      
3033  cbw                                     
3034  mov     bx,ax                           
3036  shl     bx,2h                           
3039  push    word ptr [bx+64h]               
303d  push    word ptr [bx+62h]               
3041  push    ax                              
3042  call far sub_5c80                       
3047  add     sp,6h                           
304a  push    113h                            
304d  push    1h                              
304f  call far M007.M007_PUTSTATE             ; DP_INPUT_LUT_MODE = 1
3054  pop     ds                              
3055  leave                                   
3056  retf                                    
3057  add     [bx+si],al                      

; ===== DOCOMMANDLUT_INVERT =====
3058  mov     ax,2F5Dh                        ; segment seg2:0000
305b  enter   4h,0h                           
305f  push    ds                              
3060  mov     ds,ax                           
3062  push    68h                             
3064  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
3069  mov     [bp-2h],al                      
306c  cmp     al,8h                           
306e  jl      3074h                           
3070  cmp     al,0Dh                          
3072  jle     30B4h                           
3074  push    0A3h                            
3077  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
307c  dec     ax                              
307d  jne     30ADh                           
307f  push    23h                             
3081  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3086  dec     ax                              
3087  jne     308Fh                           
3089  mov     byte ptr [bp-4h],7h             
308d  jmp     3093h                           
308f  mov     byte ptr [bp-4h],3h             
3093  mov     byte ptr [bp-2h],0h             
3097  jmp     309Ch                           
3099  inc     byte ptr [bp-2h]                
309c  mov     al,[bp-2h]                      
309f  cmp     [bp-4h],al                      
30a2  jl      30BBh                           
30a4  push    ax                              
30a5  call far sub_5cb0                       
30aa  pop     bx                              
30ab  jmp     3099h                           
30ad  push    64h                             
30af  call far M007.M007_GETSTATE             ; DP_ZONE
30b4  push    ax                              
30b5  call far sub_5cb0                       
30ba  pop     bx                              
30bb  push    113h                            
30be  push    2h                              
30c0  call far M007.M007_PUTSTATE             ; DP_INPUT_LUT_MODE = 2
30c5  pop     ds                              
30c6  leave                                   
30c7  retf                                    

; ===== DOCOMMANDLUT_MERGE =====
30c8  mov     ax,3059h                        ; segment seg2:0000
30cb  enter   102h,0h                         
30cf  push    ds                              
30d0  mov     ds,ax                           
30d2  push    68h                             
30d4  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
30d9  mov     [bp-102h],al                    
30dd  cmp     al,8h                           
30df  jl      30E5h                           
30e1  cmp     al,0Dh                          
30e3  jle     30ECh                           
30e5  push    64h                             
30e7  call far M007.M007_GETSTATE             ; DP_ZONE
30ec  push    ax                              
30ed  push    6Ah                             
30ef  call far M007.M007_GETSTATE             ; DP_LUT_SOURCE_B
30f4  push    ax                              
30f5  push    69h                             
30f7  call far M007.M007_GETSTATE             ; DP_LUT_SOURCE_A
30fc  push    ax                              
30fd  call far sub_5cd0                       
3102  add     sp,6h                           
3105  pop     ds                              
3106  leave                                   
3107  retf                                    

; ===== DOCOMMANDLUT_COPY =====
3108  mov     ax,30C9h                        ; segment seg2:0000
310b  enter   2h,0h                           
310f  push    ds                              
3110  mov     ds,ax                           
3112  push    68h                             
3114  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
3119  cmp     al,8h                           
311b  jl      3121h                           
311d  cmp     al,0Dh                          
311f  jle     3128h                           
3121  push    64h                             
3123  call far M007.M007_GETSTATE             ; DP_ZONE
3128  push    ax                              
3129  push    69h                             
312b  call far M007.M007_GETSTATE             ; DP_LUT_SOURCE_A
3130  push    ax                              
3131  call far sub_5cf8                       
3136  add     sp,4h                           
3139  pop     ds                              
313a  leave                                   
313b  retf                                    

; ===== SWITCHZONE =====
313c  mov     ax,3109h                        ; segment seg2:0000
313f  enter   6h,0h                           
3143  push    si                              
3144  push    ds                              
3145  mov     ds,ax                           
3147  push    0B5h                            
314a  mov     bx,[bp+6h]                      
314d  shl     bx,2h                           
3150  push    word ptr [bx+0B2h]              
3154  push    word ptr [bx+0B0h]              
3158  mov     si,bx                           
315a  call far M007.M007_PUTVALUE             ; AP_K1
315f  push    0B6h                            
3162  push    word ptr [si+0D2h]              
3166  push    word ptr [si+0D0h]              
316a  call far M007.M007_PUTVALUE             ; AP_K2
316f  push    0B7h                            
3172  push    word ptr [si+0F2h]              
3176  push    word ptr [si+0F0h]              
317a  call far M007.M007_PUTVALUE             ; AP_ALPHA
317f  push    0B8h                            
3182  push    word ptr [si+112h]              
3186  push    word ptr [si+110h]              
318a  call far M007.M007_PUTVALUE             ; AP_BETA
318f  push    0F7h                            
3192  push    word ptr [si+132h]              
3196  push    word ptr [si+130h]              
319a  call far M007.M007_PUTVALUE             ; AP_DIFF
319f  push    0B9h                            
31a2  mov     bx,[bp+6h]                      
31a5  sub     ah,ah                           
31a7  mov     al,[bx+18h]                     
31ab  inc     ax                              
31ac  mov     [bp-2h],ax                      
31af  wait                                    
31b0  fild    word ptr [bp-2h]                
31b3  sub     sp,4h                           
31b6  mov     bx,sp                           
31b8  wait                                    
31b9  fstp    dword ptr ss:[bx]               
31bc  nop                                     
31bd  wait                                    
31be  call far M007.M007_PUTVALUE             ; AP_FRAME_AVERAGE_COUNT
31c3  push    5Dh                             
31c5  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
31ca  cmp     ax,2h                           
31cd  jne     31F3h                           
31cf  push    0E4h                            
31d2  mov     bx,[bp+6h]                      
31d5  sub     ah,ah                           
31d7  mov     al,[bx+18h]                     
31db  inc     ax                              
31dc  mov     [bp-2h],ax                      
31df  wait                                    
31e0  fild    word ptr [bp-2h]                
31e3  sub     sp,4h                           
31e6  mov     bx,sp                           
31e8  wait                                    
31e9  fstp    dword ptr ss:[bx]               
31ec  nop                                     
31ed  wait                                    
31ee  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
31f3  push    6Dh                             
31f5  mov     bx,[bp+6h]                      
31f8  mov     al,[bx+10h]                     
31fc  cbw                                     
31fd  push    ax                              
31fe  call far M007.M007_PUTSTATE             ; DP_INVERT
3203  push    0BDh                            
3206  mov     bx,[bp+6h]                      
3209  shl     bx,2h                           
320c  push    word ptr [bx+24h]               
3210  push    word ptr [bx+22h]               
3214  mov     si,bx                           
3216  call far M007.M007_PUTVALUE             ; AP_GAIN
321b  push    0BEh                            
321e  push    word ptr [si+44h]               
3222  push    word ptr [si+42h]               
3226  call far M007.M007_PUTVALUE             ; AP_OFFSET
322b  push    65h                             
322d  mov     bx,[bp+6h]                      
3230  mov     al,[bx+86h]                     
3234  cbw                                     
3235  push    ax                              
3236  call far M007.M007_PUTSTATE             ; DP_DETECTOR_CHANNEL
323b  push    64h                             
323d  push    word ptr [bp+6h]                
3240  call far M007.M007_PUTSTATE             ; DP_ZONE
3245  push    0ABh                            
3248  call far M007.M007_GETSTATE             ; DP_MAIN_DETECTOR
324d  or      ax,ax                           
324f  jne     325Fh                           
3251  mov     bx,[bp+6h]                      
3254  mov     al,[bx+150h]                    
3258  cbw                                     
3259  push    ax                              
325a  call far SWITCHDETECTOR_TYPE            
325f  push    68h                             
3261  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
3266  or      ax,ax                           
3268  jne     3280h                           
326a  push    0BCh                            
326d  mov     bx,[bp+6h]                      
3270  shl     bx,2h                           
3273  push    word ptr [bx+64h]               
3277  push    word ptr [bx+62h]               
327b  call far M007.M007_PUTVALUE             ; AP_GAMMA
3280  cmp     word ptr [bp+6h],3h             
3284  jg      328Ch                           
3286  add     word ptr [bp+6h],4h             
328a  jmp     3290h                           
328c  sub     word ptr [bp+6h],4h             
3290  push    0ABh                            
3293  call far M007.M007_GETSTATE             ; DP_MAIN_DETECTOR
3298  dec     ax                              
3299  jne     32A9h                           
329b  mov     bx,[bp+6h]                      
329e  mov     al,[bx+150h]                    
32a2  cbw                                     
32a3  push    ax                              
32a4  call far SWITCHDETECTOR_TYPE            
32a9  push    98h                             
32ac  mov     bx,[bp+6h]                      
32af  mov     al,[bx+10h]                     
32b3  cbw                                     
32b4  push    ax                              
32b5  call far M007.M007_PUTSTATE             ; DP_IMPLIED_INVERT
32ba  push    0D7h                            
32bd  mov     bx,[bp+6h]                      
32c0  shl     bx,2h                           
32c3  push    word ptr [bx+24h]               
32c7  push    word ptr [bx+22h]               
32cb  mov     si,bx                           
32cd  call far M007.M007_PUTVALUE             ; AP_IMPLIED_GAIN
32d2  push    0D8h                            
32d5  push    word ptr [si+44h]               
32d9  push    word ptr [si+42h]               
32dd  call far M007.M007_PUTVALUE             ; AP_IMPLIED_OFFSET
32e2  push    97h                             
32e5  mov     bx,[bp+6h]                      
32e8  mov     al,[bx+86h]                     
32ec  cbw                                     
32ed  push    ax                              
32ee  call far M007.M007_PUTSTATE             ; DP_IMPLIED_DETECTOR
32f3  push    0C4h                            
32f6  lea     ax,[bp-6h]                      
32f9  push    ax                              
32fa  call far M007.M007_GETVALUE             ; AP_COLLECTOR_BIAS
32ff  mov     bx,ax                           
3301  push    word ptr ss:[bx+2h]             
3305  push    word ptr ss:[bx]                
3308  call far SETCOLLECTOR_BIAS              
330d  call far sub_6bf6                       
3312  pop     ds                              
3313  pop     si                              
3314  leave                                   
3315  retf    2h                              

; ===== SWITCHDETECTOR_CHANNEL =====
3318  mov     ax,313Dh                        ; segment seg2:0000
331b  enter   0Ch,0h                          
331f  push    di                              
3320  push    si                              
3321  push    ds                              
3322  mov     ds,ax                           
3324  mov     bx,[bp+6h]                      
3327  mov     al,[bx+8Eh]                     
332b  mov     [bp-4h],al                      
332e  push    64h                             
3330  call far M007.M007_GETSTATE             ; DP_ZONE
3335  mov     [bp-2h],al                      
3338  cmp     byte ptr [bp-4h],8h             
333c  jne     334Ch                           
333e  push    77h                             
3340  call far M007.M007_GETSTATE             ; DP_AUTO_FUNCTION
3345  or      ax,ax                           
3347  je      334Ch                           
3349  jmp     34DAh                           
334c  push    8Ch                             
334f  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
3354  push    0A3h                            
3357  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
335c  dec     ax                              
335d  je      3362h                           
335f  jmp     340Eh                           
3362  push    23h                             
3364  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3369  dec     ax                              
336a  jne     3372h                           
336c  mov     byte ptr [bp-6h],7h             
3370  jmp     3380h                           
3372  push    70h                             
3374  call far M007.M007_GETSTATE             ; DP_MIXER
3379  dec     ax                              
337a  je      336Ch                           
337c  mov     byte ptr [bp-6h],3h             
3380  mov     byte ptr [bp-8h],0h             
3384  jmp     33AAh                           
3386  mov     al,[bp-8h]                      
3389  cbw                                     
338a  mov     bx,ax                           
338c  mov     al,[bp+6h]                      
338f  mov     [bx+86h],al                     
3393  mov     al,[bp-4h]                      
3396  mov     [bx+150h],al                    
339a  push    ax                              
339b  mov     al,[bp-8h]                      
339e  push    ax                              
339f  call far sub_6b38                       
33a4  add     sp,4h                           
33a7  inc     byte ptr [bp-8h]                
33aa  mov     al,[bp-6h]                      
33ad  cmp     [bp-8h],al                      
33b0  jle     3386h                           
33b2  cmp     al,7h                           
33b4  jne     342Fh                           
33b6  cmp     byte ptr [bp-2h],3h             
33ba  jg      33C3h                           
33bc  mov     al,[bp-2h]                      
33bf  add     al,4h                           
33c1  jmp     33C8h                           
33c3  mov     al,[bp-2h]                      
33c6  sub     al,4h                           
33c8  mov     [bp-8h],al                      
33cb  push    98h                             
33ce  cbw                                     
33cf  mov     bx,ax                           
33d1  mov     al,[bx+10h]                     
33d5  cbw                                     
33d6  push    ax                              
33d7  mov     si,bx                           
33d9  call far M007.M007_PUTSTATE             ; DP_IMPLIED_INVERT
33de  push    0D7h                            
33e1  shl     si,2h                           
33e4  push    word ptr [si+24h]               
33e8  push    word ptr [si+22h]               
33ec  call far M007.M007_PUTVALUE             ; AP_IMPLIED_GAIN
33f1  push    0D8h                            
33f4  push    word ptr [si+44h]               
33f8  push    word ptr [si+42h]               
33fc  call far M007.M007_PUTVALUE             ; AP_IMPLIED_OFFSET
3401  push    97h                             
3404  push    word ptr [bp+6h]                
3407  call far M007.M007_PUTSTATE             ; DP_IMPLIED_DETECTOR
340c  jmp     342Fh                           
340e  mov     al,[bp-2h]                      
3411  cbw                                     
3412  mov     bx,ax                           
3414  mov     al,[bp+6h]                      
3417  mov     [bx+86h],al                     
341b  mov     al,[bp-4h]                      
341e  mov     [bx+150h],al                    
3422  push    ax                              
3423  mov     al,[bp-2h]                      
3426  push    ax                              
3427  call far sub_6b38                       
342c  add     sp,4h                           
342f  push    6Dh                             
3431  mov     al,[bp-2h]                      
3434  cbw                                     
3435  mov     bx,ax                           
3437  mov     al,[bx+10h]                     
343b  cbw                                     
343c  push    ax                              
343d  mov     si,bx                           
343f  call far M007.M007_PUTSTATE             ; DP_INVERT
3444  push    0BDh                            
3447  mov     ax,si                           
3449  shl     si,2h                           
344c  push    word ptr [si+24h]               
3450  push    word ptr [si+22h]               
3454  mov     di,ax                           
3456  call far M007.M007_PUTVALUE             ; AP_GAIN
345b  push    0BEh                            
345e  push    word ptr [si+44h]               
3462  push    word ptr [si+42h]               
3466  call far M007.M007_PUTVALUE             ; AP_OFFSET
346b  push    65h                             
346d  push    word ptr [bp+6h]                
3470  call far M007.M007_PUTSTATE             ; DP_DETECTOR_CHANNEL
3475  push    0ABh                            
3478  call far M007.M007_GETSTATE             ; DP_MAIN_DETECTOR
347d  or      ax,ax                           
347f  jne     348Ch                           
3481  mov     al,[di+150h]                    
3485  cbw                                     
3486  push    ax                              
3487  call far SWITCHDETECTOR_TYPE            
348c  push    0C4h                            
348f  lea     ax,[bp-0Ch]                     
3492  push    ax                              
3493  call far M007.M007_GETVALUE             ; AP_COLLECTOR_BIAS
3498  mov     bx,ax                           
349a  push    word ptr ss:[bx+2h]             
349e  push    word ptr ss:[bx]                
34a1  call far SETCOLLECTOR_BIAS              
34a6  call far UPDATE_DETECTORS               
34ab  mov     al,[bp-4h]                      
34ae  cbw                                     
34af  mov     bx,ax                           
34b1  shl     bx,5h                           
34b4  push    word ptr [bx+15Eh]              
34b8  push    word ptr [bx+15Ch]              
34bc  push    ax                              
34bd  mov     si,ax                           
34bf  mov     di,bx                           
34c1  call far sub_639c                       
34c6  add     sp,6h                           
34c9  push    word ptr [di+15Ah]              
34cd  push    word ptr [di+158h]              
34d1  push    si                              
34d2  call far sub_6356                       
34d7  add     sp,6h                           
34da  pop     ds                              
34db  pop     si                              
34dc  pop     di                              
34dd  leave                                   
34de  retf    2h                              
34e1  add     [bx+si],al                      

; ===== SWITCHDETECTOR_TYPE =====
34e2  mov     ax,3319h                        ; segment seg2:0000
34e5  push    bp                              
34e6  mov     bp,sp                           
34e8  push    si                              
34e9  push    ds                              
34ea  mov     ds,ax                           
34ec  push    66h                             
34ee  push    word ptr [bp+6h]                
34f1  call far M007.M007_PUTSTATE             ; DP_DETECTOR_TYPE
34f6  push    8Ch                             
34f9  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
34fe  cmp     ax,6h                           
3501  je      353Fh                           
3503  cmp     word ptr [bp+6h],1h             
3507  jne     3521h                           
3509  push    0C4h                            
350c  wait                                    
350d  fild    word ptr [398h]                 
3511  sub     sp,4h                           
3514  mov     bx,sp                           
3516  wait                                    
3517  fstp    dword ptr ss:[bx]               
351a  nop                                     
351b  wait                                    
351c  call far M007.M007_PUTVALUE             ; AP_COLLECTOR_BIAS
3521  cmp     word ptr [bp+6h],2h             
3525  jne     353Fh                           
3527  push    0C4h                            
352a  wait                                    
352b  fild    word ptr [39Ah]                 
352f  sub     sp,4h                           
3532  mov     bx,sp                           
3534  wait                                    
3535  fstp    dword ptr ss:[bx]               
3538  nop                                     
3539  wait                                    
353a  call far M007.M007_PUTVALUE             ; AP_COLLECTOR_BIAS
353f  push    6Eh                             
3541  mov     bx,[bp+6h]                      
3544  shl     bx,5h                           
3547  push    word ptr [bx+168h]              
354b  mov     si,bx                           
354d  call far M007.M007_PUTSTATE             ; DP_AUTO_VIDEO
3552  push    0C1h                            
3555  push    word ptr [si+162h]              
3559  push    word ptr [si+160h]              
355d  call far M007.M007_PUTVALUE             ; AP_AUTO_CONTRAST
3562  push    0C0h                            
3565  push    word ptr [si+166h]              
3569  push    word ptr [si+164h]              
356d  call far M007.M007_PUTVALUE             ; AP_AUTO_BRIGHT
3572  push    0BFh                            
3575  push    word ptr [si+15Eh]              
3579  push    word ptr [si+15Ch]              
357d  call far M007.M007_PUTVALUE             ; AP_CONTRAST
3582  push    1Eh                             
3584  push    word ptr [si+15Ah]              
3588  push    word ptr [si+158h]              
358c  call far M007.M007_PUTVALUE             ; AP_BRIGHTNESS
3591  pop     ds                              
3592  pop     si                              
3593  leave                                   
3594  retf    2h                              
3597  add     [bx+si],al                      

; ===== DOCOMMANDSCM_IMAGE =====
3598  mov     ax,34E3h                        ; segment seg2:0000
359b  push    bp                              
359c  mov     bp,sp                           
359e  push    ds                              
359f  mov     ds,ax                           
35a1  push    67h                             
35a3  push    0h                              
35a5  call far M007.M007_PUTSTATE             ; DP_SCM_MODE = 0
35aa  push    0h                              
35ac  call far sub_5d1c                       
35b1  pop     bx                              
35b2  pop     ds                              
35b3  leave                                   
35b4  retf                                    
35b5  add     [bx+si],al                      

; ===== DOCOMMANDSCM_MEASURE =====
35b6  mov     ax,3599h                        ; segment seg2:0000
35b9  push    bp                              
35ba  mov     bp,sp                           
35bc  push    ds                              
35bd  mov     ds,ax                           
35bf  push    67h                             
35c1  push    1h                              
35c3  call far M007.M007_PUTSTATE             ; DP_SCM_MODE = 1
35c8  push    1h                              
35ca  call far sub_5d1c                       
35cf  pop     bx                              
35d0  pop     ds                              
35d1  leave                                   
35d2  retf                                    
35d3  add     [bx+si],al                      

; ===== SWITCHLUT_DESTINATION =====
35d4  mov     ax,35B7h                        ; segment seg2:0000
35d7  enter   2h,0h                           
35db  push    ds                              
35dc  mov     ds,ax                           
35de  cmp     word ptr [bp+6h],8h             
35e2  jl      3601h                           
35e4  cmp     word ptr [bp+6h],0Dh            
35e8  jg      3601h                           
35ea  push    68h                             
35ec  push    word ptr [bp+6h]                
35ef  call far M007.M007_PUTSTATE             ; DP_LUT_DESTINATION
35f4  push    0BCh                            
35f7  push    word ptr [84h]                  
35fb  push    word ptr [82h]                  ; [ds] f32 here = 1
35ff  jmp     3628h                           
3601  push    64h                             
3603  call far M007.M007_GETSTATE             ; DP_PLANEA_FROZEN = 100
3608  mov     [bp-2h],al                      
360b  push    68h                             
360d  push    0h                              
360f  call far M007.M007_PUTSTATE             ; DP_LUT_DESTINATION = 0
3614  push    0BCh                            
3617  mov     al,[bp-2h]                      
361a  cbw                                     
361b  mov     bx,ax                           
361d  shl     bx,2h                           
3620  push    word ptr [bx+64h]               
3624  push    word ptr [bx+62h]               
3628  call far M007.M007_PUTVALUE             ; AP_GAMMA
362d  pop     ds                              
362e  leave                                   
362f  retf    2h                              

; ===== SWITCHLUT_SOURCE_A =====
3632  mov     ax,35D5h                        ; segment seg2:0000
3635  push    bp                              
3636  mov     bp,sp                           
3638  push    ds                              
3639  mov     ds,ax                           
363b  push    69h                             
363d  push    word ptr [bp+6h]                
3640  call far M007.M007_PUTSTATE             ; DP_LUT_SOURCE_A
3645  pop     ds                              
3646  leave                                   
3647  retf    2h                              

; ===== SWITCHLUT_SOURCE_B =====
364a  mov     ax,3633h                        ; segment seg2:0000
364d  push    bp                              
364e  mov     bp,sp                           
3650  push    ds                              
3651  mov     ds,ax                           
3653  push    6Ah                             
3655  push    word ptr [bp+6h]                
3658  call far M007.M007_PUTSTATE             ; DP_LUT_SOURCE_B
365d  pop     ds                              
365e  leave                                   
365f  retf    2h                              

; ===== SWITCHMIXING =====
3662  mov     ax,364Bh                        ; segment seg2:0000
3665  push    bp                              
3666  mov     bp,sp                           
3668  push    ds                              
3669  mov     ds,ax                           
366b  push    6Bh                             
366d  push    word ptr [bp+6h]                
3670  call far M007.M007_PUTSTATE             ; DP_MIXING
3675  mov     al,[bp+6h]                      
3678  push    ax                              
3679  call far sub_5e8e                       
367e  pop     bx                              
367f  call far UPDATE_DETECTORS               
3684  pop     ds                              
3685  leave                                   
3686  retf    2h                              
3689  add     [bx+si],al                      

; ===== SWITCHWINDOW =====
368a  mov     ax,3663h                        ; segment seg2:0000
368d  push    bp                              
368e  mov     bp,sp                           
3690  push    ds                              
3691  mov     ds,ax                           
3693  push    6Ch                             
3695  push    word ptr [bp+6h]                
3698  call far M007.M007_PUTSTATE             ; DP_WINDOW
369d  cmp     word ptr [bp+6h],1h             
36a1  jne     36D8h                           
36a3  push    11h                             
36a5  call far M007.M007_GETSTATE             ; DP_SCANRATE
36aa  cmp     ax,3h                           
36ad  jge     36D8h                           
36af  push    20h                             
36b1  call far M007.COMMANDENABLE             
36b6  or      ax,ax                           
36b8  jne     36C1h                           
36ba  call far M200.DOCOMMANDSCANRATE3        
36bf  jmp     36D8h                           
36c1  push    21h                             
36c3  call far M007.COMMANDENABLE             
36c8  or      ax,ax                           
36ca  jne     36D3h                           
36cc  call far M200.DOCOMMANDSCANRATE4        
36d1  jmp     36D8h                           
36d3  call far M200.DOCOMMANDSCANRATE5        
36d8  mov     al,[bp+6h]                      
36db  push    ax                              
36dc  call far sub_5fb4                       
36e1  pop     bx                              
36e2  pop     ds                              
36e3  leave                                   
36e4  retf    2h                              
36e7  add     [bx+si],al                      

; ===== SWITCHINVERT =====
36e8  mov     ax,368Bh                        ; segment seg2:0000
36eb  enter   6h,0h                           
36ef  push    ds                              
36f0  mov     ds,ax                           
36f2  push    64h                             
36f4  call far M007.M007_GETSTATE             ; DP_ZONE
36f9  mov     [bp-2h],al                      
36fc  push    0A3h                            
36ff  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3704  dec     ax                              
3705  jne     3764h                           
3707  push    23h                             
3709  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
370e  dec     ax                              
370f  jne     3717h                           
3711  mov     byte ptr [bp-4h],7h             
3715  jmp     3725h                           
3717  push    70h                             
3719  call far M007.M007_GETSTATE             ; DP_MIXER
371e  dec     ax                              
371f  je      3711h                           
3721  mov     byte ptr [bp-4h],3h             
3725  mov     byte ptr [bp-6h],0h             
3729  jmp     374Bh                           
372b  mov     al,[bp+6h]                      
372e  push    ax                              
372f  mov     cl,[bp-6h]                      
3732  push    cx                              
3733  call far sub_5ed2                       
3738  add     sp,4h                           
373b  mov     al,[bp-6h]                      
373e  cbw                                     
373f  mov     bx,ax                           
3741  mov     al,[bp+6h]                      
3744  mov     [bx+10h],al                     
3748  inc     byte ptr [bp-6h]                
374b  mov     al,[bp-4h]                      
374e  cmp     [bp-6h],al                      
3751  jle     372Bh                           
3753  cmp     al,7h                           
3755  jne     3781h                           
3757  push    98h                             
375a  push    word ptr [bp+6h]                
375d  call far M007.M007_PUTSTATE             ; DP_IMPLIED_INVERT
3762  jmp     3781h                           
3764  mov     al,[bp+6h]                      
3767  push    ax                              
3768  mov     cl,[bp-2h]                      
376b  push    cx                              
376c  call far sub_5ed2                       
3771  add     sp,4h                           
3774  mov     al,[bp-2h]                      
3777  cbw                                     
3778  mov     bx,ax                           
377a  mov     al,[bp+6h]                      
377d  mov     [bx+10h],al                     
3781  push    6Dh                             
3783  push    word ptr [bp+6h]                
3786  call far M007.M007_PUTSTATE             ; DP_INVERT
378b  pop     ds                              
378c  leave                                   
378d  retf    2h                              

; ===== SWITCHAUTO_VIDEO =====
3790  mov     ax,36E9h                        ; segment seg2:0000
3793  enter   2h,0h                           
3797  push    ds                              
3798  mov     ds,ax                           
379a  push    110h                            
379d  call far M007.M007_GETSTATE             ; DP_SCANGEN
37a2  dec     ax                              
37a3  je      37B0h                           
37a5  push    83h                             
37a8  call far M007.M007_GETSTATE             ; DP_GSP
37ad  dec     ax                              
37ae  jne     3822h                           
37b0  push    66h                             
37b2  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
37b7  mov     bx,ax                           
37b9  mov     [bp-2h],ax                      
37bc  cmp     byte ptr [bx+9Eh],1h            
37c1  jne     37E3h                           
37c3  shl     bx,5h                           
37c6  mov     ax,[bp+6h]                      
37c9  mov     [bx+168h],ax                    
37cd  push    ax                              
37ce  push    word ptr [bp-2h]                
37d1  call far sub_663a                       
37d6  add     sp,4h                           
37d9  push    6Eh                             
37db  push    word ptr [bp+6h]                
37de  call far M007.M007_PUTSTATE             ; DP_AUTO_VIDEO
37e3  xor     ax,ax                           
37e5  mov     [6A0h],ax                       
37e8  mov     [bp-2h],ax                      
37eb  jmp     3803h                           
37ed  mov     bx,[bp-2h]                      
37f0  shl     bx,5h                           
37f3  cmp     word ptr [bx+168h],0h           
37f8  je      3800h                           
37fa  mov     word ptr [6A0h],1h              
3800  inc     word ptr [bp-2h]                
3803  cmp     word ptr [bp-2h],12h            
3807  jl      37EDh                           
3809  mov     ax,[69Eh]                       
380c  cmp     [6A0h],ax                       
3810  je      3822h                           
3812  push    word ptr [6A0h]                 
3816  call far sub_62f4                       
381b  pop     bx                              
381c  mov     ax,[6A0h]                       
381f  mov     [69Eh],ax                       
3822  pop     ds                              
3823  leave                                   
3824  retf    2h                              
3827  add     [bx+si],al                      

; ===== SETK1 =====
3828  mov     ax,3791h                        ; segment seg2:0000
382b  enter   0Ah,0h                          
382f  push    si                              
3830  push    ds                              
3831  mov     ds,ax                           
3833  push    64h                             
3835  call far M007.M007_GETSTATE             ; DP_ZONE
383a  mov     [bp-2h],al                      
383d  push    0A3h                            
3840  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3845  dec     ax                              
3846  je      384Bh                           
3848  jmp     38CCh                           
384b  push    23h                             
384d  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3852  dec     ax                              
3853  jne     385Bh                           
3855  mov     byte ptr [bp-4h],7h             
3859  jmp     385Fh                           
385b  mov     byte ptr [bp-4h],3h             
385f  mov     byte ptr [bp-6h],0h             
3863  jmp     3868h                           
3865  inc     byte ptr [bp-6h]                
3868  mov     al,[bp-4h]                      
386b  cmp     [bp-6h],al                      
386e  jle     3873h                           
3870  jmp     3923h                           
3873  wait                                    
3874  fld     dword ptr [bp+6h]               
3877  mov     al,[bp-6h]                      
387a  cbw                                     
387b  mov     bx,ax                           
387d  shl     bx,2h                           
3880  wait                                    
3881  fst     dword ptr [bx+0B0h]             
3885  wait                                    
3886  fst     dword ptr [bp-0Ah]              
3889  wait                                    
388a  fsubr   dword ptr [0A36h]               ; [ds] = 1
388e  wait                                    
388f  fstp    dword ptr [bx+0D0h]             
3893  wait                                    
3894  fld     dword ptr [bp-0Ah]              
3897  mov     ax,bx                           
3899  sub     sp,4h                           
389c  mov     bx,sp                           
389e  wait                                    
389f  fstp    dword ptr ss:[bx]               
38a2  nop                                     
38a3  wait                                    
38a4  mov     cl,[bp-6h]                      
38a7  push    cx                              
38a8  push    0h                              
38aa  mov     si,ax                           
38ac  call far sub_5bc8                       
38b1  add     sp,8h                           
38b4  push    word ptr [si+0D2h]              
38b8  push    word ptr [si+0D0h]              
38bc  mov     al,[bp-6h]                      
38bf  push    ax                              
38c0  push    1h                              
38c2  call far sub_5bc8                       
38c7  add     sp,8h                           
38ca  jmp     3865h                           
38cc  wait                                    
38cd  fld     dword ptr [bp+6h]               
38d0  mov     al,[bp-2h]                      
38d3  cbw                                     
38d4  mov     bx,ax                           
38d6  shl     bx,2h                           
38d9  wait                                    
38da  fst     dword ptr [bx+0B0h]             
38de  wait                                    
38df  fst     dword ptr [bp-0Ah]              
38e2  wait                                    
38e3  fsubr   dword ptr [0A36h]               ; [ds] = 1
38e7  wait                                    
38e8  fstp    dword ptr [bx+0D0h]             
38ec  wait                                    
38ed  fld     dword ptr [bp-0Ah]              
38f0  mov     ax,bx                           
38f2  sub     sp,4h                           
38f5  mov     bx,sp                           
38f7  wait                                    
38f8  fstp    dword ptr ss:[bx]               
38fb  nop                                     
38fc  wait                                    
38fd  mov     cl,[bp-2h]                      
3900  push    cx                              
3901  push    0h                              
3903  mov     si,ax                           
3905  call far sub_5bc8                       
390a  add     sp,8h                           
390d  push    word ptr [si+0D2h]              
3911  push    word ptr [si+0D0h]              
3915  mov     al,[bp-2h]                      
3918  push    ax                              
3919  push    1h                              
391b  call far sub_5bc8                       
3920  add     sp,8h                           
3923  push    0B5h                            
3926  mov     al,[bp-2h]                      
3929  cbw                                     
392a  mov     bx,ax                           
392c  shl     bx,2h                           
392f  push    word ptr [bx+0B2h]              
3933  push    word ptr [bx+0B0h]              
3937  mov     si,bx                           
3939  call far M007.M007_PUTVALUE             ; AP_K1
393e  push    0B6h                            
3941  push    word ptr [si+0D2h]              
3945  push    word ptr [si+0D0h]              
3949  call far M007.M007_PUTVALUE             ; AP_K2
394e  pop     ds                              
394f  pop     si                              
3950  leave                                   
3951  retf    4h                              

; ===== SETK2 =====
3954  mov     ax,3829h                        ; segment seg2:0000
3957  enter   0Eh,0h                          
395b  push    si                              
395c  push    ds                              
395d  mov     ds,ax                           
395f  push    64h                             
3961  call far M007.M007_GETSTATE             ; DP_ZONE
3966  mov     [bp-2h],al                      
3969  push    0A3h                            
396c  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3971  dec     ax                              
3972  je      3977h                           
3974  jmp     3A00h                           
3977  push    23h                             
3979  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
397e  dec     ax                              
397f  jne     3987h                           
3981  mov     byte ptr [bp-4h],7h             
3985  jmp     398Bh                           
3987  mov     byte ptr [bp-4h],3h             
398b  mov     byte ptr [bp-6h],0h             
398f  jmp     3994h                           
3991  inc     byte ptr [bx+si]                

; ----- sub_3992 -----
3992  inc     si                              
3993  cli                                     
3994  mov     al,[bp-4h]                      
3997  cmp     [bp-6h],al                      
399a  jle     399Fh                           
399c  jmp     3A5Fh                           
399f  wait                                    
39a0  fld     dword ptr [bp+6h]               
39a3  wait                                    
39a4  fst     dword ptr [bp-0Ah]              
39a7  wait                                    
39a8  fsubr   dword ptr [0A36h]               ; [ds] = 1
39ac  wait                                    
39ad  fst     dword ptr [bp-0Eh]              
39b0  mov     al,[bp-6h]                      
39b3  cbw                                     
39b4  mov     bx,ax                           
39b6  shl     bx,2h                           
39b9  wait                                    
39ba  fstp    dword ptr [bx+0B0h]             
39be  wait                                    
39bf  fld     dword ptr [bp-0Ah]              
39c2  wait                                    
39c3  fstp    dword ptr [bx+0D0h]             
39c7  wait                                    
39c8  fld     dword ptr [bp-0Eh]              
39cb  mov     ax,bx                           
39cd  sub     sp,4h                           
39d0  mov     bx,sp                           
39d2  wait                                    
39d3  fstp    dword ptr ss:[bx]               
39d6  nop                                     
39d7  wait                                    
39d8  mov     cl,[bp-6h]                      
39db  push    cx                              
39dc  push    0h                              
39de  mov     si,ax                           
39e0  call far sub_5bc8                       
39e5  add     sp,8h                           
39e8  push    word ptr [si+0D2h]              
39ec  push    word ptr [si+0D0h]              
39f0  mov     al,[bp-6h]                      
39f3  push    ax                              
39f4  push    1h                              
39f6  call far sub_5bc8                       
39fb  add     sp,8h                           
39fe  jmp     3991h                           
3a00  wait                                    
3a01  fld     dword ptr [bp+6h]               
3a04  wait                                    
3a05  fst     dword ptr [bp-0Eh]              
3a08  wait                                    
3a09  fsubr   dword ptr [0A36h]               ; [ds] = 1
3a0d  wait                                    
3a0e  fst     dword ptr [bp-0Ah]              
3a11  mov     al,[bp-2h]                      
3a14  cbw                                     
3a15  mov     bx,ax                           
3a17  shl     bx,2h                           
3a1a  wait                                    
3a1b  fstp    dword ptr [bx+0B0h]             
3a1f  wait                                    
3a20  fld     dword ptr [bp-0Eh]              
3a23  wait                                    
3a24  fstp    dword ptr [bx+0D0h]             
3a28  wait                                    
3a29  fld     dword ptr [bp-0Ah]              
3a2c  mov     ax,bx                           
3a2e  sub     sp,4h                           
3a31  mov     bx,sp                           
3a33  wait                                    
3a34  fstp    dword ptr ss:[bx]               
3a37  nop                                     
3a38  wait                                    
3a39  mov     cl,[bp-2h]                      
3a3c  push    cx                              
3a3d  push    0h                              
3a3f  mov     si,ax                           
3a41  call far sub_5bc8                       
3a46  add     sp,8h                           
3a49  push    word ptr [si+0D2h]              
3a4d  push    word ptr [si+0D0h]              
3a51  mov     al,[bp-2h]                      
3a54  push    ax                              
3a55  push    1h                              
3a57  call far sub_5bc8                       
3a5c  add     sp,8h                           
3a5f  push    0B5h                            
3a62  mov     al,[bp-2h]                      
3a65  cbw                                     
3a66  mov     bx,ax                           
3a68  shl     bx,2h                           
3a6b  push    word ptr [bx+0B2h]              
3a6f  push    word ptr [bx+0B0h]              
3a73  mov     si,bx                           
3a75  call far M007.M007_PUTVALUE             ; AP_K1
3a7a  push    0B6h                            
3a7d  push    word ptr [si+0D2h]              
3a81  push    word ptr [si+0D0h]              
3a85  call far M007.M007_PUTVALUE             ; AP_K2
3a8a  pop     ds                              
3a8b  pop     si                              
3a8c  leave                                   
3a8d  retf    4h                              

; ===== SETALPHA =====
3a90  mov     ax,3955h                        ; segment seg2:0000
3a93  enter   0Ah,0h                          
3a97  push    ds                              
3a98  mov     ds,ax                           
3a9a  push    64h                             
3a9c  call far M007.M007_GETSTATE             ; DP_ZONE
3aa1  mov     [bp-2h],al                      
3aa4  push    0C1h                            
3aa7  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
3aac  dec     ax                              
3aad  jne     3AB2h                           
3aaf  jmp     3B61h                           
3ab2  push    0A3h                            
3ab5  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3aba  dec     ax                              
3abb  jne     3B16h                           
3abd  push    23h                             
3abf  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3ac4  dec     ax                              
3ac5  jne     3ACDh                           
3ac7  mov     byte ptr [bp-4h],7h             
3acb  jmp     3AD1h                           
3acd  mov     byte ptr [bp-4h],3h             
3ad1  mov     byte ptr [bp-6h],0h             
3ad5  jmp     3ADAh                           
3ad7  inc     byte ptr [bp-6h]                
3ada  mov     al,[bp-4h]                      
3add  cmp     [bp-6h],al                      
3ae0  jg      3B48h                           
3ae2  wait                                    
3ae3  fld     dword ptr [bp+6h]               
3ae6  wait                                    
3ae7  fstp    dword ptr [bp-0Ah]              
3aea  nop                                     
3aeb  wait                                    
3aec  push    word ptr [bp-8h]                
3aef  push    word ptr [bp-0Ah]               
3af2  mov     al,[bp-6h]                      
3af5  push    ax                              
3af6  push    2h                              
3af8  call far sub_5bc8                       
3afd  add     sp,8h                           
3b00  wait                                    
3b01  fld     dword ptr [bp-0Ah]              
3b04  mov     al,[bp-6h]                      
3b07  cbw                                     
3b08  mov     bx,ax                           
3b0a  shl     bx,2h                           
3b0d  wait                                    
3b0e  fstp    dword ptr [bx+0F0h]             
3b12  nop                                     
3b13  wait                                    
3b14  jmp     3AD7h                           
3b16  wait                                    
3b17  fld     dword ptr [bp+6h]               
3b1a  wait                                    
3b1b  fstp    dword ptr [bp-0Ah]              
3b1e  nop                                     
3b1f  wait                                    
3b20  push    word ptr [bp-8h]                
3b23  push    word ptr [bp-0Ah]               
3b26  mov     al,[bp-2h]                      
3b29  push    ax                              
3b2a  push    2h                              
3b2c  call far sub_5bc8                       
3b31  add     sp,8h                           
3b34  wait                                    
3b35  fld     dword ptr [bp-0Ah]              
3b38  mov     al,[bp-2h]                      
3b3b  cbw                                     
3b3c  mov     bx,ax                           
3b3e  shl     bx,2h                           
3b41  wait                                    
3b42  fstp    dword ptr [bx+0F0h]             
3b46  nop                                     
3b47  wait                                    
3b48  push    0B7h                            
3b4b  mov     al,[bp-2h]                      
3b4e  cbw                                     
3b4f  mov     bx,ax                           
3b51  shl     bx,2h                           
3b54  push    word ptr [bx+0F2h]              
3b58  push    word ptr [bx+0F0h]              
3b5c  call far M007.M007_PUTVALUE             ; AP_ALPHA
3b61  pop     ds                              
3b62  leave                                   
3b63  retf    4h                              

; ===== SETBETA =====
3b66  mov     ax,3A91h                        ; segment seg2:0000
3b69  enter   0Ah,0h                          
3b6d  push    ds                              
3b6e  mov     ds,ax                           
3b70  push    64h                             
3b72  call far M007.M007_GETSTATE             ; DP_ZONE
3b77  mov     [bp-2h],al                      
3b7a  push    0C1h                            
3b7d  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
3b82  dec     ax                              
3b83  jne     3B88h                           
3b85  jmp     3C37h                           
3b88  push    0A3h                            
3b8b  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3b90  dec     ax                              
3b91  jne     3BECh                           
3b93  push    23h                             
3b95  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3b9a  dec     ax                              
3b9b  jne     3BA3h                           
3b9d  mov     byte ptr [bp-4h],7h             
3ba1  jmp     3BA7h                           
3ba3  mov     byte ptr [bp-4h],3h             
3ba7  mov     byte ptr [bp-6h],0h             
3bab  jmp     3BB0h                           
3bad  inc     byte ptr [bp-6h]                
3bb0  mov     al,[bp-4h]                      
3bb3  cmp     [bp-6h],al                      
3bb6  jg      3C1Eh                           
3bb8  wait                                    
3bb9  fld     dword ptr [bp+6h]               
3bbc  wait                                    
3bbd  fstp    dword ptr [bp-0Ah]              
3bc0  nop                                     
3bc1  wait                                    
3bc2  push    word ptr [bp-8h]                
3bc5  push    word ptr [bp-0Ah]               
3bc8  mov     al,[bp-6h]                      
3bcb  push    ax                              
3bcc  push    3h                              
3bce  call far sub_5bc8                       
3bd3  add     sp,8h                           
3bd6  wait                                    
3bd7  fld     dword ptr [bp-0Ah]              
3bda  mov     al,[bp-6h]                      
3bdd  cbw                                     
3bde  mov     bx,ax                           
3be0  shl     bx,2h                           
3be3  wait                                    
3be4  fstp    dword ptr [bx+110h]             
3be8  nop                                     
3be9  wait                                    
3bea  jmp     3BADh                           
3bec  wait                                    
3bed  fld     dword ptr [bp+6h]               
3bf0  wait                                    
3bf1  fstp    dword ptr [bp-0Ah]              
3bf4  nop                                     
3bf5  wait                                    
3bf6  push    word ptr [bp-8h]                
3bf9  push    word ptr [bp-0Ah]               
3bfc  mov     al,[bp-2h]                      
3bff  push    ax                              
3c00  push    3h                              
3c02  call far sub_5bc8                       
3c07  add     sp,8h                           
3c0a  wait                                    
3c0b  fld     dword ptr [bp-0Ah]              
3c0e  mov     al,[bp-2h]                      
3c11  cbw                                     
3c12  mov     bx,ax                           
3c14  shl     bx,2h                           
3c17  wait                                    
3c18  fstp    dword ptr [bx+110h]             
3c1c  nop                                     
3c1d  wait                                    
3c1e  push    0B8h                            
3c21  mov     al,[bp-2h]                      
3c24  cbw                                     
3c25  mov     bx,ax                           
3c27  shl     bx,2h                           
3c2a  push    word ptr [bx+112h]              
3c2e  push    word ptr [bx+110h]              
3c32  call far M007.M007_PUTVALUE             ; AP_BETA
3c37  pop     ds                              
3c38  leave                                   
3c39  retf    4h                              

; ===== SETNR_COEFF =====
3c3c  mov     ax,3B67h                        ; segment seg2:0000
3c3f  enter   8h,0h                           
3c43  push    ds                              
3c44  mov     ds,ax                           
3c46  wait                                    
3c47  fld     dword ptr [bp+6h]               
3c4a  call far sub_015a                       
3c4f  mov     [bp-8h],ax                      
3c52  push    0C1h                            
3c55  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
3c5a  dec     ax                              
3c5b  jne     3C60h                           
3c5d  jmp     3D52h                           
3c60  push    0E4h                            
3c63  wait                                    
3c64  fild    word ptr [bp-8h]                
3c67  sub     sp,4h                           
3c6a  mov     bx,sp                           
3c6c  wait                                    
3c6d  fstp    dword ptr ss:[bx]               
3c70  nop                                     
3c71  wait                                    
3c72  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
3c77  push    5Dh                             
3c79  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
3c7e  jmp     3D46h                           
3c81  push    0A3h                            
3c84  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3c89  dec     ax                              
3c8a  jne     3CC7h                           
3c8c  call far DOCOMMANDUNFREEZE_ALL          
3c91  push    23h                             
3c93  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3c98  dec     ax                              
3c99  jne     3CA1h                           
3c9b  mov     byte ptr [bp-4h],7h             
3c9f  jmp     3CA5h                           
3ca1  mov     byte ptr [bp-4h],3h             
3ca5  mov     byte ptr [bp-6h],0h             
3ca9  jmp     3CAEh                           
3cab  inc     byte ptr [bp-6h]                
3cae  mov     al,[bp-4h]                      
3cb1  cmp     [bp-6h],al                      
3cb4  jg      3CDFh                           
3cb6  mov     al,[bp-6h]                      
3cb9  cbw                                     
3cba  mov     bx,ax                           
3cbc  mov     al,[bp-8h]                      
3cbf  dec     al                              
3cc1  mov     [bx+18h],al                     
3cc5  jmp     3CABh                           
3cc7  call far DOCOMMANDUNFREEZE_ZONE         
3ccc  push    64h                             
3cce  call far M007.M007_GETSTATE             ; DP_ZONE
3cd3  cbw                                     
3cd4  mov     bx,ax                           
3cd6  mov     al,[bp-8h]                      
3cd9  dec     al                              
3cdb  mov     [bx+18h],al                     
3cdf  push    0B9h                            
3ce2  wait                                    
3ce3  fild    word ptr [bp-8h]                
3ce6  sub     sp,4h                           
3ce9  mov     bx,sp                           
3ceb  wait                                    
3cec  fstp    dword ptr ss:[bx]               
3cef  nop                                     
3cf0  wait                                    
3cf1  call far M007.M007_PUTVALUE             ; AP_FRAME_AVERAGE_COUNT
3cf6  mov     byte ptr [20h],0h               
3cfb  push    ds                              
3cfc  push    18h                             
3cff  call far sub_5c36                       
3d04  add     sp,4h                           
3d07  jmp     3D52h                           
3d09  push    0A3h                            
3d0c  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3d11  dec     ax                              
3d12  jne     3D1Bh                           
3d14  call far DOCOMMANDUNFREEZE_ALL          
3d19  jmp     3D20h                           
3d1b  call far DOCOMMANDUNFREEZE_ZONE         
3d20  push    0E3h                            
3d23  wait                                    
3d24  fild    word ptr [bp-8h]                
3d27  sub     sp,4h                           
3d2a  mov     bx,sp                           
3d2c  wait                                    
3d2d  fstp    dword ptr ss:[bx]               
3d30  nop                                     
3d31  wait                                    
3d32  call far M007.M007_PUTVALUE             ; AP_LINE_AVERAGE_COUNT
3d37  push    0h                              
3d39  mov     al,[bp-8h]                      
3d3c  dec     al                              
3d3e  push    ax                              
3d3f  call far sub_5bfc                       
3d44  jmp     3D04h                           
3d46  dec     ax                              
3d47  dec     ax                              
3d48  jne     3D4Dh                           
3d4a  jmp     3C81h                           
3d4d  sub     ax,3h                           
3d50  je      3D09h                           
3d52  pop     ds                              
3d53  leave                                   
3d54  retf    4h                              
3d57  add     [bx+si],al                      

; ===== SETFRAME_AVERAGE_COUNT =====
3d58  mov     ax,3C3Dh                        ; segment seg2:0000
3d5b  enter   8h,0h                           
3d5f  push    ds                              
3d60  mov     ds,ax                           
3d62  wait                                    
3d63  fld     dword ptr [bp+6h]               
3d66  call far sub_015a                       
3d6b  mov     [bp-2h],ax                      
3d6e  push    64h                             
3d70  call far M007.M007_GETSTATE             ; DP_ZONE
3d75  mov     [bp-4h],al                      
3d78  push    0C1h                            
3d7b  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
3d80  dec     ax                              
3d81  jne     3D86h                           
3d83  jmp     3E68h                           
3d86  push    0A3h                            
3d89  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3d8e  dec     ax                              
3d8f  jne     3DC7h                           
3d91  push    23h                             
3d93  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3d98  dec     ax                              
3d99  jne     3DA1h                           
3d9b  mov     byte ptr [bp-6h],7h             
3d9f  jmp     3DA5h                           
3da1  mov     byte ptr [bp-6h],3h             
3da5  mov     byte ptr [bp-8h],0h             
3da9  jmp     3DAEh                           
3dab  inc     byte ptr [bp-8h]                
3dae  mov     al,[bp-6h]                      
3db1  cmp     [bp-8h],al                      
3db4  jg      3DD6h                           
3db6  mov     al,[bp-8h]                      
3db9  cbw                                     
3dba  mov     bx,ax                           
3dbc  mov     al,[bp-2h]                      
3dbf  dec     al                              
3dc1  mov     [bx+18h],al                     
3dc5  jmp     3DABh                           
3dc7  mov     al,[bp-4h]                      
3dca  cbw                                     
3dcb  mov     bx,ax                           
3dcd  mov     al,[bp-2h]                      
3dd0  dec     al                              
3dd2  mov     [bx+18h],al                     
3dd6  push    0B9h                            
3dd9  wait                                    
3dda  fild    word ptr [bp-2h]                
3ddd  sub     sp,4h                           
3de0  mov     bx,sp                           
3de2  wait                                    
3de3  fstp    dword ptr ss:[bx]               
3de6  nop                                     
3de7  wait                                    
3de8  call far M007.M007_PUTVALUE             ; AP_FRAME_AVERAGE_COUNT
3ded  push    5Dh                             
3def  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
3df4  cmp     ax,2h                           
3df7  jne     3E38h                           
3df9  push    0A3h                            
3dfc  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3e01  dec     ax                              
3e02  jne     3E0Bh                           
3e04  call far DOCOMMANDUNFREEZE_ALL          
3e09  jmp     3E10h                           
3e0b  call far DOCOMMANDUNFREEZE_ZONE         
3e10  mov     byte ptr [20h],0h               
3e15  push    ds                              
3e16  push    18h                             
3e19  call far sub_5c36                       
3e1e  add     sp,4h                           
3e21  push    0E4h                            
3e24  wait                                    
3e25  fild    word ptr [bp-2h]                
3e28  sub     sp,4h                           
3e2b  mov     bx,sp                           
3e2d  wait                                    
3e2e  fstp    dword ptr ss:[bx]               
3e31  nop                                     
3e32  wait                                    
3e33  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
3e38  push    5Dh                             
3e3a  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
3e3f  jmp     3E5Fh                           
3e41  call far DOCOMMANDFRAME_INT             
3e46  push    0E4h                            
3e49  wait                                    
3e4a  fild    word ptr [bp-2h]                
3e4d  sub     sp,4h                           
3e50  mov     bx,sp                           
3e52  wait                                    
3e53  fstp    dword ptr ss:[bx]               
3e56  nop                                     
3e57  wait                                    
3e58  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
3e5d  jmp     3E68h                           
3e5f  or      ax,ax                           
3e61  je      3E41h                           
3e63  sub     ax,4h                           
3e66  je      3E41h                           
3e68  pop     ds                              
3e69  leave                                   
3e6a  retf    4h                              
3e6d  add     [bx+si],al                      

; ===== SETFRAME_INT_COUNT =====
3e6e  mov     ax,3D59h                        ; segment seg2:0000
3e71  push    bp                              
3e72  mov     bp,sp                           
3e74  push    ds                              
3e75  mov     ds,ax                           
3e77  pop     ds                              
3e78  leave                                   
3e79  retf    4h                              

; ===== SETLINE_INT_COUNT =====
3e7c  mov     ax,3E6Fh                        ; segment seg2:0000
3e7f  push    bp                              
3e80  mov     bp,sp                           
3e82  push    ds                              
3e83  mov     ds,ax                           
3e85  pop     ds                              
3e86  leave                                   
3e87  retf    4h                              

; ===== SETLINE_AVERAGE_COUNT =====
3e8a  mov     ax,3E7Dh                        ; segment seg2:0000
3e8d  enter   2h,0h                           
3e91  push    ds                              
3e92  mov     ds,ax                           
3e94  wait                                    
3e95  fld     dword ptr [bp+6h]               
3e98  call far sub_015a                       
3e9d  mov     [bp-2h],ax                      
3ea0  push    0C1h                            
3ea3  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
3ea8  dec     ax                              
3ea9  je      3F0Ch                           
3eab  push    0E3h                            
3eae  wait                                    
3eaf  fild    word ptr [bp-2h]                
3eb2  sub     sp,4h                           
3eb5  mov     bx,sp                           
3eb7  wait                                    
3eb8  fstp    dword ptr ss:[bx]               
3ebb  nop                                     
3ebc  wait                                    
3ebd  call far M007.M007_PUTVALUE             ; AP_LINE_AVERAGE_COUNT
3ec2  push    5Dh                             
3ec4  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
3ec9  cmp     ax,5h                           
3ecc  jne     3F0Ch                           
3ece  push    0A3h                            
3ed1  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3ed6  dec     ax                              
3ed7  jne     3EE0h                           
3ed9  call far DOCOMMANDUNFREEZE_ALL          
3ede  jmp     3EE5h                           
3ee0  call far DOCOMMANDUNFREEZE_ZONE         
3ee5  push    0h                              
3ee7  mov     al,[bp-2h]                      
3eea  dec     al                              
3eec  push    ax                              
3eed  call far sub_5bfc                       
3ef2  add     sp,4h                           
3ef5  push    0E4h                            
3ef8  wait                                    
3ef9  fild    word ptr [bp-2h]                
3efc  sub     sp,4h                           
3eff  mov     bx,sp                           
3f01  wait                                    
3f02  fstp    dword ptr ss:[bx]               
3f05  nop                                     
3f06  wait                                    
3f07  call far M007.M007_PUTVALUE             ; AP_NR_COEFF
3f0c  pop     ds                              
3f0d  leave                                   
3f0e  retf    4h                              
3f11  add     [bx+si],al                      

; ===== SETGAMMA =====
3f12  mov     ax,3E8Bh                        ; segment seg2:0000
3f15  enter   4h,0h                           
3f19  push    ds                              
3f1a  mov     ds,ax                           
3f1c  push    68h                             
3f1e  call far M007.M007_GETSTATE             ; DP_LUT_DESTINATION
3f23  mov     [bp-2h],al                      
3f26  cmp     al,8h                           
3f28  jl      3F5Bh                           
3f2a  cmp     al,0Dh                          
3f2c  jg      3F5Bh                           
3f2e  push    113h                            
3f31  call far M007.M007_GETSTATE             ; DP_INPUT_LUT_MODE
3f36  dec     ax                              
3f37  jne     3F4Bh                           
3f39  push    word ptr [bp+8h]                
3f3c  push    word ptr [bp+6h]                
3f3f  mov     al,[bp-2h]                      
3f42  push    ax                              
3f43  call far sub_5c80                       
3f48  add     sp,6h                           
3f4b  mov     ax,[bp+6h]                      
3f4e  mov     dx,[bp+8h]                      
3f51  mov     [82h],ax                        
3f54  mov     [84h],dx                        
3f58  jmp     4019h                           
3f5b  push    0A3h                            
3f5e  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
3f63  dec     ax                              
3f64  jne     3FDBh                           
3f66  push    23h                             
3f68  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3f6d  dec     ax                              
3f6e  jne     3F76h                           
3f70  mov     byte ptr [bp-4h],7h             
3f74  jmp     3F7Ah                           
3f76  mov     byte ptr [bp-4h],3h             
3f7a  mov     byte ptr [bp-2h],0h             
3f7e  jmp     3F97h                           
3f80  cbw                                     
3f81  mov     bx,ax                           
3f83  shl     bx,2h                           
3f86  mov     ax,[bp+6h]                      
3f89  mov     dx,[bp+8h]                      
3f8c  mov     [bx+62h],ax                     
3f90  mov     [bx+64h],dx                     
3f94  inc     byte ptr [bp-2h]                
3f97  mov     al,[bp-2h]                      
3f9a  cmp     [bp-4h],al                      
3f9d  jge     3F80h                           
3f9f  push    23h                             
3fa1  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
3fa6  dec     ax                              
3fa7  jne     3FC6h                           
3fa9  push    113h                            
3fac  call far M007.M007_GETSTATE             ; DP_INPUT_LUT_MODE
3fb1  dec     ax                              
3fb2  jne     4019h                           
3fb4  push    word ptr [bp+8h]                
3fb7  push    word ptr [bp+6h]                
3fba  push    0Fh                             
3fbc  call far sub_5c80                       
3fc1  add     sp,6h                           
3fc4  jmp     4019h                           
3fc6  push    113h                            
3fc9  call far M007.M007_GETSTATE             ; DP_INPUT_LUT_MODE
3fce  dec     ax                              
3fcf  jne     4019h                           
3fd1  push    word ptr [bp+8h]                
3fd4  push    word ptr [bp+6h]                
3fd7  push    0Eh                             
3fd9  jmp     3FBCh                           
3fdb  push    64h                             
3fdd  call far M007.M007_GETSTATE             ; DP_RUNUPSTATE = 100
3fe2  mov     [bp-2h],al                      
3fe5  push    113h                            
3fe8  call far M007.M007_GETSTATE             ; DP_INPUT_LUT_MODE
3fed  dec     ax                              
3fee  jne     4002h                           
3ff0  push    word ptr [bp+8h]                
3ff3  push    word ptr [bp+6h]                
3ff6  mov     al,[bp-2h]                      
3ff9  push    ax                              
3ffa  call far sub_5c80                       
3fff  add     sp,6h                           
4002  mov     al,[bp-2h]                      
4005  cbw                                     
4006  mov     bx,ax                           
4008  shl     bx,2h                           
400b  mov     ax,[bp+6h]                      
400e  mov     dx,[bp+8h]                      
4011  mov     [bx+62h],ax                     
4015  mov     [bx+64h],dx                     
4019  push    0BCh                            
401c  push    word ptr [bp+8h]                
401f  push    word ptr [bp+6h]                
4022  call far M007.M007_PUTVALUE             ; AP_GAMMA
4027  pop     ds                              
4028  leave                                   
4029  retf    4h                              

; ===== SETGAIN =====
402c  mov     ax,3F13h                        ; segment seg2:0000
402f  enter   0Ah,0h                          
4033  push    ds                              
4034  mov     ds,ax                           
4036  push    64h                             
4038  call far M007.M007_GETSTATE             ; DP_ZONE
403d  mov     [bp-2h],al                      
4040  push    0A3h                            
4043  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
4048  dec     ax                              
4049  jne     40BEh                           
404b  push    23h                             
404d  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
4052  dec     ax                              
4053  jne     405Bh                           
4055  mov     byte ptr [bp-4h],7h             
4059  jmp     4069h                           
405b  push    70h                             
405d  call far M007.M007_GETSTATE             ; DP_MIXER
4062  dec     ax                              
4063  je      4055h                           
4065  mov     byte ptr [bp-4h],3h             
4069  mov     byte ptr [bp-6h],0h             
406d  jmp     40A2h                           
406f  wait                                    
4070  fld     dword ptr [bp+6h]               
4073  wait                                    
4074  fstp    dword ptr [bp-0Ah]              
4077  nop                                     
4078  wait                                    
4079  push    word ptr [bp-8h]                
407c  push    word ptr [bp-0Ah]               
407f  mov     al,[bp-6h]                      
4082  push    ax                              
4083  call far sub_5ef6                       
4088  add     sp,6h                           
408b  wait                                    
408c  fld     dword ptr [bp-0Ah]              
408f  mov     al,[bp-6h]                      
4092  cbw                                     
4093  mov     bx,ax                           
4095  shl     bx,2h                           
4098  wait                                    
4099  fstp    dword ptr [bx+22h]              
409d  nop                                     
409e  wait                                    
409f  inc     byte ptr [bp-6h]                
40a2  mov     al,[bp-4h]                      
40a5  cmp     [bp-6h],al                      
40a8  jle     406Fh                           
40aa  cmp     al,7h                           
40ac  jne     40EEh                           
40ae  push    0D7h                            
40b1  push    word ptr [bp+8h]                
40b4  push    word ptr [bp+6h]                
40b7  call far M007.M007_PUTVALUE             ; AP_IMPLIED_GAIN
40bc  jmp     40EEh                           
40be  wait                                    
40bf  fld     dword ptr [bp+6h]               
40c2  wait                                    
40c3  fstp    dword ptr [bp-0Ah]              
40c6  nop                                     
40c7  wait                                    
40c8  push    word ptr [bp-8h]                
40cb  push    word ptr [bp-0Ah]               
40ce  mov     al,[bp-2h]                      
40d1  push    ax                              
40d2  call far sub_5ef6                       
40d7  add     sp,6h                           
40da  wait                                    
40db  fld     dword ptr [bp-0Ah]              
40de  mov     al,[bp-2h]                      
40e1  cbw                                     
40e2  mov     bx,ax                           
40e4  shl     bx,2h                           
40e7  wait                                    
40e8  fstp    dword ptr [bx+22h]              
40ec  nop                                     
40ed  wait                                    
40ee  push    0BDh                            
40f1  push    word ptr [bp+8h]                
40f4  push    word ptr [bp+6h]                
40f7  call far M007.M007_PUTVALUE             ; AP_GAIN
40fc  pop     ds                              
40fd  leave                                   
40fe  retf    4h                              
4101  add     [bx+si],al                      

; ===== SETOFFSET =====
4102  mov     ax,402Dh                        ; segment seg2:0000
4105  enter   0Ah,0h                          
4109  push    ds                              
410a  mov     ds,ax                           
410c  push    64h                             
410e  call far M007.M007_GETSTATE             ; DP_ZONE
4113  mov     [bp-2h],al                      
4116  push    0A3h                            
4119  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
411e  dec     ax                              
411f  jne     4194h                           
4121  push    23h                             
4123  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
4128  dec     ax                              
4129  jne     4131h                           
412b  mov     byte ptr [bp-4h],7h             
412f  jmp     413Fh                           
4131  push    70h                             
4133  call far M007.M007_GETSTATE             ; DP_MIXER
4138  dec     ax                              
4139  je      412Bh                           
413b  mov     byte ptr [bp-4h],3h             
413f  mov     byte ptr [bp-6h],0h             
4143  jmp     4178h                           
4145  wait                                    
4146  fld     dword ptr [bp+6h]               
4149  wait                                    
414a  fstp    dword ptr [bp-0Ah]              
414d  nop                                     
414e  wait                                    
414f  push    word ptr [bp-8h]                
4152  push    word ptr [bp-0Ah]               
4155  mov     al,[bp-6h]                      
4158  push    ax                              
4159  call far sub_5f40                       
415e  add     sp,6h                           
4161  wait                                    
4162  fld     dword ptr [bp-0Ah]              
4165  mov     al,[bp-6h]                      
4168  cbw                                     
4169  mov     bx,ax                           
416b  shl     bx,2h                           
416e  wait                                    
416f  fstp    dword ptr [bx+42h]              
4173  nop                                     
4174  wait                                    
4175  inc     byte ptr [bp-6h]                
4178  mov     al,[bp-4h]                      
417b  cmp     [bp-6h],al                      
417e  jle     4145h                           
4180  cmp     al,7h                           
4182  jne     41C4h                           
4184  push    0D8h                            
4187  push    word ptr [bp+8h]                
418a  push    word ptr [bp+6h]                
418d  call far M007.M007_PUTVALUE             ; AP_IMPLIED_OFFSET
4192  jmp     41C4h                           
4194  wait                                    
4195  fld     dword ptr [bp+6h]               
4198  wait                                    
4199  fstp    dword ptr [bp-0Ah]              
419c  nop                                     
419d  wait                                    
419e  push    word ptr [bp-8h]                
41a1  push    word ptr [bp-0Ah]               
41a4  mov     al,[bp-2h]                      
41a7  push    ax                              
41a8  call far sub_5f40                       
41ad  add     sp,6h                           
41b0  wait                                    
41b1  fld     dword ptr [bp-0Ah]              
41b4  mov     al,[bp-2h]                      
41b7  cbw                                     
41b8  mov     bx,ax                           
41ba  shl     bx,2h                           
41bd  wait                                    
41be  fstp    dword ptr [bx+42h]              
41c2  nop                                     
41c3  wait                                    
41c4  push    0BEh                            
41c7  push    word ptr [bp+8h]                
41ca  push    word ptr [bp+6h]                
41cd  call far M007.M007_PUTVALUE             ; AP_OFFSET
41d2  pop     ds                              
41d3  leave                                   
41d4  retf    4h                              
41d7  add     [bx+si],al                      

; ===== SETCONTRAST =====
41d8  mov     ax,4103h                        ; segment seg2:0000
41db  enter   6h,0h                           
41df  push    ds                              
41e0  mov     ds,ax                           
41e2  push    66h                             
41e4  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
41e9  mov     bx,ax                           
41eb  mov     [bp-2h],ax                      
41ee  cmp     byte ptr [bx+9Eh],1h            
41f3  jne     4236h                           
41f5  wait                                    
41f6  fld     dword ptr [bp+6h]               
41f9  wait                                    
41fa  fst     dword ptr [bp-6h]               
41fd  shl     bx,5h                           
4200  wait                                    
4201  fstp    dword ptr [bx+15Ch]             
4205  wait                                    
4206  fld     dword ptr [bp-6h]               
4209  sub     sp,4h                           
420c  mov     bx,sp                           
420e  wait                                    
420f  fstp    dword ptr ss:[bx]               
4212  nop                                     
4213  wait                                    
4214  push    word ptr [bp-2h]                
4217  call far sub_639c                       
421c  add     sp,6h                           
421f  push    0BFh                            
4222  wait                                    
4223  fld     dword ptr [bp-6h]               
4226  sub     sp,4h                           
4229  mov     bx,sp                           
422b  wait                                    
422c  fstp    dword ptr ss:[bx]               
422f  nop                                     
4230  wait                                    
4231  call far M007.M007_PUTVALUE             ; AP_CONTRAST
4236  pop     ds                              
4237  leave                                   
4238  retf    4h                              
423b  add     [bx+si],al                      

; ===== SETAUTO_BRIGHT =====
423c  mov     ax,41D9h                        ; segment seg2:0000
423f  enter   6h,0h                           
4243  push    ds                              
4244  mov     ds,ax                           
4246  push    66h                             
4248  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
424d  mov     bx,ax                           
424f  mov     [bp-2h],ax                      
4252  cmp     byte ptr [bx+9Eh],1h            
4257  jne     429Ah                           
4259  wait                                    
425a  fld     dword ptr [bp+6h]               
425d  wait                                    
425e  fst     dword ptr [bp-6h]               
4261  shl     bx,5h                           
4264  wait                                    
4265  fstp    dword ptr [bx+164h]             
4269  wait                                    
426a  fld     dword ptr [bp-6h]               
426d  sub     sp,4h                           
4270  mov     bx,sp                           
4272  wait                                    
4273  fstp    dword ptr ss:[bx]               
4276  nop                                     
4277  wait                                    
4278  push    word ptr [bp-2h]                
427b  call far sub_6430                       
4280  add     sp,6h                           
4283  push    0C0h                            
4286  wait                                    
4287  fld     dword ptr [bp-6h]               
428a  sub     sp,4h                           
428d  mov     bx,sp                           
428f  wait                                    
4290  fstp    dword ptr ss:[bx]               
4293  nop                                     
4294  wait                                    
4295  call far M007.M007_PUTVALUE             ; AP_AUTO_BRIGHT
429a  pop     ds                              
429b  leave                                   
429c  retf    4h                              
429f  add     [bx+si],al                      

; ===== SETAUTO_CONTRAST =====
42a0  mov     ax,423Dh                        ; segment seg2:0000
42a3  enter   6h,0h                           
42a7  push    ds                              
42a8  mov     ds,ax                           
42aa  push    66h                             
42ac  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
42b1  mov     bx,ax                           
42b3  mov     [bp-2h],ax                      
42b6  cmp     byte ptr [bx+9Eh],1h            
42bb  jne     42FEh                           
42bd  wait                                    
42be  fld     dword ptr [bp+6h]               
42c1  wait                                    
42c2  fst     dword ptr [bp-6h]               
42c5  shl     bx,5h                           
42c8  wait                                    
42c9  fstp    dword ptr [bx+160h]             
42cd  wait                                    
42ce  fld     dword ptr [bp-6h]               
42d1  sub     sp,4h                           
42d4  mov     bx,sp                           
42d6  wait                                    
42d7  fstp    dword ptr ss:[bx]               
42da  nop                                     
42db  wait                                    
42dc  push    word ptr [bp-2h]                
42df  call far sub_6402                       
42e4  add     sp,6h                           
42e7  push    0C1h                            
42ea  wait                                    
42eb  fld     dword ptr [bp-6h]               
42ee  sub     sp,4h                           
42f1  mov     bx,sp                           
42f3  wait                                    
42f4  fstp    dword ptr ss:[bx]               
42f7  nop                                     
42f8  wait                                    
42f9  call far M007.M007_PUTVALUE             ; AP_AUTO_CONTRAST
42fe  pop     ds                              
42ff  leave                                   
4300  retf    4h                              
4303  add     [bx+si],al                      

; ===== SETABC_BRIGHT =====
4304  mov     ax,42A1h                        ; segment seg2:0000
4307  enter   6h,0h                           
430b  push    ds                              
430c  mov     ds,ax                           
430e  push    66h                             
4310  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
4315  mov     bx,ax                           
4317  mov     [bp-2h],ax                      
431a  cmp     byte ptr [bx+9Eh],1h            
431f  jne     4362h                           
4321  wait                                    
4322  fld     dword ptr [bp+6h]               
4325  wait                                    
4326  fst     dword ptr [bp-6h]               
4329  shl     bx,5h                           
432c  wait                                    
432d  fstp    dword ptr [bx+170h]             
4331  wait                                    
4332  fld     dword ptr [bp-6h]               
4335  sub     sp,4h                           
4338  mov     bx,sp                           
433a  wait                                    
433b  fstp    dword ptr ss:[bx]               
433e  nop                                     
433f  wait                                    
4340  push    word ptr [bp-2h]                
4343  call far sub_648c                       
4348  add     sp,6h                           
434b  push    12Ch                            
434e  wait                                    
434f  fld     dword ptr [bp-6h]               
4352  sub     sp,4h                           
4355  mov     bx,sp                           
4357  wait                                    
4358  fstp    dword ptr ss:[bx]               
435b  nop                                     
435c  wait                                    
435d  call far M007.M007_PUTVALUE             ; AP_ABC_BRIGHT
4362  pop     ds                              
4363  leave                                   
4364  retf    4h                              
4367  add     [bx+si],al                      

; ===== SETABC_CONTR =====
4368  mov     ax,4305h                        ; segment seg2:0000
436b  enter   6h,0h                           
436f  push    ds                              
4370  mov     ds,ax                           
4372  push    66h                             
4374  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
4379  mov     bx,ax                           
437b  mov     [bp-2h],ax                      
437e  cmp     byte ptr [bx+9Eh],1h            
4383  jne     43C6h                           
4385  wait                                    
4386  fld     dword ptr [bp+6h]               
4389  wait                                    
438a  fst     dword ptr [bp-6h]               
438d  shl     bx,5h                           
4390  wait                                    
4391  fstp    dword ptr [bx+174h]             
4395  wait                                    
4396  fld     dword ptr [bp-6h]               
4399  sub     sp,4h                           
439c  mov     bx,sp                           
439e  wait                                    
439f  fstp    dword ptr ss:[bx]               
43a2  nop                                     
43a3  wait                                    
43a4  push    word ptr [bp-2h]                
43a7  call far sub_645e                       
43ac  add     sp,6h                           
43af  push    12Dh                            
43b2  wait                                    
43b3  fld     dword ptr [bp-6h]               
43b6  sub     sp,4h                           
43b9  mov     bx,sp                           
43bb  wait                                    
43bc  fstp    dword ptr ss:[bx]               
43bf  nop                                     
43c0  wait                                    
43c1  call far M007.M007_PUTVALUE             ; AP_ABC_CONTR
43c6  pop     ds                              
43c7  leave                                   
43c8  retf    4h                              
43cb  add     [bx+si],al                      

; ===== DOCOMMANDFREEZE_ZONE =====
43cc  mov     ax,4369h                        ; segment seg2:0000
43cf  enter   0Ah,0h                          
43d3  push    ds                              
43d4  mov     ds,ax                           
43d6  push    76h                             
43d8  call far M007.M007_GETSTATE             ; DP_FREEZE_ON
43dd  mov     [bp-0Ah],al                     
43e0  mov     al,2h                           
43e2  mov     [bp-9h],al                      
43e5  mov     [bp-8h],al                      
43e8  mov     [bp-7h],al                      
43eb  mov     [bp-6h],al                      
43ee  mov     [bp-5h],al                      
43f1  mov     [bp-4h],al                      
43f4  mov     [bp-3h],al                      
43f7  mov     [bp-2h],al                      
43fa  push    64h                             
43fc  call far M007.M007_GETSTATE             ; DP_ZONE
4401  jmp     4433h                           
4403  mov     byte ptr [bp-9h],1h             
4407  jmp     4450h                           
4409  mov     byte ptr [bp-8h],1h             
440d  jmp     4450h                           
440f  mov     byte ptr [bp-7h],1h             
4413  jmp     4450h                           
4415  mov     byte ptr [bp-6h],1h             
4419  jmp     4450h                           
441b  mov     byte ptr [bp-5h],1h             
441f  jmp     4450h                           
4421  mov     byte ptr [bp-4h],1h             
4425  jmp     4450h                           
4427  mov     byte ptr [bp-3h],1h             
442b  jmp     4450h                           
442d  mov     byte ptr [bp-2h],1h             
4431  jmp     4450h                           
4433  cmp     ax,7h                           
4436  ja      4450h                           
4438  add     ax,ax                           
443a  xchg    ax,bx                           
443b  jmp     word ptr cs:[bx+4440h]          
4440  add     ax,[si+9h]                      
4443  inc     sp                              
4444  cmove   dx,[di]                         
4447  inc     sp                              
4448  sbb     ax,[si+21h]                     
444b  inc     sp                              
444c  daa                                     
444d  inc     sp                              
444e  sub     ax,8D44h                        
4451  inc     si                              
4452  not     byte ptr [9A50h]                
4456  aam     5Fh                             
4458  stosb                                   
4459  inc     bx                              
445a  add     sp,4h                           
445d  push    78h                             
445f  push    1h                              
4461  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
4466  pop     ds                              
4467  leave                                   
4468  retf                                    
4469  add     [bx+si],al                      

; ===== DOCOMMANDUNFREEZE_ZONE =====
446a  mov     ax,43CDh                        ; segment seg2:0000
446d  enter   0Ah,0h                          
4471  push    ds                              
4472  mov     ds,ax                           
4474  mov     al,2h                           
4476  mov     [bp-0Ah],al                     
4479  mov     [bp-9h],al                      
447c  mov     [bp-8h],al                      
447f  mov     [bp-7h],al                      
4482  mov     [bp-6h],al                      
4485  mov     [bp-5h],al                      
4488  mov     [bp-4h],al                      
448b  mov     [bp-3h],al                      
448e  mov     [bp-2h],al                      
4491  push    64h                             
4493  call far M007.M007_GETSTATE             ; DP_ZONE
4498  jmp     44CAh                           
449a  mov     byte ptr [bp-9h],0h             
449e  jmp     44E7h                           
44a0  mov     byte ptr [bp-8h],0h             
44a4  jmp     44E7h                           
44a6  mov     byte ptr [bp-7h],0h             
44aa  jmp     44E7h                           
44ac  mov     byte ptr [bp-6h],0h             
44b0  jmp     44E7h                           
44b2  mov     byte ptr [bp-5h],0h             
44b6  jmp     44E7h                           
44b8  mov     byte ptr [bp-4h],0h             
44bc  jmp     44E7h                           
44be  mov     byte ptr [bp-3h],0h             
44c2  jmp     44E7h                           
44c4  mov     byte ptr [bp-2h],0h             
44c8  jmp     44E7h                           
44ca  cmp     ax,7h                           
44cd  ja      44E7h                           
44cf  add     ax,ax                           
44d1  xchg    ax,bx                           
44d2  jmp     word ptr cs:[bx+44D7h]          
44d7  call    0A644h:0A044h                   
44dc  inc     sp                              
44dd  lodsb                                   
44de  inc     sp                              
44df  mov     dl,44h                          
44e1  mov     ax,0BE44h                       
44e4  inc     sp                              
44e5  les     ax,[si-73h]                     
44e8  inc     si                              
44e9  not     byte ptr [9A50h]                
44ed  aam     5Fh                             
44ef  pop     ax                              
44f0  inc     sp                              
44f1  add     sp,4h                           
44f4  push    78h                             
44f6  push    1h                              
44f8  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
44fd  pop     ds                              
44fe  leave                                   
44ff  retf                                    

; ===== DOCOMMANDFREEZE_CHANNEL =====
4500  mov     ax,446Bh                        ; segment seg2:0000
4503  enter   0Ah,0h                          
4507  push    ds                              
4508  mov     ds,ax                           
450a  push    76h                             
450c  call far M007.M007_GETSTATE             ; DP_FREEZE_ON
4511  mov     [bp-0Ah],al                     
4514  mov     al,2h                           
4516  mov     [bp-9h],al                      
4519  mov     [bp-8h],al                      
451c  mov     [bp-7h],al                      
451f  mov     [bp-6h],al                      
4522  mov     [bp-5h],al                      
4525  mov     [bp-4h],al                      
4528  mov     [bp-3h],al                      
452b  mov     [bp-2h],al                      
452e  push    75h                             
4530  call far M007.M007_GETSTATE             ; DP_CHANNEL
4535  or      ax,ax                           
4537  jne     4549h                           
4539  mov     al,1h                           
453b  mov     [bp-9h],al                      
453e  mov     [bp-8h],al                      
4541  mov     [bp-7h],al                      
4544  mov     [bp-6h],al                      
4547  jmp     4557h                           
4549  mov     al,1h                           
454b  mov     [bp-5h],al                      
454e  mov     [bp-4h],al                      
4551  mov     [bp-3h],al                      
4554  mov     [bp-2h],al                      
4557  lea     ax,[bp-0Ah]                     
455a  push    ss                              
455b  push    ax                              
455c  call far sub_5fd4                       
4561  add     sp,4h                           
4564  push    78h                             
4566  push    1h                              
4568  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
456d  pop     ds                              
456e  leave                                   
456f  retf                                    

; ===== DOCOMMANDUNFREEZE_CHANNEL =====
4570  mov     ax,4501h                        ; segment seg2:0000
4573  enter   0Ah,0h                          
4577  push    ds                              
4578  mov     ds,ax                           
457a  mov     al,2h                           
457c  mov     [bp-0Ah],al                     
457f  mov     [bp-9h],al                      
4582  mov     [bp-8h],al                      
4585  mov     [bp-7h],al                      
4588  mov     [bp-6h],al                      
458b  mov     [bp-5h],al                      
458e  mov     [bp-4h],al                      
4591  mov     [bp-3h],al                      
4594  mov     [bp-2h],al                      
4597  push    75h                             
4599  call far M007.M007_GETSTATE             ; DP_CHANNEL
459e  or      ax,ax                           
45a0  jne     45B2h                           
45a2  xor     al,al                           
45a4  mov     [bp-9h],al                      
45a7  mov     [bp-8h],al                      
45aa  mov     [bp-7h],al                      
45ad  mov     [bp-6h],al                      
45b0  jmp     45C0h                           
45b2  xor     al,al                           
45b4  mov     [bp-5h],al                      
45b7  mov     [bp-4h],al                      
45ba  mov     [bp-3h],al                      
45bd  mov     [bp-2h],al                      
45c0  lea     ax,[bp-0Ah]                     
45c3  push    ss                              
45c4  push    ax                              
45c5  call far sub_5fd4                       
45ca  add     sp,4h                           
45cd  push    78h                             
45cf  push    1h                              
45d1  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
45d6  pop     ds                              
45d7  leave                                   
45d8  retf                                    
45d9  add     [bx+si],al                      

; ===== DOCOMMANDFREEZE_ALL =====
45da  mov     ax,4571h                        ; segment seg2:0000
45dd  enter   0Ah,0h                          
45e1  push    ds                              
45e2  mov     ds,ax                           
45e4  push    76h                             
45e6  call far M007.M007_GETSTATE             ; DP_FREEZE_ON
45eb  mov     [bp-0Ah],al                     
45ee  mov     al,1h                           
45f0  mov     [bp-9h],al                      
45f3  mov     [bp-8h],al                      
45f6  mov     [bp-7h],al                      
45f9  mov     [bp-6h],al                      
45fc  mov     al,2h                           
45fe  mov     [bp-5h],al                      
4601  mov     [bp-4h],al                      
4604  mov     [bp-3h],al                      
4607  mov     [bp-2h],al                      
460a  push    23h                             
460c  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
4611  dec     ax                              
4612  je      4629h                           
4614  push    23h                             
4616  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
461b  or      ax,ax                           
461d  jne     4637h                           
461f  push    70h                             
4621  call far M007.M007_GETSTATE             ; DP_MIXER
4626  dec     ax                              
4627  jne     4637h                           
4629  mov     al,1h                           
462b  mov     [bp-5h],al                      
462e  mov     [bp-4h],al                      
4631  mov     [bp-3h],al                      
4634  mov     [bp-2h],al                      
4637  lea     ax,[bp-0Ah]                     
463a  push    ss                              
463b  push    ax                              
463c  call far sub_5fd4                       
4641  add     sp,4h                           
4644  push    78h                             
4646  push    1h                              
4648  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
464d  pop     ds                              
464e  leave                                   
464f  retf                                    

; ===== DOCOMMANDUNFREEZE_ALL =====
4650  mov     ax,45DBh                        ; segment seg2:0000
4653  enter   0Ah,0h                          
4657  push    ds                              
4658  mov     ds,ax                           
465a  xor     al,al                           
465c  mov     [bp-9h],al                      
465f  mov     [bp-8h],al                      
4662  mov     [bp-7h],al                      
4665  mov     [bp-6h],al                      
4668  mov     al,2h                           
466a  mov     [bp-0Ah],al                     
466d  mov     [bp-5h],al                      
4670  mov     [bp-4h],al                      
4673  mov     [bp-3h],al                      
4676  mov     [bp-2h],al                      
4679  push    23h                             
467b  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
4680  dec     ax                              
4681  je      4698h                           
4683  push    23h                             
4685  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
468a  or      ax,ax                           
468c  jne     46A6h                           
468e  push    70h                             
4690  call far M007.M007_GETSTATE             ; DP_MIXER
4695  dec     ax                              
4696  jne     46A6h                           
4698  xor     al,al                           
469a  mov     [bp-5h],al                      
469d  mov     [bp-4h],al                      
46a0  mov     [bp-3h],al                      
46a3  mov     [bp-2h],al                      
46a6  lea     ax,[bp-0Ah]                     
46a9  push    ss                              
46aa  push    ax                              
46ab  call far sub_5fd4                       
46b0  add     sp,4h                           
46b3  push    78h                             
46b5  push    1h                              
46b7  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
46bc  pop     ds                              
46bd  leave                                   
46be  retf                                    
46bf  add     [bx+si],al                      

; ===== DOCOMMANDABORT_FREEZE =====
46c0  mov     ax,4651h                        ; segment seg2:0000
46c3  push    bp                              
46c4  mov     bp,sp                           
46c6  push    ds                              
46c7  mov     ds,ax                           
46c9  pop     ds                              
46ca  leave                                   
46cb  retf                                    

; ===== SWITCHMIXER =====
46cc  mov     ax,46C1h                        ; segment seg2:0000
46cf  push    bp                              
46d0  mov     bp,sp                           
46d2  push    ds                              
46d3  mov     ds,ax                           
46d5  push    70h                             
46d7  push    word ptr [bp+6h]                
46da  call far M007.M007_PUTSTATE             ; DP_MIXER
46df  cmp     word ptr [bp+6h],0h             
46e3  jne     46ECh                           
46e5  push    0h                              
46e7  call far SWITCHMAIN_DETECTOR            
46ec  pop     ds                              
46ed  leave                                   
46ee  retf    2h                              
46f1  add     [bx+si],al                      

; ===== SWITCHCHANNEL_9 =====
46f2  mov     ax,46CDh                        ; segment seg2:0000
46f5  push    bp                              
46f6  mov     bp,sp                           
46f8  push    ds                              
46f9  mov     ds,ax                           
46fb  push    71h                             
46fd  push    word ptr [bp+6h]                
4700  call far M007.M007_PUTSTATE             ; DP_CHANNEL_9
4705  pop     ds                              
4706  leave                                   
4707  retf    2h                              

; ===== SWITCHINPUT_CONNECTOR =====
470a  mov     ax,46F3h                        ; segment seg2:0000
470d  push    bp                              
470e  mov     bp,sp                           
4710  push    ds                              
4711  mov     ds,ax                           
4713  push    72h                             
4715  push    word ptr [bp+6h]                
4718  call far M007.M007_PUTSTATE             ; DP_INPUT_CONNECTOR
471d  pop     ds                              
471e  leave                                   
471f  retf    2h                              

; ===== SWITCHCHANNEL =====
4722  mov     ax,470Bh                        ; segment seg2:0000
4725  push    bp                              
4726  mov     bp,sp                           
4728  push    ds                              
4729  mov     ds,ax                           
472b  push    75h                             
472d  push    word ptr [bp+6h]                
4730  call far M007.M007_PUTSTATE             ; DP_CHANNEL
4735  pop     ds                              
4736  leave                                   
4737  retf    2h                              

; ===== SWITCHFREEZE_ON =====
473a  mov     ax,4723h                        ; segment seg2:0000
473d  push    bp                              
473e  mov     bp,sp                           
4740  push    ds                              
4741  mov     ds,ax                           
4743  push    76h                             
4745  push    word ptr [bp+6h]                
4748  call far M007.M007_PUTSTATE             ; DP_FREEZE_ON
474d  pop     ds                              
474e  leave                                   
474f  retf    2h                              

; ===== SETCOLLECTOR_BIAS =====
4752  mov     ax,473Bh                        ; segment seg2:0000
4755  enter   4h,0h                           
4759  push    ds                              
475a  mov     ds,ax                           
475c  lea     bx,[bp+6h]                      
475f  wait                                    
4760  fld     dword ptr ss:[bx]               
4763  call far sub_015a                       
4768  mov     [bp-2h],ax                      
476b  push    66h                             
476d  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
4772  mov     [bp-4h],ax                      
4775  push    14Ch                            
4778  call far M007.M007_GETSTATE             ; DP_SE_SUPPLIES
477d  or      ax,ax                           
477f  jne     4793h                           
4781  mov     ax,[0A32h]                      
4784  mov     dx,[0A34h]                      
4788  mov     [bp+6h],ax                      
478b  mov     [bp+8h],dx                      
478e  mov     word ptr [bp-2h],0h             
4793  mov     bx,[bp-4h]                      
4796  cmp     byte ptr [bx+9Eh],1h            
479b  jne     47E8h                           
479d  push    8Ch                             
47a0  call far M007.M007_GETSTATE             ; DP_COLUMN_TYPE
47a5  cmp     ax,6h                           
47a8  jne     47B2h                           
47aa  mov     ax,[bp-2h]                      
47ad  mov     [39Ah],ax                       
47b0  jmp     47D1h                           
47b2  cmp     word ptr [bp-4h],1h             
47b6  jne     47C0h                           
47b8  mov     ax,[bp-2h]                      
47bb  mov     [398h],ax                       
47be  jmp     47D1h                           
47c0  cmp     word ptr [bp-4h],2h             
47c4  je      47AAh                           
47c6  push    105h                            
47c9  call far M007.M007_GETSTATE             ; DP_VAC_MODE
47ce  dec     ax                              
47cf  jne     47E8h                           
47d1  push    word ptr [bp-2h]                
47d4  call far sub_63e2                       
47d9  pop     bx                              
47da  push    0C4h                            
47dd  push    word ptr [bp+8h]                
47e0  push    word ptr [bp+6h]                
47e3  call far M007.M007_PUTVALUE             ; AP_COLLECTOR_BIAS
47e8  pop     ds                              
47e9  leave                                   
47ea  retf    4h                              
47ed  add     [bx+si],al                      

; ===== RESTORE_ACQUIRE_CONFIG =====
47ee  mov     ax,4753h                        ; segment seg2:0000
47f1  push    bp                              
47f2  mov     bp,sp                           
47f4  push    ds                              
47f5  mov     ds,ax                           
47f7  les     bx,[bp+6h]                      
47fa  mov     al,es:[bx]                      
47fd  cbw                                     
47fe  push    ax                              
47ff  call far SWITCHBSD_TYPE                 
4804  les     bx,[bp+6h]                      
4807  mov     al,es:[bx+1h]                   
480b  mov     [3A6h],al                       
480e  mov     al,es:[bx+2h]                   
4812  mov     [3A7h],al                       
4815  mov     al,es:[bx+3h]                   
4819  mov     [3A8h],al                       
481c  mov     al,es:[bx+4h]                   
4820  mov     [3A9h],al                       
4823  call far DOCOMMANDCOMPO                 
4828  pop     ds                              
4829  leave                                   
482a  retf    4h                              
482d  add     [bx+si],al                      

; ===== GET_ACQUIRE_CONFIG =====
482e  mov     ax,47EFh                        ; segment seg2:0000
4831  push    bp                              
4832  mov     bp,sp                           
4834  push    ds                              
4835  mov     ds,ax                           
4837  push    0CEh                            
483a  call far M007.M007_GETSTATE             ; DP_BSD_TYPE
483f  les     bx,[bp+6h]                      
4842  mov     es:[bx],al                      
4845  mov     al,[3A6h]                       
4848  mov     es:[bx+1h],al                   
484c  mov     al,[3A7h]                       
484f  mov     es:[bx+2h],al                   
4853  mov     al,[3A8h]                       
4856  mov     es:[bx+3h],al                   
485a  mov     al,[3A9h]                       
485d  mov     es:[bx+4h],al                   
4861  pop     ds                              
4862  leave                                   
4863  retf    4h                              

; ===== DOSTRUCTREAD_ZONE_DATA =====
4866  mov     ax,482Fh                        ; segment seg2:0000
4869  push    bp                              
486a  mov     bp,sp                           
486c  push    si                              
486d  push    ds                              
486e  mov     ds,ax                           
4870  mov     bx,[bp+0Ah]                     
4873  mov     al,[bx+86h]                     
4877  les     si,[bp+6h]                      
487a  mov     es:[si+1h],al                   
487e  mov     al,[bx+150h]                    
4882  shl     bx,2h                           
4885  mov     es:[si],al                      
4888  mov     ax,[bx+0B0h]                    
488c  mov     dx,[bx+0B2h]                    
4890  mov     es:[si+2h],ax                   
4894  mov     es:[si+4h],dx                   
4898  mov     ax,[bx+0D0h]                    
489c  mov     dx,[bx+0D2h]                    
48a0  mov     es:[si+6h],ax                   
48a4  mov     es:[si+8h],dx                   
48a8  mov     ax,[bx+0F0h]                    
48ac  mov     dx,[bx+0F2h]                    
48b0  mov     es:[si+0Ah],ax                  
48b4  mov     es:[si+0Ch],dx                  
48b8  mov     ax,[bx+110h]                    
48bc  mov     dx,[bx+112h]                    
48c0  mov     es:[si+0Eh],ax                  
48c4  mov     es:[si+10h],dx                  
48c8  mov     ax,[bx+22h]                     
48cc  mov     dx,[bx+24h]                     
48d0  mov     es:[si+12h],ax                  
48d4  mov     es:[si+14h],dx                  
48d8  mov     ax,[bx+42h]                     
48dc  mov     dx,[bx+44h]                     
48e0  mov     es:[si+16h],ax                  
48e4  mov     es:[si+18h],dx                  
48e8  mov     bx,[bp+0Ah]                     
48eb  mov     al,[bx+10h]                     
48ef  mov     es:[si+1Ah],al                  
48f3  pop     ds                              
48f4  pop     si                              
48f5  leave                                   
48f6  retf    6h                              
48f9  add     [bx+si],al                      

; ===== DOSTRUCTREAD_DETECTOR_ZONE =====
48fa  mov     ax,4867h                        ; segment seg2:0000
48fd  enter   2h,0h                           
4901  push    si                              
4902  push    ds                              
4903  mov     ds,ax                           
4905  mov     byte ptr [bp-2h],0h             
4909  mov     es,[bp+8h]                      
490c  mov     al,[bp-2h]                      
490f  cbw                                     
4910  mov     bx,ax                           
4912  mov     al,[bx+150h]                    
4916  mov     si,[bp+6h]                      
4919  mov     es:[bx+si],al                   
491c  inc     byte ptr [bp-2h]                
491f  cmp     byte ptr [bp-2h],7h             
4923  jle     490Ch                           
4925  pop     ds                              
4926  pop     si                              
4927  leave                                   
4928  retf    4h                              
492b  add     [bx+si],al                      

; ===== UPDATE_DETECTORS =====
492c  mov     ax,48FBh                        ; segment seg2:0000
492f  enter   8h,0h                           
4933  push    di                              
4934  push    si                              
4935  push    ds                              
4936  mov     ds,ax                           
4938  call far sub_6bf6                       
493d  push    word ptr [156h]                 ; [ds] f32 here = 0
4941  push    word ptr [154h]                 ; [ds] f32 here = 0
4945  push    word ptr [152h]                 ; [ds] f32 here = 0
4949  push    word ptr [150h]                 ; [ds] f32 here = 0
494d  call far sub_6618                       
4952  add     sp,8h                           
4955  call far sub_6e72                       
495a  push    ds                              
495b  lea     di,[bp-8h]                      
495e  mov     si,ax                           
4960  push    ss                              
4961  pop     es                              
4962  mov     ds,dx                           
4964  movsw                                   
4965  movsw                                   
4966  movsw                                   
4967  movsw                                   
4968  pop     ds                              
4969  push    word ptr [bp-2h]                
496c  push    word ptr [bp-4h]                
496f  push    word ptr [bp-6h]                
4972  push    word ptr [bp-8h]                
4975  call far sub_6f8c                       
497a  add     sp,8h                           
497d  push    ds                              
497e  mov     di,0E18h                        
4981  mov     si,ax                           
4983  push    ds                              
4984  pop     es                              
4985  mov     ds,dx                           
4987  mov     cx,9h                           
498a  rep     movsw                           
498c  pop     ds                              
498d  push    21h                             
498f  call far M007.M007_GETSTATE             ; DP_SPOT
4994  dec     ax                              
4995  je      49ACh                           
4997  push    22h                             
4999  call far M007.M007_GETSTATE             ; DP_LINE_SCAN
499e  dec     ax                              
499f  je      49ACh                           
49a1  push    0A4h                            
49a4  call far M007.M007_GETSTATE             ; DP_EXT_SCAN_CONTROL
49a9  dec     ax                              
49aa  jne     49B3h                           
49ac  call far SUSPEND_AUTO_VIDEO_LEVEL       
49b1  jmp     49B8h                           
49b3  call far RESUME_AUTO_VIDEO_LEVEL        
49b8  sub     sp,12h                          
49bb  mov     si,0E18h                        
49be  mov     di,sp                           
49c0  push    ss                              
49c1  pop     es                              
49c2  mov     cx,9h                           
49c5  rep     movsw                           
49c7  call far sub_6334                       
49cc  add     sp,12h                          
49cf  pop     ds                              
49d0  pop     si                              
49d1  pop     di                              
49d2  leave                                   
49d3  retf                                    

; ===== SETBRIGHTNESS =====
49d4  mov     ax,492Dh                        ; segment seg2:0000
49d7  enter   6h,0h                           
49db  push    ds                              
49dc  mov     ds,ax                           
49de  push    66h                             
49e0  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
49e5  mov     [bp-2h],ax                      
49e8  mov     bx,ax                           
49ea  cmp     byte ptr [bx+9Eh],1h            
49ef  jne     4A46h                           
49f1  shl     bx,5h                           
49f4  cmp     word ptr [bx+168h],0h           
49f9  je      4A02h                           
49fb  cmp     word ptr [bx+168h],2h           
4a00  jne     4A46h                           
4a02  wait                                    
4a03  fld     dword ptr [bp+6h]               
4a06  wait                                    
4a07  fst     dword ptr [bp-6h]               
4a0a  mov     bx,ax                           
4a0c  shl     bx,5h                           
4a0f  wait                                    
4a10  fstp    dword ptr [bx+158h]             
4a14  nop                                     
4a15  wait                                    
4a16  push    1Eh                             
4a18  wait                                    
4a19  fld     dword ptr [bp-6h]               
4a1c  sub     sp,4h                           
4a1f  mov     bx,sp                           
4a21  wait                                    
4a22  fstp    dword ptr ss:[bx]               
4a25  nop                                     
4a26  wait                                    
4a27  call far M007.M007_PUTVALUE             ; AP_BRIGHTNESS
4a2c  wait                                    
4a2d  fld     dword ptr [bp-6h]               
4a30  sub     sp,4h                           
4a33  mov     bx,sp                           
4a35  wait                                    
4a36  fstp    dword ptr ss:[bx]               
4a39  nop                                     
4a3a  wait                                    
4a3b  push    word ptr [bp-2h]                
4a3e  call far sub_6356                       
4a43  add     sp,6h                           
4a46  pop     ds                              
4a47  leave                                   
4a48  retf    4h                              
4a4b  add     [bx+si],al                      

; ===== SUSPEND_AUTO_VIDEO_LEVEL =====
4a4c  mov     ax,49D5h                        ; segment seg2:0000
4a4f  push    bp                              
4a50  mov     bp,sp                           
4a52  push    ds                              
4a53  mov     ds,ax                           
4a55  push    1h                              
4a57  call far sub_6314                       
4a5c  pop     bx                              
4a5d  pop     ds                              
4a5e  leave                                   
4a5f  retf                                    

; ===== RESUME_AUTO_VIDEO_LEVEL =====
4a60  mov     ax,4A4Dh                        ; segment seg2:0000
4a63  push    bp                              
4a64  mov     bp,sp                           
4a66  push    ds                              
4a67  mov     ds,ax                           
4a69  push    0h                              
4a6b  call far sub_6314                       
4a70  pop     bx                              
4a71  pop     ds                              
4a72  leave                                   
4a73  retf                                    

; ===== POINTINWINDOW =====
4a74  mov     ax,4A61h                        ; segment seg2:0000
4a77  enter   4h,0h                           
4a7b  push    ds                              
4a7c  mov     ds,ax                           
4a7e  push    75h                             
4a80  call far M007.M007_GETSTATE             ; DP_CHANNEL
4a85  mov     [bp-2h],ax                      
4a88  push    ax                              
4a89  push    word ptr [bp+6h]                
4a8c  push    word ptr [bp+8h]                
4a8f  call far sub_666c                       
4a94  add     sp,6h                           
4a97  mov     [bp-4h],al                      
4a9a  cmp     word ptr [bp-2h],0h             
4a9e  jne     4AACh                           
4aa0  or      al,al                           
4aa2  je      4AA8h                           
4aa4  mov     al,2h                           
4aa6  jmp     4AB8h                           
4aa8  xor     al,al                           
4aaa  jmp     4AB8h                           
4aac  cmp     byte ptr [bp-4h],0h             
4ab0  je      4AB6h                           
4ab2  mov     al,6h                           
4ab4  jmp     4AB8h                           
4ab6  mov     al,4h                           
4ab8  pop     ds                              
4ab9  leave                                   
4aba  retf    4h                              
4abd  add     [bx+si],al                      

; ----- sub_4abe -----
4abe  mov     ax,4A75h                        ; segment seg2:0000
4ac1  enter   72h,0h                          
4ac5  push    ds                              
4ac6  mov     ds,ax                           
4ac8  push    118h                            
4acb  call far M007.M007_GETSTATE             ; DP_PROGRESS
4ad0  cmp     ax,6h                           
4ad3  jne     4B53h                           
4ad5  call far USER.GETTICKCOUNT              
4ada  sub     ax,[3BCh]                       
4ade  sbb     dx,[3BEh]                       
4ae2  mov     word ptr [bp-64h],0h            
4ae7  mov     word ptr [bp-66h],0h            
4aec  mov     [bp-68h],dx                     
4aef  mov     [bp-6Ah],ax                     
4af2  wait                                    
4af3  fild    qword ptr [bp-6Ah]              
4af6  mov     ax,[3C0h]                       
4af9  mov     dx,[3C2h]                       
4afd  mov     word ptr [bp-6Ch],0h            
4b02  mov     word ptr [bp-6Eh],0h            
4b07  mov     [bp-70h],dx                     
4b0a  mov     [bp-72h],ax                     
4b0d  wait                                    
4b0e  fild    qword ptr [bp-72h]              
4b11  wait                                    
4b12  fdivp   st(1)                           
4b14  wait                                    
4b15  fmul    dword ptr [0A3Eh]               ; [ds] = 100
4b19  wait                                    
4b1a  fst     dword ptr [bp-62h]              
4b1d  wait                                    
4b1e  fcom    dword ptr [0A3Eh]               ; [ds] = 100
4b22  wait                                    
4b23  fstp    st(0)                           
4b25  wait                                    
4b26  fstsw   ax                              
4b28  sahf                                    
4b29  jb      4B45h                           
4b2b  push    154h                            
4b2e  push    word ptr [0A34h]                ; [ds] f32 here = 0
4b32  push    word ptr [0A32h]                ; [ds] f32 here = 0
4b36  call far M007.M007_PUTVALUE             ; AP_PROGRESS
4b3b  push    118h                            
4b3e  push    0h                              
4b40  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 0
4b45  push    154h                            
4b48  push    word ptr [bp-60h]               
4b4b  push    word ptr [bp-62h]               
4b4e  call far M007.M007_PUTVALUE             ; AP_PROGRESS
4b53  lea     ax,[bp-5Ah]                     
4b56  push    ss                              
4b57  push    ax                              
4b58  call far sub_66fe                       
4b5d  add     sp,4h                           
4b60  test    byte ptr [bp-11h],1h            
4b64  je      4B70h                           
4b66  mov     al,[bp-0Dh]                     
4b69  push    ax                              
4b6a  call far sub_69aa                       
4b6f  pop     bx                              
4b70  test    byte ptr [bp-11h],2h            
4b74  je      4B83h                           
4b76  lea     ax,[bp-5Ah]                     
4b79  push    ss                              
4b7a  push    ax                              
4b7b  call far sub_6a70                       
4b80  add     sp,4h                           
4b83  test    byte ptr [bp-11h],4h            
4b87  jne     4B8Ch                           
4b89  jmp     4C2Bh                           
4b8c  push    78h                             
4b8e  mov     al,[bp-1Ah]                     
4b91  cbw                                     
4b92  push    ax                              
4b93  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS
4b98  push    7Bh                             
4b9a  mov     al,[bp-19h]                     
4b9d  cbw                                     
4b9e  push    ax                              
4b9f  call far M007.M007_PUTSTATE             ; DP_Z0
4ba4  push    7Ch                             
4ba6  mov     al,[bp-18h]                     
4ba9  cbw                                     
4baa  push    ax                              
4bab  call far M007.M007_PUTSTATE             ; DP_Z1
4bb0  push    7Dh                             
4bb2  mov     al,[bp-17h]                     
4bb5  cbw                                     
4bb6  push    ax                              
4bb7  call far M007.M007_PUTSTATE             ; DP_Z2
4bbc  push    7Eh                             
4bbe  mov     al,[bp-16h]                     
4bc1  cbw                                     
4bc2  push    ax                              
4bc3  call far M007.M007_PUTSTATE             ; DP_Z3
4bc8  push    7Fh                             
4bca  mov     al,[bp-15h]                     
4bcd  cbw                                     
4bce  push    ax                              
4bcf  call far M007.M007_PUTSTATE             ; DP_Z4
4bd4  push    80h                             
4bd7  mov     al,[bp-14h]                     
4bda  cbw                                     
4bdb  push    ax                              
4bdc  call far M007.M007_PUTSTATE             ; DP_Z5
4be1  push    81h                             
4be4  mov     al,[bp-13h]                     
4be7  cbw                                     
4be8  push    ax                              
4be9  call far M007.M007_PUTSTATE             ; DP_Z6
4bee  push    82h                             
4bf1  mov     al,[bp-12h]                     
4bf4  cbw                                     
4bf5  push    ax                              
4bf6  call far M007.M007_PUTSTATE             ; DP_Z7
4bfb  mov     al,[bp-19h]                     
4bfe  mov     [39Eh],al                       
4c01  mov     al,[bp-18h]                     
4c04  mov     [39Fh],al                       
4c07  mov     al,[bp-17h]                     
4c0a  mov     [3A0h],al                       
4c0d  mov     al,[bp-16h]                     
4c10  mov     [3A1h],al                       
4c13  mov     al,[bp-15h]                     
4c16  mov     [3A2h],al                       
4c19  mov     al,[bp-14h]                     
4c1c  mov     [3A3h],al                       
4c1f  mov     al,[bp-13h]                     
4c22  mov     [3A4h],al                       
4c25  mov     al,[bp-12h]                     
4c28  mov     [3A5h],al                       
4c2b  mov     ax,[bp-11h]                     
4c2e  test    al,4h                           
4c30  jne     4C38h                           
4c32  test    byte ptr [bp-11h],1h            
4c36  je      4C3Dh                           
4c38  call far UPDATE_DETECTORS               
4c3d  call far sub_702e                       
4c42  push    67h                             
4c44  call far M007.M007_GETSTATE             ; DP_SCM_MODE
4c49  dec     ax                              
4c4a  jne     4C67h                           
4c4c  lea     ax,[bp-5Eh]                     
4c4f  push    ss                              
4c50  push    ax                              
4c51  call far sub_6040                       
4c56  add     sp,4h                           
4c59  push    0B4h                            
4c5c  push    word ptr [bp-5Ch]               
4c5f  push    word ptr [bp-5Eh]               
4c62  call far M007.M007_PUTVALUE             ; AP_SCM
4c67  test    byte ptr [bp-0Ch],80h           
4c6b  je      4C8Ch                           
4c6d  push    0h                              
4c6f  call far M007.M007_GETSTATE             ; DP_EOBOARD
4c74  or      ax,ax                           
4c76  je      4C8Ch                           
4c78  push    1C4h                            
4c7b  mov     al,[bp-0Ch]                     
4c7e  and     ax,7Fh                          
4c81  cwd                                     
4c82  push    dx                              
4c83  push    ax                              
4c84  push    6000h                           
4c87  call far M007.UIF_LOG                   
4c8c  call far sub_2644                       
4c91  call far sub_70c8                       
4c96  test    byte ptr [bp-11h],8h            
4c9a  je      4CC6h                           
4c9c  push    110h                            
4c9f  mov     al,[bp-0Bh]                     
4ca2  sub     ah,ah                           
4ca4  sub     dx,dx                           
4ca6  mov     [bp-6Ch],dx                     
4ca9  mov     [bp-6Eh],dx                     
4cac  mov     [bp-70h],dx                     
4caf  mov     [bp-72h],ax                     
4cb2  wait                                    
4cb3  fild    qword ptr [bp-72h]              
4cb6  sub     sp,4h                           
4cb9  mov     bx,sp                           
4cbb  wait                                    
4cbc  fstp    dword ptr ss:[bx]               
4cbf  nop                                     
4cc0  wait                                    
4cc1  call far M007.M007_PUTVALUE             ; AP_SPOT
4cc6  push    0E1h                            
4cc9  call far M007.M007_GETSTATE             ; DP_SPOT_DATA_MODE
4cce  dec     ax                              
4ccf  jne     4CFBh                           
4cd1  push    12Ah                            
4cd4  mov     al,[bp-9h]                      
4cd7  sub     ah,ah                           
4cd9  sub     dx,dx                           
4cdb  mov     [bp-6Ch],dx                     
4cde  mov     [bp-6Eh],dx                     
4ce1  mov     [bp-70h],dx                     
4ce4  mov     [bp-72h],ax                     
4ce7  wait                                    
4ce8  fild    qword ptr [bp-72h]              
4ceb  sub     sp,4h                           
4cee  mov     bx,sp                           
4cf0  wait                                    
4cf1  fstp    dword ptr ss:[bx]               
4cf4  nop                                     
4cf5  wait                                    
4cf6  call far M007.M007_PUTVALUE             ; AP_SPOT_DATA_TO_DO
4cfb  test    byte ptr [bp-11h],10h           
4cff  je      4D61h                           
4d01  push    0E1h                            
4d04  mov     al,[bp-0Ah]                     
4d07  sub     ah,ah                           
4d09  push    ax                              
4d0a  call far M007.M007_PUTSTATE             ; DP_SPOT_DATA_MODE
4d0f  push    12Ah                            
4d12  mov     al,[bp-9h]                      
4d15  sub     ah,ah                           
4d17  sub     dx,dx                           
4d19  mov     [bp-6Ch],dx                     
4d1c  mov     [bp-6Eh],dx                     
4d1f  mov     [bp-70h],dx                     
4d22  mov     [bp-72h],ax                     
4d25  wait                                    
4d26  fild    qword ptr [bp-72h]              
4d29  sub     sp,4h                           
4d2c  mov     bx,sp                           
4d2e  wait                                    
4d2f  fstp    dword ptr ss:[bx]               
4d32  nop                                     
4d33  wait                                    
4d34  call far M007.M007_PUTVALUE             ; AP_SPOT_DATA_TO_DO
4d39  mov     ax,[bp-8h]                      
4d3c  mov     dx,[bp-6h]                      
4d3f  mov     [3B2h],ax                       
4d42  mov     [3B4h],dx                       
4d46  mov     ax,[bp-4h]                      
4d49  mov     dx,[bp-2h]                      
4d4c  mov     [3B6h],ax                       
4d4f  mov     [3B8h],dx                       
4d53  cmp     byte ptr [bp-0Ah],3h            
4d57  jne     4D61h                           
4d59  push    1h                              
4d5b  call far sub_68f6                       
4d60  pop     bx                              
4d61  pop     ds                              
4d62  leave                                   
4d63  retf                                    

; ----- sub_4d64 -----
4d64  mov     ax,4ABFh                        ; segment seg2:0000
4d67  enter   0Eh,0h                          
4d6b  push    si                              
4d6c  push    ds                              
4d6d  mov     ds,ax                           
4d6f  mov     word ptr [bp-0Eh],0F801h        
4d74  xor     al,al                           
4d76  mov     word ptr [bp-0Bh],0h            
4d7b  mov     [bp-0Ch],al                     
4d7e  mov     [bp-9h],al                      
4d81  mov     word ptr [bp-8h],0FFh           
4d86  mov     word ptr [bp-5h],7FFh           
4d8b  mov     al,0FFh                         
4d8d  mov     [bp-6h],al                      
4d90  mov     [bp-3h],al                      
4d93  mov     byte ptr [bp-2h],0h             
4d97  mov     al,[bp-2h]                      
4d9a  cbw                                     
4d9b  push    ax                              
4d9c  mov     si,ax                           
4d9e  call far SWITCHZONE                     
4da3  push    word ptr [0A38h]                
4da7  push    word ptr [0A36h]                ; [ds] f32 here = 1
4dab  call far SETK1                          
4db0  push    word ptr [0A34h]                ; [ds] f32 here = 0
4db4  push    word ptr [0A32h]                ; [ds] f32 here = 0
4db8  call far SETDIFF                        
4dbd  push    si                              
4dbe  call far SWITCHLUT_DESTINATION          
4dc3  push    4h                              
4dc5  lea     ax,[bp-0Eh]                     
4dc8  push    ss                              
4dc9  push    ax                              
4dca  call far DEFINE_LUT                     
4dcf  inc     byte ptr [bp-2h]                
4dd2  cmp     byte ptr [bp-2h],8h             
4dd6  jl      4D97h                           
4dd8  push    0h                              
4dda  call far SWITCHZONE                     
4ddf  push    0h                              
4de1  call far SWITCHLUT_DESTINATION          
4de6  call far DOCOMMANDFRAME_AVERAGE         
4deb  pop     ds                              
4dec  pop     si                              
4ded  leave                                   
4dee  retf                                    
4def  add     [bx+si],al                      

; ===== SWITCHIMPLIED_DETECTOR =====
4df0  mov     ax,4D65h                        ; segment seg2:0000
4df3  enter   8h,0h                           
4df7  push    di                              
4df8  push    si                              
4df9  push    ds                              
4dfa  mov     ds,ax                           
4dfc  push    97h                             
4dff  push    word ptr [bp+6h]                
4e02  call far M007.M007_PUTSTATE             ; DP_IMPLIED_DETECTOR
4e07  push    64h                             
4e09  call far M007.M007_GETSTATE             ; DP_ZONE
4e0e  mov     [bp-2h],al                      
4e11  cmp     al,3h                           
4e13  jg      4E1Ch                           
4e15  add     al,4h                           
4e17  mov     [bp-2h],al                      
4e1a  jmp     4E20h                           
4e1c  sub     byte ptr [bp-2h],4h             
4e20  mov     al,[bp-2h]                      
4e23  cbw                                     
4e24  mov     bx,ax                           
4e26  mov     al,[bp+6h]                      
4e29  mov     [bx+86h],al                     
4e2d  cmp     byte ptr [bp-2h],4h             
4e31  jl      4E37h                           
4e33  add     word ptr [bp+6h],8h             
4e37  mov     bx,[bp+6h]                      
4e3a  mov     al,[bx+8Eh]                     
4e3e  mov     [bp-4h],al                      
4e41  push    ax                              
4e42  mov     al,[bp-2h]                      
4e45  push    ax                              
4e46  call far sub_6b38                       
4e4b  add     sp,4h                           
4e4e  mov     al,[bp-2h]                      
4e51  cbw                                     
4e52  mov     bx,ax                           
4e54  mov     al,[bp-4h]                      
4e57  mov     [bx+150h],al                    
4e5b  push    98h                             
4e5e  mov     al,[bx+10h]                     
4e62  cbw                                     
4e63  push    ax                              
4e64  mov     si,bx                           
4e66  call far M007.M007_PUTSTATE             ; DP_IMPLIED_INVERT
4e6b  push    0D7h                            
4e6e  mov     ax,si                           
4e70  shl     si,2h                           
4e73  push    word ptr [si+24h]               
4e77  push    word ptr [si+22h]               
4e7b  mov     di,ax                           
4e7d  call far M007.M007_PUTVALUE             ; AP_IMPLIED_GAIN
4e82  push    0D8h                            
4e85  push    word ptr [si+44h]               
4e89  push    word ptr [si+42h]               
4e8d  call far M007.M007_PUTVALUE             ; AP_IMPLIED_OFFSET
4e92  push    0ABh                            
4e95  call far M007.M007_GETSTATE             ; DP_MAIN_DETECTOR
4e9a  dec     ax                              
4e9b  jne     4EA8h                           
4e9d  mov     al,[di+150h]                    
4ea1  cbw                                     
4ea2  push    ax                              
4ea3  call far SWITCHDETECTOR_TYPE            
4ea8  push    0C4h                            
4eab  lea     ax,[bp-8h]                      
4eae  push    ax                              
4eaf  call far M007.M007_GETVALUE             ; AP_COLLECTOR_BIAS
4eb4  mov     bx,ax                           
4eb6  push    word ptr ss:[bx+2h]             
4eba  push    word ptr ss:[bx]                
4ebd  call far SETCOLLECTOR_BIAS              
4ec2  call far UPDATE_DETECTORS               
4ec7  mov     al,[bp-4h]                      
4eca  cbw                                     
4ecb  mov     bx,ax                           
4ecd  shl     bx,5h                           
4ed0  push    word ptr [bx+15Eh]              
4ed4  push    word ptr [bx+15Ch]              
4ed8  push    ax                              
4ed9  mov     si,ax                           
4edb  mov     di,bx                           
4edd  call far sub_639c                       
4ee2  add     sp,6h                           
4ee5  push    word ptr [di+15Ah]              
4ee9  push    word ptr [di+158h]              
4eed  push    si                              
4eee  call far sub_6356                       
4ef3  add     sp,6h                           
4ef6  pop     ds                              
4ef7  pop     si                              
4ef8  pop     di                              
4ef9  leave                                   
4efa  retf    2h                              
4efd  add     [bx+si],al                      

; ===== SWITCHIMPLIED_INVERT =====
4efe  mov     ax,4DF1h                        ; segment seg2:0000
4f01  enter   2h,0h                           
4f05  push    ds                              
4f06  mov     ds,ax                           
4f08  push    64h                             
4f0a  call far M007.M007_GETSTATE             ; DP_ZONE
4f0f  mov     [bp-2h],al                      
4f12  cmp     al,3h                           
4f14  jg      4F1Dh                           
4f16  add     al,4h                           
4f18  mov     [bp-2h],al                      
4f1b  jmp     4F21h                           
4f1d  sub     byte ptr [bp-2h],4h             
4f21  mov     al,[bp-2h]                      
4f24  cbw                                     
4f25  mov     bx,ax                           
4f27  mov     al,[bp+6h]                      
4f2a  mov     [bx+10h],al                     
4f2e  push    ax                              
4f2f  mov     al,[bp-2h]                      
4f32  push    ax                              
4f33  call far sub_5ed2                       
4f38  add     sp,4h                           
4f3b  push    98h                             
4f3e  push    word ptr [bp+6h]                
4f41  call far M007.M007_PUTSTATE             ; DP_IMPLIED_INVERT
4f46  pop     ds                              
4f47  leave                                   
4f48  retf    2h                              
4f4b  add     [bx+si],al                      

; ===== SETIMPLIED_GAIN =====
4f4c  mov     ax,4EFFh                        ; segment seg2:0000
4f4f  enter   6h,0h                           
4f53  push    ds                              
4f54  mov     ds,ax                           
4f56  push    64h                             
4f58  call far M007.M007_GETSTATE             ; DP_ZONE
4f5d  mov     [bp-2h],al                      
4f60  cmp     al,3h                           
4f62  jg      4F6Bh                           
4f64  add     al,4h                           
4f66  mov     [bp-2h],al                      
4f69  jmp     4F6Fh                           
4f6b  sub     byte ptr [bp-2h],4h             
4f6f  wait                                    
4f70  fld     dword ptr [bp+6h]               
4f73  wait                                    
4f74  fst     dword ptr [bp-6h]               
4f77  mov     al,[bp-2h]                      
4f7a  cbw                                     
4f7b  mov     bx,ax                           
4f7d  shl     bx,2h                           
4f80  wait                                    
4f81  fstp    dword ptr [bx+22h]              
4f85  wait                                    
4f86  fld     dword ptr [bp-6h]               
4f89  sub     sp,4h                           
4f8c  mov     bx,sp                           
4f8e  wait                                    
4f8f  fstp    dword ptr ss:[bx]               
4f92  nop                                     
4f93  wait                                    
4f94  mov     al,[bp-2h]                      
4f97  push    ax                              
4f98  call far sub_5ef6                       
4f9d  add     sp,6h                           
4fa0  push    0D7h                            
4fa3  wait                                    
4fa4  fld     dword ptr [bp-6h]               
4fa7  sub     sp,4h                           
4faa  mov     bx,sp                           
4fac  wait                                    
4fad  fstp    dword ptr ss:[bx]               
4fb0  nop                                     
4fb1  wait                                    
4fb2  call far M007.M007_PUTVALUE             ; AP_IMPLIED_GAIN
4fb7  pop     ds                              
4fb8  leave                                   
4fb9  retf    4h                              

; ===== SETIMPLIED_OFFSET =====
4fbc  mov     ax,4F4Dh                        ; segment seg2:0000
4fbf  enter   6h,0h                           
4fc3  push    ds                              
4fc4  mov     ds,ax                           
4fc6  push    64h                             
4fc8  call far M007.M007_GETSTATE             ; DP_ZONE
4fcd  mov     [bp-2h],al                      
4fd0  cmp     al,3h                           
4fd2  jg      4FDBh                           
4fd4  add     al,4h                           
4fd6  mov     [bp-2h],al                      
4fd9  jmp     4FDFh                           
4fdb  sub     byte ptr [bp-2h],4h             
4fdf  wait                                    
4fe0  fld     dword ptr [bp+6h]               
4fe3  wait                                    
4fe4  fstp    dword ptr [bp-6h]               
4fe7  nop                                     
4fe8  wait                                    
4fe9  push    word ptr [bp-4h]                
4fec  push    word ptr [bp-6h]                
4fef  mov     al,[bp-2h]                      
4ff2  push    ax                              
4ff3  call far sub_5f40                       
4ff8  add     sp,6h                           
4ffb  wait                                    
4ffc  fld     dword ptr [bp-6h]               
4fff  mov     al,[bp-2h]                      
5002  cbw                                     
5003  mov     bx,ax                           
5005  shl     bx,2h                           
5008  wait                                    
5009  fstp    dword ptr [bx+42h]              
500d  nop                                     
500e  wait                                    
500f  push    0D8h                            
5012  wait                                    
5013  fld     dword ptr [bp-6h]               
5016  sub     sp,4h                           
5019  mov     bx,sp                           
501b  wait                                    
501c  fstp    dword ptr ss:[bx]               
501f  nop                                     
5020  wait                                    
5021  call far M007.M007_PUTVALUE             ; AP_IMPLIED_OFFSET
5026  pop     ds                              
5027  leave                                   
5028  retf    4h                              
502b  add     [bx+si],al                      

; ===== SWITCHWINDOWING =====
502c  mov     ax,4FBDh                        ; segment seg2:0000
502f  push    bp                              
5030  mov     bp,sp                           
5032  push    ds                              
5033  mov     ds,ax                           
5035  cmp     word ptr [bp+6h],1h             
5039  jne     5050h                           
503b  push    0h                              
503d  call far M400.SWITCHZOOM                
5042  push    0h                              
5044  call far M400.SWITCHLINE_SCAN           
5049  push    0h                              
504b  call far M400.SWITCHSPOT                
5050  push    20h                             
5052  push    word ptr [bp+6h]                
5055  call far M007.M007_PUTSTATE             ; DP_WINDOWING
505a  mov     al,[bp+6h]                      
505d  push    ax                              
505e  call far sub_5e32                       
5063  pop     bx                              
5064  call far UPDATE_DETECTORS               
5069  pop     ds                              
506a  leave                                   
506b  retf    2h                              

; ===== SWITCHALL_ZONES =====
506e  mov     ax,502Dh                        ; segment seg2:0000
5071  push    bp                              
5072  mov     bp,sp                           
5074  push    ds                              
5075  mov     ds,ax                           
5077  push    0A3h                            
507a  push    word ptr [bp+6h]                
507d  call far M007.M007_PUTSTATE             ; DP_ALL_ZONES
5082  call far sub_6bf6                       
5087  pop     ds                              
5088  leave                                   
5089  retf    2h                              

; ===== SWITCHAUTO_VIDEO_ENABLE =====
508c  mov     ax,506Fh                        ; segment seg2:0000
508f  push    bp                              
5090  mov     bp,sp                           
5092  push    ds                              
5093  mov     ds,ax                           
5095  pop     ds                              
5096  leave                                   
5097  retf    2h                              

; ===== SWITCHMAIN_DETECTOR =====
509a  mov     ax,508Dh                        ; segment seg2:0000
509d  enter   2h,0h                           
50a1  push    ds                              
50a2  mov     ds,ax                           
50a4  push    64h                             
50a6  call far M007.M007_GETSTATE             ; DP_ZONE
50ab  mov     [bp-2h],al                      
50ae  push    0ABh                            
50b1  push    word ptr [bp+6h]                
50b4  call far M007.M007_PUTSTATE             ; DP_MAIN_DETECTOR
50b9  cmp     word ptr [bp+6h],1h             
50bd  jne     50CFh                           
50bf  cmp     byte ptr [bp-2h],3h             
50c3  jg      50CBh                           
50c5  add     byte ptr [bp-2h],4h             
50c9  jmp     50CFh                           
50cb  sub     byte ptr [bp-2h],4h             
50cf  mov     al,[bp-2h]                      
50d2  cbw                                     
50d3  mov     bx,ax                           
50d5  mov     al,[bx+150h]                    
50d9  cbw                                     
50da  push    ax                              
50db  call far SWITCHDETECTOR_TYPE            
50e0  pop     ds                              
50e1  leave                                   
50e2  retf    2h                              
50e5  add     [bx+si],al                      

; ===== CONTROL_XRAY =====
50e6  mov     ax,509Bh                        ; segment seg2:0000
50e9  enter   12h,0h                          
50ed  push    di                              
50ee  push    si                              
50ef  push    ds                              
50f0  mov     ds,ax                           
50f2  lea     di,[bp-0Ah]                     
50f5  mov     si,18h                          
50f8  push    ss                              
50f9  pop     es                              
50fa  movsw                                   
50fb  movsw                                   
50fc  movsw                                   
50fd  movsw                                   
50fe  movsb                                   
50ff  cmp     byte ptr [bp+0Ah],0h            
5103  je      5108h                           
5105  jmp     51CDh                           
5108  push    0C0h                            
510b  call far M007.M007_GETSTATE             ; DP_LUT_MODE
5110  cmp     ax,2h                           
5113  je      5123h                           
5115  push    0h                              
5117  call far SWITCHPLANEA_FROZEN            
511c  push    0h                              
511e  call far SWITCHPLANEB_FROZEN            
5123  push    0C1h                            
5126  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
512b  or      ax,ax                           
512d  jne     5132h                           
512f  jmp     52DBh                           
5132  push    0C1h                            
5135  push    0h                              
5137  call far M007.M007_PUTSTATE             ; DP_XRAY_ACQUIRE = 0
513c  push    0h                              
513e  push    0h                              
5140  push    0h                              
5142  push    0h                              
5144  call far sub_68a8                       
5149  add     sp,8h                           
514c  cmp     byte ptr [39Dh],2h              
5151  jne     515Eh                           
5153  push    ds                              
5154  push    18h                             
5157  call far sub_5c36                       
515c  jmp     5182h                           
515e  push    1h                              
5160  push    0E3h                            
5163  lea     ax,[bp-12h]                     
5166  push    ax                              
5167  call far M007.M007_GETVALUE             ; AP_WD = 227
516c  mov     bx,ax                           
516e  wait                                    
516f  fld     dword ptr ss:[bx]               
5172  call far sub_015a                       
5177  mov     [bp-0Ch],ax                     
517a  dec     al                              
517c  push    ax                              
517d  call far sub_5bfc                       
5182  add     sp,4h                           
5185  mov     byte ptr [bp-0Eh],0h            
5189  jmp     518Eh                           
518b  inc     byte ptr [bp-0Eh]               
518e  cmp     byte ptr [bp-0Eh],7h            
5192  jle     5197h                           
5194  jmp     52DBh                           
5197  mov     al,[bp-0Eh]                     
519a  cbw                                     
519b  mov     bx,ax                           
519d  shl     bx,2h                           
51a0  push    word ptr [bx+0F2h]              
51a4  push    word ptr [bx+0F0h]              
51a8  push    ax                              
51a9  push    2h                              
51ab  mov     si,bx                           
51ad  call far sub_5bc8                       
51b2  add     sp,8h                           
51b5  push    word ptr [si+112h]              
51b9  push    word ptr [si+110h]              
51bd  mov     al,[bp-0Eh]                     
51c0  push    ax                              
51c1  push    3h                              
51c3  call far sub_5bc8                       
51c8  add     sp,8h                           
51cb  jmp     518Bh                           
51cd  push    0C1h                            
51d0  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
51d5  dec     ax                              
51d6  jne     51EDh                           
51d8  cmp     byte ptr [bp+0Ah],4h            
51dc  je      51E1h                           
51de  jmp     52DBh                           
51e1  push    word ptr [bp+6h]                
51e4  push    0h                              
51e6  push    0h                              
51e8  push    4h                              
51ea  jmp     52D3h                           
51ed  push    5Dh                             
51ef  call far M007.M007_GETSTATE             ; DP_EOBOARD = 0
51f4  mov     [39Dh],al                       
51f7  push    0A3h                            
51fa  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
51ff  dec     ax                              
5200  jne     5217h                           
5202  mov     byte ptr [39Ch],0Fh             
5207  xor     al,al                           
5209  mov     [bp-0Ah],al                     
520c  mov     [bp-9h],al                      
520f  mov     [bp-8h],al                      
5212  mov     [bp-7h],al                      
5215  jmp     5236h                           
5217  push    64h                             
5219  call far M007.M007_GETSTATE             ; DP_ZONE
521e  or      ax,ax                           
5220  je      522Dh                           
5222  dec     ax                              
5223  je      5249h                           
5225  dec     ax                              
5226  je      5254h                           
5228  dec     ax                              
5229  je      525Fh                           
522b  jmp     5236h                           
522d  mov     byte ptr [39Ch],1h              
5232  mov     byte ptr [bp-0Ah],0h            
5236  lea     ax,[bp-0Ah]                     
5239  push    ss                              
523a  push    ax                              
523b  call far sub_5c36                       
5240  add     sp,4h                           
5243  mov     byte ptr [bp-0Eh],0h            
5247  jmp     526Dh                           
5249  mov     byte ptr [39Ch],2h              
524e  mov     byte ptr [bp-9h],0h             
5252  jmp     5236h                           
5254  mov     byte ptr [39Ch],4h              
5259  mov     byte ptr [bp-8h],0h             
525d  jmp     5236h                           
525f  mov     byte ptr [39Ch],8h              
5264  mov     byte ptr [bp-7h],0h             
5268  jmp     5236h                           
526a  inc     byte ptr [bp-0Eh]               
526d  cmp     byte ptr [bp-0Eh],7h            
5271  jg      52A1h                           
5273  push    word ptr [0A34h]                ; [ds] f32 here = 0
5277  push    word ptr [0A32h]                ; [ds] f32 here = 0
527b  mov     al,[bp-0Eh]                     
527e  push    ax                              
527f  push    2h                              
5281  call far sub_5bc8                       
5286  add     sp,8h                           
5289  push    word ptr [0A38h]                
528d  push    word ptr [0A36h]                ; [ds] f32 here = 1
5291  mov     al,[bp-0Eh]                     
5294  push    ax                              
5295  push    3h                              
5297  call far sub_5bc8                       
529c  add     sp,8h                           
529f  jmp     526Ah                           
52a1  cmp     byte ptr [bp+0Ah],4h            
52a5  jne     52BAh                           
52a7  mov     byte ptr [39Ch],0h              
52ac  push    1h                              
52ae  call far SWITCHPLANEA_FROZEN            
52b3  push    1h                              
52b5  call far SWITCHPLANEB_FROZEN            
52ba  push    0C1h                            
52bd  push    1h                              
52bf  call far M007.M007_PUTSTATE             ; DP_XRAY_ACQUIRE = 1
52c4  push    word ptr [bp+6h]                
52c7  mov     al,[39Ch]                       
52ca  push    ax                              
52cb  mov     al,[bp+8h]                      
52ce  push    ax                              
52cf  mov     al,[bp+0Ah]                     
52d2  push    ax                              
52d3  call far sub_68a8                       
52d8  add     sp,8h                           
52db  pop     ds                              
52dc  pop     si                              
52dd  pop     di                              
52de  leave                                   
52df  retf    6h                              

; ===== SWITCHPLANEA_FROZEN =====
52e2  mov     ax,50E7h                        ; segment seg2:0000
52e5  enter   4h,0h                           
52e9  push    ds                              
52ea  mov     ds,ax                           
52ec  push    0BCh                            
52ef  call far M007.M007_GETSTATE             ; DP_PLANEA_FROZEN
52f4  cmp     ax,[bp+6h]                      
52f7  je      5320h                           
52f9  mov     byte ptr [bp-4h],0h             
52fd  mov     byte ptr [bp-3h],2h             
5301  mov     al,[bp+6h]                      
5304  mov     [bp-2h],al                      
5307  push    word ptr [bp-2h]                
530a  push    word ptr [bp-4h]                
530d  call far sub_68d4                       
5312  add     sp,4h                           
5315  push    0BCh                            
5318  push    word ptr [bp+6h]                
531b  call far M007.M007_PUTSTATE             ; DP_PLANEA_FROZEN
5320  pop     ds                              
5321  leave                                   
5322  retf    2h                              
5325  add     [bx+si],al                      

; ===== SWITCHPLANEB_FROZEN =====
5326  mov     ax,52E3h                        ; segment seg2:0000
5329  enter   4h,0h                           
532d  push    ds                              
532e  mov     ds,ax                           
5330  push    0BDh                            
5333  call far M007.M007_GETSTATE             ; DP_PLANEB_FROZEN
5338  cmp     ax,[bp+6h]                      
533b  je      5364h                           
533d  mov     byte ptr [bp-4h],0h             
5341  mov     al,[bp+6h]                      
5344  mov     [bp-3h],al                      
5347  mov     byte ptr [bp-2h],2h             
534b  push    word ptr [bp-2h]                
534e  push    word ptr [bp-4h]                
5351  call far sub_68d4                       
5356  add     sp,4h                           
5359  push    0BDh                            
535c  push    word ptr [bp+6h]                
535f  call far M007.M007_PUTSTATE             ; DP_PLANEB_FROZEN
5364  pop     ds                              
5365  leave                                   
5366  retf    2h                              
5369  add     [bx+si],al                      

; ===== SETDIFF =====
536a  mov     ax,5327h                        ; segment seg2:0000
536d  enter   0Ah,0h                          
5371  push    ds                              
5372  mov     ds,ax                           
5374  push    64h                             
5376  call far M007.M007_GETSTATE             ; DP_ZONE
537b  mov     [bp-2h],al                      
537e  push    0C1h                            
5381  call far M007.M007_GETSTATE             ; DP_XRAY_ACQUIRE
5386  dec     ax                              
5387  jne     538Ch                           
5389  jmp     5440h                           
538c  push    0A3h                            
538f  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
5394  dec     ax                              
5395  jne     53D5h                           
5397  push    23h                             
5399  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
539e  dec     ax                              
539f  jne     53A7h                           
53a1  mov     byte ptr [bp-4h],7h             
53a5  jmp     53ABh                           
53a7  mov     byte ptr [bp-4h],3h             
53ab  mov     byte ptr [bp-6h],0h             
53af  jmp     53B4h                           
53b1  inc     byte ptr [bp-6h]                
53b4  mov     al,[bp-4h]                      
53b7  cmp     [bp-6h],al                      
53ba  jg      53ECh                           
53bc  mov     al,[bp-6h]                      
53bf  cbw                                     
53c0  mov     bx,ax                           
53c2  shl     bx,2h                           
53c5  mov     ax,[bp+6h]                      
53c8  mov     dx,[bp+8h]                      
53cb  mov     [bx+130h],ax                    
53cf  mov     [bx+132h],dx                    
53d3  jmp     53B1h                           
53d5  mov     al,[bp-2h]                      
53d8  cbw                                     
53d9  mov     bx,ax                           
53db  shl     bx,2h                           
53de  mov     ax,[bp+6h]                      
53e1  mov     dx,[bp+8h]                      
53e4  mov     [bx+130h],ax                    
53e8  mov     [bx+132h],dx                    
53ec  wait                                    
53ed  fld     dword ptr [bp+6h]               
53f0  wait                                    
53f1  fst     dword ptr [bp-0Ah]              
53f4  wait                                    
53f5  fmul    dword ptr [0A42h]               ; [ds] = -0.0025
53f9  wait                                    
53fa  fadd    dword ptr [0A36h]               ; [ds] = 1
53fe  sub     sp,4h                           
5401  mov     bx,sp                           
5403  wait                                    
5404  fstp    dword ptr ss:[bx]               
5407  nop                                     
5408  wait                                    
5409  call far SETBETA                        
540e  wait                                    
540f  fld     dword ptr [bp-0Ah]              
5412  wait                                    
5413  fmul    dword ptr [0A46h]               ; [ds] = 0.01
5417  sub     sp,4h                           
541a  mov     bx,sp                           
541c  wait                                    
541d  fstp    dword ptr ss:[bx]               
5420  nop                                     
5421  wait                                    
5422  call far SETALPHA                       
5427  push    0F7h                            
542a  mov     al,[bp-2h]                      
542d  cbw                                     
542e  mov     bx,ax                           
5430  shl     bx,2h                           
5433  push    word ptr [bx+132h]              
5437  push    word ptr [bx+130h]              
543b  call far M007.M007_PUTVALUE             ; AP_DIFF
5440  pop     ds                              
5441  leave                                   
5442  retf    4h                              
5445  add     [bx+si],al                      

; ===== SWITCHFROZEN =====
5446  mov     ax,536Bh                        ; segment seg2:0000
5449  push    bp                              
544a  mov     bp,sp                           
544c  push    ds                              
544d  mov     ds,ax                           
544f  call far DOCOMMANDTOGGLE_FREEZE         
5454  pop     ds                              
5455  leave                                   
5456  retf    2h                              
5459  add     [bx+si],al                      

; ===== DOCOMMANDTOGGLE_FREEZE =====
545a  mov     ax,5447h                        ; segment seg2:0000
545d  push    bp                              
545e  mov     bp,sp                           
5460  push    ds                              
5461  mov     ds,ax                           
5463  push    0A3h                            
5466  call far M007.M007_GETSTATE             ; DP_ALL_ZONES
546b  dec     ax                              
546c  jne     5496h                           
546e  push    73h                             
5470  call far M007.M007_GETSTATE             ; DP_LEFT_FROZEN
5475  dec     ax                              
5476  jne     548Ah                           
5478  call far DOCOMMANDUNFREEZE_ALL          
547d  push    0C5h                            
5480  push    0h                              
5482  call far M007.M007_PUTSTATE             ; DP_FROZEN = 0
5487  pop     ds                              
5488  leave                                   
5489  retf                                    
548a  call far DOCOMMANDFREEZE_ALL            
548f  push    0C5h                            
5492  push    1h                              
5494  jmp     5482h                           
5496  push    64h                             
5498  call far M007.M007_GETSTATE             ; DP_FROZEN = 1
549d  jmp     54DEh                           
549f  push    7Bh                             
54a1  call far M007.M007_GETSTATE             ; DP_Z0
54a6  or      ax,ax                           
54a8  je      54D7h                           
54aa  call far DOCOMMANDUNFREEZE_ZONE         
54af  jmp     547Dh                           
54b1  push    7Ch                             
54b3  jmp     54CEh                           
54b5  push    7Dh                             
54b7  jmp     54CEh                           
54b9  push    7Eh                             
54bb  jmp     54CEh                           
54bd  push    7Fh                             
54bf  jmp     54CEh                           
54c1  push    80h                             
54c4  jmp     54CEh                           
54c6  push    81h                             
54c9  jmp     54CEh                           
54cb  push    82h                             
54ce  call far M007.M007_GETSTATE             ; DP_Z1 = 125
54d3  or      ax,ax                           
54d5  jne     54AAh                           
54d7  call far DOCOMMANDFREEZE_ZONE           
54dc  jmp     548Fh                           
54de  cmp     ax,7h                           
54e1  ja      54FBh                           
54e3  add     ax,ax                           
54e5  xchg    ax,bx                           
54e6  jmp     word ptr cs:[bx+54EBh]          
54eb  lahf                                    
54ec  push    sp                              
54ed  mov     cl,54h                          
54ef  mov     ch,54h                          
54f1  mov     cx,0BD54h                       
54f4  push    sp                              
54f5  rcl     word ptr [si-3Ah],54h           
54f9  retf                                    
54fa  push    sp                              
54fb  pop     ds                              
54fc  leave                                   
54fd  retf                                    

; ===== DOCOMMANDBSD_SET_TOPO =====
54fe  mov     ax,545Bh                        ; segment seg2:0000
5501  push    bp                              
5502  mov     bp,sp                           
5504  push    ds                              
5505  mov     ds,ax                           
5507  push    55h                             
5509  call far M007.M007_GETSTATE             ; DP_4QBSD_Q1
550e  mov     [3A6h],al                       
5511  push    56h                             
5513  call far M007.M007_GETSTATE             ; DP_4QBSD_Q2
5518  mov     [3A7h],al                       
551b  push    57h                             
551d  call far M007.M007_GETSTATE             ; DP_4QBSD_Q3
5522  mov     [3A8h],al                       
5525  push    58h                             
5527  call far M007.M007_GETSTATE             ; DP_4QBSD_Q4
552c  mov     [3A9h],al                       
552f  pop     ds                              
5530  leave                                   
5531  retf                                    

; ===== INSTANT_FREEZE_ALL =====
5532  mov     ax,54FFh                        ; segment seg2:0000
5535  enter   0Ah,0h                          
5539  push    ds                              
553a  mov     ds,ax                           
553c  mov     byte ptr [bp-0Ah],2h            
5540  mov     al,1h                           
5542  mov     [bp-9h],al                      
5545  mov     [bp-8h],al                      
5548  mov     [bp-7h],al                      
554b  mov     [bp-6h],al                      
554e  mov     [bp-5h],al                      
5551  mov     [bp-4h],al                      
5554  mov     [bp-3h],al                      
5557  mov     [bp-2h],al                      
555a  lea     ax,[bp-0Ah]                     
555d  push    ss                              
555e  push    ax                              
555f  call far sub_5fd4                       
5564  add     sp,4h                           
5567  push    78h                             
5569  push    1h                              
556b  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
5570  pop     ds                              
5571  leave                                   
5572  retf                                    
5573  add     [bx+si],al                      

; ===== INSTANT_FREEZE_ZONE =====
5574  mov     ax,5533h                        ; segment seg2:0000
5577  enter   0Ah,0h                          
557b  push    ds                              
557c  mov     ds,ax                           
557e  mov     al,2h                           
5580  mov     [bp-0Ah],al                     
5583  mov     [bp-9h],al                      
5586  mov     [bp-8h],al                      
5589  mov     [bp-7h],al                      
558c  mov     [bp-6h],al                      
558f  mov     [bp-5h],al                      
5592  mov     [bp-4h],al                      
5595  mov     [bp-3h],al                      
5598  mov     [bp-2h],al                      
559b  mov     ax,[bp+6h]                      
559e  jmp     55D0h                           
55a0  mov     byte ptr [bp-9h],1h             
55a4  jmp     55EDh                           
55a6  mov     byte ptr [bp-8h],1h             
55aa  jmp     55EDh                           
55ac  mov     byte ptr [bp-7h],1h             
55b0  jmp     55EDh                           
55b2  mov     byte ptr [bp-6h],1h             
55b6  jmp     55EDh                           
55b8  mov     byte ptr [bp-5h],1h             
55bc  jmp     55EDh                           
55be  mov     byte ptr [bp-4h],1h             
55c2  jmp     55EDh                           
55c4  mov     byte ptr [bp-3h],1h             
55c8  jmp     55EDh                           
55ca  mov     byte ptr [bp-2h],1h             
55ce  jmp     55EDh                           
55d0  cmp     ax,7h                           
55d3  ja      55EDh                           
55d5  add     ax,ax                           
55d7  xchg    ax,bx                           
55d8  jmp     word ptr cs:[bx+55DDh]          
55dd  mov     al,[0A655h]                     
55e0  push    bp                              
55e1  lodsb                                   
55e2  push    bp                              
55e3  mov     dl,55h                          
55e5  mov     ax,0BE55h                       
55e8  push    bp                              
55e9  les     dx,[di-36h]                     
55ec  push    bp                              
55ed  lea     ax,[bp-0Ah]                     
55f0  push    ss                              
55f1  push    ax                              
55f2  call far sub_5fd4                       
55f7  add     sp,4h                           
55fa  push    78h                             
55fc  push    1h                              
55fe  call far M007.M007_PUTSTATE             ; DP_FREEZE_STATUS = 1
5603  pop     ds                              
5604  leave                                   
5605  retf    2h                              

; ===== DETECTOR_FROM_PORT =====
5608  mov     ax,5575h                        ; segment seg2:0000
560b  push    bp                              
560c  mov     bp,sp                           
560e  push    ds                              
560f  mov     ds,ax                           
5611  mov     bx,[bp+6h]                      
5614  mov     al,[bx+8Eh]                     
5618  cbw                                     
5619  pop     ds                              
561a  leave                                   
561b  retf    2h                              

; ===== START_SPOT_DATA =====
561e  mov     ax,5609h                        ; segment seg2:0000
5621  push    bp                              
5622  mov     bp,sp                           
5624  push    ds                              
5625  mov     ds,ax                           
5627  push    1h                              
5629  call far sub_68f6                       
562e  pop     bx                              
562f  pop     ds                              
5630  leave                                   
5631  retf                                    

; ===== STOP_SPOT_DATA =====
5632  mov     ax,561Fh                        ; segment seg2:0000
5635  push    bp                              
5636  mov     bp,sp                           
5638  push    ds                              
5639  mov     ds,ax                           
563b  push    0h                              
563d  call far sub_68f6                       
5642  pop     bx                              
5643  pop     ds                              
5644  leave                                   
5645  retf                                    

; ===== SWITCHEXT_SPOT_CONTROL =====
5646  mov     ax,5633h                        ; segment seg2:0000
5649  push    bp                              
564a  mov     bp,sp                           
564c  push    ds                              
564d  mov     ds,ax                           
564f  push    0DBh                            
5652  push    word ptr [bp+6h]                
5655  call far M007.M007_PUTSTATE             ; DP_EXT_SPOT_CONTROL
565a  cmp     word ptr [bp+6h],1h             
565e  jne     5675h                           
5660  push    word ptr [0A34h]                ; [ds] f32 here = 0
5664  push    word ptr [0A32h]                ; [ds] f32 here = 0
5668  push    word ptr [0A34h]                ; [ds] f32 here = 0
566c  push    word ptr [0A32h]                ; [ds] f32 here = 0
5670  call far M400.SETXYSPOT_POSN            
5675  mov     al,[bp+6h]                      
5678  push    ax                              
5679  call far sub_6916                       
567e  pop     bx                              
567f  pop     ds                              
5680  leave                                   
5681  retf    2h                              

; ===== DOCOMMANDSTART_SPOT_ACQUIRE =====
5684  mov     ax,5647h                        ; segment seg2:0000
5687  push    bp                              
5688  mov     bp,sp                           
568a  push    ds                              
568b  mov     ds,ax                           
568d  push    21h                             
568f  call far M007.M007_GETSTATE             ; DP_SPOT
5694  or      ax,ax                           
5696  jne     569Fh                           
5698  push    1h                              
569a  call far M400.SWITCHSPOT                
569f  push    0h                              
56a1  call far sub_68f6                       
56a6  pop     bx                              
56a7  push    word ptr [3B0h]                 
56ab  push    word ptr [3AEh]                 ; [ds] f32 here = 20
56af  push    word ptr [3ACh]                 
56b3  push    word ptr [3AAh]                 ; [ds] f32 here = 1000
56b7  push    1h                              
56b9  call far sub_6936                       
56be  add     sp,0Ah                          
56c1  pop     ds                              
56c2  leave                                   
56c3  retf                                    

; ===== DOCOMMANDSTOP_SPOT_ACQUIRE =====
56c4  mov     ax,5685h                        ; segment seg2:0000
56c7  push    bp                              
56c8  mov     bp,sp                           
56ca  push    ds                              
56cb  mov     ds,ax                           
56cd  push    word ptr [3B0h]                 
56d1  push    word ptr [3AEh]                 ; [ds] f32 here = 20
56d5  push    word ptr [3ACh]                 
56d9  push    word ptr [3AAh]                 ; [ds] f32 here = 1000
56dd  push    0h                              
56df  call far sub_6936                       
56e4  add     sp,0Ah                          
56e7  pop     ds                              
56e8  leave                                   
56e9  retf                                    

; ===== SETSPOT_DATA_RATE =====
56ea  mov     ax,56C5h                        ; segment seg2:0000
56ed  enter   14h,0h                          
56f1  push    ds                              
56f2  mov     ds,ax                           
56f4  push    128h                            
56f7  wait                                    
56f8  fld     dword ptr [bp+6h]               
56fb  wait                                    
56fc  fmul    dword ptr [0A4Ah]               ; [ds] = 20
5700  wait                                    
5701  fst     dword ptr [3AEh]                ; [ds] = 20
5705  wait                                    
5706  fmul    dword ptr [0A4Eh]               ; [ds] = 0.05
570a  sub     sp,4h                           
570d  mov     bx,sp                           
570f  wait                                    
5710  fstp    dword ptr ss:[bx]               
5713  nop                                     
5714  wait                                    
5715  call far M007.M007_PUTVALUE             ; AP_SPOT_DATA_RATE
571a  push    129h                            
571d  lea     ax,[bp-8h]                      
5720  push    ax                              
5721  call far M007.M007_GETVALUE             ; AP_SPOT_DATA_DURATION
5726  mov     bx,ax                           
5728  wait                                    
5729  fld     dword ptr ss:[bx]               
572c  push    128h                            
572f  lea     ax,[bp-0Ch]                     
5732  push    ax                              
5733  wait                                    
5734  fstp    dword ptr [bp-14h]              
5737  call far M007.M007_GETVALUE             ; AP_SPOT_DATA_RATE
573c  mov     bx,ax                           
573e  wait                                    
573f  fld     dword ptr ss:[bx]               
5742  wait                                    
5743  fdivr   dword ptr [bp-14h]              
5746  wait                                    
5747  fstp    dword ptr [3AAh]                ; [ds] = 1000
574b  wait                                    
574c  fld     dword ptr [0A52h]               ; [ds] = 1048576
5750  wait                                    
5751  fcom    dword ptr [3AAh]                ; [ds] = 1000
5755  wait                                    
5756  fstp    st(0)                           
5758  wait                                    
5759  fstsw   ax                              
575b  sahf                                    
575c  jae     5797h                           
575e  mov     ax,[0A52h]                      
5761  mov     dx,[0A54h]                      
5765  mov     [3AAh],ax                       
5768  mov     [3ACh],dx                       
576c  push    128h                            
576f  lea     ax,[bp-10h]                     
5772  push    ax                              
5773  call far M007.M007_GETVALUE             ; AP_SPOT_DATA_RATE
5778  mov     bx,ax                           
577a  wait                                    
577b  fld     dword ptr ss:[bx]               
577e  wait                                    
577f  fmul    dword ptr [0A52h]               ; [ds] = 1048576
5783  wait                                    
5784  fstp    dword ptr [bp-4h]               
5787  nop                                     
5788  wait                                    
5789  push    129h                            
578c  push    word ptr [bp-2h]                
578f  push    word ptr [bp-4h]                
5792  call far M007.M007_PUTVALUE             ; AP_SPOT_DATA_DURATION
5797  pop     ds                              
5798  leave                                   
5799  retf    4h                              

; ===== SETSPOT_DATA_DURATION =====
579c  mov     ax,56EBh                        ; segment seg2:0000
579f  enter   10h,0h                          
57a3  push    ds                              
57a4  mov     ds,ax                           
57a6  wait                                    
57a7  fld     dword ptr [bp+6h]               
57aa  push    128h                            
57ad  lea     ax,[bp-8h]                      
57b0  push    ax                              
57b1  wait                                    
57b2  fstp    dword ptr [bp-10h]              
57b5  call far M007.M007_GETVALUE             ; AP_SPOT_DATA_RATE
57ba  mov     bx,ax                           
57bc  wait                                    
57bd  fld     dword ptr ss:[bx]               
57c0  wait                                    
57c1  fdivr   dword ptr [bp-10h]              
57c4  wait                                    
57c5  fstp    dword ptr [3AAh]                ; [ds] = 1000
57c9  wait                                    
57ca  fld     dword ptr [0A52h]               ; [ds] = 1048576
57ce  wait                                    
57cf  fcom    dword ptr [3AAh]                ; [ds] = 1000
57d3  wait                                    
57d4  fstp    st(0)                           
57d6  wait                                    
57d7  fstsw   ax                              
57d9  sahf                                    
57da  jae     5812h                           
57dc  mov     ax,[0A52h]                      
57df  mov     dx,[0A54h]                      
57e3  mov     [3AAh],ax                       
57e6  mov     [3ACh],dx                       
57ea  push    128h                            
57ed  lea     ax,[bp-0Ch]                     
57f0  push    ax                              
57f1  call far M007.M007_GETVALUE             ; AP_SPOT_DATA_RATE
57f6  mov     bx,ax                           
57f8  wait                                    
57f9  fld     dword ptr ss:[bx]               
57fc  wait                                    
57fd  fmul    dword ptr [0A52h]               ; [ds] = 1048576
5801  wait                                    
5802  fstp    dword ptr [bp-4h]               
5805  nop                                     
5806  wait                                    
5807  push    129h                            
580a  push    word ptr [bp-2h]                
580d  push    word ptr [bp-4h]                
5810  jmp     581Bh                           
5812  push    129h                            
5815  push    word ptr [bp+8h]                
5818  push    word ptr [bp+6h]                
581b  call far M007.M007_PUTVALUE             ; AP_SPOT_DATA_DURATION = 297
5820  pop     ds                              
5821  leave                                   
5822  retf    4h                              
5825  add     [bx+si],al                      

; ===== DOCOMMANDFREE_SPOT_BUFFER =====
5826  mov     ax,579Dh                        ; segment seg2:0000
5829  push    bp                              
582a  mov     bp,sp                           
582c  push    ds                              
582d  mov     ds,ax                           
582f  call far sub_6972                       
5834  pop     ds                              
5835  leave                                   
5836  retf                                    
5837  add     [bx+si],al                      

; ===== GET_SPOT_NUM_SAMPLES =====
5838  mov     ax,5827h                        ; segment seg2:0000
583b  push    bp                              
583c  mov     bp,sp                           
583e  push    ds                              
583f  mov     ds,ax                           
5841  mov     ax,[3B2h]                       
5844  mov     dx,[3B4h]                       
5848  pop     ds                              
5849  leave                                   
584a  retf                                    
584b  add     [bx+si],al                      

; ===== GET_SPOT_DATA_LOCATION =====
584c  mov     ax,5839h                        ; segment seg2:0000
584f  push    bp                              
5850  mov     bp,sp                           
5852  push    ds                              
5853  mov     ds,ax                           
5855  mov     ax,[3B6h]                       
5858  mov     dx,[3B8h]                       
585c  pop     ds                              
585d  leave                                   
585e  retf                                    
585f  add     [bx+si],al                      

; ===== GET_SPOT_LOOP_COUNT =====
5860  mov     ax,584Dh                        ; segment seg2:0000
5863  push    bp                              
5864  mov     bp,sp                           
5866  push    ds                              
5867  mov     ds,ax                           
5869  wait                                    
586a  fld     dword ptr [3AEh]                ; [ds] = 20
586e  call far sub_015a                       
5873  pop     ds                              
5874  leave                                   
5875  retf                                    

; ===== Z130_RESTORE_DETECTOR =====
5876  mov     ax,5861h                        ; segment seg2:0000
5879  push    bp                              
587a  mov     bp,sp                           
587c  push    ds                              
587d  mov     ds,ax                           
587f  pop     ds                              
5880  leave                                   
5881  retf    2h                              

; ===== Z130_UPDATE_DETECTORS =====
5884  mov     ax,5877h                        ; segment seg2:0000
5887  push    bp                              
5888  mov     bp,sp                           
588a  push    ds                              
588b  mov     ds,ax                           
588d  pop     ds                              
588e  leave                                   
588f  retf                                    

; ===== SWITCHABCC_B_CAL =====
5890  mov     ax,5885h                        ; segment seg2:0000
5893  enter   2Ah,0h                          
5897  push    ds                              
5898  mov     ds,ax                           
589a  push    129h                            
589d  push    word ptr [bp+6h]                
58a0  call far M007.M007_PUTSTATE             ; DP_ABCC_B_CAL
58a5  push    64h                             
58a7  call far M007.M007_GETSTATE             ; DP_ZONE
58ac  mov     bx,ax                           
58ae  mov     al,[bx+86h]                     
58b2  cbw                                     
58b3  imul    bx,ax,5h                        
58b6  mov     al,[bp+6h]                      
58b9  inc     al                              
58bb  mov     [bx+3C9h],al                    
58bf  push    6Eh                             
58c1  call far M007.M007_GETSTATE             ; DP_AUTO_VIDEO
58c6  push    ax                              
58c7  call far SWITCHAUTO_VIDEO               
58cc  mov     ax,[bp+6h]                      
58cf  inc     ax                              
58d0  push    ax                              
58d1  push    58FCh                           ; segment seg1:0000
58d4  push    5B0Eh                           
58d7  lea     ax,[bp-16h]                     
58da  push    ss                              
58db  push    ax                              
58dc  call far USER._WSPRINTF                 
58e1  add     sp,0Ah                          
58e4  push    64h                             
58e6  call far M007.M007_GETSTATE             ; DP_ZONE
58eb  mov     bx,ax                           
58ed  mov     al,[bx+86h]                     
58f1  cbw                                     
58f2  imul    bx,ax,5h                        
58f5  mov     al,[bx+3C6h]                    
58f9  cbw                                     
58fa  push    ax                              
58fb  push    590Fh                           ; segment seg1:0000
58fe  push    5B12h                           
5901  lea     ax,[bp-2Ah]                     
5904  push    ss                              
5905  push    ax                              
5906  call far USER._WSPRINTF                 ; "BrightnessCal%d"
590b  add     sp,0Ah                          
590e  push    5871h                           ; segment seg1:0000
5911  push    5B22h                           
5914  lea     ax,[bp-2Ah]                     
5917  push    ss                              
5918  push    ax                              
5919  lea     ax,[bp-16h]                     
591c  push    ss                              
591d  push    ax                              
591e  call far M007.GETLEOINIFILEPATH         ; "Detectors"
5923  push    dx                              
5924  push    ax                              
5925  call far KERNEL.WRITEPRIVATEPROFILESTRING
592a  pop     ds                              
592b  leave                                   
592c  retf    2h                              
592f  add     [bx+si],al                      

; ===== SWITCHABCC_C_CAL =====
5930  mov     ax,5891h                        ; segment seg2:0000
5933  enter   2Ah,0h                          
5937  push    ds                              
5938  mov     ds,ax                           
593a  push    12Ah                            
593d  push    word ptr [bp+6h]                
5940  call far M007.M007_PUTSTATE             ; DP_ABCC_C_CAL
5945  push    64h                             
5947  call far M007.M007_GETSTATE             ; DP_ZONE
594c  mov     bx,ax                           
594e  mov     al,[bx+86h]                     
5952  cbw                                     
5953  imul    bx,ax,5h                        
5956  mov     al,[bp+6h]                      
5959  inc     al                              
595b  mov     [bx+3CAh],al                    
595f  push    6Eh                             
5961  call far M007.M007_GETSTATE             ; DP_AUTO_VIDEO
5966  push    ax                              
5967  call far SWITCHAUTO_VIDEO               
596c  mov     ax,[bp+6h]                      
596f  inc     ax                              
5970  push    ax                              
5971  push    599Ch                           ; segment seg1:0000
5974  push    5B0Eh                           
5977  lea     ax,[bp-16h]                     
597a  push    ss                              
597b  push    ax                              
597c  call far USER._WSPRINTF                 
5981  add     sp,0Ah                          
5984  push    64h                             
5986  call far M007.M007_GETSTATE             ; DP_ZONE
598b  mov     bx,ax                           
598d  mov     al,[bx+86h]                     
5991  cbw                                     
5992  imul    bx,ax,5h                        
5995  mov     al,[bx+3C6h]                    
5999  cbw                                     
599a  push    ax                              
599b  push    59AFh                           ; segment seg1:0000
599e  push    5B2Ch                           
59a1  lea     ax,[bp-2Ah]                     
59a4  push    ss                              
59a5  push    ax                              
59a6  call far USER._WSPRINTF                 ; "ContrastCal%d"
59ab  add     sp,0Ah                          
59ae  push    58CAh                           ; segment seg1:0000
59b1  push    5B22h                           
59b4  lea     ax,[bp-2Ah]                     
59b7  push    ss                              
59b8  push    ax                              
59b9  lea     ax,[bp-16h]                     
59bc  push    ss                              
59bd  push    ax                              
59be  call far M007.GETLEOINIFILEPATH         ; "Detectors"
59c3  push    dx                              
59c4  push    ax                              
59c5  call far KERNEL.WRITEPRIVATEPROFILESTRING
59ca  pop     ds                              
59cb  leave                                   
59cc  retf    2h                              
59cf  add     [bx+si],al                      

; ===== SWITCHDWELL_TIME =====
59d0  mov     ax,5931h                        ; segment seg2:0000
59d3  push    bp                              
59d4  mov     bp,sp                           
59d6  push    ds                              
59d7  mov     ds,ax                           
59d9  push    144h                            
59dc  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
59e1  or      ax,ax                           
59e3  jne     5A08h                           
59e5  push    63h                             
59e7  call far M007.M007_GETSTATE             ; DP_IMAGE_STORE
59ec  cmp     ax,2h                           
59ef  je      59FDh                           
59f1  push    63h                             
59f3  call far M007.M007_GETSTATE             ; DP_IMAGE_STORE
59f8  cmp     ax,3h                           
59fb  jne     5A08h                           
59fd  cmp     word ptr [bp+6h],0h             
5a01  jne     5A08h                           
5a03  mov     word ptr [bp+6h],1h             
5a08  push    12Eh                            
5a0b  push    word ptr [bp+6h]                
5a0e  call far M007.M007_PUTSTATE             ; DP_DWELL_TIME
5a13  push    5Dh                             
5a15  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
5a1a  jmp     5A36h                           
5a1c  call far DOCOMMANDCONTINUOUS_AVG        
5a21  jmp     5A45h                           
5a23  push    144h                            
5a26  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
5a2b  or      ax,ax                           
5a2d  jne     5A45h                           
5a2f  call far DOCOMMANDFRAME_INT             
5a34  jmp     5A45h                           
5a36  cmp     ax,7h                           
5a39  je      5A1Ch                           
5a3b  ja      5A45h                           
5a3d  or      al,al                           
5a3f  je      5A23h                           
5a41  sub     al,4h                           
5a43  je      5A23h                           
5a45  pop     ds                              
5a46  leave                                   
5a47  retf    2h                              

; ===== SWITCHBSD_AUTO =====
5a4a  mov     ax,59D1h                        ; segment seg2:0000
5a4d  push    bp                              
5a4e  mov     bp,sp                           
5a50  push    ds                              
5a51  mov     ds,ax                           
5a53  push    142h                            
5a56  push    word ptr [bp+6h]                
5a59  call far M007.M007_PUTSTATE             ; DP_BSD_AUTO
5a5e  push    83h                             
5a61  call far M007.M007_GETSTATE             ; DP_GSP
5a66  dec     ax                              
5a67  jne     5A79h                           
5a69  push    5Ah                             
5a6b  call far M007.M007_GETSTATE             ; DP_4QBSD_GAIN
5a70  push    ax                              
5a71  push    word ptr [bp+6h]                
5a74  call far TIGASEM.GSPSETBSDAUTORANGE     
5a79  pop     ds                              
5a7a  leave                                   
5a7b  retf    2h                              

; ===== SWITCHVPSE =====
5a7e  mov     ax,5A4Bh                        ; segment seg2:0000
5a81  push    bp                              
5a82  mov     bp,sp                           
5a84  push    ds                              
5a85  mov     ds,ax                           
5a87  push    149h                            
5a8a  push    word ptr [bp+6h]                
5a8d  call far M007.M007_PUTSTATE             ; DP_VPSE
5a92  cmp     word ptr [bp+6h],1h             
5a96  jne     5A9Eh                           
5a98  mov     word ptr [39Ah],186h            
5a9e  pop     ds                              
5a9f  leave                                   
5aa0  retf    2h                              
5aa3  add     [bx+si],al                      

; ===== SWITCHELECTRON_COUNTING =====
5aa4  mov     ax,5A7Fh                        ; segment seg2:0000
5aa7  push    bp                              
5aa8  mov     bp,sp                           
5aaa  push    ds                              
5aab  mov     ds,ax                           
5aad  push    15Bh                            
5ab0  push    word ptr [bp+6h]                
5ab3  call far M007.M007_PUTSTATE             ; DP_ELECTRON_COUNTING
5ab8  pop     ds                              
5ab9  leave                                   
5aba  retf    2h                              
5abd  add     [bx+si],al                      

; ===== SETCCD_ILLUMINATION =====
5abe  mov     ax,5AA5h                        ; segment seg2:0000
5ac1  push    bp                              
5ac2  mov     bp,sp                           
5ac4  push    ds                              
5ac5  mov     ds,ax                           
5ac7  push    1BDh                            
5aca  push    word ptr [bp+8h]                
5acd  push    word ptr [bp+6h]                
5ad0  call far M007.M007_PUTVALUE             ; AP_CCD_ILLUMINATION
5ad5  pop     ds                              
5ad6  leave                                   
5ad7  retf    4h                              

; ===== SWITCHCHAMBERSCOPE =====
5ada  mov     ax,5ABFh                        ; segment seg2:0000
5add  enter   4h,0h                           
5ae1  push    ds                              
5ae2  mov     ds,ax                           
5ae4  push    15Dh                            
5ae7  push    word ptr [bp+6h]                
5aea  call far M007.M007_PUTSTATE             ; DP_CHAMBERSCOPE
5aef  push    1BDh                            
5af2  lea     ax,[bp-4h]                      
5af5  push    ax                              
5af6  call far M007.M007_GETVALUE             ; AP_CCD_ILLUMINATION
5afb  mov     bx,ax                           
5afd  push    word ptr ss:[bx+2h]             
5b01  push    word ptr ss:[bx]                
5b04  call far SETCCD_ILLUMINATION            
5b09  pop     ds                              
5b0a  leave                                   
5b0b  retf    2h                              
5b0e  and     ax,64h                          
5b11  add     [bp+si+72h],al                  
5b14  imul    sp,[bx+68h],6E74h               
5b19  jae     5B8Fh                           
5b1c  inc     bx                              
5b1d  popa                                    
5b1e  insb                                    
5b1f  and     ax,64h                          
5b22  inc     sp                              
5b23  je      5B8Bh                           
5b26  arpl    [si+6Fh],si                     
5b29  jb      5B9Eh                           
5b2b  add     [bp+di+6Fh],al                  
5b2e  outsb                                   
5b2f  je      5BA3h                           
5b31  popa                                    
5b32  jae     5BA8h                           
5b34  inc     bx                              
5b35  popa                                    
5b36  insb                                    
5b37  and     ax,64h                          

; ----- sub_5b3a -----
5b3a  mov     ax,5ADBh                        ; segment seg2:0000
5b3d  push    bp                              
5b3e  mov     bp,sp                           
5b40  push    ds                              
5b41  mov     ds,ax                           
5b43  push    83h                             
5b46  call far M007.M007_GETSTATE             ; DP_GSP
5b4b  dec     ax                              
5b4c  jne     5B5Ch                           
5b4e  push    word ptr [bp+8h]                
5b51  push    word ptr [bp+6h]                
5b54  call far TIGASEM.SETACQUIREMODULE       
5b59  pop     ds                              
5b5a  leave                                   
5b5b  retf                                    
5b5c  xor     ax,ax                           
5b5e  pop     ds                              
5b5f  leave                                   
5b60  retf                                    
5b61  add     [bx+si],al                      

; ----- sub_5b62 -----
5b62  mov     ax,5B3Bh                        ; segment seg2:0000
5b65  push    bp                              
5b66  mov     bp,sp                           
5b68  push    ds                              
5b69  mov     ds,ax                           
5b6b  push    83h                             
5b6e  call far M007.M007_GETSTATE             ; DP_GSP
5b73  dec     ax                              
5b74  jne     5B7Eh                           
5b76  call far TIGASEM.DELACQUIREMODULE       
5b7b  pop     ds                              
5b7c  leave                                   
5b7d  retf                                    
5b7e  xor     ax,ax                           
5b80  pop     ds                              
5b81  leave                                   
5b82  retf                                    
5b83  add     [bx+si],al                      

; ----- sub_5b84 -----
5b84  mov     ax,5B63h                        ; segment seg2:0000
5b87  push    bp                              
5b88  mov     bp,sp                           
5b8a  push    ds                              
5b8b  mov     ds,ax                           
5b8d  push    83h                             
5b90  call far M007.M007_GETSTATE             ; DP_GSP
5b95  dec     ax                              
5b96  jne     5BA0h                           
5b98  call far TIGASEM.SUSPENDACQUIREMODULE   
5b9d  pop     ds                              
5b9e  leave                                   
5b9f  retf                                    
5ba0  xor     ax,ax                           
5ba2  cwd                                     
5ba3  pop     ds                              
5ba4  leave                                   
5ba5  retf                                    

; ----- sub_5ba6 -----
5ba6  mov     ax,5B85h                        ; segment seg2:0000
5ba9  push    bp                              
5baa  mov     bp,sp                           
5bac  push    ds                              
5bad  mov     ds,ax                           
5baf  push    83h                             
5bb2  call far M007.M007_GETSTATE             ; DP_GSP
5bb7  dec     ax                              
5bb8  jne     5BC2h                           
5bba  call far TIGASEM.INITACQUIRECOMMS       
5bbf  pop     ds                              
5bc0  leave                                   
5bc1  retf                                    
5bc2  xor     ax,ax                           
5bc4  cwd                                     
5bc5  pop     ds                              
5bc6  leave                                   
5bc7  retf                                    

; ----- sub_5bc8 -----
5bc8  mov     ax,5BA7h                        ; segment seg2:0000
5bcb  push    bp                              
5bcc  mov     bp,sp                           
5bce  push    ds                              
5bcf  mov     ds,ax                           
5bd1  push    83h                             
5bd4  call far M007.M007_GETSTATE             ; DP_GSP
5bd9  dec     ax                              
5bda  jne     5BF8h                           
5bdc  mov     al,[bp+6h]                      
5bdf  push    ax                              
5be0  mov     al,[bp+8h]                      
5be3  push    ax                              
5be4  wait                                    
5be5  fld     dword ptr [bp+0Ah]              
5be8  sub     sp,8h                           
5beb  mov     bx,sp                           
5bed  wait                                    
5bee  fstp    qword ptr ss:[bx]               
5bf1  nop                                     
5bf2  wait                                    
5bf3  call far TIGASEM.SETCOEFFTIGAREQUEST    
5bf8  pop     ds                              
5bf9  leave                                   
5bfa  retf                                    
5bfb  add     [bx+si],al                      

; ----- sub_5bfc -----
5bfc  mov     ax,5BC9h                        ; segment seg2:0000
5bff  push    bp                              
5c00  mov     bp,sp                           
5c02  push    ds                              
5c03  mov     ds,ax                           
5c05  push    83h                             
5c08  call far M007.M007_GETSTATE             ; DP_GSP
5c0d  dec     ax                              
5c0e  jne     5C20h                           
5c10  mov     al,[bp+6h]                      
5c13  push    ax                              
5c14  mov     al,[bp+8h]                      
5c17  push    ax                              
5c18  call far TIGASEM.LINEAVERAGETIGAREQUEST 
5c1d  pop     ds                              
5c1e  leave                                   
5c1f  retf                                    
5c20  mov     byte ptr [6F8h],5h              
5c25  mov     al,[bp+6h]                      
5c28  sub     ah,ah                           
5c2a  mov     [0DDAh],ax                      
5c2d  mov     word ptr [0DDCh],0h             
5c33  pop     ds                              
5c34  leave                                   
5c35  retf                                    

; ----- sub_5c36 -----
5c36  mov     ax,5BFDh                        ; segment seg2:0000
5c39  push    bp                              
5c3a  mov     bp,sp                           
5c3c  push    ds                              
5c3d  mov     ds,ax                           
5c3f  push    83h                             
5c42  call far M007.M007_GETSTATE             ; DP_GSP
5c47  dec     ax                              
5c48  jne     5C58h                           
5c4a  push    word ptr [bp+8h]                
5c4d  push    word ptr [bp+6h]                
5c50  call far TIGASEM.FRAMEAVERAGETIGAREQUEST
5c55  pop     ds                              
5c56  leave                                   
5c57  retf                                    
5c58  mov     byte ptr [6F8h],2h              
5c5d  pop     ds                              
5c5e  leave                                   
5c5f  retf                                    

; ----- sub_5c60 -----
5c60  mov     ax,5C37h                        ; segment seg2:0000
5c63  push    bp                              
5c64  mov     bp,sp                           
5c66  push    ds                              
5c67  mov     ds,ax                           
5c69  push    83h                             
5c6c  call far M007.M007_GETSTATE             ; DP_GSP
5c71  dec     ax                              
5c72  jne     5C7Dh                           
5c74  mov     al,[bp+6h]                      
5c77  push    ax                              
5c78  call far TIGASEM.SETIDENTITYLUTTIGAREQUEST
5c7d  pop     ds                              
5c7e  leave                                   
5c7f  retf                                    

; ----- sub_5c80 -----
5c80  mov     ax,5C61h                        ; segment seg2:0000
5c83  push    bp                              
5c84  mov     bp,sp                           
5c86  push    ds                              
5c87  mov     ds,ax                           
5c89  push    83h                             
5c8c  call far M007.M007_GETSTATE             ; DP_GSP
5c91  dec     ax                              
5c92  jne     5CACh                           
5c94  mov     al,[bp+6h]                      
5c97  push    ax                              
5c98  wait                                    
5c99  fld     dword ptr [bp+8h]               
5c9c  sub     sp,8h                           
5c9f  mov     bx,sp                           
5ca1  wait                                    
5ca2  fstp    qword ptr ss:[bx]               
5ca5  nop                                     
5ca6  wait                                    
5ca7  call far TIGASEM.SETGAMMALUTTIGAREQUEST 
5cac  pop     ds                              
5cad  leave                                   
5cae  retf                                    
5caf  add     [bx+si],al                      

; ----- sub_5cb0 -----
5cb0  mov     ax,5C81h                        ; segment seg2:0000
5cb3  push    bp                              
5cb4  mov     bp,sp                           
5cb6  push    ds                              
5cb7  mov     ds,ax                           
5cb9  push    83h                             
5cbc  call far M007.M007_GETSTATE             ; DP_GSP
5cc1  dec     ax                              
5cc2  jne     5CCDh                           
5cc4  mov     al,[bp+6h]                      
5cc7  push    ax                              
5cc8  call far TIGASEM.SETINVERTLUTTIGAREQUEST
5ccd  pop     ds                              
5cce  leave                                   
5ccf  retf                                    

; ----- sub_5cd0 -----
5cd0  mov     ax,5CB1h                        ; segment seg2:0000
5cd3  push    bp                              
5cd4  mov     bp,sp                           
5cd6  push    ds                              
5cd7  mov     ds,ax                           
5cd9  push    83h                             
5cdc  call far M007.M007_GETSTATE             ; DP_GSP
5ce1  dec     ax                              
5ce2  jne     5CF5h                           
5ce4  mov     al,[bp+6h]                      
5ce7  push    ax                              
5ce8  mov     al,[bp+8h]                      
5ceb  push    ax                              
5cec  mov     al,[bp+0Ah]                     
5cef  push    ax                              
5cf0  call far TIGASEM.COMBINELUTSTIGAREQUEST 
5cf5  pop     ds                              
5cf6  leave                                   
5cf7  retf                                    

; ----- sub_5cf8 -----
5cf8  mov     ax,5CD1h                        ; segment seg2:0000
5cfb  push    bp                              
5cfc  mov     bp,sp                           
5cfe  push    ds                              
5cff  mov     ds,ax                           
5d01  push    83h                             
5d04  call far M007.M007_GETSTATE             ; DP_GSP
5d09  dec     ax                              
5d0a  jne     5D19h                           
5d0c  mov     al,[bp+6h]                      
5d0f  push    ax                              
5d10  mov     al,[bp+8h]                      
5d13  push    ax                              
5d14  call far TIGASEM.COPYLUTTIGAREQUEST     
5d19  pop     ds                              
5d1a  leave                                   
5d1b  retf                                    

; ----- sub_5d1c -----
5d1c  mov     ax,5CF9h                        ; segment seg2:0000
5d1f  push    bp                              
5d20  mov     bp,sp                           
5d22  push    ds                              
5d23  mov     ds,ax                           
5d25  push    83h                             
5d28  call far M007.M007_GETSTATE             ; DP_GSP
5d2d  dec     ax                              
5d2e  jne     5D3Ah                           
5d30  mov     al,[bp+6h]                      
5d33  cbw                                     
5d34  push    ax                              
5d35  call far TIGASEM.SCMREADINGREQDTIGAREQUEST
5d3a  pop     ds                              
5d3b  leave                                   
5d3c  retf                                    
5d3d  add     [bx+si],al                      

; ----- sub_5d3e -----
5d3e  mov     ax,5D1Dh                        ; segment seg2:0000
5d41  push    bp                              
5d42  mov     bp,sp                           
5d44  push    ds                              
5d45  mov     ds,ax                           
5d47  push    83h                             
5d4a  call far M007.M007_GETSTATE             ; DP_GSP
5d4f  dec     ax                              
5d50  jne     5D61h                           
5d52  mov     al,[bp+6h]                      
5d55  cbw                                     
5d56  push    ax                              
5d57  mov     al,[bp+8h]                      
5d5a  cbw                                     
5d5b  push    ax                              
5d5c  call far TIGASEM.SETQBSDCONTROLTIGAREQUEST
5d61  pop     ds                              
5d62  leave                                   
5d63  retf                                    

; ----- sub_5d64 -----
5d64  mov     ax,5D3Fh                        ; segment seg2:0000
5d67  push    bp                              
5d68  mov     bp,sp                           
5d6a  push    ds                              
5d6b  mov     ds,ax                           
5d6d  push    83h                             
5d70  call far M007.M007_GETSTATE             ; DP_GSP
5d75  dec     ax                              
5d76  jne     5D82h                           
5d78  mov     al,[bp+6h]                      
5d7b  cbw                                     
5d7c  push    ax                              
5d7d  call far TIGASEM.SETQBSDVISIBLETIGAREQUEST
5d82  pop     ds                              
5d83  leave                                   
5d84  retf                                    
5d85  add     [bx+si],al                      

; ----- sub_5d86 -----
5d86  mov     ax,5D65h                        ; segment seg2:0000
5d89  push    bp                              
5d8a  mov     bp,sp                           
5d8c  push    si                              
5d8d  push    ds                              
5d8e  mov     ds,ax                           
5d90  push    83h                             
5d93  call far M007.M007_GETSTATE             ; DP_GSP
5d98  dec     ax                              
5d99  jne     5DB6h                           
5d9b  mov     al,[bp+6h]                      
5d9e  cbw                                     
5d9f  push    ax                              
5da0  mov     si,ax                           
5da2  call far TIGASEM.SETQBSDGAINTIGAREQUEST 
5da7  push    si                              
5da8  push    142h                            
5dab  call far M007.M007_GETSTATE             ; DP_BSD_AUTO
5db0  push    ax                              
5db1  call far TIGASEM.GSPSETBSDAUTORANGE     
5db6  pop     ds                              
5db7  pop     si                              
5db8  leave                                   
5db9  retf                                    

; ----- sub_5dba -----
5dba  mov     ax,5D87h                        ; segment seg2:0000
5dbd  push    bp                              
5dbe  mov     bp,sp                           
5dc0  push    ds                              
5dc1  mov     ds,ax                           
5dc3  push    83h                             
5dc6  call far M007.M007_GETSTATE             ; DP_GSP
5dcb  dec     ax                              
5dcc  jne     5DEAh                           
5dce  push    word ptr [bp+6h]                
5dd1  push    word ptr [bp+8h]                
5dd4  push    word ptr [bp+0Ah]               
5dd7  push    word ptr [bp+0Ch]               
5dda  mov     al,[bp+0Eh]                     
5ddd  push    ax                              
5dde  mov     al,[bp+10h]                     
5de1  push    ax                              
5de2  call far TIGASEM.SETWINDOWTIGAREQUEST   
5de7  pop     ds                              
5de8  leave                                   
5de9  retf                                    
5dea  cmp     byte ptr [bp+0Eh],0h            
5dee  jne     5E11h                           
5df0  mov     ax,[bp+6h]                      
5df3  mov     [0DDEh],ax                      
5df6  mov     ax,[bp+0Ah]                     
5df9  mov     [0DE2h],ax                      
5dfc  mov     ax,[bp+8h]                      
5dff  mov     [0DE0h],ax                      
5e02  mov     ax,[bp+0Ch]                     
5e05  mov     [0DE4h],ax                      
5e08  mov     al,[bp+10h]                     
5e0b  mov     [0DE6h],al                      
5e0e  pop     ds                              
5e0f  leave                                   
5e10  retf                                    
5e11  mov     ax,[bp+6h]                      
5e14  mov     [0DE8h],ax                      
5e17  mov     ax,[bp+0Ah]                     
5e1a  mov     [0DECh],ax                      
5e1d  mov     ax,[bp+8h]                      
5e20  mov     [0DEAh],ax                      
5e23  mov     ax,[bp+0Ch]                     
5e26  mov     [0DEEh],ax                      
5e29  mov     al,[bp+10h]                     
5e2c  mov     [0DF0h],al                      
5e2f  pop     ds                              
5e30  leave                                   
5e31  retf                                    

; ----- sub_5e32 -----
5e32  mov     ax,5DBBh                        ; segment seg2:0000
5e35  push    bp                              
5e36  mov     bp,sp                           
5e38  push    ds                              
5e39  mov     ds,ax                           
5e3b  push    83h                             
5e3e  call far M007.M007_GETSTATE             ; DP_GSP
5e43  dec     ax                              
5e44  jne     5E8Ah                           
5e46  cmp     byte ptr [bp+6h],1h             
5e4a  jne     5E81h                           
5e4c  push    11h                             
5e4e  call far M007.M007_GETSTATE             ; DP_SCANRATE
5e53  cmp     ax,3h                           
5e56  jge     5E81h                           
5e58  push    20h                             
5e5a  call far M007.COMMANDENABLE             
5e5f  or      ax,ax                           
5e61  jne     5E6Ah                           
5e63  call far M200.DOCOMMANDSCANRATE3        
5e68  jmp     5E81h                           
5e6a  push    21h                             
5e6c  call far M007.COMMANDENABLE             
5e71  or      ax,ax                           
5e73  jne     5E7Ch                           
5e75  call far M200.DOCOMMANDSCANRATE4        
5e7a  jmp     5E81h                           
5e7c  call far M200.DOCOMMANDSCANRATE5        
5e81  mov     al,[bp+6h]                      
5e84  push    ax                              
5e85  call far TIGASEM.SETWINDREQDTIGAREQUEST 
5e8a  pop     ds                              
5e8b  leave                                   
5e8c  retf                                    
5e8d  add     [bx+si],al                      

; ----- sub_5e8e -----
5e8e  mov     ax,5E33h                        ; segment seg2:0000
5e91  push    bp                              
5e92  mov     bp,sp                           
5e94  push    ds                              
5e95  mov     ds,ax                           
5e97  push    83h                             
5e9a  call far M007.M007_GETSTATE             ; DP_GSP
5e9f  dec     ax                              
5ea0  jne     5EABh                           
5ea2  mov     al,[bp+6h]                      
5ea5  push    ax                              
5ea6  call far TIGASEM.SETMIXINGREQDTIGAREQUEST
5eab  pop     ds                              
5eac  leave                                   
5ead  retf                                    

; ----- sub_5eae -----
5eae  mov     ax,5E8Fh                        ; segment seg2:0000
5eb1  push    bp                              
5eb2  mov     bp,sp                           
5eb4  push    ds                              
5eb5  mov     ds,ax                           
5eb7  push    83h                             
5eba  call far M007.M007_GETSTATE             ; DP_GSP
5ebf  dec     ax                              
5ec0  jne     5ECFh                           
5ec2  mov     al,[bp+6h]                      
5ec5  push    ax                              
5ec6  mov     al,[bp+8h]                      
5ec9  push    ax                              
5eca  call far TIGASEM.ASSIGNZONEPORTTIGAREQUEST
5ecf  pop     ds                              
5ed0  leave                                   
5ed1  retf                                    

; ----- sub_5ed2 -----
5ed2  mov     ax,5EAFh                        ; segment seg2:0000
5ed5  push    bp                              
5ed6  mov     bp,sp                           
5ed8  push    ds                              
5ed9  mov     ds,ax                           
5edb  push    83h                             
5ede  call far M007.M007_GETSTATE             ; DP_GSP
5ee3  dec     ax                              
5ee4  jne     5EF3h                           
5ee6  mov     al,[bp+6h]                      
5ee9  push    ax                              
5eea  mov     al,[bp+8h]                      
5eed  push    ax                              
5eee  call far TIGASEM.SETDETINVERTTIGAREQUEST
5ef3  pop     ds                              
5ef4  leave                                   
5ef5  retf                                    

; ----- sub_5ef6 -----
5ef6  mov     ax,5ED3h                        ; segment seg2:0000
5ef9  push    bp                              
5efa  mov     bp,sp                           
5efc  push    ds                              
5efd  mov     ds,ax                           
5eff  push    83h                             
5f02  call far M007.M007_GETSTATE             ; DP_GSP
5f07  dec     ax                              
5f08  jne     5F25h                           
5f0a  mov     al,[bp+6h]                      
5f0d  push    ax                              
5f0e  wait                                    
5f0f  fld     dword ptr [bp+8h]               
5f12  sub     sp,8h                           
5f15  mov     bx,sp                           
5f17  wait                                    
5f18  fstp    qword ptr ss:[bx]               
5f1b  nop                                     
5f1c  wait                                    
5f1d  call far TIGASEM.SETDETGAINTIGAREQUEST  
5f22  pop     ds                              
5f23  leave                                   
5f24  retf                                    
5f25  mov     al,[bp+6h]                      
5f28  cbw                                     
5f29  mov     bx,ax                           
5f2b  shl     bx,2h                           
5f2e  mov     ax,[bp+8h]                      
5f31  mov     dx,[bp+0Ah]                     
5f34  mov     [bx+6B8h],ax                    
5f38  mov     [bx+6BAh],dx                    
5f3c  pop     ds                              
5f3d  leave                                   
5f3e  retf                                    
5f3f  add     [bx+si],al                      

; ----- sub_5f40 -----
5f40  mov     ax,5EF7h                        ; segment seg2:0000
5f43  push    bp                              
5f44  mov     bp,sp                           
5f46  push    ds                              
5f47  mov     ds,ax                           
5f49  push    83h                             
5f4c  call far M007.M007_GETSTATE             ; DP_GSP
5f51  dec     ax                              
5f52  jne     5F6Fh                           
5f54  mov     al,[bp+6h]                      
5f57  push    ax                              
5f58  wait                                    
5f59  fld     dword ptr [bp+8h]               
5f5c  sub     sp,8h                           
5f5f  mov     bx,sp                           
5f61  wait                                    
5f62  fstp    qword ptr ss:[bx]               
5f65  nop                                     
5f66  wait                                    
5f67  call far TIGASEM.SETDETOFFSETTIGAREQUEST
5f6c  pop     ds                              
5f6d  leave                                   
5f6e  retf                                    
5f6f  mov     al,[bp+6h]                      
5f72  cbw                                     
5f73  mov     bx,ax                           
5f75  shl     bx,2h                           
5f78  mov     ax,[bp+8h]                      
5f7b  mov     dx,[bp+0Ah]                     
5f7e  mov     [bx+6D8h],ax                    
5f82  mov     [bx+6DAh],dx                    
5f86  pop     ds                              
5f87  leave                                   
5f88  retf                                    
5f89  add     [bx+si],al                      

; ----- sub_5f8a -----
5f8a  mov     ax,5F41h                        ; segment seg2:0000
5f8d  push    bp                              
5f8e  mov     bp,sp                           
5f90  push    ds                              
5f91  mov     ds,ax                           
5f93  push    83h                             
5f96  call far M007.M007_GETSTATE             ; DP_GSP
5f9b  dec     ax                              
5f9c  jne     5FB0h                           
5f9e  mov     al,[bp+6h]                      
5fa1  push    ax                              
5fa2  push    word ptr [bp+8h]                
5fa5  push    word ptr [bp+0Ch]               
5fa8  push    word ptr [bp+0Ah]               
5fab  call far TIGASEM.SETUSERLUTTIGAREQUEST  
5fb0  pop     ds                              
5fb1  leave                                   
5fb2  retf                                    
5fb3  add     [bx+si],al                      

; ----- sub_5fb4 -----
5fb4  mov     ax,5F8Bh                        ; segment seg2:0000
5fb7  push    bp                              
5fb8  mov     bp,sp                           
5fba  push    ds                              
5fbb  mov     ds,ax                           
5fbd  push    83h                             
5fc0  call far M007.M007_GETSTATE             ; DP_GSP
5fc5  dec     ax                              
5fc6  jne     5FD1h                           
5fc8  mov     al,[bp+6h]                      
5fcb  push    ax                              
5fcc  call far TIGASEM.SETMIXWINDOWTIGAREQUEST
5fd1  pop     ds                              
5fd2  leave                                   
5fd3  retf                                    

; ----- sub_5fd4 -----
5fd4  mov     ax,5FB5h                        ; segment seg2:0000
5fd7  push    bp                              
5fd8  mov     bp,sp                           
5fda  push    ds                              
5fdb  mov     ds,ax                           
5fdd  push    83h                             
5fe0  call far M007.M007_GETSTATE             ; DP_GSP
5fe5  dec     ax                              
5fe6  jne     5FF6h                           
5fe8  push    word ptr [bp+8h]                
5feb  push    word ptr [bp+6h]                
5fee  call far TIGASEM.FREEZECONTROLTIGAREQUEST
5ff3  pop     ds                              
5ff4  leave                                   
5ff5  retf                                    
5ff6  les     bx,[bp+6h]                      
5ff9  mov     al,es:[bx]                      
5ffc  mov     [6ACh],al                       
5fff  mov     al,es:[bx+1h]                   
6003  mov     [6ADh],al                       
6006  mov     al,es:[bx+2h]                   
600a  mov     [6AEh],al                       
600d  mov     al,es:[bx+3h]                   
6011  mov     [6AFh],al                       
6014  mov     al,es:[bx+4h]                   
6018  mov     [6B0h],al                       
601b  mov     al,es:[bx+5h]                   
601f  mov     [6B1h],al                       
6022  mov     al,es:[bx+6h]                   
6026  mov     [6B2h],al                       
6029  mov     al,es:[bx+7h]                   
602d  mov     [6B3h],al                       
6030  mov     al,es:[bx+8h]                   
6034  mov     [6B4h],al                       
6037  mov     word ptr [6B6h],1h              
603d  pop     ds                              
603e  leave                                   
603f  retf                                    

; ----- sub_6040 -----
6040  mov     ax,5FD5h                        ; segment seg2:0000
6043  push    bp                              
6044  mov     bp,sp                           
6046  push    ds                              
6047  mov     ds,ax                           
6049  push    83h                             
604c  call far M007.M007_GETSTATE             ; DP_GSP
6051  dec     ax                              
6052  jne     6062h                           
6054  push    word ptr [bp+8h]                
6057  push    word ptr [bp+6h]                
605a  call far TIGASEM.GETSCMTIGAREQUEST      
605f  pop     ds                              
6060  leave                                   
6061  retf                                    
6062  mov     ax,[0A56h]                      
6065  mov     dx,[0A58h]                      
6069  les     bx,[bp+6h]                      
606c  mov     es:[bx],ax                      
606f  mov     es:[bx+2h],dx                   
6073  pop     ds                              
6074  leave                                   
6075  retf                                    

; ----- sub_6076 -----
6076  mov     ax,6041h                        ; segment seg2:0000
6079  push    bp                              
607a  mov     bp,sp                           
607c  push    ds                              
607d  mov     ds,ax                           
607f  push    83h                             
6082  call far M007.M007_GETSTATE             ; DP_GSP
6087  dec     ax                              
6088  jne     6098h                           
608a  push    word ptr [bp+8h]                
608d  push    word ptr [bp+6h]                
6090  call far TIGASEM.SETVIDMODULE           
6095  pop     ds                              
6096  leave                                   
6097  retf                                    
6098  xor     ax,ax                           
609a  pop     ds                              
609b  leave                                   
609c  retf                                    
609d  add     [bx+si],al                      

; ----- sub_609e -----
609e  mov     ax,6077h                        ; segment seg2:0000
60a1  push    bp                              
60a2  mov     bp,sp                           
60a4  push    ds                              
60a5  mov     ds,ax                           
60a7  push    83h                             
60aa  call far M007.M007_GETSTATE             ; DP_GSP
60af  dec     ax                              
60b0  jne     60BAh                           
60b2  call far TIGASEM.DELVIDMODULE           
60b7  pop     ds                              
60b8  leave                                   
60b9  retf                                    
60ba  xor     ax,ax                           
60bc  pop     ds                              
60bd  leave                                   
60be  retf                                    
60bf  add     [bx+si],al                      

; ----- sub_60c0 -----
60c0  mov     ax,609Fh                        ; segment seg2:0000
60c3  push    bp                              
60c4  mov     bp,sp                           
60c6  push    ds                              
60c7  mov     ds,ax                           
60c9  push    83h                             
60cc  call far M007.M007_GETSTATE             ; DP_GSP
60d1  dec     ax                              
60d2  jne     60DEh                           
60d4  call far TIGASEM.SUSPENDVIDMODULE       
60d9  sub     dx,dx                           
60db  pop     ds                              
60dc  leave                                   
60dd  retf                                    
60de  xor     ax,ax                           
60e0  cwd                                     
60e1  pop     ds                              
60e2  leave                                   
60e3  retf                                    

; ----- sub_60e4 -----
60e4  mov     ax,60C1h                        ; segment seg2:0000
60e7  push    bp                              
60e8  mov     bp,sp                           
60ea  push    ds                              
60eb  mov     ds,ax                           
60ed  push    83h                             
60f0  call far M007.M007_GETSTATE             ; DP_GSP
60f5  dec     ax                              
60f6  jne     6102h                           
60f8  call far TIGASEM.INITVIDRLM             
60fd  sub     dx,dx                           
60ff  pop     ds                              
6100  leave                                   
6101  retf                                    
6102  xor     ax,ax                           
6104  cwd                                     
6105  pop     ds                              
6106  leave                                   
6107  retf                                    

; ----- sub_6108 -----
6108  mov     ax,60E5h                        ; segment seg2:0000
610b  push    bp                              
610c  mov     bp,sp                           
610e  push    ds                              
610f  mov     ds,ax                           
6111  push    83h                             
6114  call far M007.M007_GETSTATE             ; DP_GSP
6119  dec     ax                              
611a  jne     6126h                           
611c  lea     ax,[bp+6h]                      
611f  push    ss                              
6120  push    ax                              
6121  call far TIGASEM.GSPCONFIGUREDETECTOR   
6126  pop     ds                              
6127  leave                                   
6128  retf                                    
6129  add     [bx+si],al                      

; ----- sub_612a -----
612a  mov     ax,6109h                        ; segment seg2:0000
612d  enter   2h,0h                           
6131  push    ds                              
6132  mov     ds,ax                           
6134  push    83h                             
6137  call far M007.M007_GETSTATE             ; DP_GSP
613c  dec     ax                              
613d  jne     6152h                           
613f  push    ds                              
6140  push    0E10h                           
6143  call far TIGASEM.GSPGETAUTOLEVELSTAT    
6148  dec     ax                              
6149  je      6157h                           
614b  dec     ax                              
614c  je      615Dh                           
614e  dec     ax                              
614f  dec     ax                              
6150  je      6163h                           
6152  xor     ax,ax                           
6154  pop     ds                              
6155  leave                                   
6156  retf                                    
6157  mov     ax,5h                           
615a  pop     ds                              
615b  leave                                   
615c  retf                                    
615d  mov     ax,6h                           
6160  pop     ds                              
6161  leave                                   
6162  retf                                    
6163  mov     ax,0Ah                          
6166  pop     ds                              
6167  leave                                   
6168  retf                                    
6169  add     [bx+si],al                      

; ----- sub_616a -----
616a  mov     ax,612Bh                        ; segment seg2:0000
616d  enter   22h,0h                          
6171  push    ds                              
6172  mov     ds,ax                           
6174  mov     ax,[bp+8h]                      
6177  jmp     61B9h                           
6179  push    0C5h                            
617c  lea     ax,[bp-22h]                     
617f  push    ax                              
6180  call far M007.M007_GETVALUE             ; AP_MAG0 = 10
6185  mov     bx,ax                           
6187  mov     ax,ss:[bx]                      
618a  mov     dx,ss:[bx+2h]                   
618e  mov     [bp-16h],ax                     
6191  mov     [bp-14h],dx                     
6194  jmp     61D4h                           
6196  push    0C6h                            
6199  jmp     617Ch                           
619b  push    0C7h                            
619e  jmp     617Ch                           
61a0  push    0C8h                            
61a3  jmp     617Ch                           
61a5  push    0C9h                            
61a8  jmp     617Ch                           
61aa  push    0CAh                            
61ad  jmp     617Ch                           
61af  push    0CBh                            
61b2  jmp     617Ch                           
61b4  push    0CCh                            
61b7  jmp     617Ch                           
61b9  cmp     ax,6h                           
61bc  ja      61B4h                           
61be  add     ax,ax                           
61c0  xchg    ax,bx                           
61c1  jmp     word ptr cs:[bx+61C6h]          
61c6  jns     6229h                           
61c8  xchg    ax,si                           
61c9  popa                                    
61ca  wait                                    
61cb  popa                                    
61cc  mov     al,[0A561h]                     
61cf  popa                                    
61d0  stosb                                   
61d1  popa                                    
61d2  scasw                                   
61d3  popa                                    
61d4  push    word ptr [bp+8h]                
61d7  lea     ax,[bp-1Eh]                     
61da  push    ss                              
61db  push    ax                              
61dc  call far M200.EO_RASTER_SIZE            
61e1  mov     ax,[bp+6h]                      
61e4  mov     [bp-12h],ax                     
61e7  mov     ax,[bp+8h]                      
61ea  mov     [bp-10h],ax                     
61ed  mov     ax,[bp-16h]                     
61f0  mov     dx,[bp-14h]                     
61f3  mov     [bp-0Eh],ax                     
61f6  mov     [bp-0Ch],dx                     
61f9  mov     ax,[bp+0Ah]                     
61fc  mov     [bp-0Ah],ax                     
61ff  mov     ax,[bp-1Eh]                     
6202  mov     [bp-8h],ax                      
6205  mov     ax,[bp-1Ch]                     
6208  mov     [bp-6h],ax                      
620b  mov     ax,[bp-1Ah]                     
620e  mov     [bp-4h],ax                      
6211  mov     ax,[bp-18h]                     
6214  mov     [bp-2h],ax                      
6217  push    83h                             
621a  call far M007.M007_GETSTATE             ; DP_GSP
621f  dec     ax                              
6220  jne     622Ch                           
6222  lea     ax,[bp-12h]                     
6225  push    ss                              
6226  push    ax                              
6227  call far TIGASEM.GSPFINDAUTOLEVEL       
622c  pop     ds                              
622d  leave                                   
622e  retf                                    
622f  add     [bx+si],al                      

; ----- sub_6230 -----
6230  mov     ax,616Bh                        ; segment seg2:0000
6233  enter   22h,0h                          
6237  push    ds                              
6238  mov     ds,ax                           
623a  mov     ax,[bp+8h]                      
623d  jmp     627Fh                           
623f  push    0C5h                            
6242  lea     ax,[bp-22h]                     
6245  push    ax                              
6246  call far M007.M007_GETVALUE             ; AP_MAG0
624b  mov     bx,ax                           
624d  mov     ax,ss:[bx]                      
6250  mov     dx,ss:[bx+2h]                   
6254  mov     [bp-16h],ax                     
6257  mov     [bp-14h],dx                     
625a  jmp     629Ah                           
625c  push    0C6h                            
625f  jmp     6242h                           
6261  push    0C7h                            
6264  jmp     6242h                           
6266  push    0C8h                            
6269  jmp     6242h                           
626b  push    0C9h                            
626e  jmp     6242h                           
6270  push    0CAh                            
6273  jmp     6242h                           
6275  push    0CBh                            
6278  jmp     6242h                           
627a  push    0CCh                            
627d  jmp     6242h                           
627f  cmp     ax,6h                           
6282  ja      627Ah                           
6284  add     ax,ax                           
6286  xchg    ax,bx                           
6287  jmp     word ptr cs:[bx+628Ch]          
628c  aas                                     
628d  bound   bx,[si+62h]                     
6290  popa                                    
6291  bound   sp,[bp+62h]                     
6294  imul    sp,[bp+si+70h],62h              
6298  jne     62FCh                           
629a  push    word ptr [bp+8h]                
629d  lea     ax,[bp-1Eh]                     
62a0  push    ss                              
62a1  push    ax                              
62a2  call far M200.EO_RASTER_SIZE            
62a7  mov     ax,[bp+6h]                      
62aa  mov     [bp-12h],ax                     
62ad  mov     ax,[bp+8h]                      
62b0  mov     [bp-10h],ax                     
62b3  mov     ax,[bp-16h]                     
62b6  mov     dx,[bp-14h]                     
62b9  mov     [bp-0Eh],ax                     
62bc  mov     [bp-0Ch],dx                     
62bf  mov     word ptr [bp-0Ah],3h            
62c4  mov     ax,[bp-1Eh]                     
62c7  mov     [bp-8h],ax                      
62ca  mov     ax,[bp-1Ch]                     
62cd  mov     [bp-6h],ax                      
62d0  mov     ax,[bp-1Ah]                     
62d3  mov     [bp-4h],ax                      
62d6  mov     ax,[bp-18h]                     
62d9  mov     [bp-2h],ax                      
62dc  push    83h                             
62df  call far M007.M007_GETSTATE             ; DP_GSP
62e4  dec     ax                              
62e5  jne     62F1h                           
62e7  lea     ax,[bp-12h]                     
62ea  push    ss                              
62eb  push    ax                              
62ec  call far TIGASEM.GSPDOABC               
62f1  pop     ds                              
62f2  leave                                   
62f3  retf                                    

; ----- sub_62f4 -----
62f4  mov     ax,6231h                        ; segment seg2:0000
62f7  push    bp                              
62f8  mov     bp,sp                           
62fa  push    ds                              
62fb  mov     ds,ax                           
62fd  push    83h                             
6300  call far M007.M007_GETSTATE             ; DP_GSP
6305  dec     ax                              
6306  jne     6310h                           
6308  push    word ptr [bp+6h]                
630b  call far TIGASEM.GSPAUTOVIDEO           
6310  pop     ds                              
6311  leave                                   
6312  retf                                    
6313  add     [bx+si],al                      

; ----- sub_6314 -----
6314  mov     ax,62F5h                        ; segment seg2:0000
6317  push    bp                              
6318  mov     bp,sp                           
631a  push    ds                              
631b  mov     ds,ax                           
631d  push    83h                             
6320  call far M007.M007_GETSTATE             ; DP_GSP
6325  dec     ax                              
6326  jne     6330h                           
6328  push    word ptr [bp+6h]                
632b  call far TIGASEM.GSPAUTOVIDEOSUSPEND    
6330  pop     ds                              
6331  leave                                   
6332  retf                                    
6333  add     [bx+si],al                      

; ----- sub_6334 -----
6334  mov     ax,6315h                        ; segment seg2:0000
6337  push    bp                              
6338  mov     bp,sp                           
633a  push    ds                              
633b  mov     ds,ax                           
633d  push    83h                             
6340  call far M007.M007_GETSTATE             ; DP_GSP
6345  dec     ax                              
6346  jne     6352h                           
6348  lea     ax,[bp+6h]                      
634b  push    ss                              
634c  push    ax                              
634d  call far TIGASEM.GSPRELOADDETECTORS     
6352  pop     ds                              
6353  leave                                   
6354  retf                                    
6355  add     [bx+si],al                      

; ----- sub_6356 -----
6356  mov     ax,6335h                        ; segment seg2:0000
6359  push    bp                              
635a  mov     bp,sp                           
635c  push    ds                              
635d  mov     ds,ax                           
635f  push    83h                             
6362  call far M007.M007_GETSTATE             ; DP_GSP
6367  dec     ax                              
6368  jne     6384h                           
636a  push    word ptr [bp+6h]                
636d  wait                                    
636e  fld     dword ptr [bp+8h]               
6371  sub     sp,8h                           
6374  mov     bx,sp                           
6376  wait                                    
6377  fstp    qword ptr ss:[bx]               
637a  nop                                     
637b  wait                                    
637c  call far TIGASEM.GSPSETDETPSEUDOBRIGHTNESS
6381  pop     ds                              
6382  leave                                   
6383  retf                                    
6384  mov     ax,[bp+8h]                      
6387  mov     dx,[bp+0Ah]                     
638a  mov     bx,[bp+6h]                      
638d  shl     bx,2h                           
6390  mov     [bx+742h],ax                    
6394  mov     [bx+744h],dx                    
6398  pop     ds                              
6399  leave                                   
639a  retf                                    
639b  add     [bx+si],al                      

; ----- sub_639c -----
639c  mov     ax,6357h                        ; segment seg2:0000
639f  push    bp                              
63a0  mov     bp,sp                           
63a2  push    ds                              
63a3  mov     ds,ax                           
63a5  push    83h                             
63a8  call far M007.M007_GETSTATE             ; DP_GSP
63ad  dec     ax                              
63ae  jne     63CAh                           
63b0  push    word ptr [bp+6h]                
63b3  wait                                    
63b4  fld     dword ptr [bp+8h]               
63b7  sub     sp,8h                           
63ba  mov     bx,sp                           
63bc  wait                                    
63bd  fstp    qword ptr ss:[bx]               
63c0  nop                                     
63c1  wait                                    
63c2  call far TIGASEM.GSPSETDETPSEUDOCONTRAST
63c7  pop     ds                              
63c8  leave                                   
63c9  retf                                    
63ca  mov     ax,[bp+8h]                      
63cd  mov     dx,[bp+0Ah]                     
63d0  mov     bx,[bp+6h]                      
63d3  shl     bx,2h                           
63d6  mov     [bx+6FAh],ax                    
63da  mov     [bx+6FCh],dx                    
63de  pop     ds                              
63df  leave                                   
63e0  retf                                    
63e1  add     [bx+si],al                      

; ----- sub_63e2 -----
63e2  mov     ax,639Dh                        ; segment seg2:0000
63e5  push    bp                              
63e6  mov     bp,sp                           
63e8  push    ds                              
63e9  mov     ds,ax                           
63eb  push    83h                             
63ee  call far M007.M007_GETSTATE             ; DP_GSP
63f3  dec     ax                              
63f4  jne     63FEh                           
63f6  push    word ptr [bp+6h]                
63f9  call far TIGASEM.SETEHTSETCOLLECTORBIAS 
63fe  pop     ds                              
63ff  leave                                   
6400  retf                                    
6401  add     [bx+si],al                      

; ----- sub_6402 -----
6402  mov     ax,63E3h                        ; segment seg2:0000
6405  push    bp                              
6406  mov     bp,sp                           
6408  push    ds                              
6409  mov     ds,ax                           
640b  push    83h                             
640e  call far M007.M007_GETSTATE             ; DP_GSP
6413  dec     ax                              
6414  jne     642Dh                           
6416  push    word ptr [bp+6h]                
6419  wait                                    
641a  fld     dword ptr [bp+8h]               
641d  sub     sp,8h                           
6420  mov     bx,sp                           
6422  wait                                    
6423  fstp    qword ptr ss:[bx]               
6426  nop                                     
6427  wait                                    
6428  call far TIGASEM.GSPSETDETAUTOCONTRAST  
642d  pop     ds                              
642e  leave                                   
642f  retf                                    

; ----- sub_6430 -----
6430  mov     ax,6403h                        ; segment seg2:0000
6433  push    bp                              
6434  mov     bp,sp                           
6436  push    ds                              
6437  mov     ds,ax                           
6439  push    83h                             
643c  call far M007.M007_GETSTATE             ; DP_GSP
6441  dec     ax                              
6442  jne     645Bh                           
6444  push    word ptr [bp+6h]                
6447  wait                                    
6448  fld     dword ptr [bp+8h]               
644b  sub     sp,8h                           
644e  mov     bx,sp                           
6450  wait                                    
6451  fstp    qword ptr ss:[bx]               
6454  nop                                     
6455  wait                                    
6456  call far TIGASEM.GSPSETDETAUTOBRIGHTNESS
645b  pop     ds                              
645c  leave                                   
645d  retf                                    

; ----- sub_645e -----
645e  mov     ax,6431h                        ; segment seg2:0000
6461  push    bp                              
6462  mov     bp,sp                           
6464  push    ds                              
6465  mov     ds,ax                           
6467  push    83h                             
646a  call far M007.M007_GETSTATE             ; DP_GSP
646f  dec     ax                              
6470  jne     6489h                           
6472  push    word ptr [bp+6h]                
6475  wait                                    
6476  fld     dword ptr [bp+8h]               
6479  sub     sp,8h                           
647c  mov     bx,sp                           
647e  wait                                    
647f  fstp    qword ptr ss:[bx]               
6482  nop                                     
6483  wait                                    
6484  call far TIGASEM.GSPSETDETABCCONTRAST   
6489  pop     ds                              
648a  leave                                   
648b  retf                                    

; ----- sub_648c -----
648c  mov     ax,645Fh                        ; segment seg2:0000
648f  push    bp                              
6490  mov     bp,sp                           
6492  push    ds                              
6493  mov     ds,ax                           
6495  push    83h                             
6498  call far M007.M007_GETSTATE             ; DP_GSP
649d  dec     ax                              
649e  jne     64B7h                           
64a0  push    word ptr [bp+6h]                
64a3  wait                                    
64a4  fld     dword ptr [bp+8h]               
64a7  sub     sp,8h                           
64aa  mov     bx,sp                           
64ac  wait                                    
64ad  fstp    qword ptr ss:[bx]               
64b0  nop                                     
64b1  wait                                    
64b2  call far TIGASEM.GSPSETDETABCBRIGHTNESS 
64b7  pop     ds                              
64b8  leave                                   
64b9  retf                                    

; ----- sub_64ba -----
64ba  mov     ax,648Dh                        ; segment seg2:0000
64bd  enter   44h,0h                          
64c1  push    di                              
64c2  push    si                              
64c3  push    ds                              
64c4  mov     ds,ax                           
64c6  push    83h                             
64c9  call far M007.M007_GETSTATE             ; DP_GSP
64ce  dec     ax                              
64cf  jne     6505h                           
64d1  push    word ptr [bp+6h]                
64d4  lea     ax,[bp-40h]                     
64d7  push    ax                              
64d8  call far TIGASEM.READGSPVIDEOLEVELDATA  
64dd  push    ds                              
64de  lea     di,[bp-20h]                     
64e1  mov     si,ax                           
64e3  push    ss                              
64e4  pop     es                              
64e5  push    ss                              
64e6  pop     ds                              
64e7  mov     cx,10h                          
64ea  rep     movsw                           
64ec  pop     ds                              
64ed  mov     ax,0E2Ah                        
64f0  push    ds                              
64f1  mov     di,ax                           
64f3  lea     si,[bp-20h]                     
64f6  push    ds                              
64f7  pop     es                              
64f8  push    ss                              
64f9  pop     ds                              
64fa  mov     cx,10h                          
64fd  rep     movsw                           
64ff  pop     ds                              
6500  mov     dx,ds                           
6502  jmp     6612h                           
6505  mov     bx,[bp+6h]                      
6508  add     bx,bx                           
650a  cmp     word ptr [bx+78Ah],0h           
650f  je      6539h                           
6511  call far sub_0126                       
6516  mov     [bp-40h],ax                     
6519  wait                                    
651a  fild    word ptr [bp-40h]               
651d  wait                                    
651e  fmul    dword ptr [0A5Ah]               ; [ds] = 6.103516E-05
6522  wait                                    
6523  fsub    dword ptr [0A5Eh]               ; [ds] = 1
6527  mov     bx,[bp+6h]                      
652a  shl     bx,2h                           
652d  wait                                    
652e  fadd    dword ptr [bx+742h]             
6532  wait                                    
6533  fstp    dword ptr [bx+742h]             
6537  nop                                     
6538  wait                                    
6539  mov     bx,[bp+6h]                      
653c  shl     bx,2h                           
653f  add     bx,742h                         
6543  wait                                    
6544  fld     dword ptr [bx]                  
6546  wait                                    
6547  fcom    dword ptr [0A62h]               ; [ds] = 0
654b  wait                                    
654c  fstp    st(0)                           
654e  wait                                    
654f  fstsw   ax                              
6551  sahf                                    
6552  jae     6560h                           
6554  mov     ax,[0A62h]                      
6557  mov     dx,[0A64h]                      
655b  mov     [bx],ax                         
655d  mov     [bx+2h],dx                      
6560  mov     bx,[bp+6h]                      
6563  shl     bx,2h                           
6566  add     bx,742h                         
656a  wait                                    
656b  fld     dword ptr [bx]                  
656d  wait                                    
656e  fcom    dword ptr [0A66h]               ; [ds] = 100
6572  wait                                    
6573  fstp    st(0)                           
6575  wait                                    
6576  fstsw   ax                              
6578  sahf                                    
6579  jbe     6587h                           
657b  mov     ax,[0A66h]                      
657e  mov     dx,[0A68h]                      
6582  mov     [bx],ax                         
6584  mov     [bx+2h],dx                      
6587  mov     bx,[bp+6h]                      
658a  shl     bx,2h                           
658d  add     bx,6FAh                         
6591  wait                                    
6592  fld     dword ptr [bx]                  
6594  wait                                    
6595  fcom    dword ptr [0A62h]               ; [ds] = 0
6599  wait                                    
659a  fstp    st(0)                           
659c  wait                                    
659d  fstsw   ax                              
659f  sahf                                    
65a0  jae     65AEh                           
65a2  mov     ax,[0A62h]                      
65a5  mov     dx,[0A64h]                      
65a9  mov     [bx],ax                         
65ab  mov     [bx+2h],dx                      
65ae  mov     bx,[bp+6h]                      
65b1  shl     bx,2h                           
65b4  add     bx,6FAh                         
65b8  wait                                    
65b9  fld     dword ptr [bx]                  
65bb  wait                                    
65bc  fcom    dword ptr [0A66h]               ; [ds] = 100
65c0  wait                                    
65c1  fstp    st(0)                           
65c3  wait                                    
65c4  fstsw   ax                              
65c6  sahf                                    
65c7  jbe     65D5h                           
65c9  mov     ax,[0A66h]                      
65cc  mov     dx,[0A68h]                      
65d0  mov     [bx],ax                         
65d2  mov     [bx+2h],dx                      
65d5  mov     bx,[bp+6h]                      
65d8  shl     bx,2h                           
65db  wait                                    
65dc  fld     dword ptr [bx+6FAh]             
65e0  wait                                    
65e1  fst     dword ptr [bp-40h]              
65e4  wait                                    
65e5  fstp    dword ptr [bp-1Ch]              
65e8  wait                                    
65e9  fld     dword ptr [bx+742h]             
65ed  wait                                    
65ee  fst     dword ptr [bp-20h]              
65f1  wait                                    
65f2  fst     dword ptr [bp-44h]              
65f5  wait                                    
65f6  fstp    dword ptr [bp-14h]              
65f9  wait                                    
65fa  fld     dword ptr [bp-40h]              
65fd  wait                                    
65fe  fst     dword ptr [bp-18h]              
6601  wait                                    
6602  fstp    dword ptr [bp-4h]               
6605  wait                                    
6606  fld     dword ptr [bp-44h]              
6609  wait                                    
660a  fstp    dword ptr [bp-8h]               
660d  nop                                     
660e  wait                                    
660f  jmp     64EDh                           
6612  pop     ds                              
6613  pop     si                              
6614  pop     di                              
6615  leave                                   
6616  retf                                    
6617  add     [bx+si],al                      

; ----- sub_6618 -----
6618  mov     ax,64BBh                        ; segment seg2:0000
661b  push    bp                              
661c  mov     bp,sp                           
661e  push    ds                              
661f  mov     ds,ax                           
6621  push    83h                             
6624  call far M007.M007_GETSTATE             ; DP_GSP
6629  dec     ax                              
662a  jne     6636h                           
662c  lea     ax,[bp+6h]                      
662f  push    ss                              
6630  push    ax                              
6631  call far TIGASEM.GSPUPDATEDETSFROMZONES 
6636  pop     ds                              
6637  leave                                   
6638  retf                                    
6639  add     [bx+si],al                      

; ----- sub_663a -----
663a  mov     ax,6619h                        ; segment seg2:0000
663d  push    bp                              
663e  mov     bp,sp                           
6640  push    ds                              
6641  mov     ds,ax                           
6643  push    83h                             
6646  call far M007.M007_GETSTATE             ; DP_GSP
664b  dec     ax                              
664c  jne     665Ch                           
664e  push    word ptr [bp+6h]                
6651  push    word ptr [bp+8h]                
6654  call far TIGASEM.GSPSELECTDETVIDEOLEVELCNTL
6659  pop     ds                              
665a  leave                                   
665b  retf                                    
665c  mov     ax,[bp+8h]                      
665f  mov     bx,[bp+6h]                      
6662  add     bx,bx                           
6664  mov     [bx+78Ah],ax                    
6668  pop     ds                              
6669  leave                                   
666a  retf                                    
666b  add     [bx+si],al                      

; ----- sub_666c -----
666c  mov     ax,663Bh                        ; segment seg2:0000
666f  push    bp                              
6670  mov     bp,sp                           
6672  push    ds                              
6673  mov     ds,ax                           
6675  push    83h                             
6678  call far M007.M007_GETSTATE             ; DP_GSP
667d  dec     ax                              
667e  jne     6691h                           
6680  push    word ptr [bp+6h]                
6683  push    word ptr [bp+8h]                
6686  push    word ptr [bp+0Ah]               
6689  call far TIGASEM.GSPPOINTINWINDOW       
668e  pop     ds                              
668f  leave                                   
6690  retf                                    
6691  cmp     word ptr [bp+0Ah],0h            
6695  jne     66CAh                           
6697  mov     ax,[0DDEh]                      
669a  cmp     [bp+6h],ax                      
669d  jl      66C3h                           
669f  mov     ax,[0DE2h]                      
66a2  cmp     [bp+6h],ax                      
66a5  jg      66C3h                           
66a7  mov     ax,[0DE0h]                      
66aa  cmp     [bp+8h],ax                      
66ad  jl      66C3h                           
66af  mov     ax,[0DE4h]                      
66b2  cmp     [bp+8h],ax                      
66b5  jg      66C3h                           
66b7  cmp     byte ptr [0DE6h],0h             
66bc  jne     66F8h                           
66be  xor     al,al                           
66c0  pop     ds                              
66c1  leave                                   
66c2  retf                                    
66c3  cmp     byte ptr [0DE6h],0h             
66c8  jmp     66F6h                           
66ca  mov     ax,[0DE8h]                      
66cd  cmp     [bp+6h],ax                      
66d0  jl      66F1h                           
66d2  mov     ax,[0DECh]                      
66d5  cmp     [bp+6h],ax                      
66d8  jg      66F1h                           
66da  mov     ax,[0DEAh]                      
66dd  cmp     [bp+8h],ax                      
66e0  jl      66F1h                           
66e2  mov     ax,[0DEEh]                      
66e5  cmp     [bp+8h],ax                      
66e8  jg      66F1h                           
66ea  cmp     byte ptr [0DF0h],0h             
66ef  jmp     66BCh                           
66f1  cmp     byte ptr [0DF0h],0h             
66f6  jne     66BEh                           
66f8  mov     al,1h                           
66fa  pop     ds                              
66fb  leave                                   
66fc  retf                                    
66fd  add     [bx+si],al                      

; ----- sub_66fe -----
66fe  mov     ax,666Dh                        ; segment seg2:0000
6701  enter   2h,0h                           
6705  push    si                              
6706  push    ds                              
6707  mov     ds,ax                           
6709  push    83h                             
670c  call far M007.M007_GETSTATE             ; DP_GSP
6711  dec     ax                              
6712  jne     6722h                           
6714  push    word ptr [bp+8h]                
6717  push    word ptr [bp+6h]                
671a  call far TIGASEM.READACQUIRESTATUS      
671f  jmp     68A3h                           
6722  les     bx,[bp+6h]                      
6725  mov     byte ptr es:[bx+4Eh],0h         
672a  mov     al,[6F8h]                       
672d  cbw                                     
672e  or      ax,ax                           
6730  je      6758h                           
6732  dec     ax                              
6733  jne     6747h                           
6735  mov     ax,[0DDAh]                      
6738  inc     word ptr [0DDCh]                
673c  cmp     [0DDCh],ax                      
6740  jle     6747h                           
6742  mov     byte ptr [6F8h],3h              
6747  mov     al,[6F8h]                       
674a  les     bx,[bp+6h]                      
674d  mov     es:[bx+4Dh],al                  
6751  mov     word ptr [bp-2h],0h             
6756  jmp     676Fh                           
6758  mov     ax,[0DDAh]                      
675b  inc     word ptr [0DDCh]                
675f  cmp     [0DDCh],ax                      
6763  jle     6747h                           
6765  mov     byte ptr [6F8h],4h              
676a  jmp     6747h                           
676c  inc     word ptr [bp-2h]                
676f  cmp     word ptr [bp-2h],7h             
6773  jg      67A1h                           
6775  mov     bx,[bp-2h]                      
6778  shl     bx,2h                           
677b  mov     ax,[bx+6B8h]                    
677f  mov     dx,[bx+6BAh]                    
6783  les     si,[bp+6h]                      
6786  mov     es:[bx+si],ax                   
6789  mov     es:[bx+si+2h],dx                
678d  mov     ax,[bx+6D8h]                    
6791  mov     dx,[bx+6DAh]                    
6795  add     bx,si                           
6797  mov     es:[bx+20h],ax                  
679b  mov     es:[bx+22h],dx                  
679f  jmp     676Ch                           
67a1  cmp     word ptr [6B6h],0h              
67a6  jne     67B3h                           
67a8  les     bx,[bp+6h]                      
67ab  mov     byte ptr es:[bx+40h],0h         
67b0  jmp     685Ch                           
67b3  inc     word ptr [6B6h]                 
67b7  cmp     byte ptr [6ACh],2h              
67bc  je      67DCh                           
67be  cmp     byte ptr [6ACh],1h              
67c3  jne     67CCh                           
67c5  cmp     word ptr [6B6h],0Ah             
67ca  je      67DCh                           
67cc  cmp     byte ptr [6ACh],0h              
67d1  jne     67DAh                           
67d3  cmp     word ptr [6B6h],28h             
67d8  je      67DCh                           
67da  jmp     6854h                           
67dc  les     bx,[bp+6h]                      
67df  mov     byte ptr es:[bx+40h],0h         
67e4  mov     word ptr [6B6h],0h              
67ea  cmp     byte ptr [6ADh],2h              
67ef  je      67F7h                           
67f1  mov     al,[6ADh]                       
67f4  mov     [6A3h],al                       
67f7  cmp     byte ptr [6AEh],2h              
67fc  je      6804h                           
67fe  mov     al,[6AEh]                       
6801  mov     [6A4h],al                       
6804  cmp     byte ptr [6AFh],2h              
6809  je      6811h                           
680b  mov     al,[6AFh]                       
680e  mov     [6A5h],al                       
6811  cmp     byte ptr [6B0h],2h              
6816  je      681Eh                           
6818  mov     al,[6B0h]                       
681b  mov     [6A6h],al                       
681e  cmp     byte ptr [6B1h],2h              
6823  je      682Bh                           
6825  mov     al,[6B1h]                       
6828  mov     [6A7h],al                       
682b  cmp     byte ptr [6B2h],2h              
6830  je      6838h                           
6832  mov     al,[6B2h]                       
6835  mov     [6A8h],al                       
6838  cmp     byte ptr [6B3h],2h              
683d  je      6845h                           
683f  mov     al,[6B3h]                       
6842  mov     [6A9h],al                       
6845  cmp     byte ptr [6B4h],2h              
684a  je      685Ch                           
684c  mov     al,[6B4h]                       
684f  mov     [6AAh],al                       
6852  jmp     685Ch                           
6854  les     bx,[bp+6h]                      
6857  mov     byte ptr es:[bx+40h],1h         
685c  mov     al,[6A3h]                       
685f  les     bx,[bp+6h]                      
6862  mov     es:[bx+41h],al                  
6866  mov     al,[6A4h]                       
6869  mov     es:[bx+42h],al                  
686d  mov     al,[6A5h]                       
6870  mov     es:[bx+43h],al                  
6874  mov     al,[6A6h]                       
6877  mov     es:[bx+44h],al                  
687b  mov     al,[6A7h]                       
687e  mov     es:[bx+45h],al                  
6882  mov     al,[6A8h]                       
6885  mov     es:[bx+46h],al                  
6889  mov     al,[6A9h]                       
688c  mov     es:[bx+47h],al                  
6890  mov     al,[6AAh]                       
6893  mov     es:[bx+48h],al                  
6897  mov     word ptr es:[bx+49h],7h         
689d  mov     word ptr es:[bx+4Bh],0h         
68a3  pop     ds                              
68a4  pop     si                              
68a5  leave                                   
68a6  retf                                    
68a7  add     [bx+si],al                      

; ----- sub_68a8 -----
68a8  mov     ax,66FFh                        ; segment seg2:0000
68ab  push    bp                              
68ac  mov     bp,sp                           
68ae  push    ds                              
68af  mov     ds,ax                           
68b1  push    83h                             
68b4  call far M007.M007_GETSTATE             ; DP_GSP
68b9  dec     ax                              
68ba  jne     68D0h                           
68bc  mov     al,[bp+6h]                      
68bf  push    ax                              
68c0  mov     al,[bp+8h]                      
68c3  push    ax                              
68c4  mov     al,[bp+0Ah]                     
68c7  push    ax                              
68c8  push    word ptr [bp+0Ch]               
68cb  call far TIGASEM.GSPCONTROLXRAY         
68d0  pop     ds                              
68d1  leave                                   
68d2  retf                                    
68d3  add     [bx+si],al                      

; ----- sub_68d4 -----
68d4  mov     ax,68A9h                        ; segment seg2:0000
68d7  push    bp                              
68d8  mov     bp,sp                           
68da  push    ds                              
68db  mov     ds,ax                           
68dd  push    83h                             
68e0  call far M007.M007_GETSTATE             ; DP_GSP
68e5  dec     ax                              
68e6  jne     68F2h                           
68e8  lea     ax,[bp+6h]                      
68eb  push    ss                              
68ec  push    ax                              
68ed  call far TIGASEM.GSPONEZEROFREEZE       
68f2  pop     ds                              
68f3  leave                                   
68f4  retf                                    
68f5  add     [bx+si],al                      

; ----- sub_68f6 -----
68f6  mov     ax,68D5h                        ; segment seg2:0000
68f9  push    bp                              
68fa  mov     bp,sp                           
68fc  push    ds                              
68fd  mov     ds,ax                           
68ff  push    83h                             
6902  call far M007.M007_GETSTATE             ; DP_GSP
6907  dec     ax                              
6908  jne     6913h                           
690a  mov     al,[bp+6h]                      
690d  push    ax                              
690e  call far TIGASEM.CONTROLSPOTDATA        
6913  pop     ds                              
6914  leave                                   
6915  retf                                    

; ----- sub_6916 -----
6916  mov     ax,68F7h                        ; segment seg2:0000
6919  push    bp                              
691a  mov     bp,sp                           
691c  push    ds                              
691d  mov     ds,ax                           
691f  push    83h                             
6922  call far M007.M007_GETSTATE             ; DP_GSP
6927  dec     ax                              
6928  jne     6933h                           
692a  mov     al,[bp+6h]                      
692d  push    ax                              
692e  call far TIGASEM.CONTROLEXTSPOT         
6933  pop     ds                              
6934  leave                                   
6935  retf                                    

; ----- sub_6936 -----
6936  mov     ax,6917h                        ; segment seg2:0000
6939  push    bp                              
693a  mov     bp,sp                           
693c  push    ds                              
693d  mov     ds,ax                           
693f  push    83h                             
6942  call far M007.M007_GETSTATE             ; DP_GSP
6947  dec     ax                              
6948  jne     696Fh                           
694a  mov     al,[bp+6h]                      
694d  push    ax                              
694e  wait                                    
694f  fld     dword ptr [bp+8h]               
6952  sub     sp,8h                           
6955  mov     bx,sp                           
6957  wait                                    
6958  fstp    qword ptr ss:[bx]               
695b  wait                                    
695c  fld     dword ptr [bp+0Ch]              
695f  sub     sp,8h                           
6962  mov     bx,sp                           
6964  wait                                    
6965  fstp    qword ptr ss:[bx]               
6968  nop                                     
6969  wait                                    
696a  call far TIGASEM.GSPSPOTDATACONTROL     
696f  pop     ds                              
6970  leave                                   
6971  retf                                    

; ----- sub_6972 -----
6972  mov     ax,6937h                        ; segment seg2:0000
6975  push    bp                              
6976  mov     bp,sp                           
6978  push    ds                              
6979  mov     ds,ax                           
697b  push    83h                             
697e  call far M007.M007_GETSTATE             ; DP_GSP
6983  dec     ax                              
6984  jne     698Bh                           
6986  call far TIGASEM.FREESPOTDATABUFFER     
698b  pop     ds                              
698c  leave                                   
698d  retf                                    
698e  mov     ax,6973h                        ; segment seg2:0000
6991  push    bp                              
6992  mov     bp,sp                           
6994  push    ds                              
6995  mov     ds,ax                           
6997  push    83h                             
699a  call far M007.M007_GETSTATE             ; DP_GSP
699f  dec     ax                              
69a0  jne     69A7h                           
69a2  call far TIGASEM.SETSPOTDATAREADY       
69a7  pop     ds                              
69a8  leave                                   
69a9  retf                                    

; ----- sub_69aa -----
69aa  mov     ax,698Fh                        ; segment seg2:0000
69ad  push    bp                              
69ae  mov     bp,sp                           
69b0  push    ds                              
69b1  mov     ds,ax                           
69b3  push    5Dh                             
69b5  mov     al,[bp+6h]                      
69b8  cbw                                     
69b9  push    ax                              
69ba  call far M007.M007_PUTSTATE             ; DP_NOISE_REDUCTION
69bf  push    118h                            
69c2  call far M007.M007_GETSTATE             ; DP_PROGRESS
69c7  cmp     ax,6h                           
69ca  jne     69F2h                           
69cc  cmp     byte ptr [bp+6h],2h             
69d0  je      69F2h                           
69d2  cmp     byte ptr [bp+6h],5h             
69d6  je      69F2h                           
69d8  push    154h                            
69db  push    word ptr [0A6Ch]                ; [ds] f32 here = 0
69df  push    word ptr [0A6Ah]                ; [ds] f32 here = 0
69e3  call far M007.M007_PUTVALUE             ; AP_PROGRESS
69e8  push    118h                            
69eb  push    0h                              
69ed  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 0
69f2  pop     ds                              
69f3  leave                                   
69f4  retf                                    
69f5  add     [bx+si],al                      

; ----- sub_69f6 -----
69f6  mov     ax,69ABh                        ; segment seg2:0000
69f9  enter   2h,0h                           
69fd  push    ds                              
69fe  mov     ds,ax                           
6a00  cmp     byte ptr [bp+8h],8h             
6a04  jge     6A3Ah                           
6a06  mov     byte ptr [bp-2h],0h             
6a0a  jmp     6A0Fh                           
6a0c  inc     byte ptr [bp-2h]                
6a0f  cmp     byte ptr [bp-2h],3h             
6a13  jg      6A6Dh                           
6a15  mov     al,[bp-2h]                      
6a18  cbw                                     
6a19  mov     bx,ax                           
6a1b  mov     al,[bp+6h]                      
6a1e  cmp     [bx+150h],al                    
6a22  jne     6A0Ch                           
6a24  mov     cl,[bp+8h]                      
6a27  mov     [bx+86h],cl                     
6a2b  push    ax                              
6a2c  mov     al,[bp-2h]                      
6a2f  push    ax                              
6a30  call far sub_6b38                       
6a35  add     sp,4h                           
6a38  jmp     6A0Ch                           
6a3a  mov     byte ptr [bp-2h],4h             
6a3e  mov     al,[bp-2h]                      
6a41  cbw                                     
6a42  mov     bx,ax                           
6a44  mov     al,[bp+6h]                      
6a47  cmp     [bx+150h],al                    
6a4b  jne     6A64h                           
6a4d  mov     cl,[bp+8h]                      
6a50  sub     cl,8h                           
6a53  mov     [bx+86h],cl                     
6a57  push    ax                              
6a58  mov     al,[bp-2h]                      
6a5b  push    ax                              
6a5c  call far sub_6b38                       
6a61  add     sp,4h                           
6a64  inc     byte ptr [bp-2h]                
6a67  cmp     byte ptr [bp-2h],7h             
6a6b  jle     6A3Eh                           
6a6d  pop     ds                              
6a6e  leave                                   
6a6f  retf                                    

; ----- sub_6a70 -----
6a70  mov     ax,69F7h                        ; segment seg2:0000
6a73  enter   2h,0h                           
6a77  push    di                              
6a78  push    si                              
6a79  push    ds                              
6a7a  mov     ds,ax                           
6a7c  mov     byte ptr [bp-2h],0h             
6a80  mov     es,[bp+8h]                      
6a83  mov     al,[bp-2h]                      
6a86  cbw                                     
6a87  mov     bx,ax                           
6a89  shl     bx,2h                           
6a8c  mov     si,[bp+6h]                      
6a8f  mov     ax,es:[bx+si]                   
6a92  mov     dx,es:[bx+si+2h]                
6a96  mov     [bx+22h],ax                     
6a9a  mov     [bx+24h],dx                     
6a9e  mov     ax,es:[bx+si+20h]               
6aa2  mov     dx,es:[bx+si+22h]               
6aa6  mov     [bx+42h],ax                     
6aaa  mov     [bx+44h],dx                     
6aae  inc     byte ptr [bp-2h]                
6ab1  cmp     byte ptr [bp-2h],7h             
6ab5  jle     6A83h                           
6ab7  push    0BDh                            
6aba  push    64h                             
6abc  call far M007.M007_GETSTATE             ; DP_PLANEB_FROZEN = 100
6ac1  mov     [bp-2h],al                      
6ac4  cbw                                     
6ac5  mov     bx,ax                           
6ac7  shl     bx,2h                           
6aca  les     si,[bp+6h]                      
6acd  push    word ptr es:[bx+si+2h]          
6ad1  push    word ptr es:[bx+si]             
6ad4  mov     di,bx                           
6ad6  call far M007.M007_PUTVALUE             
6adb  push    0BEh                            
6ade  les     bx,[bp+6h]                      
6ae1  push    word ptr es:[bx+di+22h]         
6ae5  push    word ptr es:[bx+di+20h]         
6ae9  call far M007.M007_PUTVALUE             ; AP_OFFSET
6aee  cmp     byte ptr [bp-2h],3h             
6af2  jg      6AFEh                           
6af4  mov     al,[bp-2h]                      
6af7  add     al,4h                           
6af9  mov     [bp-2h],al                      
6afc  jmp     6B02h                           
6afe  sub     byte ptr [bp-2h],4h             
6b02  push    0D7h                            
6b05  mov     al,[bp-2h]                      
6b08  cbw                                     
6b09  mov     bx,ax                           
6b0b  shl     bx,2h                           
6b0e  les     si,[bp+6h]                      
6b11  push    word ptr es:[bx+si+2h]          
6b15  push    word ptr es:[bx+si]             
6b18  mov     di,bx                           
6b1a  call far M007.M007_PUTVALUE             ; AP_IMPLIED_GAIN
6b1f  push    0D8h                            
6b22  les     bx,[bp+6h]                      
6b25  push    word ptr es:[bx+di+22h]         
6b29  push    word ptr es:[bx+di+20h]         
6b2d  call far M007.M007_PUTVALUE             ; AP_IMPLIED_OFFSET
6b32  pop     ds                              
6b33  pop     si                              
6b34  pop     di                              
6b35  leave                                   
6b36  retf                                    
6b37  add     [bx+si],al                      

; ----- sub_6b38 -----
6b38  mov     ax,6A71h                        ; segment seg2:0000
6b3b  push    bp                              
6b3c  mov     bp,sp                           
6b3e  push    di                              
6b3f  push    si                              
6b40  push    ds                              
6b41  mov     ds,ax                           
6b43  mov     al,[bp+8h]                      
6b46  cbw                                     
6b47  jmp     6B7Bh                           
6b49  mov     al,[bp+6h]                      
6b4c  cbw                                     
6b4d  mov     bx,ax                           
6b4f  shl     bx,2h                           
6b52  mov     cx,[0A6Eh]                      
6b56  mov     dx,[0A70h]                      
6b5a  mov     [bx+22h],cx                     
6b5e  mov     [bx+24h],dx                     
6b62  mov     cx,[0A6Ah]                      
6b66  mov     dx,[0A6Ch]                      
6b6a  mov     [bx+42h],cx                     
6b6e  mov     [bx+44h],dx                     
6b72  mov     bx,ax                           
6b74  mov     byte ptr [bx+10h],0h            
6b79  jmp     6B9Ah                           
6b7b  cmp     ax,8h                           
6b7e  ja      6B49h                           
6b80  add     ax,ax                           
6b82  xchg    ax,bx                           
6b83  jmp     word ptr cs:[bx+6B88h]          
6b88  dec     cx                              
6b89  imul    cx,[bx+di+6Bh],49h              
6b8d  imul    cx,[bx+di+6Bh],49h              
6b91  imul    cx,[bx+di+6Bh],49h              
6b95  imul    cx,[bx+di+6Bh],49h              
6b99  imul    cx,[bp+si+646h],-68h            
6b9e  mov     bx,ax                           
6ba0  shl     bx,2h                           
6ba3  push    word ptr [bx+24h]               
6ba7  push    word ptr [bx+22h]               
6bab  mov     cl,al                           
6bad  push    cx                              
6bae  mov     si,ax                           
6bb0  mov     di,bx                           
6bb2  call far sub_5ef6                       
6bb7  add     sp,6h                           
6bba  push    word ptr [di+44h]               
6bbe  push    word ptr [di+42h]               
6bc2  mov     al,[bp+6h]                      
6bc5  push    ax                              
6bc6  call far sub_5f40                       
6bcb  add     sp,6h                           
6bce  mov     al,[si+10h]                     
6bd2  push    ax                              
6bd3  mov     al,[bp+6h]                      
6bd6  push    ax                              
6bd7  call far sub_5ed2                       
6bdc  add     sp,4h                           
6bdf  mov     al,[si+86h]                     
6be3  push    ax                              
6be4  mov     al,[bp+6h]                      
6be7  push    ax                              
6be8  call far sub_5eae                       
6bed  add     sp,4h                           
6bf0  pop     ds                              
6bf1  pop     si                              
6bf2  pop     di                              
6bf3  leave                                   
6bf4  retf                                    
6bf5  add     [bx+si],al                      

; ----- sub_6bf6 -----
6bf6  mov     ax,6B39h                        ; segment seg2:0000
6bf9  push    bp                              
6bfa  mov     bp,sp                           
6bfc  push    ds                              
6bfd  mov     ds,ax                           
6bff  push    1Eh                             
6c01  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
6c06  jmp     6D67h                           
6c09  push    20h                             
6c0b  call far M007.M007_GETSTATE             ; DP_WINDOWING
6c10  or      ax,ax                           
6c12  jne     6C46h                           
6c14  push    7Bh                             
6c16  call far M007.M007_GETSTATE             ; DP_Z0
6c1b  dec     ax                              
6c1c  jne     6C24h                           
6c1e  push    73h                             
6c20  push    1h                              
6c22  jmp     6C28h                           
6c24  push    73h                             
6c26  push    0h                              
6c28  call far M007.M007_PUTSTATE             ; DP_LEFT_FROZEN = 1
6c2d  push    7Fh                             
6c2f  call far M007.M007_GETSTATE             ; DP_Z4
6c34  dec     ax                              
6c35  jne     6C3Ah                           
6c37  jmp     6D15h                           
6c3a  push    74h                             
6c3c  push    0h                              
6c3e  call far M007.M007_PUTSTATE             ; DP_RIGHT_FROZEN = 0
6c43  jmp     6D80h                           
6c46  push    7Bh                             
6c48  call far M007.M007_GETSTATE             ; DP_Z0
6c4d  dec     ax                              
6c4e  jne     6C60h                           
6c50  push    7Dh                             
6c52  call far M007.M007_GETSTATE             ; DP_Z2
6c57  dec     ax                              
6c58  jne     6C60h                           
6c5a  push    73h                             
6c5c  push    1h                              
6c5e  jmp     6C64h                           
6c60  push    73h                             
6c62  push    0h                              
6c64  call far M007.M007_PUTSTATE             ; DP_LEFT_FROZEN = 1
6c69  push    7Fh                             
6c6b  call far M007.M007_GETSTATE             ; DP_Z4
6c70  dec     ax                              
6c71  jne     6C3Ah                           
6c73  push    81h                             
6c76  jmp     6D0Ah                           
6c79  push    20h                             
6c7b  call far M007.M007_GETSTATE             ; DP_Z6 = 32
6c80  or      ax,ax                           
6c82  jne     6CB6h                           
6c84  push    7Bh                             
6c86  call far M007.M007_GETSTATE             ; DP_Z0
6c8b  dec     ax                              
6c8c  jne     6C9Eh                           
6c8e  push    7Ch                             
6c90  call far M007.M007_GETSTATE             ; DP_Z1
6c95  dec     ax                              
6c96  jne     6C9Eh                           
6c98  push    73h                             
6c9a  push    1h                              
6c9c  jmp     6CA2h                           
6c9e  push    73h                             
6ca0  push    0h                              
6ca2  call far M007.M007_PUTSTATE             ; DP_LEFT_FROZEN = 1
6ca7  push    7Fh                             
6ca9  call far M007.M007_GETSTATE             ; DP_Z4
6cae  dec     ax                              
6caf  jne     6C3Ah                           
6cb1  push    80h                             
6cb4  jmp     6D0Ah                           
6cb6  push    7Bh                             
6cb8  call far M007.M007_GETSTATE             ; DP_Z5 = 123
6cbd  dec     ax                              
6cbe  jne     6CDEh                           
6cc0  push    7Ch                             
6cc2  call far M007.M007_GETSTATE             ; DP_Z1
6cc7  dec     ax                              
6cc8  jne     6CDEh                           
6cca  push    7Dh                             
6ccc  call far M007.M007_GETSTATE             ; DP_Z2
6cd1  dec     ax                              
6cd2  jne     6CDEh                           
6cd4  push    7Eh                             
6cd6  call far M007.M007_GETSTATE             ; DP_Z3
6cdb  dec     ax                              
6cdc  je      6D44h                           
6cde  push    73h                             
6ce0  push    0h                              
6ce2  call far M007.M007_PUTSTATE             ; DP_LEFT_FROZEN = 0
6ce7  push    7Fh                             
6ce9  call far M007.M007_GETSTATE             ; DP_Z4
6cee  dec     ax                              
6cef  jne     6D12h                           
6cf1  push    80h                             
6cf4  call far M007.M007_GETSTATE             ; DP_Z5
6cf9  dec     ax                              
6cfa  jne     6D12h                           
6cfc  push    81h                             
6cff  call far M007.M007_GETSTATE             ; DP_Z6
6d04  dec     ax                              
6d05  jne     6D12h                           
6d07  push    82h                             
6d0a  call far M007.M007_GETSTATE             ; DP_Z7
6d0f  dec     ax                              
6d10  je      6D15h                           
6d12  jmp     6C3Ah                           
6d15  push    74h                             
6d17  push    1h                              
6d19  jmp     6C3Eh                           
6d1c  push    7Bh                             
6d1e  call far M007.M007_GETSTATE             ; DP_RIGHT_FROZEN = 1
6d23  dec     ax                              
6d24  jne     6CDEh                           
6d26  push    7Ch                             
6d28  call far M007.M007_GETSTATE             ; DP_Z1
6d2d  dec     ax                              
6d2e  jne     6CDEh                           
6d30  push    7Dh                             
6d32  call far M007.M007_GETSTATE             ; DP_Z2
6d37  dec     ax                              
6d38  jne     6CDEh                           
6d3a  push    7Eh                             
6d3c  call far M007.M007_GETSTATE             ; DP_Z3
6d41  dec     ax                              
6d42  jne     6CDEh                           
6d44  push    73h                             
6d46  push    1h                              
6d48  jmp     6CE2h                           
6d4a  push    7Bh                             
6d4c  call far M007.M007_GETSTATE             ; DP_LEFT_FROZEN = 1
6d51  dec     ax                              
6d52  jne     6D5Ah                           
6d54  push    73h                             
6d56  push    1h                              
6d58  jmp     6D5Eh                           
6d5a  push    73h                             
6d5c  push    0h                              
6d5e  call far M007.M007_PUTSTATE             ; DP_LEFT_FROZEN = 1
6d63  push    7Fh                             
6d65  jmp     6D0Ah                           
6d67  cmp     ax,5h                           
6d6a  ja      6D80h                           
6d6c  add     ax,ax                           
6d6e  xchg    ax,bx                           
6d6f  jmp     word ptr cs:[bx+6D74h]          
6d74  or      [si+79h],bp                     
6d77  insb                                    
6d78  sbb     al,6Dh                          
6d7a  dec     dx                              
6d7b  insw                                    
6d7c  dec     dx                              
6d7d  insw                                    
6d7e  dec     dx                              
6d7f  insw                                    
6d80  push    0A3h                            
6d83  call far M007.M007_GETSTATE             ; DP_Z4 = 163
6d88  dec     ax                              
6d89  jne     6D9Dh                           
6d8b  push    0C5h                            
6d8e  push    73h                             
6d90  call far M007.M007_GETSTATE             ; DP_FROZEN = 115
6d95  push    ax                              
6d96  call far M007.M007_PUTSTATE             
6d9b  jmp     6DFEh                           
6d9d  push    64h                             
6d9f  call far M007.M007_GETSTATE             ; DP_ZONE
6da4  jmp     6DE1h                           
6da6  push    0C5h                            
6da9  push    7Bh                             
6dab  jmp     6D90h                           
6dad  push    0C5h                            
6db0  push    7Ch                             
6db2  jmp     6D90h                           
6db4  push    0C5h                            
6db7  push    7Dh                             
6db9  jmp     6D90h                           
6dbb  push    0C5h                            
6dbe  push    7Eh                             
6dc0  jmp     6D90h                           
6dc2  push    0C5h                            
6dc5  push    7Fh                             
6dc7  jmp     6D90h                           
6dc9  push    0C5h                            
6dcc  push    80h                             
6dcf  jmp     6D90h                           
6dd1  push    0C5h                            
6dd4  push    81h                             
6dd7  jmp     6D90h                           
6dd9  push    0C5h                            
6ddc  push    82h                             
6ddf  jmp     6D90h                           
6de1  cmp     ax,7h                           
6de4  ja      6DFEh                           
6de6  add     ax,ax                           
6de8  xchg    ax,bx                           
6de9  jmp     word ptr cs:[bx+6DEEh]          
6dee  cmpsb                                   
6def  insw                                    
6df0  lodsw                                   
6df1  insw                                    
6df2  mov     ah,6Dh                          
6df4  mov     bx,0C26Dh                       
6df7  insw                                    
6df8  leave                                   
6df9  insw                                    
6dfa  shr     word ptr [di-27h],1             
6dfd  insw                                    
6dfe  call far M200.CHECKFORBEAMBLANKING      
6e03  push    144h                            
6e06  call far M007.M007_GETSTATE             ; DP_FRAME_GRABBER
6e0b  cmp     ax,2h                           
6e0e  jne     6E3Ch                           
6e10  push    118h                            
6e13  call far M007.M007_GETSTATE             ; DP_PROGRESS
6e18  cmp     ax,6h                           
6e1b  jne     6E6Eh                           
6e1d  push    0C5h                            
6e20  call far M007.M007_GETSTATE             ; DP_FROZEN
6e25  dec     ax                              
6e26  jne     6E6Eh                           
6e28  push    5Dh                             
6e2a  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
6e2f  dec     ax                              
6e30  je      6E6Eh                           
6e32  push    5Dh                             
6e34  call far M007.M007_GETSTATE             ; DP_NOISE_REDUCTION
6e39  pop     ds                              
6e3a  leave                                   
6e3b  retf                                    
6e3c  push    118h                            
6e3f  call far M007.M007_GETSTATE             ; DP_PROGRESS
6e44  cmp     ax,6h                           
6e47  jne     6E6Eh                           
6e49  push    0C5h                            
6e4c  call far M007.M007_GETSTATE             ; DP_FROZEN
6e51  dec     ax                              
6e52  jne     6E6Eh                           
6e54  push    154h                            
6e57  push    word ptr [0A6Ch]                ; [ds] f32 here = 0
6e5b  push    word ptr [0A6Ah]                ; [ds] f32 here = 0
6e5f  call far M007.M007_PUTVALUE             ; AP_PROGRESS
6e64  push    118h                            
6e67  push    0h                              
6e69  call far M007.M007_PUTSTATE             ; DP_PROGRESS = 0
6e6e  pop     ds                              
6e6f  leave                                   
6e70  retf                                    
6e71  add     [bx+si],al                      

; ----- sub_6e72 -----
6e72  mov     ax,6BF7h                        ; segment seg2:0000
6e75  enter   0Ah,0h                          
6e79  push    di                              
6e7a  push    si                              
6e7b  push    ds                              
6e7c  mov     ds,ax                           
6e7e  mov     al,1h                           
6e80  mov     [bp-8h],al                      
6e83  mov     [bp-7h],al                      
6e86  mov     [bp-6h],al                      
6e89  mov     [bp-5h],al                      
6e8c  mov     [bp-4h],al                      
6e8f  mov     [bp-3h],al                      
6e92  mov     [bp-2h],al                      
6e95  mov     [bp-1h],al                      
6e98  push    21h                             
6e9a  call far M007.M007_GETSTATE             ; DP_SPOT
6e9f  dec     ax                              
6ea0  jne     6ED2h                           
6ea2  mov     word ptr [bp-0Ah],0h            
6ea7  mov     si,[bp-0Ah]                     
6eaa  mov     byte ptr [bp+si-8h],0h          
6eae  inc     word ptr [bp-0Ah]               
6eb1  cmp     word ptr [bp-0Ah],8h            
6eb5  jl      6EA7h                           
6eb7  mov     byte ptr [bp-8h],1h             
6ebb  mov     ax,0E2Ah                        
6ebe  push    ds                              
6ebf  mov     di,ax                           
6ec1  lea     si,[bp-8h]                      
6ec4  push    ds                              
6ec5  pop     es                              
6ec6  push    ss                              
6ec7  pop     ds                              
6ec8  movsw                                   
6ec9  movsw                                   
6eca  movsw                                   
6ecb  movsw                                   
6ecc  pop     ds                              
6ecd  mov     dx,ds                           
6ecf  jmp     6F87h                           
6ed2  push    23h                             
6ed4  call far M007.M007_GETSTATE             ; DP_DISPLAY_CHANNELS
6ed9  or      ax,ax                           
6edb  jne     6EFDh                           
6edd  push    70h                             
6edf  call far M007.M007_GETSTATE             ; DP_MIXER
6ee4  or      ax,ax                           
6ee6  jne     6EFDh                           
6ee8  mov     word ptr [bp-0Ah],4h            
6eed  mov     si,[bp-0Ah]                     
6ef0  mov     byte ptr [bp+si-8h],0h          
6ef4  inc     word ptr [bp-0Ah]               
6ef7  cmp     word ptr [bp-0Ah],8h            
6efb  jl      6EEDh                           
6efd  push    1Eh                             
6eff  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
6f04  or      ax,ax                           
6f06  je      6F15h                           
6f08  dec     ax                              
6f09  je      6F7Dh                           
6f0b  dec     ax                              
6f0c  dec     ax                              
6f0d  jl      6F29h                           
6f0f  jo      6F29h                           
6f11  dec     ax                              
6f12  dec     ax                              
6f13  jg      6F29h                           
6f15  xor     al,al                           
6f17  mov     [bp-7h],al                      
6f1a  mov     [bp-6h],al                      
6f1d  mov     [bp-5h],al                      
6f20  mov     [bp-3h],al                      
6f23  mov     [bp-2h],al                      
6f26  mov     [bp-1h],al                      
6f29  push    20h                             
6f2b  call far M007.M007_GETSTATE             ; DP_WINDOWING
6f30  dec     ax                              
6f31  jne     6EBBh                           
6f33  push    1Eh                             
6f35  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
6f3a  or      ax,ax                           
6f3c  jne     6F50h                           
6f3e  mov     byte ptr [bp-6h],1h             
6f42  push    70h                             
6f44  call far M007.M007_GETSTATE             ; DP_MIXER
6f49  dec     ax                              
6f4a  jne     6F50h                           
6f4c  mov     byte ptr [bp-2h],1h             
6f50  push    1Eh                             
6f52  call far M007.M007_GETSTATE             ; DP_OPERATING_MODE
6f57  dec     ax                              
6f58  je      6F5Dh                           
6f5a  jmp     6EBBh                           
6f5d  mov     al,1h                           
6f5f  mov     [bp-6h],al                      
6f62  mov     [bp-5h],al                      
6f65  push    70h                             
6f67  call far M007.M007_GETSTATE             ; DP_MIXER
6f6c  dec     ax                              
6f6d  je      6F72h                           
6f6f  jmp     6EBBh                           
6f72  mov     al,1h                           
6f74  mov     [bp-2h],al                      
6f77  mov     [bp-1h],al                      
6f7a  jmp     6EBBh                           
6f7d  xor     al,al                           
6f7f  mov     [bp-6h],al                      
6f82  mov     [bp-5h],al                      
6f85  jmp     6F23h                           
6f87  pop     ds                              
6f88  pop     si                              
6f89  pop     di                              
6f8a  leave                                   
6f8b  retf                                    

; ----- sub_6f8c -----
6f8c  mov     ax,6E73h                        ; segment seg2:0000
6f8f  enter   14h,0h                          
6f93  push    di                              
6f94  push    si                              
6f95  push    ds                              
6f96  mov     ds,ax                           
6f98  mov     word ptr [bp-14h],0h            
6f9d  mov     si,[bp-14h]                     
6fa0  mov     byte ptr [bp+si-12h],0h         
6fa4  inc     word ptr [bp-14h]               
6fa7  cmp     word ptr [bp-14h],11h           
6fab  jle     6F9Dh                           
6fad  mov     word ptr [bp-14h],0h            
6fb2  mov     si,[bp-14h]                     
6fb5  cmp     byte ptr [bp+si+6h],1h          
6fb9  jne     6FC6h                           
6fbb  mov     al,[si+150h]                    
6fbf  cbw                                     
6fc0  mov     si,ax                           
6fc2  mov     byte ptr [bp+si-12h],1h         
6fc6  inc     word ptr [bp-14h]               
6fc9  cmp     word ptr [bp-14h],8h            
6fcd  jl      6FB2h                           
6fcf  cmp     byte ptr [bp-0Ch],1h            
6fd3  jne     7014h                           
6fd5  lea     cx,[bp+6h]                      
6fd8  push    ss                              
6fd9  push    cx                              
6fda  push    6h                              
6fdc  call far sub_710e                       
6fe1  add     sp,6h                           
6fe4  dec     al                              
6fe6  jne     7014h                           
6fe8  lea     ax,[bp+6h]                      
6feb  push    ss                              
6fec  push    ax                              
6fed  push    1h                              
6fef  call far sub_710e                       
6ff4  add     sp,6h                           
6ff7  or      al,al                           
6ff9  jne     6FFEh                           
6ffb  mov     [bp-11h],al                     
6ffe  lea     ax,[bp+6h]                      
7001  push    ss                              
7002  push    ax                              
7003  push    2h                              
7005  call far sub_710e                       
700a  add     sp,6h                           
700d  or      al,al                           
700f  jne     7014h                           
7011  mov     [bp-10h],al                     
7014  mov     ax,0E2Ah                        
7017  push    ds                              
7018  mov     di,ax                           
701a  lea     si,[bp-12h]                     
701d  push    ds                              
701e  pop     es                              
701f  push    ss                              
7020  pop     ds                              
7021  mov     cx,9h                           
7024  rep     movsw                           
7026  pop     ds                              
7027  mov     dx,ds                           
7029  pop     ds                              
702a  pop     si                              
702b  pop     di                              
702c  leave                                   
702d  retf                                    

; ----- sub_702e -----
702e  mov     ax,6F8Dh                        ; segment seg2:0000
7031  enter   22h,0h                          
7035  push    di                              
7036  push    si                              
7037  push    ds                              
7038  mov     ds,ax                           
703a  push    66h                             
703c  call far M007.M007_GETSTATE             ; DP_DETECTOR_TYPE
7041  mov     [bp-2h],ax                      
7044  push    ax                              
7045  call far sub_64ba                       
704a  pop     bx                              
704b  push    ds                              
704c  lea     di,[bp-22h]                     
704f  mov     si,ax                           
7051  push    ss                              
7052  pop     es                              
7053  mov     ds,dx                           
7055  mov     cx,10h                          
7058  rep     movsw                           
705a  pop     ds                              
705b  push    0BFh                            
705e  push    word ptr [bp-1Ch]               
7061  push    word ptr [bp-1Eh]               
7064  call far M007.M007_PUTVALUE             ; AP_CONTRAST
7069  push    1Eh                             
706b  push    word ptr [bp-20h]               
706e  push    word ptr [bp-22h]               
7071  call far M007.M007_PUTVALUE             ; AP_BRIGHTNESS
7076  push    0C1h                            
7079  push    word ptr [bp-18h]               
707c  push    word ptr [bp-1Ah]               
707f  call far M007.M007_PUTVALUE             ; AP_AUTO_CONTRAST
7084  push    0C0h                            
7087  push    word ptr [bp-14h]               
708a  push    word ptr [bp-16h]               
708d  call far M007.M007_PUTVALUE             ; AP_AUTO_BRIGHT
7092  push    12Dh                            
7095  push    word ptr [bp-4h]                
7098  push    word ptr [bp-6h]                
709b  call far M007.M007_PUTVALUE             ; AP_ABC_CONTR
70a0  push    12Ch                            
70a3  push    word ptr [bp-8h]                
70a6  push    word ptr [bp-0Ah]               
70a9  call far M007.M007_PUTVALUE             ; AP_ABC_BRIGHT
70ae  mov     ax,[bp-22h]                     
70b1  mov     dx,[bp-20h]                     
70b4  mov     bx,[bp-2h]                      
70b7  shl     bx,5h                           
70ba  mov     [bx+158h],ax                    
70be  mov     [bx+15Ah],dx                    
70c2  pop     ds                              
70c3  pop     si                              
70c4  pop     di                              
70c5  leave                                   
70c6  retf                                    
70c7  add     [bx+si],al                      

; ----- sub_70c8 -----
70c8  mov     ax,702Fh                        ; segment seg2:0000
70cb  enter   2h,0h                           
70cf  push    ds                              
70d0  mov     ds,ax                           
70d2  push    0A4h                            
70d5  call far M007.M007_GETSTATE             ; DP_EXT_SCAN_CONTROL
70da  mov     [bp-2h],ax                      
70dd  dec     ax                              
70de  jne     70F2h                           
70e0  cmp     word ptr [7AEh],0h              
70e5  jne     70F2h                           
70e7  mov     word ptr [7AEh],1h              
70ed  call far UPDATE_DETECTORS               
70f2  cmp     word ptr [bp-2h],0h             
70f6  jne     710Ah                           
70f8  cmp     word ptr [7AEh],1h              
70fd  jne     710Ah                           
70ff  mov     word ptr [7AEh],0h              
7105  call far UPDATE_DETECTORS               
710a  pop     ds                              
710b  leave                                   
710c  retf                                    
710d  add     [bx+si],al                      

; ----- sub_710e -----
710e  mov     ax,70C9h                        ; segment seg2:0000
7111  enter   4h,0h                           
7115  push    si                              
7116  push    ds                              
7117  mov     ds,ax                           
7119  xor     al,al                           
711b  mov     [bp-4h],al                      
711e  mov     [bp-2h],al                      
7121  jmp     7149h                           
7123  mov     al,[bp-2h]                      
7126  cbw                                     
7127  mov     bx,ax                           
7129  les     si,[bp+8h]                      
712c  cmp     byte ptr es:[bx+si],1h          
7130  jne     7146h                           
7132  mov     al,[bp+6h]                      
7135  cmp     [bx+150h],al                    
7139  jne     7146h                           
713b  cmp     byte ptr [bx+39Eh],0h           
7140  jne     7146h                           
7142  mov     byte ptr [bp-4h],1h             
7146  inc     byte ptr [bp-2h]                
7149  cmp     byte ptr [bp-2h],8h             
714d  jl      7123h                           
714f  mov     al,[bp-4h]                      
7152  pop     ds                              
7153  pop     si                              
7154  leave                                   
7155  retf                                    
