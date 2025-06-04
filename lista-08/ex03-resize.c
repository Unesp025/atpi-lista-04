void redimensionar_vetor_mais(int* vetor)
{
	vetor = (int*) realloc(vetor, 
}

void redimensionar_vetor_menos(int* vetor)
{
	vetor = (int*) realloc(vetor, 
}

int main()
{
	int* vetor = NULL;	
	int valor_atual, tamanho = 0; 
	
	vetor = (int*) malloc(sizeof(int));
	if (vetor == NULL) return 1;

	while(valor_atual!=(-1))
	{
		printf("elemento: ");
		scanf("%d", &valor_atual);
		realloc(vetor, tamanho * sizeof(int))		
		vetor[tamanho-1] = valor_atual;	
	}
}