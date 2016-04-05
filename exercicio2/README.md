**Bruno Takeshi Hori		RA:145539**

#Relatório do exercício 2
 
###301.apsi.m2b 

1. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32 (base)

**l1-icache** 
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 11664602 | 11664602 | 0 | 0 | 0 | 0 |
|Demand misses rate | 0.0194 | 0.0194 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 7858199 | 0 | 7858199 | 3679631 | 4178568 | 0|
|Demand misses rate | 0.0348 | 0.0000 | 0.0348 | 0.0260 | 0.0495 | 0.0000|

2. -maxtrace 30 -l1-isize 32K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32

**l1-icache** 
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 6122794 | 6122794 | 0 | 0 | 0 | 0 |
|Demand misses rate | 0.0102 | 0.0102 | 0.0000 | 0.0000 | 0.0000 | 0.0000| 

**l1-dcache**
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 7858199 | 0 | 7858199 | 3679631 | 4178568 | 0|
|Demand misses rate | 0.0348 | 0.0000 | 0.0348 | 0.0260 | 0.0495 | 0.0000|

3. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 64 -l1-dbsize 32

**l1-icache** 
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 6749790 | 6749790 | 0 | 0 | 0 | 0 |
|Demand misses rate | 0.0112 | 0.0112 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 7858199 | 0 | 7858199 | 3679631 | 4178568 | 0|
|Demand misses rate | 0.0348 | 0.0000 | 0.0348 | 0.0260 | 0.0495 | 0.0000|

4. -maxtrace 30 -l1-isize 16K -l1-dsize 32K -l1-ibsize 32 -l1-dbsize 32

**l1-icache** 
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 11664602 | 11664602 | 0 | 0 | 0 | 0 |
|Demand misses rate | 0.0194 | 0.0194 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 6141758 | 0 | 6141758 | 2717649 | 3424109 | 0|
|Demand misses rate | 0.0272 | 0.0000 | 0.0272 | 0.0192 | 0.0405 | 0.0000|

5. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 64

**l1-icache** 
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 11664602 | 11664602 | 0 | 0 | 0 | 0 |
|Demand misses rate | 0.0194 | 0.0194 | 0.0000 | 0.0000 | 0.0000 | 0.0000 |

**l1-dcache**
|Type | Total | Instrn | Data | Read | Write | Misc|
|---- | ----- | ------ | ---- | ---- | ----- | -----|
|Demand misses | 6727194 | 0 | 6727194 | 2824503 | 3902691 | 0|
|Ddemand misses rate | 0.0298 | 0.0000 | 0.0298 | 0.0200 | 0.0462 | 0.0000|

###164.gzip.m2b 


1. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32 (base)

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

2. -maxtrace 30 -l1-isize 32K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 8000415 | 8000415 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0133 | 0.0133 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 8500351 | 0 | 8500351 | 7782080 | 718271 | 0
demand misses rate | 0.0434 | 0.0000 | 0.0434 | 0.0528 | 0.0148 | 0.0000

3. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 64 -l1-dbsize 32

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 5274430 | 5274430 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0088 | 0.0088 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 8500351 | 0 | 8500351 | 7782080 | 718271 | 0
demand misses rate | 0.0434 | 0.0000 | 0.0434 | 0.0528 | 0.0148 | 0.0000

4. -maxtrace 30 -l1-isize 16K -l1-dsize 32K -l1-ibsize 32 -l1-dbsize 32

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 8002051 | 8002051 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0133 | 0.0133 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 7065453 | 0 | 7065453 | 6497304 | 568149 | 0
demand misses rate | 0.0361 | 0.0000 | 0.0361 | 0.0441 | 0.0117 | 0.0000

5. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 64

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 8002051 | 8002051 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0133 | 0.0133 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 8329485 | 0 | 8329485 | 7643792 | 685693 | 0
demand misses rate | 0.0429 | 0.0000 | 0.0429 | 0.0523 | 0.0143 | 0.0000

###172.mgrid.m2b 


1. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32 (base)

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 16107 | 16107 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 24498691 | 0 | 24498691 | 21117670 | 3381021 | 0
demand misses rate | 0.1142 | 0.0000 | 0.1142 | 0.1159 | 0.1044 | 0.0000

2. -maxtrace 30 -l1-isize 32K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 32

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 8596 | 8596 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 24498691 | 0 | 24498691 | 21117670 | 3381021 | 0
demand misses rate | 0.1142 | 0.0000 | 0.1142 | 0.1159 | 0.1044 | 0.0000

3. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 64 -l1-dbsize 32

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 11926 | 11926 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 24498691 | 0 | 24498691 | 21117670 | 3381021 | 0
demand misses rate | 0.1142 | 0.0000 | 0.1142 | 0.1159 | 0.1044 | 0.0000

4. -maxtrace 30 -l1-isize 16K -l1-dsize 32K -l1-ibsize 32 -l1-dbsize 32

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 16107 | 16107 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 23450401 | 0 | 23450401 | 20251739 | 3198662 | 0
demand misses rate | 0.1093 | 0.0000 | 0.1093 | 0.1112 | 0.0988 | 0.0000

5. -maxtrace 30 -l1-isize 16K -l1-dsize 16K -l1-ibsize 32 -l1-dbsize 64

**l1-icache** 
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
Demand misses | 16107 | 16107 | 0 | 0 | 0 | 0 
Demand misses rate | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 | 0.0000 

**l1-dcache**
Type | Total | Instrn | Data | Read | Write | Misc
---- | ----- | ------ | ---- | ---- | ----- | -----
demand misses | 19789230 | 0 | 19789230 | 17885029 | 1904201 | 0
demand misses rate | 0.0922 | 0.0000 | 0.0922 | 0.0982 | 0.0588 | 0.0000
