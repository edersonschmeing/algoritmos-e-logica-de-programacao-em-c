/*3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida,
declare e leia do teclado dois pontos e exiba a distância entre eles.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Ponto {
    
    float x, y;
};

int main() {

    struct Ponto ponto1, ponto2;
    float distancia;

    printf("\nDigite o valor do primeiro ponto X: ");
    scanf(" %f", &ponto1.x);

    printf("\nAgora, digite o valor do primeiro ponto Y: ");
    scanf(" %f", &ponto1.y);

    printf("\nDigite o valor do segundo ponto X: ");
    scanf(" %f", &ponto2.x);

    printf("\nAgora, digite o valor do segundo ponto Y: ");
    scanf(" %f", &ponto2.y);

    distancia = sqrt((pow(ponto1.x - ponto2.x, 2)) + (pow(ponto1.y - ponto2.y, 2)));

    printf("\nA distancia entre os dois pontos eh: %.2f", distancia);

    return 0;
}