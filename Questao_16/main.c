#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float comparar(const void *x, const void *y){
    // A função comparar recebe dois ponteiros constantes
    return (int) (*(int *)x - * (int *)y);
    /*
        1. A função irá retornar um valor maior do que zero: se o primeiro valor for maior do que o segundo.
        2. A função irá retornar um valor menor do que zero: se o primeiro valor for menor do que o segundo.
        3. A função irá retornar Zero: se os valores forem iguais.
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
    //INSERINDO VALORES NO VETOR DE FORMA ALEATÓRIA ENTRE -10.000 E 10.000
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

//CONCLUSÃO
/* A PARTIR DE ALGUNS TESTES É POSSÍVEL OBSERVAR QUE O TEMPO DE OPERAÇÃO COM O USO DA FUNÇÃO qsort() É MUITO
MENOR EM COMPARAÇÃO COM A FUNÇÃO DE ORDENAÇÃO CRIADA PELO ALUNO. PORÉM, PARA VERIFICAR TAL ARGUMENTO É PRECISO
CRIAR UM VETOR COM BASTANTE LINHAS.*/
