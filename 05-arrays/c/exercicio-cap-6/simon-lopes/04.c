/*
4) Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, –2, –5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do array A, um em cada linha.
*/

#include <stdio.h>

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7}; // declara a variavel A e atribui os valores
    int soma = 0; // declara a variavel de soma e atribui valor de 0

    soma = A[0] + A[1] + A[5]; // soma os valores do array e atribui a variavel soma
    printf("Resultado da soma: %d\n", soma); //imprime o resultado da soma

    for (int i = 0; i < 6; i++)
    {
        if (i == 4) // verifica se esta passando pela posicao 4
        {
            A[i] = 100; //atribui a posicao o valor de 100
        }
        printf("\n%d", A[i]); //imprime no console cada valor do array e quebra a linha
        
    }
    
    return 0; // retorno da funcao
}