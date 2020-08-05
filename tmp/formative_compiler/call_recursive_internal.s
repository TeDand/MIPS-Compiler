.globl f
f:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
move $2,$4
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
beq $2,$3,eqeq_true0
nop
li $2,0
beq $0,$0,eqeq_false1
nop
eqeq_true0:
li $2,1
eqeq_false1:
sw $2,4($sp)
addiu $sp,$sp,4
move $9,$2
beq $9,$0,endifl_2
nop
li $2,0
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop
endifl_2:
lw $2,-12($fp)
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
sub $2,$3,$2
sw $2,4($sp)
addiu $sp,$sp,4
lw $2,0($sp)
move $4,$2
jal f
nop
addiu $sp,$sp,4
sw $2,-4($sp)
addiu $sp,$sp,-4
lw $2,0($sp)
lw $3,4($sp)
add $2,$2,$3
sw $2,4($sp)
addiu $sp,$sp,4
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

