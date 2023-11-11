#include <stdio.h>
#include <stdlib.h>

int busca_sequencial_array_dinamico(int *dados, int valor, int quantidade);
int busca_sequencial_ordenada_array_dinamico(int *dados, int valor, int quantidade);
int busca_binaria_iterativa_array_dinamico(int *dados, int quantidade, int valor);
int busca_binaria_recursiva_array_dinamico(int *dados, int limite_esquerda, int limite_direita, int valor);

//com comoparadores
int busca_binaria_recursiva_compare(void **dados, int limite_esquerda, int limite_direita, void *valor, int (*compare)(const void*, const void*));    
