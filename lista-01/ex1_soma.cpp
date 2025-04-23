#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, resultado;
    printf("\n## Exercicio 1: Soma de dois numeros ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("O resultado da soma e %d", resultado);
    getchar();
    return(0);
}