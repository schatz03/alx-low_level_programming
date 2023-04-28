section           .data
   message db "Hello, Holberton", 0xa,0

section           .text
         extern   printf
         global    main
main:
    mov         edi, messgae
    mov         eax, 0
    call        printf
    syscall
