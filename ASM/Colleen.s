section .data
s db "section .data%2$cs db %3$c%1$s%3$c,0%2$c%4$c ceci est un commentaire%2$csection .text%2$cglobal main%2$cextern printf%2$cmain:%2$c%4$c ceci est un autre commentaire%2$center 0, 0%2$cmov rdi, s%2$cmov rsi, s%2$cmov rdx, 10%2$cmov rcx, 34%2$cmov r8, 59%2$ccall printf%2$cleave%2$cret%2$c",0
; ceci est un commentaire
section .text
global main
extern printf
main:
; ceci est un autre commentaire
enter 0, 0
mov rdi, s
mov rsi, s
mov rdx, 10
mov rcx, 34
mov r8, 59
call printf
leave
ret
