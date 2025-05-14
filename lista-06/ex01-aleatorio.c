#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int minimo, maximo, quantidade;
  printf(
      "\nLista 06 - Computacao Noturno 025\n"
      "## Exercicio 1: Gerar pseud-aleatorio em um intervalo  ##\n"
      "Aluno: Bruno Concli - 251151409\n\n");

  printf("Digite o intervalo minimo: ");
  scanf("%d", &minimo);
  printf("Digite o intervalo maximo (inclusivo): ");
  scanf("%d", &maximo);
  printf("\n Quantas vezes deseja gerar um numero aleatorio?: ");
  scanf("%d", &quantidade);
  srand(time(NULL));
  for (int i = 0; i < quantidade; i++)
    printf("\nAleatorio: %d", rand() % (maximo - minimo + 1) + minimo);
  return (0);
}