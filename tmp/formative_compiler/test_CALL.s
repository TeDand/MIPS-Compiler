.globl g
.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
jal g
nop
sw $2,-4($sp)
addiu $sp,$sp,-4
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

