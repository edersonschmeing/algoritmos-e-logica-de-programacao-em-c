/*13) Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo N linhas
e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, o valor 1 nos elementos acima da
diagonal principal e o valor −1 nos elementos abaixo da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>

int **CriarMatriz(int lin, int col) {

    int **matriz = (int **) malloc (lin * sizeof(int *));

    if (matriz == NULL) {
        
        printf("\nErro ao alocar dinamicamente a linha");
        exit(1);
    }

    for (int i = 0; i < lin; i++) {
        
        matriz[i] = (int *) malloc (col * sizeof(int));

        if (matriz[i] == NULL) {
            
            printf("\nErro ao alocar dinamicamente a coluna");
            exit(1);
        }
   }


   for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
           
           if(i < j) {

                matriz[i][j] = +1;
            }
            else if(i == j){

                matriz[i][j] = +0;
            }
            else {

                matriz[i][j] = -1;
            }
        }        
   }

    return matriz;    
}

int main() {

    int linha, coluna, **matriz;

    printf("\nDigite a quantidade de linhas da sua matriz: ");
    scanf(" %d", &linha);

    printf("\nDigite a quantidade de colunas da sua matriz: ");
    scanf(" %d", &coluna);

    matriz = CriarMatriz(linha, coluna);

    printf("\nSegue a matriz impressa: \n");

    /*for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {

            if(matriz[i][j] >= 0) {
                printf("|");
                printf("  %d  ", matriz[i][j]);
            }
            else {
                printf("|");
                printf(" %d  ", matriz[i][j]);

            }
        }
        printf("|\n");
    }*/

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {

            printf("|");
            printf("%3d  ", matriz[i][j]);
        }
        printf("|\n");
    }

    for (int i = 0; i < linha; i++) {
        
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}