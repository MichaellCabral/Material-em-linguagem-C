#include <stdio.h>

int main()
{
    int num;
printf ("Digite um número: ");
scanf("%d",&num);
while (num!=0) //> enquanto o número lido for diferente de zero
{
printf ("O número lido foi = %d\n\n",num);

printf ("Digite um número: ");//>> comando de leitura da variavel num dentro do comando de repetição
scanf("%d",&num);
}
}

