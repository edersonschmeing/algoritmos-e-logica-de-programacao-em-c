/*7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal
secundária.*/

#include <stdio.h>

int main() {

    int m[3][3], soma = 0;


    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            printf("\nDigite o valor da linha %d e coluna %d: ", i +1, j +1);
            scanf(" %d", &m[i][j]);
        }
    }

    printf("\n ");

    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            if ( j == 3 - i - 1) {
                
                soma += m[i][j];
            } 

            printf("%d ", m[i][j]);
        }

        printf("\n");
    }

    printf("\nA soma dos valores da diagonal secundaria eh: %d", soma);

    return 0;
}