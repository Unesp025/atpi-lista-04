#include <stdio.h>

bool estaPresente(int x, int *A, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
    if (A[i] == x)
      return true;
  return false;
}

int main()
{
  int x, tamanho, valorAtual;
  printf("Qual o tamanho do seu array?: ");
  scanf("%d", &tamanho);
  int vetor[tamanho];
  printf("Digite os elementos de cada posicao: \n");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%d: ", i);
    scanf("%d", &valorAtual);
    vetor[i] = valorAtual;
  }
  printf("Qual o valor buscado?: ");
  scanf("%d", &x);
  if (estaPresente(x, vetor, tamanho))
    printf("O valor %d esta presente no vetor!", x);
  else
    printf("O valor %d nao pertence ao vetor...", x);

  return (0);
}
