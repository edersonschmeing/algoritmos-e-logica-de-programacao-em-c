#include <stdio.h>

int main() {
    int i = 0, j=-9, k=7, cont;  
    for (cont = 4; cont < 11; cont++) {
        i = cont + 5;
        while ( k > 0) {
           k = k - 1;
           j = k + j / 2;
        }
    } 
    printf("i: %d j: %d k: %d \n", i, j, k); 
    return 0;
}
