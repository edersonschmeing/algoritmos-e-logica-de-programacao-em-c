/*12) Crie uma enumeração representando os dias da semana. Agora, escreva um programa que leia um
valor inteiro do teclado e exiba o dia da semana correspondente.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum DiasSemana {

    Segunda_feira = 1,
    Terca_feira,
    Quarta_feira,
    Quinta_feira,
    Sexta_feira,
    Sabado,
    Domingo,
};

int main() {

    enum DiasSemana;
    int n;

    do{

        printf("\nDigite um inteiro de 1 a 7: ");
        scanf(" %d", &n);

        if (n > 7 || n < 1) {

            printf("\ne 1 a 7");
        }
        
    }
    while(n > 7 || n < 1);

    switch (n) {

        case Segunda_feira:
          
            printf("\nSegunda-feira\n");
            break;
        case Terca_feira:
          
            printf("\nTerca-feira\n");
            break;
        case Quarta_feira:
          
            printf("\nQuarta-feira\n");
            break;
        case Quinta_feira:
           
            printf("\nQuinta-feira\n");
            break;
        case Sexta_feira:
           
            printf("\nSexta-feira\n");
            break;
        case Sabado:
           
            printf("\nSabado\n");
            break;
        case Domingo:
            
            printf("\nDomingo\n");
            break;
    }

    return 0;
}