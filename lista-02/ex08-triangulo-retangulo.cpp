#include<stdio.h>
#include<stdlib.h>

int main() {
    int ladoA, ladoB, ladoC;
    printf("\nLista 02 - Computacao Noturno 025\n");
    printf("## Exercicio 6: Triangulo e retangulo? ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Informe o primeiro lado: ");
    scanf("%d", &ladoA);
    
    printf("Informe o segundo lado: ");
    scanf("%d", &ladoB);
    
    printf("Informe o terceiro lado: ");
    scanf("%d", &ladoC);

    if (
        (ladoA*ladoA == ladoB*ladoB + ladoC*ladoC) || 
        (ladoB*ladoB == ladoA*ladoA + ladoC*ladoC) || 
        (ladoC*ladoC == ladoA*ladoA + ladoB*ladoB)) 
        printf("O triangulo de lados %d, %d e %d e retangulo", ladoA, ladoB, ladoC);

    else
        printf("O triangulo de lados %d, %d e %d NAO e retangulo", ladoA, ladoB, ladoC);

    getchar();
    getchar();
    return(0);
}