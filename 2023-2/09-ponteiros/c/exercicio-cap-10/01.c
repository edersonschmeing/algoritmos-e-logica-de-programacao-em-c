/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior
endereço.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int var1 = 10;
    int var2 = 10;

    int *p1 = &var1;
    int *p2 = &var2;

    if (p1 > p2) {

        printf("\nO maior endereco eh p1: %p\n", (void *)p1);
    } 
    else if (p2 > p1) {
       
        printf("\nO maior endereco eh p2: %p\n", (void *)p2);
    } 

    printf("  ");

    return 0;
}