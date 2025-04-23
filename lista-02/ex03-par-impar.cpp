#include<stdio.h>
#include<stdlib.h>

int main() {
    int num;
    printf("\nLista 02 - Computacao Noturno 025\n");
    printf("## Exercicio 3: Inteiro Par ou Impar##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("O inteiro %d e Par", num);
    else 
        printf("O inteiro %d e Impar", num);

    getchar();
    getchar();
    return(0);
}