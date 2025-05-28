#include<stdio.h>

void mostrarExisteEmAmbos(int* A, int* B, int tamanho)
{
  for (int a = 0; a < tamanho; a++)
    for (int b = 0; b < tamanho; b++)
      if (A[a] == B[b]) printf("%d, ", A[a]);
}

int main()
{
  int tamanho;
  printf("Qual o tamanho dos vetores?: ");
  scanf("%d", &tamanho);
  int A[tamanho], B[tamanho];
  printf("\nDigite os valores para A: \n");
  int current;
  for (int a = 0; a < sizeof(A) / 4; a++)
  {
    printf("a%d: ", a);
    scanf("%d", &current);
    A[a] = current;
  }
  printf("\nDigite os valores para B: \n");
  for (int b = 0; b < sizeof(A) / 4; b++)
  {
    printf("b%d: ", b);
    scanf("%d", &current);
    B[b] = current;
  }
  printf("Elemento(s) igual(is): ");
  mostrarExisteEmAmbos(A, B, sizeof(A) / 4);
  return (0);
}
