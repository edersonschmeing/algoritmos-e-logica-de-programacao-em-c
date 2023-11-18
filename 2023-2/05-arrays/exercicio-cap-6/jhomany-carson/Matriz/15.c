/*15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e imprima a matriz B,
sendo que B = A2.*/

#include <stdio.h>

int main() {

    int ma[5][5], mb[5][5], valor;

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            
            printf("\nDigite a valor da linha %d e coluna %d: ", i +1, j +1);
            scanf(" %d", &ma[i][j]);

            valor = ma[i][j] * 2;

            mb[i][j] = valor;

            valor = 0;
        }
    }    

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
                
            printf("%d ", ma[i][j]);
        }    
        printf("\n");
    }

    printf("\n\n");
    
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
                    
            printf("%d ", mb[i][j]);
        }    
        printf("\n");
    }

    printf("\n ");

    return 0;
}