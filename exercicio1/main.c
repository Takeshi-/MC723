#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

main(int argc,char *argv[])
{
    int n = atoi(argv[1]),aux, count = 0,chunk;
  
    if (n > 2)
        count++;

    #pragma omp parallel for \
    default(shared) private(aux)  \
    schedule(static,chunk)      \
    reduction(+:count)
    
    for (aux = 3 ; aux < n ; aux = aux+2 )
    {
        if (primo(aux))
            count++;
    }
    printf("%d\n",count);
}