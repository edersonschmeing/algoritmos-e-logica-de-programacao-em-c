/*11) Faça um algoritmo que leia um número positivo e imprima seus
divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33
e 66.*/

#include <stdio.h>

int main() {

    int num, divisor, cont = 1;
    
    printf("\nInforme um numero positivo: ");
    scanf(" %d", &num);

    printf("\nOs divisores do numero %d sao: ", num);
    while (cont <= num) {

        if(num % cont == 0){

            divisor = cont;
            printf(" %d", divisor);
        }
        
        cont++;
    }

    return 0;
}