/*16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão
desse número por dois (utilize os operadores de deslocamento de bits).*/

#include <stdio.h>

int main() {

    unsigned int numero;

// Solicitar ao usuário para inserir um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%u", &numero);

// Multiplicar o número por 2 usando deslocamento à esquerda
    unsigned int multiplicacao = numero << 1;

// Dividir o número por 2 usando deslocamento à direita
    unsigned int divisao = numero >> 1;

// Exibir os resultados
    printf("Multiplicacao por 2: %u\n", multiplicacao);
    printf("Divisao por 2: %u\n", divisao);

    return 0;
}





