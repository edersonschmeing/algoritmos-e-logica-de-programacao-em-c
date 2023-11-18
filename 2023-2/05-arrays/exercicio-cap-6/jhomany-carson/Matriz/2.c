/*2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor contido nessa
matriz e a sua localização (linha e coluna).*/

#include <stdio.h>

int main() {

    int m[4][4], maior = 0, linha, coluna;

    for (int i = 0; i < 4; i++) {
        
        for (int j = 0; j < 4; j++) {
            
            printf("\nDigite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf(" %d", &m[i][j]); 

            if (maior < m[i][j]) {
                
                maior = m[i][j];
                linha = i+1;
                coluna = j+1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        
        for (int j = 0; j < 4; j++) {
                
            printf("%d ", m[i][j]);
        }

          printf("\n");
    }
    
    printf("\n\nO maior numero eh %d e esta localizado na linha %d e na coluna %d", maior, linha, coluna);
    printf("\n ");

    return 0;
}

    