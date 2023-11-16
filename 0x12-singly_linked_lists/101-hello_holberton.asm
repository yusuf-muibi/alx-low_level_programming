extern printf
section .data
	format:		db 'Hello, Holberton', 10
section .text
	global main
main:
	mov edi, format
	xor eax, eax
	call printf
	mov	eax,0
	ret
