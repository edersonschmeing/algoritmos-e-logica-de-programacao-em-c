/*11) Faça um programa que informe o mês de acordo com o
número digitado pelo usuário. Exemplo: Entrada = 4.
Saída = Abril.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
int num;
char mes[10];

    printf("\nDigite um numero de 1 a 12: ");
    scanf(" %d", &num);

    switch (num) {
        case 1:

            strcpy(mes, "Janeiro");
            break;

        case 2:

            strcpy(mes, "Fevereiro");
            break;

        case 3:

            strcpy(mes, "Marco");
            break;

        case 4:

            strcpy(mes, "Abril");
            break;

        case 5:

            strcpy(mes, "Junho");
            break;
        case 6:

            strcpy(mes, "Julho");
            break;
        
        case 7:

            strcpy(mes, "Maio");
            break;

        case 8:

            strcpy(mes, "Agosto");
            break;

        case 9:

            strcpy(mes, "Setembro");
            break;

        case 10:

            strcpy(mes, "Outubro");
            break;

        case 11:

            strcpy(mes, "Novembro");
            break;

        case 12:

            strcpy(mes, "Dezembro");      
            break;
        
        default:

            printf("\nValor nao correspondente a nenhum mes");
            return 1;
        }

    printf("\nO mes de acordo com esse numero eh: %s", mes);

return 0;
}