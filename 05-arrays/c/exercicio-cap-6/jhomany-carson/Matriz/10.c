/*10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em seguida, calcule e
escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na
prova 2 e o número de alunos cuja pior nota foi na prova 3.*/

#include <stdio.h>

int main() {

    int m[10][3], menor = 0, p1 = 0, p2 = 0, p3 = 0; // coluna 1 = p1 | coluna 2 = p2 | coluna 3 = p3

    for (int i = 0; i < 3; i++) {
        
        for (int j = 0; j < 3; j++) {
            
            printf("\nDigite a nota do aluno %d referente a prova %d: ", i +1, j +1);
            scanf(" %d", &m[i][j]);
        }    
    }

    for (int i = 0; i < 3; i++) {
        
        for (int j= 0; j < 3; j++) {
            
            printf("%d ", m[i][j]);
            if (j == 0){

                if (m[i][j] < m[i][j+1] && m[i][j] < m[i][j+2]) {
                    
                    p1++;
                }
                
            }
            if (j == 1){

                if (m[i][j] < m[i][j] && m[i][j - 1] < m[i][j + 1]) {
                    
                    p2++;
                }
                
            }    
            if (j == 2){

                if (m[i][j] < m[i][j-2] && m[i][j] < m[i][j-1]) {
                    
                    p3++;
                }
            }        
        }
        printf("\n");
    }
    
    if (p1 > p2 && p1 > p3) {
        
        printf("\nAs piores notas foram na p1 tendo mais alunos com notas ruins: %d alunos", p1);
    }
    else if (p2 > p1 && p2 > p3) {
        
        printf("\nAs piores notas foram na p2 tendo mais alunos com notas ruins: %d alunos", p2);
    }
    else if (p3 > p1 && p3 > p1) {
        
        printf("\nAs piores notas foram na p3 tendo mais alunos com notas ruins: %d alunos", p3);
    } else if ( p1 == p2 || p2 == p3 || p3 == p1) {

        printf("\nTivemos o mesmo numero de notas ruins entre as provas, segue a quantidade de alunos de acordo cada prova: \n\n p1: %d\np2: %d\np3: %d", p1, p2, p3 );
    }

    return 0;
}