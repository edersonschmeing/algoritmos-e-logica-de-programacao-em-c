/*8) Faça um programa que leia dois números inteiros e depois os imprima na
ordem inversa em que eles foram lidos.*/

#include <stdio.h>

int main() {

int n1;
int n2;

    printf("Digite o primeiro numero: \n");
    scanf(" %d", &n1);

    printf("Digite o segundo numero: \n");
    scanf(" %d", &n2);

    printf("Numeros na ordem inversa: n2: %d e n1: %d", n2, n1);

    return 0;
}