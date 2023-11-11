#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

typedef struct aluno Aluno;

typedef struct array_dinamico Array_Dinamico;

Array_Dinamico *criar_array_dinamico(int tamanho_array, bool ordenado);
void destruir_array_dinamico(Array_Dinamico **array_dinamico_endereco_de_memoria);
void imprimir_array_dinamico(const Array_Dinamico *array_dinamico);
void ordenar_ra_array_dinamico(const Array_Dinamico *array_dinamico); 
void ordenar_nome_array_dinamico(const Array_Dinamico *array_dinamico);
void adicionar_array_dinamico(Array_Dinamico *array_dinamico, Aluno *aluno);    
int busca_array_dinamico(Array_Dinamico *array_dinamico, int valor);
void remover_array_dinamico(Array_Dinamico *array_dinamico, int index);
int acessar_array_dinamico(const Array_Dinamico *array_dinamico, int index);
int acessar_verificado_array_dinamico(const Array_Dinamico *array_dinamico, int index);
int tamanho_array_dinamico(const Array_Dinamico *array_dinamico);
int quantidade_array_dinamico(const Array_Dinamico *array_dinamico);
void carregar_arquivo_array_dinamico(Array_Dinamico *array_dinamico, char *caminho_arquivo); 
void gravar_arquivo_array_dinamico(Array_Dinamico *array_dinamico, char *caminho_arquivo); 


Aluno *criar_aluno(int ra, char *nome);
Aluno *buscar_aluno(Array_Dinamico *array_dinamico, int index);
void imprime_aluno(Aluno *aluno);

char *get_nome_aluno(Aluno *aluno);
int get_ra_aluno(Aluno *aluno);

