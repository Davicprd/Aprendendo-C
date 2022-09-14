#include <stdio.h>

int main()
{
    int d, i = 15, q;
    float d2;
    for (i = 15; i <= 90; i++)
    {
        d = (i / 4);
        d2 = ((float)i / 4);
        if (d == d2)
        {
            q = i * i;
            printf("\nO quadrado do número %d é %d", i, q);
        }
    }
}