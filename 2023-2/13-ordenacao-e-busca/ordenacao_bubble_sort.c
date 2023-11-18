#include <stdio.h>

void ordenar_bubble_sort(int *dados, int quantidade){
    int i, continua, aux, fim = quantidade;
    do{
        continua = 0;
        for(i = 0; i < fim - 1; i++){
            if (dados[i] > dados[i+1]){
                aux = dados[i];
                dados[i] = dados[i+1];
                dados[i+1] = aux;
                continua = 1;
            }
        }
        fim--;
    }while(continua != 0);
}

int main() { 

  int vet[7] = {23, 4, 67, -8, 54, 80, 21}; 
       
    printf("\narray\n");
    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }
    
    ordenar_bubble_sort(vet, 7); 
    
    printf("\narray ordenado\n");

    for (int i = 0; i < 7; i++) { 
      printf("%d = %d \n", i, vet[i]);
    }
}