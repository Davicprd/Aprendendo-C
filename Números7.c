int main()
{
    int u, d, c, m, dm, n = 1, con = 0;
    while (n <= 9999)
    {
        puts("Digite um número de 5 dígitos: \n");
        scanf("%d", &n);
    }
    dm = n / 10000;
    m = n % 10000;
    m = m / 1000;
    c = n % 1000;
    c = c / 100;
    d = n % 100;
    u = d % 10;
    d = d / 10;
    if (u == 7)
    {
        con++;
    }
    if (d == 7)
    {
        con++;
    }
    if (c == 7)
    {
        con++;
    }
    if (m == 7)
    {
        con++;
    }
    if (dm == 7)
    {
        con++;
    }
    printf("A quantidade de 7 no número %d é de: %d", n, con);
}
