#include <stdio.h>

int potencia(int base, int expoente)
{
  if (expoente <= 1)
    return base;
  return base * potencia(base, expoente - 1);
}

int main()
{
  int base, expoente;
  printf(
      "\nLista 06 - Computacao Noturno 025\n"
      "## Exercicio 4: Base e Expoente ##\n"
      "Aluno: Bruno Concli - 251151409\n\n");
  printf("Digite uma base: ");
  scanf("%d", &base);

  printf("Digite um expoente: ");
  scanf("%d", &expoente);

  printf("O numero %d elevado a %d eh igual a %d", base, expoente, potencia(base, expoente));
  return (0);
}