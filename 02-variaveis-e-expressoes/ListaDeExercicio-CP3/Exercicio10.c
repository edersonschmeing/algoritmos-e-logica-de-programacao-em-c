/*10) A importância de R$ 780.000,00 será dividida entre três ganhadores de
um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include <stdio.h>

int main() {

float premio = 780000.00; // premio cheio
float g1, g2, g3; //ganhadores
float primeiro = 0.46, segundo = 0.32, terceiro; //premiação por lugar

    printf("\nSegue abaixo a divisao entre os ganhadores de R$780.000,00 do concurso");

    g1 = primeiro * premio;
    premio = premio - g1;

    g2 = segundo * premio;
    premio = premio - g2;

    g3 = premio;

    printf("\nPrimeiro ganhador: R$%.2f\nSegundo ganhador: R$%.2f\nTerceiro ganhador: R$%.2f", g1, g2, g3);
    
    return 0;
}