**Bruno Takeshi Hori		RA:145539**

#Relatório do exercício 2
 
Foram simulados 4 programas com um nível de cache.

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

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ | 
| 32k | 6122794 | 0.0102 |
| 64k | 855219 | 0.0014 | 
| 128k | 855219 | 0.0014 |

Acima de 64k no tamanho da L1 de instruções não altera mais.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 6749790 | 0.0112 |
| 128 | 3897193 | 0.0065 |
| 256 | 2416469 | 0.0040 |
| 512 | 1635409 | 0.0027 |
| 1k | 1235839 | 0.0021 |
| 2k | 936115 | 0.0016 |
| 4k | 845315 | 0.0014 |

Valores acima de 2k para o bloco de instruções da L1 começam a fazer pouca diferença.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 32k | 6141758 | 0.0272 |
| 64k | 5345605 | 0.0237 |
| 128k | 4544528 | 0.0201 |
| 256k | 3712786 | 0.0164 |
| 512k | 2111024 | 0.0093 |
| 1M | 2057389 | 0.0091 |

Acima de 512k, a mudança é negligível.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 6727194 | 0.0298 |
| 128 | 6310419 | 0.0279 |
| 256 | 8839642 | 0.0391 |

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

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 32k | 8000415 | 0.0133 | 
| 64k | 284 | 0.0000 |
| 128k | 284 | 0.0000 |

Ocorre uma queda gigantesca no número de misses a partir do valor 64k.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 5274430 | 0.0088 |
| 128 | 5273121 | 0.0088 |

Acima de 64, ocorre mudanças muito pequenas.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 32k | 7065453 | 0.0361 |
| 64k | 5464112 | 0.0279 |
| 128k | 2712809 | 0.0139 |
| 256k | 777166 | 0.0040 |
| 512k | 229904 | 0.0012 |
| 1M | 172185 | 0.0009 |

Acima de 512k, a diferença começa a ser muito pequena.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 8329485 | 0.0429 |
| 128 | 9161289 | 0.0474 |

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

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 32 | 8596 | 0.0000 |

O valor de 16k já é ideal, pois já obtinha um _miss rate_ de 0.0000

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 11926 | 0.0000 |

O valor de 32 já é ideal, pois já obtinha um _miss rate_ de 0.0000.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 32k | 23450401 | 0.1093 |
| 64k | 22938863 | 0.1069 |
| 128k | 15582577 | 0.0726 |
| 256k | 15399726 | 0.0718 |
| 512k | 12765831 | 0.0595 |
| 1M | 12679372 | 0.0591 |

Acima do valor de 512k, a diferença é mínima.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 19789230 | 0.0922 |
| 128 | 18107442 | 0.0844 |
| 256 | 17791573 | 0.0829 |

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

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 32k | 271 | 0.0000 |

Já com o valor 16k, o _miss rate_ é 0.0000.

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize n -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 167 | 0.0000 |

Já com o valor 32, o _miss rate_ é 0.0000.

####-maxtrace 30 -l1-isize 16K -l1-dsize nK -l1-ibsize 32 -l1-dbsize 32

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 32k | 112619007 | 0.5333 |
| 64k | 111559002 | 0.5283 |
| 128k | 110625983 | 0.5239 |
| 256k | 109918752 | 0.5205 |

Acima de 128k, a diferença é muito pequena para influenciar. 

####-maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize n

| n | Demand misses total | Demand misses rate total |
|---- | ----- | ------ |
| 64 | 113562804 | 0.5378 |
| 128 | 64411851 | 0.3050 |
| 256 | 45913709 | 0.2174 |
| 512 | 32623848 | 0.1545 |
| 1k | 28372656 | 0.1344 |
| 2k | 32570562 | 0.1542 |

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

![Gráfico: Miss Rate x Traces]()

