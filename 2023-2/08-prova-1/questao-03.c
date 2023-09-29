#include <stdio.h>

int funcao(int x, int *y) {
      int w = *y;
      *y = x - 1;
      return 1 + w;
}

int main() {
    int a =13, b=10;
    a = funcao(a, &b) + 12;
    b++; 
    printf("a: %d b: %d \n", a, b);
}