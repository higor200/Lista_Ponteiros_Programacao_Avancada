#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("RESULTADOS: \n");
    printf("O VALOR DE 'p == &i' eh: %d\n",p);
    printf("O VALOR DE '*p - *q' eh: %d\n", *p - *q);
    printf("O VALOR DE '**&p' eh: %d\n",  **&p);
    printf("O VALOR DE '3 - *p/(*q) + 7' eh: %d\n",  3 - *p/(*q) + 7);
    return 0;
}
