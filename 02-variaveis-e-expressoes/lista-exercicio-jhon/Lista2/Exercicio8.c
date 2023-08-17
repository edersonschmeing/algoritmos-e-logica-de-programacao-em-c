/*8) Leia um valor que represente uma temperatura em graus Celsius e
apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F =
C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.
*/

#include <stdio.h>

int main() {

float grauC, grauF;

    printf("\nInforme a temperatura em grau Celsius: ");
    scanf("%f", &grauC);

    grauF = grauC * (9.0 / 5.0) + 32.0;

    printf("\nA temperatura em Fahrenheit eh: %.2f", grauF);

    return 0;
}