CODE SEGMENT  
	ASSUME CS:CODE
	ORG 100H
Start:	

MOV AL, a
NOT AL
CBW 
MOV BX, AX
XOR AX, AX

MOV AL, b
XOR AL, 6

MOV CL, c
AND CL, 9

MOV CH, d
OR CH, 8
SUB CL, CH

IMUL CL

SUB BX, AX

MOV AX, BX
DIV e

a	DB	-2			
b	DB  5	
c	DB	9		
d	DB	1
e	DB	4	

CODE ENDS
END Start                                                            