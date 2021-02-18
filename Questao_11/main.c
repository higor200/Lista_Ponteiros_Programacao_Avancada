#include <stdio.h>
#include <stdlib.h>

int main()
{

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

     /* LETRA A*/
    aloha[2] = value; // VALIDO
    printf("%f \n", aloha[2]);

    /* LETRA B*/
    //scanf("%f", &aloha); INVALIDO

    /* LETRA C*/
    //aloha = "value"; INVALIDO

    /* LETRA D*/
    //printf("%f", aloha); INVALIDO

   /* LETRA E*/
    coisas[4][4] = aloha[3]; //VALIDO
    printf("%f \n", coisas[4][4]);

    /* LETRA E*/
    //coisas[5] = aloha; INVALIDO

    /* LETRA E*/
    //pf = value; //INVALIDO

    /* LETRA E*/
    pf = aloha; //VALIDO
    printf("%f \n", pf);
    return 0;
}
