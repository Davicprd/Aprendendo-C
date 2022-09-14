#include <stdio.h>

int main()
{
    int b, a;
    float d;
    puts("Digite um número: \n");
    scanf("%d", &b);
    do
    {
        puts("Digite outro número: \n");
        scanf("%d", &a);
    } while (a == 0);
    d = (float)b / a;

    printf("O valor da divisão é %.2f", d);

    return 0;
}