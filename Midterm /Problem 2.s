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
number_num : .word 0
.balign 4
number_den : .word 0
.balign 4
return : .word 0






.global printf
.global scanf

