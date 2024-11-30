CODE SEGMENT        ;    (a - b * (c - d)) / 4
	ASSUME CS:CODE
	ORG 100H
Start:	
MOV AL, c
SUB AL, d
			
MOV AH, b
IMUL AH	
		        
SUB AL, a 
 
MOV CL, 4  
DIV CL
			
MOV AX, 4C00h		
INT 21h		

a	DB	8			
b	DB  4	
c	DB	17		
d	DB	16	

CODE ENDS
	END Start