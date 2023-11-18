/*3) Crie um programa que contenha um array de float com 10 elementos. Imprima o endereço de cada
posição desse array.*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float array[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float *p = array;

    for (int i = 0; i < 10; i++) {
        
        printf("Segue o endereco %d do array: %p\n\n", i, (void *)(p+i));
    }
    

    return 0;
}