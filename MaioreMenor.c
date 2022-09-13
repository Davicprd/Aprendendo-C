#include <stdio.h>

int main(){
int V,Ma,Me;
puts("Digite um número: \n");
scanf("%d",&Ma);
Me = Ma;
do{
puts("\nDigite outro número: \n");
scanf("%d",&V);
if(Ma<V){ Ma= V;}
printf("O maior número é: %d\n",Ma);   
if(Me>V){ Me= V;}
printf("O menor número é: %d\n",Me); 
}while (V!=0 );
return 0;
}