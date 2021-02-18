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
    /*Foi obtido a resposta correta, já que a variável 'p1'
    recebe o endereço de valor. Assim, se 'p1' é 20, 'valor'
    deve ser também./*

    /* (b) */
        temp = 26.5;
        p2 = &temp;
        *p2 = 29.0;
        printf("%.1f \n", temp);
    /*Foi obtido a resposta correta, já que a variável 'p2'
    recebe o endereço de 'temp'. Assim, se o conteúdo de 'p2' é 29.0, 'temp'
    deve ser também./*

    /* (c) */
        p3 = &nome[0];
        aux = *p3;
        printf("%c \n", aux);
    /*Foi obtido a resposta correta, já que a variável 'p3'
    recebe o endereço do vetor 'nome' na posição 0. Além disso,
    a variável "aux" recebe o conteúdo de '*p3'.Assim, se o conteúdo
    de '*p3' é "P", 'aux' deve ser também./*

    /* (d) */
        p3 = &nome[4];
        aux = *p3;
        printf("%c \n", aux);
    /*Foi obtido a resposta correta, já que a variável 'p3'
    recebe o endereço do vetor 'nome' na posição 4. Além disso,
    a variável "aux" recebe o conteúdo de '*p3'.Assim, se o conteúdo
    de '*p3' é "e", 'aux' deve ser também./*

    /* (e) */
        p3 = nome;
        printf("%c \n", *p3);
    /*Segue o mesmo rariocínio da letra C,*/

    /* (f) */
        p3 = p3 + 4;
        printf("%c \n", *p3);
    /*Foi obtido a resposta correta, já que a variável 'p3'
    recebe o endereço do vetor 'nome' com 4 "saltos". Assim,
    se o conteúdo de '*p3' é "e"*/


    /* (g) */
        p3--;
        printf("%c \n", *p3);
    /*Foi obtido a resposta correta, já que o endereço de
    p3 saltou 4bits para trás, ou seja, voltou uma posição.
    Logo, o conteúdo de *p3 é 't'*/

    /* (h) */
        vetor[0] = 31;
        vetor [1] = 45;
        vetor [2] = 27;
        p4 = vetor;
        idade = *p4;
        printf("%d \n", idade);
    /*Foi obtido a resposta correta, já que a variável 'p4'
    recebe o endereço do vetor na posição 0. Além disso, a
    variável idade é igual ao conteúdo de '*p4', portanto = 31*/

     /* (i) */
         p5 = p4 +1;
         idade = *p5;
         printf("%d \n", idade);
    /*Foi obtido a resposta correta, já que a variável 'p5'
    irá receber o endereço de p4 com um salto de 4bits, ou seja,
    uma posição. Além disso, idade irá receber o conteúdo de '*p5'.
    Portanto, idade = 45, que é o 'vetor[1]' ou '*(p4 + 1)'.

    /* (j) */
        p4 = p5 +1;
        idade = *p4;
        printf("%d \n", idade);
    /*Foi obtido a resposta correta, já que a variável 'p4'
    irá receber o endereço de p5 com um salto de 4bits, ou seja,
    uma posição. Além disso, idade irá receber o conteúdo de '*p4'.
    Portanto, idade = 27, que é o 'vetor[2]' ou '*(p5 + 1)'.*/

    /* (l) */
        p4 = p4 - 2;
        idade = *p4;
        printf("%d \n", idade);
    /*Foi obtido a resposta correta, já que a variável 'p4'
    irá pular 2 posições para trás, ou seja, o conteúdo de
    '*p4' é igual o vetor[0].*/

    /* (m) */
        p5 = &vetor[2] - 1;
        printf("%d \n", *p5);
    /*Foi obtido a resposta correta, já que a variável 'p5'
    irá receber o endereço do vetor[2] - 1, ou seja, o
    conteúdo de '*p5' é vetor[1] = 45.*/


    /* (n) */
        //p5`;
       // printf("%d \n", *p5);
    //NOTAÇÃO INVÁLIDA
    return 0;
}
