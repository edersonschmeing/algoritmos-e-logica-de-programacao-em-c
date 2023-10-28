/*2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida,
compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b;
    int *p1, *p2;

    printf("Digite o valor de A: ");
    scanf(" %d", &a);

    printf("Digite o valor de B: ");
    scanf(" %d", &b);

    p1 = &a;
    p2 = &b;

    if (p1 > p2) {

        printf("\nO maior endereco eh p1: %d\n", *p1);
    } 
    else if (p2 > p1) {
       
        printf("\nO maior endereco eh p2: %p\n", *p2);
    }     

    return 0;
}