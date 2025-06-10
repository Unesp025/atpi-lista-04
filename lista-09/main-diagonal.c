#include<stdio.h>
#include "ex04-diagonal.c"
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
    
    int** matriz = preencherMatrizDinamica(linhas, colunas);
    int somaDiagonal = obterSomaDiagonalPrincipal(matriz, linhas, colunas);

    printf("\nMatriz informada:\n");
    imprimirMatriz(matriz, linhas, colunas);
    printf("\nResultado da soma diagonal: %d", somaDiagonal);

    liberarEspaco(matriz, linhas);
    return 0;
}