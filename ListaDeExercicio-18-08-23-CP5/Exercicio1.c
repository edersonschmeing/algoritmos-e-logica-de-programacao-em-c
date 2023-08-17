#include <stdio.h>

int main() {

int n;

    printf("\nDigite um numero inteiro: ");
    scanf(" %d", &n);

    for (int i = 0; i <= n; i++) {

        printf("\n- %d", i);

    }

    return 0;
}