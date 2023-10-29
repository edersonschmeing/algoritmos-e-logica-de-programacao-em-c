/*3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço de uma
pessoa. Agora, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de
tamanho N, alocado dinamicamente, dessa estrutura. Solicite também que o usuário digite os dados desse
vetor dentro da função*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    
    char nome[50];
    int idade;
    char endereco[200];
} typedef Cadastro;

Cadastro * alocarMemoria(int n) {

    Cadastro * vetor = (Cadastro *) malloc (n * sizeof(Cadastro));

    if (vetor == NULL) {
        
        printf("\nErro na alocacao da memoria =(\n\n\n");
        
        exit(1);
    }
    else {

        for (int i = 0; i < n; i++) {

            printf("\n\n=====  Cadastro %d  =====\n", i+1);
            printf("\nNome: ");
            setbuf(stdin, NULL);
            fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);

            printf("\nIdade: ");
            scanf(" %d", &vetor[i].idade);

            printf("\nEndereco: ");
            setbuf(stdin, NULL);
            fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
        }
    }

    return vetor;
}

int main() {

    int n;
    Cadastro * vetorAluno;

    printf("\nDigite o numero de cadastros que deseja inserir: ");
    scanf(" %d", &n);

    vetorAluno = alocarMemoria(n);

    free(vetorAluno);

    return 0;
}
