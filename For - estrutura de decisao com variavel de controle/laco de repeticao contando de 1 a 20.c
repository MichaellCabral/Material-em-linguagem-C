#include <stdio.h>
#include <stdlib.h>
/* FOR
melhor ferramenta qnd sabemos a qnt de itens que devemos percorrer
muito rápido para realizar um looping
estrutura completa

estrutura contando de 1 a 20
*/

int main()
{
    /*
    for(parte1,parte2,parte3);
    parte1 >> INICIALIZAÇÃO é aonde nós declaramos e inicializamos a variavel, não é obrigatório.
    parte2 >> CONDIÇÃO      é a condição
    parte3 >> ATUALIZAÇÃO   é aonde nós incrementamos nossa variavel, antes da linha
    */
    int x,cont;
    x = 0;
    
    for (cont = 1; cont <= 20;++cont)
        {
            printf("%i\n",++x);
        }
    return 0;
}

