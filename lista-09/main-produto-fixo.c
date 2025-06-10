#include "ex05-produto-fixo.c"
#include "ex07-liberar.c"
#include "ex09-imprimir.c"

int main()
{
    printf("\n= Obter o produto entre matrizes 3x3 =\n");

    int A[3][3] =
    {
        {2,0,1},
        {5,3,2},
        {8,1,4}
    };
    int B[3][3] =
    {
        {4,3,5},
        {1,2,6},
        {0,6,7},
    };
    
    int** C = obterProdutoEntreMatrizes3x3(A, B);
    printf("Primeira matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMultiplicada pela segunda matriz:\n");
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\nResulta em:\n");
    imprimirMatriz(C, 3, 3);
    
    liberarEspaco(C, 3);
    return 0;
}