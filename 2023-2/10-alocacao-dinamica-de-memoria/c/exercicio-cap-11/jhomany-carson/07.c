/*7) Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros alocados dinamicamente.
O array deve ser preenchido com valores de 0 a N − 1.*/

#include <stdio.h>
#include <stdlib.h>

int* criarVetor(int n) {
    int *vet = (int*)malloc(n * sizeof(int));

    if (vet == NULL) {
        printf("\nErro na alocação de memória.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        vet[i] = i;
    }

    return vet;
}

int main() {
    int n;

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &n);

    int *vet = criarVetor(n);

    printf("\nOs valores do vetor sao: ");

    for (int i = 0; i < n; i++) {
       
        printf("%d ", vet[i]);
    }

    printf("\n\n");

    free(vet);

    return 0;
}
