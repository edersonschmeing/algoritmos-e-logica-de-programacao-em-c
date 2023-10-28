/*7) Elabore um programa que leia um caractere e depois o imprima como um
valor inteiro. */

#include <stdio.h>

int main() {

char x;

    printf("Digite um caracter: ");
    scanf(" %c", &x);

    printf("lendo em char e imprimindo em inteiro: %d", x);

    return 0;
}