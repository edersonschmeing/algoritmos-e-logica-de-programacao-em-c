/*17) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas. A função
deve retornar o ponteiro para um vetor B de tamanho N alocado dinamicamente, em que cada posição de B
é a soma dos números daquela coluna da matriz.*/

#include <stdio.h>
#include <stdlib.h>

 int *VetorB(int **matriz, int tamanho) {

    int *vetor_b = (int *) malloc (tamanho * sizeof(int));

    if (vetor_b == NULL) {
        
        printf("\nErro ao alocar memoria dinamicamente.");
        exit(1);
    }
    
    for (int i = 0; i < tamanho; i++) {

        vetor_b[i] = 0;
        
        for (int j = 0; j < tamanho; j++) {
            
            vetor_b[i] += matriz[j][i];
        }
    }
    
    return vetor_b;
 }

 int main() {

    int **a, *b, n;

        printf("\nDigite o tamanho da matriz: ");
        scanf(" %d", &n);

    a = (int **) malloc (n * sizeof(int *));

    if (a == NULL) {
        
        printf("\nErro ao alocar a memoria dinamicamente.");
        return 1;
    }

    printf("\nPreenchendo a Matriz \"A\": \n\n");

    for (int i = 0; i < n; i++) {

        a[i] = (int *) malloc (n * sizeof(int));

        if (a[i] == NULL) {
            printf("\nErro ao alocar a memoria dinamicamente.");
            return 1;
        }
    
        for (int j = 0; j < n; j++) {
            
            a[i][j] = (i + j + 3) * (j + 1);
            
            printf("|");
            printf(" %3d   ", a[i][j]);
        }
        printf("|\n");
    }

    b = VetorB(a, n);   

    printf("\nSegue o vetor \"B\" preenchido com a somatoria de cada coluna da matriz: ");

    for (int indice = 0; indice < n; indice++) {
        
        printf(" %3d  ", b[indice]);
    }
    
    printf("\n\n  ");

    for (int i = 0; i < n; i++) {
        free(a[i]);
    }

    free(a);
    free(b);

    return 0;
 }