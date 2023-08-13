#include <stdio.h>


int main() {

   printf("--- CONSTRUIR UM MENU COM AS OPERAÇÕES ---\n\n");
  
   int operacao = 1;
  
   while (operacao < 10 && operacao > 0) {
      
      printf("---------------------------------------\n");
      printf("        MENU DE OPERAÇÕES              \n");
      printf("---------------------------------------\n");
      printf("1 - Operação 1 \n");
      printf("2 - Operação 2 \n");
      printf("3 - Operação 3 \n");
      printf("4 - Operação 4 \n");
      printf("5 - Operação 5 \n");
      printf("6 - Operação 6 \n");
      printf("7 - Operação 7 \n");
      printf("8 - Operação 8 \n");
      printf("9 - Operação 9 \n");
      printf("10 - Sair\n");
      printf("---------------------------------------\n");
      printf("Escolha uma operação:  ");
     
      int numero_parametros = (scanf("%d", &operacao)); // retornam o número de conversões realizada com sucesso. 
      if (numero_parametros != 1) {
         printf("Problemas na entrada de dados");
      }   
            
      switch (operacao)       {
      case 1:
         printf("Você escolheu a operação %d\n", operacao);
         break;
      case 2:
         printf("Você escolheu a operação %d\n", operacao);
         break;
      case 3:
         printf("Você escolheu a operação %d\n", operacao);
         break;
      case 4:
         printf("Você escolheu a operação %d\n", operacao);
         break;
      case 10:
         printf("Você escolheu sair do menu. Operação %d\n", operacao);
         break;   
      default:
         printf("Você escolheu opção default. Operação %d\n", operacao);
         break;
      }         
   }
}