#include <stdio.h>
int main()
{
int num;
do //>> faça
{
printf ("Digite um número: ");
scanf("%d",&num);
if (num!=0 && num!=9) //>> condição pra encerrar programa la no termino sem mostrar esses numeros
{
if (num%2 ==0) //>> se par mostra o sucessor
printf ("Sucessor = %d\n\n ",num+1);
else           //>> senão mostra o antecessor de impar
printf ("Antecessor = %d\n\n ",num-1);
}
}
while(num!=0 && num!=9); //>> teste de condição no final
    return 0;
}



