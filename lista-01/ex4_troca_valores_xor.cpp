#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main() {
    printf("\n## Exercicio 4: Troca valores, com apenas duas variaveis usando XOR ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Trocando valores...\n\n");
    
    a = a^b;
    b = a^b;
    a = a^b;

    printf("Os novos valores sao:\na == %d\nb == %d\n", a, b);
    getchar();
    return(0);
}