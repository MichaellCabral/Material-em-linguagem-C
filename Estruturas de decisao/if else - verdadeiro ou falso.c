#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("digite um numero diferente de 5: \n");
    scanf("%i",&i);

    if(i!=5)  //>>> se o valor for diferente de 5

 //   printf("\n\t%i\n",i==1);
 //   printf("\n\t%i\n",i!=1);

    {
        printf("\nA expressao e verdadeira\n");
    }
    else
    {
        printf("\nA expressao e falsa\n");
    }
}
// = atribuição
//== comparação positiva
//!= comparação negativa
//o sinal de exclamação é igual a nossa expressão NOT
//  !(5==5) o valor da exclamação esta negando a expressão que é verdadeira

