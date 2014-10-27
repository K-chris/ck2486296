.data

message1: .asciz " enetr in what term of the fibonacci sequence you want outputed  "
format: .asciz "%d"
message2: .asciz " the %d term of the fibonacci is %d "
.text

.global fibonacci
fibonacci:
    str lr, [sp,#-8]!
	sub sp, sp, #8
    ldr r0, address_of_message1
    bl printf
    ldr r0, address_of_format
    mov r1, sp
    bl scanf
    ldr r1, [sp]
    mov r2, r1
    mov r3, #0
    mov r4, #1
    mov r5, #0
cal:
    cmp r2, #1
    ble end
    sub r2, r2,#1
    add r3, r3, r4
    mov r5, r4
    mov r4, r3
    mov r3, r5
    b cal
end:
    mov r2,r3
    ldr r0, address_of_message2
    bl printf
    add sp, sp, #+8
    ldr lr, [sp], #+8
    bx lr

address_of_message1: .word message1
address_of_message2: .word message2
address_of_format: .word format
