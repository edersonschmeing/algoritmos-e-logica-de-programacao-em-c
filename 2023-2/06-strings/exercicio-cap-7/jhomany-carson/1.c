/*1) Faça um programa que leia uma string e a imprima na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
    char str[30];

    printf("Informe seu nome: ");
    fgets(str, 30, stdin);

    printf("O seu nome eh %s?", str);

    return 0;
}