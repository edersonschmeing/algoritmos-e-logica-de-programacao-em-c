/*19) Faça um programa que calcule e escreva o valor de S: 

s = 1/1 + 3/2 + 5/3 + 7/4 ... 99/55*/

#include <stdio.h>
#include <unistd.h>

int main() {

    int i = 1, denominador = 1;
    float s = 0;

    printf("\nCaluclando o valor de S...");
    sleep(2);

    while (i <= 99) {

        s = s + (i / denominador);
        denominador++;
        i += 2;
    }
    
    printf("\n\nO valor de S eh: %.2f\n", s);
    printf("\n");

    return 0;
}