#include<stdio.h>

struct pessoa
{ 
  char nome[30];
  int idade;

};

typedef struct pessoa Pessoa;   

int main() { 
  
  FILE *arquivo;
  
  arquivo = fopen("teste.bin","rb");

  if (!arquivo) { 
        printf("Erro ao abrir o arquivo!");     
        return 1;
  }

  Pessoa pessoas[10];

  int i = 0;
  while (1) { 
     if (feof(arquivo))
        break;   
     fread(&pessoas[i], sizeof(Pessoa), 1 , arquivo);
     i++;
  }  
  fclose(arquivo);

  for (i = 0; i < 10; i++) { 
     printf("Nome pessoa: %s idade: %d \n", pessoas[i].nome, pessoas[i].idade);
  }  

  return 0;
}