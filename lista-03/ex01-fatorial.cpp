#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, resultado = 1;
    printf(
        "\nLista 03 - Computacao Noturno 025\n"
        "## Exercicio 1: Fatorial ##\n"
        "Aluno: Bruno Concli - 251151409\n\n"); 

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (int d = num; d > 1; d--) {
        resultado *= d;
    }
    printf("O fatorial de %d = %d", num, resultado);

    return(0);
}