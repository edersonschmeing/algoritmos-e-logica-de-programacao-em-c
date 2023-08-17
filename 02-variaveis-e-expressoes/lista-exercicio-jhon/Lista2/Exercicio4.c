/*4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética
desses valores.
*/

#include <stdio.h>

int main() {

float v1, v2, v3, v4, media;

    printf("\nInforme 4 numeros: \n");
    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);

    media = (v1 + v2 + v3 + v4)/4;

    printf("A media dos valores inseridos eh: %.2f", media);

    return 0;
}