int main()
{
    int u, d, c, m, dm, n = 1;
    while (n <= 9999)
    {
        puts("Digite um número: \n");
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
    printf("Unidade = %d\nDezena = %d\nCentena = %d\nMilhar = %d\nDezena de Milhar = %d", u, d, c, m, dm);
    if (u == dm && d == m)
    {
        printf("\n%dé um palíndromo!!", n);
    }
    else
    {
        printf("\n%d não é um palíndromo!!", n);
    }
}
