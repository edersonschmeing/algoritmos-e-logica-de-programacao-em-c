/*21) Escreva um programa que leia certa quantidade de números, imprima o
maior deles e quantas vezes o maior número foi lido. A quantidade de
números a serem lidos deve ser fornecida pelo usuário.
*/

#include <stdio.h>

int main() {

    int n, valor, maior = 0, cont = 0;

    printf("\nDigite a quantidade de numeros que deseja ler: ");
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++) {

        printf("\nDigite o valor %d: ", i);
        scanf(" %d", &valor);

        if (maior < valor) {
            
            maior = valor;
            cont++;
        }
        
    }

    printf("\nO maior numero eh o: %d\n\nEle foi lido e alterado %d vezes\n", maior, cont);
    printf("\n ");

    return 0;
}