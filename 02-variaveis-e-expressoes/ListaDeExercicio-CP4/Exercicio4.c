/*4) Faça um programa que leia um número inteiro e depois o imprima usando
o operador “%f”. Veja o que aconteceu.*/

#include <stdio.h>

int main() {

int x;

    printf("Digite um numero: ");
    scanf(" %f", &x);

    printf("lendo um inteiro e imprimindo em float: %.2f", x);

    return 0;
}