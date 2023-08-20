#include <stdio.h>

/*
2) Faça um programa que leia um número inteiro positivo N e 
imprima todos os números naturais de 0 até N em ordem decrescente.
*/

int main(){
    int n, i;
    
    printf("Informe um número inteiro N: ");
    scanf("%d", &n);
    
    printf("\nDeclaração da variável (i) na estrutura do (for).\n");
    for(i = n; i >= 0; i--){
        printf("%d ", i);
    }
    printf("\nDeclaração da variável (i) fora da estrutura do (for).\n");
    for(int i = n; i >= 0; i--){
        printf("%d ", i);
    }
    
    printf("\n");


    return 0;
}