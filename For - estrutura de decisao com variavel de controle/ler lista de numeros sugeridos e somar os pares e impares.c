#include <stdio.h>
#include <stdlib.h>
int main()
{
int cont,n,num,somapar,somaimpar; //>> variáveis inteiras (int) para armazenar o número N, cada número da lista de Num números,
//>> a soma dos pares e a soma dos ímpares
somapar=0;
somaimpar=0;

printf ("Digite a quantidade de números da lista: "); //>> quantidade de numeros que ira entrar na contagem
scanf("%d",&n);

for (cont=1;cont<=n;cont++)
{
printf ("Digite um número: "); //>> ler os números
scanf("%d",&num);

if (num%2==0) //>> Se o resto da divisão do número da lista por 2 = 0;
somapar=somapar+num; //>> Somapar = somapar + número da lista

else
somaimpar=somaimpar+num; //>> Senão somaimpar = somaimpar + número da lista
}
printf ("A soma dos números pares = %d\n",somapar); //>> Exibir o conteúdo das variáveis somapar e somaimpar.
printf ("A soma dos números ímpares = %d\n",somaimpar);
return 0;
}
