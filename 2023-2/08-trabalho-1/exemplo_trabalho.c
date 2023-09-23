#include <stdio.h>
#include <string.h>
#include <stdbool.h>
           
struct disciplina {
      int nota;
      char descricao[20];  
};  

struct endereco {
      char rua[30];
      int numero;  
};  

typedef struct endereco Endereco; 
   
typedef struct aluno {
      int idade;
      int ra;
      /* char nome[30];
      struct endereco endereco1;
      Endereco endereco2;
      struct disciplina disc[4]; */
} Aluno;  

#define tamanho_maxino 5

typedef struct tads {
   Aluno alunos[tamanho_maxino];  
   //Aluno alunos[5];
   int tamanho;
} TADS;  


void imprimir(TADS *tads) {
   
   printf("\nRelatorio dos alunos de TADS - %d \n", tads->tamanho);

   int i;
   //for (i = 0; i < (*tads).tamanho; i++) {    
   for (i = 0; i < tads->tamanho; i++) {    
      printf("\nAluno[%d]\n", i);  
      printf("ra: %d \n", tads->alunos[i].ra);
      printf("idade: %d \n", tads->alunos[i].idade);
   }

}


int buscar(TADS *tads, int ra) {
   
   int i;
   for (i = 0; i < tads->tamanho; i++) {      
      if (tads->alunos[i].ra == ra)
         return i;
   }
   return -1;      
} 

bool buscar_por_ra(TADS *tads, int ra, Aluno *aluno) {
   
   int i = buscar(tads, ra);
   if (i > -1) {
      *aluno = tads->alunos[i];
      return true;
   }
   return false;
}

bool verificar_tamanho(TADS *tads) {  

   return (tads->tamanho == tamanho_maxino);
}

bool verificar_existe(TADS *tads, int ra) {

   return (buscar(tads, ra) > -1);  
} 
 
bool adicionar(TADS *tads, Aluno aluno) {

   if (verificar_tamanho(tads)) 
      return false;
   
   if (verificar_existe(tads, aluno.ra)) 
      return false; 

   tads->alunos[tads->tamanho++] = aluno;
   //tads->alunos[tads->tamanho] = aluno;
   //tads->tamanho++; 

   return true;
}

bool excluir(TADS *tads, int ra) {
   
   int i =  buscar(tads, ra);
   if (i > -1) {
      tads->alunos[i] = tads->alunos[tads->tamanho-1];
      tads->alunos[tads->tamanho].ra = -1;
      tads->tamanho--;
      return true;
   } else 
      return false; 

}

void ordenar_insertion_sort(TADS *tads){

    printf("\nOrdenando alunos de TADS - %d \n", tads->tamanho);
    Aluno *v = tads->alunos, aluno;
    int n = tads->tamanho;
    int i, j;
    for(i = 1; i < n ; i++){
        aluno = v[i];
        for(j=i; (j>0) && (aluno.ra < v[j-1].ra); j--)
            v[j] = v[j - 1];
        v[j] = aluno;
    }
}


void iniciar_menu( TADS *tads) {

/* para colocar cor no console. 
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
  
   int operacao = 1;
  
   while (operacao < 5 && operacao > 0) {
      
      printf("%s---------------------------------------%s\n", cor_azul, cor_azul);
      printf("        MENU DE OPERAÇÕES              \n");
      printf("---------------------------------------\n");
      printf("%s1 - Operação 1 %s \n", cor_verde, cor_verde);
      printf("%s2 - Operação 2 %s \n", cor_verde, cor_verde);
      printf("%s3 - Operação 3 %s \n", cor_verde, cor_verde);
      printf("%s4 - Relatório  %s \n", cor_verde, cor_verde);
      printf("%s5 - Sair %s \n ", cor_vermelha, cor_vermelha);
      printf("---------------------------------------\n");
      printf("%sEscolha uma operação:%s%s   ", cor_azul, cor_azul, reset_cor);
     
      int numero_parametros = (scanf("%d", &operacao)); // retornam o número de conversões realizada com sucesso. 
      if (numero_parametros != 1) {
         printf("Problemas na entrada de dados");
      }   
            
      switch (operacao)       {
      case 1:
         printf("Você escolheu a operação %d\n", operacao);
         //chamar função
         break;
      case 2:
         printf("Você escolheu a operação %d\n", operacao);
         break;
      case 3:
         printf("Você escolheu a operação %d\n", operacao);
         break;
      case 4:
         printf("Você escolheu a operação %d\n", operacao);
         imprimir(tads);
         break;
      case 5:
         printf("Você escolheu sair do menu. Operação %d\n", operacao);
         break;   
      default:
         printf("Você escolheu opção default. Operação %d\n", operacao);
         break;
      }         
   }
}

void testar(TADS *tads) {
   
   Aluno a1, a2, a3, a4;

   imprimir(tads);

   a1.ra = 99;
   a1.idade = 33;
   adicionar(tads, a1);
   
   a2.ra = 88;
   a2.idade = 25;
   adicionar(tads, a2);
   
   a3.ra = 19;
   a3.idade = 29;
   adicionar(tads, a3);
   
   a4.ra = 100;
   a4.idade = 18;
   adicionar(tads, a4);

   imprimir(tads);
 
   excluir(tads, a2.ra);
   imprimir(tads);

   ordenar_insertion_sort(tads);

   imprimir(tads);

}

int main() {
   
   TADS tads;
   tads.tamanho = 0;

   testar(&tads); 

   iniciar_menu(&tads);
 
   return 0;
}