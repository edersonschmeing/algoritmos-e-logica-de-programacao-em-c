#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void * a, const void * b);
int compare_str(const void * str1, const void * str2);
int compare_longs(const void * long1, const void * long2);
int compare_floats(const void * float1, const void * float2);

// Date format: dd-mm-yyyy
int compare_dates(const  void * date1,const void * date2);

int compare_strucs_aluno_nome(const void *aluno1, const void *aluno2); 
int compare_strucs_aluno_ra(const void *aluno1, const void *aluno2); 
