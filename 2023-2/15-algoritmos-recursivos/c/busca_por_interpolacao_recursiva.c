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

int busca_por_interpolacao_recursiva(int *dados, int limite_esquerda, int limite_direita, int valor) {
     
    int index_meio = limite_esquerda + ((valor - dados[limite_esquerda]) * (limite_direita - limite_esquerda) / (dados[limite_direita] - dados[limite_esquerda]));
     
    if (limite_esquerda > limite_direita) //caso base 1
       return -1;
    
    if (dados[index_meio] == valor) //caso base 2
       return index_meio; 

    else if (dados[index_meio] < valor)   
       return busca_por_interpolacao_recursiva(dados, index_meio + 1, limite_direita, valor);

    else 
       return busca_por_interpolacao_recursiva(dados, limite_esquerda, index_meio - 1, valor);

    return -1;

}

int main() { 

    int vet[7] = {23, 4, 67, -8, 54, 80, 21}; 
       
    printf("\narray\n");
    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }
    
    ordenar_insertion_sort(vet, 7); 
    
    printf("\narray ordenado\n");

    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }
    
    int index_valor_buscado = busca_por_interpolacao_recursiva(vet, 0, 6, 54);
   
    printf("\nindex valor buscado: %d \n\n", index_valor_buscado);

}