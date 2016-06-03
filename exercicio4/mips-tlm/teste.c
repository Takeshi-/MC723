#include <stdio.h>

int main()
{	
	int v[101*1024*1024],i;
	
	for (i=0;i<101*1024*1024;i++)
		v[i] = i;
	for (i=0;i<101*1024*1024;i++)
		printf("%d ",v[i]);
		
	printf("\n");
	return 0;
}
