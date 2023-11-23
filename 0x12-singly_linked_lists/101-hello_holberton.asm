global  main
        extern  printf
main:
        mov edi, format
        xor eax, eax
        call printf
        mov eax, 0
format: db 'Hello, Hoblberton\n',0