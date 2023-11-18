/*8) Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são da forma:

se i < j == 2i + 7j - 2; 
se i = j == 3i² - 1;
se i > j == 4i³ + 5j² + 1;
*/


#include <stdio.h>

int main() {

    int m[10][10];


    for (int i = 0; i < 10; i++) {
        
        for (int j = 0; j < 10; j++) {
            
            if ( i < j) {
                
                m[i][j] = (2 * i) + (7 * j) - 2;
            } 
            else if (i == j) {
                
                m[i][j] = (3 * (i * i)) - 1;
            }
             else if (i > j) {
                
                m[i][j] = (4 * (i * i * i)) + (5 * (j * j)) + 1;
            }
            
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }

    return 0;
}