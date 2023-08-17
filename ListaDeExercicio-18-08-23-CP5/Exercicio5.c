/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números
pares.
*/

#include <stdio.h>

int main() {

    int n, par, res = 0, qtd = 0;

    printf("\nInforme um numero: ");
    scanf(" %d", &n);

    for (int i = 0; i <= n; i++) {

        if (i % 2 == 0 && i != 0) {

            qtd++;
            par = i;
            res += par;
            printf("\n- %d", i);
        }
    }

    if (qtd < 50) { 
        
        printf("\nHaviam apenas %d numeros pares de 0 a %d", qtd, n);
    }

    printf("\n\nA soma dos valores pares que existiam entre 0 e %d eh: %d", n, res);
    return 0;
}