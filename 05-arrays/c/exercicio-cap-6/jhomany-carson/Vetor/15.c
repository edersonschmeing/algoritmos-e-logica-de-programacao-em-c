/*15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e
imprima o vetor na tela.*/

#include <stdio.h>

int main() {

    int var, n = 4, vet[n];

    for (int i = 0; i < n; i++) {

        printf("\nDigite o valor da posicao %d: ", i+1);
        scanf(" %d", &vet[i]);
    }

//validar a posição e inverter o valor exempo [20, 10] vejo se o valor na posição atual for maior que o da posterior faço a inverção
//O maior valor vai ficar no ultimo indice, e vou percorrendo o vetor jogando os maior valores para o final.
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = 0; j < n - 1 - i; j++) {
            
            if (vet[j] > vet[j+1]) {
                
                var = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = var;
            }
        }
    }
    
    printf("\nO vator ordenado eh: ");

    for (int i = 0; i < n; i++) {

        if(i < n-1) {
            
            printf("%d, ", vet[i]);
        } else {

            printf("%d.", vet[i]);
        }
    }

    printf("\n ");
    return 0;    
}