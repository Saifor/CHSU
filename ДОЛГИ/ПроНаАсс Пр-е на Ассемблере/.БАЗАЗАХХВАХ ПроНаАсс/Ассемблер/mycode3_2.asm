CODE SEGMENT  
	ASSUME CS:CODE
	ORG 100H
Start:	
       
MOV AX, a
MOV BX, b
MOV CX, c

CMP AX, BX
JAE morea
     
CMP BX, CX
JAE moreb

CMP CX, AX
JAE morec
  
morea: 
MOV DH, 4
IMUL DH
MOV a, AX
MOV AX, BX
DIV c 
ret  
  
moreb:

ret
   
morec:

ret


a	DW	15			
b	DW  8	
c	DW	2		
f	DW	?

CODE ENDS
END Start                                                            