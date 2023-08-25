/*1) Crie um programa que leia do teclado seis valores 
inteiros e em seguida mostre na tela os valores lidos.*/

#include <stdio.h>

int main(){

    int dig[6]; // declarar (criar) um array 

    for (int i = 0; i < 6; i++) { // laco para perguntar ao usuario os valores a salvar no array

        printf("\nDigite um valor para a posiçao %d: ", i); //Escreve no console pedindo um numero para a posicao
        scanf(" %d", &dig[i]); //Le o valor digitado pelo usuario e armazena no indice do array
    }

    for (int i = 0; i < 6; i++) // laco de repeticao para percorrer o array
    {
        printf("Valor na posicao %d: %d \n", i, dig[i]); // Imprime no console o valor armazenado no indice
    }
    
    /* usamos o [i] para percorrer o array dentro do laco para passar por todos os indices */

    return 0;
}