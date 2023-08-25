/* 2) Crie um programa que leia do teclado seis valores inteiros
 e em seguida mostre na tela os valores lidos na ordem inversa. */

 #include <stdio.h>

 int main(){
    
    int array[6]; //criar a variavel do array

    
    for (int i = 0; i < 6; i++) { // laco para perguntar ao usuario os valores a salvar no array

        printf("\nDigite um valor para a posiçao %d: ", i); //Escreve no console pedindo um numero para a posicao
        scanf(" %d", &array[i]); //Le o valor digitado pelo usuario e armazena no indice do array
    }

    for (int i = 5; i >= 0; i--) // laco de repeticao para percorrer o array comecando pelo numero mais alto do indince do array
    {
        printf("Valor na posicao %d: %d \n", i, array[i]); // Imprime no console o valor armazenado no indice
    }
    
    /* usamos o [i] para percorrer o array dentro do laco para passar por todos os indices */

    
    return 0;

 }