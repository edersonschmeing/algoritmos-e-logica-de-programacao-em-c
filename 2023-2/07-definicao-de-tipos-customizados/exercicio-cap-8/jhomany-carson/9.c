/*9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte,
idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes
do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Atleta {
    
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} A;

void RegistrarAtleta (A atleta[]) {

    for (size_t i = 0; i < 5; i++) {

        printf("\n===== | Registro %d | =====\n", i+1);

        printf("\nDigite o nome do Atleta: ");
        setbuf(stdin, NULL);
        fgets(atleta[i].nome, sizeof(atleta[i].nome), stdin);

        printf("Qual o Esporte? ");
        setbuf(stdin, NULL);
        fgets(atleta[i].esporte, sizeof(atleta[i].esporte), stdin);

        printf("Qual a altura do atleta? ");
        scanf(" %f", &atleta[i].altura);

        printf("Qual a idade do atleta? ");
        scanf(" %d", &atleta[i].idade);
    }

    printf("\n==== | Atletas Registrados com Sucesso | ====\n"); 
}

int CalcularIdade(int idade, A atleta[]) {


    for (int i = 0; i < 5; i++) {
        
        if(idade < atleta[i].idade) {

            idade = atleta[i].idade;
        }
    }

    return idade;
}

float CalcularAltura(float alt, A atleta[]) {


    for (int i = 0; i < 5; i++) {
        
        if(alt < atleta[i].altura) {

            alt = atleta[i].altura;
        }
    }

    return alt;
}

int LocalizarAtletaIdade(A atleta[], int idade) {

    for (int i = 0; i < 5; i++) {
        
        if (idade == atleta[i].idade) {
            
            return i;
        }
    }
}

int LocalizarAtletaAltura(A atleta[], float alt) {

    for (int i = 0; i < 5; i++) {
        
        if (alt == atleta[i].altura) {
            
            return i;
        }
    }
}

int main() {

    A atleta[5];
    float alt = 0;
    int idade = 0, IA, II;

    RegistrarAtleta(atleta);

    alt = CalcularAltura(alt, atleta);
    idade = CalcularIdade(idade, atleta);

    IA = LocalizarAtletaAltura(atleta, alt);
    II = LocalizarAtletaIdade(atleta, idade);    

    printf("\n====== | Atleta mais velho | =======\n\n");

    printf("Nome: %s", atleta[II].nome);
    printf("Esporte: %s", atleta[II].esporte);
    printf("Altura: %.2f\n", atleta[II].altura);
    printf("Idade: %d\n", atleta[II].idade);

    printf("\n====== | Atleta mais Alto | =======\n\n");

    printf("Nome: %s", atleta[IA].nome);
    printf("Esporte: %s", atleta[IA].esporte);
    printf("Altura: %.2f\n", atleta[IA].altura);
    printf("Idade: %d\n\n", atleta[IA].idade);


    return 0;
}