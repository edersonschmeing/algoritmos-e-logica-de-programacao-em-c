#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void ordenar_insertion_sort(int *dados, int quantidade){

    int i, j, aux;
    for(i = 1; i < quantidade; i++){
        aux = dados[i];
        for(j = i; (j > 0) && (aux < dados[j - 1]); j--)
            dados[j] = dados[j - 1];
        dados[j] = aux;
    }
}

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


int particiona(int *dados, int inicio, int final ){
    int esquerda, direita, pivo, aux;
    esquerda = inicio;
    direita = final;
    pivo = dados[inicio];
    while(esquerda < direita){
        while(esquerda <= final && dados[esquerda] <= pivo)
            esquerda++;

        while(direita >= 0 && dados[direita] > pivo)
            direita--;

        if(esquerda < direita){
            aux = dados[esquerda];
           dados[esquerda] = dados[direita];
           dados[direita] = aux;
        }
    }
    dados[inicio] = dados[direita];
    dados[direita] = pivo;
    printf("---------------\n");
    return direita;
}

void ordenar_quick_sort(int *dados, int inicio, int fim) {
    int pivo;
    if(fim > inicio){
        pivo = particiona(dados, inicio, fim);
        ordenar_quick_sort(dados, inicio, pivo - 1);
        ordenar_quick_sort(dados, pivo + 1, fim);
    }
}