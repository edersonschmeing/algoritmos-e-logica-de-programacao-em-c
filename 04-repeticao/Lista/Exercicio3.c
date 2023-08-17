/*3) Faça um programa que leia um número inteiro N e depois imprima os N
primeiros números naturais ímpares.*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, impar;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &n);


    for (int i = 0; i <= n; i++) {

        impar = i;

        if( impar % 2 == 1) {
            
            printf("\n- %d", impar);

        }
    }

    return 0;
}