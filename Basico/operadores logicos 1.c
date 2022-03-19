#include <stdio.h>
#include <stdlib.h>

int main()
/*    
    1 0 = 1
    0 1 = 1
    1 1 = 1
    0 0 = 0
*/
{
    int x = 10;
    int cond = 0;

    cond = (x==10)||(x<1);
    printf("%i primeira condicao 1 0\n",cond);

    cond = (x==0)||(x!=1000);
    printf("%i segunda condicao 0 1\n",cond);

    cond = (x==10)||(x!=0);
    printf("%i terceira condicao 1 1\n",cond);

    cond = (x!=10)||(x==0);
    printf("%i quarta condicao 0 0\n",cond);
    return 0;
}
