#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//camparadores

int compare_ints(const void * a, const void * b) {
	return *(int*)a - *(int*)b;
}

int compare_str(const void * str1, const void * str2){
    return strcmp((char*) str1,(char*) str2);
}

int compare_longs(const void * long1, const void * long2){
	return (*(long *) long1 - *(long *) long2);
}

int compare_floats(const void * float1, const void * float2){
	return (*(float *) float1 - *(float *) float2);
}

// Date format: dd-mm-yyyy
int compare_dates(const  void * date1,const void * date2){

	char * d1 = (char*) date1;
	char * d2 = (char*) date2;

	if(!strcmp(date2,"--"))
		return 0;

	char *token;
	int d[2],m[2],y[2];

	for(int i=0;i<2;i++){
		int t=0;
		char buffer[20];
		if(i==0) strcpy(buffer,d1);
		else     strcpy(buffer,d2);

		token = strtok(buffer,"-");
		while(token!=NULL){
			if(t==0)		d[i] = atoi(token);
			else if(t==1)	m[i] = atoi(token);
			else if(t==2)	y[i] = atoi(token);
			token = strtok(NULL,"-");
			t++;
		}
	}

	if(y[0]>y[1])
		return 1;
	else if(y[0]<y[1])
		return -1;
	else{
		if(m[0]>m[1])
			return 1;
		else if(m[0]<m[1])
			return -1;
		else{
			if(d[0]>d[1])
				return 1;
			else if(d[0]<d[1])
				return -1;
			else
				return 0;
		}
	}
}

//camparadores com variáveeis de uma struct 

struct pessoa { 
  int ra;
  char nome[30];
};
typedef struct pessoa Pessoa;   

compare_strucs_pessoa_ra(const void *pessoa1, const void *pessoa2) { 
   Pessoa p1 =  *(Pessoa *) pessoa1;
   Pessoa p2 =  *(Pessoa *) pessoa2;  
   return (p1.ra - p2.ra);
}

compare_strucs_pessoa_nome(const void *pessoa1, const void *pessoa2) { 
   Pessoa p1 =  *(Pessoa *) pessoa1;
   Pessoa p2 =  *(Pessoa *) pessoa2;  
   return strcmp((char*) p1.nome, (char*) p2.nome);
}


//odenação quick sort

// função que troca posições no array
void trocar(void **array, int pos1, int pos2){

	void * temp = array[pos1];
	array[pos1] = array[pos2];
	array[pos2] = temp;

}

int particionar(void **array, int p, int r, int (*compare)(const void*, const void*)) { 

	void *value = array[r];	// elemento pivô
	int i = p - 1;

	for(int j = p;j < r; j++){		// com este loop, os valores são separados em 2 partições, as maiores e as menores do pivô
		if(compare(array[j], value) <= 0) {
			i = i + 1;
			trocar(array, i, j);	// alterar as posições dos elementos antes e depois do elemento ordenado
        }
	}
	trocar(array, i + 1, r);		// mova o elemento inicial para sua posição final

	return i + 1;
}

void quick_sort(void **array, int p, int r, int (*compare)(const void*, const void*)){

	if(p < r){
		int q = particionar(array, p, r, compare);	/* pivô */
		quick_sort(array, p, q - 1, compare);
		quick_sort(array, q + 1, r, compare);
	}
}


void teste_int() { 
    
    int quantidade = 7;
    
    int** array = malloc(quantidade * sizeof(int*));
    
    for (int i = quantidade,j=0; i > 0; i--,j++) {
		array[j] = malloc(sizeof(int));
	}
    
    int int0 = 23;
    int int1 = 4;
    int int2 = 67;
    int int3 = -8;
    int int4 = 90;
    int int5 = 54;
    int int6 = 21;

    *array[0] = int0;
    *array[1] = int1;
    *array[2] = int2;
    *array[3] = int3;
    *array[4] = int4;
    *array[5] = int5;
    *array[6] = int6;

    printf("Sem ordenar\n");
    for(int i = 0; i < quantidade; i++)
        printf("%2d - ", *array[i]);
    printf("\n");
    
    quick_sort((void**)array, 0, quantidade - 1, compare_ints);

    printf("Ordenado\n");
    for(int i = 0; i < quantidade; i++)
        printf("%2d - ", *array[i]);
    printf("\n");

    for(int i = 0; i < quantidade; i++)
        free(array[i]);
    free(array);

}

void teste_str() { 
    
    int quantidade = 7;

    char** array = malloc(quantidade * sizeof(char*));
    for (int i = quantidade, j=0; i > 0; i--,j++) {
		array[j] = malloc(20 * sizeof(char));
	}
    strcpy(array[0], "Cachorro");
    strcpy(array[1], "Dinossauro");
    strcpy(array[2], "Gurila");
    strcpy(array[3], "Ema");
    strcpy(array[4], "Avestrus");
    strcpy(array[5], "Borboleta");
    strcpy(array[6], "Foca");

    printf("Sem ordenar\n");
    for(int i = 0; i < quantidade; i++)
        printf("%2s - ", array[i]);
    printf("\n");
    

    quick_sort((void**)array, 0, quantidade - 1, compare_str);
 
    printf("Ordenado\n");
    for(int i = 0; i < quantidade; i++)
        printf("%2s - ", array[i]);
    printf("\n");

    for(int i = 0; i < quantidade; i++)
        free(array[i]);
    free(array);

}

void teste_struct() {  
   
    int quantidade = 6;

    Pessoa **pessoas = (Pessoa**) malloc(quantidade * sizeof(Pessoa**));

    Pessoa *pessoa01 = (Pessoa*) malloc(sizeof(Pessoa*));
    pessoa01->ra = 88;
    strcpy(pessoa01->nome, "Ederson");
    pessoas[0] = pessoa01;
   
    Pessoa *pessoa02 = (Pessoa*) malloc(sizeof(Pessoa*));
    pessoa02->ra = 33;
    strcpy(pessoa02->nome, "Marcelo");
    pessoas[1] = pessoa02;
   
    Pessoa *pessoa03 = (Pessoa*) malloc(sizeof(Pessoa*));
    pessoa03->ra = 99;
    strcpy(pessoa03->nome, "Carlos");
    pessoas[2] = pessoa03;
   
    Pessoa *pessoa04 = (Pessoa*) malloc(sizeof(Pessoa*));
    pessoa04->ra = 29;
    strcpy(pessoa04->nome, "Jhon");
    pessoas[3] = pessoa04;
   
    Pessoa *pessoa05 = (Pessoa*) malloc(sizeof(Pessoa*));
    pessoa05->ra = 25;
    strcpy(pessoa05->nome, "Nicole");
    pessoas[4] = pessoa05;
   
    Pessoa *pessoa06 = (Pessoa*) malloc(sizeof(Pessoa*));
    pessoa06->ra = 23;
    strcpy(pessoa06->nome, "Matheus");
    pessoas[5] = pessoa06;

    Pessoa *pessoa07 = (Pessoa*) malloc(sizeof(Pessoa*));
    pessoa07->ra = 18;
    strcpy(pessoa07->nome, "Gabriel");
    pessoas[6] = pessoa07; 

    printf("Sem ordenar\n");
    for(int j = 0; j < quantidade; j++) {
       printf("%d - %s \n", pessoas[j]->ra, pessoas[j]->nome);
    }
    printf("\n");

    quick_sort((void**)pessoas, 0, quantidade - 1, compare_strucs_pessoa_nome); 

    printf("Ordenado por nome\n");
    for(int j = 0; j < quantidade; j++) {
       printf("%d - %s \n", pessoas[j]->ra, pessoas[j]->nome);
    }
    printf("\n"); 

    //ordenado por ra
    quick_sort((void**)pessoas, 0, quantidade - 1, compare_strucs_pessoa_ra); 
    
    printf("Ordenado por ra\n");
    for(int j = 0; j < quantidade; j++) {
       printf("%d - %s \n", pessoas[j]->ra, pessoas[j]->nome);
    }
    printf("\n"); 


    for(int i = 0; i < quantidade; i++)
       free(pessoas[i]);
    free(pessoas);

}

int main() {
    
    teste_int();

    printf("\n"); 

    teste_str(); 

    printf("\n");

    teste_struct();
   
    return 0;
}
