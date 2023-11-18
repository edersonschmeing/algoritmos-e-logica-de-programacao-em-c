/*8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A função
deverá preencher os elementos de vetor com esse valor. Não utilize índices para percorrer o vetor, apenas
aritmética de ponteiros.*/


#include <stdio.h>
#include <stdlib.h>

void PreencherVetor(int vet[], int valor, int tamanho) {

    int *p = vet;

    for (int i = 0; i < tamanho; i++) {
        
        *p = valor;
        p++;
    }
}

int main () {

    int vet[5];

    PreencherVetor(vet, 10, 5);

    printf("Segue o vetor preenchido:");

    for (int i = 0; i < 5; i++) {
    
        if (i < 4) {
            
            printf(" %d,", vet[i]);
        }
        else {

            printf(" %d.", vet[i]);
        }
            
    }
    return 0;
}