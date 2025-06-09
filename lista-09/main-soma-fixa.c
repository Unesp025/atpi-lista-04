#include<stdio.h>
#include "ex01-soma-fixa.c"
#include "ex07-liberar.c"
#include "ex09-imprimir.c"

int main () 
{   
    int a[3][3] =
    {
        {1,3,5},
        {7,9,11},
        {13,14,15}
    };
    int b[3][3] =
    {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };
    int** c = somarMatrizes(a, b);
    if (c==NULL) {
        printf("Matriz nula");
        return 1;
    }
    imprimirMatriz(c, 3, 3);
    liberarEspaco(c, 3);
    return 0;
}