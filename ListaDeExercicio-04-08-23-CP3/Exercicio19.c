/*19) Elabore um programa que leia dois números inteiros e exiba o
resultado das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit”
entre eles.
*/

#include <stdio.h>

int main() {

    int numero1, numero2;

// Solicitar ao usuário para inserir dois números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

// Operação "ou exclusivo" (XOR)
    int ou_exclusivo = numero1 ^ numero2;

// Operação "ou bit a bit" (OR)
    int ou_bit_a_bit = numero1 | numero2;

// Operação "e bit a bit" (AND)
    int e_bit_a_bit = numero1 & numero2;

// Exibir os resultados
    printf("Resultado do 'ou exclusivo': %d\n", ou_exclusivo);
    printf("Resultado do 'ou bit a bit': %d\n", ou_bit_a_bit);
    printf("Resultado do 'e bit a bit': %d\n", e_bit_a_bit);

    return 0;
}
