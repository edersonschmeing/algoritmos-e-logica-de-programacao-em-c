/*12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a soma dos elementos
dessa matriz que estão abaixo da diagonal principal.*/

#include <stdio.h>

int main() {

    int m[6][6], soma = 0;

    for (int i = 0; i < 6; i++) {
        
        for (int j = 0; j < 6; j++) {
            
            printf("\nDigite a valor da linha %d e coluna %d: ", i +1, j +1);
            scanf(" %d", &m[i][j]);

            if (i  == j +1) {
             
                soma += m[i][j];
            }
        }    
    }
    for (int i = 0; i < 6; i++) {
        
        for (int j = 0; j < 6; j++) {
                
            printf("%d ", m[i][j]);
        }    
        printf("\n");
    }
    printf("\nA soma dos numeros abaixo da diagonal principal eh: %d", soma);
    printf("\n ");

    return 0;
}