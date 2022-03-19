#include <stdio.h>
#include <stdlib.h>

//definir pela idade se uma pessoa é jovem ou idosa
//definir variaveis de pessoa jovem e idosa
int main()
{
    int idade_jovem,idade_idosa;
    idade_jovem=17; // IDADE JOVEM
    idade_idosa=60; // IDADE IDOSA

    int idade = 0; //>>idades são contadas a partir do número zero

    printf("digite a idade: \n");
    scanf("%i", &idade);

    if(idade <= idade_jovem)
      {

        printf("\npessoa eh jovem\n");
      }else{
    if(idade >= idade_idosa)
      {
        printf("\npessoa eh idosa\n");
      }else{
          if((idade>idade_jovem)&&(idade<idade_idosa))//&& verificar se as duas condiçoes sao verdadeiras ou falsas

          {
              printf("pessoa de media idade");
          }
      }

} return 0;
}
