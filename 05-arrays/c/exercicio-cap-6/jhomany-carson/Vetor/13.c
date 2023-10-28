/*13) Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números
deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um
número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que cada valor
digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram
fornecidos. Exiba na tela o vetor final que foi digitado.*/

#include <stdio.h>

int main() {

    int vet[10];
    
       
    for(int i = 0; i < 10; i++){
            
        printf("\nDigite o valor %d do vetor: ", i+1);
        scanf(" %d", &vet[i]);

        //Se não for o primeiro indice a ser informado ai faço a validação
        if( i > 0) {

            //Validar se o numero atual informado ja existe nas posições anteriores
            for(int j = i-1; j >= 0; j--){
                    
                if (vet[i] == vet[j]) {
                            
                    printf("\nValor ja informado, digite novamente\n");
                    i--; //decrementei o meu i para que eu possa ditgitar novamente o valor naquela posição no qual o numero foi informado repetidamente.
                    break;
                } 
            }
        }
    }

    printf("\n\nSegue o vetor sem repeticoes: ");

    for (int i = 0; i < 10; i++) {

        if ( i < 9) {
        
            printf("%d, ", vet[i]);
        } else {

            printf("%d.", vet[i]);
        }
    }
    

    return 0;
}