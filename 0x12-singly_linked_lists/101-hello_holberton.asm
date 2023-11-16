section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    push rdi               ; Preserve the value of rdi register
    mov rdi, hello         ; Set the format specifier
    call printf            ; Call printf function
    pop rdi                ; Restore the value of rdi register
    ret                    ; Return from the main function
