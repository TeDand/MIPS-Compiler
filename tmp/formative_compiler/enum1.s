.data
vv: .word 0
.text
.globl g
g:
sw $ra,-4($sp)
sw $fp,-8($sp)
move $fp, $sp
addiu $sp,$sp,-8
la $2,vv
lw $2, 0($2)
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
move $sp,$fp
lw $fp,-8($fp)
lw $ra,-4($sp)
jr $31
nop

