#include<iostream>
using namespace std;

int qtdDigitosSemRecursao(int num) {
	int contador = 1;
	int numAtual = num;
	while (numAtual >= 10 ){
		numAtual = numAtual / 10;
		contador ++;
	}

	return (contador);
}

int qtdDigitosComRecursao(int num) {
	if (num < 10) return 1;
	return 1 + qtdDigitosComRecursao(num/10);
}

int main () {
	int num;
	cout << "Digite um numero: ";
	cin >> num;
	cout << "\nHa " << qtdDigitosComRecursao(num) << " digitos em " << num;

	return (0);
}