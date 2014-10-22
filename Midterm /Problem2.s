.data

message1: .asciz "Enter in what package you have and"
format: .asciz "%c %d"
message2: .asciz "how many hours did you used"
message3: .asciz "the total cost is %d"

.text


.global main
main:
    push {r4, lr}
	mov r4, r0

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
    cmp r1, 'a'
    beq case_packageA
case_packageA:
    mov r1, #35 


    add sp, sp, #+4
    ldr lr, [sp], #+4
    bx lr

address_of_message1: .word message1
address_of_message2: .word message2
address_of_message3: .word message3
address_of_format: .word format


