/*10) Faça um programa que leia 10 inteiros positivos, ignorando não
positivos, e imprima sua média.*/

#include <stdio.h>

int main() {

    int cont = 1;
    float res = 0, media = 0, soma = 0, num; 

    printf("\nDigite 10 numeros inteiros: \n");

        while(cont <= 10) {

            printf("\nDigite o valor %d: ", cont);
            scanf(" %f", &num);
            cont++;

            if(num > 0){
                
                soma += num;
                media++;
            }
        }

    res = soma / media;

    printf("\nA media dos numeros positivos eh: %.2f", res);

    return 0;
}


//Caso o numero negativo deva ser contabilizado como um numero inserido para o calculo da media, ignorando apenas a soma do numero negativo
/*#include <stdio.h>

int main() {

    int cont = 1;
    float res = 0, media = 0, soma = 0, num; 

    printf("\nDigite 10 numeros inteiros: \n");

        while(cont <= 5) {

            printf("\nDigite o valor %d: ", cont);
            scanf(" %f", &num);
            cont++;

            if(num > 0){
                
                soma += num;
            }

            media++;
        }

    res = soma / media;

    printf("\nA media dos numeros positivos eh: %.2f", res);

    return 0;
}*/