/*12) Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva
na tela.*/

#include <stdio.h>

int main() {

    int vet[10];

    for (int i = 0; i < 10; i++) {
        
        printf("\nDigite o valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("\nOs valores repetidos sao: ");

    for (int i = 0; i < 10; i++){

        for (int j = i+1; j < 10; j++) {
            
            if (vet[i] == vet[j]) {

                printf("%d ", vet[i]);
            }
        }   
    }

    return 0;
}
