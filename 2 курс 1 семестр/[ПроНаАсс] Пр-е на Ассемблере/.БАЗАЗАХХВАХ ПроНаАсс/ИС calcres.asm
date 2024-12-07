Name calcstr
data segment
strbuf db 10 dup(0);10 ���� ��� ��ப�
Old_60h dw 0,0
data ends
stacks segment word stack 'stack'
dw 200 dup(?) 
StkTOp LABEL word
stacks ends 
code segment
assume CS: code, DS: data, ES: data, SS: stacks

ConvertToString proc
  push bp
  mov bp,sp
  mov ax,[bp+4]	;word ��� �������樨
  mov di,[bp+6]	;���� ��ப� �� �⥪�
  xor dx,dx	;��� ᨬ����
  xor si,si     ;������⢮ ���
  mov bx, 10	;� �����筮�
_convloop:
  xor  dx,dx
  div  bx
  push dx 	;� �⥪
  inc  si
  test ax,ax
  jnz  _convloop
;����� ���� �� �⥪� � ����襬 � ��ப� (� �ࠢ��쭮� ���浪�, �� ⠪ ��� ��諨)
  mov ax,si	;�����頥� ����� ��ப� � ax
_stacklopp:
  pop dx	;����� �� �⥪� ����
  add dl,"0"    ;������塞 ��� ᨬ���� '0' ��� �ॢ�饭�� � ����
  mov [di],dl	;������ � ��ப�
  inc di	;᫥�.ᨬ���
  dec si
  jnz  _stacklopp
  mov byte ptr [di],'$';������� � ����� $
  pop bp
  ret 4                                     
ConvertToString endp

; � = i*(j+7)   bx=j cx=N
CalcFormula proc
  add bx,7	;j+7
  mov di,1	;i=1
  mov dx,di	;१����
start_calc:
  mov ax,di
  mul bl	;ax=i*(j+7)
  mul dx	;ax=ax*dx
  mov dx,ax
  inc di	;i=i+1 
  cmp di,cx
  jbe start_calc
  mov ax,dx		;१���� � ax
  iret
CalcFormula endp

start: 
    mov sp,StkTop
    mov ax,data
    mov es,ax
    mov ds,ax

    ;��࠭�� ���� ��ࠡ��稪 � Old_60h
    mov ax, 3560h
    int 21h
    mov Old_60h, bx
    mov Old_60h+2,es

    ;��⠭���� ���� ��ࠡ��稪 60h
    cli
    push ds
    push cs
    pop ds
    mov ax, 2560h
    lea dx, CalcFormula
    int 21h
    pop ds
    sti
	
    ;�맮��� ���뢠���   
    mov bx,-6;j
    mov cx,7;N
    int 60h

    ;᪮������㥬 � ��ப�
    lea dx,[strbuf];���� ��ப�
    push dx;��।�� �१ �⥪
    push ax;�᫮ ��� �������樨
    call ConvertToString
	
    ;�����⠥�
    lea dx,strbuf;dx ���� ��ப�
    mov ah,09h;����� �㭪樨 �뢮� ��ப�
    int 21h    
    
    ;���� ������ �� ����������
    xor ax,ax
    int 16h

    ;��⠭���� ���� ��ࠡ��稪 60h
    cli
    push ds
    mov ax, Old_60h+2
    push ax
    pop ds    
    mov dx, Old_60h
    mov ax, 2560h
    int 21h
    pop ds
    sti

    ;�����襭�� �ணࠬ��
    mov ax,4c00h
    int 21h
code ends
end start
