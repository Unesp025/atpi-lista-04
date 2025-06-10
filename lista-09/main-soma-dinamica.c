#include<stdio.h>
#include "ex01-soma-dinamica.c"
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

    int** a = preencherMatrizDinamica(linhas,colunas);
    int** b = preencherMatrizDinamica(linhas,colunas);

    int** c = somarDinamicamente(a, b, linhas, colunas);
    imprimirMatriz(c, linhas, colunas);

    liberarEspaco(a, linhas);    
    liberarEspaco(b, linhas);    
    return 0;
}