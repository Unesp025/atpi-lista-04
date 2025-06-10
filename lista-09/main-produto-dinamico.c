#include<stdio.h>
#include "ex07-liberar.c"
#include "ex08-alocar-input.c"
#include "ex09-imprimir.c"
#include "ex10-produto-dinamico.c"

int main()
{
    printf("\n= Obter produto entre duas matrizes alocadas dinamicamente =\n");

    int linhas_A, colunas_A;
    int linhas_B, colunas_B;

    printf("Quantidade de linhas da primeira matriz: ");
    scanf("%d", &linhas_A);
    printf("Quantidade de colunas da primeira matriz: ");
    scanf("%d", &colunas_A);
    int** A = preencherMatrizDinamica(linhas_A, colunas_A);
    
    printf("\nQuantidade de linhas da segunda matriz: ");
    scanf("%d", &linhas_B);
    printf("Quantidade de colunas da segunda matriz: ");
    scanf("%d", &colunas_B);
    int** B = preencherMatrizDinamica(linhas_B, colunas_B);
    
    int** C = obterProdutoEntreMatrizes(A, B, linhas_A, colunas_A, linhas_B, colunas_B);

    printf("\nMatriz A:\n");
    imprimirMatriz(A, linhas_A, colunas_A);
    printf("\nMultiplicando a Matriz B:\n");
    imprimirMatriz(B, linhas_B, colunas_B);
    printf("\nResulta na Matriz C:\n");
    imprimirMatriz(C, linhas_A, colunas_B);

    liberarEspaco(A, linhas_A);
    liberarEspaco(B, linhas_B);
    liberarEspaco(C, linhas_A);

    return 0;
}