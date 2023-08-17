/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos
de 3 considerando números maiores que 0.
*/

#include <stdio.h>

int main() {

    int var, multiplos, qtd = 0;

    printf("\nDigite um numero inteiro: ");
    scanf(" %d", &var);

    printf("\nOs multiplos de 3 do 0 ate %d, eh: ", var);

    for (int i = 0; i <= var; i++) {

        if (i % 3 == 0 && i != 0) {

            qtd +=1; 
            printf("\n- %d", i);

        }
    }

    if(qtd < 5) {

        printf("\nExistem apenas %d numeros multiplos de 3 de 0 ate %d", qtd, var);    

    }

    return 0;
}