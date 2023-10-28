#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

float peso, alt;

    printf("\nQual o seu peso?  ");
    scanf(" %f", &peso);

    printf("\nCerto! Agora informe sua altura: ");
    scanf(" %f", &alt);

/*
    TABELA:

    A = alt < 1,20 e peso < 60
    B = alt >= 1,20 <= 1,70 e peso < 60 
    C = alt > 1,70 e peso < 60
    D = alt < 1,20 e peso >= 60 < 90
    E = alt >= 1,20 <= 1,70 e peso >= 60 < 90
    F = alt > 1,70 e peso >= 60 < 90
    G = alt < 1,20 e peso > 90
    H = alt >= 1,20 <= 1,70 e peso > 90 
    I = alt > 1,70 e peso > 90

*/

    if(peso < 60) {

        if (alt < 1.20) {
            
            printf("\nClassificacao A");

        } else if (alt >= 1.20 && alt <= 1.70) {
            
            printf("\nClassificacao B");

        } if (alt > 1.70) {
            
            printf("\nClassificacao C");

        }
    
    } else if (peso >= 60 && peso < 90) {

        if (alt < 1.20) {
            
            printf("\nClassificacao D");

        } else if (alt >= 1.20 && alt <= 1.70) {
            
            printf("\nClassificacao E");

        } if (alt > 1.70) {
            
            printf("\nClassificacao F");

        }

    } else if (peso > 90) {

        if (alt < 1.20) {
            
            printf("\nClassificacao G");

        } else if (alt >= 1.20 && alt <= 1.70) {
            
            printf("\nClassificacao H");

        } if (alt > 1.70) {
            
            printf("\nClassificacao I");

        }
    }

return 0;
}