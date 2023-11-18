/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main() {

    float soma = 0, media = 0, valor;

    printf("\nDigite 10 numeros para que possamos calcular a media: \n\n");
    
    for(int i = 1; i <= 10; i++){

        printf("Digite o valor %d: ", i);
        scanf(" %f", &valor);

        soma += valor;
        media = i;
    }

    media = soma / media;

    printf("\nA media eh: %.2f", media);

    return 0;
}