#include<stdio.h>
#include<stdlib.h>

bool ehPrimo(int numero) {
	if (numero <= 1) return false;
	if (numero % 2 == 0 && numero != 2) return false;
	for (int i = 3; i < numero; i++) 
		if (numero % i == 0) return false;	
	return true;
}

int main() {
	int numero;
	
	printf(
        "\nLista 05 - Computacao Noturno 025\n"
        "## Exercicio 4: Eh Primo? ##\n"
        "Aluno: Bruno Concli - 251151409\n\n");

	printf("Digite um valor: ");
	scanf("%d", &numero);
	
	if (ehPrimo(numero)) printf("Eh primo!");
	else printf("Este numero nao eh primo");

	getchar();
    getchar();
	return 0;
}	

