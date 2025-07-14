#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int answer = get_int("Qual o tamanho da piramide? ");

    while (answer < 1 || answer > 8)
    {
        answer = get_int("Qual o tamanho da piramide? ");
    }

    for (int line = 1; line <= answer; line++)
    {
        for (int j = 1; j <= line; j++)
        {
            printf("🧱");
        }
        printf("\n");
    }
}
