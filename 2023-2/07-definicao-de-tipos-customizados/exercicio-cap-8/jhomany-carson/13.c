/*13) Crie uma enumeração representando os meses do ano. Agora, escreva um programa que leia um valor
inteiro do teclado e exiba o nome do mês correspondente e quantos dias ele possui.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum mes {

    jan = 1,
    fev,
    mar,
    abr,
    mai,
    jun,
    jul,
    ago,
    set,
    out,
    nov,
    dez,
};

int main () {

    enum DiasSemana;
    int n;

    printf("\n\n");

    do{

        printf("Digite um inteiro de 1 a 12: ");
        scanf(" %d", &n);

        if (n > 7 || n < 1) {

            printf("\nDe 1 a 12!! ");
        }
    }
    while (n > 12 || n < 0);
    

    switch (n) {

        case jan:
          
            printf("\nJaneiro: possui 31 dias\n\n");
            break;
        case fev:
          
            printf("\nFevereiro: possui 28 dias\n\n");
            break;
        case mar:
          
            printf("\nMarço: possui 31 dias\n\n");
            break;
        case abr:
           
            printf("\nAbril: possui 30 dias\n\n");
            break;
        case mai:
           
            printf("\nMaio: possui 31 dias\n\n");
            break;
        case jun:
           
            printf("\nJunho: possui 30 dias\n\n");
            break;
        case jul:
            
            printf("\nJulho: possui 31 dias\n\n");
            break;
        case ago:
            
            printf("\nAgosto: possui 31 dias\n\n");
            break;
        case set:
           
            printf("\nSetembro: possui 30 dias\n\n");
            break;
        case out:
           
            printf("\nOutubro: possui 31 dias\n\n");
            break;
        case nov:
            
            printf("\nNovembro: possui 30 dias\n\n");
            break;
        case dez:
            
            printf("\nDezembro: possui 31 dias\n\n");
            break;
    }

    return 0;
}