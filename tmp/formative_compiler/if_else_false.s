.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,0
move $9,$2
beq $9,$0,falsel_1
nop
li $2,11
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
beq $0,$0,endifl_0
nop
falsel_1:
li $2,10
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
endifl_0:

