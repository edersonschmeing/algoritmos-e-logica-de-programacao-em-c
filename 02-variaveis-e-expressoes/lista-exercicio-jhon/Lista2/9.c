/*9) Leia um ângulo em graus e apresente-o convertido em radianos. A
fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em
radianos e π = 3.141592*/

#include <stdio.h>

int main() {

const float PI = 3.14;
float grau, raio;

    printf("\nInforme o angulo em graus: ");
    scanf("%f", &grau);

    raio = (grau * PI) / 100;

    printf("\nSegue o raio do grau informado: %.2f", raio);

    return 0;
}