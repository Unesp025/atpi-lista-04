#include<stdio.h>
#include<stdlib.h>

int main() {
    float num1, num2;
    int operacao;
    printf(
        "\nLista 03 - Computacao Noturno 025\n"
        "## Exercicio 3: Calculadora ##\n"
        "Aluno: Bruno Concli - 251151409\n\n"); 

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf(
        "0 - Soma\n"
        "1 - Subtracao\n"
        "2 - Multiplicacao\n"
        "3 - Divisao\n"
        "Escolha a operacao a ser realizada: ");
    scanf("%d", &operacao);

    if (operacao == 0) 
        printf("A soma entre %.2f e %.2f = %.2f", num1, num2, (num1 + num2));
    
    else if (operacao == 1) 
        printf("A subtracao entre %.2f e %.2f = %.2f", num1, num2, (num1 - num2));

    else if (operacao == 2) 
        printf("A multiplicacao entre %.2f e %.2f = %.2f", num1, num2, (num1 * num2));

    else if (operacao == 3) 
        printf("A divisao entre %.2f e %.2f = %.2f", num1, num2, (num1 / num2));

    return(0);
}