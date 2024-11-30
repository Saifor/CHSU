.stack 100h
.data
savecs dw 0
saveip dw 0

message1 db 'Enter N: $'
message2 db 'Enter j: $'
message3 db 'Summ = $'
j DW 0
N Db 0
i dw 1
ml dw 7
res DW 0
negative DB 0

.code
start:

mov ax,@data
mov ds,ax
mov ax,3h
int 10h

call vvod
callvvod:

mov ah,35h
mov al,60h
int 21h
mov savecs,es
mov saveip,bx

push ds
mov dx,offset summa
mov ax,seg summa
mov ds,ax
mov ah,25h
mov al,60h
int 21h
pop ds
int 60h

push ds
mov dx,savecs
mov ax,saveip
mov ds,ax
mov ah,25h
mov al,60h
int 21h
pop ds

call vivod

vvod:
mov ah,09h
mov dx,offset message2
int 21h
mov ch,'0'
mov ah, 01
mov cl,13
cycle:
int 21h
cmp al,cl
je end_cikl
cmp al,45
jne minus
mov negative,1
jmp cycle
minus:mov bl, al
sub bl, 48
mov ax, 10
mov ah,00h
imul j
add ax,bx
mov j,ax
mov ah,1h
jmp cycle
end_cikl:
mov al,negative
cmp al,0
je minus2
neg j
minus2:

mov dl,10
mov ah,2h
int 21h
mov ah,09h
mov dx,offset message1
int 21h 
mov ch,'0'
mov ah,01
mov cl,13
cycle1:
int 21h 
cmp al,cl,
je end_cycle1
mov bl,al
sub bl,48
mov ax,10
mov ah,00h
imul N
add ax,bx
mov N,al8
mov ah,1h
jmp cycle1
end_cycle1:
jmp callvvod

summa proc far
mov CX,0
mov Cl,N

L:mov ax,i
imul ml
mov BX, j
inc BX
CWD
IDIV BX
add i,1
add res, ax
loop L
exit:
iret
summa endp

vivod:
mov dl,10
mov ah,2h
int 21h
mov dl,13
int 21h
mov ah,09h
mov dx,offset message3
int 21h
mov bx,res
cmp bx, 1000000000000000b
jb minus3
mov dl,45
mov ah,2h
int 21h
neg bx
minus3:
mov ax,bx
call print_ax
jmp exit2
print_ax proc
cmp ax, 0
jne print_ax_r
push ax
mov al, '0'
mov ah, 0eh
int 10h
pop ax
ret
print_ax_r:
pusha
mov dx, 0
cmp ax, 0
je pn_done
mov bx, 10
div bx
call print_ax_r
mov ax, dx
add al, 30h
mov ah, 0eh
int 10h
jmp pn_done
pn_done:
popa
ret
endp
exit2:

mov ax,0
int 21h
end start