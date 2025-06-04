#include<stdio.h>
#include<stdlib.h>

int main()
{
	int tamanho;
	printf("Informe um temanaho: ");
	scanf("%d", &tamanho);
	int* vetor = (int*) malloc(tamanho * sizeof(int));
	if (vetor!= NULL)
	{
		for (int i = 0; i < tamanho; i++)
		{
			vetor[i] = i;
			printf("%d\n", vetor[i]);
		}
		free(vetor);

	}
	return(0);
}
