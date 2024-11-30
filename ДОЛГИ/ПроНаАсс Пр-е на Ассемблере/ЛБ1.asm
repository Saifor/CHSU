CODE SEGMENT
ASSUME CS:CODE
ORG 100H
Start:    

;--------------
;13. (a - b * (c - d)) / 4
;--------------

;(c-d)
MOV AX, c
SUB AX, d
;b*(c-d)
MOV BX, b
IMUL BX
;(a-b*(c-d))
MOV BX, a
SUB BX, AX
MOV AX, BX
;/4    
MOV BX, 4
IDIV BX
 
MOV AX, 4C00h
INT 21h

;--------------
                                                           
A DW 10
B DW 1
C DW 5
D DW 3

CODE ENDS
END Start