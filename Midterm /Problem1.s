.data
message1: .asciz "enter in the hours you have worked and then the pay rate"
format: .asciz "%d %d"
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
    ldr r1, [r1]           @r1 = users hours
    ldr r2, [sp]           @r2 = users rate of pay



    add sp, sp, #+8
    ldr lr, [sp], #+8
    bx lr

address_of_message1: .word message1
address_of_message3: .word message3
address_of_format: .word format