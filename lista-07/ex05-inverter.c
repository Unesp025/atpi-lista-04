#include<stdio.h>

void inverter(int* V, int T)
{
  int* inicio, *fim, *temp;
  inicio = V;
  fim = V + T - 1;

  while (inicio < fim)
  {
    *temp = *inicio;
    *inicio = *fim;
    *fim = *temp;
    inicio++;
    fim--;
  }
}

int main()
{
  int A[3] = { 0, 1, 2 };
  inverter(A, 3);
  for (int i = 0; i < 3; i++)
    printf("%d", A[i]);

  return (0);
}