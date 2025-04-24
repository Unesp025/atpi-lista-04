#include<stdio.h>
#include<stdlib.h>

int a, b, c;

int quadratica(int x) {
	return (a*x*x + b*x + c);
}

int main() {
	printf("%d", quadratica(5));	 	
}