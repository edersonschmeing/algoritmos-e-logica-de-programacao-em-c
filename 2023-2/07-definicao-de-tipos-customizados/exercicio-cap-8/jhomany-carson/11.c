/*11) Escreva um programa que contenha uma estrutura representando uma data válida. Essa estrutura deve conter os campos dia, mês e
ano. Em seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que
decorreram entre as duas datas.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct Data {
  
    int dia, mes, ano;
}Data;


int ValidarDiasMes(int mes) {

    int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return meses[mes];
}

int CalcularData (Data data) {

    int dia = 0;

    for (int i = 1; i < data.ano; i++) {
        
        dia += 365;
    }

    for (int mes = 1; mes < data.mes; mes++) {
        
        dia += ValidarDiasMes(mes);
    }

    dia += data.dia;

    return dia;
}

int main() {

    Data data1, data2;

    printf("\nDigite o dia da primeira data: ");
    scanf(" %d", &data1.dia);

    printf("\nDigite o mes da primeira data: ");
    scanf(" %d", &data1.mes);

    printf("\nDigite o ano da primeira data: ");
    scanf(" %d", &data1.ano);

    printf("\n======== Registrado ==========\n");

    printf("\nDigite o dia da segunda data: ");
    scanf(" %d", &data2.dia);

    printf("\nDigite o mes da segunda data: ");
    scanf(" %d", &data2.mes);

    printf("\nDigite o ano da segunda data: ");
    scanf(" %d", &data2.ano);

    printf("\n======== Registrado ==========\n");

    int dias1 = CalcularData(data1);
    int dias2 = CalcularData(data2);

    printf("\nO numero de dias entre as duas datas eh: %d\n\n", dias2 - dias1);
    
    return 0;
}