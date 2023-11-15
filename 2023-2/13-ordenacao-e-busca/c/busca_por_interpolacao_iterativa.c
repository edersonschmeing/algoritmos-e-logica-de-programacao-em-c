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
 
int busca_por_interpolacao_iterativa(int *dados, int quantidade, int valor)
{
    int limite_esquerda = 0;
    int limite_direita = quantidade - 1;
    int index_meio;

     while (limite_esquerda <= limite_direita) { // enquanto o vetor tiver pelo menos 1 elemento.

        index_meio = limite_esquerda + ((valor - dados[limite_esquerda]) * (limite_direita - limite_esquerda) / (dados[limite_direita] - dados[limite_esquerda]));

        if (dados[index_meio] == valor) 
           return index_meio;
        
        else if (dados[index_meio] > valor)
            limite_direita = index_meio - 1;
        
        else 
            limite_esquerda = index_meio + 1;
    } 
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
    
    int index_valor_buscado = busca_por_interpolacao_iterativa(vet, 7, 54);
   
    printf("\nindex valor buscado: %d \n\n", index_valor_buscado);

}