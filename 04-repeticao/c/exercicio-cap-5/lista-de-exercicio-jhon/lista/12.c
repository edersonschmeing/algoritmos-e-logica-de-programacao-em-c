/*12) Escreva um programa que leia um número inteiro e calcule a soma de
todos os divisores desse número, com exceção dele próprio. Exemplo: A
soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/

#include <stdio.h>

int main() {

    int num, divisor, cont = 1, res = 0;
    
    printf("\nInforme um numero positivo:");
    scanf(" %d", &num);

    printf("\nA soma dos divisores de %d fora ele mesmo, eh: ", num);
    while (cont <= num) {

        if(num % cont == 0){

            divisor = cont;
                        
            if(divisor != num){
                
                if(divisor > 1) {

                    printf(" +");
                }
                
                printf(" %d", divisor);

                res += divisor;
            }
        }
        
        cont++;
    }

    printf(" = %d", res);

    return 0;
}