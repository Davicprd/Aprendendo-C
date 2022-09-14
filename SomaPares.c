#include <stdio.h>

int main()
{
    int a1, an, s, n;
    int v1, v2;
    float n2;
    puts("Digite o primeiro número:");
    scanf("%d", &v1);
    puts("Digite o segundo número:");
    scanf("%d", &v2);
    if (v1 > v2)
    {
        an = v1;
        a1 = v2;
    }
    if (v1 < v2)
    {
        an = v2;
        a1 = v1;
    }
    n = ((an - a1) + 2) / 2;
    s = ((a1 + an) * (n)) / 2;
    printf("A soma dos números pares de %d a %d é de: %d", a1, an, s);
}