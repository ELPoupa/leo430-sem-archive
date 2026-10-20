0000  add     [bx+si],al                      
0002  add     [bx+si],al                      
0004  add     [bx+si],al                      
0006  add     [bx+si],al                      
0008  add     [bx+si],al                      
000a  add     [bx+si],al                      
000c  add     [bx+si],al                      
000e  add     [bx+si],al                      
0010  mov     dx,6B03h                        
0013  jb      43h                             
0015  les     bx,[10h]                        
0019  jmp     far ptr  es:[bx]                

; ----- sub_001c -----
001c  les     bx,cs:[10h]                     
0021  jmp     far ptr  es:[bx+4h]             
0025  les     bx,cs:[10h]                     
002a  jmp     far ptr  es:[bx+8h]             

; ----- sub_002e -----
002e  les     bx,cs:[10h]                     
0033  jmp     far ptr  es:[bx+10h]            
0037  les     bx,cs:[10h]                     
003c  jmp     far ptr  es:[bx+1Ch]            
0040  les     bx,cs:[10h]                     
0045  jmp     far ptr  es:[bx+20h]            
0049  les     bx,cs:[10h]                     
004e  jmp     far ptr  es:[bx+24h]            
0052  les     bx,cs:[10h]                     
0057  jmp     far ptr  es:[bx+28h]            

; ----- sub_005b -----
005b  les     bx,cs:[10h]                     
0060  jmp     far ptr  es:[bx+2Ch]            

; ----- sub_0064 -----
0064  les     bx,cs:[10h]                     
0069  jmp     far ptr  es:[bx+30h]            

; ----- sub_006d -----
006d  les     bx,cs:[10h]                     
0072  jmp     far ptr  es:[bx+34h]            

; ----- sub_0076 -----
0076  les     bx,cs:[10h]                     
007b  jmp     far ptr  es:[bx+38h]            
007f  les     bx,cs:[10h]                     
0084  jmp     far ptr  es:[bx+3Ch]            

; ----- sub_0088 -----
0088  les     bx,cs:[10h]                     
008d  jmp     far ptr  es:[bx+40h]            

; ----- sub_0091 -----
0091  les     bx,cs:[10h]                     
0096  jmp     far ptr  es:[bx+44h]            

; ----- sub_009a -----
009a  les     bx,cs:[10h]                     
009f  jmp     far ptr  es:[bx+48h]            

; ----- sub_00a3 -----
00a3  les     bx,cs:[10h]                     
00a8  jmp     far ptr  es:[bx+7Ch]            

; ----- sub_00ac -----
00ac  les     bx,cs:[10h]                     
00b1  jmp     far ptr  es:[bx+80h]            

; ----- sub_00b6 -----
00b6  les     bx,cs:[10h]                     
00bb  jmp     far ptr  es:[bx+4Ch]            

; ----- sub_00bf -----
00bf  les     bx,cs:[10h]                     
00c4  jmp     far ptr  es:[bx+50h]            
00c8  les     bx,cs:[10h]                     
00cd  jmp     far ptr  es:[bx+54h]            
00d1  les     bx,cs:[10h]                     
00d6  jmp     far ptr  es:[bx+58h]            
00da  les     bx,cs:[10h]                     
00df  jmp     far ptr  es:[bx+5Ch]            

; ----- sub_00e3 -----
00e3  les     bx,cs:[10h]                     
00e8  jmp     far ptr  es:[bx+18h]            
00ec  les     bx,cs:[10h]                     
00f1  jmp     far ptr  es:[bx+60h]            
00f5  les     bx,cs:[10h]                     
00fa  jmp     far ptr  es:[bx+14h]            
00fe  les     bx,cs:[10h]                     
0103  jmp     far ptr  es:[bx+0Ch]            
0107  les     bx,cs:[10h]                     
010c  jmp     far ptr  es:[bx+64h]            
0110  les     bx,cs:[10h]                     
0115  jmp     far ptr  es:[bx+68h]            

; ----- sub_0119 -----
0119  les     bx,cs:[10h]                     
011e  jmp     far ptr  es:[bx+6Ch]            
0122  les     bx,cs:[10h]                     
0127  jmp     far ptr  es:[bx+70h]            
012b  les     bx,cs:[10h]                     
0130  jmp     far ptr  es:[bx+74h]            
0134  les     bx,cs:[10h]                     
0139  jmp     far ptr  es:[bx+78h]            
013d  les     bx,cs:[10h]                     
0142  jmp     far ptr  es:[bx+84h]            
0147  les     bx,cs:[10h]                     
014c  jmp     far ptr  es:[bx+88h]            

; ----- sub_0151 -----
0151  les     bx,cs:[10h]                     
0156  jmp     far ptr  es:[bx+8Ch]            
015b  les     bx,cs:[10h]                     
0160  jmp     far ptr  es:[bx+90h]            

; ----- sub_0165 -----
0165  les     bx,cs:[10h]                     
016a  jmp     far ptr  es:[bx+94h]            
016f  les     bx,cs:[10h]                     
0174  jmp     far ptr  es:[bx+98h]            
0179  les     bx,cs:[10h]                     
017e  jmp     far ptr  es:[bx+9Ch]            
0183  les     bx,cs:[10h]                     
0188  jmp     far ptr  es:[bx+0A0h]           
018d  les     bx,cs:[10h]                     
0192  jmp     far ptr  es:[bx+0A4h]           
0197  les     bx,cs:[10h]                     
019c  jmp     far ptr  es:[bx+0A8h]           
01a1  les     bx,cs:[10h]                     
01a6  jmp     far ptr  es:[bx+0ACh]           
01ab  les     bx,cs:[10h]                     
01b0  jmp     far ptr  es:[bx+0B0h]           
01b5  les     bx,cs:[10h]                     
01ba  jmp     far ptr  es:[bx+0B4h]           
01bf  les     bx,cs:[10h]                     
01c4  jmp     far ptr  es:[bx+0B8h]           
01c9  les     bx,cs:[10h]                     
01ce  jmp     far ptr  es:[bx+0BCh]           
01d3  les     bx,cs:[10h]                     
01d8  jmp     far ptr  es:[bx+0C0h]           
01dd  les     bx,cs:[10h]                     
01e2  jmp     far ptr  es:[bx+0C4h]           
01e7  les     bx,cs:[10h]                     
01ec  jmp     far ptr  es:[bx+0C8h]           
01f1  les     bx,cs:[10h]                     
01f6  jmp     far ptr  es:[bx+0CCh]           
01fb  les     bx,cs:[10h]                     
0200  jmp     far ptr  es:[bx+0D0h]           
0205  les     bx,cs:[10h]                     
020a  jmp     far ptr  es:[bx+0D4h]           
020f  les     bx,cs:[10h]                     
0214  jmp     far ptr  es:[bx+0D8h]           
0219  les     bx,cs:[10h]                     
021e  jmp     far ptr  es:[bx+0DCh]           
0223  les     bx,cs:[10h]                     
0228  jmp     far ptr  es:[bx+0E0h]           
022d  les     bx,cs:[10h]                     
0232  jmp     far ptr  es:[bx+0E4h]           
0237  les     bx,cs:[10h]                     
023c  jmp     far ptr  es:[bx+0E8h]           
0241  les     bx,cs:[10h]                     
0246  jmp     far ptr  es:[bx+0ECh]           
024b  les     bx,cs:[10h]                     
0250  jmp     far ptr  es:[bx+0F0h]           
0255  les     bx,cs:[10h]                     
025a  jmp     far ptr  es:[bx+0F4h]           
025f  les     bx,cs:[10h]                     
0264  jmp     far ptr  es:[bx+0F8h]           
0269  les     bx,cs:[10h]                     
026e  jmp     far ptr  es:[bx+0FCh]           
0273  les     bx,cs:[10h]                     
0278  jmp     far ptr  es:[bx+100h]           
027d  les     bx,cs:[10h]                     
0282  jmp     far ptr  es:[bx+104h]           

; ----- sub_0287 -----
0287  les     bx,cs:[10h]                     
028c  jmp     far ptr  es:[bx+108h]           
0291  les     bx,cs:[10h]                     
0296  jmp     far ptr  es:[bx+10Ch]           

; ----- sub_029b -----
029b  les     bx,cs:[10h]                     
02a0  jmp     far ptr  es:[bx+110h]           

; ----- sub_02a5 -----
02a5  les     bx,cs:[10h]                     
02aa  jmp     far ptr  es:[bx+114h]           

; ----- sub_02af -----
02af  mov     ax,ds                           
02b1  nop                                     
02b2  inc     bp                              
02b3  push    bp                              
02b4  mov     bp,sp                           
02b6  push    ds                              
02b7  mov     ds,ax                           
02b9  push    si                              
02ba  push    di                              
02bb  push    es                              
02bc  cmp     word ptr [3ACh],0h              
02c1  je      2C6h                            
02c3  jmp     383h                            
02c6  mov     ax,727Eh                        ; segment seg1:0000
02c9  push    ax                              
02ca  call far KERNEL.ALLOCCSTODSALIAS        
02cf  mov     [3B8h],ax                       
02d2  mov     ax,2h                           
02d5  push    ax                              
02d6  call    6ECh                            
02d9  add     sp,2h                           
02dc  mov     cx,dx                           
02de  or      cx,ax                           
02e0  je      2EEh                            
02e2  push    dx                              
02e3  push    ax                              
02e4  call    788h                            
02e7  add     sp,4h                           
02ea  or      ax,ax                           
02ec  jne     2F1h                            
02ee  mov     ax,7Fh                          
02f1  mov     [3A4h],ax                       
02f4  push    ds                              
02f5  mov     bx,1h                           
02f8  xor     ax,ax                           
02fa  push    bx                              
02fb  push    ax                              
02fc  call    561h                            
02ff  add     sp,4h                           
0302  mov     bx,[3A4h]                       
0306  xor     bh,bh                           
0308  shl     bx,1                            
030a  shl     bx,1                            
030c  mov     ds,ax                           
030e  mov     si,ax                           
0310  mov     ax,[bx]                         
0312  mov     bx,[bx+2h]                      
0315  pop     ds                              
0316  mov     [3A6h],ax                       
0319  mov     [3A8h],bx                       
031d  or      ax,bx                           
031f  je      38Eh                            
0321  push    si                              
0322  call far KERNEL.FREESELECTOR            
0327  mov     ax,0h                           
032a  push    ax                              
032b  push    word ptr [3A8h]                 ; [ds] f32 here = 0
032f  call    561h                            
0332  add     sp,4h                           
0335  test    ax,ax                           
0337  je      38Eh                            
0339  mov     [3AEh],ax                       
033c  mov     [3A8h],ax                       
033f  push    ax                              
0340  call far KERNEL.ALLOCCSTODSALIAS        
0345  mov     [3B0h],ax                       
0348  mov     ah,1h                           
034a  xor     bx,bx                           
034c  stc                                     
034d  pushf                                   
034e  cli                                     
034f  call    far ptr  [3A6h]                 
0353  jb      38Eh                            
0355  cmp     bx,1234h                        
0359  je      363h                            
035b  mov     word ptr [3A2h],110h            
0361  jmp     367h                            
0363  mov     [3A2h],cx                       
0367  mov     bx,[3B8h]                       
036b  mov     es,bx                           
036d  mov     es:[10h],ax                     
0371  mov     es:[12h],dx                     
0376  call    430h                            
0379  test    ax,ax                           
037b  je      38Eh                            
037d  mov     word ptr [3ACh],1h              
0383  mov     ax,cs:[10h]                     
0387  mov     dx,cs:[12h]                     
038c  jmp     392h                            
038e  xor     ax,ax                           
0390  mov     dx,ax                           
0392  pop     es                              
0393  pop     di                              
0394  pop     si                              
0395  lea     sp,[bp-2h]                      
0398  pop     ds                              
0399  pop     bp                              
039a  dec     bp                              
039b  retf                                    

; ----- sub_039c -----
039c  mov     ax,ds                           
039e  nop                                     
039f  inc     bp                              
03a0  push    bp                              
03a1  mov     bp,sp                           
03a3  push    ds                              
03a4  mov     ds,ax                           
03a6  call far sub_02af                       
03ab  cmp     ax,dx                           
03ad  jne     3B6h                            
03af  or      ax,ax                           
03b1  jne     3B6h                            
03b3  jmp     429h                            
03b5  nop                                     
03b6  cmp     word ptr [bp+0Ah],0h            
03ba  jne     3C1h                            
03bc  call    4D6h                            
03bf  jmp     3E6h                            
03c1  call    50Dh                            
03c4  cmp     byte ptr [4D2h],1h              
03c9  je      3E6h                            
03cb  call far sub_02a5                       
03d0  mov     bx,ax                           
03d2  or      bx,dx                           
03d4  je      3E6h                            
03d6  push    es                              
03d7  push    di                              
03d8  mov     di,ax                           
03da  mov     es,dx                           
03dc  call    5ECh                            
03df  mov     byte ptr [4D2h],1h              
03e4  pop     di                              
03e5  pop     es                              
03e6  call far sub_029b                       
03eb  mov     ax,[bp+6h]                      
03ee  push    ax                              
03ef  cmp     ax,0FFFEh                       
03f2  jne     3F9h                            
03f4  mov     word ptr [bp+6h],0h             
03f9  push    word ptr [bp+8h]                
03fc  push    word ptr [bp+6h]                
03ff  call far sub_0119                       
0404  add     sp,4h                           
0407  pop     cx                              
0408  cmp     cx,-2h                          
040b  je      429h                            
040d  cmp     word ptr [bp+6h],-1h            
0411  je      429h                            
0413  push    ax                              
0414  push    dx                              
0415  call    4D6h                            
0418  cmp     byte ptr [4D2h],1h              
041d  jne     427h                            
041f  call    668h                            
0422  mov     byte ptr [4D2h],0h              
0427  pop     dx                              
0428  pop     ax                              
0429  lea     sp,[bp-2h]                      
042c  pop     ds                              
042d  pop     bp                              
042e  dec     bp                              
042f  retf                                    

; ----- sub_0430 -----
0430  push    si                              
0431  push    es                              
0432  les     bx,cs:[10h]                     
0437  mov     ax,es:[bx+108h]                 
043c  mov     [3BAh],ax                       
043f  mov     ax,[3AEh]                       
0442  mov     [3BCh],ax                       
0445  call    far ptr  [3BAh]                 
0449  mov     si,ax                           
044b  mov     dx,[3B0h]                       
044f  mov     es,dx                           
0451  mov     ax,es:[si+2h]                   
0455  test    ax,ax                           
0457  je      468h                            
0459  mov     bx,1h                           
045c  push    bx                              
045d  push    ax                              
045e  call    561h                            
0461  add     sp,4h                           
0464  test    ax,ax                           
0466  je      4D3h                            
0468  mov     [3B4h],ax                       
046b  mov     ax,es:[si+6h]                   
046f  test    ax,ax                           
0471  je      482h                            
0473  mov     bx,1h                           
0476  push    bx                              
0477  push    ax                              
0478  call    561h                            
047b  add     sp,4h                           
047e  test    ax,ax                           
0480  je      4D3h                            
0482  mov     [3B6h],ax                       
0485  mov     ax,es:[si+0Ah]                  
0489  mov     bx,1h                           
048c  push    bx                              
048d  push    ax                              
048e  call    561h                            
0491  add     sp,4h                           
0494  test    ax,ax                           
0496  je      4D3h                            
0498  mov     [3B2h],ax                       
049b  mov     ax,12h                          ; segment seg2:0000
049e  mov     es,ax                           
04a0  mov     di,3BAh                         
04a3  push    ds                              
04a4  lds     si,cs:[10h]                     
04a9  mov     cx,8Ch                          
04ac  cld                                     
04ad  rep     movsw                           
04af  pop     ds                              
04b0  mov     di,3BAh                         
04b3  mov     cx,es                           
04b5  mov     bx,[3B8h]                       
04b9  mov     es,bx                           
04bb  mov     es:[10h],di                     
04c0  mov     es:[12h],cx                     
04c5  mov     es,cx                           
04c7  mov     cx,46h                          
04ca  mov     ax,[3AEh]                       
04cd  add     di,2h                           
04d0  stosw                                   
04d1  loop    4CDh                            
04d3  pop     es                              
04d4  pop     si                              
04d5  ret                                     

; ----- sub_04d6 -----
04d6  push    si                              
04d7  push    es                              
04d8  call far sub_0287                       
04dd  mov     dx,[3B0h]                       
04e1  mov     si,ax                           
04e3  mov     es,dx                           
04e5  mov     ax,es:[si+2h]                   
04e9  mov     es:[si+16h],ax                  
04ed  mov     ax,es:[si+6h]                   
04f1  mov     es:[si+18h],ax                  
04f5  mov     ax,es:[si+0Ah]                  
04f9  mov     es:[si+1Ah],ax                  
04fd  mov     ax,es:[si+0Ch]                  
0501  mov     es:[si+1Ch],ax                  
0505  mov     word ptr es:[si],0h             
050a  pop     es                              
050b  pop     si                              
050c  ret                                     

; ----- sub_050d -----
050d  push    si                              
050e  push    es                              
050f  call far sub_0287                       
0514  mov     dx,[3B0h]                       
0518  mov     si,ax                           
051a  mov     es,dx                           
051c  mov     bx,[3B4h]                       
0520  mov     es:[si+0Eh],bx                  
0524  mov     es:[si+16h],bx                  
0528  mov     bx,[3B6h]                       
052c  mov     es:[si+10h],bx                  
0530  mov     es:[si+18h],bx                  
0534  mov     bx,[3B2h]                       
0538  mov     es:[si+12h],bx                  
053c  mov     es:[si+1Ah],bx                  
0540  mov     bx,[3B0h]                       
0544  mov     es:[si+14h],bx                  
0548  mov     es:[si+1Ch],bx                  
054c  call far KERNEL.GETDOSENVIRONMENT       
0551  mov     es:[si+20h],dx                  
0555  mov     es:[si+1Eh],ax                  
0559  mov     word ptr es:[si],1h             
055e  pop     es                              
055f  pop     si                              
0560  ret                                     

; ----- sub_0561 -----
0561  push    bp                              
0562  mov     bp,sp                           
0564  sub     sp,2h                           
0567  push    es                              
0568  xor     ax,ax                           
056a  push    ax                              
056b  call far KERNEL.ALLOCSELECTOR           
0570  mov     dx,ax                           
0572  mov     ax,49Ch                         ; segment seg2:0000
0575  cmp     word ptr [bp+6h],0h             
0579  je      57Eh                            
057b  mov     ax,512h                         ; segment seg1:0000
057e  push    ax                              
057f  push    dx                              
0580  call far KERNEL.PRESTOCHANGOSELECTOR    
0585  mov     [bp-2h],ax                      
0588  xor     dx,dx                           
058a  mov     bx,[bp+4h]                      
058d  mov     dl,bh                           
058f  mov     cl,4h                           
0591  shl     bx,cl                           
0593  shr     dx,cl                           
0595  push    ax                              
0596  push    dx                              
0597  push    bx                              
0598  call far KERNEL.SETSELECTORBASE         
059d  cmp     ax,7h                           
05a0  jne     5A5h                            
05a2  mov     ax,[bp-2h]                      
05a5  mov     [bp-2h],ax                      
05a8  push    ax                              
05a9  xor     dx,dx                           
05ab  push    dx                              
05ac  mov     dx,0FFFFh                       
05af  push    dx                              
05b0  call far KERNEL.SETSELECTORLIMIT        
05b5  mov     ax,[bp-2h]                      
05b8  pop     es                              
05b9  mov     sp,bp                           
05bb  pop     bp                              
05bc  ret                                     
05bd  add     [bx+si],al                      
05bf  add     [bx+si],al                      
05c1  add     [bx+si],al                      
05c3  add     [bx+si],al                      
05c5  add     [bx+si],al                      
05c7  add     [bx+si+53h],dl                  
05ca  push    cx                              
05cb  push    dx                              
05cc  push    ds                              
05cd  push    es                              
05ce  call    far ptr  cs:[5C1h]              
05d3  cli                                     
05d4  mov     al,20h                          
05d6  mov     cl,cs:[5C5h]                    
05db  cmp     cl,8h                           
05de  jb      5E2h                            
05e0  out     0A0h,al                         
05e2  out     20h,al                          
05e4  sti                                     
05e5  pop     es                              
05e6  pop     ds                              
05e7  pop     dx                              
05e8  pop     cx                              
05e9  pop     bx                              
05ea  pop     ax                              
05eb  iret                                    

; ----- sub_05ec -----
05ec  push    ds                              
05ed  mov     bx,[3B8h]                       
05f1  mov     ds,bx                           
05f3  mov     ax,es:[di]                      
05f6  mov     [5C1h],ax                       
05f9  mov     ax,es:[di+2h]                   
05fd  mov     [5C3h],ax                       
0600  mov     ax,es:[di+4h]                   
0604  mov     [5C5h],al                       
0607  mov     bx,8h                           
060a  cmp     ax,8h                           
060d  jl      612h                            
060f  mov     bx,70h                          
0612  add     ax,bx                           
0614  mov     [5C6h],al                       
0617  mov     bl,al                           
0619  mov     ax,204h                         
061c  int     31h                             
061e  mov     [5BDh],cx                       
0622  mov     [5BFh],dx                       
0626  mov     dx,5C8h                         
0629  mov     cx,cs                           
062b  mov     bl,[5C6h]                       
062f  mov     ax,205h                         
0632  int     31h                             
0634  mov     cl,[5C5h]                       
0638  cli                                     
0639  mov     dx,0FFFEh                       
063c  rol     dx,cl                           
063e  cmp     cl,7h                           
0641  ja      654h                            
0643  in      al,21h                          
0645  mov     [5C7h],al                       
0648  and     al,dl                           
064a  out     21h,al                          
064c  mov     al,60h                          
064e  or      al,cl                           
0650  out     20h,al                          
0652  jmp     665h                            
0654  in      al,0A1h                         
0656  mov     [5C7h],al                       
0659  and     al,dh                           
065b  out     0A1h,al                         
065d  mov     al,60h                          
065f  or      al,cl                           
0661  and     al,0F7h                         
0663  out     0A0h,al                         
0665  pop     ds                              
0666  sti                                     
0667  ret                                     

; ----- sub_0668 -----
0668  push    ds                              
0669  mov     bx,[3B8h]                       
066d  mov     ds,bx                           
066f  cli                                     
0670  mov     cl,[5C5h]                       
0674  cmp     cl,7h                           
0677  ja      686h                            
0679  mov     al,[5C7h]                       
067c  out     21h,al                          
067e  mov     al,60h                          
0680  or      al,cl                           
0682  out     20h,al                          
0684  jmp     693h                            
0686  mov     al,[5C7h]                       
0689  out     0A1h,al                         
068b  mov     al,60h                          
068d  or      al,cl                           
068f  and     al,0F7h                         
0691  out     0A0h,al                         
0693  mov     cx,[5BDh]                       
0697  mov     dx,[5BFh]                       
069b  mov     ax,205h                         
069e  int     31h                             
06a0  pop     ds                              
06a1  ret                                     

; ----- sub_06a2 -----
06a2  push    bp                              
06a3  mov     bp,sp                           
06a5  push    si                              
06a6  push    di                              
06a7  push    es                              
06a8  push    ds                              
06a9  cld                                     
06aa  call far KERNEL.GETDOSENVIRONMENT       
06af  mov     ds,dx                           
06b1  mov     si,ax                           
06b3  les     di,[bp+6h]                      
06b6  mov     cx,[bp+4h]                      
06b9  mov     bx,cx                           
06bb  cmp     byte ptr [si],0h                
06be  jne     6C2h                            
06c0  jmp     6E0h                            
06c2  mov     di,[bp+6h]                      
06c5  mov     cx,bx                           
06c7  rep     cmpsb                           
06c9  jne     6D8h                            
06cb  cmp     byte ptr [si],3Dh               
06ce  jne     6D8h                            
06d0  inc     si                              
06d1  mov     ax,si                           
06d3  mov     dx,ds                           
06d5  jmp     6E4h                            
06d7  inc     si                              
06d8  cmp     byte ptr [si],0h                
06db  jne     6D7h                            
06dd  inc     si                              
06de  jmp     6BBh                            
06e0  xor     ax,ax                           
06e2  xor     dx,dx                           
06e4  pop     ds                              
06e5  pop     es                              
06e6  pop     di                              
06e7  pop     si                              
06e8  mov     sp,bp                           
06ea  pop     bp                              
06eb  ret                                     

; ----- sub_06ec -----
06ec  push    bp                              
06ed  mov     bp,sp                           
06ef  push    di                              
06f0  push    es                              
06f1  push    ds                              
06f2  cld                                     
06f3  mov     dx,4h                           
06f6  mov     ax,4D4h                         
06f9  push    ds                              
06fa  push    ax                              
06fb  push    dx                              
06fc  call    6A2h                            
06ff  add     sp,6h                           
0702  mov     cx,ax                           
0704  or      cx,dx                           
0706  jne     71Fh                            
0708  mov     dx,5h                           
070b  mov     ax,4D8h                         
070e  push    ds                              
070f  push    ax                              
0710  push    dx                              
0711  call    6A2h                            
0714  add     sp,6h                           
0717  mov     cx,ax                           
0719  or      cx,dx                           
071b  jne     71Fh                            
071d  jmp     77Dh                            
071f  mov     di,ax                           
0721  mov     bx,ax                           
0723  mov     es,dx                           
0725  xor     ax,ax                           
0727  mov     cx,0FFFFh                       
072a  repne   scasb                           
072c  not     cx                              
072e  dec     cx                              
072f  mov     di,bx                           
0731  mov     bx,[bp+4h]                      
0734  cmp     bx,3h                           
0737  jae     77Dh                            
0739  mov     dl,[bx+4DDh]                    
073d  mov     dh,dl                           
073f  sub     dh,20h                          
0742  mov     al,2Dh                          
0744  repne   scasb                           
0746  jcxz    77Dh                            
0748  cmp     es:[di],dl                      
074b  je      752h                            
074d  cmp     es:[di],dh                      
0750  jne     742h                            
0752  inc     di                              
0753  xor     bx,bx                           
0755  mov     al,es:[di]                      
0758  or      al,al                           
075a  je      76Ch                            
075c  cmp     al,2Dh                          
075e  je      76Ch                            
0760  cmp     al,20h                          
0762  je      769h                            
0764  mov     [bx+4E0h],al                    
0768  inc     bx                              
0769  inc     di                              
076a  jmp     755h                            
076c  or      bx,bx                           
076e  je      77Dh                            
0770  xor     ax,ax                           
0772  mov     [bx+4E0h],al                    
0776  mov     ax,4E0h                         
0779  mov     dx,ds                           
077b  jmp     781h                            
077d  xor     ax,ax                           
077f  xor     dx,dx                           
0781  pop     ds                              
0782  pop     es                              
0783  pop     di                              
0784  mov     sp,bp                           
0786  pop     bp                              
0787  ret                                     

; ----- sub_0788 -----
0788  push    bp                              
0789  mov     bp,sp                           
078b  cld                                     
078c  les     di,[bp+4h]                      
078f  mov     bx,di                           
0791  xor     ax,ax                           
0793  mov     cx,0FFFFh                       
0796  repne   scasb                           
0798  not     cx                              
079a  dec     cx                              
079b  or      cx,cx                           
079d  jne     7A2h                            
079f  jmp     84Bh                            
07a2  mov     di,bx                           
07a4  mov     al,20h                          
07a6  rep     scasb                           
07a8  dec     di                              
07a9  xor     ax,ax                           
07ab  or      cx,cx                           
07ad  jne     7B2h                            
07af  jmp     84Bh                            
07b2  cmp     byte ptr es:[di],30h            
07b6  jne     7C8h                            
07b8  cmp     byte ptr es:[di+1h],78h         
07bd  je      7E6h                            
07bf  cmp     byte ptr es:[di+1h],58h         
07c4  jne     7C8h                            
07c6  jmp     7E6h                            
07c8  mov     cl,es:[di]                      
07cb  cmp     cl,30h                          
07ce  jb      84Bh                            
07d0  cmp     cl,39h                          
07d3  ja      84Bh                            
07d5  mov     bx,0Ah                          
07d8  mul     bx                              
07da  mov     bl,cl                           
07dc  sub     bl,30h                          
07df  sub     bh,bh                           
07e1  add     ax,bx                           
07e3  inc     di                              
07e4  jmp     7C8h                            
07e6  inc     di                              
07e7  inc     di                              
07e8  mov     cl,es:[di]                      
07eb  cmp     cl,30h                          
07ee  jb      809h                            
07f0  cmp     cl,39h                          
07f3  ja      809h                            
07f5  shl     ax,1                            
07f7  shl     ax,1                            
07f9  shl     ax,1                            
07fb  shl     ax,1                            
07fd  mov     bl,cl                           
07ff  sub     bl,30h                          
0802  sub     bh,bh                           
0804  add     ax,bx                           
0806  inc     di                              
0807  jmp     7E8h                            
0809  cmp     cl,41h                          
080c  jb      82Ah                            
080e  cmp     cl,46h                          
0811  ja      82Ah                            
0813  shl     ax,1                            
0815  shl     ax,1                            
0817  shl     ax,1                            
0819  shl     ax,1                            
081b  mov     bl,cl                           
081d  sub     bl,41h                          
0820  sub     bh,bh                           
0822  add     bl,0Ah                          
0825  add     ax,bx                           
0827  inc     di                              
0828  jmp     7E8h                            
082a  cmp     cl,61h                          
082d  jb      84Bh                            
082f  cmp     cl,66h                          
0832  ja      84Bh                            
0834  shl     ax,1                            
0836  shl     ax,1                            
0838  shl     ax,1                            
083a  shl     ax,1                            
083c  mov     bl,cl                           
083e  sub     bl,61h                          
0841  sub     bh,bh                           
0843  add     bl,0Ah                          
0846  add     ax,bx                           
0848  inc     di                              
0849  jmp     7E8h                            
084b  mov     sp,bp                           
084d  pop     bp                              
084e  ret                                     
084f  add     bh,bh                           
0851  call    word ptr [bx+si+53h]            
0854  push    cx                              
0855  push    dx                              
0856  push    es                              
0857  mov     ax,850h                         
085a  or      ax,ax                           
085c  jns     870h                            
085e  pop     es                              
085f  pop     dx                              
0860  pop     cx                              
0861  pop     bx                              
0862  pop     ax                              
0863  call far KERNEL.INITTASK                
0868  jmp     86Eh                            
086a  nop                                     
086b  xor     ax,ax                           
086d  retf                                    
086e  jmp     894h                            
0870  nop                                     
0871  nop                                     
0872  jmp     882h                            
0874  push    di                              
0875  call far KERNEL.GETMODULEUSAGE          
087a  dec     ax                              
087b  je      882h                            
087d  inc     ax                              
087e  add     sp,0Ah                          
0881  retf                                    
0882  pop     es                              
0883  pop     dx                              
0884  pop     cx                              
0885  pop     bx                              
0886  pop     ax                              
0887  jmp     894h                            
0889  inc     bx                              
088a  inc     sp                              
088b  inc     sp                              
088c  add     [bx+si],ax                      
088e  push    ss                              
088f  add     [4200h],bl                      
0893  add     [si-6F28h],cl                   
0897  inc     bp                              
0898  push    bp                              
0899  mov     bp,sp                           
089b  push    ds                              
089c  mov     ds,ax                           
089e  push    di                              
089f  push    si                              
08a0  mov     [532h],di                       
08a4  mov     [534h],ds                       
08a8  mov     [536h],cx                       
08ac  mov     [538h],bx                       
08b0  mov     [53Ah],si                       
08b4  jcxz    8C4h                            
08b6  push    ds                              
08b7  xor     ax,ax                           
08b9  push    ax                              
08ba  push    cx                              
08bb  call far KERNEL.LOCALINIT               
08c0  or      ax,ax                           
08c2  je      916h                            
08c4  call far KERNEL.GETVERSION              
08c9  xchg    al,ah                           
08cb  mov     [558h],ax                       
08ce  mov     ah,30h                          
08d0  test    word ptr cs:[850h],1h           
08d7  je      8E0h                            
08d9  call far KERNEL.DOS3CALL                
08de  jmp     8E2h                            
08e0  int     21h                             
08e2  mov     [55Ch],ax                       
08e5  xchg    al,ah                           
08e7  mov     [55Ah],ax                       
08ea  test    word ptr cs:[850h],1h           
08f1  jne     8F8h                            
08f3  mov     al,0h                           
08f5  mov     [55Fh],al                       
08f8  call    0A26h                           
08fb  call    0B10h                           
08fe  inc     byte ptr [53Ch]                 
0902  push    word ptr [57Ch]                 
0906  push    word ptr [57Ah]                 ; [ds] f32 here = 0
090a  push    word ptr [578h]                 ; [ds] f32 here = 0
090e  call    0A08h                           
0911  add     sp,6h                           
0914  pop     si                              
0915  pop     di                              
0916  sub     bp,2h                           
0919  mov     sp,bp                           
091b  pop     ds                              
091c  pop     bp                              
091d  dec     bp                              
091e  retf                                    
091f  mov     ax,ds                           
0921  nop                                     
0922  inc     bp                              
0923  push    bp                              
0924  mov     bp,sp                           
0926  push    ds                              
0927  mov     ds,ax                           
0929  mov     ax,1h                           
092c  sub     bp,2h                           
092f  mov     sp,bp                           
0931  pop     ds                              
0932  pop     bp                              
0933  dec     bp                              
0934  retf    0Ah                             
0937  add     [di-75h],dl                     
093a  in      al,dx                           
093b  mov     ah,39h                          
093d  jmp     944h                            

; ----- sub_093f -----
093f  push    bp                              
0940  mov     bp,sp                           
0942  mov     ah,3Bh                          
0944  mov     dx,[bp+4h]                      
0947  test    word ptr cs:[850h],1h           
094e  je      957h                            
0950  call far KERNEL.DOS3CALL                
0955  jmp     959h                            
0957  int     21h                             
0959  jmp     0B7Ah                           
095c  push    bp                              
095d  mov     bp,sp                           
095f  mov     ah,3Ah                          
0961  mov     dx,[bp+4h]                      
0964  test    word ptr cs:[850h],1h           
096b  je      974h                            
096d  call far KERNEL.DOS3CALL                
0972  jmp     976h                            
0974  int     21h                             
0976  jae     959h                            
0978  cmp     ax,10h                          
097b  jne     959h                            
097d  xchg    ax,dx                           
097e  xchg    ax,bx                           
097f  mov     al,[bx]                         
0981  inc     bx                              
0982  cmp     al,0h                           
0984  je      990h                            
0986  cmp     al,3Fh                          
0988  je      98Eh                            
098a  cmp     al,2Ah                          
098c  jne     97Fh                            
098e  mov     dl,3h                           
0990  xchg    ax,dx                           
0991  stc                                     
0992  jmp     959h                            
0994  push    bp                              
0995  mov     bp,sp                           
0997  mov     ah,19h                          
0999  test    word ptr cs:[850h],1h           
09a0  je      9A9h                            
09a2  call far KERNEL.DOS3CALL                
09a7  jmp     9ABh                            
09a9  int     21h                             
09ab  mov     ah,0h                           
09ad  inc     ax                              
09ae  pop     bp                              
09af  ret                                     

; ----- sub_09b0 -----
09b0  push    bp                              
09b1  mov     bp,sp                           
09b3  mov     dl,[bp+4h]                      
09b6  dec     dx                              
09b7  mov     ah,0Eh                          
09b9  test    word ptr cs:[850h],1h           
09c0  je      9C9h                            
09c2  call far KERNEL.DOS3CALL                
09c7  jmp     9CBh                            
09c9  int     21h                             
09cb  mov     ah,19h                          
09cd  test    word ptr cs:[850h],1h           
09d4  je      9DDh                            
09d6  call far KERNEL.DOS3CALL                
09db  jmp     9DFh                            
09dd  int     21h                             
09df  inc     ax                              
09e0  cmp     al,[bp+4h]                      
09e3  mov     ax,0FFFFh                       
09e6  jne     9E9h                            
09e8  inc     ax                              
09e9  pop     bp                              
09ea  ret                                     
09eb  add     [bp+di+59Ch],bh                 
09ef  mov     word ptr [bx],10EAh             
09f3  mov     word ptr [bx+2h],0CDEh          
09f8  mov     word ptr [bx+4h],0C36h          
09fd  mov     word ptr [bx+6h],0BC8h          
0a02  mov     word ptr [bx+8h],0CB0h          
0a07  ret                                     

; ----- sub_0a08 -----
0a08  push    bp                              
0a09  mov     bp,sp                           
0a0b  push    word ptr [532h]                 ; [ds] f32 here = 0
0a0f  push    word ptr [534h]                 ; [ds] f32 here = 0
0a13  push    word ptr [536h]                 ; [ds] f32 here = 0
0a17  push    word ptr [53Ah]                 
0a1b  push    word ptr [538h]                 ; [ds] f32 here = 0
0a1f  call far sub_7080                       
0a24  pop     bp                              
0a25  ret                                     

; ----- sub_0a26 -----
0a26  mov     cx,[798h]                       
0a2a  jcxz    0A40h                           
0a2c  xor     si,si                           
0a2e  mov     ax,[79Ah]                       
0a31  mov     dx,[79Ch]                       
0a35  xor     bx,bx                           
0a37  call    far ptr  [796h]                 
0a3b  jae     0A40h                           
0a3d  jmp     121Ch                           
0a40  mov     si,7A4h                         
0a43  mov     di,7A4h                         
0a46  call    0AE7h                           
0a49  mov     si,7A2h                         
0a4c  mov     di,7A4h                         
0a4f  call    0AD8h                           
0a52  mov     si,7A4h                         
0a55  mov     di,7A4h                         
0a58  call    0AE7h                           
0a5b  ret                                     
0a5c  push    bp                              
0a5d  mov     bp,sp                           
0a5f  push    si                              
0a60  push    di                              
0a61  mov     cx,100h                         
0a64  jmp     0A6Eh                           
0a66  push    bp                              
0a67  mov     bp,sp                           
0a69  push    si                              
0a6a  push    di                              
0a6b  mov     cx,101h                         
0a6e  mov     [585h],ch                       
0a72  push    cx                              
0a73  or      cl,cl                           
0a75  jne     0A92h                           
0a77  mov     si,0B30h                        
0a7a  mov     di,0B30h                        
0a7d  call    0AD8h                           
0a80  mov     si,0B30h                        
0a83  mov     di,0B30h                        
0a86  call    0AE7h                           
0a89  mov     si,7A4h                         
0a8c  mov     di,7A4h                         
0a8f  call    0AD8h                           
0a92  mov     si,7A4h                         
0a95  mov     di,7A4h                         
0a98  call    0AD8h                           
0a9b  mov     si,7A4h                         
0a9e  mov     di,7A4h                         
0aa1  call    0AE7h                           
0aa4  call    125Eh                           
0aa7  call    125Eh                           
0aaa  pop     ax                              
0aab  pop     di                              
0aac  pop     si                              
0aad  pop     bp                              
0aae  ret                                     
0aaf  mov     cx,[798h]                       
0ab3  jcxz    0ABCh                           
0ab5  mov     bx,2h                           
0ab8  call    far ptr  [796h]                 
0abc  push    ds                              
0abd  lds     dx,[546h]                       
0ac1  mov     ax,2500h                        
0ac4  test    word ptr cs:[850h],1h           
0acb  je      0AD4h                           
0acd  call far KERNEL.DOS3CALL                
0ad2  jmp     0AD6h                           
0ad4  int     21h                             
0ad6  pop     ds                              
0ad7  ret                                     

; ----- sub_0ad8 -----
0ad8  cmp     si,di                           
0ada  jae     0AE6h                           
0adc  dec     di                              
0add  dec     di                              
0ade  mov     cx,[di]                         
0ae0  jcxz    0AD8h                           
0ae2  call    cx                              
0ae4  jmp     0AD8h                           
0ae6  ret                                     

; ----- sub_0ae7 -----
0ae7  cmp     si,di                           
0ae9  jae     0AF9h                           
0aeb  sub     di,4h                           
0aee  mov     ax,[di]                         
0af0  or      ax,[di+2h]                      
0af3  je      0AE7h                           
0af5  call    far ptr  [di]                   
0af7  jmp     0AE7h                           
0af9  ret                                     

; ----- sub_0afa -----
0afa  push    bp                              
0afb  mov     bp,sp                           
0afd  mov     ax,0FCh                         
0b00  push    ax                              
0b01  call    11C9h                           
0b04  mov     ax,0FFh                         
0b07  push    ax                              
0b08  call    11C9h                           
0b0b  mov     sp,bp                           
0b0d  pop     bp                              
0b0e  ret                                     
0b0f  add     [bx+si],al                      

; ----- sub_0b10 -----
0b10  push    bp                              
0b11  mov     bp,sp                           
0b13  push    ds                              
0b14  call far KERNEL.GETDOSENVIRONMENT       
0b19  or      ax,ax                           
0b1b  je      0B20h                           
0b1d  mov     dx,0h                           
0b20  mov     bx,dx                           
0b22  mov     es,dx                           
0b24  xor     ax,ax                           
0b26  xor     si,si                           
0b28  xor     di,di                           
0b2a  mov     cx,0FFFFh                       
0b2d  or      bx,bx                           
0b2f  je      0B3Fh                           
0b31  cmp     byte ptr es:[0h],0h             
0b37  je      0B3Fh                           
0b39  repne   scasb                           
0b3b  inc     si                              
0b3c  scasb                                   
0b3d  jne     0B39h                           
0b3f  mov     ax,di                           
0b41  inc     ax                              
0b42  and     al,0FEh                         
0b44  inc     si                              
0b45  mov     di,si                           
0b47  shl     si,1                            
0b49  mov     cx,9h                           
0b4c  call    1222h                           
0b4f  push    ax                              
0b50  mov     ax,si                           
0b52  call    1222h                           
0b55  mov     [57Ch],ax                       
0b58  push    es                              
0b59  push    ds                              
0b5a  pop     es                              
0b5b  pop     ds                              
0b5c  mov     cx,di                           
0b5e  mov     bx,ax                           
0b60  xor     si,si                           
0b62  pop     di                              
0b63  dec     cx                              
0b64  jcxz    0B73h                           
0b66  mov     es:[bx],di                      
0b69  inc     bx                              
0b6a  inc     bx                              
0b6b  lodsb                                   
0b6c  stosb                                   
0b6d  or      al,al                           
0b6f  jne     0B6Bh                           
0b71  loop    0B66h                           
0b73  mov     es:[bx],cx                      
0b76  pop     ds                              
0b77  pop     bp                              
0b78  ret                                     
0b79  add     [bp+si+15h],dh                  
0b7c  xor     ax,ax                           
0b7e  mov     sp,bp                           
0b80  pop     bp                              
0b81  ret                                     
0b82  jae     0B7Ch                           
0b84  push    ax                              
0b85  call    0BA2h                           
0b88  pop     ax                              
0b89  xor     ah,ah                           
0b8b  mov     sp,bp                           
0b8d  pop     bp                              
0b8e  ret                                     
0b8f  jae     0B98h                           
0b91  call    0BA2h                           
0b94  mov     ax,0FFFFh                       
0b97  cwd                                     
0b98  mov     sp,bp                           
0b9a  pop     bp                              
0b9b  ret                                     
0b9c  xor     ah,ah                           
0b9e  call    0BA2h                           
0ba1  ret                                     

; ----- sub_0ba2 -----
0ba2  mov     [560h],al                       
0ba5  or      ah,ah                           
0ba7  jne     0BC4h                           
0ba9  cmp     al,22h                          
0bab  jae     0BB9h                           
0bad  cmp     al,20h                          
0baf  jb      0BB5h                           
0bb1  mov     al,5h                           
0bb3  jmp     0BBBh                           
0bb5  cmp     al,13h                          
0bb7  jbe     0BBBh                           
0bb9  mov     al,13h                          
0bbb  mov     bx,588h                         
0bbe  xlat                                    
0bbf  cbw                                     
0bc0  mov     [554h],ax                       
0bc3  ret                                     
0bc4  mov     al,ah                           
0bc6  jmp     0BBFh                           
0bc8  push    bp                              
0bc9  mov     bp,sp                           
0bcb  sub     sp,0Ah                          
0bce  les     bx,[bp+4h]                      
0bd1  mov     al,es:[bx]                      
0bd4  cbw                                     
0bd5  mov     bx,ax                           
0bd7  test    byte ptr [bx+5BDh],1h           
0bdc  je      0BE4h                           
0bde  lea     ax,[bx+20h]                     
0be1  jmp     0BEBh                           
0be3  nop                                     
0be4  mov     bx,[bp+4h]                      
0be7  mov     al,es:[bx]                      
0bea  cbw                                     
0beb  cmp     ax,65h                          
0bee  je      0C03h                           
0bf0  inc     word ptr [bp+4h]                
0bf3  mov     bx,[bp+4h]                      
0bf6  mov     al,es:[bx]                      
0bf9  cbw                                     
0bfa  mov     bx,ax                           
0bfc  test    byte ptr [bx+5BDh],4h           
0c01  jne     0BF0h                           
0c03  mov     bx,[bp+4h]                      
0c06  mov     al,es:[bx]                      
0c09  mov     [bp-2h],al                      
0c0c  mov     byte ptr es:[bx],2Eh            
0c10  inc     word ptr [bp+4h]                
0c13  mov     bx,[bp+4h]                      
0c16  mov     al,es:[bx]                      
0c19  mov     [bp-4h],al                      
0c1c  mov     al,[bp-2h]                      
0c1f  mov     es:[bx],al                      
0c22  mov     al,[bp-4h]                      
0c25  mov     [bp-2h],al                      
0c28  inc     word ptr [bp+4h]                
0c2b  cmp     byte ptr es:[bx],0h             
0c2f  jne     0C13h                           
0c31  mov     sp,bp                           
0c33  pop     bp                              
0c34  ret                                     
0c35  nop                                     
0c36  push    bp                              
0c37  mov     bp,sp                           
0c39  sub     sp,8h                           
0c3c  jmp     0C47h                           
0c3e  cmp     byte ptr es:[bx],2Eh            
0c42  je      0C50h                           
0c44  inc     word ptr [bp+4h]                
0c47  les     bx,[bp+4h]                      
0c4a  cmp     byte ptr es:[bx],0h             
0c4e  jne     0C3Eh                           
0c50  inc     word ptr [bp+4h]                
0c53  cmp     byte ptr es:[bx],0h             
0c57  je      0CABh                           
0c59  jmp     0C6Bh                           
0c5b  nop                                     
0c5c  cmp     byte ptr es:[bx],65h            
0c60  je      0C74h                           
0c62  cmp     byte ptr es:[bx],45h            
0c66  je      0C74h                           
0c68  inc     word ptr [bp+4h]                
0c6b  mov     bx,[bp+4h]                      
0c6e  cmp     byte ptr es:[bx],0h             
0c72  jne     0C5Ch                           
0c74  dec     word ptr [bp+4h]                
0c77  mov     [bp-4h],bx                      
0c7a  mov     [bp-2h],es                      
0c7d  jmp     0C83h                           
0c7f  nop                                     
0c80  dec     word ptr [bp+4h]                
0c83  mov     bx,[bp+4h]                      
0c86  cmp     byte ptr es:[bx],30h            
0c8a  je      0C80h                           
0c8c  cmp     byte ptr es:[bx],2Eh            
0c90  jne     0C95h                           
0c92  dec     word ptr [bp+4h]                
0c95  les     bx,[bp-4h]                      
0c98  inc     word ptr [bp-4h]                
0c9b  mov     al,es:[bx]                      
0c9e  inc     word ptr [bp+4h]                
0ca1  les     bx,[bp+4h]                      
0ca4  mov     es:[bx],al                      
0ca7  or      al,al                           
0ca9  jne     0C95h                           
0cab  mov     sp,bp                           
0cad  pop     bp                              
0cae  ret                                     
0caf  nop                                     
0cb0  push    bp                              
0cb1  mov     bp,sp                           
0cb3  sub     sp,2h                           
0cb6  mov     bx,[bp+4h]                      
0cb9  wait                                    
0cba  fld     qword ptr [bx]                  
0cbc  wait                                    
0cbd  fcom    qword ptr [7A4h]                ; [ds] = 0
0cc1  wait                                    
0cc2  fstp    st(0)                           
0cc4  wait                                    
0cc5  fstsw   word ptr [bp-2h]                
0cc8  nop                                     
0cc9  wait                                    
0cca  mov     ah,[bp-1h]                      
0ccd  sahf                                    
0cce  jb      0CD8h                           
0cd0  mov     ax,1h                           
0cd3  mov     sp,bp                           
0cd5  pop     bp                              
0cd6  ret                                     
0cd7  nop                                     
0cd8  xor     ax,ax                           
0cda  mov     sp,bp                           
0cdc  pop     bp                              
0cdd  ret                                     
0cde  push    bp                              
0cdf  mov     bp,sp                           
0ce1  push    di                              
0ce2  push    si                              
0ce3  cmp     word ptr [bp+4h],0h             
0ce7  je      0D02h                           
0ce9  push    word ptr [bp+0Ah]               
0cec  call    1260h                           
0cef  add     sp,2h                           
0cf2  mov     si,ax                           
0cf4  les     di,[bp+6h]                      
0cf7  movsw                                   
0cf8  movsw                                   
0cf9  movsw                                   
0cfa  movsw                                   
0cfb  pop     si                              
0cfc  pop     di                              
0cfd  mov     sp,bp                           
0cff  pop     bp                              
0d00  ret                                     
0d01  nop                                     
0d02  push    word ptr [bp+0Ah]               
0d05  call    1260h                           
0d08  add     sp,2h                           
0d0b  mov     bx,ax                           
0d0d  wait                                    
0d0e  fld     qword ptr [bx]                  
0d10  les     bx,[bp+6h]                      
0d13  wait                                    
0d14  fstp    dword ptr es:[bx]               
0d17  nop                                     
0d18  wait                                    
0d19  pop     si                              
0d1a  pop     di                              
0d1b  mov     sp,bp                           
0d1d  pop     bp                              
0d1e  ret                                     
0d1f  nop                                     

; ----- sub_0d20 -----
0d20  push    bp                              
0d21  mov     bp,sp                           
0d23  sub     sp,8h                           
0d26  push    di                              
0d27  push    si                              
0d28  cmp     byte ptr [5B0h],0h              
0d2d  je      0D66h                           
0d2f  mov     ax,[0B1Eh]                      
0d32  mov     [bp-2h],ax                      
0d35  mov     bx,ax                           
0d37  cmp     word ptr [bx],2Dh               
0d3a  jne     0D42h                           
0d3c  mov     ax,1h                           
0d3f  jmp     0D44h                           
0d41  nop                                     
0d42  xor     ax,ax                           
0d44  add     ax,[bp+8h]                      
0d47  mov     dx,[bp+0Ah]                     
0d4a  mov     [bp-6h],ax                      
0d4d  mov     [bp-4h],dx                      
0d50  push    dx                              
0d51  push    ax                              
0d52  cmp     word ptr [bp+0Ch],0h            
0d56  jle     0D5Eh                           
0d58  mov     ax,1h                           
0d5b  jmp     0D60h                           
0d5d  nop                                     
0d5e  xor     ax,ax                           
0d60  push    ax                              
0d61  call    1148h                           
0d64  jmp     0DB7h                           
0d66  les     bx,[bp+4h]                      
0d69  push    word ptr es:[bx+6h]             
0d6d  push    word ptr es:[bx+4h]             
0d71  push    word ptr es:[bx+2h]             
0d75  push    word ptr es:[bx]                
0d78  call    149Eh                           
0d7b  add     sp,8h                           
0d7e  mov     [bp-2h],ax                      
0d81  push    ax                              
0d82  mov     ax,[bp+0Ch]                     
0d85  inc     ax                              
0d86  push    ax                              
0d87  mov     bx,[bp-2h]                      
0d8a  cmp     word ptr [bx],2Dh               
0d8d  jne     0D94h                           
0d8f  mov     ax,1h                           
0d92  jmp     0D96h                           
0d94  xor     ax,ax                           
0d96  mov     [bp-8h],ax                      
0d99  cmp     word ptr [bp+0Ch],0h            
0d9d  jle     0DA4h                           
0d9f  mov     ax,1h                           
0da2  jmp     0DA6h                           
0da4  xor     ax,ax                           
0da6  add     ax,[bp-8h]                      
0da9  add     ax,[bp+8h]                      
0dac  mov     dx,[bp+0Ah]                     
0daf  push    dx                              
0db0  push    ax                              
0db1  call    12A2h                           
0db4  add     sp,8h                           
0db7  mov     ax,[bp+8h]                      
0dba  mov     dx,[bp+0Ah]                     
0dbd  mov     [bp-6h],ax                      
0dc0  mov     [bp-4h],dx                      
0dc3  mov     bx,[bp-2h]                      
0dc6  cmp     word ptr [bx],2Dh               
0dc9  jne     0DD7h                           
0dcb  mov     bx,ax                           
0dcd  mov     es,dx                           
0dcf  mov     byte ptr es:[bx],2Dh            
0dd3  inc     ax                              
0dd4  mov     [bp-6h],ax                      
0dd7  cmp     word ptr [bp+0Ch],0h            
0ddb  jle     0DEFh                           
0ddd  les     bx,[bp-6h]                      
0de0  mov     al,es:[bx+1h]                   
0de4  mov     es:[bx],al                      
0de7  inc     bx                              
0de8  mov     [bp-6h],bx                      
0deb  mov     byte ptr es:[bx],2Eh            
0def  mov     ax,5B5h                         
0df2  push    ds                              
0df3  push    ax                              
0df4  cmp     byte ptr [5B0h],1h              
0df9  sbb     ax,ax                           
0dfb  neg     ax                              
0dfd  add     ax,[bp-6h]                      
0e00  mov     dx,[bp-4h]                      
0e03  add     ax,[bp+0Ch]                     
0e06  push    dx                              
0e07  push    ax                              
0e08  call far sub_1350                       
0e0d  add     sp,8h                           
0e10  mov     [bp-6h],ax                      
0e13  mov     [bp-4h],dx                      
0e16  cmp     word ptr [bp+0Eh],0h            
0e1a  je      0E23h                           
0e1c  les     bx,[bp-6h]                      
0e1f  mov     byte ptr es:[bx],45h            
0e23  inc     word ptr [bp-6h]                
0e26  mov     bx,[bp-2h]                      
0e29  mov     di,[bx+6h]                      
0e2c  cmp     byte ptr [di],30h               
0e2f  je      0E89h                           
0e31  mov     si,[bx+2h]                      
0e34  dec     si                              
0e35  jns     0E44h                           
0e37  mov     ax,si                           
0e39  neg     ax                              
0e3b  mov     si,ax                           
0e3d  les     bx,[bp-6h]                      
0e40  mov     byte ptr es:[bx],2Dh            
0e44  inc     word ptr [bp-6h]                
0e47  cmp     si,64h                          
0e4a  jl      0E61h                           
0e4c  mov     ax,si                           
0e4e  mov     cx,64h                          
0e51  cwd                                     
0e52  idiv    cx                              
0e54  les     bx,[bp-6h]                      
0e57  add     es:[bx],al                      
0e5a  mov     ax,si                           
0e5c  cwd                                     
0e5d  idiv    cx                              
0e5f  mov     si,dx                           
0e61  inc     word ptr [bp-6h]                
0e64  cmp     si,0Ah                          
0e67  jl      0E7Eh                           
0e69  mov     ax,si                           
0e6b  mov     cx,0Ah                          
0e6e  cwd                                     
0e6f  idiv    cx                              
0e71  les     bx,[bp-6h]                      
0e74  add     es:[bx],al                      
0e77  mov     ax,si                           
0e79  cwd                                     
0e7a  idiv    cx                              
0e7c  mov     si,dx                           
0e7e  mov     ax,si                           
0e80  inc     word ptr [bp-6h]                
0e83  les     bx,[bp-6h]                      
0e86  add     es:[bx],al                      
0e89  mov     ax,[bp+8h]                      
0e8c  mov     dx,[bp+0Ah]                     
0e8f  pop     si                              
0e90  pop     di                              
0e91  mov     sp,bp                           
0e93  pop     bp                              
0e94  ret                                     
0e95  nop                                     

; ----- sub_0e96 -----
0e96  push    bp                              
0e97  mov     bp,sp                           
0e99  sub     sp,4h                           
0e9c  mov     byte ptr [5B0h],1h              
0ea1  push    word ptr [bp+0Eh]               
0ea4  push    word ptr [bp+0Ch]               
0ea7  push    word ptr [bp+0Ah]               
0eaa  push    word ptr [bp+8h]                
0ead  push    word ptr [bp+6h]                
0eb0  push    word ptr [bp+4h]                
0eb3  call    0D20h                           
0eb6  mov     byte ptr [5B0h],0h              
0ebb  mov     sp,bp                           
0ebd  pop     bp                              
0ebe  ret                                     
0ebf  nop                                     

; ----- sub_0ec0 -----
0ec0  push    bp                              
0ec1  mov     bp,sp                           
0ec3  sub     sp,0Ch                          
0ec6  push    si                              
0ec7  cmp     byte ptr [5B0h],0h              
0ecc  je      0F0Ah                           
0ece  mov     ax,[0B1Eh]                      
0ed1  mov     [bp-2h],ax                      
0ed4  mov     bx,ax                           
0ed6  cmp     word ptr [bx],2Dh               
0ed9  jne     0EE0h                           
0edb  mov     ax,1h                           
0ede  jmp     0EE2h                           
0ee0  xor     ax,ax                           
0ee2  add     ax,[bp+8h]                      
0ee5  mov     dx,[bp+0Ah]                     
0ee8  mov     [bp-6h],ax                      
0eeb  mov     [bp-4h],dx                      
0eee  mov     cx,[5B2h]                       
0ef2  cmp     [bp+0Ch],cx                     
0ef5  jne     0F4Ah                           
0ef7  mov     es,dx                           
0ef9  mov     bx,ax                           
0efb  mov     si,cx                           
0efd  mov     byte ptr es:[bx+si],30h         
0f01  add     bx,cx                           
0f03  inc     bx                              
0f04  mov     byte ptr es:[bx],0h             
0f08  jmp     0F4Ah                           
0f0a  les     bx,[bp+4h]                      
0f0d  push    word ptr es:[bx+6h]             
0f11  push    word ptr es:[bx+4h]             
0f15  push    word ptr es:[bx+2h]             
0f19  push    word ptr es:[bx]                
0f1c  call    149Eh                           
0f1f  add     sp,8h                           
0f22  mov     [bp-2h],ax                      
0f25  mov     bx,ax                           
0f27  push    ax                              
0f28  mov     ax,[bx+2h]                      
0f2b  add     ax,[bp+0Ch]                     
0f2e  push    ax                              
0f2f  cmp     word ptr [bx],2Dh               
0f32  jne     0F3Ah                           
0f34  mov     ax,1h                           
0f37  jmp     0F3Ch                           
0f39  nop                                     
0f3a  xor     ax,ax                           
0f3c  add     ax,[bp+8h]                      
0f3f  mov     dx,[bp+0Ah]                     
0f42  push    dx                              
0f43  push    ax                              
0f44  call    12A2h                           
0f47  add     sp,8h                           
0f4a  mov     ax,[bp+8h]                      
0f4d  mov     dx,[bp+0Ah]                     
0f50  mov     [bp-6h],ax                      
0f53  mov     [bp-4h],dx                      
0f56  mov     bx,[bp-2h]                      
0f59  cmp     word ptr [bx],2Dh               
0f5c  jne     0F6Ah                           
0f5e  mov     bx,ax                           
0f60  mov     es,dx                           
0f62  mov     byte ptr es:[bx],2Dh            
0f66  inc     ax                              
0f67  mov     [bp-6h],ax                      
0f6a  mov     bx,[bp-2h]                      
0f6d  cmp     word ptr [bx+2h],0h             
0f71  jg      0F8Ch                           
0f73  push    word ptr [bp-4h]                
0f76  push    word ptr [bp-6h]                
0f79  mov     ax,1h                           
0f7c  push    ax                              
0f7d  call    1148h                           
0f80  les     bx,[bp-6h]                      
0f83  inc     word ptr [bp-6h]                
0f86  mov     byte ptr es:[bx],30h            
0f8a  jmp     0F92h                           
0f8c  mov     ax,[bx+2h]                      
0f8f  add     [bp-6h],ax                      
0f92  cmp     word ptr [bp+0Ch],0h            
0f96  jle     0FF5h                           
0f98  push    word ptr [bp-4h]                
0f9b  push    word ptr [bp-6h]                
0f9e  mov     ax,1h                           
0fa1  push    ax                              
0fa2  call    1148h                           
0fa5  les     bx,[bp-6h]                      
0fa8  inc     word ptr [bp-6h]                
0fab  mov     byte ptr es:[bx],2Eh            
0faf  mov     bx,[bp-2h]                      
0fb2  cmp     word ptr [bx+2h],0h             
0fb6  jge     0FF5h                           
0fb8  cmp     byte ptr [5B0h],0h              
0fbd  je      0FC6h                           
0fbf  mov     ax,[bx+2h]                      
0fc2  neg     ax                              
0fc4  jmp     0FD3h                           
0fc6  mov     ax,[bx+2h]                      
0fc9  neg     ax                              
0fcb  cmp     ax,[bp+0Ch]                     
0fce  jle     0FD3h                           
0fd0  mov     ax,[bp+0Ch]                     
0fd3  mov     [bp+0Ch],ax                     
0fd6  push    word ptr [bp-4h]                
0fd9  push    word ptr [bp-6h]                
0fdc  push    ax                              
0fdd  call    1148h                           
0fe0  push    word ptr [bp+0Ch]               
0fe3  mov     ax,30h                          
0fe6  push    ax                              
0fe7  push    word ptr [bp-4h]                
0fea  push    word ptr [bp-6h]                
0fed  call far sub_138c                       
0ff2  add     sp,8h                           
0ff5  mov     ax,[bp+8h]                      
0ff8  mov     dx,[bp+0Ah]                     
0ffb  pop     si                              
0ffc  mov     sp,bp                           
0ffe  pop     bp                              
0fff  ret                                     

; ----- sub_1000 -----
1000  push    bp                              
1001  mov     bp,sp                           
1003  sub     sp,4h                           
1006  mov     byte ptr [5B0h],1h              
100b  push    word ptr [bp+0Ch]               
100e  push    word ptr [bp+0Ah]               
1011  push    word ptr [bp+8h]                
1014  push    word ptr [bp+6h]                
1017  push    word ptr [bp+4h]                
101a  call    0EC0h                           
101d  mov     byte ptr [5B0h],0h              
1022  mov     sp,bp                           
1024  pop     bp                              
1025  ret                                     

; ----- sub_1026 -----
1026  push    bp                              
1027  mov     bp,sp                           
1029  sub     sp,0Ah                          
102c  les     bx,[bp+4h]                      
102f  push    word ptr es:[bx+6h]             
1033  push    word ptr es:[bx+4h]             
1037  push    word ptr es:[bx+2h]             
103b  push    word ptr es:[bx]                
103e  call    149Eh                           
1041  add     sp,8h                           
1044  mov     bx,ax                           
1046  mov     [0B1Eh],ax                      
1049  mov     ax,[bx+2h]                      
104c  dec     ax                              
104d  mov     [5B2h],ax                       
1050  cmp     word ptr [bx],2Dh               
1053  jne     105Ah                           
1055  mov     ax,1h                           
1058  jmp     105Ch                           
105a  xor     ax,ax                           
105c  add     ax,[bp+8h]                      
105f  mov     dx,[bp+0Ah]                     
1062  mov     [bp-4h],ax                      
1065  mov     [bp-2h],dx                      
1068  push    bx                              
1069  push    word ptr [bp+0Ch]               
106c  push    dx                              
106d  push    ax                              
106e  call    12A2h                           
1071  mov     bx,[0B1Eh]                      
1075  add     sp,8h                           
1078  mov     ax,[bx+2h]                      
107b  dec     ax                              
107c  mov     [bp-6h],ax                      
107f  cmp     ax,[5B2h]                       
1083  jle     108Ah                           
1085  mov     al,1h                           
1087  jmp     108Ch                           
1089  nop                                     
108a  xor     al,al                           
108c  mov     [5B4h],al                       
108f  mov     ax,[bp-6h]                      
1092  mov     [5B2h],ax                       
1095  cmp     ax,0FFFCh                       
1098  jl      109Fh                           
109a  cmp     ax,[bp+0Ch]                     
109d  jl      10B8h                           
109f  push    word ptr [bp+0Eh]               
10a2  push    word ptr [bp+0Ch]               
10a5  push    word ptr [bp+0Ah]               
10a8  push    word ptr [bp+8h]                
10ab  push    word ptr [bp+6h]                
10ae  push    word ptr [bp+4h]                
10b1  call    0E96h                           
10b4  mov     sp,bp                           
10b6  pop     bp                              
10b7  ret                                     
10b8  cmp     byte ptr [5B4h],0h              
10bd  je      10D3h                           
10bf  les     bx,[bp-4h]                      
10c2  inc     word ptr [bp-4h]                
10c5  cmp     byte ptr es:[bx],0h             
10c9  jne     10BFh                           
10cb  mov     bx,[bp-4h]                      
10ce  mov     byte ptr es:[bx-2h],0h          
10d3  push    word ptr [bp+0Ch]               
10d6  push    word ptr [bp+0Ah]               
10d9  push    word ptr [bp+8h]                
10dc  push    word ptr [bp+6h]                
10df  push    word ptr [bp+4h]                
10e2  call    1000h                           
10e5  mov     sp,bp                           
10e7  pop     bp                              
10e8  ret                                     
10e9  nop                                     
10ea  push    bp                              
10eb  mov     bp,sp                           
10ed  cmp     word ptr [bp+0Ch],65h           
10f1  je      10F9h                           
10f3  cmp     word ptr [bp+0Ch],45h           
10f7  jne     1112h                           
10f9  push    word ptr [bp+10h]               
10fc  push    word ptr [bp+0Eh]               
10ff  push    word ptr [bp+0Ah]               
1102  push    word ptr [bp+8h]                
1105  push    word ptr [bp+6h]                
1108  push    word ptr [bp+4h]                
110b  call    0D20h                           
110e  mov     sp,bp                           
1110  pop     bp                              
1111  ret                                     
1112  cmp     word ptr [bp+0Ch],66h           
1116  jne     112Eh                           
1118  push    word ptr [bp+0Eh]               
111b  push    word ptr [bp+0Ah]               
111e  push    word ptr [bp+8h]                
1121  push    word ptr [bp+6h]                
1124  push    word ptr [bp+4h]                
1127  call    0EC0h                           
112a  mov     sp,bp                           
112c  pop     bp                              
112d  ret                                     
112e  push    word ptr [bp+10h]               
1131  push    word ptr [bp+0Eh]               
1134  push    word ptr [bp+0Ah]               
1137  push    word ptr [bp+8h]                
113a  push    word ptr [bp+6h]                
113d  push    word ptr [bp+4h]                
1140  call    1026h                           
1143  mov     sp,bp                           
1145  pop     bp                              
1146  ret                                     
1147  nop                                     

; ----- sub_1148 -----
1148  push    bp                              
1149  mov     bp,sp                           
114b  cmp     word ptr [bp+4h],0h             
114f  je      1175h                           
1151  push    word ptr [bp+8h]                
1154  push    word ptr [bp+6h]                
1157  call far sub_1336                       
115c  add     sp,4h                           
115f  inc     ax                              
1160  push    ax                              
1161  push    word ptr [bp+8h]                
1164  mov     ax,[bp+6h]                      
1167  push    ax                              
1168  mov     dx,[bp+8h]                      
116b  add     ax,[bp+4h]                      
116e  push    dx                              
116f  push    ax                              
1170  call far sub_13d4                       
1175  mov     sp,bp                           
1177  pop     bp                              
1178  ret     6h                              
117b  nop                                     
117c  inc     bp                              
117d  push    bp                              
117e  mov     bp,sp                           
1180  push    ds                              
1181  push    es                              
1182  push    ax                              
1183  push    bx                              
1184  push    cx                              
1185  push    dx                              
1186  xor     ah,ah                           
1188  add     ax,-1Ch                         
118b  push    ax                              
118c  call    124Eh                           
118f  mov     ds,ax                           
1191  pop     ax                              
1192  call    11DCh                           
1195  pop     dx                              
1196  pop     cx                              
1197  pop     bx                              
1198  pop     ax                              
1199  pop     es                              
119a  pop     ds                              
119b  pop     bp                              
119c  dec     bp                              
119d  retf                                    

; ----- sub_119e -----
119e  push    bp                              
119f  mov     bp,sp                           
11a1  push    si                              
11a2  push    di                              
11a3  push    ds                              
11a4  pop     es                              
11a5  mov     dx,[bp+4h]                      
11a8  mov     si,7B4h                         
11ab  lodsw                                   
11ac  cmp     ax,dx                           
11ae  je      11C0h                           
11b0  inc     ax                              
11b1  xchg    ax,si                           
11b2  je      11C0h                           
11b4  xchg    ax,di                           
11b5  xor     ax,ax                           
11b7  mov     cx,0FFFFh                       
11ba  repne   scasb                           
11bc  mov     si,di                           
11be  jmp     11ABh                           
11c0  xchg    ax,si                           
11c1  pop     di                              
11c2  pop     si                              
11c3  mov     sp,bp                           
11c5  pop     bp                              
11c6  ret     2h                              

; ----- sub_11c9 -----
11c9  push    bp                              
11ca  mov     bp,sp                           
11cc  push    di                              
11cd  pop     di                              
11ce  mov     sp,bp                           
11d0  pop     bp                              
11d1  ret     2h                              
11d4  call    124Eh                           
11d7  mov     ds,ax                           
11d9  mov     ax,3h                           

; ----- sub_11dc -----
11dc  push    ax                              
11dd  push    ax                              
11de  call    0AFAh                           
11e1  call    11C9h                           
11e4  call    119Eh                           
11e7  xor     bx,bx                           
11e9  or      ax,ax                           
11eb  je      120Ah                           
11ed  mov     di,ax                           
11ef  mov     ax,9h                           
11f2  cmp     byte ptr [di],4Dh               
11f5  jne     11FAh                           
11f7  mov     ax,0Fh                          
11fa  add     di,ax                           
11fc  push    di                              
11fd  push    ds                              
11fe  pop     es                              
11ff  mov     al,0Dh                          
1201  mov     cx,22h                          
1204  repne   scasb                           
1206  mov     [di-1h],bl                      
1209  pop     ax                              
120a  push    bx                              
120b  push    ds                              
120c  push    ax                              
120d  call far KERNEL.FATALAPPEXIT            
1212  mov     ax,0FFh                         
1215  push    ax                              
1216  call far KERNEL.FATALEXIT               
121b  add     [bx+si+2h],bh                   
121f  jmp     11DCh                           

; ----- sub_1222 -----
1222  push    bp                              
1223  mov     bp,sp                           
1225  push    bx                              
1226  push    es                              
1227  push    cx                              
1228  mov     cx,1000h                        
122b  xchg    cx,[6E2h]                       
122f  push    cx                              
1230  push    ax                              
1231  call    1834h                           
1234  pop     bx                              
1235  pop     [6E2h]                          
1239  pop     cx                              
123a  mov     dx,ds                           
123c  or      ax,ax                           
123e  je      1244h                           
1240  pop     es                              
1241  pop     bx                              
1242  jmp     1249h                           
1244  mov     ax,cx                           
1246  jmp     11DCh                           
1249  mov     sp,bp                           
124b  pop     bp                              
124c  ret                                     
124d  add     [bx+si],al                      

; ----- sub_124e -----
124e  cmp     byte ptr cs:[15FAh],0B8h        
1254  je      1259h                           
1256  mov     ax,ss                           
1258  ret                                     
1259  mov     ax,cs:[15FBh]                   
125d  ret                                     

; ----- sub_125e -----
125e  ret                                     
125f  add     [bx+si],al                      

; ----- sub_1260 -----
1260  push    bp                              
1261  mov     bp,sp                           
1263  push    di                              
1264  push    si                              
1265  mov     si,[bp+4h]                      
1268  jmp     126Bh                           
126a  inc     si                              
126b  mov     al,[si]                         
126d  cbw                                     
126e  mov     bx,ax                           
1270  test    byte ptr [bx+5BDh],8h           
1275  jne     126Ah                           
1277  xor     ax,ax                           
1279  push    ax                              
127a  push    ax                              
127b  push    si                              
127c  call    160Eh                           
127f  add     sp,2h                           
1282  push    ax                              
1283  push    si                              
1284  call    17DEh                           
1287  add     sp,8h                           
128a  mov     bx,ax                           
128c  mov     ax,0B48h                        
128f  push    si                              
1290  mov     di,ax                           
1292  lea     si,[bx+8h]                      
1295  push    ds                              
1296  pop     es                              
1297  movsw                                   
1298  movsw                                   
1299  movsw                                   
129a  movsw                                   
129b  pop     si                              
129c  pop     si                              
129d  pop     di                              
129e  mov     sp,bp                           
12a0  pop     bp                              
12a1  ret                                     

; ----- sub_12a2 -----
12a2  push    bp                              
12a3  mov     bp,sp                           
12a5  sub     sp,6h                           
12a8  push    si                              
12a9  mov     bx,[bp+0Ah]                     
12ac  mov     si,[bx+6h]                      
12af  les     bx,[bp+4h]                      
12b2  mov     byte ptr es:[bx],30h            
12b6  lea     ax,[bx+1h]                      
12b9  mov     [bp-4h],ax                      
12bc  mov     [bp-2h],es                      
12bf  jmp     12E4h                           
12c1  nop                                     
12c2  cmp     byte ptr [si],0h                
12c5  je      12D0h                           
12c7  mov     al,[si]                         
12c9  cbw                                     
12ca  mov     [bp-6h],ax                      
12cd  inc     si                              
12ce  jmp     12D5h                           
12d0  mov     word ptr [bp-6h],30h            
12d5  mov     al,[bp-6h]                      
12d8  les     bx,[bp-4h]                      
12db  inc     word ptr [bp-4h]                
12de  mov     es:[bx],al                      
12e1  dec     word ptr [bp+8h]                
12e4  cmp     word ptr [bp+8h],0h             
12e8  jg      12C2h                           
12ea  les     bx,[bp-4h]                      
12ed  mov     byte ptr es:[bx],0h             
12f1  cmp     word ptr [bp+8h],0h             
12f5  jl      1311h                           
12f7  cmp     byte ptr [si],35h               
12fa  jl      1311h                           
12fc  jmp     1302h                           
12fe  mov     byte ptr es:[bx],30h            
1302  dec     word ptr [bp-4h]                
1305  mov     bx,[bp-4h]                      
1308  cmp     byte ptr es:[bx],39h            
130c  je      12FEh                           
130e  inc     byte ptr es:[bx]                
1311  les     bx,[bp+4h]                      
1314  cmp     byte ptr es:[bx],31h            
1318  jne     1322h                           
131a  mov     bx,[bp+0Ah]                     
131d  inc     word ptr [bx+2h]                
1320  jmp     1331h                           
1322  lea     ax,[bx+1h]                      
1325  push    es                              
1326  push    ax                              
1327  push    es                              
1328  push    bx                              
1329  call far sub_1350                       
132e  add     sp,8h                           
1331  pop     si                              
1332  mov     sp,bp                           
1334  pop     bp                              
1335  ret                                     

; ----- sub_1336 -----
1336  push    bp                              
1337  mov     bp,sp                           
1339  mov     dx,di                           
133b  les     di,[bp+6h]                      
133e  xor     ax,ax                           
1340  mov     cx,0FFFFh                       
1343  repne   scasb                           
1345  not     cx                              
1347  jne     134Ah                           
1349  dec     cx                              
134a  xchg    ax,cx                           
134b  mov     di,dx                           
134d  pop     bp                              
134e  retf                                    
134f  add     [bx+si],al                      

; ----- sub_1350 -----
1350  push    bp                              
1351  mov     bp,sp                           
1353  mov     dx,di                           
1355  mov     bx,si                           
1357  push    ds                              
1358  lds     si,[bp+0Ah]                     
135b  mov     di,si                           
135d  mov     ax,ds                           
135f  mov     es,ax                           
1361  xor     ax,ax                           
1363  mov     cx,0FFFFh                       
1366  repne   scasb                           
1368  not     cx                              
136a  les     di,[bp+6h]                      
136d  mov     ax,di                           
136f  je      1375h                           
1371  movsw                                   
1372  dec     cx                              
1373  jmp     137Bh                           
1375  test    al,1h                           
1377  je      137Bh                           
1379  movsb                                   
137a  dec     cx                              
137b  shr     cx,1                            
137d  rep     movsw                           
137f  adc     cx,cx                           
1381  rep     movsb                           
1383  mov     si,bx                           
1385  mov     di,dx                           
1387  pop     ds                              
1388  mov     dx,es                           
138a  pop     bp                              
138b  retf                                    

; ----- sub_138c -----
138c  push    bp                              
138d  mov     bp,sp                           
138f  mov     cx,[bp+0Ch]                     
1392  jcxz    13CCh                           
1394  push    di                              
1395  les     di,[bp+6h]                      
1398  mov     dx,di                           
139a  neg     dx                              
139c  je      13AAh                           
139e  sub     dx,cx                           
13a0  sbb     bx,bx                           
13a2  and     dx,bx                           
13a4  add     dx,cx                           
13a6  xchg    dx,cx                           
13a8  sub     dx,cx                           
13aa  mov     ax,[bp+0Ah]                     
13ad  mov     ah,al                           
13af  shr     cx,1                            
13b1  rep     stosw                           
13b3  adc     cx,cx                           
13b5  rep     stosb                           
13b7  xchg    dx,cx                           
13b9  jcxz    13CBh                           
13bb  mov     bx,es                           
13bd  add     bx,0FFFFh                       
13c1  mov     es,bx                           
13c3  shr     cx,1                            
13c5  rep     stosw                           
13c7  adc     cx,cx                           
13c9  rep     stosb                           
13cb  pop     di                              
13cc  mov     ax,[bp+6h]                      
13cf  mov     dx,[bp+8h]                      
13d2  pop     bp                              
13d3  retf                                    

; ----- sub_13d4 -----
13d4  push    bp                              
13d5  mov     bp,sp                           
13d7  mov     cx,[bp+0Eh]                     
13da  push    ds                              
13db  push    di                              
13dc  push    si                              
13dd  or      cx,cx                           
13df  jne     13E4h                           
13e1  jmp     1493h                           
13e4  lds     si,[bp+0Ah]                     
13e7  les     di,[bp+6h]                      
13ea  push    ds                              
13eb  push    si                              
13ec  push    es                              
13ed  push    di                              
13ee  call far sub_162a                       
13f3  mov     cx,[bp+0Eh]                     
13f6  or      dx,dx                           
13f8  js      1451h                           
13fa  sub     ax,cx                           
13fc  sbb     dx,0h                           
13ff  jae     1451h                           
1401  dec     cx                              
1402  add     si,cx                           
1404  jae     140Dh                           
1406  mov     ax,ds                           
1408  add     ax,13BFh                        
140b  mov     ds,ax                           
140d  add     di,cx                           
140f  jae     1418h                           
1411  mov     ax,es                           
1413  add     ax,1409h                        
1416  mov     es,ax                           
1418  inc     cx                              
1419  mov     ax,cx                           
141b  dec     ax                              
141c  sub     ax,di                           
141e  sbb     bx,bx                           
1420  and     ax,bx                           
1422  add     ax,di                           
1424  sub     ax,si                           
1426  sbb     bx,bx                           
1428  and     ax,bx                           
142a  add     ax,si                           
142c  inc     ax                              
142d  xchg    ax,cx                           
142e  sub     ax,cx                           
1430  std                                     
1431  rep     movsb                           
1433  cld                                     
1434  xchg    ax,cx                           
1435  jcxz    1493h                           
1437  cmp     si,-1h                          
143a  jne     1443h                           
143c  mov     ax,ds                           
143e  sub     ax,1414h                        
1441  mov     ds,ax                           
1443  cmp     di,-1h                          
1446  jne     1419h                           
1448  mov     ax,es                           
144a  sub     ax,143Fh                        
144d  mov     es,ax                           
144f  jmp     1419h                           
1451  mov     ax,cx                           
1453  dec     ax                              
1454  mov     dx,di                           
1456  not     dx                              
1458  sub     ax,dx                           
145a  sbb     bx,bx                           
145c  and     ax,bx                           
145e  add     ax,dx                           
1460  mov     dx,si                           
1462  not     dx                              
1464  sub     ax,dx                           
1466  sbb     bx,bx                           
1468  and     ax,bx                           
146a  add     ax,dx                           
146c  inc     ax                              
146d  xchg    ax,cx                           
146e  sub     ax,cx                           
1470  shr     cx,1                            
1472  rep     movsw                           
1474  adc     cx,cx                           
1476  rep     movsb                           
1478  xchg    ax,cx                           
1479  jcxz    1493h                           
147b  or      si,si                           
147d  jne     1486h                           
147f  mov     ax,ds                           
1481  add     ax,144Bh                        
1484  mov     ds,ax                           
1486  or      di,di                           
1488  jne     1451h                           
148a  mov     ax,es                           
148c  add     ax,1482h                        
148f  mov     es,ax                           
1491  jmp     1451h                           
1493  mov     ax,[bp+6h]                      
1496  mov     dx,[bp+8h]                      
1499  pop     si                              
149a  pop     di                              
149b  pop     ds                              
149c  pop     bp                              
149d  retf                                    

; ----- sub_149e -----
149e  push    bp                              
149f  mov     bp,sp                           
14a1  push    si                              
14a2  push    di                              
14a3  cld                                     
14a4  mov     ax,ds                           
14a6  mov     es,ax                           
14a8  lea     si,[bp+4h]                      
14ab  mov     di,6C6h                         
14ae  movsw   ss:                             
14b0  movsw   ss:                             
14b2  movsw   ss:                             
14b4  movsw   ss:                             
14b6  mov     si,6C6h                         
14b9  push    bp                              
14ba  call    1698h                           
14bd  pop     bp                              
14be  mov     di,6CEh                         
14c1  mov     cx,ax                           
14c3  lodsb                                   
14c4  cbw                                     
14c5  xchg    ax,cx                           
14c6  rep     movsb                           
14c8  xchg    ax,cx                           
14c9  stosb                                   
14ca  mov     di,6BEh                         
14cd  xor     bh,bh                           
14cf  mov     [di],bx                         
14d1  mov     [di+2h],dx                      
14d4  mov     [di+4h],cx                      
14d7  mov     word ptr [di+6h],6CEh           
14dc  mov     ax,di                           
14de  pop     di                              
14df  pop     si                              
14e0  mov     sp,bp                           
14e2  pop     bp                              
14e3  ret                                     
14e4  push    cx                              
14e5  push    di                              
14e6  test    byte ptr [bx+2h],1h             
14ea  je      1552h                           
14ec  call    15D9h                           
14ef  mov     di,si                           
14f1  mov     ax,[si]                         
14f3  test    al,1h                           
14f5  je      14FAh                           
14f7  sub     cx,ax                           
14f9  dec     cx                              
14fa  inc     cx                              
14fb  inc     cx                              
14fc  mov     si,[bx+4h]                      
14ff  or      si,si                           
1501  je      1552h                           
1503  add     cx,si                           
1505  jae     1510h                           
1507  xor     ax,ax                           
1509  mov     dx,0FFF0h                       
150c  jcxz    1541h                           
150e  jmp     1552h                           
1510  call    124Eh                           
1513  mov     es,ax                           
1515  mov     ax,es:[6E2h]                    
1519  cmp     ax,1000h                        
151c  je      1534h                           
151e  mov     dx,8000h                        
1521  cmp     dx,ax                           
1523  jb      152Bh                           
1525  shr     dx,1                            
1527  jne     1521h                           
1529  jmp     154Dh                           
152b  cmp     dx,8h                           
152e  jb      154Dh                           
1530  shl     dx,1                            
1532  mov     ax,dx                           
1534  dec     ax                              
1535  mov     dx,ax                           
1537  add     ax,cx                           
1539  jae     153Dh                           
153b  xor     ax,ax                           
153d  not     dx                              
153f  and     ax,dx                           
1541  push    dx                              
1542  call    1573h                           
1545  pop     dx                              
1546  jae     1555h                           
1548  cmp     dx,-10h                         
154b  je      1552h                           
154d  mov     ax,10h                          
1550  jmp     1534h                           
1552  stc                                     
1553  jmp     1570h                           
1555  mov     dx,ax                           
1557  sub     dx,[bx+4h]                      
155a  mov     [bx+4h],ax                      
155d  mov     [bx+0Ah],di                     
1560  mov     si,[bx+0Ch]                     
1563  dec     dx                              
1564  mov     [si],dx                         
1566  inc     dx                              
1567  add     si,dx                           
1569  mov     word ptr [si],0FFFEh            
156d  mov     [bx+0Ch],si                     
1570  pop     di                              
1571  pop     cx                              
1572  ret                                     

; ----- sub_1573 -----
1573  mov     dx,ax                           
1575  test    byte ptr [bx+2h],4h             
1579  je      157Dh                           
157b  jmp     15CEh                           
157d  push    dx                              
157e  push    cx                              
157f  push    bx                              
1580  mov     si,[bx+6h]                      
1583  mov     bx,cs:[850h]                    
1588  xor     cx,cx                           
158a  or      dx,dx                           
158c  jne     1595h                           
158e  test    bx,10h                          
1592  jne     15D4h                           
1594  inc     cx                              
1595  mov     ax,2002h                        
1598  test    bx,1h                           
159c  jne     15A1h                           
159e  mov     ax,2020h                        
15a1  push    si                              
15a2  push    cx                              
15a3  push    dx                              
15a4  push    ax                              
15a5  call far KERNEL.GLOBALREALLOC           
15aa  or      ax,ax                           
15ac  je      15D4h                           
15ae  cmp     ax,si                           
15b0  jne     15CEh                           
15b2  push    si                              
15b3  call far KERNEL.GLOBALSIZE              
15b8  or      dx,ax                           
15ba  je      15CEh                           
15bc  pop     bx                              
15bd  pop     cx                              
15be  pop     dx                              
15bf  mov     ax,dx                           
15c1  test    byte ptr [bx+2h],4h             
15c5  je      15CBh                           
15c7  dec     dx                              
15c8  mov     [bx-2h],dx                      
15cb  clc                                     
15cc  jmp     15D8h                           
15ce  mov     ax,12h                          
15d1  jmp     11DCh                           
15d4  pop     bx                              
15d5  pop     cx                              
15d6  pop     dx                              
15d7  stc                                     
15d8  ret                                     

; ----- sub_15d9 -----
15d9  push    di                              
15da  mov     si,[bx+0Ah]                     
15dd  cmp     si,[bx+0Ch]                     
15e0  jne     15E5h                           
15e2  mov     si,[bx+8h]                      
15e5  lodsw                                   
15e6  cmp     ax,-2h                          
15e9  je      15F3h                           
15eb  mov     di,si                           
15ed  and     al,0FEh                         
15ef  add     si,ax                           
15f1  jmp     15E5h                           
15f3  dec     di                              
15f4  dec     di                              
15f5  mov     si,di                           
15f7  pop     di                              
15f8  ret                                     
15f9  add     [bx+si],al                      

; ===== ___EXPORTEDSTUB =====
15fa  mov     ax,ds                           
15fc  nop                                     
15fd  inc     bp                              
15fe  push    bp                              
15ff  mov     bp,sp                           
1601  push    ds                              
1602  mov     ds,ax                           
1604  xor     ax,ax                           
1606  lea     sp,[bp-2h]                      
1609  pop     ds                              
160a  pop     bp                              
160b  dec     bp                              
160c  retf                                    
160d  nop                                     

; ----- sub_160e -----
160e  push    bp                              
160f  mov     bp,sp                           
1611  mov     dx,di                           
1613  mov     ax,ds                           
1615  mov     es,ax                           
1617  mov     di,[bp+4h]                      
161a  xor     ax,ax                           
161c  mov     cx,0FFFFh                       
161f  repne   scasb                           
1621  not     cx                              
1623  dec     cx                              
1624  xchg    ax,cx                           
1625  mov     di,dx                           
1627  pop     bp                              
1628  ret                                     
1629  add     [bx+si],al                      

; ----- sub_162a -----
162a  push    bp                              
162b  mov     bp,sp                           
162d  push    bx                              
162e  push    cx                              
162f  mov     ax,[bp+6h]                      
1632  mov     dx,[bp+8h]                      
1635  mov     bx,[bp+0Ch]                     
1638  mov     cx,0FFFFh                       
163b  shr     dx,cl                           
163d  shr     bx,cl                           
163f  sub     ax,[bp+0Ah]                     
1642  sbb     dx,bx                           
1644  pop     cx                              
1645  pop     bx                              
1646  pop     bp                              
1647  retf    8h                              
164a  cld                                     
164c  ???                                     
164e  ???                                     
1650  ???                                     
1652  ???                                     
1654  int     0CCh                            
1656  int 3                                   
1657  int 3                                   
1658  int 3                                   
1659  int 3                                   
165a  int 3                                   
165b  int 3                                   
165c  sti                                     
165d  aas                                     
165e  mov     si,6F0h                         
1661  mov     word ptr [si],3001h             
1665  xor     ax,ax                           
1667  mov     dx,ax                           
1669  inc     ax                              
166a  mov     bl,20h                          
166c  pop     es                              
166d  ret                                     
166e  or      dx,dx                           
1670  jne     167Ch                           
1672  cmp     cx,-8h                          
1675  je      168Eh                           
1677  and     cl,0Fh                          
167a  je      1689h                           
167c  mov     si,708h                         
167f  test    cl,8h                           
1682  jne     1691h                           
1684  mov     si,701h                         
1687  jmp     1691h                           
1689  mov     si,70Fh                         
168c  jmp     1691h                           
168e  mov     si,715h                         
1691  mov     dx,1h                           
1694  pop     es                              
1695  xor     ax,ax                           
1697  ret                                     

; ----- sub_1698 -----
1698  push    es                              
1699  mov     ax,ds                           
169b  mov     es,ax                           
169d  cld                                     
169e  mov     di,6E4h                         
16a1  push    di                              
16a2  mov     cx,4h                           
16a5  rep     movsw                           
16a7  pop     si                              
16a8  mov     cx,[si+6h]                      
16ab  and     byte ptr [si+7h],7Fh            
16af  mov     bl,20h                          
16b1  mov     ax,[si]                         
16b3  or      ax,[si+2h]                      
16b6  or      ax,[si+4h]                      
16b9  mov     dx,ax                           
16bb  or      ax,[si+6h]                      
16be  je      165Eh                           
16c0  or      cx,cx                           
16c2  jns     16C6h                           
16c4  mov     bl,2Dh                          
16c6  not     cx                              
16c8  test    cx,7FF0h                        
16cc  not     cx                              
16ce  je      166Eh                           
16d0  push    bx                              
16d1  wait                                    
16d2  fstcw   word ptr [71Dh]                 
16d6  nop                                     
16d7  wait                                    
16d8  push    ax                              
16d9  mov     al,[71Dh]                       
16dc  mov     [71Fh],al                       
16df  pop     ax                              
16e0  wait                                    
16e1  fldcw   word ptr [71Fh]                 
16e5  wait                                    
16e6  fld     qword ptr [si]                  
16e8  wait                                    
16e9  fld     st(0),st(0)                     
16eb  wait                                    
16ec  fstp    tword ptr [si]                  
16ee  nop                                     
16ef  wait                                    
16f0  xor     di,di                           
16f2  mov     si,6EBh                         
16f5  lodsb                                   
16f6  mov     bh,al                           
16f8  lodsw                                   
16f9  mov     cx,ax                           
16fb  mov     dx,4D10h                        
16fe  mul     dx                              
1700  xchg    ax,cx                           
1701  mov     al,4Dh                          
1703  mul     ah                              
1705  add     cx,ax                           
1707  adc     dx,di                           
1709  mov     al,9Ah                          
170b  mul     bh                              
170d  add     cx,ax                           
170f  adc     di,dx                           
1711  sub     cx,12F4h                        
1715  sbb     di,1343h                        
1719  push    di                              
171a  neg     di                              
171c  mov     si,6E4h                         
171f  call    1A8Eh                           
1722  mov     bx,164Ah                        
1725  pop     di                              
1726  wait                                    
1727  fld     tword ptr cs:[bx]               
172a  wait                                    
172b  fcomp   st(0),st(1)                     
172d  wait                                    
172e  fstsw   word ptr [71Bh]                 
1732  nop                                     
1733  wait                                    
1734  test    byte ptr [71Ch],41h             
1739  je      1746h                           
173b  inc     di                              
173c  mov     bx,1654h                        
173f  wait                                    
1740  fld     tword ptr cs:[bx]               
1743  wait                                    
1744  fmulp   st(1)                           
1746  push    di                              
1747  wait                                    
1748  fstp    tword ptr [si]                  
174a  wait                                    
174b  fldcw   word ptr [71Dh]                 
174f  nop                                     
1750  wait                                    
1751  lodsw                                   
1752  xchg    ax,di                           
1753  lodsw                                   
1754  xchg    ax,bp                           
1755  lodsw                                   
1756  xchg    ax,dx                           
1757  lodsw                                   
1758  xchg    ax,bx                           
1759  lodsw                                   
175a  xchg    ax,cx                           
175b  sub     cx,3FFEh                        
175f  neg     cx                              
1761  mov     si,di                           
1763  xor     ax,ax                           
1765  jcxz    1773h                           
1767  shr     bx,1                            
1769  rcr     dx,1                            
176b  rcr     bp,1                            
176d  rcr     si,1                            
176f  rcr     ah,1                            
1771  loop    1767h                           
1773  adc     si,39Ah                         
1777  adc     bp,cx                           
1779  adc     dx,cx                           
177b  adc     bx,cx                           
177d  mov     di,6F1h                         
1780  mov     cx,10h                          
1783  xor     al,al                           
1785  push    cx                              
1786  push    bx                              
1787  push    dx                              
1788  push    bp                              
1789  push    si                              
178a  push    ax                              
178b  shl     ah,1                            
178d  rcl     si,1                            
178f  rcl     bp,1                            
1791  rcl     dx,1                            
1793  rcl     bx,1                            
1795  rcl     al,1                            
1797  shl     ah,1                            
1799  rcl     si,1                            
179b  rcl     bp,1                            
179d  rcl     dx,1                            
179f  rcl     bx,1                            
17a1  rcl     al,1                            
17a3  pop     cx                              
17a4  adc     ah,ch                           
17a6  pop     cx                              
17a7  adc     si,cx                           
17a9  pop     cx                              
17aa  adc     bp,cx                           
17ac  pop     cx                              
17ad  adc     dx,cx                           
17af  pop     cx                              
17b0  adc     bx,cx                           
17b2  adc     al,0h                           
17b4  shl     ah,1                            
17b6  rcl     si,1                            
17b8  rcl     bp,1                            
17ba  rcl     dx,1                            
17bc  rcl     bx,1                            
17be  rcl     al,1                            
17c0  pop     cx                              
17c1  add     al,30h                          
17c3  stosb                                   
17c4  loop    1783h                           
17c6  dec     di                              
17c7  dec     cx                              
17c8  mov     al,30h                          
17ca  std                                     
17cb  rep     scasb                           
17cd  cld                                     
17ce  add     cx,12h                          
17d1  mov     si,6F0h                         
17d4  mov     [si],cl                         
17d6  mov     ax,1h                           
17d9  pop     dx                              
17da  pop     bx                              
17db  pop     es                              
17dc  ret                                     
17dd  add     [bx+si],al                      

; ----- sub_17de -----
17de  push    bp                              
17df  mov     bp,sp                           
17e1  sub     sp,6h                           
17e4  mov     ax,0B28h                        
17e7  push    ds                              
17e8  push    ax                              
17e9  lea     cx,[bp-4h]                      
17ec  push    ss                              
17ed  push    cx                              
17ee  push    ds                              
17ef  push    word ptr [bp+4h]                
17f2  xor     dx,dx                           
17f4  push    dx                              
17f5  call    1ACCh                           
17f8  mov     [bp-6h],ax                      
17fb  mov     ax,[bp-4h]                      
17fe  sub     ax,[bp+4h]                      
1801  mov     [0B22h],ax                      
1804  mov     word ptr [0B20h],0h             
180a  test    byte ptr [bp-6h],4h             
180e  je      1816h                           
1810  mov     word ptr [0B20h],200h           
1816  test    byte ptr [bp-6h],2h             
181a  je      1821h                           
181c  or      byte ptr [0B20h],1h             
1821  test    byte ptr [bp-6h],1h             
1825  je      182Ch                           
1827  or      byte ptr [0B21h],1h             
182c  mov     ax,0B20h                        
182f  mov     sp,bp                           
1831  pop     bp                              
1832  ret                                     
1833  nop                                     

; ----- sub_1834 -----
1834  push    bp                              
1835  mov     bp,sp                           
1837  sub     sp,2h                           
183a  cmp     word ptr [bp+4h],0h             
183e  jne     1845h                           
1840  mov     word ptr [bp+4h],1h             
1845  mov     ax,0FFFFh                       
1848  push    ax                              
1849  call far KERNEL.LOCKSEGMENT             
184e  mov     ax,20h                          
1851  push    ax                              
1852  push    word ptr [bp+4h]                
1855  call far KERNEL.LOCALALLOC              
185a  mov     [bp-2h],ax                      
185d  mov     ax,0FFFFh                       
1860  push    ax                              
1861  call far KERNEL.UNLOCKSEGMENT           
1866  cmp     word ptr [bp-2h],0h             
186a  jne     1881h                           
186c  cmp     word ptr [72Eh],0h              
1871  je      1881h                           
1873  push    word ptr [bp+4h]                
1876  call    word ptr [72Eh]                 
187a  add     sp,2h                           
187d  or      ax,ax                           
187f  jne     1845h                           
1881  mov     ax,[bp-2h]                      
1884  mov     sp,bp                           
1886  pop     bp                              
1887  ret                                     

; ----- sub_1888 -----
1888  push    bp                              
1889  mov     bp,sp                           
188b  cmp     word ptr [bp+4h],0h             
188f  je      1899h                           
1891  push    word ptr [bp+4h]                
1894  call far KERNEL.LOCALFREE               
1899  mov     sp,bp                           
189b  pop     bp                              
189c  ret                                     
189d  nop                                     
189e  push    bp                              
189f  mov     bp,sp                           
18a1  sub     sp,4h                           
18a4  cmp     word ptr [bp+4h],0h             
18a8  jne     18B6h                           
18aa  push    word ptr [bp+6h]                
18ad  call    1834h                           
18b0  add     sp,2h                           
18b3  jmp     18FEh                           
18b5  nop                                     
18b6  cmp     word ptr [bp+6h],0h             
18ba  jne     18CAh                           
18bc  push    word ptr [bp+4h]                
18bf  call    1888h                           
18c2  add     sp,2h                           
18c5  xor     ax,ax                           
18c7  jmp     18FEh                           
18c9  nop                                     
18ca  mov     ax,0FFFFh                       
18cd  push    ax                              
18ce  call far KERNEL.LOCKSEGMENT             
18d3  push    word ptr [bp+4h]                
18d6  cmp     word ptr [bp+6h],0h             
18da  je      18E2h                           
18dc  mov     ax,[bp+6h]                      
18df  jmp     18E5h                           
18e1  nop                                     
18e2  mov     ax,1h                           
18e5  push    ax                              
18e6  mov     ax,62h                          
18e9  push    ax                              
18ea  call far KERNEL.LOCALREALLOC            
18ef  mov     [bp-2h],ax                      
18f2  mov     ax,0FFFFh                       
18f5  push    ax                              
18f6  call far KERNEL.UNLOCKSEGMENT           
18fb  mov     ax,[bp-2h]                      
18fe  mov     sp,bp                           
1900  pop     bp                              
1901  ret                                     
1902  push    bp                              
1903  mov     bp,sp                           
1905  push    word ptr [bp+4h]                
1908  call far KERNEL.LOCALSIZE               
190d  mov     sp,bp                           
190f  pop     bp                              
1910  ret                                     
1911  nop                                     
1912  add     [bx+si],al                      
1914  add     [bx+si],al                      
1916  add     [bx+si],al                      
1918  add     [bx+si+4002h],ah                
191c  add     [bx+si],al                      
191e  add     [bx+si],al                      
1920  add     [bx+si],al                      
1922  add     al,cl                           
1924  add     ax,40h                          
1927  add     [bx+si],al                      
1929  add     [bx+si],al                      
192b  add     [bx+si],al                      
192d  cli                                     
192e  or      [bx+si],al                      
1931  add     [bx+si],al                      
1933  add     [bx+si],al                      
1935  add     [bx+si-64h],al                  
1938  or      al,40h                          
193a  add     [bx+si],al                      
193c  add     [bx+si],al                      
193e  add     [bx+si],al                      
1940  push    ax                              
1941  ret                                     
1942  cmovo   ax,[bx+si]                      
1945  add     [bx+si],al                      
1947  add     [bx+si],al                      
1949  add     [si],ah                         
194b  hlt                                     
194c  adc     al,[bx+si]                      
194f  add     [bx+si],al                      
1951  add     [bx+si],al                      
1953  adc     byte ptr [bp+1698h],40h         
1958  add     [bx+si],al                      
195a  add     [bx+si],al                      
195c  add     [bx+si],ah                      
195e  mov     sp,19BEh                        
1961  inc     ax                              
1962  add     [bx+si],al                      
1964  add     [si],al                         
1966  mov     di,1BC9h                        
1969  mov     ???,[si]                        
196b  inc     ax                              
196c  add     [bx+di-3313h],ah                
1970  into                                    
1971  sbb     ax,dx                           
1973  ror     word ptr [bp+40h],cl            
1976  sahf                                    
1977  mov     ch,70h                          
1979  sub     bp,[bx+si-3A53h]                
197d  popf                                    
197e  imul    ax,[bx+si-3h],0E525h            
1983  sbb     cl,[bp+194Fh]                   
1987  jmp     190Ch                           
1989  inc     ax                              
198a  xlat                                    
198b  xchg    ax,bp                           
198c  inc     bx                              
198d  push    cs                              
198e  add     ax,298Dh                        
1991  scasw                                   
1992  sahf                                    
1993  inc     ax                              
1994  mov     al,[0ED44h]                     
1997  adc     word ptr [bp+si],818Fh          
199b  cmp     byte ptr [bx+di-2AC0h],0A6h     
19a0  iret                                    
19a1  dec     word ptr [bx+di+1Fh]            
19a4  js      1968h                           
19a6  rol     word ptr [bx+si-20h],cl         
19a9  mov     cx,gs                           
19ab  or      cl,47h                          
19ae  mov     dx,0A893h                       
19b1  inc     cx                              
19b2  imul    dx,[di+27h],39h                 
19b6  lea     si,di                           
19b8  jo      199Ah                           
19ba  jl      19FEh                           
19bc  mov     ds,si                           
19be  stc                                     
19bf  popf                                    
19c0  sti                                     
19c1  jmp     1A41h                           
19c3  stosb                                   
19c4  push    cx                              
19c5  inc     bx                              
19c6  jbe     19ABh                           
19c8  int 3                                   
19c9  repne   sub     [bx],bp                 
19cc  test    [bx+di+4426h],al                
19d0  int     0CCh                            
19d2  int 3                                   
19d3  int 3                                   
19d4  int 3                                   
19d5  int 3                                   
19d6  int 3                                   
19d7  int 3                                   
19d8  sti                                     
19d9  aas                                     
19da  or      dl,bh                           
19dc  mov     [3D70h],ax                      
19df  or      dl,bh                           
19e1  mov     [3FF8h],ax                      
19e4  cmp     bx,di                           
19e6  dec     di                              
19e7  lea     dx,[bx+126Eh]                   
19eb  xor     bp,3Fh                          
19ee  sub     al,65h                          
19f0  sbb     dx,sp                           
19f2  pop     ax                              
19f3  pop     ss                              
19f4  mov     bh,0D1h                         
19f6  ???                                     
19f7  aas                                     
19f8  and     ax,[si+1B47h]                   
19fc  inc     di                              
19fd  lodsb                                   
19fe  lds     sp,[bx+3FEEh]                   
1a02  mov     dh,69h                          
1a04  insb                                    
1a05  scasw                                   
1a06  add     ax,37BDh                        
1a09  xchg    ch,bl                           
1a0b  aas                                     
1a0c  mov     sp,7A42h                        
1a0f  in      ax,0D5h                         
1a11  xchg    ax,sp                           
1a12  mov     di,0E7D6h                       
1a15  aas                                     
1a16  std                                     
1a17  into                                    
1a18  popa                                    
1a19  test    [bx+di],dl                      
1a1b  ja      19E9h                           
1a1d  stosw                                   
1a1e  in      al,3Fh                          
1a20  pop     bx                              
1a21  loopz   1A70h                           
1a23  les     di,[bp-6A6Ch]                   
1a27  out     0C9h,al                         
1a29  aas                                     
1a2a  push    bx                              
1a2b  cmp     si,[di+44h]                     
1a2e  int     14h                             
1a30  mov     si,0AF9Ah                       
1a33  aas                                     
1a34  mov     dx,3994h                        
1a37  inc     bp                              
1a38  lodsw                                   
1a39  push    ds                              
1a3a  mov     cl,0CFh                         
1a3c  xchg    ax,sp                           
1a3d  aas                                     
1a3e  mov     dl,0BCh                         
1a41  mov     dx,313Bh                        
1a44  popa                                    
1a45  mov     di,[bp+si+3Fh]                  
1a48  pop     cx                              
1a49  sar     word ptr [bp-4Fh],53h           
1a4d  jl      1A61h                           
1a4f  mov     bx,3F5Fh                        
1a52  das                                     
1a53  lea     ax,[92BEh]                      
1a57  test    [di],dx                         
1a59  sti                                     
1a5a  inc     sp                              
1a5b  aas                                     
1a5c  movsw                                   
1a5d  jmp     0BF99h                          
1a60  daa                                     
1a61  jmp     3F2Ah:0A87Fh                    
1a66  mov     ax,[0BCE4h]                     
1a69  jl      1AB2h                           
1a6c  rcr     ch,1                            
1a6e  push    bp                              
1a6f  push    es                              
1a71  int 3                                   
1a72  and     dx,[si+77h]                     
1a75  cmp     di,-6Fh                         
1a78  cmp     word ptr [di],193Ah             
1a7c  jp      1AE1h                           
1a7e  and     ax,3143h                        
1a81  shr     byte ptr [si-2EC4h],38h         
1a86  add     byte ptr [bx-69h],0B8h          
1a8a  add     ch,bh                           
1a8c  xlat                                    
1a8d  cmp     ax,[bx+si]                      

; ----- sub_1a8e -----
1a8e  mov     bx,18C2h                        
1a91  or      di,di                           
1a93  jns     1A9Ah                           
1a95  mov     bx,1980h                        
1a98  neg     di                              
1a9a  push    di                              
1a9b  pop     di                              
1a9c  add     bx,46h                          
1a9f  or      di,di                           
1aa1  je      1ACAh                           
1aa3  mov     ax,di                           
1aa5  shr     di,1                            
1aa7  shr     di,1                            
1aa9  shr     di,1                            
1aab  push    di                              
1aac  and     ax,7h                           
1aaf  je      1A9Bh                           
1ab1  push    bx                              
1ab2  shl     al,1                            
1ab4  mov     ah,al                           
1ab6  shl     al,1                            
1ab8  shl     al,1                            
1aba  add     al,ah                           
1abc  xor     ah,ah                           
1abe  add     bx,ax                           
1ac0  wait                                    
1ac1  fld     tword ptr cs:[bx]               
1ac4  wait                                    
1ac5  fmulp   st(1)                           
1ac7  pop     bx                              
1ac8  jmp     1A9Bh                           
1aca  ret                                     
1acb  add     [bx+si],al                      

; ----- sub_1acc -----
1acc  push    bp                              
1acd  mov     bp,sp                           
1acf  sub     sp,0Eh                          
1ad2  push    ss                              
1ad3  lea     ax,[bp-0Ah]                     
1ad6  push    ax                              
1ad7  push    word ptr [bp+0Ch]               
1ada  push    word ptr [bp+0Ah]               
1add  push    word ptr [bp+8h]                
1ae0  push    word ptr [bp+6h]                
1ae3  push    word ptr [bp+4h]                
1ae6  call    1B34h                           
1ae9  wait                                    
1aea  fstcw   word ptr [bp-0Eh]               
1aed  wait                                    
1aee  fld     tword ptr [bp-0Ah]              
1af1  mov     bx,[bp-0Eh]                     
1af4  or      bx,18h                          
1af7  mov     [bp-0Ch],bx                     
1afa  wait                                    
1afb  fclex                                   
1afd  les     bx,[bp+0Eh]                     
1b00  wait                                    
1b01  fldcw   word ptr [bp-0Ch]               
1b04  wait                                    
1b05  fstp    qword ptr es:[bx]               
1b08  wait                                    
1b09  fstsw   word ptr [bp-0Ch]               
1b0c  wait                                    
1b0d  fclex                                   
1b0f  wait                                    
1b10  fldcw   word ptr [bp-0Eh]               
1b13  or      ax,ax                           
1b15  jne     1B2Eh                           
1b17  mov     bx,[bp-0Ch]                     
1b1a  xor     ax,ax                           
1b1c  test    bx,18h                          
1b20  je      1B2Eh                           
1b22  mov     ax,2h                           
1b25  test    bx,8h                           
1b29  jne     1B2Eh                           
1b2b  mov     ax,1h                           
1b2e  mov     sp,bp                           
1b30  pop     bp                              
1b31  ret     0Eh                             

; ----- sub_1b34 -----
1b34  push    bp                              
1b35  mov     bp,sp                           
1b37  sub     sp,34h                          
1b3a  push    si                              
1b3b  push    di                              
1b3c  push    ds                              
1b3d  lds     si,[bp+6h]                      
1b40  xor     ax,ax                           
1b42  mov     [bp-0Eh],ax                     
1b45  mov     [bp-10h],ds                     
1b48  mov     [bp-12h],si                     
1b4b  mov     [bp-14h],ax                     
1b4e  mov     [bp-18h],ax                     
1b51  mov     [bp-16h],ax                     
1b54  mov     word ptr [bp-1Ah],19h           
1b59  push    ss                              
1b5a  pop     es                              
1b5b  lea     di,[bp-34h]                     
1b5e  lodsb                                   
1b5f  cmp     al,20h                          
1b61  je      1B5Eh                           
1b63  cmp     al,9h                           
1b65  je      1B5Eh                           
1b67  cmp     al,0Ah                          
1b69  je      1B5Eh                           
1b6b  cmp     al,0Dh                          
1b6d  je      1B5Eh                           
1b6f  or      al,al                           
1b71  jne     1B76h                           
1b73  jmp     1D65h                           
1b76  cmp     al,2Bh                          
1b78  je      1B83h                           
1b7a  cmp     al,2Dh                          
1b7c  jne     1B84h                           
1b7e  mov     word ptr [bp-14h],8000h         
1b83  lodsb                                   
1b84  cmp     al,30h                          
1b86  jb      1B8Ch                           
1b88  cmp     al,39h                          
1b8a  jbe     1B9Ch                           
1b8c  cmp     al,2Eh                          
1b8e  jne     1B73h                           
1b90  lodsb                                   
1b91  cmp     al,30h                          
1b93  jb      1B73h                           
1b95  cmp     al,39h                          
1b97  ja      1B73h                           
1b99  jmp     1BB0h                           
1b9b  lodsb                                   
1b9c  cmp     al,30h                          
1b9e  je      1B9Bh                           
1ba0  or      al,al                           
1ba2  jne     1BABh                           
1ba4  dec     si                              
1ba5  mov     [bp-12h],si                     
1ba8  jmp     1D69h                           
1bab  cmp     al,2Eh                          
1bad  jne     1BC1h                           
1baf  lodsb                                   
1bb0  dec     word ptr [bp-16h]               
1bb3  cmp     al,30h                          
1bb5  je      1BAFh                           
1bb7  inc     word ptr [bp-16h]               
1bba  or      al,al                           
1bbc  je      1BA4h                           
1bbe  jmp     1BEBh                           
1bc0  lodsb                                   
1bc1  cmp     al,30h                          
1bc3  jb      1BE6h                           
1bc5  cmp     al,39h                          
1bc7  ja      1BE6h                           
1bc9  sub     al,30h                          
1bcb  stosb                                   
1bcc  dec     word ptr [bp-1Ah]               
1bcf  jne     1BC0h                           
1bd1  lodsb                                   
1bd2  inc     word ptr [bp-16h]               
1bd5  cmp     al,30h                          
1bd7  jb      1BDDh                           
1bd9  cmp     al,39h                          
1bdb  jbe     1BD1h                           
1bdd  dec     word ptr [bp-16h]               
1be0  cmp     al,2Eh                          
1be2  je      1BFEh                           
1be4  jmp     1C07h                           
1be6  cmp     al,2Eh                          
1be8  jne     1C07h                           
1bea  lodsb                                   
1beb  cmp     al,30h                          
1bed  jb      1C07h                           
1bef  cmp     al,39h                          
1bf1  ja      1C07h                           
1bf3  sub     al,30h                          
1bf5  stosb                                   
1bf6  dec     word ptr [bp-16h]               
1bf9  dec     word ptr [bp-1Ah]               
1bfc  jne     1BEAh                           
1bfe  lodsb                                   
1bff  cmp     al,30h                          
1c01  jb      1C07h                           
1c03  cmp     al,39h                          
1c05  jbe     1BFEh                           
1c07  neg     word ptr [bp-1Ah]               
1c0a  add     word ptr [bp-1Ah],19h           
1c0e  lea     bx,[si-1h]                      
1c11  mov     [bp-12h],bx                     
1c14  xor     bx,bx                           
1c16  cmp     al,45h                          
1c18  je      1C28h                           
1c1a  cmp     al,65h                          
1c1c  je      1C28h                           
1c1e  cmp     al,44h                          
1c20  je      1C28h                           
1c22  cmp     al,64h                          
1c24  je      1C28h                           
1c26  jmp     1C7Ah                           
1c28  lodsb                                   
1c29  cmp     al,2Bh                          
1c2b  je      1C36h                           
1c2d  cmp     al,2Dh                          
1c2f  jne     1C37h                           
1c31  mov     word ptr [bp-18h],0FFFFh        
1c36  lodsb                                   
1c37  cmp     al,30h                          
1c39  jb      1C7Ah                           
1c3b  cmp     al,39h                          
1c3d  ja      1C7Ah                           
1c3f  sub     ax,30h                          
1c42  mov     bx,ax                           
1c44  lodsb                                   
1c45  cmp     al,30h                          
1c47  jb      1C6Dh                           
1c49  cmp     al,39h                          
1c4b  ja      1C6Dh                           
1c4d  sub     al,30h                          
1c4f  cmp     bx,666h                         
1c53  ja      1C61h                           
1c55  shl     bx,1                            
1c57  add     ax,bx                           
1c59  shl     bx,1                            
1c5b  shl     bx,1                            
1c5d  add     bx,ax                           
1c5f  jns     1C44h                           
1c61  mov     bx,3FFFh                        
1c64  lodsb                                   
1c65  cmp     al,30h                          
1c67  jb      1C6Dh                           
1c69  cmp     al,39h                          
1c6b  jbe     1C64h                           
1c6d  xor     bx,[bp-18h]                     
1c70  sub     bx,[bp-18h]                     
1c73  add     [bp-16h],bx                     
1c76  dec     si                              
1c77  mov     [bp-12h],si                     
1c7a  cmp     word ptr [bp-1Ah],0h            
1c7e  jne     1C83h                           
1c80  jmp     1D69h                           
1c83  mov     byte ptr es:[di],0h             
1c87  dec     di                              
1c88  cmp     word ptr [bp-1Ah],18h           
1c8c  jbe     1CA5h                           
1c8e  mov     al,es:[di]                      
1c91  mov     byte ptr es:[di],0h             
1c95  dec     word ptr [bp-1Ah]               
1c98  inc     word ptr [bp-16h]               
1c9b  dec     di                              
1c9c  cmp     al,5h                           
1c9e  jb      1CB4h                           
1ca0  inc     byte ptr es:[di]                
1ca3  jmp     1CBAh                           
1ca5  cmp     word ptr [bp-16h],0h            
1ca9  je      1CBAh                           
1cab  jmp     1CB4h                           
1cad  dec     di                              
1cae  dec     word ptr [bp-1Ah]               
1cb1  inc     word ptr [bp-16h]               
1cb4  cmp     byte ptr es:[di],0h             
1cb8  je      1CADh                           
1cba  push    ss                              
1cbb  lea     ax,[bp-34h]                     
1cbe  push    ax                              
1cbf  push    word ptr [bp-1Ah]               
1cc2  lea     ax,[bp-0Ch]                     
1cc5  push    ax                              
1cc6  call    22AEh                           
1cc9  mov     ax,[bp-16h]                     
1ccc  or      ax,ax                           
1cce  je      1CEEh                           
1cd0  cmp     ax,1450h                        
1cd3  jl      1CD8h                           
1cd5  jmp     1D7Bh                           
1cd8  cmp     ax,0EBB0h                       
1cdb  jg      1CE0h                           
1cdd  jmp     1D75h                           
1ce0  push    ss                              
1ce1  lea     ax,[bp-0Ch]                     
1ce4  push    ax                              
1ce5  push    word ptr [bp-16h]               
1ce8  push    word ptr [bp+4h]                
1ceb  call    2054h                           
1cee  mov     ax,[bp-4h]                      
1cf1  mov     bx,[bp-6h]                      
1cf4  mov     cx,[bp-8h]                      
1cf7  mov     dx,[bp-0Ah]                     
1cfa  cmp     word ptr [bp-0Ch],8000h         
1cff  jb      1D1Dh                           
1d01  ja      1D09h                           
1d03  test    dx,1h                           
1d07  je      1D1Dh                           
1d09  add     dx,1h                           
1d0c  adc     cx,0h                           
1d0f  adc     bx,0h                           
1d12  adc     ax,0h                           
1d15  jae     1D1Dh                           
1d17  or      ah,80h                          
1d1a  inc     word ptr [bp-2h]                
1d1d  mov     si,[bp-2h]                      
1d20  cmp     si,7FFFh                        
1d24  jae     1D7Bh                           
1d26  or      si,si                           
1d28  jne     1D34h                           
1d2a  mov     si,ax                           
1d2c  or      si,bx                           
1d2e  or      si,cx                           
1d30  or      si,dx                           
1d32  je      1D75h                           
1d34  lds     si,[bp+0Eh]                     
1d37  mov     [si+6h],ax                      
1d3a  mov     [si+4h],bx                      
1d3d  mov     [si+2h],cx                      
1d40  mov     [si],dx                         
1d42  mov     ax,[bp-2h]                      
1d45  or      ax,[bp-14h]                     
1d48  mov     [si+8h],ax                      
1d4b  lds     si,[bp+0Ah]                     
1d4e  mov     ax,[bp-12h]                     
1d51  mov     [si],ax                         
1d53  mov     ax,[bp-10h]                     
1d56  mov     [si+2h],ax                      
1d59  mov     ax,[bp-0Eh]                     
1d5c  pop     ds                              
1d5d  pop     di                              
1d5e  pop     si                              
1d5f  mov     sp,bp                           
1d61  pop     bp                              
1d62  ret     0Eh                             
1d65  or      word ptr [bp-0Eh],4h            
1d69  les     di,[bp+0Eh]                     
1d6c  xor     ax,ax                           
1d6e  mov     cx,5h                           
1d71  rep     stosw                           
1d73  jmp     1D4Bh                           
1d75  or      word ptr [bp-0Eh],1h            
1d79  jmp     1D69h                           
1d7b  or      word ptr [bp-0Eh],2h            
1d7f  lds     si,[bp+0Eh]                     
1d82  mov     ax,7FFFh                        
1d85  or      ax,[bp-14h]                     
1d88  mov     [si+8h],ax                      
1d8b  mov     word ptr [si+6h],8000h          
1d90  xor     ax,ax                           
1d92  mov     [si+4h],ax                      
1d95  mov     [si+2h],ax                      
1d98  mov     [si],ax                         
1d9a  jmp     1D4Bh                           
1d9c  add     [bx+si],al                      
1d9e  add     [bx+si],al                      
1da0  add     [bx+si],al                      
1da2  add     [bx+si],al                      
1da4  add     [bx+si+4002h],ah                
1da8  add     [bx+si],al                      
1daa  add     [bx+si],al                      
1dac  add     [bx+si],al                      
1dae  add     [bx+si],al                      
1db0  add     al,cl                           
1db2  add     ax,40h                          
1db5  add     [bx+si],al                      
1db7  add     [bx+si],al                      
1db9  add     [bx+si],al                      
1dbb  add     [bx+si],al                      
1dbd  cli                                     
1dbe  or      [bx+si],al                      
1dc1  add     [bx+si],al                      
1dc3  add     [bx+si],al                      
1dc5  add     [bx+si],al                      
1dc7  add     [bx+si-64h],al                  
1dca  or      al,40h                          
1dcc  add     [bx+si],al                      
1dce  add     [bx+si],al                      
1dd0  add     [bx+si],al                      
1dd2  add     [bx+si],al                      
1dd4  push    ax                              
1dd5  ret                                     
1dd6  cmovo   ax,[bx+si]                      
1dd9  add     [bx+si],al                      
1ddb  add     [bx+si],al                      
1ddd  add     [bx+si],al                      
1ddf  add     [si],ah                         
1de1  hlt                                     
1de2  adc     al,[bx+si]                      
1de5  add     [bx+si],al                      
1de7  add     [bx+si],al                      
1de9  add     [bx+si],al                      
1deb  adc     byte ptr [bp+1698h],40h         
1df0  add     [bx+si],al                      
1df2  add     [bx+si],al                      
1df4  add     [bx+si],al                      
1df6  add     [bx+si],ah                      
1df8  mov     sp,19BEh                        
1dfb  inc     ax                              
1dfc  add     [bx+si],al                      
1dfe  add     [bx+si],al                      
1e00  add     [si],al                         
1e02  mov     di,1BC9h                        
1e05  mov     ???,[si]                        
1e07  inc     ax                              
1e08  add     [bx+si],al                      
1e0a  add     [bx+di-3313h],ah                
1e0e  into                                    
1e0f  sbb     ax,dx                           
1e11  ror     word ptr [bp+40h],cl            
1e14  and     al,dh                           
1e16  sahf                                    
1e17  mov     ch,70h                          
1e19  sub     bp,[bx+si-3A53h]                
1e1d  popf                                    
1e1e  imul    ax,[bx+si-30h],0FD5Dh           
1e23  and     ax,1AE5h                        
1e26  mov     cs,[bx+19h]                     
1e29  jmp     1DAEh                           
1e2b  inc     ax                              
1e2c  jno     1DC4h                           
1e2e  xlat                                    
1e2f  xchg    ax,bp                           
1e30  inc     bx                              
1e31  push    cs                              
1e32  add     ax,298Dh                        
1e35  scasw                                   
1e36  sahf                                    
1e37  inc     ax                              
1e38  stc                                     
1e39  mov     di,44A0h                        
1e3c  in      ax,dx                           
1e3d  adc     word ptr [bp+si],818Fh          
1e41  cmp     byte ptr [bx+di-40C0h],3Ch      
1e46  aad     0A6h                            
1e48  iret                                    
1e49  dec     word ptr [bx+di+1Fh]            
1e4c  js      1E10h                           
1e4e  rol     word ptr [bx+si+6Fh],cl         
1e51  mov     al,8Ch                          
1e54  jmp     0E7D7h                          
1e57  inc     di                              
1e58  mov     dx,0A893h                       
1e5b  inc     cx                              
1e5c  mov     sp,6B85h                        
1e5f  push    bp                              
1e60  daa                                     
1e61  cmp     [di+70F7h],cx                   
1e65  loopne  1EE3h                           
1e67  inc     dx                              
1e68  mov     sp,8EDDh                        
1e6b  fdivp   st(1)                           
1e6d  popf                                    
1e6e  sti                                     
1e6f  jmp     1EEFh                           
1e71  stosb                                   
1e72  push    cx                              
1e73  inc     bx                              
1e74  mov     ax,[76E6h]                      
1e77  jcxz    1E45h                           
1e79  repne   sub     [bx],bp                 
1e7c  test    [bx+di+4426h],al                
1e80  sub     [bx+si],dl                      
1e82  pop     ss                              
1e83  stosb                                   
1e84  clc                                     
1e85  scasb                                   
1e86  adc     bl,ah                           
1e88  lds     ax,sp                           
1e8a  cli                                     
1e8b  inc     sp                              
1e8c  jmp     1E35h                           
1e8e  aam     0F3h                            
1e90  imul    bx                              
1e92  loopz   1EDEh                           
1e94  jp      1E2Bh                           
1e96  iret                                    
1e97  inc     bp                              
1e98  int 3                                   
1e9a  mov     word ptr [bx+di-59F2h],0A0AEh   
1ea0  sbb     bx,sp                           
1ea2  mov     [0D46h],ax                      
1ea5  pop     ss                              
1ea7  or      al,75h                          
1ea9  add     word ptr [bp+7675h],48C9h       
1eaf  dec     bp                              
1eb0  pop     ax                              
1eb1  inc     dx                              
1eb2  in      al,0A7h                         
1eb4  xchg    ax,bx                           
1eb5  cmp     [bp+di],di                      
1eb7  xor     ax,0B2B8h                       
1eba  in      ax,dx                           
1ebb  push    bx                              
1ebc  dec     bp                              
1ebd  cmpsw                                   
1ebe  in      ax,5Dh                          
1ec0  cmp     ax,5DC5h                        
1ec3  cmp     cx,[bp+di-6D62h]                
1ec7  pop     dx                              
1ec8  call    far ptr  [di-5Ah]               
1ecb  lock                                    
1ecc  mov     ax,[0C020h]                     
1ecf  push    sp                              
1ed0  movsw                                   
1ed1  mov     [bx],???                        
1ed3  popa                                    
1ed4  sar     bp,1                            
1ed6  mov     bx,[bp+si-75h]                  
1ed9  fsub    dword ptr [di]                  
1edb  pop     bp                              
1edc  mov     cx,di                           
1ede  ??? (FPU)                               
1ee1  xchg    ax,bp                           
1ee2  clc                                     
1ee3  rep     daa                             
1ee5  mov     di,0C8A2h                       
1ee8  pop     bp                              
1ee9  fld     qword ptr [bx+si+4C6Eh]         
1eed  leave                                   
1eee  wait                                    
1eef  xchg    ax,di                           
1ef0  and     [bp+si+5202h],cl                
1ef4  pusha                                   
1ef5  les     sp,[di]                         
1ef7  jne     1EC6h                           
1ef9  int 3                                   
1efa  int     0CCh                            
1efc  int 3                                   
1efd  int 3                                   
1efe  int 3                                   
1eff  int 3                                   
1f00  int 3                                   
1f01  int 3                                   
1f02  sti                                     
1f03  aas                                     
1f04  jno     1F43h                           
1f06  or      dl,bh                           
1f08  mov     [3D70h],ax                      
1f0b  or      dl,bh                           
1f0d  mov     [3FF8h],ax                      
1f10  pop     dx                              
1f11  cmp     bx,di                           
1f14  dec     di                              
1f15  lea     dx,[bx+126Eh]                   
1f19  xor     bp,3Fh                          
1f1c  ret                                     
1f1d  shr     word ptr [si],cl                
1f1f  sbb     dx,sp                           
1f22  pop     ax                              
1f23  pop     ss                              
1f24  mov     bh,0D1h                         
1f26  ???                                     
1f27  aas                                     
1f28  ror     byte ptr [bx],1                 
1f2a  and     ax,[si+1B47h]                   
1f2e  inc     di                              
1f2f  lodsb                                   
1f30  lds     sp,[bx+3FEEh]                   
1f34  inc     ax                              
1f35  cmpsb                                   
1f36  mov     dh,69h                          
1f38  insb                                    
1f39  scasw                                   
1f3a  add     ax,37BDh                        
1f3d  xchg    ch,bl                           
1f3f  aas                                     
1f40  xor     di,[di]                         
1f42  mov     sp,7A42h                        
1f45  in      ax,0D5h                         
1f47  xchg    ax,sp                           
1f48  mov     di,0E7D6h                       
1f4b  aas                                     
1f4c  ret     0FDFDh                          
1f4f  into                                    
1f50  popa                                    
1f51  test    [bx+di],dl                      
1f53  ja      1F21h                           
1f55  stosw                                   
1f56  in      al,3Fh                          
1f58  das                                     
1f59  dec     sp                              
1f5a  pop     bx                              
1f5b  loopz   1FAAh                           
1f5d  les     di,[bp-6A6Ch]                   
1f61  out     0C9h,al                         
1f63  aas                                     
1f64  xchg    ax,dx                           
1f65  les     dx,[bp+di+3Bh]                  
1f68  jne     1FAEh                           
1f6a  int     14h                             
1f6c  mov     si,0AF9Ah                       
1f6f  aas                                     
1f70  fisub   word ptr [bx-46h]               
1f73  xchg    ax,sp                           
1f74  cmp     [di-53h],ax                     
1f77  push    ds                              
1f78  mov     cl,0CFh                         
1f7a  xchg    ax,sp                           
1f7b  aas                                     
1f7c  and     al,23h                          
1f7e  mov     dl,0BCh                         
1f81  mov     dx,313Bh                        
1f84  popa                                    
1f85  mov     di,[bp+si+3Fh]                  
1f88  popa                                    
1f89  push    bp                              
1f8a  pop     cx                              
1f8b  sar     word ptr [bp-4Fh],53h           
1f8f  jl      1FA3h                           
1f91  mov     bx,3F5Fh                        
1f94  xlat                                    
1f95  out     dx,al                           
1f96  das                                     
1f97  lea     ax,[92BEh]                      
1f9b  test    [di],dx                         
1f9d  sti                                     
1f9e  inc     sp                              
1f9f  aas                                     
1fa0  and     al,3Fh                          
1fa2  movsw                                   
1fa3  jmp     0C4DFh                          
1fa6  daa                                     
1fa7  jmp     3F2Ah:0A87Fh                    
1fac  jge     1F5Ah                           
1fae  mov     ax,[0BCE4h]                     
1fb1  jl      1FFAh                           
1fb4  rcr     ch,1                            
1fb6  push    bp                              
1fb7  arpl    ds:[bp+di+6h],di                
1fbb  int 3                                   
1fbc  and     dx,[si+77h]                     
1fbf  cmp     di,-6Fh                         
1fc2  cmp     word ptr [di],0FA91h            
1fc6  cmp     bl,[bx+di]                      
1fc8  jp      202Dh                           
1fca  and     ax,3143h                        
1fcd  shr     byte ptr [si+213Ch],89h         
1fd2  sar     word ptr [bx+si],1              
1fd4  add     byte ptr [bx-69h],0B8h          
1fd8  add     ch,bh                           
1fda  xlat                                    
1fdb  cmp     bx,sp                           
1fdd  mov     [bx+si+8h],bl                   
1fe0  sbb     si,[bx+di-1C18h]                
1fe4  xchg    ah,[bp+3B03h]                   
1fe8  mov     byte ptr [si+4245h],7h          
1fed  mov     dh,99h                          
1fef  jne     2028h                           
1ff1  fld     tword ptr [333Ah]               
1ff5  jno     2013h                           
1ff7  shl     byte ptr [bp+di],cl             
1ff9  ??? (FPU)                               
1ffb  out     dx,al                           
1ffc  dec     cx                              
1ffd  nop                                     
1ffe  pop     dx                              
1fff  cmp     [bp-4179h],sp                   
2003  rcl     byte ptr [bx-26h],0A5h          
2007  and     byte ptr [bp-4A5Eh],32h         
200c  loop    2076h                           
200e  mov     dl,11h                          
2010  cmpsw                                   
2011  push    dx                              
2012  lahf                                    
2013  inc     sp                              
2014  pop     cx                              
2015  mov     bh,10h                          
2017  sub     al,25h                          
2019  dec     cx                              
201a  in      al,2Dh                          
201c  xor     al,4Fh                          
201f  push    bx                              
2020  scasb                                   
2021  into                                    
2022  imul    sp,[di],-71h                    
2025  pop     cx                              
2026  add     al,0A4h                         
2028  rcr     dh,0C2h                         
202b  jge     2028h                           
202d  call    3EF6h                           
2030  sahf                                    
2031  out     88h,ax                          
2033  pop     dx                              
2034  push    di                              
2035  xchg    ax,cx                           
2036  cmp     al,0BFh                         
2038  push    ax                              
2039  and     word ptr [bp+si],18h            
203c  dec     si                              
203d  dec     bx                              
203e  bound   di,bp                           
2041  or      word ptr [bx+6AFh],-6Ch         
2046  jge     2059h                           
2048  in      al,2Dh                          
204a  ficomp  word ptr [bx-2D32h]             
204e  enter   0DD04h,0A6h                     
2052  fmul    dword ptr [bp+si]               

; ----- sub_2054 -----
2054  push    bp                              
2055  mov     bp,sp                           
2057  sub     sp,6h                           
205a  push    si                              
205b  push    di                              
205c  mov     di,[bp+6h]                      
205f  mov     bx,1D3Ch                        
2062  or      di,di                           
2064  je      20E0h                           
2066  jns     206Dh                           
2068  mov     bx,1E98h                        
206b  neg     di                              
206d  mov     word ptr [bp-6h],20F2h          
2072  cmp     word ptr [bp+4h],0h             
2076  jne     2098h                           
2078  mov     word ptr [bp-6h],20E8h          
207d  wait                                    
207e  fstcw   word ptr [bp-2h]                
2081  nop                                     
2082  wait                                    
2083  mov     ax,[bp-2h]                      
2086  or      ax,38h                          
2089  mov     [bp-4h],ax                      
208c  wait                                    
208d  fldcw   word ptr [bp-4h]                
2090  les     si,[bp+8h]                      
2093  wait                                    
2094  fld     tword ptr es:[si+2h]            
2098  push    di                              
2099  pop     di                              
209a  add     bx,54h                          
209d  or      di,di                           
209f  je      20C4h                           
20a1  mov     ax,di                           
20a3  shr     di,1                            
20a5  shr     di,1                            
20a7  shr     di,1                            
20a9  push    di                              
20aa  and     ax,7h                           
20ad  je      2099h                           
20af  push    bx                              
20b0  shl     al,1                            
20b2  shl     al,1                            
20b4  mov     ah,al                           
20b6  shl     al,1                            
20b8  add     al,ah                           
20ba  xor     ah,ah                           
20bc  add     bx,ax                           
20be  jmp     word ptr [bp-6h]                
20c1  pop     bx                              
20c2  jmp     2099h                           
20c4  cmp     word ptr [bp+4h],0h             
20c8  jne     20E0h                           
20ca  wait                                    
20cb  fclex                                   
20cd  wait                                    
20ce  fldcw   word ptr [bp-2h]                
20d1  les     si,[bp+8h]                      
20d4  wait                                    
20d5  fstp    tword ptr es:[si+2h]            
20d9  mov     word ptr es:[si],0h             
20de  nop                                     
20df  wait                                    
20e0  pop     di                              
20e1  pop     si                              
20e2  mov     sp,bp                           
20e4  pop     bp                              
20e5  ret     8h                              
20e8  wait                                    
20e9  fld     tword ptr cs:[bx+2h]            
20ed  wait                                    
20ee  fmulp   st(1)                           
20f0  jmp     20C1h                           
20f2  push    word ptr cs:[bx+0Ah]            
20f6  push    word ptr cs:[bx+8h]             
20fa  push    word ptr cs:[bx+6h]             
20fe  push    word ptr cs:[bx+4h]             
2102  mov     cx,cs:[bx+2h]                   
2106  mov     ax,cs:[bx]                      
2109  cmp     ax,8000h                        
210c  adc     cx,-1h                          
210f  push    cx                              
2110  push    ax                              
2111  mov     ax,sp                           
2113  push    word ptr [bp+0Ah]               
2116  push    word ptr [bp+8h]                
2119  push    ss                              
211a  push    ax                              
211b  call    2129h                           
211e  add     sp,0Ch                          
2121  jmp     20C1h                           
2123  jmp     2292h                           
2126  jmp     227Dh                           

; ----- sub_2129 -----
2129  push    bp                              
212a  mov     bp,sp                           
212c  sub     sp,12h                          
212f  push    si                              
2130  push    di                              
2131  mov     cx,9h                           
2134  mov     ax,ss                           
2136  mov     es,ax                           
2138  lea     di,[bp-12h]                     
213b  xor     ax,ax                           
213d  rep     stosw                           
213f  lds     si,[bp+8h]                      
2142  les     di,[bp+4h]                      
2145  mov     ax,[si+0Ah]                     
2148  mov     bx,es:[di+0Ah]                  
214c  mov     cx,ax                           
214e  xor     cx,bx                           
2150  and     cx,8000h                        
2154  mov     [bp-2h],cx                      
2157  mov     dx,7FFFh                        
215a  and     ax,dx                           
215c  cmp     ax,dx                           
215e  je      2123h                           
2160  and     bx,dx                           
2162  cmp     bx,dx                           
2164  je      2123h                           
2166  mov     dx,ax                           
2168  add     dx,bx                           
216a  cmp     dx,0BFFDh                       
216e  ja      2123h                           
2170  cmp     dx,3FBFh                        
2174  jbe     2126h                           
2176  or      ax,ax                           
2178  jne     218Bh                           
217a  inc     dx                              
217b  mov     ax,[si]                         
217d  or      ax,[si+2h]                      
2180  or      ax,[si+4h]                      
2183  or      ax,[si+6h]                      
2186  or      ax,[si+8h]                      
2189  je      2126h                           
218b  or      bx,bx                           
218d  jne     21A5h                           
218f  inc     dx                              
2190  mov     ax,es:[di]                      
2193  or      ax,es:[di+2h]                   
2197  or      ax,es:[di+4h]                   
219b  or      ax,es:[di+6h]                   
219f  or      ax,es:[di+8h]                   
21a3  je      2126h                           
21a5  sub     dx,3FFEh                        
21a9  mov     [si+0Ah],dx                     
21ac  add     di,8h                           
21af  mov     cx,5h                           
21b2  lea     bx,[bp-12h]                     
21b5  push    cx                              
21b6  push    si                              
21b7  push    di                              
21b8  mov     ax,es:[di]                      
21bb  mul     word ptr [si]                   
21bd  add     ss:[bx],ax                      
21c0  adc     ss:[bx+2h],dx                   
21c4  adc     word ptr ss:[bx+4h],0h          
21c9  add     si,2h                           
21cc  sub     di,2h                           
21cf  loop    21B8h                           
21d1  pop     di                              
21d2  pop     si                              
21d3  pop     cx                              
21d4  add     bx,2h                           
21d7  add     si,2h                           
21da  add     cx,-1h                          
21dd  jne     21B5h                           
21df  mov     si,[bp+8h]                      
21e2  mov     dx,[bp-10h]                     
21e5  mov     cx,[bp-0Eh]                     
21e8  mov     bx,[bp-0Ch]                     
21eb  mov     ax,[bp-0Ah]                     
21ee  mov     di,[bp-8h]                      
21f1  cmp     word ptr [si+0Ah],0h            
21f5  jg      220Bh                           
21f7  jmp     2258h                           
21f9  shl     word ptr [bp-12h],1             
21fc  rcl     dx,1                            
21fe  rcl     cx,1                            
2200  rcl     bx,1                            
2202  rcl     ax,1                            
2204  rcl     di,1                            
2206  dec     word ptr [si+0Ah]               
2209  je      2258h                           
220b  or      di,di                           
220d  jns     21F9h                           
220f  cmp     word ptr [bp-12h],8000h         
2214  jb      2235h                           
2216  ja      221Eh                           
2218  test    dx,1h                           
221c  je      2235h                           
221e  add     dx,1h                           
2221  adc     cx,0h                           
2224  adc     bx,0h                           
2227  adc     ax,0h                           
222a  adc     di,0h                           
222d  jae     2235h                           
222f  mov     di,8000h                        
2232  inc     word ptr [si+0Ah]               
2235  cmp     word ptr [si+0Ah],7FFFh         
223a  jae     2292h                           
223c  mov     [si+8h],di                      
223f  mov     [si+6h],ax                      
2242  mov     [si+4h],bx                      
2245  mov     [si+2h],cx                      
2248  mov     [si],dx                         
224a  mov     ax,[bp-2h]                      
224d  or      [si+0Ah],ax                     
2250  pop     di                              
2251  pop     si                              
2252  mov     sp,bp                           
2254  pop     bp                              
2255  ret     8h                              
2258  dec     word ptr [si+0Ah]               
225b  shr     di,1                            
225d  rcr     ax,1                            
225f  rcr     bx,1                            
2261  rcr     cx,1                            
2263  rcr     dx,1                            
2265  rcr     word ptr [bp-12h],1             
2268  adc     word ptr [bp-4h],0h             
226c  inc     word ptr [si+0Ah]               
226f  jne     225Bh                           
2271  cmp     word ptr [bp-4h],0h             
2275  je      220Fh                           
2277  or      word ptr [bp-12h],1h            
227b  jmp     220Fh                           
227d  xor     ax,ax                           
227f  mov     [si+0Ah],ax                     
2282  mov     [si+8h],ax                      
2285  mov     [si+6h],ax                      
2288  mov     [si+4h],ax                      
228b  mov     [si+2h],ax                      
228e  mov     [si],ax                         
2290  jmp     2250h                           
2292  mov     ax,7FFFh                        
2295  or      ax,[bp-2h]                      
2298  mov     [si+0Ah],ax                     
229b  xor     ax,ax                           
229d  mov     [si+8h],ax                      
22a0  mov     [si+6h],ax                      
22a3  mov     [si+4h],ax                      
22a6  mov     [si+2h],ax                      
22a9  mov     [si],ax                         
22ab  jmp     2250h                           
22ad  add     [bx+si],al                      

; ----- sub_22ae -----
22ae  push    bp                              
22af  mov     bp,sp                           
22b1  sub     sp,0Ch                          
22b4  push    si                              
22b5  push    di                              
22b6  mov     ax,[bp+6h]                      
22b9  mov     [bp-0Ch],ax                     
22bc  les     si,[bp+8h]                      
22bf  xor     ax,ax                           
22c1  mov     di,ax                           
22c3  mov     bx,ax                           
22c5  mov     cx,ax                           
22c7  mov     dx,ax                           
22c9  mov     dl,es:[si]                      
22cc  inc     si                              
22cd  jmp     2309h                           
22cf  mov     [bp-2h],di                      
22d2  mov     [bp-4h],ax                      
22d5  mov     [bp-6h],bx                      
22d8  mov     [bp-8h],cx                      
22db  mov     [bp-0Ah],dx                     
22de  call    235Ch                           
22e1  call    235Ch                           
22e4  add     dx,[bp-0Ah]                     
22e7  adc     cx,[bp-8h]                      
22ea  adc     bx,[bp-6h]                      
22ed  adc     ax,[bp-4h]                      
22f0  adc     di,[bp-2h]                      
22f3  call    235Ch                           
22f6  add     dl,es:[si]                      
22f9  inc     si                              
22fa  adc     dh,0h                           
22fd  adc     cx,0h                           
2300  adc     bx,0h                           
2303  adc     ax,0h                           
2306  adc     di,0h                           
2309  dec     word ptr [bp-0Ch]               
230c  jne     22CFh                           
230e  mov     si,404Eh                        
2311  jmp     2320h                           
2313  mov     di,ax                           
2315  mov     ax,bx                           
2317  mov     bx,cx                           
2319  mov     cx,dx                           
231b  xor     dx,dx                           
231d  sub     si,10h                          
2320  or      di,di                           
2322  je      2313h                           
2324  js      2335h                           
2326  shl     dx,1                            
2328  rcl     cx,1                            
232a  rcl     bx,1                            
232c  rcl     ax,1                            
232e  rcl     di,1                            
2330  dec     si                              
2331  or      di,di                           
2333  jns     2326h                           
2335  push    si                              
2336  mov     si,[bp+4h]                      
2339  pop     ss:[si+0Ah]                     
233d  mov     ss:[si+8h],di                   
2341  mov     ss:[si+6h],ax                   
2345  mov     ss:[si+4h],bx                   
2349  mov     ss:[si+2h],cx                   
234d  mov     ss:[si],dx                      
2350  mov     ax,si                           
2352  mov     dx,ss                           
2354  pop     di                              
2355  pop     si                              
2356  mov     sp,bp                           
2358  pop     bp                              
2359  ret     8h                              

; ----- sub_235c -----
235c  shl     dx,1                            
235e  rcl     cx,1                            
2360  rcl     bx,1                            
2362  rcl     ax,1                            
2364  rcl     di,1                            
2366  ret                                     
2367  add     [bx+si],al                      

; ===== SETACQUIREMODULE =====
2368  mov     ax,0FFFFh                       ; segment seg2:0000
236b  push    bp                              
236c  mov     bp,sp                           
236e  push    ds                              
236f  mov     ds,ax                           
2371  push    3h                              
2373  call    9B0h                            
2376  add     sp,2h                           
2379  push    73Ah                            
237c  call    93Fh                            
237f  add     sp,2h                           
2382  push    word ptr [bp+8h]                
2385  push    word ptr [bp+6h]                
2388  call far sub_0165                       
238d  add     sp,4h                           
2390  mov     [0B0Ch],ax                      
2393  pop     ds                              
2394  leave                                   
2395  retf    4h                              

; ===== SETDSPMODULE =====
2398  mov     ax,2EABh                        ; segment seg2:0000
239b  push    bp                              
239c  mov     bp,sp                           
239e  push    ds                              
239f  mov     ds,ax                           
23a1  push    3h                              
23a3  call    9B0h                            
23a6  add     sp,2h                           
23a9  push    73Ah                            
23ac  call    93Fh                            
23af  add     sp,2h                           
23b2  push    word ptr [bp+8h]                
23b5  push    word ptr [bp+6h]                
23b8  call far sub_0165                       
23bd  add     sp,4h                           
23c0  mov     [0B0Eh],ax                      
23c3  pop     ds                              
23c4  leave                                   
23c5  retf    4h                              

; ===== SETEHTMODULE =====
23c8  mov     ax,3119h                        ; segment seg2:0000
23cb  push    bp                              
23cc  mov     bp,sp                           
23ce  push    ds                              
23cf  mov     ds,ax                           
23d1  push    3h                              
23d3  call    9B0h                            
23d6  add     sp,2h                           
23d9  push    73Ah                            
23dc  call    93Fh                            
23df  add     sp,2h                           
23e2  push    word ptr [bp+8h]                
23e5  push    word ptr [bp+6h]                
23e8  call far sub_0165                       
23ed  add     sp,4h                           
23f0  mov     [0B10h],ax                      
23f3  pop     ds                              
23f4  leave                                   
23f5  retf    4h                              

; ===== SETEOMODULE =====
23f8  mov     ax,3697h                        ; segment seg2:0000
23fb  push    bp                              
23fc  mov     bp,sp                           
23fe  push    ds                              
23ff  mov     ds,ax                           
2401  push    3h                              
2403  call    9B0h                            
2406  add     sp,2h                           
2409  push    73Ah                            
240c  call    93Fh                            
240f  add     sp,2h                           
2412  push    word ptr [bp+8h]                
2415  push    word ptr [bp+6h]                
2418  call far sub_0165                       
241d  add     sp,4h                           
2420  mov     [0B12h],ax                      
2423  pop     ds                              
2424  leave                                   
2425  retf    4h                              

; ===== SETIMEXMODULE =====
2428  mov     ax,4E5Bh                        ; segment seg2:0000
242b  push    bp                              
242c  mov     bp,sp                           
242e  push    ds                              
242f  mov     ds,ax                           
2431  push    3h                              
2433  call    9B0h                            
2436  add     sp,2h                           
2439  push    73Ah                            
243c  call    93Fh                            
243f  add     sp,2h                           
2442  push    word ptr [bp+8h]                
2445  push    word ptr [bp+6h]                
2448  call far sub_0165                       
244d  add     sp,4h                           
2450  mov     [0B14h],ax                      
2453  pop     ds                              
2454  leave                                   
2455  retf    4h                              

; ===== SETOVERLAYMODULE =====
2458  mov     ax,51CFh                        ; segment seg2:0000
245b  push    bp                              
245c  mov     bp,sp                           
245e  push    ds                              
245f  mov     ds,ax                           
2461  push    3h                              
2463  call    9B0h                            
2466  add     sp,2h                           
2469  push    73Ah                            
246c  call    93Fh                            
246f  add     sp,2h                           
2472  push    word ptr [bp+8h]                
2475  push    word ptr [bp+6h]                
2478  call far sub_0165                       
247d  add     sp,4h                           
2480  mov     [0B16h],ax                      
2483  pop     ds                              
2484  leave                                   
2485  retf    4h                              

; ===== SETSTAGEMODULE =====
2488  mov     ax,5EF5h                        ; segment seg2:0000
248b  push    bp                              
248c  mov     bp,sp                           
248e  push    ds                              
248f  mov     ds,ax                           
2491  push    3h                              
2493  call    9B0h                            
2496  add     sp,2h                           
2499  push    73Ah                            
249c  call    93Fh                            
249f  add     sp,2h                           
24a2  push    word ptr [bp+8h]                
24a5  push    word ptr [bp+6h]                
24a8  call far sub_0165                       
24ad  add     sp,4h                           
24b0  mov     [0B18h],ax                      
24b3  pop     ds                              
24b4  leave                                   
24b5  retf    4h                              

; ===== SETVACMODULE =====
24b8  mov     ax,646Dh                        ; segment seg2:0000
24bb  push    bp                              
24bc  mov     bp,sp                           
24be  push    ds                              
24bf  mov     ds,ax                           
24c1  push    3h                              
24c3  call    9B0h                            
24c6  add     sp,2h                           
24c9  push    73Ah                            
24cc  call    93Fh                            
24cf  add     sp,2h                           
24d2  push    word ptr [bp+8h]                
24d5  push    word ptr [bp+6h]                
24d8  call far sub_0165                       
24dd  add     sp,4h                           
24e0  mov     [0B1Ah],ax                      
24e3  pop     ds                              
24e4  leave                                   
24e5  retf    4h                              

; ===== SETVIDMODULE =====
24e8  mov     ax,68F9h                        ; segment seg2:0000
24eb  push    bp                              
24ec  mov     bp,sp                           
24ee  push    ds                              
24ef  mov     ds,ax                           
24f1  push    3h                              
24f3  call    9B0h                            
24f6  add     sp,2h                           
24f9  push    73Ah                            
24fc  call    93Fh                            
24ff  add     sp,2h                           
2502  push    word ptr [bp+8h]                
2505  push    word ptr [bp+6h]                
2508  call far sub_0165                       
250d  add     sp,4h                           
2510  mov     [0B1Ch],ax                      
2513  pop     ds                              
2514  leave                                   
2515  retf    4h                              

; ===== INSTALLPRIMS =====
2518  mov     ax,6F07h                        ; segment seg2:0000
251b  push    bp                              
251c  mov     bp,sp                           
251e  push    ds                              
251f  mov     ds,ax                           
2521  push    73Ah                            
2524  call    93Fh                            
2527  add     sp,2h                           
252a  call far sub_0151                       
252f  pop     ds                              
2530  leave                                   
2531  retf                                    

; ===== INSTALLRLM =====
2532  mov     ax,2519h                        ; segment seg2:0000
2535  push    bp                              
2536  mov     bp,sp                           
2538  push    ds                              
2539  mov     ds,ax                           
253b  push    73Ah                            
253e  call    93Fh                            
2541  add     sp,2h                           
2544  push    word ptr [bp+8h]                
2547  push    word ptr [bp+6h]                
254a  call far sub_0165                       
254f  add     sp,4h                           
2552  pop     ds                              
2553  leave                                   
2554  retf    4h                              
2557  add     [bx+si],al                      

; ===== INITIALISETIGA =====
2558  mov     ax,7169h                        ; segment seg2:0000
255b  enter   12h,0h                          
255f  push    di                              
2560  push    si                              
2561  push    ds                              
2562  mov     ds,ax                           
2564  xor     ax,ax                           
2566  mov     [bp-8h],ax                      
2569  mov     [bp-6h],ax                      
256c  xor     di,di                           
256e  mov     [bp-0Ah],di                     
2571  call far KERNEL.GETWINFLAGS             
2576  and     ax,1h                           
2579  push    ax                              
257a  push    8001h                           
257d  push    -1h                             
257f  call far sub_039c                       
2584  add     sp,6h                           
2587  or      ax,ax                           
2589  jne     2598h                           
258b  call far TERMINATETIGA                  
2590  mov     ax,0FFFFh                       
2593  pop     ds                              
2594  pop     si                              
2595  pop     di                              
2596  leave                                   
2597  retf                                    
2598  push    ds                              
2599  push    252h                            
259c  push    ds                              
259d  push    1D2h                            
25a0  call far KERNEL.LSTRCPY                 
25a5  push    ds                              
25a6  push    252h                            
25a9  push    ds                              
25aa  push    764h                            
25ad  call far KERNEL.LSTRCAT                 
25b2  push    ds                              
25b3  push    252h                            
25b6  call far INSTALLRLM                     
25bb  or      ax,ax                           
25bd  jge     25CCh                           
25bf  call far TERMINATETIGA                  
25c4  mov     ax,0FFFEh                       
25c7  pop     ds                              
25c8  pop     si                              
25c9  pop     di                              
25ca  leave                                   
25cb  retf                                    
25cc  push    ds                              
25cd  push    0B30h                           
25d0  push    18h                             
25d2  push    0h                              
25d4  call far sub_002e                       
25d9  add     sp,8h                           
25dc  push    0h                              
25de  push    2h                              
25e0  call far sub_001c                       
25e5  add     sp,4h                           
25e8  push    0h                              
25ea  push    100h                            
25ed  push    0h                              
25ef  push    100h                            
25f2  push    4h                              
25f4  push    0h                              
25f6  push    1h                              
25f8  push    7E0Fh                           
25fb  call far sub_0064                       
2600  add     sp,0Ch                          
2603  mov     [bp-4h],ax                      
2606  mov     [bp-2h],dx                      
2609  push    dx                              
260a  push    ax                              
260b  push    ds                              
260c  push    12h                             
260f  mov     [bp-0Eh],ax                     
2612  mov     [bp-0Ch],dx                     
2615  call far sub_0091                       
261a  add     sp,0Ch                          
261d  push    20h                             
261f  push    0h                              
2621  push    0h                              
2623  push    word ptr [bp-2h]                
2626  push    word ptr [bp-4h]                
2629  push    5h                              
262b  push    9h                              
262d  call far sub_00e3                       
2632  add     sp,0Eh                          
2635  push    word ptr [bp-0Ch]               
2638  push    word ptr [bp-0Eh]               
263b  push    4h                              
263d  push    0h                              
263f  push    1h                              
2641  push    7E0Eh                           
2644  call far sub_0064                       
2649  add     sp,0Ch                          
264c  push    ds                              
264d  push    112h                            
2650  push    40h                             
2652  push    1h                              
2654  push    0h                              
2656  push    0h                              
2658  push    4h                              
265a  push    0h                              
265c  push    0h                              
265e  push    10h                             
2660  push    4h                              
2662  push    0h                              
2664  push    3h                              
2666  push    7E16h                           
2669  call far sub_0076                       
266e  add     sp,1Ch                          
2671  push    0h                              
2673  push    40h                             
2675  push    0h                              
2677  push    40h                             
2679  push    4h                              
267b  push    0h                              
267d  push    1h                              
267f  push    7E0Fh                           
2682  call far sub_0064                       
2687  add     sp,0Ch                          
268a  mov     [bp-4h],ax                      
268d  mov     [bp-2h],dx                      
2690  push    dx                              
2691  push    ax                              
2692  push    ds                              
2693  push    112h                            
2696  mov     [bp-12h],ax                     
2699  mov     [bp-10h],dx                     
269c  call far sub_0091                       
26a1  add     sp,0Ch                          
26a4  push    0h                              
26a6  push    10h                             
26a8  push    word ptr [bp-2h]                
26ab  push    word ptr [bp-4h]                
26ae  push    4h                              
26b0  push    1Bh                             
26b2  call far sub_00e3                       
26b7  add     sp,0Ch                          
26ba  push    word ptr [bp-10h]               
26bd  push    word ptr [bp-12h]               
26c0  push    4h                              
26c2  push    0h                              
26c4  push    1h                              
26c6  push    7E0Eh                           
26c9  call far sub_0064                       
26ce  add     sp,0Ch                          
26d1  push    0h                              
26d3  call far USER.GETSYSTEMMETRICS          
26d8  mov     si,ax                           
26da  push    0h                              
26dc  push    3333h                           
26df  push    0h                              
26e1  push    1h                              
26e3  call far USER.GETSYSTEMMETRICS          
26e8  push    ax                              
26e9  push    si                              
26ea  push    0h                              
26ec  push    0h                              
26ee  push    7h                              
26f0  push    0Bh                             
26f2  call far sub_001c                       
26f7  add     sp,12h                          
26fa  push    ds                              
26fb  push    252h                            
26fe  push    ds                              
26ff  push    152h                            
2702  call far KERNEL.LSTRCPY                 
2707  push    ds                              
2708  push    252h                            
270b  push    ds                              
270c  push    770h                            
270f  call far KERNEL.LSTRCAT                 
2714  push    ds                              
2715  push    780h                            
2718  push    ds                              
2719  push    77Ah                            
271c  push    ds                              
271d  push    778h                            
2720  push    ds                              
2721  push    352h                            
2724  push    50h                             
2726  push    ds                              
2727  push    252h                            
272a  call far KERNEL.GETPRIVATEPROFILESTRING 
272f  or      ax,ax                           
2731  je      2743h                           
2733  push    ds                              
2734  push    352h                            
2737  call    2822h                           
273a  add     sp,4h                           
273d  mov     [bp-8h],ax                      
2740  mov     di,1h                           
2743  mov     si,[bp-0Ah]                     
2746  push    ds                              
2747  push    780h                            
274a  push    ds                              
274b  push    78Ah                            
274e  push    ds                              
274f  push    778h                            
2752  push    ds                              
2753  push    352h                            
2756  push    50h                             
2758  push    ds                              
2759  push    252h                            
275c  call far KERNEL.GETPRIVATEPROFILESTRING 
2761  or      ax,ax                           
2763  je      2775h                           
2765  push    ds                              
2766  push    352h                            
2769  call    2822h                           
276c  add     sp,4h                           
276f  mov     [bp-6h],ax                      
2772  mov     si,1h                           
2775  or      di,di                           
2777  jne     27A5h                           
2779  mov     ax,0FFF7h                       
277c  mov     [bp-8h],ax                      
277f  push    ax                              
2780  push    ds                              
2781  push    790h                            
2784  push    ds                              
2785  push    352h                            
2788  call far USER._WSPRINTF                 
278d  add     sp,0Ah                          
2790  push    ds                              
2791  push    780h                            
2794  push    ds                              
2795  push    77Ah                            
2798  push    ds                              
2799  push    352h                            
279c  push    ds                              
279d  push    252h                            
27a0  call far KERNEL.WRITEPRIVATEPROFILESTRING
27a5  or      si,si                           
27a7  je      27AEh                           
27a9  mov     si,[bp-6h]                      
27ac  jmp     27D6h                           
27ae  xor     si,si                           
27b0  push    si                              
27b1  push    ds                              
27b2  push    790h                            
27b5  push    ds                              
27b6  push    352h                            
27b9  call far USER._WSPRINTF                 
27be  add     sp,0Ah                          
27c1  push    ds                              
27c2  push    780h                            
27c5  push    ds                              
27c6  push    78Ah                            
27c9  push    ds                              
27ca  push    352h                            
27cd  push    ds                              
27ce  push    252h                            
27d1  call far KERNEL.WRITEPRIVATEPROFILESTRING
27d6  push    0C000h                          
27d9  push    310h                            
27dc  push    10h                             
27de  push    0h                              
27e0  push    word ptr [bp-8h]                
27e3  call far FIELDINSERT                    
27e8  push    0C000h                          
27eb  push    300h                            
27ee  push    10h                             
27f0  push    0h                              
27f2  push    si                              
27f3  call far FIELDINSERT                    
27f8  push    6020h                           
27fb  push    0C0h                            
27fe  push    8h                              
2800  push    6020h                           
2803  push    0C0h                            
2806  push    8h                              
2808  call far FIELDEXTRACT                   
280d  and     ax,0DFh                         
2810  sub     dx,dx                           
2812  push    dx                              
2813  push    ax                              
2814  call far FIELDINSERT                    
2819  mov     ax,1h                           
281c  pop     ds                              
281d  pop     si                              
281e  pop     di                              
281f  leave                                   
2820  retf                                    
2821  add     [bx+si],al                      

; ----- sub_2822 -----
2822  enter   4h,0h                           
2826  push    si                              
2827  mov     si,[bp+4h]                      
282a  sub     ax,ax                           
282c  mov     [bp-2h],ax                      
282f  mov     [bp-4h],ax                      
2832  push    word ptr [bp+6h]                
2835  push    si                              
2836  call far USER.ANSIUPPER                 
283b  jmp     28A7h                           
283d  nop                                     
283e  cmp     byte ptr es:[si],30h            
2842  jl      2870h                           
2844  cmp     byte ptr es:[si],39h            
2848  jg      2870h                           
284a  mov     ax,[bp-4h]                      
284d  mov     dx,[bp-2h]                      
2850  add     ax,ax                           
2852  adc     dx,dx                           
2854  add     ax,ax                           
2856  adc     dx,dx                           
2858  add     ax,ax                           
285a  adc     dx,dx                           
285c  add     ax,ax                           
285e  adc     dx,dx                           
2860  mov     [bp-4h],ax                      
2863  mov     [bp-2h],dx                      
2866  mov     al,es:[si]                      
2869  cbw                                     
286a  sub     ax,30h                          
286d  jmp     289Fh                           
286f  nop                                     
2870  cmp     byte ptr es:[si],41h            
2874  jl      28A6h                           
2876  cmp     byte ptr es:[si],46h            
287a  jg      28A6h                           
287c  mov     ax,[bp-4h]                      
287f  mov     dx,[bp-2h]                      
2882  add     ax,ax                           
2884  adc     dx,dx                           
2886  add     ax,ax                           
2888  adc     dx,dx                           
288a  add     ax,ax                           
288c  adc     dx,dx                           
288e  add     ax,ax                           
2890  adc     dx,dx                           
2892  mov     [bp-4h],ax                      
2895  mov     [bp-2h],dx                      
2898  mov     al,es:[si]                      
289b  cbw                                     
289c  sub     ax,37h                          
289f  cwd                                     
28a0  add     [bp-4h],ax                      
28a3  adc     [bp-2h],dx                      
28a6  inc     si                              
28a7  mov     es,[bp+6h]                      
28aa  cmp     byte ptr es:[si],0h             
28ae  jne     283Eh                           
28b0  mov     ax,[bp-4h]                      
28b3  mov     dx,[bp-2h]                      
28b6  pop     si                              
28b7  leave                                   
28b8  ret                                     
28b9  nop                                     
28ba  add     [bx+si],al                      
28bc  add     [bx+si],al                      
28be  add     [bx+si],al                      

; ===== DELACQUIREMODULE =====
28c0  mov     ax,2369h                        ; segment seg2:0000
28c3  push    bp                              
28c4  mov     bp,sp                           
28c6  push    ds                              
28c7  mov     ds,ax                           
28c9  push    word ptr [0B0Ch]                ; [ds] f32 here = 0
28cd  push    2h                              
28cf  push    0h                              
28d1  push    1h                              
28d3  push    7E63h                           
28d6  call far sub_0064                       
28db  add     sp,0Ah                          
28de  pop     ds                              
28df  leave                                   
28e0  retf                                    
28e1  add     [bx+si],al                      

; ===== INITACQUIRECOMMS =====
28e2  mov     ax,28C1h                        ; segment seg2:0000
28e5  push    bp                              
28e6  mov     bp,sp                           
28e8  push    ds                              
28e9  mov     ds,ax                           
28eb  push    0h                              
28ed  mov     ax,[0B0Ch]                      
28f0  or      ax,4001h                        
28f3  push    ax                              
28f4  call far sub_0064                       
28f9  add     sp,4h                           
28fc  pop     ds                              
28fd  leave                                   
28fe  retf                                    
28ff  add     [bx+si],al                      

; ===== READACQUIRESTATUS =====
2900  mov     ax,28E3h                        ; segment seg2:0000
2903  push    bp                              
2904  mov     bp,sp                           
2906  push    ds                              
2907  mov     ds,ax                           
2909  push    word ptr [bp+8h]                
290c  push    word ptr [bp+6h]                
290f  push    5Ah                             
2911  push    81h                             
2914  push    1h                              
2916  mov     ax,[0B0Ch]                      
2919  or      ah,40h                          
291c  push    ax                              
291d  call far sub_006d                       
2922  add     sp,0Ch                          
2925  pop     ds                              
2926  leave                                   
2927  retf    4h                              

; ===== SETCOEFFTIGAREQUEST =====
292a  mov     ax,2901h                        ; segment seg2:0000
292d  push    bp                              
292e  mov     bp,sp                           
2930  push    ds                              
2931  mov     ds,ax                           
2933  push    word ptr [bp+0Ch]               
2936  push    word ptr [bp+0Ah]               
2939  push    word ptr [bp+8h]                
293c  push    word ptr [bp+6h]                
293f  push    8h                              
2941  push    4h                              
2943  mov     al,[bp+0Eh]                     
2946  cbw                                     
2947  push    ax                              
2948  push    2h                              
294a  push    0h                              
294c  mov     al,[bp+10h]                     
294f  cbw                                     
2950  push    ax                              
2951  push    2h                              
2953  push    0h                              
2955  push    3h                              
2957  mov     ax,[0B0Ch]                      
295a  or      ax,4008h                        
295d  push    ax                              
295e  call far sub_005b                       
2963  add     sp,1Ch                          
2966  pop     ds                              
2967  leave                                   
2968  retf    0Ch                             
296b  add     [bx+si],al                      

; ===== FRAMEAVERAGETIGAREQUEST =====
296c  mov     ax,292Bh                        ; segment seg2:0000
296f  push    bp                              
2970  mov     bp,sp                           
2972  push    ds                              
2973  mov     ds,ax                           
2975  push    word ptr [bp+8h]                
2978  push    word ptr [bp+6h]                
297b  push    9h                              
297d  push    1h                              
297f  push    1h                              
2981  mov     ax,[0B0Ch]                      
2984  or      ax,4002h                        
2987  push    ax                              
2988  call far sub_005b                       
298d  add     sp,0Ch                          
2990  pop     ds                              
2991  leave                                   
2992  retf    4h                              
2995  add     [bx+si],al                      

; ===== LINEINTEGRATIONTIGAREQUEST =====
2996  mov     ax,296Dh                        ; segment seg2:0000
2999  push    bp                              
299a  mov     bp,sp                           
299c  push    ds                              
299d  mov     ds,ax                           
299f  mov     al,[bp+6h]                      
29a2  sub     ah,ah                           
29a4  push    ax                              
29a5  push    2h                              
29a7  push    0h                              
29a9  push    1h                              
29ab  mov     ax,[0B0Ch]                      
29ae  or      ax,4004h                        
29b1  push    ax                              
29b2  call far sub_005b                       
29b7  add     sp,0Ah                          
29ba  pop     ds                              
29bb  leave                                   
29bc  retf    2h                              
29bf  add     [bx+si],al                      

; ===== FRAMEINTEGRATIONTIGAREQUEST =====
29c0  mov     ax,2997h                        ; segment seg2:0000
29c3  push    bp                              
29c4  mov     bp,sp                           
29c6  push    ds                              
29c7  mov     ds,ax                           
29c9  mov     al,[bp+6h]                      
29cc  sub     ah,ah                           
29ce  push    ax                              
29cf  push    2h                              
29d1  push    0h                              
29d3  push    1h                              
29d5  mov     ax,[0B0Ch]                      
29d8  or      ax,4003h                        
29db  push    ax                              
29dc  call far sub_005b                       
29e1  add     sp,0Ah                          
29e4  pop     ds                              
29e5  leave                                   
29e6  retf    2h                              
29e9  add     [bx+si],al                      

; ===== SETIDENTITYLUTTIGAREQUEST =====
29ea  mov     ax,29C1h                        ; segment seg2:0000
29ed  push    bp                              
29ee  mov     bp,sp                           
29f0  push    ds                              
29f1  mov     ds,ax                           
29f3  mov     al,[bp+6h]                      
29f6  cbw                                     
29f7  push    ax                              
29f8  push    2h                              
29fa  push    0h                              
29fc  push    1h                              
29fe  mov     ax,[0B0Ch]                      
2a01  or      ax,4012h                        
2a04  push    ax                              
2a05  call far sub_005b                       
2a0a  add     sp,0Ah                          
2a0d  pop     ds                              
2a0e  leave                                   
2a0f  retf    2h                              

; ===== SETGAMMALUTTIGAREQUEST =====
2a12  mov     ax,29EBh                        ; segment seg2:0000
2a15  push    bp                              
2a16  mov     bp,sp                           
2a18  push    ds                              
2a19  mov     ds,ax                           
2a1b  push    word ptr [bp+0Ch]               
2a1e  push    word ptr [bp+0Ah]               
2a21  push    word ptr [bp+8h]                
2a24  push    word ptr [bp+6h]                
2a27  push    8h                              
2a29  push    4h                              
2a2b  mov     al,[bp+0Eh]                     
2a2e  cbw                                     
2a2f  push    ax                              
2a30  push    2h                              
2a32  push    0h                              
2a34  push    2h                              
2a36  mov     ax,[0B0Ch]                      
2a39  or      ax,4013h                        
2a3c  push    ax                              
2a3d  call far sub_005b                       
2a42  add     sp,16h                          
2a45  pop     ds                              
2a46  leave                                   
2a47  retf    0Ah                             

; ===== SETINVERTLUTTIGAREQUEST =====
2a4a  mov     ax,2A13h                        ; segment seg2:0000
2a4d  push    bp                              
2a4e  mov     bp,sp                           
2a50  push    ds                              
2a51  mov     ds,ax                           
2a53  mov     al,[bp+6h]                      
2a56  cbw                                     
2a57  push    ax                              
2a58  push    2h                              
2a5a  push    0h                              
2a5c  push    1h                              
2a5e  mov     ax,[0B0Ch]                      
2a61  or      ax,4014h                        
2a64  push    ax                              
2a65  call far sub_005b                       
2a6a  add     sp,0Ah                          
2a6d  pop     ds                              
2a6e  leave                                   
2a6f  retf    2h                              

; ===== COMBINELUTSTIGAREQUEST =====
2a72  mov     ax,2A4Bh                        ; segment seg2:0000
2a75  push    bp                              
2a76  mov     bp,sp                           
2a78  push    ds                              
2a79  mov     ds,ax                           
2a7b  mov     al,[bp+6h]                      
2a7e  cbw                                     
2a7f  push    ax                              
2a80  push    2h                              
2a82  push    0h                              
2a84  mov     al,[bp+8h]                      
2a87  cbw                                     
2a88  push    ax                              
2a89  push    2h                              
2a8b  push    0h                              
2a8d  mov     al,[bp+0Ah]                     
2a90  cbw                                     
2a91  push    ax                              
2a92  push    2h                              
2a94  push    0h                              
2a96  push    3h                              
2a98  mov     ax,[0B0Ch]                      
2a9b  or      ax,4015h                        
2a9e  push    ax                              
2a9f  call far sub_005b                       
2aa4  add     sp,16h                          
2aa7  pop     ds                              
2aa8  leave                                   
2aa9  retf    6h                              

; ===== SETWINDOWTIGAREQUEST =====
2aac  mov     ax,2A73h                        ; segment seg2:0000
2aaf  push    bp                              
2ab0  mov     bp,sp                           
2ab2  push    ds                              
2ab3  mov     ds,ax                           
2ab5  mov     al,[bp+6h]                      
2ab8  cbw                                     
2ab9  push    ax                              
2aba  push    2h                              
2abc  push    0h                              
2abe  mov     al,[bp+8h]                      
2ac1  cbw                                     
2ac2  push    ax                              
2ac3  push    2h                              
2ac5  push    0h                              
2ac7  push    word ptr [bp+0Ah]               
2aca  push    2h                              
2acc  push    0h                              
2ace  push    word ptr [bp+0Ch]               
2ad1  push    2h                              
2ad3  push    0h                              
2ad5  push    word ptr [bp+0Eh]               
2ad8  push    2h                              
2ada  push    0h                              
2adc  push    word ptr [bp+10h]               
2adf  push    2h                              
2ae1  push    0h                              
2ae3  push    6h                              
2ae5  mov     ax,[0B0Ch]                      
2ae8  or      ax,4010h                        
2aeb  push    ax                              
2aec  call far sub_005b                       
2af1  add     sp,28h                          
2af4  pop     ds                              
2af5  leave                                   
2af6  retf    0Ch                             
2af9  add     [bx+si],al                      

; ===== SETWINDREQDTIGAREQUEST =====
2afa  mov     ax,2AADh                        ; segment seg2:0000
2afd  push    bp                              
2afe  mov     bp,sp                           
2b00  push    ds                              
2b01  mov     ds,ax                           
2b03  mov     al,[bp+6h]                      
2b06  cbw                                     
2b07  push    ax                              
2b08  push    2h                              
2b0a  push    0h                              
2b0c  push    1h                              
2b0e  mov     ax,[0B0Ch]                      
2b11  or      ax,400Eh                        
2b14  push    ax                              
2b15  call far sub_005b                       
2b1a  add     sp,0Ah                          
2b1d  pop     ds                              
2b1e  leave                                   
2b1f  retf    2h                              

; ===== SETMIXINGREQDTIGAREQUEST =====
2b22  mov     ax,2AFBh                        ; segment seg2:0000
2b25  push    bp                              
2b26  mov     bp,sp                           
2b28  push    ds                              
2b29  mov     ds,ax                           
2b2b  mov     al,[bp+6h]                      
2b2e  cbw                                     
2b2f  push    ax                              
2b30  push    2h                              
2b32  push    0h                              
2b34  push    1h                              
2b36  mov     ax,[0B0Ch]                      
2b39  or      ax,400Dh                        
2b3c  push    ax                              
2b3d  call far sub_005b                       
2b42  add     sp,0Ah                          
2b45  pop     ds                              
2b46  leave                                   
2b47  retf    2h                              

; ===== ASSIGNZONEPORTTIGAREQUEST =====
2b4a  mov     ax,2B23h                        ; segment seg2:0000
2b4d  push    bp                              
2b4e  mov     bp,sp                           
2b50  push    ds                              
2b51  mov     ds,ax                           
2b53  mov     al,[bp+6h]                      
2b56  cbw                                     
2b57  push    ax                              
2b58  push    2h                              
2b5a  push    0h                              
2b5c  mov     al,[bp+8h]                      
2b5f  cbw                                     
2b60  push    ax                              
2b61  push    2h                              
2b63  push    0h                              
2b65  push    2h                              
2b67  mov     ax,[0B0Ch]                      
2b6a  or      ax,400Ch                        
2b6d  push    ax                              
2b6e  call far sub_005b                       
2b73  add     sp,10h                          
2b76  pop     ds                              
2b77  leave                                   
2b78  retf    4h                              
2b7b  add     [bx+si],al                      

; ===== SETDETINVERTTIGAREQUEST =====
2b7c  mov     ax,2B4Bh                        ; segment seg2:0000
2b7f  push    bp                              
2b80  mov     bp,sp                           
2b82  push    ds                              
2b83  mov     ds,ax                           
2b85  mov     al,[bp+6h]                      
2b88  cbw                                     
2b89  push    ax                              
2b8a  push    2h                              
2b8c  push    0h                              
2b8e  mov     al,[bp+8h]                      
2b91  cbw                                     
2b92  push    ax                              
2b93  push    2h                              
2b95  push    0h                              
2b97  push    2h                              
2b99  mov     ax,[0B0Ch]                      
2b9c  or      ax,400Bh                        
2b9f  push    ax                              
2ba0  call far sub_005b                       
2ba5  add     sp,10h                          
2ba8  pop     ds                              
2ba9  leave                                   
2baa  retf    4h                              
2bad  add     [bx+si],al                      

; ===== SETDETGAINTIGAREQUEST =====
2bae  mov     ax,2B7Dh                        ; segment seg2:0000
2bb1  push    bp                              
2bb2  mov     bp,sp                           
2bb4  push    ds                              
2bb5  mov     ds,ax                           
2bb7  push    word ptr [bp+0Ch]               
2bba  push    word ptr [bp+0Ah]               
2bbd  push    word ptr [bp+8h]                
2bc0  push    word ptr [bp+6h]                
2bc3  push    8h                              
2bc5  push    4h                              
2bc7  mov     al,[bp+0Eh]                     
2bca  cbw                                     
2bcb  push    ax                              
2bcc  push    2h                              
2bce  push    0h                              
2bd0  push    2h                              
2bd2  mov     ax,[0B0Ch]                      
2bd5  or      ax,4009h                        
2bd8  push    ax                              
2bd9  call far sub_005b                       
2bde  add     sp,16h                          
2be1  pop     ds                              
2be2  leave                                   
2be3  retf    0Ah                             

; ===== SETDETOFFSETTIGAREQUEST =====
2be6  mov     ax,2BAFh                        ; segment seg2:0000
2be9  push    bp                              
2bea  mov     bp,sp                           
2bec  push    ds                              
2bed  mov     ds,ax                           
2bef  push    word ptr [bp+0Ch]               
2bf2  push    word ptr [bp+0Ah]               
2bf5  push    word ptr [bp+8h]                
2bf8  push    word ptr [bp+6h]                
2bfb  push    8h                              
2bfd  push    4h                              
2bff  mov     al,[bp+0Eh]                     
2c02  cbw                                     
2c03  push    ax                              
2c04  push    2h                              
2c06  push    0h                              
2c08  push    2h                              
2c0a  mov     ax,[0B0Ch]                      
2c0d  or      ax,400Ah                        
2c10  push    ax                              
2c11  call far sub_005b                       
2c16  add     sp,16h                          
2c19  pop     ds                              
2c1a  leave                                   
2c1b  retf    0Ah                             

; ===== LINEAVERAGETIGAREQUEST =====
2c1e  mov     ax,2BE7h                        ; segment seg2:0000
2c21  push    bp                              
2c22  mov     bp,sp                           
2c24  push    ds                              
2c25  mov     ds,ax                           
2c27  mov     al,[bp+6h]                      
2c2a  sub     ah,ah                           
2c2c  push    ax                              
2c2d  push    2h                              
2c2f  push    0h                              
2c31  mov     al,[bp+8h]                      
2c34  push    ax                              
2c35  push    2h                              
2c37  push    0h                              
2c39  push    2h                              
2c3b  mov     ax,[0B0Ch]                      
2c3e  or      ax,4005h                        
2c41  push    ax                              
2c42  call far sub_005b                       
2c47  add     sp,10h                          
2c4a  pop     ds                              
2c4b  leave                                   
2c4c  retf    4h                              
2c4f  add     [bx+si],al                      

; ===== ABORTFREEZETIGAREQUEST =====
2c50  mov     ax,2C1Fh                        ; segment seg2:0000
2c53  push    bp                              
2c54  mov     bp,sp                           
2c56  push    ds                              
2c57  mov     ds,ax                           
2c59  push    0h                              
2c5b  mov     ax,[0B0Ch]                      
2c5e  or      ax,4007h                        
2c61  push    ax                              
2c62  call far sub_005b                       
2c67  add     sp,4h                           
2c6a  pop     ds                              
2c6b  leave                                   
2c6c  retf                                    
2c6d  add     [bx+si],al                      

; ===== SETMIXWINDOWTIGAREQUEST =====
2c6e  mov     ax,2C51h                        ; segment seg2:0000
2c71  push    bp                              
2c72  mov     bp,sp                           
2c74  push    ds                              
2c75  mov     ds,ax                           
2c77  mov     al,[bp+6h]                      
2c7a  cbw                                     
2c7b  push    ax                              
2c7c  push    2h                              
2c7e  push    0h                              
2c80  push    1h                              
2c82  mov     ax,[0B0Ch]                      
2c85  or      ax,400Fh                        
2c88  push    ax                              
2c89  call far sub_005b                       
2c8e  add     sp,0Ah                          
2c91  pop     ds                              
2c92  leave                                   
2c93  retf    2h                              

; ===== GSPPOINTINWINDOW =====
2c96  mov     ax,2C6Fh                        ; segment seg2:0000
2c99  push    bp                              
2c9a  mov     bp,sp                           
2c9c  push    ds                              
2c9d  mov     ds,ax                           
2c9f  push    word ptr [bp+6h]                
2ca2  push    2h                              
2ca4  push    0h                              
2ca6  push    word ptr [bp+8h]                
2ca9  push    2h                              
2cab  push    0h                              
2cad  push    word ptr [bp+0Ah]               
2cb0  push    2h                              
2cb2  push    0h                              
2cb4  push    3h                              
2cb6  mov     ax,[0B0Ch]                      
2cb9  or      ax,4011h                        
2cbc  push    ax                              
2cbd  call far sub_0064                       
2cc2  add     sp,16h                          
2cc5  pop     ds                              
2cc6  leave                                   
2cc7  retf    6h                              

; ===== FREEZECONTROLTIGAREQUEST =====
2cca  mov     ax,2C97h                        ; segment seg2:0000
2ccd  push    bp                              
2cce  mov     bp,sp                           
2cd0  push    ds                              
2cd1  mov     ds,ax                           
2cd3  push    word ptr [bp+8h]                
2cd6  push    word ptr [bp+6h]                
2cd9  push    9h                              
2cdb  push    1h                              
2cdd  push    1h                              
2cdf  mov     ax,[0B0Ch]                      
2ce2  or      ax,4006h                        
2ce5  push    ax                              
2ce6  call far sub_005b                       
2ceb  add     sp,0Ch                          
2cee  pop     ds                              
2cef  leave                                   
2cf0  retf    4h                              
2cf3  add     [bx+si],al                      

; ===== SETUSERLUTTIGAREQUEST =====
2cf4  mov     ax,2CCBh                        ; segment seg2:0000
2cf7  push    bp                              
2cf8  mov     bp,sp                           
2cfa  push    si                              
2cfb  push    ds                              
2cfc  mov     ds,ax                           
2cfe  mov     si,[bp+0Ah]                     
2d01  push    word ptr [bp+8h]                
2d04  push    word ptr [bp+6h]                
2d07  mov     cx,si                           
2d09  mov     ax,si                           
2d0b  add     si,si                           
2d0d  add     si,ax                           
2d0f  push    si                              
2d10  push    1h                              
2d12  push    cx                              
2d13  push    2h                              
2d15  push    0h                              
2d17  mov     al,[bp+0Ch]                     
2d1a  cbw                                     
2d1b  push    ax                              
2d1c  push    2h                              
2d1e  push    0h                              
2d20  push    3h                              
2d22  mov     ax,[0B0Ch]                      
2d25  or      ax,4016h                        
2d28  push    ax                              
2d29  call far sub_005b                       
2d2e  add     sp,18h                          
2d31  pop     ds                              
2d32  pop     si                              
2d33  leave                                   
2d34  retf    8h                              
2d37  add     [bx+si],al                      

; ===== COPYLUTTIGAREQUEST =====
2d38  mov     ax,2CF5h                        ; segment seg2:0000
2d3b  push    bp                              
2d3c  mov     bp,sp                           
2d3e  push    ds                              
2d3f  mov     ds,ax                           
2d41  mov     al,[bp+6h]                      
2d44  cbw                                     
2d45  push    ax                              
2d46  push    2h                              
2d48  push    0h                              
2d4a  mov     al,[bp+8h]                      
2d4d  cbw                                     
2d4e  push    ax                              
2d4f  push    2h                              
2d51  push    0h                              
2d53  push    2h                              
2d55  mov     ax,[0B0Ch]                      
2d58  or      ax,4017h                        
2d5b  push    ax                              
2d5c  call far sub_005b                       
2d61  add     sp,10h                          
2d64  pop     ds                              
2d65  leave                                   
2d66  retf    4h                              
2d69  add     [bx+si],al                      

; ===== SUSPENDACQUIREMODULE =====
2d6a  mov     ax,2D39h                        ; segment seg2:0000
2d6d  push    bp                              
2d6e  mov     bp,sp                           
2d70  push    ds                              
2d71  mov     ds,ax                           
2d73  push    0h                              
2d75  mov     ax,[0B0Ch]                      
2d78  or      ax,4018h                        
2d7b  push    ax                              
2d7c  call far sub_0064                       
2d81  add     sp,4h                           
2d84  pop     ds                              
2d85  leave                                   
2d86  retf                                    
2d87  add     [bx+si],al                      

; ===== GSPCONTROLXRAY =====
2d88  mov     ax,2D6Bh                        ; segment seg2:0000
2d8b  push    bp                              
2d8c  mov     bp,sp                           
2d8e  push    ds                              
2d8f  mov     ds,ax                           
2d91  push    word ptr [bp+6h]                
2d94  push    2h                              
2d96  push    0h                              
2d98  mov     al,[bp+8h]                      
2d9b  cbw                                     
2d9c  push    ax                              
2d9d  push    2h                              
2d9f  push    0h                              
2da1  mov     al,[bp+0Ah]                     
2da4  cbw                                     
2da5  push    ax                              
2da6  push    2h                              
2da8  push    0h                              
2daa  mov     al,[bp+0Ch]                     
2dad  cbw                                     
2dae  push    ax                              
2daf  push    2h                              
2db1  push    0h                              
2db3  push    4h                              
2db5  mov     ax,[0B0Ch]                      
2db8  or      ax,4019h                        
2dbb  push    ax                              
2dbc  call far sub_005b                       
2dc1  add     sp,1Ch                          
2dc4  pop     ds                              
2dc5  leave                                   
2dc6  retf    8h                              
2dc9  add     [bx+si],al                      

; ===== GSPONEZEROFREEZE =====
2dca  mov     ax,2D89h                        ; segment seg2:0000
2dcd  push    bp                              
2dce  mov     bp,sp                           
2dd0  push    ds                              
2dd1  mov     ds,ax                           
2dd3  push    word ptr [bp+8h]                
2dd6  push    word ptr [bp+6h]                
2dd9  push    3h                              
2ddb  push    1h                              
2ddd  push    1h                              
2ddf  mov     ax,[0B0Ch]                      
2de2  or      ax,401Ah                        
2de5  push    ax                              
2de6  call far sub_005b                       
2deb  add     sp,0Ch                          
2dee  pop     ds                              
2def  leave                                   
2df0  retf    4h                              
2df3  add     [bx+si],al                      

; ===== CONTROLSPOTDATA =====
2df4  mov     ax,2DCBh                        ; segment seg2:0000
2df7  push    bp                              
2df8  mov     bp,sp                           
2dfa  push    ds                              
2dfb  mov     ds,ax                           
2dfd  mov     al,[bp+6h]                      
2e00  cbw                                     
2e01  push    ax                              
2e02  push    2h                              
2e04  push    0h                              
2e06  push    1h                              
2e08  mov     ax,[0B0Ch]                      
2e0b  or      ax,401Bh                        
2e0e  push    ax                              
2e0f  call far sub_005b                       
2e14  add     sp,0Ah                          
2e17  pop     ds                              
2e18  leave                                   
2e19  retf    2h                              

; ===== CONTROLEXTSPOT =====
2e1c  mov     ax,2DF5h                        ; segment seg2:0000
2e1f  push    bp                              
2e20  mov     bp,sp                           
2e22  push    ds                              
2e23  mov     ds,ax                           
2e25  mov     al,[bp+6h]                      
2e28  cbw                                     
2e29  push    ax                              
2e2a  push    2h                              
2e2c  push    0h                              
2e2e  push    1h                              
2e30  mov     ax,[0B0Ch]                      
2e33  or      ax,401Ch                        
2e36  push    ax                              
2e37  call far sub_005b                       
2e3c  add     sp,0Ah                          
2e3f  pop     ds                              
2e40  leave                                   
2e41  retf    2h                              

; ===== GSPSPOTDATACONTROL =====
2e44  mov     ax,2E1Dh                        ; segment seg2:0000
2e47  push    bp                              
2e48  mov     bp,sp                           
2e4a  push    ds                              
2e4b  mov     ds,ax                           
2e4d  push    word ptr [bp+0Ch]               
2e50  push    word ptr [bp+0Ah]               
2e53  push    word ptr [bp+8h]                
2e56  push    word ptr [bp+6h]                
2e59  push    8h                              
2e5b  push    4h                              
2e5d  push    word ptr [bp+14h]               
2e60  push    word ptr [bp+12h]               
2e63  push    word ptr [bp+10h]               
2e66  push    word ptr [bp+0Eh]               
2e69  push    8h                              
2e6b  push    4h                              
2e6d  mov     al,[bp+16h]                     
2e70  cbw                                     
2e71  push    ax                              
2e72  push    2h                              
2e74  push    0h                              
2e76  push    3h                              
2e78  mov     ax,[0B0Ch]                      
2e7b  or      ax,401Dh                        
2e7e  push    ax                              
2e7f  call far sub_005b                       
2e84  add     sp,22h                          
2e87  pop     ds                              
2e88  leave                                   
2e89  retf    12h                             

; ===== FREESPOTDATABUFFER =====
2e8c  mov     ax,2E45h                        ; segment seg2:0000
2e8f  push    bp                              
2e90  mov     bp,sp                           
2e92  push    ds                              
2e93  mov     ds,ax                           
2e95  push    0h                              
2e97  mov     ax,[0B0Ch]                      
2e9a  or      ax,401Eh                        
2e9d  push    ax                              
2e9e  call far sub_005b                       
2ea3  add     sp,4h                           
2ea6  pop     ds                              
2ea7  leave                                   
2ea8  retf                                    
2ea9  add     [bx+si],al                      

; ===== SETSPOTDATAREADY =====
2eaa  mov     ax,2E8Dh                        ; segment seg2:0000
2ead  push    bp                              
2eae  mov     bp,sp                           
2eb0  push    ds                              
2eb1  mov     ds,ax                           
2eb3  push    0h                              
2eb5  mov     ax,[0B0Ch]                      
2eb8  or      ax,401Fh                        
2ebb  push    ax                              
2ebc  call far sub_005b                       
2ec1  add     sp,4h                           
2ec4  pop     ds                              
2ec5  leave                                   
2ec6  retf                                    
2ec7  nop                                     

; ===== DELDSPMODULE =====
2ec8  mov     ax,2399h                        ; segment seg2:0000
2ecb  push    bp                              
2ecc  mov     bp,sp                           
2ece  push    ds                              
2ecf  mov     ds,ax                           
2ed1  push    word ptr [0B0Eh]                ; [ds] f32 here = 0
2ed5  push    2h                              
2ed7  push    0h                              
2ed9  push    1h                              
2edb  push    7E63h                           
2ede  call far sub_0064                       
2ee3  add     sp,0Ah                          
2ee6  pop     ds                              
2ee7  leave                                   
2ee8  retf                                    
2ee9  add     [bx+si],al                      

; ===== INITDSPDRIVER =====
2eea  mov     ax,2EC9h                        ; segment seg2:0000
2eed  push    bp                              
2eee  mov     bp,sp                           
2ef0  push    ds                              
2ef1  mov     ds,ax                           
2ef3  push    0h                              
2ef5  mov     ax,[0B0Eh]                      
2ef8  or      ax,4001h                        
2efb  push    ax                              
2efc  call far sub_0064                       
2f01  add     sp,4h                           
2f04  pop     ds                              
2f05  leave                                   
2f06  retf                                    
2f07  add     [bx+si],al                      

; ===== ABORTDSPOP =====
2f08  mov     ax,2EEBh                        ; segment seg2:0000
2f0b  push    bp                              
2f0c  mov     bp,sp                           
2f0e  push    ds                              
2f0f  mov     ds,ax                           
2f11  push    0h                              
2f13  mov     ax,[0B0Eh]                      
2f16  or      ax,4002h                        
2f19  push    ax                              
2f1a  call far sub_005b                       
2f1f  add     sp,4h                           
2f22  pop     ds                              
2f23  leave                                   
2f24  retf                                    
2f25  add     [bx+si],al                      

; ===== SUSPENDDSPMODULE =====
2f26  mov     ax,2F09h                        ; segment seg2:0000
2f29  push    bp                              
2f2a  mov     bp,sp                           
2f2c  push    ds                              
2f2d  mov     ds,ax                           
2f2f  push    0h                              
2f31  mov     ax,[0B0Eh]                      
2f34  or      ax,4003h                        
2f37  push    ax                              
2f38  call far sub_0064                       
2f3d  add     sp,4h                           
2f40  pop     ds                              
2f41  leave                                   
2f42  retf                                    
2f43  add     [bx+si],al                      

; ===== DSPCYCLETIME =====
2f44  mov     ax,2F27h                        ; segment seg2:0000
2f47  push    bp                              
2f48  mov     bp,sp                           
2f4a  push    ds                              
2f4b  mov     ds,ax                           
2f4d  push    0h                              
2f4f  mov     ax,[0B0Eh]                      
2f52  or      ax,4004h                        
2f55  push    ax                              
2f56  call far sub_0064                       
2f5b  add     sp,4h                           
2f5e  pop     ds                              
2f5f  leave                                   
2f60  retf                                    
2f61  add     [bx+si],al                      

; ===== ABORTPHOTOTIGAREQUEST =====
2f62  mov     ax,2F45h                        ; segment seg2:0000
2f65  push    bp                              
2f66  mov     bp,sp                           
2f68  push    ds                              
2f69  mov     ds,ax                           
2f6b  push    0h                              
2f6d  mov     ax,[0B0Eh]                      
2f70  or      ax,4005h                        
2f73  push    ax                              
2f74  call far sub_005b                       
2f79  add     sp,4h                           
2f7c  pop     ds                              
2f7d  leave                                   
2f7e  retf                                    
2f7f  add     [bx+si],al                      

; ===== READDPRAM =====
2f80  mov     ax,2F63h                        ; segment seg2:0000
2f83  push    bp                              
2f84  mov     bp,sp                           
2f86  push    ds                              
2f87  mov     ds,ax                           
2f89  push    word ptr [bp+6h]                
2f8c  push    2h                              
2f8e  push    0h                              
2f90  push    1h                              
2f92  mov     ax,[0B0Eh]                      
2f95  or      ax,4006h                        
2f98  push    ax                              
2f99  call far sub_0064                       
2f9e  add     sp,0Ah                          
2fa1  pop     ds                              
2fa2  leave                                   
2fa3  retf    2h                              

; ===== READDPRAM2 =====
2fa6  mov     ax,2F81h                        ; segment seg2:0000
2fa9  push    bp                              
2faa  mov     bp,sp                           
2fac  push    ds                              
2fad  mov     ds,ax                           
2faf  push    word ptr [bp+6h]                
2fb2  push    2h                              
2fb4  push    0h                              
2fb6  push    1h                              
2fb8  mov     ax,[0B0Eh]                      
2fbb  or      ax,4007h                        
2fbe  push    ax                              
2fbf  call far sub_0064                       
2fc4  add     sp,0Ah                          
2fc7  pop     ds                              
2fc8  leave                                   
2fc9  retf    2h                              

; ===== WRITEDPRAM =====
2fcc  mov     ax,2FA7h                        ; segment seg2:0000
2fcf  push    bp                              
2fd0  mov     bp,sp                           
2fd2  push    ds                              
2fd3  mov     ds,ax                           
2fd5  push    word ptr [bp+6h]                
2fd8  push    2h                              
2fda  push    0h                              
2fdc  push    word ptr [bp+8h]                
2fdf  push    2h                              
2fe1  push    0h                              
2fe3  push    2h                              
2fe5  mov     ax,[0B0Eh]                      
2fe8  or      ax,4008h                        
2feb  push    ax                              
2fec  call far sub_005b                       
2ff1  add     sp,10h                          
2ff4  pop     ds                              
2ff5  leave                                   
2ff6  retf    4h                              
2ff9  add     [bx+si],al                      

; ===== WRITEDPRAM2 =====
2ffa  mov     ax,2FCDh                        ; segment seg2:0000
2ffd  push    bp                              
2ffe  mov     bp,sp                           
3000  push    ds                              
3001  mov     ds,ax                           
3003  push    word ptr [bp+6h]                
3006  push    2h                              
3008  push    0h                              
300a  push    word ptr [bp+8h]                
300d  push    2h                              
300f  push    0h                              
3011  push    2h                              
3013  mov     ax,[0B0Eh]                      
3016  or      ax,4009h                        
3019  push    ax                              
301a  call far sub_005b                       
301f  add     sp,10h                          
3022  pop     ds                              
3023  leave                                   
3024  retf    4h                              
3027  add     [bx+si],al                      

; ===== READEO =====
3028  mov     ax,2FFBh                        ; segment seg2:0000
302b  push    bp                              
302c  mov     bp,sp                           
302e  push    ds                              
302f  mov     ds,ax                           
3031  push    word ptr [bp+6h]                
3034  push    2h                              
3036  push    0h                              
3038  push    1h                              
303a  mov     ax,[0B0Eh]                      
303d  or      ax,400Ah                        
3040  push    ax                              
3041  call far sub_0064                       
3046  add     sp,0Ah                          
3049  pop     ds                              
304a  leave                                   
304b  retf    2h                              

; ===== WRITEEO =====
304e  mov     ax,3029h                        ; segment seg2:0000
3051  push    bp                              
3052  mov     bp,sp                           
3054  push    ds                              
3055  mov     ds,ax                           
3057  push    word ptr [bp+6h]                
305a  push    2h                              
305c  push    0h                              
305e  push    word ptr [bp+8h]                
3061  push    2h                              
3063  push    0h                              
3065  push    2h                              
3067  mov     ax,[0B0Eh]                      
306a  or      ax,400Bh                        
306d  push    ax                              
306e  call far sub_005b                       
3073  add     sp,10h                          
3076  pop     ds                              
3077  leave                                   
3078  retf    4h                              
307b  add     [bx+si],al                      

; ===== READHRRU =====
307c  mov     ax,304Fh                        ; segment seg2:0000
307f  push    bp                              
3080  mov     bp,sp                           
3082  push    ds                              
3083  mov     ds,ax                           
3085  push    word ptr [bp+6h]                
3088  push    2h                              
308a  push    0h                              
308c  push    1h                              
308e  mov     ax,[0B0Eh]                      
3091  or      ax,400Ch                        
3094  push    ax                              
3095  call far sub_0064                       
309a  add     sp,0Ah                          
309d  pop     ds                              
309e  leave                                   
309f  retf    2h                              

; ===== WRITEHRRU =====
30a2  mov     ax,307Dh                        ; segment seg2:0000
30a5  push    bp                              
30a6  mov     bp,sp                           
30a8  push    ds                              
30a9  mov     ds,ax                           
30ab  push    word ptr [bp+6h]                
30ae  push    2h                              
30b0  push    0h                              
30b2  push    word ptr [bp+8h]                
30b5  push    2h                              
30b7  push    0h                              
30b9  push    2h                              
30bb  mov     ax,[0B0Eh]                      
30be  or      ax,400Dh                        
30c1  push    ax                              
30c2  call far sub_005b                       
30c7  add     sp,10h                          
30ca  pop     ds                              
30cb  leave                                   
30cc  retf    4h                              
30cf  add     [bx+si],al                      

; ===== FEATURESCAN_STATUS =====
30d0  mov     ax,30A3h                        ; segment seg2:0000
30d3  push    bp                              
30d4  mov     bp,sp                           
30d6  push    ds                              
30d7  mov     ds,ax                           
30d9  push    0h                              
30db  mov     ax,[0B0Eh]                      
30de  or      ax,400Eh                        
30e1  push    ax                              
30e2  call far sub_0064                       
30e7  add     sp,4h                           
30ea  pop     ds                              
30eb  leave                                   
30ec  retf                                    
30ed  add     [bx+si],al                      

; ===== GSPSTARTCOVARCOLLECTION =====
30ee  mov     ax,30D1h                        ; segment seg2:0000
30f1  push    bp                              
30f2  mov     bp,sp                           
30f4  push    ds                              
30f5  mov     ds,ax                           
30f7  push    word ptr [bp+8h]                
30fa  push    word ptr [bp+6h]                
30fd  push    414h                            
3100  push    1h                              
3102  push    1h                              
3104  mov     ax,[0B0Eh]                      
3107  or      ax,400Fh                        
310a  push    ax                              
310b  call far sub_0076                       
3110  add     sp,0Ch                          
3113  pop     ds                              
3114  leave                                   
3115  retf    4h                              

; ===== GSPCOLLECTCOVARDATA =====
3118  mov     ax,30EFh                        ; segment seg2:0000
311b  push    bp                              
311c  mov     bp,sp                           
311e  push    ds                              
311f  mov     ds,ax                           
3121  push    word ptr [bp+8h]                
3124  push    word ptr [bp+6h]                
3127  push    414h                            
312a  push    81h                             
312d  push    1h                              
312f  mov     ax,[0B0Eh]                      
3132  or      ax,4010h                        
3135  push    ax                              
3136  call far sub_0088                       
313b  add     sp,0Ch                          
313e  pop     ds                              
313f  leave                                   
3140  retf    4h                              
3143  nop                                     

; ===== SUSPENDEHTMODULE =====
3144  mov     ax,23C9h                        ; segment seg2:0000
3147  push    bp                              
3148  mov     bp,sp                           
314a  push    ds                              
314b  mov     ds,ax                           
314d  push    0h                              
314f  mov     ax,[0B10h]                      
3152  or      ax,400Eh                        
3155  push    ax                              
3156  call far sub_005b                       
315b  add     sp,4h                           
315e  pop     ds                              
315f  leave                                   
3160  retf                                    
3161  add     [bx+si],al                      

; ===== DELEHTMODULE =====
3162  mov     ax,3145h                        ; segment seg2:0000
3165  push    bp                              
3166  mov     bp,sp                           
3168  push    ds                              
3169  mov     ds,ax                           
316b  push    word ptr [0B10h]                ; [ds] f32 here = 0
316f  push    2h                              
3171  push    0h                              
3173  push    1h                              
3175  push    7E63h                           
3178  call far sub_0064                       
317d  add     sp,0Ah                          
3180  pop     ds                              
3181  leave                                   
3182  retf                                    
3183  add     [bx+si],al                      

; ===== INITEHTCOMMS =====
3184  mov     ax,3163h                        ; segment seg2:0000
3187  push    bp                              
3188  mov     bp,sp                           
318a  push    ds                              
318b  mov     ds,ax                           
318d  push    0h                              
318f  mov     ax,[0B10h]                      
3192  or      ax,4001h                        
3195  push    ax                              
3196  call far sub_0064                       
319b  add     sp,4h                           
319e  pop     ds                              
319f  leave                                   
31a0  retf                                    
31a1  add     [bx+si],al                      

; ===== READGSPEHTSTATUS =====
31a2  mov     ax,3185h                        ; segment seg2:0000
31a5  push    bp                              
31a6  mov     bp,sp                           
31a8  push    ds                              
31a9  mov     ds,ax                           
31ab  push    word ptr [bp+8h]                
31ae  push    word ptr [bp+6h]                
31b1  push    4Ch                             
31b3  push    81h                             
31b6  push    1h                              
31b8  mov     ax,[0B10h]                      
31bb  or      ax,4002h                        
31be  push    ax                              
31bf  call far sub_006d                       
31c4  add     sp,0Ch                          
31c7  pop     ds                              
31c8  leave                                   
31c9  retf    4h                              

; ===== SENDGSPEHTRAMPREQUEST =====
31cc  mov     ax,31A3h                        ; segment seg2:0000
31cf  push    bp                              
31d0  mov     bp,sp                           
31d2  push    ds                              
31d3  mov     ds,ax                           
31d5  push    word ptr [bp+8h]                
31d8  push    word ptr [bp+6h]                
31db  push    10h                             
31dd  push    1h                              
31df  push    1h                              
31e1  mov     ax,[0B10h]                      
31e4  or      ax,4003h                        
31e7  push    ax                              
31e8  call far sub_005b                       
31ed  add     sp,0Ch                          
31f0  pop     ds                              
31f1  leave                                   
31f2  retf    4h                              
31f5  add     [bx+si],al                      

; ===== SENDGSPFILRAMPREQUEST =====
31f6  mov     ax,31CDh                        ; segment seg2:0000
31f9  push    bp                              
31fa  mov     bp,sp                           
31fc  push    ds                              
31fd  mov     ds,ax                           
31ff  push    word ptr [bp+8h]                
3202  push    word ptr [bp+6h]                
3205  push    10h                             
3207  push    1h                              
3209  push    1h                              
320b  mov     ax,[0B10h]                      
320e  or      ax,4004h                        
3211  push    ax                              
3212  call far sub_005b                       
3217  add     sp,0Ch                          
321a  pop     ds                              
321b  leave                                   
321c  retf    4h                              
321f  add     [bx+si],al                      

; ===== KILLGSPEHTANDFILRAMPING =====
3220  mov     ax,31F7h                        ; segment seg2:0000
3223  push    bp                              
3224  mov     bp,sp                           
3226  push    ds                              
3227  mov     ds,ax                           
3229  push    word ptr [bp+8h]                
322c  push    word ptr [bp+6h]                
322f  push    4h                              
3231  push    81h                             
3234  push    word ptr [bp+0Ch]               
3237  push    word ptr [bp+0Ah]               
323a  push    4h                              
323c  push    81h                             
323f  push    2h                              
3241  mov     ax,[0B10h]                      
3244  or      ax,4005h                        
3247  push    ax                              
3248  call far sub_006d                       
324d  add     sp,14h                          
3250  pop     ds                              
3251  leave                                   
3252  retf    8h                              
3255  add     [bx+si],al                      

; ===== GETGSPEHTSETDESCRIPTION =====
3256  mov     ax,3221h                        ; segment seg2:0000
3259  push    bp                              
325a  mov     bp,sp                           
325c  push    ds                              
325d  mov     ds,ax                           
325f  push    word ptr [bp+8h]                
3262  push    word ptr [bp+6h]                
3265  push    0Bh                             
3267  push    81h                             
326a  push    1h                              
326c  mov     ax,[0B10h]                      
326f  or      ax,4006h                        
3272  push    ax                              
3273  call far sub_006d                       
3278  add     sp,0Ch                          
327b  pop     ds                              
327c  leave                                   
327d  retf    4h                              

; ===== SENDANODETYPEGSPMESSAGE =====
3280  mov     ax,3257h                        ; segment seg2:0000
3283  push    bp                              
3284  mov     bp,sp                           
3286  push    ds                              
3287  mov     ds,ax                           
3289  push    word ptr [bp+6h]                
328c  push    2h                              
328e  push    0h                              
3290  push    1h                              
3292  mov     ax,[0B10h]                      
3295  or      ax,4007h                        
3298  push    ax                              
3299  call far sub_005b                       
329e  add     sp,0Ah                          
32a1  pop     ds                              
32a2  leave                                   
32a3  retf    2h                              

; ===== CHANGEFILTYPEGSPMESSAGE =====
32a6  mov     ax,3281h                        ; segment seg2:0000
32a9  push    bp                              
32aa  mov     bp,sp                           
32ac  push    ds                              
32ad  mov     ds,ax                           
32af  push    word ptr [bp+6h]                
32b2  push    2h                              
32b4  push    0h                              
32b6  push    1h                              
32b8  mov     ax,[0B10h]                      
32bb  or      ax,4008h                        
32be  push    ax                              
32bf  call far sub_005b                       
32c4  add     sp,0Ah                          
32c7  pop     ds                              
32c8  leave                                   
32c9  retf    2h                              

; ===== SETBEAMCURRENTGSPREQUEST =====
32cc  mov     ax,32A7h                        ; segment seg2:0000
32cf  push    bp                              
32d0  mov     bp,sp                           
32d2  push    ds                              
32d3  mov     ds,ax                           
32d5  push    word ptr [bp+0Ch]               
32d8  push    word ptr [bp+0Ah]               
32db  push    word ptr [bp+8h]                
32de  push    word ptr [bp+6h]                
32e1  push    8h                              
32e3  push    4h                              
32e5  push    1h                              
32e7  mov     ax,[0B10h]                      
32ea  or      ax,4009h                        
32ed  push    ax                              
32ee  call far sub_005b                       
32f3  add     sp,10h                          
32f6  pop     ds                              
32f7  leave                                   
32f8  retf    8h                              
32fb  add     [bx+si],al                      

; ===== SETFILCURRENT =====
32fc  mov     ax,32CDh                        ; segment seg2:0000
32ff  push    bp                              
3300  mov     bp,sp                           
3302  push    ds                              
3303  mov     ds,ax                           
3305  push    word ptr [bp+0Ch]               
3308  push    word ptr [bp+0Ah]               
330b  push    word ptr [bp+8h]                
330e  push    word ptr [bp+6h]                
3311  push    8h                              
3313  push    4h                              
3315  push    1h                              
3317  mov     ax,[0B10h]                      
331a  or      ax,400Ah                        
331d  push    ax                              
331e  call far sub_005b                       
3323  add     sp,10h                          
3326  pop     ds                              
3327  leave                                   
3328  retf    8h                              
332b  add     [bx+si],al                      

; ===== SETACCVOLTAGE =====
332c  mov     ax,32FDh                        ; segment seg2:0000
332f  push    bp                              
3330  mov     bp,sp                           
3332  push    ds                              
3333  mov     ds,ax                           
3335  push    word ptr [bp+6h]                
3338  push    2h                              
333a  push    0h                              
333c  push    1h                              
333e  mov     ax,[0B10h]                      
3341  or      ax,400Bh                        
3344  push    ax                              
3345  call far sub_005b                       
334a  add     sp,0Ah                          
334d  pop     ds                              
334e  leave                                   
334f  retf    2h                              

; ===== SETEHTSETCOLLECTORBIAS =====
3352  mov     ax,332Dh                        ; segment seg2:0000
3355  push    bp                              
3356  mov     bp,sp                           
3358  push    ds                              
3359  mov     ds,ax                           
335b  push    word ptr [bp+6h]                
335e  push    2h                              
3360  push    0h                              
3362  push    1h                              
3364  mov     ax,[0B10h]                      
3367  or      ax,400Ch                        
336a  push    ax                              
336b  call far sub_005b                       
3370  add     sp,0Ah                          
3373  pop     ds                              
3374  leave                                   
3375  retf    2h                              

; ===== SETEHTSETPMVOLTAGE =====
3378  mov     ax,3353h                        ; segment seg2:0000
337b  push    bp                              
337c  mov     bp,sp                           
337e  push    ds                              
337f  mov     ds,ax                           
3381  push    word ptr [bp+0Ch]               
3384  push    word ptr [bp+0Ah]               
3387  push    word ptr [bp+8h]                
338a  push    word ptr [bp+6h]                
338d  push    8h                              
338f  push    4h                              
3391  push    word ptr [bp+0Eh]               
3394  push    2h                              
3396  push    0h                              
3398  push    2h                              
339a  mov     ax,[0B10h]                      
339d  or      ax,400Dh                        
33a0  push    ax                              
33a1  call far sub_005b                       
33a6  add     sp,16h                          
33a9  pop     ds                              
33aa  leave                                   
33ab  retf    0Ah                             

; ===== SETEHTSETSUPPLYTOGGLE =====
33ae  mov     ax,3379h                        ; segment seg2:0000
33b1  push    bp                              
33b2  mov     bp,sp                           
33b4  push    ds                              
33b5  mov     ds,ax                           
33b7  push    word ptr [bp+6h]                
33ba  push    2h                              
33bc  push    0h                              
33be  push    1h                              
33c0  mov     ax,[0B10h]                      
33c3  or      ax,400Fh                        
33c6  push    ax                              
33c7  call far sub_005b                       
33cc  add     sp,0Ah                          
33cf  pop     ds                              
33d0  leave                                   
33d1  retf    2h                              

; ===== SETEHTSETSCINTTOGGLE =====
33d4  mov     ax,33AFh                        ; segment seg2:0000
33d7  push    bp                              
33d8  mov     bp,sp                           
33da  push    ds                              
33db  mov     ds,ax                           
33dd  push    word ptr [bp+6h]                
33e0  push    2h                              
33e2  push    0h                              
33e4  push    1h                              
33e6  mov     ax,[0B10h]                      
33e9  or      ax,4010h                        
33ec  push    ax                              
33ed  call far sub_005b                       
33f2  add     sp,0Ah                          
33f5  pop     ds                              
33f6  leave                                   
33f7  retf    2h                              

; ===== SETEHTSETFILICALIB =====
33fa  mov     ax,33D5h                        ; segment seg2:0000
33fd  push    bp                              
33fe  mov     bp,sp                           
3400  push    ds                              
3401  mov     ds,ax                           
3403  push    word ptr [bp+0Ch]               
3406  push    word ptr [bp+0Ah]               
3409  push    word ptr [bp+8h]                
340c  push    word ptr [bp+6h]                
340f  push    8h                              
3411  push    4h                              
3413  push    word ptr [bp+14h]               
3416  push    word ptr [bp+12h]               
3419  push    word ptr [bp+10h]               
341c  push    word ptr [bp+0Eh]               
341f  push    8h                              
3421  push    4h                              
3423  push    2h                              
3425  mov     ax,[0B10h]                      
3428  or      ax,4011h                        
342b  push    ax                              
342c  call far sub_005b                       
3431  add     sp,1Ch                          
3434  pop     ds                              
3435  leave                                   
3436  retf    10h                             
3439  add     [bx+si],al                      

; ===== SETEHTSETVOLTOFFSET =====
343a  mov     ax,33FBh                        ; segment seg2:0000
343d  push    bp                              
343e  mov     bp,sp                           
3440  push    ds                              
3441  mov     ds,ax                           
3443  push    word ptr [bp+0Ch]               
3446  push    word ptr [bp+0Ah]               
3449  push    word ptr [bp+8h]                
344c  push    word ptr [bp+6h]                
344f  push    8h                              
3451  push    4h                              
3453  push    1h                              
3455  mov     ax,[0B10h]                      
3458  or      ax,4012h                        
345b  push    ax                              
345c  call far sub_005b                       
3461  add     sp,10h                          
3464  pop     ds                              
3465  leave                                   
3466  retf    8h                              
3469  add     [bx+si],al                      

; ===== SENDGSPEXTRAMPREQUEST =====
346a  mov     ax,343Bh                        ; segment seg2:0000
346d  push    bp                              
346e  mov     bp,sp                           
3470  push    ds                              
3471  mov     ds,ax                           
3473  push    word ptr [bp+8h]                
3476  push    word ptr [bp+6h]                
3479  push    10h                             
347b  push    1h                              
347d  push    1h                              
347f  mov     ax,[0B10h]                      
3482  or      ax,4013h                        
3485  push    ax                              
3486  call far sub_005b                       
348b  add     sp,0Ch                          
348e  pop     ds                              
348f  leave                                   
3490  retf    4h                              
3493  add     [bx+si],al                      

; ===== SENDGSPSUPPRAMPREQUEST =====
3494  mov     ax,346Bh                        ; segment seg2:0000
3497  push    bp                              
3498  mov     bp,sp                           
349a  push    ds                              
349b  mov     ds,ax                           
349d  push    word ptr [bp+8h]                
34a0  push    word ptr [bp+6h]                
34a3  push    10h                             
34a5  push    1h                              
34a7  push    1h                              
34a9  mov     ax,[0B10h]                      
34ac  or      ax,4014h                        
34af  push    ax                              
34b0  call far sub_005b                       
34b5  add     sp,0Ch                          
34b8  pop     ds                              
34b9  leave                                   
34ba  retf    4h                              
34bd  add     [bx+si],al                      

; ===== SENDGSPLENSRAMPREQUEST =====
34be  mov     ax,3495h                        ; segment seg2:0000
34c1  push    bp                              
34c2  mov     bp,sp                           
34c4  push    ds                              
34c5  mov     ds,ax                           
34c7  push    word ptr [bp+8h]                
34ca  push    word ptr [bp+6h]                
34cd  push    10h                             
34cf  push    1h                              
34d1  push    1h                              
34d3  mov     ax,[0B10h]                      
34d6  or      ax,4015h                        
34d9  push    ax                              
34da  call far sub_005b                       
34df  add     sp,0Ch                          
34e2  pop     ds                              
34e3  leave                                   
34e4  retf    4h                              
34e7  add     [bx+si],al                      

; ===== KILLGSPFERAMPING =====
34e8  mov     ax,34BFh                        ; segment seg2:0000
34eb  push    bp                              
34ec  mov     bp,sp                           
34ee  push    ds                              
34ef  mov     ds,ax                           
34f1  push    word ptr [bp+8h]                
34f4  push    word ptr [bp+6h]                
34f7  push    4h                              
34f9  push    81h                             
34fc  push    word ptr [bp+0Ch]               
34ff  push    word ptr [bp+0Ah]               
3502  push    4h                              
3504  push    81h                             
3507  push    word ptr [bp+10h]               
350a  push    word ptr [bp+0Eh]               
350d  push    4h                              
350f  push    81h                             
3512  push    word ptr [bp+14h]               
3515  push    word ptr [bp+12h]               
3518  push    4h                              
351a  push    81h                             
351d  push    word ptr [bp+18h]               
3520  push    word ptr [bp+16h]               
3523  push    4h                              
3525  push    81h                             
3528  push    5h                              
352a  mov     ax,[0B10h]                      
352d  or      ax,401Ah                        
3530  push    ax                              
3531  call far sub_006d                       
3536  add     sp,2Ch                          
3539  pop     ds                              
353a  leave                                   
353b  retf    14h                             

; ===== SETEXTVOLTAGE =====
353e  mov     ax,34E9h                        ; segment seg2:0000
3541  push    bp                              
3542  mov     bp,sp                           
3544  push    ds                              
3545  mov     ds,ax                           
3547  push    word ptr [bp+6h]                
354a  push    2h                              
354c  push    0h                              
354e  push    1h                              
3550  mov     ax,[0B10h]                      
3553  or      ax,4016h                        
3556  push    ax                              
3557  call far sub_005b                       
355c  add     sp,0Ah                          
355f  pop     ds                              
3560  leave                                   
3561  retf    2h                              

; ===== SETSUPPVOLTAGE =====
3564  mov     ax,353Fh                        ; segment seg2:0000
3567  push    bp                              
3568  mov     bp,sp                           
356a  push    ds                              
356b  mov     ds,ax                           
356d  push    word ptr [bp+6h]                
3570  push    2h                              
3572  push    0h                              
3574  push    1h                              
3576  mov     ax,[0B10h]                      
3579  or      ax,4017h                        
357c  push    ax                              
357d  call far sub_005b                       
3582  add     sp,0Ah                          
3585  pop     ds                              
3586  leave                                   
3587  retf    2h                              

; ===== SETLENSVOLTAGE =====
358a  mov     ax,3565h                        ; segment seg2:0000
358d  push    bp                              
358e  mov     bp,sp                           
3590  push    ds                              
3591  mov     ds,ax                           
3593  push    word ptr [bp+0Ch]               
3596  push    word ptr [bp+0Ah]               
3599  push    word ptr [bp+8h]                
359c  push    word ptr [bp+6h]                
359f  push    8h                              
35a1  push    4h                              
35a3  push    1h                              
35a5  mov     ax,[0B10h]                      
35a8  or      ax,4018h                        
35ab  push    ax                              
35ac  call far sub_005b                       
35b1  add     sp,10h                          
35b4  pop     ds                              
35b5  leave                                   
35b6  retf    8h                              
35b9  add     [bx+si],al                      

; ===== SETFEEHTSETFILICALIB =====
35ba  mov     ax,358Bh                        ; segment seg2:0000
35bd  push    bp                              
35be  mov     bp,sp                           
35c0  push    ds                              
35c1  mov     ds,ax                           
35c3  push    word ptr [bp+0Ch]               
35c6  push    word ptr [bp+0Ah]               
35c9  push    word ptr [bp+8h]                
35cc  push    word ptr [bp+6h]                
35cf  push    8h                              
35d1  push    4h                              
35d3  push    word ptr [bp+14h]               
35d6  push    word ptr [bp+12h]               
35d9  push    word ptr [bp+10h]               
35dc  push    word ptr [bp+0Eh]               
35df  push    8h                              
35e1  push    4h                              
35e3  push    2h                              
35e5  mov     ax,[0B10h]                      
35e8  or      ax,4019h                        
35eb  push    ax                              
35ec  call far sub_005b                       
35f1  add     sp,1Ch                          
35f4  pop     ds                              
35f5  leave                                   
35f6  retf    10h                             
35f9  add     [bx+si],al                      

; ===== READEHTSETREADBACK =====
35fa  mov     ax,35BBh                        ; segment seg2:0000
35fd  push    bp                              
35fe  mov     bp,sp                           
3600  push    ds                              
3601  mov     ds,ax                           
3603  push    word ptr [bp+8h]                
3606  push    word ptr [bp+6h]                
3609  push    50h                             
360b  push    81h                             
360e  push    1h                              
3610  mov     ax,[0B10h]                      
3613  or      ax,401Bh                        
3616  push    ax                              
3617  call far sub_006d                       
361c  add     sp,0Ch                          
361f  pop     ds                              
3620  leave                                   
3621  retf    4h                              

; ===== SENDGSPLENSWOBBLE =====
3624  mov     ax,35FBh                        ; segment seg2:0000
3627  push    bp                              
3628  mov     bp,sp                           
362a  push    ds                              
362b  mov     ds,ax                           
362d  push    word ptr [bp+6h]                
3630  push    2h                              
3632  push    0h                              
3634  push    1h                              
3636  mov     ax,[0B10h]                      
3639  or      ax,401Ch                        
363c  push    ax                              
363d  call far sub_005b                       
3642  add     sp,0Ah                          
3645  pop     ds                              
3646  leave                                   
3647  retf    2h                              

; ===== SENDGSPBEAMWOBBLE =====
364a  mov     ax,3625h                        ; segment seg2:0000
364d  push    bp                              
364e  mov     bp,sp                           
3650  push    ds                              
3651  mov     ds,ax                           
3653  push    word ptr [bp+6h]                
3656  push    2h                              
3658  push    0h                              
365a  push    1h                              
365c  mov     ax,[0B10h]                      
365f  or      ax,401Dh                        
3662  push    ax                              
3663  call far sub_005b                       
3668  add     sp,0Ah                          
366b  pop     ds                              
366c  leave                                   
366d  retf    2h                              

; ===== TOGGLEREADBACK =====
3670  mov     ax,364Bh                        ; segment seg2:0000
3673  push    bp                              
3674  mov     bp,sp                           
3676  push    ds                              
3677  mov     ds,ax                           
3679  push    word ptr [bp+6h]                
367c  push    2h                              
367e  push    0h                              
3680  push    1h                              
3682  mov     ax,[0B10h]                      
3685  or      ax,401Eh                        
3688  push    ax                              
3689  call far sub_005b                       
368e  add     sp,0Ah                          
3691  pop     ds                              
3692  leave                                   
3693  retf    2h                              

; ===== SENDGSPDIRECTCOMMAND =====
3696  mov     ax,3671h                        ; segment seg2:0000
3699  push    bp                              
369a  mov     bp,sp                           
369c  push    ds                              
369d  mov     ds,ax                           
369f  push    word ptr [bp+8h]                
36a2  push    word ptr [bp+6h]                
36a5  push    0Ah                             
36a7  push    1h                              
36a9  push    1h                              
36ab  mov     ax,[0B10h]                      
36ae  or      ax,401Fh                        
36b1  push    ax                              
36b2  call far sub_006d                       
36b7  add     sp,0Ch                          
36ba  pop     ds                              
36bb  leave                                   
36bc  retf    4h                              
36bf  nop                                     

; ===== INITEORLM =====
36c0  mov     ax,23F9h                        ; segment seg2:0000
36c3  push    bp                              
36c4  mov     bp,sp                           
36c6  push    ds                              
36c7  mov     ds,ax                           
36c9  push    0h                              
36cb  mov     ax,[0B12h]                      
36ce  or      ax,4002h                        
36d1  push    ax                              
36d2  call far sub_0064                       
36d7  add     sp,4h                           
36da  pop     ds                              
36db  leave                                   
36dc  retf                                    
36dd  add     [bx+si],al                      

; ===== SUSPENDEOPROCESS =====
36de  mov     ax,36C1h                        ; segment seg2:0000
36e1  push    bp                              
36e2  mov     bp,sp                           
36e4  push    ds                              
36e5  mov     ds,ax                           
36e7  push    0h                              
36e9  mov     ax,[0B12h]                      
36ec  or      ax,4003h                        
36ef  push    ax                              
36f0  call far sub_0064                       
36f5  add     sp,4h                           
36f8  pop     ds                              
36f9  leave                                   
36fa  retf                                    
36fb  add     [bx+si],al                      

; ===== GSPSTARTBEAMALIGNSCANNING =====
36fc  mov     ax,36DFh                        ; segment seg2:0000
36ff  push    bp                              
3700  mov     bp,sp                           
3702  push    ds                              
3703  mov     ds,ax                           
3705  push    0h                              
3707  mov     ax,[0B12h]                      
370a  or      ax,4005h                        
370d  push    ax                              
370e  call far sub_005b                       
3713  add     sp,4h                           
3716  pop     ds                              
3717  leave                                   
3718  retf                                    
3719  add     [bx+si],al                      

; ===== GSPENDBEAMALIGNSCANNING =====
371a  mov     ax,36FDh                        ; segment seg2:0000
371d  push    bp                              
371e  mov     bp,sp                           
3720  push    ds                              
3721  mov     ds,ax                           
3723  push    0h                              
3725  mov     ax,[0B12h]                      
3728  or      ax,4006h                        
372b  push    ax                              
372c  call far sub_005b                       
3731  add     sp,4h                           
3734  pop     ds                              
3735  leave                                   
3736  retf                                    
3737  add     [bx+si],al                      

; ===== GSPSETBEAMALIGNSCANAMP =====
3738  mov     ax,371Bh                        ; segment seg2:0000
373b  push    bp                              
373c  mov     bp,sp                           
373e  push    ds                              
373f  mov     ds,ax                           
3741  push    word ptr [bp+0Ch]               
3744  push    word ptr [bp+0Ah]               
3747  push    word ptr [bp+8h]                
374a  push    word ptr [bp+6h]                
374d  push    8h                              
374f  push    4h                              
3751  push    1h                              
3753  mov     ax,[0B12h]                      
3756  or      ax,4007h                        
3759  push    ax                              
375a  call far sub_005b                       
375f  add     sp,10h                          
3762  pop     ds                              
3763  leave                                   
3764  retf    8h                              
3767  add     [bx+si],al                      

; ===== GSPSETBEAMALIGNXSHIFT =====
3768  mov     ax,3739h                        ; segment seg2:0000
376b  push    bp                              
376c  mov     bp,sp                           
376e  push    ds                              
376f  mov     ds,ax                           
3771  push    word ptr [bp+0Ch]               
3774  push    word ptr [bp+0Ah]               
3777  push    word ptr [bp+8h]                
377a  push    word ptr [bp+6h]                
377d  push    8h                              
377f  push    4h                              
3781  push    1h                              
3783  mov     ax,[0B12h]                      
3786  or      ax,4008h                        
3789  push    ax                              
378a  call far sub_005b                       
378f  add     sp,10h                          
3792  pop     ds                              
3793  leave                                   
3794  retf    8h                              
3797  add     [bx+si],al                      

; ===== GSPSETBEAMALIGNYSHIFT =====
3798  mov     ax,3769h                        ; segment seg2:0000
379b  push    bp                              
379c  mov     bp,sp                           
379e  push    ds                              
379f  mov     ds,ax                           
37a1  push    word ptr [bp+0Ch]               
37a4  push    word ptr [bp+0Ah]               
37a7  push    word ptr [bp+8h]                
37aa  push    word ptr [bp+6h]                
37ad  push    8h                              
37af  push    4h                              
37b1  push    1h                              
37b3  mov     ax,[0B12h]                      
37b6  or      ax,4009h                        
37b9  push    ax                              
37ba  call far sub_005b                       
37bf  add     sp,10h                          
37c2  pop     ds                              
37c3  leave                                   
37c4  retf    8h                              
37c7  add     [bx+si],al                      

; ===== GSPSETBEAMALIGNXTILT =====
37c8  mov     ax,3799h                        ; segment seg2:0000
37cb  push    bp                              
37cc  mov     bp,sp                           
37ce  push    ds                              
37cf  mov     ds,ax                           
37d1  push    word ptr [bp+0Ch]               
37d4  push    word ptr [bp+0Ah]               
37d7  push    word ptr [bp+8h]                
37da  push    word ptr [bp+6h]                
37dd  push    8h                              
37df  push    4h                              
37e1  push    1h                              
37e3  mov     ax,[0B12h]                      
37e6  or      ax,400Ah                        
37e9  push    ax                              
37ea  call far sub_005b                       
37ef  add     sp,10h                          
37f2  pop     ds                              
37f3  leave                                   
37f4  retf    8h                              
37f7  add     [bx+si],al                      

; ===== GSPSETBEAMALIGNYTILT =====
37f8  mov     ax,37C9h                        ; segment seg2:0000
37fb  push    bp                              
37fc  mov     bp,sp                           
37fe  push    ds                              
37ff  mov     ds,ax                           
3801  push    word ptr [bp+0Ch]               
3804  push    word ptr [bp+0Ah]               
3807  push    word ptr [bp+8h]                
380a  push    word ptr [bp+6h]                
380d  push    8h                              
380f  push    4h                              
3811  push    1h                              
3813  mov     ax,[0B12h]                      
3816  or      ax,400Bh                        
3819  push    ax                              
381a  call far sub_005b                       
381f  add     sp,10h                          
3822  pop     ds                              
3823  leave                                   
3824  retf    8h                              
3827  add     [bx+si],al                      

; ===== GSPBLANKBEAM =====
3828  mov     ax,37F9h                        ; segment seg2:0000
382b  push    bp                              
382c  mov     bp,sp                           
382e  push    ds                              
382f  mov     ds,ax                           
3831  push    0h                              
3833  mov     ax,[0B12h]                      
3836  or      ax,400Ch                        
3839  push    ax                              
383a  call far sub_005b                       
383f  add     sp,4h                           
3842  pop     ds                              
3843  leave                                   
3844  retf                                    
3845  add     [bx+si],al                      

; ===== GSPUNBLANKBEAM =====
3846  mov     ax,3829h                        ; segment seg2:0000
3849  push    bp                              
384a  mov     bp,sp                           
384c  push    ds                              
384d  mov     ds,ax                           
384f  push    0h                              
3851  mov     ax,[0B12h]                      
3854  or      ax,400Dh                        
3857  push    ax                              
3858  call far sub_005b                       
385d  add     sp,4h                           
3860  pop     ds                              
3861  leave                                   
3862  retf                                    
3863  add     [bx+si],al                      

; ===== GSPSETBEAMBLANKRATE =====
3864  mov     ax,3847h                        ; segment seg2:0000
3867  push    bp                              
3868  mov     bp,sp                           
386a  push    ds                              
386b  mov     ds,ax                           
386d  push    word ptr [bp+0Ch]               
3870  push    word ptr [bp+0Ah]               
3873  push    word ptr [bp+8h]                
3876  push    word ptr [bp+6h]                
3879  push    8h                              
387b  push    4h                              
387d  push    1h                              
387f  mov     ax,[0B12h]                      
3882  or      ax,400Eh                        
3885  push    ax                              
3886  call far sub_005b                       
388b  add     sp,10h                          
388e  pop     ds                              
388f  leave                                   
3890  retf    8h                              
3893  add     [bx+si],al                      

; ===== GSPSTARTBEAMBLANKING =====
3894  mov     ax,3865h                        ; segment seg2:0000
3897  push    bp                              
3898  mov     bp,sp                           
389a  push    ds                              
389b  mov     ds,ax                           
389d  push    0h                              
389f  mov     ax,[0B12h]                      
38a2  or      ax,400Fh                        
38a5  push    ax                              
38a6  call far sub_005b                       
38ab  add     sp,4h                           
38ae  pop     ds                              
38af  leave                                   
38b0  retf                                    
38b1  add     [bx+si],al                      

; ===== GSPENDBEAMBLANKING =====
38b2  mov     ax,3895h                        ; segment seg2:0000
38b5  push    bp                              
38b6  mov     bp,sp                           
38b8  push    ds                              
38b9  mov     ds,ax                           
38bb  push    0h                              
38bd  mov     ax,[0B12h]                      
38c0  or      ax,4010h                        
38c3  push    ax                              
38c4  call far sub_005b                       
38c9  add     sp,4h                           
38cc  pop     ds                              
38cd  leave                                   
38ce  retf                                    
38cf  add     [bx+si],al                      

; ===== GSPTURNOPTIBEAMONOFF =====
38d0  mov     ax,38B3h                        ; segment seg2:0000
38d3  push    bp                              
38d4  mov     bp,sp                           
38d6  push    ds                              
38d7  mov     ds,ax                           
38d9  push    word ptr [bp+6h]                
38dc  push    2h                              
38de  push    2h                              
38e0  push    1h                              
38e2  mov     ax,[0B12h]                      
38e5  or      ax,4011h                        
38e8  push    ax                              
38e9  call far sub_005b                       
38ee  add     sp,0Ah                          
38f1  pop     ds                              
38f2  leave                                   
38f3  retf    2h                              

; ===== GSPNOTIFYOPTIBEAM =====
38f6  mov     ax,38D1h                        ; segment seg2:0000
38f9  push    bp                              
38fa  mov     bp,sp                           
38fc  push    ds                              
38fd  mov     ds,ax                           
38ff  push    0h                              
3901  mov     ax,[0B12h]                      
3904  or      ax,4012h                        
3907  push    ax                              
3908  call far sub_005b                       
390d  add     sp,4h                           
3910  pop     ds                              
3911  leave                                   
3912  retf                                    
3913  add     [bx+si],al                      

; ===== GSPSETOPTIBEAMMODE =====
3914  mov     ax,38F7h                        ; segment seg2:0000
3917  push    bp                              
3918  mov     bp,sp                           
391a  push    ds                              
391b  mov     ds,ax                           
391d  push    word ptr [bp+6h]                
3920  push    2h                              
3922  push    2h                              
3924  push    1h                              
3926  mov     ax,[0B12h]                      
3929  or      ax,4013h                        
392c  push    ax                              
392d  call far sub_005b                       
3932  add     sp,0Ah                          
3935  pop     ds                              
3936  leave                                   
3937  retf    2h                              

; ===== GSPSETAUTORESOLUTIONMODE =====
393a  mov     ax,3915h                        ; segment seg2:0000
393d  push    bp                              
393e  mov     bp,sp                           
3940  push    ds                              
3941  mov     ds,ax                           
3943  push    word ptr [bp+6h]                
3946  push    2h                              
3948  push    2h                              
394a  push    1h                              
394c  mov     ax,[0B12h]                      
394f  or      ax,4014h                        
3952  push    ax                              
3953  call far sub_005b                       
3958  add     sp,0Ah                          
395b  pop     ds                              
395c  leave                                   
395d  retf    2h                              

; ===== GSPSETCURRENTAPERTURE =====
3960  mov     ax,393Bh                        ; segment seg2:0000
3963  push    bp                              
3964  mov     bp,sp                           
3966  push    ds                              
3967  mov     ds,ax                           
3969  push    word ptr [bp+6h]                
396c  push    2h                              
396e  push    2h                              
3970  push    1h                              
3972  mov     ax,[0B12h]                      
3975  or      ax,4015h                        
3978  push    ax                              
3979  call far sub_005b                       
397e  add     sp,0Ah                          
3981  pop     ds                              
3982  leave                                   
3983  retf    2h                              

; ===== GSPSETAPERTUREDATA =====
3986  mov     ax,3961h                        ; segment seg2:0000
3989  push    bp                              
398a  mov     bp,sp                           
398c  push    ds                              
398d  mov     ds,ax                           
398f  push    word ptr [bp+8h]                
3992  push    word ptr [bp+6h]                
3995  push    10h                             
3997  push    1h                              
3999  push    1h                              
399b  mov     ax,[0B12h]                      
399e  or      ax,4016h                        
39a1  push    ax                              
39a2  call far sub_005b                       
39a7  add     sp,0Ch                          
39aa  pop     ds                              
39ab  leave                                   
39ac  retf    4h                              
39af  add     [bx+si],al                      

; ===== GSPSETPROBECURRENT =====
39b0  mov     ax,3987h                        ; segment seg2:0000
39b3  push    bp                              
39b4  mov     bp,sp                           
39b6  push    ds                              
39b7  mov     ds,ax                           
39b9  push    word ptr [bp+0Ch]               
39bc  push    word ptr [bp+0Ah]               
39bf  push    word ptr [bp+8h]                
39c2  push    word ptr [bp+6h]                
39c5  push    8h                              
39c7  push    4h                              
39c9  push    1h                              
39cb  mov     ax,[0B12h]                      
39ce  or      ax,4017h                        
39d1  push    ax                              
39d2  call far sub_005b                       
39d7  add     sp,10h                          
39da  pop     ds                              
39db  leave                                   
39dc  retf    8h                              
39df  add     [bx+si],al                      

; ===== GSPREADUIFDATA =====
39e0  mov     ax,39B1h                        ; segment seg2:0000
39e3  push    bp                              
39e4  mov     bp,sp                           
39e6  push    ds                              
39e7  mov     ds,ax                           
39e9  push    word ptr [bp+8h]                
39ec  push    word ptr [bp+6h]                
39ef  push    0A4h                            
39f2  push    81h                             
39f5  push    1h                              
39f7  mov     ax,[0B12h]                      
39fa  or      ax,4018h                        
39fd  push    ax                              
39fe  call far sub_006d                       
3a03  add     sp,0Ch                          
3a06  pop     ds                              
3a07  leave                                   
3a08  retf    4h                              
3a0b  add     [bx+si],al                      

; ===== GSPREADCOLUMNPARAMETERS =====
3a0c  mov     ax,39E1h                        ; segment seg2:0000
3a0f  push    bp                              
3a10  mov     bp,sp                           
3a12  push    ds                              
3a13  mov     ds,ax                           
3a15  push    word ptr [bp+8h]                
3a18  push    word ptr [bp+6h]                
3a1b  push    58h                             
3a1d  push    81h                             
3a20  push    1h                              
3a22  mov     ax,[0B12h]                      
3a25  or      ax,4091h                        
3a28  push    ax                              
3a29  call far sub_006d                       
3a2e  add     sp,0Ch                          
3a31  pop     ds                              
3a32  leave                                   
3a33  retf    4h                              

; ===== GSPSTARTC3HYSTERESISREMOVAL =====
3a36  mov     ax,3A0Dh                        ; segment seg2:0000
3a39  push    bp                              
3a3a  mov     bp,sp                           
3a3c  push    ds                              
3a3d  mov     ds,ax                           
3a3f  push    word ptr [bp+6h]                
3a42  push    2h                              
3a44  push    2h                              
3a46  push    word ptr [bp+0Eh]               
3a49  push    word ptr [bp+0Ch]               
3a4c  push    word ptr [bp+0Ah]               
3a4f  push    word ptr [bp+8h]                
3a52  push    8h                              
3a54  push    4h                              
3a56  push    2h                              
3a58  mov     ax,[0B12h]                      
3a5b  or      ax,4019h                        
3a5e  push    ax                              
3a5f  call far sub_005b                       
3a64  add     sp,16h                          
3a67  pop     ds                              
3a68  leave                                   
3a69  retf    0Ah                             

; ===== GSPABORTC3HYSTERESISREMOVAL =====
3a6c  mov     ax,3A37h                        ; segment seg2:0000
3a6f  push    bp                              
3a70  mov     bp,sp                           
3a72  push    ds                              
3a73  mov     ds,ax                           
3a75  push    0h                              
3a77  mov     ax,[0B12h]                      
3a7a  or      ax,401Ah                        
3a7d  push    ax                              
3a7e  call far sub_005b                       
3a83  add     sp,4h                           
3a86  pop     ds                              
3a87  leave                                   
3a88  retf                                    
3a89  add     [bx+si],al                      

; ===== GSPSETWORKINGDISTONLENS =====
3a8a  mov     ax,3A6Dh                        ; segment seg2:0000
3a8d  push    bp                              
3a8e  mov     bp,sp                           
3a90  push    ds                              
3a91  mov     ds,ax                           
3a93  push    word ptr [bp+0Ch]               
3a96  push    word ptr [bp+0Ah]               
3a99  push    word ptr [bp+8h]                
3a9c  push    word ptr [bp+6h]                
3a9f  push    8h                              
3aa1  push    4h                              
3aa3  push    1h                              
3aa5  mov     ax,[0B12h]                      
3aa8  or      ax,401Bh                        
3aab  push    ax                              
3aac  call far sub_005b                       
3ab1  add     sp,10h                          
3ab4  pop     ds                              
3ab5  leave                                   
3ab6  retf    8h                              
3ab9  add     [bx+si],al                      

; ===== GSPSETFOCUSFORC3CAL =====
3aba  mov     ax,3A8Bh                        ; segment seg2:0000
3abd  push    bp                              
3abe  mov     bp,sp                           
3ac0  push    ds                              
3ac1  mov     ds,ax                           
3ac3  push    0h                              
3ac5  mov     ax,[0B12h]                      
3ac8  or      ax,401Ch                        
3acb  push    ax                              
3acc  call far sub_005b                       
3ad1  add     sp,4h                           
3ad4  pop     ds                              
3ad5  leave                                   
3ad6  retf                                    
3ad7  add     [bx+si],al                      

; ===== GSPSETC3CAL =====
3ad8  mov     ax,3ABBh                        ; segment seg2:0000
3adb  push    bp                              
3adc  mov     bp,sp                           
3ade  push    ds                              
3adf  mov     ds,ax                           
3ae1  push    word ptr [bp+0Ch]               
3ae4  push    word ptr [bp+0Ah]               
3ae7  push    word ptr [bp+8h]                
3aea  push    word ptr [bp+6h]                
3aed  push    8h                              
3aef  push    4h                              
3af1  push    1h                              
3af3  mov     ax,[0B12h]                      
3af6  or      ax,401Dh                        
3af9  push    ax                              
3afa  call far sub_005b                       
3aff  add     sp,10h                          
3b02  pop     ds                              
3b03  leave                                   
3b04  retf    8h                              
3b07  add     [bx+si],al                      

; ===== GSPSETC3REM =====
3b08  mov     ax,3AD9h                        ; segment seg2:0000
3b0b  push    bp                              
3b0c  mov     bp,sp                           
3b0e  push    ds                              
3b0f  mov     ds,ax                           
3b11  push    word ptr [bp+0Ch]               
3b14  push    word ptr [bp+0Ah]               
3b17  push    word ptr [bp+8h]                
3b1a  push    word ptr [bp+6h]                
3b1d  push    8h                              
3b1f  push    4h                              
3b21  push    1h                              
3b23  mov     ax,[0B12h]                      
3b26  or      ax,401Eh                        
3b29  push    ax                              
3b2a  call far sub_005b                       
3b2f  add     sp,10h                          
3b32  pop     ds                              
3b33  leave                                   
3b34  retf    8h                              
3b37  add     [bx+si],al                      

; ===== GSPSETC3FOCALLENGTH =====
3b38  mov     ax,3B09h                        ; segment seg2:0000
3b3b  push    bp                              
3b3c  mov     bp,sp                           
3b3e  push    ds                              
3b3f  mov     ds,ax                           
3b41  push    word ptr [bp+6h]                
3b44  push    2h                              
3b46  push    2h                              
3b48  push    word ptr [bp+0Eh]               
3b4b  push    word ptr [bp+0Ch]               
3b4e  push    word ptr [bp+0Ah]               
3b51  push    word ptr [bp+8h]                
3b54  push    8h                              
3b56  push    4h                              
3b58  push    2h                              
3b5a  mov     ax,[0B12h]                      
3b5d  or      ax,401Fh                        
3b60  push    ax                              
3b61  call far sub_005b                       
3b66  add     sp,16h                          
3b69  pop     ds                              
3b6a  leave                                   
3b6b  retf    0Ah                             

; ===== GSPSETC3CURRENT =====
3b6e  mov     ax,3B39h                        ; segment seg2:0000
3b71  push    bp                              
3b72  mov     bp,sp                           
3b74  push    ds                              
3b75  mov     ds,ax                           
3b77  push    word ptr [bp+0Ch]               
3b7a  push    word ptr [bp+0Ah]               
3b7d  push    word ptr [bp+8h]                
3b80  push    word ptr [bp+6h]                
3b83  push    8h                              
3b85  push    4h                              
3b87  push    1h                              
3b89  mov     ax,[0B12h]                      
3b8c  or      ax,4020h                        
3b8f  push    ax                              
3b90  call far sub_005b                       
3b95  add     sp,10h                          
3b98  pop     ds                              
3b99  leave                                   
3b9a  retf    8h                              
3b9d  add     [bx+si],al                      

; ===== GSPSETUPC3CURRENT =====
3b9e  mov     ax,3B6Fh                        ; segment seg2:0000
3ba1  push    bp                              
3ba2  mov     bp,sp                           
3ba4  push    ds                              
3ba5  mov     ds,ax                           
3ba7  push    word ptr [bp+0Ch]               
3baa  push    word ptr [bp+0Ah]               
3bad  push    word ptr [bp+8h]                
3bb0  push    word ptr [bp+6h]                
3bb3  push    8h                              
3bb5  push    4h                              
3bb7  push    1h                              
3bb9  mov     ax,[0B12h]                      
3bbc  or      ax,4021h                        
3bbf  push    ax                              
3bc0  call far sub_005b                       
3bc5  add     sp,10h                          
3bc8  pop     ds                              
3bc9  leave                                   
3bca  retf    8h                              
3bcd  add     [bx+si],al                      

; ===== GSPCALCFOCUSLENSCURRENT =====
3bce  mov     ax,3B9Fh                        ; segment seg2:0000
3bd1  push    bp                              
3bd2  mov     bp,sp                           
3bd4  push    ds                              
3bd5  mov     ds,ax                           
3bd7  push    0h                              
3bd9  mov     ax,[0B12h]                      
3bdc  or      ax,4022h                        
3bdf  push    ax                              
3be0  call far sub_005b                       
3be5  add     sp,4h                           
3be8  pop     ds                              
3be9  leave                                   
3bea  retf                                    
3beb  add     [bx+si],al                      

; ===== GSPSETC3LENSPOLARITY =====
3bec  mov     ax,3BCFh                        ; segment seg2:0000
3bef  push    bp                              
3bf0  mov     bp,sp                           
3bf2  push    ds                              
3bf3  mov     ds,ax                           
3bf5  push    word ptr [bp+6h]                
3bf8  push    2h                              
3bfa  push    2h                              
3bfc  push    1h                              
3bfe  mov     ax,[0B12h]                      
3c01  or      ax,4023h                        
3c04  push    ax                              
3c05  call far sub_005b                       
3c0a  add     sp,0Ah                          
3c0d  pop     ds                              
3c0e  leave                                   
3c0f  retf    2h                              

; ===== GSPSETWORKINGDIST =====
3c12  mov     ax,3BEDh                        ; segment seg2:0000
3c15  push    bp                              
3c16  mov     bp,sp                           
3c18  push    ds                              
3c19  mov     ds,ax                           
3c1b  push    word ptr [bp+6h]                
3c1e  push    2h                              
3c20  push    2h                              
3c22  push    word ptr [bp+0Eh]               
3c25  push    word ptr [bp+0Ch]               
3c28  push    word ptr [bp+0Ah]               
3c2b  push    word ptr [bp+8h]                
3c2e  push    8h                              
3c30  push    4h                              
3c32  push    2h                              
3c34  mov     ax,[0B12h]                      
3c37  or      ax,4024h                        
3c3a  push    ax                              
3c3b  call far sub_005b                       
3c40  add     sp,16h                          
3c43  pop     ds                              
3c44  leave                                   
3c45  retf    0Ah                             

; ===== GSPSTARTWORKINGDISTMODULATN =====
3c48  mov     ax,3C13h                        ; segment seg2:0000
3c4b  push    bp                              
3c4c  mov     bp,sp                           
3c4e  push    ds                              
3c4f  mov     ds,ax                           
3c51  push    word ptr [bp+0Ch]               
3c54  push    word ptr [bp+0Ah]               
3c57  push    word ptr [bp+8h]                
3c5a  push    word ptr [bp+6h]                
3c5d  push    8h                              
3c5f  push    4h                              
3c61  push    word ptr [bp+14h]               
3c64  push    word ptr [bp+12h]               
3c67  push    word ptr [bp+10h]               
3c6a  push    word ptr [bp+0Eh]               
3c6d  push    8h                              
3c6f  push    4h                              
3c71  push    2h                              
3c73  mov     ax,[0B12h]                      
3c76  or      ax,4025h                        
3c79  push    ax                              
3c7a  call far sub_005b                       
3c7f  add     sp,1Ch                          
3c82  pop     ds                              
3c83  leave                                   
3c84  retf    10h                             
3c87  add     [bx+si],al                      

; ===== GSPSTOPWORKINGDISTMODULATN =====
3c88  mov     ax,3C49h                        ; segment seg2:0000
3c8b  push    bp                              
3c8c  mov     bp,sp                           
3c8e  push    ds                              
3c8f  mov     ds,ax                           
3c91  push    0h                              
3c93  mov     ax,[0B12h]                      
3c96  or      ax,4026h                        
3c99  push    ax                              
3c9a  call far sub_005b                       
3c9f  add     sp,4h                           
3ca2  pop     ds                              
3ca3  leave                                   
3ca4  retf                                    
3ca5  add     [bx+si],al                      

; ===== GSPSTEPFOCUS =====
3ca6  mov     ax,3C89h                        ; segment seg2:0000
3ca9  push    bp                              
3caa  mov     bp,sp                           
3cac  push    ds                              
3cad  mov     ds,ax                           
3caf  push    word ptr [bp+6h]                
3cb2  push    2h                              
3cb4  push    2h                              
3cb6  push    1h                              
3cb8  mov     ax,[0B12h]                      
3cbb  or      ax,4027h                        
3cbe  push    ax                              
3cbf  call far sub_005b                       
3cc4  add     sp,0Ah                          
3cc7  pop     ds                              
3cc8  leave                                   
3cc9  retf    2h                              

; ===== GSPSETFOCUSROTCOMP =====
3ccc  mov     ax,3CA7h                        ; segment seg2:0000
3ccf  push    bp                              
3cd0  mov     bp,sp                           
3cd2  push    ds                              
3cd3  mov     ds,ax                           
3cd5  push    word ptr [bp+0Ch]               
3cd8  push    word ptr [bp+0Ah]               
3cdb  push    word ptr [bp+8h]                
3cde  push    word ptr [bp+6h]                
3ce1  push    8h                              
3ce3  push    4h                              
3ce5  push    1h                              
3ce7  mov     ax,[0B12h]                      
3cea  or      ax,4028h                        
3ced  push    ax                              
3cee  call far sub_005b                       
3cf3  add     sp,10h                          
3cf6  pop     ds                              
3cf7  leave                                   
3cf8  retf    8h                              
3cfb  add     [bx+si],al                      

; ===== GSPFOCUSWOBBLE =====
3cfc  mov     ax,3CCDh                        ; segment seg2:0000
3cff  push    bp                              
3d00  mov     bp,sp                           
3d02  push    ds                              
3d03  mov     ds,ax                           
3d05  push    word ptr [bp+0Ch]               
3d08  push    word ptr [bp+0Ah]               
3d0b  push    word ptr [bp+8h]                
3d0e  push    word ptr [bp+6h]                
3d11  push    8h                              
3d13  push    4h                              
3d15  push    word ptr [bp+14h]               
3d18  push    word ptr [bp+12h]               
3d1b  push    word ptr [bp+10h]               
3d1e  push    word ptr [bp+0Eh]               
3d21  push    8h                              
3d23  push    4h                              
3d25  push    2h                              
3d27  mov     ax,[0B12h]                      
3d2a  or      ax,4029h                        
3d2d  push    ax                              
3d2e  call far sub_005b                       
3d33  add     sp,1Ch                          
3d36  pop     ds                              
3d37  leave                                   
3d38  retf    10h                             
3d3b  add     [bx+si],al                      

; ===== GSPSETFCFTILTANGLE =====
3d3c  mov     ax,3CFDh                        ; segment seg2:0000
3d3f  push    bp                              
3d40  mov     bp,sp                           
3d42  push    ds                              
3d43  mov     ds,ax                           
3d45  push    word ptr [bp+0Ch]               
3d48  push    word ptr [bp+0Ah]               
3d4b  push    word ptr [bp+8h]                
3d4e  push    word ptr [bp+6h]                
3d51  push    8h                              
3d53  push    4h                              
3d55  push    1h                              
3d57  mov     ax,[0B12h]                      
3d5a  or      ax,402Ah                        
3d5d  push    ax                              
3d5e  call far sub_005b                       
3d63  add     sp,10h                          
3d66  pop     ds                              
3d67  leave                                   
3d68  retf    8h                              
3d6b  add     [bx+si],al                      

; ===== GSPGETC3SETTING =====
3d6c  mov     ax,3D3Dh                        ; segment seg2:0000
3d6f  push    bp                              
3d70  mov     bp,sp                           
3d72  push    ds                              
3d73  mov     ds,ax                           
3d75  push    0h                              
3d77  mov     ax,[0B12h]                      
3d7a  or      ax,402Bh                        
3d7d  push    ax                              
3d7e  call far sub_005b                       
3d83  add     sp,4h                           
3d86  pop     ds                              
3d87  leave                                   
3d88  retf                                    
3d89  add     [bx+si],al                      

; ===== GSPPERFORMFINEAUTOFOCUS =====
3d8a  mov     ax,3D6Dh                        ; segment seg2:0000
3d8d  push    bp                              
3d8e  mov     bp,sp                           
3d90  push    ds                              
3d91  mov     ds,ax                           
3d93  push    0h                              
3d95  mov     ax,[0B12h]                      
3d98  or      ax,402Ch                        
3d9b  push    ax                              
3d9c  call far sub_005b                       
3da1  add     sp,4h                           
3da4  pop     ds                              
3da5  leave                                   
3da6  retf                                    
3da7  add     [bx+si],al                      

; ===== GSPPERFORMCOARSEAUTOFOCUS =====
3da8  mov     ax,3D8Bh                        ; segment seg2:0000
3dab  push    bp                              
3dac  mov     bp,sp                           
3dae  push    ds                              
3daf  mov     ds,ax                           
3db1  push    word ptr [bp+0Ch]               
3db4  push    word ptr [bp+0Ah]               
3db7  push    word ptr [bp+8h]                
3dba  push    word ptr [bp+6h]                
3dbd  push    8h                              
3dbf  push    4h                              
3dc1  push    word ptr [bp+14h]               
3dc4  push    word ptr [bp+12h]               
3dc7  push    word ptr [bp+10h]               
3dca  push    word ptr [bp+0Eh]               
3dcd  push    8h                              
3dcf  push    4h                              
3dd1  push    2h                              
3dd3  mov     ax,[0B12h]                      
3dd6  or      ax,402Dh                        
3dd9  push    ax                              
3dda  call far sub_005b                       
3ddf  add     sp,1Ch                          
3de2  pop     ds                              
3de3  leave                                   
3de4  retf    10h                             
3de7  add     [bx+si],al                      

; ===== GSPABORTAUTOFUNCTION =====
3de8  mov     ax,3DA9h                        ; segment seg2:0000
3deb  push    bp                              
3dec  mov     bp,sp                           
3dee  push    ds                              
3def  mov     ds,ax                           
3df1  push    0h                              
3df3  mov     ax,[0B12h]                      
3df6  or      ax,402Eh                        
3df9  push    ax                              
3dfa  call far sub_005b                       
3dff  add     sp,4h                           
3e02  pop     ds                              
3e03  leave                                   
3e04  retf                                    
3e05  add     [bx+si],al                      

; ===== GSPSETCONDENSERLENSCURRENT =====
3e06  mov     ax,3DE9h                        ; segment seg2:0000
3e09  push    bp                              
3e0a  mov     bp,sp                           
3e0c  push    ds                              
3e0d  mov     ds,ax                           
3e0f  push    word ptr [bp+0Ch]               
3e12  push    word ptr [bp+0Ah]               
3e15  push    word ptr [bp+8h]                
3e18  push    word ptr [bp+6h]                
3e1b  push    8h                              
3e1d  push    4h                              
3e1f  push    word ptr [bp+0Eh]               
3e22  push    2h                              
3e24  push    2h                              
3e26  push    2h                              
3e28  mov     ax,[0B12h]                      
3e2b  or      ax,402Fh                        
3e2e  push    ax                              
3e2f  call far sub_005b                       
3e34  add     sp,16h                          
3e37  pop     ds                              
3e38  leave                                   
3e39  retf    0Ah                             

; ===== GSPCALCCONDENSERLENSCURRENT =====
3e3c  mov     ax,3E07h                        ; segment seg2:0000
3e3f  push    bp                              
3e40  mov     bp,sp                           
3e42  push    ds                              
3e43  mov     ds,ax                           
3e45  push    word ptr [bp+6h]                
3e48  push    2h                              
3e4a  push    2h                              
3e4c  push    1h                              
3e4e  mov     ax,[0B12h]                      
3e51  or      ax,4030h                        
3e54  push    ax                              
3e55  call far sub_005b                       
3e5a  add     sp,0Ah                          
3e5d  pop     ds                              
3e5e  leave                                   
3e5f  retf    2h                              

; ===== GSPSETCONDENSERFOCALLENGTH =====
3e62  mov     ax,3E3Dh                        ; segment seg2:0000
3e65  push    bp                              
3e66  mov     bp,sp                           
3e68  push    ds                              
3e69  mov     ds,ax                           
3e6b  push    word ptr [bp+0Ch]               
3e6e  push    word ptr [bp+0Ah]               
3e71  push    word ptr [bp+8h]                
3e74  push    word ptr [bp+6h]                
3e77  push    8h                              
3e79  push    4h                              
3e7b  push    word ptr [bp+0Eh]               
3e7e  push    2h                              
3e80  push    2h                              
3e82  push    2h                              
3e84  mov     ax,[0B12h]                      
3e87  or      ax,4031h                        
3e8a  push    ax                              
3e8b  call far sub_005b                       
3e90  add     sp,16h                          
3e93  pop     ds                              
3e94  leave                                   
3e95  retf    0Ah                             

; ===== GSPSETCONDENSERFORC1CAL =====
3e98  mov     ax,3E63h                        ; segment seg2:0000
3e9b  push    bp                              
3e9c  mov     bp,sp                           
3e9e  push    ds                              
3e9f  mov     ds,ax                           
3ea1  push    0h                              
3ea3  mov     ax,[0B12h]                      
3ea6  or      ax,4032h                        
3ea9  push    ax                              
3eaa  call far sub_005b                       
3eaf  add     sp,4h                           
3eb2  pop     ds                              
3eb3  leave                                   
3eb4  retf                                    
3eb5  add     [bx+si],al                      

; ===== GSPSETCONDENSERFORC2CAL =====
3eb6  mov     ax,3E99h                        ; segment seg2:0000
3eb9  push    bp                              
3eba  mov     bp,sp                           
3ebc  push    ds                              
3ebd  mov     ds,ax                           
3ebf  push    0h                              
3ec1  mov     ax,[0B12h]                      
3ec4  or      ax,4033h                        
3ec7  push    ax                              
3ec8  call far sub_005b                       
3ecd  add     sp,4h                           
3ed0  pop     ds                              
3ed1  leave                                   
3ed2  retf                                    
3ed3  add     [bx+si],al                      

; ===== GSPC1C2HYSTERESISREMOVAL =====
3ed4  mov     ax,3EB7h                        ; segment seg2:0000
3ed7  push    bp                              
3ed8  mov     bp,sp                           
3eda  push    ds                              
3edb  mov     ds,ax                           
3edd  push    word ptr [bp+6h]                
3ee0  push    2h                              
3ee2  push    2h                              
3ee4  push    1h                              
3ee6  mov     ax,[0B12h]                      
3ee9  or      ax,4034h                        
3eec  push    ax                              
3eed  call far sub_005b                       
3ef2  add     sp,0Ah                          
3ef5  pop     ds                              

; ----- sub_3ef6 -----
3ef6  leave                                   
3ef7  retf    2h                              

; ===== GSPSETC1CAL =====
3efa  mov     ax,3ED5h                        ; segment seg2:0000
3efd  push    bp                              
3efe  mov     bp,sp                           
3f00  push    ds                              
3f01  mov     ds,ax                           
3f03  push    word ptr [bp+0Ch]               
3f06  push    word ptr [bp+0Ah]               
3f09  push    word ptr [bp+8h]                
3f0c  push    word ptr [bp+6h]                
3f0f  push    8h                              
3f11  push    4h                              
3f13  push    1h                              
3f15  mov     ax,[0B12h]                      
3f18  or      ax,4035h                        
3f1b  push    ax                              
3f1c  call far sub_005b                       
3f21  add     sp,10h                          
3f24  pop     ds                              
3f25  leave                                   
3f26  retf    8h                              
3f29  add     [bx+si],al                      

; ===== GSPSETC1REM =====
3f2a  mov     ax,3EFBh                        ; segment seg2:0000
3f2d  push    bp                              
3f2e  mov     bp,sp                           
3f30  push    ds                              
3f31  mov     ds,ax                           
3f33  push    word ptr [bp+0Ch]               
3f36  push    word ptr [bp+0Ah]               
3f39  push    word ptr [bp+8h]                
3f3c  push    word ptr [bp+6h]                
3f3f  push    8h                              
3f41  push    4h                              
3f43  push    1h                              
3f45  mov     ax,[0B12h]                      
3f48  or      ax,4036h                        
3f4b  push    ax                              
3f4c  call far sub_005b                       
3f51  add     sp,10h                          
3f54  pop     ds                              
3f55  leave                                   
3f56  retf    8h                              
3f59  add     [bx+si],al                      

; ===== GSPSETC2CAL =====
3f5a  mov     ax,3F2Bh                        ; segment seg2:0000
3f5d  push    bp                              
3f5e  mov     bp,sp                           
3f60  push    ds                              
3f61  mov     ds,ax                           
3f63  push    word ptr [bp+0Ch]               
3f66  push    word ptr [bp+0Ah]               
3f69  push    word ptr [bp+8h]                
3f6c  push    word ptr [bp+6h]                
3f6f  push    8h                              
3f71  push    4h                              
3f73  push    1h                              
3f75  mov     ax,[0B12h]                      
3f78  or      ax,4037h                        
3f7b  push    ax                              
3f7c  call far sub_005b                       
3f81  add     sp,10h                          
3f84  pop     ds                              
3f85  leave                                   
3f86  retf    8h                              
3f89  add     [bx+si],al                      

; ===== GSPSETC2REM =====
3f8a  mov     ax,3F5Bh                        ; segment seg2:0000
3f8d  push    bp                              
3f8e  mov     bp,sp                           
3f90  push    ds                              
3f91  mov     ds,ax                           
3f93  push    word ptr [bp+0Ch]               
3f96  push    word ptr [bp+0Ah]               
3f99  push    word ptr [bp+8h]                
3f9c  push    word ptr [bp+6h]                
3f9f  push    8h                              
3fa1  push    4h                              
3fa3  push    1h                              
3fa5  mov     ax,[0B12h]                      
3fa8  or      ax,4038h                        
3fab  push    ax                              
3fac  call far sub_005b                       
3fb1  add     sp,10h                          
3fb4  pop     ds                              
3fb5  leave                                   
3fb6  retf    8h                              
3fb9  add     [bx+si],al                      

; ===== GSPGETC1SETTING =====
3fba  mov     ax,3F8Bh                        ; segment seg2:0000
3fbd  push    bp                              
3fbe  mov     bp,sp                           
3fc0  push    ds                              
3fc1  mov     ds,ax                           
3fc3  push    0h                              
3fc5  mov     ax,[0B12h]                      
3fc8  or      ax,4039h                        
3fcb  push    ax                              
3fcc  call far sub_005b                       
3fd1  add     sp,4h                           
3fd4  pop     ds                              
3fd5  leave                                   
3fd6  retf                                    
3fd7  add     [bx+si],al                      

; ===== GSPGETC2SETTING =====
3fd8  mov     ax,3FBBh                        ; segment seg2:0000
3fdb  push    bp                              
3fdc  mov     bp,sp                           
3fde  push    ds                              
3fdf  mov     ds,ax                           
3fe1  push    0h                              
3fe3  mov     ax,[0B12h]                      
3fe6  or      ax,403Ah                        
3fe9  push    ax                              
3fea  call far sub_005b                       
3fef  add     sp,4h                           
3ff2  pop     ds                              
3ff3  leave                                   
3ff4  retf                                    
3ff5  add     [bx+si],al                      

; ===== GSPRECALCSCANTRANSFORMS =====
3ff6  mov     ax,3FD9h                        ; segment seg2:0000
3ff9  push    bp                              
3ffa  mov     bp,sp                           
3ffc  push    ds                              
3ffd  mov     ds,ax                           
3fff  push    0h                              
4001  mov     ax,[0B12h]                      
4004  or      ax,403Bh                        
4007  push    ax                              
4008  call far sub_005b                       
400d  add     sp,4h                           
4010  pop     ds                              
4011  leave                                   
4012  retf                                    
4013  add     [bx+si],al                      

; ===== GSPSETSCANROTATION =====
4014  mov     ax,3FF7h                        ; segment seg2:0000
4017  push    bp                              
4018  mov     bp,sp                           
401a  push    ds                              
401b  mov     ds,ax                           
401d  push    word ptr [bp+0Ch]               
4020  push    word ptr [bp+0Ah]               
4023  push    word ptr [bp+8h]                
4026  push    word ptr [bp+6h]                
4029  push    8h                              
402b  push    4h                              
402d  push    1h                              
402f  mov     ax,[0B12h]                      
4032  or      ax,403Ch                        
4035  push    ax                              
4036  call far sub_005b                       
403b  add     sp,10h                          
403e  pop     ds                              
403f  leave                                   
4040  retf    8h                              
4043  add     [bx+si],al                      

; ===== GSPSETSCANOFFSET =====
4044  mov     ax,4015h                        ; segment seg2:0000
4047  push    bp                              
4048  mov     bp,sp                           
404a  push    ds                              
404b  mov     ds,ax                           
404d  push    word ptr [bp+0Ch]               
4050  push    word ptr [bp+0Ah]               
4053  push    word ptr [bp+8h]                
4056  push    word ptr [bp+6h]                
4059  push    8h                              
405b  push    4h                              
405d  push    1h                              
405f  mov     ax,[0B12h]                      
4062  or      ax,403Dh                        
4065  push    ax                              
4066  call far sub_005b                       
406b  add     sp,10h                          
406e  pop     ds                              
406f  leave                                   
4070  retf    8h                              
4073  add     [bx+si],al                      

; ===== GSPSETSCANORTHOGONALITY =====
4074  mov     ax,4045h                        ; segment seg2:0000
4077  push    bp                              
4078  mov     bp,sp                           
407a  push    ds                              
407b  mov     ds,ax                           
407d  push    word ptr [bp+0Ch]               
4080  push    word ptr [bp+0Ah]               
4083  push    word ptr [bp+8h]                
4086  push    word ptr [bp+6h]                
4089  push    8h                              
408b  push    4h                              
408d  push    1h                              
408f  mov     ax,[0B12h]                      
4092  or      ax,403Eh                        
4095  push    ax                              
4096  call far sub_005b                       
409b  add     sp,10h                          
409e  pop     ds                              
409f  leave                                   
40a0  retf    8h                              
40a3  add     [bx+si],al                      

; ===== GSPSETSCANCOILSENSITIVITY =====
40a4  mov     ax,4075h                        ; segment seg2:0000
40a7  push    bp                              
40a8  mov     bp,sp                           
40aa  push    ds                              
40ab  mov     ds,ax                           
40ad  push    word ptr [bp+0Ch]               
40b0  push    word ptr [bp+0Ah]               
40b3  push    word ptr [bp+8h]                
40b6  push    word ptr [bp+6h]                
40b9  push    8h                              
40bb  push    4h                              
40bd  push    word ptr [bp+0Eh]               
40c0  push    2h                              
40c2  push    2h                              
40c4  push    2h                              
40c6  mov     ax,[0B12h]                      
40c9  or      ax,403Fh                        
40cc  push    ax                              
40cd  call far sub_005b                       
40d2  add     sp,16h                          
40d5  pop     ds                              
40d6  leave                                   
40d7  retf    0Ah                             

; ===== GSPSETTILTCORRECTION =====
40da  mov     ax,40A5h                        ; segment seg2:0000
40dd  push    bp                              
40de  mov     bp,sp                           
40e0  push    ds                              
40e1  mov     ds,ax                           
40e3  push    word ptr [bp+0Ch]               
40e6  push    word ptr [bp+0Ah]               
40e9  push    word ptr [bp+8h]                
40ec  push    word ptr [bp+6h]                
40ef  push    8h                              
40f1  push    4h                              
40f3  push    1h                              
40f5  mov     ax,[0B12h]                      
40f8  or      ax,4040h                        
40fb  push    ax                              
40fc  call far sub_005b                       
4101  add     sp,10h                          
4104  pop     ds                              
4105  leave                                   
4106  retf    8h                              
4109  add     [bx+si],al                      

; ===== GSPSETSTAGETILTAXIS =====
410a  mov     ax,40DBh                        ; segment seg2:0000
410d  push    bp                              
410e  mov     bp,sp                           
4110  push    ds                              
4111  mov     ds,ax                           
4113  push    word ptr [bp+6h]                
4116  push    2h                              
4118  push    2h                              
411a  push    1h                              
411c  mov     ax,[0B12h]                      
411f  or      ax,4041h                        
4122  push    ax                              
4123  call far sub_005b                       
4128  add     sp,0Ah                          
412b  pop     ds                              
412c  leave                                   
412d  retf    2h                              

; ===== GSPSETMAG =====
4130  mov     ax,410Bh                        ; segment seg2:0000
4133  push    bp                              
4134  mov     bp,sp                           
4136  push    ds                              
4137  mov     ds,ax                           
4139  push    word ptr [bp+0Ch]               
413c  push    word ptr [bp+0Ah]               
413f  push    word ptr [bp+8h]                
4142  push    word ptr [bp+6h]                
4145  push    8h                              
4147  push    4h                              
4149  push    1h                              
414b  mov     ax,[0B12h]                      
414e  or      ax,4042h                        
4151  push    ax                              
4152  call far sub_005b                       
4157  add     sp,10h                          
415a  pop     ds                              
415b  leave                                   
415c  retf    8h                              
415f  add     [bx+si],al                      

; ===== GSPSETMAGTRACKING =====
4160  mov     ax,4131h                        ; segment seg2:0000
4163  push    bp                              
4164  mov     bp,sp                           
4166  push    ds                              
4167  mov     ds,ax                           
4169  push    word ptr [bp+6h]                
416c  push    2h                              
416e  push    2h                              
4170  push    1h                              
4172  mov     ax,[0B12h]                      
4175  or      ax,4043h                        
4178  push    ax                              
4179  call far sub_005b                       
417e  add     sp,0Ah                          
4181  pop     ds                              
4182  leave                                   
4183  retf    2h                              

; ===== GSPSETMAGCOMPAMP =====
4186  mov     ax,4161h                        ; segment seg2:0000
4189  push    bp                              
418a  mov     bp,sp                           
418c  push    ds                              
418d  mov     ds,ax                           
418f  push    word ptr [bp+0Ch]               
4192  push    word ptr [bp+0Ah]               
4195  push    word ptr [bp+8h]                
4198  push    word ptr [bp+6h]                
419b  push    8h                              
419d  push    4h                              
419f  push    1h                              
41a1  mov     ax,[0B12h]                      
41a4  or      ax,4044h                        
41a7  push    ax                              
41a8  call far sub_005b                       
41ad  add     sp,10h                          
41b0  pop     ds                              
41b1  leave                                   
41b2  retf    8h                              
41b5  add     [bx+si],al                      

; ===== GSPSETMAGCOMPOFFSET =====
41b6  mov     ax,4187h                        ; segment seg2:0000
41b9  push    bp                              
41ba  mov     bp,sp                           
41bc  push    ds                              
41bd  mov     ds,ax                           
41bf  push    word ptr [bp+6h]                
41c2  push    2h                              
41c4  push    2h                              
41c6  push    word ptr [bp+8h]                
41c9  push    2h                              
41cb  push    2h                              
41cd  push    2h                              
41cf  mov     ax,[0B12h]                      
41d2  or      ax,4045h                        
41d5  push    ax                              
41d6  call far sub_005b                       
41db  add     sp,10h                          
41de  pop     ds                              
41df  leave                                   
41e0  retf    4h                              
41e3  add     [bx+si],al                      

; ===== GSPSETMICROSHIFT =====
41e4  mov     ax,41B7h                        ; segment seg2:0000
41e7  push    bp                              
41e8  mov     bp,sp                           
41ea  push    ds                              
41eb  mov     ds,ax                           
41ed  push    word ptr [bp+0Ch]               
41f0  push    word ptr [bp+0Ah]               
41f3  push    word ptr [bp+8h]                
41f6  push    word ptr [bp+6h]                
41f9  push    8h                              
41fb  push    4h                              
41fd  push    word ptr [bp+14h]               
4200  push    word ptr [bp+12h]               
4203  push    word ptr [bp+10h]               
4206  push    word ptr [bp+0Eh]               
4209  push    8h                              
420b  push    4h                              
420d  push    2h                              
420f  mov     ax,[0B12h]                      
4212  or      ax,4046h                        
4215  push    ax                              
4216  call far sub_005b                       
421b  add     sp,1Ch                          
421e  pop     ds                              
421f  leave                                   
4220  retf    10h                             
4223  add     [bx+si],al                      

; ===== GSPSETSCANRATE =====
4224  mov     ax,41E5h                        ; segment seg2:0000
4227  push    bp                              
4228  mov     bp,sp                           
422a  push    ds                              
422b  mov     ds,ax                           
422d  push    word ptr [bp+6h]                
4230  push    2h                              
4232  push    2h                              
4234  push    word ptr [bp+8h]                
4237  push    2h                              
4239  push    2h                              
423b  push    2h                              
423d  mov     ax,[0B12h]                      
4240  or      ax,4047h                        
4243  push    ax                              
4244  call far sub_005b                       
4249  add     sp,10h                          
424c  pop     ds                              
424d  leave                                   
424e  retf    4h                              
4251  add     [bx+si],al                      

; ===== GSPSETSCANFORMAT =====
4252  mov     ax,4225h                        ; segment seg2:0000
4255  push    bp                              
4256  mov     bp,sp                           
4258  push    ds                              
4259  mov     ds,ax                           
425b  push    word ptr [bp+6h]                
425e  push    2h                              
4260  push    2h                              
4262  push    word ptr [bp+8h]                
4265  push    2h                              
4267  push    2h                              
4269  push    2h                              
426b  mov     ax,[0B12h]                      
426e  or      ax,4048h                        
4271  push    ax                              
4272  call far sub_005b                       
4277  add     sp,10h                          
427a  pop     ds                              
427b  leave                                   
427c  retf    4h                              
427f  add     [bx+si],al                      

; ===== GSPSETSCANDEFINITION =====
4280  mov     ax,4253h                        ; segment seg2:0000
4283  push    bp                              
4284  mov     bp,sp                           
4286  push    ds                              
4287  mov     ds,ax                           
4289  push    word ptr [bp+6h]                
428c  push    2h                              
428e  push    2h                              
4290  push    word ptr [bp+8h]                
4293  push    2h                              
4295  push    2h                              
4297  push    word ptr [bp+0Ah]               
429a  push    2h                              
429c  push    2h                              
429e  push    word ptr [bp+0Ch]               
42a1  push    2h                              
42a3  push    2h                              
42a5  push    word ptr [bp+0Eh]               
42a8  push    2h                              
42aa  push    2h                              
42ac  push    5h                              
42ae  mov     ax,[0B12h]                      
42b1  or      ax,4049h                        
42b4  push    ax                              
42b5  call far sub_005b                       
42ba  add     sp,22h                          
42bd  pop     ds                              
42be  leave                                   
42bf  retf    0Ah                             

; ===== GSPSELECTEMISSIONIMAGING =====
42c2  mov     ax,4281h                        ; segment seg2:0000
42c5  push    bp                              
42c6  mov     bp,sp                           
42c8  push    ds                              
42c9  mov     ds,ax                           
42cb  push    word ptr [bp+6h]                
42ce  push    2h                              
42d0  push    2h                              
42d2  push    1h                              
42d4  mov     ax,[0B12h]                      
42d7  or      ax,404Ah                        
42da  push    ax                              
42db  call far sub_005b                       
42e0  add     sp,0Ah                          
42e3  pop     ds                              
42e4  leave                                   
42e5  retf    2h                              

; ===== GSPSELECTSCANNING =====
42e8  mov     ax,42C3h                        ; segment seg2:0000
42eb  push    bp                              
42ec  mov     bp,sp                           
42ee  push    ds                              
42ef  mov     ds,ax                           
42f1  push    word ptr [bp+6h]                
42f4  push    2h                              
42f6  push    2h                              
42f8  push    1h                              
42fa  mov     ax,[0B12h]                      
42fd  or      ax,404Bh                        
4300  push    ax                              
4301  call far sub_005b                       
4306  add     sp,0Ah                          
4309  pop     ds                              
430a  leave                                   
430b  retf    2h                              

; ===== GSPSETDUALMAGSCAN =====
430e  mov     ax,42E9h                        ; segment seg2:0000
4311  push    bp                              
4312  mov     bp,sp                           
4314  push    ds                              
4315  mov     ds,ax                           
4317  push    word ptr [bp+6h]                
431a  push    2h                              
431c  push    2h                              
431e  push    word ptr [bp+8h]                
4321  push    2h                              
4323  push    2h                              
4325  push    word ptr [bp+0Ah]               
4328  push    2h                              
432a  push    2h                              
432c  push    word ptr [bp+12h]               
432f  push    word ptr [bp+10h]               
4332  push    word ptr [bp+0Eh]               
4335  push    word ptr [bp+0Ch]               
4338  push    8h                              
433a  push    4h                              
433c  push    4h                              
433e  mov     ax,[0B12h]                      
4341  or      ax,404Ch                        
4344  push    ax                              
4345  call far sub_005b                       
434a  add     sp,22h                          
434d  pop     ds                              
434e  leave                                   
434f  retf    0Eh                             

; ===== GSPSETSTEREOONOFF =====
4352  mov     ax,430Fh                        ; segment seg2:0000
4355  push    bp                              
4356  mov     bp,sp                           
4358  push    ds                              
4359  mov     ds,ax                           
435b  push    word ptr [bp+6h]                
435e  push    2h                              
4360  push    2h                              
4362  push    1h                              
4364  mov     ax,[0B12h]                      
4367  or      ax,404Dh                        
436a  push    ax                              
436b  call far sub_005b                       
4370  add     sp,0Ah                          
4373  pop     ds                              
4374  leave                                   
4375  retf    2h                              

; ===== GSPSETSTEREOTILT =====
4378  mov     ax,4353h                        ; segment seg2:0000
437b  push    bp                              
437c  mov     bp,sp                           
437e  push    ds                              
437f  mov     ds,ax                           
4381  push    word ptr [bp+0Ch]               
4384  push    word ptr [bp+0Ah]               
4387  push    word ptr [bp+8h]                
438a  push    word ptr [bp+6h]                
438d  push    8h                              
438f  push    4h                              
4391  push    1h                              
4393  mov     ax,[0B12h]                      
4396  or      ax,404Eh                        
4399  push    ax                              
439a  call far sub_005b                       
439f  add     sp,10h                          
43a2  pop     ds                              
43a3  leave                                   
43a4  retf    8h                              
43a7  add     [bx+si],al                      

; ===== GSPSETSTEREOMERGE =====
43a8  mov     ax,4379h                        ; segment seg2:0000
43ab  push    bp                              
43ac  mov     bp,sp                           
43ae  push    ds                              
43af  mov     ds,ax                           
43b1  push    word ptr [bp+0Ch]               
43b4  push    word ptr [bp+0Ah]               
43b7  push    word ptr [bp+8h]                
43ba  push    word ptr [bp+6h]                
43bd  push    8h                              
43bf  push    4h                              
43c1  push    1h                              
43c3  mov     ax,[0B12h]                      
43c6  or      ax,404Fh                        
43c9  push    ax                              
43ca  call far sub_005b                       
43cf  add     sp,10h                          
43d2  pop     ds                              
43d3  leave                                   
43d4  retf    8h                              
43d7  add     [bx+si],al                      

; ===== GSPSETSTEREOROTATE =====
43d8  mov     ax,43A9h                        ; segment seg2:0000
43db  push    bp                              
43dc  mov     bp,sp                           
43de  push    ds                              
43df  mov     ds,ax                           
43e1  push    word ptr [bp+0Ch]               
43e4  push    word ptr [bp+0Ah]               
43e7  push    word ptr [bp+8h]                
43ea  push    word ptr [bp+6h]                
43ed  push    8h                              
43ef  push    4h                              
43f1  push    1h                              
43f3  mov     ax,[0B12h]                      
43f6  or      ax,4050h                        
43f9  push    ax                              
43fa  call far sub_005b                       
43ff  add     sp,10h                          
4402  pop     ds                              
4403  leave                                   
4404  retf    8h                              
4407  add     [bx+si],al                      

; ===== GSPSTARTAUTOBEAMALIGN =====
4408  mov     ax,43D9h                        ; segment seg2:0000
440b  push    bp                              
440c  mov     bp,sp                           
440e  push    ds                              
440f  mov     ds,ax                           
4411  push    0h                              
4413  mov     ax,[0B12h]                      
4416  or      ax,4051h                        
4419  push    ax                              
441a  call far sub_005b                       
441f  add     sp,4h                           
4422  pop     ds                              
4423  leave                                   
4424  retf                                    
4425  add     [bx+si],al                      

; ===== GSPFINISHAUTOBEAMALIGN =====
4426  mov     ax,4409h                        ; segment seg2:0000
4429  push    bp                              
442a  mov     bp,sp                           
442c  push    ds                              
442d  mov     ds,ax                           
442f  push    0h                              
4431  mov     ax,[0B12h]                      
4434  or      ax,4052h                        
4437  push    ax                              
4438  call far sub_005b                       
443d  add     sp,4h                           
4440  pop     ds                              
4441  leave                                   
4442  retf                                    
4443  add     [bx+si],al                      

; ===== GSPDOWIDEAUTOALIGN =====
4444  mov     ax,4427h                        ; segment seg2:0000
4447  push    bp                              
4448  mov     bp,sp                           
444a  push    ds                              
444b  mov     ds,ax                           
444d  push    0h                              
444f  mov     ax,[0B12h]                      
4452  or      ax,4053h                        
4455  push    ax                              
4456  call far sub_005b                       
445b  add     sp,4h                           
445e  pop     ds                              
445f  leave                                   
4460  retf                                    
4461  add     [bx+si],al                      

; ===== GSPDOSTANDARDAUTOALIGN =====
4462  mov     ax,4445h                        ; segment seg2:0000
4465  push    bp                              
4466  mov     bp,sp                           
4468  push    ds                              
4469  mov     ds,ax                           
446b  push    0h                              
446d  mov     ax,[0B12h]                      
4470  or      ax,4054h                        
4473  push    ax                              
4474  call far sub_005b                       
4479  add     sp,4h                           
447c  pop     ds                              
447d  leave                                   
447e  retf                                    
447f  add     [bx+si],al                      

; ===== GSPDOFINEAUTOALIGN =====
4480  mov     ax,4463h                        ; segment seg2:0000
4483  push    bp                              
4484  mov     bp,sp                           
4486  push    ds                              
4487  mov     ds,ax                           
4489  push    0h                              
448b  mov     ax,[0B12h]                      
448e  or      ax,4055h                        
4491  push    ax                              
4492  call far sub_005b                       
4497  add     sp,4h                           
449a  pop     ds                              
449b  leave                                   
449c  retf                                    
449d  add     [bx+si],al                      

; ===== GSPSETSTIGMATORX =====
449e  mov     ax,4481h                        ; segment seg2:0000
44a1  push    bp                              
44a2  mov     bp,sp                           
44a4  push    ds                              
44a5  mov     ds,ax                           
44a7  push    word ptr [bp+0Ch]               
44aa  push    word ptr [bp+0Ah]               
44ad  push    word ptr [bp+8h]                
44b0  push    word ptr [bp+6h]                
44b3  push    8h                              
44b5  push    4h                              
44b7  push    1h                              
44b9  mov     ax,[0B12h]                      
44bc  or      ax,4056h                        
44bf  push    ax                              
44c0  call far sub_005b                       
44c5  add     sp,10h                          
44c8  pop     ds                              
44c9  leave                                   
44ca  retf    8h                              
44cd  add     [bx+si],al                      

; ===== GSPSETSTIGMATORY =====
44ce  mov     ax,449Fh                        ; segment seg2:0000
44d1  push    bp                              
44d2  mov     bp,sp                           
44d4  push    ds                              
44d5  mov     ds,ax                           
44d7  push    word ptr [bp+0Ch]               
44da  push    word ptr [bp+0Ah]               
44dd  push    word ptr [bp+8h]                
44e0  push    word ptr [bp+6h]                
44e3  push    8h                              
44e5  push    4h                              
44e7  push    1h                              
44e9  mov     ax,[0B12h]                      
44ec  or      ax,4057h                        
44ef  push    ax                              
44f0  call far sub_005b                       
44f5  add     sp,10h                          
44f8  pop     ds                              
44f9  leave                                   
44fa  retf    8h                              
44fd  add     [bx+si],al                      

; ===== GSPSETSTIGBALANCE =====
44fe  mov     ax,44CFh                        ; segment seg2:0000
4501  push    bp                              
4502  mov     bp,sp                           
4504  push    ds                              
4505  mov     ds,ax                           
4507  push    word ptr [bp+0Ch]               
450a  push    word ptr [bp+0Ah]               
450d  push    word ptr [bp+8h]                
4510  push    word ptr [bp+6h]                
4513  push    8h                              
4515  push    4h                              
4517  push    word ptr [bp+0Eh]               
451a  push    2h                              
451c  push    2h                              
451e  push    2h                              
4520  mov     ax,[0B12h]                      
4523  or      ax,4058h                        
4526  push    ax                              
4527  call far sub_005b                       
452c  add     sp,16h                          
452f  pop     ds                              
4530  leave                                   
4531  retf    0Ah                             

; ===== GSPSTARTWOBBLEXSTIG =====
4534  mov     ax,44FFh                        ; segment seg2:0000
4537  push    bp                              
4538  mov     bp,sp                           
453a  push    ds                              
453b  mov     ds,ax                           
453d  push    0h                              
453f  mov     ax,[0B12h]                      
4542  or      ax,4059h                        
4545  push    ax                              
4546  call far sub_005b                       
454b  add     sp,4h                           
454e  pop     ds                              
454f  leave                                   
4550  retf                                    
4551  add     [bx+si],al                      

; ===== GSPSTARTWOBBLEYSTIG =====
4552  mov     ax,4535h                        ; segment seg2:0000
4555  push    bp                              
4556  mov     bp,sp                           
4558  push    ds                              
4559  mov     ds,ax                           
455b  push    0h                              
455d  mov     ax,[0B12h]                      
4560  or      ax,405Ah                        
4563  push    ax                              
4564  call far sub_005b                       
4569  add     sp,4h                           
456c  pop     ds                              
456d  leave                                   
456e  retf                                    
456f  add     [bx+si],al                      

; ===== GSPSTOPWOBBLEXSTIG =====
4570  mov     ax,4553h                        ; segment seg2:0000
4573  push    bp                              
4574  mov     bp,sp                           
4576  push    ds                              
4577  mov     ds,ax                           
4579  push    0h                              
457b  mov     ax,[0B12h]                      
457e  or      ax,405Bh                        
4581  push    ax                              
4582  call far sub_005b                       
4587  add     sp,4h                           
458a  pop     ds                              
458b  leave                                   
458c  retf                                    
458d  add     [bx+si],al                      

; ===== GSPSTOPWOBBLEYSTIG =====
458e  mov     ax,4571h                        ; segment seg2:0000
4591  push    bp                              
4592  mov     bp,sp                           
4594  push    ds                              
4595  mov     ds,ax                           
4597  push    0h                              
4599  mov     ax,[0B12h]                      
459c  or      ax,405Ch                        
459f  push    ax                              
45a0  call far sub_005b                       
45a5  add     sp,4h                           
45a8  pop     ds                              
45a9  leave                                   
45aa  retf                                    
45ab  add     [bx+si],al                      

; ===== GSPSETSTIGWOBBLEAMPLITUDE =====
45ac  mov     ax,458Fh                        ; segment seg2:0000
45af  push    bp                              
45b0  mov     bp,sp                           
45b2  push    ds                              
45b3  mov     ds,ax                           
45b5  push    word ptr [bp+0Ch]               
45b8  push    word ptr [bp+0Ah]               
45bb  push    word ptr [bp+8h]                
45be  push    word ptr [bp+6h]                
45c1  push    8h                              
45c3  push    4h                              
45c5  push    1h                              
45c7  mov     ax,[0B12h]                      
45ca  or      ax,405Dh                        
45cd  push    ax                              
45ce  call far sub_005b                       
45d3  add     sp,10h                          
45d6  pop     ds                              
45d7  leave                                   
45d8  retf    8h                              
45db  add     [bx+si],al                      

; ===== GSPSETSTIGWOBBLEPERIOD =====
45dc  mov     ax,45ADh                        ; segment seg2:0000
45df  push    bp                              
45e0  mov     bp,sp                           
45e2  push    ds                              
45e3  mov     ds,ax                           
45e5  push    word ptr [bp+0Ch]               
45e8  push    word ptr [bp+0Ah]               
45eb  push    word ptr [bp+8h]                
45ee  push    word ptr [bp+6h]                
45f1  push    8h                              
45f3  push    4h                              
45f5  push    1h                              
45f7  mov     ax,[0B12h]                      
45fa  or      ax,405Eh                        
45fd  push    ax                              
45fe  call far sub_005b                       
4603  add     sp,10h                          
4606  pop     ds                              
4607  leave                                   
4608  retf    8h                              
460b  add     [bx+si],al                      

; ===== GSPENABLEDYNAMICSTIG =====
460c  mov     ax,45DDh                        ; segment seg2:0000
460f  push    bp                              
4610  mov     bp,sp                           
4612  push    ds                              
4613  mov     ds,ax                           
4615  push    0h                              
4617  mov     ax,[0B12h]                      
461a  or      ax,405Fh                        
461d  push    ax                              
461e  call far sub_005b                       
4623  add     sp,4h                           
4626  pop     ds                              
4627  leave                                   
4628  retf                                    
4629  add     [bx+si],al                      

; ===== GSPDISABLEDYNAMICSTIG =====
462a  mov     ax,460Dh                        ; segment seg2:0000
462d  push    bp                              
462e  mov     bp,sp                           
4630  push    ds                              
4631  mov     ds,ax                           
4633  push    0h                              
4635  mov     ax,[0B12h]                      
4638  or      ax,4060h                        
463b  push    ax                              
463c  call far sub_005b                       
4641  add     sp,4h                           
4644  pop     ds                              
4645  leave                                   
4646  retf                                    
4647  add     [bx+si],al                      

; ===== GSPPERFORMAUTOSTIG =====
4648  mov     ax,462Bh                        ; segment seg2:0000
464b  push    bp                              
464c  mov     bp,sp                           
464e  push    ds                              
464f  mov     ds,ax                           
4651  push    0h                              
4653  mov     ax,[0B12h]                      
4656  or      ax,4061h                        
4659  push    ax                              
465a  call far sub_005b                       
465f  add     sp,4h                           
4662  pop     ds                              
4663  leave                                   
4664  retf                                    
4665  add     [bx+si],al                      

; ===== GSPPERFORMAUTOSTIGNOFOCUS =====
4666  mov     ax,4649h                        ; segment seg2:0000
4669  push    bp                              
466a  mov     bp,sp                           
466c  push    ds                              
466d  mov     ds,ax                           
466f  push    0h                              
4671  mov     ax,[0B12h]                      
4674  or      ax,408Ch                        
4677  push    ax                              
4678  call far sub_005b                       
467d  add     sp,4h                           
4680  pop     ds                              
4681  leave                                   
4682  retf                                    
4683  add     [bx+si],al                      

; ===== GSPOPTIBEAMSTATUS =====
4684  mov     ax,4667h                        ; segment seg2:0000
4687  push    bp                              
4688  mov     bp,sp                           
468a  push    ds                              
468b  mov     ds,ax                           
468d  push    word ptr [bp+8h]                
4690  push    word ptr [bp+6h]                
4693  push    0CAh                            
4696  push    81h                             
4699  push    1h                              
469b  mov     ax,[0B12h]                      
469e  or      ax,4062h                        
46a1  push    ax                              
46a2  call far sub_006d                       
46a7  add     sp,0Ch                          
46aa  pop     ds                              
46ab  leave                                   
46ac  retf    4h                              
46af  add     [bx+si],al                      

; ===== GSPINITEOBOARD =====
46b0  mov     ax,4685h                        ; segment seg2:0000
46b3  push    bp                              
46b4  mov     bp,sp                           
46b6  push    ds                              
46b7  mov     ds,ax                           
46b9  push    word ptr [bp+6h]                
46bc  push    2h                              
46be  push    2h                              
46c0  push    1h                              
46c2  mov     ax,[0B12h]                      
46c5  or      ax,4063h                        
46c8  push    ax                              
46c9  call far sub_005b                       
46ce  add     sp,0Ah                          
46d1  pop     ds                              
46d2  leave                                   
46d3  retf    2h                              

; ===== GSPREADAUTOSTATUS =====
46d6  mov     ax,46B1h                        ; segment seg2:0000
46d9  push    bp                              
46da  mov     bp,sp                           
46dc  push    ds                              
46dd  mov     ds,ax                           
46df  push    0h                              
46e1  mov     ax,[0B12h]                      
46e4  or      ax,4064h                        
46e7  push    ax                              
46e8  call far sub_0064                       
46ed  add     sp,4h                           
46f0  pop     ds                              
46f1  leave                                   
46f2  retf                                    
46f3  add     [bx+si],al                      

; ===== GSPEXPORTPROBETABLE =====
46f4  mov     ax,46D7h                        ; segment seg2:0000
46f7  push    bp                              
46f8  mov     bp,sp                           
46fa  push    ds                              
46fb  mov     ds,ax                           
46fd  push    word ptr [bp+8h]                
4700  push    word ptr [bp+6h]                
4703  push    64h                             
4705  push    81h                             
4708  push    1h                              
470a  mov     ax,[0B12h]                      
470d  or      ax,406Eh                        
4710  push    ax                              
4711  call far sub_006d                       
4716  add     sp,0Ch                          
4719  pop     ds                              
471a  leave                                   
471b  retf    4h                              

; ===== GSPIMPORTPROBETABLE =====
471e  mov     ax,46F5h                        ; segment seg2:0000
4721  push    bp                              
4722  mov     bp,sp                           
4724  push    ds                              
4725  mov     ds,ax                           
4727  push    word ptr [bp+8h]                
472a  push    word ptr [bp+6h]                
472d  push    64h                             
472f  push    81h                             
4732  push    1h                              
4734  mov     ax,[0B12h]                      
4737  or      ax,406Fh                        
473a  push    ax                              
473b  call far sub_006d                       
4740  add     sp,0Ch                          
4743  pop     ds                              
4744  leave                                   
4745  retf    4h                              

; ===== GSPEXPORTCONDITIONTABLE =====
4748  mov     ax,471Fh                        ; segment seg2:0000
474b  push    bp                              
474c  mov     bp,sp                           
474e  push    ds                              
474f  mov     ds,ax                           
4751  push    word ptr [bp+8h]                
4754  push    word ptr [bp+6h]                
4757  push    0AAh                            
475a  push    81h                             
475d  push    1h                              
475f  mov     ax,[0B12h]                      
4762  or      ax,4070h                        
4765  push    ax                              
4766  call far sub_006d                       
476b  add     sp,0Ch                          
476e  pop     ds                              
476f  leave                                   
4770  retf    4h                              
4773  add     [bx+si],al                      

; ===== GSPIMPORTCONDITIONTABLE =====
4774  mov     ax,4749h                        ; segment seg2:0000
4777  push    bp                              
4778  mov     bp,sp                           
477a  push    ds                              
477b  mov     ds,ax                           
477d  push    word ptr [bp+8h]                
4780  push    word ptr [bp+6h]                
4783  push    0AAh                            
4786  push    81h                             
4789  push    1h                              
478b  mov     ax,[0B12h]                      
478e  or      ax,4071h                        
4791  push    ax                              
4792  call far sub_006d                       
4797  add     sp,0Ch                          
479a  pop     ds                              
479b  leave                                   
479c  retf    4h                              
479f  add     [bx+si],al                      

; ===== GSPSETSCANSOURCE =====
47a0  mov     ax,4775h                        ; segment seg2:0000
47a3  push    bp                              
47a4  mov     bp,sp                           
47a6  push    ds                              
47a7  mov     ds,ax                           
47a9  push    word ptr [bp+6h]                
47ac  push    2h                              
47ae  push    2h                              
47b0  push    1h                              
47b2  mov     ax,[0B12h]                      
47b5  or      ax,406Bh                        
47b8  push    ax                              
47b9  call far sub_005b                       
47be  add     sp,0Ah                          
47c1  pop     ds                              
47c2  leave                                   
47c3  retf    2h                              

; ===== GSPSETFRAMETRANSAMP =====
47c6  mov     ax,47A1h                        ; segment seg2:0000
47c9  push    bp                              
47ca  mov     bp,sp                           
47cc  push    ds                              
47cd  mov     ds,ax                           
47cf  push    word ptr [bp+6h]                
47d2  push    2h                              
47d4  push    2h                              
47d6  push    1h                              
47d8  mov     ax,[0B12h]                      
47db  or      ax,4068h                        
47de  push    ax                              
47df  call far sub_005b                       
47e4  add     sp,0Ah                          
47e7  pop     ds                              
47e8  leave                                   
47e9  retf    2h                              

; ===== GSPSETLINETRANSAMP =====
47ec  mov     ax,47C7h                        ; segment seg2:0000
47ef  push    bp                              
47f0  mov     bp,sp                           
47f2  push    ds                              
47f3  mov     ds,ax                           
47f5  push    word ptr [bp+6h]                
47f8  push    2h                              
47fa  push    2h                              
47fc  push    1h                              
47fe  mov     ax,[0B12h]                      
4801  or      ax,4067h                        
4804  push    ax                              
4805  call far sub_005b                       
480a  add     sp,0Ah                          
480d  pop     ds                              
480e  leave                                   
480f  retf    2h                              

; ===== GSPSETLINEFRAMERATIO =====
4812  mov     ax,47EDh                        ; segment seg2:0000
4815  push    bp                              
4816  mov     bp,sp                           
4818  push    ds                              
4819  mov     ds,ax                           
481b  push    word ptr [bp+6h]                
481e  push    2h                              
4820  push    2h                              
4822  push    1h                              
4824  mov     ax,[0B12h]                      
4827  or      ax,4069h                        
482a  push    ax                              
482b  call far sub_005b                       
4830  add     sp,0Ah                          
4833  pop     ds                              
4834  leave                                   
4835  retf    2h                              

; ===== GSPSETSCANCENTRE =====
4838  mov     ax,4813h                        ; segment seg2:0000
483b  push    bp                              
483c  mov     bp,sp                           
483e  push    ds                              
483f  mov     ds,ax                           
4841  push    word ptr [bp+6h]                
4844  push    2h                              
4846  push    2h                              
4848  push    word ptr [bp+8h]                
484b  push    2h                              
484d  push    2h                              
484f  push    2h                              
4851  mov     ax,[0B12h]                      
4854  or      ax,406Ah                        
4857  push    ax                              
4858  call far sub_005b                       
485d  add     sp,10h                          
4860  pop     ds                              
4861  leave                                   
4862  retf    4h                              
4865  add     [bx+si],al                      

; ===== GSPDEFINESPOT =====
4866  mov     ax,4839h                        ; segment seg2:0000
4869  push    bp                              
486a  mov     bp,sp                           
486c  push    ds                              
486d  mov     ds,ax                           
486f  push    word ptr [bp+6h]                
4872  push    2h                              
4874  push    2h                              
4876  push    word ptr [bp+8h]                
4879  push    2h                              
487b  push    2h                              
487d  push    word ptr [bp+0Ah]               
4880  push    2h                              
4882  push    2h                              
4884  push    3h                              
4886  mov     ax,[0B12h]                      
4889  or      ax,406Ch                        
488c  push    ax                              
488d  call far sub_005b                       
4892  add     sp,16h                          
4895  pop     ds                              
4896  leave                                   
4897  retf    6h                              

; ===== GSPENABLESCANTRANSFORMS =====
489a  mov     ax,4867h                        ; segment seg2:0000
489d  push    bp                              
489e  mov     bp,sp                           
48a0  push    ds                              
48a1  mov     ds,ax                           
48a3  push    word ptr [bp+6h]                
48a6  push    2h                              
48a8  push    2h                              
48aa  push    word ptr [bp+8h]                
48ad  push    2h                              
48af  push    2h                              
48b1  push    word ptr [bp+0Ah]               
48b4  push    2h                              
48b6  push    2h                              
48b8  push    word ptr [bp+0Ch]               
48bb  push    2h                              
48bd  push    2h                              
48bf  push    word ptr [bp+0Eh]               
48c2  push    2h                              
48c4  push    2h                              
48c6  push    5h                              
48c8  mov     ax,[0B12h]                      
48cb  or      ax,4066h                        
48ce  push    ax                              
48cf  call far sub_005b                       
48d4  add     sp,22h                          
48d7  pop     ds                              
48d8  leave                                   
48d9  retf    0Ah                             

; ===== GSPSETDUALMAGSLOPE =====
48dc  mov     ax,489Bh                        ; segment seg2:0000
48df  push    bp                              
48e0  mov     bp,sp                           
48e2  push    ds                              
48e3  mov     ds,ax                           
48e5  push    word ptr [bp+0Ch]               
48e8  push    word ptr [bp+0Ah]               
48eb  push    word ptr [bp+8h]                
48ee  push    word ptr [bp+6h]                
48f1  push    8h                              
48f3  push    4h                              
48f5  push    1h                              
48f7  mov     ax,[0B12h]                      
48fa  or      ax,406Dh                        
48fd  push    ax                              
48fe  call far sub_005b                       
4903  add     sp,10h                          
4906  pop     ds                              
4907  leave                                   
4908  retf    8h                              
490b  add     [bx+si],al                      

; ===== GSPSETDUALMAGYSLOPE =====
490c  mov     ax,48DDh                        ; segment seg2:0000
490f  push    bp                              
4910  mov     bp,sp                           
4912  push    ds                              
4913  mov     ds,ax                           
4915  push    word ptr [bp+0Ch]               
4918  push    word ptr [bp+0Ah]               
491b  push    word ptr [bp+8h]                
491e  push    word ptr [bp+6h]                
4921  push    8h                              
4923  push    4h                              
4925  push    1h                              
4927  mov     ax,[0B12h]                      
492a  or      ax,4072h                        
492d  push    ax                              
492e  call far sub_005b                       
4933  add     sp,10h                          
4936  pop     ds                              
4937  leave                                   
4938  retf    8h                              
493b  add     [bx+si],al                      

; ===== DELEOMODULE =====
493c  mov     ax,490Dh                        ; segment seg2:0000
493f  push    bp                              
4940  mov     bp,sp                           
4942  push    ds                              
4943  mov     ds,ax                           
4945  push    word ptr [0B12h]                ; [ds] f32 here = 0
4949  push    2h                              
494b  push    0h                              
494d  push    1h                              
494f  push    7E63h                           
4952  call far sub_0064                       
4957  add     sp,0Ah                          
495a  pop     ds                              
495b  leave                                   
495c  retf                                    
495d  add     [bx+si],al                      

; ===== GSPSETCONJUGATEMODE =====
495e  mov     ax,493Dh                        ; segment seg2:0000
4961  push    bp                              
4962  mov     bp,sp                           
4964  push    ds                              
4965  mov     ds,ax                           
4967  push    word ptr [bp+6h]                
496a  push    2h                              
496c  push    2h                              
496e  push    1h                              
4970  mov     ax,[0B12h]                      
4973  or      ax,4073h                        
4976  push    ax                              
4977  call far sub_005b                       
497c  add     sp,0Ah                          
497f  pop     ds                              
4980  leave                                   
4981  retf    2h                              

; ===== GSPSETCONJUGATEFOCUS =====
4984  mov     ax,495Fh                        ; segment seg2:0000
4987  push    bp                              
4988  mov     bp,sp                           
498a  push    ds                              
498b  mov     ds,ax                           
498d  push    word ptr [bp+0Ch]               
4990  push    word ptr [bp+0Ah]               
4993  push    word ptr [bp+8h]                
4996  push    word ptr [bp+6h]                
4999  push    8h                              
499b  push    4h                              
499d  push    1h                              
499f  mov     ax,[0B12h]                      
49a2  or      ax,4074h                        
49a5  push    ax                              
49a6  call far sub_005b                       
49ab  add     sp,10h                          
49ae  pop     ds                              
49af  leave                                   
49b0  retf    8h                              
49b3  add     [bx+si],al                      

; ===== GSPSETMICROSHIFTDISTANCE =====
49b4  mov     ax,4985h                        ; segment seg2:0000
49b7  push    bp                              
49b8  mov     bp,sp                           
49ba  push    ds                              
49bb  mov     ds,ax                           
49bd  push    word ptr [bp+0Ch]               
49c0  push    word ptr [bp+0Ah]               
49c3  push    word ptr [bp+8h]                
49c6  push    word ptr [bp+6h]                
49c9  push    8h                              
49cb  push    4h                              
49cd  push    word ptr [bp+14h]               
49d0  push    word ptr [bp+12h]               
49d3  push    word ptr [bp+10h]               
49d6  push    word ptr [bp+0Eh]               
49d9  push    8h                              
49db  push    4h                              
49dd  push    2h                              
49df  mov     ax,[0B12h]                      
49e2  or      ax,4075h                        
49e5  push    ax                              
49e6  call far sub_005b                       
49eb  add     sp,1Ch                          
49ee  pop     ds                              
49ef  leave                                   
49f0  retf    10h                             
49f3  add     [bx+si],al                      

; ===== GSPSETMICROSHIFTCAL =====
49f4  mov     ax,49B5h                        ; segment seg2:0000
49f7  push    bp                              
49f8  mov     bp,sp                           
49fa  push    ds                              
49fb  mov     ds,ax                           
49fd  push    word ptr [bp+0Ch]               
4a00  push    word ptr [bp+0Ah]               
4a03  push    word ptr [bp+8h]                
4a06  push    word ptr [bp+6h]                
4a09  push    8h                              
4a0b  push    4h                              
4a0d  push    word ptr [bp+14h]               
4a10  push    word ptr [bp+12h]               
4a13  push    word ptr [bp+10h]               
4a16  push    word ptr [bp+0Eh]               
4a19  push    8h                              
4a1b  push    4h                              
4a1d  push    2h                              
4a1f  mov     ax,[0B12h]                      
4a22  or      ax,4078h                        
4a25  push    ax                              
4a26  call far sub_005b                       
4a2b  add     sp,1Ch                          
4a2e  pop     ds                              
4a2f  leave                                   
4a30  retf    10h                             
4a33  add     [bx+si],al                      

; ===== GSPSETDIGITALRATE =====
4a34  mov     ax,49F5h                        ; segment seg2:0000
4a37  push    bp                              
4a38  mov     bp,sp                           
4a3a  push    ds                              
4a3b  mov     ds,ax                           
4a3d  push    word ptr [bp+6h]                
4a40  push    2h                              
4a42  push    2h                              
4a44  push    1h                              
4a46  mov     ax,[0B12h]                      
4a49  or      ax,4079h                        
4a4c  push    ax                              
4a4d  call far sub_005b                       
4a52  add     sp,0Ah                          
4a55  pop     ds                              
4a56  leave                                   
4a57  retf    2h                              

; ===== GSPSETMICROSHIFTJOYSTICK =====
4a5a  mov     ax,4A35h                        ; segment seg2:0000
4a5d  push    bp                              
4a5e  mov     bp,sp                           
4a60  push    ds                              
4a61  mov     ds,ax                           
4a63  push    word ptr [bp+6h]                
4a66  push    2h                              
4a68  push    2h                              
4a6a  push    1h                              
4a6c  mov     ax,[0B12h]                      
4a6f  or      ax,407Ah                        
4a72  push    ax                              
4a73  call far sub_005b                       
4a78  add     sp,0Ah                          
4a7b  pop     ds                              
4a7c  leave                                   
4a7d  retf    2h                              

; ===== GSPSETMICROSHIFTSTEP =====
4a80  mov     ax,4A5Bh                        ; segment seg2:0000
4a83  push    bp                              
4a84  mov     bp,sp                           
4a86  push    ds                              
4a87  mov     ds,ax                           
4a89  push    word ptr [bp+0Ch]               
4a8c  push    word ptr [bp+0Ah]               
4a8f  push    word ptr [bp+8h]                
4a92  push    word ptr [bp+6h]                
4a95  push    8h                              
4a97  push    4h                              
4a99  push    word ptr [bp+14h]               
4a9c  push    word ptr [bp+12h]               
4a9f  push    word ptr [bp+10h]               
4aa2  push    word ptr [bp+0Eh]               
4aa5  push    8h                              
4aa7  push    4h                              
4aa9  push    2h                              
4aab  mov     ax,[0B12h]                      
4aae  or      ax,4076h                        
4ab1  push    ax                              
4ab2  call far sub_005b                       
4ab7  add     sp,1Ch                          
4aba  pop     ds                              
4abb  leave                                   
4abc  retf    10h                             
4abf  add     [bx+si],al                      

; ===== GSPSETMICROSHIFTMAGLEVER =====
4ac0  mov     ax,4A81h                        ; segment seg2:0000
4ac3  push    bp                              
4ac4  mov     bp,sp                           
4ac6  push    ds                              
4ac7  mov     ds,ax                           
4ac9  push    word ptr [bp+0Ch]               
4acc  push    word ptr [bp+0Ah]               
4acf  push    word ptr [bp+8h]                
4ad2  push    word ptr [bp+6h]                
4ad5  push    8h                              
4ad7  push    4h                              
4ad9  push    word ptr [bp+14h]               
4adc  push    word ptr [bp+12h]               
4adf  push    word ptr [bp+10h]               
4ae2  push    word ptr [bp+0Eh]               
4ae5  push    8h                              
4ae7  push    4h                              
4ae9  push    2h                              
4aeb  mov     ax,[0B12h]                      
4aee  or      ax,407Dh                        
4af1  push    ax                              
4af2  call far sub_005b                       
4af7  add     sp,1Ch                          
4afa  pop     ds                              
4afb  leave                                   
4afc  retf    10h                             
4aff  add     [bx+si],al                      

; ===== GSPGETMICROSHIFTMAGLEVER =====
4b00  mov     ax,4AC1h                        ; segment seg2:0000
4b03  push    bp                              
4b04  mov     bp,sp                           
4b06  push    ds                              
4b07  mov     ds,ax                           
4b09  push    word ptr [bp+8h]                
4b0c  push    word ptr [bp+6h]                
4b0f  push    8h                              
4b11  push    81h                             
4b14  push    1h                              
4b16  mov     ax,[0B12h]                      
4b19  or      ax,407Eh                        
4b1c  push    ax                              
4b1d  call far sub_006d                       
4b22  add     sp,0Ch                          
4b25  pop     ds                              
4b26  leave                                   
4b27  retf    4h                              

; ===== GSPSETLENSXTALK =====
4b2a  mov     ax,4B01h                        ; segment seg2:0000
4b2d  push    bp                              
4b2e  mov     bp,sp                           
4b30  push    ds                              
4b31  mov     ds,ax                           
4b33  push    word ptr [bp+0Ch]               
4b36  push    word ptr [bp+0Ah]               
4b39  push    word ptr [bp+8h]                
4b3c  push    word ptr [bp+6h]                
4b3f  push    8h                              
4b41  push    4h                              
4b43  push    word ptr [bp+0Eh]               
4b46  push    2h                              
4b48  push    2h                              
4b4a  push    2h                              
4b4c  mov     ax,[0B12h]                      
4b4f  or      ax,407Fh                        
4b52  push    ax                              
4b53  call far sub_005b                       
4b58  add     sp,16h                          
4b5b  pop     ds                              
4b5c  leave                                   
4b5d  retf    0Ah                             

; ===== GSPSEVENBITMODE =====
4b60  mov     ax,4B2Bh                        ; segment seg2:0000
4b63  push    bp                              
4b64  mov     bp,sp                           
4b66  push    ds                              
4b67  mov     ds,ax                           
4b69  mov     al,[bp+6h]                      
4b6c  cbw                                     
4b6d  push    ax                              
4b6e  push    2h                              
4b70  push    2h                              
4b72  mov     al,[bp+8h]                      
4b75  cbw                                     
4b76  push    ax                              
4b77  push    2h                              
4b79  push    2h                              
4b7b  push    2h                              
4b7d  mov     ax,[0B12h]                      
4b80  or      ax,4080h                        
4b83  push    ax                              
4b84  call far sub_005b                       
4b89  add     sp,10h                          
4b8c  pop     ds                              
4b8d  leave                                   
4b8e  retf    4h                              
4b91  add     [bx+si],al                      

; ===== GSPSTOREPATTERN =====
4b92  mov     ax,4B61h                        ; segment seg2:0000
4b95  push    bp                              
4b96  mov     bp,sp                           
4b98  push    ds                              
4b99  mov     ds,ax                           
4b9b  mov     al,[bp+6h]                      
4b9e  cbw                                     
4b9f  push    ax                              
4ba0  push    2h                              
4ba2  push    2h                              
4ba4  mov     al,[bp+8h]                      
4ba7  cbw                                     
4ba8  push    ax                              
4ba9  push    2h                              
4bab  push    2h                              
4bad  push    2h                              
4baf  mov     ax,[0B12h]                      
4bb2  or      ax,4081h                        
4bb5  push    ax                              
4bb6  call far sub_005b                       
4bbb  add     sp,10h                          
4bbe  pop     ds                              
4bbf  leave                                   
4bc0  retf    4h                              
4bc3  add     [bx+si],al                      

; ===== GSPSETC1LENSPOLARITY =====
4bc4  mov     ax,4B93h                        ; segment seg2:0000
4bc7  push    bp                              
4bc8  mov     bp,sp                           
4bca  push    ds                              
4bcb  mov     ds,ax                           
4bcd  push    word ptr [bp+6h]                
4bd0  push    2h                              
4bd2  push    2h                              
4bd4  push    1h                              
4bd6  mov     ax,[0B12h]                      
4bd9  or      ax,4082h                        
4bdc  push    ax                              
4bdd  call far sub_005b                       
4be2  add     sp,0Ah                          
4be5  pop     ds                              
4be6  leave                                   
4be7  retf    2h                              

; ===== GSPSETC2LENSPOLARITY =====
4bea  mov     ax,4BC5h                        ; segment seg2:0000
4bed  push    bp                              
4bee  mov     bp,sp                           
4bf0  push    ds                              
4bf1  mov     ds,ax                           
4bf3  push    word ptr [bp+6h]                
4bf6  push    2h                              
4bf8  push    2h                              
4bfa  push    1h                              
4bfc  mov     ax,[0B12h]                      
4bff  or      ax,4083h                        
4c02  push    ax                              
4c03  call far sub_005b                       
4c08  add     sp,0Ah                          
4c0b  pop     ds                              
4c0c  leave                                   
4c0d  retf    2h                              

; ===== GSPSETMAGRANGECORRECTION =====
4c10  mov     ax,4BEBh                        ; segment seg2:0000
4c13  push    bp                              
4c14  mov     bp,sp                           
4c16  push    ds                              
4c17  mov     ds,ax                           
4c19  push    word ptr [bp+16h]               
4c1c  push    2h                              
4c1e  push    2h                              
4c20  push    word ptr [bp+0Ch]               
4c23  push    word ptr [bp+0Ah]               
4c26  push    word ptr [bp+8h]                
4c29  push    word ptr [bp+6h]                
4c2c  push    8h                              
4c2e  push    4h                              
4c30  push    word ptr [bp+14h]               
4c33  push    word ptr [bp+12h]               
4c36  push    word ptr [bp+10h]               
4c39  push    word ptr [bp+0Eh]               
4c3c  push    8h                              
4c3e  push    4h                              
4c40  push    3h                              
4c42  mov     ax,[0B12h]                      
4c45  or      ax,4084h                        
4c48  push    ax                              
4c49  call far sub_005b                       
4c4e  add     sp,22h                          
4c51  pop     ds                              
4c52  leave                                   
4c53  retf    12h                             

; ===== GSPSETMAGSCANCENTRE =====
4c56  mov     ax,4C11h                        ; segment seg2:0000
4c59  push    bp                              
4c5a  mov     bp,sp                           
4c5c  push    ds                              
4c5d  mov     ds,ax                           
4c5f  push    word ptr [bp+6h]                
4c62  push    2h                              
4c64  push    2h                              
4c66  push    word ptr [bp+8h]                
4c69  push    2h                              
4c6b  push    2h                              
4c6d  push    word ptr [bp+0Ah]               
4c70  push    2h                              
4c72  push    2h                              
4c74  push    3h                              
4c76  mov     ax,[0B12h]                      
4c79  or      ax,4085h                        
4c7c  push    ax                              
4c7d  call far sub_005b                       
4c82  add     sp,16h                          
4c85  pop     ds                              
4c86  leave                                   
4c87  retf    6h                              

; ===== GSPDOFEATURESCAN =====
4c8a  mov     ax,4C57h                        ; segment seg2:0000
4c8d  push    bp                              
4c8e  mov     bp,sp                           
4c90  push    si                              
4c91  push    ds                              
4c92  mov     ds,ax                           
4c94  mov     si,[bp+6h]                      
4c97  push    si                              
4c98  push    2h                              
4c9a  push    2h                              
4c9c  push    word ptr [bp+0Ah]               
4c9f  push    word ptr [bp+8h]                
4ca2  mov     ax,si                           
4ca4  add     si,si                           
4ca6  add     si,ax                           
4ca8  add     si,si                           
4caa  push    si                              
4cab  push    1h                              
4cad  push    2h                              
4caf  mov     ax,[0B12h]                      
4cb2  or      ax,4086h                        
4cb5  push    ax                              
4cb6  call far sub_0076                       
4cbb  add     sp,12h                          
4cbe  pop     ds                              
4cbf  pop     si                              
4cc0  leave                                   
4cc1  retf    6h                              

; ===== GSPPERFORMFINDIMAGE =====
4cc4  mov     ax,4C8Bh                        ; segment seg2:0000
4cc7  push    bp                              
4cc8  mov     bp,sp                           
4cca  push    ds                              
4ccb  mov     ds,ax                           
4ccd  push    word ptr [bp+0Ch]               
4cd0  push    word ptr [bp+0Ah]               
4cd3  push    word ptr [bp+8h]                
4cd6  push    word ptr [bp+6h]                
4cd9  push    8h                              
4cdb  push    4h                              
4cdd  push    word ptr [bp+14h]               
4ce0  push    word ptr [bp+12h]               
4ce3  push    word ptr [bp+10h]               
4ce6  push    word ptr [bp+0Eh]               
4ce9  push    8h                              
4ceb  push    4h                              
4ced  push    2h                              
4cef  mov     ax,[0B12h]                      
4cf2  or      ax,4087h                        
4cf5  push    ax                              
4cf6  call far sub_005b                       
4cfb  add     sp,1Ch                          
4cfe  pop     ds                              
4cff  leave                                   
4d00  retf    10h                             
4d03  add     [bx+si],al                      

; ===== GSPSTARTFOCUSSCAN =====
4d04  mov     ax,4CC5h                        ; segment seg2:0000
4d07  push    bp                              
4d08  mov     bp,sp                           
4d0a  push    ds                              
4d0b  mov     ds,ax                           
4d0d  push    word ptr [bp+0Ch]               
4d10  push    word ptr [bp+0Ah]               
4d13  push    word ptr [bp+8h]                
4d16  push    word ptr [bp+6h]                
4d19  push    8h                              
4d1b  push    4h                              
4d1d  push    word ptr [bp+14h]               
4d20  push    word ptr [bp+12h]               
4d23  push    word ptr [bp+10h]               
4d26  push    word ptr [bp+0Eh]               
4d29  push    8h                              
4d2b  push    4h                              
4d2d  push    word ptr [bp+16h]               
4d30  push    2h                              
4d32  push    2h                              
4d34  push    3h                              
4d36  mov     ax,[0B12h]                      
4d39  or      ax,4088h                        
4d3c  push    ax                              
4d3d  call far sub_005b                       
4d42  add     sp,22h                          
4d45  pop     ds                              
4d46  leave                                   
4d47  retf    12h                             

; ===== GSPREVERSEFOCUSSCAN =====
4d4a  mov     ax,4D05h                        ; segment seg2:0000
4d4d  push    bp                              
4d4e  mov     bp,sp                           
4d50  push    ds                              
4d51  mov     ds,ax                           
4d53  push    0h                              
4d55  mov     ax,[0B12h]                      
4d58  or      ax,4089h                        
4d5b  push    ax                              
4d5c  call far sub_005b                       
4d61  add     sp,4h                           
4d64  pop     ds                              
4d65  leave                                   
4d66  retf                                    
4d67  add     [bx+si],al                      

; ===== GSPSETFIRSTPEAK =====
4d68  mov     ax,4D4Bh                        ; segment seg2:0000
4d6b  push    bp                              
4d6c  mov     bp,sp                           
4d6e  push    ds                              
4d6f  mov     ds,ax                           
4d71  push    word ptr [bp+8h]                
4d74  push    word ptr [bp+6h]                
4d77  push    12h                             
4d79  push    1h                              
4d7b  push    1h                              
4d7d  mov     ax,[0B12h]                      
4d80  or      ax,408Ah                        
4d83  push    ax                              
4d84  call far sub_005b                       
4d89  add     sp,0Ch                          
4d8c  pop     ds                              
4d8d  leave                                   
4d8e  retf    4h                              
4d91  add     [bx+si],al                      

; ===== GSPSETSECONDPEAK =====
4d92  mov     ax,4D69h                        ; segment seg2:0000
4d95  push    bp                              
4d96  mov     bp,sp                           
4d98  push    ds                              
4d99  mov     ds,ax                           
4d9b  push    word ptr [bp+8h]                
4d9e  push    word ptr [bp+6h]                
4da1  push    12h                             
4da3  push    1h                              
4da5  push    1h                              
4da7  mov     ax,[0B12h]                      
4daa  or      ax,408Bh                        
4dad  push    ax                              
4dae  call far sub_005b                       
4db3  add     sp,0Ch                          
4db6  pop     ds                              
4db7  leave                                   
4db8  retf    4h                              
4dbb  add     [bx+si],al                      

; ===== GSPFEOPTUPDATE =====
4dbc  mov     ax,4D93h                        ; segment seg2:0000
4dbf  push    bp                              
4dc0  mov     bp,sp                           
4dc2  push    ds                              
4dc3  mov     ds,ax                           
4dc5  push    word ptr [bp+8h]                
4dc8  push    word ptr [bp+6h]                
4dcb  push    20h                             
4dcd  push    1h                              
4dcf  push    1h                              
4dd1  mov     ax,[0B12h]                      
4dd4  or      ax,408Dh                        
4dd7  push    ax                              
4dd8  call far sub_005b                       
4ddd  add     sp,0Ch                          
4de0  pop     ds                              
4de1  leave                                   
4de2  retf    4h                              
4de5  add     [bx+si],al                      

; ===== GSPCOMPOSITEHYSTERESIS =====
4de6  mov     ax,4DBDh                        ; segment seg2:0000
4de9  push    bp                              
4dea  mov     bp,sp                           
4dec  push    ds                              
4ded  mov     ds,ax                           
4def  push    word ptr [bp+0Ch]               
4df2  push    word ptr [bp+0Ah]               
4df5  push    word ptr [bp+8h]                
4df8  push    word ptr [bp+6h]                
4dfb  push    8h                              
4dfd  push    4h                              
4dff  push    word ptr [bp+14h]               
4e02  push    word ptr [bp+12h]               
4e05  push    word ptr [bp+10h]               
4e08  push    word ptr [bp+0Eh]               
4e0b  push    8h                              
4e0d  push    4h                              
4e0f  push    word ptr [bp+16h]               
4e12  push    2h                              
4e14  push    2h                              
4e16  push    word ptr [bp+18h]               
4e19  push    2h                              
4e1b  push    2h                              
4e1d  push    4h                              
4e1f  mov     ax,[0B12h]                      
4e22  or      ax,408Eh                        
4e25  push    ax                              
4e26  call far sub_005b                       
4e2b  add     sp,28h                          
4e2e  pop     ds                              
4e2f  leave                                   
4e30  retf    14h                             
4e33  add     [bx+si],al                      

; ===== GSPSETCOLUMNPROFILE =====
4e34  mov     ax,4DE7h                        ; segment seg2:0000
4e37  push    bp                              
4e38  mov     bp,sp                           
4e3a  push    ds                              
4e3b  mov     ds,ax                           
4e3d  push    word ptr [bp+6h]                
4e40  push    2h                              
4e42  push    2h                              
4e44  push    1h                              
4e46  mov     ax,[0B12h]                      
4e49  or      ax,408Fh                        
4e4c  push    ax                              
4e4d  call far sub_005b                       
4e52  add     sp,0Ah                          
4e55  pop     ds                              
4e56  leave                                   
4e57  retf    2h                              

; ===== GSPSETEMISSIONCENTRE =====
4e5a  mov     ax,4E35h                        ; segment seg2:0000
4e5d  push    bp                              
4e5e  mov     bp,sp                           
4e60  push    ds                              
4e61  mov     ds,ax                           
4e63  push    word ptr [bp+6h]                
4e66  push    2h                              
4e68  push    2h                              
4e6a  push    word ptr [bp+8h]                
4e6d  push    2h                              
4e6f  push    2h                              
4e71  push    2h                              
4e73  mov     ax,[0B12h]                      
4e76  or      ax,4090h                        
4e79  push    ax                              
4e7a  call far sub_005b                       
4e7f  add     sp,10h                          
4e82  pop     ds                              
4e83  leave                                   
4e84  retf    4h                              
4e87  nop                                     

; ===== DELIMEXMODULE =====
4e88  mov     ax,2429h                        ; segment seg2:0000
4e8b  push    bp                              
4e8c  mov     bp,sp                           
4e8e  push    ds                              
4e8f  mov     ds,ax                           
4e91  push    word ptr [0B14h]                ; [ds] f32 here = 0
4e95  push    2h                              
4e97  push    0h                              
4e99  push    1h                              
4e9b  push    7E63h                           
4e9e  call far sub_0064                       
4ea3  add     sp,0Ah                          
4ea6  pop     ds                              
4ea7  leave                                   
4ea8  retf                                    
4ea9  add     [bx+si],al                      

; ===== SETIMAGELUT =====
4eaa  mov     ax,4E89h                        ; segment seg2:0000
4ead  push    bp                              
4eae  mov     bp,sp                           
4eb0  push    ds                              
4eb1  mov     ds,ax                           
4eb3  pop     ds                              
4eb4  leave                                   
4eb5  retf                                    

; ===== GETIMAGELUT =====
4eb6  mov     ax,4EABh                        ; segment seg2:0000
4eb9  push    bp                              
4eba  mov     bp,sp                           
4ebc  push    ds                              
4ebd  mov     ds,ax                           
4ebf  push    word ptr [bp+8h]                
4ec2  push    word ptr [bp+6h]                
4ec5  push    18h                             
4ec7  push    81h                             
4eca  push    1h                              
4ecc  mov     ax,[0B14h]                      
4ecf  or      ax,4001h                        
4ed2  push    ax                              
4ed3  call far sub_006d                       
4ed8  add     sp,0Ch                          
4edb  pop     ds                              
4edc  leave                                   
4edd  retf    4h                              

; ===== GETOVERLAYLUT =====
4ee0  mov     ax,4EB7h                        ; segment seg2:0000
4ee3  push    bp                              
4ee4  mov     bp,sp                           
4ee6  push    ds                              
4ee7  mov     ds,ax                           
4ee9  push    word ptr [bp+8h]                
4eec  push    word ptr [bp+6h]                
4eef  push    9h                              
4ef1  push    81h                             
4ef4  push    1h                              
4ef6  mov     ax,[0B14h]                      
4ef9  or      ax,4002h                        
4efc  push    ax                              
4efd  call far sub_006d                       
4f02  add     sp,0Ch                          
4f05  pop     ds                              
4f06  leave                                   
4f07  retf    4h                              

; ===== INITIMAGECOMMS =====
4f0a  mov     ax,4EE1h                        ; segment seg2:0000
4f0d  push    bp                              
4f0e  mov     bp,sp                           
4f10  push    ds                              
4f11  mov     ds,ax                           
4f13  push    0h                              
4f15  mov     ax,[0B14h]                      
4f18  or      ax,4003h                        
4f1b  push    ax                              
4f1c  call far sub_0064                       
4f21  add     sp,4h                           
4f24  pop     ds                              
4f25  leave                                   
4f26  retf                                    
4f27  add     [bx+si],al                      

; ===== READIMGSTATUS =====
4f28  mov     ax,4F0Bh                        ; segment seg2:0000
4f2b  push    bp                              
4f2c  mov     bp,sp                           
4f2e  push    ds                              
4f2f  mov     ds,ax                           
4f31  push    word ptr [bp+8h]                
4f34  push    word ptr [bp+6h]                
4f37  push    12h                             
4f39  push    81h                             
4f3c  push    1h                              
4f3e  mov     ax,[0B14h]                      
4f41  or      ax,4004h                        
4f44  push    ax                              
4f45  call far sub_006d                       
4f4a  add     sp,0Ch                          
4f4d  pop     ds                              
4f4e  leave                                   
4f4f  retf    4h                              

; ===== SETHRRUCONFIG =====
4f52  mov     ax,4F29h                        ; segment seg2:0000
4f55  push    bp                              
4f56  mov     bp,sp                           
4f58  push    ds                              
4f59  mov     ds,ax                           
4f5b  mov     al,[bp+6h]                      
4f5e  cbw                                     
4f5f  push    ax                              
4f60  push    2h                              
4f62  push    0h                              
4f64  push    1h                              
4f66  mov     ax,[0B14h]                      
4f69  or      ax,4005h                        
4f6c  push    ax                              
4f6d  call far sub_005b                       
4f72  add     sp,0Ah                          
4f75  pop     ds                              
4f76  leave                                   
4f77  retf    2h                              

; ===== LEFTSTOREDPHOTO =====
4f7a  mov     ax,4F53h                        ; segment seg2:0000
4f7d  push    bp                              
4f7e  mov     bp,sp                           
4f80  push    ds                              
4f81  mov     ds,ax                           
4f83  mov     al,[bp+6h]                      
4f86  cbw                                     
4f87  push    ax                              
4f88  push    2h                              
4f8a  push    0h                              
4f8c  push    1h                              
4f8e  mov     ax,[0B14h]                      
4f91  or      ax,4006h                        
4f94  push    ax                              
4f95  call far sub_005b                       
4f9a  add     sp,0Ah                          
4f9d  pop     ds                              
4f9e  leave                                   
4f9f  retf    2h                              

; ===== RIGHTSTOREDPHOTO =====
4fa2  mov     ax,4F7Bh                        ; segment seg2:0000
4fa5  push    bp                              
4fa6  mov     bp,sp                           
4fa8  push    ds                              
4fa9  mov     ds,ax                           
4fab  mov     al,[bp+6h]                      
4fae  cbw                                     
4faf  push    ax                              
4fb0  push    2h                              
4fb2  push    0h                              
4fb4  push    1h                              
4fb6  mov     ax,[0B14h]                      
4fb9  or      ax,4007h                        
4fbc  push    ax                              
4fbd  call far sub_005b                       
4fc2  add     sp,0Ah                          
4fc5  pop     ds                              
4fc6  leave                                   
4fc7  retf    2h                              

; ===== LIVEPHOTO =====
4fca  mov     ax,4FA3h                        ; segment seg2:0000
4fcd  push    bp                              
4fce  mov     bp,sp                           
4fd0  push    ds                              
4fd1  mov     ds,ax                           
4fd3  mov     al,[bp+6h]                      
4fd6  cbw                                     
4fd7  push    ax                              
4fd8  push    2h                              
4fda  push    0h                              
4fdc  push    1h                              
4fde  mov     ax,[0B14h]                      
4fe1  or      ax,4008h                        
4fe4  push    ax                              
4fe5  call far sub_005b                       
4fea  add     sp,0Ah                          
4fed  pop     ds                              
4fee  leave                                   
4fef  retf    2h                              

; ===== SETCONTRASTCOMP =====
4ff2  mov     ax,4FCBh                        ; segment seg2:0000
4ff5  push    bp                              
4ff6  mov     bp,sp                           
4ff8  push    ds                              
4ff9  mov     ds,ax                           
4ffb  push    word ptr [bp+0Ch]               
4ffe  push    word ptr [bp+0Ah]               
5001  push    word ptr [bp+8h]                
5004  push    word ptr [bp+6h]                
5007  push    8h                              
5009  push    4h                              
500b  push    1h                              
500d  mov     ax,[0B14h]                      
5010  or      ax,4009h                        
5013  push    ax                              
5014  call far sub_005b                       
5019  add     sp,10h                          
501c  pop     ds                              
501d  leave                                   
501e  retf    8h                              
5021  add     [bx+si],al                      

; ===== GAMMAHRRU =====
5022  mov     ax,4FF3h                        ; segment seg2:0000
5025  push    bp                              
5026  mov     bp,sp                           
5028  push    ds                              
5029  mov     ds,ax                           
502b  push    word ptr [bp+0Ch]               
502e  push    word ptr [bp+0Ah]               
5031  push    word ptr [bp+8h]                
5034  push    word ptr [bp+6h]                
5037  push    8h                              
5039  push    4h                              
503b  push    1h                              
503d  mov     ax,[0B14h]                      
5040  or      ax,400Ah                        
5043  push    ax                              
5044  call far sub_005b                       
5049  add     sp,10h                          
504c  pop     ds                              
504d  leave                                   
504e  retf    8h                              
5051  add     [bx+si],al                      

; ===== SETFILMSPEED =====
5052  mov     ax,5023h                        ; segment seg2:0000
5055  push    bp                              
5056  mov     bp,sp                           
5058  push    ds                              
5059  mov     ds,ax                           
505b  mov     al,[bp+6h]                      
505e  cbw                                     
505f  push    ax                              
5060  push    2h                              
5062  push    0h                              
5064  push    1h                              
5066  mov     ax,[0B14h]                      
5069  or      ax,400Bh                        
506c  push    ax                              
506d  call far sub_005b                       
5072  add     sp,0Ah                          
5075  pop     ds                              
5076  leave                                   
5077  retf    2h                              

; ===== SETLIVEREPEAT =====
507a  mov     ax,5053h                        ; segment seg2:0000
507d  push    bp                              
507e  mov     bp,sp                           
5080  push    ds                              
5081  mov     ds,ax                           
5083  mov     al,[bp+6h]                      
5086  cbw                                     
5087  push    ax                              
5088  push    2h                              
508a  push    0h                              
508c  push    1h                              
508e  mov     ax,[0B14h]                      
5091  or      ax,400Ch                        
5094  push    ax                              
5095  call far sub_005b                       
509a  add     sp,0Ah                          
509d  pop     ds                              
509e  leave                                   
509f  retf    2h                              

; ===== SETCAMERATYPE =====
50a2  mov     ax,507Bh                        ; segment seg2:0000
50a5  push    bp                              
50a6  mov     bp,sp                           
50a8  push    ds                              
50a9  mov     ds,ax                           
50ab  mov     al,[bp+6h]                      
50ae  cbw                                     
50af  push    ax                              
50b0  push    2h                              
50b2  push    0h                              
50b4  push    1h                              
50b6  mov     ax,[0B14h]                      
50b9  or      ax,400Dh                        
50bc  push    ax                              
50bd  call far sub_005b                       
50c2  add     sp,0Ah                          
50c5  pop     ds                              
50c6  leave                                   
50c7  retf    2h                              

; ===== SETBRIGHTNESSCOMP =====
50ca  mov     ax,50A3h                        ; segment seg2:0000
50cd  push    bp                              
50ce  mov     bp,sp                           
50d0  push    ds                              
50d1  mov     ds,ax                           
50d3  push    word ptr [bp+0Ch]               
50d6  push    word ptr [bp+0Ah]               
50d9  push    word ptr [bp+8h]                
50dc  push    word ptr [bp+6h]                
50df  push    8h                              
50e1  push    4h                              
50e3  push    1h                              
50e5  mov     ax,[0B14h]                      
50e8  or      ax,400Eh                        
50eb  push    ax                              
50ec  call far sub_005b                       
50f1  add     sp,10h                          
50f4  pop     ds                              
50f5  leave                                   
50f6  retf    8h                              
50f9  add     [bx+si],al                      

; ===== SETHRRUBRIGHTNESS =====
50fa  mov     ax,50CBh                        ; segment seg2:0000
50fd  push    bp                              
50fe  mov     bp,sp                           
5100  push    ds                              
5101  mov     ds,ax                           
5103  push    word ptr [bp+0Ch]               
5106  push    word ptr [bp+0Ah]               
5109  push    word ptr [bp+8h]                
510c  push    word ptr [bp+6h]                
510f  push    8h                              
5111  push    4h                              
5113  push    1h                              
5115  mov     ax,[0B14h]                      
5118  or      ax,400Fh                        
511b  push    ax                              
511c  call far sub_005b                       
5121  add     sp,10h                          
5124  pop     ds                              
5125  leave                                   
5126  retf    8h                              
5129  add     [bx+si],al                      

; ===== SETHRRUCONTRAST =====
512a  mov     ax,50FBh                        ; segment seg2:0000
512d  push    bp                              
512e  mov     bp,sp                           
5130  push    ds                              
5131  mov     ds,ax                           
5133  push    word ptr [bp+0Ch]               
5136  push    word ptr [bp+0Ah]               
5139  push    word ptr [bp+8h]                
513c  push    word ptr [bp+6h]                
513f  push    8h                              
5141  push    4h                              
5143  push    1h                              
5145  mov     ax,[0B14h]                      
5148  or      ax,4010h                        
514b  push    ax                              
514c  call far sub_005b                       
5151  add     sp,10h                          
5154  pop     ds                              
5155  leave                                   
5156  retf    8h                              
5159  add     [bx+si],al                      

; ===== SETCINEELAPSED =====
515a  mov     ax,512Bh                        ; segment seg2:0000
515d  push    bp                              
515e  mov     bp,sp                           
5160  push    ds                              
5161  mov     ds,ax                           
5163  push    word ptr [bp+0Ch]               
5166  push    word ptr [bp+0Ah]               
5169  push    word ptr [bp+8h]                
516c  push    word ptr [bp+6h]                
516f  push    8h                              
5171  push    4h                              
5173  push    1h                              
5175  mov     ax,[0B14h]                      
5178  or      ax,4011h                        
517b  push    ax                              
517c  call far sub_005b                       
5181  add     sp,10h                          
5184  pop     ds                              
5185  leave                                   
5186  retf    8h                              
5189  add     [bx+si],al                      

; ===== SUSPENDIMEXMODULE =====
518a  mov     ax,515Bh                        ; segment seg2:0000
518d  push    bp                              
518e  mov     bp,sp                           
5190  push    ds                              
5191  mov     ds,ax                           
5193  push    0h                              
5195  mov     ax,[0B14h]                      
5198  or      ax,4012h                        
519b  push    ax                              
519c  call far sub_0064                       
51a1  add     sp,4h                           
51a4  pop     ds                              
51a5  leave                                   
51a6  retf                                    
51a7  add     [bx+si],al                      

; ===== SETCINEREDUCTION =====
51a8  mov     ax,518Bh                        ; segment seg2:0000
51ab  push    bp                              
51ac  mov     bp,sp                           
51ae  push    ds                              
51af  mov     ds,ax                           
51b1  push    word ptr [bp+6h]                
51b4  push    2h                              
51b6  push    0h                              
51b8  push    1h                              
51ba  mov     ax,[0B14h]                      
51bd  or      ax,4013h                        
51c0  push    ax                              
51c1  call far sub_005b                       
51c6  add     sp,0Ah                          
51c9  pop     ds                              
51ca  leave                                   
51cb  retf    2h                              

; ===== SETCINESTART =====
51ce  mov     ax,51A9h                        ; segment seg2:0000
51d1  push    bp                              
51d2  mov     bp,sp                           
51d4  push    ds                              
51d5  mov     ds,ax                           
51d7  push    0h                              
51d9  mov     ax,[0B14h]                      
51dc  or      ax,4014h                        
51df  push    ax                              
51e0  call far sub_005b                       
51e5  add     sp,4h                           
51e8  pop     ds                              
51e9  leave                                   
51ea  retf                                    
51eb  nop                                     

; ===== DELOVERLAYMODULE =====
51ec  mov     ax,2459h                        ; segment seg2:0000
51ef  push    bp                              
51f0  mov     bp,sp                           
51f2  push    ds                              
51f3  mov     ds,ax                           
51f5  push    word ptr [0B16h]                ; [ds] f32 here = 0
51f9  push    2h                              
51fb  push    0h                              
51fd  push    1h                              
51ff  push    7E63h                           
5202  call far sub_0064                       
5207  add     sp,0Ah                          
520a  pop     ds                              
520b  leave                                   
520c  retf                                    
520d  add     [bx+si],al                      

; ===== G300TEST =====
520e  mov     ax,51EDh                        ; segment seg2:0000
5211  push    bp                              
5212  mov     bp,sp                           
5214  push    ds                              
5215  mov     ds,ax                           
5217  push    word ptr [bp+8h]                
521a  push    word ptr [bp+6h]                
521d  push    4h                              
521f  push    0h                              
5221  push    word ptr [bp+0Ah]               
5224  push    2h                              
5226  push    0h                              
5228  push    word ptr [bp+0Ch]               
522b  push    2h                              
522d  push    0h                              
522f  push    word ptr [bp+0Eh]               
5232  push    2h                              
5234  push    0h                              
5236  push    4h                              
5238  mov     ax,[0B16h]                      
523b  or      ah,40h                          
523e  push    ax                              
523f  call far sub_0064                       
5244  add     sp,1Eh                          
5247  pop     ds                              
5248  leave                                   
5249  retf    0Ah                             

; ===== CHANGEOBJATTRIB =====
524c  mov     ax,520Fh                        ; segment seg2:0000
524f  push    bp                              
5250  mov     bp,sp                           
5252  push    ds                              
5253  mov     ds,ax                           
5255  push    word ptr [bp+8h]                
5258  push    word ptr [bp+6h]                
525b  push    4h                              
525d  push    1h                              
525f  push    word ptr [bp+0Ah]               
5262  push    2h                              
5264  push    0h                              
5266  push    word ptr [bp+0Eh]               
5269  push    word ptr [bp+0Ch]               
526c  push    4h                              
526e  push    0h                              
5270  push    3h                              
5272  mov     ax,[0B16h]                      
5275  or      ax,4001h                        
5278  push    ax                              
5279  call far sub_005b                       
527e  add     sp,1Ah                          
5281  pop     ds                              
5282  leave                                   
5283  retf    0Ah                             

; ===== CHANGEOBJPARAM =====
5286  mov     ax,524Dh                        ; segment seg2:0000
5289  push    bp                              
528a  mov     bp,sp                           
528c  push    ds                              
528d  mov     ds,ax                           
528f  push    word ptr [bp+8h]                
5292  push    word ptr [bp+6h]                
5295  push    10h                             
5297  push    1h                              
5299  push    word ptr [bp+0Ch]               
529c  push    word ptr [bp+0Ah]               
529f  push    4h                              
52a1  push    0h                              
52a3  push    2h                              
52a5  mov     ax,[0B16h]                      
52a8  or      ax,4002h                        
52ab  push    ax                              
52ac  call far sub_005b                       
52b1  add     sp,14h                          
52b4  pop     ds                              
52b5  leave                                   
52b6  retf    8h                              
52b9  add     [bx+si],al                      

; ===== KILLOVERLAYOBJ =====
52ba  mov     ax,5287h                        ; segment seg2:0000
52bd  push    bp                              
52be  mov     bp,sp                           
52c0  push    ds                              
52c1  mov     ds,ax                           
52c3  push    word ptr [bp+8h]                
52c6  push    word ptr [bp+6h]                
52c9  push    4h                              
52cb  push    0h                              
52cd  push    1h                              
52cf  mov     ax,[0B16h]                      
52d2  or      ax,4003h                        
52d5  push    ax                              
52d6  call far sub_005b                       
52db  add     sp,0Ch                          
52de  pop     ds                              
52df  leave                                   
52e0  retf    4h                              
52e3  add     [bx+si],al                      

; ===== HIDEOVERLAYOBJ =====
52e4  mov     ax,52BBh                        ; segment seg2:0000
52e7  push    bp                              
52e8  mov     bp,sp                           
52ea  push    ds                              
52eb  mov     ds,ax                           
52ed  push    word ptr [bp+8h]                
52f0  push    word ptr [bp+6h]                
52f3  push    4h                              
52f5  push    0h                              
52f7  push    1h                              
52f9  mov     ax,[0B16h]                      
52fc  or      ax,4004h                        
52ff  push    ax                              
5300  call far sub_005b                       
5305  add     sp,0Ch                          
5308  pop     ds                              
5309  leave                                   
530a  retf    4h                              
530d  add     [bx+si],al                      

; ===== SHOWOVERLAYOBJ =====
530e  mov     ax,52E5h                        ; segment seg2:0000
5311  push    bp                              
5312  mov     bp,sp                           
5314  push    ds                              
5315  mov     ds,ax                           
5317  push    word ptr [bp+8h]                
531a  push    word ptr [bp+6h]                
531d  push    4h                              
531f  push    0h                              
5321  push    1h                              
5323  mov     ax,[0B16h]                      
5326  or      ax,4005h                        
5329  push    ax                              
532a  call far sub_005b                       
532f  add     sp,0Ch                          
5332  pop     ds                              
5333  leave                                   
5334  retf    4h                              
5337  add     [bx+si],al                      

; ===== MOVEOVERLAYOBJ =====
5338  mov     ax,530Fh                        ; segment seg2:0000
533b  push    bp                              
533c  mov     bp,sp                           
533e  push    ds                              
533f  mov     ds,ax                           
5341  push    word ptr [bp+6h]                
5344  push    2h                              
5346  push    0h                              
5348  push    word ptr [bp+8h]                
534b  push    2h                              
534d  push    0h                              
534f  push    word ptr [bp+0Ch]               
5352  push    word ptr [bp+0Ah]               
5355  push    4h                              
5357  push    0h                              
5359  push    3h                              
535b  mov     ax,[0B16h]                      
535e  or      ax,4006h                        
5361  push    ax                              
5362  call far sub_005b                       
5367  add     sp,18h                          
536a  pop     ds                              
536b  leave                                   
536c  retf    8h                              
536f  add     [bx+si],al                      

; ===== CREATEOVERLAYOBJ =====
5370  mov     ax,5339h                        ; segment seg2:0000
5373  push    bp                              
5374  mov     bp,sp                           
5376  push    ds                              
5377  mov     ds,ax                           
5379  push    word ptr [bp+8h]                
537c  push    word ptr [bp+6h]                
537f  push    4Ah                             
5381  push    1h                              
5383  push    word ptr [bp+0Ah]               
5386  push    2h                              
5388  push    0h                              
538a  push    word ptr [bp+0Ch]               
538d  push    2h                              
538f  push    0h                              
5391  push    word ptr [bp+0Eh]               
5394  push    2h                              
5396  push    0h                              
5398  push    word ptr [bp+10h]               
539b  push    2h                              
539d  push    0h                              
539f  push    word ptr [bp+12h]               
53a2  push    2h                              
53a4  push    0h                              
53a6  push    6h                              
53a8  mov     ax,[0B16h]                      
53ab  or      ax,4007h                        
53ae  push    ax                              
53af  call far sub_0064                       
53b4  add     sp,2Ah                          
53b7  pop     ds                              
53b8  leave                                   
53b9  retf    0Eh                             

; ===== CREATEGHOSTOFOBJECT =====
53bc  mov     ax,5371h                        ; segment seg2:0000
53bf  push    bp                              
53c0  mov     bp,sp                           
53c2  push    ds                              
53c3  mov     ds,ax                           
53c5  push    word ptr [bp+6h]                
53c8  push    2h                              
53ca  push    0h                              
53cc  push    word ptr [bp+0Ah]               
53cf  push    word ptr [bp+8h]                
53d2  push    4h                              
53d4  push    0h                              
53d6  push    2h                              
53d8  mov     ax,[0B16h]                      
53db  or      ax,4008h                        
53de  push    ax                              
53df  call far sub_005b                       
53e4  add     sp,12h                          
53e7  pop     ds                              
53e8  leave                                   
53e9  retf    6h                              

; ===== KILLGHOSTOFOBJ =====
53ec  mov     ax,53BDh                        ; segment seg2:0000
53ef  push    bp                              
53f0  mov     bp,sp                           
53f2  push    ds                              
53f3  mov     ds,ax                           
53f5  push    word ptr [bp+8h]                
53f8  push    word ptr [bp+6h]                
53fb  push    4h                              
53fd  push    0h                              
53ff  push    1h                              
5401  mov     ax,[0B16h]                      
5404  or      ax,4009h                        
5407  push    ax                              
5408  call far sub_005b                       
540d  add     sp,0Ch                          
5410  pop     ds                              
5411  leave                                   
5412  retf    4h                              
5415  add     [bx+si],al                      

; ===== INITDEBUG =====
5416  mov     ax,53EDh                        ; segment seg2:0000
5419  push    bp                              
541a  mov     bp,sp                           
541c  push    ds                              
541d  mov     ds,ax                           
541f  push    word ptr [bp+6h]                
5422  push    2h                              
5424  push    0h                              
5426  push    word ptr [bp+8h]                
5429  push    2h                              
542b  push    0h                              
542d  push    2h                              
542f  mov     ax,[0B16h]                      
5432  or      ax,400Ah                        
5435  push    ax                              
5436  call far sub_005b                       
543b  add     sp,10h                          
543e  pop     ds                              
543f  leave                                   
5440  retf    4h                              
5443  add     [bx+si],al                      

; ===== INITDISPLAYCONTROLLER =====
5444  mov     ax,5417h                        ; segment seg2:0000
5447  push    bp                              
5448  mov     bp,sp                           
544a  push    ds                              
544b  mov     ds,ax                           
544d  push    0h                              
544f  mov     ax,[0B16h]                      
5452  or      ax,400Bh                        
5455  push    ax                              
5456  call far sub_0064                       
545b  add     sp,4h                           
545e  pop     ds                              
545f  leave                                   
5460  retf                                    
5461  add     [bx+si],al                      

; ===== SETPLANESHADOW =====
5462  mov     ax,5445h                        ; segment seg2:0000
5465  push    bp                              
5466  mov     bp,sp                           
5468  push    ds                              
5469  mov     ds,ax                           
546b  push    word ptr [bp+6h]                
546e  push    2h                              
5470  push    2h                              
5472  push    word ptr [bp+8h]                
5475  push    2h                              
5477  push    2h                              
5479  push    2h                              
547b  mov     ax,[0B16h]                      
547e  or      ax,400Ch                        
5481  push    ax                              
5482  call far sub_005b                       
5487  add     sp,10h                          
548a  pop     ds                              
548b  leave                                   
548c  retf    4h                              
548f  add     [bx+si],al                      

; ===== SETPLANESTATE =====
5490  mov     ax,5463h                        ; segment seg2:0000
5493  push    bp                              
5494  mov     bp,sp                           
5496  push    ds                              
5497  mov     ds,ax                           
5499  push    word ptr [bp+6h]                
549c  push    2h                              
549e  push    2h                              
54a0  push    word ptr [bp+8h]                
54a3  push    2h                              
54a5  push    2h                              
54a7  push    word ptr [bp+0Ah]               
54aa  push    2h                              
54ac  push    2h                              
54ae  push    3h                              
54b0  mov     ax,[0B16h]                      
54b3  or      ax,400Dh                        
54b6  push    ax                              
54b7  call far sub_005b                       
54bc  add     sp,16h                          
54bf  pop     ds                              
54c0  leave                                   
54c1  retf    6h                              

; ===== SETDISPLAYSTANDARD =====
54c4  mov     ax,5491h                        ; segment seg2:0000
54c7  push    bp                              
54c8  mov     bp,sp                           
54ca  push    ds                              
54cb  mov     ds,ax                           
54cd  push    word ptr [bp+6h]                
54d0  push    2h                              
54d2  push    2h                              
54d4  push    1h                              
54d6  mov     ax,[0B16h]                      
54d9  or      ax,400Eh                        
54dc  push    ax                              
54dd  call far sub_0064                       
54e2  add     sp,0Ah                          
54e5  pop     ds                              
54e6  leave                                   
54e7  retf    2h                              

; ===== ENLARGEIMAGE =====
54ea  mov     ax,54C5h                        ; segment seg2:0000
54ed  push    bp                              
54ee  mov     bp,sp                           
54f0  push    ds                              
54f1  mov     ds,ax                           
54f3  push    word ptr [bp+6h]                
54f6  push    2h                              
54f8  push    2h                              
54fa  push    1h                              
54fc  mov     ax,[0B16h]                      
54ff  or      ax,400Fh                        
5502  push    ax                              
5503  call far sub_005b                       
5508  add     sp,0Ah                          
550b  pop     ds                              
550c  leave                                   
550d  retf    2h                              

; ===== REDUCEIMAGE =====
5510  mov     ax,54EBh                        ; segment seg2:0000
5513  push    bp                              
5514  mov     bp,sp                           
5516  push    ds                              
5517  mov     ds,ax                           
5519  push    word ptr [bp+6h]                
551c  push    2h                              
551e  push    2h                              
5520  push    1h                              
5522  mov     ax,[0B16h]                      
5525  or      ax,4010h                        
5528  push    ax                              
5529  call far sub_005b                       
552e  add     sp,0Ah                          
5531  pop     ds                              
5532  leave                                   
5533  retf    2h                              

; ===== MOVEREDUCEDIMAGE =====
5536  mov     ax,5511h                        ; segment seg2:0000
5539  push    bp                              
553a  mov     bp,sp                           
553c  push    ds                              
553d  mov     ds,ax                           
553f  push    word ptr [bp+6h]                
5542  push    2h                              
5544  push    2h                              
5546  push    word ptr [bp+8h]                
5549  push    2h                              
554b  push    2h                              
554d  push    word ptr [bp+0Ah]               
5550  push    2h                              
5552  push    2h                              
5554  push    3h                              
5556  mov     ax,[0B16h]                      
5559  or      ax,4011h                        
555c  push    ax                              
555d  call far sub_005b                       
5562  add     sp,16h                          
5565  pop     ds                              
5566  leave                                   
5567  retf    6h                              

; ===== GETDISPLAYCONFIG =====
556a  mov     ax,5537h                        ; segment seg2:0000
556d  push    bp                              
556e  mov     bp,sp                           
5570  push    ds                              
5571  mov     ds,ax                           
5573  push    word ptr [bp+8h]                
5576  push    word ptr [bp+6h]                
5579  push    10h                             
557b  push    81h                             
557e  push    1h                              
5580  mov     ax,[0B16h]                      
5583  or      ax,4013h                        
5586  push    ax                              
5587  call far sub_006d                       
558c  add     sp,0Ch                          
558f  pop     ds                              
5590  leave                                   
5591  retf    4h                              

; ===== SETOPLUTRGB =====
5594  mov     ax,556Bh                        ; segment seg2:0000
5597  push    bp                              
5598  mov     bp,sp                           
559a  push    ds                              
559b  mov     ds,ax                           
559d  push    word ptr [bp+6h]                
55a0  push    2h                              
55a2  push    2h                              
55a4  push    word ptr [bp+8h]                
55a7  push    2h                              
55a9  push    2h                              
55ab  push    word ptr [bp+0Ah]               
55ae  push    2h                              
55b0  push    2h                              
55b2  push    word ptr [bp+0Ch]               
55b5  push    2h                              
55b7  push    2h                              
55b9  push    word ptr [bp+0Eh]               
55bc  push    2h                              
55be  push    2h                              
55c0  push    5h                              
55c2  mov     ax,[0B16h]                      
55c5  or      ax,4014h                        
55c8  push    ax                              
55c9  call far sub_005b                       
55ce  add     sp,22h                          
55d1  pop     ds                              
55d2  leave                                   
55d3  retf    0Ah                             

; ===== READOPLUTRGB =====
55d6  mov     ax,5595h                        ; segment seg2:0000
55d9  push    bp                              
55da  mov     bp,sp                           
55dc  push    ds                              
55dd  mov     ds,ax                           
55df  push    word ptr [bp+8h]                
55e2  push    word ptr [bp+6h]                
55e5  push    1h                              
55e7  push    81h                             
55ea  push    word ptr [bp+0Ch]               
55ed  push    word ptr [bp+0Ah]               
55f0  push    1h                              
55f2  push    81h                             
55f5  push    word ptr [bp+10h]               
55f8  push    word ptr [bp+0Eh]               
55fb  push    1h                              
55fd  push    81h                             
5600  push    word ptr [bp+12h]               
5603  push    2h                              
5605  push    2h                              
5607  push    word ptr [bp+14h]               
560a  push    2h                              
560c  push    2h                              
560e  push    5h                              
5610  mov     ax,[0B16h]                      
5613  or      ax,4015h                        
5616  push    ax                              
5617  call far sub_006d                       
561c  add     sp,28h                          
561f  pop     ds                              
5620  leave                                   
5621  retf    10h                             

; ===== SETMULTOPLUTRGB =====
5624  mov     ax,55D7h                        ; segment seg2:0000
5627  push    bp                              
5628  mov     bp,sp                           
562a  push    si                              
562b  push    ds                              
562c  mov     ds,ax                           
562e  mov     si,[bp+0Ah]                     
5631  push    word ptr [bp+8h]                
5634  push    word ptr [bp+6h]                
5637  mov     cx,si                           
5639  mov     ax,si                           
563b  add     si,si                           
563d  add     si,ax                           
563f  push    si                              
5640  push    1h                              
5642  push    cx                              
5643  push    2h                              
5645  push    2h                              
5647  push    word ptr [bp+0Ch]               
564a  push    2h                              
564c  push    2h                              
564e  push    word ptr [bp+0Eh]               
5651  push    2h                              
5653  push    2h                              
5655  push    4h                              
5657  mov     ax,[0B16h]                      
565a  or      ax,4016h                        
565d  push    ax                              
565e  call far sub_005b                       
5663  add     sp,1Eh                          
5666  pop     ds                              
5667  pop     si                              
5668  leave                                   
5669  retf    0Ah                             

; ===== READMULTOPLUTRGB =====
566c  mov     ax,5625h                        ; segment seg2:0000
566f  push    bp                              
5670  mov     bp,sp                           
5672  push    si                              
5673  push    ds                              
5674  mov     ds,ax                           
5676  mov     si,[bp+0Ah]                     
5679  push    word ptr [bp+8h]                
567c  push    word ptr [bp+6h]                
567f  mov     cx,si                           
5681  mov     ax,si                           
5683  add     si,si                           
5685  add     si,ax                           
5687  push    si                              
5688  push    81h                             
568b  push    cx                              
568c  push    2h                              
568e  push    2h                              
5690  push    word ptr [bp+0Ch]               
5693  push    2h                              
5695  push    2h                              
5697  push    word ptr [bp+0Eh]               
569a  push    2h                              
569c  push    2h                              
569e  push    4h                              
56a0  mov     ax,[0B16h]                      
56a3  or      ax,4017h                        
56a6  push    ax                              
56a7  call far sub_006d                       
56ac  add     sp,1Eh                          
56af  pop     ds                              
56b0  pop     si                              
56b1  leave                                   
56b2  retf    0Ah                             
56b5  add     [bx+si],al                      

; ===== SETOPLUTENTRY =====
56b6  mov     ax,566Dh                        ; segment seg2:0000
56b9  push    bp                              
56ba  mov     bp,sp                           
56bc  push    ds                              
56bd  mov     ds,ax                           
56bf  push    word ptr [bp+6h]                
56c2  push    2h                              
56c4  push    2h                              
56c6  push    word ptr [bp+8h]                
56c9  push    2h                              
56cb  push    2h                              
56cd  push    word ptr [bp+0Ah]               
56d0  push    2h                              
56d2  push    2h                              
56d4  push    word ptr [bp+0Ch]               
56d7  push    2h                              
56d9  push    2h                              
56db  push    4h                              
56dd  mov     ax,[0B16h]                      
56e0  or      ax,4018h                        
56e3  push    ax                              
56e4  call far sub_005b                       
56e9  add     sp,1Ch                          
56ec  pop     ds                              
56ed  leave                                   
56ee  retf    8h                              
56f1  add     [bx+si],al                      

; ===== READOPLUTENTRY =====
56f2  mov     ax,56B7h                        ; segment seg2:0000
56f5  push    bp                              
56f6  mov     bp,sp                           
56f8  push    ds                              
56f9  mov     ds,ax                           
56fb  push    word ptr [bp+8h]                
56fe  push    word ptr [bp+6h]                
5701  push    1h                              
5703  push    81h                             
5706  push    word ptr [bp+0Ah]               
5709  push    2h                              
570b  push    2h                              
570d  push    word ptr [bp+0Ch]               
5710  push    2h                              
5712  push    2h                              
5714  push    word ptr [bp+0Eh]               
5717  push    2h                              
5719  push    2h                              
571b  push    4h                              
571d  mov     ax,[0B16h]                      
5720  or      ax,4019h                        
5723  push    ax                              
5724  call far sub_006d                       
5729  add     sp,1Eh                          
572c  pop     ds                              
572d  leave                                   
572e  retf    0Ah                             
5731  add     [bx+si],al                      

; ===== SETOPLUTPOINTS =====
5732  mov     ax,56F3h                        ; segment seg2:0000
5735  push    bp                              
5736  mov     bp,sp                           
5738  push    si                              
5739  push    ds                              
573a  mov     ds,ax                           
573c  mov     si,[bp+0Ah]                     
573f  push    word ptr [bp+8h]                
5742  push    word ptr [bp+6h]                
5745  mov     ax,si                           
5747  add     si,si                           
5749  push    si                              
574a  push    1h                              
574c  push    ax                              
574d  push    2h                              
574f  push    0h                              
5751  push    word ptr [bp+0Ch]               
5754  push    2h                              
5756  push    0h                              
5758  push    word ptr [bp+0Eh]               
575b  push    2h                              
575d  push    0h                              
575f  push    4h                              
5761  mov     ax,[0B16h]                      
5764  or      ax,401Ah                        
5767  push    ax                              
5768  call far sub_005b                       
576d  add     sp,1Eh                          
5770  pop     ds                              
5771  pop     si                              
5772  leave                                   
5773  retf    0Ah                             

; ===== LDLINEGRPHOPLUT =====
5776  mov     ax,5733h                        ; segment seg2:0000
5779  push    bp                              
577a  mov     bp,sp                           
577c  push    ds                              
577d  mov     ds,ax                           
577f  push    word ptr [bp+0Ch]               
5782  push    word ptr [bp+0Ah]               
5785  push    word ptr [bp+8h]                
5788  push    word ptr [bp+6h]                
578b  push    8h                              
578d  push    4h                              
578f  push    word ptr [bp+14h]               
5792  push    word ptr [bp+12h]               
5795  push    word ptr [bp+10h]               
5798  push    word ptr [bp+0Eh]               
579b  push    8h                              
579d  push    4h                              
579f  push    word ptr [bp+16h]               
57a2  push    2h                              
57a4  push    2h                              
57a6  push    3h                              
57a8  mov     ax,[0B16h]                      
57ab  or      ax,401Bh                        
57ae  push    ax                              
57af  call far sub_005b                       
57b4  add     sp,22h                          
57b7  pop     ds                              
57b8  leave                                   
57b9  retf    12h                             

; ===== QLOADLINOPLUT =====
57bc  mov     ax,5777h                        ; segment seg2:0000
57bf  push    bp                              
57c0  mov     bp,sp                           
57c2  push    ds                              
57c3  mov     ds,ax                           
57c5  push    word ptr [bp+6h]                
57c8  push    2h                              
57ca  push    2h                              
57cc  push    1h                              
57ce  mov     ax,[0B16h]                      
57d1  or      ax,401Ch                        
57d4  push    ax                              
57d5  call far sub_005b                       
57da  add     sp,0Ah                          
57dd  pop     ds                              
57de  leave                                   
57df  retf    2h                              

; ===== QFILLOPLUT =====
57e2  mov     ax,57BDh                        ; segment seg2:0000
57e5  push    bp                              
57e6  mov     bp,sp                           
57e8  push    ds                              
57e9  mov     ds,ax                           
57eb  push    word ptr [bp+6h]                
57ee  push    2h                              
57f0  push    2h                              
57f2  push    word ptr [bp+8h]                
57f5  push    2h                              
57f7  push    2h                              
57f9  push    word ptr [bp+0Ah]               
57fc  push    2h                              
57fe  push    2h                              
5800  push    word ptr [bp+0Ch]               
5803  push    2h                              
5805  push    2h                              
5807  push    word ptr [bp+0Eh]               
580a  push    2h                              
580c  push    2h                              
580e  push    word ptr [bp+10h]               
5811  push    2h                              
5813  push    2h                              
5815  push    6h                              
5817  mov     ax,[0B16h]                      
581a  or      ax,401Dh                        
581d  push    ax                              
581e  call far sub_005b                       
5823  add     sp,28h                          
5826  pop     ds                              
5827  leave                                   
5828  retf    0Ch                             
582b  add     [bx+si],al                      

; ===== QLOADINVOPLUT =====
582c  mov     ax,57E3h                        ; segment seg2:0000
582f  push    bp                              
5830  mov     bp,sp                           
5832  push    ds                              
5833  mov     ds,ax                           
5835  push    word ptr [bp+6h]                
5838  push    2h                              
583a  push    2h                              
583c  push    1h                              
583e  mov     ax,[0B16h]                      
5841  or      ax,401Eh                        
5844  push    ax                              
5845  call far sub_005b                       
584a  add     sp,0Ah                          
584d  pop     ds                              
584e  leave                                   
584f  retf    2h                              

; ===== SETGAMMAOPLUT =====
5852  mov     ax,582Dh                        ; segment seg2:0000
5855  push    bp                              
5856  mov     bp,sp                           
5858  push    ds                              
5859  mov     ds,ax                           
585b  push    word ptr [bp+0Ch]               
585e  push    word ptr [bp+0Ah]               
5861  push    word ptr [bp+8h]                
5864  push    word ptr [bp+6h]                
5867  push    8h                              
5869  push    4h                              
586b  push    word ptr [bp+0Eh]               
586e  push    2h                              
5870  push    2h                              
5872  push    2h                              
5874  mov     ax,[0B16h]                      
5877  or      ax,401Fh                        
587a  push    ax                              
587b  call far sub_005b                       
5880  add     sp,16h                          
5883  pop     ds                              
5884  leave                                   
5885  retf    0Ah                             

; ===== SETINVERTOPLUT =====
5888  mov     ax,5853h                        ; segment seg2:0000
588b  push    bp                              
588c  mov     bp,sp                           
588e  push    ds                              
588f  mov     ds,ax                           
5891  push    word ptr [bp+0Ch]               
5894  push    word ptr [bp+0Ah]               
5897  push    word ptr [bp+8h]                
589a  push    word ptr [bp+6h]                
589d  push    8h                              
589f  push    4h                              
58a1  push    word ptr [bp+14h]               
58a4  push    word ptr [bp+12h]               
58a7  push    word ptr [bp+10h]               
58aa  push    word ptr [bp+0Eh]               
58ad  push    8h                              
58af  push    4h                              
58b1  push    word ptr [bp+16h]               
58b4  push    2h                              
58b6  push    2h                              
58b8  push    3h                              
58ba  mov     ax,[0B16h]                      
58bd  or      ax,4020h                        
58c0  push    ax                              
58c1  call far sub_005b                       
58c6  add     sp,22h                          
58c9  pop     ds                              
58ca  leave                                   
58cb  retf    12h                             

; ===== SETLINEAROPLUT =====
58ce  mov     ax,5889h                        ; segment seg2:0000
58d1  push    bp                              
58d2  mov     bp,sp                           
58d4  push    ds                              
58d5  mov     ds,ax                           
58d7  push    word ptr [bp+0Ch]               
58da  push    word ptr [bp+0Ah]               
58dd  push    word ptr [bp+8h]                
58e0  push    word ptr [bp+6h]                
58e3  push    8h                              
58e5  push    4h                              
58e7  push    word ptr [bp+14h]               
58ea  push    word ptr [bp+12h]               
58ed  push    word ptr [bp+10h]               
58f0  push    word ptr [bp+0Eh]               
58f3  push    8h                              
58f5  push    4h                              
58f7  push    word ptr [bp+16h]               
58fa  push    2h                              
58fc  push    2h                              
58fe  push    3h                              
5900  mov     ax,[0B16h]                      
5903  or      ax,4021h                        
5906  push    ax                              
5907  call far sub_005b                       
590c  add     sp,22h                          
590f  pop     ds                              
5910  leave                                   
5911  retf    12h                             

; ===== SETOPLUTBRICONT =====
5914  mov     ax,58CFh                        ; segment seg2:0000
5917  push    bp                              
5918  mov     bp,sp                           
591a  push    ds                              
591b  mov     ds,ax                           
591d  push    word ptr [bp+0Ch]               
5920  push    word ptr [bp+0Ah]               
5923  push    word ptr [bp+8h]                
5926  push    word ptr [bp+6h]                
5929  push    8h                              
592b  push    4h                              
592d  push    word ptr [bp+14h]               
5930  push    word ptr [bp+12h]               
5933  push    word ptr [bp+10h]               
5936  push    word ptr [bp+0Eh]               
5939  push    8h                              
593b  push    4h                              
593d  push    word ptr [bp+16h]               
5940  push    2h                              
5942  push    2h                              
5944  push    3h                              
5946  mov     ax,[0B16h]                      
5949  or      ax,4022h                        
594c  push    ax                              
594d  call far sub_005b                       
5952  add     sp,22h                          
5955  pop     ds                              
5956  leave                                   
5957  retf    12h                             

; ===== SAVEOPLUT =====
595a  mov     ax,5915h                        ; segment seg2:0000
595d  push    bp                              
595e  mov     bp,sp                           
5960  push    ds                              
5961  mov     ds,ax                           
5963  push    word ptr [bp+6h]                
5966  push    2h                              
5968  push    2h                              
596a  push    word ptr [bp+8h]                
596d  push    2h                              
596f  push    2h                              
5971  push    2h                              
5973  mov     ax,[0B16h]                      
5976  or      ax,4023h                        
5979  push    ax                              
597a  call far sub_005b                       
597f  add     sp,10h                          
5982  pop     ds                              
5983  leave                                   
5984  retf    4h                              
5987  add     [bx+si],al                      

; ===== RESTOREOPLUT =====
5988  mov     ax,595Bh                        ; segment seg2:0000
598b  push    bp                              
598c  mov     bp,sp                           
598e  push    ds                              
598f  mov     ds,ax                           
5991  push    word ptr [bp+6h]                
5994  push    2h                              
5996  push    2h                              
5998  push    word ptr [bp+8h]                
599b  push    2h                              
599d  push    2h                              
599f  push    2h                              
59a1  mov     ax,[0B16h]                      
59a4  or      ax,4024h                        
59a7  push    ax                              
59a8  call far sub_005b                       
59ad  add     sp,10h                          
59b0  pop     ds                              
59b1  leave                                   
59b2  retf    4h                              
59b5  add     [bx+si],al                      

; ===== LOADGREYWEDGE =====
59b6  mov     ax,5989h                        ; segment seg2:0000
59b9  push    bp                              
59ba  mov     bp,sp                           
59bc  push    ds                              
59bd  mov     ds,ax                           
59bf  push    word ptr [bp+6h]                
59c2  push    2h                              
59c4  push    2h                              
59c6  push    1h                              
59c8  mov     ax,[0B16h]                      
59cb  or      ax,4025h                        
59ce  push    ax                              
59cf  call far sub_005b                       
59d4  add     sp,0Ah                          
59d7  pop     ds                              
59d8  leave                                   
59d9  retf    2h                              

; ===== READOPRLUT =====
59dc  mov     ax,59B7h                        ; segment seg2:0000
59df  push    bp                              
59e0  mov     bp,sp                           
59e2  push    si                              
59e3  push    ds                              
59e4  mov     ds,ax                           
59e6  mov     si,[bp+0Ah]                     
59e9  push    word ptr [bp+8h]                
59ec  push    word ptr [bp+6h]                
59ef  push    si                              
59f0  push    81h                             
59f3  push    si                              
59f4  push    2h                              
59f6  push    2h                              
59f8  push    word ptr [bp+0Ch]               
59fb  push    2h                              
59fd  push    2h                              
59ff  push    word ptr [bp+0Eh]               
5a02  push    2h                              
5a04  push    2h                              
5a06  push    4h                              
5a08  mov     ax,[0B16h]                      
5a0b  or      ax,4026h                        
5a0e  push    ax                              
5a0f  call far sub_006d                       
5a14  add     sp,1Eh                          
5a17  pop     ds                              
5a18  pop     si                              
5a19  leave                                   
5a1a  retf    0Ah                             
5a1d  add     [bx+si],al                      

; ===== READOPGLUT =====
5a1e  mov     ax,59DDh                        ; segment seg2:0000
5a21  push    bp                              
5a22  mov     bp,sp                           
5a24  push    si                              
5a25  push    ds                              
5a26  mov     ds,ax                           
5a28  mov     si,[bp+0Ah]                     
5a2b  push    word ptr [bp+8h]                
5a2e  push    word ptr [bp+6h]                
5a31  push    si                              
5a32  push    81h                             
5a35  push    si                              
5a36  push    2h                              
5a38  push    2h                              
5a3a  push    word ptr [bp+0Ch]               
5a3d  push    2h                              
5a3f  push    2h                              
5a41  push    word ptr [bp+0Eh]               
5a44  push    2h                              
5a46  push    2h                              
5a48  push    4h                              
5a4a  mov     ax,[0B16h]                      
5a4d  or      ax,4027h                        
5a50  push    ax                              
5a51  call far sub_006d                       
5a56  add     sp,1Eh                          
5a59  pop     ds                              
5a5a  pop     si                              
5a5b  leave                                   
5a5c  retf    0Ah                             
5a5f  add     [bx+si],al                      

; ===== READOPBLUT =====
5a60  mov     ax,5A1Fh                        ; segment seg2:0000
5a63  push    bp                              
5a64  mov     bp,sp                           
5a66  push    si                              
5a67  push    ds                              
5a68  mov     ds,ax                           
5a6a  mov     si,[bp+0Ah]                     
5a6d  push    word ptr [bp+8h]                
5a70  push    word ptr [bp+6h]                
5a73  push    si                              
5a74  push    81h                             
5a77  push    si                              
5a78  push    2h                              
5a7a  push    2h                              
5a7c  push    word ptr [bp+0Ch]               
5a7f  push    2h                              
5a81  push    2h                              
5a83  push    word ptr [bp+0Eh]               
5a86  push    2h                              
5a88  push    2h                              
5a8a  push    4h                              
5a8c  mov     ax,[0B16h]                      
5a8f  or      ax,4028h                        
5a92  push    ax                              
5a93  call far sub_006d                       
5a98  add     sp,1Eh                          
5a9b  pop     ds                              
5a9c  pop     si                              
5a9d  leave                                   
5a9e  retf    0Ah                             
5aa1  add     [bx+si],al                      

; ===== SEMDEBUGONOFF =====
5aa2  mov     ax,5A61h                        ; segment seg2:0000
5aa5  push    bp                              
5aa6  mov     bp,sp                           
5aa8  push    ds                              
5aa9  mov     ds,ax                           
5aab  push    word ptr [bp+6h]                
5aae  push    2h                              
5ab0  push    0h                              
5ab2  push    word ptr [bp+8h]                
5ab5  push    2h                              
5ab7  push    0h                              
5ab9  push    2h                              
5abb  mov     ax,[0B16h]                      
5abe  or      ax,4029h                        
5ac1  push    ax                              
5ac2  call far sub_005b                       
5ac7  add     sp,10h                          
5aca  pop     ds                              
5acb  leave                                   
5acc  retf    4h                              
5acf  add     [bx+si],al                      

; ===== GETIMAGEPIXEL =====
5ad0  mov     ax,5AA3h                        ; segment seg2:0000
5ad3  push    bp                              
5ad4  mov     bp,sp                           
5ad6  push    ds                              
5ad7  mov     ds,ax                           
5ad9  push    word ptr [bp+6h]                
5adc  push    2h                              
5ade  push    2h                              
5ae0  push    word ptr [bp+8h]                
5ae3  push    2h                              
5ae5  push    2h                              
5ae7  push    word ptr [bp+0Ah]               
5aea  push    2h                              
5aec  push    2h                              
5aee  push    3h                              
5af0  mov     ax,[0B16h]                      
5af3  or      ax,402Ah                        
5af6  push    ax                              
5af7  call far sub_0064                       
5afc  add     sp,16h                          
5aff  pop     ds                              
5b00  leave                                   
5b01  retf    6h                              

; ===== SINGLESTORESTEREODISPON =====
5b04  mov     ax,5AD1h                        ; segment seg2:0000
5b07  push    bp                              
5b08  mov     bp,sp                           
5b0a  push    ds                              
5b0b  mov     ds,ax                           
5b0d  push    word ptr [bp+6h]                
5b10  push    2h                              
5b12  push    0h                              
5b14  push    1h                              
5b16  mov     ax,[0B16h]                      
5b19  or      ax,402Bh                        
5b1c  push    ax                              
5b1d  call far sub_005b                       
5b22  add     sp,0Ah                          
5b25  pop     ds                              
5b26  leave                                   
5b27  retf    2h                              

; ===== UPDATESTOREDHIST =====
5b2a  mov     ax,5B05h                        ; segment seg2:0000
5b2d  push    bp                              
5b2e  mov     bp,sp                           
5b30  push    ds                              
5b31  mov     ds,ax                           
5b33  push    word ptr [bp+6h]                
5b36  push    2h                              
5b38  push    0h                              
5b3a  push    1h                              
5b3c  mov     ax,[0B16h]                      
5b3f  or      ax,402Dh                        
5b42  push    ax                              
5b43  call far sub_005b                       
5b48  add     sp,0Ah                          
5b4b  pop     ds                              
5b4c  leave                                   
5b4d  retf    2h                              

; ===== DEFINEPROFLINE =====
5b50  mov     ax,5B2Bh                        ; segment seg2:0000
5b53  push    bp                              
5b54  mov     bp,sp                           
5b56  push    ds                              
5b57  mov     ds,ax                           
5b59  push    word ptr [bp+6h]                
5b5c  push    2h                              
5b5e  push    0h                              
5b60  push    word ptr [bp+8h]                
5b63  push    2h                              
5b65  push    0h                              
5b67  push    word ptr [bp+0Ah]               
5b6a  push    2h                              
5b6c  push    0h                              
5b6e  push    word ptr [bp+0Ch]               
5b71  push    2h                              
5b73  push    0h                              
5b75  push    word ptr [bp+0Eh]               
5b78  push    2h                              
5b7a  push    0h                              
5b7c  push    5h                              
5b7e  mov     ax,[0B16h]                      
5b81  or      ax,402Eh                        
5b84  push    ax                              
5b85  call far sub_005b                       
5b8a  add     sp,22h                          
5b8d  pop     ds                              
5b8e  leave                                   
5b8f  retf    0Ah                             

; ===== DEFINEPROFVERTLINE =====
5b92  mov     ax,5B51h                        ; segment seg2:0000
5b95  push    bp                              
5b96  mov     bp,sp                           
5b98  push    ds                              
5b99  mov     ds,ax                           
5b9b  push    word ptr [bp+6h]                
5b9e  push    2h                              
5ba0  push    0h                              
5ba2  push    word ptr [bp+8h]                
5ba5  push    2h                              
5ba7  push    0h                              
5ba9  push    2h                              
5bab  mov     ax,[0B16h]                      
5bae  or      ax,402Fh                        
5bb1  push    ax                              
5bb2  call far sub_005b                       
5bb7  add     sp,10h                          
5bba  pop     ds                              
5bbb  leave                                   
5bbc  retf    4h                              
5bbf  add     [bx+si],al                      

; ===== DEFINEPROFHORIZLINE =====
5bc0  mov     ax,5B93h                        ; segment seg2:0000
5bc3  push    bp                              
5bc4  mov     bp,sp                           
5bc6  push    ds                              
5bc7  mov     ds,ax                           
5bc9  push    word ptr [bp+6h]                
5bcc  push    2h                              
5bce  push    0h                              
5bd0  push    word ptr [bp+8h]                
5bd3  push    2h                              
5bd5  push    0h                              
5bd7  push    2h                              
5bd9  mov     ax,[0B16h]                      
5bdc  or      ax,4030h                        
5bdf  push    ax                              
5be0  call far sub_005b                       
5be5  add     sp,10h                          
5be8  pop     ds                              
5be9  leave                                   
5bea  retf    4h                              
5bed  add     [bx+si],al                      

; ===== GETPROFILEREADYFLAG =====
5bee  mov     ax,5BC1h                        ; segment seg2:0000
5bf1  push    bp                              
5bf2  mov     bp,sp                           
5bf4  push    ds                              
5bf5  mov     ds,ax                           
5bf7  push    0h                              
5bf9  mov     ax,[0B16h]                      
5bfc  or      ax,4046h                        
5bff  push    ax                              
5c00  call far sub_0064                       
5c05  add     sp,4h                           
5c08  pop     ds                              
5c09  leave                                   
5c0a  retf                                    
5c0b  add     [bx+si],al                      

; ===== DEFINEYMODCHAN =====
5c0c  mov     ax,5BEFh                        ; segment seg2:0000
5c0f  push    bp                              
5c10  mov     bp,sp                           
5c12  push    ds                              
5c13  mov     ds,ax                           
5c15  push    word ptr [bp+6h]                
5c18  push    2h                              
5c1a  push    0h                              
5c1c  push    1h                              
5c1e  mov     ax,[0B16h]                      
5c21  or      ax,4031h                        
5c24  push    ax                              
5c25  call far sub_005b                       
5c2a  add     sp,0Ah                          
5c2d  pop     ds                              
5c2e  leave                                   
5c2f  retf    2h                              

; ===== STARTHISTACQUIRE =====
5c32  mov     ax,5C0Dh                        ; segment seg2:0000
5c35  push    bp                              
5c36  mov     bp,sp                           
5c38  push    ds                              
5c39  mov     ds,ax                           
5c3b  push    word ptr [bp+6h]                
5c3e  push    2h                              
5c40  push    0h                              
5c42  push    1h                              
5c44  mov     ax,[0B16h]                      
5c47  or      ax,4033h                        
5c4a  push    ax                              
5c4b  call far sub_005b                       
5c50  add     sp,0Ah                          
5c53  pop     ds                              
5c54  leave                                   
5c55  retf    2h                              

; ===== STOPHISTACQUIRE =====
5c58  mov     ax,5C33h                        ; segment seg2:0000
5c5b  push    bp                              
5c5c  mov     bp,sp                           
5c5e  push    ds                              
5c5f  mov     ds,ax                           
5c61  push    0h                              
5c63  mov     ax,[0B16h]                      
5c66  or      ax,4034h                        
5c69  push    ax                              
5c6a  call far sub_005b                       
5c6f  add     sp,4h                           
5c72  pop     ds                              
5c73  leave                                   
5c74  retf                                    
5c75  add     [bx+si],al                      

; ===== STOPPROFACQUIRE =====
5c76  mov     ax,5C59h                        ; segment seg2:0000
5c79  push    bp                              
5c7a  mov     bp,sp                           
5c7c  push    ds                              
5c7d  mov     ds,ax                           
5c7f  push    0h                              
5c81  mov     ax,[0B16h]                      
5c84  or      ax,403Eh                        
5c87  push    ax                              
5c88  call far sub_005b                       
5c8d  add     sp,4h                           
5c90  pop     ds                              
5c91  leave                                   
5c92  retf                                    
5c93  add     [bx+si],al                      

; ===== STARTPROFACQUIRE =====
5c94  mov     ax,5C77h                        ; segment seg2:0000
5c97  push    bp                              
5c98  mov     bp,sp                           
5c9a  push    ds                              
5c9b  mov     ds,ax                           
5c9d  push    0h                              
5c9f  mov     ax,[0B16h]                      
5ca2  or      ax,403Dh                        
5ca5  push    ax                              
5ca6  call far sub_005b                       
5cab  add     sp,4h                           
5cae  pop     ds                              
5caf  leave                                   
5cb0  retf                                    
5cb1  add     [bx+si],al                      

; ===== GETOVOBJECTSIZE =====
5cb2  mov     ax,5C95h                        ; segment seg2:0000
5cb5  push    bp                              
5cb6  mov     bp,sp                           
5cb8  push    ds                              
5cb9  mov     ds,ax                           
5cbb  push    word ptr [bp+6h]                
5cbe  push    2h                              
5cc0  push    2h                              
5cc2  push    word ptr [bp+0Ah]               
5cc5  push    word ptr [bp+8h]                
5cc8  push    4h                              
5cca  push    0h                              
5ccc  push    2h                              
5cce  mov     ax,[0B16h]                      
5cd1  or      ax,4032h                        
5cd4  push    ax                              
5cd5  call far sub_0064                       
5cda  add     sp,12h                          
5cdd  pop     ds                              
5cde  leave                                   
5cdf  retf    6h                              

; ===== SETDMBACKPRIOPRESLUT =====
5ce2  mov     ax,5CB3h                        ; segment seg2:0000
5ce5  push    bp                              
5ce6  mov     bp,sp                           
5ce8  push    ds                              
5ce9  mov     ds,ax                           
5ceb  push    word ptr [bp+8h]                
5cee  push    word ptr [bp+6h]                
5cf1  push    20h                             
5cf3  push    1h                              
5cf5  push    word ptr [bp+0Ah]               
5cf8  push    2h                              
5cfa  push    0h                              
5cfc  push    word ptr [bp+0Ch]               
5cff  push    2h                              
5d01  push    0h                              
5d03  push    3h                              
5d05  mov     ax,[0B16h]                      
5d08  or      ax,4037h                        
5d0b  push    ax                              
5d0c  call far sub_005b                       
5d11  add     sp,18h                          
5d14  pop     ds                              
5d15  leave                                   
5d16  retf    8h                              
5d19  add     [bx+si],al                      

; ===== SETDMBACKPRIOINTLUT =====
5d1a  mov     ax,5CE3h                        ; segment seg2:0000
5d1d  push    bp                              
5d1e  mov     bp,sp                           
5d20  push    ds                              
5d21  mov     ds,ax                           
5d23  push    word ptr [bp+8h]                
5d26  push    word ptr [bp+6h]                
5d29  push    20h                             
5d2b  push    1h                              
5d2d  push    word ptr [bp+0Ah]               
5d30  push    2h                              
5d32  push    0h                              
5d34  push    word ptr [bp+0Ch]               
5d37  push    2h                              
5d39  push    0h                              
5d3b  push    3h                              
5d3d  mov     ax,[0B16h]                      
5d40  or      ax,403Ah                        
5d43  push    ax                              
5d44  call far sub_005b                       
5d49  add     sp,18h                          
5d4c  pop     ds                              
5d4d  leave                                   
5d4e  retf    8h                              
5d51  add     [bx+si],al                      

; ===== GETPROFILEDATA =====
5d52  mov     ax,5D1Bh                        ; segment seg2:0000
5d55  push    bp                              
5d56  mov     bp,sp                           
5d58  push    ds                              
5d59  mov     ds,ax                           
5d5b  push    word ptr [bp+6h]                
5d5e  push    2h                              
5d60  push    0h                              
5d62  push    word ptr [bp+0Ah]               
5d65  push    word ptr [bp+8h]                
5d68  push    400h                            
5d6b  push    81h                             
5d6e  push    2h                              
5d70  mov     ax,[0B16h]                      
5d73  or      ax,403Fh                        
5d76  push    ax                              
5d77  call far sub_0088                       
5d7c  add     sp,12h                          
5d7f  pop     ds                              
5d80  leave                                   
5d81  retf    6h                              

; ===== GETHISTOGRAMDATA =====
5d84  mov     ax,5D53h                        ; segment seg2:0000
5d87  push    bp                              
5d88  mov     bp,sp                           
5d8a  push    ds                              
5d8b  mov     ds,ax                           
5d8d  push    word ptr [bp+8h]                
5d90  push    word ptr [bp+6h]                
5d93  push    400h                            
5d96  push    81h                             
5d99  push    1h                              
5d9b  mov     ax,[0B16h]                      
5d9e  or      ax,4040h                        
5da1  push    ax                              
5da2  call far sub_0088                       
5da7  add     sp,0Ch                          
5daa  pop     ds                              
5dab  leave                                   
5dac  retf    4h                              
5daf  add     [bx+si],al                      

; ===== SUSPENDDISPCTRLPROC =====
5db0  mov     ax,5D85h                        ; segment seg2:0000
5db3  push    bp                              
5db4  mov     bp,sp                           
5db6  push    ds                              
5db7  mov     ds,ax                           
5db9  push    0h                              
5dbb  mov     ax,[0B16h]                      
5dbe  or      ax,4041h                        
5dc1  push    ax                              
5dc2  call far sub_005b                       
5dc7  add     sp,4h                           
5dca  pop     ds                              
5dcb  leave                                   
5dcc  retf                                    
5dcd  add     [bx+si],al                      

; ===== DEFINELIVELINEPROF =====
5dce  mov     ax,5DB1h                        ; segment seg2:0000
5dd1  push    bp                              
5dd2  mov     bp,sp                           
5dd4  push    ds                              
5dd5  mov     ds,ax                           
5dd7  push    word ptr [bp+6h]                
5dda  push    2h                              
5ddc  push    0h                              
5dde  push    word ptr [bp+8h]                
5de1  push    2h                              
5de3  push    0h                              
5de5  push    word ptr [bp+0Ah]               
5de8  push    2h                              
5dea  push    0h                              
5dec  push    3h                              
5dee  mov     ax,[0B16h]                      
5df1  or      ax,4043h                        
5df4  push    ax                              
5df5  call far sub_005b                       
5dfa  add     sp,16h                          
5dfd  pop     ds                              
5dfe  leave                                   
5dff  retf    6h                              

; ===== DEFINEXRAYPROF =====
5e02  mov     ax,5DCFh                        ; segment seg2:0000
5e05  push    bp                              
5e06  mov     bp,sp                           
5e08  push    ds                              
5e09  mov     ds,ax                           
5e0b  push    word ptr [bp+6h]                
5e0e  push    2h                              
5e10  push    0h                              
5e12  push    1h                              
5e14  mov     ax,[0B16h]                      
5e17  or      ax,4044h                        
5e1a  push    ax                              
5e1b  call far sub_005b                       
5e20  add     sp,0Ah                          
5e23  pop     ds                              
5e24  leave                                   
5e25  retf    2h                              

; ===== STARTXRAYPROFILE =====
5e28  mov     ax,5E03h                        ; segment seg2:0000
5e2b  push    bp                              
5e2c  mov     bp,sp                           
5e2e  push    ds                              
5e2f  mov     ds,ax                           
5e31  push    0h                              
5e33  mov     ax,[0B16h]                      
5e36  or      ax,403Bh                        
5e39  push    ax                              
5e3a  call far sub_005b                       
5e3f  add     sp,4h                           
5e42  pop     ds                              
5e43  leave                                   
5e44  retf                                    
5e45  add     [bx+si],al                      

; ===== STOPXRAYPROFILE =====
5e46  mov     ax,5E29h                        ; segment seg2:0000
5e49  push    bp                              
5e4a  mov     bp,sp                           
5e4c  push    ds                              
5e4d  mov     ds,ax                           
5e4f  push    0h                              
5e51  mov     ax,[0B16h]                      
5e54  or      ax,403Ch                        
5e57  push    ax                              
5e58  call far sub_005b                       
5e5d  add     sp,4h                           
5e60  pop     ds                              
5e61  leave                                   
5e62  retf                                    
5e63  add     [bx+si],al                      

; ===== SETXRAYGREYLEVEL =====
5e64  mov     ax,5E47h                        ; segment seg2:0000
5e67  push    bp                              
5e68  mov     bp,sp                           
5e6a  push    ds                              
5e6b  mov     ds,ax                           
5e6d  push    word ptr [bp+6h]                
5e70  push    2h                              
5e72  push    0h                              
5e74  push    word ptr [bp+8h]                
5e77  push    2h                              
5e79  push    0h                              
5e7b  push    2h                              
5e7d  mov     ax,[0B16h]                      
5e80  or      ax,4045h                        
5e83  push    ax                              
5e84  call far sub_005b                       
5e89  add     sp,10h                          
5e8c  pop     ds                              
5e8d  leave                                   
5e8e  retf    4h                              
5e91  add     [bx+si],al                      

; ===== SETXRAYFILTER =====
5e92  mov     ax,5E65h                        ; segment seg2:0000
5e95  push    bp                              
5e96  mov     bp,sp                           
5e98  push    ds                              
5e99  mov     ds,ax                           
5e9b  push    word ptr [bp+6h]                
5e9e  push    2h                              
5ea0  push    0h                              
5ea2  push    1h                              
5ea4  mov     ax,[0B16h]                      
5ea7  or      ax,4038h                        
5eaa  push    ax                              
5eab  call far sub_005b                       
5eb0  add     sp,0Ah                          
5eb3  pop     ds                              
5eb4  leave                                   
5eb5  retf    2h                              

; ===== SETXRAYWINDOWS =====
5eb8  mov     ax,5E93h                        ; segment seg2:0000
5ebb  push    bp                              
5ebc  mov     bp,sp                           
5ebe  push    ds                              
5ebf  mov     ds,ax                           
5ec1  push    word ptr [bp+6h]                
5ec4  push    2h                              
5ec6  push    2h                              
5ec8  push    word ptr [bp+8h]                
5ecb  push    2h                              
5ecd  push    2h                              
5ecf  push    word ptr [bp+0Ah]               
5ed2  push    2h                              
5ed4  push    2h                              
5ed6  push    word ptr [bp+0Ch]               
5ed9  push    2h                              
5edb  push    2h                              
5edd  push    4h                              
5edf  mov     ax,[0B16h]                      
5ee2  or      ax,4039h                        
5ee5  push    ax                              
5ee6  call far sub_005b                       
5eeb  add     sp,1Ch                          
5eee  pop     ds                              
5eef  leave                                   
5ef0  retf    8h                              
5ef3  add     [bx+si],al                      

; ===== SETXRAYSCALE =====
5ef4  mov     ax,5EB9h                        ; segment seg2:0000
5ef7  push    bp                              
5ef8  mov     bp,sp                           
5efa  push    ds                              
5efb  mov     ds,ax                           
5efd  push    word ptr [bp+6h]                
5f00  push    2h                              
5f02  push    2h                              
5f04  push    word ptr [bp+8h]                
5f07  push    2h                              
5f09  push    2h                              
5f0b  push    word ptr [bp+0Ah]               
5f0e  push    2h                              
5f10  push    2h                              
5f12  push    3h                              
5f14  mov     ax,[0B16h]                      
5f17  or      ax,4042h                        
5f1a  push    ax                              
5f1b  call far sub_005b                       
5f20  add     sp,16h                          
5f23  pop     ds                              
5f24  leave                                   
5f25  retf    6h                              

; ===== DELSTAGEMODULE =====
5f28  mov     ax,2489h                        ; segment seg2:0000
5f2b  push    bp                              
5f2c  mov     bp,sp                           
5f2e  push    ds                              
5f2f  mov     ds,ax                           
5f31  push    word ptr [0B18h]                ; [ds] f32 here = 0
5f35  push    2h                              
5f37  push    0h                              
5f39  push    1h                              
5f3b  push    7E63h                           
5f3e  call far sub_0064                       
5f43  add     sp,0Ah                          
5f46  pop     ds                              
5f47  leave                                   
5f48  retf                                    
5f49  add     [bx+si],al                      

; ===== INITSTAGECOMMS =====
5f4a  mov     ax,5F29h                        ; segment seg2:0000
5f4d  push    bp                              
5f4e  mov     bp,sp                           
5f50  push    ds                              
5f51  mov     ds,ax                           
5f53  push    0h                              
5f55  mov     ax,[0B18h]                      
5f58  or      ax,4001h                        
5f5b  push    ax                              
5f5c  call far sub_0064                       
5f61  add     sp,4h                           
5f64  pop     ds                              
5f65  leave                                   
5f66  retf                                    
5f67  add     [bx+si],al                      

; ===== READSTAGETIGADATA =====
5f68  mov     ax,5F4Bh                        ; segment seg2:0000
5f6b  push    bp                              
5f6c  mov     bp,sp                           
5f6e  push    ds                              
5f6f  mov     ds,ax                           
5f71  push    word ptr [bp+8h]                
5f74  push    word ptr [bp+6h]                
5f77  push    34h                             
5f79  push    81h                             
5f7c  push    1h                              
5f7e  mov     ax,[0B18h]                      
5f81  or      ax,4002h                        
5f84  push    ax                              
5f85  call far sub_006d                       
5f8a  add     sp,0Ch                          
5f8d  pop     ds                              
5f8e  leave                                   
5f8f  retf    4h                              

; ===== READSTAGEDLLDATA =====
5f92  mov     ax,5F69h                        ; segment seg2:0000
5f95  push    bp                              
5f96  mov     bp,sp                           
5f98  push    ds                              
5f99  mov     ds,ax                           
5f9b  push    word ptr [bp+8h]                
5f9e  push    word ptr [bp+6h]                
5fa1  push    98h                             
5fa4  push    81h                             
5fa7  push    1h                              
5fa9  mov     ax,[0B18h]                      
5fac  or      ax,4003h                        
5faf  push    ax                              
5fb0  call far sub_006d                       
5fb5  add     sp,0Ch                          
5fb8  pop     ds                              
5fb9  leave                                   
5fba  retf    4h                              
5fbd  add     [bx+si],al                      

; ===== AUTOSTAGEINITTIGA =====
5fbe  mov     ax,5F93h                        ; segment seg2:0000
5fc1  push    bp                              
5fc2  mov     bp,sp                           
5fc4  push    ds                              
5fc5  mov     ds,ax                           
5fc7  push    0h                              
5fc9  mov     ax,[0B18h]                      
5fcc  or      ax,4006h                        
5fcf  push    ax                              
5fd0  call far sub_005b                       
5fd5  add     sp,4h                           
5fd8  pop     ds                              
5fd9  leave                                   
5fda  retf                                    
5fdb  add     [bx+si],al                      

; ===== SENDCONFIGSTAGETIGA =====
5fdc  mov     ax,5FBFh                        ; segment seg2:0000
5fdf  push    bp                              
5fe0  mov     bp,sp                           
5fe2  push    ds                              
5fe3  mov     ds,ax                           
5fe5  mov     al,[bp+6h]                      
5fe8  cbw                                     
5fe9  push    ax                              
5fea  push    2h                              
5fec  push    0h                              
5fee  push    1h                              
5ff0  mov     ax,[0B18h]                      
5ff3  or      ax,4004h                        
5ff6  push    ax                              
5ff7  call far sub_005b                       
5ffc  add     sp,0Ah                          
5fff  pop     ds                              
6000  leave                                   
6001  retf    2h                              

; ===== MANUALINITTIGA =====
6004  mov     ax,5FDDh                        ; segment seg2:0000
6007  push    bp                              
6008  mov     bp,sp                           
600a  push    ds                              
600b  mov     ds,ax                           
600d  push    word ptr [bp+8h]                
6010  push    word ptr [bp+6h]                
6013  push    18h                             
6015  push    1h                              
6017  push    1h                              
6019  mov     ax,[0B18h]                      
601c  or      ax,4005h                        
601f  push    ax                              
6020  call far sub_005b                       
6025  add     sp,0Ch                          
6028  pop     ds                              
6029  leave                                   
602a  retf    4h                              
602d  add     [bx+si],al                      

; ===== MOVETHESTAGETIGA =====
602e  mov     ax,6005h                        ; segment seg2:0000
6031  push    bp                              
6032  mov     bp,sp                           
6034  push    ds                              
6035  mov     ds,ax                           
6037  push    word ptr [bp+8h]                
603a  push    word ptr [bp+6h]                
603d  push    18h                             
603f  push    1h                              
6041  push    1h                              
6043  mov     ax,[0B18h]                      
6046  or      ax,400Ah                        
6049  push    ax                              
604a  call far sub_005b                       
604f  add     sp,0Ch                          
6052  pop     ds                              
6053  leave                                   
6054  retf    4h                              
6057  add     [bx+si],al                      

; ===== SENDABORTMOVETIGA =====
6058  mov     ax,602Fh                        ; segment seg2:0000
605b  push    bp                              
605c  mov     bp,sp                           
605e  push    ds                              
605f  mov     ds,ax                           
6061  push    0h                              
6063  mov     ax,[0B18h]                      
6066  or      ax,4014h                        
6069  push    ax                              
606a  call far sub_005b                       
606f  add     sp,4h                           
6072  pop     ds                              
6073  leave                                   
6074  retf                                    
6075  add     [bx+si],al                      

; ===== JOYSTICKEMULNTIGA =====
6076  mov     ax,6059h                        ; segment seg2:0000
6079  push    bp                              
607a  mov     bp,sp                           
607c  push    ds                              
607d  mov     ds,ax                           
607f  push    word ptr [bp+8h]                
6082  push    word ptr [bp+6h]                
6085  push    0Ch                             
6087  push    1h                              
6089  push    1h                              
608b  mov     ax,[0B18h]                      
608e  or      ax,4009h                        
6091  push    ax                              
6092  call far sub_005b                       
6097  add     sp,0Ch                          
609a  pop     ds                              
609b  leave                                   
609c  retf    4h                              
609f  add     [bx+si],al                      

; ===== BACKLASHREQUIREDTIGA =====
60a0  mov     ax,6077h                        ; segment seg2:0000
60a3  push    bp                              
60a4  mov     bp,sp                           
60a6  push    ds                              
60a7  mov     ds,ax                           
60a9  mov     al,[bp+6h]                      
60ac  cbw                                     
60ad  push    ax                              
60ae  push    2h                              
60b0  push    0h                              
60b2  push    1h                              
60b4  mov     ax,[0B18h]                      
60b7  or      ax,400Bh                        
60ba  push    ax                              
60bb  call far sub_005b                       
60c0  add     sp,0Ah                          
60c3  pop     ds                              
60c4  leave                                   
60c5  retf    2h                              

; ===== SETUSRLOWLIMITSTIGA =====
60c8  mov     ax,60A1h                        ; segment seg2:0000
60cb  push    bp                              
60cc  mov     bp,sp                           
60ce  push    ds                              
60cf  mov     ds,ax                           
60d1  push    word ptr [bp+8h]                
60d4  push    word ptr [bp+6h]                
60d7  push    18h                             
60d9  push    1h                              
60db  push    1h                              
60dd  mov     ax,[0B18h]                      
60e0  or      ax,4007h                        
60e3  push    ax                              
60e4  call far sub_005b                       
60e9  add     sp,0Ch                          
60ec  pop     ds                              
60ed  leave                                   
60ee  retf    4h                              
60f1  add     [bx+si],al                      

; ===== SETUSRUPRLIMITSTIGA =====
60f2  mov     ax,60C9h                        ; segment seg2:0000
60f5  push    bp                              
60f6  mov     bp,sp                           
60f8  push    ds                              
60f9  mov     ds,ax                           
60fb  push    word ptr [bp+8h]                
60fe  push    word ptr [bp+6h]                
6101  push    18h                             
6103  push    1h                              
6105  push    1h                              
6107  mov     ax,[0B18h]                      
610a  or      ax,4008h                        
610d  push    ax                              
610e  call far sub_005b                       
6113  add     sp,0Ch                          
6116  pop     ds                              
6117  leave                                   
6118  retf    4h                              
611b  add     [bx+si],al                      

; ===== SETMOVEMODETIGA =====
611c  mov     ax,60F3h                        ; segment seg2:0000
611f  push    bp                              
6120  mov     bp,sp                           
6122  push    ds                              
6123  mov     ds,ax                           
6125  mov     al,[bp+6h]                      
6128  cbw                                     
6129  push    ax                              
612a  push    2h                              
612c  push    0h                              
612e  push    1h                              
6130  mov     ax,[0B18h]                      
6133  or      ax,400Ch                        
6136  push    ax                              
6137  call far sub_005b                       
613c  add     sp,0Ah                          
613f  pop     ds                              
6140  leave                                   
6141  retf    2h                              

; ===== SETBACKLASHDISTTIGA =====
6144  mov     ax,611Dh                        ; segment seg2:0000
6147  push    bp                              
6148  mov     bp,sp                           
614a  push    ds                              
614b  mov     ds,ax                           
614d  push    word ptr [bp+8h]                
6150  push    word ptr [bp+6h]                
6153  push    18h                             
6155  push    1h                              
6157  push    1h                              
6159  mov     ax,[0B18h]                      
615c  or      ax,4011h                        
615f  push    ax                              
6160  call far sub_005b                       
6165  add     sp,0Ch                          
6168  pop     ds                              
6169  leave                                   
616a  retf    4h                              
616d  add     [bx+si],al                      

; ===== SETBACKLASHSPEEDTIGA =====
616e  mov     ax,6145h                        ; segment seg2:0000
6171  push    bp                              
6172  mov     bp,sp                           
6174  push    ds                              
6175  mov     ds,ax                           
6177  push    word ptr [bp+8h]                
617a  push    word ptr [bp+6h]                
617d  push    0Ch                             
617f  push    1h                              
6181  push    1h                              
6183  mov     ax,[0B18h]                      
6186  or      ax,4010h                        
6189  push    ax                              
618a  call far sub_005b                       
618f  add     sp,0Ch                          
6192  pop     ds                              
6193  leave                                   
6194  retf    4h                              
6197  add     [bx+si],al                      

; ===== SETSTARTSPEEDTIGA =====
6198  mov     ax,616Fh                        ; segment seg2:0000
619b  push    bp                              
619c  mov     bp,sp                           
619e  push    ds                              
619f  mov     ds,ax                           
61a1  push    word ptr [bp+8h]                
61a4  push    word ptr [bp+6h]                
61a7  push    0Ch                             
61a9  push    1h                              
61ab  push    1h                              
61ad  mov     ax,[0B18h]                      
61b0  or      ax,400Dh                        
61b3  push    ax                              
61b4  call far sub_005b                       
61b9  add     sp,0Ch                          
61bc  pop     ds                              
61bd  leave                                   
61be  retf    4h                              
61c1  add     [bx+si],al                      

; ===== SETCRUISESPEEDTIGA =====
61c2  mov     ax,6199h                        ; segment seg2:0000
61c5  push    bp                              
61c6  mov     bp,sp                           
61c8  push    ds                              
61c9  mov     ds,ax                           
61cb  push    word ptr [bp+8h]                
61ce  push    word ptr [bp+6h]                
61d1  push    0Ch                             
61d3  push    1h                              
61d5  push    1h                              
61d7  mov     ax,[0B18h]                      
61da  or      ax,4012h                        
61dd  push    ax                              
61de  call far sub_005b                       
61e3  add     sp,0Ch                          
61e6  pop     ds                              
61e7  leave                                   
61e8  retf    4h                              
61eb  add     [bx+si],al                      

; ===== SETSPEEDINCTIGA =====
61ec  mov     ax,61C3h                        ; segment seg2:0000
61ef  push    bp                              
61f0  mov     bp,sp                           
61f2  push    ds                              
61f3  mov     ds,ax                           
61f5  push    word ptr [bp+8h]                
61f8  push    word ptr [bp+6h]                
61fb  push    0Ch                             
61fd  push    1h                              
61ff  push    1h                              
6201  mov     ax,[0B18h]                      
6204  or      ax,400Eh                        
6207  push    ax                              
6208  call far sub_005b                       
620d  add     sp,0Ch                          
6210  pop     ds                              
6211  leave                                   
6212  retf    4h                              
6215  add     [bx+si],al                      

; ===== SETTIMERINCTIGA =====
6216  mov     ax,61EDh                        ; segment seg2:0000
6219  push    bp                              
621a  mov     bp,sp                           
621c  push    ds                              
621d  mov     ds,ax                           
621f  push    word ptr [bp+8h]                
6222  push    word ptr [bp+6h]                
6225  push    18h                             
6227  push    1h                              
6229  push    1h                              
622b  mov     ax,[0B18h]                      
622e  or      ax,400Fh                        
6231  push    ax                              
6232  call far sub_005b                       
6237  add     sp,0Ch                          
623a  pop     ds                              
623b  leave                                   
623c  retf    4h                              
623f  add     [bx+si],al                      

; ===== READAXISIDTIGA =====
6240  mov     ax,6217h                        ; segment seg2:0000
6243  push    bp                              
6244  mov     bp,sp                           
6246  push    ds                              
6247  mov     ds,ax                           
6249  push    word ptr [bp+8h]                
624c  push    word ptr [bp+6h]                
624f  push    1h                              
6251  push    81h                             
6254  push    word ptr [bp+0Ch]               
6257  push    word ptr [bp+0Ah]               
625a  push    8h                              
625c  push    81h                             
625f  push    2h                              
6261  mov     ax,[0B18h]                      
6264  or      ax,4013h                        
6267  push    ax                              
6268  call far sub_006d                       
626d  add     sp,14h                          
6270  pop     ds                              
6271  leave                                   
6272  retf    8h                              
6275  add     [bx+si],al                      

; ===== GETSTAGEPSUTIGA =====
6276  mov     ax,6241h                        ; segment seg2:0000
6279  push    bp                              
627a  mov     bp,sp                           
627c  push    ds                              
627d  mov     ds,ax                           
627f  push    0h                              
6281  mov     ax,[0B18h]                      
6284  or      ax,4015h                        
6287  push    ax                              
6288  call far sub_005b                       
628d  add     sp,4h                           
6290  pop     ds                              
6291  leave                                   
6292  retf                                    
6293  add     [bx+si],al                      

; ===== SUSPENDSTAGEMODULE =====
6294  mov     ax,6277h                        ; segment seg2:0000
6297  push    bp                              
6298  mov     bp,sp                           
629a  push    ds                              
629b  mov     ds,ax                           
629d  push    0h                              
629f  mov     ax,[0B18h]                      
62a2  or      ax,4016h                        
62a5  push    ax                              
62a6  call far sub_0064                       
62ab  add     sp,4h                           
62ae  pop     ds                              
62af  leave                                   
62b0  retf                                    
62b1  add     [bx+si],al                      

; ===== SWITCHX_BACKLASHTIGA =====
62b2  mov     ax,6295h                        ; segment seg2:0000
62b5  push    bp                              
62b6  mov     bp,sp                           
62b8  push    ds                              
62b9  mov     ds,ax                           
62bb  mov     al,[bp+6h]                      
62be  cbw                                     
62bf  push    ax                              
62c0  push    2h                              
62c2  push    0h                              
62c4  push    1h                              
62c6  mov     ax,[0B18h]                      
62c9  or      ax,4017h                        
62cc  push    ax                              
62cd  call far sub_005b                       
62d2  add     sp,0Ah                          
62d5  pop     ds                              
62d6  leave                                   
62d7  retf    2h                              

; ===== SWITCHY_BACKLASHTIGA =====
62da  mov     ax,62B3h                        ; segment seg2:0000
62dd  push    bp                              
62de  mov     bp,sp                           
62e0  push    ds                              
62e1  mov     ds,ax                           
62e3  mov     al,[bp+6h]                      
62e6  cbw                                     
62e7  push    ax                              
62e8  push    2h                              
62ea  push    0h                              
62ec  push    1h                              
62ee  mov     ax,[0B18h]                      
62f1  or      ax,4018h                        
62f4  push    ax                              
62f5  call far sub_005b                       
62fa  add     sp,0Ah                          
62fd  pop     ds                              
62fe  leave                                   
62ff  retf    2h                              

; ===== SWITCHZ_BACKLASHTIGA =====
6302  mov     ax,62DBh                        ; segment seg2:0000
6305  push    bp                              
6306  mov     bp,sp                           
6308  push    ds                              
6309  mov     ds,ax                           
630b  mov     al,[bp+6h]                      
630e  cbw                                     
630f  push    ax                              
6310  push    2h                              
6312  push    0h                              
6314  push    1h                              
6316  mov     ax,[0B18h]                      
6319  or      ax,4019h                        
631c  push    ax                              
631d  call far sub_005b                       
6322  add     sp,0Ah                          
6325  pop     ds                              
6326  leave                                   
6327  retf    2h                              

; ===== SWITCHT_BACKLASHTIGA =====
632a  mov     ax,6303h                        ; segment seg2:0000
632d  push    bp                              
632e  mov     bp,sp                           
6330  push    ds                              
6331  mov     ds,ax                           
6333  mov     al,[bp+6h]                      
6336  cbw                                     
6337  push    ax                              
6338  push    2h                              
633a  push    0h                              
633c  push    1h                              
633e  mov     ax,[0B18h]                      
6341  or      ax,401Ah                        
6344  push    ax                              
6345  call far sub_005b                       
634a  add     sp,0Ah                          
634d  pop     ds                              
634e  leave                                   
634f  retf    2h                              

; ===== SWITCHR_BACKLASHTIGA =====
6352  mov     ax,632Bh                        ; segment seg2:0000
6355  push    bp                              
6356  mov     bp,sp                           
6358  push    ds                              
6359  mov     ds,ax                           
635b  mov     al,[bp+6h]                      
635e  cbw                                     
635f  push    ax                              
6360  push    2h                              
6362  push    0h                              
6364  push    1h                              
6366  mov     ax,[0B18h]                      
6369  or      ax,401Bh                        
636c  push    ax                              
636d  call far sub_005b                       
6372  add     sp,0Ah                          
6375  pop     ds                              
6376  leave                                   
6377  retf    2h                              

; ===== STAGEMOTORSONOFF =====
637a  mov     ax,6353h                        ; segment seg2:0000
637d  push    bp                              
637e  mov     bp,sp                           
6380  push    ds                              
6381  mov     ds,ax                           
6383  mov     al,[bp+6h]                      
6386  cbw                                     
6387  push    ax                              
6388  push    2h                              
638a  push    0h                              
638c  push    1h                              
638e  mov     ax,[0B18h]                      
6391  or      ax,401Ch                        
6394  push    ax                              
6395  call far sub_005b                       
639a  add     sp,0Ah                          
639d  pop     ds                              
639e  leave                                   
639f  retf    2h                              

; ===== DISABLETOUCHALARMTIGA =====
63a2  mov     ax,637Bh                        ; segment seg2:0000
63a5  push    bp                              
63a6  mov     bp,sp                           
63a8  push    ds                              
63a9  mov     ds,ax                           
63ab  push    0h                              
63ad  mov     ax,[0B18h]                      
63b0  or      ax,401Dh                        
63b3  push    ax                              
63b4  call far sub_005b                       
63b9  add     sp,4h                           
63bc  pop     ds                              
63bd  leave                                   
63be  retf                                    
63bf  add     [bx+si],al                      

; ===== GENERALSTAGECMDTIGA =====
63c0  mov     ax,63A3h                        ; segment seg2:0000
63c3  push    bp                              
63c4  mov     bp,sp                           
63c6  push    ds                              
63c7  mov     ds,ax                           
63c9  push    word ptr [bp+8h]                
63cc  push    word ptr [bp+6h]                
63cf  push    18h                             
63d1  push    1h                              
63d3  push    word ptr [bp+10h]               
63d6  push    word ptr [bp+0Eh]               
63d9  push    word ptr [bp+0Ch]               
63dc  push    word ptr [bp+0Ah]               
63df  push    8h                              
63e1  push    4h                              
63e3  mov     al,[bp+12h]                     
63e6  cbw                                     
63e7  push    ax                              
63e8  push    2h                              
63ea  push    0h                              
63ec  push    3h                              
63ee  mov     ax,[0B18h]                      
63f1  or      ax,401Eh                        
63f4  push    ax                              
63f5  call far sub_005b                       
63fa  add     sp,1Eh                          
63fd  pop     ds                              
63fe  leave                                   
63ff  retf    0Eh                             

; ===== FORCESTAGEREADSTATUS =====
6402  mov     ax,63C1h                        ; segment seg2:0000
6405  push    bp                              
6406  mov     bp,sp                           
6408  push    ds                              
6409  mov     ds,ax                           
640b  push    0h                              
640d  mov     ax,[0B18h]                      
6410  or      ax,401Fh                        
6413  push    ax                              
6414  call far sub_005b                       
6419  add     sp,4h                           
641c  pop     ds                              
641d  leave                                   
641e  retf                                    
641f  add     [bx+si],al                      

; ===== SETROTAXISLIMITSWITCH =====
6420  mov     ax,6403h                        ; segment seg2:0000
6423  push    bp                              
6424  mov     bp,sp                           
6426  push    ds                              
6427  mov     ds,ax                           
6429  push    word ptr [bp+6h]                
642c  push    2h                              
642e  push    0h                              
6430  push    1h                              
6432  mov     ax,[0B18h]                      
6435  or      ax,4020h                        
6438  push    ax                              
6439  call far sub_005b                       
643e  add     sp,0Ah                          
6441  pop     ds                              
6442  leave                                   
6443  retf    2h                              

; ===== SETPROTECTEDZMODE =====
6446  mov     ax,6421h                        ; segment seg2:0000
6449  push    bp                              
644a  mov     bp,sp                           
644c  push    ds                              
644d  mov     ds,ax                           
644f  push    word ptr [bp+6h]                
6452  push    2h                              
6454  push    0h                              
6456  push    1h                              
6458  mov     ax,[0B18h]                      
645b  or      ax,4021h                        
645e  push    ax                              
645f  call far sub_005b                       
6464  add     sp,0Ah                          
6467  pop     ds                              
6468  leave                                   
6469  retf    2h                              

; ===== GETSTAGEINITPERCENT =====
646c  mov     ax,6447h                        ; segment seg2:0000
646f  push    bp                              
6470  mov     bp,sp                           
6472  push    ds                              
6473  mov     ds,ax                           
6475  push    0h                              
6477  mov     ax,[0B18h]                      
647a  or      ax,4022h                        
647d  push    ax                              
647e  call far sub_0064                       
6483  add     sp,4h                           
6486  pop     ds                              
6487  leave                                   
6488  retf                                    
6489  nop                                     

; ===== DELVACMODULE =====
648a  mov     ax,24B9h                        ; segment seg2:0000
648d  push    bp                              
648e  mov     bp,sp                           
6490  push    ds                              
6491  mov     ds,ax                           
6493  push    word ptr [0B1Ah]                ; [ds] f32 here = 0
6497  push    2h                              
6499  push    0h                              
649b  push    1h                              
649d  push    7E63h                           
64a0  call far sub_0064                       
64a5  add     sp,0Ah                          
64a8  pop     ds                              
64a9  leave                                   
64aa  retf                                    
64ab  add     [bx+si],al                      

; ===== INITVACCOMMS =====
64ac  mov     ax,648Bh                        ; segment seg2:0000
64af  push    bp                              
64b0  mov     bp,sp                           
64b2  push    ds                              
64b3  mov     ds,ax                           
64b5  push    0h                              
64b7  mov     ax,[0B1Ah]                      
64ba  or      ax,4002h                        
64bd  push    ax                              
64be  call far sub_0064                       
64c3  add     sp,4h                           
64c6  pop     ds                              
64c7  leave                                   
64c8  retf                                    
64c9  add     [bx+si],al                      

; ===== READVACSTATUS =====
64ca  mov     ax,64ADh                        ; segment seg2:0000
64cd  push    bp                              
64ce  mov     bp,sp                           
64d0  push    ds                              
64d1  mov     ds,ax                           
64d3  push    word ptr [bp+8h]                
64d6  push    word ptr [bp+6h]                
64d9  push    29h                             
64db  push    81h                             
64de  push    1h                              
64e0  mov     ax,[0B1Ah]                      
64e3  or      ax,4001h                        
64e6  push    ax                              
64e7  call far sub_006d                       
64ec  add     sp,0Ch                          
64ef  pop     ds                              
64f0  leave                                   
64f1  retf    4h                              

; ===== SYSTEMPUMPINGSTATE =====
64f4  mov     ax,64CBh                        ; segment seg2:0000
64f7  push    bp                              
64f8  mov     bp,sp                           
64fa  push    ds                              
64fb  mov     ds,ax                           
64fd  push    word ptr [bp+6h]                
6500  push    2h                              
6502  push    0h                              
6504  push    1h                              
6506  mov     ax,[0B1Ah]                      
6509  or      ax,4005h                        
650c  push    ax                              
650d  call far sub_005b                       
6512  add     sp,0Ah                          
6515  pop     ds                              
6516  leave                                   
6517  retf    2h                              

; ===== COLUMNPUMPINGSTATE =====
651a  mov     ax,64F5h                        ; segment seg2:0000
651d  push    bp                              
651e  mov     bp,sp                           
6520  push    ds                              
6521  mov     ds,ax                           
6523  push    word ptr [bp+6h]                
6526  push    2h                              
6528  push    0h                              
652a  push    1h                              
652c  mov     ax,[0B1Ah]                      
652f  or      ax,4007h                        
6532  push    ax                              
6533  call far sub_005b                       
6538  add     sp,0Ah                          
653b  pop     ds                              
653c  leave                                   
653d  retf    2h                              

; ===== CONFIGUREEDXTIGA =====
6540  mov     ax,651Bh                        ; segment seg2:0000
6543  push    bp                              
6544  mov     bp,sp                           
6546  push    ds                              
6547  mov     ds,ax                           
6549  push    word ptr [bp+6h]                
654c  push    2h                              
654e  push    0h                              
6550  push    1h                              
6552  mov     ax,[0B1Ah]                      
6555  or      ax,4009h                        
6558  push    ax                              
6559  call far sub_005b                       
655e  add     sp,0Ah                          
6561  pop     ds                              
6562  leave                                   
6563  retf    2h                              

; ===== CONFIGUREWDXTIGA =====
6566  mov     ax,6541h                        ; segment seg2:0000
6569  push    bp                              
656a  mov     bp,sp                           
656c  push    ds                              
656d  mov     ds,ax                           
656f  push    word ptr [bp+6h]                
6572  push    2h                              
6574  push    0h                              
6576  push    1h                              
6578  mov     ax,[0B1Ah]                      
657b  or      ax,400Ah                        
657e  push    ax                              
657f  call far sub_005b                       
6584  add     sp,0Ah                          
6587  pop     ds                              
6588  leave                                   
6589  retf    2h                              

; ===== CONFIGUREAIRLOCKTIGA =====
658c  mov     ax,6567h                        ; segment seg2:0000
658f  push    bp                              
6590  mov     bp,sp                           
6592  push    ds                              
6593  mov     ds,ax                           
6595  push    word ptr [bp+6h]                
6598  push    2h                              
659a  push    0h                              
659c  push    1h                              
659e  mov     ax,[0B1Ah]                      
65a1  or      ax,400Ch                        
65a4  push    ax                              
65a5  call far sub_005b                       
65aa  add     sp,0Ah                          
65ad  pop     ds                              
65ae  leave                                   
65af  retf    2h                              

; ===== CONFIGUREVIEWINGWINDOWTIGA =====
65b2  mov     ax,658Dh                        ; segment seg2:0000
65b5  push    bp                              
65b6  mov     bp,sp                           
65b8  push    ds                              
65b9  mov     ds,ax                           
65bb  push    word ptr [bp+6h]                
65be  push    2h                              
65c0  push    0h                              
65c2  push    1h                              
65c4  mov     ax,[0B1Ah]                      
65c7  or      ax,4004h                        
65ca  push    ax                              
65cb  call far sub_005b                       
65d0  add     sp,0Ah                          
65d3  pop     ds                              
65d4  leave                                   
65d5  retf    2h                              

; ===== CONFIGURECOLUMNPUMPINGTIGA =====
65d8  mov     ax,65B3h                        ; segment seg2:0000
65db  push    bp                              
65dc  mov     bp,sp                           
65de  push    ds                              
65df  mov     ds,ax                           
65e1  push    word ptr [bp+6h]                
65e4  push    2h                              
65e6  push    0h                              
65e8  push    1h                              
65ea  mov     ax,[0B1Ah]                      
65ed  or      ax,4006h                        
65f0  push    ax                              
65f1  call far sub_005b                       
65f6  add     sp,0Ah                          
65f9  pop     ds                              
65fa  leave                                   
65fb  retf    2h                              

; ===== OPERATEWDXGATEVALVETIGA =====
65fe  mov     ax,65D9h                        ; segment seg2:0000
6601  push    bp                              
6602  mov     bp,sp                           
6604  push    ds                              
6605  mov     ds,ax                           
6607  push    word ptr [bp+6h]                
660a  push    2h                              
660c  push    0h                              
660e  push    1h                              
6610  mov     ax,[0B1Ah]                      
6613  or      ax,400Bh                        
6616  push    ax                              
6617  call far sub_005b                       
661c  add     sp,0Ah                          
661f  pop     ds                              
6620  leave                                   
6621  retf    2h                              

; ===== COLUMNISOLATIONTIGA =====
6624  mov     ax,65FFh                        ; segment seg2:0000
6627  push    bp                              
6628  mov     bp,sp                           
662a  push    ds                              
662b  mov     ds,ax                           
662d  push    word ptr [bp+6h]                
6630  push    2h                              
6632  push    0h                              
6634  push    1h                              
6636  mov     ax,[0B1Ah]                      
6639  or      ax,4008h                        
663c  push    ax                              
663d  call far sub_005b                       
6642  add     sp,0Ah                          
6645  pop     ds                              
6646  leave                                   
6647  retf    2h                              

; ===== SCMREADINGREQDTIGAREQUEST =====
664a  mov     ax,6625h                        ; segment seg2:0000
664d  push    bp                              
664e  mov     bp,sp                           
6650  push    ds                              
6651  mov     ds,ax                           
6653  push    word ptr [bp+6h]                
6656  push    2h                              
6658  push    0h                              
665a  push    1h                              
665c  mov     ax,[0B1Ah]                      
665f  or      ax,4012h                        
6662  push    ax                              
6663  call far sub_005b                       
6668  add     sp,0Ah                          
666b  pop     ds                              
666c  leave                                   
666d  retf    2h                              

; ===== SETQBSDVISIBLETIGAREQUEST =====
6670  mov     ax,664Bh                        ; segment seg2:0000
6673  push    bp                              
6674  mov     bp,sp                           
6676  push    ds                              
6677  mov     ds,ax                           
6679  push    word ptr [bp+6h]                
667c  push    2h                              
667e  push    0h                              
6680  push    1h                              
6682  mov     ax,[0B1Ah]                      
6685  or      ax,400Fh                        
6688  push    ax                              
6689  call far sub_005b                       
668e  add     sp,0Ah                          
6691  pop     ds                              
6692  leave                                   
6693  retf    2h                              

; ===== SETQBSDGAINTIGAREQUEST =====
6696  mov     ax,6671h                        ; segment seg2:0000
6699  push    bp                              
669a  mov     bp,sp                           
669c  push    ds                              
669d  mov     ds,ax                           
669f  push    word ptr [bp+6h]                
66a2  push    2h                              
66a4  push    0h                              
66a6  push    1h                              
66a8  mov     ax,[0B1Ah]                      
66ab  or      ax,4010h                        
66ae  push    ax                              
66af  call far sub_005b                       
66b4  add     sp,0Ah                          
66b7  pop     ds                              
66b8  leave                                   
66b9  retf    2h                              

; ===== CONFIGVACTILT0TIGAREQUEST =====
66bc  mov     ax,6697h                        ; segment seg2:0000
66bf  push    bp                              
66c0  mov     bp,sp                           
66c2  push    ds                              
66c3  mov     ds,ax                           
66c5  push    word ptr [bp+6h]                
66c8  push    2h                              
66ca  push    0h                              
66cc  push    1h                              
66ce  mov     ax,[0B1Ah]                      
66d1  or      ax,4019h                        
66d4  push    ax                              
66d5  call far sub_005b                       
66da  add     sp,0Ah                          
66dd  pop     ds                              
66de  leave                                   
66df  retf    2h                              

; ===== GETSYSTEMCONFIGSTATUSTIGA =====
66e2  mov     ax,66BDh                        ; segment seg2:0000
66e5  push    bp                              
66e6  mov     bp,sp                           
66e8  push    ds                              
66e9  mov     ds,ax                           
66eb  push    0h                              
66ed  mov     ax,[0B1Ah]                      
66f0  or      ax,4014h                        
66f3  push    ax                              
66f4  call far sub_0064                       
66f9  add     sp,4h                           
66fc  pop     ds                              
66fd  leave                                   
66fe  retf                                    
66ff  add     [bx+si],al                      

; ===== REQUESTSYSTEMCONFIGTIGA =====
6700  mov     ax,66E3h                        ; segment seg2:0000
6703  push    bp                              
6704  mov     bp,sp                           
6706  push    ds                              
6707  mov     ds,ax                           
6709  push    0h                              
670b  mov     ax,[0B1Ah]                      
670e  or      ax,4013h                        
6711  push    ax                              
6712  call far sub_005b                       
6717  add     sp,4h                           
671a  pop     ds                              
671b  leave                                   
671c  retf                                    
671d  add     [bx+si],al                      

; ===== SETEDXTHRESHOLDTIGA =====
671e  mov     ax,6701h                        ; segment seg2:0000
6721  push    bp                              
6722  mov     bp,sp                           
6724  push    ds                              
6725  mov     ds,ax                           
6727  push    word ptr [bp+0Ch]               
672a  push    word ptr [bp+0Ah]               
672d  push    word ptr [bp+8h]                
6730  push    word ptr [bp+6h]                
6733  push    8h                              
6735  push    4h                              
6737  push    1h                              
6739  mov     ax,[0B1Ah]                      
673c  or      ax,400Dh                        
673f  push    ax                              
6740  call far sub_005b                       
6745  add     sp,10h                          
6748  pop     ds                              
6749  leave                                   
674a  retf    8h                              
674d  add     [bx+si],al                      

; ===== SETQBSDCONTROLTIGAREQUEST =====
674e  mov     ax,671Fh                        ; segment seg2:0000
6751  push    bp                              
6752  mov     bp,sp                           
6754  push    ds                              
6755  mov     ds,ax                           
6757  push    word ptr [bp+6h]                
675a  push    2h                              
675c  push    0h                              
675e  push    word ptr [bp+8h]                
6761  push    2h                              
6763  push    0h                              
6765  push    2h                              
6767  mov     ax,[0B1Ah]                      
676a  or      ax,400Eh                        
676d  push    ax                              
676e  call far sub_005b                       
6773  add     sp,10h                          
6776  pop     ds                              
6777  leave                                   
6778  retf    4h                              
677b  add     [bx+si],al                      

; ===== SAVESYSTEMCONFIGDATATIGA =====
677c  mov     ax,674Fh                        ; segment seg2:0000
677f  push    bp                              
6780  mov     bp,sp                           
6782  push    ds                              
6783  mov     ds,ax                           
6785  push    word ptr [bp+8h]                
6788  push    word ptr [bp+6h]                
678b  push    61Fh                            
678e  push    81h                             
6791  push    1h                              
6793  mov     ax,[0B1Ah]                      
6796  or      ax,4016h                        
6799  push    ax                              
679a  call far sub_0088                       
679f  add     sp,0Ch                          
67a2  pop     ds                              
67a3  leave                                   
67a4  retf    4h                              
67a7  add     [bx+si],al                      

; ===== GETSYSTEMCONFIGDATATIGA =====
67a8  mov     ax,677Dh                        ; segment seg2:0000
67ab  push    bp                              
67ac  mov     bp,sp                           
67ae  push    ds                              
67af  mov     ds,ax                           
67b1  push    word ptr [bp+8h]                
67b4  push    word ptr [bp+6h]                
67b7  push    61Fh                            
67ba  push    81h                             
67bd  push    1h                              
67bf  mov     ax,[0B1Ah]                      
67c2  or      ax,4015h                        
67c5  push    ax                              
67c6  call far sub_0088                       
67cb  add     sp,0Ch                          
67ce  pop     ds                              
67cf  leave                                   
67d0  retf    4h                              
67d3  add     [bx+si],al                      

; ===== SCMRANGETIGAREQUEST =====
67d4  mov     ax,67A9h                        ; segment seg2:0000
67d7  push    bp                              
67d8  mov     bp,sp                           
67da  push    ds                              
67db  mov     ds,ax                           
67dd  push    word ptr [bp+6h]                
67e0  push    2h                              
67e2  push    0h                              
67e4  push    1h                              
67e6  mov     ax,[0B1Ah]                      
67e9  or      ax,4011h                        
67ec  push    ax                              
67ed  call far sub_005b                       
67f2  add     sp,0Ah                          
67f5  pop     ds                              
67f6  leave                                   
67f7  retf    2h                              

; ===== READVACID =====
67fa  mov     ax,67D5h                        ; segment seg2:0000
67fd  push    bp                              
67fe  mov     bp,sp                           
6800  push    ds                              
6801  mov     ds,ax                           
6803  push    word ptr [bp+8h]                
6806  push    word ptr [bp+6h]                
6809  push    8h                              
680b  push    81h                             
680e  push    1h                              
6810  mov     ax,[0B1Ah]                      
6813  or      ax,4017h                        
6816  push    ax                              
6817  call far sub_006d                       
681c  add     sp,0Ch                          
681f  pop     ds                              
6820  leave                                   
6821  retf    4h                              

; ===== READCOMMSID =====
6824  mov     ax,67FBh                        ; segment seg2:0000
6827  push    bp                              
6828  mov     bp,sp                           
682a  push    ds                              
682b  mov     ds,ax                           
682d  push    word ptr [bp+8h]                
6830  push    word ptr [bp+6h]                
6833  push    8h                              
6835  push    81h                             
6838  push    1h                              
683a  mov     ax,[0B1Ah]                      
683d  or      ax,4018h                        
6840  push    ax                              
6841  call far sub_006d                       
6846  add     sp,0Ch                          
6849  pop     ds                              
684a  leave                                   
684b  retf    4h                              

; ===== CONFIGFRONTPANELTIGA =====
684e  mov     ax,6825h                        ; segment seg2:0000
6851  push    bp                              
6852  mov     bp,sp                           
6854  push    ds                              
6855  mov     ds,ax                           
6857  push    word ptr [bp+6h]                
685a  push    2h                              
685c  push    0h                              
685e  push    1h                              
6860  mov     ax,[0B1Ah]                      
6863  or      ax,4003h                        
6866  push    ax                              
6867  call far sub_005b                       
686c  add     sp,0Ah                          
686f  pop     ds                              
6870  leave                                   
6871  retf    2h                              

; ===== TOUCHALARMOFFTIGA =====
6874  mov     ax,684Fh                        ; segment seg2:0000
6877  push    bp                              
6878  mov     bp,sp                           
687a  push    ds                              
687b  mov     ds,ax                           
687d  push    0h                              
687f  mov     ax,[0B1Ah]                      
6882  or      ax,401Ah                        
6885  push    ax                              
6886  call far sub_005b                       
688b  add     sp,4h                           
688e  pop     ds                              
688f  leave                                   
6890  retf                                    
6891  add     [bx+si],al                      

; ===== GETSCMTIGAREQUEST =====
6892  mov     ax,6875h                        ; segment seg2:0000
6895  push    bp                              
6896  mov     bp,sp                           
6898  push    ds                              
6899  mov     ds,ax                           
689b  push    word ptr [bp+8h]                
689e  push    word ptr [bp+6h]                
68a1  push    4h                              
68a3  push    81h                             
68a6  push    1h                              
68a8  mov     ax,[0B1Ah]                      
68ab  or      ax,401Bh                        
68ae  push    ax                              
68af  call far sub_006d                       
68b4  add     sp,0Ch                          
68b7  pop     ds                              
68b8  leave                                   
68b9  retf    4h                              

; ===== GETCOMMSPSUSTATUS =====
68bc  mov     ax,6893h                        ; segment seg2:0000
68bf  push    bp                              
68c0  mov     bp,sp                           
68c2  push    ds                              
68c3  mov     ds,ax                           
68c5  push    0h                              
68c7  mov     ax,[0B1Ah]                      
68ca  or      ax,401Ch                        
68cd  push    ax                              
68ce  call far sub_005b                       
68d3  add     sp,4h                           
68d6  pop     ds                              
68d7  leave                                   
68d8  retf                                    
68d9  add     [bx+si],al                      

; ===== SUSPENDVACMODULE =====
68da  mov     ax,68BDh                        ; segment seg2:0000
68dd  push    bp                              
68de  mov     bp,sp                           
68e0  push    ds                              
68e1  mov     ds,ax                           
68e3  push    0h                              
68e5  mov     ax,[0B1Ah]                      
68e8  or      ax,401Dh                        
68eb  push    ax                              
68ec  call far sub_0064                       
68f1  add     sp,4h                           
68f4  pop     ds                              
68f5  leave                                   
68f6  retf                                    
68f7  add     [bx+si],al                      

; ===== READFEVACSTATUS =====
68f8  mov     ax,68DBh                        ; segment seg2:0000
68fb  push    bp                              
68fc  mov     bp,sp                           
68fe  push    ds                              
68ff  mov     ds,ax                           
6901  push    word ptr [bp+8h]                
6904  push    word ptr [bp+6h]                
6907  push    8h                              
6909  push    81h                             
690c  push    1h                              
690e  mov     ax,[0B1Ah]                      
6911  or      ax,401Eh                        
6914  push    ax                              
6915  call far sub_006d                       
691a  add     sp,0Ch                          
691d  pop     ds                              
691e  leave                                   
691f  retf    4h                              

; ===== SUSPENDVIDMODULE =====
6922  mov     ax,24E9h                        ; segment seg2:0000
6925  push    bp                              
6926  mov     bp,sp                           
6928  push    ds                              
6929  mov     ds,ax                           
692b  push    0h                              
692d  mov     ax,[0B1Ch]                      
6930  or      ax,400Ch                        
6933  push    ax                              
6934  call far sub_0064                       
6939  add     sp,4h                           
693c  pop     ds                              
693d  leave                                   
693e  retf                                    
693f  add     [bx+si],al                      

; ===== DELVIDMODULE =====
6940  mov     ax,6923h                        ; segment seg2:0000
6943  push    bp                              
6944  mov     bp,sp                           
6946  push    ds                              
6947  mov     ds,ax                           
6949  push    word ptr [0B1Ch]                ; [ds] f32 here = 0
694d  push    2h                              
694f  push    0h                              
6951  push    1h                              
6953  push    7E63h                           
6956  call far sub_0064                       
695b  add     sp,0Ah                          
695e  pop     ds                              
695f  leave                                   
6960  retf                                    
6961  add     [bx+si],al                      

; ===== INITVIDRLM =====
6962  mov     ax,6941h                        ; segment seg2:0000
6965  push    bp                              
6966  mov     bp,sp                           
6968  push    ds                              
6969  mov     ds,ax                           
696b  push    0h                              
696d  mov     ax,[0B1Ch]                      
6970  or      ax,4001h                        
6973  push    ax                              
6974  call far sub_0064                       
6979  add     sp,4h                           
697c  pop     ds                              
697d  leave                                   
697e  retf                                    
697f  add     [bx+si],al                      

; ===== GSPCONFIGUREDETECTOR =====
6980  mov     ax,6963h                        ; segment seg2:0000
6983  push    bp                              
6984  mov     bp,sp                           
6986  push    ds                              
6987  mov     ds,ax                           
6989  push    word ptr [bp+8h]                
698c  push    word ptr [bp+6h]                
698f  push    5Ah                             
6991  push    1h                              
6993  push    1h                              
6995  mov     ax,[0B1Ch]                      
6998  or      ax,4002h                        
699b  push    ax                              
699c  call far sub_005b                       
69a1  add     sp,0Ch                          
69a4  pop     ds                              
69a5  leave                                   
69a6  retf    4h                              
69a9  add     [bx+si],al                      

; ===== GSPAUTOVIDEO =====
69aa  mov     ax,6981h                        ; segment seg2:0000
69ad  push    bp                              
69ae  mov     bp,sp                           
69b0  push    ds                              
69b1  mov     ds,ax                           
69b3  push    word ptr [bp+6h]                
69b6  push    2h                              
69b8  push    2h                              
69ba  push    1h                              
69bc  mov     ax,[0B1Ch]                      
69bf  or      ax,4003h                        
69c2  push    ax                              
69c3  call far sub_005b                       
69c8  add     sp,0Ah                          
69cb  pop     ds                              
69cc  leave                                   
69cd  retf    2h                              

; ===== GSPRELOADDETECTORS =====
69d0  mov     ax,69ABh                        ; segment seg2:0000
69d3  push    bp                              
69d4  mov     bp,sp                           
69d6  push    ds                              
69d7  mov     ds,ax                           
69d9  push    word ptr [bp+8h]                
69dc  push    word ptr [bp+6h]                
69df  push    12h                             
69e1  push    1h                              
69e3  push    1h                              
69e5  mov     ax,[0B1Ch]                      
69e8  or      ax,4004h                        
69eb  push    ax                              
69ec  call far sub_005b                       
69f1  add     sp,0Ch                          
69f4  pop     ds                              
69f5  leave                                   
69f6  retf    4h                              
69f9  add     [bx+si],al                      

; ===== GSPSETDETPSEUDOBRIGHTNESS =====
69fa  mov     ax,69D1h                        ; segment seg2:0000
69fd  push    bp                              
69fe  mov     bp,sp                           
6a00  push    ds                              
6a01  mov     ds,ax                           
6a03  push    word ptr [bp+0Ch]               
6a06  push    word ptr [bp+0Ah]               
6a09  push    word ptr [bp+8h]                
6a0c  push    word ptr [bp+6h]                
6a0f  push    8h                              
6a11  push    4h                              
6a13  push    word ptr [bp+0Eh]               
6a16  push    2h                              
6a18  push    2h                              
6a1a  push    2h                              
6a1c  mov     ax,[0B1Ch]                      
6a1f  or      ax,4005h                        
6a22  push    ax                              
6a23  call far sub_005b                       
6a28  add     sp,16h                          
6a2b  pop     ds                              
6a2c  leave                                   
6a2d  retf    0Ah                             

; ===== GSPSETBSDAUTORANGE =====
6a30  mov     ax,69FBh                        ; segment seg2:0000
6a33  push    bp                              
6a34  mov     bp,sp                           
6a36  push    ds                              
6a37  mov     ds,ax                           
6a39  push    word ptr [bp+6h]                
6a3c  push    2h                              
6a3e  push    2h                              
6a40  push    word ptr [bp+8h]                
6a43  push    2h                              
6a45  push    2h                              
6a47  push    2h                              
6a49  mov     ax,[0B1Ch]                      
6a4c  or      ax,4016h                        
6a4f  push    ax                              
6a50  call far sub_005b                       
6a55  add     sp,10h                          
6a58  pop     ds                              
6a59  leave                                   
6a5a  retf    4h                              
6a5d  add     [bx+si],al                      

; ===== GSPSETDETPSEUDOCONTRAST =====
6a5e  mov     ax,6A31h                        ; segment seg2:0000
6a61  push    bp                              
6a62  mov     bp,sp                           
6a64  push    ds                              
6a65  mov     ds,ax                           
6a67  push    word ptr [bp+0Ch]               
6a6a  push    word ptr [bp+0Ah]               
6a6d  push    word ptr [bp+8h]                
6a70  push    word ptr [bp+6h]                
6a73  push    8h                              
6a75  push    4h                              
6a77  push    word ptr [bp+0Eh]               
6a7a  push    2h                              
6a7c  push    2h                              
6a7e  push    2h                              
6a80  mov     ax,[0B1Ch]                      
6a83  or      ax,4006h                        
6a86  push    ax                              
6a87  call far sub_005b                       
6a8c  add     sp,16h                          
6a8f  pop     ds                              
6a90  leave                                   
6a91  retf    0Ah                             

; ===== GSPSETDETAUTOCONTRAST =====
6a94  mov     ax,6A5Fh                        ; segment seg2:0000
6a97  push    bp                              
6a98  mov     bp,sp                           
6a9a  push    ds                              
6a9b  mov     ds,ax                           
6a9d  push    word ptr [bp+0Ch]               
6aa0  push    word ptr [bp+0Ah]               
6aa3  push    word ptr [bp+8h]                
6aa6  push    word ptr [bp+6h]                
6aa9  push    8h                              
6aab  push    4h                              
6aad  push    word ptr [bp+0Eh]               
6ab0  push    2h                              
6ab2  push    2h                              
6ab4  push    2h                              
6ab6  mov     ax,[0B1Ch]                      
6ab9  or      ax,4007h                        
6abc  push    ax                              
6abd  call far sub_005b                       
6ac2  add     sp,16h                          
6ac5  pop     ds                              
6ac6  leave                                   
6ac7  retf    0Ah                             

; ===== GSPSETDETAUTOBRIGHTNESS =====
6aca  mov     ax,6A95h                        ; segment seg2:0000
6acd  push    bp                              
6ace  mov     bp,sp                           
6ad0  push    ds                              
6ad1  mov     ds,ax                           
6ad3  push    word ptr [bp+0Ch]               
6ad6  push    word ptr [bp+0Ah]               
6ad9  push    word ptr [bp+8h]                
6adc  push    word ptr [bp+6h]                
6adf  push    8h                              
6ae1  push    4h                              
6ae3  push    word ptr [bp+0Eh]               
6ae6  push    2h                              
6ae8  push    2h                              
6aea  push    2h                              
6aec  mov     ax,[0B1Ch]                      
6aef  or      ax,4008h                        
6af2  push    ax                              
6af3  call far sub_005b                       
6af8  add     sp,16h                          
6afb  pop     ds                              
6afc  leave                                   
6afd  retf    0Ah                             

; ===== GSPSETDETABCCONTRAST =====
6b00  mov     ax,6ACBh                        ; segment seg2:0000
6b03  push    bp                              
6b04  mov     bp,sp                           
6b06  push    ds                              
6b07  mov     ds,ax                           
6b09  push    word ptr [bp+0Ch]               
6b0c  push    word ptr [bp+0Ah]               
6b0f  push    word ptr [bp+8h]                
6b12  push    word ptr [bp+6h]                
6b15  push    8h                              
6b17  push    4h                              
6b19  push    word ptr [bp+0Eh]               
6b1c  push    2h                              
6b1e  push    2h                              
6b20  push    2h                              
6b22  mov     ax,[0B1Ch]                      
6b25  or      ax,4013h                        
6b28  push    ax                              
6b29  call far sub_005b                       
6b2e  add     sp,16h                          
6b31  pop     ds                              
6b32  leave                                   
6b33  retf    0Ah                             

; ===== GSPSETDETABCBRIGHTNESS =====
6b36  mov     ax,6B01h                        ; segment seg2:0000
6b39  push    bp                              
6b3a  mov     bp,sp                           
6b3c  push    ds                              
6b3d  mov     ds,ax                           
6b3f  push    word ptr [bp+0Ch]               
6b42  push    word ptr [bp+0Ah]               
6b45  push    word ptr [bp+8h]                
6b48  push    word ptr [bp+6h]                
6b4b  push    8h                              
6b4d  push    4h                              
6b4f  push    word ptr [bp+0Eh]               
6b52  push    2h                              
6b54  push    2h                              
6b56  push    2h                              
6b58  mov     ax,[0B1Ch]                      
6b5b  or      ax,4014h                        
6b5e  push    ax                              
6b5f  call far sub_005b                       
6b64  add     sp,16h                          
6b67  pop     ds                              
6b68  leave                                   
6b69  retf    0Ah                             

; ===== READGSPVIDEOLEVELDATA =====
6b6c  mov     ax,6B37h                        ; segment seg2:0000
6b6f  enter   20h,0h                          
6b73  push    di                              
6b74  push    si                              
6b75  push    ds                              
6b76  mov     ds,ax                           
6b78  lea     cx,[bp-20h]                     
6b7b  push    ss                              
6b7c  push    cx                              
6b7d  push    20h                             
6b7f  push    81h                             
6b82  push    word ptr [bp+8h]                
6b85  push    2h                              
6b87  push    2h                              
6b89  push    2h                              
6b8b  mov     dx,[0B1Ch]                      
6b8f  or      dx,4009h                        
6b93  push    dx                              
6b94  call far sub_006d                       
6b99  add     sp,12h                          
6b9c  mov     bx,[bp+6h]                      
6b9f  push    ds                              
6ba0  mov     di,bx                           
6ba2  lea     si,[bp-20h]                     
6ba5  mov     ax,ss                           
6ba7  mov     es,ax                           
6ba9  mov     ds,ax                           
6bab  mov     cx,10h                          
6bae  rep     movsw                           
6bb0  pop     ds                              
6bb1  mov     ax,bx                           
6bb3  mov     dx,ss                           
6bb5  pop     ds                              
6bb6  pop     si                              
6bb7  pop     di                              
6bb8  leave                                   
6bb9  retf    4h                              

; ===== GSPUPDATEDETSFROMZONES =====
6bbc  mov     ax,6B6Dh                        ; segment seg2:0000
6bbf  push    bp                              
6bc0  mov     bp,sp                           
6bc2  push    ds                              
6bc3  mov     ds,ax                           
6bc5  push    word ptr [bp+8h]                
6bc8  push    word ptr [bp+6h]                
6bcb  push    8h                              
6bcd  push    1h                              
6bcf  push    1h                              
6bd1  mov     ax,[0B1Ch]                      
6bd4  or      ax,400Ah                        
6bd7  push    ax                              
6bd8  call far sub_005b                       
6bdd  add     sp,0Ch                          
6be0  pop     ds                              
6be1  leave                                   
6be2  retf    4h                              
6be5  add     [bx+si],al                      

; ===== GSPSELECTDETVIDEOLEVELCNTL =====
6be6  mov     ax,6BBDh                        ; segment seg2:0000
6be9  push    bp                              
6bea  mov     bp,sp                           
6bec  push    ds                              
6bed  mov     ds,ax                           
6bef  push    word ptr [bp+6h]                
6bf2  push    2h                              
6bf4  push    2h                              
6bf6  push    word ptr [bp+8h]                
6bf9  push    2h                              
6bfb  push    2h                              
6bfd  push    2h                              
6bff  mov     ax,[0B1Ch]                      
6c02  or      ax,400Bh                        
6c05  push    ax                              
6c06  call far sub_005b                       
6c0b  add     sp,10h                          
6c0e  pop     ds                              
6c0f  leave                                   
6c10  retf    4h                              
6c13  add     [bx+si],al                      

; ===== GSPVISIBLEZONES =====
6c14  mov     ax,6BE7h                        ; segment seg2:0000
6c17  push    bp                              
6c18  mov     bp,sp                           
6c1a  push    ds                              
6c1b  mov     ds,ax                           
6c1d  push    word ptr [bp+8h]                
6c20  push    word ptr [bp+6h]                
6c23  push    8h                              
6c25  push    1h                              
6c27  push    1h                              
6c29  mov     ax,[0B1Ch]                      
6c2c  or      ax,400Dh                        
6c2f  push    ax                              
6c30  call far sub_005b                       
6c35  add     sp,0Ch                          
6c38  pop     ds                              
6c39  leave                                   
6c3a  retf    4h                              
6c3d  add     [bx+si],al                      

; ===== GSPAUTOVIDEOSUSPEND =====
6c3e  mov     ax,6C15h                        ; segment seg2:0000
6c41  push    bp                              
6c42  mov     bp,sp                           
6c44  push    ds                              
6c45  mov     ds,ax                           
6c47  push    word ptr [bp+6h]                
6c4a  push    2h                              
6c4c  push    2h                              
6c4e  push    1h                              
6c50  mov     ax,[0B1Ch]                      
6c53  or      ax,400Eh                        
6c56  push    ax                              
6c57  call far sub_005b                       
6c5c  add     sp,0Ah                          
6c5f  pop     ds                              
6c60  leave                                   
6c61  retf    2h                              

; ===== GSPGETAUTOLEVELSTAT =====
6c64  mov     ax,6C3Fh                        ; segment seg2:0000
6c67  push    bp                              
6c68  mov     bp,sp                           
6c6a  push    ds                              
6c6b  mov     ds,ax                           
6c6d  push    word ptr [bp+8h]                
6c70  push    word ptr [bp+6h]                
6c73  push    8h                              
6c75  push    81h                             
6c78  push    1h                              
6c7a  mov     ax,[0B1Ch]                      
6c7d  or      ax,400Fh                        
6c80  push    ax                              
6c81  call far sub_006d                       
6c86  add     sp,0Ch                          
6c89  pop     ds                              
6c8a  leave                                   
6c8b  retf    4h                              

; ===== GSPFINDAUTOLEVEL =====
6c8e  mov     ax,6C65h                        ; segment seg2:0000
6c91  push    bp                              
6c92  mov     bp,sp                           
6c94  push    ds                              
6c95  mov     ds,ax                           
6c97  push    word ptr [bp+8h]                
6c9a  push    word ptr [bp+6h]                
6c9d  push    12h                             
6c9f  push    1h                              
6ca1  push    1h                              
6ca3  mov     ax,[0B1Ch]                      
6ca6  or      ax,4010h                        
6ca9  push    ax                              
6caa  call far sub_005b                       
6caf  add     sp,0Ch                          
6cb2  pop     ds                              
6cb3  leave                                   
6cb4  retf    4h                              
6cb7  add     [bx+si],al                      

; ===== GSPDOABC =====
6cb8  mov     ax,6C8Fh                        ; segment seg2:0000
6cbb  push    bp                              
6cbc  mov     bp,sp                           
6cbe  push    ds                              
6cbf  mov     ds,ax                           
6cc1  push    word ptr [bp+8h]                
6cc4  push    word ptr [bp+6h]                
6cc7  push    12h                             
6cc9  push    1h                              
6ccb  push    1h                              
6ccd  mov     ax,[0B1Ch]                      
6cd0  or      ax,4012h                        
6cd3  push    ax                              
6cd4  call far sub_005b                       
6cd9  add     sp,0Ch                          
6cdc  pop     ds                              
6cdd  leave                                   
6cde  retf    4h                              
6ce1  add     [bx+si],al                      

; ===== GSPSET4QBSDTYPE =====
6ce2  mov     ax,6CB9h                        ; segment seg2:0000
6ce5  push    bp                              
6ce6  mov     bp,sp                           
6ce8  push    ds                              
6ce9  mov     ds,ax                           
6ceb  push    word ptr [bp+6h]                
6cee  push    2h                              
6cf0  push    2h                              
6cf2  push    1h                              
6cf4  mov     ax,[0B1Ch]                      
6cf7  or      ax,4011h                        
6cfa  push    ax                              
6cfb  call far sub_005b                       
6d00  add     sp,0Ah                          
6d03  pop     ds                              
6d04  leave                                   
6d05  retf    2h                              

; ===== GSPSETBSDCAL =====
6d08  mov     ax,6CE3h                        ; segment seg2:0000
6d0b  push    bp                              
6d0c  mov     bp,sp                           
6d0e  push    ds                              
6d0f  mov     ds,ax                           
6d11  push    word ptr [bp+0Ch]               
6d14  push    word ptr [bp+0Ah]               
6d17  push    word ptr [bp+8h]                
6d1a  push    word ptr [bp+6h]                
6d1d  push    8h                              
6d1f  push    4h                              
6d21  push    1h                              
6d23  mov     ax,[0B1Ch]                      
6d26  or      ax,4015h                        
6d29  push    ax                              
6d2a  call far sub_005b                       
6d2f  add     sp,10h                          
6d32  pop     ds                              
6d33  leave                                   
6d34  retf    8h                              
6d37  nop                                     

; ===== FIELDEXTRACT =====
6d38  mov     ax,6D09h                        ; segment seg2:0000
6d3b  push    bp                              
6d3c  mov     bp,sp                           
6d3e  push    ds                              
6d3f  mov     ds,ax                           
6d41  push    word ptr [bp+6h]                
6d44  push    word ptr [bp+0Ah]               
6d47  push    word ptr [bp+8h]                
6d4a  call far sub_00bf                       
6d4f  add     sp,6h                           
6d52  pop     ds                              
6d53  leave                                   
6d54  retf    6h                              
6d57  add     [bx+si],al                      

; ===== FIELDINSERT =====
6d58  mov     ax,6D39h                        ; segment seg2:0000
6d5b  push    bp                              
6d5c  mov     bp,sp                           
6d5e  push    ds                              
6d5f  mov     ds,ax                           
6d61  push    word ptr [bp+8h]                
6d64  push    word ptr [bp+6h]                
6d67  push    word ptr [bp+0Ah]               
6d6a  push    word ptr [bp+0Eh]               
6d6d  push    word ptr [bp+0Ch]               
6d70  call far sub_00b6                       
6d75  add     sp,0Ah                          
6d78  pop     ds                              
6d79  leave                                   
6d7a  retf    0Ah                             
6d7d  add     [bx+si],al                      

; ===== FLUSHMODULE =====
6d7e  mov     ax,6D59h                        ; segment seg2:0000
6d81  push    bp                              
6d82  mov     bp,sp                           
6d84  push    ds                              
6d85  mov     ds,ax                           
6d87  push    word ptr [bp+6h]                
6d8a  push    2h                              
6d8c  push    0h                              
6d8e  push    1h                              
6d90  push    7E63h                           
6d93  call far sub_0064                       
6d98  add     sp,0Ah                          
6d9b  pop     ds                              
6d9c  leave                                   
6d9d  retf    2h                              

; ===== GETFONTINFO =====
6da0  mov     ax,6D7Fh                        ; segment seg2:0000
6da3  push    bp                              
6da4  mov     bp,sp                           
6da6  push    ds                              
6da7  mov     ds,ax                           
6da9  push    word ptr [bp+8h]                
6dac  push    word ptr [bp+6h]                
6daf  push    3Ah                             
6db1  push    81h                             
6db4  push    word ptr [bp+0Ah]               
6db7  push    2h                              
6db9  push    2h                              
6dbb  push    2h                              
6dbd  push    7E41h                           
6dc0  call far sub_006d                       
6dc5  add     sp,12h                          
6dc8  pop     ds                              
6dc9  leave                                   
6dca  retf    6h                              
6dcd  add     [bx+si],al                      

; ===== GETISRPRIOR =====
6dce  mov     ax,6DA1h                        ; segment seg2:0000
6dd1  push    bp                              
6dd2  mov     bp,sp                           
6dd4  push    si                              
6dd5  push    ds                              
6dd6  mov     ds,ax                           
6dd8  mov     si,[bp+0Ah]                     
6ddb  push    word ptr [bp+8h]                
6dde  push    word ptr [bp+6h]                
6de1  mov     ax,si                           
6de3  add     si,si                           
6de5  push    si                              
6de6  push    81h                             
6de9  push    ax                              
6dea  push    2h                              
6dec  push    0h                              
6dee  push    2h                              
6df0  push    7E33h                           
6df3  call far sub_006d                       
6df8  add     sp,12h                          
6dfb  pop     ds                              
6dfc  pop     si                              
6dfd  leave                                   
6dfe  retf    6h                              
6e01  add     [bx+si],al                      

; ===== GSPMALLOC =====
6e02  mov     ax,6DCFh                        ; segment seg2:0000
6e05  push    bp                              
6e06  mov     bp,sp                           
6e08  push    ds                              
6e09  mov     ds,ax                           
6e0b  push    word ptr [bp+8h]                
6e0e  push    word ptr [bp+6h]                
6e11  push    4h                              
6e13  push    0h                              
6e15  push    1h                              
6e17  push    7E0Fh                           
6e1a  call far sub_0064                       
6e1f  add     sp,0Ch                          
6e22  pop     ds                              
6e23  leave                                   
6e24  retf    4h                              
6e27  add     [bx+si],al                      

; ===== GSPMAXHEAP =====
6e28  mov     ax,6E03h                        ; segment seg2:0000
6e2b  push    bp                              
6e2c  mov     bp,sp                           
6e2e  push    ds                              
6e2f  mov     ds,ax                           
6e31  push    0h                              
6e33  push    7E06h                           
6e36  call far sub_0064                       
6e3b  add     sp,4h                           
6e3e  pop     ds                              
6e3f  leave                                   
6e40  retf                                    
6e41  add     [bx+si],al                      

; ===== GSPTOGSP =====
6e42  mov     ax,6E29h                        ; segment seg2:0000
6e45  push    bp                              
6e46  mov     bp,sp                           
6e48  push    ds                              
6e49  mov     ds,ax                           
6e4b  push    word ptr [bp+8h]                
6e4e  push    word ptr [bp+6h]                
6e51  push    word ptr [bp+0Ch]               
6e54  push    word ptr [bp+0Ah]               
6e57  push    word ptr [bp+10h]               
6e5a  push    word ptr [bp+0Eh]               
6e5d  push    6h                              
6e5f  push    3E1Eh                           
6e62  call far sub_001c                       
6e67  add     sp,10h                          
6e6a  pop     ds                              
6e6b  leave                                   
6e6c  retf    0Ch                             
6e6f  add     [bx+si],al                      

; ===== GSPTOHOST =====
6e70  mov     ax,6E43h                        ; segment seg2:0000
6e73  push    bp                              
6e74  mov     bp,sp                           
6e76  push    ds                              
6e77  mov     ds,ax                           
6e79  push    word ptr [bp+6h]                
6e7c  push    word ptr [bp+8h]                
6e7f  push    word ptr [bp+0Ch]               
6e82  push    word ptr [bp+0Ah]               
6e85  push    word ptr [bp+10h]               
6e88  push    word ptr [bp+0Eh]               
6e8b  call far sub_009a                       
6e90  add     sp,0Ch                          
6e93  pop     ds                              
6e94  leave                                   
6e95  retf    0Ch                             

; ===== GSPTOHOSTXY =====
6e98  mov     ax,6E71h                        ; segment seg2:0000
6e9b  push    bp                              
6e9c  mov     bp,sp                           
6e9e  push    ds                              
6e9f  mov     ds,ax                           
6ea1  push    word ptr [bp+6h]                
6ea4  push    word ptr [bp+8h]                
6ea7  push    word ptr [bp+0Ah]               
6eaa  push    word ptr [bp+0Ch]               
6ead  push    word ptr [bp+0Eh]               
6eb0  push    word ptr [bp+10h]               
6eb3  push    word ptr [bp+12h]               
6eb6  push    word ptr [bp+14h]               
6eb9  push    word ptr [bp+18h]               
6ebc  push    word ptr [bp+16h]               
6ebf  push    word ptr [bp+1Ch]               
6ec2  push    word ptr [bp+1Ah]               
6ec5  push    word ptr [bp+20h]               
6ec8  push    word ptr [bp+1Eh]               
6ecb  push    word ptr [bp+24h]               
6ece  push    word ptr [bp+22h]               
6ed1  call far sub_00ac                       
6ed6  add     sp,20h                          
6ed9  pop     ds                              
6eda  leave                                   
6edb  retf    20h                             

; ===== HOSTTOGSP =====
6ede  mov     ax,6E99h                        ; segment seg2:0000
6ee1  push    bp                              
6ee2  mov     bp,sp                           
6ee4  push    ds                              
6ee5  mov     ds,ax                           
6ee7  push    word ptr [bp+6h]                
6eea  push    word ptr [bp+8h]                
6eed  push    word ptr [bp+0Ch]               
6ef0  push    word ptr [bp+0Ah]               
6ef3  push    word ptr [bp+10h]               
6ef6  push    word ptr [bp+0Eh]               
6ef9  call far sub_0091                       
6efe  add     sp,0Ch                          
6f01  pop     ds                              
6f02  leave                                   
6f03  retf    0Ch                             

; ===== HOSTTOGSPXY =====
6f06  mov     ax,6EDFh                        ; segment seg2:0000
6f09  push    bp                              
6f0a  mov     bp,sp                           
6f0c  push    ds                              
6f0d  mov     ds,ax                           
6f0f  push    word ptr [bp+6h]                
6f12  push    word ptr [bp+8h]                
6f15  push    word ptr [bp+0Ah]               
6f18  push    word ptr [bp+0Ch]               
6f1b  push    word ptr [bp+0Eh]               
6f1e  push    word ptr [bp+10h]               
6f21  push    word ptr [bp+12h]               
6f24  push    word ptr [bp+14h]               
6f27  push    word ptr [bp+18h]               
6f2a  push    word ptr [bp+16h]               
6f2d  push    word ptr [bp+1Ch]               
6f30  push    word ptr [bp+1Ah]               
6f33  push    word ptr [bp+20h]               
6f36  push    word ptr [bp+1Eh]               
6f39  push    word ptr [bp+24h]               
6f3c  push    word ptr [bp+22h]               
6f3f  call far sub_00a3                       
6f44  add     sp,20h                          
6f47  pop     ds                              
6f48  leave                                   
6f49  retf    20h                             

; ===== PAGEFLIP =====
6f4c  mov     ax,2533h                        ; segment seg2:0000
6f4f  push    bp                              
6f50  mov     bp,sp                           
6f52  push    ds                              
6f53  mov     ds,ax                           
6f55  push    word ptr [bp+6h]                
6f58  push    2h                              
6f5a  push    0h                              
6f5c  push    word ptr [bp+8h]                
6f5f  push    2h                              
6f61  push    0h                              
6f63  push    2h                              
6f65  push    7E15h                           
6f68  call far sub_005b                       
6f6d  add     sp,10h                          
6f70  pop     ds                              
6f71  leave                                   
6f72  retf    4h                              
6f75  add     [bx+si],al                      

; ===== PEEKBREG =====
6f76  mov     ax,6F4Dh                        ; segment seg2:0000
6f79  push    bp                              
6f7a  mov     bp,sp                           
6f7c  push    ds                              
6f7d  mov     ds,ax                           
6f7f  push    word ptr [bp+6h]                
6f82  push    1h                              
6f84  push    3E22h                           
6f87  call far sub_00e3                       
6f8c  add     sp,6h                           
6f8f  pop     ds                              
6f90  leave                                   
6f91  retf    2h                              

; ===== POKEBREG =====
6f94  mov     ax,6F77h                        ; segment seg2:0000
6f97  push    bp                              
6f98  mov     bp,sp                           
6f9a  push    ds                              
6f9b  mov     ds,ax                           
6f9d  push    word ptr [bp+8h]                
6fa0  push    word ptr [bp+6h]                
6fa3  push    word ptr [bp+0Ah]               
6fa6  push    3h                              
6fa8  push    3E23h                           
6fab  call far sub_001c                       
6fb0  add     sp,0Ah                          
6fb3  pop     ds                              
6fb4  leave                                   
6fb5  retf    6h                              

; ===== SETINTERRUPT =====
6fb8  mov     ax,6F95h                        ; segment seg2:0000
6fbb  push    bp                              
6fbc  mov     bp,sp                           
6fbe  push    ds                              
6fbf  mov     ds,ax                           
6fc1  push    word ptr [bp+6h]                
6fc4  push    2h                              
6fc6  push    2h                              
6fc8  push    word ptr [bp+8h]                
6fcb  push    2h                              
6fcd  push    0h                              
6fcf  push    word ptr [bp+0Ah]               
6fd2  push    2h                              
6fd4  push    0h                              
6fd6  push    word ptr [bp+0Ch]               
6fd9  push    2h                              
6fdb  push    0h                              
6fdd  push    4h                              
6fdf  push    7E28h                           
6fe2  call far sub_0064                       
6fe7  add     sp,1Ch                          
6fea  pop     ds                              
6feb  leave                                   
6fec  retf    8h                              
6fef  nop                                     

; ===== DELETEFONT =====
6ff0  mov     ax,6FB9h                        ; segment seg2:0000
6ff3  push    bp                              
6ff4  mov     bp,sp                           
6ff6  push    ds                              
6ff7  mov     ds,ax                           
6ff9  push    word ptr [bp+6h]                
6ffc  push    2h                              
6ffe  push    0h                              
7000  push    1h                              
7002  push    7C34h                           
7005  call far sub_0064                       
700a  add     sp,0Ah                          
700d  pop     ds                              
700e  leave                                   
700f  retf    2h                              

; ===== INSTALLFONT =====
7012  mov     ax,6FF1h                        ; segment seg2:0000
7015  push    bp                              
7016  mov     bp,sp                           
7018  push    ds                              
7019  mov     ds,ax                           
701b  push    word ptr [bp+8h]                
701e  push    word ptr [bp+6h]                
7021  push    4h                              
7023  push    0h                              
7025  push    1h                              
7027  push    7C32h                           
702a  call far sub_0064                       
702f  add     sp,0Ch                          
7032  pop     ds                              
7033  leave                                   
7034  retf    4h                              
7037  add     [bx+si],al                      

; ===== SELECTFONT =====
7038  mov     ax,7013h                        ; segment seg2:0000
703b  push    bp                              
703c  mov     bp,sp                           
703e  push    ds                              
703f  mov     ds,ax                           
7041  push    word ptr [bp+6h]                
7044  push    2h                              
7046  push    0h                              
7048  push    1h                              
704a  push    7C33h                           
704d  call far sub_0064                       
7052  add     sp,0Ah                          
7055  pop     ds                              
7056  leave                                   
7057  retf    2h                              

; ===== TEXTWIDTH =====
705a  mov     ax,7039h                        ; segment seg2:0000
705d  push    bp                              
705e  mov     bp,sp                           
7060  push    ds                              
7061  mov     ds,ax                           
7063  push    word ptr [bp+8h]                
7066  push    word ptr [bp+6h]                
7069  push    0h                              
706b  push    41h                             
706d  push    1h                              
706f  push    7C37h                           
7072  call far sub_0064                       
7077  add     sp,0Ch                          
707a  pop     ds                              
707b  leave                                   
707c  retf    4h                              
707f  nop                                     

; ----- sub_7080 -----
7080  mov     ax,705Bh                        ; segment seg2:0000
7083  enter   4h,0h                           
7087  push    ds                              
7088  mov     ds,ax                           
708a  cmp     word ptr [bp+0Ah],0h            
708e  je      7097h                           
7090  push    -1h                             
7092  call far KERNEL.UNLOCKSEGMENT           
7097  mov     ax,[bp+0Eh]                     
709a  mov     [10h],ax                        
709d  sub     ax,ax                           
709f  mov     [bp-2h],ax                      
70a2  mov     [bp-4h],ax                      
70a5  cmp     word ptr [bp-2h],0h             
70a9  jg      70E2h                           
70ab  jl      70B3h                           
70ad  cmp     word ptr [bp-4h],10h            
70b1  jae     70E2h                           
70b3  mov     bx,[bp-4h]                      
70b6  shl     bx,2h                           
70b9  sub     ah,ah                           
70bb  mov     al,[bx+113h]                    
70bf  mov     cl,[bx+114h]                    
70c3  sub     ch,ch                           
70c5  add     ax,cx                           
70c7  mov     cl,[bx+112h]                    
70cb  add     ax,cx                           
70cd  mov     cx,3h                           
70d0  cwd                                     
70d1  idiv    cx                              
70d3  mov     [bx+115h],al                    
70d7  add     word ptr [bp-4h],1h             
70db  adc     word ptr [bp-2h],0h             
70df  jmp     70A5h                           
70e1  nop                                     
70e2  push    ds                              
70e3  push    152h                            
70e6  push    80h                             
70e9  call far KERNEL.GETWINDOWSDIRECTORY     
70ee  or      ax,ax                           
70f0  je      7114h                           
70f2  push    ds                              
70f3  push    152h                            
70f6  call far KERNEL.LSTRLEN                 
70fb  mov     bx,ax                           
70fd  cmp     byte ptr [bx+151h],5Ch          
7102  je      7121h                           
7104  push    ds                              
7105  push    152h                            
7108  push    ds                              
7109  push    742h                            
710c  call far KERNEL.LSTRCAT                 
7111  jmp     7121h                           
7113  nop                                     
7114  push    ds                              
7115  push    152h                            
7118  push    ds                              
7119  push    744h                            
711c  call far KERNEL.LSTRCPY                 
7121  push    ds                              
7122  push    1D2h                            
7125  push    80h                             
7128  call far KERNEL.GETSYSTEMDIRECTORY      
712d  or      ax,ax                           
712f  je      7152h                           
7131  push    ds                              
7132  push    1D2h                            
7135  call far KERNEL.LSTRLEN                 
713a  mov     bx,ax                           
713c  cmp     byte ptr [bx+1D1h],5Ch          
7141  je      715Fh                           
7143  push    ds                              
7144  push    1D2h                            
7147  push    ds                              
7148  push    742h                            
714b  call far KERNEL.LSTRCAT                 
7150  jmp     715Fh                           
7152  push    ds                              
7153  push    1D2h                            
7156  push    ds                              
7157  push    750h                            
715a  call far KERNEL.LSTRCPY                 
715f  mov     ax,1h                           
7162  pop     ds                              
7163  leave                                   
7164  retf    0Ah                             
7167  add     [bx+si],al                      

; ===== WEP =====
7168  mov     ax,7081h                        ; segment seg2:0000
716b  push    bp                              
716c  mov     bp,sp                           
716e  push    ds                              
716f  mov     ds,ax                           
7171  cmp     word ptr [bp+6h],1h             
7175  jne     717Ch                           
7177  call far TERMINATETIGA                  
717c  mov     ax,1h                           
717f  pop     ds                              
7180  leave                                   
7181  retf    2h                              

; ===== TERMINATETIGA =====
7184  mov     ax,2559h                        ; segment seg2:0000
7187  push    bp                              
7188  mov     bp,sp                           
718a  push    ds                              
718b  mov     ds,ax                           
718d  push    0h                              
718f  push    1h                              
7191  call far sub_00e3                       
7196  add     sp,4h                           
7199  call far KERNEL.GETWINFLAGS             
719e  and     ax,1h                           
71a1  push    ax                              
71a2  push    8000h                           
71a5  push    0h                              
71a7  call far sub_039c                       
71ac  add     sp,6h                           
71af  pop     ds                              
71b0  leave                                   
71b1  retf                                    

; ===== TUNEPCTOTIGA =====
71b2  mov     ax,7185h                        ; segment seg2:0000
71b5  push    bp                              
71b6  mov     bp,sp                           
71b8  push    di                              
71b9  push    si                              
71ba  push    ds                              
71bb  mov     ds,ax                           
71bd  mov     di,[bp+8h]                      
71c0  mov     si,[bp+6h]                      
71c3  push    0C000h                          
71c6  push    310h                            
71c9  push    10h                             
71cb  push    0h                              
71cd  push    di                              
71ce  call far FIELDINSERT                    
71d3  push    0C000h                          
71d6  push    300h                            
71d9  push    10h                             
71db  push    0h                              
71dd  push    si                              
71de  call far FIELDINSERT                    
71e3  push    ds                              
71e4  push    252h                            
71e7  push    ds                              
71e8  push    152h                            
71eb  call far KERNEL.LSTRCPY                 
71f0  push    ds                              
71f1  push    252h                            
71f4  push    ds                              
71f5  push    770h                            
71f8  call far KERNEL.LSTRCAT                 
71fd  push    di                              
71fe  push    ds                              
71ff  push    790h                            
7202  push    ds                              
7203  push    352h                            
7206  call far USER._WSPRINTF                 
720b  add     sp,0Ah                          
720e  push    ds                              
720f  push    780h                            
7212  push    ds                              
7213  push    77Ah                            
7216  push    ds                              
7217  push    352h                            
721a  push    ds                              
721b  push    252h                            
721e  call far KERNEL.WRITEPRIVATEPROFILESTRING
7223  push    si                              
7224  push    ds                              
7225  push    790h                            
7228  push    ds                              
7229  push    352h                            
722c  call far USER._WSPRINTF                 
7231  add     sp,0Ah                          
7234  push    ds                              
7235  push    780h                            
7238  push    ds                              
7239  push    78Ah                            
723c  push    ds                              
723d  push    352h                            
7240  push    ds                              
7241  push    252h                            
7244  call far KERNEL.WRITEPRIVATEPROFILESTRING
7249  pop     ds                              
724a  pop     si                              
724b  pop     di                              
724c  leave                                   
724d  retf    4h                              

; ===== READHCNT =====
7250  mov     ax,71B3h                        ; segment seg2:0000
7253  push    bp                              
7254  mov     bp,sp                           
7256  push    ds                              
7257  mov     ds,ax                           
7259  push    0C000h                          
725c  push    310h                            
725f  push    10h                             
7261  call far FIELDEXTRACT                   
7266  pop     ds                              
7267  leave                                   
7268  retf                                    
7269  add     [bx+si],al                      

; ===== READVCNT =====
726a  mov     ax,7251h                        ; segment seg2:0000
726d  push    bp                              
726e  mov     bp,sp                           
7270  push    ds                              
7271  mov     ds,ax                           
7273  push    0C000h                          
7276  push    300h                            
7279  push    10h                             
727b  call far FIELDEXTRACT                   
7280  pop     ds                              
7281  leave                                   
7282  retf                                    
