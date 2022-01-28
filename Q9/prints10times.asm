.data
statement:
	.asciiz "hey there!!\n"

.text
.globl main
main:
    li $s0, 10
	loop:
	li $v0, 4           	
	la $a0, statement 	
	syscall
	addi $s0, $s0, -1 
	bne $0, $s0, loop
	
	li $v0,10
	syscall
	.end
	
