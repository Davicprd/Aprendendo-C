#include <stdio.h>

int main()
{
int i,i2,i3;
int d,q,Ma,Me;
float d2;
puts("Digite um número para iniciar a sequência:\n");
scanf("%d",&i2);
puts("\nDigite um número para terminar a sequência:\n");
scanf("%d",&i3);
if(i3>i2){Ma=i3;Me=i2;}
if(i3<i2){Ma=i2;Me=i3;}
for (i = Me; i <= Ma; i++){
d = ( i / 4);
d2 = ((float)i / 4);
if (d == d2){
q = i * i;
printf("\nO quadrado do número %d é %d", i, q);
}
}
}