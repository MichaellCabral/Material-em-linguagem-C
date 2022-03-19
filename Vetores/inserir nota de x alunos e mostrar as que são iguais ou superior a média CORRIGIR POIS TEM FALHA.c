#include <stdio.h>


// MOSTRAR A NOTA DE X ALUNOS E MOSTRAR AS QUE SÃO IGUAIS OU SUPERIOR A MEDIA

int main()
{
    int tamvet;//variavel pra ser inserida no scanf como quantidade de notas a serem inseridas

    float vet[tamvet],soma=0,media;//float pois os numero sao reais
    int posicao; //controle das contagens
    printf("digite a quantidade de notas a serem mostradas: \n");
    scanf("%i",&tamvet);//interação com o usuario
    printf("\t>>%i<<",tamvet);//imprime a quantidade de notas a serem inseridas

        for(posicao=0;posicao<tamvet;posicao++)
        {
            scanf("%f",&vet[posicao]);
            soma=soma+vet[posicao];
        }
        media=soma/tamvet;

        for(posicao=0;posicao<tamvet;posicao++)
        {
            if(vet[posicao] >= media)
            printf(">>%2.f <<EH IGUAL OU SUPERIOR A MEDIA\n",vet[posicao]);
        }


        return 0;
}

