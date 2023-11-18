#include <stdio.h>

int fatorial(int valor){
    
    if(valor == 1 ){
        return 1;
    }

    printf("%d * ", valor);
    int fat = fatorial(valor - 1); 
    int resultado = valor * fat; 
    return resultado;  
}

int main() {
    
    // 4 * 3 * 2 * 1 => 4! é : 24
    int valor = 4;

    //printf("Informe um valor: ");
    //scanf("%d", &valor);
    
    int resultado = fatorial(valor);
    printf("1 => ");
    printf("%d! é : %d\n", valor, resultado);
    return 0;
    
}