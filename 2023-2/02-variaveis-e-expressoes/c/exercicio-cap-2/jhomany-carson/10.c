/*10) Elabore um programa que solicite ao usuário entrar com o valor do
dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados
por uma barra (\).*/

#include <stdio.h>

int main() {

int d, m, a;

    printf("Digite o dia: ");
    scanf("%d", &d);

    printf("Digite o mes: ");
    scanf("%d", &m);

    printf("Digite o ano: ");
    scanf("%d", &a);

    printf("Segue a data informada: %d/%d/%d", d, m, a);

    return 0;
}
