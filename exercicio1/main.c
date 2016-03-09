#include <stdio.h>

main(int argc,char *argv[])
{
    int n = atoi(argv[1]),aux, count = 0;
  
    if (n > 2)
        count++;

    for (aux = 3 ; aux < n ; aux = aux+2 )
    {
        if (primo(aux))
            count++;
    }
    printf("%d\n",count);
}