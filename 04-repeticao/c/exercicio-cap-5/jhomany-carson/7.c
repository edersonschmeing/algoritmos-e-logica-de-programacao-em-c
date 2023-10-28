/*7) Elabore um programa que peça ao usuário para digitar 10 valores. Some
esses valores e apresente o resultado na tela.*/

#include <stdio.h>

int main() {

    int valor, res = 0;

    printf("\nDigite dez valores\n\n");

    for(int i = 1; i <= 10; i++){

        printf("Valor %d: ", i);
        scanf(" %d", &valor);

        res += valor;
    }

    printf("\nA soma dos valores informados eh: %d", res);

    return 0;
}