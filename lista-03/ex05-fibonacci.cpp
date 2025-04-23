#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main() {
    int num, atual, penultimo =1, ultimo = 1;
    string cadeia = "0 1 1";
    printf(
        "\nLista 03 - Computacao Noturno 025\n"
        "## Exercicio 5: Fibonacci - Obter cadeia ate valor passado ##\n"
        "Aluno: Bruno Concli - 251151409\n\n"); 

    printf("Digite o termo que deseja da cadeia Fibonacci: ");
    scanf("%d", &num);
    while (num <= 1) {
        printf("A cadeia comeca com 0 1 1, portanto"
            "Digite um valor maior que 1: ");
        scanf("%d", &num);
    }

    while (penultimo + ultimo <= num) {
        atual = penultimo + ultimo;
        cadeia += " " + to_string(atual);

        penultimo = ultimo;
        ultimo = atual; 
    }

    cout << "Cadeia Fibonacci mais proxima do valor de " << num << ": " << cadeia;
    return(0);
}