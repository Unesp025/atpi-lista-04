#include<stdio.h>
#include<stdlib.h>

int** somarMatrizes(int a[3][3], int b[3][3])
{
	int** c = (int**) malloc(3*sizeof(int*));
	if (c!=NULL)
	{
		for (int p = 0; p<2; p++)
		{
			c[p] = (int*) malloc(3 * sizeof(int));
			if (c[p]==NULL) return(1);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;  j<3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	return c;
}

int main()
{
	int a[3][3] =
	{
		{1,3,5},{7,9,11},{13,15,17}
	};
	int b[3][3] =
	{
		{2,4,6},{8,10,12},{14,16,18}
	};

	// continuar!! pulando para o exercicio 06
}
