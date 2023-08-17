/*07) Uma empresa vende o mesmo produto para quatro diferentes
estados. Cada estado possui uma taxa diferente de imposto
sobre o produto. Faça um programa em que o usuário entre
com o valor e o estado de destino do produto e o programa
retorne o preço final do produto acrescido do imposto do
estado em que ele será vendido. Se o estado digitado não for
válido, mostrará uma mensagem de erro*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int estado;
float valorPrincipal, valorTaxa;

    printf("\nQual o valor do produto? ");
    scanf(" %f", &valorPrincipal);

    printf("\nCerto! Escolha o estado de destino:\n\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n\nDigite o numero equivalente ao destino: ");
    scanf(" %d", &estado);

    switch (estado) {
       
        case 1:
            
            valorTaxa = (0.07 * valorPrincipal) + valorPrincipal;
            break;
        
        case 2:
           
            valorTaxa = (0.12 * valorPrincipal) + valorPrincipal;
            break;

        case 3:
            
            valorTaxa = (0.15 * valorPrincipal) + valorPrincipal;
            break;

        case 4:
    
            valorTaxa = (0.08 * valorPrincipal) + valorPrincipal;
            break;

        default:
            
            printf("\nValor invalido");
            
            return 1;
            break;
        }

    printf("\nO valor com a taxa para o estado selecionado eh: R$%.2f", valorTaxa);

return 0;
}