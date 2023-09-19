#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    float x, y;
};

struct Retangulo {
    struct Ponto esquerdo, direito;
};

int main() {
    struct Retangulo retangulo;
    struct Ponto ponto;

    printf("\nDigite o valor do ponto X superior esquero: ");
    scanf(" %f", &retangulo.esquerdo.x);

    printf("\nAgora, digite o valor do ponto Y superior esquerdo: ");
    scanf(" %f", &retangulo.esquerdo.y);

    printf("\nDigite o valor do ponto X inferior direito: ");
    scanf(" %f", &retangulo.direito.x);

    printf("\nAgora, digite o valor do ponto Y inferior direito: ");
    scanf(" %f", &retangulo.direito.y);

    printf("\nDigite o valor do ponto flutuante X: ");
    scanf(" %f", &ponto.x);

    printf("\nAgora, digite o valor do ponto flutuante Y: ");
    scanf(" %f", &ponto.y);

    if (ponto.x >= retangulo.esquerdo.x && ponto.x <= retangulo.direito.x &&
        ponto.y >= retangulo.esquerdo.y && ponto.y <= retangulo.direito.y) {
        printf("\nO ponto esta dentro do retangulo.\n");
    } else {
        printf("\nO ponto esta fora do retangulo.\n");
    }

    return 0;
}
