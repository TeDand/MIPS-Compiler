.globl g
g:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
move $2,$4
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-16($fp)
beq $0,$0,startswitchl_1
nop
startcasel_2:
li $2,1
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-16($fp)
beq $0,$0,endswitchl_0
startcasel_3:
li $2,2
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-16($fp)
startcasel_4:
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,1
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
add $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $10,0($sp)
sw $10,-16($fp)
beq $0,$0,endswitchl_0
startdefaultl_5:
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,1
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
add $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $10,0($sp)
sw $10,-16($fp)
beq $0,$0,endswitchl_0
startswitchl_1:
lw $2,-12($fp)
move $3,$2
li $2,0
beq $2,$3,startcasel_2
li $2,2
beq $2,$3,startcasel_3
li $2,1
beq $2,$3,startcasel_4
beq $0,$0,startdefaultl_5
endswitchl_0:
lw $2,-16($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

