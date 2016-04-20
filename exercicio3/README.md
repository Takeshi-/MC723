**Bruno Takeshi Hori  	RA:145539**

##Relatório do exercicio 3

####Teste inicial

**Parte 1 - Hello.c e add**

O arquivo hello.c gerou 0 instruções de add ao refazer o .cpp com as devidas alterações.

Não foi possível modificar o programa para aparecer uma instrução de add.

Isso foi causado pelo fato do compilador trocar um add pelas instruções addu ou addi.

Isso ocorre porque a instrução add pode ter um overflow do número por causa do sinal, 
sendo que se o programador não cuidar para que tenha uma instrução de add, 
o compilador automaticamente muda para uma instrução do tipo addu ou addi entre outras.

Número total de instruções : 2727

Número total de ciclos : 12622

####Teste de benchmark

Foi calculado o número total de ciclos, de instruções e o CPI médio para cada um dos 
benchmarks a seguir a partir do uso da flag -s no comando inicial (acsim) para poder
ver cada uma das instruções e quantas delas tiveram.

**Parte 2 - jpeg encode**

Número total de instruções : 29857750

Número total de ciclos     : 125750804

CPI médio                  : 4,212

**Parte 3 - sha small**

Número total de instruções : 13175979

Número total de ciclos     : 37605334

CPI médio                  : 2,854

**Parte 4 - bitcount large**

Número total de instruções : 536894280

Número total de ciclos     : 1024884153

CPI médio                  : 1,909
