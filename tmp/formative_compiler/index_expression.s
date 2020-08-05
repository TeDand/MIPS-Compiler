.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
.data 
x: .space 32
.text 
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,8
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-12($fp)
topl0:
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,16
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
lw $2,0($sp)
addiu $sp,$sp,4
beq $2,$0,bottoml1
nop
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
la $5,x
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,8
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
sub $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
lw $4, 0($sp)
addiu $sp,$sp,4
sll $4,$4,2
add $5, $5, $4
sw $10, 0($5)
li $10,1
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
move $2,$9
add $10,$9,$10
sw $10,-12($fp)
j topl0
nop
bottoml1:
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-16($fp)
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $10,0($sp)
sw $10,-12($fp)
topl2:
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,8
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
slt $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
lw $2,0($sp)
addiu $sp,$sp,4
beq $2,$0,bottoml3
nop
lw $2,-16($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
la $5,x
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
li $2,0
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
add $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $4, 0($sp)
addiu $sp,$sp,4
sll $4,$4,2
add $5, $5, $4
lw $2, 0($5)
sw $2, -4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
add $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
lw $10,0($sp)
sw $10,-16($fp)
li $10,1
lw $2,-12($fp)
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $9,0($sp)
move $2,$9
add $10,$9,$10
sw $10,-12($fp)
j topl2
nop
bottoml3:
lw $2,-16($fp)
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

