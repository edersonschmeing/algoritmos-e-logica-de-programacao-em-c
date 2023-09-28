#include <stdio.h>

int main() {
      
  int idade;
  char confirmar;

  printf("Informe a sua idade: ");
  scanf("%d", &idade);
  
  getc(stdin); //remove o \n que o enter coloca

  printf("Você informou que tem  %d anos de idade. Confirma(S,N):", idade);
  scanf("%c", &confirmar);
  //scanf(" %c", &confirmar); da par fazer assim também

  if (confirmar == 's' || confirmar == 'S') 
     printf("Você confirmou que tem  %d anos de idade.\n", idade);
  else 
     printf("Você não confirmou a idade informada. \n");

  return 0;
}