#include <stdio.h>

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233
//parametro valor é a quantidade de elementos na sequencia

int fibonacci(int valor){
    if(valor == 0 || valor == 1){
       return valor;
    } else {
       return fibonacci(valor - 1) + fibonacci(valor - 2);
    }
}

int main() {
/*
    int valor;
    printf("Informe um valor: ");
    scanf("%d", &valor);
    printf("%d", fibonacci(valor));        
*/ 
    printf("%d \n", fibonacci(8));        
    printf("%d \n", fibonacci(10));        
    printf("%d \n", fibonacci(13));        

    return 0;
}