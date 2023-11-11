#include <stdio.h>
#include <stdlib.h>

void ordenar_bubble_sort(int *dados, int quantidade);
void ordenar_insertion_sort(int *dados, int quantidade);
void ordenar_selection_sort(int *dados, int quantidade);
void ordenar_merge_sort(int *dados, int inicio, int fim);
void ordenar_quick_sort(int *dados, int inicio, int fim);

//com comoparadores
void quick_sort_compare(void **array, int inicio, int fim, int (*compare)(const void*, const void*));

