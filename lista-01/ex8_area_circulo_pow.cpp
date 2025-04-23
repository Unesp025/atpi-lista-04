#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    printf("\n## Exercicio 8: Obter area do circulo a partir do Raio com funcao pow(base, expoente) ##\n");
    printf("Aluno: Bruno Concli - 251151409\n\n");

    float raio, area;
    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * pow(raio,2);
    printf("A area do circulo e: %f\n\n", area);

    getchar();
    return(0);
}