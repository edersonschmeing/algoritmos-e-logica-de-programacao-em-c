#include <stdio.h>

int maior_divisor_comum(int x, int y){
    if (y == 0)
        return x;
    else
        return mdc(y, x % y);
}

int main(){
    printf("MDC: %d\n", maior_divisor_comum(4, 6));
}