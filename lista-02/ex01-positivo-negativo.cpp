#include<stdio.h>
#include<stdlib.h>

int main() {
    int num;

    printf("\nLista 02 - Computacao Noturno 025\n");
    printf("## Exercicio 1: Inteiro Positivo ou Negativo ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num == 0) 
        printf("Zero se trata de um numero neutro."); 
    else if (num > 0)
        printf("O numero %d e positivo.", num);
    else
        printf("O numero %d e negativo", num);

    getchar();
    getchar();
    return(0);
}