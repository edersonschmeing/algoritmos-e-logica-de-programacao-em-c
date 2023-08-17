/*2) Faça um programa que leia dois números e mostre o maior
deles. Se, por acaso, os dois números forem iguais, imprima a
mensagem “Números iguais"*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int v1, v2, maiorValor;

    printf("Digite o valor 1 e o Valor 2: \n");
    scanf("%d %d", &v1, &v2);

    if (v1 > v2) {
        
        maiorValor = v1;

    } else if (v2 > v1) {
        
        maiorValor = v2; 

    } else if (v1 == v2) {
        
        printf("Os numeros sao iguais\n\n");
        exit (0);
    }

    printf("O maior numero eh: %d", maiorValor);

return 0;

}