#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, valorAbsoluto; 
    printf("\nLista 02 - Computacao Noturno 025\n");
    printf("## Exercicio 2: Valor absoluto de um inteiro ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    valorAbsoluto = num < 0 ? num*(-1) : num;
    printf("O valor absoluto de %d consite em %d", num, valorAbsoluto);

    getchar();
    getchar();
    return(0);
}