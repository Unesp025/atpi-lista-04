#include<stdio.h>
#include<stdlib.h>

int a, b, c;

int quadratica(int x) {
	return (a*x*x + b*x + c);
}

int main() {
	printf(
        "\nLista 05 - Computacao Noturno 025\n"
        "## Exercicio 2: Funcao quadratica  ##\n"
        "Aluno: Bruno Concli - 251151409\n\n"); 
	printf("%d", quadratica(5));	 	

	getchar();
    getchar();
	return 0;
}