/*5) Faça um programa que leia um número e, caso ele seja
positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int num;
float num2, raiz; 

    printf("\nDigite um numero: ");
    scanf(" %d", &num);

    if (num < 0) {
        
        printf("\nO numero informado eh negativo");
        exit(0);
    }

    raiz = sqrt(num);
    num2 = num * num;

    printf("\nO numero informado elevado ao quadrado eh: %.2f", num2);
    printf("\nA raiz quadrada do numero informado eh: %.2f", raiz);
    
    return 0;
}