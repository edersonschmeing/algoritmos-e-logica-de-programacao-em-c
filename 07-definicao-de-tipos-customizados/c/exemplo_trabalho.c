#include <stdio.h>
#include <string.h>
#include <stdbool.h>

           
   struct disciplina {
        int notas[4];
        char descricao[4];  
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
        int notas[4];
        char disciplinas[4]; */
   } Aluno;  

   typedef struct tads {
      Aluno alunos[3];
      int tamanho;
   } TADS;  


void imprimir(TADS *tads) {
   
   printf("\nRelatorio dos alunos de TADS\n");

   int i;
   for (i = 0; i < tads->tamanho; i++) {    
      printf("\nAluno: %d\n", i);  
      printf("%d \n", tads->alunos[i].ra);
      printf("%d \n", tads->alunos[i].idade);
   }

}

 bool esta_cheio(TADS *tads) {  
      return tads->tamanho == 3;
 }

bool existe(TADS *tads, int ra) {
   int i;
   for (i = 0; i < tads->tamanho; i++) {      
      if (tads->alunos[i].ra == ra)
         return true;
   }
   return false;
} 
 
bool adicionar(TADS *tads, Aluno aluno) {

   if (esta_cheio(tads)) 
      return false;
   
   if (existe(tads, aluno.ra)) 
      return false; 

   tads->alunos[tads->tamanho++] = aluno;
   //tads->tamanho++; 

   return true;
}

bool excluir(TADS *tads) {
   
   tads->tamanho--;
   return true; 
}

void teste(TADS *tads) {
   
   Aluno a1, a2, a3, a4;

   a1.ra = 11;
   a1.idade = 33;
   adicionar(tads, a1);
   imprimir(tads);

   a2.ra = 16;
   a2.idade = 25;
   adicionar(tads, a2);
   imprimir(tads);

   a3.ra = 16;
   a3.idade = 29;
   adicionar(tads, a3);
   imprimir(tads);


   a4.ra = 19;
   a4.idade = 18;
   adicionar(tads, a4);
   imprimir(tads);

}


int main() {
   
   TADS tads;
   tads.tamanho = 0;

   teste(&tads); 
 
   return 0;
}