/*3) Faça um programa que leia três valores inteiros e mostre sua
soma.*/

#include <stdio.h>

int main() {

int v1, v2, v3, res;

    printf("\nInforme o primeiro numero inteiro: ");
    scanf("%d", &v1);

    printf("\nInforme o segundo numero inteiro: ");
    scanf("%d", &v2);

    printf("\nInforme o terceiro numero inteiro: ");
    scanf("%d", &v3);

    res = v1+ v2 + v3;

    printf("O resultado da soma dos 3 numeros eh: %d", res);

    return 0;
}