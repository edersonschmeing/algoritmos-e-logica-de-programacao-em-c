/*15) Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que inicialize um
dos tipos dessa união e exiba em tela o valor do outro tipo.*/

#include <stdio.h>

union Dados {
    int inteiro;
    float decimal;
};

int main() {
    union Dados uniao;

    
    uniao.inteiro = 42;

    printf("\nO valor do decimal eh: %,2f\n\n", uniao.inteiro);

    return 0;
}