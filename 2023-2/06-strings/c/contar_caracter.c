#include <stdio.h>

int main() {
    char a[60] = "Estou aprendendo algoritmos e lógica de programação";
    int total = 0;
    while(a[total] != '\0')
        total++;
    printf("%d\n", total);
}