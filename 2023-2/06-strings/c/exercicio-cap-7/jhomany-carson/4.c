/*4) Faça um programa que leia uma string e a imprima de trás para a frente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
 
    char str[30];
    int qtd = 0;

    printf("\nInforme o nome da sua mae: ");
    fgets(str, 30, stdin);

    while(str[qtd] != '\0' && str[qtd] != '\n') {
        
        qtd++;
    }

    for (int i = qtd; i >= 0; i--) {
      
        printf("%c", str[i]);
    }
      
    return 0;
}