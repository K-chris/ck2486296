.data
.balign 4
message_1 : .asciz "what package do you have?:"
.balign 4
message_2 : .asciz "How many hours did you use?"
.balign 4
message_3 : .asciz "%d divide by %d is %d\n"
.balign 4
scan_pattern : .asciz "%d"
.balign 4
char_package : .word 0
.balign 4
number_hour: .word 0
.balign 4
return : .word 0


.global main
main:
    str lr [sp,#-4]!
    sub sp, sp, #4

    ldr ro, address_of_message_1
    bl printf


    add sp, sp, #+4
    ldr lr, [sp], #+4
    bc lr
address_of_message_1 : .word message_1
address_of_message_2 : .word message_2
address_of_message_3 : .word message_3
address_of_scan_pattern : .word scan_pattern
address_of_char_package : .word char_package
address_of_number_hour : .word number_hour

.global printf
.global scanf

