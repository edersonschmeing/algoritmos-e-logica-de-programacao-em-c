/*6) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de
matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de
cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a
maior média geral dentre os cinco.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno {
    
    int numMatricula;
    char nome[50];
    float notas[3];
};

struct media {

    float media;
    char nome[50];
};


int localiza_cadastro (int qtd, int matricula, struct aluno alunos[]) {

    for (int i = 0; i < qtd; i++) {
        
        if (matricula == alunos[i].numMatricula) {

            return i;
        }
    }

    return -1;
}


int main(){

    int qtdAlunos = 0;
    float calcMedia[qtdAlunos];
    struct aluno novoAluno, alunos[5];
    struct media Media[5], maiorMedia;

    do{

        printf("\n###  Cadastro de Alunos | Total cadastados: %d  ###\n\n", qtdAlunos);
    
        do{
            printf("\nDigite o numero de matricula do aluno: ");
            scanf(" %d", &novoAluno.numMatricula);

            if(localiza_cadastro(qtdAlunos, novoAluno.numMatricula, alunos) != - 1) {

                printf("\nEsse numero de matricula ja foi cadastrado\n");
            }
        }
        while (localiza_cadastro(qtdAlunos, novoAluno.numMatricula, alunos) != - 1);
        
        printf("\nDigite o nome completo do aluno: ");
        setbuf(stdin, NULL);
        fgets(novoAluno.nome, sizeof(novoAluno.nome), stdin);

        for (int j = 0; j < 3; j++) {
            
            printf("\nDigite o valor da nota %d: ", j+1);
            scanf(" %f", &novoAluno.notas[j]);
        }

        alunos[qtdAlunos] = novoAluno; 
        qtdAlunos++;
    }
    while (qtdAlunos < 5);
    
    maiorMedia.media = 0;

    for (int i = 0; i < qtdAlunos; i++) {

        for(int j = 0; j < 3; j++) {
            
            calcMedia[i] = alunos[i].notas[j];
        }  

        calcMedia[i] = calcMedia[i] / 3;
        Media[i].media = calcMedia[i];
        strcpy(Media[i].nome, alunos[i].nome);
    }
    
    for (int i = 0; i < 5; i++) {

        if (maiorMedia.media < Media[i].media) {
            
            maiorMedia.media = Media[i].media;
            strcpy(maiorMedia.nome, Media[i].nome);
        }
        
    }
    
    printf("\nA maior media eh do aluno %s\nEle teve a media de %.2f.\n\n", maiorMedia.nome, maiorMedia.media);

    return 0;
}

