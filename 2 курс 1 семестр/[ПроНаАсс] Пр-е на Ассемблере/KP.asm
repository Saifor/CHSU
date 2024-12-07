MODEL LARGE
.STACK 100H

.DATA
STUD STRUC
NAME DB 255 DUP (?)
GROUP DW ?
MATH DW ?
ENG DW ?
PHY DW ?
INF DW ?
RUS DW ?
STUD ENDS

S STUD <'Maslov',1,5,5,4,4,5>, <'Trapesnikov',2,4,3,3,5,4>, <'Kondobarov',2,5,3,4,5,3>, <'Pavlov',1,4,4,4,4,3>, <'Ivanov',2,5,3,3,4,4>, <'Belov',1,5,5,4,5,5>, <'Petrov',1,3,4,3,4,3>, <'Vasichkin',2,4,4,3,4,4>

.CODE
Start:

    MOV AX, @DATA
    MOV DS, AX
    XOR AX, AX
    MOV CX, 10
    XOR BX, BX
    XOR BP, BP
    CMP CX, 0
    JA M1
    JMP stop
               
    M1: 
        XOR DL, DL
        MOV DL, S.MATH[BX] 
        CMP DL, 0      
        JE M2
        ADD BX, TYPE STUD
        DEC CX
        CMP CX, 0
        JA M1
        JMP stop
        
    M2: 
        INC BP
        ADD BX, TYPE STUD
        DEC CX
        CMP CX, 0
        JA M1
        JMP stop
               
    stop:
    MOV AX, 4C00h
    INT 21h

END Start


