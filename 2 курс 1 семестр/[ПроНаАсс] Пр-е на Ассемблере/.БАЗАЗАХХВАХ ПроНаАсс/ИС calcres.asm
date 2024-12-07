Name calcstr
data segment
strbuf db 10 dup(0);10 байт под строку
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
  mov ax,[bp+4]	;word для конвертации
  mov di,[bp+6]	;адрес строки из стека
  xor dx,dx	;для символа
  xor si,si     ;количество цифр
  mov bx, 10	;в десятичной
_convloop:
  xor  dx,dx
  div  bx
  push dx 	;в стек
  inc  si
  test ax,ax
  jnz  _convloop
;достаём цифры из стека и запишем в строку (в правильном порядке, не так как нашли)
  mov ax,si	;возвращаем длину строки в ax
_stacklopp:
  pop dx	;достаём из стека цифру
  add dl,"0"    ;добавляем код символа '0' для превращения в цифру
  mov [di],dl	;запись в строку
  inc di	;след.символ
  dec si
  jnz  _stacklopp
  mov byte ptr [di],'$';добавим в конец $
  pop bp
  ret 4                                     
ConvertToString endp

; П = i*(j+7)   bx=j cx=N
CalcFormula proc
  add bx,7	;j+7
  mov di,1	;i=1
  mov dx,di	;результат
start_calc:
  mov ax,di
  mul bl	;ax=i*(j+7)
  mul dx	;ax=ax*dx
  mov dx,ax
  inc di	;i=i+1 
  cmp di,cx
  jbe start_calc
  mov ax,dx		;результат в ax
  iret
CalcFormula endp

start: 
    mov sp,StkTop
    mov ax,data
    mov es,ax
    mov ds,ax

    ;сохраним старый обработчик в Old_60h
    mov ax, 3560h
    int 21h
    mov Old_60h, bx
    mov Old_60h+2,es

    ;установим новый обработчик 60h
    cli
    push ds
    push cs
    pop ds
    mov ax, 2560h
    lea dx, CalcFormula
    int 21h
    pop ds
    sti
	
    ;вызовем прерывание   
    mov bx,-6;j
    mov cx,7;N
    int 60h

    ;сконвертируем в строку
    lea dx,[strbuf];адрес строки
    push dx;передаём через стек
    push ax;число для конвертации
    call ConvertToString
	
    ;напечатаем
    lea dx,strbuf;dx адрес строки
    mov ah,09h;Номер функции Вывод строки
    int 21h    
    
    ;ждем нажатия на клавиатуру
    xor ax,ax
    int 16h

    ;установим старый обработчик 60h
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

    ;завершение программы
    mov ax,4c00h
    int 21h
code ends
end start
