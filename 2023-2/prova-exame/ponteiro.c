#include <stdio.h>

int main() {  
    int *p, **r, a = -2, c, b = 10, d = 1;
    p = &a;
    r = &p;
    c = **r + ++b * d--;
    printf("%d", c);
} 
