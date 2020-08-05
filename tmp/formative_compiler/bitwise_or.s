.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
move $2,$4
sw $2,-4($sp)
addiu $sp,$sp,-4
move $2,$5
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
or $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $10,0($sp)
sw $10,-20($fp)
lw $2,-20($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

