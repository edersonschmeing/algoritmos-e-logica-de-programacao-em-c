/*3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os
valores lidos juntamente com a média dos valores.*/

#include <stdio.h>

int main(){

    float soma = 0, valor[5], media = 0;

    for (int i = 0; i < 5; i++){

        printf("Digite o valor %d: ", i+1);
        scanf(" %f", &valor[i]);

        soma += valor[i];
    }

    media = soma / 5;

    printf("A media dos valores informados eh: %.1f", media);

    return 0;
}