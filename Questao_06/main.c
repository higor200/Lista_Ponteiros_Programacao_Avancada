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
        printf("\ni = %d ",i); //Deve mostrar numeros de 0 at� 5
        printf("vet[%d] = %.1f ",i, vet[i]); //Deve mostrar numeros de [0] at� [5]
        printf("*(f + %d) = %.1f ",i, *(f+i)); // Faz o c�lculo do endere�o (f+i) e depois recupera o valor que est� no endere�o.
        printf("&vet[%d] = %X ",i, &vet[i]); // Exibe o endere�o do vet[i]
        printf("(f + %d) = %X ",i, f+i); // Faz o c�lculo do endere�o (f+i) e depois exibe o endere�o.
    }
    return 0;
}
