/*14) O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de
substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no
alfabeto. Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e
assim por diante. Escreva um programa que faça uso desse código de César para três posições. Entre com
uma string e imprima a string codificada. Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro
cansado. Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fd ruur fdqvdgr*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char str[20], alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int qtd = 0;

    printf("\nDigite sua senha para codificacao: ");
    setbuf(stdin, NULL);
    fgets(str, sizeof(str), stdin);

    qtd = strlen(str);
    qtd--;

    for (int i = 0; i < qtd; i++) {
        
        for (int j = 0; j < 27; j++) {
            
            if (str[i] == alfabeto[j]) {

                if (str[i] == 'x') {
                    
                    str[i] = alfabeto[0];
                    break;
                }
                else if(str[i] ==  'y') {

                    str[i] = alfabeto[1];
                    break;
                }
                else if(str[i] == 'z') {

                    str[i] = alfabeto[2];
                    break;
                } 
                else {
                
                    str[i] = alfabeto[j + 3];
                    break;
                }
            }   
        }
    }
    
    printf("\nSegue a palavra codificada: %s", str);
    printf("\n ");
 
    return 0;
}