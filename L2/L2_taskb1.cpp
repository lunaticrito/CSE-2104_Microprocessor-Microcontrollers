
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

mov ax,0010h
mov bx,0020h
mul bx

mov cx,0005h
div cx

mov si,ax

mov ax,0005h
mov bx,0010h
mul bx

mov cx,0005h
div cx

mov bx,dx

mov ax,si
sub ax,bx


ret




