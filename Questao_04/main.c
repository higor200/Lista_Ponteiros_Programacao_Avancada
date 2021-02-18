#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2, j =5;
    int *p, *q;


    //a. p = &i;
        p = &i;
    //Legal
     printf("%d\n",*p);

    //b. *q = &j;
        *q = &j;
    //Legal


    //c. p = &*&i;
        p = &*&i;
    //Legal

    //d. i = (*&)j;
        //i = (*&)j; Ilegal


    //e. i = *&j;
        i = *&j;
    //Legal

    //f. i = &&j;
        //i = &&j; Ilegal

    //g. q = *p;
        q = *p;
        //Legal

    //h. i = (*p)` + *q;

       printf("%d\n",(*p) + *q);

    return 0;
}
