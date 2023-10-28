/*13) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos elementos
dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.*/

#include <stdio.h>

int main() {

    int m[5][5], soma = 0;

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            
            printf("\nDigite a valor da linha %d e coluna %d: ", i +1, j +1);
            scanf(" %d", &m[i][j]);

            if (i == j || j == 5 - i - 1)  {
             
                soma -= m[i][j];
            }

            soma+= m[i][j];
        }    
    }

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
                
            printf("%d ", m[i][j]);
        }    
        printf("\n");
    }
    printf("\nA soma dos numeros fora das dioagonais eh: %d", soma);
    printf("\n ");

    return 0;
}
