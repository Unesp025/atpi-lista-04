#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int eh_palindromo(int numero) {
    string numeroEmString = to_string(numero);
    int tamanho = numeroEmString.length();
    int restoTamanhoSobreDois = tamanho % 2;
    // se o restoTamanhoSobreDois for 1, o tamanho é impar.  
    // Nesse caso, o laço vai continuar enquanto "i" for menor que (tamanho - 1) / 2;

    for (int i = 0; i < (tamanho - restoTamanhoSobreDois)/2; i++) {
        if (numeroEmString[i] != numeroEmString[(tamanho-1)-i]) return 0;
    }
    return 1;
}

int main() {
    int numero;
 
    cout << (
        "\nLista 05 - Computacao Noturno 025\n"
        "## Exercicio 6: Eh palindromo?  ##\n"
        "Aluno: Bruno Concli - 251151409\n\n");

    cout << "Por favor, digite um numero menor do que 2.147.483.647: ";
    cin >> numero;

    if (eh_palindromo(numero) == 1) 
        cout << "\nO numero " << numero << " eh palindromo!";
    else 
        cout << "\nO numero " << numero << " nao eh palindromo.."; 

    getchar();
    getchar();
    return 0;
}