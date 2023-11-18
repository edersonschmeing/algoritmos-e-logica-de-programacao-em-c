/*7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou
não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda
como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {

    char str[20], str2[20], c1, c2;
    int tamanho = 0, j = 0, bool;

    printf("\nDigite uma palavra: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    while (str[tamanho] != '\0' && str[tamanho] != '\n') {
       
        tamanho++;
    }
    
    for (int i = tamanho -1; i >= 0; i--) {
        
        str2[j] = str[i];
        j++;
    }
    
    str2[tamanho+1] = '\0';

    //printf("\nstr %s\nstr2 %s", str, str2);

    for (int i = 0; i < tamanho; i++) {

        c1 = tolower(str[i]);
        c2 = tolower(str2[i]);

        //printf("\nc1: %c e c2: %c", c1, c2);
        if (c1 == c2) {
            
            bool = 1;
        }
        else {

            bool = 0;
            break;
        }
    }
    
    if (bool == 1) {
        
        printf("\nA string eh um palindromo =)");   
    }
    else {

        printf("\nA string nao um palindromo =(");
    }

    printf("\n ");
    return 0;
}
