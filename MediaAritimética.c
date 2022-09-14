#include <stdio.h>

int main()
{
    int i, Ma, Me;
    int v1, v2;
    float n=0;
    puts("Digite o primeiro número:");
    scanf("%d", &v1);
    puts("Digite o segundo número:");
    scanf("%d", &v2);
    if (v1 > v2)
    {
        Ma = v1;
        Me = v2;
    }
    if (v1 < v2)
    {
        Ma = v2;
        Me = v1;
    }
    for (i = Me; i <= Ma; i++)
    {
        n = n + i;
    }
    n = n / (Ma + 1);
    printf("A média aritmética de %d a %d é de %.2f", Me, Ma, n);
    return 0;
}