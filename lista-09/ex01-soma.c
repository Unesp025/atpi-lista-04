#include "ex06-alocar.c"

int** somarDinamicamente(int** a, int** b, int linhas, int colunas)
{
	if (linhas != colunas) return NULL;
	int** c = alocarMatriz(linhas, colunas);
	for (int i = 0; i<linhas; i++)
	{
		for (int j = 0; j<colunas; j++)
		{
			int valor = a[i][j] + b[i][j];
			c[i][j] = valor;
		}
	}
	return c;
}