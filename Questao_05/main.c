#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Aonteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;


    /* (a) */
        valor = 10;
        p1 = &valor;
        *p1 = 20;
        printf("%d \n", valor);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p1'
    recebe o endere�o de valor. Assim, se 'p1' � 20, 'valor'
    deve ser tamb�m./*

    /* (b) */
        temp = 26.5;
        p2 = &temp;
        *p2 = 29.0;
        printf("%.1f \n", temp);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p2'
    recebe o endere�o de 'temp'. Assim, se o conte�do de 'p2' � 29.0, 'temp'
    deve ser tamb�m./*

    /* (c) */
        p3 = &nome[0];
        aux = *p3;
        printf("%c \n", aux);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p3'
    recebe o endere�o do vetor 'nome' na posi��o 0. Al�m disso,
    a vari�vel "aux" recebe o conte�do de '*p3'.Assim, se o conte�do
    de '*p3' � "P", 'aux' deve ser tamb�m./*

    /* (d) */
        p3 = &nome[4];
        aux = *p3;
        printf("%c \n", aux);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p3'
    recebe o endere�o do vetor 'nome' na posi��o 4. Al�m disso,
    a vari�vel "aux" recebe o conte�do de '*p3'.Assim, se o conte�do
    de '*p3' � "e", 'aux' deve ser tamb�m./*

    /* (e) */
        p3 = nome;
        printf("%c \n", *p3);
    /*Segue o mesmo rarioc�nio da letra C,*/

    /* (f) */
        p3 = p3 + 4;
        printf("%c \n", *p3);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p3'
    recebe o endere�o do vetor 'nome' com 4 "saltos". Assim,
    se o conte�do de '*p3' � "e"*/


    /* (g) */
        p3--;
        printf("%c \n", *p3);
    /*Foi obtido a resposta correta, j� que o endere�o de
    p3 saltou 4bits para tr�s, ou seja, voltou uma posi��o.
    Logo, o conte�do de *p3 � 't'*/

    /* (h) */
        vetor[0] = 31;
        vetor [1] = 45;
        vetor [2] = 27;
        p4 = vetor;
        idade = *p4;
        printf("%d \n", idade);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p4'
    recebe o endere�o do vetor na posi��o 0. Al�m disso, a
    vari�vel idade � igual ao conte�do de '*p4', portanto = 31*/

     /* (i) */
         p5 = p4 +1;
         idade = *p5;
         printf("%d \n", idade);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p5'
    ir� receber o endere�o de p4 com um salto de 4bits, ou seja,
    uma posi��o. Al�m disso, idade ir� receber o conte�do de '*p5'.
    Portanto, idade = 45, que � o 'vetor[1]' ou '*(p4 + 1)'.

    /* (j) */
        p4 = p5 +1;
        idade = *p4;
        printf("%d \n", idade);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p4'
    ir� receber o endere�o de p5 com um salto de 4bits, ou seja,
    uma posi��o. Al�m disso, idade ir� receber o conte�do de '*p4'.
    Portanto, idade = 27, que � o 'vetor[2]' ou '*(p5 + 1)'.*/

    /* (l) */
        p4 = p4 - 2;
        idade = *p4;
        printf("%d \n", idade);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p4'
    ir� pular 2 posi��es para tr�s, ou seja, o conte�do de
    '*p4' � igual o vetor[0].*/

    /* (m) */
        p5 = &vetor[2] - 1;
        printf("%d \n", *p5);
    /*Foi obtido a resposta correta, j� que a vari�vel 'p5'
    ir� receber o endere�o do vetor[2] - 1, ou seja, o
    conte�do de '*p5' � vetor[1] = 45.*/


    /* (n) */
        //p5`;
       // printf("%d \n", *p5);
    //NOTA��O INV�LIDA
    return 0;
}
