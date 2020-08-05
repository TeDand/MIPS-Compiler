.globl bsqrt
bsqrt:
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
move $2,$6
sw $2,-4($sp)
addiu $sp,$sp,-4
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
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
lw $9,0($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,bottoml1
topl0:
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
add $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
li $2,1
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
srl $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-28($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-28($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
mul $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-36($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-20($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
beq $3,$2,lte_true2
nop
slt $2,$3,$2
beq $0,$0,lte_false3
nop
lte_true2:
li $2,1
lte_false3:
sw $2,4($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,falsel_5
nop
lw $2,-28($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-12($fp)
beq $0,$0,endifl_4
nop
falsel_5:
lw $2,-28($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-16($fp)
endifl_4:
move $10,$2
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
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
move $9,$2
bne $9,$0,topl0
bottoml1:
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
mul $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $2,-20($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,falsel_7
nop
lw $2,-16($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
beq $0,$0,endifl_6
nop
falsel_7:
lw $2,-12($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
endifl_6:

