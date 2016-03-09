###Bruno Takeshi Hori RA: 145539

##MC723 - Exercício 1  Relatório 1

Todos os valores foram calculados como média aritmética de 5 resultados.

**Etapa 1.1:**

 Tempo gasto ao compilar 
- Sem nenhuma opção de compilação extra: **T comp** - real 0m0.062s | **T exec** - real 0m0.340s
- Utilizando otimização -O0: **T comp** - real 0m0.056s | **T exec** - real 0m0.344s
- Utilizando otimização -O1: **T comp** - real 0m0.051s | **T exec** - real 0m0.357s
- Utilizando otimização -O2: **T comp** - real 0m0.047s | **T exec** - real 0m0.359s
- Utilizando otimização -O3: **T comp** - real 0m0.046s | **T exec** - real 0m0.362s

Melhor tempo de compilação foi feito pela utilização de -O3, contudo o resultado variava ao fazer a compilação diversas vezes em todos os casos. 
Já o melhor tempo de execução foi feito ao não utilizar nenhuma opção extra.

**Etapa 1.2: Outras otimizações da categoria -mtune do gcc**

-mtune=generic : produz código otimizado para os processadores IA32/AMD64/EM64T mais comuns. **T comp** - real 0m052s.
-mtune=native : a opção seleciona a CPU para otimizar um tempo de compilação determinando o tipo de processador da máquina. **T comp** - real 0m0.045s.

Essas opções não causaram grande diferença em relação ao tempo de compilação. Quanto ao tempo de execução, o tempo caiu para **T exec** - real 0m0.333s.

**Etapa 2: Quebrar programa em 2 arquivos separados**

Existem métodos diferentes para se compilar esses arquivos: criar um script ou um Makefile.

Mesmo utilizando um Makefile, o resultado da compilação continuou dando um valor próximo ao anterior(T comp - real 0m0.046s). Porém em relação ao tempo de execução foi um pouco pior: T exec - 0m0.349s 
Em observação, mesmo separando em 2 arquivos, o programa continuou tendo um tempo de compilação constante, mas houve diferença no tempo de execução. 

**Etapa 3: Modificar o código para calcular quantos números primos existem entre 1 e n**

Houve uma pequena diferença no tempo de compilação sendo que com um arquivo foi mais rápido. Mas foi o oposto em relação ao tempo de execução.
Com um único arquivo: **T comp** - real 0m0.091s | **T exec** - real 0m1.803s - executado com valor inicial de 100000
Com dois arquivos: **T comp** - real 0m0.130s | **T exec** - real 0m1.724s - executado com valor inicial de 100000


**Etapa 4: Editar o laço da função primo para varrer apenas os números ímpares**

Com um único arquivo: **T comp** - real 0m0.087s | **T exec** - real 0m1.745s - executado com valor inicial de 100000
Com dois arquivos: **T comp** - real 0m0.101s | **T exec** - real 0m1.724s - executado com valor inicial de 100000
Estranhamente, mesmo tendo diminuído pela metade os números conferidos, o tempo de execução praticamente não mudou no caso com dois arquivos e teve uma leve diminuição com um arquivo.

**Etapa 5: Gprof**

Com um único arquivo: **T comp** - real 0m0.080s | **T exec** - real 0m1.737s - executado com valor inicial de 100000
Com dois arquivos: **T comp** - real 0m0.111s | **T exec** - real 0m1.730s - executado com valor inicial de 100000

**Etapa 6: Paralelização**

A possível paralelização no código seria no laço do for.

**Etapa 7: Otimização**

Não é necessário verificar números até n. O maior valor que é necessário verificar é a raiz quadrada do valor n, isso na função primo.
