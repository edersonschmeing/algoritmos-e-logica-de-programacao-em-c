/*
6) Escreva um programa que leia do teclado um vetor de 10 posições.
Escreva na tela quantos valores pares foram armazenados nesse vetor.
*/

#include <stdio.h>

int main() {
    int vetor[10]; // Declara o vetor com 10 posicoes
    int countPares = 0; // contador de valores pares

    // Lê um vetor de 10 posições
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]); // atribui a posicao do vetor o valor digitado

        // Verifica se o valor é par
        if (vetor[i] % 2 == 0) { // divide o valor por 2 e verifica se o resto da divisao é 0
            countPares++; // soma +1 na conta de pares
        }
    }

    // Exibe a quantidade de valores pares
    printf("Quantidade de valores pares no vetor: %d\n", countPares);

    return 0;
}
