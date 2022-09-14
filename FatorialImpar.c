#include <stdio.h>

int main()
{
    int d, i, f = 1;

    for (d = 1; d <= 10; d++)
    {
        if (d / 2 != (float)d / 2)
        {

            for (i = 1; i <= d; i++)
            {
                f = f * i;
            }
            printf("\nO fatorial de %d é igual a %d", d, f);
        }
        f = 1;
    }

    return 0;
}