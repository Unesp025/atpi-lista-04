#include<stdio.h>
#include "ex02-transposta.c"
#include "ex07-liberar.c"
#include "ex08-alocar-input.c"
#include "ex09-imprimir.c"

int main()
{
    int linhas, colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    int** a = preencherMatrizDinamica(linhas, colunas);
    int** c = obterTransposta(a, linhas, colunas);

    printf("\nOriginal:\n");
    imprimirMatriz(a, linhas, colunas);
    printf("\n\nTransposta:\n");
    imprimirMatriz(c, colunas, linhas);

    liberarEspaco(a, linhas);
    liberarEspaco(c, colunas);
    return 0;
}