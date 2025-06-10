#include<stdio.h>
#include"ex03-pertence.c"
#include "ex07-liberar.c"
#include "ex08-alocar-input.c"
#include "ex09-imprimir.c"

int main ()
{
    printf("\n= Encontrar a posicao de um valor pertencente a matriz =\n");

    int linhas, colunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    
    int** a = preencherMatrizDinamica(linhas, colunas);
    
    int busca;
    printf("\nQual elemento deseja procurar?: ");
    scanf("%d", &busca);

    printf("\nMatriz de busca:\n");
    imprimirMatriz(a, linhas, colunas);
    imprimirIndice(busca, a, linhas, colunas);

    liberarEspaco(a, linhas);
    return 0;
}
