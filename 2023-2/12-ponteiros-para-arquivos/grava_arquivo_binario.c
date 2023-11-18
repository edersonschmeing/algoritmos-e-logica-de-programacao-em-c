#include <stdio.h>
#include <string.h>

struct pessoa
{ 
  char nome[30];
  int numero;

};

typedef struct pessoa Pessoa;   

int main() { 
  FILE *arquivo;
  Pessoa pessoa01;
  
  arquivo = fopen("teste.bin","wb");
  if (!arquivo) { 
     printf("Erro ao abrir o arquivo!");     
     return 1;
  }
  int i;
  Pessoa pessoas[10];

  for ( i=1; i <= 10; i++) { 
     char index[2]; 
     sprintf(index, "%d", i);    
     strcpy(pessoa01.nome,  index);
     pessoa01.numero = i;
     fwrite(&pessoa01, sizeof(pessoa01), 1, arquivo);
  }
  fclose(arquivo);

  return 0;
}