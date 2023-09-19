/*10) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em
maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
*/

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
        
        maiuscula = toupper(str[i]);
        str[i] = maiuscula;
    }
    
    printf("Segue a palavra convertida: %s", str);

    return 0;
}