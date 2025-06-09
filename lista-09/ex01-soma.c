#include<stdio.h>
#include<stdlib.h>

int somarMatrizes(int** mtz01, int** mtz02, int linhas, int colunas)
{
	int mtzResultado[linhas][colunas];
	for (int i < 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			mtzResultado[i][j] = mtz01[i][j] + mtz02[i][j];
		}
	}
	return mtzResultado;
}

int main()
{
	int mtz01[3][3] =
	{
		{1, 3, 5},
		{7, 9, 11},
		{13, 15, 17}
	};
	int mtz02[3][3] =
	{
		{2, 4, 6},
		{8, 10, 12},
		{14, 16, 18}
	};
	// a completar!!!
}
