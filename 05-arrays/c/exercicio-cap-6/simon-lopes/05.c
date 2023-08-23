/* 
5) Faça um programa que leia um vetor de oito posições. 
Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>

int main() {
    int vetor[8]; // declara a variavel do array
    int x, y; // declara as variaveis x e y para usar na soma

    // Lê um vetor de oito posições
    for (int i = 0; i < 8; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Lê os valores X e Y
    printf("Digite o valor de X (0 a 7): ");
    scanf("%d", &x); //atribui a X o valor digitado

    printf("Digite o valor de Y (0 a 7): ");
    scanf("%d", &y); //atribui a Y o valor digitado

    // Verifica se os valores de X e Y estão dentro do intervalo válido
    if (x < 0 || x > 7 || y < 0 || y > 7) {
        printf("Valores inválidos para X e/ou Y.\n");
    } else {
        // Calcula a soma dos valores nas posições X e Y
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    }

    return 0;
}
