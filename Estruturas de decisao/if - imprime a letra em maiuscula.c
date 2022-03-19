#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//biblioteca que lida com letras >>>
int main()
{
     char letra;
     printf("digite uma letra minuscula: ");
     scanf("%c",&letra);

     if( letra >= 'a') //qualquer letra maior que o caractere "a" é impressa
     {
         printf("\nsegue a letra que vc digitou em maiuscula: %c \n",toupper(letra));

        //toupper faz parte da biblioteca <ctype.h>
     }
}


