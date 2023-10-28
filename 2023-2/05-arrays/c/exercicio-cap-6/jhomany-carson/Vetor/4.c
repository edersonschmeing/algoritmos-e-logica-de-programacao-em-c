/*4) Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa
deve executar os seguintes passos:

a) Atribua os seguintes valores a esse array: 1, 0, 5, –2, –5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre
na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor
100.
d) Mostre na tela cada valor do array A, um em cada linha.*/

#include <stdio.h>

int main(){
    
    //letra a
    int A[6] = {1, 0, 5, -2, -5, 7};
    
    //letra b
    int soma = A[0] + A[1] + A[5];

    printf("\n Segue o resultado da soma: %d\n", soma);

    //letra c
    A[3] = 100;

    //letra d
    for(int i = 0; i < 6; i++) {

        printf("\nO valor %d eh: %d", i+1, A[i]);
    }

    return 0;
}