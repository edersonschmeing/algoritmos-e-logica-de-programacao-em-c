/*6) Crie um programa que
contenha um array com cinco elementos inteiros. Leia esse array do teclado e imprima o endereço das
posições contendo valores pares.
*/

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

        if (*(p+i) % 2 == 0) {
            
            printf("\nNa posicao %d, temos o valor %d, com o endereco de memoria: %p\n", i, *(p+i), (void *)(p+i));
        }
    }
    
    printf("\n ");
    
    return 0;
}