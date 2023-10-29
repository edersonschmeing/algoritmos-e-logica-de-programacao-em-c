/*5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o usuário deverá
digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V contendo N posições de
inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    int * v = (int *) malloc (n * sizeof(int));
    
    if (v == NULL) {
        
        printf("\nNao foi possivel alocar memoria");

        return 1;
    }
    else {
        
        do {

            printf("\nQue tamanho deseja que o vetor tenha? ");
            scanf(" %d", &n);

            if (n < 0 ) {
                
                system("cls");
                printf("\nFavor, digite um numero positivo!");
            }
            
        }while (n < 0);
    }

    for (int i = 0; i < n; i++) {
        
        system("cls");
        printf("\n");
        do {

            
            printf("\nDigite o valor da posicao %d (maior ou igual a 2): ", i+1);
            scanf(" %d", &v[i]);

            if (v[i] < 2) {
                
                system("cls");
                printf("\nFavor, digite um valor maior ou igual a 2");
            }
            

        }while (v[i] < 2); 
        
        if (i == n - 1) {
            
            printf("\nVetor preenchido, segue os valores: ");

            for (int j = 0; j < n - 1; j++) {
                
                printf("%d, ", v[j]);
            }

            printf("%d.", v[n-1]);
        }
    }

    free(v);

    return 0;
}