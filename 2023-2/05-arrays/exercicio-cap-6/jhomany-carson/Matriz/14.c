/*14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos elementos dessa matriz
que pertencem à diagonal principal ou secundária. Calcule também a soma dos elementos que não
pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores.*/

#include <stdio.h>

int main() {

    int m[5][5], somadiagonal = 0, soma = 0;

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            
            printf("\nDigite a valor da linha %d e coluna %d: ", i +1, j +1);
            scanf(" %d", &m[i][j]);

            if (i == j || j == 5 - i - 1)  {
             
                somadiagonal += m[i][j];
            } 
            else{

            soma += m[i][j];
            }
        }    
    }

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
                
            printf("%d ", m[i][j]);
        }    
        printf("\n");
    }
    printf("\nA soma dos numeros fora das dioagonais eh: %d\n\nA soma das principais eh: %d ", soma, somadiagonal);

    printf("\n ");

    return 0;
}