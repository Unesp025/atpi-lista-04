#include<stdio.h>
#include<stdlib.h>

int** alocarMatriz(int linhas, int colunas)
{
	int** matriz = (int**)malloc(linhas*sizeof(int*));
	if (matriz!=NULL)
	{
		for (int i = 0; i<linhas; i++)
		{
			matriz[i] = (int*)malloc(colunas*sizeof(int));
			if (matriz[i]==NULL) return NULL;
		}
	}
	return matriz;
}
