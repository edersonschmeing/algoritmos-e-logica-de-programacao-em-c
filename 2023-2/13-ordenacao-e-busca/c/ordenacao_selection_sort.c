#include <stdio.h>

void ordenar_selection_sort(int *dados, int quantidade){
    int i, j, menor, troca;
    for(i = 0; i < quantidade-1; i++){
        menor = i;
        for(j = i + 1; j < quantidade; j++){
            if(dados[j] < dados[menor])
                menor = j;
        }
        if(i != menor){
            troca = dados[i];
            dados[i] = dados[menor];
            dados[menor] = troca;
        }
    }
}

int main() { 

  int vet[7] = {23, 4, 67, -8, 54, 80, 21}; 
       
    printf("\narray\n");
    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }
    
    ordenar_selection_sort(vet, 7); 
    
    printf("\narray ordenado\n");

    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }
}