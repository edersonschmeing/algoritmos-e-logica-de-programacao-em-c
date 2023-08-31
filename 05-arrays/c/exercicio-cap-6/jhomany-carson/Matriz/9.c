/*9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros.
Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos
números de cada coluna da matriz. Exiba na tela esse array. Por exemplo, a matriz
*/

#include <stdio.h>

int main() {

    int m[3][3], vet[3] = {0 , 0, 0}, soma = 0;

    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            printf("\nDigite o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf(" %d", &m[i][j]);

            if (j == 0) {

                vet[0] += m[i][j];
            } 

            else if ( j == 1) {

                vet[1] += m[i][j];
            }
            else if (j == 2) {

                vet[2] += m[i][j];
            }
        }
    }

    printf("\n");

//print matriz
   for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            printf("%d ", m[i][j]);
        }
        
        printf("\n");
    }

//print no vetor
    printf("\nA soma das colunas eh: ");
        
    for (int i = 0; i < 3; i++) {
            
        printf("%d ", vet[i]);
    }    

    return 0;
}
    