
;Hello World Program in Assembly Language

section .data:
    ;.data section contains the following

    msg db "Hello World!", 0xa
    ;msg is a string
    ;db is a data byte
    ;0xa is a new line(like \n in C)

    len equ $ - msg
    ;len is the length of the string
    ;$ is the current address
    ;- is the difference between the current address and the address of msg
    ;equ is used to assign a value to a variable

section .text:
    ;.text section contains the following
 
global _start
;The global keyword is used to declare a global symbol.

_start:
    mov edx, len
    ;mov is used to move data from one location to another
    ;edx is the length of the string
    ;len is the address of the string
    mov ecx, msg
    ;ecx is the address of the string    
    mov ebx, 1
    ;ebx is the number of times the string is to be printed
    ;1 is the number of times the string is to be printed
    mov eax, 4
    ;eax is the number of bytes to be printed
    ;4 is the number of bytes to be printed
    int 0x80
    ;int 0x80 is the syscall number

;SAIDA: Hello World!
    mov eax, 1
    ;eax is the number of bytes to be printed
    mov ebx, 0
    ;ebx is the number of times the string is to be printed
    int 0x80
    ;int 0x80 is the syscall number


