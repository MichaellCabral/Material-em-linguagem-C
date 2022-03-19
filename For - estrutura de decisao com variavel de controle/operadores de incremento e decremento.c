#include <stdio.h>
#include <stdlib.h>

//OBS UTILIZE AS BARRAS // PARA CODIFICAR E APAGAR

int main()
{
/////////////////////////////////////////////
/*INCREMENTO podemos fazer um pré e um pós
    int i = 1;
    printf("%i\n",i);
    printf("%i\n",++i);// adicionando unidade no momento da impressão
    i++;//pós incremento. executou na próxima linha
    printf("%i\n",i);
//////////////////////////////////////////////
   system("cls");// limpar tudo acima
//DECREMENTO
//PRÉ o valor será incementado/decrementado na instução que a variável estiver contida
//PÓS o valor será incrementado/decrementado na próxima instrução em que a variavel estiver contida
    int i2 = 3;
    printf("%i",i2);
    printf("%i",--i2);
    i2--;
    printf("%i",i2);
  */
///////////////////////////////////////////////
    int x = 0;
    x = x + 1; //incrementa qntas unidades desejarmos
    x +=5; // incrementa qntas unidades desejarmos
    +x; // só podemos incrementar um valor a unidade
    printf("%i\n",x);
}

