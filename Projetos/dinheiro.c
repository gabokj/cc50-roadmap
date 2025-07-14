#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float troco;

    // Solicita valor positivo
    do
    {
        troco = get_float("Troco devido: ");
    } while (troco < 0);

    // Converte para centavos
    int centavos = round(troco * 100);

    // Contadores de moedas
    int moedas25 = 0, moedas10 = 0, moedas5 = 0, moedas1 = 0;

    // Moedas de 25 centavos
    while (centavos >= 25)
    {
        centavos -= 25;
        moedas25++;
    }

    // Moedas de 10 centavos
    while (centavos >= 10)
    {
        centavos -= 10;
        moedas10++;
    }

    // Moedas de 5 centavos
    while (centavos >= 5)
    {
        centavos -= 5;
        moedas5++;
    }

    // Moedas de 1 centavo
    while (centavos >= 1)
    {
        centavos -= 1;
        moedas1++;
    }

    // Exibe o resultado
    printf("\nTotal de moedas usadas:\n");
    if (moedas25 > 0)
        printf("%i moeda(s) de 25 centavos\n", moedas25);
    if (moedas10 > 0)
        printf("%i moeda(s) de 10 centavos\n", moedas10);
    if (moedas5 > 0)
        printf("%i moeda(s) de 5 centavos\n", moedas5);
    if (moedas1 > 0)
        printf("%i moeda(s) de 1 centavo\n", moedas1);

    int total_moedas = moedas25 + moedas10 + moedas5 + moedas1;
    printf("Total de moedas: %i\n", total_moedas);
}
