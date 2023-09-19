/*7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e
segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a
maior hora. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct hora {
    
    int hora;
    int min;
    int seg;
};

int main () {

    struct hora horario[5];
    int maior, indice;

    printf("\n ");

    for (int i = 0; i < 5; i++) {
        
        printf("registro de hora %d:\n", i+1);
        
        printf("\nDigite a hora: ");
        scanf(" %d", &horario[i].hora);
        
        printf("Digite o minuto: ");
        scanf("%d", &horario[i].min);

        printf("Digite o segundo: ");
        scanf("%d", &horario[i].seg);

        if (i < 4) {

            printf("\nCerto! Registro %d criado!\n", i+1);
            printf("\nAgora digite o valor do ");
        }
    }
    
    for (int i = 0; i < 5; i++) {
        
        if (maior < horario[i].hora) {

            maior = horario[i].hora;
            indice = i;
        }
    }
    


    printf("\nO maior horario eh: %d:%d:%d", horario[indice].hora,  horario[indice].min,  horario[indice].seg);

    return 0;   
}
