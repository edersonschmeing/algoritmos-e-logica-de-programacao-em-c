#include <stdio.h>

int main() {
    char a[255] =  "123"; //"Eu estou aprendendo algoritmos e lógica de programação em Linguagem C";
    int total = 0;
    /*while(a[total] != '0')
        total++;*/
    /*int i;
    for (i = 0 ; i < 255; i++ )
        total = total + 1;
    */
    int i;
    for ( ; a[total] != '\0'; i++ )
        total = total + 1;
    
   /* total = a.length();*/
   
   /*while(a[total] == '0')
        total++;*/
   
    
    printf("%d\n", total);
}