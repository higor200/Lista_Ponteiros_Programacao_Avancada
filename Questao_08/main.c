#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4], *p, x;

    mat [0] = 10;
    mat [1] = 20;
    mat [2] = 30;
    mat [3] = 40;

    /* LETRA A*/
    p = mat + 1; // VERDADEIRO
    printf("%d \n", p);
    /* o ponteiro p ir� receber o endere�o do vetor 'mat' mais um salto de uma posi��o*/

    /* LETRA B*/
    p = mat; // VERDADEIRO
    printf("%d \n", p);
    /* o ponteiro p ir� receber o endere�o do vetor 'mat' na posi��o 0*/


    /* LETRA C*/
    p = mat; // VERDADEIRO COMO A LETRA B
    printf("%d \n", p);

    /* LETRA D*/
    x = (*mat); // VERDADEIRO
    printf("%d \n", x);
    /* A vari�vel x ir� receber o conte�do do vetor 'mat'*/
    return 0;
}
