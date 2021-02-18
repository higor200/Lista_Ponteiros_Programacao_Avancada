#include <stdio.h>
#include <stdlib.h>
/*CONSEGUI UMA EXPLICA��O DA FUN��O qsort: http://www.galirows.com.br/meublog/programacao/utilizacao-funcao-qsort/*/

float comparar(const void *x, const void *y){
    // A fun��o comparar recebe dois ponteiros constantes
    return (int) (*(int *)x - * (int *)y);
    /*
        1. A fun��o ir� retornar um valor maior do que zero: se o primeiro valor for maior do que o segundo.
        2. A fun��o ir� retornar um valor menor do que zero: se o primeiro valor for menor do que o segundo.
        3. A fun��o ir� retornar Zero: se os valores forem iguais.
    */
}
int main()
{
    float *vetor;
    int aux;
    int n;

    printf("INFORME A QUANTIDADE DE LINHAS DO VERTOR: ");
    scanf ("%i", &n); // Recebendo o tamanho do meu vetor

    vetor = malloc(n*sizeof(float)); //Alocando espa�o para um bloco de bytes consecutivos na mem�ria RAM
    printf("\n");
        for(int i = 0; i<n; i++){
            printf("INFORME UM NUMERO: ");
            scanf("%f", &vetor[i]);
        } // Um la�o de repeti��o para "Cadastrar" ou inserir os n�meros nos respctivos endere�os do meu vetor.

    //FAZ O CALCULO DO ENDERE�O E EXIBE. TAMBEM FAZ O CALCULO DO CONTEUDO DO RESPCTIVO ENDERECO E EXIBE
    printf("\nVETOR DIGITADO: ");
    for(int i =0; i < n; i++){
            printf("Posicao: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }
    printf("\n--------------------------------------");

    qsort(vetor, n, sizeof(int), comparar);
    /*void qsort(void *base, size_t memb, site_t size,
	int (*compar) (const void *, const void *));

    (Um ponteiro para o primeiro elemento do array, a quantidade de elementos do array,
    tamanho em bytes dos elementos do array, uma fun��o de compara��o para ordenar os elementos)*/


    //FAZ O CALCULO DO ENDERE�O E EXIBE. TAMBEM FAZ O CALCULO DO CONTEUDO DO RESPCTIVO ENDERECO E EXIBE
    printf("\nVETOR ORDENADDO: ");
    for(int i =0; i < n; i++){
            printf("Posicao: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }
    printf("\n--------------------------------------");
    printf("\n");
    free(vetor);
    return 0;
}
