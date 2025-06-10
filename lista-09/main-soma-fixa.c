#include<stdio.h>
#include "ex01-soma-fixa.c"
#include "ex07-liberar.c"
#include "ex09-imprimir.c"

int main () 
{   
    printf("\n= Obter soma de duas matrizes 3x3 =\n");

    int a[3][3] =
    {
        {11,12,13},
        {21,22,23},
        {31,32,33}
    };
    int b[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int** c = somarMatrizes(a, b);
    imprimirMatriz(c, 3, 3);
    liberarEspaco(c, 3);
    return 0;
}