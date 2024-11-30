CODE SEGMENT
    ORG 100h
    ASSUME CS:CODE  
START:
    MOV CX, c
    ADD CX, 2
    
    MOV AX, a
    MOV BX, b
    SUB AX,BX
    
    IDIV CX
    
    MOV DX, d
    IMUL DX 
    
a DW -23  
b DW -13
c DW 0         
d DW 4
CODE ENDS
END START