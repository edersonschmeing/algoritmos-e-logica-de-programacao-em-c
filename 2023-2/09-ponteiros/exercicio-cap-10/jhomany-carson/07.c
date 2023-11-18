/*7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre
dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int VerificarStrings(char *str1, char *str2) {

    while(*str1 != '\0') {

        while (*str1 && *str2 && *str1 == *str2) {
            
            str1++;
            str2++;
        }
        if (!*str2) {
            
            return 1;
        }
        str1++;
    }

    return 0;
}

int main () {

    char *str1 = NULL;
    char *str2 = NULL;

    str1 = (char *) malloc(100 * sizeof(char));
    str2 = (char *) malloc(100 * sizeof(char));

    if(str1 == NULL) {

        printf("\nErro na alocacao da String 1");
        return 1;
    }
    else if (str2 == NULL) {
        
        printf("\nErro na alocacao da String 2");
        return 1;
    }

    printf("\nDigite a primeira String: ");
    
    setbuf(stdin, NULL);

    fgets(str1, 100, stdin);

    size_t len1 = strlen(str1);

    if (len1 > 0 && str1[len1 -1] == '\n') {
        
        str1[len1 - 1] = '\0';
    }

    printf("\nDigite a segunda String: ");
    
    setbuf(stdin, NULL);

    fgets(str2, 100, stdin);

    size_t len2 = strlen(str2);

    if (len2 > 0 && str2[len2 - 1] == '\n') {

        str2[len2 - 1] = '\0';
    }

    if(VerificarStrings(str1, str2) == 1){

        printf("\nA segunda String esta dentro da primeira");
    }
    else {

        printf("\nA Segunda String NAO esta dentro da primeira");
    }

    free(str1);
    free(str2);

    return 0;
}