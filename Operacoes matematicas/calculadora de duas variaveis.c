#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num1,num2,soma,subtracao,multi,div;
     printf("digite dois numero inteiros: ");
     scanf("%i %i",&num1,&num2);

     soma      =num1+num2;
     subtracao =num1-num2;
     multi     =num1*num2;
     div       =num1/num2;

     printf("a soma e: %d\n",soma);
     printf("a subtracao e: %d\n",subtracao);
     printf("a multiplicacao e: %d\n",multi);
     printf("a divisao e: %d\n",div);

         return 0;
}
