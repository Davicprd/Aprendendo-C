#include <stdio.h>

int main()
{
    int n, m, i, Mu;
    puts("Digite um número para a Tabuada:");
    scanf("%d", &n);
    puts("Digite até que número deseja que vá a Tabuada:");
    scanf("%d", &m);
    for (i = 1; i <= m; i++)
    {
        Mu = n * i;
        printf("%d X %d = %d\n", n, i, Mu);
    }
}