#include <stdio.h>  //STANDARD INPUT OUTPUT
#include <stdlib.h> //STANDARD LIBRARY
//pode ser usado  o int pra cada variavel ou colocar todas as variaveis no inicio

int main()
{
    int num1, num2; // as variaveis
    printf("digite os dois numeros: \n");
    scanf("%i %i",&num1,&num2);

    printf("os numeros inteiros sao: %i & %i\n",num1,num2);
    int soma = num1 + num2; //variavel "soma"
    printf("resultado da soma e igual a: %i\n", soma);

    int subtracao = num1 - num2; //variavel subtracao
    printf("o resultado da subtracao e: %i\n",subtracao);

    int mult = num1 * num2;
    printf("o resultado da multiplicacao e: %i\n",mult);

    int div = num1 / num2;
    printf("o resultado da divisao e: %i\n", div);
    
    return 0;
}

