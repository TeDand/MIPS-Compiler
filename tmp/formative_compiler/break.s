.globl ffff
ffff:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,999
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,9
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,2
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,bottoml1
topl0:
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
add $10,$9,$10
sw $10,4($sp)
addiu $sp,$sp,4
sw $10,-16($fp)
beq $0,$0,bottoml1
li $2,465
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-20($fp)
move $10,$2
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
move $9,$2
bne $9,$0,topl0
bottoml1:
lw $2,-20($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

