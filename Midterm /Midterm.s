.data

message1: .asciz "enter in what problem you want to go to \n 1) Paycheck Cal \n 2) ISP Bill Cal \n 3) Fibonacci Cal \n"
format: .asciz "%d"
.text

.global main
main:
    str lr, [sp,#-8]!
	sub sp, sp, #8
choice:
    ldr r0, address_of_message1
    bl printf
    ldr r0, address_of_format
    mov r1, sp
    bl scanf
    ldr r1, [sp]
    cmp r1,#1
    beq Prog1
    cmp r1,#2
    beq Prog2
    cmp r1,#3
    beq Prog3
end:
    add sp, sp, #+8
    ldr lr, [sp], #+8
    bx lr
Prog1:
    bl paycheck
    bal choice
Prog2:
    bl intrn
    bal choice
Prog3:
    bl fibonacci
    bal choice

address_of_message1: .word message1
address_of_format: .word format
