#include <stdio.h>

int soma (int v[], int n) {
    if ( n == 0 )
        return v[0] ;
    else
        return v[n] + soma (v, n - 1);
}

int main() {
   
    int vet [5] = { 4 , 3 , 6 , 2 , 5 };

    printf ("%d\n" , soma( vet, 5 - 1));
}