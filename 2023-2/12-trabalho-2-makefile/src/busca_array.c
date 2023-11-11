#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  
#include <string.h>  

#include <busca_array.h>  


int busca_binaria_iterativa_array_dinamico(int *dados, int quantidade, int valor) {
    
    int inicio = 0, fim = quantidade - 1, index_meio;

    while (inicio <= fim) { // enquanto o array tiver pelo menos 1 elemento.

        index_meio = (inicio + fim) / 2;
        if (dados[index_meio] == valor) 
           return index_meio;
        
        else if (dados[index_meio] > valor)
            fim = index_meio - 1;
        
        else 
            inicio = index_meio + 1;
    } 
    return -1;
}    

int busca_binaria_recursiva_array_dinamico(int *dados, int limite_esquerda, int limite_direita, int valor) {    
    
    int index_meio = (limite_esquerda + limite_direita) / 2;

    printf("%d\n", index_meio);

    if (limite_esquerda > limite_direita) //caso base 1
       return -1;
    
    if (dados[index_meio] == valor) //caso base 2
       return index_meio; 

    else if (dados[index_meio] < valor)   
       return busca_binaria_recursiva_array_dinamico(dados, index_meio + 1, limite_direita, valor);

    else 
       return busca_binaria_recursiva_array_dinamico(dados, limite_esquerda, index_meio - 1, valor);

    return -1;
}

int busca_sequencial_array_dinamico(int *dados, int valor, int quantidade) {    
    
    for (int i = 0; i < quantidade; i++) {
        if (dados[i] == valor) 
            return i; //retorna o index do elemento.
    }    
    return -1; //caso não encontre o elemente, retorna -1 com index.
}

int busca_sequencial_ordenada_array_dinamico(int *dados, int valor, int quantidade) {    
    
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


int busca_binaria_recursiva_compare(void **dados, int limite_esquerda, int limite_direita, void *valor, int (*compare)(const void*, const void*)) {    
    
    int index_meio = (limite_esquerda + limite_direita) / 2;

    if (limite_esquerda > limite_direita) //caso base 1
       return -1;
    
    if (compare(dados[index_meio], valor) == 0 ) //caso base 2
       return index_meio; 
    else if (compare(dados[index_meio], valor) < 0)   
       return busca_binaria_recursiva_compare(dados, index_meio + 1, limite_direita, valor, compare);

    else 
       return busca_binaria_recursiva_compare(dados, limite_esquerda, index_meio - 1, valor, compare);

    return -1;
}