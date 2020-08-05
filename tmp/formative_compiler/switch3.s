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
startcasel_3:
beq $0,$0,startswitchl_5
nop
startcasel_6:
startcasel_7:
li $10,1
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
move $2,$9
add $10,$9,$10
sw $10,-12($fp)
beq $0,$0,endswitchl_4
startcasel_8:
startcasel_9:
beq $0,$0,endswitchl_4
startcasel_10:
beq $0,$0,endswitchl_4
startswitchl_5:
lw $2,-12($fp)
move $3,$2
li $2,0
beq $2,$3,startcasel_6
li $2,2
beq $2,$3,startcasel_8
li $2,4
beq $2,$3,startcasel_10
endswitchl_4:
startcasel_11:
startcasel_12:
beq $0,$0,endswitchl_0
startswitchl_1:
lw $2,-12($fp)
move $3,$2
li $2,0
beq $2,$3,startcasel_2
li $2,2
beq $2,$3,startcasel_11
endswitchl_0:
lw $2,-12($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

