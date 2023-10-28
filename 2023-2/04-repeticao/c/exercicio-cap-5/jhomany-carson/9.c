/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e
o maior valor lido*/

#include <stdio.h>

int main() {

    float var = 0, menor = 0, maior = 0;
    printf("Digite 10 numeros: ");

    for(int i = 1; i <= 10; i++){

        printf("Digite o valor %d: ", i);
        scanf(" %f", &var);

        if(maior < var){

            maior = var;
        }
        
        if (menor == 0){

            menor = var;
        } else if(menor > var) {
            
            menor = var;
        }

    }

    if(maior == menor){

        printf("\nO maior e o menor sao iguais =)");
    } else {

        printf("\nmaior %.2f\n\nmenor%.2f", maior, menor);

    }
    return 0;
}