#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("\n## Exercicio 7: Obter area do circulo a partir do Raio ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    float raio, area;
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * raio * raio;
    printf("A area do circulo e: %f\n\n", area);

    getchar();
    return(0);
}