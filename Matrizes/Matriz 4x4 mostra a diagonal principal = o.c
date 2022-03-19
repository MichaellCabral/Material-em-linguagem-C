#include <stdio.h>

// 
int main()

{
int mat[4][4],lin,col;
printf ("\nDigite valor para os elementos da matriz\n");
for (lin=0;lin<4;lin++)
for (col=0;col<4;col++)
  if (lin==col) //SE linha for igual coluna
   {
     printf ("Elemento[%d][%d] = 0 \n",lin,col); //>> ENTÃO  valor será igual a zero
     mat[lin][col]=0;
   }
  else //>> SENÃO
   {
     printf ("Elemento[%d][%d] = ",lin,col); //>> valor será atribuído pelo usuário na variavel
     scanf ("%d",&mat[lin][col]) ;
    }
printf ("\nListagem dos elementos da matriz\n");
for (lin=0;lin<4;lin++)
for (col=0;col<4;col++)
printf("\nElemento[%d][%d] = %d",lin,col,mat[lin][col]);

}
