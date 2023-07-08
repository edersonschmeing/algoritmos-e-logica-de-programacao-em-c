#include <stdio.h>

int funcao(char b[]) {
    int total = 0;
    while(b[total] != '\0')
        total++;
    return total;
}

int main() {
    
    char a[60] = "Estou aprendendo algoritmos e lógica de programação";

    printf("%d\n", funcao(a));
}