/*12) Leia a altura e o raio de um cilindro circular e imprima o volume
desse cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula:
v = pi * raio² * altura
*/

#include <stdio.h>

int main() {

const float PI = 3.14;
float alt, raio, vol;


    printf("\nInforme a altura do cilindo: ");
    scanf("%f", &alt);

    printf("\nAgora informe o raio: ");
    scanf("%f", &raio);
   
    vol = PI * (raio * raio) * alt;

    printf("\nO volume do cilindro eh: %.2f", vol);

    return 0;
}