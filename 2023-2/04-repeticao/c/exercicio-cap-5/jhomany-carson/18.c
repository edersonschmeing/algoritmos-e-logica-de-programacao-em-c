/*18) Faça um programa que receba um número inteiro maior do que 1 e
verifique se o número fornecido é primo ou não.*/

#include <stdio.h>
#include <math.h>

int main() {

    int n, primo;
    float raiz, resto;

    do 
    {
      printf("\nDigite o numero maior que 0 que gostaria de saber se eh primo: ");
      scanf(" %d", &n);    
    } 
    while (n <= 0);

    raiz = sqrt(n);

    if (n == 1 || n == 2)
    {
        printf("\nO numero eh primo");
        return 0;
    }
    

    for (int i = 2; i <= raiz ; i++)
    {
        resto = n % i;
        
        if (resto == 0)
        {
            primo = 1;
            printf("\no numero nao eh primo");
            break;
        } 
        else 
        {
            primo = 0;
        }
    }

    if (primo == 0)
    {
        printf("\nO numero eh primo");
    }
    
    printf("\n ");    

    return 0;
}