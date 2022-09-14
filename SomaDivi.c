#include <stdio.h>

int main()
{
    int s, n, n1;
    int v1, v2, i, c = 0;
    float n2;

    n = ((200 - 100) + 5) / 5;
    s = (100 + 200) * (n / 2);
    printf("A soma dos números divisíveis por 5 entre 100 e 200 é de: %d", s);

    for (i = 0; i <= 100; i++)
    {
        n1 = i / 3;
        n2 = ((float)i) / 3;
        if (n1 == n2)
        {
            c++;
        }
    }
    printf("\nA quantidade de números divisíveis por 3 entre 0 e 100 é de :%d", c);
}