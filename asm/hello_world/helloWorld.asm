;Another way to print hello world in assembly
global _start

section .text

_start:
    mov rax, 0x1
    mov rdi, 0x1
    mov rsi, msg
    mov rdx, msglen
    syscall

    mov rax, 0x3C
    mov rdi, 0x0
    syscall

section .data
    msg: db "Hello, World!", 0xA
    msglen: equ $ - msg    