#include <stdio.h>
#include <stdlib.h>

volatile int procCounter = 0;
volatile int* gLock = (int *)(100*1024*1024);
volatile int lock1 = 0;
volatile int *vet;

void AcquireGlobalLock(){ while(*gLock){}}
void ReleaseGlobalLock(){*gLock = 0;}

void AcquireLocalLock(volatile int *lock){
	int i;
	AcquireGlobalLock();
	while(*lock){
		ReleaseGlobalLock();
   	for(i=0; i < 10; i++) {}
   	AcquireGlobalLock();
   }
	*lock = 1;
	ReleaseGlobalLock();
}

void ReleaseLocalLock(volatile int *lock){
	AcquireGlobalLock();
	*lock = 0;
	ReleaseGlobalLock();
}

void intercala(volatile int *vet, int esq, int dir)
{
	int i,j,k,metadeTamanho,*vetorTemp;
	// intercalacao no vetor temporario t
	metadeTamanho = (esq + dir) / 2;
    i = esq;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (dir - esq + 1));

    while(i < metadeTamanho + 1 || j  < dir + 1) {
        if (i == metadeTamanho + 1 ) { // i passou do final da primeira metade, pegar v[j]
            vetorTemp[k] = vet[j];
            j++;
            k++;
        } 
        else {
            if (j == dir + 1) { // j passou do final da segunda metade, pegar v[i]
                vetorTemp[k] = vet[i];
                i++;
                k++;
            } 
            else {
                if (vet[i] < vet[j]) { 
                    vetorTemp[k] = vet[i];
                    i++;
                    k++;
                } 
                else { 
                    vetorTemp[k] = vet[j];
                    j++;
                    k++;
                }
            }
        }

    }
    // copia vetor intercalado para o vetor original
    for(i = esq; i <= dir; i++) {
        vet[i] = vetorTemp[i - esq];
    }
    free(vetorTemp);

} 

void quick(volatile int *vet, int esq, int dir)
{
    int pivo = esq,i,ch,j;
    
    for(i=esq+1;i<=dir;i++)
    {
        j = i;
        if(vet[j] < vet[pivo])
        {
			ch = vet[j];
			while(j > pivo)
			{    
			vet[j] = vet[j-1];
			j--;
			}
			vet[j] = ch;
			pivo++;        
        }  
    }
    
    if(pivo-1 > esq)
        quick(vet,esq,pivo-1);
    
    if(pivo+1 < dir)
        quick(vet,dir,pivo+1);

}

void main2()
{
	int procNumber,i,n;
	int count = 0;
	
	AcquireLocalLock(&lock1);
	procNumber = procCounter;
	procCounter++;
	
	if (procNumber == 0)
	{
		scanf("%d",&n);
		vet = calloc(n,sizeof(int));
		for ( i = 0 ; i < n ; i++ )
			scanf("%d",&vet[i]);
	}
	ReleaseLocalLock(&lock1);
	
	if (procNumber == 0)
	{
		quick(vet,0,n/2);
		count++;
	}
	else
	{
		quick(vet,n/2 + 1,n-1);
		count++;
	}

	if (count == 2)
	{
		intercala(vet,0,n-1);
		for (i = 0; i < n; i ++)
			printf("%d ",vet[i]);
		printf("\n");
	}
}

int main(int ac, char *av[])
{
	main2();
	return 0;
}
