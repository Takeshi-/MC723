#include <stdio.h>
#include <math.h>

int primo(int n)
{
  int i;

  for(i = 2; i < n^(1/2); i ++)
    if (n % i == 0)
      return 0;
  
  return 1;
}
