#include <stdio.h>

int main()
{
    int Ma, Me, n, i;
    int v1, v2, c = 0;
    float n2;
    puts("Digite o primeiro número:");
    scanf("%d", &v1);
    puts("Digite o segundo número:");
    scanf("%d", &v2);
    if (v1 > v2)
    {
        Ma = v1;
        Me = v2;
    }
    else
    {
        Ma = v2;
        Me = v1;
    }
    for (i = Me; i <= Ma; i++)
    {
        n = i / 3;
        n2 = ((float)i) / 3;
        if (n == n2)
        {
            c++;
        }
    }
    printf("A quantidade de números divisíveis por 3 é de :%d", c);
}