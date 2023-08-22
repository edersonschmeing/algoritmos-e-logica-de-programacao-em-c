/*7) Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser
impressos o maior e o menor elemento desse vetor*/

#include <stdio.h>

int main() {

    int X[10], maior = 0, menor = 0;

    for (int i = 0; i < 10; i++) {

        printf("\nDigite o valor %d do vetor X: ", i+1);
        scanf(" %d", &X[i]);

        if(maior < X[i]){

            maior = X[i];
        }

        if(menor == 0){

            menor = X[i];
        }else if(menor > X[i]){

            menor = X[i];
        }
    }

    printf("\nO meior numero armazenado no vetor eh: %d\n\nO menor numero armazenado no vetor eh: %d", maior, menor);
    printf("\n  ");

    return 0;
}