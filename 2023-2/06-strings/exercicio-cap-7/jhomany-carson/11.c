/*11) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em
minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {
 
    char str[20], maiuscula;
    int qtd = 0;

    printf("Digite a palavra: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    qtd = strlen(str);

    qtd - 1;

    for (int i = 0; i < qtd; i++) {
        
        maiuscula = tolower(str[i]);
        str[i] = maiuscula;
    }
    
    printf("\nSegue a palavra convertida: %s", str);
    printf("\n ");

    return 0;
}