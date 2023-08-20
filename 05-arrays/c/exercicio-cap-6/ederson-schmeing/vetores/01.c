#include <stdio.h>

/*
1) Faça um programa que leia um número inteiro positivo N e 
imprima todos os números naturais de 0 até N em ordem crescente. 
*/

int main(){
    int n;

    printf("Informe um número inteiro N: ");
    scanf("%d", &n);
    
    printf("\nDeclaração da variável (i) na estrutura do (for).\n");
    for(int i = 0; i <= n; i++){
        printf("%d ", i);
    }
    
    printf("\nDeclaração da variável (i) fora da estrutura do (for).\n");
    int i; 
    for(i = 0; i <= n; i++){
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}