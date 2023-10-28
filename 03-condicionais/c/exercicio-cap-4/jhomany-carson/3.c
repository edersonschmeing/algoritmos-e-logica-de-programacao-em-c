/*3) Faça um programa que leia um número inteiro e verifique se
esse número é par ou ímpar*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int var;

    printf("\nDigite um numero: ");
    scanf("%d", &var);

    if(var % 2 == 1){

        printf("\no numero %d eh impar", var);

    } else {
        
        printf("\no numero %d eh par", var);
    
    }

return 0;

}