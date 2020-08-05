.globl ffff
ffff:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,10
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-12($fp)
lw $2,-12($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

