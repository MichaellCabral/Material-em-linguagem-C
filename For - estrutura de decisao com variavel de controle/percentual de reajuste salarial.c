#include <stdio.h>
#include <stdlib.h> //fazer funcionar
int main()
{
    float percreaj,salario,salarioreaj,maiorsal; //>> 04 variaveis do tipo real para armazenar a porcentagem de reajuste,
    //>>  cada salário a ser lido, cada salário a ser reajustado e o maior salário reajustado
    int cont; // variavel inteira chamada cont para controlar a repetição
    maiorsal=0; // varialvel maior inicializa com zero pois irá ser substituida pelo maior salarioreaj
    printf("Percentual de reajuste salarial:"); //>> ler a porcentagem de reajuste
    scanf ("%f",&percreaj);
    
    for (cont=1;cont<=3;cont++) //>> 03 numeros para repetição
    {
      printf("Informe o salário do funcionário:"); //>> le o salario do funcionario
      scanf("%f",&salario);
      salarioreaj=salario+(salario*percreaj/100); //>> calcula o salario reajustado aplicando a porcentagem de aumento lido
      printf("O salário reajustado e: %.2f \n\n",salarioreaj);
    
      if(salarioreaj>maiorsal)
    
      maiorsal=salarioreaj;
    }
printf("O maior salário reajustado e : %.2f",maiorsal); // exibe o conteudo da variavel maiorsal

return 0;
}


