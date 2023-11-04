#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *dados, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *) malloc(tamanho * sizeof(int));
    if(temp != NULL){
        for(i = 0; i < tamanho; i++){
            if(!fim1 && !fim2){
                if(dados[p1] < dados[p2])
                    temp[i] = dados[p1++];
                else
                    temp[i] = dados[p2++];

                if(p1 > meio) fim1 = 1;
                if(p2 > fim) fim2 = 1;
            }else{
                if(!fim1)
                    temp[i] = dados[p1++];
                else
                    temp[i] = dados[p2++];
            }
        }
        for(j = 0, k = inicio; j < tamanho; j++, k++)
            dados[k] = temp[j];
    }
    free(temp);
}

void ordenar_merge_sort(int *dados, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio + fim) / 2); //retorna a parte inteira de um decimal.
        ordenar_merge_sort(dados, inicio, meio);
        ordenar_merge_sort(dados, meio + 1, fim);
        merge(dados, inicio, meio, fim);
    }
}

int main() { 

  int array[7] = {23, 4, 67, -8, 54, 80, 21}; 
       
    printf("\narray\n");
    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, array[i]);
    }
    
    ordenar_merge_sort(array, 0, 6); 
    
    printf("\narray ordenado\n");

    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, array[i]);
    }
}