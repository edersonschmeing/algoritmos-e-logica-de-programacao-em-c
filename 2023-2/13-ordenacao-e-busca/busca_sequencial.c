#include <stdio.h>

int busca_sequencial(int *dados, int quantidade, int valor) {    
    
    for (int i = 0; i < quantidade; i++) {
        if (dados[i] == valor) 
            return i; //retorna o index do elemento.
    }    
    return -1; //caso não encontre o elemente, retorna -1 com index.
}

int main() { 

 int vet[7] = {23, 4, 67, -8, 54, 80, 21}; 
   
    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }

    int index_valor_buscado = busca_sequencial(vet, 7, 54);
   
    printf("\nindex valor buscado: %d \n\n", index_valor_buscado);
    
}