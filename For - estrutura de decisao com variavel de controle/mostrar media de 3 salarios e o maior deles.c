#include<stdio.h>
#include<stdlib.h>
int main()
{
   int cont;
   float salario,media,soma,maior;
   maior=0; soma=0;               //>>>>   1) inicializar com zero as variaveis maior e soma
    for (cont=1;cont<=3;cont++)   //>>>>   2) repetir 3 vezes - comando de repetição

       {
         printf ("Digite o salário do funcionário: ");
         scanf("%f",&salario);
         soma=soma+salario;       //>>>>   3) "se" o salario for superior a variavel maior 
           if (salario > maior)
              {
                 maior=salario;   //>>>>   4) "Então" maior recebe a variavel salario
              }
        }
            media=soma/3;         //>>>>   5) Calcula a media do salario dividido por 3
                                  //>>>>   6) exibe os valores do maior salario e da media
            printf ("O maior salário da empresa e = %.2f \n",maior);  
            printf ("A média salarial da empresa e = %.2f \n",media);
return 0;
}
