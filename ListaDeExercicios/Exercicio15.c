#include <stdio.h>

int main() {

int num, count = 1, linha = 1, coluna = 1;

    printf("Informe as linhas do triangulo: ");
    scanf("%d", &num);

    for(linha = 1; linha <= num; linha++) {

        for (coluna = 1; coluna <= linha; coluna++) {// aqui ocorre uma reunicialização por conta do loop externo "linha" a cada nova linha incrementada a coluna volta a 1 ex: linha = 2 coluna =1 e vai rodar o loop ate ser maior que 2, depois linha = 3 a coluna vai voltar pra 1 e rodar ate ser maior que 3

            printf("%d ", count);
            count++;

        }

        printf ("\n");
        
    }

return 0;
}