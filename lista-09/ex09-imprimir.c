#include<stdio.h>
#include<stdlib.h>

void imprimirMatriz(int** matriz, int linhas, int colunas)
{
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++) 
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}
