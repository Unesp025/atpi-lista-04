#include <stdio.h>

int qtdDigitosSemRecursao(int num)
{
  int contador = 1;
  int numAtual = num;
  while (numAtual >= 10)
  {
    numAtual = numAtual / 10;
    contador++;
  }

  return (contador);
}

int qtdDigitosComRecursao(int num)
{
  if (num < 10)
    return 1;
  return 1 + qtdDigitosComRecursao(num / 10);
}

int main()
{
  int num;
  printf(
      "\nLista 06 - Computacao Noturno 025\n"
      "## Exercicio 3: Tamanho de um inteiro ##\n"
      "Aluno: Bruno Concli - 251151409\n\n");

  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("\nHa %d digitos em %d", qtdDigitosComRecursao(num), num);

  return (0);
}