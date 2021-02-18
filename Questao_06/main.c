#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(int i = 0; i <= 4; i++ ){
        printf("\ni = %d ",i); //Deve mostrar numeros de 0 até 5
        printf("vet[%d] = %.1f ",i, vet[i]); //Deve mostrar numeros de [0] até [5]
        printf("*(f + %d) = %.1f ",i, *(f+i)); // Faz o cálculo do endereço (f+i) e depois recupera o valor que está no endereço.
        printf("&vet[%d] = %X ",i, &vet[i]); // Exibe o endereço do vet[i]
        printf("(f + %d) = %X ",i, f+i); // Faz o cálculo do endereço (f+i) e depois exibe o endereço.
    }
    return 0;
}
