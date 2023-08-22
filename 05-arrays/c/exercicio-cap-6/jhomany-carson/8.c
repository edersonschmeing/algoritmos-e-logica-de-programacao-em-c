/*8) Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a
quantidade de números negativos e a soma dos números positivos desse vetor.*/

#include <stdio.h>

int main() {

    int vet[10], cont = 0, soma = 0;

    for (int i = 0; i < 10; i++) {
        
        printf("\nDigite o valor %d: ", i+1);
        scanf(" %d", &vet[i]);

        if(vet[i] < 0) {

            cont++;
        } else {

            soma += vet[i];
        }
    }
    
    printf("\nA quantidade de numeros negativos informado foi: %d\n\nA soma dos numeros positivos informados resulta em: %d", cont, soma);
    printf("\n ");

    return 9;
}