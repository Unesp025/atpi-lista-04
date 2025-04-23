#include<stdio.h>
#include<stdlib.h>

int main() {
    int ladoA, ladoB, ladoC;
    printf("\nLista 02 - Computacao Noturno 025\n");
    printf("## Exercicio 6: Tipo do triangulo ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Informe o primeiro lado: ");
    scanf("%d", &ladoA);
    
    printf("Informe o segundo lado: ");
    scanf("%d", &ladoB);
    
    printf("Informe o terceiro lado: ");
    scanf("%d", &ladoC);

    if ((ladoA + ladoB <= ladoC) || (ladoB + ladoC <= ladoA) || (ladoA + ladoC <= ladoB)) 
        printf("O triangulo de lados %d, %d e %d e invalido", ladoA, ladoB, ladoC);

    else if (ladoA == ladoB && ladoA == ladoC) 
        printf("O triangulo de lados %d, %d e %d e equilatero", ladoA, ladoB, ladoC);
    else if (
        (ladoA == ladoB && ladoA != ladoC) || 
        (ladoA == ladoC && ladoA != ladoB) || 
        (ladoB == ladoC && ladoB != ladoA))
        printf("O triangulo de lados %d, %d e %d e isoceles", ladoA, ladoB, ladoC);

    else if (ladoA != ladoB != ladoC)
        printf("O triangulo de lados %d, %d e %d e escaleno", ladoA, ladoB, ladoC);

    getchar();
    getchar();
    return(0);
}