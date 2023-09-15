#include <stdio.h>
#include <string.h>


   struct endereco {
        char rua[30];
        int numero;  
   };  

   typedef struct endereco Endereco; 
      
   typedef struct aluno {
        char nome[30];
        int idade;
        int ra;
        struct endereco endereco1;
        Endereco endereco2;
        int notas[4];
        char disciplinas[4];
   } Aluno;  

   typedef struct cadastro {
      Aluno alunos[20];
      int tamanho;
   } Cadastro;  

void existe_aluno(Cadastro cadastro_alunos) {
   
}

void esta_cheio(Cadastro cadastro_alunos) {
   
}

void imprime_cadastro_alunos(Cadastro *cadastro_alunos) {
    printf("%s \n", cadastro_alunos->alunos[0].nome);
    printf("%d \n", cadastro_alunos->tamanho);
}

void adicionar_aluno(Cadastro *cadastro_alunos) {     
   strcpy(cadastro_alunos->alunos[0].nome, "ederson");
   cadastro_alunos->tamanho++; 
}

void excluir_aluno(Cadastro *cadastro_alunos) {
   cadastro_alunos->tamanho--; 
}

int main() {
   
   Cadastro cadastro_alunos;
   cadastro_alunos.tamanho = 0;
   adicionar_aluno(&cadastro_alunos);     
  // excluir_aluno(&cadastro_alunos);
   imprime_cadastro_alunos(&cadastro_alunos);

   return 0;
}