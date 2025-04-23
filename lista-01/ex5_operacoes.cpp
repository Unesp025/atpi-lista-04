#include<stdio.h>
#include<stdlib.h>

int main() {
    float num1, num2;
    printf("\n## Exercicio 5: Soma, subtracao, multiplicacao e divisao de dois numeros ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Escolha dois numeros 'a' e 'b', sendo 'b' diferente de 0.\n");
    printf("Valor de a: ");
    scanf("%f", &num1);

    printf("\nValor de b: ");
    scanf("%f", &num2);
    while (num2 == 0) {
        printf("\nNao deve haver divisao por zero!\nPor favor, escolha outro numero: ");
        scanf("%f", &num2);
    }

    printf("\n-- Resultado das operacoes --\n\nsoma: %f\nsubtracao: %f\nmultiplicacao: %f\ndivisao: %f\n", 
        (num1 + num2),
        (num1 - num2),
        (num1 * num2),
        (num1 / num2)
    );

    getchar();
    return(0);
}