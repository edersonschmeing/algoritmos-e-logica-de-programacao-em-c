/*5) Crie um programa que contenha um array de inteiros com cinco elementos. Utilizando apenas aritmética
de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int vet[5];
    int *p;

    p = vet;

    for (int i = 0; i < 5; i++) {
        
        printf("\nDigite o valor %d do vetor: ", i);
        scanf(" %d", &vet[i]);

    }

    for (int i = 0; i < 5; i++) {

        *(p+i) = *(p+i) * 2;

        printf("\nSegue o valor do Vetor dobrado: %d", *(p+i));
    }

    printf("\n\n ");
    
    return 0;
}