#include <stdio.h>

int busca_sequencial_vetor_dinamico(int *dados, int quantidade, int valor) {    
    
    for (int i = 0; i < quantidade; i++) {
        if (dados[i] == valor) 
            return i; //retorna o index do elemento.
    }    
    return -1; //caso não encontre o elemente, retorna -1 com index.
}

int main() { 
    

}