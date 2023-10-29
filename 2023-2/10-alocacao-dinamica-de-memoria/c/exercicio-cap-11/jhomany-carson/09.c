/*9) Crie uma função que receba uma string e retorne o ponteiro para essa string invertida. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * inverterString (const char * str){

    int tamanho = strlen(str);

    char * strinversa = (char *) malloc((tamanho + 1) * sizeof(char));

    if (strinversa == NULL) {
        
        printf("\nNao foi possivel alocar a memoria");
        
        exit(1);
    }
    
    for (int i = 0; i < tamanho; i++) {
        
        strinversa[i] = str[tamanho - 1 - i];
    }

    strinversa[tamanho] = '\0';

    return strinversa;    
}

int main() {

    char str[100];
    size_t tamanho = 0;
    char * strinversa;

    printf("Digite a string que deseja: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    strinversa = inverterString(str);

    printf("\nstring de entrada: %s", str);
    printf("\nString invertida: %s", strinversa);

    return 0;
}