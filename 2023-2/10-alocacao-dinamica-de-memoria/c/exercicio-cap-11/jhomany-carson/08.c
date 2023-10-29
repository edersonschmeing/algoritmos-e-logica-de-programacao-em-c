/*8) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um
vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser
retornado. */


#include <stdio.h>
#include <stdlib.h>

int* criarVetor(int n) {

    if (n <= 0) {
        
        return NULL;
    }
    
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

    if (vet == NULL) {
        
        printf("\nTamanho invalido, falha na alocacao");
        return 1;
    }
    

    printf("\nOs valores do vetor sao: ");

    for (int i = 0; i < n; i++) {
       
        printf("%d ", vet[i]);
    }

    printf("\n\n");

    free(vet);

    return 0;
}
