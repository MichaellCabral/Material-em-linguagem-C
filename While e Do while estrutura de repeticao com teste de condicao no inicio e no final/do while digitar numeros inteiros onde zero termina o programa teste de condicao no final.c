#include <stdio.h>
#include <stdlib.h>
int main()
{
 int num;
 do //>> faça
 {
 printf ("Digite um número: ");
 scanf("%d",&num);
 if (num!=0) //>> teste de condição pra que o zero não imprima na tela
 printf ("O número lido foi = %d\n\n ",num);
 }
 while (num!=0); //>> enquanto
 return 0;
}

