#include <stdio.h>

int primo(int n)
{
  int i;

  for(i = 2; i < n; i ++)
    if (n % i == 0)
      return 0;
  
  return 1;
}

main(int argc,char *argv[])
{
    int n = atoi(argv[1]), aux, count = 0;
    
    if (n > 2)
        count++;

    for (aux = 3 ; aux < n ; aux = aux+2 )
    {
        if (primo(aux))
            count++;
    }
    printf("%d\n",count);
}