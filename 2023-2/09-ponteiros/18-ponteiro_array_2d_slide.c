#include <stdio.h>

int main() { 

    int mat[2][2] = {{1, 2}, {3, 4}};
    int i, j;

    /*usando indice no array 2d*/    
    printf("usando indice no array 2d.\n"); 
    for (i = 0; i < 2; i++) {   
        for (j = 0; j < 2; j++)  
            printf("%d\n", mat[i][j]);
    }

    /*usando  ponteiro*/
    int *p = &mat[0][0];
    printf("usando ponteiro.\n"); 
    for (i = 0; i < 4; i++) { 
        printf("%d\n", *(p+i));
    } 
   
    return 0;

}