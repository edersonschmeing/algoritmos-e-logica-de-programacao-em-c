/*18) Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus tamanhos. A função
deve retornar o ponteiro para uma matriz C, em que C é o produto da multiplicação da matriz A pela matriz
B. Se a multiplicação das matrizes não for possível, retorne um ponteiro nulo.*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ** matrizC (int **matrizA, int **matrizB, int tamanho) {

    int ** matriz_c = (int **) malloc(tamanho * sizeof(int *));

    if (matriz_c == NULL) {

        printf("\nErro na alocacao de memoria.");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        
        matriz_c[i] = (int *) malloc (tamanho * sizeof(int));

        if (matriz_c[i] == NULL) {
            
            printf("\nErro na alocacao de memoria.");
            exit(1);
        }
        
        for (int j = 0; j < tamanho; j++) {
            
            matriz_c[i][j] = matrizA[i][j] * matrizB[i][j];
        }   
    }
    
    return matriz_c;
}

int main() {

    int **a, **b, **c, n;

    printf("\nDigite o tamanho das suas matrizes: ");
    scanf(" %d", &n);

    a = (int **) malloc (n * sizeof(int *));
    b = (int **) malloc (n * sizeof(int *));

    printf("\nPreenchendo a matriz A e a Matriz B: \n");

    printf("\nA: \n\n");

    for (int k = 0; k < n; k++) {
        
        a[k] = (int *) malloc (n * sizeof(int));

        if (a[k] == NULL) {
    
            printf("\nErro na alocacao da memoria.");
            exit(1);
        }
        
        for (int l = 0; l < n; l++) {
            
            a[k][l] = (k + l + 2) * 3;

            printf("| %3d   ", a[k][l]);
        }   
        printf("|\n");
    }

    printf("\nB: \n\n");

    for (int i = 0; i < n; i++) {
        
        b[i] = (int *) malloc (n * sizeof(int));

        if (b[i] == NULL) {
            
            printf("\nErro na alocacao da memoria.");
            exit(1);
        }
        
        for (int j = 0; j < n; j++) {

            b[i][j] = (i + j + 1) * 2;
        
            printf("| %3d   ", b[i][j]);
        }
        printf("|\n");
    }

    c = matrizC(a, b, n);

    printf("\n\nSegue a matriz C (multiplicacao da matriz a e matriz b): \n\n");

    for (int x = 0; x < n; x++) {
        
        for (int y = 0; y < n; y++) {
            
            printf("|  %3d  ", c[x][y]);
        }
        printf("|\n");
    }
    

    return 0;
}