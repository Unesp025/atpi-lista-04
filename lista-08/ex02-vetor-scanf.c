#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* vetor;
	int tamanho;
	printf("Infore um temanaho: ");
	scanf("%d", &tamanho);
	vetor = (int*) malloc(tamanho * sizeof(int));
	for (int i = 0; i < tamanho; i++)
	{	
		scanf("%d", vetor[i]);
	}
	free(vetor);
	return(0);
}
