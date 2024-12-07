CODE SEGMENT  
	ASSUME CS:CODE
	ORG 100H
Start:	
       
MOV CL, a
MOV BL, b
CMP BL, CL
JAE moreb
     
MOV AL, c
CMP AL, CL
JAE morec
 
MOV d, CL
MOV CL, d
ret
 
moreb:
MOV d, BL
MOV CL, d
ret
   
morec:
MOV d, AH
MOV CL, d
ret


a	DB	9			
b	DB  11	
c	DB	1		
d	DB	?

CODE ENDS
END Start                                                            