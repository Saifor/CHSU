CODE SEGMENT	
	ASSUME DS:CODE   ; 5.	(a - 4) / (b + c) - d
	ORG 100h
Start:				
	MOV AX, a		 ; AX = 14
	SUB AX, 4 		; AX = 14 - 4
    
    	
	MOV BX, b		 ; BX = 2
	ADD BX, c 		; BX = 2 + c(3) 
	   
	   
	IDIV BX   		 ; AX / BX  ; 10/5 ; AX = 2
	
	SUB AX, d 		; AX - d(1)
	
			
a DW 14
b DW 2
c DW 3
d DW 1     

CODE ENDS
	END Start
