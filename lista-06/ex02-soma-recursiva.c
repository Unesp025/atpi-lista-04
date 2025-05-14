#include <stdio.h>

int sumUntil(int num)
{
  if (num <= 1)
    return (1);
  return num + sumUntil(num - 1);
}

int main()
{
  int num;
  printf(
      "\nLista 06 - Computacao Noturno 025\n"
      "## Exercicio 2: Somar recursivamente de 1 ate n ##\n"
      "Aluno: Bruno Concli - 251151409\n\n");

  printf("Digite um num: ");
  scanf("%d", &num);

  printf("%d", sumUntil(num));
  return (0);
}