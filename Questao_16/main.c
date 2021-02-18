#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float comparar(const void *x, const void *y){
    // A fun��o comparar recebe dois ponteiros constantes
    return (int) (*(int *)x - * (int *)y);
    /*
        1. A fun��o ir� retornar um valor maior do que zero: se o primeiro valor for maior do que o segundo.
        2. A fun��o ir� retornar um valor menor do que zero: se o primeiro valor for menor do que o segundo.
        3. A fun��o ir� retornar Zero: se os valores forem iguais.
    */
}

float ordenacoesVetores(int n, float *vetor, int aux){
    time_t tempoOrd, tempoOrd2;

    int min = -10000, max = 10000;

    printf("INFORME O NUMERO DE LINHAS DO VETOR QUE DESEJA ORDENAR: ");
    scanf ("%i", &n);
    //ALOCANDO O VETOR DINAMICAMENTE
        vetor = malloc(n*sizeof(float));
        printf("\n");
    //INSERINDO VALORES NO VETOR DE FORMA ALEAT�RIA ENTRE -10.000 E 10.000
        for (int i = 0; i < n; i++){
            vetor[i]= rand() % max + min;
        }
    //CALCULANDO O TEMPO DE ORDENACAO PELA FUNCAO TRADICIONAL
    tempoOrd = clock();
        //Ordenando o vetor na ordem crescante (quetao 13)
        for(int i = 0; i < n; i++){
            for(int b = i; b < n; b++){
                if(vetor[i] > vetor[b]){
                    aux = vetor[i];
                    vetor[i] = vetor[b];
                    vetor[b] = aux;
                }
            }
        }
    tempoOrd = (clock() - tempoOrd);
    printf("TEMPO DE ORDENACAO PELA FUNCAO TRADICIONAL(s): %f ", ((float)tempoOrd)/CLOCKS_PER_SEC);
    printf("\n");
    //CALCULANDO O TEMPO DE ORDENACAO PELA FUNCAO qsort()
    tempoOrd2 = clock();
        qsort(vetor, n, sizeof(float), comparar);
    tempoOrd2 = (clock() - tempoOrd2);
    printf("TEMPO DE ORDENACAO PELA FUNCAO qsort() (s): %f", ((float)tempoOrd2)/CLOCKS_PER_SEC);
}
int main(){
    float *vetor;
    int n, aux;
        ordenacoesVetores(n, vetor, aux);
    free(vetor);
    return 0;
}

//CONCLUS�O
/* A PARTIR DE ALGUNS TESTES � POSS�VEL OBSERVAR QUE O TEMPO DE OPERA��O COM O USO DA FUN��O qsort() � MUITO
MENOR EM COMPARA��O COM A FUN��O DE ORDENA��O CRIADA PELO ALUNO. POR�M, PARA VERIFICAR TAL ARGUMENTO � PRECISO
CRIAR UM VETOR COM BASTANTE LINHAS.*/
