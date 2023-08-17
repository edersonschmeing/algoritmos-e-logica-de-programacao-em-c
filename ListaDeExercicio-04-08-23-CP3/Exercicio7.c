/*7) Faça um programa que leia um valor em reais e a cotação do dólar. Em
seguida, imprima o valor correspondente em dólares*/

#include <stdio.h>

int main() {

float real, cot, dolar;

    printf("\nInforme um valor em real: ");
    scanf("%f", &real);

    printf("\nDigite a cotacao do Dolar: ");
    scanf("%f", &cot);

    dolar = real / cot;

    printf("\nR$%.2f em dolar eh: U$%.2f", real, dolar);

    return 0;
}