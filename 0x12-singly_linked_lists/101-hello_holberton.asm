section .data
hello db 'Hello, Holberton', 10

section .text
global main
extern printf

main:
push rdi
mov rdi, hello
call printf
pop rdi
ret
