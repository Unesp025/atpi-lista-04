#include<stdio.h>
#include<stdlib.h>

int main() {
    int num1, num2, num3, temp;
    char ordenacao = 'c';
    printf("\nLista 02 - Computacao Noturno 025\n");
    printf("## Exercicio 5: Ordenacao de tres inteiros ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("\nOrdenacao Crescente - c\nOrdenacao Decrescente - d\nComo deseja ordenar os numeros?: ");
    scanf(" %c", &ordenacao);

    while (ordenacao != 'c' && ordenacao != 'd') {
        printf("\nOrdenacao Crescente - c\nOrdenacao Decrescente - d\nPor favor, insira uma opcao valida: ");
        scanf("%c", &ordenacao);
    }

    if (ordenacao == 'c') {
        if (num1 > num2) {
            temp = num2;
            num2 = num1;
            num1 = temp;
        }
        if (num2 > num3) {
            temp = num3;
            num3 = num2;
            num2 = temp;
        }
        if (num1 > num2) {
            temp = num2;
            num2 = num1;
            num1 = num2;
        }
        printf("Numeros ordenados em ordem crescente: (%d, %d, %d)", num1, num2, num3);
    }
    
    else {
        if (num1 < num2) {
            temp = num2;
            num2 = num1;
            num1 = temp;
        }
        if (num2 < num3) {
            temp = num3;
            num3 = num2;
            num2 = temp;
        }
        if (num1 < num2) {
            temp = num2;
            num2 = num1;
            num1 = num2;
        }
        printf("Numeros ordenados em ordem descrescente: (%d, %d, %d)", num1, num2, num3);
    }

    getchar();
    getchar();
    return(0);
}