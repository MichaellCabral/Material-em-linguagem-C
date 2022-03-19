#include <stdio.h>
int
main ()
{
  int mat[3][3], linha, coluna, contpar = 0, contimpar = 0;
  printf ("\ndigite os valores para os elementos da matriz\n\n");
  for (linha = 0; linha < 3; linha++)
    for (coluna = 0; coluna < 3; coluna++)
      {
	printf ("\nElemento[%d][%d] = ", linha, coluna);
	scanf ("%d", &mat[linha][coluna]);
      }

  printf ("\n\n*******SAIDA DE DADOS*******\n\n");
  for (linha = 0; linha < 3; linha++)
    for (coluna = 0; coluna < 3; coluna++)
      {
	if (mat[linha][coluna] % 2 == 0)
	  contpar++;
	else
	  contimpar++;
      }
  printf ("\nPares: %d", contpar);
  printf ("\nImpares: %d", contimpar);

  return 0;
}
