#include<stdio.h>
#include<stdlib.h>

int* obterApenasPares(int* vetor, int tamanho)
{
	int* vetorPares;
	int quantidadePares= 0;	
	for (int i = 0; i < tamanho; i++)
	{
		if (vetor[i]%2==0) quantidadePares++;		
	}
	vetorPares = (int*) malloc(quantidadePares * sizeof(int));
	for (int i = 0; i < tamanho; i++)
	{
		for (int j = 0; j < quantidadePares; j++)
		{
			if (vetor[i]%2==0) vetorPares[j] = vetor[i];
		}
	}
	return vetorPares;
}

int main()
{
	int tamanho, valorAtual;
	int* vetor;
	printf("Informe o tamanho do vetor: ");	
	scanf("%d", &tamanho);
	vetor = (int*) malloc(tamanho*sizeof(int));
	for (int i = 0; i < tamanho; i++)
	{
		printf("Elemento [%d]: ", i);
		scanf("%d", &valorAtual);
		vetor[i] = valorAtual;
	}
	int* novoVetor = obterApenasPares(vetor, tamanho);
	for (int v = 0; v < tamanho; v++)
	{
		printf("%d ", novoVetor[v]);
	}

	free(vetor);
	free(novoVetor);
	return(0);
}