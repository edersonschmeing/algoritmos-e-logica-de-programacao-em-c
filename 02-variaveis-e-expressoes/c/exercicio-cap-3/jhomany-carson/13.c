/*13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é
obtida pela equação:  h = raiz de (a² + b²)
Faça um programa que leia os valores de a e b, e calcule o valor da
hipotenusa através da fórmula dada. Imprima o resultado.*/

#include <stdio.h>
#include <math.h>

int main() {

float a, b, h, raiz;

    printf("\nInforme o valor de \"A\": ");
    scanf("%f", &a);

    printf("\nInforme o valor de \"B\": ");
    scanf("%f", &b);

    h = raiz = sqrt((a * a) + (b * b));

    printf ("\nO valor da Hipotenusa eh: %.2f", h);

    return 0;
}