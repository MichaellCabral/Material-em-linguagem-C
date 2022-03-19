#include <stdio.h>
#include <stdlib.h>

//SOMAR 4 NOTAS  E DIVIDIR POR 4 e mostrar se foi aprovado ou reprovado
int main()
{
    float nota1,nota2,nota3,nota4,media;  //>>float pq as notas podem ser 4.5 9.2 (pontos flututanates)
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("=========Media Escolar 1.0============\n\n");
    printf("digite a sua primeira nota bimestral: \n");
    scanf("%f",&nota1);
    printf("digite a sua segunda nota bimestral: \n");
    scanf("%f",&nota2);
    printf("digite a sua terceira nota bimestral: \n");
    scanf("%f",&nota3);
    printf("digite a sua quarta nota bimestral: \n");
    scanf("%f",&nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("a sua media escolar foi de: %2.f \n", media);

    if(media >= 7)
    {
        printf("\tvoce foi aprovado\n");
    }else{
        printf("\tvoce foi reprovado\n");
         }
 return 0;

}
