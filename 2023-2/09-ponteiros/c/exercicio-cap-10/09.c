/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize índices para percorrer o
vetor, apenas aritmética de ponteiros. */

#include <stdio.h>
#include <stdlib.h>

int main () {

    int vetor[10];
    int *p = vetor;
    
    for (int i = 0; i < 10; i++) {
      
        printf("Digite os valores inteiros da posicao %d do vetor: ", i);   
        scanf(" %d", p + i);

        if (*(p+9)) {
            
            for (int j = 0; j < 10; j++) {
                
                printf("\nValor da posicao %d: %d\n", j, *(p + j));
            }   
        }
    }

    return 0;
}