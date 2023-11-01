/*14) Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. A função
deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] + B[i].*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *SomarVetor(int *a, int *b, int n) {

    int * c = (int *) malloc(n * sizeof(int));

    if (c == NULL) {
        
        printf("\nErro ao alocar o vetor c dinamicamente.");
        exit(1);
    }
    
    for (int i = 0; i < n; i++) {
        
        c[i] = a[i] + b[i];
    }
    
    return c;
}

int main() {

    int *a, *b, *c, n;

    printf("\nDigite o tamanho dos vetores \"a\" e \"b\": ");
    scanf(" %d", &n);

    a = (int *) malloc(n * sizeof(int));
    b = (int *) malloc(n * sizeof(int));

    if (a == NULL || b == NULL) {
        
        printf("\nErro ao alocar A e B dinamicamente.");
        return 1;
    }
    
    printf("\nPreenchendo o vetor \"a\" (sequencial de 0 a %d  * 2): ", n);

    for (int i = 0; i < n; i++) {

        a[i] = i * 2;
        
        printf("%3d ", a[i]);
        
        sleep(1);      
    }
    
    printf("\n\nPreenchendo o vetor \"b\" (sequencial de 0 a %d  * 3): ", n);

    for (int i = 0; i < n; i++) {

        b[i] = i * 3;
        
        printf("%3d ", b[i]);
        
        sleep(1);  
    }
        
    c = SomarVetor(a, b, n);

    printf("\n\nPreenchendo o vetor \"c\" (sequencial somando a + b): ");

    for (int i = 0; i < n; i++) {
        
        printf("%3d ", c[i]);
    }

    printf(" \n\n");

    free(a);
    free(b);
    free(c);

    return 0;
}