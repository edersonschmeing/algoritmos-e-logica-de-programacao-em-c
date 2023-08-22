/*11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada
elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20
elementos. Imprima os dois conjuntos de números.*/

#include <stdio.h>

int main() {

    int conj1[10], conj2[10];

    for(int i = 0; i < 10; i++) {
        
        printf("\nDigite o valor da posicao %d do primeiro conjunto: ", i+1);
        scanf(" %d", &conj1[i]);

        conj2[i] = conj1[i] * conj1[i];
    }

    printf("Os valores informados ao qudrado sao: ");
    for (int i = 0; i < 10; i++) {
        
        if(i < 9) {

            printf("%d, ", conj2[i]);
        } else {
 
            printf("%d.", conj2[i]);
        }
    }
    
    return 0;
}