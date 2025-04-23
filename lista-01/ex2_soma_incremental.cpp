#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2;
    printf("\n## Exercicio 2: Soma por incremento ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    num2 = num2 + num1;
    printf("O resultado da soma e %d", num2);
    getchar();
    return(0);
}