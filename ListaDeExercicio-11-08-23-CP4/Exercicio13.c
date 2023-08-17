/*13) Faça um programa que mostre ao usuário um menu com
quatro opções de operações matemáticas (as operações básicas,
por exemplo). O usuário escolhe uma das opções, e o seu
programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.*/

#include <stdio.h>

int main() {

char operador;
double num1, num2, res;
int operacaoValida = 0;

//Loop onde válida se o operador escolhido é valido 
// se sim, segue com o script, se não continua solicitando um operador válido
    while(!operacaoValida) {
        
//solicita operação aritmética que será utilizada
        printf("Qual operacao voce deseja realizar? ( /, *, -, +): \n");
        scanf(" %c", &operador);
        
//Verificar se a operação é válida
        switch (operador) {
            case '/':
            case '*':
            case '-':
            case '+':
                operacaoValida = 1;
                break;
            default:
                printf("Operacao invalida, Tente novamente.\n\n");
        }
    }

//Solicitar ao usuário dois números:
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

//Realizar o calculo baseado na operação escolhida
    switch (operador) {
        case '/':
//veriica se o divisor é diferente de 0
            if (num2 != 0) {
                res = num1 / num2;
            } else {
                printf("Erro, divisao por zero nao permitida.\n");
                return 1;
            }
            break;
        case '*':
            res = num1 * num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '+':
            res = num1 + num2;
            break;    
    }

//Exibir o resultado:
    printf("O resultado e: %.2lf", res);
    return 0;
}