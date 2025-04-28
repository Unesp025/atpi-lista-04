#include<stdio.h>
#include<stdlib.h>

float celsiusParaFahrenheit(float temperaturaCelcius) {
	return ((temperaturaCelcius * 9.0f/5.0f) + 32.0f);
}

int main() {
	float temperatura = 26.0;

	printf(
        "\nLista 05 - Computacao Noturno 025\n"
        "## Exercicio 3: Celsius Para Fahrenheit  ##\n"
        "Aluno: Bruno Concli - 251151409\n\n");

	printf("A temperatura de %0.2f °C corresponde a %0.2f F", temperatura, celsiusParaFahrenheit(temperatura));
	
	getchar();
    getchar();
	return 0;
}
