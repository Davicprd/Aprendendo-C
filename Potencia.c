#include <math.h>
#include <stdio.h>

int main()
{
    int p, i;
    for (i = 0; i <= 7; i++)
    {
        p = pow(3, i);
        printf("O valor de 3 elavado a %d é %d\n-----------------------------------\n", i, p);
    }
}