#include <stdio.h>


int main() {


    int mat[3][3];

    int i, j = 0; 
    printf("\n");
    for (int i = 0; i < 3; i++ ) {
        //printf("\n [%d - ", i);
        for (j = 0; j < 3; j++) {
           printf("[%d  - %d] ", i, j);
           mat[i][j] = 100 * j + i;
        }  
        printf("\n");       
    }
    printf("\n");
    
    for (int i = 0; i < 3; i++ ) {
        //printf("\n [%d - ", i);
        for (j = 0; j < 3; j++) {
           printf("%d ", mat[i][j]);
        }  
        printf("\n");       
    }
    printf("\n");
    
    
    
    
    
    
    /*mat[0][0] = 10;
    mat[0][1] = 5;
    mat[1][1] = 6;
    mat[1][2] = 20; */

    //printf("%d\n", mat[1][1]);

    return 0;
}