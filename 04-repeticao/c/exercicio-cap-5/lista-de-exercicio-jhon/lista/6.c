/*6) Faça um programa que mostre uma contagem regressiva na tela, iniciando
em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.*/

#include <stdio.h>

int main() {

    int i = 10;

    printf("\nSegue a contagem regressiva de 10 a 0: \n\n");

    for (i; i >= 0; i--){

        printf("\n%d", i);
    }

    printf("\n\nFIM");

    return 0;
}