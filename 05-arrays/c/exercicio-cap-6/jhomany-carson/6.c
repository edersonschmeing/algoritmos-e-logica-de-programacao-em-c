/*6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores
pares foram armazenados nesse vetor.*/

#include <stdio.h>

int main() {

    int vet[10], cont = 0;

    for(int i = 0; i < 10; i++) {

        printf("\nDigite o valor %d do vetor: ", i+1);
        scanf(" %d", &vet[i]);

        if(vet[i] % 2 == 0) {

            cont++;
        }
    }

    if(cont > 1){ 
        
        printf("\nForam inseridos %d numeros pares.", cont);
        printf("\n ");
    } else {

        printf("\nFoi inserido %d numero par.", cont);
        printf("\n ");
    }
    return 0;
}