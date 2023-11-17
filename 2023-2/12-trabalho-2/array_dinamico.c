#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  
#include <string.h>  

struct disciplina {
    float media;      
    char nome[50];      
};
typedef struct disciplina Disciplina;


struct aluno {
    int ra;      
    char nome[50];
    Disciplina disciplinas[5];      
};
typedef struct aluno Aluno;

struct array_dinamico {
    bool ordenado;  // true indica que quer manter o array ordenado. 
    int tamanho;    // número máximo de elementos que podemos armazenados no array.
    int quantidade; // quantidade atual de elementos armazenados
    Aluno **dados;     // array de alunos que representa nossos dados. 
};
typedef struct array_dinamico Array_Dinamico;

Array_Dinamico* criar_array_dinamico(int tamanho_array, bool ordenado) {

    Array_Dinamico *array_dinamico = (Array_Dinamico*) malloc(sizeof(Array_Dinamico));
    array_dinamico->ordenado = ordenado;
    array_dinamico->quantidade = 0;
    array_dinamico->tamanho = tamanho_array;
    array_dinamico->dados = (Aluno**) calloc(tamanho_array, sizeof(Aluno*));
    
    return array_dinamico; 

}

void destruir_array_dinamico(Array_Dinamico **array_dinamico_endereco_de_memoria) {

    Array_Dinamico *array_dinamico = *array_dinamico_endereco_de_memoria;
    for (int i = 0; i < array_dinamico->quantidade; i++) {
        free(array_dinamico->dados[0]);
        array_dinamico->dados[0] = NULL;
    }
    free(array_dinamico->dados);
    free(array_dinamico);
    *array_dinamico_endereco_de_memoria = NULL;

}

bool esta_cheio_array_dinamico(Array_Dinamico* array_dinamico) {
   
    //implemente
    return 0;
}

//se array estiver cheio, aumentamos 2 vezes o seu tamanho.
void aumentar_array_dinamico(Array_Dinamico *array_dinamico) {
    
    //printf("Aumentando 2 vezes o tamanho atual do array( 2 * %d )\n", array_dinamico->tamanho);

    Aluno **temp = array_dinamico->dados; 
    //array_dinamico->tamanho *= 2;
    array_dinamico->tamanho = array_dinamico->tamanho * 2;

    array_dinamico->dados = (Aluno**)calloc(array_dinamico->tamanho, sizeof(Aluno*)); 

    for (int i = 0; i < array_dinamico->tamanho; i++ ) { 
       array_dinamico->dados[i] = temp[i];
    }
    free(temp);

}

//diminuir o tamanho do array pela metade quando tiver 1/4 ou 25% cheio   
void diminuir_array_dinamico(Array_Dinamico *array_dinamico) {

    if ((array_dinamico->quantidade < array_dinamico->tamanho / 4) && 
        (array_dinamico->tamanho >= 4)) { 
       
        //printf("Diminuindo o tamanho atual do array pela metade ( %d / 2 )\n", array_dinamico->tamanho); 
 
        Aluno **temp = array_dinamico->dados; 
        array_dinamico->tamanho /= 2;
        //array_dinamico->tamanho = array_dinamico->tamanho / 2;

        array_dinamico->dados = (Aluno**)calloc(array_dinamico->tamanho, sizeof(Aluno*)); 

        for (int j = 0; j < array_dinamico->quantidade; j++ ) { 
            array_dinamico->dados[j] = temp[j];
        }
        free(temp);
    }
}

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

int busca_sequencial_array_dinamico(Array_Dinamico *array_dinamico, int valor) {    
    
    for (int i = 0; i < array_dinamico->quantidade; i++) {
        if (array_dinamico->dados[i]->ra == valor) 
            return i; //retorna o index do elemento.
    }    
    return -1; //caso não encontre o elemente, retorna -1 com index.
}

int busca_sequencial_ordenada_array_dinamico(Array_Dinamico *array_dinamico, int valor) {    
    
    for (int i = 0; i < array_dinamico->quantidade; i++) {
        if (array_dinamico->dados[i]->ra == valor){ 
            return i; //retorna o index do elemento.
        }else { 
            if (array_dinamico->dados[i]->ra > valor)
                return -1; //para a busca
        } 
    }    
    return -1; //caso não encontre o elemente, retorna -1 com index.
}

void imprimir_array_dinamico(const Array_Dinamico *array_dinamico) {
      
   for (int i = 0; i < array_dinamico->quantidade; i++) {
      printf("%d %s\n", array_dinamico->dados[i]->ra, array_dinamico->dados[i]->nome); 
   } 
   //Implemente

}

void ordenar_array_dinamico(const Array_Dinamico *array_dinamico) {
   
   //chamar um dos métodos de ordenação que trabalhamos
   //Implemente

}
  
  
void adicionar_array_dinamico(Array_Dinamico *array_dinamico, Aluno *aluno) {    
   
    //aumentar 

   array_dinamico->dados[array_dinamico->quantidade] = aluno;
   array_dinamico->quantidade = array_dinamico->quantidade + 1;

   //continue a implementação

}


int busca_array_dinamico(Array_Dinamico *array_dinamico, int valor) { 
    
    //implemente

    return 0;
}

Aluno *buscar_aluno_index_array_dinamico(const Array_Dinamico *array_dinamico, int index) { 
    
    //validar index
    return array_dinamico->dados[index];

}

void remover_array_dinamico(Array_Dinamico *array_dinamico, int index) { 
       
   array_dinamico->dados[index] = array_dinamico->dados[array_dinamico->quantidade-1];
   array_dinamico->dados[array_dinamico->quantidade-1] = NULL;
   array_dinamico->quantidade--;
  
   //diminuir_array_dinamico

   //implemente
   
}

int acessar_array_dinamico(const Array_Dinamico *array_dinamico, int index) {

    // implemente
    return 0;

} 

int acessar_verificado_array_dinamico(const Array_Dinamico *array_dinamico, int index) { // verifica se tem elemento

    // implemente
    
    return 0;

}

int tamanho_array_dinamico(const Array_Dinamico *array_dinamico) {
    
    return array_dinamico->tamanho;

}

int quantidade_array_dinamico(const Array_Dinamico *array_dinamico) {
 
    return array_dinamico->quantidade;
}

void carregar_arquivo_array_dinamico(Array_Dinamico *array_dinamico, char *caminho_arquivo) { 

   //ler o arquivo

}

void gravar_arquivo_array_dinamico(Array_Dinamico *array_dinamico, char *caminho_arquivo) { 

   //se arquivo já existir remove tudo e cria novamente
   //gravar no arquivo no disco

}


//funções chamadas pelo menu, elas são relacionadas a interface 
//a ideia é não misturar as regras do array_dinamico com 
//a aplicação que utiliza a biblieta.

void adicinar_alunos_teste(Array_Dinamico *array_dinamico) { 

   //chamar a função que carrega o arquivo.

   printf("Adicionar\n"); 

   Aluno *aluno01 = (Aluno*) malloc(1 * sizeof(Aluno));
   aluno01->ra = 88;
   strcpy(aluno01->nome, "Ederson Schmeing"); 
    
   adicionar_array_dinamico(array_dinamico, aluno01);   
   
   Aluno *aluno02 = (Aluno*) malloc(1 * sizeof(Aluno));
   aluno02->ra = 99;
   strcpy(aluno02->nome, "Isabela Schmeing"); 

   adicionar_array_dinamico(array_dinamico, aluno02);   
 
   Aluno *aluno03 = (Aluno*) malloc(1 * sizeof(Aluno));
   aluno03->ra = 55;
   strcpy(aluno03->nome, "Anderson Schmeing"); 
   adicionar_array_dinamico(array_dinamico, aluno03);   

   Aluno *aluno_do_array01 = array_dinamico->dados[0]; 
   Aluno *aluno_do_array02 = array_dinamico->dados[1]; 

   printf("%d %s\n", aluno_do_array01->ra, aluno_do_array01->nome); 
   printf("%d %s\n", aluno_do_array02->ra, aluno_do_array02->nome); 

   // printf("\nRemover\n"); 
 
   //remover_array_dinamico(array_dinamico, 0);
   //aluno_do_array01 = array_dinamico->dados[0];
   //Aluno *aluno_do_array02_removido = array_dinamico->dados[1]; 

   //printf("%d %s\n", aluno_do_array01->ra, aluno_do_array01->nome); 
   //printf("%d %s\n", aluno_do_array02_removido->ra, aluno_do_array02_removido->nome); 

   //destruir_array_dinamico(&array_dinamico);

}

void imprimir_menu(Array_Dinamico *array_dinamico) { 

   imprimir_array_dinamico(array_dinamico);

}

void mostrar_estrutura_menu(Array_Dinamico *array_dinamico) { 

   int tamanho = tamanho_array_dinamico(array_dinamico);
   int quantidade = quantidade_array_dinamico(array_dinamico);
   printf("Estrutura \n");
   printf("Tamanho: %d \n", tamanho);
   printf("Quantidade: %d \n", quantidade);

}

void buscar_menu(Array_Dinamico *array_dinamico) { 

     int numero_ra;
     printf("Informe o RA para buscar: ");
     int numero_parametros = (scanf("%d", &numero_ra)); // retornam o número de conversões realizada com sucesso. 

     if (numero_parametros != 1) {
         printf("Problemas na entrada de dados \n");
         printf("Informe um RA válido \n");    
     } else { 

       int index = busca_array_dinamico(array_dinamico, numero_ra);
       if (index < 0)   
         printf("Número de RA não econtrado \n");
       else { 
          Aluno *aluno = buscar_aluno_index_array_dinamico(array_dinamico, index);
          printf("%d %s\n", aluno->ra, aluno->nome); 
       } 
     }   
}

void remover_menu(Array_Dinamico *array_dinamico) {
     
     int numero_ra;
     printf("Informe o RA para remover: ");
     int numero_parametros = (scanf("%d", &numero_ra)); // retornam o número de conversões realizada com sucesso. 
     
     int index = busca_array_dinamico(array_dinamico, numero_ra);
     index = 0; //teste manual 
     if (index < 0)   
         printf("Número de RA não econtrado \n");
     else { 
         remover_array_dinamico(array_dinamico, index);
     } 
}

void teste_menu() {

/* para colocar cor no console 
   #include <conio.h> usar no windows 
    
    \e[1;31m
    \033[1;31m
    \033[1;0m 

    Black: 30
    Red: 31
    Green: 32
    Yellow: 33
    Blue: 34
    Magenta: 35
    Cyan: 36
    White: 37
    Reset: 0
*/

   char cor_vermelha[10]= "\033[1;31m";
   char cor_azul[10] = "\033[1;34m";
   char cor_verde[10] = "\033[1;32m";
   char reset_cor[10] = "\033[1;0m";

   printf("\n--- CONSTRUIR UM MENU COM AS OPERAÇÕES ---\n\n");
  
   int tamanho = 4; //vamos começar com um tamanho fixo e depois vamos dobrando o seu tamanho.  

   bool ordenado = false; 
  
   Array_Dinamico *array_dinamico = criar_array_dinamico(tamanho, ordenado);
   
   adicinar_alunos_teste(array_dinamico);

   int operacao = 1;
  
   while (operacao < 7 && operacao > 0) {
      
      printf("%s---------------------------------------%s\n", cor_azul, cor_azul);
      printf("-   GERENCIAR ALUNOS - OPERAÇÕES      -\n");
      printf("---------------------------------------\n");
      printf("%s1 - Adiciona%s                          -\n", cor_verde, cor_verde);
      printf("%s2 - Remove%s                            -\n", cor_verde, cor_verde);
      printf("%s3 - Busca%s                             -\n", cor_verde, cor_verde);
      printf("%s4 - Lista%s                             -\n", cor_verde, cor_verde);
      printf("%s5 - Relatório%s                         -\n", cor_verde, cor_verde);
      printf("%s6 - Estrutura%s                         - \n", cor_verde, cor_verde);     
      printf("%s7 - Sair %s                             -\n", cor_vermelha, cor_vermelha);
      printf("---------------------------------------\n");
      printf("%sEscolha uma operação: %s%s", cor_azul, cor_azul, reset_cor);

      int numero_parametros = (scanf("%d", &operacao)); // retornam o número de conversões realizada com sucesso. 

      if (numero_parametros != 1) {
         printf("Problemas na entrada de dados \n");
         printf("Informe uma OPERAÇÃO válida \n");    
         getchar(); //limpa a entrada da nova linha  
         continue;
      }   
      
      switch (operacao)       {
      case 1:
         printf("Você escolheu a operação %d\n", operacao); 
         //chamar função para adicionar um novo aluno no estrutura
         break;
      case 2:
         printf("Você escolheu a operação %d\n", operacao);
         //chamar função para remover um aluno da estrutura
         remover_menu(array_dinamico);
         break;
      case 3:
         printf("Você escolheu a operação %d\n", operacao);
         //chamar função de buscar
         buscar_menu(array_dinamico);
         break;
      case 4:
         printf("Você escolheu a operação %d\n", operacao);
         //chamar função imprimir alunos
         imprimir_menu(array_dinamico);
         break;
      case 5:
         printf("Você escolheu a operação %d\n", operacao);
         //chamar função
         break;   
      case 6:
         printf("Você escolheu a operação %d\n", operacao);
         mostrar_estrutura_menu(array_dinamico);
         break;   
      case 7:
         printf("Você escolheu sair do menu. Operação %d\n", operacao);
         //chamar função
         break;   
      default:
         printf("Você escolheu opção default. Operação %d\n", operacao);
         break; 
      }         
   }
   destruir_array_dinamico(&array_dinamico);
}

int main(int argc, char *argv[]) {

     teste_menu();
 
}
