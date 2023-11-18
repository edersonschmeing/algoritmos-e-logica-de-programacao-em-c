#include <stdio.h>

// Busca sentinela, realiza uma busca sequencial sem precisar testar a chave a cada passo do laço de busca
int busca_sequencial_sentinela(int *dados, int quantidade, int valor) {    

    dados[quantidade] = valor; // Coloca o valor buscado (chave) na última posição do vetor
    int auxiliar = 0;          // Variável de controle do laço  

    while( dados[auxiliar] != valor ) // Enquanto não encontrar o valor (chave) incrementa 1 em aux
		auxiliar++;

    if( auxiliar == quantidade )
        return -1; // Não encontrou
    else  // Caso aux seja diferente, significa que encontrou o valor e quebrou o laço, o aux é a posição do valor buscado
        return auxiliar; // Encontrou
}

#define TAMANHO_VETOR 7

int main() { 
    // Declara o vetor com +1 pois é a posição que será utilizada pela sentinela
    int vet[TAMANHO_VETOR + 1] = {23, 4, 67, -8, 54, 80, 21}; 
   
    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }

    int index_valor_buscado = busca_sequencial_sentinela(vet, 7, 54);
   
    printf("\nindex valor buscado: %d \n\n", index_valor_buscado);
    
}