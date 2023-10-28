/*5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y
quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores
encontrados nas respectivas posições X e Y*/

#include <stdio.h>

int main(){

    int vet[8], soma, x, y, bool = 0;

    for(int i = 0; i < 8; i++){

        printf("\nInforme o valor da posicao %d do vetor: ", i+1);
        scanf(" %d", &vet[i]);
    }

    while (!bool) {

        printf("\nInforme a posicao que deseja para X: ");
        scanf(" %d", &x);

        if(x == 0){

            printf("Valor invalido");
        } else {

            bool = 1;
        }

        printf("\nAgora faça o mesmo para y: ");
        scanf(" %d", &y);

        if(y == 0){

            printf("Valor invalido");
        } else {

            bool = 1;
        }
    }

    x -= 1;
    y -= 1;
    soma = vet[x] + vet[y];

    printf("\nA soma dos valores encontrados nas posicoes %d e %d eh: %d", x + 1, y + 1, soma);
    printf("\n ");

    return 0;
}