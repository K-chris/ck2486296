.data
message1: .asciz "enter in the hours you have worked and then the pay rate  "
format: .asciz "%d %d"
message2: .asciz "You cannot work more than 60 hours, try again  "
message3: .asciz "your gross pay is $%d   "
.text

.global main
main:
    str lr, [sp,#-8]!
	sub sp, sp, #8

 input:

    ldr r0, address_of_message1
    bl printf
    ldr r0, address_of_format
    mov r2, sp
    add r1, r2,#4
    bl scanf
    add r1, sp, #4
    ldr r1, [r1]           @r1 = users hours
    ldr r2, [sp]           @r2 = users rate of pay
    mov r5, #20
    cmp r1, #60
    bgt case_notlegal
    cmp r1, #20
    ble case_regpay
        cmp r1, #40
    ble case_dblpay
    bgt case_trppay

case_notlegal:

    ldr r0, address_of_message2
    bl printf
    b input

case_regpay:
    mul r3,r1,r2
    b end

case_dblpay:
    mov r4, #2
    mul r4,r4,r2
    sub r1,r1,r5
    mul r3,r1,r4
    mul r5,r2,r5
    add r3,r3,r5
    b end

case_trppay:
    mov r4, #3
    mul r4,r4,r2
    sub r1,r1,#40
    mul r3,r1,r4
    mov r6,#2
    mul r6,r6,r5
    add r3, r3, r6
    mul r6, r5,r2
    add r3, r3, r6

end:
    mov r1,r3
    ldr r0, address_of_message3
    bl printf
    add sp, sp, #+8
    ldr lr, [sp], #+8
    bx lr

address_of_message1: .word message1
address_of_message2: .word message2

address_of_message3: .word message3

address_of_format: .word format
