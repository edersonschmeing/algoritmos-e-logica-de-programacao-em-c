/*12) Usando o comando switch, escreva um programa que leia um
inteiro entre 1 e 7 e imprima o dia da semana correspondente a
esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim
por diante.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int num;
char dia[30];

    printf("\nDigite um numero de 1 a 7: ");
    scanf(" %d", &num);

    switch (num) {
        case 1:

            strcpy(dia, "Domingo");
            break;

        case 2:

            strcpy(dia, "Segunda-Feira");
            break;

        case 3:

            strcpy(dia, "Terça-Feira");
            break;

        case 4:

            strcpy(dia, "Quarta-Feira");
            break;

        case 5:

            strcpy(dia, "Quinta-Feira");
            break;
        case 6:

            strcpy(dia, "Sexta-Feira");
            break;
        
        case 7:

            strcpy(dia, "Sabado");
            break;

        default:

            printf("\nValor nao correspondente a nenhum dia");
            return 1;
        }

    printf("\nO dia de acordo com esse numero eh: %s", dia);

return 0;
}
