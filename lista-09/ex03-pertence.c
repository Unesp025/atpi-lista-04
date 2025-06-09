#include<stdio.h>
#include<stdlib.h>

void imprimirIndice(int busca, int** matriz, int linhas, int colunas)
{
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			if (matriz[i][j] == busca) 
			{
				printf("(%d, %d)", i, j);
				return;
			}
		}
	}
	printf("Valor %d nao encontrado na matriz", busca);
}
