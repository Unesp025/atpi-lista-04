#include<stdio.h>
#include<stdlib.h>

void calcular_circulo(float raio, float* area, float* perimetro) {
	*area = 3.14f * raio * raio;
	*perimetro = 2 * 3.14f * raio;
}

int main() {
	float raio, area, perimetro;

	printf(
        "\nLista 05 - Computacao Noturno 025\n"
        "## Exercicio 7: Circulo  ##\n"
        "Aluno: Bruno Concli - 251151409\n\n");

	printf("Digite o valor do Raio: ");
	scanf("%f", &raio);
	
	calcular_circulo(raio, &area, &perimetro);	

	printf("A partir do Raio %0.2f, tem-se\nArea: %0.2f\nPerimetro: %0.2f", raio, area, perimetro);

	getchar();
	getchar();
	return 0;
}