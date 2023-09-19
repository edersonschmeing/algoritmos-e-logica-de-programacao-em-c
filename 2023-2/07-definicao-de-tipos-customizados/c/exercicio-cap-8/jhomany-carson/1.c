/*1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses
dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct pessoa {
    char nome[50];
    int idade;
    char data[11];
};

int main(){

    struct pessoa pessoa;

    printf("\n--##  Cadastro de Pessoa  ##--\n");
    printf("\nDigite seu nome completo: ");
    setbuf(stdin, NULL);
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("\nCerto! Agora informe a sua idade: ");
    scanf(" %d", &pessoa.idade);

    printf("\nObrigado! Para finalizar, digite a sua data de nascimento \"dd/mm/aaaa\": ");
    scanf(" %s", &pessoa.data);

    printf("\n--##  Segue os dados cadastrados: ##--\n");

    printf("\nNome: %sIdade: %d\nData de Nascimento: %s\n\n", pessoa.nome, pessoa.idade, pessoa.data);
    
    return 0;
}
