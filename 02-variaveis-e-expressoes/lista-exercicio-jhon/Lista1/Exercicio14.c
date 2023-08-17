/*14) Faça um programa que leia três caracteres do tipo char e depois os
imprima um em cada linha. Use um único comando printf() para isso.
*/

#include <stdio.h>

int main() {

char c1, c2, c3;

    printf("Informe o primeiro caracter: ");
    scanf(" %c", &c1);

    printf("Informe o segundo caracter: ");
    scanf(" %c", &c2);

    printf("Informe o terceiro caracter: ");
    scanf(" %c", &c3);
    
    printf("Segue os valores inseridos: \nCaracter 1: %c\nCaracter 2: %c\nCaracter 3: %c", c1, c2, c3);

    return 0;
}
