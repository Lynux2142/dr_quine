section .data
fread db "w+", 0
file_name db "Grace_kid.s", 0
s db "mkdir bonjour", 0
env db "_"
mytest db "%s", 10, 0

section .text
global _main
extern _fopen
extern _asprintf
extern _fprintf
extern _fclose
extern _system
extern _printf
extern _getenv

_main:
; ceci est un commentaire
enter 0, 0
mov rdi, env
call _getenv
mov rdi, mytest
mov rsi, rax
call _printf
leave
ret
