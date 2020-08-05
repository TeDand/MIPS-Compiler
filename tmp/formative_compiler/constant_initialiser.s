.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,12345
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-12($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

