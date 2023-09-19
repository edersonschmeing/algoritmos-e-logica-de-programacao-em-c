/*15) Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em que elas
apareceriam em um dicionário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {

    char str[20], str2[20];

    printf("\nDigite uma palavra: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    printf("\nDigite mais uma palavra: ");
    setbuf(stdin, NULL);
    fgets(str2, sizeof(str2), stdin);

    if (strcmp(str, str2) < 0) {

        printf("Em ordem alfabetica:\n\n1 - %s\n2 - %s\n", str, str2);
    } 
    else {

        printf("Em ordem alfabetica:\n\n1 -%s\n2 - %s\n", str2, str);
    }
    return 0;
}