#include <stdio.h>

int main()
{
	printf("Hello World\n");
	
	volatile int* mem = (int *)(100*1024*1024);
	
	while (*mem);
	
	*mem = 55;
	
	printf("%d\n",*mem);
	
	*mem = 0;
	
	return 0;
}
