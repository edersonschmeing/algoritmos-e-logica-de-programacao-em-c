#include <stdio.h>
#include <stdlib.h>  // contém as funções o NULL, calloc, malloc, free


int main() {

    /*
    Alocação estática de memória.    
    Toda varável e alocada na memória STACK(pilha). 
    O espaço para as variáveis em definico tempo de compilação é alocado no início da execução e cada variável recebe um endereço de memória que 
    se mantém até o final da execução quando o sistema operacional desaloca automaticamente. 
  
    Alocação dinâmica de memória
    E feita na memória HEAP(monte). 
    Alocação dinâmica de memória é o processo que aloca memória em tempo de execução.
    É utilizada quando não se sabe previamente o quanto de memória será necessário para armazenar os dados. 
    Conseguimos determinar o tamanho de memória a ser usado conforme a necessidade, evitando uso desnecessário de memória.           
   */ 
    
    //alocação estática na (memória Stack). 
    printf(" --- ALOCAÇÃO ESTÁTICA (STACK) --- \n");
    int a; 
    printf("&a = %p, a = %d \n\n", &a, a);


    //alocação dinâmica na (memória Heap) com funçõa malloc
    printf(" --- ALOCAÇÃO DINÂMICA (HEAP) USANDO FUNÇÃO (malloc) --- \n");
    int *b = malloc(100 * sizeof(int)); // malloc não incializa o espaço alocado. Todos os elementos possuem lixo de memória.
    *b = 20; 
    printf("&b = %p | b = %p | *b = %d \n", &b, b, *b);
    free(b); //desaloca/libera endereço da memória Heap. A função free() informa o sistema operacional que nosso programa não vai mais usar aquele endereço. 
    printf("&b = %p | b = %p | *b = %d \n", &b, b, *b);  
    b = NULL; // boa prática de programação
    printf("&b = %p | b = %p \n\n", &b, b); // Se tentar acessar o conteúdo ( *b ) retorna erro, por que o ponteiro b não guarda mais nenhum endereço. 


     //alocação dinâmica na (memória Heap) com função calloc
    printf(" --- ALOCAÇÃO DINÂMICA (HEAP) USANDO FUNÇÃO (calloc) --- \n" );
    int *c = calloc(1, sizeof(int)); // calloc incializa o espaço alocado.
    *c = 50; 
    printf("&c = %p | c = %p | *c = %d \n", &c, c, *c);
    free(c); //desaloca/libera endereço da memória Heap 
    c = NULL; // boa prática de programação
 
    

    return 0;
}
