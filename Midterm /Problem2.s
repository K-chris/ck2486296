.data

message1: .asciz "Enter in what package you have and"
format: .asciz "%c %d"
message2: .asciz " how many hours did you used: "
message3: .asciz "the total cost is %d"

.text


.global main
main:
    str lr, [sp,#-4]!
	sub sp, sp, #8

    ldr r0, address_of_message1
    bl printf
    ldr r0, address_of_message2
    bl printf
    ldr r0, address_of_format
    mov r2, sp
        add r1, r2,#4
    bl scanf
        add r1, sp, #4
    ldr r1, [r1]
    ldr r2, [sp]
    cmp r1, #97 or #98
    beq case_package
    cmp r1, #99
    beq case_package
    b end
case_package:
    r3, #30
    r4, #11
    r5, #3
    cmp r1, #97
    beq case_hour

case_BC:

end:
    add sp, sp, #+4
    ldr lr, [sp], #+4
    bx lr

address_of_message1: .word message1
address_of_message2: .word message2
address_of_message3: .word message3
address_of_format: .word format


