/*2) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de
matrícula do aluno, seu nome e as notas de três provas. Escreva um programa que mostre o tamanho em
byte dessa estrutura.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[50];
    int matricula;
    float nota[3];
} typedef Aluno;

int main() {

    printf("O tamanho da estrutura eh: %lu bytes", sizeof(Aluno));

    return 0;
}
