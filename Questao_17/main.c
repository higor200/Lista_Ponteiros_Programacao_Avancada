#include <stdio.h>
#include <stdlib.h>

void somarVetor(int *vetorA, int *vetorB, int *vetorC, int n){
   for(int i = 0; i < n; i++){
    *(vetorC+i) = *(vetorA+i) + *(vetorB+i);
    }
}

int main(){

    int n;
    printf("INFORME O NUMERO DE LINHAS DOS VETORES: ");
    scanf("%d", &n);

    int vetorA[n], vetorB[n], vetorC[n], i;
    vetorA[n] = malloc(n*sizeof(float));
    vetorB[n] = malloc(n*sizeof(float));
    vetorC[n] = malloc(n*sizeof(float));

    for(i = 0; i<n; i++){
        printf("INFORME UM NUMERO PARA O VETOR (A): ");
        scanf("%d", &vetorA[i]);
    }
    printf("\n----------------------------------------");
    printf("\n");
    for( i= 0; i<n; i++){
        printf("INFORME UM NUMERO PARA O VETOR (B): ");
        scanf("%d", &vetorB[i]);
    }


    somarVetor(vetorA, vetorB, vetorC, n);

    printf("\n");

    printf("A SOMA DOS VETORES (A+B) EH: ");
    printf("\n");
    for(int i = 0; i < n; i++){
        printf("%d", *(vetorC+i));
        printf("\n");
    }
    free(vetorA);
    free(vetorB);
    free(vetorC);

return 0;
}
