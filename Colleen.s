section .data
s db "section .data%cs db %c%s%c,0%csection .text%cglobal _start%cextern printf%c_start:%center 0, 0%cmov rdi, s%cmov rsi, 10%cmov rdx, 34%cmov rcx, s%cmov r8, 34%cmov r9, 10%cmov rax, 23%cwhile:%ccmp rax, 0%cje endw%cdec rax%cpush 10%cjmp while%cendw:%ccall printf%cmov rax, 1%cmov rbx, 0%cint 0x80%c",0
section .text
global _start
extern printf
_start:
enter 0, 0
mov rdi, s
mov rsi, 10
mov rdx, 34
mov rcx, s
mov r8, 34
mov r9, 10
mov rax, 23
while:
cmp rax, 0
je endw
dec rax
push 10
jmp while
endw:
call printf
mov rax, 1
mov rbx, 0
int 0x80
