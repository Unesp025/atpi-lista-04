#include<stdio.h>

#include<iostream>
using namespace std;

int sumUntil(int num) {
	if (num <= 1)
		return(1);
	return num + sumUntil(num-1);
}

int main () {
	int num;
	printf("Digite um num: ");
	scanf("%d", &num);
	
	printf("%d", sumUntil(num));
	return (0);
}