#include<stdio.h>
#include "ex06-alocar.c"

int** obterTransposta(int** matriz, int linhas, int colunas)
{
	int** c = alocarMatriz(colunas, linhas);
	for(int i =0; i< colunas; i++)
	{
		for(int j = 0; j<linhas; j++)
		{
			c[i][j] = matriz[j][i];
		}
	}
	return c;
}

