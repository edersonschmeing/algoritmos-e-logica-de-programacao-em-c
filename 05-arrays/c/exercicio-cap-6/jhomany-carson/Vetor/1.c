/*1) Crie um programa que leia do teclado seis valores 
inteiros e em seguida mostre na tela os valores lidos.*/

#include <stdio.h>

int main(){

    int valor[6];

    for (int i = 0; i < 6; i++) {

        printf("\nDigite o valor %d: ", i+1);
        scanf(" %d", &valor[i]);
    }

    printf("\nCerto, os valores lidos foram: \n\n");

    for (int i = 0; i < 6; i++) {

        printf("\nO valor %d eh: %d", i+1, valor[i]);
    }

    return 0;
}
