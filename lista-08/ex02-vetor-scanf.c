#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, valor;
	printf("Infore um tamanaho: ");
	scanf("%d", &n);
	int* vetor = (int*) malloc((n) * sizeof(int));
	if (vetor!=NULL)
	{
		printf("Digite abaixo os %d digitos:\n", n);
		printf("primeiro: %d\nultimo: %d\n", vetor, &vetor[n-1]);
		for (; vetor<&vetor[n]; vetor++)
		{
			scanf("%d", &valor);
			*vetor = valor;
			printf("valor no endereco %d: %d\n", vetor, *vetor);
		}

		printf("primeiro: %d\n", vetor);
		printf("ultimmo: %d\n", &vetor[n-1]);
		for (int i = 0; i < n; i++)
			printf("%d ", &vetor[i]);
		free(vetor);
	}
	return(0);
}
