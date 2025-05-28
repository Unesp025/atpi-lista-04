#include<stdio.h>

int main()
{
	char nome[50];
	printf("Digite nome: ");
	scanf("%s", nome);
	printf("%s comeca com %c", nome, nome[0]);
	return(0);
}