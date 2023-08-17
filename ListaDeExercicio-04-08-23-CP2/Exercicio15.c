/*15) Escreva um programa que leia três variáveis: char, int e float. Em
seguida, imprima-as de três maneiras diferentes: separadas por espaços,
por uma tabulação horizontal e uma em cada linha. Use um único comando
printf() para cada operação de escrita das três variáveis.
*/

#include <stdio.h>

int main() {

char varchar = 'a';
int varint = 1;
float varfloat = 1.5;

    printf("Segue as 3 variaveis impressas \n\n\tVariavel char: %c\n\tVariavel int: %d\n\tVariavel float %.2f", varchar, varint, varfloat);
    
    return 0;
}
