/*1) Faça um programa que leia um número inteiro e retorne seu antecessor e
seu sucessor.*/

#include <stdio.h>

int main() {

int var, ant, suc;

    printf("\nInforme um numero inteiro: ");
    scanf(" %d", &var);

    ant = var - 1;
    suc = var + 1;

    printf("\nSegue o antecessor e o sucessor do numero %d:\n\nAntecessor: %d\n\nSucessor: %d", var, ant, suc);

    return 0;
}