#include<stdio.h>
#include<stdlib.h>

int main() {
    int idade, tempoServico;
    printf("\nLista 02 - Computacao Noturno 025\n");
    printf("## Exercicio 4: Aposentadoria ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    printf("Qual a sua idade?: ");
    scanf("%d", &idade);
    
    printf("Por quanto tempo ja prestou servicos?: ");
    scanf("%d", &tempoServico);
    
    while (tempoServico >= idade) {
        printf("Seu tempo de servico nao pode ser maior que sua idade.\nPor favor, insira um tempo de servico valido: ");
        scanf("%d", &tempoServico);
    }

    if ((idade >= 65 || tempoServico >= 30) || (idade>=60 && tempoServico>=25))
        printf("Parabens! Voce ja pode se aposentar.");
    else
        printf("Infelizmente, ainda nao e possivel se aposentar");

    getchar();
    getchar();
    return(0);
}