#include<stdio.h>
#include<stdlib.h>
#include "ex06-alocar.c"

int** somarMatrizes(int a[3][3], int b[3][3])
{
	int** c = alocarMatriz(3, 3);
	for (int i = 0; i < 3; i++)
	{
		int valor;
		for (int j = 0;  j<3; j++)
		{
			valor = a[i][j] + b[i][j];
			c[i][j] = valor;
		}
	}
	return c;
}
