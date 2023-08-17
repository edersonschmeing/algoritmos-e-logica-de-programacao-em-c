/*2) Faça um programa que leia um número inteiro positivo N e imprima todos
os números naturais de 0 até N em ordem decrescente.*/


#include <stdio.h>

int main() {

int n;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &n);

    for (n; n != -1; n--) {

        printf("\n- %d", n);

    }

    return 0;
}