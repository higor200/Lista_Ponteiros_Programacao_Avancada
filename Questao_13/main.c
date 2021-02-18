#include <stdio.h>
#include <stdlib.h>

float ordenacaoVetor(int n, float *vetor, float aux){

    // Recebendo o tamanha (N) do meu vetor.
    printf("INFORME A QUANTIDADE DE LINHAS DO VERTOR: ");
    scanf ("%i", &n);

    //Alocando espa�o para um bloco de bytes consecutivos na mem�ria RAM
    vetor = malloc(n*sizeof(float));
    printf("\n");

        // Um la�o de repeti��o para inserir os dados no vetor
        for(int i = 0; i<n; i++){
            printf("INFORME UM NUMERO: ");
            scanf("%f", &vetor[i]);
        }

    //FAZ O CALCULO DO ENDERE�O E EXIBE. TAMBEM FAZ O CALCULO DO CONTEUDO DO RESPCTIVO ENDERECO E EXIBE
    printf("\nVETOR DIGITADO: ");
    for(int i =0; i < n; i++){
            printf("Posicao: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }
    printf("\n--------------------------------------");

    //Ordenando o vetor na ordem crescante
    for(int i = 0; i < n; i++){
        for(int b = i; b < n; b++){
            if(vetor[i] > vetor[b]){
                aux = vetor[i];
                vetor[i] = vetor[b];
                vetor[b] = aux;
            }
        }
    }

    //FAZ O CALCULO DO ENDERE�O E EXIBE. TAMBEM FAZ O CALCULO DO CONTEUDO DO RESPCTIVO ENDERECO E EXIBE
    printf("\nVETOR ORDENADO: ");
    for(int i =0; i < n; i++){
            printf("Posicao: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }
    printf("\n--------------------------------------");
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
