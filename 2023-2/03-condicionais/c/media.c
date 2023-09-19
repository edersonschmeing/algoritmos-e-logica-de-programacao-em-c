#include <stdio.h>

int main() { 
    
    float media = 7, frequencia_minima = 0.75f;
    float media_aluno = 6, frequencia = 0.76f;
    
    if (media_aluno >= media && frequencia > frequencia_minima)
        printf("Você foi aprovado!\n");
    else if (media_aluno >= media)
        printf("Solicite aprovação mediante justificativa de faltas.\n");
    else if (frequencia > frequencia_minima){
        float recuperar = media * 2 - media_aluno;
        if (recuperar <= 10)
            printf("Está em recuperação, tirar no mínimo %.1f \n", recuperar);
        else
            printf("Não está apto para recuperação. \n");
    }else {
        printf("Você está reprovado.\n"); 
    }
    return 0;
}