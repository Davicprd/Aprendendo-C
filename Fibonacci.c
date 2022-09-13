#include <stdio.h>

int main()
{
    int f, i = 1, t = 1, t2 = 1, t3;
    puts("Digite o número do termo da sequência de Fibonacci desejado: \n");
    scanf("%d", &f);
    printf("\n---\n1\n");
    for (i = 1; i <= f - 1; i++)
    {
        printf("%d\n", t);
        t3 = t + t2;
        t2 = t;
        t = t3;
    }
}