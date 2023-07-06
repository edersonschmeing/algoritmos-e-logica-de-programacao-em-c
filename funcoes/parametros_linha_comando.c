
#include <stdio.h>
#include <string.h>

//int main( void );
//int main( int argc, char *argv[ ]); 
//int main( int argc, char **argv); 
//int main( int argc, char *argv[ ], char *envp[ ] );
//int main( int argc, char **argv, char **envp );

int main(int argc, char *argv[])
{   
    //imprime parâmetros da linha de comando
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
     
    //imprime parâmetros da linha de comando
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    } 

    // Imprime os caracteres de um array de char 
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
        printf("\n");
    }
}