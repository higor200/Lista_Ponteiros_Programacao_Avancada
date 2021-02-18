#include <stdio.h>
#include <stdlib.h>

/*Uma função é um conjunto de instruções armazenadas na memória.
Assim, podemos acessar uma função pode meio de um ponteiro que "aponte" para onde a função está na memória.*/

//EXEMPLO
float soma(int a, int b){
    return (a);
}
int main()
{
    int x, y,z;
    //tipo de retorno, nome da variável, paramentros
    int (*p) (int,int);
    printf("INFORME DOIS NUMEROS: ");
    scanf("%d %d", &x, &y);

    p=soma;
    z=p(x,y);
    printf("Soma = %d", z);

    return 0;
}
