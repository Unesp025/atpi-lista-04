#include<iostream>
using namespace std;

int potencia(int base, int expoente) {
	if (expoente <= 1) return base;
	return base * potencia(base, expoente-1);
}

int main () {
	int base, expoente;
	cout << "Digite uma base: ";
	cin >> base;

	cout << "Digite um expoente: ";
	cin >> expoente;

	cout << base << " elevado a " << expoente << " eh igual a " << potencia(base, expoente);
	return(0);
}