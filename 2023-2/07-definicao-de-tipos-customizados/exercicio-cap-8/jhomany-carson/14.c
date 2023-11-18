/*14) Crie uma enumeração representando os itens de uma lista de compras. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o nome do item comprado e o seu preço.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


enum Produtos{

    Leite = 1,
    Arroz,
    Manteiga,
    Acucar,
};

void ListarProduto(int n) {

    switch (n) {
    
    case Leite:
        
        system("cls");
        printf("\n===Produto===\n");
        printf("\nLeite Integral");
        printf("\nPreco: R$7.00\n\n");
        break;

    case Arroz:
        
        system("cls");
        printf("\n===Produto===\n");
        printf("\nArroz Parborizado Integral");
        printf("\nPreco: R$14.00\n\n");
        break;

    case Manteiga:

        system("cls");
        printf("\n===Produto===\n");
        printf("\nManteiga");
        printf("\nPreco: R$18.00\n\n");
        break;

    case Acucar:
        
        system("cls");
        printf("\n===Produto===\n");
        printf("\nAcucar Refinado");
        printf("\nPreco: R$7.00\n\n");
        break;
    
    default:

        system("cls");
        break;
    }
}

int main() {

    int n;


    do{
        printf("\nVoce possui 4 itensna sua lista, digite o numero equivalente ao produto que deseja visualizar: \n\n1 - Leite\n2 - Arroz\n3 - Manteiga\n4 - Acucar\n\n");
        printf("\nDigite de 1 a 4 para visualizar os detalhes dos itens ou 0 para sair.");
        scanf(" %d", &n);

        ListarProduto(n);
    }
    while(n != 0);

    return 0;
}
