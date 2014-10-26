.data
message1: .asciz "enter in the hours you have worked and then the pay rate"
format: .asciz "%c %d"
message3: .asciz "your gross pay is $%d   "
.text

.global main
main:
    str lr, [sp,#-8]!
	sub sp, sp, #8
    ldr r0, address_of_message1
    bl printf
    ldr r0, address_of_format
    mov r2, sp
    add r1, r2,#4
    bl scanf
    add r1, sp, #4
    ldr r1, [r1]           @r1 = users package a,b,or c
    ldr r2, [sp]           @r2 = users hours



    end:
    add sp, sp, #+8
    ldr lr, [sp], #+8
    bx lr

address_of_message1: .word message1
address_of_message3: .word message3
address_of_format: .word format