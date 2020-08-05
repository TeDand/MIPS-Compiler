.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,5
sw $2,-4($sp)
addiu $sp,$sp,-4
.data 
x: .space 36
.text 
li $2,9
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
la $5,x
li $2,6
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $4, 0($sp)
addiu $sp,$sp,4
sll $4,$4,2
add $5, $5, $4
sw $10, 0($5)
li $2,69
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
la $5,x
li $2,9
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $4, 0($sp)
addiu $sp,$sp,4
sll $4,$4,2
add $5, $5, $4
sw $10, 0($5)
la $5,x
la $5,x
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,1
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
add $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $4, 0($sp)
addiu $sp,$sp,4
sll $4,$4,2
add $5, $5, $4
lw $2, 0($5)
sw $2, -4($sp)
addiu $sp,$sp,-4
lw $4, 0($sp)
addiu $sp,$sp,4
sll $4,$4,2
add $5, $5, $4
lw $2, 0($5)
sw $2, -4($sp)
addiu $sp,$sp,-4
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

