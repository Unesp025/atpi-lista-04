#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float distancia(float x1, float y1, float x2, float y2) {
    return sqrt((pow((x1-x2), 2))+(pow((y1-y2), 2)));
}

int main() {
    printf (
        "\nLista 05 - Computacao Noturno 025\n"
        "## Exercicio   ##\n"
        "Aluno: Bruno Concli - 251151409\n\n");
    float x1, y1, x2, y2;
    printf("Digite os seguintes valores\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    printf("Distancia: %f", distancia(x1, y1, x2, y2));
    getchar();
    getchar();
    return 0;
}