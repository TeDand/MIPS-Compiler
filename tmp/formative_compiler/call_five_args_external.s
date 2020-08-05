.globl g
.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,1
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
move $4,$2
li $2,2
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
move $5,$2
li $2,3
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
move $6,$2
li $2,4
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
move $7,$2
li $2,5
sw $2,-4($sp)
addiu $sp,$sp,-4
jal g
nop
addiu $sp,$sp,4
addiu $sp,$sp,4
addiu $sp,$sp,4
addiu $sp,$sp,4
addiu $sp,$sp,4
sw $2,-4($sp)
addiu $sp,$sp,-4
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

