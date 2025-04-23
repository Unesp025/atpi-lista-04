#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main() {
    int posicao, atual, penultimo = 1, ultimo = 1;
    string cadeia = "0 1 1";
    printf(
        "\nLista 03 - Computacao Noturno 025\n"
        "## Exercicio 4: Fibonacci: Obter valor de uma posicao ##\n"
        "Aluno: Bruno Concli - 251151409\n\n"); 

    printf("Digite a posicao que deseja da cadeia Fibonacci: ");
    scanf("%d", &posicao);
    while (posicao < 3) {
        printf("A cadeia comeca com 0 1 1, portanto"
            "Digite uma posicao maior que 3: ");
        scanf("%d", &posicao);
    }

    for (int i = 4; i <= posicao; i++) {
        atual = penultimo + ultimo;
        cadeia += " " + to_string(atual);

        penultimo = ultimo;
        ultimo = atual; 
    }

    cout << "Cadeia obtida ate a posicao " << posicao << ": " << cadeia;
    // usei cout pois estava com dificuldade de imprimir minha string "cadeia" com printf
    return(0);
}