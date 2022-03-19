#include <stdio.h>
int main()
{
int vet[5],posicao;
for (posicao=0;posicao<5;posicao++)
{
scanf ("%d",&vet[posicao]);
}
for (posicao=4;posicao>=0;posicao--)
{
printf ("%d \n",vet[posicao]);
}
return 0;
} 
