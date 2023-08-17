/*10) Faça um programa que leia três números inteiros positivos e
efetue o cálculo de uma das seguintes médias de acordo com
um valor numérico digitado pelo usuário e mostrado na tabela
a seguir:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

int tipoMedia, bool = 0;
int x, y, z;
float res;
char tipo[20];


    while (!bool) {

        printf("\nEscolha um tipo de media: \n\n1 - Geometrica\n2 - Ponderada\n3 - Harmonica\n4 - Aritmetica\n\nDigite o numero de acordo com a opcao de media: ");
        scanf(" %d", &tipoMedia);

        if (tipoMedia >= 5 || tipoMedia <= 0) {

            printf("\nValor invalido, escolha uma das opcoes abaixo.");

        } else {
            
            bool = 1;
        }   
    }

    printf("\nDigite na sequencia o valor de X, Y e Z\n");
    scanf(" %d %d %d", &x, &y, &z);

//retorna um erro caso um numero negativo seja informado
    if ( x < 0 || y < 0 || z < 0) {
        
        printf("Numero negativo informado");
        
        return 1;
    }
    
    switch (tipoMedia) {

        case 1:

            strcpy(tipo, "Geometrica");
            res = x * y * z; 
            break;
       
        case 2:

            strcpy(tipo, "Ponderada");
            res = (x + (2 * y) + (3 * z))/6;
            break;
        
        case 3:

            strcpy(tipo, "Harmonica");
            res = 1 / (1 / x + 1 / y + 1 / z);
            break;

        case 4:

            strcpy(tipo, "Aritmetica");
            res = (x + y + z) / 3; 

            break;

        default:
            break;
        }

    printf("O resultado da sua conta %s eh: %.2f", tipo, res);

return 0;
}