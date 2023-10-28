#include <stdio.h>

void funcao_recursiva(int entrada){
    if(entrada > 0) {
        printf("%d\n", entrada);
        funcao_recursiva(--entrada);
    }
}

int main(){
    funcao_recursiva(5);
    return 0;
}