/*1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na memória: char,
int, float, double.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("\nO tamanho de um char eh: %lu bytes", sizeof(char));
    printf("\nO tamanho de um int eh: %lu bytes", sizeof(int));
    printf("\nO tamanho de um double eh: %lu bytes", sizeof(double));
    printf("\nO tamanho de um float eh: %lu bytes", sizeof(float));

    return 0;
}