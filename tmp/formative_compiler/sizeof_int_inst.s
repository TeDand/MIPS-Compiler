.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-12($fp)
lw $2,0($sp)
move $4,$2
jal sizeof
nop
addiu $sp,$sp,4
sw $2,-4($sp)
addiu $sp,$sp,-4
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

