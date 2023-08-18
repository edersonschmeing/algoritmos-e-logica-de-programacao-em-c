/*9) Faça um programa que leia dois valores do tipo float. Use um único
comando de leitura para isso. Em seguida, imprima os valores lidos na
ordem inversa em que eles foram lidos*/

#include <stdio.h>

int main() {

float v1, v2;

    printf("Informe dois valores: \n");
    scanf("%f %f", &v1,&v2);

    printf("Segue o V2: %.2f e o V1: %.2f", v2,v1);

    return 0;
}
