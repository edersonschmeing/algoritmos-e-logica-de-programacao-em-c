/*Faça um programa que converta uma letra maiúscula em letra minúscula. Use
a tabela ASCII para isso.*/

#include <stdio.h>

char toUpper(char maiusculo) {

// Verifica se o caractere é uma letra minúscula
    if (maiusculo >= 'a' && maiusculo <= 'z') {
    
// se for minuscula, subtraio  32 de acordo com o valor ASCII para transformar em maiuscula
        return maiusculo - 32;

    } else {

// Caso não seja uma letra minúscula, retorna o próprio caractere
        return maiusculo;
    }
}

char toLower(char minusculo) {
    
// Verifica se o caractere é uma letra maiúscula
    if (minusculo >= 'A' && minusculo <= 'Z') {

// Converte o caractere para minúscula adicionando 32 ao valor ASCII
        return minusculo + 32;

    } else {

// Caso não seja uma letra maiúscula, retorna o próprio caractere
        return minusculo;
    }
}

int main() {

    char var, letra;

    printf("\nDigite uma letra: ");
    scanf(" %c", &letra);

    if (letra >= 'a' && letra <= 'z') {

        var = toUpper(letra);

    } else {

        var = toLower(letra);
    
    }
    
    printf("\nA letra maiuscula correspondente eh: %c\n", var);

    return 0;
}