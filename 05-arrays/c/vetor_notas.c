#include <stdio.h>


int main() {

    printf("vetor \n");
   
    int notas[4];
    int soma = 0;
    int media = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("digite a nota %d: ", i);
        scanf("%d", &notas[i]);
        soma = soma + notas[i];
 
    }
    media = soma / 4;
    printf("%d \n", media);
    return 0;
}