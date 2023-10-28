/*17) Escreva um programa que leia um número inteiro positivo N e em
seguida imprima N linhas do chamado triângulo de Floyd:*/

#include <stdio.h>

int main() {

    int n, i, j, cont = 0;

    printf("Digite o valor de n: ");
    scanf(" %d", &n);

    for(i = 0; i <= n; i++) {

        for (j = 0; j <= i; j++) {
           
            printf(" %d", cont);
            cont++;
        }
        printf("\n");
    }
    return 0;
}