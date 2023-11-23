section .data
    format db 'Hello, Holberton', 10 ; The 10 represents a newline character

section .text
    global main
    extern printf

main:
    ; Set up the stack for printf function call
    sub rsp, 8      ; Align the stack to a 16-byte boundary
    lea rdi, [format] ; Load the address of the format string into rdi
    xor eax, eax    ; Clear EAX register (return value of printf)
    call printf     ; Call printf function
    add rsp, 8      ; Restore the stack pointer

    ; Exit the program
    mov eax, 0      ; Return 0 status
    ret             ; Return from the main function