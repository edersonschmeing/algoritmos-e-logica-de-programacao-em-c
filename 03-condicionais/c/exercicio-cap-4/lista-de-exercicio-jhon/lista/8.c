/*8) Escreva um programa que, dada a idade de um nadador,
classifique-o em uma das seguintes categorias:

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main() {

int idade;

    printf("\nOla, qual a sua idade? ");
    scanf(" %d", &idade);

    printf("\nValidando em que categoria voce se enquadra...");
    sleep(2);

    if (idade >= 5 && idade <= 7) {
        
        printf("\n\nVoce foi inscrito na categoria Infantil A");

    } else if (idade >= 8 && idade <= 10) {

        printf("\n\nVoce foi inscrito na categoria Infantil B");

    } else if (idade >= 11 && idade <= 13) {

        printf("\n\nVoce foi inscrito na categoria Juvenil A");        

    } else if (idade >= 14 && idade <= 17) {

        printf("\n\nVoce foi inscrito na categoria Juvenil B");

    } else if (idade >= 18) {
        
        printf("\n\nVoce foi inscrito na categoria Sernior");

    }
    
    


return 0;
}