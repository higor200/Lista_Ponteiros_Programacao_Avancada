#include <stdio.h>
#include <stdlib.h>
/*CONSEGUI UMA EXPLICAÇÃO DA FUNÇÃO qsort: http://www.galirows.com.br/meublog/programacao/utilizacao-funcao-qsort/*/

float comparar(const void *x, const void *y){
    // A função comparar recebe dois ponteiros constantes
    return (int) (*(int *)x - * (int *)y);
    /*
        1. A função irá retornar um valor maior do que zero: se o primeiro valor for maior do que o segundo.
        2. A função irá retornar um valor menor do que zero: se o primeiro valor for menor do que o segundo.
        3. A função irá retornar Zero: se os valores forem iguais.
    */
}
int main()
{
    float *vetor;
    int aux;
    int n;

    printf("INFORME A QUANTIDADE DE LINHAS DO VERTOR: ");
    scanf ("%i", &n); // Recebendo o tamanho do meu vetor

    vetor = malloc(n*sizeof(float)); //Alocando espaço para um bloco de bytes consecutivos na memória RAM
    printf("\n");
        for(int i = 0; i<n; i++){
            printf("INFORME UM NUMERO: ");
            scanf("%f", &vetor[i]);
        } // Um laço de repetição para "Cadastrar" ou inserir os números nos respctivos endereços do meu vetor.

    //FAZ O CALCULO DO ENDEREÇO E EXIBE. TAMBEM FAZ O CALCULO DO CONTEUDO DO RESPCTIVO ENDERECO E EXIBE
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
    tamanho em bytes dos elementos do array, uma função de comparação para ordenar os elementos)*/


    //FAZ O CALCULO DO ENDEREÇO E EXIBE. TAMBEM FAZ O CALCULO DO CONTEUDO DO RESPCTIVO ENDERECO E EXIBE
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
