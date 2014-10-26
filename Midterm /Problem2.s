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
    ldr r1, [r1]           @r1 = users package a,b,or c
    ldr r2, [sp]           @r2 = users hours
    cmp r1, #97
    beq case_package
    cmp r1, #98
    beq case_package
    cmp r1, #99
    beq case_package
    b end
case_package:
    mov r3, #30         @r3 = monthly price
    mov r4, #11         @r4 = monthly hours
    mov r5, #3          @r5 = charge per add hour
case_BC:                @this loops until they are the correct package values
    cmp r1, #97
    beq case_charge
    add r3, r3, #5
    add r4, r4, #11
    sub r5, r5, #1
    sub r1, r1, #1      @this will be our counter
    b case_BC
case_charge:
    mov r8, #2
    mul r7, r8,r5      @this is the double fee for going over the hours*2
    mul r6, r8, r4     @this is our extra hourly charge r6 = r4 * 2
    cmp r2,r6
    blt case_elseif
    beq case_elseif
case_if:
    mov r0, r3
    sub r6,r6,r2
    mul r6,r6,r7
    add r0,r9,r6
    mul r6,r8,r4
    sub r6,r6,r4
    mul r6,r6,r5
    add r0,r0,r6
case_elseif:

end:
    add sp, sp, #+4
    ldr lr, [sp], #+4
    bx lr

address_of_message1: .word message1
address_of_message2: .word message2
address_of_message3: .word message3
address_of_format: .word format


