.globl g
g:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
move $2,$4
sw $2,-4($sp)
addiu $sp,$sp,-4
beq $0,$0,startswitchl_1
nop
startcasel_2:
li $2,10
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
startcasel_3:
li $2,11
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
startswitchl_1:
lw $2,-12($fp)
move $3,$2
li $2,1
beq $2,$3,startcasel_2
li $2,2
beq $2,$3,startcasel_3
endswitchl_0:

