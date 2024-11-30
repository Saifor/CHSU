CODE SEGMENT
	ASSUME CS:CODE
	ORG 100H
Start:	
MOV Ax,3;ax=3
MOV Bx,b;bx=b
iMul bx; AX= ax*bx
sub ax, c; ax=ax-c
mov bx,ax; bx=ax
mov ax, a; ax=a
idiv bx; ax/bx
mov bx,ax;
mov ax,d;
add ax,bx;
mov ax, 4C00h;
int 21h;
;--------------------
b dw 2 
c dw 1
a dw 9
d dw 5
CODE ENDS
	END Start