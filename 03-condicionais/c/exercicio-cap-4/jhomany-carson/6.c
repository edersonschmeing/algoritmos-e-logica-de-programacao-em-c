/*6) Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>
#include <unistd.h>

int main() {

char sexo;
float imc, peso, alt;

// Captura peso
    printf("\n\nBem-vindo(a) a calculadora de Indice de Massa Corporal (IMC) =) \n");

    printf("\nInforme seu sexo: (M/F)");
    scanf(" %c", &sexo);

    printf("\nDigite seu peso: ");
    scanf(" %f", &peso);

// Captura altura
    printf("Certo, agora me informe sua altura: ");
    scanf(" %f", &alt);

// calculo do IMC
    imc = peso / (alt * alt);

    printf("\n\nAguarde um momento enquanto calculamos seu IMC...\n\n");
    sleep(3);

    printf("Seu IMC e de: %.2f", imc);

    if (imc <= 18.5) {
      
        printf("\n\nVoce esta abaixo do peso ideal\n");
    
    } else if (imc >= 18.5 && imc <= 24.9) {
    
        printf("\n\nVoce esta no seu peso ideal\n");
    
    } else if (imc >= 25 && imc <= 29.9) {
    
        printf("\n\nVoce esta acima do seu peso ideal\n");
    
    } else if (imc >= 30 && imc <= 34.9) {
        
        printf("\n\nVoce e considerada uma pessoa Obesa com grau 1\n");
    
    } else if (imc >= 35 && imc <= 39.9) {
        
        printf("\n\nVoce e considerada uma pessoa Obesa com grau 2\n");
    
    } else if (imc >= 40) {
       
        printf("\n\nCUIDADO!! Voce e considerada uma pessoa Obesa Morbida\n");
    
    }

    return 0;
}