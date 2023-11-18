/*10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que
não são múltiplos de 7. Ao final, imprima esse vetor na tela. */


#include <stdio.h>

int main() {

    int vet[100], n = 0; 

    printf("\nOs numeros naturais nao multiplos de 7 que foram armazenados sao: ");
    for (int i = 0; i < 100; i++) {

        while (n % 7 == 0) {
            
            n++;
        }
          
        vet[i] = n;

        n++;

        if(i < 99){

            printf("%d, ", vet[i]);
        } else {

            printf("%d.", i);
        }
    }
    
    return 0;
}