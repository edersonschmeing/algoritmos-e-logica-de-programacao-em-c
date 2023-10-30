/*12) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para uma matriz
alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 1 na diagonal
secundária e 0 nas demais posições*/


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

/*            linha		             coluna
5 + 0 -5    	0   	5 - 0 - 1   	4
5 + 1 -5    	1   	5 - 1 - 1   	3
5 + 2 -5    	2	    5 - 2 - 1	    2
5 + 3 -5    	3	    5 - 3 - 1	    1
5 + 4 -5	    4	    5 - 4 - 1	    0
*/

            if(j == col - i - 1 && i == col + i - col) {

                matriz[i][j] = 1;
            }
            else {

                matriz[i][j] = 0;
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

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {

            printf("|");
            printf(" %d ", matriz[i][j]);
        }
        printf("|\n");
    }

    for (int i = 0; i < linha; i++) {
        
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}