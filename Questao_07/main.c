#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o
    valor do terceiro elemento do vetor?*/

        //  *(pulo + 2); VERDADEIRO;
        //  *(pulo + 4); FALSO, IRÁ REFERENCIAR O VALOR DO QUARTO ELEMENTO DO VETOR;
        //    pulo + 4;  FALSO, IRÁ REFERENCIAR A POSIÇÃO DO QUARTO ELEMENTO DO VETOR;
        //    pulo + 2;  FALSO, IRÁ REFERENCIAR A POSIÇÃO DO SEGUNDO ELEMENTO DO VETOR;

        //EXEMPLO
        int vetor[5];
        int *ponteiro;
        vetor[0] = 10;
        vetor [1] = 20;
        vetor [2] = 30;
        vetor [3] = 40;
        vetor [4] = 50;
        // VERDADEIRO
            ponteiro = *(vetor + 2);
            printf("%d \n", ponteiro);

        ponteiro = *(vetor + 4);
        printf("%d \n", ponteiro);
        ponteiro = vetor + 4;
        printf("%d \n", ponteiro);
        ponteiro = vetor + 2;
        printf("%d \n", ponteiro);


    return 0;
}
