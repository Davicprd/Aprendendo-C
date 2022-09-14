#include <stdio.h>
#include <windows.h>

int main()
{
    char e;
    int v = 0;
    int cp = 0, cr = 0, cn = 0, cb = 0, tc = 0;
    float pp = 0, pr = 0, pb = 0, pn = 0;
Inicio:
    while (v >= 0)
    {
    Votacao:
        puts("\n 5-Paulo // 7-Renata // 0-Voto em Branco // Qualquer outrA porcentagem  Voto Nulo\n-------------------------------------\nDigite um número: ");
        scanf("%d", &v);

        printf("Tem certeza que quer escolher A porcentagem %d ?\n-------------------------------------------\ns-Para Sim//n-Para Não:\n", v);
        scanf(" %c", &e);

        if (e == 's')
        {
            printf("\nEscolheu sim\n--------------------------------------\n");
            if (v < 0)
            {
                goto Inicio;
            }
            switch (v)
            {
            case 5:
                (cp++);
                printf("\nPárabens, Voto para Paulo!\n------------------------------\n");
                break;
            case 7:
                (cr++);
                printf("\nPárabens, Voto para Renata!\n------------------------------\n");
                break;
            case 0:
                (cb++);
                printf("\nVoto em Branco!\n------------------------------\n");
                break;
            default:
                (cn++);
                printf("\nVoto Nulo!\n------------------------------\n");
                break;
            }
        }
        if (e == 'n')
        {
            printf("\nEscolheu não\n-------------------------------------\n");
            goto Votacao;
        }
    }
    tc = (cp + cn + cb + cr);
    if (cp != 0)
    {
        pp = 100 * ((float)cp / tc);
    }
    if (cr != 0)
    {
        pr = 100 * ((float)cr / tc);
    }
    if (cn != 0)
    {
        pn = 100 * ((float)cn / tc);
    }
    if (cb != 0)
    {
        pb = 100 * ((float)cb / tc);
    }
    printf("A porcentagem de votos para Paulo foi de %.1f\n", pp);
    printf("A porcentagem de votos para Renata foi de %.1f\n", pr);
    printf("A porcentagem de votos em Branco foi de %.1f\n", pb);
    printf("A porcentagem de votos nulos foi de %.1f\n", pn);
    return 0;
}