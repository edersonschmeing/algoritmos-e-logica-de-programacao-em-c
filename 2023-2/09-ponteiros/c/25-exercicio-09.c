/*9) Crie uma função que receba como parâmetro um vetor e o
 imprima o endereco das posições. 
Não utilize índices para
 percorrer o vetor, apenas aritmética de ponteiros. */

#include <stdio.h>

void imprime_valor_operacoes_ponteiros(int vet[], int tamanho) {
   
    int i;
    //int *p = vet;
    for (i = 0; i < tamanho; i++)
       //printf("\n%p", (p + i));
       printf("\n%p", &vet[i]);
    printf("\n");
}

int main() {
    
    int vet[5] = {30, 21, 19, 16, 53}; 
    imprime_valor_operacoes_ponteiros(vet, 5);
    
    return 0;
}