/*
7) Faça um programa que receba do usuário um vetor X com 10 posições. 
Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/

#include <stdio.h>

int main() {
    int vetor[10]; //declara um array de 10 posicoes
    int maior, menor; // declara as variaveis que receberao o menor e o maior valor

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]); //atribui a posicao do vetor o valor digitado 

        // Se for o primeiro valor, considera ele como maior e menor
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            // Verifica se o valor é maior que o atual maior 
            if (vetor[i] > maior) {
                maior = vetor[i]; // atribui a variavel de maior valor o valor atual
            }
            // Verifica se o valor é menor que o atual menor
            if (vetor[i] < menor) {
                menor = vetor[i]; // atribui a variavel de menor valor o valor atual
            }
        }
    }

    // Exibe o maior e o menor elemento
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
