.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,1
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-12($fp)
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,bottoml1
topl0:
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-12($fp)
move $10,$2
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
move $9,$2
bne $9,$0,topl0
bottoml1:
li $2,19937
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

