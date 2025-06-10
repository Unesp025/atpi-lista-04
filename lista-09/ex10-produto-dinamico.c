#include<stdio.h>

int** obterProdutoEntreMatrizes(int** A, int** B, int linhas_A, int colunas_A, int linhas_B, int colunas_B)
{
    if (colunas_A != linhas_B) return NULL;
    int** C = alocarMatriz(linhas_A, colunas_B);
    int valorAtual;
    for (int jb = 0; jb < colunas_B; jb++)
    {
        for (int ia = 0; ia<linhas_A; ia++)
        {
            valorAtual = 0;
            for (int ja = 0; ja < colunas_A; ja++)
            {
                valorAtual += A[ia][ja] * B[ja][jb];
            }
            C[ia][jb] = valorAtual;
        }
    }
    return C;
}