#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //Este é um comentário. 

    /* 
      Este é um comentário 
      em mais linhas. 
    */
    
    char a = '0';
    short b = 1;
    int c = 3;
    long d = 4; 
    double e = 5.;

    printf("a = %c\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %ld\n", d);
    printf("e = %lf\n\n", e);

    return 0;
}

/*
prinft
%c -> caracter simples (CHAR)
%d -> decimal (INT)
%ld -> inteiro “longo” (LONG INT)
%f -> ponto flutuante (FLOAT)
%o -> octal
%s -> cadeia de caracteres (STRING)
%x -> hexadecimal
%lf -> double
*/

