#include<stdio.h>
#include<stdlib.h>

int main() {
    float num1, num2;
    printf("\n## Exercicio 3: Soma de flutuantes ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Para esse exercicio, nao se esqueca do '.'! Exemplo (1.2, 3.0...)\n");
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    printf("O resultado da soma e: %f", (num1 + num2));
    getchar();
    return(0);
}