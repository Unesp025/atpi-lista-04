#include<stdio.h>
#include<stdlib.h>

float celsiusParaFahrenheit(float temperaturaCelcius) {
	return ((temperaturaCelcius * 9.0f/5.0f) + 32.0f);
}

int main() {
	float temperatura = 26.0;
	printf("A temperatura de %0.2f °C corresponde a %0.2f F", temperatura, celsiusParaFahrenheit(temperatura));
}
