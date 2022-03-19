#include <stdio.h>

int main()

{
int mato[3][3],lin,col;
printf ("\n Digite a matriz original \n");

  for (lin=0;lin<3;lin++)

  for (col=0;col<3;col++)
    {
      scanf ("%d",&mato[lin][col]);
    }

printf ("\n Matriz gerada \n");

  for (lin=0;lin<3;lin++)
    {

     for (col=0;col<3;col++)
      printf ("%d",mato[lin][col]);
      printf ("\n");
}
}

