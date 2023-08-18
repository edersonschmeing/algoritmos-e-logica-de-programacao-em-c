/*5) Faça um programa que calcule o ano de nascimento de uma pessoa a
partir de sua idade e do ano atual.
*/

#include <stdio.h>

int main() {

char res;
int ano, idade, nasc;
int var = 0;

    printf("\nInforme o ano atual: ");
    scanf("%d", &ano);

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    while (!var) {    
        
        printf("\nVoce completou %d anos nesse ano (y/n)? ", idade);
        scanf(" %c", &res);    
        
        if (res == 'y' || res == 'Y') {

            ano = ano - 1;
            var = 1;

        } else if (res == 'n' || res == 'n') {
            
            var = 1;
        
        } else {
            
            printf("\nNao entendi, por favor, confirme ou nao utilizando o \"y\" ou o \"n\"\n");
        }

    }
 
    nasc = ano - idade;

    printf("\nVoce nasceu em %d", nasc);

    return 0;
}