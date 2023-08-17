/*5) Faça um programa que leia um valor do tipo float e depois o imprima
usando o operador “%d”. Veja o que aconteceu.*/

#include <stdio.h>

int main() {

float x;

    printf("Digite um numero: ");
    scanf(" %f", &x);

    printf("Lendo um float e imprimindo em inteiro: %d", x);

    return 0;
}