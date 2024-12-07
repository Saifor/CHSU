CODE SEGMENT
	ASSUME CS:CODE
	ORG 100H
Start:	
    MOV AX, A
    SUB AX, 4
    MOV BX, B
    MOV CX, C
    ADD BX,CX
    IDIV BX 
    MOV DX, D
    SUB AX,DX 
    
    MOV AX, 4C00h
    INT 21h 
    
	A dd 14
	B dd 3
	C dd 2
	D dd 1
CODE ENDS
	END Start
