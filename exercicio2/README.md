**Bruno Takeshi Hori		RA:145539**

#Relatório do exercício 2
 
Foram simulados 4 programas com um nível de cache.

 1. 301.apsi.m2b
 2. 164.gzip.m2b
 3. 172.mgrid.m2b
 4. 181.mcf.m2b 

Ao simular, foram setados 3 dos 4 valores para verificação da melhor configuração.
E como ao mudar os valores da L1 de instruções isso nãoaltera a L1 de dados, só será representado
os dados variantes.
 
###301.apsi.m2b 

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32 (base)

**l1-icache** 

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 11664602 | 11664602 | 0 | 0 | 0 | 0 |
| Demand misses rate | 0.0194 | 0.0194 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 7858199 | 0 | 7858199 | 3679631 | 4178568 | 0 |
| Demand misses rate | 0.0348 | 0.0000 | 0.0348 | 0.0260 | 0.0495 | 0.0000 |

####-maxtrace 30 -l1-isize nK -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32

![Gráfico: Miss Rate x L1-isize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/301.apsi.m2b-l1-isize.png)

Acima de 64k no tamanho da L1 de instruções não altera mais.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

![Gráfico: Miss Rate x L1-ibsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/301.apsi.m2b-l1-ibsize.png)

Valores acima de 2k para o bloco de instruções da L1 começam a fazer pouca diferença.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

![Gráfico: Miss Rate x L1-dsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/301.apsi.m2b-l1-dsize.png)

Acima de 512k, a mudança é negligível.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

![Gráfico: Miss Rate x L1-dbsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/301.apsi.m2b-l1-dbsize.png)

Acima de 128, houve um acréscimo no número de misses na cache L1.

**Conclusão**

Com essas informações pode-se perceber que a melhor configuração para 301.apsi.m2b em
relação a cache L1 é: l1-isize 64k l1-dsize 512k l1-ibsize 2k l1-dbsize 128

**l1-icache** 

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 327028 | 327028 | 0 | 0 | 0 | 0 |
| Demand misses rate | 0.0005 | 0.0005 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 637028 | 0 | 637028 | 306224 | 330804 | 0 |
| Demand misses rate | 0.0028 | 0.0000 | 0.0028 | 0.0022 | 0.0039 | 0.0000 |

###164.gzip.m2b 


####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32 (base)

**l1-icache** 

|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 8002051 | 8002051 | 0 | 0 | 0 | 0 |
|Demand misses rate | 0.0133 | 0.0133 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**

|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 8500351 | 0 | 8500351 | 7782080 | 718271 | 0|
|Demand misses rate | 0.0434 | 0.0000 | 0.0434 | 0.0528 | 0.0148 | 0.0000|

####-maxtrace 30 -l1-isize nK -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32

![Gráfico: Miss Rate x L1-isize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/164.gzip.m2b-l1-isize.png)

Ocorre uma queda pequena no número de misses acima do valor 64k.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

![Gráfico: Miss Rate x L1-ibsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/164.gzip.m2b-l1-ibsize.png)

Acima de 64, ocorre mudanças muito pequenas.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

![Gráfico: Miss Rate x L1-dsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/164.gzip.m2b-l1-dsize.png)

Acima de 512k, a diferença começa a ser muito pequena.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

![Gráfico: Miss Rate x L1-dbsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/164.gzip.m2b-l1-dbsize.png)

Ocorre um aumento a partir do tamanho 64 do bloco de dados da L1.

**Conclusão**

Com essas informações pode-se perceber que a melhor configuração para 164.gzip.m2b em
relação a cache L1 é: l1-isize 64k l1-dsize 512k l1-ibsize 64 l1-dbsize 64

**l1-icache** 

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 153 | 153 | 0 | 0 | 0 | 0 |
| Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 137910 | 0 | 137910 | 86615 | 51295 | 0 |
| Demand misses rate | 0.0007 | 0.0000 | 0.0007 | 0.0006 | 0.0011 | 0.0000 |

###172.mgrid.m2b 


####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32 (base)

**l1-icache** 

Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 16107 | 16107 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**

Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 24498691 | 0 | 24498691 | 21117670 | 3381021 | 0
Demand misses rate | 0.1142 | 0.0000 | 0.1142 | 0.1159 | 0.1044 | 0.0000

####-maxtrace 30 -l1-isize nK -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32

O valor de 16k já é ideal, pois já possui um _miss rate_ de 0.0000

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

O valor de 32 já é ideal, pois já possui um _miss rate_ de 0.0000.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

![Gráfico: Miss Rate x L1-dsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/172.mgrid.m2b-l1-dsize.png)

Acima do valor de 512k, a diferença é mínima.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

![Gráfico: Miss Rate x L1-dbsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/172.mgrid.m2b-l1-dbsize.png)

Acima de 128, a diferença é desprezível.

**Conclusão**

Com essas informações pode-se perceber que a melhor configuração para 172.mgrid.m2b em
relação a cache L1 é: l1-isize 16k l1-dsize 512k l1-ibsize 32 l1-dbsize 128

**l1-icache** 

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 16107 | 16107 | 0 | 0 | 0 | 0 |
| Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 3381818 | 0 | 2281818 | 2638205 | 743613 | 0 |
| Demand misses rate | 0.0158 | 0.0000 | 0.0158 | 0.0145 | 0.0230 | 0.0000 |

###181.mcf.m2b 

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32 (base)

**l1-icache** 

Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 284 | 284 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**

Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 113562804 | 0 | 113562804 | 109382166 | 4180638 | 0
Demand misses rate | 0.5378 | 0.0000 | 0.5378 | 0.5689 | 0.2210 | 0.0000

####-maxtrace 30 -l1-isize nK -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32

Já com o valor 16k, o _miss rate_ é 0.0000.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

Já com o valor 32, o _miss rate_ é 0.0000.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

![Gráfico: Miss Rate x L1-dsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/181.mcf.m2b-l1-dsize.png)

Acima de 128k, a diferença é muito pequena para influenciar. 

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

![Gráfico: Miss Rate x L1-dbsize](https://github.com/Takeshi-/MC723/blob/master/exercicio2/181.mcf.m2b-l1-dbsize.png)

Acima de 1k, o valor de _miss rate_ aumenta.

**Conclusão**

Com essas informações pode-se perceber que a melhor configuração para 181.mgrid.m2b em
relação a cache L1 é: l1-isize 16k l1-dsize 128k l1-ibsize 32 l1-dbsize 1k

**l1-icache** 

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 284 | 284 | 0 | 0 | 0 | 0 |
| Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**

| Type | Total | Instrn | Data | Read | Write | Misc |
| ---- | ----- | ------ | ---- | ---- | ----- | ----- |
| Demand misses | 21081446 | 0 | 2108144 | 20795786 | 285660 | 0 |
| Demand misses rate | 0.0998 | 0.0000 | 0.0998 | 0.1082 | 0.0151 | 0.0000 |

###Conclusão

Em relação as caches de instrução apenas o 30.apsi.m2b teve valor de _miss rate_ acima de 0 (0.0005).
Já em relação as caches de dados, 164.gzip.m2b foi a melhor com a melhor configuração. 

![Gráfico: Miss Rate x Traces](https://github.com/Takeshi-/MC723/blob/master/exercicio2/grafico.png)

