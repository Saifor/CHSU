CODE SEGMENT
    ORG 100h
    ASSUME CS:CODE  
START:
    MOV DX, d
    NOT DX
    
    MOV AX, a
    OR AX, 2
    
    MOV BX, b
    XOR BX, 3
    
    SUB AX, BX
    
    
            
    
a DW 12   
b DW 4
c DW 4
d DW 2
CODE ENDS
END START
