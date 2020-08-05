.globl multiply
multiply:
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
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,endifl_0
nop
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
sub $2,$0,$2
sw $2, 0($sp)
lw $2,0($sp)
move $4,$2
lw $2,-16($fp)
lw $2,0($sp)
move $5,$2
jal multiply
nop
addiu $sp,$sp,4
addiu $sp,$sp,4
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
sub $2,$0,$2
sw $2, 0($sp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
endifl_0:
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $9,0($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,bottoml2
topl1:
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
lw $2,-20($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
add $10,$9,$10
sw $10,4($sp)
addiu $sp,$sp,4
sw $10,-20($fp)
li $10,1
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
move $2,$9
sub $10,$9,$10
sw $10,-12($fp)
move $10,$2
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
move $9,$2
bne $9,$0,topl1
bottoml2:
lw $2,-20($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

