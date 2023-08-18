/*11) Leia o valor do raio de um círculo. Calcule e imprima a área do
círculo correspondente. A área do círculo é A = π* raio2, sendo π =
3.141592.
*/

#include <stdio.h>

int main() {

const float PI = 3.14;
float area, raio;

    printf("\nInforme o valor do raio: ");
    scanf(" %f", &raio);

    area = PI * (raio * raio);

    printf("\nA area do seu circulo eh: %.2f", area);

    return 0;
}