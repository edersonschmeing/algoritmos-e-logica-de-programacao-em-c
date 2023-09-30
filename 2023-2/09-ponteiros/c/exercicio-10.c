/*
10) Considere a seguinte declaração: int a, *b, **c, ***d. 

Escreva um programa que leia a variável a e calcule e exiba o dobro,
 o triplo e o quádruplo 
desse valor utilizando apenas os ponteiros b, c e d. 

O ponteiro b deve ser usado para calcular o dobro.
O ponteiro c deve ser usado para calcular triplo.
O ponteiro d deve ser usado para calcular quádruplo.
*/

#include <stdio.h>


int main() {
   
   int a, *b, **c, ***d;
   
   a = 2;
   b = &a;
   //*b = a * 2;
  *b = *b * 2;
   printf("\n%d \n", a);
 
  c = &b;
  **c = (a / 2) * 3;
  //**c = (*b / 2) * 3;
  printf("\n%d \n", a);

  d = &c;
  ***d = (a / 3) * 4;
  //***c = (**c / 3) * 4;
  printf("\n%d \n", a);
  
    return 0;
}