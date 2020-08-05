.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,5678
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

