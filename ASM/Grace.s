section .data
fread db "w+", 0
file_name db "Grace_kid.s", 0
s db "section .data%2$cfread db %3$cw+%3$c, 0%2$cfile_name db %3$cGrace_kid.s%3$c, 0%2$cs db %3$c%1$s%3$c, 0%2$c%2$csection .text%2$cglobal _main%2$cextern _fopen%2$cextern _fprintf%2$cextern _fclose%2$c_main:%2$c%4$c ceci est un commentaire%2$center 0, 0%2$cmov rdi, file_name%2$cmov rsi, fread%2$ccall _fopen%2$cmov rbx, rax%2$cmov rdi, rax%2$cmov rsi, s%2$cmov rdx, s%2$cmov rcx, 10%2$cmov r8, 34%2$cmov r9, 59%2$ccall _fprintf%2$cmov rdi, rbx%2$ccall _fclose%2$cleave%2$cret%2$c", 0

section .text
global _main
extern _fopen
extern _fprintf
extern _fclose
_main:
; ceci est un commentaire
enter 0, 0
mov rdi, file_name
mov rsi, fread
call _fopen
mov rbx, rax
mov rdi, rax
mov rsi, s
mov rdx, s
mov rcx, 10
mov r8, 34
mov r9, 59
call _fprintf
mov rdi, rbx
call _fclose
leave
ret
