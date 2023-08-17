/*14) Faça um programa para verificar se determinado número
inteiro lido é divisível por 3 ou 5, mas não simultaneamente
pelos dois.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int num;

    printf("\nDigite um numero: ");
    scanf(" %d", &num);

//valida se é divisivel por 3 caso o resto seja = 0
    if (num % 3 == 0) {
        
        printf("\nDivisivel por 3");

    } else {

        printf("\nNao divisivel por 3");

    }

    if (num % 5 ==0) {
        
        printf("\nDivisivel por 5");

    } else {
        
        printf("\nNao divisivel por 5");

    }
    


    



return 0;
}