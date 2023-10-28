/*8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Agora, escreva
um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais
velha.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Pessoa {
    char nome[50];
    int dia, mes, ano;
    int idade;
}Pessoa;

void CalcularIdade ( Pessoa pessoa[]) {

    for (int i = 0; i < 6; i++) {

        //mes atual 08
        if(pessoa[i].mes >= 8) {
            
            pessoa[i].idade = (2023 - pessoa[i].ano) -1;
        }
        else if (pessoa[i].mes < 8) {

            pessoa[i].idade = 2023 - pessoa[i].ano;
        }
    }    
}

int LocalizarMaiorIdade (Pessoa pessoas[], int maior) {

    
    for (int i = 0; i < 6; i++) {
        
        if(maior == pessoas[i].idade) {

            return i;
        }        
    }

    return 0;
}

int LocalizarMenorIdade(Pessoa pessoas[], int menor) {

    
    for (int i = 0; i < 6; i++) {

        if (menor == pessoas[i].idade) {
            
            return i;
        }
    }

    return 0;
}

int main() {
    
    Pessoa pessoas[6];
    int MaiorIdade = 0, MenorIdade = 0, IndiceMenor, IndiceMaior;

    for (int i = 0; i < 6; i++) {
        
        printf("\n===== Cadastro | Pessoa %d =====\n", i+1);
        printf("\nDigite o nome: ");
        setbuf(stdin, NULL);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        printf("\nDigite o dia em que nasceu (1 a 31): ");
        scanf(" %d", &pessoas[i].dia);
        printf("\nAgora o mes (1 a 12): ");
        scanf(" %d", &pessoas[i].mes);        
        printf("\nAno em que nasceu: ");
        scanf(" %d", &pessoas[i].ano);
    }
    
    CalcularIdade(pessoas);

    MaiorIdade = pessoas[0].idade;

    for(int i = 0; i < 6; i++) {
      
        if(MaiorIdade < pessoas[i].idade) {

            MaiorIdade = pessoas[i].idade;
        }

        if(MenorIdade == 0) {

            MenorIdade = pessoas[i].idade;
        }
        else if (MenorIdade > pessoas[i].idade) {
                
            MenorIdade = pessoas[i].idade;            
        }
    }

    IndiceMenor = LocalizarMenorIdade(pessoas, MenorIdade);
    IndiceMaior = LocalizarMaiorIdade(pessoas, MaiorIdade);

    printf("\nO mais velho eh: %s", pessoas[IndiceMaior].nome);
    printf("Ele possui %d anos.", pessoas[IndiceMaior].idade);

    printf("\nO mais novo eh: %s", pessoas[IndiceMenor].nome);
    printf("Ele possui %d anos.", pessoas[IndiceMenor].idade);
    
    return 0;
}