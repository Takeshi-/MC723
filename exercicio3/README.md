**Bruno Takeshi Hori  	RA:145539**

##Relatório do exercicio 3

**Parte 1**

O arquivo hello.c gerou 0 instruções de add ao refazer o .cpp com as devidas alterações.
Não foi possível modificar o programa para aparecer uma instrução de add.
Isso foi causado pelo fato do compilador trocar um add pelas instruções addu ou addi.
Já que essas instruções têm menor chance de ter um overflow do nteiro em relação à instrução de add.

Número total de ciclos:
lb = 12 * 10
lbu = 22 * 10
lh = 20 * 10
lw = 552 * 10
sb = 38 * 10
sh = 17 * 10
sw = 379 * 10
addi = 1 * 1
addiu = 299 * 1
slti = 1 * 1
sltiu = 15 * 1
andi = 2 * 1
ori = 12 * 1
xori = 1 * 1
lui = 47 * 1
addu = 175 * 1
subu = 18 * 1
slt = 3 * 1
sltu = 15 * 1
instr_and = 13 * 1
instr_or = 2 * 1
instr_xor = 4 * 1
instr_nor = 2 * 1
nop = 666 * 1
sll = 39 * 1
srl = 3 * 1
sra = 36 * 1
sllv = 1 * 1
j = 23 * 3
jal = 51 * 3
jr = 52 * 3
jalr = 1 * 3
beq = 47 * 3
bne = 108 * 3
bgtz = 3 * 3
bltz = 2 * 3
bgez = 2 * 3
