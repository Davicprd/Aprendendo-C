#include <stdio.h>

int main()
{
    int d, i, f = 1;
    puts("Digite um número para ser fatorado: \n");
    scanf("%d", &d);
    for (i = 1; i <= d; i++)
    {
        f = f * i;
    }
    printf("O número fatorado equivale a %d\n", f);
    return 0;
}