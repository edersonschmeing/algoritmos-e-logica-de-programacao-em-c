/*4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o
ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura Ponto, a qual contém as
posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo e exiba a área e o
comprimento da diagonal e o perímetro desse retângulo. */

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
    float perimetro, largura, altura, diagonal, area;

    printf("\nDigite o valor do ponto X superior esquero: ");
    scanf(" %f", &retangulo.esquerdo.x);

    printf("\nAgora, digite o valor do pont Y superior esquerdo: ");
    scanf(" %f", &retangulo.esquerdo.y);

    printf("\nDigite o valor do ponto X inferior direito: ");
    scanf(" %f", &retangulo.direito.x);

    printf("\nAgora, digite o valor do pont Y inferior direito: ");
    scanf(" %f", &retangulo.direito.y);

    largura = fabs(retangulo.esquerdo.x - retangulo.direito.x);
    altura = fabs(retangulo.esquerdo.y - retangulo.direito.y);

    area = largura * altura;

    diagonal = sqrt((pow(largura, 2)) + (pow(altura, 2)));

    perimetro = 2 * (largura + altura);

    printf("\nA area eh: %.2f", area);
    printf("\nA diagonal eh: %.2f", diagonal);
    printf("\nO perimetro eh: %.2f", perimetro);

    return 0;
}
