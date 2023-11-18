/*13) Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida,
imprima os caracteres contidos no segmento que vai de i a j da string S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
    int i = 0, j = 0;
    char S[20];
    

    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    fgets(S, sizeof(S), stdin);

    do {
       
        printf("\nDigite o valor de i: ");
        scanf(" %d", &i);

        if (i < 0) {
            
            printf("\nDigite um valor maior que '0'!\n");
        }
    } 
    while (i < 0);

    do {
       
        printf("\nDigite o valor de j: ");
        scanf(" %d", &j);

        if (j < 0) {
            
            printf("\nDigite um valor maior que '0'!\n");
        }
    } 
    while (j < 0);
    
    printf("\nA string de a partir da posicao %d ate a posicao %d eh: ", i, j);

    for (i; i <= j; i++) {
        
        printf("%c", S[i]);
    }
    

    return 0;
}