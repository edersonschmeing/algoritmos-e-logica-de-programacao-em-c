/*2) Faça um programa que leia uma string e imprima as quatro primeiras
letras dela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
     
    char str[30];

    printf("Informe seu estado: ");
    fgets(str, 30, stdin);

    if (strlen(str) >= 4) {
    
        printf("As 4 primeiras letras sao:");

        for(int i = 0; i < 4; i++) {

            if (i < 3) {

                printf(" %c -", str[i]);
            }
            else {

                printf(" %c", str[i]);
            }
        }
    }
    else {

        printf("O estado tem menos do que 4 letras");
    }
    

    return 0;
}