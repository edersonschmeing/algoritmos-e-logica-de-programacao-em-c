/*5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores negativos ela
possui.*/

#include <stdio.h>

int main() {

    int m[4][4], cont = 0;

    for (int i = 0; i < 4; i++) {
        
        for (int j = 0; j < 4; j++) {
            
            printf("\nDigite o valor da linha %d e coluna %d: ", i +1 , j +1);
            scanf(" %d", &m[i][j]);

            if (m[i][j] < 0) {

                cont++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        
        for (int j = 0; j < 4; j++) {
            
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }
    

    if (cont > 1) {
            
        printf("\nFoi localizado %d numeros negativos.", cont);
    }
    else {

        printf("\nFoi localizado %d numero numero negativo.", cont);
    }
    
    return 0;
}