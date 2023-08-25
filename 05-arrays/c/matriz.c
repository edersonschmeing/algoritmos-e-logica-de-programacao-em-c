#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define LINHA 3
#define COLUNA 3

int main(){
	int i, j; 
	int m[LINHA][COLUNA]; 
	int a_soma = 0; 
	int b_soma = 0; 
	int c_soma = 0; 
	int d_soma = 0; 
	int e_soma = 0; 
	int f_soma = 0;
	
	printf("Preencha os dados da Matriz %d X %d\n", LINHA, COLUNA);
	for(i=0; i < LINHA; i++){
		for (j=0; j < COLUNA; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	for(i=0; i < LINHA; i++) {
		for (j = 0; j < COLUNA; j++){
		
			// a. Soma dos elementos da diagonal principal;
			(i == j) ? a_soma += m[i][j] : 0;
			
			// b. Soma dos elementos da diagonal secundária;
			if (j == COLUNA - i - 1) b_soma = b_soma + m[i][j];
			
			// c. Soma dos elementos acima da diagonal principal;
			if (j > i) c_soma += m[i][j];
			
			// d. Soma dos elementos abaixo da diagonal principal;
			(j < i) ? d_soma = d_soma + m[i][j] : 0;
			
			// e. Soma dos elementos acima da diagonal secundária;
			(j <= COLUNA - i - 2) ? e_soma += m[i][j] : 0;
			
			// f. Soma dos elementos abaixo da diagonal secundária;
			if (j >= COLUNA-i) f_soma = f_soma + m[i][j];
		}
	}

	printf("\n\n  Matriz \n\n");

	for(i=0; i < LINHA; i++) {
		printf("  %i\t[ ", i);
		for (j=0; j < COLUNA; j++) {
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n\n-------------------------\n");
	printf("\t A: %i\n", a_soma);
	printf("\t B: %i\n", b_soma);
	printf("\t C: %i\n", c_soma);
	printf("\t D: %i\n", d_soma);
	printf("\t E: %i\n", e_soma);
	printf("\t F: %i\n", f_soma);

	return 0;
}