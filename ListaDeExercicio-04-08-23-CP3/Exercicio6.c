/*6) Leia uma velocidade em km/h (quilômetros por hora) e apresente
convertida em m/s (metros por segundo). A fórmula de conversão é M =
K/36, sendo K a velocidade em km/h e M em m/s.
*/

#include <stdio.h>

int main() {

int km, ms;

    printf("\nDigite a valocidade em KM/h: ");
    scanf(" %d", &km);

    ms = km/36;

    printf("Sua velocidade em M/S eh: %d", ms);

    return 0;
}