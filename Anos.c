#include <stdio.h>

int main(){
int j=150,p=110,a=0;
while(p<=j)
{
j=j+2;
p=p+3;
a=a + 1;
}
printf("A quantidade de anos necessárias para José ser menor que Pedro são %d anos",a);
return 0;
}
