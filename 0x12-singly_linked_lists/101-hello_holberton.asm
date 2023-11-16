extern printf
section .data
	message:	db 'Hello, Holberton', 10
	format:		db 'Hello, Holberton', 0
section .text
	global main
main:
	push	rbp
	mov	rsi,message
	mov     rdi,format
	call	printf
	pop	rbp
	mov	rax,0
	ret
