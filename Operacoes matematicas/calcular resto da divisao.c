#include <stdio.h>
#include <stdlib.h>
//Não esta dando certo o segundo numero
int main()
{
     int num1,num2,resto;

     printf("digite o primeiro numero: \n");
     scanf("%i",&num1);

     printf("digite o segundo numero: \n");
     scanf("%i",&num2);

     resto = num1%num2;
     printf("resto de %i/%i e igual a: %i",num1,num2,resto);

     return 0;
}
