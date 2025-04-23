#include<stdio.h>
#include<stdlib.h>

int main() {
    int num = 0;
    printf(
        "\nLista 03 - Computacao Noturno 025\n"
        "## Exercicio 2: Primo ##\n"
        "Aluno: Bruno Concli - 251151409\n\n"); 

    printf("Digite um numero: ");
    scanf("%d", &num);
    while (num <= 1) {
        printf("Por favor, digite um numero maior que 1: ");
        scanf("%d", &num);
    }
    if (num % 2 == 0) {
        if (num != 2) 
            printf("O numero %d NAO e primo.", num);
        else 
            printf("O numero %d E primo!", num);
        return (0);
    }
    for (int d = num-2; d > 2; d--) {
        if (num % d == 0) {
            printf("O numero %d NAO e primo.", num);
            return (0);
        }
    }
    
    printf("O numero %d E primo!", num);
    return(0);
}