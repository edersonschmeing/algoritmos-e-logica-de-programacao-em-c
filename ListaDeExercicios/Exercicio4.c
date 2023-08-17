/*4) Faça um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>
#include <stdlib.h>

int main(){

char res;
float salario, emprestimo, porcentagem, prest1, prest2, prest3;
int opcao, bool = 0;

    printf("\nSeja bem-vindo(a) ao nosso sistema de imprestimo!");

//solicita salario e confirma se é mesmo o valor que ele recebe
    while (!bool) {

        printf("\nDigite o valor do seu salario: ");
        scanf(" %f", &salario);

        printf("\noloco, tudo isso? nao minta, voce confirma esse valor? (s/n) \n");
        scanf(" %c", &res);
        
        if(res == 's' || res == 'S') {
            
            bool = 1;
        
        } else if(res == 'n' || res == 'N') {
            
            printf("\nMeu deus, não sabe seu salario? ok... Vou repetir.");
            bool = 0;

        } else {

            printf("\nAmigao, confirme seu salario usando o \"s\" ou o \"n\", por favor!\n\nRepetindo...");

        }
    }

//reseta a variavel booleana
    bool = 0;

//reseta o valor da variavel para utilizar novamente
    res = 'a';

//calcula a porcentagem de 20 do salario informado
    porcentagem = salario * 0.2;

//le o valor de emprestimo e solicita confirmação
    printf("\nAgora sim, podemos continurar");

    while (!bool) {

        printf("\nQual o valor do emprestimo que gostaria de fazer? ");
        scanf(" %f", &emprestimo);

        printf("\nVoce confirma o valor de R$%.2f? (s/n)\n", emprestimo);
        scanf(" %c", &res);
        
        if(res == 's' || res == 'S') {
            
            bool = 1;
        
        } else if(res == 'n' || res == 'N') {
            
            printf("\nMeu deus, ok... Vou repetir.");
            bool = 0;

        } else {

            printf("\nAmigao, confirme seu emprestimo usando o \"s\" ou o \"n\", por favor!\n\nRepetindo...");

        }
    }

//reseta a variavel booleana
    bool = 0;

//Calcula o valor das parcelas de cada uma das 3 opções de pagamento
    prest1 = emprestimo / 24;
    prest2 = emprestimo / 36;
    prest3 = emprestimo / 48; 

printf("%.2f %.2f %.2f", prest1, prest2, prest3);

//le qual é a opção de parcelamento desejada e
//valida se o emprestimo é viavel
    while (!bool) {

        printf("\nCerto! Nossos emprestimos possuem 3 opcoes de parcelamento, sendo elas:\n\nOpcao 1 -> 24x de R$%.2f\nOpcao 2 -> 36x de R$%.2f\nOpcao 3 -> 48x de R$%.2f", prest1, prest2, prest3);
        printf("\nDigite o numero equivalente a opcao de deseja: (1, 2 ou 3)\n\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
        
            case 1:
                if (prest1 > porcentagem) {
                    
                    printf("\nDesculpe, infelizmente nao podemos seguir com o seu emprestimo.\nO valor da parcela eh maior do que o permitido de acordo com o seu salario");

                } else {

                    printf("\nOba! Emprestimo aprovado =)\n\nSerao 24 parcelas de R$%.2f", prest1);

                }

                bool = 1;    
            break;

            case 2:
                if (prest2 > porcentagem) {
                        
                    printf("\nDesculpe, infelizmente nao podemos seguir com o seu emprestimo.\nO valor da parcela eh maior do que o permitido de acordo com o seu salario");
                    
                } else {

                    printf("\nOba! Emprestimo aprovado =)\n\nSerao 36 parcelas de R$%.2f", prest2);

                }

                bool = 1;
            break;
        
            case 3:
                if (prest1 > porcentagem) {
                        
                    printf("\nDesculpe, infelizmente nao podemos seguir com o seu emprestimo.\nO valor da parcela eh maior do que o permitido de acordo com o seu salario");
                    
                } else {

                    printf("\nOba! Emprestimo aprovado =)\n\nSerao 48 parcelas de R$%.2f", prest3);

                }    
                
                bool = 1;
            break;

        default:
          
            printf("\nDigite uma opcao valida");
          
            break;
        }
    }
    
    printf("\n\nObrigado pela preferencia, volte sempre...");    

return 0;

}