/*1) 1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor valor contido nessa
matriz. */

#include <stdio.h>

int main() {

    int m[3][3], menor;

    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            printf("\nDigite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf(" %d", &m[i][j]); 
        }
    }
    
    menor = m[0][0];

    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            if (menor >  m[i][j]) {

                    menor = m[i][j];
            }

            printf("%d ", m[i][j]);
        }

        printf("\n");
    }
    
    printf("\n\nO menor numero eh: %d", menor);
    printf("\n ");

    return 0;
}