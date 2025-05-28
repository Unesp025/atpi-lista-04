#include<stdio.h>
int main ()
{
	int A[5], B[5];
	int current = 0;
	printf("Digite os valores para A: \n");
	for (int a = 0; a < sizeof(A)/4; a++) 
	{	
		printf("a%d: ", a);
		scanf("%d", &current);
		A[a] = current;
	}
	printf("Digite os valores para B: \n");
	for (int b = 0; b < sizeof(A)/4; b++) 
	{	
		printf("b%d: ", b);
		scanf("%d", &current);
		B[b] = current;
	}
	for (int c = 0; c < sizeof(A)/4; c++)
	{
		printf("%d, %d, ", A[c], B[c]);
	}
	return(0);


}
 