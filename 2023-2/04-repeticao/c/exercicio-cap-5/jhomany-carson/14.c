/*14) Escreva um programa que leia um número inteiro, maior ou igual a
zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa
sequência começa no termo de ordem zero, e, a partir do segundo termo,
seu valor é dado pela soma dos dois termos anteriores. Alguns termos
dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>

int main() {

    int anterior = 0, atual = 1, proximo = 0, n, bool = 0;

    while (!bool) {
                
        printf("Digite um numero maior ou igual a zero: ");
        scanf(" %d", &n);

        if(n < 0){
        
            printf("Erro, o numero eh menor que zero, por favor, ");
        } else if (n == 0){

            proximo = 0;
            bool = 1;
        } else if(n == 1){

            proximo = 1;
            bool = 1;
        } else {

            for (int i = 0; i < n; i++) {
  
                proximo = anterior + atual;
                anterior = atual;
                atual = proximo;
                
            }
        }

        printf("\n\nO enesimo numero eh: %d", anterior);
        bool = 1;
    }

    return 0;
}