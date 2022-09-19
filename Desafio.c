#include <stdio.h>

int main()
{
    unsigned char a = 0b00000000;
    int var ;
    int comp = 0b00000001;
    int ran = 0b00000000;
    int op = 0;
    srand(time(NULL));
in:
do{
    puts("Opçôes:\n1.Ocupar armário\n2.Liberar armário\n3.Sair");
    scanf("%d", &var);}while(var > 3);

    for (comp = 0b00000001; comp <= 0b10000000;)
    {
        if ((a & comp) == comp)
        {
            ran = ran | comp;
        }
        comp = comp << 1;
    }
    comp = 0b00000001;
    if (var == 1)
    {
        while (op != 1 && op != 2 && op != 4 && op != 8 && op != 16 && op != 32 && op != 64 && op != 128)
        {
        ocu:
            op = rand() % 128 + 1;
        }
        if ((op & ran) == 0)
        {
            a = a | op;
            ran = a;
        }
        else
        {
            if (a == 255)
            {
                puts("\nTodos os armários estão ocupados!\n");
                goto in;
            }
            else
            {
                goto ocu;
            }
        }
        switch (op)
        {
        case 1:
            puts("O armário 1 foi ocupado");
            goto in;
        case 2:
            puts("O armário 2 foi ocupado");
            goto in;
        case 4:
            puts("O armário 3 foi ocupado");
            goto in;
        case 8:
            puts("O armário 4 foi ocupado");
            goto in;
        case 16:
            puts("O armário 5 foi ocupado");
            goto in;
        case 32:
            puts("O armário 6 foi ocupado");
            goto in;
        case 64:
            puts("O armário 7 foi ocupado");
            goto in;
        case 128:
            puts("O armário 8 foi ocupado");
            goto in;
        }
    }
    if (var == 2)
    {
        while (op != 1 && op != 2 && op != 4 && op != 8 && op != 16 && op != 32 && op != 64 && op != 128)
        {
        des:
            op = rand() % 128 + 1;
        }
        if ((op & ran) != 0)
        {
            a = a & ~(op);
            ran = a;
        }
        else
        {
            if (a == 0)
            {
                puts("\nTodos os armários estão desocupados!\n");
                goto in;
            }
            else
            {
                goto des;
            }
        }
        switch (op)
        {
        case 1:
            puts("O armário 1 foi desocupado");
            goto in;
        case 2:
            puts("O armário 2 foi desocupado");
            goto in;
        case 4:
            puts("O armário 3 foi desocupado");
            goto in;
        case 8:
            puts("O armário 4 foi desocupado");
            goto in;
        case 16:
            puts("O armário 5 foi desocupado");
            goto in;
        case 32:
            puts("O armário 6 foi desocupado");
            goto in;
        case 64:
            puts("O armário 7 foi desocupado");
            goto in;
        case 128:
            puts("O armário 8 foi desocupado");
            goto in;
        }
    }
    if (var == 3)
    {
        puts("Programa fechado!");
    }
}
