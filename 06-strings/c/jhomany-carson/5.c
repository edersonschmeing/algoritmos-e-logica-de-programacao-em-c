/*5) Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma
variável. Em seguida, imprima a string invertida
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char str[20], var[20];
    int qtd = 0, j = 0;

    printf("Digite a palavra String: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    while(str[qtd] != '\0' && str[qtd] != '\n') {
        
        qtd++;
    }

    for (int i = qtd; i >= 0; i--) {
    
        var[j] = str[i];
        j++;
    }
    
    strcpy(str, var);

    printf("\nSegue a variavel impressa ao contrario: %s", str);
    printf("\n ");

    return 0;
}
