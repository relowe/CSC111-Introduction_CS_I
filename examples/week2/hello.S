.text
.globl _start

_start:
            movl    $4, %eax
            movl    $1, %ebx
            movl    $msg, %ecx
            movl    $msgend, %edx
            sub     $msg, %edx
            int     $0x80

            movl    $1, %eax
            xorl    %ebx, %ebx
            int     $0x80
msg:    .string "hello, world\n"
msgend: .byte 0
