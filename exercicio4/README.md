####Bruno Takeshi Hori   RA: 145539

##Relatório 4 - Plataformas e Periféricos

Esse experimento baseou-se em testar como funciona uma plataforma multicore e como usar periféricos (nesse caso periféricos de lock).

###Modificar o periférico

Nesta parte foi introduzido no código do arquivo ac_tlm_peripheral.cpp algumas mudanças. Elas foram feitas para manipular e armazenar valores escritos e lidos.

É necessário tomar cuidado com o endereço de entrada na aplicação para que este não ultrapasse o valor da pilha estabelecida. 


###Aplicação (teste.c)

Foi criado uma aplicação de quick sort para conferir a diferença entre usar um processador ou dois processadores.

Pode-se usar 2 processadores na parte de ordenação, ao fazer com que cada roteador ordene metade do vetor e após isso intercalar as metades já ordenadas.

Foi criado também GlobalLocks e LocalLocks para diferenciar locks locais e lock de hardware (global).

Houve uma diferença de praticamente 600k instruções.
