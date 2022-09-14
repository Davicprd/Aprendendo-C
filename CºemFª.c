#include <stdio.h>

int main()
{
    int c, i;
    float f;
    for (i = 10; i <= 100; i = i + 10)
    {
        c = i;
        f = ((float)c * 1.8) + 32;
        printf(" \n%dº celsius equivalem a %.1fº em fahrenheit.",c,f);
    }
}