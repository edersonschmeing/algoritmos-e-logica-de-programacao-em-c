/*15) Elabore um programa que faça a leitura de vários números inteiros até
que se digite um número negativo. O programa tem de retornar o maior e o
menor número lido. */

#include <stdio.h>

int main() {

    int maior = 0, menor, n;

    printf("\nDigite um numero: ");
    scanf(" %d", &n);

    menor = n;

    while (n >= 0){

        printf("\nDigite um numero: ");
        scanf(" %d", &n);

        if(maior < n) {

            maior = n;
        }
        
        if(menor > n && n >= 0){

            menor = n;
        }
    }
    
    printf("\nO maior numero eh: %d\n\nO menor numero eh: %d", maior, menor);

    return 0;
}