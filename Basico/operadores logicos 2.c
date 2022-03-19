#include <stdio.h>
#include <stdlib.h>

int main()

{
   //&&
    //(TRUE)&&(TRUE)
    int i = 40;
    int condicao = (i>20)&&(i<100);
    printf("%i\n",condicao); //imprime o valor verdadeiro
    printf("%i\n",!condicao); //imprime o valor falso
    return 0;
}
/*
    1 0 = 1
    0 1 = 1
    1 1 = 1
    0 0 = 0
*/

