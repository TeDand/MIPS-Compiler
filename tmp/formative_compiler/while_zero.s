.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,0
lw $9,0($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,bottoml1
topl0:
li $2,0
move $9,$2
bne $9,$0,topl0
bottoml1:
li $2,19937
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

