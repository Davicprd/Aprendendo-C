#include <stdio.h>

int main()
{
    int g = 1, i;
    for (i = 2; i <= 64; i = i * 2)
    {
        g = g + i;
    }
    printf("O somatório de grãos no tabuleiro equivale a %d", g);
}