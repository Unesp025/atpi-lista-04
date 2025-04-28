#include<stdio.h>
#include<stdlib.h>

int calcularImc(float massaKg, float alturaMetros) {
	float resultado = massaKg / (alturaMetros*alturaMetros);
	if (resultado <= 18.5) return 0;
	if (resultado <= 24.9) return 1;
	if (resultado <= 29.9) return 2;
	return 3;
}

void imprimirImc(float massaKg, float alturaMetros) {
	int resultado = calcularImc(massaKg, alturaMetros);
	if (resultado == 0) printf("Magreza");
	else if (resultado == 1) printf("Saudavel");
	else if (resultado == 2) printf("Sobrepeso");
	else if (resultado == 3) printf("Obesidade");
}

int main() {
	float massaKg, alturaMetros;
	
	printf(
        "\nLista 05 - Computacao Noturno 025\n"
        "## Exercicio 5: Indice de Massa Corporea ##\n"
        "Aluno: Bruno Concli - 251151409\n\n");

	printf("Digite sua massa em Kg: ");
	scanf("%f", &massaKg);
	printf("Digite sua altura em metros: ");
	scanf("%f", &alturaMetros);

	imprimirImc(massaKg, alturaMetros);

	getchar();
    getchar();
	return 0;
}