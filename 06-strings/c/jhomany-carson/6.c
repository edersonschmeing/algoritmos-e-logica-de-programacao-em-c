/*6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal
ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova
string e o número de vogais que ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main () {

    char str[20], str2[20], caracter;
    int qtdVogal = 0, tamanho;
    char caseSensitive;

    printf("\nDigite uma palavra: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    tamanho = strlen(str);

    printf("\nAgora digite um caracter (Vogal ou Consoante): ");
    scanf(" %c", &caracter);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        caseSensitive = tolower(str[i]);
        if (caseSensitive == 'a' || caseSensitive == 'e' || caseSensitive == 'i' || caseSensitive == 'o' || caseSensitive == 'u') {
            
            qtdVogal++;
            str2[i] = caracter;
        } 
        else {
            
            str2[i] = str[i];
        }
    }

    //adicionar o fim de string a minha segunda string
    str2[tamanho+1] = '\0';
    
    //substituir as primeiras letras por maiusculo para Imprimir.
    caseSensitive = toupper(str[0]);
    str[0] = caseSensitive;

    caseSensitive = toupper(str2[0]);
    str2[0] = caseSensitive;

    printf("\nExistem %d vogais na palavra %s", qtdVogal, str);
    printf("\nSubstituindo todas as vogais pelo caracter informado, ficaria assim: %s", str2);
    printf("\n ");

    return 0;
}
