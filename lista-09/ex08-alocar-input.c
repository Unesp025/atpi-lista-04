// #include "ex06-alocar.c"

int** preencherMatrizDinamica(int linhas, int colunas) {
    int valor;
    int** c = alocarMatriz(linhas, colunas);

    printf("\nDigite os valores de cada elemento:\n");
    for (int i =0; i < linhas; i++)
    {
        printf("(Linha: %d)\n", i);
        for (int j = 0; j < colunas; j++)
        {
            printf("\t[%d][%d]: ", i, j);
            scanf("%d", &valor);
            c[i][j] = valor;
        }
        printf("\n");
    }
    return c;
}