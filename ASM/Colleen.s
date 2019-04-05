section .data
s db "section .data%cs db %c%s%c,0%c%c ceci est un commentaire%csection .text%cglobal main%cextern printf%cmain:%c%c ceci est un autre commentaire%center 0, 0%cmov rdi, s%cmov rsi, 10%cmov rdx, 34%cmov rcx, s%cmov r8, 34%cmov r9, 10%cmov rax, 26%cwhile:%ccmp rax, 0%cje endw%cdec rax%cpush 10%cjmp while%cendw:%cpush 59%cpush 10%cpush 10%cpush 10%cpush 10%cpush 10%cpush 59%ccall printf%cleave%cret%c",0
; ceci est un commentaire
section .text
global main
extern printf
main:
; ceci est un autre commentaire
enter 0, 0
mov rdi, s
mov rsi, 10
mov rdx, 34
mov rcx, s
mov r8, 34
mov r9, 10
mov rax, 26
while:
cmp rax, 0
je endw
dec rax
push 10
jmp while
endw:
push 59
push 10
push 10
push 10
push 10
push 10
push 59
call printf
leave
ret
