/*6) Faça um programa que leia um valor do tipo double e depois o imprima
na forma de notação científica.
*/

#include <stdio.h>

int main() {

double x;

    printf("Digite um numero: ");
    scanf(" %f", &x);

    printf("Lendo um double e imprimindo em forma de notacao cientifica: %e", x);

    return 0;
}