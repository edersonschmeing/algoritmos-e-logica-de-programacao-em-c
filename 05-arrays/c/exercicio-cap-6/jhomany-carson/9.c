/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um
novo array C calculando C = A – B. Mostre na tela os dados do array C.*/

#include <stdio.h>
#include <unistd.h>

int main() {

    int A[10], B[10], C[10];

    for(int i = 0; i < 10; i++){

        printf("\nInforme o valor %d do vetor A: ", i+1);
        scanf(" %d", &A[i]);
    }

    printf("\nPerfeito! Agora o vetor B");
    sleep(2);

    for(int i = 0; i < 10; i++){

        printf("informe o valor %d do vetor B: \n", i+1);
        scanf(" %d", &B[i]);
    }

    printf("\n\nSegue os valores do vetor C: ");

    for(int i = 0; i < 10; i++){

        C[i] = A[i] - B[i];

        if(i < 9 ){
            printf("%d, ", C[i]);
        } else {

            printf("%d.");
        }
    }
    printf("\n ");

    return 0;
}