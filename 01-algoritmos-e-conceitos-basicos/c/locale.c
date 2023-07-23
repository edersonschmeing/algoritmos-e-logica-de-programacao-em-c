#include <locale.h>
#include <stdio.h>

int main (void) {
   
   //setlocale (LC_ALL, ""); // importa as variáveis de ambiente, SO
   //setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas, set manual
   setlocale(LC_ALL, "Portuguese_Brasil");
   
   char buffer[50];
   scanf ("%[^\n]s", buffer); 
   printf ("%s\n", buffer);
   return 0;
}

//executar o camando abaixo na prompt do windows, caso não funcione
//chcp 65001