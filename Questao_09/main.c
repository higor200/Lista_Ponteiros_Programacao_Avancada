#include <stdio.h>
#include <stdlib.h>

int main()
{
        int vet[] = {4,9,13};
        int i;

        // ESSE PROGRAMA FAZ O CALCULO DO ENDEREÇO E RECUPERA O CONTEÚDO DELE.
        for(i =0; i < 3; i++){
            printf("%d ", *(vet+i));
        }
        printf("\n");
        // ESSE PROGRAMA FAZ O CALCULO DO ENDEREÇO E EXIBE ELE.

        for(i =0; i < 3; i++){
            printf("%X ", vet+i);
        }

    return 0;
}
