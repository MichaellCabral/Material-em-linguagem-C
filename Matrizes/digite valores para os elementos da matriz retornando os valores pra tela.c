#include <stdio.h>
#include <stdlib.h>
//digitando valores para os elementos da matriz 3 x 3 e retornando os valores para a tela
int
main ()
{
  int mat[3][3], linha, coluna;
  printf ("\ndigite o valor para os elementos da matriz: \n");

  for (linha = 0; linha < 3; linha++)
    for (coluna = 0; coluna < 3; coluna++)
      {
	printf ("\nelemento [%d][%d] =", linha, coluna);
	scanf ("%d", &mat[linha][coluna]);
      }

  printf ("\nListagem dos elementos da matriz\n");
  for (linha = 0; linha < 3; linha++)
    for (coluna = 0; coluna < 3; coluna++)

      printf ("\nElemento[%d][%d] = %d", linha, coluna, mat[linha][coluna]);

  return 0;
}
