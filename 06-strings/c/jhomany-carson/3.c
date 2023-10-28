/*3) Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela
possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
 
    char str[30];
    int qtd = 0;

    printf("\nInforme o nome do seu pet: ");
    fgets(str, 30, stdin);

    while(str[qtd] != '\0' && str[qtd] != '\n') {
        
        qtd++;
    }
    
    printf("\nForam informados %d caracteres!", qtd);
    printf("\n ");

    return 0;
}