#include <stdio.h>
#include <stdlib.h>

void printf_array(int *dados  , int quantidade){
    int i;
    for(i = 0; i < quantidade; i++)
        printf("%2d ", dados[i]);
    printf("\n");
}

void printf_linha(){
    printf("----------------------------------------------\n");
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

int main() {
    
    int array[7] = {23, 4, 67, -8, 90, 54, 21};
    int quantidade = 7;

    printf("Sem ordenar:\n");
    printf_array(array, quantidade);
    printf_linha();

    ordenar_quick_sort(array, 0, quantidade - 1);
    printf("Ordenado:\n");
    printf_array(array, quantidade);

    return 0;
}
