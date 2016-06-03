#include <stdio.h>

int main()
{
	printf("Hello World\n");
	
	volatile int* lock = (int *)(100*1024*1024);
	while(*lock);
	*lock = 55;
	
	printf("%d\n",*lock);
	printf("%d\n",*lock);
	printf("%d\n",*lock);
	*lock = 0;
	
	return 0;
}
