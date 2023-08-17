/*17) Escreva um programa que leia um número inteiro e mostre o seu
complemento bit a bit. */

#include <stdio.h>

int main() {
    int numero;

// Solicitar ao usuário para inserir um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

// Calcular o complemento bit a bit
    int complemento = ~numero;

// Exibir o resultado
    printf("O complemento bit a bit de %d eh: %d\n", numero, complemento);

    return 0;
}
