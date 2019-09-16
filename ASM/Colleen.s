section .data
s db "section .data%2$cs db %3$c%1$s%3$c,0%2$c%4$c ceci est un commentaire%2$csection .text%2$cglobal _main%2$cextern _printf%2$c_main:%2$c%4$c ceci est un autre commentaire%2$center 0, 0%2$cmov rdi, s%2$cmov rsi, s%2$cmov rdx, 10%2$cmov rcx, 34%2$cmov r8, 59%2$ccall _printf%2$cleave%2$cret%2$c",0
; ceci est un commentaire
section .text
global _main
extern _printf
_main:
; ceci est un autre commentaire
enter 0, 0
mov rdi, s
mov rsi, s
mov rdx, 10
mov rcx, 34
mov r8, 59
call _printf
leave
ret
