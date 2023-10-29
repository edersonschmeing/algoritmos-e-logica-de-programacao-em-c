/*4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação
dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int tam;
    int * vet = (int *) malloc (tam * sizeof(int));
    
    if (vet == NULL) {
        
        printf("\nNao foi possivel alocar memoria");

        return 1;
    }
    else {

        printf("\nQue tamanho deseja que o vetor tenha? ");
        scanf(" %d", &tam);
    }

    for (int i = 0; i < tam; i++) {
        
        printf("\n\nDigite o valor da posicao %d: ", i+1);
        scanf(" %d", &vet[i]);

        if (i == tam - 1) {
            
            printf("\nVetor preenchido, segue os valores: ");

            for (int j = 0; j < tam - 1; j++) {
                
                printf("%d, ", vet[j]);
            }

            printf("%d.", vet[tam-1]);
        }
    }

    free(vet);
    
    return 0;
}