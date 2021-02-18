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
    /* o ponteiro p irá receber o endereço do vetor 'mat' mais um salto de uma posição*/

    /* LETRA B*/
    p = mat; // VERDADEIRO
    printf("%d \n", p);
    /* o ponteiro p irá receber o endereço do vetor 'mat' na posição 0*/


    /* LETRA C*/
    p = mat; // VERDADEIRO COMO A LETRA B
    printf("%d \n", p);

    /* LETRA D*/
    x = (*mat); // VERDADEIRO
    printf("%d \n", x);
    /* A variável x irá receber o conteúdo do vetor 'mat'*/
    return 0;
}
