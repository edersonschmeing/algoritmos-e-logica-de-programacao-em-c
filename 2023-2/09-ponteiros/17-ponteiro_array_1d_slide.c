#include <stdio.h>

int main() { 

    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;
    int i;

    /*usando indice no array*/    
    printf("usando indice no array. \n"); 
    for (i = 0; i < 5; i++) { 
        printf("%d\n", vet[i]);
    }

    /*usando indice no ponteiro*/    
    printf("usando indice no ponteiro. \n"); 
    for (i = 0; i < 5; i++) { 
        printf("%d\n", p[i]);
    }

    /*usando operação com ponteiro*/
    printf("usando operação com ponteiro.\n"); 
    for (i = 0; i < 5; i++) { 
        printf("%d\n", *(p+i));
    } 
   
    return 0;

}