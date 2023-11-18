#include <stdio.h>

void ordenar_insertion_sort(int *dados, int quantidade){

    int i, j, aux;
    for(i = 1; i < quantidade; i++){
        aux = dados[i];
        for(j = i; (j > 0) && (aux < dados[j - 1]); j--)
            dados[j] = dados[j - 1];
        dados[j] = aux;
    }
}

int busca_sequencial_ordenada(int *dados, int quantidade, int valor) {    
    
    for (int i = 0; i < quantidade; i++) {
        if (dados[i] == valor){ 
            return i; //retorna o index do elemento.
        }else { 
            if (dados[i] > valor)
               return -1; //para a busca
        } 
    }    
    return -1; //caso não encontre o elemente, retorna -1 com index.
}

int main() { 
    
    int vet[7] = {23, 4, 67, -8, 54, 80, 21}; 
    
    printf("\narray");
    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }
    
    ordenar_insertion_sort(vet, 7);
    
    printf("\narray ordenado\n");

    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }

    int index_valor_buscado = busca_sequencial_ordenada(vet, 7, 54);
   
    printf("\nindex valor buscado: %d \n\n", index_valor_buscado);
    
}