#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirMatriz(int **mat, int linha, int coluna){
    int i, j;
    for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            printf("%d ", mat[i][j]);
    }
    printf("\n");
    }
}
void multiplicarMatrizes(int **matA, int **matB, int **matC, int nlA, int ncAlB, int ncB){
    int somatorioLinhaColuna = 0;
    for (int i = 0; i < nlA; i++){
        for (int j = 0; j < ncB; j++){
            for (int k = 0; k < ncAlB; k++){
                somatorioLinhaColuna = somatorioLinhaColuna + matA[i][k] * matB [k][j];
            }
            matC[i][j] = somatorioLinhaColuna;
            somatorioLinhaColuna = 0;
        }
    }
}

int main()
{
    //Sorteio aleatório entre -5 e 10
    int nlA, ncAlB, ncB, i, j, min = -10, max = 20;
    int **matA, **matB, **matC;

    printf("INFORME O NUMERO DE LINHAS DA MATRIZ A: ");
    scanf("%d", &nlA);

    printf ("INFORME O NUMERO DE COLUNAS DA MATRIZ A (NUMERO DE LINHAS DA MATRIZ B): ");
    scanf("%d", &ncAlB);

    printf ("INFORME O NUMERO DE COLUNAS DA MATRIZ B: ");
    scanf ("%d", &ncB);

    //ALOCACAO DINAMICA DA MATIZ A
    matA = malloc(nlA * sizeof(int*));
    matA[0] = malloc(nlA * ncAlB * sizeof(int));
    for(i = 1; i < nlA; i++){
        matA[i] = matA[i - 1] + ncAlB;
    }
    //ALOCACAO DINAMICA DA MATIZ B
    matB = malloc(ncAlB * sizeof(int*));
    matB[0] = malloc(ncAlB * ncB * sizeof(int));
    for(i = 1; i < ncAlB; i++){
       matB[i] = matB[i - 1] + ncB;
    }
    //ALOCACAO DINAMICA DA MATIZ B
    matC = malloc(nlA * sizeof(int*));
    matC[0] = malloc(nlA * ncB * sizeof(int));
    for(int i=1; i < nlA; i++){
       matC[i] = matC[i - 1] + ncB;
    }

    //INSERINDO VALORES ALEATÓRIOS ENTRE -5 E 10 NA MATRIZ A
    srand(time(NULL));
    for (i = 0; i < nlA; i++){
        for ( j = 0; j < ncAlB; j++){
            matA[i][j] = rand() % max + min;
        }
    }

    //INSERINDO VALORES ALEATÓRIOS ENTRE -5 E 10 NA MATRIZ B
    for (i = 0; i < ncAlB; i++){
        for (j = 0; j < ncB; j++){
            matB[i][j] = rand() % max + min;
        }
    }

    //INSERINDO VALORES DE C ATRAVEZ DA MULTIPLICACAO ENTRE AS MATIZES: A E B.
    multiplicarMatrizes (matA, matB, matC, nlA, ncAlB, ncB);

    //IMPRIMINDO A MATRIZ A
    printf ("\nMATRIZ A: \n");
    imprimirMatriz(matA, nlA, ncAlB);
    printf ("------------------\n");

    //IMPRIMINDO A MATRIZ B
    printf ("MATRIZ B: \n");;
    imprimirMatriz(matB, ncAlB, ncB);
    printf ("------------------\n");

    //IMPRIMINDO A MATRIZ C
    printf ("MATRIZ C: \n");;
    imprimirMatriz(matC, nlA, ncB);
    printf ("------------------\n");


    free(matA[0]);
    free(matA);

    free(matB[0]);
    free(matB);

    free (matC[0]);
    free (matC);

    return(0);

}

