/* 3) Faça um programa que leia cinco valores e os armazene em um vetor. 
Em seguida, mostre todos os valores lidos juntamente com a média dos valores.*/

#include <stdio.h>

int main() {

    int array[6]; //declara a variavel do array
    float soma = 0; //declara a variavel e passa o valor de 0
    float media; // declara a variavel onde vai receber a media
    
    for (int i = 0; i < 6; i++) { // laco para perguntar ao usuario os valores a salvar no array

        printf("\nDigite um valor para a posiçao %d: ", i); //Escreve no console pedindo um numero para a posicao
        scanf(" %d", &array[i]); //Le o valor digitado pelo usuario e armazena no indice do array

        soma += array[i];
    }

    media = soma / 6; //atribui a variavel media o valor da soma dividido pelo numero de indices no array
    printf("%.2f", media); // imprime a media

    // usamos float para obter numeros nao inteiros
    // passamos %.2f para imprimir apenas dois numeros depois do ponto com o float
    return 0;
}