/*12) Escreva umprograma que leia o nome e o valor de determinada mercadoria de uma loja. Sabendo que
o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int opcao, formaPagamento, qtdLeite = 0, qtdNescau = 0, qtdArroz = 0, qtdFeijao = 0;
    float valorTotal = 0, desconto = 0, valorPago = 0; 
    
    printf("\n####---- Mercadao da Univel ----####");

    do{

        printf("\n\nEscolha o produto que deseja abaixo:");
        printf("\n\n1 - Leite: R$5,00\n2 - Nescau: R$7,00\n3 - Arroz 5Kg: R$20,00\n4 - Feijao 1Kg: R$10,00\n5 - Visualizar carrinho\n6 - Finzalizar compra\n0 - Para sair do programa");
        printf("\n\nDigite o numero de acordo com a opcao desejada: ");
        scanf("%d", &opcao);     

        switch (opcao) {

        case 0:

            break;

        case 1:
            
            valorTotal += 5.00;
            qtdLeite++;

            printf("\nSegue o valor do seu carrinho: R$%.2f", valorTotal);  

            break;
        case 2:
            
            valorTotal += 7.00;
            qtdNescau++;

            printf("\nSegue o valor do seu carrinho: R$%.2f", valorTotal);  

            break;
        case 3:
            
            valorTotal += 20.00;
            qtdArroz++;

            printf("\nSegue o valor do seu carrinho: R$%.2f", valorTotal);  

            break;
        case 4:
            
            valorTotal += 10.00;
            qtdFeijao++;

            printf("\nSegue o valor do seu carrinho: R$%.2f", valorTotal);  

            break;

        case 5:

            printf("\nUnd |   Produto   \n");
            if(qtdLeite > 0) {

                
                printf("\n%d   |   Leita ", qtdLeite);
            }

            if(qtdNescau > 0) {

                printf("\n%d   |   Nescau ", qtdNescau);
            }
            if(qtdArroz > 0) {

                printf("\n%d   |   Arroz ", qtdArroz);
            }
            if(qtdFeijao > 0) {

                printf("\n%d   |   Feijao ", qtdFeijao);
            }

            printf("\n\nValor total: R$%.2f\n", valorTotal);
            break;
        case 6:
            
            do {

                printf("\nCerto! Para pagamento a vista temos 10 porcento de desconto, qual vai ser a forma de pagamento?\n\n1 - A vista\n2 - Parcelado\n\nDigite o numero correspondente a opcao desejada: ");
                scanf(" %d", &formaPagamento);

                if (formaPagamento != 1 && formaPagamento !=2) {
                    
                    printf("*!--Por favor, digite uma opcao valida--!*");
                }
            } 
            while (formaPagamento != 1 && formaPagamento !=2);

            if (formaPagamento == 1) {
                
                desconto = valorTotal * 0.10;

                valorPago = valorTotal - desconto;

                printf("\n!!Muito obrigado pela preferencia!!");
                printf("\n###################################\n\n");
                printf(" -- Valor Total --"); 
                printf("\n");
                printf("      R$%.2f      ", valorTotal);
                printf("\n\n");
                printf("  -- Desconto --");
                printf("\n");
                printf("      R$%.2f    ", desconto);
                printf("\n\n");
                printf(" -- Valor Pago --");
                printf("\n");
                printf("      R$%.2f     ", valorPago);
                printf("\n  ");

                opcao = 0;
            }           
            
            break;

        default:

            printf("Opcao invalida invalido!\n\n");
            break;
        }

        if (opcao > 6) {
            
            printf("\n!! Por favor, digite uma opcao valida !!");
        }
        
    }
    while(opcao != 0);

    return 0;
}