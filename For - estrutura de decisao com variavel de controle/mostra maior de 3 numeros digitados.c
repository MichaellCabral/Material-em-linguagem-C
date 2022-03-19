#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont, num, maior;
maior = 0;
for (cont=1;cont<=3;cont++)
  { 
    printf("digite um numero: ");
    scanf("%d",&num);
    if(num>maior)
    {maior=num;}
  }    
    printf("o maior numero digitado foi %d",maior);
    return 0;
}
