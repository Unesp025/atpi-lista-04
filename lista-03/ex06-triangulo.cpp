#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main() {
    int base, quantidadeEspacos, quantidadeEstrelas, quantidadeLinhas = 0;
    printf(
        "\nLista 03 - Computacao Noturno 025\n"
        "## Exercicio 6: Desenhar um triangulo  ##\n"
        "Aluno: Bruno Concli - 251151409\n\n"); 

    printf("Informe a base do triangulo: ");
    scanf("%d", &base);
    while (base <= 2) {
        printf("Por favor, considere uma base de no minimo 3 unidades: ");
        scanf("%d", &base);
    }
    quantidadeEspacos = base / 2;
    if (base % 2 == 0) {
        quantidadeEstrelas = 2;
    }
    else {
        quantidadeEstrelas = 1;
    }
    while (quantidadeEstrelas <= base) {
        string cadeia(quantidadeEstrelas, '*');
        string espacos(quantidadeEspacos, ' ');
        cout << espacos << cadeia << "\n";

        quantidadeEstrelas += 2;
        quantidadeEspacos -= 1;
        quantidadeLinhas ++;
    }
    
    cout << "\nTriangulo de base " << base << " e altura " << quantidadeLinhas; 
    return(0);
}
