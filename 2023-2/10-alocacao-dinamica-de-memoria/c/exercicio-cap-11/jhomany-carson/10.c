/*10) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um
vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter os seus elementos preenchidos com
certo valor, também passado por parâmetro. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser
retornado. */

#include <stdlib.h>
#include <stdio.h>

int * vetorDinamico(int n, int x) {

    if (n <= 0) {
        
        return NULL;
    }
    

    int *vet = (int *) malloc(n * sizeof(int));

    if (vet == NULL) {
        
        printf("\nErro ao alocar memoria =(");
        exit(1);
    }
    
    for (int i = 0; i < n; i++) {
        
        vet[i] = x;
    }
    
    return vet;

}

int main() {

    int n, x, *vetor;

    solicitaTamanho:

    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &n);

    printf("\nInforme o valor de X: ");
    scanf(" %d", &x);

    vetor = vetorDinamico(n, x);

    if (vetor == NULL) {

        printf("\nTamanho invalido!");
        goto solicitaTamanho;
    }
    else {

        printf("\nSegue o vetor com o valor de x: ");
        
        for (int i = 0; i < n; i++) {

            printf("%d ", vetor[i]);
        }
    }

    return 0;
}