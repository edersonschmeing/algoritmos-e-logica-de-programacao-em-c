/*2) Faça um programa que leia um número real e imprima a quinta parte
desse número.*/

#include <stdio.h>

int main() {
    float nr, QuintaParte;

    printf("Digite um número real: ");
    if (scanf("%f", &nr) != 1) {
        printf("Erro: Entrada invalida. Certifique-se de digitar um número real válido.\n");
        return 1;
    }

    QuintaParte = nr / 5.0;
    printf("A quinta parte de %.2f eh: %.2f\n", nr, QuintaParte);

    return 0;
}