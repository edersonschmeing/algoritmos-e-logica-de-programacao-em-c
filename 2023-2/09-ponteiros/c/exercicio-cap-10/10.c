/*10) Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia a variável a e calcule e
exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve
ser usado para calcular o dobro, c, o triplo, e d, o quádruplo.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int a;
    int *b;
    int **c;
    int ***d;

    b = &a;
    c = &b;
    d = &c;

    printf("\nDigite o valor de A: ");
    scanf(" %d", &a);

    *b = *b * 2;
    
    printf("\nO dobro do valor de A: %d", a);

    **c = (**c / 2) * 3;

    printf("\nO triplo do valor de A: %d", a);

    ***d = (***d / 3) * 4;

    printf("\nO quadruplo do valor de A: %d\n\n", a);

    return 0;
}