#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define L 3
#define C 3

int main(){
	int i, j, m[L][C], a_soma = 0, b_soma = 0, c_soma = 0, d_soma = 0, e_soma = 0, f_soma = 0;
	printf("Preencha os dados da Matriz %d X %d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	for(i=0; i < L; i++) {
		for (j = 0; j < C; j++){
			// a. Soma dos elementos da diagonal principal;
			(i == j) ? a_soma += m[i][j] : 0;
			
			// b. Soma dos elementos da diagonal secundária;
			if (j == C - i - 1) b_soma = b_soma + m[i][j];
			
			// c. Soma dos elementos acima da diagonal principal;
			if (j > i) c_soma += m[i][j];
			
			// d. Soma dos elementos abaixo da diagonal principal;
			(j < i) ? d_soma = d_soma + m[i][j] : 0;
			
			// e. Soma dos elementos acima da diagonal secundária;
			(j <= C-i-2) ? e_soma += m[i][j] : 0;
			
			// f. Soma dos elementos abaixo da diagonal secundária;
			if (j >= C-i) f_soma = f_soma + m[i][j];
		
		}
	}

	printf("\n\n  Matriz \n\n");

	for(i=0; i < L; i++) {
		printf("  %i\t[ ", i);
		for (j=0; j < C; j++) {
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