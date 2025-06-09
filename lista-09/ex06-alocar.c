#include<stdio.h>
#include<stdlib.h>

int** alocarMatriz(int linhas, int colunas)
{
	int** mtz = (int**)malloc(linhas*sizeof(int*));
	// alocacao da memoria
	if (mtz!=NULL)
	{
		for (int i = 0; i<linhas; i++)
		{
			mtz[i] = (int*)malloc(colunas*sizeof(int));
			if (mtz[i]==NULL) return 1;
		}
	}
	return mtz;
}

int main()
{
	int valor;
	printf("Digite a quantidade de linhas desejada: ");
	scanf("%d", &linhas);
	printf("Agora a quantidade de colunas: ");
	scanf("%d", &colunas);

	int** matriz = alocarMatriz(3, 3);
	for (int i = 0; i<linhas;i++)
	{
		for (int j =0; j<colunas;j++)
		{
			printf("[%d][%d]: ", i, j);
			scanf("%d", &valor);
			matriz[i][j] = valor;
		}
	}

	// for () para exibir essa matriz

	free(matriz);
	return(0);
}
