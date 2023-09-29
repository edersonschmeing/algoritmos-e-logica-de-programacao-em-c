/*4) Crie um programa que contenha uma matriz de float com três linhas e três colunas. Imprima o endereço
de cada posição dessa matriz. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    float m[3][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float *p = &m[0][0];

    for (int i = 0; i < 9; i++) {
        
        printf("[%d] [%d] = %p\n", i / 3, i % 3, (void *)(p++));
    }

    return 0;
}