int obterSomaDiagonalPrincipal(int** matriz, int linhas, int colunas)
{
    int soma = 0;
    if (linhas!=colunas)
    {
        for (int i = 0; i<linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if (i == j) soma += matriz[i][j];
            }    
        }
    }
    return soma;
}