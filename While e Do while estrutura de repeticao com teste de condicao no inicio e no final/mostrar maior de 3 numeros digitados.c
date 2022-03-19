#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont, num, maior;
maior = 0;
cont=1;
while(cont<=3)
  { 
    printf("digite um numero: ");
    scanf("%d",&num);
    if(num>maior)
    {maior=num;}
    cont++;
  }    
    printf("o maior numero digitado foi %d",maior);
    return 0;
}
