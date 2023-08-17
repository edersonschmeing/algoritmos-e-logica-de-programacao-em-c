/*18) Elabore um programa que leia dois números inteiros e exiba o
deslocamento, à esquerda e à direita, do primeiro número pelo segundo.
*/

#include <stdio.h>

int main() {

    int numero1, numero2;

// Solicitar ao usuário para inserir dois números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

// Deslocamento à esquerda do primeiro número pelo valor do segundo número
    int deslocamento_esquerda = numero1 << numero2;

// Deslocamento à direita do primeiro número pelo valor do segundo número
    int deslocamento_direita = numero1 >> numero2;

// Exibir os resultados
    printf("Deslocamento a esquerda: %d\n", deslocamento_esquerda);
    printf("Deslocamento a direita: %d\n", deslocamento_direita);

    return 0;
}
