#include "ex06-alocar.c"

int** obterProdutoEntreMatrizes3x3(int A[3][3], int B[3][3])
{
    int** C = alocarMatriz(3, 3);
    int valorAtual;
    for (int jb = 0; jb < 3; jb++)
    {
        for (int ia = 0; ia<3; ia++)
        {
            valorAtual = 0;
            for (int ja = 0; ja < 3; ja++)
            {
                valorAtual += A[ia][ja]* B[ja][jb]; 
            }
            C[ia][jb] = valorAtual;
        }
    }
    return C;
}