#include <stdio.h>
#include <stdlib.h>

float comparar(const void *x, const void *y){
    // A fun��o comparar recebe dois ponteiros constantes
    return (int) (*(int *)x - * (int *)y);
    /*
        1. A fun��o ir� retornar um valor maior do que zero: se o primeiro valor for maior do que o segundo.
        2. A fun��o ir� retornar um valor menor do que zero: se o primeiro valor for menor do que o segundo.
        3. A fun��o ir� retornar Zero: se os valores forem iguais.
    */
}
float ordenacaoVetor(int n, float *vetor, int aux){
    printf("INFORME A QUANTIDADE DE LINHAS DO VERTOR: ");
    scanf ("%i", &n);

    vetor = malloc(n*sizeof(float)); //Alocando espa�o para um bloco de bytes consecutivos na mem�ria RAM
    printf("\n");
        for(int i = 0; i<n; i++){
            printf("INFORME UM NUMERO: ");
            scanf("%f", &vetor[i]);
        }
        // IREI SUBSTITUIR ESSE M�TODO DE COMPARA��O PELO qsort();
        /*for(int i = 0; i < n; i++){
            for(int b = i; b < n; b++){
                if(vetor[i] > vetor[b]){
                    aux = vetor[i];
                    vetor[i] = vetor[b];
                    vetor[b] = aux;
                }
            }
        }*/

    qsort(vetor, n, sizeof(int), comparar);
    printf("VETOR ORDENADDO: ");
    for(int i =0; i < n; i++){
            printf("%f ", *(vetor+i));
            printf("|");
    }
}
int main()
{
    float *vetor;
    int aux;
    int n;
        ordenacaoVetor(n, vetor, aux); // Chamando a funcao ordenacaoVetor(), para ordenar em ordem crescente
    free(vetor);
    return 0;
}
