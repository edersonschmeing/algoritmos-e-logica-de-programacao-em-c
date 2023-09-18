#include <stdio.h>


int main() {  
   int x = 3, y = 1, z = -5, w = -2;
   int i;
   for (i = 1; i < x; i++){
      while (z < 0){
         ++i;
         z++;
         do{
            x = x +3;
            w++;
         }while (w < 0);
      }
   }
   printf("%d %d %d %d", x, y, z, w);
}