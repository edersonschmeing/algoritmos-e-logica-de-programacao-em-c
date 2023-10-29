/*6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz
deverão ser lidas do usuário. Em seguida, escreva uma função que receba um valor e retorne 1, caso o
valor esteja na matriz, ou retorne 0, no caso contrário.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int LocalizarValor(int lin, int col, int **m, int valor) {

    printf("\nDigite o valor da busca: ");
    scanf(" %d", &valor);

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            
            if (valor == m[i][j]) {
                
                printf("\nValor encontrado!!\n\n");

                for (int k = 0; k < lin; k++) {
                    for (int l = 0; l < col; l++) {
                         
                        if(m[k][l] == valor && valor >= 10) {

                            printf("  >%d<  ", m[k][l]);
                        }
                        else if(m[k][l] == valor && valor < 10) {

                            printf("  >%d<   ", m[k][l]);
                        }
                        else if (m[k][l] >= 10 && m[k][l] != valor) {
                
                            printf("   %d   ", m[k][l]);
                        } 
                        else {
            
                            printf("   %d    ", m[k][l]);
                        }

                        printf("|");
                    }        
                    printf("\n");
                }
                
                return 1;
            }
        }
    }

    printf("\nValor nao encontrado");    

    return 0;
}

int main() {

    int linha, coluna, valor;
    int **matriz;
    
    printf("\nDigite a quantidade de linhas da matriz: ");
    scanf(" %d", &linha);

    printf("Agora informe a quantidade de colunas: ");
    scanf(" %d", &coluna);


    matriz = (int **) malloc(linha * sizeof(int));

    if (matriz == NULL) {
        
        printf("\nErro ao alocar memoria dinamicamente");
        return 1;
    }
    
    for (int i = 0; i < coluna; i++) {
        
        matriz[i] = (int *) malloc (coluna * sizeof(int));

        if (matriz[i] == NULL) {
            
            printf("\nFalha ao alocar memoria!");

            return 1;
        }
        
    }

    for (int i = 0; i < linha; i++) {

        for (int j = 0; j < coluna; j++) {
            
            printf("Digite o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf(" %d", &matriz[i][j]);
        }
    }

    printf("\n\n");
    
    LocalizarValor(linha, coluna, matriz, valor);

    return 0;
}