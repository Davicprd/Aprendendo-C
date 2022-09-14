#include <stdio.h>

int main()
{
    int d;
    puts("Digite um número equivalente a um mês: \n");
    scanf("%d", &d);
    do
    {
        switch (d)
        {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-Feira");
            break;
        case 3:
            printf("Terça-Feira");
            break;
        case 4:
            printf("Quarta-Feira");
            break;
        case 5:
            printf("Quinta-Feira");
            break;
        case 6:
            printf("Sexta-Feira");
            break;
        case 7:
            printf("Sábado");
            break;
        }
        puts("\nDigite outro número: \n");
        scanf("%d", &d);
    } while (d != 0);
    return 0;
}