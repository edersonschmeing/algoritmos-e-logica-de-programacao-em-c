/*  VALIDANDO CORREÇÃO

14) Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números
        
         d = raiz de 1/n-1 x somatorio de v[i] - m
    
    em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.*/
#include <stdio.h>
#include <math.h>

int main() {

    int n = 4;
    float m = 0, V[n], d, somatoria = 0, res = 0, denominador = n-1, nominador = 1;    

//preencho meu vetor
    for (int i = 0; i < n; i++) {
        
        printf(" Digite o valor %d do vetor: ", i+1);
        scanf(" %f", &V[i]);

        m += V[i];
    }
 //calculo a media   
    m = m / n;

//calculo minha somatoria e depois subtraio pela media
    for (int i = 0; i < n; i++) {
        
        res += V[i];
    }

    somatoria = res - m;

//faço a multiplicação de fração que está dentro da minha raiz
    nominador = nominador * somatoria;
    denominador = denominador * 1;

//capturo o resultado da divisão da minha fração
    res = nominador / denominador;

//extraio a raiz do resultado dessa divisão
    d = sqrt(res);
    
    printf("O resultado eh: %.2f", d);

    return 0;
}