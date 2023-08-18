/*13) Faça um programa que exiba a soma de todos os números naturais abaixo
de 1.000 que são múltiplos de 3 ou 5. */

#include <stdio.h>

int main() {

    int naturais = 1000, cont = 0, soma = 0;

    while (cont < naturais) {
        
        if(cont % 3 == 0 || cont % 5 == 0){
            
            soma += cont;
        }

        cont++;
    }

    printf("\nO resultado da soma de todos os numeros naturais menores que %d multiplos de 3 ou 5, eh: %d", naturais, soma);
    printf("\n  ");

    return 0;
}