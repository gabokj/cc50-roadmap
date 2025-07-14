#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Pede a altura até ser válida (1 a 8)
    do
    {
        height = get_int("Altura: ");
    } while (height < 1 || height > 8);

    // Loop para cada linha
    for (int line = 1; line <= height; line++)
    {
        // Espaços antes da pirâmide da esquerda
        for (int space = 0; space < height - line; space++)
        {
            printf("    ");
        }

        // Blocos da pirâmide da esquerda
        for (int block = 0; block < line; block++)
        {
            printf("🧱");
        }

        // Espaço no meio
        printf("      ");

        // Blocos da pirâmide da direita
        for (int block = 0; block < line; block++)
        {
            printf("🧱");
        }

        // Quebra de linha
        printf("\n");
    }
}
