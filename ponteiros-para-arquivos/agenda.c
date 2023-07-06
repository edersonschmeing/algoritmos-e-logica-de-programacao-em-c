#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open CSV file
    FILE *file = fopen("agenda.csv", "a");
    if (!file)
    {
        return 1;
    }

    char nome[30];
    printf("Nome: ");
    scanf("%s", nome);

    printf("\nNúmero: ");
    char numero[15];
    scanf("%s", numero);
     
    // Print to file
    fprintf(file, "%s,%s\n", nome, numero);

    // Close filef
    fclose(file);
}