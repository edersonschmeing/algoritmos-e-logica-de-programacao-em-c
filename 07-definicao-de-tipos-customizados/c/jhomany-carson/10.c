/*10) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os dados de cinco
atletas e os exiba por ordem de idade, do mais velho para o mais novo. */

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

void OrdenarIdade(A atleta[], A aux) {

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5 - 1 - i; j++) {

           if(atleta[j].idade > atleta[j+1].idade) {

                aux = atleta[j];
                atleta[j] = atleta[j + 1];
                atleta[j + 1] = aux;
            }
        }
    }
}


int main() {

    A atleta[5], aux;

    RegistrarAtleta(atleta);

    OrdenarIdade(atleta, aux);

    printf("\n====== | Listagem de Atletas | =======\n\n");

    for (int i = 5; i >= 0; i--) {
        
        printf("Nome: %s", atleta[i].nome);
        printf("Esporte: %s", atleta[i].esporte);
        printf("Altura: %.2f\n", atleta[i].altura);
        printf("Idade: %d\n", atleta[i].idade);

        printf("\n======================================\n\n");
    }
    
    return 0;
}