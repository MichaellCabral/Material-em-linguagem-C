#include<stdio.h>
int main()
{
    int num  = 0; 
    /*uma variavel "num" para o usuário digitar o valor e uma variavel "cont" pra contagem
    inserido na função de repetição "for" logo abaixo*/
    printf("\nDigite o número a ser calculado: \n>>> ");
    scanf("%i", &num);

    for(int cont = 1; cont<=10; ++cont)
    {
    //  escreva 1 x 4 = 5    
        printf("%ix%i = %i\n",num,cont,num*cont);
    }

    return 0;
}
