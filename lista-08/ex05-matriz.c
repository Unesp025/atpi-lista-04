#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* matriz = NULL;
	matriz = (int*) calloc(3*3, sizeof(int));
	if (matriz == NULL) return(1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", matriz[i*3 + j]);
		}
		printf("\n");
	}
	free(matriz);
	return(0);
}
