/*15) Faça um programa para ler um número inteiro positivo de três dígitos.
Em seguida, calcule e mostre o número formado pelos dígitos invertidos do
número lido. Exemplo: Número lido = 123 Número gerado = 321*/

#include <stdio.h>

int main() {

int var, cen, dez, uni;

    printf("\nInforme um numero inteiro de 3 digitos: ");
    scanf("%d", &var);

    cen = var / 100;
    dez = (var % 100) / 10;
    uni = var %10;

    printf("Segue o valor invertido: %d%d%d", uni, dez, cen);

    return 0;
}